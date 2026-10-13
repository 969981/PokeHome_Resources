#!/usr/bin/env python3
"""P6 Native ELF targeted consumer windows, driven by full-ELF P6 scan.

The selected regions include distinct code sites where 0x138 (312 bytes)
is materialized near Pokédex UI, and reads of the same +0x508 owner member
that receives the original topics_data.bin load result.

The snippets are not a control-flow proof and are not a decompiler.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window
from home41_native_p6_consumer_scan import EXPECTED_ELF_SHA

WINDOWS = [
    ("PML item native record Getter only BL caller",0x4FD098,0x140,0x250),
    ("PML item native record pointer calculation",0x4FD7A0,0x64,0x80),
    ("PML item.dat unique direct caller before generic dispatch",0x4FD67C,0x280,0x560),
    ("PML global item context client",0x500DC4,0x100,0x200),
    ("topics resource load and owner assignment",0x12B10,0x60,0x160),
    ("topics same-owner early read",0x12E5C,0xB0,0x180),
    ("topics same-owner second read",0x12EE0,0x90,0x120),
    ("Pokédex adjacent 312-byte stride, first site",0x179554,0x80,0x290),
    ("Pokédex adjacent 312-byte stride, later",0x1797A8,0xB0,0x230),
    ("Pokédex adjacent 312-byte stride, exit",0x179E04,0x170,0x1B0),
    ("item.dat path and forwarded resource load",0x502104,0x98,0x138),
    ("item indirect dispatch and data source",0x50213C,0x30,0x250),
    ("item hash-index record reader",0x69850,0x50,0xC0),
    ("item hash-index insert consumer",0x69E90,0x80,0x2C0),
    ("item source context and owner",0x502950,0x70,0x1C0),
]
PROOF = {
    0x12B64: ("str", "#0x508"),
    0x12E5C: ("ldr", "#0x508"),
    0x179554: ("mov", "#0x138"),
    0x1797A8: ("mov", "#0x138"),
    0x502104: ("adrp", ""),
    0x6986C: ("ldr", "#0x10"),
}

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("--elf",type=Path,required=True)
    parser.add_argument("--out",type=Path,required=True)
    args=parser.parse_args()
    data=args.elf.read_bytes()
    sha=hashlib.sha256(data).hexdigest()
    if sha!=EXPECTED_ELF_SHA:
        raise ValueError("different ELF build")
    segs=elf_segments(data)
    docs=[]
    insmap={}
    for title,pc,before,after in WINDOWS:
        ins=window(data,segs,pc,before,after)
        docs.append((title,pc,ins))
        for addr,opcode,operands,blob in ins:
            insmap[addr]=(opcode,operands,blob)
    for address,(opcode,term) in PROOF.items():
        found=insmap.get(address)
        if not found or found[0]!=opcode or term not in found[1]:
            raise ValueError(f"opcode proof mismatch at 0x{address:X}: {found}")
    lines=[
        "# P6 — 4.1.0 Native Item / Topics 消费者候选窗口", "",
        "ELF SHA256: \`"+sha+"\`", "",
        "**证据类型：原始 opcode / static window。**",
        "对没有别名追踪及动态对照的同名偏移、立即数不可直接",
        "判定为业务字段。尤其 \`0x138\` 也可能是对象字段偏移、",
        "而非 topic stride，需要检查后续数据流与真实槽位地址。", "",
        "仅报告实际解码的目标指令，且每条地址为 main-relative RVA。", ""
    ]
    for name,anchor,ins in docs:
        lines.extend([f"## {name}: main+0x{anchor:X}", "", "```asm"])
        for address,mnem,op,raw in ins:
            anno="  << VERIFIED OPCODE" if address in PROOF else ""
            lines.append(f"0x{address:08X} {raw:<8} {mnem:<8} {op}{anno}")
        lines.extend(["```",""])
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text("\n".join(lines)+"\n",encoding="utf-8")
    print(json.dumps({"sha":sha,"verified_opcode_sites":len(PROOF),"window_count":len(WINDOWS),"path":str(args.out)}))

if __name__=="__main__":
    main()
