#!/usr/bin/env python3
"""Extract SHA-qualified ARM64 evidence for image producers and ball dispatch."""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments, signed
from home41_image_reverse_index import ELF_SHA, NCA

TARGETS=(0x105D60,0x206BC4,0x5312F0,0x522F84,0x518760,0x50F6E0,
         0x50EC80,0x5300E0,0x516C70,0x206734,0x5312E0,0x6B220,
         0x94B7C,0x207E54,0x15B7C8,0xAF924,0x50E7F8,0x531008,
         0x531010,0x53378C,0x534538,0x533B34,0x534578,0x5319D4,
         0x531324,0x515940,0x51AE24,0x5497F4,0x5229B0,0x14AD0,0x15190)

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    raw=(a.root/NCA/"0/main.elf").read_bytes()
    if hashlib.sha256(raw).hexdigest()!=ELF_SHA:
        raise ValueError("ELF SHA mismatch")
    segs=elf_segments(raw)
    a.out.mkdir(parents=True,exist_ok=True)
    def read(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                i=s["file_offset"]+va-s["vaddr"]
                return raw[i:i+n]
        raise ValueError(f"unmapped file-backed VA {va:#x}")
    tables=[]
    # Ghidra VAs minus 0x100000. Signed relative offsets / scaled byte offsets.
    for label,va,base,n,fmt,scale in (
        ("side_ball_dispatch",0x65a62c,0x518830,7,"i",1),
        ("side_presence_dispatch",0x65a530,0x50eca8,7,"B",4),
        ("game_ball_conversion",0x62548f,0x6b248,10,"B",4)):
        b=read(va,n*struct.calcsize("<"+fmt))
        values=struct.unpack("<"+fmt*n,b)
        tables.append(dict(label=label,table_va=hex(va),base_va=hex(base),
                           raw_hex=b.hex(),entries=[dict(index=i,value=x,target=hex(base+x*scale)) for i,x in enumerate(values)]))
    refs=[]
    for s in segs:
        if not s["executable"]: continue
        for i in range(0,s["size"]-3,4):
            op=struct.unpack_from("<I",raw,s["file_offset"]+i)[0]
            kind=op&0xfc000000
            if kind not in (0x94000000,0x14000000): continue
            pc=s["vaddr"]+i
            dest=pc+(signed(op&0x3ffffff,26)<<2)
            if dest in TARGETS:
                refs.append(dict(pc=hex(pc),target=hex(dest),opcode=f"{op:08x}",kind="BL" if kind==0x94000000 else "B"))
    missing=read(0x61e360,64).split(b"\0",1)[0]
    report=dict(elf_sha256=ELF_SHA,tables=tables,game_group_raw=read(0x62596c,13).hex(),
                missing_species_raw_hex=missing.hex(),missing_species_ascii=missing.decode("ascii",errors="replace"),
                refs=refs,scope="Static evidence; dispatch targets need semantic and control-flow review.")
    (a.out/"producer_evidence.json").write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    md.skipdata=True
    windows=[(x,0x240,"entry") for x in TARGETS]
    windows.extend((int(e["target"],16),0x200,t["label"]) for t in tables for e in t["entries"])
    windows.extend((max(0,int(r["pc"],16)-0x80),0x100,"direct caller") for r in refs if int(r["target"],16) in (0x105D60,0x5312F0,0x6B220))
    lines=["# Image producer and ball dispatch raw windows","",ELF_SHA,""]
    for va,n,label in windows:
        try: b=read(va,n)
        except ValueError as e:
            lines.extend([f"## {label} {va:#x}",str(e),""])
            continue
        lines.extend([f"## {label} {va:#x}","","~~~asm"])
        lines.extend(f"{i.address:08x} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}" for i in md.disasm(b,va))
        lines.extend(["~~~",""])
    (a.out/"producer_windows.md").write_text("\n".join(lines),encoding="utf-8")
    print(json.dumps(dict(tables=len(tables),direct_refs=len(refs),missing_species_raw_hex=missing.hex())))

if __name__=="__main__":
    main()
