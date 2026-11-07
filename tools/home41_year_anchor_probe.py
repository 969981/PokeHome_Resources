#!/usr/bin/env python3
"""HOME 4.1.0: controlled reversible year-dropdown anchor experiment.

On the previously observed 2026..2018 list, click only the visible final
row corresponding to 2018, inspect the form, reopen the year popup and stop.
NO birthday submission, service terms, Nintendo linking, account create/delete.
Selection and anchor semantics remain *unverified* until real screenshot review.
"""
from __future__ import annotations

import json
import time
from pathlib import Path
from typing import Callable
from PIL import Image
from io import BytesIO
from home41_guest_onboarding import birth_year_popup_visible, _signature, _capture
from home41_date_picker_probe import birth_form_visible


def initial_2018_row_visible(png: bytes) -> bool:
    """Conservative geometry gate from real 1080x2340 screenshot #42362631400.

    The bottom 2018 row is at ~0.635 viewport height; this validates dropdown
    shape, not the four-digit text. No OCR or arbitrary pixel clicks.
    """
    return (birth_year_popup_visible(png)
            and _signature(png, (
                (.20, .60, (237, 240, 235), 16),
                (.20, .635, (237, 240, 235), 16),
                (.20, .65, (237, 240, 235), 16),
                (.20, .69, (173, 235, 166), 25),
            )))


def probe_year_reopen_anchor(adb: Callable, output: Path,
                             *, interval_seconds: float = 3) -> dict:
    """Select visible candidate 2018 then reopen; collect evidence only.

    State transitions require *two* consecutive verified frames. We never
    infer selected-year value or scroll position from successful ADB commands.
    """
    output.mkdir(parents=True, exist_ok=True)
    result = {
        "status": "not_started",
        "initial_2018_row_geometry_verified": False,
        "known_2018_row_tap_sent": False,
        "birth_form_after_candidate_tap_verified": False,
        "reopen_year_picker_tap_sent": False,
        "year_popup_after_reopen_verified": False,
        "year_value_semantically_verified": False,
        "list_anchor_semantically_verified": False,
        "birthdate_submitted": False,
        "nintendo_account_linked": False,
        "account_created": False,
        "account_deleted": False,
        "screenshots": [],
    }
    def take(name: str) -> bytes:
        data = _capture(adb, output, name)
        if data:
            result["screenshots"].append(name)
        return data
    def stable(predicate, prefix: str, attempts: int = 9) -> bool:
        hits = 0
        for i in range(attempts):
            if interval_seconds:
                time.sleep(interval_seconds)
            frame = take(f"{prefix}_{i+1:02d}.png")
            hits = hits+1 if predicate(frame) else 0
            if hits >= 2:
                return True
        return False

    before = take("year_anchor_initial_popup.png")
    result["initial_2018_row_geometry_verified"] = initial_2018_row_visible(before)
    if not result["initial_2018_row_geometry_verified"]:
        result["status"] = "initial_2018_popup_not_verified"
        return result

    with Image.open(BytesIO(before)) as im:
        w, h = im.size
    # Precisely one locally reversible selection, last visible known row.
    selected = adb("shell", "input", "tap", str(int(w*.20)),
                   str(int(h*.635)), secs=15)
    if selected is None or selected.returncode != 0:
        result["status"] = "2018_row_tap_failed"
        return result
    result["known_2018_row_tap_sent"] = True

    if not stable(birth_form_visible, "year_anchor_form"):
        result["status"] = "form_not_verified_after_candidate_tap"
        return result
    result["birth_form_after_candidate_tap_verified"] = True
    # Capture a stable clear form for *manual* year-label verification.
    take("year_anchor_selected_field_closeup_source.png")

    # Reopen only the verified year INPUT. This is not the NEXT button.
    reopened = adb("shell", "input", "tap", str(int(w*.20)),
                   str(int(h*.29)), secs=15)
    if reopened is None or reopened.returncode != 0:
        result["status"] = "reopen_year_picker_tap_failed"
        return result
    result["reopen_year_picker_tap_sent"] = True
    if not stable(birth_year_popup_visible, "year_anchor_reopened"):
        result["status"] = "reopen_year_picker_not_verified"
        return result
    result["year_popup_after_reopen_verified"] = True
    take("year_anchor_reopened_final.png")
    result["status"] = "reopened_year_list_requires_visual_anchor_review"
    return result
