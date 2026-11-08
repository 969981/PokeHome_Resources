#!/usr/bin/env python3
"""One reversible local Unity year callback experiment (1999, index 27).

Requires a REAL, stable, screenshot-verified 2026..2018 year popup and
an already-ready ARM64 Frida session with validated runtime year options.
Arms a one-shot RPC only, then taps the real visible 2018 row once.
The JS hook may replace *this one* UI callback index 8 with 27.
Never taps Next, submits DOB, accepts terms, links Nintendo Account, creates
or deletes accounts. App display must be independently reviewed.
"""
from __future__ import annotations
import time
from io import BytesIO
from pathlib import Path
from typing import Callable
from PIL import Image
from home41_year_anchor_probe import initial_2018_row_visible
from home41_guest_onboarding import _capture
from home41_date_picker_probe import birth_form_visible

ARMED = "local_year1999_arm_accepted"


def probe_local_year1999(
    adb: Callable, output: Path, arm_once: Callable[[], str] | None,
    *, interval_seconds: float = 3.0,
) -> dict:
    output.mkdir(parents=True,exist_ok=True)
    result = {
        "status":"not_started",
        "popup_geometry_verified":False,
        "frida_arm_status":"not_requested",
        "visible_2018_row_tap_sent":False,
        "form_after_tap_verified":False,
        "year_1999_ui_verified":False,  # manual screenshot gate
        "birthdate_submitted":False,
        "terms_accepted":False,
        "nintendo_account_linked":False,
        "account_created":False,
        "account_deleted":False,
        "screenshots":[],
    }
    def take(name):
        data = _capture(adb,output,name)
        if data:
            result["screenshots"].append(name)
        return data

    first=take("local_year1999_before_popup.png")
    if not initial_2018_row_visible(first):
        result["status"]="year_popup_unverified_no_tap"
        return result
    result["popup_geometry_verified"]=True
    if arm_once is None:
        result["status"]="frida_arm_callback_missing_no_tap"
        return result
    try:
        armed = arm_once()
        result["frida_arm_status"] = (
            armed if isinstance(armed,str) and 0 < len(armed) <= 96
            else "invalid_arm_result"
        )
    except Exception as exc:
        result["frida_arm_status"]="arm_exception_"+type(exc).__name__
    if result["frida_arm_status"] != ARMED:
        result["status"]="frida_arm_rejected_no_tap"
        return result

    with Image.open(BytesIO(first)) as im:
        w,h=im.size
    tapped=adb("shell","input","tap",str(int(w*.20)),
               str(int(h*.635)),secs=15)
    if tapped is None or tapped.returncode != 0:
        result["status"]="visible_2018_click_failed"
        return result
    result["visible_2018_row_tap_sent"]=True
    consecutive=0
    for i in range(12):
        if interval_seconds: time.sleep(interval_seconds)
        frame=take(f"local_year1999_form_{i+1:02d}.png")
        consecutive=consecutive+1 if birth_form_visible(frame) else 0
        if consecutive >= 2:
            result["form_after_tap_verified"]=True
            break
    if not result["form_after_tap_verified"]:
        result["status"]="form_not_verified_after_click"
        return result
    take("local_year1999_field_requires_visual_review.png")
    result["status"]="local_year_candidate_manual_ui_and_frida_review"
    return result
