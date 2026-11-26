#!/usr/bin/env python3
"""HOME 4.1.0 image selection: offline model from SHA-bound Ghidra and ARM64 evidence.
Not native execution parity. Missing species returns None (native constant unresolved).
Inputs are raw native request fields, not arbitrary PKM fields.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import struct
from pathlib import Path

NCA = "57b83ea8c0af21ef26e2519b9580b373_NCA"
GENDER = {0: (0, 3, 4), 1: (1, 3, 5), 2: (2,)}
VARIANT = {0: 0, 1: 0, 2: 1}

def u16(data, off):
    return struct.unpack_from("<H", data, off)[0]

def u32(data, off):
    return struct.unpack_from("<I", data, off)[0]

def field(data, t, k):
    vt = t - struct.unpack_from("<i", data, t)[0]
    pos = 4 + 2*k
    if pos >= u16(data, vt):
        return None
    delta = u16(data, vt+pos)
    return t+delta if delta else None

def scalar(data, t, k, size=4):
    p = field(data, t, k)
    return (data[p] if size == 1 else u32(data,p)) if p is not None else 0

def follow(data, p):
    if p is None:
        raise ValueError("missing required uoffset")
    return p+u32(data,p)

def vector(data,t,k):
    v = follow(data,field(data,t,k))
    return [follow(data,v+4+4*j) for j in range(u32(data,v))]

def original_rows(data):
    root = u32(data,0)
    for s in vector(data,root,0):
        for f in vector(data,s,1):
            for c in vector(data,f,1):
                for w in vector(data,c,1):
                    for leaf in vector(data,w,1):
                        k=follow(data,field(data,leaf,0))
                        p=follow(data,field(data,leaf,1))
                        yield (scalar(data,s,0),scalar(data,f,0),scalar(data,c,0,1),
                               scalar(data,w,0,1),scalar(data,k,0,1),scalar(data,k,1,1),
                               scalar(data,k,2),data[p+4:p+4+u32(data,p)].decode("ascii"))

def resolve(rows, species, form, color, view, gender, variant, decoration, special_0d=False):
    """Preserve source order. special_0d is observed egg-like normalization flag."""
    if special_0d:
        species,form,color,gender,variant,decoration = 0,int(species==490),0,2,0,0
    current = [r for r in rows if r[0] == species]
    if not current:
        return None, ["missing_species_constant_unresolved"]
    trace=[]
    for col,req,label in ((1,form,"form"),(2,int(bool(color)),"color"),(3,view&1,"view")):
        chosen = next((v for v in (req,0) if any(r[col]==v for r in current)),current[0][col])
        trace.append(f"{label}:{req}->{chosen}")
        current = [r for r in current if r[col]==chosen]
    for v,d,stage in ((variant,decoration,"exact"),(0,decoration,"variant_zero"),
                      (variant,0,"decoration_zero"),(0,0,"both_zero")):
        for r in current:
            if r[4] in GENDER.get(gender,()) and r[5]==VARIANT.get(v,-1) and (species!=869 or r[6]==d):
                return r[7],trace+[stage]
    return current[0][7],trace+["first_leaf"]

def item_key(data, input_number):
    """0x4FD4F8 -> 0x4FD7D0 -> 0x4FD80C / selector 4."""
    index = (input_number-1)&0xff
    start=0x364+2*u16(data,2)+2*data[8]
    item_id=u16(data,start+2*index) if input_number and index<data[0x15] else 0
    if item_id>=u16(data,2):
        raise ValueError("invalid native item ID")
    rec=u16(data,0x44+2*item_id)
    if rec>=u16(data,4):
        raise ValueError("invalid native item record")
    sprite=struct.unpack_from("<h",data,u32(data,0x40)+48*rec+0x1a)[0]
    return {"input":input_number,"item_id":item_id,"record_index":rec,"sprite":sprite,
            "raw_name": "item_dummy^o" if sprite<0 else f"item_{sprite:04d}^o"}

def audit(root, out, icons=None):
    rom=root/NCA/"1/bin"
    plist=(rom/"pokemon/pokemon_list/pokemon_image_list.bin").read_bytes()
    item=(rom/"pml/item/item.dat").read_bytes()
    rows=list(original_rows(plist))
    if len(rows)!=3506:
        raise ValueError("unexpected selector baseline")
    with (root/"HomeImageResources/research/pokemon_image_selector_v2.csv").open(newline="",encoding="utf-8") as f:
        fields=("species","form","color_code","view_code","gender_code","variant_code","decoration_raw")
        expected=[tuple(int(r[k]) for k in fields)+(r["resource_stem"],) for r in csv.DictReader(f)]
    if rows!=expected:
        raise ValueError("CSV differs from original data or source order")
    inverse=(0,1,2,0,0,1)
    misses=[]
    for r in rows:
        name,trace=resolve(rows,*r[:4],inverse[r[4]],2 if r[5] else 0,r[6])
        if name!=r[7]:
            misses.append({"expected":r[7],"actual":name,"trace":trace})
    mapping=[item_key(item,i) for i in range(item[0x15]+1)]
    samples=[
        {"request":[490,0,1,0,0,2,0,True],"expected":"0000_001_uk_n_00000000_f_n"},
        {"request":[25,99,1,1,1,2,0],"expected":"0025_000_mf_g_00000000_f_r"},
        {"request":[869,0,0,0,1,2,7],"expected":"0869_000_fo_g_00000000_f_n"},
        {"request":[1,0,0,0,2,0,0],"expected":"0001_000_mf_n_00000000_f_n"},
        {"request":[99999,0,0,0,0,0,0],"expected":None},
    ]
    for case in samples:
        case["actual"],case["trace"]=resolve(rows,*case["request"])
        if case["actual"]!=case["expected"]:
            raise ValueError("model sample mismatch")
    result={"status":"STATIC_MODEL_ONLY","plist_sha256":hashlib.sha256(plist).hexdigest(),
            "item_sha256":hashlib.sha256(item).hexdigest(),"source_order_match":True,
            "selector_rows":len(rows),"reachable_model_rows":len(rows)-len(misses),"misses":misses,
            "item_table_offset":0x364+2*u16(item,2)+2*item[8],"item_inputs":mapping,
            "samples":samples,"missing_species_constant":"ELF VA 0x61E360 not read"}
    if icons:
        with (icons/"items/brti_index.csv").open(newline="",encoding="utf-8") as f:
            names=[r["raw_name"] for r in csv.DictReader(f)]
        result["item_exact_names_equal"]=sorted(names)==sorted(r["raw_name"] for r in mapping)
        if not result["item_exact_names_equal"]:
            raise ValueError("item BRTI set differs from selector")
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(result,indent=2)+"\n",encoding="utf-8")
    if misses:
        raise ValueError("selector roundtrip mismatch")
    print(json.dumps({k:v for k,v in result.items() if k not in ("item_inputs","samples","misses")}))

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--icons",type=Path)
    a=p.parse_args()
    audit(a.root,a.out,a.icons)
