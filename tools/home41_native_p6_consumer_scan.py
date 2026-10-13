#!/usr/bin/env python3
"""P6: a provenance-checked AArch64 consumer search, not semantic guessing.

Full executable PT_LOAD survey + exact opcode windows for:
- topics owner member at +0x508 (post-load reference)
- topic fixed-slot 0x138 (312) integer stride
- item 0x30 (48) record stride and known item-index routines
- direct BL caller relationships (not transitive or virtual calls)

RVA is the ELF virtual address, not a live NSO ASLR absolute address.
"""
from __future__ import annotations
from collections import Counter
import argparse
import hashlib
import json
import re
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments

EXPECTED_ELF_SHA = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
ROOTS = {
    "topics_path": 0x12B10,
    "topics_asset_call": 0x12B44,
    "topics_owner_store": 0x12B64,
    "item_path": 0x502104,
    "item_loader": 0x50213C,
    "item_context": 0x502950,
    "hash_loader": 0x69780,
    "hash_index_insert": 0x69E90,
}
BL_RE = re.compile(r"^#0x([0-9a-f]+)$")
MEM508_RE = re.compile(r"\[(x\d+|sp), #0x508\]")
MEM_INDEX_RE = re.compile(r"\[(x\d+|sp), #0x(1a|11|13|15|1c|1d|1f|20|21|22)\]")


def classify(i):
    m, op = i.mnemonic, i.op_str
    classes = []
    if MEM508_RE.search(op):
        classes.append("owner_0x508_mem_access")
    if "#0x138" in op or "#312" in op:
        classes.append("topics_312_stride_constant")
    if m in ("mov", "add", "sub", "madd", "mul", "umaddl", "smaddl", "movi") and (
        "#0x30" in op or "#48" in op
    ):
        classes.append("item_48_stride_constant")
    if m in ("ldrb", "ldrh", "ldr", "ldrsb", "ldrsw", "ldur", "ldurb", "ldurh") and MEM_INDEX_RE.search(op):
        classes.append("possible_item_field_offset")
    if m == "bl":
        v = BL_RE.match(op)
        if v:
            target = int(v.group(1), 16)
            for name, pc in ROOTS.items():
                if target == pc:
                    classes.append("direct_bl_" + name)
    return classes


def scan_elf(data):
    segments = elf_segments(data)
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    # Capstone emits one instruction at a time; do not keep millions of objects.
    sources = {}
    hits = []
    visited = 0
    for seg in segments:
        if not seg["executable"]:
            continue
        p, n = seg["file_offset"], seg["size"]
        for ins in md.disasm(data[p:p+n], seg["vaddr"]):
            visited += 1
            tags = classify(ins)
            if tags:
                hits.append({
                    "pc": ins.address, "mnemonic": ins.mnemonic, "operands": ins.op_str,
                    "opcode_le": ins.bytes.hex(), "tags": tags,
                    "region": (
                        "topics_low" if 0 <= ins.address < 0x300000 else
                        "item_mid" if 0x300000 <= ins.address < 0x520000 else
                        "other_high"
                    )
                })
    return hits, visited, segments


def summarize(hits):
    by_tag = {}
    for row in hits:
        for tag in row["tags"]:
            by_tag.setdefault(tag, []).append(row)
    return {
        "instruction_hit_counts": {k: len(v) for k, v in sorted(by_tag.items())},
        "targeted_candidates": {
            k: v[:500] for k, v in sorted(by_tag.items())
        },
        "region_counts": dict(sorted(Counter(r["region"] for r in hits).items())),
    }


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--elf", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    data = args.elf.read_bytes()
    sha = hashlib.sha256(data).hexdigest()
    if sha != EXPECTED_ELF_SHA:
        raise ValueError("this audit only supports the exact verified 4.1.0 ELF SHA")
    hits, visited, seg = scan_elf(data)
    s = summarize(hits)
    report = {
        "target_sha256": sha, "binary_size": len(data),
        "instructions_scanned": visited, "native_entrypoints": ROOTS,
        "interpretation": (
            "Matches on a member offset or stride may refer to unrelated structs; "
            "direct BL is an immediate target only; no full SSA or alias proof."
        ), **s
    }
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({
        "elf_sha256": sha, "instructions_scanned": visited,
        "counts": s["instruction_hit_counts"],
        "regions": s["region_counts"],
        "examples": {
            k: [{"pc": hex(x["pc"]), "insn": x["mnemonic"]+" "+x["operands"]}
                for x in v[:12]]
            for k, v in s["targeted_candidates"].items()
        }
    }, ensure_ascii=False))


if __name__ == "__main__":
    main()
