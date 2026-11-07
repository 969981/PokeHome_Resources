#!/usr/bin/env python3
"""Disposable Android HOME 4.1.0 test: rebuilt vs original, no account operations."""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import subprocess
import time
from pathlib import Path

PACKAGE = "jp.pokemon.pokemonhome"
ORIGINAL_SHA256 = "8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1"
CRASH_PATTERNS = (
    "fatal exception", "fatal signal", "unsatisfiedlinkerror",
    "dlopen failed", "am_crash", "anr in jp.pokemon.pokemonhome"
)


def command(parts: list[str], timeout: int = 60, binary: bool = False):
    try:
        return subprocess.run(
            parts, capture_output=True, check=False, timeout=timeout,
            text=not binary, errors=None if binary else "replace"
        )
    except (OSError, subprocess.TimeoutExpired):
        return None


def adb(*args: str, timeout: int = 50, binary: bool = False):
    return command(["adb", *args], timeout=timeout, binary=binary)


def value(*args: str) -> str:
    proc = adb(*args)
    return (proc.stdout or "").strip()[:160] if proc and proc.returncode == 0 else ""


def sha256(path: Path):
    h = hashlib.sha256()
    with path.open("rb") as f:
        for block in iter(lambda: f.read(2 * 1024 * 1024), b""):
            h.update(block)
    return h.hexdigest()


def screenshot(out: Path, name: str):
    p = adb("exec-out", "screencap", "-p", binary=True)
    if not p or p.returncode or not p.stdout.startswith(bytes.fromhex("89504e470d0a1a0a")):
        return {"saved": False, "nonblank": False}
    (out / name).write_bytes(p.stdout)
    try:
        from PIL import Image, ImageStat
        from io import BytesIO
        with Image.open(BytesIO(p.stdout)) as im:
            small = im.convert("RGB").resize((50, 100))
            colors = len(set(small.getdata()))
            variances = ImageStat.Stat(small).stddev
            return {
                "saved": True, "nonblank": colors >= 12 and max(variances) >= 6,
                "color_samples": colors,
                "channel_stddev_rounded": [round(n, 1) for n in variances],
                "dimensions": [im.width, im.height],
            }
    except (ImportError, OSError):
        return {"saved": True, "nonblank": None, "reason": "Pillow unavailable"}


def process_present():
    p = adb("shell", "pidof", PACKAGE)
    return bool(p and p.returncode == 0 and (p.stdout or "").strip())


def crash_summary():
    p = adb("logcat", "-d", "-t", "5000", timeout=35)
    if not p or p.returncode:
        return {"available": False, "counts": {}}
    content = (p.stdout or "").lower()
    return {"available": True, "counts": {label: content.count(label) for label in CRASH_PATTERNS}}


