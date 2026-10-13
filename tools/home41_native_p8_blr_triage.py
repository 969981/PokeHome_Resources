#!/usr/bin/env python3
"""P8 PML Item8 0x4FD000..0x4FD900 BLR virtual-call context triage.

One BLR x8 by itself is NOT an xref to 0x4FD0B8. Capture real register
producers and vtable slot loads, and explicitly classify as unresolved.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window

ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
RANGE=(0x4FD000,0x4FD900)
EXPECTED_BLR=(0x4FD5D8,0x4FD634,0x4FD6B8,0x4FD6D8,0x4FD710,
              0x4FD72C,0x4FD760,0x4FD8D8,0x4FD8F0)

def inspect(elf:bytes,prior:dict)->dict:
    sha=hashlib.sha256(elf).hexdigest()
    if sha!=ELF_SHA or prior["original_elf_sha256"]!=sha:
        raise ValueError("Original ELF / P8 xrefs sha mismatch")
    x=prior["local_blr_indirect_sites"]
    locals_in_range=sorted(int(r["pc"],16) for r in x
                           if RANGE[0]<=int(r["pc"],16)<RANGE[1])
    if tuple(locals_in_range)!=EXPECTED_BLR:
        raise ValueError("PML native BLR inventory changed")
    seg=elf_segments(elf)
    rows=[]
    for pc in EXPECTED_BLR:
        ins=window(elf,seg,pc,0x20,0x10)
        byaddr={addr:(mn,op,hx) for addr,mn,op,hx in ins}
        if pc not in byaddr or byaddr[pc][:2]!=("blr","x8"):
            raise ValueError(f"Native BLR does not use x8 at 0x{pc:X}")
        before=[(addr,mn,op,hx) for addr,mn,op,hx in ins if addr<pc]
        preceding_load=[
            (addr,mn,op,hx)
            for addr,mn,op,hx in before if
            (mn.startswith("ldr") and op.startswith("x8,"))
        ]
        producer=preceding_load[-1] if preceding_load else None
        # Verify the actual indirect callee comes from interface slots, or
        # the callback member +0xE8. The final case is not a vtable load.
        if pc == 0x4FD8F0:
            expected=("ldr","x8, [x19, #0xe8]")
            expected_source_class="owner_callback_member_0xE8"
        elif pc == 0x4FD6D8:
            expected=("ldr","x8, [x8, #0x10]")
            expected_source_class="object_interface_slot_0x10"
        else:
            expected=("ldr","x8, [x8, #0x18]")
            expected_source_class="object_interface_slot_0x18"
        if not producer or (producer[1],producer[2])!=expected:
            raise ValueError(f"BLR true x8 source mismatch at 0x{pc:X}: {producer}")
        rows.append({
            "native_blr_rva":f"0x{pc:X}",
            "blr_argument_register":"x8",
            "last_load_into_x8":(
                {"rva":f"0x{producer[0]:X}","mnemonic":producer[1],
                 "operands":producer[2],"bytes_le":producer[3]}
                if producer else None
            ),
            "neighbor_instructions":[
                {"rva":f"0x{addr:X}","mnemonic":mn,"operands":op,"bytes_le":raw}
                for addr,mn,op,raw in ins
            ],
            "target_source_class":expected_source_class,
            "is_direct_item_property_dispatch":False,
            "resolved_target":None,
            "confirmed_item_property_or_battle_effect_call":False,
            "note":"Register-derived BLR, target requires exact live object and vtable values.",
        })
    return {
        "elf_sha256":sha,
        "source_indirect_scan":"derived/4.1.0/native_item_topics/p8_item_indirect_xrefs.json",
        "raw_local_blr_sites":len(rows),
        "interface_slot_0x18_sites":sum(
            r["target_source_class"]=="object_interface_slot_0x18" for r in rows
        ),
        "interface_slot_0x10_sites":sum(
            r["target_source_class"]=="object_interface_slot_0x10" for r in rows
        ),
        "owner_callback_sites":sum(
            r["target_source_class"]=="owner_callback_member_0xE8" for r in rows
        ),
        "direct_item_property_dispatch_call_count":2,
        "item_effect_selector_26_to_70_consumer_confirmed":False,
        "rows":rows,
        "limitations":(
            "BLR target registers cannot be statically labelled "
            "by a small window; exact vtable/context object alias must be "
            "proven before item effect or gameplay conclusions."
        ),
    }

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--elf",type=Path,required=True)
    ap.add_argument("--upstream",type=Path,required=True)
    ap.add_argument("--out",type=Path,required=True)
    args=ap.parse_args()
    report=inspect(args.elf.read_bytes(),json.loads(args.upstream.read_text()))
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n")
    print(json.dumps({
        "sha":report["elf_sha256"],
        "local_blr":report["raw_local_blr_sites"],
        "last_loads":[(row["native_blr_rva"],row["last_load_into_x8"]["operands"]
                       if row["last_load_into_x8"] else None)
                      for row in report["rows"]]
    },ensure_ascii=False))

if __name__=="__main__":
    main()
