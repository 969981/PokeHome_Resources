#!/usr/bin/env python3
"""Pokémon HOME 4.1.0: observe the earliest guest UTID without navigating UI.

Read-only native process observation. DOES NOT create, authenticate, delete,
replay HTTP traffic, alter game memory, or accept any application agreements.
Use only with your own legitimately initialized HOME session on native ARM64.
"""
from __future__ import annotations

import argparse
import json
import re
import sys
import threading
from pathlib import Path

PACKAGE = "jp.pokemon.pokemonhome"
EVENTS = frozenset({
    "hook_preflight", "read_only_observer_ready", "unsupported_native_arch",
    "invalid_module_size", "preflight_exception", "first_basic_utid",
    "registration_request_serializer_enter", "registration_response_handler_enter",
    "token_response_handler_enter", "login_request_serializer_enter",
    "login_response_handler_enter", "basic_utid_not_yet_numeric",
})
SIX_DIGITS = re.compile(r"^[0-9]{6}$")


def parse_safe_event(raw: object) -> dict | None:
    """Whitelist events/fields; never preserve tokens, UUIDs or raw transport logs."""
    if not isinstance(raw, str) or len(raw) > 8192:
        return None
    try:
        event = json.loads(raw.strip())
    except (ValueError, TypeError):
        return None
    if not isinstance(event, dict) or event.get("event") not in EVENTS:
        return None
    name = event["event"]
    sanitized = {"event": name}
    elapsed = event.get("elapsed_ms")
    if isinstance(elapsed, (int, float)) and not isinstance(elapsed, bool) and 0 <= elapsed <= 86400000:
        sanitized["elapsed_ms"] = int(elapsed)
    if name == "hook_preflight":
        sanitized["supported_arch"] = event.get("supported_arch") is True
    elif name == "first_basic_utid":
        value = event.get("six_digit_candidate")
        if not isinstance(value, str) or not SIX_DIGITS.fullmatch(value):
            return None
        sanitized["six_digit_candidate"] = value
        sanitized["common_basic_consumer"] = event.get("observed_common_response_basic_consumer") is True
    return sanitized


def evaluate(events: list[dict], target: str, origin: str) -> dict:
    """Evaluate an observed ID, not whether the account was really created."""
    if not SIX_DIGITS.fullmatch(target):
        raise ValueError("target must contain exactly six decimal digits")
    result = {
        "origin": origin,
        "status": "no_first_basic_utid_observed",
        "target": target,
        "six_digit_candidate": None,
        "common_basic_consumer": False,
        "events_observed": len(events),
        "ui_interactions_performed_by_probe": False,
        "account_created_or_deleted": False,
        "tid7_semantics_confirmed": False,
    }
    for evt in events:
        if evt["event"] == "unsupported_native_arch":
            result["status"] = "unsupported_native_arch"
            return result
        if evt["event"] == "invalid_module_size":
            result["status"] = "invalid_native_offset"
            return result
        if evt["event"] == "preflight_exception":
            result["status"] = "native_preflight_failed"
            return result
        if evt["event"] != "first_basic_utid":
            continue
        result["six_digit_candidate"] = evt["six_digit_candidate"]
        result["common_basic_consumer"] = evt["common_basic_consumer"]
        if not evt["common_basic_consumer"]:
            result["status"] = "candidate_seen_unverified_callsite"
        elif evt["six_digit_candidate"] == target:
            result["status"] = "candidate_matches_target_unverified_display"
        else:
            result["status"] = "candidate_does_not_match_target"
        break
    return result


def live_observe(script_path: Path, timeout_seconds: int) -> list[dict]:
    try:
        import frida
    except ImportError as exc:
        raise RuntimeError("Install Python Frida on the local ARM64 workstation: python -m pip install frida") from exc
    events: list[dict] = []
    stopping = threading.Event()

    def on_message(message: dict, unused_data: object) -> None:
        # Frida 17's ARM64 emulated realm uses send() for reliable native
        # hook marker delivery; preserve legacy log event support too.
        kind = message.get("type")
        if kind == "send":
            payload = message.get("payload")
            if not isinstance(payload, dict):
                return
            event = parse_safe_event(json.dumps(payload, ensure_ascii=False))
        elif kind == "log":
            event = parse_safe_event(message.get("payload"))
        else:
            return
        if event is None:
            return
        events.append(event)
        if event["event"] in {
            "first_basic_utid", "unsupported_native_arch", "invalid_module_size", "preflight_exception"
        }:
            stopping.set()

    device = frida.get_usb_device(timeout=10)
    pid = device.spawn([PACKAGE])
    session = None
    script = None
    try:
        session = device.attach(pid)
        script = session.create_script(script_path.read_text(encoding="utf-8"))
        script.on("message", on_message)
        script.load()
        device.resume(pid)
        stopping.wait(timeout_seconds)
    finally:
        if script is not None:
            try: script.unload()
            except Exception: pass
        if session is not None:
            try: session.detach()
            except Exception: pass
    return events


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    src = parser.add_mutually_exclusive_group(required=True)
    src.add_argument("--live", action="store_true", help="Spawn HOME on a native ARM64 Frida device")
    src.add_argument("--input", type=Path, help="Read sanitized JSONL fixture; NOT a live result")
    parser.add_argument("--target", default="888888", help="Six-digit comparison only, never sent to HOME")
    parser.add_argument("--script", type=Path, default=Path(__file__).with_name("early_home_tid_observer.js"))
    parser.add_argument("--timeout", type=int, default=180)
    parser.add_argument("--output", type=Path, help="Optional local sanitized JSON result")
    args = parser.parse_args(argv)
    if not SIX_DIGITS.fullmatch(args.target):
        parser.error("--target must be exactly six decimal digits")
    if not (1 <= args.timeout <= 600):
        parser.error("--timeout must be from 1 to 600 seconds")
    if args.live:
        if not args.script.is_file():
            parser.error(f"Frida observer not found: {args.script}")
        try:
            events = live_observe(args.script, args.timeout)
        except Exception as exc:
            # Error text may carry device-specific paths; don't persist it.
            print(json.dumps({"status":"live_observer_setup_failed", "error_type":type(exc).__name__}), file=sys.stderr)
            return 2
        origin = "live_native_read_only"
    else:
        lines = args.input.read_text(encoding="utf-8").splitlines()
        events = [ev for raw in lines if (ev := parse_safe_event(raw)) is not None]
        origin = "offline_untrusted_fixture"
    result = evaluate(events, args.target, origin)
    output = json.dumps(result, ensure_ascii=False, indent=2) + "\n"
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(output, encoding="utf-8")
    print(output, end="")
    return 0 if result["six_digit_candidate"] is not None else 1


if __name__ == "__main__":
    raise SystemExit(main())
