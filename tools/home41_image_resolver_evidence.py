#!/usr/bin/env python3
"""HOME image evidence graph: raw layout references, UI strings and native display IDs."""
from __future__ import annotations
import argparse, csv, hashlib, json, math, re, struct
from collections import Counter, defaultdict
from pathlib import Path
from export_home41_resources import layout_sections, fbs_details
from home41_romfs_core import sarc_members
from home41_icon_brti_audit import metadata, NCA, audit
from home41_image_selector_model import item_key, original_rows
from home41_full_texture_package import image_info, readcsv, candidates
from home41_image_reverse_index import ELF_SHA
import home41_elf_resource_xrefs as xr
from home41_elf_disasm_windows import window

def sha(b): return hashlib.sha256(b).hexdigest()

def dump(path,obj):
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")

def members(raw, path="", depth=0):
    if depth>6: raise ValueError("SARC recursion limit")
    if raw.startswith(b"SARC"):
        for m in sarc_members(raw):
            b=raw[m["offset"]:m["offset"]+m["bytes"]]
            yield from members(b,path+"!"+m["name"] if path else m["name"],depth+1)
    elif raw.startswith((b"BNTX",b"FLYT",b"FLAN")):
        yield path,raw

def section_evidence(raw):
    endian="<" if raw[4:6]==b"\xff\xfe" else ">"
    for sec in layout_sections(raw):
        p,n=sec["offset"],sec["bytes"]
        b=raw[p:p+n]
        row=dict(sec)
        if sec["tag"]=="txl1" and n>=12:
            count=struct.unpack_from(endian+"H",b,8)[0]
            row["texture_count_raw"]=count
            if 12+4*count<=n and count<=4096:
                offsets=struct.unpack_from(endian+"I"*count,b,12)
                row["offsets_raw"]=offsets
                modes={}
                for base in (0,8,12):
                    names=[]
                    for i,o in enumerate(offsets):
                        at=base+o
                        end=b.find(b"\0",at) if 12+4*count<=at<n else -1
                        if end<=at: break
                        try: name=b[at:end].decode("ascii")
                        except UnicodeError: break
                        if not name.isprintable(): break
                        names.append(dict(index=i,name=name,offset=p+at))
                    if len(names)==count: modes[str(base)]=names
                row["texture_name_offset_candidates"]=modes
        if sec["tag"]=="mat1" and n>=12:
            count=struct.unpack_from(endian+"H",b,8)[0]
            row["material_count_raw"]=count
            if count<=4096 and 12+4*count<=n:
                row["material_offsets_raw"]=struct.unpack_from(endian+"I"*count,b,12)
        if sec["tag"]=="pic1" and n>=0x68:
            mi,uvn=struct.unpack_from(endian+"HB",b,0x64)
            if uvn<=8 and 0x68+32*uvn<=n:
                coords=[struct.unpack_from(endian+"8f",b,0x68+i*32) for i in range(uvn)]
                if all(math.isfinite(x) for q in coords for x in q):
                    row["pic1_candidate"]=dict(material_index=mi,uv_count=uvn,uv=coords,
                          material_offset=p+0x64,uv_offset=p+0x68,
                          scope="fixed-offset hypothesis; not validated material binding or crop")
        yield row

