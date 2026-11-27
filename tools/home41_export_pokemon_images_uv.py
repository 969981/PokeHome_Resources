# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["texture2ddecoder==1.0.6", "Pillow==12.0.0"]
# ///
"""HOME 4.1.0: export original Pokemon portraits and icons by native selector key.
Run with uv; requires the sibling HOME research decoder modules.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import io
import json
import re
from collections import Counter
from pathlib import Path
from PIL import Image
from home41_bntx_to_png import decode_bntx, read_source
from home41_icon_brti_audit import metadata, NCA, SOURCES
from home41_image_selector_model import original_rows
from home41_romfs_core import sarc_members

MEMBER = "timg/__Combined.bntx"
SELECTOR_SHA = "92d950d1006bfd254a92947f4ad16b95e7f69630af0f36db7c5d1088f132ffbc"
FIELDS = ("species","form","color_code","view_code","gender_code","variant_code","decoration_raw")
STEM = re.compile(r"\d{4}_\d{3}_[a-z]{2}_[ng]_\d{8}_[fb]_[nr]\Z")

def sha(data):
    return hashlib.sha256(data).hexdigest()

def rgba(png):
    with Image.open(io.BytesIO(png)) as im:
        if im.format != "PNG": raise ValueError("decoder did not produce PNG")
        return im.size, sha(im.convert("RGBA").tobytes())

def combined(arc_path):
    data=read_source(arc_path)
    rows=[r for r in sarc_members(data) if r["name"]==MEMBER]
    if len(rows)!=1: raise ValueError("Combined BNTX missing or ambiguous")
    r=rows[0]
    raw=data[r["offset"]:r["offset"]+r["bytes"]]
    _,size,digest=SOURCES["pokemon_icons"]
    if len(raw)!=size or sha(raw)!=digest: raise ValueError("HOME 4.1.0 icon BNTX baseline mismatch")
    return raw,sha(data)

def audit(args):
    root=args.root.resolve()
    rom=(args.romfs.resolve() if args.romfs else root/NCA/"1")
    poke=rom/"bin/pokemon"
    src=poke/"compress_capture_pokemon"
    sel=poke/"pokemon_list/pokemon_image_list.bin"
    archive=poke/"icon_pokemon/bin/icon_pokemon.arc"
    out=args.out.resolve()
    if out==rom or rom in out.parents or out==root or out==root/"HomeImageResources" or root/"HomeImageResources" in out.parents:
        raise ValueError("output must be separate from original RomFS and archived PNGs")
    if out.exists() and any(out.iterdir()): raise ValueError("output directory must be empty")
    raw_sel=sel.read_bytes()
    if sha(raw_sel)!=SELECTOR_SHA: raise ValueError("HOME 4.1.0 selector SHA256 mismatch")
    native=list(original_rows(raw_sel))
    keys={r[7]:dict(zip(FIELDS,r[:7])) for r in native}
    if len(native)!=3506 or len(keys)!=3506 or len({r[:7] for r in native})!=3506:
        raise ValueError("native selector count/uniqueness mismatch")
    if any(not STEM.fullmatch(s) or int(s[:4])!=k["species"] for s,k in keys.items()):
        raise ValueError("invalid native resource name")
    selected={s:k for s,k in keys.items() if args.all or k["species"] in (args.species or [869])}
    if not selected: raise ValueError("no native selector matches")
    raw,arc_sha=combined(archive)
    rows=metadata(raw)
    index={r["raw_name"]:r for r in rows}
    expected={"poke_icon_"+s+"^u" for s in keys}
    if len(rows)!=3506 or len(index)!=3506 or set(index)!=expected:
        raise ValueError("BRTI names do not match full native selector")
    wanted={index["poke_icon_"+s+"^u"]["texture_index"]:s for s in selected}
    out.mkdir(parents=True,exist_ok=True)
    for d in ("portraits","icons"): (out/d).mkdir()
    results=[]
    errors=[]
    def save(kind,stem,info,png,source,source_sha,member=None,raw_name=None):
        if png is None or info["png_status"]!="decoded":
            raise ValueError(info.get("reason","texture decode failed"))
        size,pixel_sha=rgba(png)
        if size!=(info["width"],info["height"]): raise ValueError("PNG/BRTI dimensions differ")
        if kind=="icons" and size!=(112,112): raise ValueError("unexpected icon dimensions")
        prefix="poke_capture_" if kind=="portraits" else "poke_icon_"
        filename=prefix+stem+".png"
        target=out/kind/filename
        if args.verify_existing:
            ref=root/"HomeImageResources"/("pokemon" if kind=="portraits" else "pokemon_icons")/filename
            if rgba(ref.read_bytes())!=(size,pixel_sha): raise ValueError("archived RGBA mismatch: "+filename)
        target.write_bytes(png)
        results.append(dict(kind=kind,resource_stem=stem,**selected[stem],source=str(source.relative_to(rom)),
            source_sha256=source_sha,member=member or "",raw_name=raw_name or info["name"],
            texture_index=info["texture_index"],format=info["format"],width=size[0],height=size[1],
            png_sha256=sha(png),rgba_sha256=pixel_sha,output=target.relative_to(out).as_posix()))
    for stem in sorted(selected):
        try:
            p=src/("poke_capture_"+stem+".bntx.gz")
            if p.is_symlink(): raise ValueError("symlink input rejected")
            compressed=p.read_bytes()
            data=read_source(p)
            m=metadata(data)
            if len(m)!=1: raise ValueError("portrait is not a single BRTI texture")
            [(info,png)]=list(decode_bntx(data))
            save("portraits",stem,info,png,p,sha(compressed),raw_name=m[0]["raw_name"])
        except Exception as e:
            errors.append({"kind":"portraits","stem":stem,"error":str(e)})
    # Reuse the repository decoder without changing its API. It decodes sequentially;
    # only selected BRTI indices are written, and iteration stops after the last one.
    try:
        for info,png in decode_bntx(raw,max_textures=10000):
            n=info["texture_index"]
            if n in wanted:
                stem=wanted[n]
                try: save("icons",stem,info,png,archive,arc_sha,MEMBER,rows[n]["raw_name"])
                except Exception as e: errors.append({"kind":"icons","stem":stem,"error":str(e)})
            if n>=max(wanted): break
    except Exception as e: errors.append({"kind":"icons","error":str(e)})
    counts=Counter(r["kind"] for r in results)
    ok=not errors and all(counts[k]==len(selected) for k in ("portraits","icons"))
    if results:
        with (out/"index.csv").open("w",encoding="utf-8-sig",newline="") as f:
            w=csv.DictWriter(f,fieldnames=list(results[0]));w.writeheader();w.writerows(results)
    extras=sorted(p.name.removeprefix("poke_capture_").removesuffix(".bntx.gz") for p in src.glob("poke_capture_*.bntx.gz")
                  if p.name.removeprefix("poke_capture_").removesuffix(".bntx.gz") not in keys)
    summary=dict(status="PASS" if ok else "FAIL",version="4.1.0",selected_keys=len(selected),
        portraits=counts["portraits"],icons=counts["icons"],selector_sha256=sha(raw_sel),
        combined_bntx_sha256=sha(raw),archive_sha256=arc_sha,verified_existing=args.verify_existing,
        dimensions=dict(Counter(f"{r['kind']}:{r['width']}x{r['height']}" for r in results)),
        unique_rgba_by_kind={k:len({(r["width"],r["height"],r["rgba_sha256"]) for r in results if r["kind"]==k}) for k in ("portraits","icons")},
        unreferenced_portraits=extras,errors=errors)
    (out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    return 0 if ok else 1

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1],help="research repository")
    p.add_argument("--romfs",type=Path,help="extracted RomFS root containing bin/; defaults to repository NCA/1")
    p.add_argument("--out",type=Path,required=True,help="new or empty output directory")
    g=p.add_mutually_exclusive_group()
    g.add_argument("--species",type=int,nargs="+",help="national dex IDs (default 869)")
    g.add_argument("--all",action="store_true",help="all 3506 native selector keys, excludes unreferenced portraits")
    p.add_argument("--verify-existing",action="store_true",help="compare decoded RGBA against archived PNGs")
    return audit(p.parse_args())
if __name__=="__main__": raise SystemExit(main())
