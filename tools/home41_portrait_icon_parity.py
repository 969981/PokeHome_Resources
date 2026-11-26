#!/usr/bin/env python3
"""PokemonPortraitIconParityAudit: compare archived HOME images, not native execution."""
from __future__ import annotations
import argparse, csv, hashlib, json, math
from collections import Counter
from pathlib import Path
import numpy as np
from PIL import Image
from skimage.metrics import structural_similarity

FILTERS = ("NEAREST", "BOX", "BILINEAR", "BICUBIC", "LANCZOS")
KEY = ("species","form","color_code","view_code","gender_code","variant_code","decoration_raw")
def sha(b): return hashlib.sha256(b).hexdigest()
def read_csv(p):
    with p.open(newline="", encoding="utf-8-sig") as f:
        return list(csv.DictReader(f))
def unique(rows, field):
    out = {}
    for r in rows:
        if r[field] in out: raise ValueError("duplicate "+field+": "+r[field])
        out[r[field]] = r
    return out
def load(p):
    raw = p.read_bytes()
    with Image.open(p) as im:
        if im.format != "PNG": raise ValueError("not PNG: "+str(p))
        return im.convert("RGBA"), sha(raw)
def bbox(im, cutoff=16):
    return im.getchannel("A").point(lambda x: 255 if x>=cutoff else 0).getbbox()
def normbox(im):
    b=bbox(im)
    return [round(v/(im.width if i%2==0 else im.height),7) for i,v in enumerate(b)] if b else None
def premul(im):
    a=np.asarray(im,dtype=np.float32)/255
    a[:,:,:3]*=a[:,:,3:4]
    return a
def metrics(pred, target, t):
    p=premul(pred)
    d=np.abs(p-t)
    alpha=d[:,:,3]
    m=(p[:,:,3]>=16/255)|(t[:,:,3]>=16/255)
    ma=p[:,:,3]>=16/255; mb=t[:,:,3]>=16/255
    union=np.count_nonzero(ma|mb)
    rgb=d[:,:,:3]
    mse=float(np.mean((p-t)**2))
    # two backgrounds avoid hidden-RGB artifacts and preserve alpha differences
    white_p=p[:,:,:3]+1-p[:,:,3:4]
    white_t=t[:,:,:3]+1-t[:,:,3:4]
    ssim=(structural_similarity(p[:,:,:3],t[:,:,:3],data_range=1,channel_axis=2)+
          structural_similarity(white_p,white_t,data_range=1,channel_axis=2))/2
    return dict(rgba_exact=bool(np.array_equal(np.asarray(pred),np.asarray(target))),
        visual_exact=bool(np.array_equal(p,t)), premul_mae=round(float(d.mean()*255),6),
        foreground_rgb_mae=round(float(rgb[m].mean()*255),6) if m.any() else 0,
        rgb_mae=[round(float(rgb[:,:,i].mean()*255),6) for i in range(3)],
        alpha_mae=round(float(alpha.mean()*255),6), alpha_max=int(round(float(alpha.max()*255))),
        alpha_diff_pixels=int(np.count_nonzero(alpha)),
        alpha_diff_histogram=np.bincount(np.rint(alpha*255).astype(np.int32).ravel(),minlength=256).tolist(),
        silhouette_iou=round(np.count_nonzero(ma&mb)/union,7) if union else 1.0,
        psnr_db=round(-10*math.log10(mse),6) if mse else None, ssim=round(float(ssim),7))
def candidate(p, target, mode, filt):
    resample=getattr(Image.Resampling,filt)
    if mode=="canvas": return p.resize(target.size,resample)
    pb,tb=bbox(p),bbox(target)
    if not pb or not tb: return None
    # Transform whole canvas, not a cropped hard alpha boundary. Pillow affine
    # supports only nearest/bilinear/bicubic. Alignment is a diagnostic, not proof.
    pw,ph=pb[2]-pb[0],pb[3]-pb[1]
    tw,th=tb[2]-tb[0],tb[3]-tb[1]
    sx,sy=tw/pw,th/ph
    if mode=="uniform_bbox": sx=sy=min(sx,sy)
    pcx,pcy=(pb[0]+pb[2])/2,(pb[1]+pb[3])/2
    tcx,tcy=(tb[0]+tb[2])/2,(tb[1]+tb[3])/2
    return p.transform(target.size,Image.Transform.AFFINE,
        (1/sx,0,pcx-tcx/sx,0,1/sy,pcy-tcy/sy),resample=resample)
