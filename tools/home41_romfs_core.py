#!/usr/bin/env python3
"""Pokémon HOME Switch 4.1.0 RomFS catalog and safe offline readers.

Python 3.9+ / standard library only. Use legally obtained, already extracted
RomFS assets. This tool does NOT edit HOME records or contact Nintendo servers.
"""
from __future__ import annotations

import argparse
import collections
import csv
import gzip
import hashlib
import json
import re
import struct
from pathlib import Path, PurePosixPath

MAX_ARCHIVE = 128 * 1024 * 1024
MAX_MEMBER = 64 * 1024 * 1024
FNV_BASIS = 0xCBF29CE484222645  # Pokemon variant; not generic FNV1a-64 basis
FNV_PRIME = 0x100000001B3
FILE_COLS = ("path", "bytes", "sha256", "extension", "family", "signature", "detail", "error")


def file_hash(path):
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def csv_out(path, columns, rows):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="", encoding="utf-8-sig") as stream:
        writer = csv.DictWriter(stream, fieldnames=columns, extrasaction="ignore")
        writer.writeheader()
        writer.writerows(rows)


def u16(data, pos):
    return struct.unpack_from("<H", data, pos)[0]


def u32(data, pos):
    return struct.unpack_from("<I", data, pos)[0]


def name_hash(name):
    value = FNV_BASIS
    for ch in name.encode("utf-8"):
        value = ((value ^ ch) * FNV_PRIME) & 0xFFFFFFFFFFFFFFFF
    return value


