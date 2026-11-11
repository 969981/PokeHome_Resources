#!/usr/bin/env python3
"""Safely validate HOME 4.1.0 Switch GDB JSONL observation traces.

A file produced by a read-only hardware-breakpoint observer can establish
local execution and field values. It CANNOT independently prove remote ACK,
durable cloud storage, failed-save recovery, or readback. Those require
separate controlled evidence. No raw response, credentials or Pokémon data
are accepted. Fully stdlib; runnable on CI without a Switch guest.
"""
import argparse
import collections
import json
import re
from pathlib import Path

SCHEMA="HOME41_SWITCH_GDB_V1"
EVENTS={
 "session_start","session_end","parser_enter","detail_observed","parser_result",
 "state_write_before","virtual_call","dirty_snapshot","reconcile_flags",
 "reconcile_copy_invoked","reconcile_compare_result",
 "transport_callback_enter","state7_enter","probe_read_error"
}
BASE={"schema","time","session","scenario","group","event","thread"}
FIELDS={
 "expected_elf_sha256","main_base","point_count","instrumentation",
 "no_mutations","real_runtime_verified","detail_numeric","detail_numeric_valid",
 "detail_observed","parser_return","state","stage_counter","app_error",
 "parsed_result","manager_dirty_count","transport_code","transport_error",
 "http_status","site","prior_state","new_state","object_pointer","vptr",
 "method_slot","resolved_target","slot_matches_register","target_main_rva",
 "return_address","sample","count_instruction","count_manager",
 "manager_offset_consistent","list_sha256","count_effective","flag_964",
 "flag_965","comparison_word","differs","events_written","exception_type"
}
SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
ADDR=re.compile(r"^0x[0-9a-f]{1,16}$")
DIGEST=re.compile(r"^[a-f0-9]{64}$")

def validate_record(e, where):
    if not isinstance(e,dict):raise ValueError(where+": event must be object")
    extra=set(e)-(BASE|FIELDS)
    if extra:raise ValueError(where+": unexpected/sensitive keys: "+", ".join(sorted(extra)))
    if e.get("schema")!=SCHEMA:raise ValueError(where+": unknown schema")
    if e.get("event") not in EVENTS:raise ValueError(where+": unknown event")
    if e.get("scenario") not in {"normal","failure"}:raise ValueError(where+": unknown scenario")
    if not isinstance(e.get("session"),str) or len(e["session"])>70:
        raise ValueError(where+": invalid session ID")
    for k in ("object_pointer","vptr","resolved_target","target_main_rva","main_base","return_address"):
        v=e.get(k)
        if v is not None and (not isinstance(v,str) or not ADDR.fullmatch(v)):
            raise ValueError(where+": unexpected address format in "+k)
    if e.get("list_sha256") is not None and not DIGEST.fullmatch(e["list_sha256"]):
        raise ValueError(where+": dirty fingerprint not a SHA256")
    if e["event"]=="session_start":
        if e.get("expected_elf_sha256")!=SHA:
            raise ValueError(where+": wrong static source ELF revision")
        if e.get("instrumentation")!="HARDWARE_EXECUTION_BREAKPOINTS_ONLY" or e.get("no_mutations") is not True:
            raise ValueError(where+": instrumentation mode is not read-only")
    return e

def read_jsonl(p):
    if p.stat().st_size>10_000_000:raise ValueError(str(p)+": trace exceeds 10 MB")
    events=[]
    with p.open("r",encoding="utf8") as fh:
        for i,line in enumerate(fh,1):
            if not line.strip():continue
            if i>30000:raise ValueError(str(p)+": too many events")
            try:e=json.loads(line)
            except json.JSONDecodeError as exc:raise ValueError(str(p)+":"+str(i)+": invalid JSON") from exc
            events.append(validate_record(e,"%s:%d"%(p,i)))
    if not events or events[0]["event"]!="session_start":
        raise ValueError(str(p)+": no session_start; not a captured trace")
    head=events[0]
    for e in events:
        if e["session"]!=head["session"] or e["scenario"]!=head["scenario"]:
            raise ValueError(str(p)+": multiple sessions/scenarios in one trace")
    return events

