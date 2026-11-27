#!/usr/bin/env python3
"""Audit unreferenced HOME portraits; distinguish file and decoded pixel identity."""
from __future__ import annotations
import argparse, collections, csv, hashlib, json
from pathlib import Path
from PIL import Image, ImageDraw
from home41_portrait_icon_parity import read_csv, unique, load, compare

def audit(root,out):
    base=root/"HomeImageResources"
    selectors=unique(read_csv(base/"research/pokemon_image_selector_v2.csv"),"resource_stem")
    index=unique(read_csv(base/"pokemon_image_index.csv"),"file")
    paths={p.stem.removeprefix("poke_capture_"):p for p in (base/"pokemon").glob("*.png")}
    extra=sorted(set(paths)-set(selectors))
    missing=sorted(set(selectors)-set(paths))
    out.mkdir(parents=True,exist_ok=True)
    if len(paths)!=3538 or len(selectors)!=3506 or len(extra)!=32 or missing:
        raise ValueError("unexpected source coverage")
    by_rgba=collections.defaultdict(list);by_visual=collections.defaultdict(list)
    file_hashes={};sizes=collections.Counter()
    for stem,p in paths.items():
        im,ph=load(p)
        # Git blob identity check against archived index.
        raw=p.read_bytes()
        blob=hashlib.sha1(b"blob "+str(len(raw)).encode()+b"\0"+raw).hexdigest()
        if blob!=index[p.name]["png_git_blob"]: raise ValueError("portrait blob mismatch: "+stem)
        file_hashes[stem]=ph
        sizes[str(im.size)]+=1
        key=(im.size,hashlib.sha256(im.tobytes()).hexdigest())
        by_rgba[key].append(stem)
        # Ignore RGB only where alpha=0; exact visible straight RGBA, no quantization.
        import numpy as np
        a=np.array(im)
        a[a[:,:,3]==0,:3]=0
        v=(im.size,hashlib.sha256(a.tobytes()).hexdigest())
        by_visual[v].append(stem)
    rgba_matches={s:[x for x in group if x!=s] for group in by_rgba.values() for s in group if s in extra}
    visual_matches={s:[x for x in group if x!=s] for group in by_visual.values() for s in group if s in extra}
    results=[]
    sheet=Image.new("RGB",(4*300,8*180),"#dedede");draw=ImageDraw.Draw(sheet)
    for j,s in enumerate(extra):
        parts=s.split("_")
        candidates=[k for k in selectors if k.split("_")[0]==parts[0] and k.split("_")[-1]==parts[-1]]
        same_form=[k for k in candidates if k.split("_")[1]==parts[1]]
        scope="same_species_form_color" if same_form else "same_species_color_other_form"
        im,_=load(paths[s])
        # Compare same-form first; fallback other-form is only a diagnostic.
        ranked=[]
        for k in (same_form or candidates):
            q,_=load(paths[k])
            # compare at 112 as secondary perceptual diagnostic; full-size RGBA identity above.
            a=compare(im,q.resize((112,112),Image.Resampling.LANCZOS))
            m=a["candidates"][a["best_canvas"]]
            ranked.append((m["premul_mae"],k,m))
        ranked.sort(key=lambda x:(x[0],x[1]))
        best=ranked[0] if ranked else None
        r={"stem":s,"source_blob":index[paths[s].name]["source_git_blob"],
           "png_sha256":file_hashes[s],"rgba_exact_matches":rgba_matches.get(s,[]),
           "visual_exact_matches":visual_matches.get(s,[]),"candidate_scope":scope,
           "candidates":[{"stem":k,"mae":m,"metrics":v} for m,k,v in ranked],
           "best_candidate":best[1] if best else None}
        results.append(r)
        x,y=(j%4)*300,(j//4)*180
        draw.text((x+2,y+2),s,fill="black")
        for n,src in enumerate([s,best[1] if best else None]):
            if src:
                v,_=load(paths[src]);v=v.resize((128,128),Image.Resampling.LANCZOS)
                sheet.paste(v,(x+n*140,y+20),v)
        if best: draw.text((x+2,y+151),best[1],fill="black")
    summary={"status":"PASS_COVERAGE","extra_count":len(extra),"portrait_dimensions":dict(sizes),
        "extra_with_rgba_duplicate":sum(bool(r["rgba_exact_matches"]) for r in results),
        "extra_with_visual_duplicate":sum(bool(r["visual_exact_matches"]) for r in results),
        "same_form_candidates":sum(r["candidate_scope"]=="same_species_form_color" for r in results),
        "results":results,"caveat":"Unreferenced in this table does not prove unused by other callers; nearest image does not establish historical provenance."}
    (out/"orphan_summary.json").write_text(json.dumps(summary,indent=2)+"\n",encoding="utf-8")
    sheet.save(out/"orphan_pairs.png")
    print(json.dumps({k:v for k,v in summary.items() if k!="results"},indent=2))
    for r in results:
        print(json.dumps({k:r[k] for k in ("stem","best_candidate","rgba_exact_matches","visual_exact_matches")}))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();audit(a.root,a.out)