def case(apk: Path, name: str, root: Path):
    out = root / name
    out.mkdir(parents=True, exist_ok=True)
    summary = {"apk": name, "sha256": sha256(apk),
               "install_ok": False, "launch_event_sent": False,
               "process_at_12s": False, "process_at_35s": False,
               "test_scope": "install, launch, 2 screenshots, process and crash counts only",
               "accounts_created": False, "terms_accepted": False}
    adb("shell", "am", "force-stop", PACKAGE)
    adb("uninstall", PACKAGE, timeout=30)  # Safe: fresh disposable emulator only.
    install = adb("install", str(apk), timeout=180)
    summary["install_ok"] = bool(install and install.returncode == 0
                                 and "success" in (install.stdout or "").lower())
    if not summary["install_ok"]:
        reason = ((install.stdout or "") + (install.stderr or "")) if install else "timeout"
        # Restrict report to known platform reason codes; never include raw SDK traces.
        summary["install_reason"] = next(
            (s for s in ("INSTALL_FAILED_NO_MATCHING_ABIS", "INSTALL_PARSE_FAILED",
                         "INSTALL_FAILED_INVALID_APK", "INSTALL_FAILED_UPDATE_INCOMPATIBLE")
             if s in reason), "other_or_timeout")
    else:
        adb("shell", "pm", "grant", PACKAGE, "android.permission.CAMERA", timeout=12)
        adb("shell", "cmd", "appops", "set", PACKAGE, "CAMERA", "allow", timeout=12)
        adb("shell", "settings", "put", "secure",
            "immersive_mode_confirmations", "confirmed", timeout=12)
        adb("logcat", "-c", timeout=12)
        launched = adb("shell", "monkey", "-p", PACKAGE,
                       "-c", "android.intent.category.LAUNCHER", "1", timeout=50)
        summary["launch_event_sent"] = bool(
            launched and launched.returncode == 0
            and "Events injected: 1" in (launched.stdout or "")
        )
        time.sleep(12)
        summary["process_at_12s"] = process_present()
        summary["screen_at_12s"] = screenshot(out, "screen_12s.png")
        time.sleep(23)
        summary["process_at_35s"] = process_present()
        summary["screen_at_35s"] = screenshot(out, "screen_35s.png")
        summary["crash_evidence"] = crash_summary()
        summary["displayed_foreground_package"] = PACKAGE in value(
            "shell", "dumpsys", "activity", "top"
        )
    summary["result"] = (
        "visible_process_survived" if summary["install_ok"]
        and summary["launch_event_sent"] and summary["process_at_35s"]
        and summary.get("screen_at_35s", {}).get("nonblank") is True
        else "not_verified"
    )
    (out / "result.json").write_text(
        json.dumps(summary, ensure_ascii=False, indent=2) + "\n",
        encoding="utf-8")
    print(json.dumps({"case": name, "result": summary["result"],
                      "install": summary["install_ok"],
                      "process_at_35s": summary["process_at_35s"],
                      "screen_nonblank": summary.get("screen_at_35s", {}).get("nonblank")}))
    return summary


def compare(rebuilt: dict, original: dict, device: dict):
    result = {
        "device": device,
        "reconstructed": rebuilt,
        "reference": original,
        "reference_result": original["result"],
        "rebuilt_result": rebuilt["result"],
        "runtime_equivalent_verified": False,
        "account_functionality_verified": False,
        "il2cpp_decompilation_verified": False,
    }
    if original["result"] != "visible_process_survived":
        result["status"] = "blocked_reference_baseline_not_verified"
    elif rebuilt["result"] != "visible_process_survived":
        result["status"] = "reconstructed_app_launch_regression_or_unverified"
    elif any(rebuilt.get("crash_evidence", {}).get("counts", {}).values()):
        result["status"] = "rebuilt_process_alive_but_crash_signals_present"
    else:
        result["status"] = "both_original_and_rebuilt_smoke_passed"
    return result


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--rebuilt", required=True, type=Path)
    p.add_argument("--original", required=True, type=Path)
    p.add_argument("--out", required=True, type=Path)
    a = p.parse_args()
    a.out.mkdir(parents=True, exist_ok=True)
    if sha256(a.original) != ORIGINAL_SHA256:
        raise SystemExit("Original APK hash mismatch; refusing to test")
    device = {
        "android_api": value("shell", "getprop", "ro.build.version.sdk"),
        "android_cpu_abi": value("shell", "getprop", "ro.product.cpu.abi"),
        "android_supported_abis": value("shell", "getprop", "ro.product.cpu.abilist"),
        "android_native_bridge": value("shell", "getprop", "ro.dalvik.vm.native.bridge"),
    }
    rebuilt = case(a.rebuilt, "rebuilt", a.out)
    original = case(a.original, "original", a.out)
    result = compare(rebuilt, original, device)
    (a.out / "comparison.json").write_text(
        json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"status": result["status"], "device": device}))
    raise SystemExit(0 if result["status"] == "both_original_and_rebuilt_smoke_passed" else 2)


if __name__ == "__main__":
    main()
