#!/usr/bin/env python3
"""State-driven, single-session Pokémon HOME 4.1.0 guest onboarding (read-only/low-risk).

Already verified:
  zh-Hans -> APAC -> China Mainland -> country confirmation -> birthday page.
Only the explicitly recognized early UI screens are tapped. The first
unverified irreversible screen (birthday submission / terms / new account)
is always a stop, regardless of profile values.

Not a server registration client. Never links Nintendo Account or deletes users.
"""
from __future__ import annotations

import json
import time
from datetime import date
from pathlib import Path
from typing import Callable

from android41_ui_flow import (
    screenshot_simplified_chinese_option,
    screenshot_language_confirmation_yes,
    screenshot_apac_region_expand_position,
    screenshot_apac_mainland_option,
)

PNG_MAGIC = bytes.fromhex("89504e470d0a1a0a")
EXPECTED = {
    "schema_version": 1,
    "app_version": "4.1.0",
    "nintendo_account_link": False,
    "language": "zh-Hans",
    "region": "亚太地区",
    "country": "中国大陆",
    "avatar": "first_valid",
    "starter_species_id": 4,
    "submit_birthdate": False,
    "accept_terms": False,
    "create_account": False,
    "delete_account": False,
}
STAGES = (
    "choose_language",
    "confirm_language",
    "expand_apac",
    "select_mainland",
    "confirm_mainland",
    "birthdate_page",
)


def load_guest_profile(filename: Path) -> dict:
    """Reject unreviewed/unsafe profile changes before any interaction."""
    obj = json.loads(filename.read_text(encoding="utf-8"))
    if not isinstance(obj, dict):
        raise ValueError("Profile must be a JSON object")
    for key, value in EXPECTED.items():
        if obj.get(key) != value:
            raise ValueError(f"Unsupported or unsafe profile option: {key}")
    if type(obj.get("inspect_birth_year_picker")) is not bool:
        raise ValueError("inspect_birth_year_picker must be boolean")
    birthday = obj.get("birthdate_candidate")
    try:
        if not isinstance(birthday, str):
            raise ValueError("Missing birthday candidate")
        day = date.fromisoformat(birthday)
        if day.isoformat() != birthday or not date(1900, 1, 1) <= day <= date(2006, 11, 7):
            raise ValueError("Birthdate candidate out of accepted test range")
    except ValueError as ex:
        raise ValueError("Invalid birthdate_candidate; never submitted by this script") from ex
    return obj


def _signature(img: bytes, points: tuple[tuple[float, float, tuple[int, int, int], int], ...]) -> bool:
    if not img.startswith(PNG_MAGIC):
        return False
    try:
        from io import BytesIO
        from PIL import Image
        with Image.open(BytesIO(img)) as src:
            im = src.convert("RGB")
    except (ImportError, OSError, ValueError):
        return False
    w, h = im.size
    if w < 600 or h < 1200 or not 1.9 < h / w < 2.5:
        return False
    for x, y, target, tolerance in points:
        px = im.getpixel((int(w * x), int(h * y)))
        if any(abs(a - b) > tolerance for a, b in zip(px, target)):
            return False
    return True


def mainland_confirmation_yes(img: bytes):
    """Real 1080x2340 confirmation modal from Actions #42356071498."""
    if _signature(img, (
        (.50, .03, (121, 146, 97), 16),
        (.50, .15, (23, 107, 91), 16),
        (.50, .34, (247, 251, 247), 16),
        (.50, .49, (247, 251, 247), 16),
        (.68, .64, (255, 173, 4), 16),
        (.30, .70, (11, 100, 101), 16),
        (.30, .75, (11, 100, 101), 16),
    )):
        return 0.68, 0.64
    return None


def birthday_year_dropdown(img: bytes):
    """Real steady age page from Actions #42356611191 / #42357127834.

    Only returns location of YEAR dropdown; never picks a DOB or taps NEXT.
    """
    if _signature(img, (
        (.50, .03, (207, 249, 166), 16),
        (.50, .15, (38, 179, 151), 16),
        (.50, .23, (206, 250, 169), 16),
        (.20, .29, (248, 250, 245), 16),
        (.45, .29, (248, 250, 245), 16),
        (.50, .95, (255, 173, 4), 16),
    )):
        return 0.20, 0.29
    return None



def birth_year_popup_visible(img: bytes) -> bool:
    """Stable dropdown evidence from real run #42358938707 final screenshot.

    The popup's light gray 2026..2018 list obscures the green age screen
    to the left of the month/day dropdowns. Does NOT infer a selected year.
    """
    return _signature(img, (
        (.50, .15, (38, 179, 151), 16),
        (.20, .29, (238, 240, 235), 16),
        (.20, .35, (237, 240, 235), 16),
        (.20, .45, (237, 240, 235), 16),
        (.20, .55, (237, 240, 235), 16),
        (.50, .40, (178, 239, 174), 22),
        (.50, .95, (255, 173, 4), 16),
    ))


def error_modal_like(img: bytes) -> bool:
    """Stops on known general/error-like modal, never infers numeric error code."""
    return _signature(img, (
        (.50, .03, (149, 152, 148), 18),
        (.50, .15, (148, 151, 148), 18),
        (.50, .34, (247, 251, 247), 16),
        (.50, .49, (247, 251, 247), 16),
        (.68, .64, (255, 173, 4), 16),
        (.30, .75, (142, 149, 149), 18),
    ))