def compare(p, q):
    target=premul(q)
    candidates={}
    for mode, filters in (("canvas",FILTERS),("uniform_bbox",("BILINEAR","BICUBIC")),
                          ("stretch_bbox",("BILINEAR","BICUBIC"))):
        for f in filters:
            im=candidate(p,q,mode,f)
            if im is not None: candidates[mode+"_"+f]=metrics(im,q,target)
    best=lambda names:min(names,key=lambda k:(candidates[k]["premul_mae"],-candidates[k]["ssim"],k))
    direct=best([k for k in candidates if k.startswith("canvas_")])
    aligned=best(list(candidates))
    dm,am=candidates[direct],candidates[aligned]
    # Heuristic thresholds are review buckets, never a claim of native render identity.
    if any(v["visual_exact"] for k,v in candidates.items() if k.startswith("canvas_")):
        category="exact_canvas_visual"
    elif dm["ssim"]>=.98 and dm["silhouette_iou"]>=.97 and dm["foreground_rgb_mae"]<=5 and dm["alpha_mae"]<=2:
        category="near_canvas"
    elif am["ssim"]>=.95 and am["silhouette_iou"]>=.93 and am["foreground_rgb_mae"]<=10 and am["alpha_mae"]<=5:
        category="near_after_alignment"
    else: category="needs_visual_review"
    return dict(portrait_size=list(p.size),icon_size=list(q.size),portrait_bbox=bbox(p),icon_bbox=bbox(q),
        portrait_bbox_normalized=normbox(p),icon_bbox_normalized=normbox(q),
        portrait_alpha_coverage=float(np.mean(np.asarray(p.getchannel("A"))>=16)),
        icon_alpha_coverage=float(np.mean(np.asarray(q.getchannel("A"))>=16)),
        best_canvas=direct,best_any=aligned,category=category,candidates=candidates)
