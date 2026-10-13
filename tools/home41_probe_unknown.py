#!/usr/bin/env python3
"""Diagnostic signatures and bounded sample bytes for previously unsupported 4.1.0 assets.
No decoding claims are made here. The report never embeds full copyrighted source bytes.
"""
import json
import hashlib
import struct
from pathlib import Path
from collections import Counter

ROOT = Path(__file__).resolve().parents[1]
NCA="57b83ea8c0af21ef26e2519b9580b373_NCA"
BASE=ROOT/NCA/"1"
MANIFEST=ROOT/"Unpack/_meta/manifest.json"
OUT=ROOT/"docs/UNPACK_P4_SIGNATURES.json"

def main():
    rows=json.loads(MANIFEST.read_text(encoding="utf8"))["files"]
    unresolved=[r for r in rows if r["status"]=="unsupported"]
    report=[]
    for r in unresolved:
        path=ROOT/r["source_path"]
        with path.open("rb") as f: b=f.read(256)
        item={"source":r["source_path"].removeprefix(NCA+"/1/"),
              "size":path.stat().st_size,
              "sha256":r["source_sha256"],
              "first64_hex":b[:64].hex(),
              "ascii_preview":"".join(chr(x) if 32<=x<=126 else "." for x in b[:64]),
              "u32le_first8":[struct.unpack_from("<I",b,i)[0] for i in range(0,min(len(b)-3,32),4)],
              "magic":b[:4].decode("latin1")}
        report.append(item)
    # The PNG gaps are independent of the 65 unsupported input files.
    counts=Counter()
    samples={}
    for r in rows:
        if not r["source_path"].lower().endswith(".bntx.gz"):
            continue
        if r["status"]!="partial":
            continue
        w=r.get("warning","")
        reason=w.split(";")[0][:160] or "unexplained"
        counts[reason]+=1
        if reason not in samples:
            samples[reason]=r["source_path"].removeprefix(NCA+"/1/")
    OUT.parent.mkdir(parents=True,exist_ok=True)
    OUT.write_text(json.dumps({"input_unsupported_count":len(report),
                               "unsupported_sources":report,
                               "bntx_partial_warning_top":counts.most_common(15),
                               "bntx_partial_examples":samples},indent=2,ensure_ascii=False)+"\n",
                   encoding="utf-8")
    print("Unsupported asset signatures and texture failure categories:")
    print(json.dumps({"count":len(report),"samples":report[:10],
                      "top_texture_issues":counts.most_common(10)},ensure_ascii=False,indent=2))
if __name__=="__main__": main()
