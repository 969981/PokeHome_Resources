#!/usr/bin/env python3
"""Exact icon/portrait key joins and SHA-bound native selector evidence."""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import struct
from collections import Counter
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments, signed
from home41_image_reverse_index import ELF_SHA, NCA

TARGETS = (0x14990, 0x14AD0, 0x2D2568, 0x2D26E0, 0x2D2848,
           0x2C3014, 0x4FD4F8, 0x4FD80C, 0x2D0ED4)

def csvrows(path):
    with path.open(encoding="utf-8", newline="") as f:
        return list(csv.DictReader(f))

def exact_join(root, icons, out):
    sel = csvrows(root / "HomeImageResources/research/pokemon_image_selector_v2.csv")
    ico = csvrows(icons / "pokemon_icons/brti_index.csv")
    def stem(name):
        if not (name.startswith("poke_icon_") and name.endswith("^u")):
            raise ValueError("unexpected icon raw name: " + name)
        return name[len("poke_icon_"):-2]
    left = Counter(r["resource_stem"] for r in sel)
    right = Counter(stem(r["raw_name"]) for r in ico)
    report = {
        "selector_rows": len(sel), "icon_rows": len(ico),
        "exact_unique_stem_matches": len(left.keys() & right.keys()),
        "selector_only": sorted(left.keys() - right.keys()),
        "icon_only": sorted(right.keys() - left.keys()),
        "selector_duplicate_stems": {k:v for k,v in left.items() if v > 1},
        "icon_duplicate_stems": {k:v for k,v in right.items() if v > 1},
        "exact_multiset_equal": left == right,
        "scope": "Name join only; not PKM field normalization or runtime parity."
    }
    (out / "selector_icon_exact_join.json").write_text(json.dumps(report, indent=2)+"\n", encoding="utf-8")
    print(json.dumps(report))

def native(root, out):
    raw = (root / NCA / "0/main.elf").read_bytes()
    if hashlib.sha256(raw).hexdigest() != ELF_SHA:
        raise ValueError("ELF SHA mismatch")
    segs = elf_segments(raw)
    refs = []
    targets = set(TARGETS)
    for s in segs:
        if not s["executable"]:
            continue
        start = s["file_offset"]
        for rel in range(0, s["size"] - 3, 4):
            op = struct.unpack_from("<I", raw, start + rel)[0]
            kind = op & 0xFC000000
            if kind not in (0x14000000, 0x94000000):
                continue
            pc = s["vaddr"] + rel
            target = pc + (signed(op & 0x3FFFFFF, 26) << 2)
            if target in targets:
                refs.append({"pc": pc, "target": target, "kind": "BL" if kind == 0x94000000 else "B", "opcode": f"{op:08X}"})
    report = {"elf_sha256": ELF_SHA, "targets": list(TARGETS), "direct_branch_refs": refs,
              "scope": "Static aligned B/BL candidates; indirect calls and actual function ownership not established."}
    (out / "native_selector_direct_refs.json").write_text(json.dumps(report, indent=2)+"\n", encoding="utf-8")
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    md.skipdata = True
    lines = ["# Native selector evidence windows", "", "ELF SHA256: " + ELF_SHA,
             "", "Windows are not established function boundaries; raw bytes included.", ""]
    windows = [(va, 0x100, 0x800, "target") for va in TARGETS]
    windows += [(r["pc"], 0x80, 0x100, r["kind"]+" caller of "+hex(r["target"])) for r in refs]
    for va, before, after, role in windows:
        for s in segs:
            if not s["executable"] or not s["vaddr"] <= va < s["vaddr"] + s["size"]:
                continue
            beg = max(s["vaddr"], (va-before)&~3)
            end = min(s["vaddr"]+s["size"], (va+after)&~3)
            off = s["file_offset"] + beg - s["vaddr"]
            lines.extend([f"## {role} @ 0x{va:X}", "", "~~~asm"])
            for i in md.disasm(raw[off:off+end-beg], beg):
                lines.append(f"0x{i.address:08X} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}")
            lines.extend(["~~~", ""])
            break
    (out / "native_selector_windows.md").write_text("\n".join(lines)+"\n", encoding="utf-8")
    print(json.dumps({"targets": len(TARGETS), "direct_branch_refs": len(refs)}))

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--icons", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    a = p.parse_args()
    a.out.mkdir(parents=True, exist_ok=True)
    exact_join(a.root, a.icons, a.out)
    native(a.root, a.out)

if __name__ == "__main__":
    main()
