#!/usr/bin/env python3
"""HOME 4.1.0 direct ARM64 BL caller audit for response/result-code origin.

Read original executable ELF PT_LOAD, only static direct BL links with
script.json method names. Virtual/indirect dispatch is NOT resolved.
"""
from __future__ import annotations
import argparse
import bisect
import json
import struct
from pathlib import Path
TARGETS={
    "api_response_callback_Ningale":0x1F29E6C,
    "api_response_dispatcher_Monaflemit":0x1F28E58,
    "unity_api_send_coroutine_IAWWW":0x1F39198,
    "request_prepare_Parecool":0x1F27F5C,
    "api_error_handler_Chapignon":0x1F27858,
    "unity_web_request_send":0x421A6DC,
    "unity_web_request_response_code":0x421AD30,
}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--binary",type=Path,required=True)
    p.add_argument("--script",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    a=p.parse_args()
    from elftools.elf.elffile import ELFFile
    obj=json.loads(a.script.read_text(encoding="utf-8"))
    methods={}
    todo=[obj]
    while todo:
        n=todo.pop()
        if isinstance(n,list):
            todo.extend(x for x in n if isinstance(x,(list,dict)))
        elif isinstance(n,dict):
            address=n.get("Address")
            if isinstance(address,int) and address>0 and isinstance(n.get("Name"),str):
                methods.setdefault(address,[]).append({
                    "name":n["Name"],"signature":n.get("Signature")
                })
            todo.extend(x for x in n.values() if isinstance(x,(list,dict)))
    starts=sorted(methods)
    with a.binary.open("rb") as f:
        elf=ELFFile(f)
        if elf["e_machine"]!="EM_AARCH64":
            raise SystemExit("Not an ARM64 IL2CPP ELF")
        segments=[
            (int(x["p_vaddr"]),x.data()[:int(x["p_filesz"])])
            for x in elf.iter_segments()
            if x["p_type"]=="PT_LOAD" and (int(x["p_flags"])&1)
        ]
    lookup={v:k for k,v in TARGETS.items()}
    events={key:[] for key in TARGETS}
    for start,buf in segments:
        for i,(word,) in enumerate(struct.iter_unpack("<I",buf[:len(buf)//4*4])):
            if word & 0xFC000000 != 0x94000000:
                continue
            imm=word & 0x03FFFFFF
            if imm & (1<<25):
                imm -= 1<<26
            source=start+4*i
            dest=source+4*imm
            name=lookup.get(dest)
            if name is None:
                continue
            idx=bisect.bisect_right(starts,source)-1
            method=starts[idx] if idx>=0 else None
            events[name].append({
                "callsite_rva":f"0x{source:X}",
                "containing_function_rva":f"0x{method:X}" if method else None,
                "caller_function":methods.get(method,[])[:6],
                "offset_in_function":source-method if method else None
            })
    output={
        "status":"static_direct_bl_callers_only",
        "original_file":"HOME 4.1.0 ARM64 libil2cpp.so",
        "targets":{key:{"rva":f"0x{rva:X}","definitions":methods.get(rva,[])[:4],
                    "count":len(events[key]),"direct_callers":events[key][:150]}
                   for key,rva in TARGETS.items()},
        "coverage":"BL direct opcode only; does not detect blr, b/tail calls, interface delegates, reflection or native engine internals",
        "not_a_runtime_network_confirmation":True
    }
    a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_text(json.dumps(output,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({
        "status":output["status"],
        "direct_call_counts":{k:len(v) for k,v in events.items()}
    }))
if __name__=="__main__":
    main()
