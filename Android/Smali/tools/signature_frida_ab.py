#!/usr/bin/env python3
"""HOME signature check A/B on a fresh rooted Android emulator.

Only event names and relative timings are persisted. Original APK is unchanged.
The test is diagnostic, not a signature bypass or online-service fix.
"""
from __future__ import annotations

import argparse
import json
import time
from collections import Counter
from pathlib import Path

from smali_runtime_probe import (
    PACKAGE, ORIGINAL_SHA256, adb, crash_summary, predeny_location_and_notification,
    process_present, screenshot, sha256,
)

EVENTS = frozenset({
    "agent_loaded", "java_unavailable", "java_ready",
    "checksignature_core_called", "checksignature_hook_ready",
    "checksignature_hook_unavailable", "unity_message_hook_ready",
    "unity_message_hook_unavailable", "signature_chars_sent_to_unity",
    "signature_hash_sent_to_unity", "package_name_sent_to_unity",
})
MAX_EVENTS = 100


def observe(apk: Path, name: str, bundle: Path, root: Path, remote_device):
    out = root / name
    out.mkdir(parents=True, exist_ok=True)
    events: list[dict] = []
    runtime_errors = 0

    def on_message(msg, _data):
        nonlocal runtime_errors
        if not isinstance(msg, dict):
            return
        if msg.get("type") == "error":
            runtime_errors += 1
        if msg.get("type") != "send":
            return
        payload = msg.get("payload")
        if not isinstance(payload, dict) or payload.get("event") not in EVENTS:
            return
        if len(events) >= MAX_EVENTS:
            return
        elapsed = payload.get("elapsed_ms")
        data = {"event": payload["event"]}
        if isinstance(elapsed, int) and not isinstance(elapsed, bool) and 0 <= elapsed <= 600000:
            data["elapsed_ms"] = elapsed
        events.append(data)

    summary = {
        "variant": name,
        "sha256": sha256(apk),
        "installation": "not_attempted",
        "frida_spawn_attached": False,
        "home_language_verified": False,
        "signing_credentials_logged": False,
        "certificates_modified_by_monitor": False,
        "official_server_requests_modified": False,
        "app_accounts_touched": False,
    }
    adb("shell", "am", "force-stop", PACKAGE)
    adb("uninstall", PACKAGE, timeout=40)
    install = adb("install", str(apk), timeout=180)
    installed = bool(install and install.returncode == 0 and
                     "success" in (install.stdout or "").lower())
    summary["installation"] = "ok" if installed else "failed"
    session = None
    script = None
    pid = None
    if installed:
        try:
            adb("shell", "pm", "grant", PACKAGE, "android.permission.CAMERA", timeout=15)
            adb("shell", "cmd", "appops", "set", PACKAGE, "CAMERA", "allow", timeout=15)
            adb("shell", "settings", "put", "secure",
                "immersive_mode_confirmations", "confirmed", timeout=12)
            summary["permission_preflight"] = predeny_location_and_notification()
            pid = remote_device.spawn([PACKAGE])
            session = remote_device.attach(pid)
            script = session.create_script(bundle.read_text(encoding="utf-8"))
            script.on("message", on_message)
            script.load()
            remote_device.resume(pid)
            summary["frida_spawn_attached"] = True
            time.sleep(35)
            summary["process_at_35s"] = process_present()
            summary["screen_at_35s"] = screenshot(out, "screen_35s.png")
            time.sleep(25)
            summary["process_at_60s"] = process_present()
            summary["screen_at_60s"] = screenshot(out, "screen_60s.png")
            if not (summary["screen_at_35s"].get("home_language_verified") or
                    summary["screen_at_60s"].get("home_language_verified")):
                # Real Frida spawn-instrumented cold start can still show the
                # Pokémon loading screen at 60 seconds. Do not call this a
                # failed boot until later verified screenshots are captured.
                time.sleep(35)
                summary["process_at_95s"] = process_present()
                summary["screen_at_95s"] = screenshot(out, "screen_95s.png")
                if not summary["screen_at_95s"].get("home_language_verified"):
                    time.sleep(35)
                    summary["process_at_130s"] = process_present()
                    summary["screen_at_130s"] = screenshot(out, "screen_130s.png")
            summary["home_language_verified"] = any(
                summary.get("screen_at_" + t, {}).get("home_language_verified", False)
                for t in ("35s", "60s", "95s", "130s")
            )
            summary["crash_signals"] = crash_summary().get("counts", {})
        except Exception as e:
            summary["test_error_type"] = type(e).__name__
        finally:
            if script is not None:
                try:
                    script.unload()
                except Exception:
                    pass
            if session is not None:
                try:
                    session.detach()
                except Exception:
                    pass
            if pid is not None:
                try:
                    remote_device.resume(pid)
                except Exception:
                    pass
    counts = Counter(e["event"] for e in events)
    summary["hook_event_counts"] = dict(sorted(counts.items()))
    summary["frida_script_errors"] = runtime_errors
    summary["signing_callback_invoked"] = counts["checksignature_core_called"] > 0
    summary["signing_result_sent_to_unity"] = (
        counts["signature_chars_sent_to_unity"] > 0 or
        counts["signature_hash_sent_to_unity"] > 0
    )
    summary["observer_ready"] = counts["agent_loaded"] > 0
    (out / "events.jsonl").write_text(
        "".join(json.dumps(ev, sort_keys=True) + "\n" for ev in events),
        encoding="utf-8")
    (out / "summary.json").write_text(
        json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({
        "case": name, "install": summary["installation"],
        "home_ui": summary["home_language_verified"],
        "sig_hook_seen": summary["signing_callback_invoked"],
        "observer": summary["observer_ready"]}))
    return summary


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--original", type=Path, required=True)
    p.add_argument("--resigned", type=Path, required=True)
    p.add_argument("--bundle", type=Path, required=True)
    p.add_argument("--output", type=Path, required=True)
    a = p.parse_args()
    if sha256(a.original) != ORIGINAL_SHA256:
        raise SystemExit("Reference APK hash mismatch")
    if not a.bundle.is_file() or a.bundle.stat().st_size < 1000:
        raise SystemExit("Compiled Frida Java bridge bundle missing")
    import frida
    a.output.mkdir(parents=True, exist_ok=True)
    manager = frida.get_device_manager()
    device = manager.add_remote_device("127.0.0.1:27042")
    originals = observe(a.original, "official_unmodified", a.bundle, a.output, device)
    resigned = observe(a.resigned, "directly_resigned", a.bundle, a.output, device)
    result = {
        "status": "completed" if originals["observer_ready"] and resigned["observer_ready"]
                  else "hooks_not_ready",
        "original": originals,
        "resigned": resigned,
        "failure_correlation": (
            "only_resigned_failed_home_screen" if originals["home_language_verified"]
            and not resigned["home_language_verified"]
            else "not_reproduced_or_original_not_verified"
        ),
        "signature_check_execution_proved": (
            originals["signing_callback_invoked"] or resigned["signing_callback_invoked"]
        ),
        "note": ("The installed signature-reading Java class is not necessarily "
                 "executed at startup. A 0 event count is not proof of no native "
                 "or server-side certificate validation."),
    }
    (a.output / "comparison.json").write_text(
        json.dumps(result, ensure_ascii=False, indent=2) + "\n",
        encoding="utf-8")
    return 0 if result["status"] == "completed" else 2


if __name__ == "__main__":
    raise SystemExit(main())
