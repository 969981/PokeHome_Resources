#!/usr/bin/env python3
"""Strict, schema-aware auxiliary HOME 4.1.0 decoders.

Never infer unknown Pokemon data fields as authoritative. Read-only input.
Bundled formats: BFBS FlatBuffers reflection, Wwise BNK, FFNT metadata,
BNSH bounded structural header, Wwise AKPK package index.
No codec transcoding is performed on encrypted fonts or Wwise media.
"""
from __future__ import annotations

import hashlib
import re
import struct
from pathlib import Path
from export_home41_resources import fbs_details

MAX_VECTOR = 20000
BASE_TYPES = ("None UType Bool Byte UByte Short UShort Int UInt Long ULong "
              "Float Double String Vector Obj Union Array Vector64").split()
SCALARS = {
    "Bool": "bool", "Byte": "byte", "UByte": "ubyte",
    "Short": "short", "UShort": "ushort", "Int": "int", "UInt": "uint",
    "Long": "long", "ULong": "ulong", "Float": "float", "Double": "double",
    "String": "string", "UType": "ubyte"
}

def u16(b,p):
    if p < 0 or p + 2 > len(b): raise ValueError("u16 out of range")
    return struct.unpack_from("<H",b,p)[0]
def u32(b,p):
    if p < 0 or p + 4 > len(b): raise ValueError("u32 out of range")
    return struct.unpack_from("<I",b,p)[0]
def i32(b,p):
    if p < 0 or p + 4 > len(b): raise ValueError("i32 out of range")
    return struct.unpack_from("<i",b,p)[0]
def u64(b,p):
    if p < 0 or p + 8 > len(b): raise ValueError("u64 out of range")
    return struct.unpack_from("<Q",b,p)[0]

class Reflection:
    def __init__(self,b):
        if b[4:8] != b"BFBS": raise ValueError("not BFBS reflection binary")
        self.b=b
        self.root=u32(b,0)
        self.table(self.root)

    def table(self,pos):
        if pos < 4 or pos + 4 > len(self.b): raise ValueError("bad FB table")
        vt=pos-i32(self.b,pos)
        if vt < 0 or vt + 4 > len(self.b): raise ValueError("FB vtable bounds")
        vsize, objsize=u16(self.b,vt),u16(self.b,vt+2)
        if vsize < 4 or vsize % 2 or vsize > 4096 or vt+vsize>len(self.b) or pos+objsize>len(self.b):
            raise ValueError("FB object boundaries")
        return vt,vsize,objsize

    def slot(self,pos,i):
        vt,sz,obj=self.table(pos)
        if 4+2*i+2>sz: return None
        off=u16(self.b,vt+4+2*i)
        if not off: return None
        if off<4 or off>=obj: raise ValueError("bad FB field")
        return pos+off

    def ref(self,pos,i):
        p=self.slot(pos,i)
        if p is None:return None
        q=p+u32(self.b,p)
        if q>=len(self.b):raise ValueError("FB ref boundary")
        return q

    def integer(self,pos,i,width=4,signed=False,default=0):
        p=self.slot(pos,i)
        if p is None:return default
        if p+width>len(self.b):raise ValueError("FB scalar boundary")
        return int.from_bytes(self.b[p:p+width],"little",signed=signed)

    def string(self,pos,i):
        p=self.ref(pos,i)
        if p is None:return None
        size=u32(self.b,p)
        if size>len(self.b)-p-4 or size>1000000:raise ValueError("FB string length")
        return self.b[p+4:p+4+size].decode("utf-8")

    def vector(self,pos,i):
        p=self.ref(pos,i)
        if p is None:return []
        num=u32(self.b,p)
        if num>MAX_VECTOR or p+4+num*4>len(self.b):raise ValueError("FB vector overflow")
        out=[]
        for j in range(num):
            q=p+4+4*j
            dst=q+u32(self.b,q)
            if dst>=len(self.b):raise ValueError("FB table ref overflow")
            self.table(dst)
            out.append(dst)
        return out

    def rtype(self,pos):
        if pos is None:return None
        return {"base_type":self.integer(pos,0,1),
                "element":self.integer(pos,1,1),
                "index":self.integer(pos,2,4,True,-1),
                "fixed_length":self.integer(pos,3,2),
                "base_size":self.integer(pos,4,4,default=4),
                "element_size":self.integer(pos,5,4)}

    def field(self,pos):
        return {"name":self.string(pos,0),
                "type":self.rtype(self.ref(pos,1)),
                "id":self.integer(pos,2,2), "offset":self.integer(pos,3,2),
                "default_integer":self.integer(pos,4,8,True),
                "deprecated":bool(self.integer(pos,6,1)),
                "required":bool(self.integer(pos,7,1)),
                "key":bool(self.integer(pos,8,1)),
                "optional":bool(self.integer(pos,11,1)),
                "offset64":bool(self.integer(pos,13,1))}

    def object(self,pos):
        return {"name":self.string(pos,0),
                "fields":[self.field(f) for f in self.vector(pos,1)],
                "is_struct":bool(self.integer(pos,2,1)),
                "min_align":self.integer(pos,3,4,True),
                "byte_size":self.integer(pos,4,4,True)}

    def enum(self,pos):
        vals=[]
        for v in self.vector(pos,1):
            vals.append({"name":self.string(v,0),"value":self.integer(v,1,8,True)})
        return {"name":self.string(pos,0),"values":vals,
                "is_union":bool(self.integer(pos,2,1)),
                "underlying_type":self.rtype(self.ref(pos,3))}

    def extract(self):
        objects=[self.object(x) for x in self.vector(self.root,0)]
        enums=[self.enum(x) for x in self.vector(self.root,1)]
        root=self.ref(self.root,4)
        root_name=self.string(root,0) if root is not None else None
        doc={"format":"FlatBuffers binary reflection (BFBS)",
             "root_table":root_name,
             "file_identifier":self.string(self.root,2),
             "file_extension":self.string(self.root,3),
             "objects":objects,"enums":enums,
             "certainty":"names, indices and types recovered directly from BFBS; no guessed fields"}
        return doc

