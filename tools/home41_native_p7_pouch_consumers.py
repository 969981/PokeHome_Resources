#!/usr/bin/env python3
"""P7 Native HOME 4.1.0 Item8 bag consumer, capacity and packed slot audit.

Original ROMFS source and exact ELF SHA are both required. The Pouch reader is
proven by *consumer* call: 0x266D48 supplies selector 14 to 0x4FD48C, then
0x266D64.. branches by 0..8, choosing a bag pointer and per-bag capacity.

Source header at +0x20 contains **counts of distinct item records per pouch**,
NOT bag slot capacities: the two arrays intentionally differ.
"""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib
import json
import struct
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window
from home41_item8_semantic import POUCH_NAMES

ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
ITEM_COUNT=1829
RECORD_COUNT=1166
PIVOT=0x266D80
TABLE=0x634FFC
CASE_DEFINITIONS=(
    (0,0x266D80,0x2650,60),
    (1,0x266D98,0x2658,30),
    (2,0x266DB0,0x2660,20),
    (3,0x266DC8,0x2668,80),
    (4,0x266DE0,0x2670,550),
    (5,0x266DF8,0x2678,210),
    (6,0x266E10,0x2680,100),
    (7,0x266E28,0x2688,100),
    (8,0x266E40,0x2690,64),
)

ANCHORS={
    0x266D48:("mov","w1, #0xe"),
    0x266D50:("mov","w0, w21"),
    0x266D58:("bl","#0x4fd48c"),
    0x266D5C:("cmp","w0, #8"),
    0x266D74:("ldrb","[x9, x8]"),
    0x266D7C:("br","x10"),
    0x266E60:("ldr","[x8, x10, lsl #2]"),
    0x266E64:("and","#0x7fff"),
    0x266EA8:("ubfx","#0xf, #0xf"),
    0x266EAC:("cmp","#0x3e6"),
    0x266EC4:("and","#0xc0007fff"),
    0x266EC8:("orr","lsl #0xf"),
    0x266ED0:("str","[x8, x10, lsl #2]"),
    0x266F30:("str","[x8, x10, lsl #2]"),
    0x4FD854:("and","#0xffff"),
    0x4FD868:("ldrh","[x8, #0x20]"),
}

def at_elf_virtual(raw,segs,rva,n):
    for s in segs:
        if s["vaddr"]<=rva and rva+n<=s["vaddr"]+s["size"]:
            start=s["file_offset"]+rva-s["vaddr"]
            return raw[start:start+n]
    raise ValueError(f"RVA {rva:#x} not covered by ELF file")

