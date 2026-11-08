#!/usr/bin/env python3
"""HOME 4.1.0 untouched-vs-resigned, read-only first-request timeline.

Disposable emulator; no UI interaction or account operations. Event schema
forbids URLs, hosts, certificate content, request/response bodies, identifiers,
tokens and pointers. Failure to observe HTTP does NOT mean there was no HTTP.
"""
from __future__ import annotations
import argparse
import json
import re
import time
from collections import Counter
from pathlib import Path

from smali_runtime_probe import (
    PACKAGE,ORIGINAL_SHA256,adb,sha256,process_present,screenshot,
    predeny_location_and_notification,crash_summary
)

EVENTS=frozenset({
    "java_agent_loaded","java_unavailable","java_ready",
    "java_hook_ready","java_hook_failed",
    "signing_check_java_enter","signing_message_to_unity",
    "java_http_connection_open","java_http_response_status",
    "native_agent_loaded","native_arch_unsupported","native_module_ready",
    "native_hook_ready","native_hook_failed","native_hook_not_in_module",
    "native_probe_ready","native_il2cpp_unavailable",
    "unity_signing_callback_enter","signature_state_setter_enter",
    "signature_state_write","request_build_enter","request_build_return",
    "signature_state_read_for_request","request_field_write",
    "request_json_serializer_enter","api_response_callback_enter",
    "unity_http_response_status","unity_http_response_pending",
    "unity_request_send_enter"
})
HOOKS=frozenset({
    "signing_check","unity_message","url_connection","java_http_status",
    "signing_receiver","signing_field_setter","signature_field_write",
    "request_prepare","signature_field_read","signature_request_object_write",
    "request_serializer","response_callback",
    "unity_response_code","unity_request_send"
})
CATEGORIES=frozenset({"register","token","login","locale","basic_profile","initial_config","other"})
EVENT_LIMIT=400


def clean(payload, elapsed_ms):
    if not isinstance(payload,dict) or payload.get("event") not in EVENTS:
        return None
    name=payload["event"]
    out={"event":name,"elapsed_ms":max(0,int(elapsed_ms))}
    if name in {"java_hook_ready","java_hook_failed","native_hook_ready",
                "native_hook_failed","native_hook_not_in_module"}:
        h=payload.get("hook")
        if h in HOOKS:
            out["hook"]=h
    if name=="signing_message_to_unity":
        kind=payload.get("message_kind")
        if kind in {"signature_hash","certificate_chars","package_name"}:
            out["message_kind"]=kind
    if name in {"java_http_connection_open","java_http_response_status"}:
        cat=payload.get("request_category")
        out["request_category"]=cat if cat in CATEGORIES else "other"
    if name in {"java_http_response_status","unity_http_response_status"}:
        status=payload.get("http_status")
        if type(status) is int and 100<=status<=599:
            out["http_status"]=status
    if name=="api_response_callback_enter":
        kind=payload.get("result_kind")
        out["result_kind"]=kind if kind in {
            "http_status_range","not_http_status_range","unreadable"
        } else "unknown"
        status=payload.get("result_code_if_http_range")
        if type(status) is int and 100<=status<=599:
            out["result_code_if_http_range"]=status
    if name=="request_build_return":
        out["success"]=payload.get("success") is True
    if name in {"request_field_write","signature_state_write",
                "signature_state_read_for_request"}:
        if payload.get("field_class")=="signature_derived":
            out["field_class"]="signature_derived"
    if name in {"native_agent_loaded","native_arch_unsupported"}:
        arch=payload.get("arch")
        out["arch"]=arch if arch in {"arm64","x64","ia32"} else "unknown"
    if name=="native_module_ready":
        arch=payload.get("arch")
        out["arch"]=arch if arch=="arm64" else "unknown"
    if name=="native_probe_ready":
        out["response_status_hook_declared"]=payload.get("response_status_hook_declared") is True
    return out


