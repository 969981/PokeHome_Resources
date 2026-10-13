#!/usr/bin/env python3
"""HOME Switch 4.1.0 offline RomFS -> readable CSV/JSON and optional PNG.
Python 3.9+, standard library only. Optional wimgt for BNTX->PNG.
All source files are read-only. See README_CONVERSION.md.
"""
from __future__ import annotations
import argparse
import csv
import gzip
import hashlib
import json
import math
import re
import shutil
import struct
import subprocess
import tempfile
from collections import Counter
from pathlib import Path, PurePosixPath
from home41_romfs_core import ahtb_labels, dat_lines, flatbuffer_root, sarc_members

MAX_SOURCE = 128 * 1024 * 1024
MAX_GZIP = 96 * 1024 * 1024
LANGS = set("English French German Italian Japanese Korean Spanish Chinese SimplifiedChinese TraditionalChinese jpn eng fre ger ita kor spa sch tch ltm".lower().split())

def save_json(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, ensure_ascii=False, indent=2, allow_nan=False)+"\n", encoding="utf-8")

def save_csv(path, rows, columns):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8-sig", newline="") as f:
        w = csv.DictWriter(f, fieldnames=columns, extrasaction="ignore")
        w.writeheader()
        w.writerows(rows)

def read_limited(path):
    if path.stat().st_size > MAX_SOURCE:
        raise ValueError("single source file > 128 MiB")
    return path.read_bytes()

def gunzip_limited(path):
    with gzip.open(path, "rb") as f:
        data = f.read(MAX_GZIP+1)
    if len(data) > MAX_GZIP:
        raise ValueError("gzip expansion > 96 MiB")
    return data

def fbs_details(data):
    """Schema-free candidate values, NOT inferred Pokemon attributes."""
    h = flatbuffer_root(data)
    root, offsets, fields = h["root"], h["field_offsets"], []
    for i, off in enumerate(offsets):
        row = {"field_index": i, "present": bool(off), "object_offset": off}
        if off:
            pos = root + off
            above = [x for x in offsets if x > off]
            width = (min(above) if above else h["object_size"]) - off
            width = min(width, len(data)-pos)
            row["storage_width_candidate"] = width
            row["raw_hex"] = data[pos:pos+min(width,16)].hex()
            if width >= 1:
                row["u8_candidate"] = data[pos]
            if width >= 2:
                row["u16_candidate"] = struct.unpack_from("<H",data,pos)[0]
            if width >= 4:
                jump = struct.unpack_from("<I", data, pos)[0]
                row["u32_candidate"] = jump
                fl = struct.unpack_from("<f", data, pos)[0]
                if math.isfinite(fl):
                    row["float32_candidate"] = fl
                target = pos + jump
                if jump >= 4 and target + 4 <= len(data):
                    count = struct.unpack_from("<I",data,target)[0]
                    if count <= 100000 and target+4+count <= len(data):
                        ref = {"target_offset":target,"length_candidate":count}
                        if target+4+count < len(data) and data[target+4+count] == 0:
                            try:
                                s = data[target+4:target+4+count].decode("utf-8")
                                if all(ch.isprintable() or ch in "\r\n\t" for ch in s):
                                    ref["string_candidate"]=s
                            except UnicodeDecodeError:
                                pass
                        if target+4+count*4 <= len(data):
                            ref["u32_vector_preview"]=[struct.unpack_from("<I",data,target+4+j*4)[0] for j in range(min(count,12))]
                        row["reference_candidate"]=ref
        fields.append(row)
    return {"certainty":"structure_only; field indices and scalar interpretations are NOT typed", "header":h, "fields":fields}

def layout_sections(data):
    if len(data)<20 or data[:4] not in (b"FLYT",b"FLAN"):
        raise ValueError("not FLYT/FLAN")
    endian={b"\xff\xfe":"<",b"\xfe\xff":">"}.get(data[4:6])
    if not endian:
        raise ValueError("invalid endian marker")
    u16=lambda p:struct.unpack_from(endian+"H",data,p)[0]
    u32=lambda p:struct.unpack_from(endian+"I",data,p)[0]
    if u16(6)!=20 or u32(12)!=len(data):
        raise ValueError("FLYT/FLAN header")
    count=u16(16)
    if count>10000:raise ValueError("too many sections")
    offset,rows=20,[]
    for i in range(count):
        if offset+8>len(data):raise ValueError("truncated section")
        tag=data[offset:offset+4].decode("ascii","replace")
        size=u32(offset+4)
        if size<8 or offset+size>len(data):raise ValueError("bad section size")
        item={"index":i,"tag":tag,"offset":offset,"bytes":size}
        if tag in ("pan1","txt1","pic1","wnd1","bnd1","prt1") and size>=44:
            item["pane_name"]=data[offset+12:offset+36].split(b"\0")[0].decode("utf-8","replace")
        rows.append(item)
        offset+=size
    if offset!=len(data):raise ValueError("trailing layout data")
    return rows

