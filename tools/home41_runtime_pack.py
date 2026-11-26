# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["Pillow==12.0.0"]
# ///
"""Build a read-only HOME 4.1.0 runtime image pack (no original archives or ELF)."""
import argparse
import hashlib
import io
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

def build(src,out,profile):
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
    entries={}; blobs={}; source_cache={}; counts={}; total_original=0
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
            if kind=="portrait" and profile=="compact":
                image.thumbnail((256,256),Image.Resampling.LANCZOS)
            if kind=="ui":
                p=out/rel;p.parent.mkdir(parents=True,exist_ok=True);p.write_bytes(data)
                encoded=data;mime="image/png"
            else:
                buffer=io.BytesIO()
                image.save(buffer,format="WEBP",lossless=True,method=4,exact=True)
                encoded=buffer.getvalue();mime="image/webp"
                with Image.open(io.BytesIO(encoded)) as decoded:
                    if decoded.size!=image.size or decoded.convert("RGBA").tobytes()!=image.tobytes():
                        raise ValueError("lossless pixel mismatch "+rel)
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
    p.add_argument("--profile",choices=("compact","full"),default="compact")
    p.add_argument("--verify",action="store_true")
    a=p.parse_args();out=a.out.resolve();src=a.source.resolve()
    if a.verify: verify(out)
    else:
        if out==src or out.is_relative_to(src) or src.is_relative_to(out): raise ValueError("source/output overlap")
        if out.exists(): raise ValueError("output already exists; use a new directory")
        out.parent.mkdir(parents=True,exist_ok=True)
        with tempfile.TemporaryDirectory(prefix=".runtime-",dir=out.parent) as td:
            tmp=Path(td)/"pack";build(src,tmp,a.profile);os.replace(tmp,out)