def first_event_timing(events,name):
    matched=[x["elapsed_ms"] for x in events if x["event"]==name]
    return min(matched) if matched else None


def run_variant(name,apk,bundle,arm64_script,out,device):
    folder=out/name
    folder.mkdir(parents=True,exist_ok=True)
    events=[]
    errors=[]
    status={
        "variant":name,
        "installed":False,
        "frida_spawn_attached":False,
        "arm64_realm_attached":False,
        "arm64_native_agent_loaded":False,
        "home_language_verified":False,
        "signed_payload_logged":False,
        "auth_or_user_data_logged":False,
        "request_or_response_bodies_logged":False,
        "api_messages_modified":False,
        "account_actions_initiated":False,
    }
    adb("shell","am","force-stop",PACKAGE)
    adb("uninstall",PACKAGE,timeout=40)
    result=adb("install",str(apk),timeout=180)
    status["installed"]=bool(result and result.returncode==0 and "success" in (result.stdout or "").lower())
    if not status["installed"]:
        (folder/"summary.json").write_text(json.dumps(status,indent=2)+"\n")
        return status
    adb("shell","pm","grant",PACKAGE,"android.permission.CAMERA",timeout=15)
    adb("shell","cmd","appops","set",PACKAGE,"CAMERA","allow",timeout=15)
    adb("shell","settings","put","secure","immersive_mode_confirmations","confirmed",timeout=15)
    status["permission_preflight"]=predeny_location_and_notification()

    pid=None
    sess=None
    java_script=None
    emulated=None
    native_script=None
    t0=time.monotonic()
    def on_message(message,_data):
        if not isinstance(message,dict):
            return
        if message.get("type")=="error":
            errors.append("frida_script_error")
            return
        if message.get("type")!="send" or len(events)>=EVENT_LIMIT:
            return
        safe=clean(message.get("payload"),(time.monotonic()-t0)*1000)
        if safe is not None:
            events.append(safe)

    def attach_emulated():
        nonlocal emulated,native_script
        try:
            session=device.attach(pid,realm="emulated")
            script=session.create_script(arm64_script.read_text(encoding="utf-8"))
            script.on("message",on_message)
            script.load()
            emulated=session
            native_script=script
            status["arm64_realm_attached"]=True
            return True
        except Exception as ex:
            status["last_emulated_attach_error_type"]=type(ex).__name__
            try:
                if "session" in locals():
                    session.detach()
            except Exception:
                pass
            return False
    try:
        pid=device.spawn([PACKAGE])
        sess=device.attach(pid)
        java_script=sess.create_script(bundle.read_text(encoding="utf-8"))
        java_script.on("message",on_message)
        java_script.load()
        device.resume(pid)
        status["frida_spawn_attached"]=True

        # Attach early enough to catch the first signature message (previous
        # real runtime check typically reached Unity at 15-20 seconds).
        for when in (4,9,16,24):
            delay=when-(time.monotonic()-t0)
            if delay>0:
                time.sleep(delay)
            if attach_emulated():
                break
        for when in (35,60,95,130):
            delay=when-(time.monotonic()-t0)
            if delay>0:
                time.sleep(delay)
            status[f"process_at_{when}s"]=process_present()
            status[f"screen_at_{when}s"]=screenshot(folder,f"screen_{when}s.png")
        status["home_language_verified"]=any(
            status.get(f"screen_at_{when}s",{}).get("home_language_verified") is True
            for when in (35,60,95,130)
        )
        status["crash_signal_counts"]=crash_summary().get("counts",{})
    except Exception as ex:
        status["probe_error_type"]=type(ex).__name__
    finally:
        for x in (native_script,java_script):
            if x is not None:
                try:
                    x.unload()
                except Exception:
                    pass
        for x in (emulated,sess):
            if x is not None:
                try:
                    x.detach()
                except Exception:
                    pass
        if pid is not None:
            try:
                device.resume(pid)
            except Exception:
                pass
    cnt=Counter(x["event"] for x in events)
    status["event_counts"]=dict(sorted(cnt.items()))
    status["events_captured"]=len(events)
    status["frida_script_errors"]=len(errors)
    status["arm64_native_agent_loaded"]=cnt["native_agent_loaded"]>0
    status["native_probe_ready"]=cnt["native_probe_ready"]>0
    status["java_hooks_ready"]=cnt["java_hook_ready"]
    status["lineon_request_read_observed"]=cnt["signature_state_read_for_request"]>0
    status["first_stage_elapsed_ms"]={
        stage:first_event_timing(events,stage) for stage in (
            "signing_check_java_enter","signing_message_to_unity",
            "unity_signing_callback_enter","signature_state_write",
            "request_build_enter","signature_state_read_for_request",
            "request_field_write","request_json_serializer_enter",
            "unity_request_send_enter","unity_http_response_status",
            "java_http_response_status","api_response_callback_enter"
        )
    }
    status["observed_http_response_codes"]=sorted({
        e["http_status"] for e in events if e["event"] in {
            "unity_http_response_status","java_http_response_status"
        } and "http_status" in e
    })
    status["observed_api_callback_result_in_http_range"]=sorted({
        e["result_code_if_http_range"] for e in events
        if e["event"]=="api_response_callback_enter"
        and "result_code_if_http_range" in e
    })
    status["http_status_known"]=bool(status["observed_http_response_codes"])
    status["native_callback_result_is_not_proven_http"]=True
    status["no_ui_clicks"]=True
    status["note"]="No observed HTTP status is NOT evidence that HTTP did not occur; markers in emulated native realm may miss early calls."
    (folder/"events.jsonl").write_text(
        "".join(json.dumps(e,ensure_ascii=False,sort_keys=True)+"\n" for e in events),
        encoding="utf-8"
    )
    (folder/"summary.json").write_text(json.dumps(status,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({
        "variant":name,"home_ui":status["home_language_verified"],
        "native_probe_ready":status["native_probe_ready"],
        "http_status":status["observed_http_response_codes"],
        "response_callback_result_in_http_range":status["observed_api_callback_result_in_http_range"],
        "event_counts":status["event_counts"]
    },ensure_ascii=False),flush=True)
    return status


def main():
    p=argparse.ArgumentParser()
    for name in ("--original","--resigned","--java-bundle","--native-agent","--out"):
        p.add_argument(name,required=True,type=Path)
    a=p.parse_args()
    a.out.mkdir(parents=True,exist_ok=True)
    if sha256(a.original)!=ORIGINAL_SHA256:
        raise SystemExit("Original APK SHA256 mismatch")
    if not (a.java_bundle.stat().st_size>1000 and a.native_agent.stat().st_size>500):
        raise SystemExit("Frida Java bundle / native agent missing")
    import frida
    device=frida.get_device_manager().add_remote_device("127.0.0.1:27042")
    orig=run_variant("official_unmodified",a.original,a.java_bundle,a.native_agent,a.out,device)
    resigned=run_variant("directly_resigned",a.resigned,a.java_bundle,a.native_agent,a.out,device)
    summary={
        "status":"completed" if orig["frida_spawn_attached"] and resigned["frida_spawn_attached"] else "incomplete",
        "original":orig,"resigned":resigned,
        "verified_original_home_ui":orig["home_language_verified"],
        "first_request_stage_comparison":{
            "original":orig["first_stage_elapsed_ms"],
            "resigned":resigned["first_stage_elapsed_ms"]
        },
        "http_status_observation_limit":{
            "real_http_codes":True,
            "api_callback_result_code_must_not_be_labeled_http_without_crosscheck":True,
            "http_payload_observed":False,
        },
        "error_9007_cause_verified":False,
        "not_an_online_repair":True,
        "certificates_or_transport_modified":False,
        "no_account_actions":True,
    }
    (a.out/"comparison.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    return 0 if summary["status"]=="completed" else 2

if __name__=="__main__":
    raise SystemExit(main())