def safe_member(name):
    p=PurePosixPath(name)
    if not name or name.startswith("/") or "\\" in name or "\0" in name or ":" in name or any(x in (".","..") for x in p.parts):
        raise ValueError("unsafe member path")
    return Path(*p.parts)

def text_pair(data, tbl_data, rel, dest):
    names=ahtb_labels(tbl_data)
    lines=dat_lines(data)
    if len(names)==len(lines)+1 and names[-1][0].lower().endswith("max"):
        names=names[:-1]
    if len(names)!=len(lines):
        raise ValueError("AHTB/DAT count mismatch")
    lang=next((x for x in rel.parts if x.lower() in LANGS),"")
    rows=[{"index":r["index"],"label":name,"hash_fnv64":f"{h:016X}","language":lang,
           "text":r["text"],"flags":r["flags"],"source_offset":r["offset"]}
          for (name,h),r in zip(names,lines)]
    cols=["index","label","hash_fnv64","language","text","flags","source_offset"]
    save_csv(dest.with_suffix(".csv"), rows, cols)
    save_json(dest.with_suffix(".json"), rows)
    return len(rows)

def png_via_wimgt(data, destination, decoder):
    destination.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="home41_bntx_") as td:
        inp=Path(td)/"input.bntx"
        inp.write_bytes(data)
        completed=subprocess.run([decoder,"DECODE",str(inp),"--dest",str(destination)],
                                  stdout=subprocess.PIPE,stderr=subprocess.PIPE,
                                  text=True,errors="replace",timeout=120,check=False)
    if completed.returncode!=0 or not destination.is_file() or destination.read_bytes()[:8]!=b"\x89PNG\r\n\x1a\n":
        raise ValueError("PNG decoder did not produce a valid PNG: "+completed.stderr[-300:])
    return "png_ok"

def convert(path, root, out, kind, extract, decoder, save_bntx):
    rel=path.relative_to(root)
    dest=out/rel
    suf=path.suffix.lower()
    name=path.name.lower()
    if suf==".tbl" and kind in ("all","messages"):
        try: labels=ahtb_labels(read_limited(path))
        except ValueError: return "unsupported_tbl",0,""
        rows=[{"index":i,"label":s,"hash_fnv64":f"{h:016X}"} for i,(s,h) in enumerate(labels)]
        save_csv(dest.with_suffix(".csv"),rows,["index","label","hash_fnv64"])
        save_json(dest.with_suffix(".json"),rows)
        return "ahtb_labels",len(rows),str(dest.with_suffix(".csv").relative_to(out))
    if suf==".dat" and kind in ("all","messages"):
        twin=path.with_suffix(".tbl")
        if twin.is_file():
            try:
                n=text_pair(read_limited(path),read_limited(twin),rel,dest)
                return "localized_messages",n,str(dest.with_suffix(".csv").relative_to(out))
            except ValueError as e:
                return "unsupported_dat_pair",0,str(e)
        if "sort_string" in rel.parts:
            raw=read_limited(path)
            if len(raw)%2:
                return "unsupported_sort",0,"odd byte length"
            rows=[{"index":i,"value_u16":n[0]} for i,n in enumerate(struct.iter_unpack("<H",raw))]
            save_csv(dest.with_suffix(".csv"),rows,["index","value_u16"])
            return "sort_u16",len(rows),str(dest.with_suffix(".csv").relative_to(out))
        return "unsupported_dat",0,""
    if (suf in (".wazabin",".perbin",".bfbs") or name.endswith(("_lyt.bin","_uikit.bin"))) and kind in ("all","flatbuffers"):
        report=fbs_details(read_limited(path))
        output=Path(str(dest)+".json")
        save_json(output, report)
        return "flatbuffer_structure_only",len(report["fields"]),str(output.relative_to(out))
    if suf==".arc" and kind in ("all","archives"):
        binary=read_limited(path)
        entries=sarc_members(binary)
        rows=[]
        for entry in entries:
            member=binary[entry["offset"]:entry["offset"]+entry["bytes"]]
            part=safe_member(entry["name"])
            row={**entry,"kind":member[:4].decode("ascii","replace")}
            rows.append(row)
            if extract:
                sub=out/"archives_extracted"/rel/part
                sub.parent.mkdir(parents=True,exist_ok=True)
                sub.write_bytes(member)
            if member.startswith((b"FLYT",b"FLAN")):
                sub=out/"layouts"/rel/part
                save_json(Path(str(sub)+".json"),{"member":entry["name"],"sections":layout_sections(member)})
        output=Path(str(dest)+".members.csv")
        save_csv(output,rows,["index","name","offset","bytes","sha256","magic","kind"])
        save_json(Path(str(dest)+".members.json"),rows)
        return "sarc_members",len(rows),str(output.relative_to(out))
    if (suf==".bntx" or name.endswith(".bntx.gz")) and kind in ("all","images"):
        data=gunzip_limited(path) if suf==".gz" else read_limited(path)
        if not data.startswith(b"BNTX"):raise ValueError("not BNTX after gunzip")
        base=Path(str(dest)[:-3]) if suf==".gz" else dest
        positions=[m.start() for m in re.finditer(b"BRTI",data)]
        output=Path(str(base)+".json")
        save_json(output,{"source":rel.as_posix(),"format":"BNTX",
                          "bytes":len(data),"sha256":hashlib.sha256(data).hexdigest(),
                          "brti_header_offsets":positions,
                          "certainty":"container only; image dimensions and pixel type not guessed"})
        if save_bntx:
            base.parent.mkdir(parents=True,exist_ok=True)
            base.write_bytes(data)
        if decoder:
            status=png_via_wimgt(data,base.with_suffix(".png"),decoder)
        else: status="bntx_metadata"
        return status,len(positions),str(output.relative_to(out))
    if suf==".bin" and name.startswith("grow_") and kind in ("all","flatbuffers"):
        raw=read_limited(path)
        if len(raw)%4:return "unsupported_growth",0,""
        rows=[{"index":i,"value_u32":x[0]} for i,x in enumerate(struct.iter_unpack("<I",raw))]
        save_csv(dest.with_suffix(".csv"),rows,["index","value_u32"])
        save_json(dest.with_suffix(".json"),rows)
        return "growth_u32_candidate",len(rows),str(dest.with_suffix(".csv").relative_to(out))
    return "skipped",0,""