def bfbs_to_fbs(doc):
    objects=doc["objects"];enums=doc["enums"]
    def normalized(s): return re.sub(r"[^a-zA-Z0-9_]","_",s)
    def typeref(t):
        if t is None: return "ubyte"
        code=t["base_type"]
        base=BASE_TYPES[code] if 0<=code<len(BASE_TYPES) else "None"
        if base in SCALARS:return SCALARS[base]
        if base=="Obj":
            i=t["index"]
            return normalized(objects[i]["name"].split(".")[-1]) if 0<=i<len(objects) else "ubyte"
        if base=="Union":
            i=t["index"]
            return normalized(enums[i]["name"].split(".")[-1]) if 0<=i<len(enums) else "ubyte"
        if base in ("Vector","Array","Vector64"):
            elm=t["element"]; idx=t["index"]
            if 0<=elm<len(BASE_TYPES):
                kind=BASE_TYPES[elm]
                if kind=="Obj" and 0<=idx<len(objects):
                    inner=normalized(objects[idx]["name"].split(".")[-1])
                elif kind in ("Union","UType") and 0<=idx<len(enums):
                    inner=normalized(enums[idx]["name"].split(".")[-1])
                else:inner=SCALARS.get(kind,"ubyte")
            else:inner="ubyte"
            return "["+inner+"]"
        return "ubyte"

    lines=["// Reconstructed from BFBS reflection; not original comments/formatting.",
           "// Review union and optional field semantics before recompiling.",""]
    for enum in enums:
        nm=normalized(enum["name"].split(".")[-1])
        if enum["is_union"]:
            members=", ".join(normalized(v["name"].split(".")[-1]) for v in enum["values"] if v["value"]>0)
            lines.append(f"union {nm} {{ {members} }}")
        else:
            t=typeref(enum["underlying_type"])
            members=", ".join(f'{normalized(v["name"].split(".")[-1])} = {v["value"]}' for v in enum["values"])
            lines.append(f"enum {nm}: {t} {{ {members} }}")
        lines.append("")
    for obj in objects:
        nm=normalized(obj["name"].split(".")[-1])
        lines.append(f'{"struct" if obj["is_struct"] else "table"} {nm} {{')
        for fld in sorted(obj["fields"],key=lambda x:x["id"]):
            name=normalized(fld["name"])
            annotations=[]
            if fld["required"] and not obj["is_struct"]:annotations.append("required")
            if fld["key"]:annotations.append("key")
            if fld["deprecated"]:annotations.append("deprecated")
            suffix=(" ("+", ".join(annotations)+")") if annotations else ""
            lines.append(f'  {name}: {typeref(fld["type"])}{suffix};')
        lines.append("}");lines.append("")
    if doc["root_table"]:
        lines.append(f'root_type {normalized(doc["root_table"].split(".")[-1])};')
    if doc.get("file_identifier"):
        lines.append('file_identifier "'+doc["file_identifier"]+'";')
    return "\n".join(lines)+"\n"


