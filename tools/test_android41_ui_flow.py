import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from android41_ui_flow import parse_system_action,wait_for_known_language_page

class HomeSystemOverlayTest(unittest.TestCase):
    def test_known_native_prompts(self):
        xml='''<hierarchy>
        <node package="com.android.systemui" text="Got it" bounds="[630,455][780,557]" />
        <node package="com.google.android.permissioncontroller" text="Don’t allow" bounds="[105,1150][725,1270]" />
        </hierarchy>'''
        self.assertEqual(parse_system_action(xml)[0],"dismiss_android_immersive_hint")
        self.assertEqual(parse_system_action(xml)[1],(705,506))
        xml='<hierarchy><node package="com.google.android.permissioncontroller" text="Don’t allow" bounds="[105,1150][725,1270]" /></hierarchy>'
        self.assertEqual(parse_system_action(xml)[0],"deny_android_runtime_permission")
    def test_never_press_app_consent(self):
        for label in ("Agree","Sign Up","Delete Account","Accept","Don't allow","Got it"):
            xml=f'<hierarchy><node package="jp.pokemon.pokemonhome" text="{label}" bounds="[5,5][20,20]"/></hierarchy>'
            self.assertIsNone(parse_system_action(xml))
        other='<hierarchy><node package="com.android.systemui" text="Allow" bounds="[5,5][20,20]" /></hierarchy>'
        self.assertIsNone(parse_system_action(other))

    def test_immersive_visual_signature(self):
        from io import BytesIO
        from PIL import Image, ImageDraw
        from android41_ui_flow import screenshot_immersive_hint_position
        im=Image.new("RGB",(1080,2340),(127,127,127))
        dr=ImageDraw.Draw(im)
        dr.rectangle((0,0,1079,790),fill=(238,237,244))
        dr.rectangle((825,585,1000,715),fill=(71,93,146))
        io=BytesIO()
        im.save(io,format="PNG")
        self.assertEqual(screenshot_immersive_hint_position(io.getvalue()),(918,655))
        im=Image.new("RGB",(1080,2340),(0,0,0))
        io=BytesIO()
        im.save(io,format="PNG")
        self.assertIsNone(screenshot_immersive_hint_position(io.getvalue()))
        # Real emulator screenshots may have a darkened permission dialog
        # under the full-screen sheet; lower screen is not necessarily gray.
        dim=Image.new("RGB",(1080,2340),(51,51,51))
        d=ImageDraw.Draw(dim)
        d.rectangle((0,0,1079,790),fill=(238,237,244))
        d.rectangle((825,585,1000,715),fill=(71,93,146))
        d.rectangle((0,850,1079,1100),fill=(120,120,123))
        buffer=BytesIO()
        dim.save(buffer,format="PNG")
        self.assertEqual(screenshot_immersive_hint_position(buffer.getvalue()),(918,655))


    def test_language_option_only_on_known_home_screen(self):
        from io import BytesIO
        from PIL import Image,ImageDraw
        from android41_ui_flow import screenshot_simplified_chinese_option
        im=Image.new("RGB",(1080,2340),(158,241,207))
        draw=ImageDraw.Draw(im)
        draw.rectangle((0,0,1079,215),fill=(202,244,161))
        draw.rectangle((0,215,1079,402),fill=(38,179,151))
        for y in (561,1813,1942):
            draw.rectangle((150,y-45,800,y+45),fill=(240,246,236))
        buf=BytesIO()
        im.save(buf,format="PNG")
        self.assertEqual(screenshot_simplified_chinese_option(buf.getvalue()),(540,1813))
        im=Image.new("RGB",(1080,2340),(238,237,244))
        buf=BytesIO();im.save(buf,format="PNG")
        self.assertIsNone(screenshot_simplified_chinese_option(buf.getvalue()))


    def test_language_poll_bounded_and_read_only(self):
        from types import SimpleNamespace
        from io import BytesIO
        from PIL import Image,ImageDraw
        im=Image.new("RGB",(1080,2340),(160,235,210))
        d=ImageDraw.Draw(im)
        d.rectangle((0,0,1079,215),fill=(202,244,161))
        d.rectangle((0,215,1079,402),fill=(38,179,151))
        for y in (561,1813,1942):
            d.rectangle((150,y-45,800,y+45),fill=(240,246,236))
        stream=BytesIO();im.save(stream,format="PNG")
        counts=[]
        def adb(*args,**kwargs):
            counts.append(args)
            return SimpleNamespace(returncode=0,stdout=stream.getvalue())
        pos,tries=wait_for_known_language_page(adb,max_checks=2,interval_seconds=0)
        self.assertEqual(pos,(540,1813))
        self.assertEqual(tries,1)
        self.assertEqual(counts,[("exec-out","screencap","-p")])

    def test_reject_malformed_xml(self):
        self.assertIsNone(parse_system_action("<n><unclosed>"))
        self.assertIsNone(parse_system_action(None))

if __name__=="__main__":
    unittest.main()
