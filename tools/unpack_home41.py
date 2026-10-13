#!/usr/bin/env python3
"""Pokémon HOME 4.1.0 read-only RomFS -> mirrored Unpack tree.

Run from the repository root:
  python tools/unpack_home41.py --root . --out Unpack --dry-run
  python tools/unpack_home41.py --root . --out Unpack --kind pml --resume
  python tools/unpack_home41.py --root . --out Unpack --all --resume
  python tools/unpack_home41.py --root . --out Unpack --verify --strict

Output names and statuses: docs/UNPACK_OUTPUT_SPEC.md.
This does not edit original resources. Python 3.10+, standard library.
"""
from __future__ import annotations

import argparse
import csv
import gzip
import hashlib
import json
import os
import struct
import sys
import tempfile
from collections import Counter
from pathlib import Path

from export_home41_resources import fbs_details, layout_sections, safe_member
from home41_bntx_to_png import decode_bntx
from home41_p2_pml_readonly import payload, records
from home41_romfs_core import ahtb_labels, dat_lines, sarc_members
from home41_extra_formats import Reflection, bfbs_to_fbs, decode_bnk, decode_bffnt, decode_bnsh, decode_akpk
from home41_tables import decode_grammar, grammar_csv_rows, decode_item_hash_index, decode_form_storage_index
from home41_reflection_decode import decode_reflected_scalar_vector_tables
from home41_pokedex_item import (
    decode_pokemon_test, decode_pokemon_valid, decode_pokedex_form,
    decode_pokedex_shape, decode_pokedex_sugata, decode_item_data,
    join_item_hash, pokemon_key_crosswalk,
)

NCA = "57b83ea8c0af21ef26e2519b9580b373_NCA"
SOURCE_PREFIX = NCA + "/1/"
PARSER_VERSION = "mirror-0.4.0"
MAX_SOURCE = 128 * 1024 * 1024
MAX_EXPANDED = 96 * 1024 * 1024
COLS = [
    "source_path", "source_size", "source_sha256", "detected_format",
    "parser", "parser_version", "status", "outputs", "output_sha256",
    "records", "warning", "error", "collision_fallback",
]


def digest(blob: bytes) -> str:
    return hashlib.sha256(blob).hexdigest()


def hash_file(path: Path) -> str:
    state = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            state.update(block)
    return state.hexdigest()


def json_bytes(value) -> bytes:
    return (json.dumps(value, ensure_ascii=False, indent=2, sort_keys=True) + "\n").encode("utf-8")


def csv_bytes(rows, fields):
    import io
    buf = io.StringIO(newline="")
    writer = csv.DictWriter(buf, fieldnames=fields, extrasaction="ignore")
    writer.writeheader()
    writer.writerows(rows)
    return buf.getvalue().encode("utf-8-sig")


def check_in_directory(root: Path, child: Path) -> None:
    if not child.is_relative_to(root):
        raise ValueError("destination escapes output directory: " + str(child))


def save_atomic(path: Path, blob: bytes, out: Path) -> None:
    check_in_directory(out, path)
    path.parent.mkdir(parents=True, exist_ok=True)
    if any(p.is_symlink() for p in (path, *path.parents) if p == out or out in p.parents):
        raise ValueError("output symlink refused: " + str(path))
    fd, tmp = tempfile.mkstemp(prefix=".unpack-", dir=path.parent)
    try:
        with os.fdopen(fd, "wb") as handle:
            handle.write(blob)
            handle.flush()
            os.fsync(handle.fileno())
        os.replace(tmp, path)
    finally:
        if os.path.exists(tmp):
            os.unlink(tmp)


