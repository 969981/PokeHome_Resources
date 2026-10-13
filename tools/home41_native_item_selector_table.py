#!/usr/bin/env python3
"""Native Item8 property selector table: real ELF x1=0..25 dispatch.

HOME 4.1.0 main+0x4FD0B8 compares selector w1 with 25 and uses
a 26-byte relative PC table at virtual address 0x657FCC:
    target = main+0x4FD0DC + 4 * table[selector]
The caller initializes wrapper[0] by 0x4FD098 -> 0x4FD784.
This tool maps the original 26 byte values to opcode-addressed getter
entrypoints, without claiming a business meaning for unknown branches.
"""
from __future__ import annotations
import argparse
import json
import hashlib
from pathlib import Path
from home41_native_item_field_getters import FIELDS, ELF_SHA
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window

TABLE_RVA=0x657FCC
TARGET_BASE_RVA=0x4FD0DC
SELECTOR_COUNT=26


def read_virtual(elf, seg, rva, size):
    for x in seg:
        if x["vaddr"] <= rva and rva+size <= x["vaddr"]+x["size"]:
            p=x["file_offset"]+(rva-x["vaddr"])
            return elf[p:p+size]
    raise ValueError(f"RVA 0x{rva:X} not file-backed")


def parse(elf: bytes) -> dict:
    if hashlib.sha256(elf).hexdigest()!=ELF_SHA:
        raise ValueError("unsupported ELF sha")
    seg=elf_segments(elf)
    ops=window(elf,seg,0x4FD098,0,0x520)
    code={pc:{"pc":pc,"mnemonic":mn,"operands":op,"opcode_le":raw}
          for pc,mn,op,raw in ops}
    required={
        0x4FD098:("bl","#0x4fd784"),
        0x4FD0B8:("cmp","#0x19"),
        0x4FD0BC:("b.hi","#0x4fd0e4"),
        0x4FD0D0:("ldrb","[x9, x8]"),
        0x4FD0D4:("add","lsl #2"),
        0x4FD0D8:("br","x10"),
    }
    for pc,(mn,term) in required.items():
        v=code.get(pc)
        if not v or v["mnemonic"]!=mn or term not in v["operands"]:
            raise ValueError(f"item Native jump table anchor bad at 0x{pc:X}: {v}")
    lookup=read_virtual(elf,seg,TABLE_RVA,SELECTOR_COUNT)
    native_getters={f[1]:f for f in FIELDS}
    routes=[]
    for selector, entry in enumerate(lookup):
        dest=TARGET_BASE_RVA+entry*4
        insn=code.get(dest)
        if not insn:raise ValueError(f"jump selector {selector} lands in invalid instruction at 0x{dest:X}")
        native=native_getters.get(dest)
        routes.append({
            "property_selector_u8":selector,
            "table_byte_raw_u8":entry,
            "destination_rva":f"0x{dest:X}",
            "destination_opcode":insn["opcode_le"],
            "destination_instruction":insn["mnemonic"]+" "+insn["operands"],
            "direct_field_getter_rva":f"0x{native[1]:X}" if native else None,
            "direct_field_record_offset":native[5] if native else None,
            "direct_field_width_bits":native[6] if native else None,
            "pkNX_cross_reference_or_unknown":native[0] if native else "not directly matched to known basic Getter entry",
        })
    return {"elf_sha256":ELF_SHA,
            "selector_dispatch_rva":"0x4FD0B8",
            "dispatch_table_rva":f"0x{TABLE_RVA:X}",
            "selector_count":SELECTOR_COUNT,
            "dispatch_base_rva":f"0x{TARGET_BASE_RVA:X}",
            "selector_input_register":"w1",
            "dispatch_target_formula":"0x4FD0DC + (byte_at_0x657FCC[selector] << 2)",
            "above_range_branch":"0x4FD0E4; further test of raw byte record+0x15, separate branch logic",
            "verified_dispatch_opcodes":[code[k] for k in required],
            "rows":routes,
            "limitations":"Selector destination is exact opcode. Direct known Getter only when target exactly equals its verified entry; other cases need branch/SSA tracing. Business names external pkNX labels."}


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    args=p.parse_args()
    data=parse(args.elf.read_bytes())
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(data,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"selector_count":data["selector_count"],
      "matching_direct_getters":sum(x["direct_field_getter_rva"] is not None for x in data["rows"]),
      "routes":data["rows"]},ensure_ascii=False))

if __name__=="__main__":
    main()