def flatbuffer_root(data):
    """Structural candidates only; cannot recover absent FlatBuffers schema."""
    if len(data) < 12:
        raise ValueError("short FlatBuffers candidate")
    root = u32(data, 0)
    if root < 4 or root + 4 > len(data):
        raise ValueError("root outside bounds")
    vtable = root - struct.unpack_from("<i", data, root)[0]
    if vtable < 4 or vtable + 4 > len(data):
        raise ValueError("vtable outside bounds")
    vs, os = struct.unpack_from("<HH", data, vtable)
    if vs < 4 or vs > 4096 or vs % 2 or vtable + vs > len(data) or os < 4 or root + os > len(data):
        raise ValueError("invalid vtable/object bounds")
    fields = [u16(data, vtable + 4 + i * 2) for i in range((vs - 4) // 2)]
    if any(offset and (offset < 4 or offset >= os) for offset in fields):
        raise ValueError("field beyond object")
    vectors = {}
    for i, offset in enumerate(fields):
        if not offset or offset + 4 > os:
            continue
        at = root + offset
        jump = u32(data, at)
        target = at + jump
        if jump >= 4 and target + 4 <= len(data):
            length = u32(data, target)
            if length <= 100_000 and target + 4 + 4 * length <= len(data):
                vectors[str(i)] = {"offset_candidate": target, "length_candidate": length}
    return {"root": root, "vtable": vtable, "vtable_size": vs,
            "object_size": os, "field_offsets": fields,
            "u32_vector_candidates": vectors}


def sarc_members(data):
    if len(data) < 32 or len(data) > MAX_ARCHIVE or data[:4] != b"SARC":
        raise ValueError("not a supported SARC")
    endian = {b"\xff\xfe": "<", b"\xfe\xff": ">"}.get(data[6:8])
    if endian is None:
        raise ValueError("unsupported SARC BOM")
    get16 = lambda p: struct.unpack_from(endian + "H", data, p)[0]
    get32 = lambda p: struct.unpack_from(endian + "I", data, p)[0]
    header, data_base = get16(4), get32(12)
    if header != 20 or get32(8) != len(data) or not header + 20 <= data_base <= len(data):
        raise ValueError("SARC header or declared size")
    if data[header:header + 4] != b"SFAT" or get16(header + 4) != 12:
        raise ValueError("missing SFAT")
    count, mult = get16(header + 6), get32(header + 8)
    if count > 10000 or mult == 0:
        raise ValueError("unsupported SFAT count/multiplier")
    sfnt = header + 12 + count * 16
    if sfnt + 8 > data_base or data[sfnt:sfnt + 4] != b"SFNT":
        raise ValueError("missing SFNT")
    name_base = sfnt + get16(sfnt + 4)
    if name_base < sfnt + 8 or name_base > data_base:
        raise ValueError("SFNT name base")
    rows = []
    for idx in range(count):
        at = header + 12 + idx * 16
        wanted, name_field, start, stop = struct.unpack_from(endian + "IIII", data, at)
        if name_field >> 24 != 1 or start > stop or stop > len(data) - data_base or stop - start > MAX_MEMBER:
            raise ValueError("invalid member offsets/name flag")
        pos = name_base + 4 * (name_field & 0xFFFFFF)
        end_name = data.find(b"\0", pos, data_base)
        if pos < name_base or end_name < 0:
            raise ValueError("invalid member name")
        raw_name = data[pos:end_name]
        name = raw_name.decode("utf-8")
        parts = PurePosixPath(name).parts
        if not parts or name.startswith("/") or "\\" in name or ".." in parts:
            raise ValueError("unsafe SARC member path")
        actual = 0
        for ch in raw_name:
            actual = (actual * mult + ch) & 0xFFFFFFFF
        if actual != wanted:
            raise ValueError("SFAT member name hash mismatch")
        member = data[data_base + start:data_base + stop]
        rows.append({"index": idx, "name": name, "offset": data_base + start,
                     "bytes": len(member), "sha256": hashlib.sha256(member).hexdigest(),
                     "magic": member[:4].decode("ascii", "replace")})
    if len({x["name"] for x in rows}) != len(rows):
        raise ValueError("duplicate SARC member")
    return rows


def ahtb_labels(data):
    if len(data) < 8 or data[:4] != b"AHTB":
        raise ValueError("not AHTB")
    count = u32(data, 4)
    if count > 100_000:
        raise ValueError("AHTB count too high")
    at, rows = 8, []
    for _ in range(count):
        if at + 10 > len(data):
            raise ValueError("truncated AHTB")
        wanted, length = struct.unpack_from("<QH", data, at)
        at += 10
        if length == 0 or at + length > len(data) or data[at + length - 1] != 0:
            raise ValueError("AHTB string boundary")
        label = data[at:at + length - 1].decode("utf-8")
        if name_hash(label) != wanted:
            raise ValueError("AHTB FNV hash mismatch")
        rows.append((label, wanted))
        at += length
    if at != len(data):
        raise ValueError("AHTB trailing data")
    return rows


def render_tokens(words):
    out, idx = [], 0
    while idx < len(words):
        token = words[idx]
        idx += 1
        if token == 0:
            return "".join(out), True
        if token == 10:
            out.append("\n")
        elif token == 0x10 and idx + 2 <= len(words):
            length, kind = words[idx:idx + 2]
            idx += 2
            arg_count = max(0, length - 1)
            if idx + arg_count > len(words):
                raise ValueError("incomplete variable token")
            args = words[idx:idx + arg_count]
            idx += arg_count
            if kind == 0xBE00:
                out.append("[RETURN]")
            elif kind == 0xBE01:
                out.append("[CLEAR]")
            elif kind == 0xBE02:
                out.append("[WAIT:%s]" % (args[0] if args else "?"))
            elif kind == 0xBDFF and args:
                out.append("[REF:%d]" % args[0])
            else:
                out.append("[CTRL:%04X:%s]" % (kind, ",".join("%04X" % n for n in args)))
        elif token < 32 or 0xD800 <= token <= 0xDFFF:
            out.append("[U16:%04X]" % token)
        else:
            out.append(chr(token))
    return "".join(out), False


def dat_lines(data):
    if len(data) < 20:
        raise ValueError("short DAT")
    sections, count = struct.unpack_from("<HH", data)
    section_size, initial, base = struct.unpack_from("<III", data, 4)
    if sections != 1 or initial != 0 or base != 16 or section_size + base != len(data) or u32(data, base) != section_size:
        raise ValueError("unsupported DAT variant")
    if count > 100_000 or base + 4 + count * 8 > len(data):
        raise ValueError("DAT count/offset out of bounds")
    rows = []
    for idx in range(count):
        at = base + 4 + idx * 8
        offset = base + u32(data, at)
        length, flags = struct.unpack_from("<HH", data, at + 4)
        if offset < base + 4 + count * 8 or offset + 2 * length > len(data):
            raise ValueError("DAT text bounds")
        key, words = (0x7C89 + idx * 0x2983) & 0xFFFF, []
        for i in range(length):
            words.append(u16(data, offset + i * 2) ^ key)
            key = ((key << 3) | (key >> 13)) & 0xFFFF
        text, ended = render_tokens(words)
        if not ended:
            raise ValueError("missing DAT terminator")
        rows.append({"index": idx, "text": text, "offset": offset, "length": length, "flags": flags})
    return rows


def magic_of(path, head):
    ext = "".join(path.suffixes).lower()
    if head[:4] in (b"SARC", b"AHTB", b"BNTX", b"FLYT", b"FLAN", b"BNSH"):
        return head[:4].decode("ascii")
    if head[:4] == b"\x7fELF":
        return "ELF"
    if head[:2] == b"\x1f\x8b":
        return "GZIP"
    if ext.endswith((".perbin", ".wazabin")) or path.name.lower().endswith(("_lyt.bin", "_uikit.bin")):
        return "FlatBuffers-candidate"
    if ext.endswith(".dat"):
        return "DAT-candidate"
    if ext.endswith(".tbl"):
        return "other-TBL"
    return "unknown"


def cmd_scan(args):
    root = args.root.resolve()
    if not root.is_dir():
        raise ValueError("RomFS --root is not a directory")
    rows, errors = [], []
    families, formats = collections.Counter(), collections.Counter()
    for path in sorted(root.rglob("*")):
        if not path.is_file() or path.is_symlink():
            continue
        rel = path.relative_to(root).as_posix()
        with path.open("rb") as stream:
            head = stream.read(64)
        fmt = magic_of(path, head)
        parts = Path(rel).parts
        family = parts[1] if len(parts) > 1 and parts[0] == "bin" else parts[0]
        record = {"path": rel, "bytes": path.stat().st_size,
                  "sha256": file_hash(path), "extension": "".join(path.suffixes).lower(),
                  "family": family, "signature": fmt, "detail": "", "error": ""}
        try:
            if args.deep and fmt == "SARC":
                record["detail"] = "members=%d" % len(sarc_members(path.read_bytes()))
            elif args.deep and fmt == "AHTB":
                record["detail"] = "labels=%d" % len(ahtb_labels(path.read_bytes()))
            elif args.deep and fmt == "FlatBuffers-candidate":
                obj = flatbuffer_root(path.read_bytes())
                record["detail"] = "root=%d;fields=%d" % (obj["root"], len(obj["field_offsets"]))
            elif fmt == "GZIP" and path.stat().st_size >= 4:
                with path.open("rb") as stream:
                    stream.seek(-4, 2)
                    record["detail"] = "isize_mod32=%d" % struct.unpack("<I", stream.read(4))[0]
        except (ValueError, OSError, UnicodeError, struct.error) as exc:
            record["error"] = str(exc)
            errors.append({"path": rel, "error": str(exc)})
        families[family] += 1
        formats[fmt] += 1
        rows.append(record)
    args.out.mkdir(parents=True, exist_ok=True)
    csv_out(args.out / "files.csv", FILE_COLS, rows)
    csv_out(args.out / "errors.csv", ("path", "error"), errors)
    report = {"total_files": len(rows), "errors": len(errors),
              "families": dict(sorted(families.items())), "signatures": dict(sorted(formats.items()))}
    (args.out / "summary.json").write_text(json.dumps(report, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print("scanned", len(rows), "files;", len(errors), "validation errors")


def cmd_sarc(args):
    raw = args.arc.read_bytes()
    entries = sarc_members(raw)
    csv_out(args.out / "sarc_members.csv", ("index", "name", "offset", "bytes", "magic", "sha256"), entries)
    if args.extract:
        base = (args.out / "extracted").resolve()
        base.mkdir(parents=True, exist_ok=True)
        for row in entries:
            destination = (base / row["name"]).resolve()
            if not destination.is_relative_to(base):
                raise ValueError("archive path escaped extraction root")
            destination.parent.mkdir(parents=True, exist_ok=True)
            destination.write_bytes(raw[row["offset"]:row["offset"] + row["bytes"]])
    print("validated SARC members:", len(entries), "extract:", args.extract)


def cmd_messages(args):
    rows, errors = [], []
    for dat in sorted(args.root.rglob("*.dat")):
        if args.lang and args.lang not in dat.relative_to(args.root).parts:
            continue
        tbl = dat.with_suffix(".tbl")
        if not tbl.is_file():
            continue
        try:
            names, lines = ahtb_labels(tbl.read_bytes()), dat_lines(dat.read_bytes())
            if len(names) == len(lines) + 1 and names[-1][0].lower().endswith("max"):
                names = names[:-1]
            if len(names) != len(lines):
                raise ValueError("DAT/AHTB row count mismatch")
            for (label, number), line in zip(names, lines):
                rows.append({"file": dat.relative_to(args.root).as_posix(), "index": line["index"],
                             "label": label, "hash": "%016X" % number, "text": line["text"],
                             "offset": line["offset"], "length": line["length"], "flags": line["flags"]})
        except (ValueError, OSError, UnicodeError, struct.error) as exc:
            errors.append({"file": dat.relative_to(args.root).as_posix(), "error": str(exc)})
    csv_out(args.out / "messages.csv", ("file", "index", "label", "hash", "text", "offset", "length", "flags"), rows)
    csv_out(args.out / "message_errors.csv", ("file", "error"), errors)
    print("decoded message rows:", len(rows), "skipped pairs:", len(errors))


def cmd_inspect(args):
    data = args.file.read_bytes()
    fmt = magic_of(args.file, data[:64])
    result = {"file": str(args.file), "bytes": len(data),
              "sha256": hashlib.sha256(data).hexdigest(), "format": fmt}
    if fmt == "SARC":
        result["members"] = sarc_members(data)
    elif fmt == "AHTB":
        result["labels"] = [{"label": name, "hash": "%016X" % digest} for name, digest in ahtb_labels(data)]
    elif fmt == "FlatBuffers-candidate":
        result["structure_only"] = flatbuffer_root(data)
    print(json.dumps(result, indent=2, ensure_ascii=False))


def cmd_gzip(args):
    cap = args.max_mib * 1024 * 1024
    if cap < 1:
        raise ValueError("max-mib must be >= 1")
    args.out.parent.mkdir(parents=True, exist_ok=True)
    partial = args.out.with_name(args.out.name + ".partial")
    try:
        total = 0
        with gzip.open(args.file, "rb") as source, partial.open("wb") as target:
            while True:
                block = source.read(min(1024 * 1024, cap + 1 - total))
                if not block:
                    break
                total += len(block)
                if total > cap:
                    raise ValueError("gzip expansion exceeds max-mib")
                target.write(block)
        partial.replace(args.out)
    finally:
        if partial.exists():
            partial.unlink()
    print("decompressed", total, "bytes to", args.out)


def cmd_elf(args):
    elf = args.elf.read_bytes()
    if elf[:4] != b"\x7fELF":
        raise ValueError("not ELF")
    existing = {p.relative_to(args.root).as_posix() for p in args.root.rglob("*") if p.is_file() and not p.is_symlink()}
    expression = re.compile(rb"[A-Za-z0-9_./%-]{4,}\.(?:arc|dat|tbl|perbin|wazabin|bin|bntx|bflyt|bflan)\x00")
    rows = []
    for match in expression.finditer(elf):
        string = match.group()[:-1].decode("ascii", "replace")
        path = string.lstrip("/")
        if "/bin/" in path:
            path = path[path.find("bin/"):]
        exact = path in existing
        rows.append({"elf_file_offset": "0x%X" % match.start(), "string": string,
                     "romfs_exact_path": path if exact else "", "status": "exact" if exact else "unresolved"})
    csv_out(args.out, ("elf_file_offset", "string", "romfs_exact_path", "status"), rows)
    print("ELF string candidates:", len(rows), "exact path matches:", sum(r["status"] == "exact" for r in rows))
    print("Offsets are ELF file offsets, NOT RVA and NOT verified execution XREFs.")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    subs = parser.add_subparsers(dest="action", required=True)
    p = subs.add_parser("scan")
    p.add_argument("--root", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--deep", action="store_true")
    p.set_defaults(handler=cmd_scan)
    p = subs.add_parser("sarc")
    p.add_argument("--arc", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--extract", action="store_true")
    p.set_defaults(handler=cmd_sarc)
    p = subs.add_parser("messages")
    p.add_argument("--root", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--lang", help="e.g. Simp_Chinese")
    p.set_defaults(handler=cmd_messages)
    p = subs.add_parser("inspect")
    p.add_argument("file", type=Path)
    p.set_defaults(handler=cmd_inspect)
    p = subs.add_parser("unpack-gzip")
    p.add_argument("--file", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--max-mib", type=int, default=64)
    p.set_defaults(handler=cmd_gzip)
    p = subs.add_parser("elf-strings")
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--root", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.set_defaults(handler=cmd_elf)
    args = parser.parse_args()
    args.handler(args)


if __name__ == "__main__":
    main()