def bank_chunks(data):
    if data[:4]!=b"BKHD":raise ValueError("missing Wwise BKHD")
    pos=0;chunks=[]
    while pos < len(data):
        if pos+8>len(data):raise ValueError("truncated Wwise chunk")
        tag=data[pos:pos+4].decode("ascii","replace")
        if not re.fullmatch("[A-Z0-9_]{4}",tag):raise ValueError("invalid Wwise chunk id")
        length=u32(data,pos+4)
        if length>len(data)-(pos+8):raise ValueError("Wwise chunk extends past file")
        chunks.append({"type":tag,"offset":pos+8,"length":length})
        pos+=8+length
    if not chunks or chunks[0]["type"]!="BKHD":raise ValueError("Wwise header order")
    return chunks

def decode_bnk(data):
    chunks=bank_chunks(data)
    header=chunks[0]
    if header["length"]<8:raise ValueError("truncated Wwise BKHD")
    version=u32(data,header["offset"])
    bank_id=u32(data,header["offset"]+4)
    idx=next((c for c in chunks if c["type"]=="DIDX"),None)
    payload=next((c for c in chunks if c["type"]=="DATA"),None)
    entries=[]
    if idx:
        if idx["length"]%12:raise ValueError("unaligned Wwise DIDX")
        for p in range(idx["offset"],idx["offset"]+idx["length"],12):
            fid,off,length=struct.unpack_from("<III",data,p)
            if payload and off+length>payload["length"]:raise ValueError("Wwise media outside DATA")
            entries.append({"wem_id":fid,"offset":off,"bytes":length})
    hierarchy=next((c for c in chunks if c["type"]=="HIRC"),None)
    objects=[]
    if hierarchy:
        p=hierarchy["offset"]; end=p+hierarchy["length"]
        count=u32(data,p);p+=4
        if count>100000:raise ValueError("too many Wwise HIRC records")
        for i in range(count):
            if p+9>end:raise ValueError("truncated Wwise HIRC")
            kind=data[p];size=u32(data,p+1);oid=u32(data,p+5)
            if size<4 or p+5+size>end:raise ValueError("Wwise HIRC size")
            objects.append({"type_id":kind,"object_id":oid,"bytes":size,"source_offset":p})
            p+=5+size
        if p!=end:raise ValueError("Wwise HIRC trailing data")
    return {"format":"Wwise SoundBank","version":version,"bank_id":bank_id,
            "chunks":chunks,"embedded_media_index":entries,"hirc_objects":objects,
            "certainty":"bank chunk boundaries, DIDX, and HIRC record headers parsed; events and codec not decoded"}, payload

def decode_bffnt(data):
    if data[:4]!=b"FFNT" or data[4:6]!=b"\xff\xfe":raise ValueError("not little endian Nintendo FFNT")
    if u16(data,6)!=20 or u32(data,12)!=len(data):raise ValueError("FFNT size/header")
    cnt=u16(data,16);off=20;sections=[]
    if cnt>2000:raise ValueError("FFNT section count")
    for i in range(cnt):
        if off+8>len(data):raise ValueError("FFNT section bounds")
        tag=data[off:off+4].decode("ascii","replace")
        size=u32(data,off+4)
        if size<8 or off+size>len(data):raise ValueError("FFNT block size")
        sections.append({"tag":tag,"offset":off,"bytes":size})
        off+=size
    return {"format":"Nintendo FFNT","endian":"little","version_raw":data[8:12].hex(),
            "file_bytes":len(data),"sections":sections,
            "certainty":"header and section layout only; font glyphs remain proprietary"}

def decode_bnsh(data):
    if data[:4]!=b"BNSH":raise ValueError("not Nintendo BNSH")
    if data[12:14]!=b"\xff\xfe":raise ValueError("unsupported BNSH endian")
    offset_1c=u32(data,28)
    if offset_1c > len(data):
        raise ValueError("BNSH header offset 0x1C beyond file")
    return {"format":"Nintendo Switch BNSH shader archive",
            "version_raw":data[8:12].hex(),
            "header_u32_0x1c":offset_1c,
            "header_u32_0x1c_equals_file_size":offset_1c==len(data),
            "size_bytes":len(data),
            "header_hex":data[:64].hex(),
            "certainty":"signature/header only; 0x1C meaning unresolved; shader programs NOT disassembled"}

def decode_akpk(data):
    if data[:4]!=b"AKPK":raise ValueError("not Audiokinetic AKPK")
    if len(data)<28:raise ValueError("AKPK truncated")
    head=[u32(data,p) for p in (4,8,12,16,20,24)]
    if head[0]>len(data) or head[0]<16:raise ValueError("bad AKPK header length")
    return {"format":"Wwise File Package AKPK","source_bytes":len(data),
            "header_size":head[0], "header_fields_u32":head,
            "certainty":"validated package signature and header boundary; streamed media directory not yet decoded"}
