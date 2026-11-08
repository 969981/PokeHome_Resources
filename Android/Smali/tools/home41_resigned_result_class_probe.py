#!/usr/bin/env python3
"""Targeted, read-only HOME 4.1.0 re-signed APK resultCode classifier.

This only reports whether an IL2CPP API response callback's integer matches
200, 400, 9007, or a broad range. It does NOT reveal request/response bytes
or claim that the integer is an HTTP status.
"""
from __future__ import annotations
import argparse
import json
import time
from collections import Counter
from pathlib import Path
from smali_runtime_probe import PACKAGE,adb,screenshot,sha256,process_present,predeny_location_and_notification

KINDS=frozenset({
    "matches_display_detail_9007","matches_display_code_400","exact_200",
    "negative","zero","small_positive","http_range_other",
    "other_600_9999","other_10000_999999","outside_expected_code_range"
})
EVENTS=frozenset({
    "agent_loaded","arm64_response_hook_ready","arm64_response_hook_unavailable",
    "arm64_module_not_visible","callback_result_class","callback_result_unreadable"
})

def run(apk:Path,js:Path,out:Path):
    out.mkdir(parents=True,exist_ok=True)
    report={
        "variant":"directly_resigned_only","status":"not_started",
        "sha256":sha256(apk),"installed":False,"frida_spawn_attached":False,
        "arm64_realm_attached":False,"no_ui_clicks":True,
        "account_actions":False,"request_body_logged":False,
        "response_body_logged":False,"signed_material_logged":False,
        "hook_modifies_app":False,
        "callback_result_is_not_a_verified_http_status":True
    }
    adb("shell","am","force-stop",PACKAGE)
    adb("uninstall",PACKAGE,timeout=40)
    inst=adb("install",str(apk),timeout=180)
    report["installed"]=bool(inst and inst.returncode==0 and "success" in (inst.stdout or "").lower())
    if not report["installed"]:
        report["status"]="install_failed"
        return report
    adb("shell","pm","grant",PACKAGE,"android.permission.CAMERA",timeout=12)
    adb("shell","cmd","appops","set",PACKAGE,"CAMERA","allow",timeout=12)
    report["permission_preflight"]=predeny_location_and_notification()
    import frida
    dev=frida.get_device_manager().add_remote_device("127.0.0.1:27042")
    ev=[]
    failures=[]
    pid=None
    holder=None
    emulated=None
    script=None
    start=time.monotonic()
    def callback(msg,_data):
        if not isinstance(msg,dict): return
        if msg.get("type")=="error":
            failures.append("frida_script_error")
            return
        if msg.get("type")!="send" or len(ev)>=40: return
        v=msg.get("payload")
        if not isinstance(v,dict) or v.get("event") not in EVENTS: return
        clean={"event":v["event"],"elapsed_ms":round((time.monotonic()-start)*1000)}
        if v["event"]=="callback_result_class":
            kind=v.get("class_name")
            if kind in KINDS:
                clean["class_name"]=kind
        if v["event"]=="agent_loaded":
            clean["arm64"]=v.get("arch")=="arm64"
        ev.append(clean)
    try:
        pid=dev.spawn([PACKAGE])
        holder=dev.attach(pid)
        dev.resume(pid)
        report["frida_spawn_attached"]=True
        for at in (6,12,18,24):
            delay=at-(time.monotonic()-start)
            if delay>0:time.sleep(delay)
            try:
                emulated=dev.attach(pid,realm="emulated")
                script=emulated.create_script(js.read_text(encoding="utf-8"))
                script.on("message",callback)
                script.load()
                report["arm64_realm_attached"]=True
                break
            except Exception as err:
                report["last_attach_error_type"]=type(err).__name__
                if emulated is not None:
                    try:emulated.detach()
                    except Exception:pass
                emulated=None
                script=None
        delay=65-(time.monotonic()-start)
        if delay>0:time.sleep(delay)
        report["process_alive_at_65s"]=process_present()
        report["screen_at_65s"]=screenshot(out,"screen_65s.png")
        report["status"]="probe_completed"
    except Exception as err:
        report["status"]="probe_exception"
        report["exception_type"]=type(err).__name__
    finally:
        if script:
            try:script.unload()
            except Exception:pass
        for item in (emulated,holder):
            if item:
                try:item.detach()
                except Exception:pass
        if pid is not None:
            try:dev.resume(pid)
            except Exception:pass
    kinds=[x["class_name"] for x in ev if x["event"]=="callback_result_class" and "class_name" in x]
    counts=Counter(x["event"] for x in ev)
    report["event_counts"]=dict(counts)
    report["result_classes"]=kinds
    report["callback_seen"]=bool(kinds)
    report["hook_ready"]=counts["arm64_response_hook_ready"]>0
    report["frida_script_errors"]=len(failures)
    (out/"events.jsonl").write_text(
        "".join(json.dumps(x,ensure_ascii=False,sort_keys=True)+"\n" for x in ev),encoding="utf-8")
    (out/"summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"status":report["status"],"hook_ready":report["hook_ready"],
          "callback_seen":report["callback_seen"],"result_classes":report["result_classes"]},
          ensure_ascii=False),flush=True)
    return report

def main():
    p=argparse.ArgumentParser()
    for name in ("--apk","--agent","--out"):
        p.add_argument(name,required=True,type=Path)
    a=p.parse_args()
    if a.agent.stat().st_size<600:raise SystemExit("Native agent missing")
    r=run(a.apk,a.agent,a.out)
    return 0 if r["status"]=="probe_completed" else 2

if __name__=="__main__":
    raise SystemExit(main())
