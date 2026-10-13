#!/usr/bin/env python3
"""P8 read-only original HOME ELF address-taken / indirect item Getter audit.

This is a *separate* audit from P7 BL/B direct-call graph: scan ADR, ADRP+ADD
and ELF relocation entries for address-taken references to Item8 accessors.
Inspect BLR/BR sites only as indirect *candidates*; never mistake them for
proved calls to Item8. No source binary is modified.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments

ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
TARGETS={
    "item_record_wrapper":"0x4FD06C",
    "item_property_dispatch":"0x4FD0B8",
    "item_effect_extended_dispatch":"0x4FD270",
    "item_property_by_id":"0x4FD48C",
    "item_sprite_by_id":"0x4FD80C",
    "item_header_pouch_count":"0x4FD854",
    "item_record_pointer":"0x4FD784",
}
RANGE_LOW=0x4FD000
RANGE_HIGH=0x4FD900


def signed(n,bits):
    return n-(1<<bits) if n & (1<<(bits-1)) else n


def region(data,segments,virtual,n):
    for s in segments:
        if s["vaddr"]<=virtual and virtual+n<=s["vaddr"]+s["size"]:
            pos=s["file_offset"]+virtual-s["vaddr"]
            return data[pos:pos+n]
    return None


def program_headers(data):
    phoff=struct.unpack_from("<Q",data,32)[0]
    entsize,number=struct.unpack_from("<HH",data,54)
    if phoff+entsize*number>len(data):
        raise ValueError("invalid program header table")
    return [
        dict(zip(("type","flags","offset","vaddr","paddr","filesz","memsz","align"),
                 struct.unpack_from("<IIQQQQQQ",data,phoff+i*entsize)))
        for i in range(number)
    ]


def scan_executable(data,segments):
    results=[];indirect=[];nwords=0;pages={x & ~4095 for x in range(RANGE_LOW,RANGE_HIGH,4096)}
    # Include all pages overlapped by target range, not just exact target starts.
    pages={x & ~4095 for x in range(RANGE_LOW,RANGE_HIGH,4)}
    for seg in segments:
        if not seg["executable"]:continue
        base=seg["file_offset"];size=seg["size"];va=seg["vaddr"]
        nwords+=size//4
        for off in range(0,size-3,4):
            pc=va+off
            word=struct.unpack_from("<I",data,base+off)[0]
            if word & 0x9F000000==0x10000000:   # ADR, PC relative
                imm=((word>>29)&3)|(((word>>5)&0x7FFFF)<<2)
                addr=pc+signed(imm,21)
                if RANGE_LOW<=addr<RANGE_HIGH:
                    results.append({
                        "kind":"ADR","pc":f"0x{pc:X}",
                        "target":f"0x{addr:X}",
                        "register":word&31,
                        "opcode_le":word.to_bytes(4,"little").hex(),
                        "strength":"PC-relative target address; may be control-flow table base, not a callable function",
                    })
            if word & 0x9F000000==0x90000000:  # ADRP + ADD
                imm=((word>>29)&3)|(((word>>5)&0x7FFFF)<<2)
                page=(pc&~4095)+(signed(imm,21)<<12)
                if page in pages:
                    r=word&31
                    for d in range(1,17):
                        if off+d*4+4>size:break
                        later=struct.unpack_from("<I",data,base+off+d*4)[0]
                        if later & 0xFF000000!=0x91000000:continue
                        if ((later>>5)&31)!=r:continue
                        shift=12 if (later>>22)&1 else 0
                        addr=page+(((later>>10)&0xFFF)<<shift)
                        if RANGE_LOW<=addr<RANGE_HIGH:
                            results.append({
                                "kind":"ADRP+ADD","pc":f"0x{pc:X}",
                                "add_pc":f"0x{pc+d*4:X}",
                                "target":f"0x{addr:X}",
                                "register":later&31,
                                "inter_instruction_gap":d,
                                "opcode_le":word.to_bytes(4,"little").hex(),
                                "add_opcode_le":later.to_bytes(4,"little").hex(),
                                "strength":"candidate; must validate register SSA and runtime use",
                            })
            # BLR Xn: mask away register field and optional auth variants.
            if word & 0xFFFFFC1F==0xD63F0000:
                if (0x4FC000<=pc<0x503000 or 0x266000<=pc<0x267000 or
                    0x2C3000<=pc<0x2C3100):
                    indirect.append({
                        "pc":f"0x{pc:X}","instruction":"BLR",
                        "reg":(word>>5)&31,
                        "opcode_le":word.to_bytes(4,"little").hex(),
                        "target_proven":False,
                    })
    return results,indirect,nwords


def relocation_scan(data,segments):
    # ELF64 SHT_RELA and PT_DYNAMIC parsers permit stripped section headers.
    shoff=struct.unpack_from("<Q",data,40)[0]
    shentsize,shnum=struct.unpack_from("<HH",data,58)
    sources=[];relocations=[];seen=set()
    if shoff and shnum and shentsize>=64 and shnum<50000 and shoff+shentsize*shnum<=len(data):
        for n in range(shnum):
            st=shoff+n*shentsize
            _,typ,_,_,off,size,_,_,_,entsize=struct.unpack_from("<IIQQQQIIQQ",data,st)
            if typ not in (4,9) or not entsize:continue
            sources.append({"source":"ELF section","number":n,"type":typ,"entries":size//entsize})
            if off+size>len(data):continue
            for i in range(size//entsize):
                p=off+entsize*i
                if typ==4 and entsize>=24:
                    rva,info,addend=struct.unpack_from("<QQq",data,p)
                elif typ==9 and entsize>=16:
                    rva,info=struct.unpack_from("<QQ",data,p)
                    implicit=region(data,segments,rva,8)
                    addend=struct.unpack("<Q",implicit)[0] if implicit else None
                else:continue
                if addend is not None and RANGE_LOW<=addend<RANGE_HIGH:
                    key=(rva,info,addend)
                    if key not in seen:
                        seen.add(key)
                        relocations.append({
                            "relocation_site":f"0x{rva:X}",
                            "target_addend":f"0x{addend:X}",
                            "relocation_type":info&0xFFFFFFFF,
                            "symbol_index":info>>32,
                            "source":"ELF section",
                            "evidence":"relocation addend in Item8 address range; target classification pending",
                        })
    dyns=[h for h in program_headers(data) if h["type"]==2]
    # For each PT_DYNAMIC, collect DT_RELA (7), DT_RELASZ (8), DT_RELAENT (9).
    for h in dyns:
        tags={}
        for off in range(h["offset"],min(h["offset"]+h["filesz"],len(data))-15,16):
            tag,val=struct.unpack_from("<QQ",data,off)
            if tag==0:break
            tags[tag]=val
        addr,size,ent=tags.get(7),tags.get(8),tags.get(9,24)
        if not (addr and size and ent>=24):continue
        sources.append({"source":"PT_DYNAMIC DT_RELA","entries":size//ent})
        for i in range(min(size//ent,1000000)):
            part=region(data,segments,addr+i*ent,24)
            if not part:break
            rva,info,addend=struct.unpack("<QQq",part)
            if RANGE_LOW<=addend<RANGE_HIGH:
                key=(rva,info,addend)
                if key in seen:continue
                seen.add(key)
                relocations.append({
                    "relocation_site":f"0x{rva:X}",
                    "target_addend":f"0x{addend:X}",
                    "relocation_type":info&0xFFFFFFFF,
                    "symbol_index":info>>32,
                    "source":"PT_DYNAMIC DT_RELA",
                    "evidence":"relocation addend in Item8 address range; target classification pending",
                })
    return sources,relocations


def run(elf:bytes)->dict:
    sha=hashlib.sha256(elf).hexdigest()
    if sha!=ELF_SHA:raise ValueError("ELF SHA differs from pinned HOME 4.1.0")
    segs=elf_segments(elf)
    addr,indirect,nwords=scan_executable(elf,segs)
    sources,relocations=relocation_scan(elf,segs)
    exact_targets={int(v,16):k for k,v in TARGETS.items()}
    return {
        "original_elf_sha256":sha,
        "target_function_starts":TARGETS,
        "target_range":[f"0x{RANGE_LOW:X}",f"0x{RANGE_HIGH:X}"],
        "executable_code_words_scanned":nwords,
        "address_taken_pc_relative_candidate_count":len(addr),
        "address_taken_pc_relative_candidates":[{
            **r,"exact_target_function":exact_targets.get(int(r["target"],16))}
            for r in addr
        ],
        "relocation_sources":sources,
        "relocation_to_item_address_candidate_count":len(relocations),
        "relocation_to_item_address_candidates":relocations,
        "local_blr_indirect_sites":indirect,
        "local_blr_count":len(indirect),
        "limitations":[
            "ADR/ADRP+ADD candidates may point into instruction jump tables rather than callable entrypoints",
            "ADRP+ADD 16-instruction scan does not establish register liveness / alias",
            "Address-taken and relocation scans exclude runtime-generated/obfuscated pointers and external game executables",
            "BLR sites prove an indirect call exists but not the target; no gameplay semantics should be inferred",
            "Raw ELF relocation addends are not automatically resolved virtual vtables",
        ],
    }


def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--elf",type=Path,required=True)
    ap.add_argument("--out",type=Path,required=True)
    args=ap.parse_args()
    doc=run(args.elf.read_bytes())
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(doc,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({
        "sha":doc["original_elf_sha256"],
        "code_words":doc["executable_code_words_scanned"],
        "pc_ref_candidates":doc["address_taken_pc_relative_candidate_count"],
        "relocation_refs":doc["relocation_to_item_address_candidate_count"],
        "blr_local":doc["local_blr_count"],
        "targets":[(x["pc"],x["target"],x["exact_target_function"])
                   for x in doc["address_taken_pc_relative_candidates"][:40]],
        "relocation_sources":doc["relocation_sources"],
    },ensure_ascii=False))


if __name__=="__main__":
    main()
