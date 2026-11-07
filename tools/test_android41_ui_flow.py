import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from android41_ui_flow import parse_system_action

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

    def test_reject_malformed_xml(self):
        self.assertIsNone(parse_system_action("<n><unclosed>"))
        self.assertIsNone(parse_system_action(None))

if __name__=="__main__":
    unittest.main()
