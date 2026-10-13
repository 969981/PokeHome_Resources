#!/usr/bin/env python3
"""4.1.0 ELF exact-opcode audit of hash loader and item/topics native consumers.

This connects file-path strings to actual load calls and reads of decoded
index structures, without inventing names for the separate 48-byte item.dat
record members. Every opcode assertion is checked against original main.elf.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window

TARGETS = (
    ("PML hash index loader", 0x69780),
    ("PML hash index entry iteration", 0x69838),
    ("PML hash index insertion callee", 0x69E90),
    ("PML item.dat formatting/load request", 0x502104),
    ("PML item.dat dispatch", 0x50213C),
    ("PML item global context", 0x502950),
    ("Pokédex topics load", 0x12B10),
    ("Pokédex topics resource selector", 0x652C),
    ("shared asset loader", 0x13BB0),
)

# Only primitive instruction facts are asserted: opcode, not business roles.
EXPECTED = {
    0x6979C: "adrp",
    0x697A0: "add",
    0x697AC: "bl",
    0x69840: "ldr",
    0x69850: "add",
    0x69854: "ldur",
    0x6986C: "ldr",
    0x69870: "strh",
    0x69874: "bl",
    0x502104: "adrp",
    0x502108: "add",
    0x502114: "bl",
    0x502124: "bl",
    0x12B10: "adrp",
    0x12B14: "add",
    0x12B1C: "bl",
    0x12B44: "bl",
    0x12B64: "str",
}


def run(elf_path: Path):
    raw = elf_path.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if sha != "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a":
        raise ValueError("ELF SHA mismatch; offsets MUST NOT be applied to other builds")
    segs = elf_segments(raw)
    assembled = []
    mapping = {}
    for name, address in TARGETS:
        ins = window(raw, segs, address, radius_before=0x50, radius_after=0x210)
        for pc, mnemonic, args, hexop in ins:
            mapping[pc] = {"pc": pc, "mnemonic": mnemonic, "operands": args,
                           "opcode_bytes_le": hexop}
        assembled.append((name, address, ins))
    for pc, mnemonic in EXPECTED.items():
        insn = mapping.get(pc)
        if not insn or insn["mnemonic"] != mnemonic:
            raise ValueError(f"unexpected opcode at main+0x{pc:X}: {insn!r}")
    # Specific low-level facts about the index loader.
    if "#0x10" not in mapping[0x6986C]["operands"]:
        raise ValueError("native entry stride is not evidenced as 0x10")
    if "#0xc" not in mapping[0x69870]["operands"]:
        raise ValueError("native STRH site missing expected stack slot")
    if "#0x508" not in mapping[0x12B64]["operands"]:
        raise ValueError("topics buffer owner offset changed")
    return sha, assembled, mapping


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    args = p.parse_args()
    sha, windows, mapping = run(args.elf)
    lines = [
        "# HOME 4.1.0 原生读取者和字节宽度 — 精确 ELF 证据",
        "",
        "构建原始 ELF SHA256: \`" + sha + "\`", "",
        "**已证实的机器码事实**：在哈希索引迭代处，原生读取的记录",
        "步长为 \`0x10\`（16 字节），并将一个值通过 \`STRH\`",
        "写入栈上临时缓冲，因此仅使用其低 16 位。这里只证明访问",
        "宽度，不擅自给哈希算法或 item.dat 的 48 字节字段命名。",
        "",
        "topics 路径在 \`0x12B10\`，在 \`0x12B44\`",
        "调用通用资源装载函数，并在 \`0x12B64\`",
        "将所获对象赋给 \"x19+0x508\"。数据槽内各字段用途未证明。",
        "",
        "**仍待追踪**：item.dat 的 48-byte record member Getter、",
        "类别/效果/数值参数的 native accessor，以及 312-byte topic",
        "记录消费者。因此本文不能把这些业务字段称为已恢复。",
        "",
    ]
    for name, pc, ins in windows:
        lines.extend([f"## {name}: main+0x{pc:X}", "", "```asm"])
        for addr, mnemonic, op, rawhex in ins:
            marker = "  <= EXACT OPCODE CHECK" if addr in EXPECTED else ""
            lines.append(f"0x{addr:08X} {rawhex:<8} {mnemonic:<8} {op}{marker}")
        lines += ["```", ""]
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text("\n".join(lines)+"\n",encoding="utf-8")
    print(json.dumps({"elf_sha256": sha,
                      "validated_exact_opcode_count": len(EXPECTED),
                      "consumer_windows": len(windows),
                      "source": str(args.elf)}))


if __name__ == "__main__":
    main()
