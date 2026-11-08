#!/usr/bin/env python3
"""Read-only ARM64 native disassembly for HOME CSM.Tarinor and CSM.Skitty.

Uses exact IL2CppDumper RVA, ELF file offset, and source APK libil2cpp.so.
Extracts call targets and matches recovered script.json method addresses.
Does not change files, make network calls, or bypass signing/integrity checks.
"""
from __future__ import annotations

import argparse
import bisect
import json
import re
from pathlib import Path

TARGETS = [
    ("CSM.Tarinor", 0x1D4AA34, 0x1D46A34, 0x1D4AB04),
    ("CSM.Skitty", 0x1D4AB04, 0x1D46B04, 0x1D4AD0C),
]


def method_map(obj):
    found = {}
    if isinstance(obj, list):
        for item in obj:
            if isinstance(item, dict):
                name, address = item.get("Name"), item.get("Address")
                if isinstance(name, str) and isinstance(address, int) and address > 0:
                    found.setdefault(address, []).append(name)
            if isinstance(item, (dict, list)):
                found.update({k:v for k,v in method_map(item).items() if k not in found})
    elif isinstance(obj, dict):
        for item in obj.values():
            if isinstance(item, (dict, list)):
                found.update({k:v for k,v in method_map(item).items() if k not in found})
    return found


def extract_class(dump_text):
    match = re.search(r"(?m)^public class CSM\s*:\s*MonoBehaviourSingleton<CSM>[^\n]*", dump_text)
    if not match:
        return {"status":"class_not_found"}
    begin = max(0, dump_text.rfind("// Namespace:", 0, match.start()))
    next_type = re.search(r"(?m)^// Namespace:", dump_text[match.end():])
    end = min(len(dump_text), match.end() + next_type.start()) if next_type else min(len(dump_text), match.end()+12000)
    block = dump_text[begin:end]
    return {
        "status":"found", "class_header":match.group(0),
        "class_block_first_lines":block.splitlines()[:155],
        "class_block_bytes":len(block),
    }


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--binary", required=True, type=Path)
    p.add_argument("--dump", required=True, type=Path)
    p.add_argument("--script", required=True, type=Path)
    p.add_argument("--output", required=True, type=Path)
    p.add_argument("--include-downstream", action="store_true",
                   help="Trace the two native methods called by CSM.Skitty")
    a=p.parse_args()
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM

    script_data=json.loads(a.script.read_text(encoding="utf-8"))
    method_index=method_map(script_data)
    addresses=sorted(method_index)
    exact_signature_records={}
    wanted_addrs={x[1] for x in TARGETS}
    if a.include_downstream:
        wanted_addrs.update((0x1F2CE50,0x1F26E78,0x1F26F1C,0x1F2FCF4))
    stack=[script_data]
    while stack:
        node=stack.pop()
        if isinstance(node,dict):
            address=node.get("Address")
            if isinstance(address,int) and address in wanted_addrs and isinstance(node.get("Name"),str):
                exact_signature_records.setdefault(address,[]).append({
                    k:node[k] for k in ("Name","Signature","TypeSignature")
                    if k in node
                })
            stack.extend(v for v in node.values() if isinstance(v,(dict,list)))
        elif isinstance(node,list):
            stack.extend(v for v in node if isinstance(v,(dict,list)))
    binary=a.binary.read_bytes()
    dump_text=a.dump.read_text(encoding="utf-8",errors="replace")
    reader=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    reader.detail=False
    targets=[]
    target_specs=list(TARGETS)
    if a.include_downstream:
        for name,rva in (
            ("ILib.Unity.Net.Draco.op_Implicit",0x1F2CE50),
            ("ILib.Unity.Net.ApiRequestBase.Chenipotte",0x1F26E78),
            ("ILib.Unity.Net.ApiRequestBase.Charmillon",0x1F26F1C),
            ("ILib.Unity.Net.Soporifik.op_Implicit",0x1F2FCF4),
        ):
            assert any(
                name.replace(".", "$",1).endswith("$" + target_name.split("$")[-1])
                for target_name in method_index.get(rva,[])
            ) or method_index.get(rva), "missing downstream native method"
            i=bisect.bisect_right(addresses,rva)
            next_method=addresses[i] if i<len(addresses) else rva+0x400
            finish=min(next_method,rva+0x800)
            target_specs.append((name,rva,rva-0x4000,finish))
    for name,rva,offset,finish in target_specs:
        assert rva-offset==0x4000, "unexpected IL2CppDumper RVA-to-file offset"
        size=finish-rva
        assert 0 < size < 0x1000 and offset+size < len(binary)
        ins=list(reader.disasm(binary[offset:offset+size],rva))
        if not ins or ins[0].address!=rva:
            raise RuntimeError("Unexpected ARM64 disassembly at "+name)
        # Trivial ARM64 wrappers can be just 1-4 instructions.
        # They remain valid static method bodies, not a disassembler failure.
        calls=[]
        instructions=[]
        for x in ins:
            entry={"rva":f"0x{x.address:X}","mnemonic":x.mnemonic,"operands":x.op_str}
            instructions.append(entry)
            if x.mnemonic in ("bl","b","b.eq","b.ne","cbz","cbnz","tbz","tbnz"):
                dsts=re.findall(r"0x[0-9a-f]+",x.op_str)
                if dsts:
                    dst=int(dsts[-1],16)
                    i=bisect.bisect_right(addresses,dst)-1
                    nearest=addresses[i] if i>=0 else None
                    calls.append({
                        "from_rva":f"0x{x.address:X}",
                        "opcode":x.mnemonic,"target_rva":f"0x{dst:X}",
                        "exact_method_candidates":method_index.get(dst,[])[:10],
                        "nearest_method_rva":f"0x{nearest:X}" if nearest else None,
                        "nearest_method_names":method_index.get(nearest,[])[:4] if nearest else [],
                        "distance_from_nearest":dst-nearest if nearest else None,
                    })
        targets.append({
            "method":name,"rva":f"0x{rva:X}","elf_file_offset":f"0x{offset:X}",
            "script_method_labels":method_index.get(rva,[])[:10],
            "recovered_script_signatures":exact_signature_records.get(rva,[])[:8],
            "bytes":size,"decoded_instructions":len(ins),
            "last_decoded_address":f"0x{ins[-1].address:X}",
            "instructions":instructions,"branch_and_call_targets":calls,
        })
    report={
        "source":"HOME Android 4.1.0 IL2CPP ARM64",
        "kind":"read_only_disassembly",
        "note":"Script method addresses are static IL2CppDumper candidates; branch targets do not prove application-level signature rejection.",
        "callback":"UnitySendMessage receiver=Azurill method=Tarinor; CSM.Tarinor(string message)",
        "class_context":extract_class(dump_text),
        "downstream_dump_matches":[
            {"term": term,"excerpt":dump_text[max(0,m.start()-800):m.end()+500][:1300]}
            for term in ("Chenipotte","op_Implicit")
            for m in list(re.finditer(r"\b"+re.escape(term)+r"\b",dump_text))[:35]
        ] if a.include_downstream else [],
        "script_methods_count":sum(len(x) for x in method_index.values()),
        "targets":targets,
    }
    a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    for f in targets:
        print(f["method"],f["rva"],f["decoded_instructions"],"instructions",len(f["branch_and_call_targets"]),"branches/calls")
        for x in f["branch_and_call_targets"]:
            if x["opcode"]=="bl":
                print("  BL",x["target_rva"],x["exact_method_candidates"][:3])
    return 0


if __name__=="__main__":
    raise SystemExit(main())
