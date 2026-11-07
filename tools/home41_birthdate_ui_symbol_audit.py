#!/usr/bin/env python3
"""Offline-only HOME Android 4.1.0 native UI method index.

Read a locally restored IL2CppDumper script.json; never connect to the HOME
server or modify a process. The output is a NAME-based list of potential
Unity dropdown / scroll / birthdate UI hooks, not validated addresses.
"""
from __future__ import annotations
import argparse
import json
from collections import Counter
from pathlib import Path

PREFIXES = (
    ("birthdate", ("birthday", "birthdate", "birth_date", "birthyear", "yearselect",
                   "birth", "ageconfirm", "agecheck", "bdate", "birthdayui")),
    ("dropdown", ("dropdown", "popupmenu", "optionselect", "selectbox", "pulldown")),
    ("scroll", ("scrollrect", "scrollbar", "onscroll", "ondrag", "onbegindrag", "onenddrag",
                "setnormalizedposition")),
    ("input", ("pointerevent", "standaloneinputmodule", "inputsystemuiinputmodule",
               "eventsystem", "onpointerdown", "onpointerup")),
    ("date", ("datetime", "datesetting", "datepicker", "year", "month", "day")),
)
MAX_PER_GROUP = 500


def index_methods(items):
    result={k:[] for k,_ in PREFIXES}
    counts=Counter()
    for item in items:
        if not isinstance(item,dict):
            continue
        name=item.get("Name")
        if not isinstance(name,str) or "$$" not in name:
            continue
        folded=name.casefold().replace("_","")
        for group, words in PREFIXES:
            if any(term.replace("_","") in folded for term in words):
                counts[group]+=1
                if len(result[group]) < MAX_PER_GROUP:
                    address=item.get("Address")
                    try:
                        parsed=int(address,0) if isinstance(address,str) else int(address)
                    except (ValueError,TypeError):
                        parsed=None
                    result[group].append({
                        "method":name[:250],
                        "rva":f"0x{parsed:X}" if parsed is not None and parsed >= 0 else None,
                    })
    return {
        "source":"local private 4.1.0 IL2CppDumper ScriptMethod list",
        "group_match_total":dict(counts),
        "group_rows_capped_at":MAX_PER_GROUP,
        "methods":result,
        "real_runtime_UI_class_identified":False,
        "year_1999_selected":False,
        "birthday_submitted":False,
        "accounts_created":False,
        "account_identifiers_collected":False,
    }


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--script",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    args=p.parse_args()
    with args.script.open("r",encoding="utf-8-sig") as f:
        data=json.load(f)
    methods=data.get("ScriptMethod",[])
    if not isinstance(methods,list) or len(methods)<100000:
        raise SystemExit("Wrong/incomplete ScriptMethod list")
    summary=index_methods(methods)
    summary["source_method_count"]=len(methods)
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",
                           encoding="utf-8")
    print(json.dumps({
        "source_method_count":len(methods),
        "group_match_total":summary["group_match_total"],
        "group_rows_stored":{k:len(v) for k,v in summary["methods"].items()},
        "output":str(args.output),
        "runtime_ui_verified":False,
    },ensure_ascii=False))


if __name__=="__main__":
    main()
