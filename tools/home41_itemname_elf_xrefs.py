#!/usr/bin/env python3
"""Read-only HOME 4.1.0 main.elf resource-string/XREF audit.

Reports observed ADR/ADRP+ADD references and nearby BL *candidates*.
A nearby BL does not establish argument ownership or actual UI consumers.
No ROMFS/game writes. Python 3.10+, standard library only.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path

EXPECTED_SHA = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
NEEDLES = (
    "megaturtle/itemname.dat",
    "megaturtle/itemname.tbl",
    "megaturtle/itemname_acc.dat",
    "megaturtle/itemname_plural.dat",
    "bin/pml/item/item_hash_to_index.dat",
    "bin/pml/item",
    "item.dat",
    "ITEMNAME_",
    "item_%04d^o",
    "item_dummy^o",
)


def signed(val: int, bits: int) -> int:
    sign = 1 << (bits - 1)
    return val - (1 << bits) if val & sign else val


def load_segments(raw: bytes) -> list[dict]:
    if raw[:6] != b"\x7fELF\x02\x01":
        raise ValueError("requires little-endian 64-bit ELF")
    if struct.unpack_from("<H", raw, 18)[0] != 183:
        raise ValueError("requires AArch64 e_machine=183")
    phoff = struct.unpack_from("<Q", raw, 32)[0]
    entsz, count = struct.unpack_from("<HH", raw, 54)
    if entsz < 56 or count > 128 or phoff + entsz * count > len(raw):
        raise ValueError("invalid ELF PT_LOAD table")
    result = []
    for i in range(count):
        p_type, flags, off, va, _pa, size, memsz, _al = struct.unpack_from(
            "<IIQQQQQQ", raw, phoff + i * entsz
        )
        if p_type != 1:
            continue
        if off + size > len(raw):
            raise ValueError("PT_LOAD beyond ELF file")
        result.append(dict(offset=off, va=va, size=size, executable=bool(flags & 1)))
    return result


def file_to_va(segments: list[dict], off: int) -> int | None:
    for seg in segments:
        if seg["offset"] <= off < seg["offset"] + seg["size"]:
            return seg["va"] + off - seg["offset"]
    return None


def gather_strings(raw: bytes, segments: list[dict]) -> list[dict]:
    found: dict[tuple[int, int], dict] = {}
    for needle in NEEDLES:
        n = needle.encode("ascii")
        start = 0
        while True:
            at = raw.find(n, start)
            if at < 0:
                break
            start = at + 1
            left = at
            while left > 0 and at - left < 180 and 32 <= raw[left - 1] < 127:
                left -= 1
            right = at + len(n)
            while right < len(raw) and right - at < 250 and 32 <= raw[right] < 127:
                right += 1
            va = file_to_va(segments, left)
            if va is None:
                continue
            record = found.setdefault((left, right), dict(
                va=va, file_offset=left,
                text=raw[left:right].decode("ascii", "replace"),
                matched_needles=[]
            ))
            if needle not in record["matched_needles"]:
                record["matched_needles"].append(needle)
    return sorted(found.values(), key=lambda row: row["va"])


def candidate_branches(raw: bytes, seg: dict, relative: int, pc: int) -> list[dict]:
    branches = []
    begin = max(0, relative - 0x20)
    stop = min(seg["size"] - 3, relative + 0xA0)
    for at in range(begin & ~3, stop, 4):
        word = struct.unpack_from("<I", raw, seg["offset"] + at)[0]
        address = seg["va"] + at
        if word & 0xFC000000 == 0x94000000:
            delta = signed(word & 0x3FFFFFF, 26) * 4
            branches.append(dict(call_rva=f"0x{address:X}",
                                 target_rva=f"0x{address + delta:X}",
                                 opcode=f"{word:08X}"))
    return branches


def scan_xrefs(raw: bytes, segments: list[dict], strings: list[dict]) -> list[dict]:
    addresses = {r["va"]: r for r in strings}
    pages = {a & ~0xfff for a in addresses}
    seen = set()
    hits = []
    for seg in segments:
        if not seg["executable"]:
            continue
        for relative in range(0, seg["size"] - 3, 4):
            off = seg["offset"] + relative
            pc = seg["va"] + relative
            word = struct.unpack_from("<I", raw, off)[0]
            targets = []
            if word & 0x9F000000 == 0x10000000:  # ADR
                immediate = ((word >> 29) & 3) | (((word >> 5) & 0x7FFFF) << 2)
                target = pc + signed(immediate, 21)
                if target in addresses:
                    targets.append((target, "ADR", None, None))
            if word & 0x9F000000 == 0x90000000:  # ADRP
                immediate = ((word >> 29) & 3) | (((word >> 5) & 0x7FFFF) << 2)
                page = (pc & ~0xFFF) + (signed(immediate, 21) << 12)
                if page in pages:
                    reg = word & 31
                    for j in range(1, 13):
                        if relative + (j + 1) * 4 > seg["size"]:
                            break
                        add_word = struct.unpack_from("<I", raw, off + j * 4)[0]
                        if add_word & 0xFF000000 != 0x91000000:
                            continue
                        if ((add_word >> 5) & 31) != reg:
                            continue
                        imm12 = (add_word >> 10) & 0xFFF
                        imm12 <<= 12 if (add_word >> 22) & 1 else 0
                        target = page + imm12
                        if target in addresses:
                            targets.append((target, "ADRP+ADD", pc + j * 4, add_word))
            for target, kind, add_pc, add_word in targets:
                key = (pc, target, add_pc)
                if key in seen:
                    continue
                seen.add(key)
                entry = dict(
                    xref_rva=f"0x{pc:X}",
                    kind=kind,
                    resource_va=f"0x{target:X}",
                    resource_text=addresses[target]["text"],
                    opcode=f"{word:08X}",
                    add_rva=f"0x{add_pc:X}" if add_pc is not None else None,
                    add_opcode=f"{add_word:08X}" if add_word is not None else None,
                    nearby_bl_candidates=candidate_branches(raw, seg, relative, pc),
                    proof="RESOURCE_ADDRESS_REFERENCE_ONLY; nearby BL is NOT a proven resource consumer"
                )
                hits.append(entry)
    return sorted(hits, key=lambda row: (row["resource_text"], int(row["xref_rva"], 16)))


def audit(elf_path: Path) -> dict:
    raw = elf_path.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if sha != EXPECTED_SHA:
        raise ValueError(f"4.1.0 ELF SHA256 mismatch: {sha}")
    segments = load_segments(raw)
    strings = gather_strings(raw, segments)
    refs = scan_xrefs(raw, segments, strings)
    item_calls = [r for r in refs
                  if r["resource_text"].endswith("item.dat") and r["xref_rva"] == "0x502104"]
    if not item_calls:
        raise ValueError("Known original ELF item.dat xref main+0x502104 not found")
    return dict(
        original_elf_sha256=sha,
        original_elf_bytes=len(raw),
        strings=strings,
        xrefs=refs,
        counts=dict(strings=len(strings), references=len(refs),
                    message_refs=sum("itemname" in r["resource_text"] for r in refs),
                    item_dat_refs=sum(r["resource_text"].endswith("item.dat") for r in refs)),
        note="RVA only; source-level function identity, locale selection, UI screen and argument flow require separate verification",
    )


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    a = p.parse_args()
    report = audit(a.elf)
    a.out.parent.mkdir(parents=True, exist_ok=True)
    a.out.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n",
                     encoding="utf-8")
    print(json.dumps(dict(status="PASS", **report["counts"], result=str(a.out)),
                     ensure_ascii=False))


if __name__ == "__main__":
    main()