def recognize(img: bytes):
    """Return (stage, normalized tap point), or (None, None).

    Never use fallback tap coordinates on an unrecognized screenshot.
    More advanced screens take precedence over early region screens.
    """
    if error_modal_like(img):
        return "unclassified_modal", None
    stage = birthday_year_dropdown(img)
    if stage is not None:
        return "birthdate_page", stage
    stage = mainland_confirmation_yes(img)
    if stage is not None:
        return "confirm_mainland", stage
    for name, fn in (
        ("select_mainland", screenshot_apac_mainland_option),
        ("expand_apac", screenshot_apac_region_expand_position),
        ("confirm_language", screenshot_language_confirmation_yes),
        ("choose_language", screenshot_simplified_chinese_option),
    ):
        pos = fn(img)
        if pos is not None:
            # Original selectors return absolute pixel coordinates; return
            # a tagged absolute pair; don't convert twice.
            return name, ("px", *pos)
    return None, None


def _capture(adb: Callable, out: Path, filename: str) -> bytes:
    p = adb("exec-out", "screencap", "-p", secs=30, binary=True)
    data = p.stdout if p is not None and p.returncode == 0 else b""
    if isinstance(data, bytes) and data.startswith(PNG_MAGIC):
        if filename:
            (out / filename).write_bytes(data)
        return data
    return b""


def run_known_guest_setup(adb: Callable, output: Path, profile: dict,
                          max_checks: int = 70, interval_seconds: float = 3) -> dict:
    """Advance only the verified guest setup pages and stop at age picker.

    Checkpoint is a report about the current ephemeral emulator process;
    it is not a reusable cloud session or a guarantee any account exists.
    """
    if not 1 <= max_checks <= 180:
        raise ValueError("max_checks must be between 1 and 180")
    output.mkdir(parents=True, exist_ok=True)
    result = {
        "status": "running",
        "mode": "verified-ui-navigation",
        "nintendo_account_linked": False,
        "profile": {k: profile[k] for k in (
            "language", "region", "country", "birthdate_candidate",
            "avatar", "starter_species_id")},
        "completed": [],
        "last_observed_stage": None,
        "checks": 0,
        "stop_reason": None,
        "birthday_submitted": False,
        "terms_accepted": False,
        "account_created": False,
        "account_deleted": False,
        "first_basic_utid_observed": False,
        "year_picker_verified": False,
        "screenshots": [],
    }
    minimum_stage = 0
    last_detected = None
    consecutive = 0

    def save(name: str, data: bytes) -> None:
        (output / name).write_bytes(data)
        result["screenshots"].append(name)

    for trial in range(max_checks):
        data = _capture(adb, output, "")
        result["checks"] = trial + 1
        name, point = recognize(data)
        result["last_observed_stage"] = name
        if name == last_detected:
            consecutive += 1
        else:
            consecutive = 1
            last_detected = name
        if not data:
            result["status"] = "screenshot_unavailable"
            result["stop_reason"] = "no_valid_png"
            break
        if name == "unclassified_modal" and consecutive >= 2:
            save("onboarding_unclassified_modal.png", data)
            result["status"] = "blocked_by_unclassified_modal"
            result["stop_reason"] = "do_not_press_error_modal"
            break
        if name not in STAGES or consecutive < 2:
            if interval_seconds > 0:
                time.sleep(interval_seconds)
            continue
        index = STAGES.index(name)
        if index < minimum_stage:
            # Previous page still fading out; never double-tap a completed step.
            if interval_seconds > 0:
                time.sleep(interval_seconds)
            continue
        if index == len(STAGES) - 1:
            save("onboarding_birthdate_page.png", data)
            result["status"] = "at_birthdate_page"
            result["stop_reason"] = "birthdate_is_irreversible_not_submitted"
            if profile["inspect_birth_year_picker"]:
                x, y = point
                from PIL import Image
                from io import BytesIO
                with Image.open(BytesIO(data)) as src:
                    w, h = src.size
                tap = adb("shell", "input", "tap", str(int(x * w)), str(int(y * h)), secs=15)
                if tap is not None and tap.returncode == 0:
                    result["completed"].append("inspect_birth_year_picker")
                    result["status"] = "birth_year_picker_open_attempted"
                    result["stop_reason"] = "tap_sent_picker_not_yet_verified"
                    stable_count = 0
                    for _ in range(12):
                        if interval_seconds > 0:
                            time.sleep(interval_seconds)
                        picker_frame = _capture(adb, output, "")
                        if birth_year_popup_visible(picker_frame):
                            stable_count += 1
                        else:
                            stable_count = 0
                        if stable_count >= 2:
                            save("onboarding_birth_year_picker.png", picker_frame)
                            result["year_picker_verified"] = True
                            result["status"] = "birth_year_picker_verified_open"
                            result["stop_reason"] = "year_list_visible_birthdate_unsubmitted"
                            break
            break
        save(f"onboarding_before_{name}.png", data)
        if isinstance(point, tuple) and len(point) == 3 and point[0] == "px":
            x, y = point[1], point[2]
        else:
            from PIL import Image
            from io import BytesIO
            with Image.open(BytesIO(data)) as src:
                w, h = src.size
            x, y = int(point[0] * w), int(point[1] * h)
        pressed = adb("shell", "input", "tap", str(x), str(y), secs=15)
        if pressed is None or pressed.returncode != 0:
            result["status"] = "tap_failed"
            result["stop_reason"] = name
            break
        result["completed"].append(name)
        minimum_stage = index + 1
        consecutive = 0
        last_detected = None
        if interval_seconds > 0:
            time.sleep(interval_seconds)
    else:
        result["status"] = "no_known_next_screen"
        result["stop_reason"] = "max_checks_reached_no_unverified_actions"
    _capture(adb, output, "onboarding_final.png")
    result["screenshots"].append("onboarding_final.png")
    (output / "onboarding_checkpoint.json").write_text(
        json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    return result
