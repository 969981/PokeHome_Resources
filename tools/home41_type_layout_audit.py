#!/usr/bin/env python3
"""HOME 4.1.0 layout binding and type texture audit; static evidence only."""
from __future__ import annotations
import argparse, json, math, re, struct, hashlib
from pathlib import Path
from collections import Counter
from export_home41_resources import layout_sections
from home41_romfs_core import sarc_members,ahtb_labels,dat_lines
from home41_icon_brti_audit import metadata,NCA
from home41_bntx_to_png import decode_bntx
from home41_full_texture_package import image_info
from home41_image_reverse_index import ELF_SHA
import home41_elf_resource_xrefs as xr
from home41_elf_disasm_windows import window

LANGS={"":"JPN","eng":"English","fre":"French","ger":"German","ita":"Italian",
       "kor":"Korean","ltm":"LATAM","sch":"Simp_Chinese","spa":"Spanish","tch":"Trad_Chinese"}
def sha(b): return hashlib.sha256(b).hexdigest()
def save(p,obj):
    p.parent.mkdir(parents=True,exist_ok=True)
    p.write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")

def parse_layout(raw,names):
    endian="<" if raw[4:6]==b"\xff\xfe" else ">"
    sections=layout_sections(raw)
    tex=[]; mats=[]; pics=[]
    for s in sections:
        p,n=s["offset"],s["bytes"]
        b=raw[p:p+n]
        u16=lambda x:struct.unpack_from(endian+"H",b,x)[0]
        u32=lambda x:struct.unpack_from(endian+"I",b,x)[0]
        if s["tag"]=="txl1":
            count=u16(8)
            if count>4096 or 12+count*4>n: raise ValueError("txl1 offsets")
            for i in range(count):
                pos=12+u32(12+i*4)
                if not 12+4*count<=pos<n: raise ValueError("txl1 string pointer")
                end=b.find(b"\0",pos)
                if end<=pos: raise ValueError("txl1 terminator")
                tex.append(dict(index=i,name=b[pos:end].decode("ascii"),offset=p+pos))
        elif s["tag"]=="mat1":
            count=u16(8)
            if count>4096 or 12+4*count>n: raise ValueError("mat1 offsets")
            offsets=[u32(12+4*i) for i in range(count)]+[n]
            for i,(a,z) in enumerate(zip(offsets,offsets[1:])):
                if not 12+4*count<=a<z<=n or z-a<44: raise ValueError("mat1 record bounds")
                flags=u32(a+28)
                m=dict(index=i,name=b[a:a+28].split(b"\0")[0].decode("ascii","replace"),
                       offset=p+a,size=z-a,flags=hex(flags),raw_hex=b[a:z].hex(),
                       profile="unsupported_material_profile",texture_indices=[])
                # Verified simple material shapes: no texture (44 bytes) or single map
                # (84 bytes). Do not guess complex map/SRT/combiner layouts.
                if flags==0 and z-a==44: m["profile"]="no_texture"
                elif flags==0x15 and z-a==84:
                    m["texture_indices"]=[u16(a+44)]
                    m["sampler_raw_hex"]=b[a+46:a+48].hex()
                    m["profile"]="single_map_0x15"
                    m["srt_raw"] = struct.unpack_from(endian+"5f",b,a+48)
                mats.append(m)
        elif s["tag"]=="pic1":
            if n<104: raise ValueError("short pic1")
            count=b[102]; index=u16(100)
            if count>8 or 104+32*count>n: raise ValueError("pic1 UV bounds")
            uv=[struct.unpack_from(endian+"8f",b,104+32*i) for i in range(count)]
            if not all(math.isfinite(v) for q in uv for v in q): raise ValueError("nonfinite UV")
            pics.append(dict(pane=b[12:36].split(b"\0")[0].decode("ascii","replace"),
                             offset=p,material_index=index,uv=uv,vertex_colors_hex=b[84:100].hex()))
    joins=[]
    for q in pics:
        i=q["material_index"]
        if i>=len(mats):
            joins.append(dict(**q,status="material_index_out_of_range"));continue
        m=mats[i]
        ids=m["texture_indices"]
        if m["profile"]=="no_texture":
            joins.append(dict(**q,material=m["name"],status="no_texture"));continue
        if m["profile"]!="single_map_0x15":
            joins.append(dict(**q,material=m["name"],status="unsupported_material_profile"));continue
        if any(k>=len(tex) for k in ids):
            joins.append(dict(**q,material=m["name"],status="texture_index_out_of_range"));continue
        t=tex[ids[0]]["name"]
        hits=names.get(t,[])
        # Rectangular normalized UV with conventional TL,TR,BL,BR order; only
        # full coverage is called a full texture; no shader color reconstruction.
        rect=None
        if len(q["uv"])==1:
            a,b,c,d,e,f,g,h=q["uv"][0]
            if a==e and c==g and b==d and f==h and 0<=a<c<=1 and 0<=b<f<=1:
                rect=[a,b,c,f]
        joins.append(dict(**q,material=m["name"],texture_index=ids[0],raw_name=t,
                          local_hits=hits,uv_rect=rect,
                          status="exact_local_binding" if len(hits)==1 else "local_missing_or_ambiguous"))
    return dict(textures=tex,materials=mats,pictures=pics,joins=joins)

