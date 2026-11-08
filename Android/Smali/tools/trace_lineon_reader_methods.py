#!/usr/bin/env python3
"""Source-backed Lineon reader use-site audit in original HOME ARM64 IL2CPP.

Dedupe confirmed static access instruction RVAs; compare unproven +0x78
candidates and capture bounded before/after disassembly and signature labels.
No binary patching or networking.
"""
from __future__ import annotations

import argparse
import bisect
import json
import re
from pathlib import Path

KNOWN = {
    "ApiRequestBase.Parecool": (0x1F27F5C,0x1F28474),
    "ApiRequestBase.Ningale": (0x1F29E6C,0x1F29FC4)
}


def load_methods(path: Path):
    root=json.loads(path.read_text(encoding="utf-8"))
    methods={}
    pending=[root]
    while pending:
        x=pending.pop()
        if isinstance(x, list):
            pending.extend(e for e in x if isinstance(e,(dict,list)))
        elif isinstance(x,dict):
            adr=x.get("Address")
            if isinstance(adr,int) and adr>0 and isinstance(x.get("Name"),str):
                methods.setdefault(adr,[]).append({
                    "name":x["Name"],
                    "signature":x.get("Signature"),
                    "type_signature":x.get("TypeSignature")
                })
            pending.extend(e for e in x.values() if isinstance(e,(dict,list)))
    return methods,sorted(methods)


