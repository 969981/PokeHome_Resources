#!/usr/bin/env python3
"""P6 item.dat Native getter hunt: caller graph and record-stride evidence.

Read-only AArch64 opcode survey. Candidate patterns do NOT prove alias from
mapped item.dat data to a load operand unless a concrete producer chain is
recovered. Preserve all candidates, explicitly mark unproven matches.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import re
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments

ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
TARGETS={
    0x5020A0:"item_dat_formatted_path",
    0x50213C:"generic_resource_forwarder",
    0x50226C:"resource_descriptor_builder",
    0x502950:"global_resource_context",
    0x5020C4:"item_path_call_string_helper",
    0x69E90:"hash_lookup_entry_consumer",
    0x4FD784:"item_dat_record_pointer_getter",
}
IMMEDIATE=re.compile(r"^#0x([0-9a-f]+)$")


def examine(raw: bytes) -> dict:
    sha=hashlib.sha256(raw).hexdigest()
    if sha!=ELF_SHA:raise ValueError("ELF build mismatch")
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.skipdata=True
    segments=elf_segments(raw)
    instructions=[]
    for s in segments:
        if not s["executable"]:continue
        begin=s["file_offset"];size=s["size"]
        for i in md.disasm(raw[begin:begin+size],s["vaddr"]):
            if i.mnemonic==".byte":continue
            if 0x500000<=i.address<0x550000 or i.mnemonic=="bl":
                instructions.append({
                    "pc":i.address,"mn":i.mnemonic,"op":i.op_str,"byte":i.bytes.hex()
                })
    callers={f"{k:#x}_{v}":[] for k,v in TARGETS.items()}
    for row in instructions:
        if row["mn"]!="bl":continue
        mm=IMMEDIATE.fullmatch(row["op"])
        if mm and int(mm.group(1),16) in TARGETS:
            addr=int(mm.group(1),16)
            callers[f"{addr:#x}_{TARGETS[addr]}"].append(row)
    # The next pass selects w-reg #0x30 x UMADDL candidate stride patterns;
    # does not confuse stack frame offsets with data-record stride.
    zone=[row for row in instructions if 0x500000<=row["pc"]<0x550000]
    candidates=[]
    for j,row in enumerate(zone):
        if row["mn"]!="mov":continue
        mm=re.fullmatch(r"(w\d+), #0x30",row["op"])
        if not mm:continue
        reg=mm.group(1)
        region=zone[j+1:j+18]
        follow=[r for r in region if r["mn"] in ("umaddl","smaddl","madd","mul")
                and reg in r["op"].split(", ")]
        if not follow:continue
        nearby=zone[max(0,j-16):j+24]
        candidates.append({
            "const_pc":row["pc"],"stride_reg":reg,
            "matching_arithmetic":follow[:3],
            "context":nearby,
            "has_halfword_read":any(r["mn"] in ("ldrh","ldurh") for r in nearby),
            "has_0x40_or_0x44_header_offset":any(
                re.search(r"#0x(?:40|44)(?:\]|,|$)",r["op"]) for r in nearby
            ),
            "proven_same_item_dat_backing":False,
        })
    # Local caller windows let human reviewers distinguish generic resource
    # loading from actual Item8 property getters.
    return {
        "elf_sha256":sha,
        "isa":"AArch64 little-endian",
        "limitations":"callers and multiply patterns are static; no recovered item.dat data-pointer alias or property getter yet",
        "caller_count":{k:len(v) for k,v in callers.items()},
        "callers":callers,
        "item_region_instructions":len(zone),
        "candidate_count":len(candidates),
        "record_stride_candidates":candidates,
    }


def main():
    p=argparse.ArgumentParser();p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    d=examine(a.elf.read_bytes())
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({
        "sha":d["elf_sha256"],"callers":d["caller_count"],
        "item_region_instructions":d["item_region_instructions"],
        "stride_candidates":d["candidate_count"],
        "sample_strides":[hex(r["const_pc"]) for r in d["record_stride_candidates"][:30]],
    }))


if __name__=="__main__":
    main()
