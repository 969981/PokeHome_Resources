#!/usr/bin/env python3
"""Resolve exact optional UnityWebRequest RVAs from HOME's own IL2CppDumper map.

Refuse ambiguous overloads. No addresses from other game versions, no
guessing, no raw request/response extraction.
"""
from __future__ import annotations
import argparse
import json
from pathlib import Path

SYMBOLS={
    "unity_response_code":"UnityEngine.Networking.UnityWebRequest$$get_responseCode",
    "unity_request_send":"UnityEngine.Networking.UnityWebRequest$$SendWebRequest",
}

def run(script:Path, template:Path, output:Path, report:Path):
    root=json.loads(script.read_text(encoding="utf-8"))
    all_matches={name:set() for name in SYMBOLS}
    tasks=[root]
    while tasks:
        node=tasks.pop()
        if isinstance(node,list):
            tasks.extend(e for e in node if isinstance(e,(list,dict)))
        elif isinstance(node,dict):
            name=node.get("Name")
            addr=node.get("Address")
            if isinstance(name,str) and isinstance(addr,int):
                for kind,wanted in SYMBOLS.items():
                    if name==wanted and 0<addr<0x6000000:
                        all_matches[kind].add(addr)
            tasks.extend(e for e in node.values() if isinstance(e,(list,dict)))
    exact={name:next(iter(arr)) for name,arr in all_matches.items() if len(arr)==1}
    input_template=template.read_text(encoding="utf-8")
    token="__HOME41_NETWORK_METHOD_RVAS__"
    if input_template.count(token)!=1:
        raise ValueError("native source contains wrong number of RVA tokens")
    output.parent.mkdir(parents=True,exist_ok=True)
    output.write_text(input_template.replace(token,json.dumps(exact,sort_keys=True)),encoding="utf-8")
    summary={
        "status":"resolved_or_omitted_ambiguous",
        "optional_method_names":SYMBOLS,
        "candidate_counts":{kind:len(vals) for kind,vals in all_matches.items()},
        "confirmed_rvas":{kind:f"0x{addr:X}" for kind,addr in exact.items()},
        "response_code_method_available":"unity_response_code" in exact,
        "note":"No symbol name or script map method identifies a request URL or successful network response."
    }
    report.parent.mkdir(parents=True,exist_ok=True)
    report.write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False))
    return summary

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--script",required=True,type=Path)
    p.add_argument("--template",required=True,type=Path)
    p.add_argument("--out",required=True,type=Path)
    p.add_argument("--report",required=True,type=Path)
    a=p.parse_args()
    run(a.script,a.template,a.out,a.report)

if __name__=="__main__":
    main()
