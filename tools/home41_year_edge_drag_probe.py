#!/usr/bin/env python3
"""One screenshot-gated reversible touch drag over blank year-dropdown padding.

Contrast experiment to the previous text-column swipe (selected year 2019)
and mouse wheel (did not move 2026..2018). Never click NEXT or use accounts.
"""
from __future__ import annotations
import time
from pathlib import Path
from PIL import Image
from io import BytesIO
from home41_guest_onboarding import birth_year_popup_visible, _signature, _capture
from home41_date_picker_probe import birth_form_visible


def year_popup_right_padding_verified(png: bytes) -> bool:
    """Grounded right-hand gray area x=.375, screenshot #42366372912."""
    return (birth_year_popup_visible(png)
            and _signature(png, (
                (.375,.35,(237,240,235),16),
                (.375,.38,(237,240,235),16),
                (.375,.50,(237,240,235),16),
                (.375,.60,(237,240,235),16),
            )))


def probe_year_edge_drag(adb, output: Path, *, interval_seconds: float = 3) -> dict:
    """Exactly ONE gesture; capture screen independently of any claims.

    Both endpoints lie in blank padding of the known dropdown. If a
    year is selected accidentally it is local UI only, not a birthdate
    submission. The following stage requires human review.
    """
    output.mkdir(parents=True, exist_ok=True)
    result={
        "status":"not_started",
        "right_padding_verified":False,
        "edge_drag_sent":False,
        "popup_still_open":False,
        "birth_form_visible_after":False,
        "list_year_text_changed_verified":False,
        "selected_year_verified":False,
        "birthday_submitted":False,
        "nintendo_account_linked":False,
        "account_created":False,
        "account_deleted":False,
        "screenshots":[],
    }
    def capture(name):
        b=_capture(adb,output,name)
        if b:result["screenshots"].append(name)
        return b

    before=capture("year_edge_before.png")
    if not year_popup_right_padding_verified(before):
        result["status"]="popup_right_padding_unverified"
        return result
    result["right_padding_verified"]=True
    with Image.open(BytesIO(before)) as im:
        w,h=im.size
    # x=.375 is safely inside gray right padding; x=.20 was text column.
    # ADB swipe ending in a row *can still* choose a local year, so
    # never do more than one trial and never infer a valid target year.
    drag=adb("shell","input","swipe",
             str(int(w*.375)),str(int(h*.60)),
             str(int(w*.375)),str(int(h*.36)),
             "650",secs=20)
    if drag is None or drag.returncode!=0:
        result["status"]="edge_drag_command_failed"
        return result
    result["edge_drag_sent"]=True

    hits_open=hits_form=0
    for i in range(9):
        if interval_seconds:time.sleep(interval_seconds)
        frame=capture(f"year_edge_after_{i+1:02d}.png")
        hits_open=hits_open+1 if birth_year_popup_visible(frame) else 0
        hits_form=hits_form+1 if birth_form_visible(frame) else 0
        if hits_open>=2:
            result["popup_still_open"]=True
            result["status"]="popup_remains_open_labels_require_visual_review"
            break
        if hits_form>=2:
            result["birth_form_visible_after"]=True
            result["status"]="popup_closed_possible_local_year_selection"
            break
    else:
        result["status"]="unknown_screen_after_edge_drag"
    return result
