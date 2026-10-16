#!/usr/bin/env python3
"""HOME 4.1.0: reproducible ROMFS subset export for HOME-Live-Plugin-CHS/docs.

The source RomFS and committed Unpack/ assets are always read-only.
Uses only standard-library parsers already present in PokeHome_Resources.
No HOME account, game state, or Nintendo network access.
"""
from __future__ import annotations

import argparse
import csv
import gzip
import hashlib
import io
import json
import re
import shutil
import struct
import subprocess
import tarfile
from collections import Counter
from pathlib import Path

from home41_p2_pml_readonly import payload, records, table
from home41_romfs_core import ahtb_labels, dat_lines

NCA = "57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin"
GAMES = ("beluga", "delphis", "hayabusa", "orion", "titan", "ikkaku")
PERSONAL = (*GAMES, "global")
COUNTS = {"beluga": 1109, "delphis": 560, "hayabusa": 1276,
          "orion": 1192, "titan": 1424, "ikkaku": 1445, "global": 1479}
WAZA_COUNTS = {"beluga": 743, "delphis": 827, "hayabusa": 851,
               "orion": 827, "titan": 920, "ikkaku": 921}
STEMS = ("monsname", "zkn_form", "typename", "wazaname", "itemname",
         "tokusei", "seikaku", "ribbon")
EXPECTED = {"personal": 8485, "unique_species_forms": 1479,
            "waza": 5089, "unique_moves": 921}