def scan(root,out):
    rom=root/NCA/"1"
    textures=[]; layouts=[]; errors=[]; cache={}
    for path in sorted(rom.rglob("*.arc"))+sorted(rom.rglob("*.bntx")):
        src=path.relative_to(rom).as_posix()
        try:
            raw=path.read_bytes(); digest=sha(raw)
            if digest not in cache:
                t,l=[],[]
                for name,b in members(raw):
                    if b.startswith(b"BNTX"):
                        t.extend(dict(member=name,member_sha256=sha(b),**r) for r in metadata(b))
                    else:
                        try: l.append(dict(member=name,member_sha256=sha(b),sections=list(section_evidence(b))))
                        except Exception as e: l.append(dict(member=name,member_sha256=sha(b),error=repr(e)))
                cache[digest]=(t,l)
            t,l=cache[digest]
            textures.extend(dict(source=src,source_sha256=digest,**r) for r in t)
            layouts.extend(dict(source=src,source_sha256=digest,**r) for r in l)
        except Exception as e: errors.append(dict(source=src,error=repr(e)))
    byname=defaultdict(list)
    for r in textures: byname[r["raw_name"]].append(r)
    def loc(r):
        return {k:r[k] for k in ("source","member","member_sha256","texture_index","raw_name","format","width","height")}
    joins=[]
    for l in layouts:
        for sec in l.get("sections",[]):
            for base,entries in sec.get("texture_name_offset_candidates",{}).items():
                for entry in entries:
                    hits=byname.get(entry["name"],[])
                    local=[r for r in hits if r["source"]==l["source"]]
                    joins.append(dict(source=l["source"],member=l["member"],section_offset=sec["offset"],
                        relative_base=base,**entry,local_exact_hits=[loc(r) for r in local],
                        global_exact_hits=len(hits),status="exact_name_reference_only" if hits else "unmatched"))
    # UIKIT/LYT: exact NUL-terminated strings only; no guessed FlatBuffers schema.
    ui=[]; ui_files=[]
    for p in sorted(rom.rglob("*.bin")):
        if not p.name.endswith(("_lyt.bin","_uikit.bin")): continue
        b=p.read_bytes(); source=p.relative_to(rom).as_posix()
        rec=dict(source=source,sha256=sha(b),bytes=len(b))
        try:
            f=fbs_details(b)
            rec["root_fields"]=len(f["fields"])
            rec["status"]="structure_only"
        except Exception as e: rec.update(status="parse_error",error=repr(e))
        ui_files.append(rec)
        for m in re.finditer(rb"[\x20-\x7e]{3,}\x00",b):
            name=m.group()[:-1].decode("ascii")
            if name in byname:
                ui.append(dict(source=source,sha256=rec["sha256"],offset=m.start(),raw_name=name,
                               exact_hits=len(byname[name]),scope="string occurrence, not field semantics"))
    cat=[]
    for r in textures:
        for category in candidates(r):
            cat.append(dict(category=category,**loc(r),semantic_status="filename_candidate"))
    dump(out/"layout_sections.json",layouts)
    dump(out/"layout_texture_joins.json",joins)
    dump(out/"uikit_sources.json",ui_files)
    dump(out/"uikit_texture_strings.json",ui)
    dump(out/"category_candidates.json",cat)
    report=dict(texture_rows=len(textures),layout_members=len(layouts),layout_parse_errors=sum("error" in l for l in layouts),
                section_tags=dict(Counter(s["tag"] for l in layouts for s in l.get("sections",[]))),
                txl1_name_candidates=len(joins),txl1_local_hits=sum(bool(j["local_exact_hits"]) for j in joins),
                pic1_uv_candidates=sum("pic1_candidate" in s for l in layouts for s in l.get("sections",[])),
                ui_files=len(ui_files),ui_exact_string_hits=len(ui),
                categories=dict(Counter(r["category"] for r in cat)),errors=errors)
    dump(out/"layout_summary.json",report)
    print(json.dumps(report))
    if len(textures)!=9377 or errors: raise ValueError("BRTI coverage differs from baseline")
    return cat

def elf(root,out):
    raw=(root/NCA/"0/main.elf").read_bytes()
    if sha(raw)!=ELF_SHA: raise ValueError("ELF SHA mismatch")
    segs=xr.elf_segments(raw)
    xr.NEEDLES=("icon_item","item_%04d","item_dummy","icon_type","type_dummy","ribbon","Ribbon",
                "marking","Marking","medal","Medal","achievement","Achievement","ball","Ball",
                "mtt_record","mtt_status","icon_label","icon_shape","wappen","badge")
    strings=xr.resource_strings(raw,segs)
    refs=xr.find_pc_references(raw,segs,strings)
    byva={r["virtual_address"]:r["text"] for r in strings}
    lines=["# Category resource reference windows","",ELF_SHA,"",
           "Static candidates only, not established native ID consumers.",""]
    for r in refs:
        r["text"]=byva[r["target_va"]]
        lines += [f'## {r["text"]} @ {r["pc"]:#x}',"","~~~asm"]
        lines += [f"{a:08x} {h} {m} {o}" for a,m,o,h in window(raw,segs,r["pc"],0x60,0x100)]
        lines += ["~~~",""]
    dump(out/"elf_category_refs.json",dict(elf_sha256=ELF_SHA,strings=strings,references=refs,
                                         scope="ADR/ADRP+ADD candidates only"))
    (out/"elf_category_windows.md").write_text("\n".join(lines),encoding="utf-8")
    print(json.dumps(dict(elf_strings=len(strings),elf_refs=len(refs))))

