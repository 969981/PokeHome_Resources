#!/usr/bin/env python3
"""One-off emulator test of HOME 4.1.0, with strict resource-only cache export."""
from __future__ import annotations
import argparse
import json
import re
import shlex
import shutil
import subprocess
import sys
import tempfile
import time
from pathlib import Path
from android41_ui_flow import dismiss_android_system_prompts

PACKAGE="jp.pokemon.pokemonhome"
ROOTS=[
    "/sdcard/Android/data/"+PACKAGE+"/files",
    "/data/user/0/"+PACKAGE+"/cache",
    "/data/user/0/"+PACKAGE+"/files",
]
sys.path.insert(0,str(Path("_android_source/tools").resolve()))
from runtime_cache_inventory import detect, permitted_path, sha256_file, EXTENSIONS

def run_cmd(args,secs=45,binary=False):
    try:
        return subprocess.run(args,capture_output=True,check=False,timeout=secs,
            text=not binary,errors=None if binary else "replace")
    except subprocess.TimeoutExpired:
        return None

def adb(*args,secs=45,binary=False):
    return run_cmd(["adb",*args],secs,binary)

def prop(key):
    p=adb("shell","getprop",key)
    return p.stdout.strip()[:120] if p and p.returncode==0 else ""

def snap(out,name):
    p=adb("exec-out","screencap","-p",secs=30,binary=True)
    if p and p.returncode==0 and p.stdout.startswith(bytes.fromhex("89504e470d0a1a0a")):
        (out/name).write_bytes(p.stdout)
        return True
    return False

def files_under(root):
    p=adb("shell","find "+shlex.quote(root)+" -type f 2>/dev/null",secs=45)
    if not p or p.returncode: return []
    found=[]
    for raw in p.stdout.splitlines():
        path=raw.strip()
        if not path.startswith(root+"/"): continue
        rel=Path(path[len(root)+1:])
        if ".." in rel.parts or not permitted_path(rel):continue
        name=rel.name.lower()
        if name=="__data" or name.endswith((
            ".unity3d",".bundle",".assetbundle",".assets",".png",".jpg",
            ".jpeg",".ktx",".ktx2",".ogg",".fsb",".glb")) or re.fullmatch("[0-9a-f]{16,64}",name):
            found.append(path)
    return sorted(set(found))

def size_of(path):
    p=adb("shell","stat -c %s "+shlex.quote(path)+" 2>/dev/null",secs=12)
    try: return int(p.stdout.strip()) if p and p.returncode==0 else None
    except ValueError: return None

