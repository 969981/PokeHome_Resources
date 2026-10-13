#!/usr/bin/env python3
"""P7 4.1.0 ELF: exact upstream windows of Item8 property dispatch.

Read the original ELF rather than pulling descriptions from legacy P6 notes.
Each A64 opcode and RVA is printed verbatim. Context can help identify
parameter producers or sinks, but business intent is not inferred blindly.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window

ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
TARGETS=[
  ("outer caller of native item metadata wrapper",0x266D58,0x1B0,0x1F0),
  ("item wrapper first entry and local selector call",0x4FD48C,0x90,0x1B8),
  ("item wrapper second entry and local selector call",0x4FD824,0x110,0xB8),
  ("item record pointer, selector entry",0x4FD06C,0x10,0x9C),
  ("object data source, field dispatch",0x4FD0B8,0x24,0x1B8),
  ("resource path owner initialization",0x4FD67C,0x90,0x110),
  ("item property-related neighbors",0x4FCC40,0xA0,0x260),
]
PROVEN_CALLS={
    0x266D58:"#0x4fd48c",
    0x4FD4C8:"#0x4fd06c",
    0x4FD4D4:"#0x4fd0b8",
    0x4FD4E0:"#0x4fd0b4",
    0x4FD824:"#0x4fd06c",
    0x4FD830:"#0x4fd0b8",
    0x4FD83C:"#0x4fd0b4",
}
def analyze(elf:bytes):
    if hashlib.sha256(elf).hexdigest()!=ELF_SHA:
        raise ValueError("wrong HOME native ELF sha")
    segments=elf_segments(elf)
    seen={}
    sections=[]
    for name,pc,before,after in TARGETS:
        dec=window(elf,segments,pc,before,after)
        rows=[]
        for addr,mn,op,code in dec:
            seen[addr]=(mn,op)
            rows.append((addr,mn,op,code))
        sections.append((name,pc,rows))
    for addr,dest in PROVEN_CALLS.items():
        op=seen.get(addr)
        if not op or op[0]!="bl" or op[1]!=dest:
            raise ValueError(f"wrong P7 caller opcode main+0x{addr:X}: {op}")
    return sections

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    args=p.parse_args()
    sections=analyze(args.elf.read_bytes())
    lines=[
       "# P7 HOME 4.1.0 — Item8 原生属性分派器上层逐指令证据",
       "",
       "ELF SHA-256: `"+ELF_SHA+"`；所有地址均为 ELF RVA。", "",
       "本轮直接验证 main+0x4FD0B8 的两个上层 BL 调用及注册/包装路径。",
       "此处只导出程序指令，业务消费者必须依据参数流和函数返回值另行证实。",
       ""
    ]
    for name,pc,rows in sections:
        lines += [f"## {name}, anchor main+0x{pc:X}", "", "```asm"]
        for addr,mn,op,byte in rows:
            label=" << EXACT BL CALLSITE" if addr in PROVEN_CALLS else ""
            lines.append(f"0x{addr:08X} {byte:<8} {mn:<8} {op}{label}")
        lines += ["```", ""]
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text("\n".join(lines)+"\n",encoding="utf-8")
    print(json.dumps({"sha":ELF_SHA,"verified_direct_callers":len(PROVEN_CALLS),
                     "context_windows":len(sections),
                     "output":str(args.out)}))
if __name__=="__main__":
    main()
