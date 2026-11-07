import io
import sys
import unittest
from pathlib import Path
from PIL import Image
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from android41_os_anr_recovery import (
    verify_os_anr_screen, find_launcher_close_button, dismiss_verified_launcher_anr
)

def make_screen(points):
    im=Image.new("RGB",(1080,2340),(0,0,0))
    for x,y,color in points:im.putpixel((int(x*1080),int(y*2340)),color)
    output=io.BytesIO(); im.save(output,format="PNG");return output.getvalue()

SCREEN=make_screen([
    (.50,.10,(102,102,102)), (.50,.30,(102,102,102)),
    (.50,.40,(102,102,102)), (.50,.46,(241,240,247)),
    (.50,.50,(241,240,247)), (.50,.55,(241,240,247)),
    (.50,.60,(241,240,247)), (.50,.72,(102,102,102)),
    (.50,.85,(102,102,102)),
])
OTHER=make_screen([])
XML="""<?xml version="1.0"?><hierarchy>
<node text="Pixel Launcher isn't responding" bounds="[100,550][700,620]"/>
<node text="Close app" bounds="[100,1000][500,1200]"/>
<node text="Wait" bounds="[100,1250][500,1400]"/>
</hierarchy>"""

class Result:
    def __init__(self,stdout="",returncode=0):
        self.stdout=stdout
        self.returncode=returncode
class FakeADB:
    def __init__(self):
        self.calls=[]
    def __call__(self,*args,**kw):
        self.calls.append(args)
        if args[:3]==("shell","uiautomator","dump"):return Result("UI hierarchy dumped")
        if args[:2]==("shell","cat"):return Result(XML)
        if args[:3]==("shell","rm","-f"):return Result()
        if args[:3]==("shell","input","tap"):return Result()
        raise AssertionError(str(args))

class RecoveryTests(unittest.TestCase):
    def test_exact_matching_ui(self):
        self.assertTrue(verify_os_anr_screen(SCREEN))
        self.assertFalse(verify_os_anr_screen(OTHER))
        self.assertEqual(find_launcher_close_button(XML),(300,1100))
    def test_cannot_dismiss_other_app_anr(self):
        other=XML.replace("Pixel Launcher isn't responding","Pokémon HOME isn't responding")
        self.assertIsNone(find_launcher_close_button(other))
        self.assertIsNone(find_launcher_close_button("<hierarchy>"))
    def test_single_android_os_close_button_only(self):
        adb=FakeADB()
        r=dismiss_verified_launcher_anr(adb,SCREEN)
        self.assertTrue(r["recognized_screen"])
        self.assertTrue(r["os_dialog_close_sent"])
        self.assertFalse(r["home_account_actions_performed"])
        self.assertEqual([a for a in adb.calls if a[:3]==("shell","input","tap")],
                         [("shell","input","tap","300","1100")])
    def test_no_action_without_visual_match(self):
        adb=FakeADB()
        r=dismiss_verified_launcher_anr(adb,OTHER)
        self.assertFalse(r["recognized_screen"])
        self.assertEqual(adb.calls,[])
if __name__=="__main__":unittest.main()
