#!/usr/bin/env python3
"""Audit original HOME 4.1.0 ELF for resource-path and nearby AArch64 PC references.

Read-only static facts only: ADR/ADRP+ADD to a constant address do not alone
prove data consumption or a semantic name for any item.dat byte offset.
No dependencies; ELF64 little-endian and AArch64 checked strictly.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import struct
from pathlib import Path

NEEDLES = (
    "item.dat", "item_hash_to_index", "pml/item",
    "topics_data.bin", "topics_data", "mtt_pokedex",
    "pokemon_valid_list", "pokemon_test_list", "form_data.bin",
    "pokedex", "item_data.bin",
)


def signed(x: int, bits: int) -> int:
    return x - (1 << bits) if x & (1 << (bits - 1)) else x


def elf_segments(data: bytes):
    if data[:4] != b"\x7fELF" or data[4:6] != b"\x02\x01":
        raise ValueError("expected little-endian 64-bit ELF")
    if struct.unpack_from("<H", data, 18)[0] != 183:
        raise ValueError("not AArch64 ELF")
    phoff = struct.unpack_from("<Q", data, 32)[0]
    entsize, count = struct.unpack_from("<HH", data, 54)
    if entsize < 56 or count > 1000 or phoff + entsize * count > len(data):
        raise ValueError("invalid ELF program header bounds")
    out = []
    for i in range(count):
        typ, flags, off, va, _paddr, size, memsize, _align = struct.unpack_from(
            "<IIQQQQQQ", data, phoff + entsize * i
        )
        if typ == 1:
            if off + size > len(data):
                raise ValueError("ELF PT_LOAD exceeds file")
            out.append({"file_offset": off, "vaddr": va, "size": size,
                        "memory_size": memsize, "executable": bool(flags & 1)})
    return out


def file_to_va(segs, off):
    for s in segs:
        if s["file_offset"] <= off < s["file_offset"] + s["size"]:
            return s["vaddr"] + off - s["file_offset"]
    return None


def resource_strings(data, segs):
    # Every occurrence is explicit; address of whole containing string is
    # also captured when a substring such as item.dat follows a path prefix.
    strings = {}
    for needle in NEEDLES:
        b = needle.encode("ascii")
        start = 0
        hits = 0
        while hits < 60:
            off = data.find(b, start)
            if off < 0:
                break
            start = off + 1
            hits += 1
            lo = off
            while lo > 0 and off - lo < 180 and 32 <= data[lo - 1] < 127:
                lo -= 1
            hi = off + len(b)
            while hi < len(data) and hi - off < 250 and 32 <= data[hi] < 127:
                hi += 1
            addr = file_to_va(segs, lo)
            key = (lo, hi)
            entry = strings.setdefault(key, {"file_offset": lo, "virtual_address": addr,
                                             "text": data[lo:hi].decode("ascii", "replace"),
                                             "needles": []})
            if needle not in entry["needles"]:
                entry["needles"].append(needle)
    return sorted((v for v in strings.values() if v["virtual_address"] is not None),
                  key=lambda x: (x["virtual_address"], x["text"]))


def find_pc_references(data, segs, strings):
    target_addresses = {x["virtual_address"]: x for x in strings}
    target_pages = {v & ~4095 for v in target_addresses}
    found = []
    if not target_addresses:
        return found
    for seg in segs:
        if not seg["executable"]:
            continue
        beg, size, base = seg["file_offset"], seg["size"], seg["vaddr"]
        # 4-byte aligned AArch64 instructions in executable PT_LOAD segments.
        for relative in range(0, size - 3, 4):
            off, pc = beg + relative, base + relative
            insn = struct.unpack_from("<I", data, off)[0]
            if insn & 0x9F000000 == 0x10000000:  # ADR
                imm = ((insn >> 29) & 3) | (((insn >> 5) & 0x7FFFF) << 2)
                target = pc + signed(imm, 21)
                if target in target_addresses:
                    found.append({"pc": pc, "target_va": target, "kind": "ADR",
                                  "rd": insn & 31, "opcode": f"{insn:08X}"})
            if insn & 0x9F000000 != 0x90000000:  # ADRP
                continue
            imm = ((insn >> 29) & 3) | (((insn >> 5) & 0x7FFFF) << 2)
            page = (pc & ~4095) + (signed(imm, 21) << 12)
            if page not in target_pages:
                continue
            register = insn & 31
            # AArch64 compiler convention: ADRP, optionally interleaved,
            # then ADD X?, X<adrp_reg>, #lo12. Do not infer indirect loads.
            for delta in range(1, 13):
                if relative + delta * 4 + 4 > size:
                    break
                op = struct.unpack_from("<I", data, off + delta * 4)[0]
                if (op & 0xFF000000) == 0x91000000:
                    rn = (op >> 5) & 31
                    if rn != register:
                        continue
                    shift = (op >> 22) & 1
                    target = page + (((op >> 10) & 4095) << (12 if shift else 0))
                    if target in target_addresses:
                        found.append({"pc": pc, "add_pc": pc + delta * 4,
                                      "target_va": target, "kind": "ADRP+ADD",
                                      "rd": register, "add_rd": op & 31,
                                      "opcode": f"{insn:08X}",
                                      "add_opcode": f"{op:08X}"})
    return sorted(found, key=lambda x: (x["target_va"], x["pc"], x["kind"]))


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    args = p.parse_args()
    raw = args.elf.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    segments = elf_segments(raw)
    strings = resource_strings(raw, segments)
    refs = find_pc_references(raw, segments, strings)
    # Evidence only: exact ELF SHA is bound to every export.
    by_va = {}
    for row in strings:
        by_va.setdefault(row["virtual_address"], []).append(row["text"])
    for row in refs:
        row["string_text"] = by_va.get(row["target_va"], [])
    doc = {"status": "static ELF string and PC-relative reference scan only",
           "no_semantic_claim": "PC-relative address references do not prove data consumers or 48-byte fields",
           "elf_sha256": sha, "elf_bytes": len(raw),
           "segments": segments, "needles": list(NEEDLES),
           "strings": strings, "references": refs,
           "string_hits": len(strings), "direct_reference_hits": len(refs)}
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(doc, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print(json.dumps({"elf_sha256": sha, "elf_bytes": len(raw),
                      "strings": len(strings), "direct_refs": len(refs),
                      "matches": [{"text": s["text"], "address": s["virtual_address"]}
                                  for s in strings[:25]]}, ensure_ascii=False))


if __name__ == "__main__":
    main()
