#!/usr/bin/env python3
"""P6 original HOME 4.1.0 ELF exact Item8 record pointer getter evidence.

AArch64 opcode proofs support the record pointer formula. Output includes the
true source-to-owner and owner-to-blob path, and addresses + widths.
Consumer field effects after Getter remain a separate analysis question.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window

SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
ASSERTIONS={
  0x4FD67C:("bl","#0x5020a0"),
  0x4FD6A4:("bl","#0x13bb0"),
  0x4FD6C0:("str","[x19, #0x58]"),
  0x4FD764:("ldr","[x19, #0x58]"),
  0x4FD76C:("ldr","[x8, #0x190]"),
  0x4FD774:("str","[x19, #0x160]"),
  0x4FD78C:("ldr","[x0, #0x160]"),
  0x4FD794:("ldrh","[x8, #2]"),
  0x4FD798:("cmp","uxth"),
  0x4FD7A0:("add","uxth #1"),
  0x4FD7A4:("ldrh","[x8, #4]"),
  0x4FD7A8:("ldrh","[x9, #0x44]"),
  0x4FD7AC:("cmp","w9, w10"),
  0x4FD7B4:("ldr","[x8, #0x40]"),
  0x4FD7B8:("add","x8, x8, x10"),
  0x4FD7BC:("mov","#0x30"),
  0x4FD7C0:("umaddl","w9, w10, x8"),
}
WINDOWS=[
    ("Loader producer and raw-pointer owner",0x4FD65C,0x180),
    ("True item ID to 48-byte record pointer",0x4FD784,0xA0),
    ("Nearby field accessors, separate alias proof required",0x4FD3E0,0xC0),
]


def evidence(elf:bytes)->dict:
    sha=hashlib.sha256(elf).hexdigest()
    if sha!=SHA:raise ValueError("P6 getter RVAs not valid for this ELF build")
    seg=elf_segments(elf)
    rows=[]
    instructions={}
    for label,addr,length in WINDOWS:
        ins=window(elf,seg,addr,0,length)
        rows.append({"name":label,"rva":addr,
                     "instructions":[{"pc":pc,"mnemonic":mn,"operands":op,"opcode_bytes_le":raw}
                                     for pc,mn,op,raw in ins]})
        for pc,mn,op,raw in ins:instructions[pc]=(mn,op)
    for addr,(mn,fragment) in ASSERTIONS.items():
        ins=instructions.get(addr)
        if ins is None or ins[0]!=mn or fragment not in ins[1]:
            raise ValueError(f"native getter opcode assertion failed 0x{addr:X}: {ins}")
    return {
      "elf_sha256":sha,
      "getter_rva":"0x4FD784",
      "record_pointer_formula":"blob + read_u32(blob+0x40) + read_u16(blob+0x44+2*uxth(item_id))*0x30",
      "native_item_capacity_check_offset":2,
      "native_record_index_count_offset":4,
      "native_record_base_header_offset":0x40,
      "native_index_array_header_offset":0x44,
      "stride":0x30,
      "native_item_logical_count_header0_checked":False,
      "evidence_level":"ORIGINAL_ELF_DIRECT: byte-accurate owner source and record pointer getter",
      "unproven":"Independent record field Price/Pouch/Effect consumers; adjacent getters are not proved to alias record pointer",
      "verified_opcode_count":len(ASSERTIONS),
      "windows":rows,
    }


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    o=evidence(a.elf.read_bytes())
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"sha":o["elf_sha256"],"getter":o["getter_rva"],
                      "verified_opcode_count":o["verified_opcode_count"],
                      "output":str(a.out)}))

if __name__=="__main__":
    main()
