#!/usr/bin/env python3
"""Recover HOME 4.1.0 item effect extended selector dispatch after ID >25.

Exact AArch64 control-flow:
0x4FD0E4 checks Item8 record +0x15 flag; flags 0/2 expose raw +0x1E;
flags==1 branches to 0x4FD258 where x1=record+0x1E.
0x4FD270 subtracts 26 from selector and dispatches 0..44 by 45-byte
relative jump table at 0x657FE6 with base 0x4FD294.

This establishes native effect parameter accessor targets; it does NOT
assign gameplay effect labels or prove the later gameplay consumer.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window

ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
TABLE_RVA=0x657FE6
SWITCH_ENTRY=0x4FD270
SWITCH_BASE=0x4FD294
SELECTOR_START=26
SELECTOR_COUNT=45


def read_virtual(elf,segments,address,n):
    for seg in segments:
        begin=seg["vaddr"]
        if begin<=address and address+n<=begin+seg["size"]:
            off=seg["file_offset"]+address-begin
            return elf[off:off+n]
    raise ValueError(f"RVA {address:#x} unbacked")


def extract(elf:bytes)->dict:
    sha=hashlib.sha256(elf).hexdigest()
    if sha!=ELF_SHA:raise ValueError("different ELF sha")
    seg=elf_segments(elf)
    insn=window(elf,seg,0x4FD0E4,0,0x650)
    inst={pc:(mn,op,code) for pc,mn,op,code in insn}
    anchors={
        0x4FD0E8:("ldrb","[x8, #0x15]"),
        0x4FD0EC:("cmp","#2"),
        0x4FD0F4:("cmp","#1"),
        0x4FD100:("ldrb","[x8, #0x1e]"),
        0x4FD258:("add","x8, x8, #0x1e"),
        0x4FD260:("mov","x1, x8"),
        0x4FD264:("b","#0x4fd270"),
        0x4FD270:("sub","#0x1a"),
        0x4FD274:("cmp","#0x2c"),
        0x4FD280:("add","#0xfe6"),
        0x4FD284:("adr","#0x4fd294"),
        0x4FD288:("ldrb","[x9, x8]"),
        0x4FD28C:("add","lsl #2"),
        0x4FD290:("br","x10"),
    }
    for pc,(mn,part) in anchors.items():
        op=inst.get(pc)
        if op is None or op[0]!=mn or part not in op[1]:
            raise ValueError(f"effect selector Native opcode mismatch 0x{pc:X}: {op}")
    data=read_virtual(elf,seg,TABLE_RVA,SELECTOR_COUNT)
    rows=[]
    for i,offset in enumerate(data):
        pc=SWITCH_BASE+4*offset
        entry=inst.get(pc)
        if not entry:raise ValueError(f"selector {SELECTOR_START+i} target missing at {pc:#x}")
        next_opcodes=[]
        for j in range(5):
            step=inst.get(pc+4*j)
            if step is None:break
            next_opcodes.append({"pc":f"0x{pc+4*j:X}","mnemonic":step[0],"operands":step[1],"bytes":step[2]})
            if step[0]=="ret":break
        rows.append({
            "extended_selector":SELECTOR_START+i,
            "table_index":i, "branch_table_byte":offset,
            "native_target_rva":f"0x{pc:X}",
            "first_opcodes":next_opcodes,
            "effect_payload_base":"raw Item8 record+0x1E, if source flag at +0x15 equals 1",
            "business_semantics":"not recovered",
        })
    return {
        "elf_sha256":sha, "extended_dispatch_rva":f"0x{SWITCH_ENTRY:X}",
        "original_table_rva":f"0x{TABLE_RVA:X}",
        "base_branch_address":f"0x{SWITCH_BASE:X}",
        "first_selector":SELECTOR_START,"last_selector":SELECTOR_START+SELECTOR_COUNT-1,
        "selector_count":SELECTOR_COUNT,
        "exact_native_dispatch_anchor_count":len(anchors),
        "precise_formula":"main+0x4FD294 + 4*read_u8(main+0x657FE6+(selector-26))",
        "type_byte_offset":0x15,
        "payload_byte_offset":0x1E,
        "branch_type1":"extended selector dispatch and bit/parameter access",
        "branch_type0_or2":"returns record+0x1E raw byte",
        "other_types":"returns zero",
        "caveat":"This is an attribute/effect access and conditional routing chain, not a semantic proof of battle effects",
        "rows":rows,
    }


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    args=p.parse_args()
    d=extract(args.elf.read_bytes())
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(d,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({
        "count":d["selector_count"],
        "native_type_branch":d["branch_type1"],
        "first_targets":[(r["extended_selector"],r["native_target_rva"],
                          r["first_opcodes"][:2]) for r in d["rows"][:18]],
    },ensure_ascii=False))
if __name__=="__main__":
    main()
