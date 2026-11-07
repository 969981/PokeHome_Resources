import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from android41_ui_flow import parse_system_action,wait_for_known_language_page,wait_for_stable_region_page

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


    def test_compact_language_layout_from_real_emulator_42382760954(self):
        from io import BytesIO
        from PIL import Image,ImageDraw
        from android41_ui_flow import screenshot_simplified_chinese_option
        # Pixel geometry calibrated from the actual 1080x2340 screenshot:
        # teal header y=.08; 简体中文 row y=.720 instead of old y=.775.
        img=Image.new("RGB",(1080,2340),(158,241,216))
        d=ImageDraw.Draw(img)
        d.rectangle((0,0,1079,150),fill=(202,244,161))
        d.rectangle((0,150,1079,235),fill=(38,179,151))
        for y in (.18,.24,.720,.780):
            middle=int(2340*y)
            d.rectangle((150,middle-35,850,middle+35),fill=(240,246,236))
        b=BytesIO();img.save(b,format="PNG")
        self.assertEqual(screenshot_simplified_chinese_option(b.getvalue()),(540,1684))
        # An unrecognized screen with similar rounded pale list elements
        # must NOT become a click if the teal HOME header is missing.
        d.rectangle((0,150,1079,235),fill=(202,244,161))
        b=BytesIO();img.save(b,format="PNG")
        self.assertIsNone(screenshot_simplified_chinese_option(b.getvalue()))

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


    def test_language_confirmation_requires_full_specific_pattern(self):
        from io import BytesIO
        from PIL import Image,ImageDraw
        from android41_ui_flow import screenshot_language_confirmation_yes
        im=Image.new("RGB",(1080,2340),(100,150,135))
        painter=ImageDraw.Draw(im)
        painter.rectangle((0,0,1079,200),fill=(124,149,100))
        painter.rectangle((0,200,1079,400),fill=(23,107,91))
        painter.rectangle((40,740,1000,1510),fill=(247,251,247))
        painter.rectangle((600,1440,850,1550),fill=(255,173,4))
        painter.rectangle((300,1700,800,1950),fill=(144,148,142))
        buf=BytesIO();im.save(buf,format="PNG")
        # Ensure actual center of orange button is within mock orange region.
        self.assertEqual(screenshot_language_confirmation_yes(buf.getvalue()),(734,1497))
        im=Image.new("RGB",(1080,2340),(247,251,247))
        buf=BytesIO();im.save(buf,format="PNG")
        self.assertIsNone(screenshot_language_confirmation_yes(buf.getvalue()))


    def test_apac_region_expansion_rejects_unknown_pages(self):
        from io import BytesIO
        from PIL import Image,ImageDraw
        from android41_ui_flow import screenshot_apac_region_expand_position
        im=Image.new("RGB",(1080,2340),(158,243,215))
        d=ImageDraw.Draw(im)
        d.rectangle((0,0,1079,140),fill=(210,252,169))
        d.rectangle((0,220,1079,520),fill=(38,179,151))
        for y in (.24,.30,.36,.42,.48,.54,.60):
            row=int(2340*y)
            d.rectangle((145,row-28,910,row+28),fill=(248,250,245))
        buffer=BytesIO();im.save(buffer,format="PNG")
        self.assertEqual(screenshot_apac_region_expand_position(buffer.getvalue()),(885,1123))
        im=Image.new("RGB",(1080,2340),(238,237,244))
        buffer=BytesIO();im.save(buffer,format="PNG")
        self.assertIsNone(screenshot_apac_region_expand_position(buffer.getvalue()))


    def test_stable_region_poll_accepts_only_real_region_layout(self):
        from types import SimpleNamespace
        from io import BytesIO
        from PIL import Image,ImageDraw
        im=Image.new("RGB",(1080,2340),(158,243,215))
        d=ImageDraw.Draw(im)
        d.rectangle((0,0,1079,140),fill=(210,252,169))
        d.rectangle((0,220,1079,520),fill=(38,179,151))
        for y in (.24,.30,.36,.42,.48,.54,.60):
            middle=int(2340*y)
            d.rectangle((145,middle-28,910,middle+28),fill=(248,250,245))
        real=BytesIO();im.save(real,format="PNG")
        fade=Image.new("RGB",(1080,2340),(185,220,200))
        b=BytesIO();fade.save(b,format="PNG")
        replies=iter([b.getvalue(),real.getvalue()])
        calls=[]
        def fake(*args,**kwargs):
            calls.append(args)
            return SimpleNamespace(returncode=0,stdout=next(replies))
        pos,count=wait_for_stable_region_page(fake,2,0)
        self.assertEqual((pos,count),((885,1123),2))
        self.assertEqual(calls,[("exec-out","screencap","-p")]*2)
        with self.assertRaises(ValueError):
            wait_for_stable_region_page(fake,21,0)

    def test_apac_country_choice_requires_verified_expanded_screen(self):
        from io import BytesIO
        from PIL import Image, ImageDraw
        from android41_ui_flow import screenshot_apac_mainland_option
        im=Image.new("RGB",(1080,2340),(158,243,215))
        dr=ImageDraw.Draw(im)
        dr.rectangle((0,220,1079,520),fill=(38,179,151))
        dr.rectangle((100,1090,850,1150),fill=(248,250,245))
        dr.rectangle((100,1190,850,1600),fill=(18,166,168))
        out=BytesIO();im.save(out,format="PNG")
        self.assertEqual(screenshot_apac_mainland_option(out.getvalue()),(324,1251))
        im=Image.new("RGB",(1080,2340),(247,251,247))
        out=BytesIO();im.save(out,format="PNG")
        self.assertIsNone(screenshot_apac_mainland_option(out.getvalue()))


    def test_reject_malformed_xml(self):
        self.assertIsNone(parse_system_action("<n><unclosed>"))
        self.assertIsNone(parse_system_action(None))

if __name__=="__main__":
    unittest.main()
