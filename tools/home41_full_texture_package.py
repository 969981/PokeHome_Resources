#!/usr/bin/env python3
"""Decode every original ARC/standalone BRTI mip0; keep provenance and evidence."""
from __future__ import annotations
import argparse, csv, hashlib, io, json, re
from collections import Counter, defaultdict
from pathlib import Path
from PIL import Image
from home41_icon_brti_audit import metadata, NCA
from home41_romfs_core import sarc_members
from home41_bntx_to_png import decode_bntx, read_source

def sha(b):
    return hashlib.sha256(b).hexdigest()

def readcsv(p):
    with p.open(newline="", encoding="utf-8") as f:
        return list(csv.DictReader(f))

def writecsv(p, rows, fields=None):
    p.parent.mkdir(parents=True, exist_ok=True)
    with p.open("w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=fields or list(rows[0]), extrasaction="ignore")
        w.writeheader()
        w.writerows(rows)

def savejson(p, obj):
    p.write_text(json.dumps(obj, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")

def image_info(png, width, height):
    with Image.open(io.BytesIO(png)) as img:
        if img.format != "PNG" or img.size != (width,height):
            raise ValueError("PNG format or size mismatch")
        img.verify()
    with Image.open(io.BytesIO(png)) as img:
        rgba = img.convert("RGBA")
        raw = rgba.tobytes()
        lo, hi = rgba.getchannel("A").getextrema()
        return dict(png_sha256=sha(png), rgba_sha256=sha(raw), alpha_min=lo, alpha_max=hi)

def walk(raw, member="", depth=0):
    if depth > 6:
        raise ValueError("archive depth")
    if raw.startswith(b"BNTX"):
        yield member, raw
    elif raw.startswith(b"SARC"):
        for m in sarc_members(raw):
            b=raw[m["offset"]:m["offset"]+m["bytes"]]
            name=member+"!"+m["name"] if member else m["name"]
            if b.startswith((b"BNTX",b"SARC")):
                yield from walk(b,name,depth+1)

RULES = {
    "balls": r"(^|[^a-z])(ball|pokeball|monsterball|captureball)([^a-z]|$)",
    "ribbons": r"ribbon",
    "marks": r"(^|[^a-z])(mark|proof|encountermark)([^a-z]|$)",
    "markings": r"marking",
    "types": r"(^|[^a-z])(type|element|tera|zokusei)([^a-z]|$)",
    "achievements": r"medal|achievement|badge|wappen|award|trophy|challenge",
    "items": r"(^|[^a-z])item([^a-z]|$)",
}
def candidates(row):
    s=(row["source"]+" "+row["raw_name"]).lower()
    return [k for k,v in RULES.items() if re.search(v,s)]

def decode_member(raw, digest, out):
    rows=metadata(raw)
    for r in rows:
        r.update(rgba_sha256="",alpha_min="",alpha_max="",color_interpretation="")
    try:
        for info,png in decode_bntx(raw,max_textures=10000):
            r=rows[info["texture_index"]]
            r.update(png_status=info["png_status"],reason=info.get("reason",""),
                     color_interpretation=info.get("color_interpretation",""))
            if png is not None:
                try:
                    r.update(image_info(png,r["width"],r["height"]))
                    path=Path("textures")/digest/f'{r["texture_index"]:05d}.png'
                    dst=out/path
                    dst.parent.mkdir(parents=True,exist_ok=True)
                    dst.write_bytes(png)
                    r["png_path"]=path.as_posix()
                except Exception as exc:
                    r.update(png_status="error",reason=repr(exc))
    except Exception as exc:
        for r in rows:
            if r["png_status"]=="not_attempted":
                r.update(png_status="not_decoded_after_error",reason=repr(exc))
    return rows

def full(root,out):
    out.mkdir(parents=True,exist_ok=True)
    rom=root/NCA/"1"
    arcs=sorted(rom.rglob("*.arc"))
    bntx=sorted(rom.rglob("*.bntx"))
    if (len(arcs),len(bntx))!=(240,1):
        raise ValueError("source scope differs from 240 ARC + 1 BNTX baseline")
    cache, rows, errors = {}, [], []
    for path in arcs+bntx:
        source=path.relative_to(rom).as_posix()
        try:
            data=read_source(path)
            source_sha=sha(data)
            for member,raw in walk(data):
                digest=sha(raw)
                if digest not in cache:
                    cache[digest]=decode_member(raw,digest,out)
                rows.extend(dict(source=source,source_sha256=source_sha,member=member,
                                 member_sha256=digest,**r) for r in cache[digest])
        except Exception as exc:
            errors.append(dict(source=source,reason=repr(exc)))
    if not rows:
        raise ValueError("no BRTI rows")
    for r in rows:
        r["category_candidates"]=";".join(candidates(r))
        r["semantic_status"]="name_candidate" if r["category_candidates"] else "unclassified"
    writecsv(out/"texture_pixels.csv",rows)
    writecsv(out/"category_candidates.csv",[r for r in rows if r["category_candidates"]],list(rows[0]))
    names=defaultdict(list)
    for r in rows:
        names[r["raw_name"]].append(r)
    item_rows=readcsv(root/"HomeImageResources/research/item_native_crosswalk.csv")
    join=[]
    for r in item_rows:
        key=r["native_resource_key"]
        hits=names.get(key,[])
        join.append(dict(**r,exact_name_hits=len(hits),decoded_hits=sum(h["png_status"]=="decoded" for h in hits),
                         matched_locations=json.dumps([{"source":h["source"],"member":h["member"],"texture_index":h["texture_index"],"png_path":h["png_path"]} for h in hits]),
                         evidence_scope="generic item record crosswalk, not proof of reachable UI input"))
    writecsv(out/"item_crosswalk_global.csv",join)
    unique=[r for rr in cache.values() for r in rr]
    fmt=defaultdict(Counter)
    for r in rows:
        fmt[r["format"]][r["png_status"]]+=1
    report=dict(arc_paths=len(arcs),standalone_bntx_paths=len(bntx),logical_rows=len(rows),
                unique_member_textures=len(unique),unique_members=len(cache),
                logical_status=dict(Counter(r["png_status"] for r in rows)),
                physical_status=dict(Counter(r["png_status"] for r in unique)),
                distinct_rgba_sha256=len({r["rgba_sha256"] for r in unique if r["rgba_sha256"]}),
                formats={k:dict(v) for k,v in fmt.items()},
                candidate_counts=dict(Counter(k for r in rows for k in candidates(r))),
                source_errors=errors,scope="mip0 only, excludes compressed portraits and Android; BC4/5 previews not shader reconstruction")
    savejson(out/"summary.json",report)
    print(json.dumps(report))
    if len(rows)!=9377 or errors:
        raise ValueError("global BRTI census mismatch; see summary")
    return report

def package(root,icons):
    dst=root/"HomeImageResources/pokemon_icons"
    dst.mkdir(parents=True,exist_ok=True)
    rows=readcsv(icons/"pokemon_icons/brti_index.csv")
    selectors=readcsv(root/"HomeImageResources/research/pokemon_image_selector_v2.csv")
    keys={r["resource_stem"]:r for r in selectors}
    if len(rows)!=3506 or len(keys)!=3506:
        raise ValueError("selector/icon baseline")
    prepared=[]
    seen=set()
    for r in rows:
        name=r["raw_name"]
        if not re.fullmatch(r"poke_icon_[0-9A-Za-z_]+\^u",name):
            raise ValueError("unexpected raw icon name")
        stem=name[len("poke_icon_"):-2]
        if stem not in keys or stem in seen or r["png_status"]!="decoded":
            raise ValueError("missing or duplicate icon selection")
        seen.add(stem)
        source=(icons/r["png_path"]).resolve()
        if not source.is_relative_to(icons.resolve()):
            raise ValueError("unsafe PNG path")
        png=source.read_bytes()
        info=image_info(png,112,112)
        if info["png_sha256"]!=r["png_sha256"]:
            raise ValueError("PNG hash mismatch")
        filename="poke_icon_"+stem+".png"
        prepared.append((filename,png,dict(**keys[stem],raw_name=name,texture_index=r["texture_index"],
                         package_path="pokemon_icons/"+filename,**info,semantic_status="exact_serialized_key_join")))
    if seen!=set(keys):
        raise ValueError("selector missing")
    expected={name for name,_,_ in prepared}
    unexpected={p.name for p in dst.glob("*.png")}-expected
    if unexpected:
        raise ValueError("unexpected existing PNGs; no automatic deletion")
    for filename,png,_ in prepared:
        target=dst/filename
        tmp=target.with_suffix(".tmp")
        tmp.write_bytes(png)
        tmp.replace(target)
    writecsv(dst/"index.csv",[r for _,_,r in prepared])
    summary=dict(files=len(prepared),distinct_rgba_sha256=len({r["rgba_sha256"] for _,_,r in prepared}),
                 exact_selector_join=True,source="pokemon/icon_pokemon/bin/icon_pokemon.arc!timg/__Combined.bntx",
                 scope="static mapping; no native GPU parity")
    savejson(dst/"manifest.json",summary)
    (dst/"README.md").write_text("# HOME 4.1.0 Pokemon box icons\n\n3506 original mip0 PNGs; exact serialized selector join. See index.csv and manifest.json. Not native GPU parity.\n",encoding="utf-8")
    print(json.dumps(summary))

if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path)
    p.add_argument("--icons",type=Path)
    a=p.parse_args()
    if a.icons: package(a.root,a.icons)
    if a.out: full(a.root,a.out)
    if not (a.icons or a.out): p.error("specify --icons and/or --out")