def type_for(relative: Path) -> str:
    name = relative.name.lower()
    suffix = relative.suffix.lower()
    rel = relative.as_posix().lower()
    if rel in (
        "bin/pokemon/pokemon_list/pokemon_test_list.bin",
        "bin/pokemon/pokemon_list/pokemon_valid_list.bin",
        "bin/appli/mtt_pokedex/bin/form_data.bin",
        "bin/appli/mtt_pokedex/bin/shape_data.bin",
        "bin/appli/mtt_pokedex/bin/sugata.bin",
        "bin/pml/item/item.dat",
    ):
        return "pokemon"
    if (rel.startswith("bin/message/grammar/") and suffix == ".dat"
            or rel == "bin/pml/item/item_hash_to_index.dat"
            or rel == "bin/hayabusa/appli/pokedex/res_table/pokedex_form_storage_index_table.bin"):
        return "tables"
    if suffix == ".wazabin" or suffix == ".perbin":
        return "pml"
    if suffix in (".tbl", ".dat"):
        return "messages"
    if suffix == ".arc":
        return "archives"
    if suffix == ".bntx" or name.endswith(".bntx.gz"):
        return "images"
    return "other"


def output_name(relative: Path) -> Path | None:
    name = relative.name
    lower = name.lower()
    suffix = relative.suffix.lower()
    if lower.endswith(".bntx.gz"):
        new = name[:-3]  # actual gunzip -> .bntx (not fake PNG)
    elif suffix in (".dat",):
        new = name[: -len(relative.suffix)] + ".csv"
    elif suffix in (".tbl", ".arc", ".perbin", ".wazabin"):
        new = name[: -len(relative.suffix)] + ".json"
    elif suffix == ".bntx":
        new = name[: -len(relative.suffix)] + ".png"
    elif suffix in (".bfbs", ".prmb", ".bnk", ".pck", ".bnsh", ".bffnt", ".bin"):
        new = name[: -len(relative.suffix)] + ".json"
    else:
        return None
    return relative.with_name(new)


def enumerate_sources(repo: Path):
    folder = repo / NCA / "1"
    if not folder.is_dir():
        raise ValueError("RomFS directory missing: " + str(folder))
    return [p for p in sorted(folder.rglob("*"))
            if p.is_file() and not p.is_symlink()
            and all(not q.is_symlink() for q in list(p.parents) if q == folder or folder in q.parents)]


def plan_paths(sources, repo: Path):
    """Collision-safe path plan; fallback to full source suffix only if needed."""
    occupied = {}
    plans, collisions = {}, []
    for source in sources:
        rel = source.relative_to(repo)
        target = output_name(rel)
        if target is None:
            plans[rel.as_posix()] = {"main": None, "collision_fallback": False}
            continue
        first = target
        key = first.as_posix().casefold()
        fallback = False
        if key in occupied:
            target = rel.with_name(rel.name + (".csv" if rel.suffix.lower() == ".dat" else ".json"))
            fallback = True
            key = target.as_posix().casefold()
            collisions.append({"path": rel.as_posix(), "collides_with": occupied[first.as_posix().casefold()],
                               "fallback": target.as_posix()})
            if key in occupied:
                raise ValueError("output name collision cannot be resolved: " + rel.as_posix())
        occupied[key] = rel.as_posix()
        plans[rel.as_posix()] = {"main": target.as_posix(), "collision_fallback": fallback}
    return plans, collisions


class Sink:
    """Stage an entire source file's outputs before modifying published files."""
    def __init__(self, out: Path):
        self.out = out
        self.outputs = []
        self._pending = []
        self._seen = set()

    def put(self, relative: Path | str, content: bytes):
        rel = Path(relative)
        if rel.is_absolute() or ".." in rel.parts or not rel.parts:
            raise ValueError("unsafe destination path: " + str(relative))
        key = rel.as_posix().casefold()
        if key in self._seen:
            raise ValueError("duplicate outputs for source file: " + rel.as_posix())
        self._seen.add(key)
        check_in_directory(self.out, self.out / rel)
        self._pending.append((rel, content))
        self.outputs.append({"path": rel.as_posix(), "sha256": digest(content), "size": len(content)})

    def commit(self):
        # Parsing failures before this step leave previous outputs intact.
        # Individual file replacement is atomic; a disk failure during a
        # multi-file commit is still visible as a failed manifest record.
        for rel, content in self._pending:
            save_atomic(self.out / rel, content, self.out)
        self._pending.clear()
        return self.outputs


def read_file(path: Path):
    if path.stat().st_size > MAX_SOURCE:
        raise ValueError("source file exceeds 128 MiB parser limit")
    return path.read_bytes()


