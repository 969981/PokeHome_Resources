#!/usr/bin/env python3
"""HOME 4.1.0 PML: export ALL Waza and Personal FlatBuffers records as long-form CSV.

Raw field byte spans are authoritative; names/types/semantics are NOT inferred.
Requires Python 3.9+ and home41_p2_pml_readonly.py next to this file.
"""
from __future__ import annotations
import argparse, csv, hashlib, json, re, struct
from pathlib import Path
from collections import Counter
from home41_p2_pml_readonly import table, payload, records

def output_csv(path, rows, keys):
    path.parent.mkdir(parents=True,exist_ok=True)
    with path.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=keys)
        w.writeheader()
        w.writerows(rows)

def export(root,out):
    out.mkdir(parents=True,exist_ok=True)
    problems=[]
    moves=[]
    personal=[]
    files=Counter()
    for path in sorted((root/"waza").glob("*/waza*.wazabin")):
        game=path.parent.name
        m=re.fullmatch(r"waza(\d+)\.wazabin",path.name)
        if m is None: continue
        mid=int(m.group(1))
        try:
            b=path.read_bytes()
            if len(b)>256*1024:raise ValueError("large Waza buffer")
            t=table(b,struct.unpack_from("<I",b,0)[0])
            offset,fields,_=t
            if fields and fields[0]:
                internal=struct.unpack_from("<I",b,offset+fields[0])[0]
                if internal!=mid:raise ValueError(f"move ID mismatch: {internal} != {mid}")
            raw=payload(b,t)
            for index,value in enumerate(raw):
                if value is not None:
                    moves.append({"game":game,"move_id":mid,"field_index":index,
                                  "raw_hex":value,"byte_count":len(value)//2})
            files["waza_files"]+=1
        except (ValueError, OSError,struct.error) as ex:
            problems.append({"path":str(path.relative_to(root)),"error":str(ex)})
    for path in sorted((root/"personal").glob("*_personal_total.perbin")):
        game=path.stem.removesuffix("_personal_total")
        try:
            b=path.read_bytes()
            if len(b)>32*1024*1024:raise ValueError("large Personal buffer")
            arr=records(b)
            for record_index,entry in enumerate(arr):
                for index,value in enumerate(payload(b,entry)):
                    if value is not None:
                        personal.append({"game":game,"record_index":record_index,
                                         "field_index":index,"raw_hex":value,
                                         "byte_count":len(value)//2})
            files[f"personal_{game}_records"]=len(arr)
            files["personal_files"]+=1
        except (ValueError,OSError,struct.error) as ex:
            problems.append({"path":str(path.relative_to(root)),"error":str(ex)})
    output_csv(out/"waza_fields.csv",moves,["game","move_id","field_index","raw_hex","byte_count"])
    output_csv(out/"personal_fields.csv",personal,["game","record_index","field_index","raw_hex","byte_count"])
    output_csv(out/"errors.csv",problems,["path","error"])
    summary={"version":"4.1.0","source_dir":str(root),"counts":dict(files),
             "waza_field_rows":len(moves),"personal_field_rows":len(personal),
             "errors":len(problems),
             "interpretation":"All values are raw little-endian field byte ranges; DO NOT assign game meaning without schema/ELF crosscheck"}
    (out/"summary.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps(summary,indent=2,ensure_ascii=False))
    return 1 if problems else 0

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",required=True,type=Path,help=".../NCA/1/bin/pml")
    p.add_argument("--out",required=True,type=Path)
    a=p.parse_args()
    raise SystemExit(export(a.root.resolve(),a.out.resolve()))
