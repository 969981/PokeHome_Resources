#!/usr/bin/env python3
"""Read original integer translation tables exposed by icon selector instructions."""
import argparse, hashlib, json, struct
from pathlib import Path
from home41_image_reverse_index import NCA, ELF_SHA
from home41_elf_resource_xrefs import elf_segments, signed
from home41_elf_disasm_windows import window

def audit(raw, candidates):
    if hashlib.sha256(raw).hexdigest()!=ELF_SHA or candidates["elf_sha256"]!=ELF_SHA: raise ValueError("ELF provenance")
    segs=elf_segments(raw)
    def read(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+va-s["vaddr"];return raw[p:p+n]
        raise ValueError("unmapped")
    def table(va,n,fmt):return list(struct.unpack("<"+fmt*n,read(va,struct.calcsize(fmt)*n)))
    expected={"origin_color":(0x783aa0,12),"origin_normal":(0x783b70,12),"language":(0x783df8,10),"version":(0x784c10,25)}
    keys={}
    for d,(va,n) in expected.items():
        r=[r for r in candidates["pointer_runs"] if r["domain"]==d and r["base_va"]==va and r["stride"]==8]
        if len(r)!=1 or len(r[0]["entries"])!=n:raise ValueError("pointer run baseline")
        keys[d]=[e["text"] for e in r[0]["entries"]]
    origin=table(0x63a7f0,12,"i")
    lang=table(0x63a878,11,"Q")
    version=table(0x63a948,34,"i")
    if any(not 0<=n<12 for n in origin) or any(not 0<=n<25 for n in version):raise ValueError("translation range")
    valid_lang=[i for i in range(1,12) if (0x7df>>(i-1))&1]
    if any(not 0<=lang[i-1]<10 for i in valid_lang):raise ValueError("language range")
    report=dict(elf_sha256=ELF_SHA,scope="verified static selector input domains; record field semantics and current game consumers require caller proof",pointer_tables=keys,origin_table_va=0x63a7f0,origin_rows=[dict(input=i,index=n,normal=keys["origin_normal"][n],color=keys["origin_color"][n]) for i,n in enumerate(origin)],origin_above_11_fallback=2,language_table_va=0x63a878,language_raw_table=lang,language_rows=[dict(input=i,index=lang[i-1],key=keys["language"][lang[i-1]]) for i in valid_lang],version_table_va=0x63a948,version_rows=[dict(input=i+24,index=n,key=keys["version"][n]) for i,n in enumerate(version)],version_outside_range_fallback=0,version_display_rows=[dict(index=i,key=k) for i,k in enumerate(keys["version"])])
    targets={0x2c5654,0x2c594c,0x2c596c,0x2c6808,0x2c68d8,0x6a6f8,0x2d5144,0x2d5154,0x2d5164,0x2d0ed4}
    callers=[]
    for s in segs:
        if not s["executable"]:continue
        for rel in range(0,s["size"]-3,4):
            pc=s["vaddr"]+rel;op=struct.unpack_from("<I",raw,s["file_offset"]+rel)[0]
            if op&0x7c000000!=0x14000000:continue
            dst=pc+(signed(op&0x3ffffff,26)<<2)
            if dst in targets:callers.append(dict(pc=pc,target=dst,kind="BL" if op&0x80000000 else "B"))
    report["direct_callers"]=callers
    return report,segs

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--candidates",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    raw=(a.root/NCA/"0/main.elf").read_bytes()
    report,segs=audit(raw,json.loads(a.candidates.read_text()));a.out.mkdir(parents=True,exist_ok=True)
    (a.out/"native_icon_tables.json").write_text(json.dumps(report,indent=2)+"\n")
    pcs={r["pc"] for r in report["direct_callers"]}|{0x2c5654,0x2c594c,0x2c596c,0x2c6808,0x2c68d8,0x6a6f8,0x2d5144,0x2d5154,0x2d5164,0x2d0ed4}
    lines=["# Native icon translation table consumers","",ELF_SHA]
    for pc in sorted(pcs):
        lines += ["",f"## {pc:#x}","","~~~asm"]+[f"{v:08x} {h} {m} {o}" for v,m,o,h in window(raw,segs,pc,0x60,0x100)]+["~~~"]
    (a.out/"native_icon_callers.md").write_text("\n".join(lines)+"\n")
    print(json.dumps({k:v for k,v in report.items() if k!="direct_callers"}))
    print("Direct callers:",len(report["direct_callers"]))
if __name__=="__main__":main()