def decompressed(path: Path):
    with gzip.open(path, "rb") as stream:
        value = stream.read(MAX_EXPANDED + 1)
    if len(value) > MAX_EXPANDED:
        raise ValueError("decompressed BNTX exceeds 96 MiB")
    if not value.startswith(b"BNTX"):
        raise ValueError("gzip payload is not BNTX")
    return value


def export_png(bntx: bytes, prefix: Path, sink: Sink):
    decoded = 0
    unresolved = []
    textures = list(decode_bntx(bntx))
    if not textures:
        raise ValueError("BNTX has no texture records")
    multiple = len(textures) != 1
    for meta, png in textures:
        if png is None:
            unresolved.append(meta.get("reason", "unsupported texture"))
            continue
        if not png.startswith(b"\x89PNG\r\n\x1a\n"):
            raise ValueError("invalid PNG from decoder")
        target = (prefix / ("texture_%03d.png" % meta["texture_index"])
                  if multiple else prefix.with_suffix(".png"))
        sink.put(target, png)
        decoded += 1
    return decoded, unresolved


def export_one(source: Path, repo: Path, out: Path, main: Path | None):
    relative = source.relative_to(repo)
    category = type_for(source.relative_to(repo / NCA / "1"))
    suffix = source.suffix.lower()
    name = source.name.lower()
    sink = Sink(out)
    warnings = []
    count = 0
    if main is None:
        return "unsupported", 0, ["format parser not implemented"], sink.commit()

    if category == "pokemon":
        data = read_file(source)
        if name == "pokemon_test_list.bin":
            doc = decode_pokemon_test(data)
            other = source.with_name("pokemon_valid_list.bin")
            form_path = repo / NCA / "1/bin/appli/mtt_pokedex/bin/form_data.bin"
            shape_path = repo / NCA / "1/bin/appli/mtt_pokedex/bin/shape_data.bin"
            docs = [
                doc, decode_pokemon_valid(read_file(other)),
                decode_pokedex_form(read_file(form_path)),
                decode_pokedex_shape(read_file(shape_path)),
            ]
            crosswalk = pokemon_key_crosswalk(*docs)
            doc["join_dependencies"] = {
                p.relative_to(repo).as_posix(): hash_file(p)
                for p in (other, form_path, shape_path)
            }
            doc["crosswalk_counts"] = {k: v for k, v in crosswalk.items() if k != "rows"}
            sink.put(main.with_name(main.stem + ".crosswalk.csv"),
                     csv_bytes(crosswalk["rows"], list(crosswalk["rows"][0])))
        elif name == "pokemon_valid_list.bin":
            doc = decode_pokemon_valid(data)
        elif name == "form_data.bin":
            doc = decode_pokedex_form(data)
        elif name == "shape_data.bin":
            doc = decode_pokedex_shape(data)
        elif name == "sugata.bin":
            doc = decode_pokedex_sugata(data)
        elif name == "item.dat":
            doc = decode_item_data(data)
            aux_path = source.with_name("item_hash_to_index.dat")
            associated = decode_item_hash_index(read_file(aux_path))
            joined = join_item_hash(doc, associated)
            doc["join_dependencies"] = {aux_path.relative_to(repo).as_posix(): hash_file(aux_path)}
            doc["hash_join_summary"] = {
                k: v for k, v in joined.items() if k != "rows"
            }
            sink.put(main.with_name(main.stem + ".id_lookup.csv"),
                     csv_bytes(doc["index_rows"], list(doc["index_rows"][0])))
            sink.put(main.with_name(main.stem + ".aux_pairs.csv"),
                     csv_bytes(doc["aux_pairs"], list(doc["aux_pairs"][0])))
            sink.put(main.with_name(main.stem + ".hash_join.csv"),
                     csv_bytes(joined["rows"], list(joined["rows"][0])))
            sink.put(main, csv_bytes(doc["record_rows"], list(doc["record_rows"][0])))
            sink.put(main.with_suffix(".json"), json_bytes({
                k: v for k, v in doc.items()
                if k not in ("index_rows", "aux_pairs", "record_rows")
            }))
            return "partial", doc["record_count"], [
                "48-byte item fields and auxiliary index pair meanings unresolved",
                "hash join mismatches: " + str(joined["presence_mismatch_rows"])
            ], sink.commit()
        else:
            raise ValueError("unhandled pokemon data format")
        rows = doc["rows"]
        sink.put(main.with_suffix(".csv"),
                 csv_bytes(rows, list(rows[0]) if rows else ["row"]))
        if name == "shape_data.bin":
            sink.put(main.with_name(main.stem + ".shape_pairs.csv"),
                     csv_bytes(doc["shape_pairs"], list(doc["shape_pairs"][0])))
        sink.put(main, json_bytes({k: v for k, v in doc.items()
                                   if k not in ("rows", "shape_pairs")}))
        return "partial", len(rows), [
            "fixed records and cross-file key joins verified; field semantics not fully known"
        ], sink.commit()

    if category == "tables":
        raw = read_file(source)
        if "grammar" in relative.parts:
            doc = decode_grammar(raw)
            sink.put(main, csv_bytes(doc["terms"], ["index", "absolute_offset", "utf16_bytes", "text"]))
            sink.put(main.with_name(main.stem + ".selectors.csv"),
                     csv_bytes(grammar_csv_rows(doc),
                               ["term_index", "selector_column", "selector_raw_u8", "resolved_text"]))
            sink.put(main.with_suffix(".json"), json_bytes(doc))
            return "partial", doc["term_count"], [
                "UTF-16 terms and selector matrix decoded; grammatical selector meanings unverified"], sink.commit()
        if name == "item_hash_to_index.dat":
            doc = decode_item_hash_index(raw)
            sink.put(main, csv_bytes(doc["rows"],
                                    ["row", "hash_u64_hex", "index_candidate_u32", "reserved_u32"]))
            sink.put(main.with_suffix(".json"), json_bytes({
                k: v for k, v in doc.items() if k != "rows"}))
            return "partial", doc["count"], [
                "hash and index bytes recovered; index consumer not traced"], sink.commit()
        if name == "pokedex_form_storage_index_table.bin":
            doc = decode_form_storage_index(raw)
            sink.put(main, json_bytes({k: v for k, v in doc.items() if k != "rows"}))
            sink.put(main.with_suffix(".csv"),
                     csv_bytes(doc["rows"],
                               ["row", "packed_value_u32", "packed_hex", "ordinal_u16"]))
            return "partial", doc["count"], [
                "form table record layout verified; packed key meaning unverified"], sink.commit()
        raise ValueError("unrecognized table category")

    if suffix == ".bfbs":
        doc = Reflection(read_file(source)).extract()
        doc["source"] = relative.as_posix()
        sink.put(main, json_bytes(doc))
        sink.put(main.with_suffix(".fbs"), bfbs_to_fbs(doc).encode("utf-8"))
        return "converted", sum(len(x["fields"]) for x in doc["objects"]), warnings, sink.commit()

    if suffix == ".bnk":
        blob = read_file(source)
        doc, media = decode_bnk(blob)
        doc["source"] = relative.as_posix()
        sink.put(main, json_bytes(doc))
        if media:
            prefix = Path("_audio") / relative
            for row in doc["embedded_media_index"]:
                if row["bytes"] > MAX_SOURCE:
                    warnings.append("oversized WEM " + str(row["wem_id"]))
                    continue
                start = media["offset"] + row["offset"]
                chunk = blob[start:start + row["bytes"]]
                if not chunk.startswith(b"RIFF"):
                    warnings.append("WEM without RIFF " + str(row["wem_id"]))
                    continue
                sink.put(prefix / (str(row["wem_id"]) + ".wem"), chunk)
        return ("partial" if warnings else "converted"), len(doc["embedded_media_index"]), warnings, sink.commit()

    if suffix == ".bnsh":
        sink.put(main, json_bytes(decode_bnsh(read_file(source))))
        return "partial", 1, ["shader binary not disassembled"], sink.commit()

    if suffix == ".bffnt":
        doc = decode_bffnt(read_file(source))
        sink.put(main, json_bytes(doc))
        return "partial", len(doc["sections"]), ["font glyphs not converted"], sink.commit()

    if suffix == ".pck":
        sink.put(main, json_bytes(decode_akpk(read_file(source))))
        return "partial", 1, ["package index and WEM extraction not implemented"], sink.commit()

    if suffix == ".prmb":
        doc = fbs_details(read_file(source))
        doc["source"] = relative.as_posix()
        sink.put(main, json_bytes(doc))
        return "partial", len(doc["fields"]), ["FlatBuffers field meaning unverified"], sink.commit()

    if suffix == ".bin" and name == "black_list_main_array.bin":
        schema_file = source.with_suffix(".bfbs")
        if not schema_file.is_file():
            raise ValueError("matching BFBS reflection schema is required")
        reflection = Reflection(read_file(schema_file)).extract()
        doc = decode_reflected_scalar_vector_tables(read_file(source), reflection)
        doc["schema_source"] = schema_file.relative_to(repo).as_posix()
        sink.put(main, json_bytes(doc))
        keys = ["row", *doc["field_types"]]
        sink.put(main.with_suffix(".csv"), csv_bytes(doc["rows"], keys))
        return "converted", doc["count"], warnings, sink.commit()

    if suffix == ".bin" and "zukan_sort_" in name:
        blob = read_file(source)
        if len(blob) % 4: raise ValueError("unaligned u32 sort table")
        rows = [{"row": i, "packed_u32": n, "low16_candidate": n & 65535,
                 "high16_candidate": n >> 16}
                for i, (n,) in enumerate(struct.iter_unpack("<I", blob))]
        sink.put(main.with_suffix(".csv"), csv_bytes(rows, list(rows[0]) if rows else ["row","packed_u32","low16_candidate","high16_candidate"]))
        sink.put(main, json_bytes({"format":"u32 sorting keys", "count":len(rows),
                                  "certainty":"numeric boundaries only; species/form meaning unverified"}))
        return "partial", len(rows), ["sort key bit interpretation unverified"], sink.commit()

    if suffix == ".tbl":
        raw = read_file(source)
        if not raw.startswith(b"AHTB"):
            return "unsupported", 0, ["not an AHTB label table"], sink.commit()
        rows = [{"index": i, "label": label, "hash_fnv64": f"{h:016X}"}
                for i, (label, h) in enumerate(ahtb_labels(raw))]
        sink.put(main, json_bytes(rows))
        return "converted", len(rows), warnings, sink.commit()

    if suffix == ".dat":
        twin = source.with_suffix(".tbl")
        if twin.is_file():
            twin_data = read_file(twin)
            if not twin_data.startswith(b"AHTB"):
                return "unsupported", 0, ["paired table is not AHTB"], sink.commit()
            names = ahtb_labels(twin_data)
            lines = dat_lines(read_file(source))
            if len(names) == len(lines) + 1 and names[-1][0].lower().endswith("max"):
                names = names[:-1]
            if len(names) != len(lines):
                raise ValueError("AHTB/DAT text and label counts disagree")
            rows = [
                {"index": line["index"], "label": label, "hash_fnv64": f"{fnv:016X}",
                 "text": line["text"], "flags": line["flags"], "source_offset": line["offset"]}
                for (label, fnv), line in zip(names, lines)
            ]
            sink.put(main, csv_bytes(rows, ["index", "label", "hash_fnv64", "text", "flags", "source_offset"]))
            return "converted", len(rows), warnings, sink.commit()
        if "sort_string" in relative.parts:
            raw = read_file(source)
            if len(raw) % 2:
                raise ValueError("sort table has odd byte length")
            rows = [{"index": i, "value_u16": x[0]}
                    for i, x in enumerate(struct.iter_unpack("<H", raw))]
            sink.put(main, csv_bytes(rows, ["index", "value_u16"]))
            return "partial", len(rows), ["sort index semantic meaning unverified"], sink.commit()
        return "unsupported", 0, ["DAT has no matching AHTB schema"], sink.commit()

    if suffix == ".perbin":
        data = read_file(source)
        arrays = records(data)
        parsed = []
        for i, table in enumerate(arrays):
            vals = payload(data, table)
            parsed.append({"record_index": i, "fields": [
                {"field_index": j, "raw_hex": val}
                for j, val in enumerate(vals) if val is not None
            ]})
        sink.put(main, json_bytes({"source": relative.as_posix(), "record_count": len(arrays),
                                   "certainty": "structure_only", "records": parsed}))
        return "partial", len(arrays), ["FlatBuffers fields have unverified business meaning"], sink.commit()

    if suffix == ".wazabin" or name.endswith(("_lyt.bin", "_uikit.bin")):
        report = fbs_details(read_file(source))
        sink.put(main, json_bytes(report))
        return "partial", len(report["fields"]), ["FlatBuffers field types are candidates"], sink.commit()

    if suffix == ".bin" and name.startswith("grow_"):
        raw = read_file(source)
        if len(raw) % 4:
            raise ValueError("growth data is not aligned to u32")
        rows = [{"index": i, "value_u32": x[0]}
                for i, x in enumerate(struct.iter_unpack("<I", raw))]
        sink.put(main, json_bytes({"certainty": "u32_candidate", "rows": rows}))
        return "partial", len(rows), ["growth array interpretation unverified"], sink.commit()

    if suffix == ".bin":
        try:
            doc = fbs_details(read_file(source))
        except (ValueError, struct.error, IndexError):
            return "unsupported", 0, ["untyped binary array without verified schema"], sink.commit()
        doc["source"] = relative.as_posix()
        sink.put(main, json_bytes(doc))
        return "partial", len(doc["fields"]), ["FlatBuffers schema unavailable"], sink.commit()

    if suffix == ".arc":
        data = read_file(source)
        members = sarc_members(data)
        sink.put(main, json_bytes({"source": relative.as_posix(), "members": members}))
        count = len(members)
        raw_prefix = Path("_raw_members") / relative
        nested_prefix = main.with_suffix("")
        for info in members:
            member_path = safe_member(info["name"])
            member = data[info["offset"]:info["offset"] + info["bytes"]]
            sink.put(raw_prefix / member_path, member)
            if member.startswith((b"FLYT", b"FLAN")):
                try:
                    sections = layout_sections(member)
                    sink.put(nested_prefix / member_path.with_suffix(".json"),
                             json_bytes({"member": info["name"], "sections": sections}))
                except (ValueError, struct.error) as exc:
                    warnings.append(info["name"] + ": unparsed layout: " + str(exc))
            if member.startswith(b"BNTX"):
                try:
                    n, skipped = export_png(member, nested_prefix / member_path, sink)
                    if skipped:
                        warnings.append(info["name"] + ": " + "; ".join(skipped[:3]))
                except (ValueError, struct.error, IndexError) as exc:
                    warnings.append(info["name"] + ": unparsed BNTX: " + str(exc))
        return ("partial" if warnings else "converted"), count, warnings, sink.commit()

    if name.endswith(".bntx.gz") or suffix == ".bntx":
        data = decompressed(source) if name.endswith(".gz") else read_file(source)
        if not data.startswith(b"BNTX"):
            raise ValueError("not a BNTX texture container")
        if name.endswith(".gz"):
            sink.put(main, data)
            image_prefix = main
        else:
            image_prefix = main.with_suffix(".bntx")
        try:
            count, skipped = export_png(data, image_prefix, sink)
        except (ValueError, struct.error, IndexError) as exc:
            count, skipped = 0, ["BNTX PNG decoder could not parse pixels: " + str(exc)]
        if skipped:
            warnings.extend(skipped)
        if not count:
            warnings.append("BNTX kept; PNG format unsupported")
        return ("partial" if warnings or count == 0 else "converted"), count, warnings, sink.commit()

    return "unsupported", 0, ["format parser not implemented"], sink.commit()


