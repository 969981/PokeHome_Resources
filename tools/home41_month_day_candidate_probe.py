#!/usr/bin/env python3
"""Pokémon HOME 4.1.0 birthdate local month/day candidate experiment.

Only set the 4 and 5 within the *unsubmitted* birthdate form, each verified
by an actual screenshot of the corresponding Unity popup before clicking.
Never selects a year, clicks NEXT, accepts terms, registers/deletes an
account, or binds Nintendo Account.

Geometry grounded in #42362631400 month/day screenshot artifacts,
1080x2340 portrait image. A successful ADB tap != a verified numeric value.
"""
from __future__ import annotations
from io import BytesIO
from pathlib import Path
import time
from PIL import Image
from home41_guest_onboarding import birth_year_popup_visible, _capture, _signature


def _sig(png, points):
    return _signature(png,tuple(points))


def birth_form_safe(png: bytes) -> bool:
    return (_sig(png,(
        (.50,.15,(38,179,151),16),(.50,.95,(255,173,4),16),
        (.34,.27,(248,250,245),16),(.78,.27,(248,250,245),16),
        (.20,.34,(179,234,164),29),
    )) and not month_popup_visible(png)
        and not day_popup_visible(png)
        and not birth_year_popup_visible(png))


def month_popup_visible(png: bytes) -> bool:
    """Gray month selector, real source: date_month_menu_after_tap.png."""
    return _sig(png,(
        (.50,.15,(38,179,151),16),(.50,.95,(255,173,4),16),
        (.48,.33,(237,240,235),16),(.48,.40,(237,240,235),16),
        (.48,.443,(237,240,235),16),(.48,.55,(237,240,235),16),
        (.75,.40,(171,232,168),29),
    ))


def day_popup_visible(png: bytes) -> bool:
    """Gray day selector, real source: date_day_menu_after_tap.png."""
    return _sig(png,(
        (.50,.15,(38,179,151),16),(.50,.95,(255,173,4),16),
        (.75,.33,(237,240,235),16),(.75,.40,(237,240,235),16),
        (.75,.48,(237,240,235),16),(.75,.55,(237,240,235),16),
        (.48,.40,(186,247,181),30),
    ))


def inspect_local_month_day(adb, output: Path, *, interval_seconds: float=3) -> dict:
    """Choose only 4月 and 5日 locally, taking evidence at each safe step."""
    output.mkdir(parents=True,exist_ok=True)
    result={
        "status":"not_started",
        "year_popup_closed_by_back":False,
        "form_before_month_verified":False,
        "month_popup_verified":False,
        "month_4_tap_sent":False,
        "form_after_month_verified":False,
        "day_popup_verified":False,
        "day_5_tap_sent":False,
        "form_after_day_verified":False,
        "year_value_semantically_verified":False,
        "month_value_semantically_verified":False,
        "day_value_semantically_verified":False,
        "birthday_submitted":False,
        "terms_accepted":False,
        "nintendo_account_linked":False,
        "account_created":False,
        "account_deleted":False,
        "screenshots":[],
    }

    def take(name):
        r=_capture(adb,output,name)
        if r:result["screenshots"].append(name)
        return r

    def stable(predicate,prefix,checks=8):
        hits=0
        for n in range(checks):
            if interval_seconds:time.sleep(interval_seconds)
            data=take(f"{prefix}_{n+1:02d}.png")
            hits=hits+1 if predicate(data) else 0
            if hits>=2:return data
        return b""

    before=take("month_day_initial_year_menu.png")
    if not birth_year_popup_visible(before):
        result["status"]="year_popup_not_verified"
        return result
    close=adb("shell","input","keyevent","KEYCODE_BACK",secs=12)
    if close is None or close.returncode!=0:
        result["status"]="year_back_failed"
        return result
    result["year_popup_closed_by_back"]=True
    form=stable(birth_form_safe,"month_day_initial_form")
    if not form:
        result["status"]="form_not_verified_after_year_back"
        return result
    result["form_before_month_verified"]=True
    with Image.open(BytesIO(form)) as im:
        w,h=im.size

    # Only open month dropdown (not an irreversible button).
    opened=adb("shell","input","tap",str(int(w*.48)),str(int(h*.29)),secs=15)
    if opened is None or opened.returncode!=0:
        result["status"]="month_open_failed"
        return result
    month=stable(month_popup_visible,"month_4_popup")
    if not month:
        result["status"]="month_popup_not_verified"
        return result
    result["month_popup_verified"]=True

    # Actual 4th row center in 1080x2340 screenshot: x=.48,y=.443.
    selected=adb("shell","input","tap",str(int(w*.48)),str(int(h*.443)),secs=15)
    if selected is None or selected.returncode!=0:
        result["status"]="month_4_tap_failed"
        return result
    result["month_4_tap_sent"]=True
    form=stable(birth_form_safe,"month_4_form")
    if not form:
        result["status"]="form_not_verified_after_month"
        return result
    result["form_after_month_verified"]=True
    take("month_4_selected_field_source.png")

    opened=adb("shell","input","tap",str(int(w*.75)),str(int(h*.29)),secs=15)
    if opened is None or opened.returncode!=0:
        result["status"]="day_open_failed"
        return result
    day=stable(day_popup_visible,"day_5_popup")
    if not day:
        result["status"]="day_popup_not_verified"
        return result
    result["day_popup_verified"]=True

    # Actual 5th row center in 1080x2340 screenshot: x=.75,y=.483.
    selected=adb("shell","input","tap",str(int(w*.75)),str(int(h*.483)),secs=15)
    if selected is None or selected.returncode!=0:
        result["status"]="day_5_tap_failed"
        return result
    result["day_5_tap_sent"]=True
    form=stable(birth_form_safe,"day_5_form")
    if not form:
        result["status"]="form_not_verified_after_day"
        return result
    result["form_after_day_verified"]=True
    take("month_4_day_5_unsubmitted_form.png")
    result["status"]="local_month_day_candidate_taps_completed_manual_field_review_required"
    return result