def walk(raw,member="",depth=0):
    if depth>6: raise ValueError("depth")
    if raw.startswith(b"SARC"):
        for m in sarc_members(raw):
            b=raw[m["offset"]:m["offset"]+m["bytes"]]
            yield from walk(b,member+"!"+m["name"] if member else m["name"],depth+1)
    elif raw.startswith((b"BNTX",b"FLYT")): yield member,raw

def types(root,out):
    rom=root/NCA/"1/bin"
    package=out/"type_resources"
    rows=[]; layouts=[]; counts={}
    for code,lang in LANGS.items():
        suffix="_"+code if code else ""
        src=rom/"appli/icon_type/bin"/("type_dummy"+suffix+".arc")
        raw=src.read_bytes()
        mem=list(walk(raw))
        bntx=[(n,b) for n,b in mem if b.startswith(b"BNTX")]
        flyt=[(n,b) for n,b in mem if b.startswith(b"FLYT")]
        if len(bntx)!=1 or len(flyt)!=1: raise ValueError("type archive geometry")
        member,b=bntx[0]; meta=metadata(b)
        if len(meta)!=36: raise ValueError("type texture count")
        names={r["raw_name"]:[r["texture_index"]] for r in meta}
        lay=parse_layout(flyt[0][1],names)
        if len(lay["joins"])!=1 or lay["joins"][0]["status"]!="exact_local_binding" or lay["joins"][0]["raw_name"]!="typeIcon_text_00_normal_00^o" or lay["joins"][0]["uv_rect"]!=[0,0,1,1]:
            raise ValueError("type default layout binding")
        layouts.append(dict(language=lang,source=src.relative_to(rom).as_posix(),member=flyt[0][0],sha256=sha(flyt[0][1]),**lay))
        tbl=rom/"message"/lang/"megaturtle/typename.tbl"; dat=tbl.with_suffix(".dat")
        labels=ahtb_labels(tbl.read_bytes()); texts=dat_lines(dat.read_bytes())
        if len(labels)!=19 or len(texts)!=18 or labels[-1][0]!="msg_typename_max":
            raise ValueError("type message table geometry")
        ids=[int(x[0].rsplit("_",1)[1]) for x in labels[:-1]]
        if ids!=list(range(9))+list(range(10,19)): raise ValueError("type message ID geometry")
        decoded=0
        for inf,png in decode_bntx(b,max_textures=10000):
            r=meta[inf["texture_index"]]
            match=re.fullmatch(r"typeIcon(_text)?_(\d\d)_([a-z]+)_00\^([qo])",r["raw_name"])
            if not match or png is None: raise ValueError("type texture decode/name")
            kind="text" if match[1] else "symbol"
            idx=int(match[2])
            if not 0<=idx<18 or (r["width"],r["height"])!=((200,44) if kind=="text" else (64,64)):
                raise ValueError("type texture size")
            info=image_info(png,r["width"],r["height"])
            dest=Path("type_resources")/lang/f"{idx:02d}_{kind}.png"
            target=out/dest; target.parent.mkdir(parents=True,exist_ok=True); target.write_bytes(png)
            rows.append(dict(language=lang,texture_ordinal=idx,message_label_id=ids[idx],
                       message_label=labels[idx][0],localized_name=texts[idx]["text"],
                       kind=kind,raw_name=r["raw_name"],texture_index=r["texture_index"],
                       width=r["width"],height=r["height"],format=r["format"],**info,
                       source=src.relative_to(rom).as_posix(),source_sha256=sha(raw),
                       member=member,member_sha256=sha(b),path=dest.as_posix(),
                       status="exact_texture_name_and_message_order; runtime_type_enum_unverified"))
            decoded+=1
        if decoded!=36: raise ValueError("type decode count")
        counts[lang]=decoded
    if len({(r["language"],r["texture_ordinal"],r["kind"]) for r in rows})!=360:
        raise ValueError("duplicate type key")
    save(out/"type_index.json",rows);save(out/"type_default_layouts.json",layouts)
    report=dict(languages=counts,texture_rows=len(rows),distinct_rgba_sha256=len({r["rgba_sha256"] for r in rows}),
                symbols_distinct_rgba=len({r["rgba_sha256"] for r in rows if r["kind"]=="symbol"}),
                text_distinct_rgba=len({r["rgba_sha256"] for r in rows if r["kind"]=="text"}),
                exact_default_layouts=len(layouts),scope="static ordinal and message label; no runtime enum or shader parity")
    save(out/"type_summary.json",report);print(json.dumps(report))

