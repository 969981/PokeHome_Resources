#!/usr/bin/env python3
"""Read-only diagnostics of the HOME 4.1.0 birth-year/month/day dropdowns.

Every step is screenshot-gated. No birthday submission, account creation,
Nintendo Account linking, remote authentication, or user deletion.

Evidence: ADB touchscreen swipe selected 2019 (#42360115832);
mouse-wheel events left 2026–2018 unchanged (#42360703091).
This helper tries ONE keyboard PageDown and captures month/day popup layouts.
"""
from __future__ import annotations

from io import BytesIO
import re
import time
from pathlib import Path
from xml.etree import ElementTree
from PIL import Image

PNG_MAGIC = bytes.fromhex("89504e470d0a1a0a")


def signature(img: bytes, points) -> bool:
    if not isinstance(img, bytes) or not img.startswith(PNG_MAGIC):
        return False
    try:
        with Image.open(BytesIO(img)) as source:
            im = source.convert("RGB")
    except (ValueError, OSError):
        return False
    w, h = im.size
    if w < 600 or h < 1200 or not 1.9 < h/w < 2.5:
        return False
    for x, y, color, tolerance in points:
        observed = im.getpixel((int(w*x), int(h*y)))
        if any(abs(a-b) > tolerance for a, b in zip(observed, color)):
            return False
    return True


def birth_form_visible(img: bytes) -> bool:
    """Stable age form, including one with a selected year, but NOT open year popup."""
    form = signature(img, (
        (.50, .15, (38, 179, 151), 17),
        (.50, .40, (178, 239, 174), 24),
        (.50, .95, (255, 173, 4), 17),
        (.50, .29, (248, 250, 245), 15),
        (.70, .29, (248, 250, 245), 15),
        (.80, .29, (248, 250, 245), 15),
        (.20, .35, (179, 234, 164), 26),
    ))
    return form


def year_popup_visible(img: bytes) -> bool:
    return signature(img, (
        (.50, .15, (38, 179, 151), 16),
        (.20, .29, (238, 240, 235), 16),
        (.20, .35, (237, 240, 235), 16),
        (.20, .45, (237, 240, 235), 16),
        (.20, .55, (237, 240, 235), 16),
        (.50, .95, (255, 173, 4), 16),
    ))


def valid_year_nodes(xml_text: str) -> dict:
    """Whitelist four-digit year labels and bounds only. Never persist raw XML."""
    try:
        root = ElementTree.fromstring(xml_text)
    except (TypeError, ValueError, ElementTree.ParseError):
        return {"available": False, "year_nodes": []}
    rows = []
    for item in root.iter("node"):
        for attr in ("text", "content-desc"):
            value = (item.get(attr) or "").strip()
            if not re.fullmatch(r"[0-9]{4}", value):
                continue
            y = int(value)
            if not 1900 <= y <= 2026:
                continue
            bounds = item.get("bounds") or ""
            if not re.fullmatch(r"\[\d+,\d+\]\[\d+,\d+\]",bounds):
                bounds = ""
            entry = {"year": y, "bounds": bounds}
            if entry not in rows:
                rows.append(entry)
    return {"available": True, "year_nodes": rows[:80]}


def fetch_year_accessibility(adb) -> dict:
    dump = adb("shell", "uiautomator", "dump",
               "/sdcard/home41_picker_window.xml", secs=24)
    if dump is None or dump.returncode != 0:
        return {"available": False, "year_nodes": [], "reason": "uiautomator_unavailable"}
    content = adb("shell", "cat", "/sdcard/home41_picker_window.xml", secs=20)
    adb("shell", "rm", "-f", "/sdcard/home41_picker_window.xml", secs=10)
    if content is None or content.returncode != 0:
        return {"available": False, "year_nodes": [], "reason": "ui_hierarchy_unavailable"}
    safe = valid_year_nodes(content.stdout or "")
    safe["reason"] = "whitelisted_numeric_year_nodes_only"
    return safe


def snapshot(adb, output: Path, name: str) -> bytes:
    res = adb("exec-out", "screencap", "-p", secs=30, binary=True)
    data = res.stdout if res is not None and res.returncode == 0 else b""
    if isinstance(data, bytes) and data.startswith(PNG_MAGIC):
        (output/name).write_bytes(data)
        return data
    return b""


