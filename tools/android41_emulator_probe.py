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

def read_process_exit_diagnostics():
    """Minimal pre-login, redacted Android OS exit evidence.

    Never persist a full logcat or account/token/request contents.
    """
    import re
    info={"exit_info_available":False,"exit_info_reason_lines":[],
          "log_signal_counts":{},"events":[],
          "raw_log_saved":False}
    dump=adb("shell","dumpsys","activity","exit-info",PACKAGE,secs=35)
    if dump and dump.returncode==0:
        info["exit_info_available"]=True
        for raw in dump.stdout.splitlines():
            line=raw.strip()
            if re.match(r"(?i)^(reason|subreason|status|process|description|pid|timestamp|exit-info):",line):
                clean=re.sub(r"(?i)(token|cookie|auth|csrf|nonce|secret|id_token)[^\s]*","[redacted]",line)
                info["exit_info_reason_lines"].append(clean[:170])
                if len(info["exit_info_reason_lines"])>=35:break
    errors=adb("logcat","-d","-t","7000",secs=35)
    signal_tokens=("FATAL EXCEPTION","Fatal signal","am_proc_died","am_crash",
                   "has died","ProcessRecord","Force finishing","ANR in",
                   "tombstoned","crash_dump","permission denial",
                   "UnsatisfiedLinkError","libndk_translation")
    if errors and errors.returncode==0:
        low=errors.stdout.lower()
        info["log_signal_counts"]={k:low.count(k.lower()) for k in signal_tokens}
        allow_tags=("ActivityManager","ActivityTaskManager","AndroidRuntime","crash_dump",
                    "tombstoned","libc","Unity","DEBUG")
        for line in errors.stdout.splitlines():
            if not ("jp.pokemon.pokemonhome" in line or
                    any(t.lower() in line.lower() for t in signal_tokens)):
                continue
            if not any(t in line for t in allow_tags) and not any(
                    t.lower() in line.lower() for t in signal_tokens):
                continue
            if re.search(r"(?i)token|cookie|authorization|csrf|nonce|password|id_token|account",line):
                continue
            clean=re.sub(r"https?://\S+","[url]",line)
            clean=re.sub(r"[\w.+-]+@[\w.-]+","[email]",clean)
            clean=re.sub(r"\b[0-9a-fA-F]{32,}\b","[identifier]",clean)
            info["events"].append(clean[:240])
            if len(info["events"])>=40:break
    evt=adb("logcat","-d","-b","events","-t","4000",secs=25)
    if evt and evt.returncode==0:
        lines=evt.stdout.lower()
        info["system_event_counts"]={
            "am_proc_died":lines.count("am_proc_died"),
            "am_crash":lines.count("am_crash"),
            "am_anr":lines.count("am_anr")}
    return info


def safe_android_network_snapshot():
    """OS-only emulator connectivity snapshot. Never save hosts, payloads or credentials."""
    result={"android_utc_time":None,"airplane_mode":None,
            "route_present":False,"network_validated_flag_seen":False,
            "network_internet_flag_seen":False,"private_dns_mode":"unknown",
            "proxy_configured":None}
    def value(*command,limit=80):
        proc=adb("shell",*command,secs=15)
        return (proc.stdout or "").strip()[:limit] if proc and proc.returncode==0 else ""
    value_date=value("date","-u","+%Y-%m-%dT%H:%M:%SZ")
    if re.fullmatch(r"\d{4}-\d{2}-\d{2}T\d{2}:\d{2}:\d{2}Z",value_date):
        result["android_utc_time"]=value_date
    airplane=value("settings","get","global","airplane_mode_on")
    if airplane in ("0","1"):result["airplane_mode"]=airplane=="1"
    dns=value("settings","get","global","private_dns_mode")
    if dns in ("off","opportunistic","hostname"):
        result["private_dns_mode"]=dns
    proxy=value("settings","get","global","http_proxy")
    if proxy:
        result["proxy_configured"]=proxy.lower() not in ("null",":0","none")
    routes=value("ip","route",limit=1024)
    result["route_present"]=bool("default " in routes)
    network=value("dumpsys","connectivity",limit=30000)
    result["network_validated_flag_seen"]="VALIDATED" in network
    result["network_internet_flag_seen"]="INTERNET" in network
    return result