def layouts(root,out):
    rom=root/NCA/"1"
    allrows=[]; errors=[]; cache={}
    for p in sorted(rom.rglob("*.arc")):
        src=p.relative_to(rom).as_posix()
        try:
            raw=p.read_bytes();digest=sha(raw)
            if digest not in cache:
                members=list(walk(raw));names={}
                for m,b in members:
                    if b.startswith(b"BNTX"):
                        for r in metadata(b):
                            names.setdefault(r["raw_name"],[]).append(dict(member=m,texture_index=r["texture_index"],width=r["width"],height=r["height"]))
                result=[]
                for m,b in members:
                    if b.startswith(b"FLYT"):
                        try: result.append(dict(member=m,sha256=sha(b),**parse_layout(b,names)))
                        except Exception as e: result.append(dict(member=m,sha256=sha(b),error=repr(e)))
                cache[digest]=result
            allrows.extend(dict(source=src,source_sha256=digest,**r) for r in cache[digest])
        except Exception as e: errors.append(dict(source=src,error=repr(e)))
    joins=[q for l in allrows for q in l.get("joins",[])]
    report=dict(layouts=len(allrows),layout_errors=sum("error" in l for l in allrows),
                bindings=dict(Counter(q["status"] for q in joins)),
                normalized_rectangles=sum(q.get("uv_rect") is not None for q in joins),
                partial_rectangles=sum(q.get("uv_rect") is not None and q["uv_rect"]!=[0,0,1,1] for q in joins),
                source_errors=errors,scope="verified simple material profile only; unsupported layouts retained")
    save(out/"layout_bindings.json",allrows);save(out/"layout_binding_summary.json",report)
    print(json.dumps(report))

def elf(root,out):
    raw=(root/NCA/"0/main.elf").read_bytes()
    if sha(raw)!=ELF_SHA: raise ValueError("ELF SHA")
    segs=xr.elf_segments(raw)
    xr.NEEDLES=("typeIcon_","typeIcon_text_","type_dummy","icon_type","TYPENAME_","typename",
                "TypeIcon","TypeName","typeIcon","normal_00","kakutou_00")
    strings=xr.resource_strings(raw,segs); refs=xr.find_pc_references(raw,segs,strings)
    lookup={s["virtual_address"]:s["text"] for s in strings}
    lines=["# Type resource ELF windows","",ELF_SHA,""]
    for r in refs:
        r["text"]=lookup[r["target_va"]]
        lines += [f'## {r["text"]} @ {r["pc"]:#x}',"","~~~asm"]
        lines += [f"{a:08x} {h} {m} {o}" for a,m,o,h in window(raw,segs,r["pc"],0x80,0x180)]
        lines += ["~~~",""]
    save(out/"type_elf_refs.json",dict(elf_sha256=ELF_SHA,strings=strings,references=refs,
                                     scope="static address references, not proof of selector"))
    (out/"type_elf_windows.md").write_text("\n".join(lines),encoding="utf-8")
    print(json.dumps(dict(type_elf_strings=len(strings),type_elf_refs=len(refs))))

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();a.out.mkdir(parents=True,exist_ok=True)
    types(a.root,a.out);layouts(a.root,a.out);elf(a.root,a.out)
if __name__=="__main__": main()
