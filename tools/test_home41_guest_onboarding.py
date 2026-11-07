import io
import json
import sys
import tempfile
import unittest
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from home41_guest_onboarding import (
    load_guest_profile, mainland_confirmation_yes, birthday_year_dropdown,
    error_modal_like, birth_year_popup_visible, recognize, run_known_guest_setup
)

PROFILE = Path(__file__).with_name("home41_guest_profile.json")
W, H = 1080, 2340


def screenshot(points):
    im = Image.new("RGB", (W, H), (0, 0, 0))
    for x, y, rgb in points:
        im.putpixel((int(x * W), int(y * H)), rgb)
    dest = io.BytesIO()
    im.save(dest, format="PNG")
    return dest.getvalue()


COUNTRY = screenshot([
    (.50, .03, (121, 146, 97)), (.50, .15, (23, 107, 91)),
    (.50, .34, (247, 251, 247)), (.50, .49, (247, 251, 247)),
    (.68, .64, (255, 173, 4)), (.30, .70, (11, 100, 101)),
    (.30, .75, (11, 100, 101)),
])
BIRTHDAY = screenshot([
    (.50, .03, (207, 249, 166)), (.50, .15, (38, 179, 151)),
    (.50, .23, (206, 250, 169)), (.20, .29, (248, 250, 245)),
    (.45, .29, (248, 250, 245)), (.50, .95, (255, 173, 4)),
])
YEAR_POPUP = screenshot([
    (.50, .15, (38, 179, 151)), (.20, .29, (238, 240, 235)),
    (.20, .35, (237, 240, 235)), (.20, .45, (237, 240, 235)),
    (.20, .55, (237, 240, 235)), (.50, .40, (178, 239, 174)),
    (.50, .95, (255, 173, 4)),
])

ERROR = screenshot([
    (.50, .03, (149, 152, 148)), (.50, .15, (148, 151, 148)),
    (.50, .34, (247, 251, 247)), (.50, .49, (247, 251, 247)),
    (.68, .64, (255, 173, 4)), (.30, .75, (142, 149, 149)),
])


class Result:
    def __init__(self, stdout=b"", returncode=0):
        self.stdout = stdout
        self.returncode = returncode


class FakeADB:
    def __init__(self, image, after_tap=None):
        self.image = image
        self.after_tap = after_tap
        self.taps = []
        self.wheels = []

    def __call__(self, *args, **kw):
        if args[:3] == ("exec-out", "screencap", "-p"):
            return Result(self.image)
        if args[:3] == ("shell", "input", "tap"):
            self.taps.append(args[3:])
            if self.after_tap is not None:
                self.image = self.after_tap
            return Result(returncode=0)
        if args[:4] == ("shell", "input", "mouse", "scroll"):
            self.wheels.append(args[4:])
            return Result(returncode=0)
        raise AssertionError(f"Unexpected ADB call: {args}")


