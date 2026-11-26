#!/usr/bin/env python3
"""Deterministic unique-portrait sample sweep, and complete compact/balanced parity."""
import argparse
import csv
import io
import json
from pathlib import Path
from PIL import Image, ImageDraw
from home41_runtime_pack import read,sha,checked,webp,metrics,summary

def sample(src,out,n):
    out.mkdir(parents=True,exist_ok=True)
    rows=read(src/"core/resource_core.json")["pokemon"]
    unique={}
    for rel in sorted({r["portrait"] for r in rows}):
        h=sha(checked(src,rel).read_bytes())
        unique.setdefault(h,rel)
    keys=sorted(unique)
    # Equal intervals of source SHA order; no duplicate pictures or hand-picked species.
    chosen=[keys[i*len(keys)//n] for i in range(n)]
    result=[]
    for h in chosen:
        rel=unique[h]
        with Image.open(checked(src,rel)) as im: ref=im.convert("RGBA")
        ref.thumbnail((256,256),Image.Resampling.LANCZOS)
        lossless,_=webp(ref)
        for q in (82,88,92,94,97):
            data,dec=webp(ref,q)
            p,s=metrics(ref,dec)
            result.append({"path":rel,"quality":q,"psnr":p,"ssim":s,"bytes":len(data),"lossless_bytes":len(lossless)})
    with (out/"quality-sweep.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(result[0]));w.writeheader();w.writerows(result)
    stats={}
    for q in (82,88,92,94,97):
        rs=[r for r in result if r["quality"]==q]
        stats[q]={**summary(rs),"lossless_bytes":sum(r["lossless_bytes"] for r in rs),
                  "passes_gate":sum(r["psnr"]>=35 and r["ssim"]>=.970 for r in rs)}
    (out/"quality-sweep.json").write_text(json.dumps(stats,indent=2)+"\n")
    print("SWEEP",json.dumps(stats,separators=(",",":")))
    # Most challenging Q88 examples; display same-size reference and lossy output
    # composited on dark/light backgrounds for independent visual review.
    worst=sorted((r for r in result if r["quality"]==88),key=lambda r:r["ssim"])[:8]
    sheet=Image.new("RGB",(4*256,8*282+30),"#ffffff")
    draw=ImageDraw.Draw(sheet)
    draw.text((8,5),"Reference dark | Q88 dark | Reference light | Q88 light",fill="black")
    for i,r in enumerate(worst):
        with Image.open(checked(src,r["path"])) as im: ref=im.convert("RGBA")
        ref.thumbnail((256,256),Image.Resampling.LANCZOS)
        _,dec=webp(ref,88)
        y=30+i*282
        draw.text((8,y),f"{Path(r['path']).stem}  PSNR {r['psnr']:.2f}  SSIM {r['ssim']:.4f}",fill="black")
        for j,(image,bg) in enumerate(((ref,24),(dec,24),(ref,245),(dec,245))):
            tile=Image.new("RGBA",(256,256),(bg,bg,bg,255))
            tile.alpha_composite(image,((256-image.width)//2,(256-image.height)//2))
            sheet.paste(tile.convert("RGB"),(256*j,y+22))
    sheet.save(out/"q88-worst-cases.png")

def compare(compact,balanced,out):
    a=read(compact/"runtime-index.json");b=read(balanced/"runtime-index.json")
    ma=read(compact/"runtime-manifest.json");mb=read(balanced/"runtime-manifest.json")
    assert set(a["entries"])==set(b["entries"])
    core=read(compact/"core/resource_core.json")
    portraits={r["portrait"] for r in core["pokemon"]}
    unchanged=set(a["entries"])-portraits
    assert len(unchanged)==3782
    assert all(a["entries"][p]==b["entries"][p] for p in unchanged)
    for path in ("core/resource_core.json","core/types/index.json"):
        assert (compact/path).read_bytes()==(balanced/path).read_bytes()
    assert mb["portrait_quality"]["unique_source_portraits"]==3137
    result={"compact_bytes":ma["total_bytes_before_manifest"],"balanced_bytes":mb["total_bytes_before_manifest"],
            "reduction_pct":100*(1-mb["total_bytes_before_manifest"]/ma["total_bytes_before_manifest"]),
            "identical_nonportrait_paths":len(unchanged),"logical_assets":len(a["entries"]),
            "portrait_quality":mb["portrait_quality"]}
    (out/"pack-comparison.json").write_text(json.dumps(result,indent=2)+"\n")
    print("PACK_COMPARISON",json.dumps(result,separators=(",",":")))

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source",type=Path,default=Path("HomeImageResources"))
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--sample",type=int,default=192)
    p.add_argument("--compact",type=Path);p.add_argument("--balanced",type=Path)
    a=p.parse_args()
    if a.compact and a.balanced:compare(a.compact,a.balanced,a.out)
    else:sample(a.source,a.out,a.sample)