def confirmed_birth_form(adb, output: Path, *, interval_seconds: float) -> bytes:
    hits = 0
    for _ in range(8):
        if interval_seconds:
            time.sleep(interval_seconds)
        data = snapshot(adb,output,"date_picker_return_to_form.png")
        if birth_form_visible(data):
            hits += 1
            if hits >= 2:
                return data
        else:
            hits = 0
    return b""


def explore_date_controls(adb, output: Path, *, interval_seconds: float = 3) -> dict:
    """Explore only year/page-down, then month & day open menus.

    Caller must already have positively verified the year popup before this
    helper is invoked. Any unexpected state or unsuccessful ADB command stops.
    """
    output.mkdir(parents=True, exist_ok=True)
    result = {
        "status": "not_started",
        "year_accessibility": {"available": False, "year_nodes": []},
        "year_page_down_key_sent": False,
        "year_popup_remained_open_after_key": False,
        "month_menu_open_tap_sent": False,
        "day_menu_open_tap_sent": False,
        "year_selected": False,
        "month_selected": False,
        "day_selected": False,
        "birthday_submitted": False,
        "account_created": False,
        "screenshot_names": [],
    }
    initial = snapshot(adb, output, "date_year_popup_before_key.png")
    if not year_popup_visible(initial):
        result["status"]="year_popup_not_verified"
        return result
    result["year_accessibility"]=fetch_year_accessibility(adb)

    key = adb("shell","input","keyevent","KEYCODE_PAGE_DOWN",secs=12)
    if key is None or key.returncode != 0:
        result["status"]="page_down_key_failed"
        return result
    result["year_page_down_key_sent"]=True
    if interval_seconds:
        time.sleep(interval_seconds)
    after_key=snapshot(adb, output, "date_year_popup_after_page_down.png")
    result["screenshot_names"].append("date_year_popup_after_page_down.png")
    result["year_popup_remained_open_after_key"]=year_popup_visible(after_key)

    if result["year_popup_remained_open_after_key"]:
        close=adb("shell","input","keyevent","KEYCODE_BACK",secs=12)
        if close is None or close.returncode != 0:
            result["status"]="year_back_key_failed"
            return result
    elif not birth_form_visible(after_key):
        result["status"]="unexpected_screen_after_year_key"
        return result

    form=confirmed_birth_form(adb,output,interval_seconds=interval_seconds)
    if not form:
        result["status"]="birthdate_form_not_verified_after_year_popup"
        return result
    with Image.open(BytesIO(form)) as im:
        w,h=im.size

    # Open month by tapping the previously observed month box; do NOT choose
    # any month item. The next screenshot is evidence, not a selection claim.
    month=adb("shell","input","tap",str(int(w*.48)),str(int(h*.29)),secs=15)
    if month is None or month.returncode != 0:
        result["status"]="month_open_tap_failed"
        return result
    result["month_menu_open_tap_sent"]=True
    if interval_seconds:
        time.sleep(interval_seconds)
    snapshot(adb,output,"date_month_menu_after_tap.png")
    result["screenshot_names"].append("date_month_menu_after_tap.png")

    close=adb("shell","input","keyevent","KEYCODE_BACK",secs=12)
    if close is None or close.returncode != 0:
        result["status"]="month_back_key_failed"
        return result
    form=confirmed_birth_form(adb,output,interval_seconds=interval_seconds)
    if not form:
        result["status"]="form_not_verified_after_month_back"
        return result

    # Open day box, save evidence and stop without any date selection.
    day=adb("shell","input","tap",str(int(w*.75)),str(int(h*.29)),secs=15)
    if day is None or day.returncode != 0:
        result["status"]="day_open_tap_failed"
        return result
    result["day_menu_open_tap_sent"]=True
    if interval_seconds:
        time.sleep(interval_seconds)
    snapshot(adb,output,"date_day_menu_after_tap.png")
    result["screenshot_names"].append("date_day_menu_after_tap.png")
    result["status"]="year_key_and_month_day_menus_inspected_no_date_submission"
    return result