def run(args):
    root,out=args.root.resolve(),args.out.resolve()
    if not root.is_dir(): raise ValueError("input directory not found")
    if out==root or root in out.parents: raise ValueError("output must be outside input directory")
    out.mkdir(parents=True,exist_ok=True)
    decoder=None if args.png=="off" else (args.png_tool or shutil.which("wimgt"))
    if args.png=="required" and not decoder:
        raise ValueError("PNG required but no wimgt was found; set --png-tool")
    files=sorted(p for p in root.rglob("*") if p.is_file() and not p.is_symlink() and ".git" not in p.parts)
    results,stats=[],Counter()
    for i,p in enumerate(files,1):
        info={"file":p.relative_to(root).as_posix(),"source_bytes":p.stat().st_size,
              "status":"","records":0,"output":"","error":""}
        try:
            status,num,target=convert(p,root,out,args.kind,args.extract,decoder,args.write_bntx)
            info.update(status=status,records=num,output=target)
        except (ValueError,EOFError,OSError,UnicodeError,struct.error,subprocess.TimeoutExpired) as e:
            info.update(status="error",error=str(e)[:600])
        stats[info["status"]]+=1
        results.append(info)
        if i%500==0:print(f"[{i}/{len(files)}] {dict(stats)}",flush=True)
    save_csv(out/"index.csv",results,["file","source_bytes","status","records","output","error"])
    save_json(out/"summary.json",{"version":"4.1.0","files_seen":len(files),
              "source_bytes":sum(x["source_bytes"] for x in results),
              "status_counts":dict(sorted(stats.items())),"png_tool":decoder,
              "limitations":["FlatBuffers names/types require schema","BNTX pixel conversion requires wimgt",
                             "unsupported formats are never silently renamed"]})
    print(json.dumps({"files":len(files),"statuses":dict(stats),"out":str(out)},ensure_ascii=False,indent=2))
    return 1 if stats["error"] else 0

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,required=True,help="NCA/1 RomFS or a subtree")
    ap.add_argument("--out",type=Path,required=True,help="outside --root")
    ap.add_argument("--kind",choices=["all","messages","flatbuffers","archives","images"],default="all")
    ap.add_argument("--extract",action="store_true",help="write SARC members (.bflyt/.bflan/.bntx...)")
    ap.add_argument("--write-bntx",action="store_true",help="save expanded .bntx assets (large)")
    ap.add_argument("--png",choices=["off","auto","required"],default="auto")
    ap.add_argument("--png-tool",help="wimgt executable path")
    raise SystemExit(run(ap.parse_args()))

if __name__=="__main__":main()
