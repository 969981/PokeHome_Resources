#!/usr/bin/env python3
"""Locate default Core/SideData storage and direct address references; read-only."""
import argparse, hashlib, json, struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments, signed
from home41_image_reverse_index import ELF_SHA, NCA

OBJECTS = [
    ("core",0xb15db2,0xc4,None),
    ("side1",0xb15e78,0x3f,0x36),
    ("side2",0xb15eb7,0x48,0x3f),
    ("side3",0xb15eff,0x40,0x27),
    ("side4",0xb15f3f,0x2f,0x26),
    ("side5",0xb15f6e,0x4a,0x1b),
    ("side7",0xb15fb8,0x40,0x37),
]
# No Tag6 default location is asserted: ball branch returns zero directly.

def audit(raw):
    if hashlib.sha256(raw).hexdigest()!=ELF_SHA:
        raise ValueError("ELF SHA mismatch")
    segs=elf_segments(raw)
    objects=[]
    for name,va,size,ball in OBJECTS:
        s=next((s for s in segs if s["vaddr"]<=va and va+size<=s["vaddr"]+s["memory_size"]),None)
        row=dict(name=name,va=hex(va),size=size,ball_offset=ball)
        if s is None:
            row["storage"]="unmapped"
        elif va+size<=s["vaddr"]+s["size"]:
            p=s["file_offset"]+va-s["vaddr"]
            row.update(storage="file_backed",initial_bytes=raw[p:p+size].hex())
        elif va>=s["vaddr"]+s["size"]:
            row.update(storage="zero_fill_at_load",initial_bytes="00"*size)
        else:
            row["storage"]="mixed"
        row["runtime_value_status"]="not_proven"
        objects.append(row)
    targets={va:name for name,va,_,_ in OBJECTS}
    pages={va&~0xfff for va in targets}
    refs=[]
    for s in segs:
        if not s["executable"]: continue
        off=s["file_offset"]
        for rel in range(0,s["size"]-3,4):
            op=struct.unpack_from("<I",raw,off+rel)[0]
            if op&0x9f000000!=0x90000000: continue
            pc=s["vaddr"]+rel
            imm=((op>>29)&3)|(((op>>5)&0x7ffff)<<2)
            page=(pc&~4095)+(signed(imm,21)<<12)
            if page not in pages: continue
            reg=op&31
            for delta in range(1,13):
                if rel+delta*4+4>s["size"]: break
                nextop=struct.unpack_from("<I",raw,off+rel+delta*4)[0]
                if nextop&0xff000000==0x91000000 and (nextop>>5)&31==reg:
                    addr=page+(((nextop>>10)&4095)<<(12 if nextop&(1<<22) else 0))
                    if addr in targets:
                        refs.append(dict(pc=hex(pc),add_pc=hex(pc+delta*4),target=hex(addr),object=targets[addr]))
    return dict(elf_sha256=ELF_SHA,objects=objects,references=refs,scope="Load-time storage and address materialization candidates only, not proven writers or runtime default values.")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    raw=(a.root/NCA/"0/main.elf").read_bytes()
    report=audit(raw)
    a.out.mkdir(parents=True,exist_ok=True)
    (a.out/"default_objects.json").write_text(json.dumps(report,indent=2)+"\n")
    segs=elf_segments(raw)
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM); md.skipdata=True
    lines=["# Default object address materialization windows","",ELF_SHA,""]
    for r in report["references"]:
        pc=int(r["pc"],16)
        for s in segs:
            if not s["executable"] or not s["vaddr"]<=pc<s["vaddr"]+s["size"]: continue
            begin=max(s["vaddr"],pc-0x40);end=min(s["vaddr"]+s["size"],pc+0x100)
            p=s["file_offset"]+begin-s["vaddr"]
            lines.extend([f'## {r["object"]} {pc:#x}',"","~~~asm"])
            lines.extend(f"{i.address:08x} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}" for i in md.disasm(raw[p:p+end-begin],begin))
            lines.extend(["~~~",""]);break
    (a.out/"default_object_windows.md").write_text("\n".join(lines))
    print(json.dumps({"objects":[{k:v for k,v in r.items() if k!="initial_bytes"} for r in report["objects"]],"references":len(report["references"])}))

if __name__=="__main__": main()
