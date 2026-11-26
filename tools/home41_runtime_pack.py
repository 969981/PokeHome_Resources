# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["Pillow==12.0.0", "numpy==2.2.6", "scikit-image==0.25.2"]
# ///
"""Build a read-only HOME 4.1.0 runtime image pack (no original archives or ELF)."""
import argparse
import hashlib
import io
import math
import csv
from collections import Counter
import json
import os
import shutil
import tempfile
from pathlib import Path, PurePosixPath
from PIL import Image

def sha(b):
    return hashlib.sha256(b).hexdigest()

def read(p):
    return json.loads(p.read_text(encoding="utf-8"))

def write(p,v):
    p.parent.mkdir(parents=True,exist_ok=True)
    p.write_text(json.dumps(v,ensure_ascii=False,separators=(",",":"))+"\n",encoding="utf-8")

def checked(root,rel):
    p=PurePosixPath(rel)
    if p.is_absolute() or ".." in p.parts or "\\" in rel or ":" in rel:
        raise ValueError("unsafe path "+rel)
    f=root/rel
    if not f.resolve().is_relative_to(root.resolve()) or not f.is_file() or f.is_symlink():
        raise ValueError("missing/unsafe source "+rel)
    return f

# Compare visible RGB against the *same resized* lossless reference, never hidden
# transparent RGB. Two opaque backgrounds make alpha-edge/chroma errors visible.
QUALITY_LEVELS = (88, 94, 97)
MIN_PSNR = 35.0
MIN_SSIM = 0.970

def webp(image, quality=None):
    buffer=io.BytesIO()
    if quality is None:
        image.save(buffer,format="WEBP",lossless=True,method=4,exact=True)
    else:
        image.save(buffer,format="WEBP",lossless=False,quality=quality,alpha_quality=100,method=4,exact=True)
    data=buffer.getvalue()
    with Image.open(io.BytesIO(data)) as im:
        decoded=im.convert("RGBA")
    if decoded.size!=image.size or decoded.getchannel("A").tobytes()!=image.getchannel("A").tobytes():
        raise ValueError("image size/alpha mismatch")
    if quality is None and decoded.tobytes()!=image.tobytes():
        raise ValueError("lossless pixel mismatch")
    return data,decoded

def metrics(ref,decoded):
    import numpy as np
    from skimage.metrics import structural_similarity
    psnr=[];ssim=[]
    for bg in (24,245):
        backdrop=Image.new("RGBA",ref.size,(bg,bg,bg,255))
        a=np.asarray(Image.alpha_composite(backdrop,ref).convert("RGB"))
        b=np.asarray(Image.alpha_composite(backdrop,decoded).convert("RGB"))
        mse=float(np.mean((a.astype(np.float32)-b.astype(np.float32))**2))
        psnr.append(99.0 if mse==0 else 10*math.log10(255**2/mse))
        ssim.append(float(structural_similarity(a,b,data_range=255,channel_axis=2)))
    return min(psnr),min(ssim)

def balanced(image):
    for q in QUALITY_LEVELS:
        data,decoded=webp(image,q)
        p,s=metrics(image,decoded)
        if p>=MIN_PSNR and s>=MIN_SSIM:
            return data,q,p,s
    data,_=webp(image)
    return data,"lossless",99.0,1.0

