#!/usr/bin/env python3
"""Evidence-only symbol index from the exact private HOME 4.1.0 IL2CppDumper script.

No network access, login, registration, request replay, or memory editing.
Dumper addresses are candidates, NOT verified native control-flow edges.
"""
from __future__ import annotations
import argparse
import csv
import json
from pathlib import Path

STAGES=("register_user","create_token","create_login","response_common","receive_basic")

def classify(name:str)->str|None:
    lower=name.lower()
    if "apirequestauthregisteruser" in lower:
        return "register_user"
    if "apimanager$callbackresponsehook" in lower:
        return "response_common"
    if "udmanager$setbasic" in lower:
        return "receive_basic"
    # The real generated class naming may use AuthCreateLogin,
    # CreateAuthLogin, TokenCreate, etc. Match request + semantic noun
    # instead of assuming unverified C# class spellings.
    if "apirequest" in lower and "login" in lower:
        return "create_login"
    if "apirequest" in lower and "token" in lower:
        return "create_token"
    return None
ANCHORS={
    "ApiRequestAuthRegisterUser$$SerializeRequestParameter":0x1D334A4,
    "ApiRequestAuthRegisterUser$$CallAfterResponse":0x1D33294,
    "UDManager$$SetBasic":0x1D763D0,
}
FIELDS=("stage","method_name","address_candidate_hex","address_decimal","evidence")

def number(raw):
    if isinstance(raw,bool):
        return None
    if isinstance(raw,int):
        return raw if raw>=0 else None
    if isinstance(raw,str):
        try:
            value=int(raw.strip(),0)
            return value if value>=0 else None
        except ValueError:
            return None
    return None

def select(methods):
    rows=[]
    for item in methods:
        if not isinstance(item,dict):continue
        name=str(item.get("Name") or "")
        stage=classify(name)
        if stage is not None:
            addr=number(item.get("Address"))
            rows.append({
                "stage":stage,
                "method_name":name[:320],
                "address_candidate_hex":f"0x{addr:X}" if addr is not None else "",
                "address_decimal":str(addr) if addr is not None else "",
                "evidence":"il2cppdumper_script_method_name",
            })
    rows.sort(key=lambda x:(x["stage"],x["method_name"],x["address_decimal"]))
    return rows

def analyze(data):
    methods=data.get("ScriptMethod") if isinstance(data,dict) else None
    if not isinstance(methods,list):
        raise ValueError("Expected IL2CppDumper ScriptMethod list")
    rows=select(methods)
    anchors={}
    for suffix,expected in ANCHORS.items():
        matches=[r for r in rows if r["method_name"].endswith(suffix)]
        found=[int(r["address_decimal"]) for r in matches if r["address_decimal"]]
        anchors[suffix]={
            "expected_elf_rva_hex":f"0x{expected:X}",
            "dumper_addresses_hex":[f"0x{x:X}" for x in sorted(found)],
            "status":"static_address_match" if expected in found else
                     "missing_or_mismatch",
        }
    summary={
        "input":"private_home_android_4.1.0_il2cpp_script.json",
        "script_method_entries":len(methods),
        "auth_method_candidates":len(rows),
        "group_counts":{k:sum(r["stage"]==k for r in rows) for k in STAGES},
        "native_address_anchor_checks":anchors,
        "status":"static_symbols_indexed" if rows else "no_relevant_symbols",
        "real_user_registered":False,
        "first_utid_observed":False,
        "semantic_limitation":"Function names/addresses do NOT determine which HTTP response first includes basic.utid; requires a real consenting account trace.",
    }
    return rows,summary

def write(script:Path,directory:Path):
    data=json.loads(script.read_text(encoding="utf-8-sig"))
    rows,summary=analyze(data)
    directory.mkdir(parents=True,exist_ok=True)
    with (directory/"auth_method_candidates.csv").open("w",newline="",encoding="utf-8") as out:
        writer=csv.DictWriter(out,fieldnames=FIELDS)
        writer.writeheader()
        writer.writerows(rows)
    (directory/"auth_method_audit.json").write_text(
        json.dumps(summary,ensure_ascii=False,indent=2,sort_keys=True)+"\n",
        encoding="utf-8",
    )
    return summary

if __name__=="__main__":
    cli=argparse.ArgumentParser(description=__doc__)
    cli.add_argument("--script",type=Path,required=True)
    cli.add_argument("--out-dir",type=Path,required=True)
    a=cli.parse_args()
    print(json.dumps(write(a.script,a.out_dir),ensure_ascii=False,indent=2))