def core(root,out,icons):
    # Decode directly from original ball-display archive; never use guessed generic ItemID.
    rom=root/NCA/"1/bin"
    data=(rom/"pml/item/item.dat").read_bytes()
    mapping=[item_key(data,i) for i in range(data[0x15]+1)]
    rows=readcsv(icons/"items/brti_index.csv")
    names={r["raw_name"]:r for r in rows}
    if len(mapping)!=38 or len(names)!=38 or set(names)!={r["raw_name"] for r in mapping}:
        raise ValueError("native display key and BRTI mismatch")
    package=root/"HomeImageResources"
    core_dir=package/"core"
    core_dir.mkdir(parents=True,exist_ok=True)
    outrows=[]
    for m in mapping:
        r=names[m["raw_name"]]
        if r["png_status"]!="decoded": raise ValueError("ball image not decoded")
        png=(icons/r["png_path"]).read_bytes()
        info=image_info(png,64,64)
        if info["png_sha256"]!=r["png_sha256"]: raise ValueError("ball PNG hash")
        filename=f'balls/native_display_{m["input"]:02d}.png'
        target=core_dir/filename
        target.parent.mkdir(parents=True,exist_ok=True)
        target.write_bytes(png)
        outrows.append(dict(**m,**info,path="core/"+filename,texture_index=int(r["texture_index"])))
    source=(rom/"pokemon/pokemon_list/pokemon_image_list.bin").read_bytes()
    sel=list(original_rows(source))
    index=readcsv(package/"pokemon_icons/index.csv")
    if len(index)!=3506 or len(sel)!=3506: raise ValueError("pokemon icon package incomplete")
    icons_by_stem={r["resource_stem"]:r for r in index}
    if set(icons_by_stem)!={r[-1] for r in sel}: raise ValueError("pokemon icon package mismatch")
    pokemon=[]
    for r in sel:
        i=icons_by_stem[r[-1]]
        path=i["package_path"]
        if sha((package/path).read_bytes())!=i["png_sha256"]: raise ValueError("packaged icon hash")
        portrait="pokemon/poke_capture_"+r[-1]+".png"
        if not (package/portrait).is_file(): raise ValueError("portrait absent")
        pokemon.append(dict(key=list(r[:7]),stem=r[-1],icon=path,portrait=portrait))
    doc=dict(schema_version=1,home_version="4.1.0",elf_sha256=ELF_SHA,item_dat_sha256=sha(data),
             pokemon_image_list_sha256=sha(source),pokemon=pokemon,
             ball_display=dict(status="static_native_display_input_exact",id_domain="native display input 0..37; not PKM Ball enum",rows=outrows),
             item=dict(status="unresolved_general_item_id",rows=[]),
             ribbon=dict(status="unresolved",rows=[]),mark=dict(status="unresolved",rows=[]),
             type=dict(status="unresolved",rows=[]),achievement=dict(status="unresolved",rows=[]),
             scope="static data; no native runtime or GPU parity")
    dump(core_dir/"resource_core.json",doc)
    dump(out/"core_summary.json",dict(pokemon=len(pokemon),ball_display=len(outrows),other_resolvers="unresolved"))
    print(json.dumps(dict(pokemon=len(pokemon),ball_display=len(outrows))))

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--icons",type=Path,required=True)
    a=p.parse_args()
    a.out.mkdir(parents=True,exist_ok=True)
    core(a.root,a.out,a.icons)
    scan(a.root,a.out)
    elf(a.root,a.out)
if __name__=="__main__": main()
