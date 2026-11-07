#!/usr/bin/env python3
"""Isolated HOME 4.1.0 Frida first-launch interface observer, no UI clicks.

For a disposable Android test emulator only. All output sanitized.
This does NOT register an account or accept any terms, and never changes app data.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import subprocess
import time
from pathlib import Path
from home41_frida_interface_monitor import FridaInterfaceMonitor, PACKAGE

EXPECTED_APK="8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1"


def run(apk: Path, output: Path, bundle: Path) -> dict:
    output.mkdir(parents=True,exist_ok=True)
    report={"status":"not_started","apk_sha256_verified":False,
            "installed":False,"frida_spawn_attached":False,
            "home_process_alive_after_capture":False,
            "no_account_actions_performed":True}
    if not apk.is_file() or hashlib.sha256(apk.read_bytes()).hexdigest()!=EXPECTED_APK:
        report["status"]="apk_hash_mismatch"
        return report
    report["apk_sha256_verified"]=True
    install=subprocess.run(["adb","install","-r",str(apk)],
                           capture_output=True,timeout=180)
    if install.returncode:
        report["status"]="apk_install_failed"
        return report
    report["installed"]=True
    monitor=FridaInterfaceMonitor(output,bundle,
                Path("tools/early_home_tid_observer.js"))
    try:
        report["frida_spawn_attached"]=monitor.start()
        if not report["frida_spawn_attached"]:
            # No fallback login / launch: report no Frida instead of producing
            # an uninstrumented trace that could be mistaken for real evidence.
            report["status"]="frida_not_attached"
            return report
        # Frida spawn/resume should be enough to start the process.
        # No monkey, no taps, no birthday, no acceptance or signup.
        time.sleep(20)
        # Native realm is x64 on this AVD. Explicitly attempt Frida 17's
        # emulated realm only after Unity/Native Bridge had time to load.
        report["emulated_realm_probe_status"] = monitor.probe_emulated_realm(
            Path("tools/home41_frida_emulated_realm_probe.js"))
        time.sleep(20)
        p=subprocess.run(["adb","shell","pidof",PACKAGE],
                         capture_output=True,timeout=10)
        report["home_process_alive_after_capture"]=(
            p.returncode==0 and bool(p.stdout.strip()))
        report["status"]="frida_first_launch_probe_finished"
    except Exception as e:
        report["status"]="probe_exception"
        report["error_type"]=type(e).__name__
    finally:
        report["frida_interface"]=monitor.stop()
    return report


def main():
    cli=argparse.ArgumentParser()
    cli.add_argument("--apk",type=Path,required=True)
    cli.add_argument("--output",type=Path,required=True)
    cli.add_argument("--bundle",type=Path,
                     default=Path("/tmp/home41_frida_interface_compiled.js"))
    args=cli.parse_args()
    report=run(args.apk,args.output,args.bundle)
    args.output.mkdir(parents=True,exist_ok=True)
    (args.output/"first_launch_report.json").write_text(
        json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(report,ensure_ascii=False,sort_keys=True))


if __name__=="__main__":
    main()
