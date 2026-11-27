#!/usr/bin/env python3
"""Reconstruct HOME origin mark texture swizzle; not runtime shader parity."""
import argparse, hashlib, io, json, struct
from pathlib import Path
from PIL import Image
from home41_icon_brti_audit import NCA, metadata
from home41_romfs_core import sarc_members
from home41_bntx_to_png import decode_bntx
from home41_type_layout_audit import parse_layout

def audit(root, out, verify):
    rows = []
    for style in ("normal", "color"):
        stem = "icon_generation" + ("_color" if style == "color" else "")
        src = root / NCA / "1/bin/appli/icon_generation/bin" / (stem + ".arc")
        arc = src.read_bytes()
        members = {m["name"]: arc[m["offset"]:m["offset"]+m["bytes"]] for m in sarc_members(arc)}
        b = members["timg/__Combined.bntx"]
        meta = metadata(b)
        if len(meta) != 12: raise ValueError("unexpected BRTI count")
        layout = parse_layout(members["blyt/"+stem+".bflyt"], {m["raw_name"]:[m["texture_index"]] for m in meta})
        if len(layout["joins"]) != 1 or layout["joins"][0]["status"] != "exact_local_binding": raise ValueError("layout binding")
        for info, png in decode_bntx(b):
            i = info["texture_index"]; m = meta[i]
            swizzle = list(b[m["brti_offset"]+88:m["brti_offset"]+92])
            if m["format"] != "0x1E01" or swizzle != [2,2,2,3] or png is None: raise ValueError("origin profile")
            im = Image.open(io.BytesIO(png)).convert("RGBA")
            if im.size != (64,64): raise ValueError("size")
            r,g,_,_ = im.split()
            restored = Image.merge("RGBA",(r,r,r,g))
            target = out / style / f"{i:02d}.png"
            target.parent.mkdir(parents=True,exist_ok=True)
            restored.save(target)
            if verify:
                existing = root / "HomeImageResources/research/origin_swizzle" / style / target.name
                with Image.open(existing) as old:
                    if old.convert("RGBA").tobytes() != restored.tobytes(): raise ValueError(f"pixel mismatch: {existing}")
            pixels = list(restored.getdata())
            visible = [p for p in pixels if p[3]]
            expected = 255 if style == "normal" else 100
            if any(p[:3] != (expected,)*3 for p in visible) or bool(visible) != (i != 1): raise ValueError("unexpected origin mask")
            rows.append(dict(style=style,index=i,raw_name=m["raw_name"],swizzle=swizzle,source_sha256=hashlib.sha256(arc).hexdigest(),member_sha256=hashlib.sha256(b).hexdigest(),rgba_sha256=hashlib.sha256(restored.tobytes()).hexdigest(),png_sha256=hashlib.sha256(target.read_bytes()).hexdigest(),visible_pixels=len(visible),layout=layout,status="texture_swizzle_only"))
    if len(rows)!=24: raise ValueError("count")
    (out/"audit.json").write_text(json.dumps(rows,indent=2)+"\n")
    print("24 texture swizzles reconstructed; runtime shader parity not asserted")

if __name__=="__main__":
    p=argparse.ArgumentParser(); p.add_argument("--root",type=Path,default=Path(".")); p.add_argument("--out",type=Path,required=True); p.add_argument("--verify",action="store_true")
    a=p.parse_args(); audit(a.root,a.out,a.verify)