def known_home_error_dialog_layout(png_bytes):
    """Detect previously witnessed generic HOME error-modal *layout* only.

    Matching does not establish a specific 800 / 100101 code; read screenshot.
    No OCR, no network request, no UI tap.
    """
    if not png_bytes.startswith(bytes.fromhex("89504e470d0a1a0a")):
        return False
    try:
        from PIL import Image
        from io import BytesIO
        with Image.open(BytesIO(png_bytes)) as source:
            im=source.convert("RGB")
    except (ImportError,OSError,ValueError):
        return False
    w,h=im.size
    if w<600 or h<1200 or not 1.9<h/w<2.5:
        return False
    def col(x,y):return im.getpixel((int(w*x),int(h*y)))
    def near(c,expected,t=20):return all(abs(a-b)<=t for a,b in zip(c,expected))
    return (
        near(col(.5,.2),(148,151,148)) and
        near(col(.5,.34),(247,251,247)) and
        near(col(.5,.49),(247,251,247)) and
        near(col(.5,.64),(255,173,4)) and
        near(col(.5,.9),(140,149,149))
    )



def mainland_confirmation_yes_from_screenshot(png_bytes):
    """Click-safe guard calibrated to actual 2026-11-07 country modal (run 42356071498).

    Distinguishes the China Mainland region-confirm dialog from the similar
    language and network error dialogs by the APAC teal rows behind it.
    Unknown or transition screens must return None.
    """
    if not png_bytes.startswith(bytes.fromhex("89504e470d0a1a0a")):
        return None
    try:
        from PIL import Image
        from io import BytesIO
        with Image.open(BytesIO(png_bytes)) as source:
            im=source.convert("RGB")
    except (ImportError,OSError,ValueError):
        return None
    w,h=im.size
    if w<600 or h<1200 or not 1.9<h/w<2.5:
        return None
    def col(x,y):return im.getpixel((int(w*x),int(h*y)))
    def near(c,expected,t=15):
        return all(abs(a-b)<=t for a,b in zip(c,expected))
    if not (
        near(col(.5,.03),(121,146,97)) and
        near(col(.5,.15),(23,107,91)) and
        near(col(.5,.34),(247,251,247)) and
        near(col(.5,.49),(247,251,247)) and
        near(col(.68,.64),(255,173,4)) and
        near(col(.3,.70),(11,100,101)) and
        near(col(.3,.75),(11,100,101))
    ):
        return None
    return int(w*.68), int(h*.64)



