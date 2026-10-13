#!/usr/bin/env python3
"""P7 original ELF item-property *upstream* xrefs, not speculative game effects.

AArch64 direct B/BL reverse-index across every executable PT_LOAD 4-byte word.
Additional exact u32/u64 data reference search distinguishes code calls from
possible function address tables. Indirect BLR and runtime registrations cannot
be resolved by a direct-call scan alone; report that limitation explicitly.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import struct
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window

ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
START=0x4FD050
STOP=0x4FD494
ANCHORS={
  "record_getter_wrapper_init":"0x4FD06C",
  "wrapper_record_getter_call":"0x4FD098",
  "selector_dispatch_entry":"0x4FD0A8",
  "26way_selector_compare":"0x4FD0B8",
  "extended_selector_entry":"0x4FD258",
  "extended_selector_45way":"0x4FD270",
  "original_record_pointer_getter":"0x4FD784",
}
def sext(n,bits):
    return n-(1<<bits) if n&(1<<(bits-1)) else n
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    args=p.parse_args()
    raw=args.elf.read_bytes()
    sha=hashlib.sha256(raw).hexdigest()
    if sha!=ELF_SHA:
        raise ValueError("P7 RVAs valid only for pinned HOME ELF")
    segs=elf_segments(raw)
    hits=[];total_code_words=0
    direct_counters={"BL":0,"B":0}
    for s in segs:
        if not s["executable"]:continue
        start_file=s["file_offset"];size=s["size"]
        for off in range(0,size-3,4):
            opcode=struct.unpack_from("<I",raw,start_file+off)[0]
            if opcode & 0xFC000000==0x94000000:
                kind="BL"
            elif opcode & 0xFC000000==0x14000000:
                kind="B"
            else:
                continue
            pc=s["vaddr"]+off
            target=pc+sext(opcode & 0x03FFFFFF,26)*4
            direct_counters[kind]+=1
            if START<=target<STOP or target==0x4FD784:
                hits.append({"callsite_rva":f"0x{pc:X}",
                             "target_rva":f"0x{target:X}",
                             "kind":kind,
                             "code_word_le":f"{opcode:08x}",
                             "is_inside_selector_function":START<=pc<STOP,
                             "is_local_control_flow":0x4FD000<=pc<0x4FD900})
        total_code_words+=size//4
    # Exact literal values are candidate data references only; no relocation
    # semantics assumed. Keep all file offsets and mapped virtual addresses.
    targets=[int(x,16) for x in ANCHORS.values()]
    literal={}
    for target in targets:
        rec=[]
        for width in (4,8):
            needle=target.to_bytes(width,"little",signed=False)
            start=0
            while True:
                at=raw.find(needle,start)
                if at<0:break
                start=at+1
                # Ignore bytes inside the code segment; raw opcode bytes can
                # contain accidental pointer-looking 4-byte patterns.
                seg=next((s for s in segs if s["file_offset"]<=at<s["file_offset"]+s["size"]),None)
                if seg and seg["executable"]:continue
                rec.append({"width_bytes":width,"file_offset":at,
                            "virtual_address":seg["vaddr"]+(at-seg["file_offset"]) if seg else None,
                            "inside_load_segment":bool(seg)})
                if len(rec)>=200:break
        literal[f"0x{target:X}"]=rec
    # Exact disassembly of the function construction, dispatch and effect cases.
    insn=window(raw,segs,0x4FD06C,0x58,0x490)
    doc={
        "elf_sha256":sha, "research_goal":"Upstream callers and registrations of item PML native property dispatch",
        "targets":ANCHORS,
        "code_words_4byte_scanned":total_code_words,
        "all_executable_direct_branch_counts":direct_counters,
        "raw_branch_hits_targeting_item_selector_range":hits,
        "direct_branch_hit_count":len(hits),
        "candidate_literal_function_pointers":literal,
        "local_disassembly":[{"pc":f"0x{pc:X}","mnemonic":mn,"operands":op,"opcode_le":hx}
                             for pc,mn,op,hx in insn],
        "warnings":[
            "B targets within the same function are local control flow, not external usage",
            "Literal data addresses are not proven runtime vtable registrations",
            "BLR/BR through registers are not resolved by direct B/BL reverse-index",
            "HOME's PML item metadata readers need not be in an actual battle engine"
        ]}
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(doc,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    names={int(v,16):k for k,v in ANCHORS.items()}
    summary={"sha":sha,"code_words":total_code_words,"hits":len(hits),
             "bl_hits":[r for r in hits if r["kind"]=="BL"],
             "external_b_hits":[r for r in hits if r["kind"]=="B" and not r["is_local_control_flow"]],
             "literals":{names.get(int(k,16),k):len(v) for k,v in literal.items()}}
    print(json.dumps(summary,ensure_ascii=False))
if __name__=="__main__":
    main()
