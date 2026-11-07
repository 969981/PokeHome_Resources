import io
import sys
import tempfile
import unittest
from pathlib import Path
from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parents[1]/"tools"))
from home41_year_anchor_probe import (
    initial_2018_row_visible, probe_year_reopen_anchor
)

W,H=1080,2340
def make_png(coords):
    im=Image.new("RGB",(W,H),(0,0,0))
    for x,y,c in coords:
        im.putpixel((int(W*x),int(H*y)),c)
    out=io.BytesIO()
    im.save(out,"PNG")
    return out.getvalue()

POPUP=make_png([
    (.5,.15,(38,179,151)),
    (.2,.29,(238,240,235)),
    (.2,.35,(237,240,235)),
    (.2,.45,(237,240,235)),
    (.2,.55,(237,240,235)),
    (.5,.40,(178,239,174)),
    (.5,.95,(255,173,4)),
    (.2,.60,(237,240,235)),
    (.2,.635,(237,240,235)),
    (.2,.65,(237,240,235)),
    (.2,.69,(158,241,203)),
])
FORM=make_png([
    (.5,.15,(38,179,151)),(.5,.40,(178,239,174)),
    (.5,.95,(255,173,4)),(.5,.29,(248,250,245)),
    (.7,.29,(248,250,245)),(.8,.29,(248,250,245)),
    (.2,.35,(179,234,164)),
])
OTHER=make_png([])

class Response:
    def __init__(self,stdout=None,returncode=0):
        self.stdout=stdout
        self.returncode=returncode

class MockADB:
    def __init__(self,*,fail_form=False,fail_reopen=False):
        self.image=POPUP
        self.calls=[]
        self.taps=[]
        self.fail_form=fail_form
        self.fail_reopen=fail_reopen
    def __call__(self,*args,**kwargs):
        self.calls.append(args)
        if args[:3]==("exec-out","screencap","-p"):
            return Response(self.image)
        if args[:3]==("shell","input","tap"):
            self.taps.append(args[3:])
            if len(self.taps)==1 and not self.fail_form:
                self.image=FORM
            if len(self.taps)==2 and not self.fail_reopen:
                self.image=POPUP
            return Response()
        raise AssertionError(f"unapproved ADB call: {args}")

class YearAnchorTests(unittest.TestCase):
    def test_initial_evidence_gate(self):
        self.assertTrue(initial_2018_row_visible(POPUP))
        self.assertFalse(initial_2018_row_visible(FORM))
        self.assertFalse(initial_2018_row_visible(OTHER))
        self.assertFalse(initial_2018_row_visible(b""))

    def test_local_2018_then_reopen_without_submission(self):
        adb=MockADB()
        with tempfile.TemporaryDirectory() as tmp:
            result=probe_year_reopen_anchor(adb,Path(tmp),interval_seconds=0)
            self.assertEqual(result["status"],
                             "reopened_year_list_requires_visual_anchor_review")
            self.assertEqual(adb.taps,
                             [("216","1485"),("216","678")])
            self.assertTrue(result["year_popup_after_reopen_verified"])
            self.assertFalse(result["year_value_semantically_verified"])
            self.assertFalse(result["list_anchor_semantically_verified"])
            for field in ("birthdate_submitted","nintendo_account_linked",
                          "account_created","account_deleted"):
                self.assertFalse(result[field])
            self.assertTrue((Path(tmp)/"year_anchor_reopened_final.png").is_file())
            self.assertFalse(any("NEXT" in str(x) for x in adb.calls))

    def test_stop_if_form_did_not_appear(self):
        adb=MockADB(fail_form=True)
        with tempfile.TemporaryDirectory() as tmp:
            result=probe_year_reopen_anchor(adb,Path(tmp),interval_seconds=0)
            self.assertEqual(result["status"],
                             "form_not_verified_after_candidate_tap")
            self.assertEqual(len(adb.taps),1)
            self.assertFalse(result["birthdate_submitted"])

    def test_stop_if_reopen_failed(self):
        adb=MockADB(fail_reopen=True)
        with tempfile.TemporaryDirectory() as tmp:
            result=probe_year_reopen_anchor(adb,Path(tmp),interval_seconds=0)
            self.assertEqual(result["status"],
                             "reopen_year_picker_not_verified")
            self.assertEqual(len(adb.taps),2)
            self.assertFalse(result["account_created"])

    def test_refuse_unknown_start(self):
        adb=MockADB()
        adb.image=OTHER
        with tempfile.TemporaryDirectory() as tmp:
            result=probe_year_reopen_anchor(adb,Path(tmp),interval_seconds=0)
            self.assertEqual(result["status"],"initial_2018_popup_not_verified")
            self.assertEqual(adb.taps,[])
            self.assertFalse(result["birthdate_submitted"])

if __name__=="__main__":
    unittest.main()
