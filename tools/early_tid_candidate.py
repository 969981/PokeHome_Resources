#!/usr/bin/env python3
"""Format an already-observed HOME Android UTID as a *candidate* six-digit ID.

It does not request a new ID, register a user, alter memory or contact Nintendo.
A read-only comparison is not proof that HOME's account trainer ID uses ID32 % 1e6.
"""
from __future__ import annotations
import argparse
import json
import re
from pathlib import Path

MAX_U32=(1<<32)-1
SIX_DIGITS=re.compile(r"[0-9]{6}\Z")
RAW_U32=re.compile(r"[0-9]{1,10}\Z")

def candidate_tid7(raw:str)->str:
    raw=raw.strip()
    if not RAW_U32.fullmatch(raw):
        raise ValueError("utid must be a decimal unsigned 32-bit integer")
    value=int(raw,10)
    if value > MAX_U32:
        raise ValueError("utid overflows unsigned 32-bit integer")
    return f"{value % 1_000_000:06d}"

def result(utid:str,target:str="888888")->dict:
    if not SIX_DIGITS.fullmatch(target):
        raise ValueError("target must have exactly six digits")
    candidate=candidate_tid7(utid)
    return {
        "candidate_tid7":candidate,
        "target_tid7":target,
        "candidate_equals_target":candidate==target,
        "source":"already_observed_basic_utid",
        "semantic_validation":"not_proven_against_home_visible_trainer_id",
        "new_account_created":False,
    }

def main():
    p=argparse.ArgumentParser(description=__doc__)
    g=p.add_mutually_exclusive_group(required=True)
    g.add_argument("--utid",help="Decimal utid already observed from your own account")
    g.add_argument("--utid-file",type=Path,help="File containing ONLY a decimal utid; no session/token information")
    p.add_argument("--target",default="888888")
    a=p.parse_args()
    raw=a.utid if a.utid is not None else a.utid_file.read_text(encoding="utf-8")
    try: print(json.dumps(result(raw,a.target),ensure_ascii=False,indent=2))
    except ValueError as e: p.error(str(e))

if __name__=="__main__":
    main()