def birthday_year_dropdown_from_screenshot(png_bytes):
    """Only expand year dropdown on evidenced HOME 4.1.0 age-input page.

    Screenshot from Actions 42356611191. Never submit any date or press NEXT.
    """
    if not png_bytes.startswith(bytes.fromhex("89504e470d0a1a0a")):
        return None
    try:
        from PIL import Image
        from io import BytesIO
        with Image.open(BytesIO(png_bytes)) as source:
            im=source.convert("RGB")
    except (ImportError,OSError,ValueError):
        return None
    w,h=im.size
    if w<600 or h<1200 or not 1.9<h/w<2.5:
        return None
    def col(x,y):return im.getpixel((int(w*x),int(h*y)))
    def near(c,expected,t=15):return all(abs(a-b)<=t for a,b in zip(c,expected))
    if not (
        near(col(.5,.03),(207,249,166)) and
        near(col(.5,.15),(38,179,151)) and
        near(col(.5,.23),(206,250,169)) and
        near(col(.2,.29),(248,250,245)) and
        near(col(.45,.29),(248,250,245)) and
        near(col(.5,.95),(255,173,4))
    ):
        return None
    return int(w*.2),int(h*.29)


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--apk",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    p.add_argument("--idle-seconds",type=int,default=120)
    p.add_argument("--guest-profile",type=Path,default=Path("tools/home41_guest_profile.json"))
    args=p.parse_args()
    args.output.mkdir(parents=True,exist_ok=True)
    report={
        "package":PACKAGE,"apk_sha256":sha256_file(args.apk),
        "android_api":prop("ro.build.version.sdk"),
        "device_abis":prop("ro.product.cpu.abilist"),
        "native_bridge":prop("ro.dalvik.vm.native.bridge"),
        "app_login_attempted":False,"terms_auto_accepted":False,
        "install_status":"not_started","launch_status":"not_started",
        "auth_registration_status":"not_attempted_no_test_account",
        "first_basic_utid_status":"not_observed",
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
            from android41_test_permissions import configure_emulator_camera_permission
            # The disposable AVD has no camera hardware (both cameras disabled).
            # Pre-grant only CAMERA so Android doesn't show repeated runtime
            # permission prompts. Never alter Nintendo/HOME authentication.
            report["camera_permission_preflight"]=configure_emulator_camera_permission(
                adb,PACKAGE)
            from android41_test_permissions import predeny_emulator_location
            # Fix only Android LOCATION permissions to denied for this test;
            # never grant or read a physical user's device location.
            report["location_permission_preflight"]=predeny_emulator_location(
                adb,PACKAGE)
            from android41_test_permissions import predeny_emulator_notifications
            report["notifications_permission_preflight"]=predeny_emulator_notifications(
                adb,PACKAGE)
            # Set the standard Android OS immersive acknowledgement on a
            # disposable emulator, not HOME's in-app Terms/consent.
            immersive=adb("shell","settings","put","secure",
                          "immersive_mode_confirmations","confirmed",secs=18)
            verify_immersive=adb("shell","settings","get","secure",
                                "immersive_mode_confirmations",secs=18)
            report["android_immersive_setting"]="confirmed" if (
                immersive and immersive.returncode==0 and verify_immersive
                and "confirmed" in (verify_immersive.stdout or "")) else "not_confirmed"
            report["android_network_preflight"]=safe_android_network_snapshot()
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
            from android41_ui_flow import screenshot_immersive_hint_position
            captured=(args.output/"screen_15s.png")
            initial_png=captured.read_bytes() if captured.is_file() else b""
            report["initial_screenshot_immersive_signature"]=bool(
                screenshot_immersive_hint_position(initial_png))
            report["system_prompt_actions"]=dismiss_android_system_prompts(
                adb,initial_png=initial_png)
            report["screenshot_after_system_prompts"]=snap(args.output,"screen_after_system_prompts.png")
            # Single reusable stage-driven flow: all previously verified
            # selections are replayed from one profile with screenshot guards.
            # No Nintendo login, irreversible DOB submission, ToS or account ops.
            from home41_guest_onboarding import (
                load_guest_profile, run_known_guest_setup)
            profile=load_guest_profile(args.guest_profile)
            onboarding=run_known_guest_setup(
                adb,args.output,profile,max_checks=70,interval_seconds=3)
            report["onboarding"]=onboarding
            completed=set(onboarding["completed"])
            report["home_language_screen_recognized"]="choose_language" in completed
            report["simplified_chinese_selected"]="choose_language" in completed
            report["simplified_chinese_confirmed"]="confirm_language" in completed
            report["language_confirmation_dialog_recognized"]="confirm_language" in completed
            report["region_list_page_recognized"]="expand_apac" in completed
            report["region_apac_dropdown_expansion_attempted"]="expand_apac" in completed
            report["region_apac_dropdown_tap_succeeded"]="expand_apac" in completed
            report["mainland_option_visual_gate"]="select_mainland" in completed
            report["country_selection_tap_attempted"]="select_mainland" in completed
            report["country_selection_tap_succeeded"]="select_mainland" in completed
            report["country_confirmation_dialog_recognized"]="confirm_mainland" in completed
            report["country_confirmation_tap_attempted"]="confirm_mainland" in completed
            report["country_confirmation_tap_succeeded"]="confirm_mainland" in completed
            report["birthday_page_recognized"]=onboarding["status"] in (
                "at_birthdate_page","birth_year_picker_open_attempted",
                "birth_year_picker_verified_open")
            report["birth_year_dropdown_open_attempted"]=(
                "inspect_birth_year_picker" in completed)
            report["birth_year_dropdown_verified_open"]=onboarding.get("year_picker_verified",False)
            report["birth_year_dropdown_tap_succeeded"]=(
                "inspect_birth_year_picker" in completed)
            # UI moved past country prompt, but remote account profile does not
            # exist yet and no server-country confirmation has been verified.
            report["country_selected"]=report["birthday_page_recognized"]
            report["country_selection_server_confirmed"]=False
            report["birthdate_entered"]=False
            report["terms_or_privacy_accepted"]=False
            report["auth_registration_status"]="not_attempted_no_test_account"
            report["first_basic_utid_status"]="not_observed"
            report["home_language_check_count"]=onboarding["checks"]
            report["home_language_poll_wait_seconds"]=0
            report["region_page_poll_attempts"]=onboarding["checks"]
            report["region_page_poll_wait_seconds"]=0
            report["screenshot_after_wait"]=snap(args.output,"screen_after_wait.png")
            last_png=args.output/"screen_after_wait.png"
            report["known_home_error_modal_layout"]=known_home_error_dialog_layout(
                last_png.read_bytes() if last_png.is_file() else b"")
            report["android_network_after_wait"]=safe_android_network_snapshot()

            second=adb("shell","pidof",PACKAGE)
            report["process_after_wait"]=bool(second and second.returncode==0 and second.stdout.strip())
            report["process_exit_diagnostics"]=read_process_exit_diagnostics()
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
                "home_error_dialog_visible_unclassified" if report["known_home_error_modal_layout"] else
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