def summary(rows):
    if not rows:return {}
    def stat(key):
        values=sorted(r[key] for r in rows)
        return {"min":round(values[0],6),"p05":round(values[int(.05*(len(values)-1))],6),
                "median":round(values[len(values)//2],6),"mean":round(sum(values)/len(values),6)}
    return {"unique_source_portraits":len(rows),"accepted_quality_counts":dict(Counter(str(r["quality"]) for r in rows)),
            "psnr_db":stat("psnr"),"ssim":stat("ssim"),"alpha_exact":len(rows),
            "encoded_bytes_before_output_dedup":sum(r["bytes"] for r in rows),
            "thresholds":{"min_psnr_db":MIN_PSNR,"min_ssim":MIN_SSIM}}

def build(src,out,profile,quality_report=None):
    core=read(src/"core/resource_core.json")
    types=read(src/"core/types/index.json")
    aliases=read(src/"native_names/index.json")["rows"]
    assert core["home_version"]==types["home_version"]=="4.1.0"
    assert len(core["pokemon"])==3506 and len(core["ball_display"]["rows"])==38 and len(types["rows"])==360
    paths={}
    for r in core["pokemon"]:
        for kind in ("icon","portrait"):
            paths[r[kind]]=kind
    assert len(paths)==7012
    for r in core["ball_display"]["rows"]: paths[r["path"]]="ui"
    for r in types["rows"]: paths[r["path"]]="ui"
    for r in aliases:
        if r["category"]!="type": paths[r["source_path"]]="ui"
    assert sum(v=="ui" for v in paths.values())==276
    out.mkdir()
    for rel in ("core/resource_core.json","core/types/index.json"):
        p=out/rel;p.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(checked(src,rel),p)
    entries={}; blobs={}; source_cache={}; counts={}; total_original=0; quality_rows=[]
    with (out/"images.pack").open("wb") as pack:
        for rel,kind in sorted(paths.items()):
            data=checked(src,rel).read_bytes();total_original+=len(data)
            key=(kind,sha(data))
            if key in source_cache:
                entries[rel]=source_cache[key];continue
            with Image.open(io.BytesIO(data)) as im:
                if im.format!="PNG": raise ValueError(rel)
                image=im.convert("RGBA")
            if kind=="icon" and image.size!=(112,112): raise ValueError("icon size "+rel)
            if kind=="portrait" and image.size not in ((112,112),(512,512)): raise ValueError("portrait size "+rel)
            if kind=="portrait" and profile in ("compact","balanced"):
                image.thumbnail((256,256),Image.Resampling.LANCZOS)
            if kind=="ui":
                p=out/rel;p.parent.mkdir(parents=True,exist_ok=True);p.write_bytes(data)
                encoded=data;mime="image/png"
            else:
                if kind=="portrait" and profile=="balanced":
                    encoded,q,p,s=balanced(image)
                    quality_rows.append({"path":rel,"source_sha256":key[1],"quality":q,
                                         "psnr":p,"ssim":s,"bytes":len(encoded)})
                else:
                    encoded,_=webp(image)
                mime="image/webp"
            h=sha(encoded)
            if h not in blobs:
                blobs[h]={"offset":pack.tell(),"length":len(encoded),"mime":mime}
                pack.write(encoded)
            entries[rel]=h;source_cache[key]=h
            counts[kind]=counts.get(kind,0)+1
    pack_bytes=(out/"images.pack").stat().st_size
    write(out/"runtime-index.json",{"schema_version":1,"home_version":"4.1.0","profile":profile,
        "pack_bytes":pack_bytes,"entries":entries,"blobs":blobs})
    files={p.relative_to(out).as_posix():{"bytes":p.stat().st_size,"sha256":file_sha(p)}
        for p in sorted(out.rglob("*")) if p.is_file()}
    report={"schema_version":1,"home_version":"4.1.0","profile":profile,
        "logical_assets":len(entries),"unique_blobs":len(blobs),"original_png_bytes":total_original,
        "pack_bytes":pack_bytes,"total_bytes_before_manifest":sum(x["bytes"] for x in files.values()),
        "logical_counts":{k:sum(v==k for v in paths.values()) for k in ("icon","portrait","ui")},
        "unique_source_by_kind":counts,"files":files}
    if profile=="balanced":
        report["portrait_quality"]=summary(quality_rows)
        if quality_report:
            quality_report.parent.mkdir(parents=True,exist_ok=True)
            with quality_report.open("w",encoding="utf-8",newline="") as f:
                w=csv.DictWriter(f,fieldnames=["path","source_sha256","quality","psnr","ssim","bytes"]);w.writeheader();w.writerows(quality_rows)
    write(out/"runtime-manifest.json",report)
    verify(out)
    print(json.dumps({k:v for k,v in report.items() if k!="files"},indent=2))

def file_sha(p):
    with p.open("rb") as f:
        return hashlib.file_digest(f,"sha256").hexdigest()

def verify(root):
    idx=read(root/"runtime-index.json");m=read(root/"runtime-manifest.json")
    assert idx["schema_version"]==m["schema_version"]==1 and idx["home_version"]==m["home_version"]=="4.1.0"
    assert set(idx["entries"].values())==set(idx["blobs"])
    assert len(idx["entries"])==7288
    assert {p.relative_to(root).as_posix() for p in root.rglob("*") if p.is_file()}==set(m["files"])|{"runtime-manifest.json"}
    for rel,row in m["files"].items():
        p=checked(root,rel)
        if p.stat().st_size!=row["bytes"] or file_sha(p)!=row["sha256"]: raise ValueError("hash "+rel)
    pos=0
    with (root/"images.pack").open("rb") as f:
        for h,row in sorted(idx["blobs"].items(),key=lambda pair:pair[1]["offset"]):
            if row["offset"]!=pos or row["length"]<=0: raise ValueError("range")
            data=f.read(row["length"]);pos+=len(data)
            if len(data)!=row["length"] or sha(data)!=h: raise ValueError("blob "+h)
            with Image.open(io.BytesIO(data)) as im:
                if im.format!=("WEBP" if row["mime"]=="image/webp" else "PNG"): raise ValueError("mime")
                im.load()
    if pos!=idx["pack_bytes"] or pos!=(root/"images.pack").stat().st_size: raise ValueError("pack length")
    print("PASS runtime bundle:",len(idx["entries"]),"logical assets,",len(idx["blobs"]),"physical blobs")

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source",type=Path,default=Path("HomeImageResources"))
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--profile",choices=("compact","balanced","full"),default="compact")
    p.add_argument("--verify",action="store_true")
    p.add_argument("--quality-report",type=Path,help="external CSV of unique balanced portrait quality")
    a=p.parse_args();out=a.out.resolve();src=a.source.resolve()
    if a.quality_report and (a.quality_report.resolve().is_relative_to(out) or a.quality_report.resolve().is_relative_to(src)):
        raise ValueError("quality report must be outside source and runtime package")
    if a.verify: verify(out)
    else:
        if out==src or out.is_relative_to(src) or src.is_relative_to(out): raise ValueError("source/output overlap")
        if out.exists(): raise ValueError("output already exists; use a new directory")
        out.parent.mkdir(parents=True,exist_ok=True)
        with tempfile.TemporaryDirectory(prefix=".runtime-",dir=out.parent) as td:
            tmp=Path(td)/"pack";build(src,tmp,a.profile,a.quality_report);os.replace(tmp,out)
