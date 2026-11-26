#!/usr/bin/env python3
"""Validate native type pointer selector and complex layout bindings; package deduplicated types."""
from __future__ import annotations
import argparse, hashlib, json, re, struct
from pathlib import Path
from collections import Counter,defaultdict
from home41_type_layout_audit import walk, parse_layout, LANGS, save
from home41_icon_brti_audit import metadata,NCA
from home41_image_reverse_index import ELF_SHA
from home41_full_texture_package import image_info
import home41_elf_resource_xrefs as xr
from home41_elf_disasm_windows import window

BASE=0x784898
SELECTOR=0x2D3DAC
PROFILES={(0x415,88):1,(0x8015,104):1,(0x6A,128):2,(0x80155,212):1,
          (0x815,84):1,(0x215,92):1}
def sha(b): return hashlib.sha256(b).hexdigest()
def load(p): return json.loads(p.read_text(encoding="utf-8"))

def native(root,out):
    raw=(root/NCA/"0/main.elf").read_bytes()
    if sha(raw)!=ELF_SHA: raise ValueError("ELF SHA")
    segs=xr.elf_segments(raw)
    def read(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+va-s["vaddr"];return raw[p:p+n]
        raise ValueError("unmapped VA")
    expected={0x2D3DCC:"882500b0",0x2D3DD0:"08612291",0x2D3DD4:"0811218b",
              0x2D3DE4:"16d962f8",0x2D3DE8:"e10316aa",0x2D3DEC:"8b4d0094"}
    for va,h in expected.items():
        if read(va,4).hex()!=h: raise ValueError("selector instruction changed")
    table=[]
    for i in range(18):
        slots=[]
        for j,kind in enumerate(("symbol","text")):
            va=BASE+16*i+8*j
            ptr=struct.unpack("<Q",read(va,8))[0]
            name=read(ptr,64).split(b"\0",1)[0].decode("ascii")
            pattern=rf"typeIcon{'_text' if j else ''}_{i:02d}_[a-z]+_00\^{ 'o' if j else 'q'}"
            if not re.fullmatch(pattern,name): raise ValueError("pointer table resource order")
            slots.append(dict(kind=kind,slot_va=va,string_va=ptr,raw_name=name))
        table.append(dict(native_display_index=i,slots=slots))
    callers=[]
    for s in segs:
        if not s["executable"]:continue
        for i in range(0,s["size"]-3,4):
            insn=struct.unpack_from("<I",raw,s["file_offset"]+i)[0]
            if insn&0xfc000000 not in (0x14000000,0x94000000):continue
            pc=s["vaddr"]+i
            if pc+(xr.signed(insn&0x3ffffff,26)<<2)==SELECTOR:
                callers.append(dict(pc=pc,opcode=f"{insn:08x}",kind="BL" if insn&0xfc000000==0x94000000 else "B"))
    lines=["# Native type display selector callers","",ELF_SHA,"",
           "Display ordinal is proven; caller conversion and PKM enum are not assumed.",""]
    for c in callers:
        lines += [f'## {c["pc"]:#x}',"","~~~asm"]
        lines += [f"{a:08x} {h} {m} {o}" for a,m,o,h in window(raw,segs,c["pc"],0x100,0x80)]
        lines += ["~~~",""]
    (out/"native_type_callers.md").write_text("\n".join(lines),encoding="utf-8")
    report=dict(elf_sha256=ELF_SHA,table_va=BASE,selector_va=SELECTOR,entry_size=16,rows=table,
                callers=callers,scope="native display argument w1 low byte; w2 signed image kind; safe API restricts 0..17 and 0..1")
    save(out/"native_type_selector.json",report)
    print(json.dumps(dict(native_type_entries=len(table),resource_pointers=36,direct_callers=len(callers))))
    return report

def materials(root,out):
    rom=root/NCA/"1"
    result=[]; counts=Counter(); all_profiles=Counter(); errors=[]; cache={}
    for p in sorted(rom.rglob("*.arc")):
        src=p.relative_to(rom).as_posix()
        raw=p.read_bytes();digest=sha(raw)
        if digest not in cache:
            found=[]; mem=list(walk(raw)); names=defaultdict(list)
            for m,b in mem:
                if b.startswith(b"BNTX"):
                    for r in metadata(b):
                        names[r["raw_name"]].append(dict(member=m,index=r["texture_index"],width=r["width"],height=r["height"]))
            for m,b in mem:
                if not b.startswith(b"FLYT"):continue
                endian="<" if b[4:6]==b"\xff\xfe" else ">"
                try: layout=parse_layout(b,names)
                except Exception as e:
                    errors.append(dict(source=src,member=m,error=repr(e)));continue
                mats={}
                for mat in layout["materials"]:
                    f=int(mat["flags"],16); profile=(f,mat["size"])
                    if profile not in PROFILES:continue
                    n=PROFILES[profile]; binary=bytes.fromhex(mat["raw_hex"])
                    indices=[struct.unpack_from(endian+"H",binary,44+4*i)[0] for i in range(n)]
                    refs=[]
                    for i,index in enumerate(indices):
                        name=layout["textures"][index]["name"] if index<len(layout["textures"]) else None
                        refs.append(dict(map_index=i,texture_index=index,raw_name=name,local_hits=names.get(name,[]),
                                         sampler_raw_hex=binary[46+4*i:48+4*i].hex()))
                    status="exact_local_texture_maps" if all(len(x["local_hits"])==1 for x in refs) else "unresolved_map"
                    mats[mat["index"]]=dict(material=mat["name"],material_index=mat["index"],flags=mat["flags"],
                        size=mat["size"],record_offset=mat["offset"],map_count=n,texture_maps=refs,
                        raw_tail_hex=binary[44+4*n:].hex(),status=status)
                for index,record in mats.items():
                    panes=[q["pane"] for q in layout["pictures"] if q["material_index"]==index]
                    found.append(dict(member=m,member_sha256=sha(b),pic1_panes=panes,**record))
            cache[digest]=found
        for row in cache[digest]:
            result.append(dict(source=src,source_sha256=digest,**row))
            all_profiles[(row["flags"],row["size"],row["status"])]+=1
            counts[(row["flags"],row["size"],row["status"])]+=len(row["pic1_panes"])
    fmt=lambda c:[dict(flags=f,size=s,status=t,count=n) for (f,s,t),n in sorted(c.items())]
    report=dict(pic1_bindings=fmt(counts),material_records=fmt(all_profiles),layout_errors=errors,
                scope="texture map indices only; raw sampler/SRT/tail not fully decoded; no shader or crop equivalence")
    save(out/"complex_material_bindings.json",result)
    save(out/"complex_material_summary.json",report)
    print(json.dumps(report))
    if errors or sum(counts.values())!=194 or any(t!="exact_local_texture_maps" for f,s,t in counts if counts[(f,s,t)]):
        raise ValueError("complex pic1 binding audit incomplete")

def package(root,out,selector):
    rows=load(out/"type_index.json")
    if len(rows)!=360: raise ValueError("type source count")
    bykey={(r["native_display_index"],x["kind"]):x for r in selector["rows"] for x in r["slots"]}
    dst=root/"HomeImageResources/core/types"
    dst.mkdir(parents=True,exist_ok=True)
    unique={}; mapped=[]
    for r in rows:
        k=(r["texture_ordinal"],r["kind"]); entry=bykey[k]
        if r["raw_name"]!=entry["raw_name"]: raise ValueError("native name differs from BRTI")
        path=out/r["path"]; png=path.read_bytes()
        info=image_info(png,r["width"],r["height"])
        if any(info[x]!=r[x] for x in ("png_sha256","rgba_sha256","alpha_min","alpha_max")):
            raise ValueError("PNG/RGBA validation")
        digest=r["rgba_sha256"]; name=f"pixels/{digest}.png"
        if digest not in unique:
            dest=dst/name;dest.parent.mkdir(exist_ok=True);dest.write_bytes(png)
            unique[digest]=info["png_sha256"]
        mapped.append(dict(**{k:v for k,v in r.items() if k not in ("path","status")},
                           native_display_index=r["texture_ordinal"],slot_va=entry["slot_va"],string_va=entry["string_va"],
                           path="core/types/"+name,stored_png_sha256=unique[digest],
                           status="static_native_display_selector_exact"))
    if len(unique)!=179 or len({(r["native_display_index"],r["kind"],r["language"]) for r in mapped})!=360:
        raise ValueError("type pack count")
    doc=dict(schema_version=1,home_version="4.1.0",elf_sha256=ELF_SHA,selector_va=SELECTOR,table_va=BASE,
             id_domain="native_display_index (0..17), not arbitrary PKM TypeID",
             shader_scope="raw decoded pixels, not shader parity",
             distinct_rgba=len(unique),rows=mapped)
    save(dst/"index.json",doc)
    save(out/"type_package_summary.json",dict(logical_rows=len(mapped),physical_pngs=len(unique)))
    print(json.dumps(dict(type_logical_rows=len(mapped),type_physical_pngs=len(unique))))

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();s=native(a.root,a.out);materials(a.root,a.out);package(a.root,a.out,s)
if __name__=="__main__": main()