def collect(out,limit=500,max_bytes=256*1024*1024):
    out.mkdir(parents=True,exist_ok=True)
    candidates=[(p,i) for i,root in enumerate(ROOTS) for p in files_under(root)]
    result={"candidate_paths":len(candidates),"reviewed":0,"valid_asset_files":0,
            "bytes_copied":0,"by_kind":{},"files":[]}
    for remote,area in candidates[:limit]:
        size=size_of(remote)
        if size is None or size<16 or size>95*1024*1024:continue
        if result["bytes_copied"]+size>max_bytes:break
        result["reviewed"]+=1
        with tempfile.TemporaryDirectory(prefix="home41_probe_") as t:
            temp=Path(t)/"candidate"
            res=adb("pull",remote,str(temp),secs=100)
            if not res or res.returncode or not temp.is_file():continue
            if temp.stat().st_size!=size:continue
            with temp.open("rb") as fh:kind=detect(fh.read(64))
            if kind=="unrecognized":continue
            sha=sha256_file(temp)
            hint=re.sub(r"[^a-z0-9_-]","_",Path(remote).stem.lower())[:36].strip("_")
            if hint in ("__data","data"):hint=""
            name=sha[:24]+("_"+hint if hint else "")+EXTENSIONS[kind]
            dest=out/name
            if not dest.is_file():
                shutil.copyfile(temp,dest)
            if sha256_file(dest)!=sha:raise RuntimeError("cache_copy_hash_mismatch")
            result["valid_asset_files"]+=1
            result["bytes_copied"]+=size
            result["by_kind"][kind]=result["by_kind"].get(kind,0)+1
            result["files"].append({"filename":name,"sha256":sha,"size":size,
                "kind":kind,"source_area":["external_files","app_cache","app_files"][area]})
    return result

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--apk",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    p.add_argument("--idle-seconds",type=int,default=120)
    args=p.parse_args()
    args.output.mkdir(parents=True,exist_ok=True)
    report={
        "package":PACKAGE,"apk_sha256":sha256_file(args.apk),
        "android_api":prop("ro.build.version.sdk"),
        "device_abis":prop("ro.product.cpu.abilist"),
        "native_bridge":prop("ro.dalvik.vm.native.bridge"),
        "app_login_attempted":False,"terms_auto_accepted":False,
        "install_status":"not_started","launch_status":"not_started",
        "cache_files":0,"result":"not_started"}
    try:
        adb("shell","input","keyevent","KEYCODE_WAKEUP")
        adb("shell","wm","dismiss-keyguard")
        installed=adb("install","-r",str(args.apk),secs=180)
        msg=((installed.stdout or "")+(installed.stderr or "")) if installed else "timeout"
        if not installed or installed.returncode:
            report["install_status"]="abi_incompatible" if "INSTALL_FAILED_NO_MATCHING_ABIS" in msg else "install_failed"
            report["install_error_excerpt"]=msg[-270:].replace(str(args.apk),"[APK]")
            snap(args.output,"install_failure_screen.png")
            report["result"]="blocked_before_launch"
        else:
            report["install_status"]="ok"
            adb("logcat","-c",secs=10)
            launched=adb("shell","monkey","-p",PACKAGE,"-c","android.intent.category.LAUNCHER","1",secs=50)
            successful=bool(launched and launched.returncode==0 and "Events injected: 1" in launched.stdout)
            report["launch_status"]="event_sent" if successful else "launcher_failed"
            time.sleep(15)
            report["screenshot_at_15s"]=snap(args.output,"screen_15s.png")
            first=adb("shell","pidof",PACKAGE)
            report["process_at_15s"]=bool(first and first.returncode==0 and first.stdout.strip())
            # Only interact with explicit Android OS overlays. Never click
            # HOME app Terms, registration, consent, account or deletion UI.
            report["system_prompt_actions"]=dismiss_android_system_prompts(adb)
            report["screenshot_after_system_prompts"]=snap(args.output,"screen_after_system_prompts.png")
            if successful:time.sleep(max(0,args.idle_seconds-15))
            report["screenshot_after_wait"]=snap(args.output,"screen_after_wait.png")
            second=adb("shell","pidof",PACKAGE)
            report["process_after_wait"]=bool(second and second.returncode==0 and second.stdout.strip())
            log=adb("logcat","-d","-t","2200",secs=30)
            if log and log.returncode==0:
                report["crash_signal_counts"]={
                    k:log.stdout.count(k) for k in (
                    "FATAL EXCEPTION","UnsatisfiedLinkError","Fatal signal","dlopen failed")}
            root=adb("root",secs=20)
            report["test_emulator_adb_root"]=bool(root and root.returncode==0
                and ("root" in root.stdout.lower()))
            if report["test_emulator_adb_root"]:adb("wait-for-device",secs=40)
            cache=collect(args.output/"cache")
            report["cache_files"]=cache["valid_asset_files"]
            report["cache_bytes"]=cache["bytes_copied"]
            report["cache_candidates"]=cache["candidate_paths"]
            report["cache_types"]=cache["by_kind"]
            (args.output/"cache_manifest.json").write_text(
                json.dumps(cache,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
            report["result"]=(
                "launcher_failed" if not successful else
                "app_process_ended" if not report["process_after_wait"] else
                "app_running_and_assets_collected" if report["cache_files"] else
                "app_running_no_recognized_cache_assets")
    except Exception as e:
        report["result"]="probe_exception"
        report["error_type"]=type(e).__name__
        report["error_summary"]=str(e)[:160]
    (args.output/"emulator_probe_summary.json").write_text(
        json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps(report,indent=2,ensure_ascii=False))

if __name__=="__main__":
    main()