def selected(path: Path, repo: Path, args) -> bool:
    rel = path.relative_to(repo)
    if args.file:
        name = args.file.replace("\\", "/").lstrip("./")
        if name.startswith("1/"):
            name = NCA + "/" + name
        if name.startswith("bin/") or name.startswith("system_resource/"):
            name = SOURCE_PREFIX + name
        return rel.as_posix() == name
    if args.kind in ("all", None):
        return True
    return type_for(path.relative_to(repo / NCA / "1")) == args.kind


def load_manifest(path: Path):
    if not path.is_file():
        return {}
    data = json.loads(path.read_text(encoding="utf-8"))
    rows = data["files"] if isinstance(data, dict) else data
    return {row["source_path"]: row for row in rows}


def valid_cached(row, source, out):
    if row.get("parser_version") != PARSER_VERSION or row.get("source_sha256") != hash_file(source):
        return False
    if row.get("status") not in ("converted", "partial"):
        return False
    return all((out / f["path"]).is_file() and hash_file(out / f["path"]) == f["sha256"]
               for f in row.get("outputs", [])) and bool(row.get("outputs"))


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."), help="repository root")
    p.add_argument("--out", type=Path, default=Path("Unpack"), help="output root")
    task = p.add_mutually_exclusive_group()
    task.add_argument("--file", help="one RomFS file, relative to repository or RomFS")
    task.add_argument("--kind", choices=["all", "pml", "messages", "archives", "images", "other", "tables", "pokemon"])
    task.add_argument("--all", action="store_true", help="run all RomFS formats")
    p.add_argument("--dry-run", action="store_true", help="plan without writing")
    p.add_argument("--resume", action="store_true", help="reuse verified outputs")
    p.add_argument("--verify", action="store_true", help="verify manifest only; no writes")
    p.add_argument("--strict", action="store_true", help="fail on not-run/failed records")
    args = p.parse_args(argv)
    try:
        repo = args.root.resolve(strict=True)
        out = (repo / args.out).resolve()
        source_root = (repo / NCA / "1").resolve(strict=True)
        if not source_root.is_dir():
            raise ValueError("source RomFS not found")
        if out == source_root or source_root in out.parents or out in source_root.parents:
            raise ValueError("output must not overlap source RomFS")
        sources = enumerate_sources(repo)
        plan, collisions = plan_paths(sources, repo)
        chosen = [x for x in sources if selected(x, repo, args)]
        if args.file and not chosen:
            raise ValueError("requested source file not found")
        print(f"RomFS files: {len(sources)}; selected: {len(chosen)}; primary collisions: {len(collisions)}")
        if args.dry_run:
            print(json.dumps({"sample_paths": [
                {"source": p.relative_to(repo).as_posix(),
                 "output": plan[p.relative_to(repo).as_posix()]["main"]}
                for p in chosen[:12]], "collisions": collisions[:30]}, ensure_ascii=False, indent=2))
            return 0
        manifest_path = out / "_meta" / "manifest.json"
        prior = load_manifest(manifest_path)
        if args.verify:
            errors = []
            # Source-scoped verification is intentional: Git holds readable
            # results, while Release contains bulk BNTX and SARC raw members.
            # --verify --all remains strict for a complete extracted Release.
            for item in chosen:
                key = item.relative_to(repo).as_posix()
                row = prior.get(key)
                if row is None:
                    errors.append("missing manifest: " + key)
                    continue
                if row["source_sha256"] != hash_file(item):
                    errors.append("source SHA differs: " + key)
                if args.strict and row["status"] in ("failed", "not_run"):
                    errors.append("incomplete: " + key)
                for obj in row.get("outputs", []):
                    target = out / obj["path"]
                    if not target.is_file() or hash_file(target) != obj["sha256"]:
                        errors.append("output SHA differs: " + obj["path"])
            print(json.dumps({"verified_files": len(chosen), "problems": len(errors),
                              "examples": errors[:50]}, ensure_ascii=False, indent=2))
            return 1 if errors else 0
        out.mkdir(parents=True, exist_ok=True)
        rows = {}
        failures = 0
        chosen_keys = {p.relative_to(repo).as_posix() for p in chosen}
        for i, item in enumerate(sources, 1):
            rel = item.relative_to(repo).as_posix()
            old = prior.get(rel, {})
            if rel not in chosen_keys:
                rows[rel] = old or {"source_path": rel, "status": "not_run"}
                continue
            try:
                source_hash = hash_file(item)
                info = plan[rel]
                if args.resume and valid_cached(old, item, out):
                    rows[rel] = old
                    continue
                status, n, warning, outputs = export_one(
                    item, repo, out, Path(info["main"]) if info["main"] else None)
                row = {"source_path": rel, "source_size": item.stat().st_size,
                       "source_sha256": source_hash,
                       "detected_format": type_for(item.relative_to(source_root)),
                       "parser": "tools/unpack_home41.py", "parser_version": PARSER_VERSION,
                       "status": status, "outputs": outputs, "records": n,
                       "warning": "; ".join(warning), "error": "",
                       "collision_fallback": info["collision_fallback"]}
            except (OSError, ValueError, struct.error, EOFError, UnicodeError, IndexError) as e:
                failures += 1
                row = {"source_path": rel, "source_size": item.stat().st_size,
                       "source_sha256": hash_file(item),
                       "detected_format": type_for(item.relative_to(source_root)),
                       "parser": "tools/unpack_home41.py", "parser_version": PARSER_VERSION,
                       "status": "failed", "outputs": [], "records": 0,
                       "warning": "", "error": str(e), "collision_fallback": plan[rel]["collision_fallback"]}
            rows[rel] = row
            if i % 500 == 0:
                print(f"Processed source {i}/{len(sources)} ({rel}); new failures={failures}", flush=True)
        # Fill missing source hashes even for untouched entries: complete source inventory.
        for item in sources:
            key = item.relative_to(repo).as_posix()
            row = rows[key]
            if not row.get("source_sha256"):
                row.update({"source_size": item.stat().st_size, "source_sha256": hash_file(item),
                            "detected_format": type_for(item.relative_to(source_root)),
                            "parser": "tools/unpack_home41.py", "parser_version": PARSER_VERSION,
                            "outputs": [], "records": 0, "warning": "", "error": "",
                            "collision_fallback": plan[key]["collision_fallback"]})
        ordered = [rows[p.relative_to(repo).as_posix()] for p in sources]
        stats = Counter(row["status"] for row in ordered)
        meta = Path("_meta")
        save_atomic(out / meta / "source_manifest.csv",
                    csv_bytes([{"source_path": row["source_path"], "source_size": row["source_size"],
                                "source_sha256": row["source_sha256"],
                                "detected_format": row["detected_format"]}
                               for row in ordered],
                              ["source_path", "source_size", "source_sha256", "detected_format"]), out)
        flat = []
        for row in ordered:
            record = dict(row)
            record["outputs"] = json.dumps([x["path"] for x in row["outputs"]], ensure_ascii=False)
            record["output_sha256"] = json.dumps([x["sha256"] for x in row["outputs"]])
            flat.append(record)
        save_atomic(out / meta / "manifest.csv", csv_bytes(flat, COLS), out)
        save_atomic(manifest_path, json_bytes({"version": "4.1.0", "parser_version": PARSER_VERSION,
                                               "files": ordered}), out)
        save_atomic(out / meta / "unsupported.csv",
                    csv_bytes([x for x in flat if x["status"] == "unsupported"], COLS), out)
        save_atomic(out / meta / "errors.csv",
                    csv_bytes([x for x in flat if x["status"] == "failed"], COLS), out)
        save_atomic(out / meta / "summary.json",
                    json_bytes({"source_files": len(sources), "selected": len(chosen),
                                "status_counts": dict(stats), "primary_collision_count": len(collisions),
                                "total_outputs": sum(len(x["outputs"]) for x in ordered),
                                "romfs_bytes": sum(x["source_size"] for x in ordered),
                                "parser_version": PARSER_VERSION}), out)
        print(json.dumps({"source_files": len(sources), "status": dict(stats),
                          "failures_this_run": failures}, ensure_ascii=False))
        return 1 if failures or (args.strict and stats.get("not_run", 0)) else 0
    except (OSError, ValueError, json.JSONDecodeError) as e:
        p.error(str(e))


if __name__ == "__main__":
    sys.exit(main())
