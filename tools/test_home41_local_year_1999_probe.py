import sys
import tempfile
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from test_home41_year_anchor_probe import MockADB, POPUP, FORM, OTHER
from home41_local_year_1999_probe import probe_local_year1999, ARMED

class LocalYear1999Tests(unittest.TestCase):
    def test_verified_popup_arm_once_and_exactly_one_ui_tap(self):
        adb=MockADB()
        calls=[]
        def arm():
            calls.append(len(adb.taps))
            return ARMED
        with tempfile.TemporaryDirectory() as folder:
            result=probe_local_year1999(
                adb,Path(folder),arm,interval_seconds=0)
            self.assertEqual(calls,[0])
            self.assertEqual(adb.taps,[("216","1485")])
            self.assertTrue(result["form_after_tap_verified"])
            self.assertFalse(result["year_1999_ui_verified"])
            self.assertFalse(result["birthdate_submitted"])
            self.assertFalse(result["account_created"])
            self.assertTrue(
                (Path(folder)/"local_year1999_field_requires_visual_review.png").is_file())

    def test_unknown_popup_never_calls_frida_or_taps(self):
        adb=MockADB()
        adb.image=OTHER
        calls=[]
        with tempfile.TemporaryDirectory() as folder:
            result=probe_local_year1999(
                adb,Path(folder),lambda:calls.append(True),interval_seconds=0)
            self.assertEqual(result["status"],"year_popup_unverified_no_tap")
            self.assertEqual(calls,[])
            self.assertEqual(adb.taps,[])

    def test_absent_frida_refuses_tap(self):
        adb=MockADB()
        with tempfile.TemporaryDirectory() as folder:
            result=probe_local_year1999(adb,Path(folder),None,interval_seconds=0)
            self.assertEqual(result["status"],"frida_arm_callback_missing_no_tap")
            self.assertEqual(adb.taps,[])

    def test_failed_rpc_refuses_tap(self):
        for response in ("host_guard_rejected","rpc_arm_failed_TransportError","unknown",None):
            with self.subTest(response=response),tempfile.TemporaryDirectory() as folder:
                adb=MockADB()
                result=probe_local_year1999(adb,Path(folder),
                    lambda: response,interval_seconds=0)
                self.assertEqual(result["status"],"frida_arm_rejected_no_tap")
                self.assertEqual(adb.taps,[])
                self.assertFalse(result["birthdate_submitted"])

    def test_frida_exception_cannot_leak_or_tap(self):
        adb=MockADB()
        def arm():
            raise RuntimeError("SECRET")
        with tempfile.TemporaryDirectory() as folder:
            result=probe_local_year1999(adb,Path(folder),arm,interval_seconds=0)
            self.assertEqual(result["frida_arm_status"],"arm_exception_RuntimeError")
            self.assertEqual(adb.taps,[])
            self.assertNotIn("SECRET",str(result))

    def test_stuck_ui_no_repeat_click(self):
        adb=MockADB(fail_form=True)
        with tempfile.TemporaryDirectory() as folder:
            result=probe_local_year1999(adb,Path(folder),
                lambda:ARMED,interval_seconds=0)
            self.assertEqual(result["status"],"form_not_verified_after_click")
            self.assertEqual(len(adb.taps),1)
            self.assertFalse(result["year_1999_ui_verified"])

if __name__=="__main__":
    unittest.main()
