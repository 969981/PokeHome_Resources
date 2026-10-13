#!/usr/bin/env python3
"""P7 native HOME ItemSprite rendering path, proven by real ELF consumer.

The item-icon adapter calls the exact Item8 selector #4 (signed I16 at
record+0x1A), checks the sign, uses the format-string branch for >=0,
and a literal fallback string for -1, before forwarding to 0x2D0ED4.

No UI behavior beyond these Native dataflow instructions is inferred.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window
from home41_item8_semantic import decode_item8_semantic

ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
TEXT_TEMPLATE_RVA=0x616BA7
FALLBACK_RVA=0x60AFF3
SELECTOR=4
CHECK={
    0x2C3040:("bl","#0x4fd4f8"),
    0x2C3054:("bl","#0x4fd80c"),
    0x2C3058:("mov","w23, w0"),
    0x2C306C:("tbnz","w23, #0x1f"),
    0x2C3074:("add","x2, x2, #0xba7"),
    0x2C3084:("bl","#0x5f66f0"),
    0x2C308C:("adrp","#0x60a000"),
    0x2C3090:("add","#0xff3"),
    0x2C30B8:("bl","#0x2d0ed4"),
    0x4FD82C:("mov","w1, #4"),
    0x4FD830:("bl","#0x4fd0b8"),
    0x4FD130:("ldrsh","[x8, #0x1a]"),
}


def virtual(elf,segs,addr,length):
    for s in segs:
        if s["vaddr"]<=addr and addr+length<=s["vaddr"]+s["size"]:
            p=s["file_offset"]+addr-s["vaddr"]
            return elf[p:p+length]
    raise ValueError(f"Native string offset {addr:#x} not file backed")


def cstring(elf,segs,addr,max_bytes=300):
    b=virtual(elf,segs,addr,max_bytes).split(b"\x00",1)[0]
    if not b or any(x<32 or x>=127 for x in b):
        raise ValueError(f"non-ASCII Sprite path bytes: {b[:60]!r}")
    return {"virtual_address":f"0x{addr:X}","ascii":b.decode("ascii"),"bytes_hex":b.hex()}


def analyze(elf:bytes,item:bytes):
    sha=hashlib.sha256(elf).hexdigest()
    if sha!=ELF_SHA:
        raise ValueError("Only verified HOME 4.1.0 ELF offsets supported")
    seg=elf_segments(elf)
    ins=[]
    for start,before,after in ((0x2C3040,0x2C,0x90),(0x4FD82C,0x20,0x28),(0x4FD130,0x10,0x10)):
        ins+=window(elf,seg,start,before,after)
    codes={pc:(mn,op,hx) for pc,mn,op,hx in ins}
    for pc,(mn,part) in CHECK.items():
        got=codes.get(pc)
        if got is None or got[0]!=mn or part not in got[1]:
            raise ValueError(f"ItemSprite native consumer opcode invalid at 0x{pc:X}: {got}")
    template=cstring(elf,seg,TEXT_TEMPLATE_RVA,200)
    fallback=cstring(elf,seg,FALLBACK_RVA,64)
    items=decode_item8_semantic(item)["rows"]
    negative=[r["item_id"] for r in items if r["item_sprite_native_i16"]<0]
    return {
        "original_elf_sha256":sha,
        "item_dat_sha256":hashlib.sha256(item).hexdigest(),
        "business_consumer":"Native item sprite ID to formatted asset path / fallback path",
        "asset_path_adapter_rva":"0x2C3018",
        "item_data_sprite_accessor_rva":"0x4FD80C",
        "selected_item_property":SELECTOR,
        "native_sprite_getter_rva":"0x4FD12C",
        "source_record_offset":0x1A,
        "source_value_type":"signed int16 (LDRSH)",
        "negative_sentinel_check_opcode_rva":"0x2C306C",
        "format_string_source":template,
        "fallback_string_source":fallback,
        "formatted_path_callback_rva":"0x5F66F0",
        "formatted_or_fallback_path_sink_rva":"0x2D0ED4",
        "logical_item_count":len(items),
        "negative_sprite_id_count":len(negative),
        "negative_sprite_item_ids_first_20":negative[:20],
        "real_item_samples":[{"item_id":r["item_id"],"sprite_i16":r["item_sprite_native_i16"],
                             "pouch_name_pkNX":r["pouch_name_pkNX"]}
                             for r in (items[2],items[17],items[100])],
        "native_opcode_sites_checked":len(CHECK),
        "evidence_opcodes":[{"rva":f"0x{pc:X}","mnemonic":mn,"operands":op,"bytes_le":hx}
                            for pc,mn,op,hx in ins],
        "limitations":"Confirms source-to-string/sink flow, not that the sink is always an actual in-game visible icon or any combat effect."
    }


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--item",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    d=analyze(a.elf.read_bytes(),a.item.read_bytes())
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"native_proven":d["native_opcode_sites_checked"],
                      "item_sprite_format":d["format_string_source"]["ascii"],
                      "fallback":d["fallback_string_source"]["ascii"],
                      "negative_sprite_item_ids":d["negative_sprite_id_count"]},
                     ensure_ascii=False))
if __name__=="__main__":
    main()
