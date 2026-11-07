import io
import sys
import tempfile
import unittest
from pathlib import Path
from PIL import Image
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from home41_month_day_candidate_probe import (
    birth_form_safe, month_popup_visible, day_popup_visible,
    inspect_local_month_day
)

W,H=1080,2340
def make(points):
    im=Image.new("RGB",(W,H),(0,0,0))
    for x,y,color in points:
        im.putpixel((int(W*x),int(H*y)),color)
    out=io.BytesIO();im.save(out,"PNG");return out.getvalue()
FORM=make([
 (.50,.15,(38,179,151)),(.50,.95,(255,173,4)),
 (.34,.27,(248,250,245)),(.78,.27,(248,250,245)),
 (.20,.34,(179,234,164)),
])
YEAR=make([
 (.50,.15,(38,179,151)),(.50,.95,(255,173,4)),
 (.20,.29,(238,240,235)),(.20,.35,(237,240,235)),
 (.20,.45,(237,240,235)),(.20,.55,(237,240,235)),
 (.50,.40,(178,239,174)),
])
MONTH=make([
 (.50,.15,(38,179,151)),(.50,.95,(255,173,4)),
 (.48,.33,(237,240,235)),(.48,.40,(237,240,235)),
 (.48,.443,(237,240,235)),(.48,.55,(237,240,235)),
 (.75,.40,(171,232,168)),
])
DAY=make([
 (.50,.15,(38,179,151)),(.50,.95,(255,173,4)),
 (.75,.33,(237,240,235)),(.75,.40,(237,240,235)),
 (.75,.48,(237,240,235)),(.75,.55,(237,240,235)),
 (.48,.40,(186,247,181)),
])
INVALID=make([])
class R:
    def __init__(self, stdout=None, returncode=0):
        self.stdout=stdout;self.returncode=returncode
class FakeADB:
    def __init__(self, bad_month=False):
        self.screen=YEAR
        self.bad_month=bad_month
        self.commands=[]
        self.taps=[]
    def __call__(self,*args,**kw):
        self.commands.append(args)
        if args[:3]==("exec-out","screencap","-p"):
            return R(self.screen)
        if args[:4]==("shell","input","keyevent","KEYCODE_BACK"):
            self.screen=FORM
            return R()
        if args[:3]==("shell","input","tap"):
            self.taps.append(args[3:])
            if len(self.taps)==1:
                self.screen=INVALID if self.bad_month else MONTH
            elif len(self.taps)==2:self.screen=FORM
            elif len(self.taps)==3:self.screen=DAY
            elif len(self.taps)==4:self.screen=FORM
            return R()
        raise AssertionError("unexpected ADB command: "+str(args))

class LocalMonthDayTests(unittest.TestCase):
    def test_real_page_style_signatures(self):
        self.assertTrue(birth_form_safe(FORM))
        self.assertTrue(month_popup_visible(MONTH))
        self.assertTrue(day_popup_visible(DAY))
        self.assertFalse(birth_form_safe(MONTH))
        self.assertFalse(birth_form_safe(DAY))
        self.assertFalse(month_popup_visible(DAY))
        self.assertFalse(day_popup_visible(MONTH))
    def test_local_four_and_five_never_submit(self):
        adb=FakeADB()
        with tempfile.TemporaryDirectory() as folder:
            result=inspect_local_month_day(adb,Path(folder),interval_seconds=0)
            self.assertEqual(result["status"],
              "local_month_day_candidate_taps_completed_manual_field_review_required")
            self.assertEqual(adb.taps,[
                ("518","678"),("518","1036"),
                ("810","678"),("810","1130"),
            ])
            self.assertTrue(result["month_4_tap_sent"])
            self.assertTrue(result["day_5_tap_sent"])
            self.assertTrue(result["form_after_day_verified"])
            self.assertFalse(result["month_value_semantically_verified"])
            self.assertFalse(result["day_value_semantically_verified"])
            self.assertFalse(result["birthday_submitted"])
            self.assertFalse(result["terms_accepted"])
            self.assertFalse(result["nintendo_account_linked"])
            self.assertFalse(result["account_created"])
            self.assertFalse(result["account_deleted"])
            self.assertTrue((Path(folder)/"month_4_day_5_unsubmitted_form.png").is_file())
            self.assertTrue(all("next" not in str(cmd).lower() for cmd in adb.commands))
    def test_stop_when_month_popup_unknown(self):
        adb=FakeADB(bad_month=True)
        with tempfile.TemporaryDirectory() as folder:
            result=inspect_local_month_day(adb,Path(folder),interval_seconds=0)
            self.assertEqual(result["status"],"month_popup_not_verified")
            self.assertEqual(len(adb.taps),1)
            self.assertFalse(result["birthday_submitted"])
    def test_refuse_missing_year_popup(self):
        adb=FakeADB();adb.screen=INVALID
        with tempfile.TemporaryDirectory() as folder:
            result=inspect_local_month_day(adb,Path(folder),interval_seconds=0)
            self.assertEqual(result["status"],"year_popup_not_verified")
            self.assertEqual(adb.taps,[])
if __name__=="__main__":
    unittest.main()
