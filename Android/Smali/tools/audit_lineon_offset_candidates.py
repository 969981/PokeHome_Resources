#!/usr/bin/env python3
"""Independent (non-TypeInfo-based) ARM64 +0x78 memory-access inventory.

Classify *candidate* Lineon accesses, not guaranteed Lineon readers:
ApiRequestBase also has an instance field Goelise at offset 0x78. Separating
static-vs-instance bases requires a confirmed pointer provenance chain.
No API traffic, secrets or patching.
"""
from __future__ import annotations

import argparse
import bisect
import json
import struct
from collections import Counter
from pathlib import Path


def method_index(script: Path):
    source = json.loads(script.read_text(encoding="utf-8"))
    found = {}
    todo = [source]
    while todo:
        x = todo.pop()
        if isinstance(x, list):
            todo.extend(z for z in x if isinstance(z,(list,dict)))
        elif isinstance(x,dict):
            if isinstance(x.get("Address"),int) and isinstance(x.get("Name"),str):
                address = x["Address"]
                if address > 0:
                    found.setdefault(address,[]).append(x["Name"])
            todo.extend(z for z in x.values() if isinstance(z,(list,dict)))
    return sorted(found), found


def offset_match(word: int):
    """Selected ARM64 unsigned-immediate memory ops and 64-bit ADD #0x78."""
    major = word & 0xFFC00000
    field = (word >> 10) & 0xFFF
    if major in (0xF9400000,0xF9000000) and field == 0x78 // 8:
        return "ldr64" if major == 0xF9400000 else "str64"
    if major in (0xB9400000,0xB9000000) and field == 0x78 // 4:
        return "ldr32" if major == 0xB9400000 else "str32"
    if (word & 0xFFC00000) == 0x91000000 and field == 0x78:
        return "add64_address"
    return None


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--binary", required=True, type=Path)
    p.add_argument("--script", required=True, type=Path)
    p.add_argument("--out", required=True, type=Path)
    a=p.parse_args()

    from elftools.elf.elffile import ELFFile
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
    with a.binary.open("rb") as f:
        elf=ELFFile(f)
        if elf["e_machine"] != "EM_AARCH64":
            raise SystemExit("Expected original ARM64 ELF")
        segments=[
            (int(s["p_vaddr"]),s.data()[:int(s["p_filesz"])])
            for s in elf.iter_segments()
            if s["p_type"]=="PT_LOAD" and (int(s["p_flags"])&1)
        ]
    starts,method_names=method_index(a.script)
    reader=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    all_counts=Counter()
    api_counts=Counter()
    relevant=[]
    control={}
    for start,data in segments:
        for (i,(word,)) in enumerate(struct.iter_unpack("<I",data[:len(data)//4*4])):
            kind=offset_match(word)
            if kind is None:
                continue
            all_counts[kind]+=1
            rva=start+i*4
            mi=bisect.bisect_right(starts,rva)-1
            if mi<0:
                continue
            method_rva=starts[mi]
            names=method_names[method_rva]
            if not any(name.startswith("ILib.Unity.Net.") for name in names):
                continue
            api_counts[kind]+=1
            if len(relevant)>=1000:
                raise SystemExit("Too many network-class +0x78 references")
            ins=next(iter(reader.disasm(data[i*4:i*4+4],rva)),None)
            if ins is None:
                continue
            entry={
                "instruction_rva":f"0x{rva:X}",
                "kind":kind,
                "instruction":f"{ins.mnemonic} {ins.op_str}",
                "containing_method_rva":f"0x{method_rva:X}",
                "method_candidates":names[:7],
                "delta_from_method_start":rva-method_rva,
                "static_field_provenance_verified":False,
                "note":"May access an instance object at +0x78; not a verified Lineon load"
            }
            relevant.append(entry)
            if rva in (0x1F26F08,0x1F2A890):
                control[f"0x{rva:X}"]=entry
    if set(control)!={"0x1F26F08","0x1F2A890"}:
        raise SystemExit(f"Known Lineon writers missing from broad access inventory: {list(control)}")
    counts_by_method={}
    for x in relevant:
        label=x["method_candidates"][0]
        if label not in counts_by_method:
            counts_by_method[label]={"loads":0,"stores":0,"addresses":0}
        k=x["kind"]
        key=("loads" if k.startswith("ldr") else "stores" if k.startswith("str") else "addresses")
        counts_by_method[label][key]+=1
    report={
        "status":"completed",
        "methodology":"ARM64 unsigned-immediate LDR/STR and ADD #0x78, without requiring TypeInfo chain",
        "elf_exec_region_count":len(segments),
        "total_executable_bytes":sum(len(data) for _,data in segments),
        "all_access_counts":dict(sorted(all_counts.items())),
        "il2cpp_network_namespace_access_counts":dict(sorted(api_counts.items())),
        "methods_with_plus_0x78_candidate":counts_by_method,
        "known_lineon_write_control_verified":True,
        "known_writer_addresses":list(control),
        "important_ambiguity":(
            "ApiRequestBase.Lineon is a STATIC Draco field at offset 0x78; "
            "ApiRequestBase.Goelise is an INSTANCE field also at offset 0x78. "
            "An offset match cannot identify the same logical field."
        ),
        "absence_does_not_prove_unread":True,
        "records":relevant,
    }
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({
        "status":report["status"],"namespace_candidates":len(relevant),
        "counts":dict(api_counts),"methods":len(counts_by_method),
        "known_controls":report["known_writer_addresses"]
    },ensure_ascii=False))
    for name,counts in counts_by_method.items():
        if name.startswith("ILib.Unity.Net.ApiRequestBase"):
            print(name,counts)
    return 0


if __name__=="__main__":
    raise SystemExit(main())