class GuestOnboardingTests(unittest.TestCase):
    def test_profile_persists_choices(self):
        p = load_guest_profile(PROFILE)
        self.assertFalse(p["nintendo_account_link"])
        self.assertEqual(p["language"], "zh-Hans")
        self.assertEqual(p["country"], "中国大陆")
        self.assertEqual(p["starter_species_id"], 4)
        self.assertFalse(p["create_account"])

    def test_unsafe_profile_is_rejected(self):
        p = load_guest_profile(PROFILE)
        with tempfile.TemporaryDirectory() as d:
            fn = Path(d) / "profile.json"
            p["delete_account"] = True
            fn.write_text(json.dumps(p), encoding="utf-8")
            with self.assertRaises(ValueError):
                load_guest_profile(fn)

    def test_country_modal_recognized_only(self):
        self.assertEqual(mainland_confirmation_yes(COUNTRY), (.68, .64))
        self.assertIsNone(mainland_confirmation_yes(BIRTHDAY))
        self.assertIsNone(mainland_confirmation_yes(ERROR))
        self.assertEqual(recognize(COUNTRY)[0], "confirm_mainland")

    def test_birthday_detected_and_year_picker_is_safe(self):
        self.assertEqual(birthday_year_dropdown(BIRTHDAY), (.2, .29))
        self.assertIsNone(birthday_year_dropdown(COUNTRY))
        self.assertEqual(recognize(BIRTHDAY)[0], "birthdate_page")

    def test_reopened_selected_year_uses_dark_highlight(self):
        # Verified on real #42366372912 after local 2018 selection:
        # the selected top row background changes (238,240,235)->(208,210,206).
        with Image.open(io.BytesIO(YEAR_POPUP)) as source:
            im=source.convert("RGB")
        im.putpixel((int(W*.2),int(H*.29)),(208,210,206))
        out=io.BytesIO()
        im.save(out,format="PNG")
        self.assertTrue(birth_year_popup_visible(out.getvalue()))

    def test_error_dialog_stops_without_tap(self):
        self.assertTrue(error_modal_like(ERROR))
        profile = load_guest_profile(PROFILE)
        profile["inspect_date_controls"] = False
        profile["probe_year_anchor"] = False
        profile["probe_year_edge_drag"] = False
        with tempfile.TemporaryDirectory() as d:
            fake = FakeADB(ERROR)
            result = run_known_guest_setup(fake, Path(d), profile,
                                           max_checks=4, interval_seconds=0)
            self.assertEqual(result["status"], "blocked_by_unclassified_modal")
            self.assertEqual(fake.taps, [])
            self.assertFalse(result["account_created"])
            self.assertTrue((Path(d)/"onboarding_checkpoint.json").exists())

    def test_no_birthdate_submission(self):
        profile = load_guest_profile(PROFILE)
        profile["inspect_date_controls"] = False
        profile["probe_year_anchor"] = False
        profile["probe_year_edge_drag"] = False
        # This test checks opening only; the real profile may explore swipes.
        profile["explore_year_scrolls"] = 0
        with tempfile.TemporaryDirectory() as d:
            fake = FakeADB(BIRTHDAY, after_tap=YEAR_POPUP)
            result = run_known_guest_setup(fake, Path(d), profile,
                                           max_checks=4, interval_seconds=0)
            self.assertEqual(result["status"], "birth_year_picker_verified_open")
            self.assertTrue(result["year_picker_verified"])
            self.assertTrue(birth_year_popup_visible(YEAR_POPUP))
            self.assertFalse(birth_year_popup_visible(BIRTHDAY))
            self.assertEqual(len(fake.taps), 1)
            self.assertEqual(fake.taps[0], ("216", "678"))
            self.assertFalse(result["birthday_submitted"])
            self.assertFalse(result["terms_accepted"])
            self.assertFalse(result["account_created"])
            self.assertTrue((Path(d)/"onboarding_birth_year_picker.png").is_file())

    def test_mouse_wheel_probe_does_not_click_year(self):
        profile = load_guest_profile(PROFILE)
        profile["inspect_date_controls"] = False
        profile["probe_year_anchor"] = False
        profile["probe_year_edge_drag"] = False
        profile["explore_year_scrolls"] = 3
        with tempfile.TemporaryDirectory() as d:
            fake = FakeADB(BIRTHDAY, after_tap=YEAR_POPUP)
            result = run_known_guest_setup(fake, Path(d), profile,
                                           max_checks=5, interval_seconds=0)
            self.assertEqual(result["status"], "mouse_wheel_scroll_probe_only")
            self.assertEqual(result["year_scroll_commands_succeeded"], 3)
            self.assertEqual(result["year_popup_remained_open_after_wheel"], 3)
            self.assertFalse(result["year_labels_changed_verified"])
            self.assertEqual(len(fake.taps), 1)
            self.assertEqual(len(fake.wheels), 3)
            self.assertEqual(fake.wheels[0], ("216", "1006", "--axis", "VSCROLL,-3"))
            self.assertFalse(result["year_selected"])
            self.assertFalse(result["month_selected"])
            self.assertFalse(result["day_selected"])
            self.assertFalse(result["birthday_submitted"])
            self.assertFalse(result["account_created"])
            self.assertEqual(
                len(list(Path(d).glob("onboarding_year_wheel_*.png"))), 3)

    def test_mouse_wheel_stops_if_popup_disappears(self):
        profile = load_guest_profile(PROFILE)
        profile["inspect_date_controls"] = False
        profile["probe_year_anchor"] = False
        profile["probe_year_edge_drag"] = False
        profile["explore_year_scrolls"] = 4
        class DisappearingPopup(FakeADB):
            def __call__(self, *args, **kw):
                if args[:4] == ("shell", "input", "mouse", "scroll"):
                    self.image = BIRTHDAY
                return super().__call__(*args, **kw)
        with tempfile.TemporaryDirectory() as d:
            fake = DisappearingPopup(BIRTHDAY, after_tap=YEAR_POPUP)
            result = run_known_guest_setup(fake, Path(d), profile,
                                           max_checks=5, interval_seconds=0)
            self.assertEqual(result["stop_reason"],
                             "year_popup_disappeared_after_wheel_event")
            self.assertEqual(result["year_scroll_commands_succeeded"], 1)
            self.assertEqual(result["year_popup_remained_open_after_wheel"], 0)
            self.assertEqual(len(fake.wheels), 1)
            self.assertEqual(len(fake.taps), 1)
            self.assertFalse(result["birthday_submitted"])

    def test_stuck_known_confirmation_retries_then_stops(self):
        profile = load_guest_profile(PROFILE)
        profile["inspect_date_controls"] = False
        profile["probe_year_anchor"] = False
        profile["probe_year_edge_drag"] = False
        with tempfile.TemporaryDirectory() as d:
            fake = FakeADB(COUNTRY)
            result = run_known_guest_setup(fake, Path(d), profile,
                                           max_checks=30, interval_seconds=0)
            self.assertEqual(result["status"], "stage_transition_unconfirmed")
            self.assertEqual(result["stage_retry_counts"]["confirm_mainland"], 2)
            self.assertEqual(len(fake.taps), 3)
            self.assertFalse(result["account_created"])
            self.assertFalse(result["birthday_submitted"])
            self.assertTrue((Path(d)/"onboarding_stuck_after_tap.png").is_file())

    def test_stuck_confirmation_can_recover_after_retry(self):
        profile = load_guest_profile(PROFILE)
        profile["inspect_date_controls"] = False
        profile["probe_year_anchor"] = False
        profile["probe_year_edge_drag"] = False
        profile["explore_year_scrolls"] = 0
        class OneRetryNeeded(FakeADB):
            def __call__(self, *args, **kw):
                res = super().__call__(*args, **kw)
                if args[:3] == ("shell", "input", "tap"):
                    if len(self.taps) == 2:
                        self.image = BIRTHDAY
                    elif len(self.taps) == 3:
                        self.image = YEAR_POPUP
                return res
        with tempfile.TemporaryDirectory() as d:
            fake = OneRetryNeeded(COUNTRY)
            result = run_known_guest_setup(fake, Path(d), profile,
                                           max_checks=25, interval_seconds=0)
            self.assertEqual(result["stage_retry_counts"]["confirm_mainland"], 1)
            self.assertTrue(result["year_picker_verified"])
            self.assertFalse(result["birthday_submitted"])
            self.assertFalse(result["account_created"])

    def test_unknown_screen_never_taps(self):
        profile = load_guest_profile(PROFILE)
        profile["inspect_date_controls"] = False
        profile["probe_year_anchor"] = False
        profile["probe_year_edge_drag"] = False
        unknown = screenshot([])
        with tempfile.TemporaryDirectory() as d:
            fake = FakeADB(unknown)
            result = run_known_guest_setup(fake, Path(d), profile,
                                           max_checks=4, interval_seconds=0)
            self.assertEqual(result["status"], "no_known_next_screen")
            self.assertEqual(fake.taps, [])


if __name__ == "__main__":
    unittest.main()