def summarize(paths):
    if not paths:
        return {"status":"UNVERIFIED_NO_GUEST_TRACE",
                "application_ack_verified":False,"remote_persistence_verified":False,
                "dirty_failure_recovery_verified":False,
                "reason":"No real Switch guest JSONL supplied; static ELF and CI-only tests are not guest observations.",
                "sessions":[]}
    sessions=[]
    for p in paths:
        events=read_jsonl(Path(p))
        first=events[0]
        hits=collections.Counter(e["event"] for e in events)
        parser=[e for e in events if e["event"]=="parser_result"]
        detail=[e for e in events if e["event"]=="detail_observed"]
        # Important: stage=6 is the /commit phase, but the shared
        # response machine can advance stage counter after the callback.
        commit_responses=[e for e in parser if e.get("stage_counter")==6]
        detail_zero=[e for e in commit_responses if
                     e.get("detail_observed") is True and e.get("detail_numeric")==0]
        stage_success_candidate=[e for e in detail_zero if
                                 e.get("app_error")==0 and e.get("parser_return")==0]
        state_eight=[e for e in events if e["event"]=="state_write_before"
                     and e.get("new_state")==8]
        callback_eight=[e for e in events if e["event"]=="virtual_call"
                        and e.get("site")=="state8_slot0"]
        callback_ten=[e for e in events if e["event"]=="virtual_call"
                      and e.get("site")=="state10_slot8"]
        dirty=[e for e in events if e["event"]=="dirty_snapshot"]
        compare=[e for e in events if e["event"]=="reconcile_compare_result"]
        sessions.append({
          "session":first["session"],"scenario":first["scenario"],
          "capture_group":first.get("group"),"event_count":len(events),
          "record_counts":dict(hits),
          "http_status_codes":sorted({e["http_status"] for e in commit_responses
                                     if isinstance(e.get("http_status"),int)}),
          "commit_response_observed":bool(commit_responses),
          "detail_numeric_observed_in_commit_phase":bool(
              [e for e in commit_responses if e.get("detail_observed")]),
          "commit_detail_zero_and_local_fields_zero":bool(stage_success_candidate),
          "box_state8_write_observed":bool(state_eight),
          "state8_virtual_observed":bool(callback_eight),
          "state8_target_register_matches_vtable":bool(callback_eight) and
              all(e.get("slot_matches_register") for e in callback_eight),
          "state10_virtual_observed":bool(callback_ten),
          "state10_target_register_matches_vtable":bool(callback_ten) and
              all(e.get("slot_matches_register") for e in callback_ten),
          "dirty_snapshots_recorded":len(dirty),
          "dirty_count_values":[e.get("manager_dirty_count",e.get("count_manager",
                  e.get("count_effective"))) for e in dirty],
          "local_box_comparisons_observed":len(compare),
          "local_box_differences":[e.get("differs") for e in compare],
          "errors_in_probe":hits.get("probe_read_error",0),
          "capture_complete":hits.get("session_end",0)==1,
          "note":"All observations are local guest execution; no server durable storage proven."})
    return {
      "status":"GUEST_TRACE_CANDIDATE_REQUIRES_CROSS_CHECK",
      "application_ack_verified":False,
      "remote_persistence_verified":False,
      "dirty_failure_recovery_verified":False,
      "interpretation":"Do not merge separate sessions as one causal save. Trial scenario labels are supplied by the operator and are not proven outcomes.",
      "sessions":sessions,
      "remaining":["Confirm response value schema with original server protocol and independent readback",
                   "Compare Dirty lifecycle before request, after staging and after failed restart using controlled test data",
                   "Verify actual state8/10 vtable target identities and their invocation paths"]}
def main():
    a=argparse.ArgumentParser()
    a.add_argument("--trace",nargs="*",type=Path,default=[],
                   help="Local JSONL files from an authorized Switch guest GDB stub")
    a.add_argument("--out",type=Path)
    args=a.parse_args()
    report=summarize(args.trace)
    result=json.dumps(report,ensure_ascii=False,indent=2)+"\n"
    if args.out:
        args.out.parent.mkdir(parents=True,exist_ok=True)
        args.out.write_text(result,encoding="utf8")
    print(result)
if __name__=="__main__":main()