def main():
    parser=argparse.ArgumentParser()
    for name in ("--binary","--script","--confirmed","--broad","--out"):
        parser.add_argument(name,required=True,type=Path)
    a=parser.parse_args()
    from elftools.elf.elffile import ELFFile
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    funcs,addresses=load_methods(a.script)
    positive=json.loads(a.confirmed.read_text(encoding="utf-8"))
    broad=json.loads(a.broad.read_text(encoding="utf-8"))
    if not positive.get("known_control_write_detected") or not broad.get("known_lineon_write_control_verified"):
        raise SystemExit("Expected positive cross-reference controls missing")
    events={}
    for rec in positive["accesses"]:
        for e in rec["lineon_events"]:
            k=(e["instruction_rva"],e["kind"])
            if k not in events:
                events[k]={
                    "rva":e["instruction_rva"],
                    "kind":e["kind"],
                    "methods":rec["method_names"],
                    "provenance":rec["provenance"]
                }
    expected=("0x1F28474","field_read")
    if expected not in events or not events[expected]["provenance"]["static_fields_read"]:
        raise SystemExit("Parecool static Lineon read not confirmed by provenance scan")
    broad_readers=[
        x for x in broad["records"]
        if x["kind"].startswith("ldr")
        and x["instruction_rva"] in {"0x1F28474","0x1F29FC4"}
    ]
    if len(broad_readers)!=2:
        raise SystemExit("Independent candidate scanner missing Parecool/Ningale reads")

    with a.binary.open("rb") as f:
        elf=ELFFile(f)
        executable=[
            (int(seg["p_vaddr"]),seg.data()[:int(seg["p_filesz"])])
            for seg in elf.iter_segments()
            if seg["p_type"]=="PT_LOAD" and (int(seg["p_flags"])&1)
        ]
    cap=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    methods=[]
    for label,(func_rva,load_rva) in KNOWN.items():
        i=bisect.bisect_right(addresses,func_rva)
        last=addresses[i] if i<len(addresses) else func_rva+0x4000
        region=next(((start,blob) for start,blob in executable
                     if start<=func_rva<start+len(blob)),None)
        if not region:
            raise SystemExit("Known function outside executable segment: "+label)
        start,blob=region
        length=min(last-func_rva,0x6000,len(blob)-(func_rva-start))
        ins=list(cap.disasm(blob[func_rva-start:func_rva-start+length],func_rva))
        hits=[i for i,x in enumerate(ins) if x.address==load_rva]
        if len(hits)!=1:
            raise SystemExit("Known read instruction not exactly present: "+label)
        hit=hits[0]
        def row(instr):
            call_target=None
            names=[]
            if instr.mnemonic in ("bl","b"):
                match=re.search(r"0x[0-9a-f]+",instr.op_str)
                if match:
                    call_target=int(match.group(0),16)
                    names=[m["name"] for m in funcs.get(call_target,[])][:5]
            return {
                "rva":f"0x{instr.address:X}",
                "mnemonic":instr.mnemonic,
                "operands":instr.op_str,
                "target_method":names if names else None,
            }
        methods.append({
            "method":label,
            "rva":f"0x{func_rva:X}",
            "native_length_bytes":length,
            "method_script_records":funcs.get(func_rva,[]),
            "read_instruction_rva":f"0x{load_rva:X}",
            "read_instruction":row(ins[hit]),
            "first_48_instructions":[row(x) for x in ins[:48]],
            "context_before":[row(x) for x in ins[max(0,hit-85):hit]],
            "context_after":[row(x) for x in ins[hit+1:hit+100]],
            "confirmed_static_lineon": label.endswith("Parecool"),
            "confidence_source": (
                "TypeInfo->static_fields->+0x78 provenance plus independent +0x78 scan"
                if label.endswith("Parecool") else
                "Only +0x78 offset match; must discriminate instance Goelise"
            )
        })
    by_name={x["method"]:x for x in methods}
    parecool=by_name["ApiRequestBase.Parecool"]
    ningale=by_name["ApiRequestBase.Ningale"]
    def code_index(m):
        # The captured windows overlap, but each RVA represents one
        # immutable original ARM64 instruction.
        return {x["rva"]:x for x in (
            m["first_48_instructions"]+
            m["context_before"]+
            [m["read_instruction"]]+
            m["context_after"]
        )}
    c=code_index(parecool)
    n=code_index(ningale)
    expected_parecool=[
        ("0x1F28468","mov","w0, #-4"),
        ("0x1F28474","ldr","x22, [x8, #0x78]"),
        ("0x1F28478","bl","#0x1f2fcf4"),
        ("0x1F28480","mov","w0, #-3"),
        ("0x1F28488","bl","#0x1f2fcf4"),
        ("0x1F28494","mov","x0, x22"),
        ("0x1F28498","bl","#0x1f26f1c"),
        ("0x1F284A0","bl","#0x1f30638"),
        ("0x1F284AC","str","x1, [x0, #0x58]!"),
        ("0x1F284C4","bl","#0x27395f0")
    ]
    expected_instance=[
        ("0x1F29E80","mov","x19, x0"),
        ("0x1F29FC4","ldr","x3, [x19, #0x78]")
    ]
    for rva,mn,ops in expected_parecool:
        row=c.get(rva)
        if not row or row["mnemonic"]!=mn or row["operands"]!=ops:
            raise SystemExit("Parecool pipeline evidence mismatch at "+rva)
    for rva,mn,ops in expected_instance:
        row=n.get(rva)
        if not row or row["mnemonic"]!=mn or row["operands"]!=ops:
            raise SystemExit("Ningale instance-field proof mismatch at "+rva)
    parecool_pipeline={
        "status":"verified_arm64_instructions",
        "native_method":"ILib.Unity.Net.ApiRequestBase.Parecool",
        "field_read":"0x1F28474",
        "charmillon_second_pass_parameters":[-4,-3],
        "charmillon_call":"0x1F28498",
        "draco_to_string_call":"0x1F284A0",
        "object_field_store":{"rva":"0x1F284AC","offset":"0x58"},
        "serialize_to_json_call":"0x1F284C4",
        "scope":"Static method instructions; final HTTP request bytes not inspected",
    }
    out={
        "status":"method_contexts_recovered",
        "parecool_transform_and_serialization_pipeline":parecool_pipeline,
        "ningale_offset_is_instance_field":True,
        "ningale_proof":"0x1F29E80 mov x19,x0 (this); 0x1F29FC4 ldr x3,[x19,#0x78]",
        "unique_confirmed_field_reads":sorted([
            v for v in events.values() if v["kind"]=="field_read"
        ],key=lambda r:r["rva"]),
        "unique_verified_read_instruction_count":sum(
            1 for v in events.values() if v["kind"]=="field_read"
        ),
        "typeinfo_reader_vs_instance_offset_ambiguity":True,
        "methods":methods,
        "caution":"Only static AArch64 instruction provenance; not proof that HOME transmits the field or that server rejects it."
    }
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(out,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({
        "status":out["status"],
        "unique_verified_read_instruction_count":out["unique_verified_read_instruction_count"],
        "methods":[{"name":x["method"],"signature":x["method_script_records"],"read":x["read_instruction"]} for x in methods]
    },ensure_ascii=False))
    return 0


if __name__=="__main__":
    raise SystemExit(main())
