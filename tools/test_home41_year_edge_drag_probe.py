import io
import sys
import tempfile
import unittest
from pathlib import Path
from PIL import Image
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from home41_year_edge_drag_probe import year_popup_right_padding_verified,probe_year_edge_drag
W,H=1080,2340
def png(points):
    im=Image.new("RGB",(W,H),(0,0,0))
    for x,y,p in points:im.putpixel((int(W*x),int(H*y)),p)
    o=io.BytesIO();im.save(o,"PNG");return o.getvalue()
BASE=[
    (.5,.15,(38,179,151)),(.2,.29,(238,240,235)),
    (.2,.35,(237,240,235)),(.2,.45,(237,240,235)),
    (.2,.55,(237,240,235)),(.5,.40,(178,239,174)),
    (.5,.95,(255,173,4)),
    (.375,.35,(237,240,235)),(.375,.38,(237,240,235)),
    (.375,.50,(237,240,235)),(.375,.60,(237,240,235))
]
POPUP=png(BASE)
FORM=png([
    (.5,.15,(38,179,151)),(.5,.40,(178,239,174)),
    (.5,.95,(255,173,4)),(.5,.29,(248,250,245)),
    (.7,.29,(248,250,245)),(.8,.29,(248,250,245)),
    (.2,.35,(179,234,164))
])
UNKNOWN=png([])
class R:
    def __init__(self,stdout=None,returncode=0):
        self.stdout=stdout;self.returncode=returncode
class FakeADB:
    def __init__(self,after=POPUP):
        self.image=POPUP;self.after=after;self.calls=[];self.swipes=[]
    def __call__(self,*args,**kw):
        self.calls.append(args)
        if args[:3]==("exec-out","screencap","-p"):return R(self.image)
        if args[:3]==("shell","input","swipe"):
            self.swipes.append(args[3:])
            self.image=self.after
            return R()
        raise AssertionError(f"unexpected ADB {args}")
class YearEdgeTests(unittest.TestCase):
    def test_right_padding_signature(self):
        self.assertTrue(year_popup_right_padding_verified(POPUP))
        self.assertFalse(year_popup_right_padding_verified(FORM))
        self.assertFalse(year_popup_right_padding_verified(UNKNOWN))
    def test_one_non_submitting_edge_drag(self):
        adb=FakeADB()
        with tempfile.TemporaryDirectory() as d:
            r=probe_year_edge_drag(adb,Path(d),interval_seconds=0)
            self.assertEqual(r["status"],"popup_remains_open_labels_require_visual_review")
            self.assertEqual(adb.swipes,[("405","1404","405","842","650")])
            self.assertEqual(len(adb.swipes),1)
            self.assertFalse(r["list_year_text_changed_verified"])
            self.assertFalse(r["birthday_submitted"])
            self.assertFalse(r["account_created"])
            self.assertTrue((Path(d)/"year_edge_after_02.png").is_file())
    def test_stop_if_popup_closes_to_birth_form(self):
        adb=FakeADB(after=FORM)
        with tempfile.TemporaryDirectory() as d:
            r=probe_year_edge_drag(adb,Path(d),interval_seconds=0)
            self.assertEqual(r["status"],"popup_closed_possible_local_year_selection")
            self.assertTrue(r["birth_form_visible_after"])
            self.assertEqual(len(adb.swipes),1)
            self.assertFalse(r["birthday_submitted"])
    def test_no_gesture_on_unknown(self):
        adb=FakeADB();adb.image=UNKNOWN
        with tempfile.TemporaryDirectory() as d:
            r=probe_year_edge_drag(adb,Path(d),interval_seconds=0)
            self.assertEqual(r["status"],"popup_right_padding_unverified")
            self.assertEqual(adb.swipes,[])
if __name__=="__main__":unittest.main()
