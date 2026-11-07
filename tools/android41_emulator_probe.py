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
            # Observe first-launch HOME language choice without accepting any
            # service Terms or submitting registration credentials.
            from android41_ui_flow import wait_for_known_language_page
            pos,checks=wait_for_known_language_page(
                adb,max_checks=9,interval_seconds=10)
            report["home_language_check_count"]=checks
            report["home_language_poll_wait_seconds"]=(checks-1)*10
            report["home_language_screen_recognized"]=bool(pos)
            if pos is not None:
                select=adb("shell","input","tap",str(pos[0]),str(pos[1]),secs=15)
                report["simplified_chinese_selected"]=bool(select and select.returncode==0)
                time.sleep(8)
            else:
                report["simplified_chinese_selected"]=False
            report["screenshot_after_language_step"]=snap(args.output,"screen_after_language_step.png")
            from android41_ui_flow import screenshot_language_confirmation_yes
            preview=args.output/"screen_after_language_step.png"
            confirmation=screenshot_language_confirmation_yes(
                preview.read_bytes() if preview.is_file() and report["simplified_chinese_selected"] else b"")
            report["language_confirmation_dialog_recognized"]=bool(confirmation)
            if confirmation is not None:
                accepted=adb("shell","input","tap",
                             str(confirmation[0]),str(confirmation[1]),secs=15)
                report["simplified_chinese_confirmed"]=bool(
                    accepted and accepted.returncode==0)
                time.sleep(8)
            else:
                report["simplified_chinese_confirmed"]=False
            report["screenshot_after_language_confirmation"]=snap(
                args.output,"screen_after_language_confirmation.png")
            # Reversible navigation only: expand APAC region's list, never
            # choose/submit a country or any personal onboarding details.
            from android41_ui_flow import wait_for_stable_region_page
            if report["simplified_chinese_confirmed"]:
                region_point,tries=wait_for_stable_region_page(
                    adb,max_checks=10,interval_seconds=6)
            else:
                region_point,tries=None,0
            report["region_page_poll_attempts"]=tries
            report["region_page_poll_wait_seconds"]=max(0,tries-1)*6
            report["region_list_page_recognized"]=bool(region_point)
            report["region_apac_dropdown_expansion_attempted"]=False
            if region_point is not None:
                expanded=adb("shell","input","tap",
                             str(region_point[0]),str(region_point[1]),secs=15)
                report["region_apac_dropdown_expansion_attempted"]=True
                report["region_apac_dropdown_tap_succeeded"]=bool(
                    expanded and expanded.returncode==0)
                time.sleep(5)
            report["screenshot_after_region_dropdown"]=snap(
                args.output,"screen_after_region_dropdown.png")
            # Select the first APAC country ONLY when the saved screenshot
            # exactly matches the already audited teal country-list layout.
            # No age, Terms, Nintendo login, account creation or deletion.
            from android41_ui_flow import screenshot_apac_mainland_option
            country_png=args.output/"screen_after_region_dropdown.png"
            country_point=screenshot_apac_mainland_option(
                country_png.read_bytes() if country_png.is_file()
                and report.get("region_apac_dropdown_tap_succeeded",False) else b"")
            report["mainland_option_visual_gate"]=bool(country_point)
            report["country_selection_tap_attempted"]=False
            report["country_selection_tap_succeeded"]=False
            if country_point is not None:
                selected=adb("shell","input","tap",str(country_point[0]),
                             str(country_point[1]),secs=15)
                report["country_selection_tap_attempted"]=True
                report["country_selection_tap_succeeded"]=bool(
                    selected and selected.returncode==0)
                time.sleep(8)
            report["screenshot_after_country_selection"]=snap(
                args.output,"screen_after_country_selection.png")
            # Country selection is a two-stage UI; the screenshot from
            # 42356071498 explicitly confirms a "China Mainland" YES/NO modal.
            # Only confirm that exactly recognized modal. Never accept ToS
            # or account/Nintendo registration prompts.
            modal_png=args.output/"screen_after_country_selection.png"
            mainland_yes=mainland_confirmation_yes_from_screenshot(
                modal_png.read_bytes() if modal_png.is_file()
                and report.get("country_selection_tap_succeeded",False) else b"")
            report["country_confirmation_dialog_recognized"]=bool(mainland_yes)
            report["country_confirmation_tap_attempted"]=False
            report["country_confirmation_tap_succeeded"]=False
            if mainland_yes is not None:
                confirmed=adb("shell","input","tap",str(mainland_yes[0]),str(mainland_yes[1]),secs=15)
                report["country_confirmation_tap_attempted"]=True
                report["country_confirmation_tap_succeeded"]=bool(
                    confirmed and confirmed.returncode==0)
                time.sleep(9)
            report["screenshot_after_country_confirmation"]=snap(
                args.output,"screen_after_country_confirmation.png")

            # Birthday screen fades in asynchronously after confirming region.
            # Poll stable UI pixel signatures before touching the year picker;
            # unknown screen -> no click. DOB and NEXT are never submitted.
            birth_year_pos=None
            report["birthday_page_poll_attempts"]=0
            if report.get("country_confirmation_tap_succeeded",False):
                for trial in range(15):
                    snap(args.output,"screen_birthdate_stable.png")
                    stable_png=args.output/"screen_birthdate_stable.png"
                    birth_year_pos=birthday_year_dropdown_from_screenshot(
                        stable_png.read_bytes() if stable_png.is_file() else b"")
                    report["birthday_page_poll_attempts"]=trial+1
                    if birth_year_pos is not None:
                        break
                    if trial<14:
                        time.sleep(3)
            report["birthday_page_recognized"]=bool(birth_year_pos)
            report["birth_year_dropdown_open_attempted"]=False
            report["birth_year_dropdown_tap_succeeded"]=False
            if birth_year_pos is not None:
                year_tap=adb("shell","input","tap",str(birth_year_pos[0]),
                             str(birth_year_pos[1]),secs=15)
                report["birth_year_dropdown_open_attempted"]=True
                report["birth_year_dropdown_tap_succeeded"]=bool(
                    year_tap and year_tap.returncode==0)
                time.sleep(4)
            report["screenshot_after_birth_year_dropdown"]=snap(
                args.output,"screen_after_birth_year_dropdown.png")


            # A successful input event does NOT establish that the server
            # accepted the region; the new screenshot must be reviewed.
            report["country_selected"]=False
            report["country_selection_server_confirmed"]=False
            report["birthdate_entered"]=False
            report["terms_or_privacy_accepted"]=False
            if successful:
                time.sleep(max(0,args.idle_seconds-33
                    -report["home_language_poll_wait_seconds"]
                    -report["region_page_poll_wait_seconds"]))
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
