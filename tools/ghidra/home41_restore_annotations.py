#!/usr/bin/env python3
"""Reconstruct HOME41 standalone instruction/function annotation SQLite.

Only original raw SQLite bytes are concatenated; each part SHA256 and the
complete SHA256 are verified before running PRAGMA integrity_check and counts.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import shutil
import sqlite3
from pathlib import Path

def sha(file):
    h=hashlib.sha256()
    with file.open("rb") as f:
        for chunk in iter(lambda:f.read(4*1024*1024),b""):h.update(chunk)
    return h.hexdigest()

def restore(source:Path,target:Path):
    m=json.loads((source/"annotation_manifest.json").read_text(encoding="utf-8"))
    if m["status"]!="STATIC_ANNOTATION_GENERATED":
        raise ValueError("Unverified annotation manifest")
    parts=m["annotation_sqlite"]["parts"]
    if target.exists():raise FileExistsError(target)
    target.parent.mkdir(parents=True,exist_ok=True)
    tmp=target.with_suffix(".sqlite.tmp")
    size=0
    try:
        with tmp.open("wb") as out:
            for part in parts:
                f=source/"annotation_db"/part["path"]
                if f.stat().st_size!=part["size"] or sha(f)!=part["sha256"]:
                    raise ValueError("Corrupt shard "+str(f))
                with f.open("rb") as inp:shutil.copyfileobj(inp,out,4*1024*1024)
                size+=part["size"]
        if size!=m["annotation_sqlite"]["size"] or sha(tmp)!=m["annotation_sqlite"]["sha256"]:
            raise ValueError("Full annotation database SHA256 mismatch")
        with sqlite3.connect(tmp) as db:
            check=db.execute("PRAGMA integrity_check").fetchone()[0]
            counts={
                "functions":db.execute("SELECT COUNT(*) FROM function_annotations").fetchone()[0],
                "instructions":db.execute("SELECT COUNT(*) FROM instruction_annotations").fetchone()[0]
            }
        if check!="ok" or counts!={"functions":15415,"instructions":1029451}:
            raise ValueError("Annotation SQLite integrity/count mismatch "+str(counts))
        tmp.replace(target)
        return {"status":"SHA256_VERIFIED_AND_SQLITE_OK","database":str(target),
                "sha256":sha(target),"byte_size":size,"counts":counts}
    finally:
        if tmp.exists():tmp.unlink()

if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--source",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    print(json.dumps(restore(a.source,a.out),indent=2,ensure_ascii=False))
