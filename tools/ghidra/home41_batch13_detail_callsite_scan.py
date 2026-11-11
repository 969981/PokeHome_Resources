#!/usr/bin/env python3
"""HOME41 Batch13 immutable parser /detail callsite and atoi sink scanner.
Produces only RVA/VA and integer code-reference results; no decrypted data.
"""
import argparse, hashlib, json, struct
from pathlib import Path
from home41_batch07_request_adrp_audit import EXPECTED_SHA, IMAGE_BASE, segments
from home41_batch09_box_save_cfg import decode
from home41_batch10_dispatch_audit import raw_at, va, adrp_page, add_immediate, adr_target

START=0x34E638-IMAGE_BASE
END=0x34ED80-IMAGE_BASE
KEY=0x710FB3-IMAGE_BASE
GETTER=0x317E00-IMAGE_BASE
def scan(raw):
    if hashlib.sha256(raw).hexdigest()!=EXPECTED_SHA:
        raise ValueError("original ELF SHA-256 mismatch")
    ss=segments(raw)
    words={pc:struct.unpack("<I",raw_at(raw,ss,pc,4))[0] for pc in range(START,END,4)}
    calls=[]
    references=[]
    for pc,w in words.items():
        typ,tgts,_,_=decode(w,pc)
        if typ=="BL":
            calls.append({"site":va(pc),"target":va(tgts[0]),"site_rva":pc,
                          "target_rva":tgts[0],"known_getter":tgts[0]==GETTER})
        if w & 0x9f000000 == 0x10000000:
            target=adr_target(w,pc)
            if target==KEY:references.append({"site":va(pc),"kind":"ADR","reg":w&31})
        if w & 0x9f000000 == 0x90000000:
            reg=w&31
            page=adrp_page(w,pc)
            for p in range(pc+4,min(pc+48,END),4):
                op=words[p]
                if (op&0xff000000)!=0x91000000 or ((op>>5)&31)!=reg:continue
                try:off=add_immediate(op,reg)
                except ValueError:continue
                if page+off==KEY:
                    references.append({"site":va(pc),"kind":"ADRP+ADD","add":va(p),"reg":reg})
    getters=[(int(x["site"],16)-IMAGE_BASE) for x in calls if x["known_getter"]]
    return {"elf_sha256":EXPECTED_SHA,"scan_range":[va(START),va(END)],
            "literal_detail_va":va(KEY),
            "detail_pointer_construction":references,
            "getter_calls":[x for x in calls if x["known_getter"]],
            "call_windows":[{"getter":va(g),"preceding_calls":[x for x in calls if g-0x20<=x["site_rva"]<g],
                            "next_calls":[x for x in calls if g<x["site_rva"]<=g+0x80]}
                            for g in getters],
            "all_calls":calls,
            "caution":"Do not equate all atoi callsites with the /detail parse without an exact branch/dataflow link."}
def main():
    p=argparse.ArgumentParser();p.add_argument("--elf",type=Path);p.add_argument("--out",type=Path)
    a=p.parse_args()
    d=scan(a.elf.read_bytes());a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,indent=2,ensure_ascii=False)+"\n",encoding="utf8")
    print(json.dumps({k:d[k] for k in ("scan_range","literal_detail_va","detail_pointer_construction","getter_calls","call_windows")},indent=2))
if __name__=="__main__":main()