def file_hash(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()

def write_csv(path: Path, fields, rows):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8-sig", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)

def names(message_root: Path, language: str, stem: str):
    directory = message_root / language / "megaturtle"
    labels = ahtb_labels((directory / (stem + ".tbl")).read_bytes())
    texts = dat_lines((directory / (stem + ".dat")).read_bytes())
    if len(labels) == len(texts) + 1 and labels[-1][0].lower().endswith("_max"):
        labels = labels[:-1]
    if len(labels) != len(texts):
        raise ValueError(f"{language}/{stem}: AHTB/DAT count mismatch")
    return {label: line["text"] for (label, _), line in zip(labels, texts)}

def field(buf: bytes, tbl, index: int, width: int = 1) -> int:
    position, offsets, obj_size = tbl
    if index >= len(offsets) or not offsets[index]:
        return 0
    offset = offsets[index]
    if offset + width > obj_size:
        raise ValueError(f"Field {index} exceeds object")
    return int.from_bytes(buf[position + offset:position + offset + width], "little")

def normalize_source(root: Path):
    source = root / NCA
    unpack = root / "Unpack" / NCA
    if not source.is_dir() or not unpack.is_dir():
        raise FileNotFoundError("Expected original NCA/1/bin AND mirrored Unpack/NCA/1/bin")
    return source, unpack

def create_semantic(source: Path, output: Path):
    msg = source / "message"
    zn = names(msg, "Simp_Chinese", "monsname")
    en = names(msg, "English", "monsname")
    zm = names(msg, "Simp_Chinese", "wazaname")
    em = names(msg, "English", "wazaname")
    forms = names(msg, "Simp_Chinese", "zkn_form")
    types = list(names(msg, "Simp_Chinese", "typename").values())
    if len(types) != 18:
        raise ValueError("Expected 18 type names in decoded table order")

    all_species, all_moves = [], []
    by_species, by_move = {}, {}
    counts, source_files = {}, []
    for game in PERSONAL:
        rel = Path("pml/personal") / (game + "_personal_total.perbin")
        path = source / rel
        raw = path.read_bytes()
        entries = records(raw)
        if len(entries) != COUNTS[game]:
            raise ValueError(f"{game}: expected {COUNTS[game]} personal rows, found {len(entries)}")
        used = set()
        for idx, tbl in enumerate(entries):
            species, form = field(raw, tbl, 0, 2), field(raw, tbl, 1, 2)
            key = species, form
            if key in used:
                raise ValueError(f"{game} duplicated Species/Form: {key}")
            used.add(key)
            t1, t2 = field(raw, tbl, 3), field(raw, tbl, 4)
            if t1 >= 18 or t2 >= 18:
                raise ValueError(f"{game} invalid type ID {t1}/{t2}")
            stats = [field(raw, tbl, j) for j in range(8, 14)]
            row = {
                "game": game, "record_index": idx, "species_id": species, "form_id": form,
                "name_zh": zn.get(f"MONSNAME_{species:03d}", ""),
                "name_en": en.get(f"MONSNAME_{species:03d}", ""),
                "form_zh": forms.get(f"ZKN_FORM_{species:03d}_{form:03d}", ""),
                "resource_flag": field(raw, tbl, 2),
                "type1_id": t1, "type2_id": t2,
                "type1_zh": types[t1], "type2_zh": types[t2],
                "ability1_id": field(raw, tbl, 5, 2),
                "ability2_id": field(raw, tbl, 6, 2),
                "abilityH_id": field(raw, tbl, 7, 2),
                **dict(zip(("hp", "atk", "def", "spa", "spd", "spe"), stats)),
                "gender_raw": field(raw, tbl, 14),
                "height_raw": field(raw, tbl, 17, 2), "weight_raw": field(raw, tbl, 18, 2),
            }
            all_species.append(row)
            by_species.setdefault(key, {})[game] = row
        counts[game] = {"personal": len(entries), "personal_sha256": file_hash(path)}
        source_files.append(rel)

    for game in GAMES:
        for path in sorted((source / "pml/waza" / game).glob("waza????.wazabin")):
            rel = path.relative_to(source)
            raw = path.read_bytes()
            tbl = table(raw, struct.unpack_from("<I", raw, 0)[0])
            move_id = int(path.stem[4:])
            if field(raw, tbl, 0, 4) != move_id:
                raise ValueError(f"Move ID mismatch: {rel}")
            type_id = field(raw, tbl, 2)
            if type_id >= 18:
                raise ValueError(f"Invalid Waza type: {rel}")
            row = {
                "game": game, "move_id": move_id,
                "name_zh": zm.get(f"WAZANAME_{move_id:03d}", ""),
                "name_en": em.get(f"WAZANAME_{move_id:03d}", ""),
                "resource_flag": field(raw, tbl, 1), "type_id": type_id,
                "type_zh": types[type_id], "category_raw": field(raw, tbl, 4),
                "power_raw": field(raw, tbl, 5, 4),
                "accuracy_raw": field(raw, tbl, 6, 4),
                "pp_raw": field(raw, tbl, 7, 4),
                "field8_extra_raw": field(raw, tbl, 8, 4),
            }
            all_moves.append(row)
            by_move.setdefault(move_id, {})[game] = row
            source_files.append(rel)
        n = sum(row["game"] == game for row in all_moves)
        if n != WAZA_COUNTS[game]:
            raise ValueError(f"{game}: expected {WAZA_COUNTS[game]} moves, got {n}")
        counts[game]["waza"] = n

    observed = {"personal": len(all_species), "unique_species_forms": len(by_species),
                "waza": len(all_moves), "unique_moves": len(by_move)}
    if observed != EXPECTED:
        raise ValueError(f"Full semantic export mismatch: {observed}")
    bulba = by_species[(1, 0)]["global"]
    if [bulba[k] for k in ("hp", "atk", "def", "spa", "spd", "spe")] != [45, 49, 49, 65, 65, 45]:
        raise ValueError("Global Bulbasaur stat control mismatch")
    w98 = by_move[98]
    if [w98[g]["power_raw"] for g in ("orion", "titan", "ikkaku")] != [40, 40, 30]:
        raise ValueError("Quick Attack regression mismatch")
    semantic = output / "semantic"
    write_csv(semantic / "species_forms_all_games.csv", list(all_species[0]), all_species)
    write_csv(semantic / "moves_all_games.csv", list(all_moves[0]), all_moves)
    s_rows = []
    for key, games in sorted(by_species.items()):
        ref = games.get("global") or next(iter(games.values()))
        row = {"species_id": key[0], "form_id": key[1],
               "name_zh": ref["name_zh"], "name_en": ref["name_en"],
               "form_zh": ref["form_zh"]}
        for game in GAMES:
            row[game + "_record"] = int(game in games)
            row[game + "_flag"] = games[game]["resource_flag"] if game in games else ""
        s_rows.append(row)
    write_csv(semantic / "species_6game_matrix.csv", list(s_rows[0]), s_rows)
    m_rows = []
    for mid, games in sorted(by_move.items()):
        ref = next(iter(games.values()))
        row = {"move_id": mid, "name_zh": ref["name_zh"], "name_en": ref["name_en"]}
        for game in GAMES:
            row[game + "_flag"] = games[game]["resource_flag"] if game in games else ""
            for key in ("power_raw", "accuracy_raw", "pp_raw", "field8_extra_raw"):
                row[game + "_" + key] = games[game][key] if game in games else ""
        m_rows.append(row)
    write_csv(semantic / "moves_6game_matrix.csv", list(m_rows[0]), m_rows)
    (semantic / "audit_summary.json").write_text(
        json.dumps({"counts": observed, "games": counts}, indent=2, ensure_ascii=False) + "\n",
        encoding="utf-8")
    return observed, source_files

def write_bundle(repo: Path, out: Path):
    source, unpack = normalize_source(repo)
    if out.resolve().is_relative_to(source.resolve()) or out.resolve().is_relative_to(unpack.resolve()):
        raise ValueError("Destination must be outside source and Unpack trees")
    out.mkdir(parents=True, exist_ok=True)
    counts, originals = create_semantic(source, out)

    # Existing raw-field export is the authoritative per-slot FlatBuffers audit.
    from export_home41_pml_csv import export as export_raw_pml
    raw_dir = out / "raw_fields"
    if export_raw_pml(source / "pml", raw_dir) != 0:
        raise ValueError("Raw FlatBuffers field export reported errors")

    for game in PERSONAL:
        originals.append(Path("pml/personal") / (game + "_personal_total.perbin"))
    originals.extend((Path("pml/item/item.dat"),
                      Path("pml/item/item_hash_to_index.dat"),
                      Path("pokemon/pokemon_list/pokemon_valid_list.bin")))
    for name in ("form_data", "shape_data", "sugata", "topics_data"):
        originals.append(Path("appli/mtt_pokedex/bin") / (name + ".bin"))
    for language in ("Simp_Chinese", "English"):
        for stem in STEMS:
            for suffix in (".dat", ".tbl"):
                rel = Path("message") / language / "megaturtle" / (stem + suffix)
                if (source / rel).is_file():
                    originals.append(rel)
    zukan = source / "appli/zukan_data"
    if zukan.is_dir():
        originals.extend(p.relative_to(source) for p in sorted(zukan.rglob("zukan_sort_*.bin")))

    # Preserve all already-decoded derived tables without rewriting upstream Unpack.
    directories = [
        Path("pml/personal"), Path("pml/item"),
        Path("pokemon/pokemon_list"), Path("appli/mtt_pokedex/bin"),
        Path("appli/zukan_data"),
    ]
    for lang in ("Simp_Chinese", "English"):
        directories.append(Path("message") / lang / "megaturtle")
    copied = 0
    for d in directories:
        root = unpack / d
        if not root.is_dir():
            raise FileNotFoundError(str(root))
        # Keep only researched data families, not the many unrelated UI JSON files.
        paths = sorted(root.rglob("*.csv")) + sorted(root.rglob("*.json"))
        for file in paths:
            relative = file.relative_to(unpack)
            if "message" in relative.parts and file.stem not in STEMS:
                continue
            if "pml" in relative.parts and "personal" in relative.parts and not file.name.endswith(".csv"):
                continue
            if d == Path("appli/mtt_pokedex/bin") and file.stem not in (
                "form_data", "shape_data", "shape_data.shape_pairs", "sugata",
                "topics_data", "topics_data.references"):
                continue
            dest = out / "parsed_raw" / relative
            dest.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(file, dest)
            copied += 1

    manifest = []
    archive = out / "source_romfs_subset.tar.gz"
    with archive.open("wb") as stream:
        with gzip.GzipFile(filename="", mode="wb", fileobj=stream, mtime=0) as gz:
            with tarfile.open(fileobj=gz, mode="w") as tar:
                for rel in sorted(set(originals)):
                    path = source / rel
                    raw = path.read_bytes()
                    if len(raw) > 100 * 1024 * 1024:
                        raise ValueError(f"Unexpected oversize source file: {rel}")
                    header = tarfile.TarInfo("bin/" + rel.as_posix())
                    header.size = len(raw)
                    header.mode = 0o644
                    header.mtime = 0
                    tar.addfile(header, io.BytesIO(raw))
                    manifest.append({"path": rel.as_posix(), "bytes": len(raw),
                                     "sha256": hashlib.sha256(raw).hexdigest()})
    write_csv(out / "source_sha256_manifest.csv", ["path", "bytes", "sha256"], manifest)
    if archive.stat().st_size >= 95 * 1024 * 1024:
        raise ValueError("Archive too large for ordinary Git upload; configure release/LFS")
    source_commit = subprocess.check_output(
        ["git", "-C", str(repo), "rev-parse", "HEAD"], text=True).strip()
    summary = {
        "version": "4.1.0", "source_repo": "969981/PokeHome_Resources",
        "source_commit": source_commit, "original_root": NCA,
        "semantic_counts": counts, "source_files": len(manifest),
        "copied_predecoded_files": copied,
        "source_archive_bytes": archive.stat().st_size,
        "source_archive_sha256": file_hash(archive),
        "caution": "resource flags and local validation do not imply official transfer legality",
    }
    (out / "bundle_summary.json").write_text(
        json.dumps(summary, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print(json.dumps(summary, indent=2, ensure_ascii=False))

if __name__ == "__main__":
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--resource-repo", type=Path, required=True)
    ap.add_argument("--output", type=Path, required=True)
    x = ap.parse_args()
    write_bundle(x.resource_repo.resolve(), x.output.resolve())
