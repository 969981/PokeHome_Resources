#!/usr/bin/env python3
"""Decode original HOME 4.1.0 ARM64 instructions around verified resource XREFs.

Input addresses are read from a SHA-qualified static report, never inferred
from resource names alone.  These instruction windows establish call sites,
not yet item.dat 48-byte property semantics.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments

def window(data: bytes, segs, pc: int, radius_before=0x100, radius_after=0x240):
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
    for s in segs:
        if not s["executable"] or not (s["vaddr"] <= pc < s["vaddr"] + s["size"]):
            continue
        beg = max(s["vaddr"], (pc - radius_before) & ~3)
        end = min(s["vaddr"] + s["size"], (pc + radius_after + 3) & ~3)
        off = s["file_offset"] + beg - s["vaddr"]
        md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
        ins = list(md.disasm(data[off: off + (end - beg)], beg))
        return [(i.address, i.mnemonic, i.op_str, i.bytes.hex()) for i in ins]
    raise ValueError(f"XREF PC {pc:X} not inside ELF executable LOAD region")


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--xrefs", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    args = p.parse_args()
    data = args.elf.read_bytes()
    report = json.loads(args.xrefs.read_text(encoding="utf-8"))
    if hashlib.sha256(data).hexdigest() != report["elf_sha256"]:
        raise ValueError("XREF provenance does not match supplied ELF")
    segs = elf_segments(data)
    needles = ("item.dat", "item_hash_to_index.dat", "topics_data.bin",
               "form_data.bin", "shape_data.bin", "bin/pml/item")
    matched = [
        (needle, r)
        for needle in needles
        for r in report["references"]
        if any(needle in v for v in r["string_text"])
    ]
    if not matched:
        raise ValueError("no verified item / topics / shape string XREFs")
    lines = [
        "# HOME 4.1.0 — 原始 ELF 资源 XREF 逐指令窗口",
        "",
        f"ELF SHA256: \`{report['elf_sha256']}\`.",
        "",
        "**证据边界**：ADRP/ADD 是资源字符串的引用点；这里仅是反汇编",
        "证据，不等于已经确定的读取者、字段类型或业务语义。",
        "",
        f"反汇编目标数：{len(matched)}。每处展示 -0x100 到 +0x240。",
        "",
    ]
    for needle, r in matched:
        pc = r["pc"]
        lines += [f"## {needle} — main+0x{pc:X}", "",
                  "资源常量：" + ", ".join(f"\`{s}\`" for s in r["string_text"]), "",
                  f"原始指令: \`{r['opcode']}\`; "
                  f"后续 ADD: \`{r.get('add_opcode', 'n/a')}\`", "",
                  "```asm"]
        relevant = {r["pc"], r.get("add_pc")}
        for addr, name, args_, hx in window(data, segs, pc):
            mark = " << RESOURCE ADDRESS" if addr in relevant else ""
            lines.append(f"0x{addr:08X} {hx:<8} {name:<9} {args_}{mark}")
        lines += ["```", ""]
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text("\n".join(lines) + "\n", encoding="utf-8")
    print(json.dumps({"instruction_windows": len(matched), "out": str(args.out),
                      "sha": report["elf_sha256"]}))


if __name__ == "__main__":
    main()
