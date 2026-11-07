import io
import sys
import tempfile
import unittest
from pathlib import Path
from PIL import Image

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from home41_date_picker_probe import (
    year_popup_visible, birth_form_visible, valid_year_nodes,
    explore_date_controls,
)

W,H=1080,2340
def png(coords):
    im=Image.new("RGB",(W,H),(1,2,3))
    for x,y,rgb in coords:
        im.putpixel((int(W*x),int(H*y)),rgb)
    out=io.BytesIO()
    im.save(out,"PNG")
    return out.getvalue()

YEAR=png([
    (.5,.15,(38,179,151)),(.2,.29,(238,240,235)),
    (.2,.35,(237,240,235)),(.2,.45,(237,240,235)),
    (.2,.55,(237,240,235)),(.5,.95,(255,173,4))
])
FORM=png([
    (.5,.15,(38,179,151)),(.5,.40,(178,239,174)),
    (.5,.95,(255,173,4)),(.5,.29,(248,250,245)),
    (.7,.29,(248,250,245)),(.8,.29,(248,250,245)),
    (.2,.35,(179,234,164))
])
POPUP=png([])

class Result:
    def __init__(self,stdout=None,returncode=0):
        self.stdout=stdout
        self.returncode=returncode

class StubADB:
    def __init__(self,*,fails_back=False):
        self.image=YEAR
        self.calls=[]
        self.fail_back=fails_back
        self.taps=[]
    def __call__(self,*args,**kw):
        self.calls.append(args)
        if args[:3]==("exec-out","screencap","-p"):
            return Result(self.image)
        if args[:3]==("shell","uiautomator","dump"):
            return Result("UI hierchary dumped")
        if args[:2]==("shell","cat"):
            return Result('<?xml version="1.0"?><hierarchy><node text="2026" bounds="[10,25][55,50]"/><node text="ACCESS_TOKEN" bounds="[1,2][3,4]"/><node text="2000" bounds="[10,40][55,60]"/></hierarchy>')
        if args[:3]==("shell","rm","-f"):
            return Result()
        if args[:4]==("shell","input","keyevent","KEYCODE_PAGE_DOWN"):
            return Result()
        if args[:4]==("shell","input","keyevent","KEYCODE_BACK"):
            if not self.fail_back:
                self.image=FORM
            return Result()
        if args[:3]==("shell","input","tap"):
            self.taps.append(args[3:])
            self.image=POPUP
            return Result()
        raise AssertionError(str(args))

class DatePickerTests(unittest.TestCase):
    def test_signature_gates(self):
        self.assertTrue(year_popup_visible(YEAR))
        self.assertFalse(birth_form_visible(YEAR))
        self.assertTrue(birth_form_visible(FORM))
        self.assertFalse(year_popup_visible(FORM))

    def test_whitelist_accessible_year_labels(self):
        xml='<hierarchy><node text="2000" bounds="[10,20][30,40]"/><node text="888888" bounds="[1,2][3,4]"/><node content-desc="1999" bounds="[20,40][60,80]"/><node text="access_token:secret" bounds="[1,2][3,4]"/></hierarchy>'
        r=valid_year_nodes(xml)
        self.assertTrue(r["available"])
        self.assertEqual(r["year_nodes"],[
            {"year":2000,"bounds":"[10,20][30,40]"},
            {"year":1999,"bounds":"[20,40][60,80]"}])
        self.assertNotIn("secret",str(r))
        self.assertEqual(valid_year_nodes("<not xml")["available"],False)

    def test_month_day_menus_only_open_not_select(self):
        adb=StubADB()
        with tempfile.TemporaryDirectory() as d:
            r=explore_date_controls(adb,Path(d),interval_seconds=0)
            self.assertEqual(r["status"],"year_key_and_month_day_menus_inspected_no_date_submission")
            self.assertTrue(r["year_page_down_key_sent"])
            self.assertEqual(len(adb.taps),2)
            self.assertEqual(adb.taps,[("518","678"),("810","678")])
            self.assertTrue(r["month_menu_open_tap_sent"])
            self.assertTrue(r["day_menu_open_tap_sent"])
            self.assertFalse(r["year_selected"])
            self.assertFalse(r["month_selected"])
            self.assertFalse(r["day_selected"])
            self.assertFalse(r["birthday_submitted"])
            self.assertFalse(r["account_created"])
            self.assertTrue((Path(d)/"date_day_menu_after_tap.png").is_file())
            self.assertNotIn("ACCESS_TOKEN",str(r))
            self.assertEqual(r["year_accessibility"]["year_nodes"][1]["year"],2000)

    def test_no_open_if_back_does_not_close_year_popup(self):
        adb=StubADB(fails_back=True)
        with tempfile.TemporaryDirectory() as d:
            r=explore_date_controls(adb,Path(d),interval_seconds=0)
            self.assertEqual(r["status"],"birthdate_form_not_verified_after_year_popup")
            self.assertEqual(adb.taps,[])
            self.assertFalse(r["birthday_submitted"])

    def test_refuse_unverified_screen(self):
        adb=StubADB()
        adb.image=POPUP
        with tempfile.TemporaryDirectory() as d:
            r=explore_date_controls(adb,Path(d),interval_seconds=0)
            self.assertEqual(r["status"],"year_popup_not_verified")
            self.assertEqual(adb.taps,[])
            self.assertFalse(r["account_created"])

if __name__=="__main__":unittest.main()
