#!/usr/bin/env python3
"""Read-only chronological comparison of a TEST account's Frida stage markers.

No network, no registration/deletion, no tokens, UUIDs or raw account UTID output.
Only event name, monotonic elapsed milliseconds and optional six-digit candidate.
"""
from __future__ import annotations
import argparse
import json
import re
from pathlib import Path

SAFE_EVENTS={
    "hook_preflight",
    "read_only_observer_ready",
    "registration_request_serializer_enter",
    "registration_response_handler_enter",
    "token_response_handler_enter",
    "login_request_serializer_enter",
    "login_response_handler_enter",
    "first_basic_utid",
    "basic_utid_not_yet_numeric",
    "unsupported_native_arch",
}
SIX=re.compile(r"[0-9]{6}\Z")

def _parse_lines(lines):
    rows=[]
    for line in lines:
        raw=line.strip()
        if not raw.startswith("{"):
            # Frida may print additional terminal text. No raw stdout is persisted.
            continue
        try: obj=json.loads(raw)
        except json.JSONDecodeError: continue
        if not isinstance(obj,dict) or obj.get("event") not in SAFE_EVENTS:
            continue
        t=obj.get("elapsed_ms")
        if not isinstance(t,(float,int)) or isinstance(t,bool) or t<0 or t>86_400_000:
            continue
        candidate=obj.get("six_digit_candidate")
        if candidate is not None and (not isinstance(candidate,str) or not SIX.fullmatch(candidate)):
            continue
        rows.append({"event":obj["event"],"elapsed_ms":int(t),
                     "six_digit_candidate":candidate if obj["event"]=="first_basic_utid" else None})
    return sorted(rows,key=lambda r:r["elapsed_ms"])

def analyze(lines):
    rows=_parse_lines(lines)
    reg_starts=[e["elapsed_ms"] for e in rows if e["event"]=="registration_request_serializer_enter"]
    reg_responses=[e["elapsed_ms"] for e in rows if e["event"]=="registration_response_handler_enter"]
    token_responses=[e["elapsed_ms"] for e in rows if e["event"]=="token_response_handler_enter"]
    login_starts=[e["elapsed_ms"] for e in rows if e["event"]=="login_request_serializer_enter"]
    login_responses=[e["elapsed_ms"] for e in rows if e["event"]=="login_response_handler_enter"]
    basics=[e for e in rows if e["event"]=="first_basic_utid"]
    result={"status":"no_real_basic_utid_observed","event_count":len(rows),
            "registration_request_seen":bool(reg_starts),
            "registration_response_seen":bool(reg_responses),
            "token_response_seen":bool(token_responses),
            "login_request_seen":bool(login_starts),
            "login_response_seen":bool(login_responses),
            "first_basic_utid_seen":bool(basics),
            "seconds_since_observer_start":None,
            "first_basic_relative_to_registration_response":"unknown",
            "delta_ms_from_register_response":None,
            "first_basic_relative_to_login_response":"unknown",
            "delta_ms_from_login_response":None,
            "first_basic_relative_to_login_request":"unknown",
            "delta_ms_from_login_request":None,
            "six_digit_candidate":None,
            "limitation":"Timing alone does not prove which HTTP response produced basic.utid or validate HOME's six-digit display semantics."}
    if not basics:return result
    b=basics[0]
    result["status"]="real_basic_utid_event_seen_unverified_semantics"
    result["seconds_since_observer_start"]=round(b["elapsed_ms"]/1000,3)
    result["six_digit_candidate"]=b["six_digit_candidate"]
    if reg_responses:
        first=reg_responses[0]
        diff=b["elapsed_ms"]-first
        result["delta_ms_from_register_response"]=diff
        result["first_basic_relative_to_registration_response"]=(
            "before" if diff<0 else "same_tick" if diff==0 else "after")
    if login_responses:
        first=login_responses[0]
        diff=b["elapsed_ms"]-first
        result["delta_ms_from_login_response"]=diff
        result["first_basic_relative_to_login_response"]=(
            "before" if diff<0 else "same_tick" if diff==0 else "after")
    if login_starts:
        first=login_starts[0]
        diff=b["elapsed_ms"]-first
        result["delta_ms_from_login_request"]=diff
        result["first_basic_relative_to_login_request"]=(
            "before" if diff<0 else "same_tick" if diff==0 else "after")
    return result

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--input",type=Path,required=True,help="Local redacted console JSONL (no credentials)")
    p.add_argument("--output",type=Path,help="Optional safe summary output JSON")
    a=p.parse_args()
    output=analyze(a.input.read_text(encoding="utf-8").splitlines())
    safe=json.dumps(output,ensure_ascii=False,indent=2)+"\n"
    if a.output:
        a.output.parent.mkdir(parents=True,exist_ok=True)
        a.output.write_text(safe,encoding="utf-8")
    print(safe,end="")
if __name__=="__main__":
    main()
