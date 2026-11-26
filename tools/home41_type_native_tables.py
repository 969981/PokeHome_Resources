#!/usr/bin/env python3
"""Find type resource pointer/relocation tables and direct consumers in original ELF."""
from __future__ import annotations
import argparse, collections, hashlib, json, re, struct
from pathlib import Path
from home41_image_reverse_index import NCA, ELF_SHA
import home41_elf_resource_xrefs as xr
from home41_elf_disasm_windows import window

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();a.out.mkdir(parents=True,exist_ok=True)
    raw=(a.root/NCA/"0/main.elf").read_bytes()
    if hashlib.sha256(raw).hexdigest()!=ELF_SHA: raise ValueError("ELF SHA mismatch")
    segs=xr.elf_segments(raw)
    xr.NEEDLES=("typeIcon_","typeIcon_text_")
    strings=[s for s in xr.resource_strings(raw,segs) if re.fullmatch(r"typeIcon(?:_text)?_\d\d_[a-z]+_00\^[qo]",s["text"])]
    if len({s["text"] for s in strings})!=36: raise ValueError("expected 36 exact names")
    byva={s["virtual_address"]:s["text"] for s in strings}
    hits={}
    for va,name in byva.items():
        needle=struct.pack("<Q",va); start=0
        while True:
            off=raw.find(needle,start)
            if off<0: break
            start=off+1
            target=xr.file_to_va(segs,off)
            if target is not None and target%8==0:
                hits.setdefault(target,[]).append(dict(kind="raw_u64",name=name,offset=off,string_va=va))
    # Read actual SHT_RELA tables where present; stripped ELF may have none.
    # Also inspect PT_DYNAMIC DT_RELA/DT_RELASZ/DT_RELAENT.
    def va_off(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                return s["file_offset"]+va-s["vaddr"]
        raise ValueError("unmapped relocation range")
    ranges=set(); shoff=struct.unpack_from("<Q",raw,40)[0]; shent,shnum=struct.unpack_from("<HH",raw,58)
    if shoff and shent>=64 and shoff+shent*shnum<=len(raw):
        for i in range(shnum):
            row=struct.unpack_from("<IIQQQQIIQQ",raw,shoff+i*shent)
            if row[1]==4 and row[9]==24 and row[4]+row[5]<=len(raw): ranges.add((row[4],row[5]))
    phoff=struct.unpack_from("<Q",raw,32)[0]; phent,phnum=struct.unpack_from("<HH",raw,54)
    for i in range(phnum):
        typ,flags,off,va,pa,size,mem,align=struct.unpack_from("<IIQQQQQQ",raw,phoff+i*phent)
        if typ!=2: continue
        dyn={}
        for j in range(off,off+size-15,16):
            tag,val=struct.unpack_from("<qQ",raw,j)
            if tag==0: break
            dyn[tag]=val
        if 7 in dyn and 8 in dyn and dyn.get(9,24)==24:
            ranges.add((va_off(dyn[7],dyn[8]),dyn[8]))
    for off,size in sorted(ranges):
        for i in range(off,off+size-23,24):
            target,info,addend=struct.unpack_from("<QQq",raw,i)
            if info&0xffffffff==1027 and addend in byva:
                hits.setdefault(target,[]).append(dict(kind="R_AARCH64_RELATIVE",name=byva[addend],reloc_offset=i,string_va=addend))
    # Relocations override raw values at the same target. Preserve conflicting candidates.
    names={}
    for va,rows in hits.items():
        chosen={r["name"] for r in rows if r["kind"]=="R_AARCH64_RELATIVE"} or {r["name"] for r in rows}
        if len(chosen)==1: names[va]=next(iter(chosen))
    tables=[]
    for stride in (8,16,24,32,40,48):
        for va in sorted(names):
            if va-stride in names: continue
            entries=[]; cur=va
            while cur in names:
                entries.append(dict(slot_va=cur,name=names[cur]));cur+=stride
            if len(entries)>=3:
                tables.append(dict(va=va,stride=stride,entries=entries))
    # Resolve code references to the array bases, not merely to strings.
    targets=[dict(virtual_address=t["va"],text=f'type_pointer_run_{t["va"]:x}_{t["stride"]}') for t in tables]
    refs=xr.find_pc_references(raw,segs,targets)
    lines=["# Type pointer table and loader evidence","",ELF_SHA,""]
    pcs={r["pc"] for r in refs}|{0x2d3afc,0x2d3b98,0x2cc3c4}
    for pc in sorted(pcs):
        lines += [f"## {pc:#x}","","~~~asm"]
        lines += [f"{v:08x} {h} {m} {o}" for v,m,o,h in window(raw,segs,pc,0x60,0x200)]
        lines += ["~~~",""]
    report=dict(elf_sha256=ELF_SHA,strings=strings,relocation_ranges=sorted(ranges),pointer_hits=hits,
                table_candidates=tables,references=refs,
                scope="Pointer runs and nearby ADR/ADRP+ADD candidates; not validated selector or runtime enum. Clobber/relocation semantics require review.")
    (a.out/"type_pointer_tables.json").write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    (a.out/"type_pointer_windows.md").write_text("\n".join(lines),encoding="utf-8")
    print(json.dumps(dict(strings=len(strings),pointer_slots=len(hits),relocation_ranges=len(ranges),table_candidates=len(tables),
                          references=len(refs),runs=[dict(va=hex(t["va"]),stride=t["stride"],count=len(t["entries"])) for t in tables])))
if __name__=="__main__": main()