def analyze(elf:bytes,item:bytes)->dict:
    sha=hashlib.sha256(elf).hexdigest()
    if sha!=ELF_SHA:
        raise ValueError("different ELF; native case offsets invalid")
    if len(item)!=61092 or struct.unpack_from("<HHH",item,0)!=(1829,1832,1166):
        raise ValueError("item.dat incompatible with verified HOME 4.1.0 schema")
    seg=elf_segments(elf)
    windows=[
        ("bag-quantity write and branch by Native Pouch",0x266D30,0x230),
        ("header per pouch item-count getter",0x4FD854,0x24),
        ("sprite resource consumer candidate",0x2C3018,0xB8),
        ("pouch selector Wrapper",0x4FD48C,0x75),
    ]
    instructions={}
    docs=[]
    for title,base,n in windows:
        w=window(elf,seg,base,0,n)
        docs.append({"name":title,"base_rva":f"0x{base:X}",
                     "instructions":[{"rva":f"0x{pc:X}","mnemonic":mn,"operands":op,"opcode":hx}
                                     for pc,mn,op,hx in w]})
        for pc,mn,op,hx in w:
            instructions[pc]=(mn,op,hx)
    for pc,(mn,part) in ANCHORS.items():
        ins=instructions.get(pc)
        if not ins or ins[0]!=mn or part not in ins[1]:
            raise ValueError(f"source Native instruction mismatch {pc:#x}: {ins}")
    bytes_table=at_elf_virtual(elf,seg,TABLE,len(CASE_DEFINITIONS))
    header_counts=struct.unpack_from("<9H",item,0x20)
    category_counts=Counter((item[5124+r*48+0x11]&15) for r in range(RECORD_COUNT))
    if set(category_counts)!=set(range(9)):
        raise ValueError("unknown non-pouch category in this version")
    result=[]
    for category,target,ptr,limit in CASE_DEFINITIONS:
        actual_target=PIVOT+int(bytes_table[category])*4
        if actual_target!=target:
            raise ValueError(f"pouch switch case {category} differs from Native target: {actual_target:#x}")
        # Cases set w8 to object member address, w9 to slot capacity.
        nearby=[instructions.get(target+4*i) for i in range(5)]
        if not any(x and x[0]=="mov" and x[1]==f"w8, #{ptr:#x}" for x in nearby):
            raise ValueError(f"missing Native bag slot member 0x{ptr:X}")
        if not any(x and x[0]=="mov" and x[1]==f"w9, #{limit:#x}" for x in nearby):
            raise ValueError(f"missing Native bag capacity {limit}")
        if header_counts[category]!=category_counts[category]:
            raise ValueError(f"Native file header category count fails actual record census: {category}")
        result.append({
            "native_pouch_index":category,"pkNX_pouch_name":POUCH_NAMES[category],
            "switch_target_rva":f"0x{target:X}","switch_byte_raw":bytes_table[category],
            "bag_owner_member_offset":ptr,"bag_slot_capacity":limit,
            "unique_48_byte_item_records":category_counts[category],
            "item_dat_header_pouch_count":header_counts[category],
            "capacity_is_distinct_from_catalog_item_count":limit!=header_counts[category],
            "source": "Native item selector14 + 9-way switch + item.dat header and record census"
        })
    return {
        "elf_sha256":sha,
        "item_sha256":hashlib.sha256(item).hexdigest(),
        "native_bag_add_rva":"0x266D30",
        "native_pouch_selector_rva":"0x266D58",
        "native_property_call_rva":"0x4FD48C",
        "native_header_group_counter_getter_rva":"0x4FD854",
        "native_pouch_case_table_rva":"0x634FFC",
        "native_encoded_id_low_bits":15,
        "native_encoded_quantity_bits":[15,29],
        "native_qty_limit_in_existing_entry_path":999,
        "bag_slot_memory_flags_reserved_bits":[30,31],
        "pouch_count":9,
        "unique_record_count":RECORD_COUNT,
        "bag_total_slot_capacity":sum(x[3] for x in CASE_DEFINITIONS),
        "header_per_pouch_total":sum(header_counts),
        "native_anchors_checked":len(ANCHORS),
        "pouches":result,
        "evidence_windows":docs,
        "limitations":(
            "Pouch routing and packed bag slots are directly proven by original ELF; "
            "pkNX names external; capacities are distinct from the catalog counts; "
            "actual battle/item-effect application is not observed."
        ),
    }
def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("--elf",type=Path,required=True)
    parser.add_argument("--item",type=Path,required=True)
    parser.add_argument("--out",type=Path,required=True)
    arg=parser.parse_args()
    data=analyze(arg.elf.read_bytes(),arg.item.read_bytes())
    arg.out.parent.mkdir(parents=True,exist_ok=True)
    arg.out.write_text(json.dumps(data,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({
        "elf":data["elf_sha256"],
        "anchor_count":data["native_anchors_checked"],
        "pouches":[(x["native_pouch_index"],x["item_dat_header_pouch_count"],x["bag_slot_capacity"]) for x in data["pouches"]],
        "record_sum":data["header_per_pouch_total"],
    },ensure_ascii=False))
if __name__=="__main__":
    main()
