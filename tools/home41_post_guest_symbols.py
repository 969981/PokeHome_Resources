#!/usr/bin/env python3
"""Audit original HOME 4.1.0 IL2CPP symbols after guest confirmation.

Offline static inspection ONLY: no HOME process, account creation, network,
Frida, or private user data. Do not equate a method name with runtime reachability.
"""
from __future__ import annotations
import argparse
import json
import re
from collections import defaultdict
from pathlib import Path

MAX_NAME = 260
MAX_PER_GROUP = 160

# Avoid interpreting guessed string names or absent method groups as evidence.
GROUPS = {
    "firstboot_controller": (
        lambda cls, meth: "firstbootbodycontroller" in cls.lower()),
    "firstboot_navigation": (
        lambda cls, meth: "firstboot" in cls.lower() and any(
            w in meth.lower() for w in
            ("phase", "gest", "guest", "prologue", "icon", "begin", "next"))),
    "profile_icon": (
        lambda cls, meth: any(w in (cls+"."+meth).lower() for w in
            ("selecticon", "iconselect", "selectavatar", "avatarselect",
             "mt_select_icon", "iconinput", "iconsetting", "initialicon"))),
    "starter_prologue": (
        lambda cls, meth: any(w in (cls+"."+meth).lower() for w in
            ("firstpokemon", "first_pokemon", "starterpokemon", "choosepokemon",
             "selectpokemon", "prologue", "pokemonselect", "initialpokemon",
             "selectpartner", "selectfirst", "partnerselect"))),
    "registration": (
        lambda cls, meth: any(w in (cls+"."+meth).lower() for w in
            ("authregisteruser", "registeruser", "createtoken", "loginuser"))),
}

def audit_methods(data: object) -> dict:
    methods = data.get("ScriptMethod") if isinstance(data, dict) else None
    if not isinstance(methods, list):
        return {"status": "missing_script_method_list"}
    groups = defaultdict(list)
    totals = defaultdict(int)
    seen = set()
    for item in methods:
        if not isinstance(item, dict):
            continue
        raw = item.get("Name")
        if not isinstance(raw, str) or "$$" not in raw or len(raw)>MAX_NAME:
            continue
        cls, method = raw.split("$$", 1)
        if not cls or not method or not re.fullmatch(r"[A-Za-z0-9_.+<>/-]+",raw.replace("$$", "")):
            continue
        try:
            addr = int(item.get("Address"), 0) if isinstance(item.get("Address"),str) else int(item.get("Address"))
        except (ValueError, TypeError):
            continue
        if not 0 < addr < (1<<48):
            continue
        for group, match in GROUPS.items():
            if match(cls, method):
                totals[group] += 1
                key=(group,raw,addr)
                if key in seen:
                    continue
                seen.add(key)
                if len(groups[group])<MAX_PER_GROUP:
                    groups[group].append({"name":raw,"rva":f"0x{addr:X}"})
    return {
        "status":"static_symbol_candidates_only",
        "total_methods":len(methods),
        "counts":dict(totals),
        "methods":{g:sorted(groups[g],key=lambda x:(x["rva"],x["name"])) for g in GROUPS},
        "registration_observed":False,
        "post_guest_ui_observed":False,
        "account_created":False,
    }

def extract_declarations(dump: str) -> dict:
    wanted = [
        "FirstBootBodyController", "FirstBootBodyController.Phase",
        "FirstBootViewSelectIcon", "FirstBootViewInputName",
        "FirstBootViewPrologue", "FirstBootBody", "FirstBootView",
    ]
    result = {}
    for name in wanted:
        pat = re.compile(r"(?m)^.*\\b(?:class|enum|struct)\\s+"+re.escape(name)+r"(?=\\s|:)")
        hits=list(pat.finditer(dump))
        segments=[]
        for m in hits[:3]:
            a=max(0,dump.rfind("// Namespace:",0,m.start()))
            b=dump.find("\\n}\\n",m.end())
            if b<0 or b-a>38000:
                b=min(len(dump),m.end()+38000)
            segments.append(dump[a:b+2][:38000])
        result[name]=segments
    return result

def main() -> int:
    ap=argparse.ArgumentParser()
    ap.add_argument("--script",required=True,type=Path)
    ap.add_argument("--dump",required=True,type=Path)
    ap.add_argument("--output",required=True,type=Path)
    args=ap.parse_args()
    data=json.loads(args.script.read_text(encoding="utf-8-sig"))
    report=audit_methods(data)
    if report["status"]!="static_symbol_candidates_only" or report["total_methods"]<100000:
        raise SystemExit("incomplete_or_invalid_method_index")
    dump=args.dump.read_text(encoding="utf-8-sig")
    report["declarations"]=extract_declarations(dump)
    args.output.parent.mkdir(exist_ok=True,parents=True)
    args.output.write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\\n",encoding="utf-8")
    print("STATIC ORIGINAL 4.1.0 METHOD COUNT",report["total_methods"])
    for key,arr in report["methods"].items():
        print("=== GROUP",key,"total",report["counts"].get(key,0),
              "stored",len(arr),"===")
        for x in arr[:80]:
            print(x["rva"],x["name"])
    for name,decls in report["declarations"].items():
        print("DECLARATION",name,"found",len(decls))
        if name in ("FirstBootBodyController.Phase",):
            for block in decls:
                print(block[:4000])
    return 0

if __name__=="__main__":
    raise SystemExit(main())
