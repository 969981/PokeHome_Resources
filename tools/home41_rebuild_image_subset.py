# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["texture2ddecoder==1.0.6", "Pillow==12.0.0"]
# ///
"""Re-decode the scoped UI icon set or all 3538 portraits, checking archived RGBA."""
import argparse
import io
import json
from pathlib import Path
from PIL import Image
from home41_bntx_to_png import decode_bntx, read_source
from home41_icon_brti_audit import metadata,NCA
from home41_romfs_core import sarc_members
from home41_origin_swizzle_audit import audit as origin_audit

def rgba(data):
    with Image.open(io.BytesIO(data)) as im:
        return im.size,im.convert("RGBA").tobytes()

def arc_textures(p):
    data=p.read_bytes()
    members=[m for m in sarc_members(data) if m["name"]=="timg/__Combined.bntx"]
    if len(members)!=1: raise ValueError("Combined BNTX missing "+str(p))
    m=members[0]; raw=data[m["offset"]:m["offset"]+m["bytes"]]
    names={r["texture_index"]:r["raw_name"] for r in metadata(raw)}
    result={}
    for info,png in decode_bntx(raw):
        if png is None: raise ValueError(info)
        name=names[info["texture_index"]]
        if name in result: raise ValueError("duplicate texture name "+name)
        result[name]=png
    if len(result)!=len(names): raise ValueError("incomplete BRTI decode")
    return result

def ui(root,out):
    h=root/"HomeImageResources"; rom=root/NCA/"1/bin"
    rows=json.loads((h/"native_names/index.json").read_text(encoding="utf-8"))["rows"]
    cache={}
    origin_audit(root,out/"origin_swizzle",True)
    for r in rows:
        cat=r["category"]; name=r["raw_name"]
        if cat=="origin":
            p=out/"origin_swizzle"/("color" if "_color" in name else "normal")/f"{r['texture_index']:02d}.png"
            data=p.read_bytes()
        else:
            rel=r.get("source_arc") or ("appli/icon_language/bin/lang_icon_sch.arc" if cat=="language" else "appli/icon_version/bin/icon_version.arc")
            if rel not in cache: cache[rel]=arc_textures(rom/rel)
            data=cache[rel][name]
        if rgba(data)!=rgba((h/r["source_path"]).read_bytes()):
            raise ValueError("RGBA mismatch "+r["named_path"])
        for path in (r["named_path"],r["named_path"].replace("native_names/","native_names_compat/",1).replace("^","_")):
            p=out/path;p.parent.mkdir(parents=True,exist_ok=True);p.write_bytes(data)
    if len(rows)!=419: raise ValueError("wrong UI count")
    print("PASS: 419 UI native names re-decoded; 419 compatibility paths written")

def portraits(root,out):
    raw=root/NCA/"1/bin/pokemon/compress_capture_pokemon"
    archived=root/"HomeImageResources/pokemon"
    files=sorted(raw.glob("*.bntx.gz"))
    if len(files)!=3538: raise ValueError("portrait count")
    for p in files:
        [(info,data)]=list(decode_bntx(read_source(p)))
        name=p.name.removesuffix(".bntx.gz")+".png"
        if data is None or rgba(data)!=rgba((archived/name).read_bytes()):
            raise ValueError("portrait RGBA mismatch "+name)
        (out/name).write_bytes(data)
    print("PASS: 3538 portraits re-decoded (including 32 unreferenced)")

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1])
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--mode",choices=("ui","portraits"),default="ui")
    a=p.parse_args(); root=a.root.resolve(); out=a.out.resolve()
    if out.exists() or out==root or out.is_relative_to(root/NCA) or out.is_relative_to(root/"HomeImageResources"):
        raise ValueError("output must be a new directory outside original data")
    out.mkdir(parents=True)
    (ui if a.mode=="ui" else portraits)(root,out)