def audit(root,out):
    base=root/"HomeImageResources"
    selectors=unique(read_csv(base/"research/pokemon_image_selector_v2.csv"),"resource_stem")
    icons=unique(read_csv(base/"pokemon_icons/index.csv"),"resource_stem")
    portrait_paths=list((base/"pokemon").glob("*.png"))
    portraits={p.stem.removeprefix("poke_capture_"):p for p in portrait_paths}
    if len(portraits)!=len(portrait_paths): raise ValueError("duplicate portrait stems")
    out.mkdir(parents=True,exist_ok=True)
    extra=sorted(set(portraits)-set(selectors))
    missing=sorted(set(selectors)-set(portraits))
    icon_missing=sorted(set(selectors)-set(icons))
    icon_extra=sorted(set(icons)-set(selectors))
    sizes=Counter(); errors=[]; rows=[]; categories=Counter(); best_filters=Counter()
    # All portrait headers are checked, including orphan resources.
    for stem,p in sorted(portraits.items()):
        try:
            with Image.open(p) as im: sizes[f"{im.width}x{im.height}"]+=1
        except Exception as e: errors.append({"stem":stem,"stage":"portrait_header","error":str(e)})
    with (out/"pairs.jsonl").open("w",encoding="utf-8") as jf:
        for stem,r in selectors.items():
            if stem not in icons or stem not in portraits: continue
            try:
                i=icons[stem]
                if any(r[k]!=i[k] for k in KEY): raise ValueError("native tuple mismatch")
                ip=base/i["package_path"]
                if not ip.resolve().is_relative_to((base/"pokemon_icons").resolve()): raise ValueError("invalid icon path")
                p,ph=load(portraits[stem]); q,qh=load(ip)
                if q.size!=(112,112): raise ValueError("unexpected icon size")
                if qh!=i["png_sha256"] or sha(q.tobytes())!=i["rgba_sha256"]: raise ValueError("icon hash mismatch")
                v=compare(p,q)
                v.update(resource_stem=stem,native_key={k:r[k] for k in KEY},
                         portrait_path=portraits[stem].relative_to(root).as_posix(),
                         icon_path=ip.relative_to(root).as_posix(),portrait_png_sha256=ph,
                         icon_png_sha256=qh,portrait_rgba_sha256=sha(p.tobytes()),icon_rgba_sha256=sha(q.tobytes()))
                jf.write(json.dumps(v,ensure_ascii=False)+"\n")
                d,a=v["candidates"][v["best_canvas"]],v["candidates"][v["best_any"]]
                rows.append(dict(stem=stem,category=v["category"],portrait_size="x".join(map(str,p.size)),
                    best_canvas=v["best_canvas"],best_any=v["best_any"],
                    canvas_mae=d["premul_mae"],aligned_mae=a["premul_mae"],canvas_ssim=d["ssim"],aligned_ssim=a["ssim"],
                    canvas_iou=d["silhouette_iou"],aligned_iou=a["silhouette_iou"],canvas_alpha_mae=d["alpha_mae"],
                    aligned_alpha_mae=a["alpha_mae"],canvas_foreground_rgb_mae=d["foreground_rgb_mae"],
                    aligned_foreground_rgb_mae=a["foreground_rgb_mae"]))
                categories[v["category"]]+=1; best_filters[v["best_canvas"]]+=1
            except Exception as e: errors.append({"stem":stem,"stage":"pair","error":str(e)})
    if rows:
        with (out/"pairs.csv").open("w",newline="",encoding="utf-8") as f:
            w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
        # Show worst direct and aligned cases; do not optimize on visual-review subset.
        worst=sorted(rows,key=lambda x:x["aligned_mae"],reverse=True)[:24]
        sheet=Image.new("RGB",(4*280,6*150),"#dddddd")
        from PIL import ImageDraw
        draw=ImageDraw.Draw(sheet)
        for j,row in enumerate(worst):
            x,y=(j%4)*280,(j//4)*150
            stem=row["stem"];p,_=load(portraits[stem]);q,_=load(base/icons[stem]["package_path"])
            for k,im in enumerate((p.resize((112,112),Image.Resampling.LANCZOS),q)):
                sheet.paste(im,(x+k*120,y+18),im)
            draw.text((x+2,y+2),stem,fill="black")
            draw.text((x+2,y+132),f"MAE {row['aligned_mae']:.2f} / SSIM {row['aligned_ssim']:.3f}",fill="black")
        sheet.save(out/"worst_pairs.png")
    def stats(k):
        a=np.array([r[k] for r in rows])
        return {n:float(v) for n,v in zip(("min","p25","median","p75","p95","max"),np.percentile(a,[0,25,50,75,95,100]))} if len(a) else {}
    ok=(len(selectors)==3506 and len(icons)==3506 and len(portraits)==3538 and len(extra)==32 and
        len(rows)==3506 and not missing and not icon_missing and not icon_extra and not errors)
    summary=dict(status="PASS_COVERAGE" if ok else "FAIL_COVERAGE",selector_count=len(selectors),portrait_count=len(portraits),
        icon_count=len(icons),compared=len(rows),portrait_dimensions=dict(sizes),categories=dict(categories),
        best_canvas_filters=dict(best_filters),extra_portraits=extra,missing_portraits=missing,missing_icons=icon_missing,
        extra_icons=icon_extra,errors=errors,statistics={k:stats(k) for k in ("canvas_mae","aligned_mae","canvas_ssim","aligned_ssim","canvas_iou","aligned_iou")},
        caveat="Pixel similarity is not evidence of identical original render pipelines; thresholds are heuristic; sRGB-encoded premultiplied comparison.")
    (out/"summary.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in summary.items() if k not in ("extra_portraits","errors")},indent=2))
    if not ok: raise SystemExit(1)
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();audit(a.root,a.out)
