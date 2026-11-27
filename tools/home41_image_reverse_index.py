#!/usr/bin/env python3
"""Read-only HOME 4.1.0 SARC/BNTX reverse index and ELF string references."""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
from collections import Counter, defaultdict
from pathlib import Path
import home41_elf_resource_xrefs as xr
from home41_elf_disasm_windows import window
from home41_icon_brti_audit import metadata, NCA
from home41_romfs_core import sarc_members

ELF_SHA = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
NEEDLES = ("pokemon_image_list", "compress_capture_pokemon", "poke_capture_",
           "icon_pokemon", "icon_item", "item_%04d", "item_dummy")
KEYWORDS = ("ball","ribbon","mark","medal","badge","wappen")

def sha(b):
    return hashlib.sha256(b).hexdigest()

def write_csv(path, fields, rows):
    with path.open("w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=fields, extrasaction="ignore")
        w.writeheader()
        w.writerows(rows)

def scan(root, out):
    romfs = root/NCA/"1"
    out.mkdir(parents=True,exist_ok=True)
    files = sorted(romfs.rglob("*.arc"))
    if len(files) != 240:
        raise ValueError(f"expected 240 original ARC paths, got {len(files)}")
    caches, archive_rows, textures, errors = {}, [], [], []
    def scan_member(data, member_path, depth=0):
        if depth > 6:
            raise ValueError("archive recursion limit")
        if data.startswith(b"BNTX"):
            for row in metadata(data):
                yield dict(member=member_path, member_sha256=sha(data), **row)
        elif data.startswith(b"SARC"):
            for m in sarc_members(data):
                if m["magic"] not in ("SARC","BNTX"):
                    continue
                b=data[m["offset"]:m["offset"]+m["bytes"]]
                yield from scan_member(b, member_path+"!"+m["name"] if member_path else m["name"],depth+1)
    def record(path, raw):
        digest=sha(raw)
        if digest not in caches:
            rows=[]
            try:
                rows.extend(scan_member(raw,""))
                caches[digest]=(rows,"parsed","")
            except (ValueError, OSError, IndexError, OverflowError, UnicodeError) as exc:
                caches[digest]=(rows,"partial_or_error",str(exc))
            except Exception as exc:
                caches[digest]=(rows,"partial_or_error",repr(exc))
        rows,status,reason=caches[digest]
        archive_rows.append(dict(source=path,source_sha256=digest,bytes=len(raw),status=status,reason=reason,textures=len(rows)))
        if reason:
            errors.append(dict(source=path,reason=reason))
        textures.extend(dict(source=path,source_sha256=digest,**r) for r in rows)
    for f in files:
        record(f.relative_to(romfs).as_posix(), f.read_bytes())
    standalone=sorted(romfs.rglob("*.bntx"))
    for f in standalone:
        record(f.relative_to(romfs).as_posix(),f.read_bytes())
    cols=["source","source_sha256","member","member_sha256","texture_index","raw_name","brti_offset","name_offset","format","width","height","depth","array_count","tile_mode"]
    write_csv(out/"texture_reverse_index.csv",cols,textures)
    write_csv(out/"archive_coverage.csv",["source","source_sha256","bytes","status","reason","textures"],archive_rows)
    index=defaultdict(list)
    for row in textures:
        index[row["raw_name"]].append(row)
    crosswalk=root/"HomeImageResources/research/item_native_crosswalk.csv"
    with crosswalk.open(encoding="utf-8",newline="") as f:
        items=list(csv.DictReader(f))
    if len(items)!=1829:
        raise ValueError("item baseline mismatch")
    missing={i["native_resource_key"] for i in items if i["status"]=="missing_in_icon_item_arc"}
    if len(missing)!=560:
        raise ValueError("missing key baseline mismatch")
    keys=[]
    for key in sorted(missing):
        matches=index.get(key,[])
        keys.append({"native_resource_key":key,"matches":len(matches),"status":"exact_name_hit" if matches else ("not_found_scanned_scope" if not errors else "not_found_in_successful_reads"),"locations_json":json.dumps([{k:r[k] for k in ("source","member","texture_index","raw_name","format","width","height")} for r in matches],ensure_ascii=False)})
    write_csv(out/"missing_item_key_lookup.csv",["native_resource_key","matches","status","locations_json"],keys)
    candidates=[r for r in textures if any(k in r["raw_name"].lower() for k in KEYWORDS)]
    write_csv(out/"ball_ribbon_mark_name_candidates.csv",cols,candidates)
    report=dict(arc_paths=len(files),standalone_bntx_paths=len(standalone),unique_source_sha256=len(caches),source_status=dict(Counter(r["status"] for r in archive_rows)),texture_records=len(textures),distinct_raw_names=len(index),missing_key_total=len(missing),missing_key_exact_hits=sum(bool(index.get(k)) for k in missing),keyword_candidate_records=len(candidates),errors=errors,scope="SARC/BNTX names only, not shader or pixel/ItemID semantics; excludes compressed standalone portrait files")
    (out/"reverse_index_summary.json").write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    return report

def elf_audit(root,out):
    raw=(root/NCA/"0/main.elf").read_bytes()
    if sha(raw)!=ELF_SHA:
        raise ValueError("ELF SHA-256 mismatch")
    segs=xr.elf_segments(raw)
    xr.NEEDLES=NEEDLES
    strings=xr.resource_strings(raw,segs)
    refs=xr.find_pc_references(raw,segs,strings)
    by_va={r["virtual_address"]:r["text"] for r in strings}
    lines=["# HOME native image resource references","",f"ELF SHA-256: {ELF_SHA}","",
           "Static address references only; not proof of runtime selector or function boundaries.",""]
    for r in refs:
        r["text"]=by_va[r["target_va"]]
        lines.extend([f'## {r["text"]} @ 0x{r["pc"]:X}',"","~~~asm"])
        for addr,mn,op,hx in window(raw,segs,r["pc"],0x80,0x180):
            lines.append(f"0x{addr:08X} {hx} {mn:8} {op}")
        lines.extend(["~~~",""])
    out.mkdir(parents=True,exist_ok=True)
    (out/"elf_image_xrefs.json").write_text(json.dumps(dict(elf_sha256=ELF_SHA,needles=NEEDLES,strings=strings,references=refs),indent=2)+"\n",encoding="utf-8")
    (out/"elf_image_xref_windows.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
    return dict(strings=len(strings),direct_refs=len(refs))

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--mode",choices=("archives","elf","all"),default="all")
    a=p.parse_args()
    if a.mode in ("archives","all"):
        print(json.dumps(scan(a.root,a.out),indent=2))
    if a.mode in ("elf","all"):
        print(json.dumps(elf_audit(a.root,a.out),indent=2))
