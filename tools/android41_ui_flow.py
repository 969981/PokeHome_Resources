#!/usr/bin/env python3
"""Dismiss ONLY Android's initial immersive tip and unnecessary camera permission.

Never navigate Pokémon HOME's UI, accept its ToS, create/login accounts, press
any app consent buttons, or touch account/profile/delete dialogs.
UI XML is processed in-memory and never saved to log or Git.
"""
from __future__ import annotations
import re
import time
import xml.etree.ElementTree as ET

SYSTEM_PREFIXES=(
    "com.android.systemui",
    "com.android.permissioncontroller",
    "com.google.android.permissioncontroller",
)
IMMERSIVE_LABELS={"got it"}
DENY_LABELS={"don't allow","don’t allow","deny"}
BOUNDS=re.compile(r"^\[(\d+),(\d+)\]\[(\d+),(\d+)\]$")

def parse_system_action(xml_text:str):
    try:
        root=ET.fromstring(xml_text)
    except (ET.ParseError,TypeError):
        return None
    options=[]
    for item in root.iter("node"):
        a=item.attrib
        package=a.get("package","")
        if not any(package.startswith(prefix) for prefix in SYSTEM_PREFIXES):
            continue
        label=(a.get("text") or a.get("content-desc") or "").strip().casefold()
        bounds=BOUNDS.fullmatch(a.get("bounds",""))
        if not bounds:
            continue
        x1,y1,x2,y2=map(int,bounds.groups())
        if x2<=x1 or y2<=y1:
            continue
        coord=((x1+x2)//2,(y1+y2)//2)
        if label in IMMERSIVE_LABELS and package.startswith("com.android.systemui"):
            options.append(("dismiss_android_immersive_hint",coord))
        elif label in DENY_LABELS and "permissioncontroller" in package:
            # PermissionController can prompt for camera on first launch. Only
            # choose explicit DENY, never allow or an app-side consent button.
            options.append(("deny_android_runtime_permission",coord))
    # Fullscreen tip overlays runtime permission UI; dismiss it first.
    options.sort(key=lambda o:0 if o[0]=="dismiss_android_immersive_hint" else 1)
    return options[0] if options else None


def screenshot_immersive_hint_position(png_bytes:bytes):
    """Pixel-signature of the Android 15 system full-screen hint, not HOME UI.

    Based on real 1080x2340 test screenshots from run 42336066871.
    Never choose a point without matching all required OS overlay colors.
    """
    if not png_bytes or not png_bytes.startswith(bytes.fromhex("89504e470d0a1a0a")):
        return None
    try:
        from io import BytesIO
        from PIL import Image
        with Image.open(BytesIO(png_bytes)) as src:
            im=src.convert("RGB")
    except (ImportError,OSError,ValueError):
        return None
    w,h=im.size
    if w<600 or h<1200 or not 1.9<(h/w)<2.5:
        return None
    def pixel(x,y):
        return im.getpixel((int(w*x),int(h*y)))
    # Android "Viewing full screen" top sheet: off-white panel;
    # muted gray scene behind it; blue "Got it" capsule at the right.
    light=lambda c: c[0]>=228 and c[1]>=226 and c[2]>=230 and max(c)-min(c)<=18
    blue=lambda c: 48<=c[0]<=100 and 67<=c[1]<=125 and 115<=c[2]<=181 and c[2]>c[1]>c[0]
    gray=lambda c: 94<=min(c) and max(c)<=146 and max(c)-min(c)<=22
    if (light(pixel(.50,.055)) and light(pixel(.75,.24))
            and blue(pixel(.85,.28)) and gray(pixel(.50,.39))):
        # center of empirically observed OS button (x~918, y~655)
        return (int(w*.85),int(h*.28))
    return None


def screenshot_simplified_chinese_option(png_bytes:bytes):
    """Only recognize the empirically observed HOME first-launch language UI.

    This is an ordinary, non-account client language preference, not consent
    to Terms or an authentication action. Unknown screens return None.
    """
    if not png_bytes or not png_bytes.startswith(bytes.fromhex("89504e470d0a1a0a")):
        return None
    try:
        from io import BytesIO
        from PIL import Image
        with Image.open(BytesIO(png_bytes)) as source:
            im=source.convert("RGB")
    except (OSError,ImportError,ValueError):
        return None
    w,h=im.size
    if w<600 or h<1200 or not 1.9<h/w<2.5:
        return None
    def sample(x,y):
        return im.getpixel((int(w*x),int(h*y)))
    def near(actual,wanted,delta=14):
        return all(abs(a-b)<=delta for a,b in zip(actual,wanted))
    if (near(sample(.5,.02),(202,244,161))
            and near(sample(.5,.14),(38,179,151))
            and near(sample(.3,.24),(240,246,236))
            and near(sample(.3,.775),(240,246,236))
            and near(sample(.3,.83),(240,246,236))):
        return int(w*.5),int(h*.775)
    return None



def screenshot_language_confirmation_yes(png_bytes:bytes):
    """Identify only the observed Simplified Chinese language confirmation.

    Does NOT match HOME Terms of Use, account creation or any legal consent.
    The signature combines dimmed language-page header, white centered modal
    and orange YES control in its known position.
    """
    if not png_bytes or not png_bytes.startswith(bytes.fromhex("89504e470d0a1a0a")):
        return None
    try:
        from io import BytesIO
        from PIL import Image
        with Image.open(BytesIO(png_bytes)) as source:
            im=source.convert("RGB")
    except (OSError,ImportError,ValueError):
        return None
    w,h=im.size
    if w<600 or h<1200 or not 1.9<h/w<2.5:
        return None
    def get(x,y):return im.getpixel((int(w*x),int(h*y)))
    def near(a,b,t=16):return all(abs(x-y)<=t for x,y in zip(a,b))
    if (near(get(.5,.03),(124,149,100))
            and near(get(.5,.14),(23,107,91))
            and near(get(.5,.35),(247,251,247))
            and near(get(.12,.53),(247,251,247))
            and near(get(.68,.64),(255,173,4))
            and near(get(.5,.8),(144,148,142))):
        return int(w*.68),int(h*.64)
    return None


def screenshot_apac_region_expand_position(png_bytes:bytes):
    """Find the APAC dropdown on the verified HOME region-CHOICE screen.

    This ONLY expands a list of places; it NEVER selects a country, confirms
    residence, enters age/birthdate or accepts HOME/Nintendo agreements.
    Match 7 full-width pale region rows and the original teal page header.
    """
    if not png_bytes or not png_bytes.startswith(bytes.fromhex("89504e470d0a1a0a")):
        return None
    try:
        from io import BytesIO
        from PIL import Image
        with Image.open(BytesIO(png_bytes)) as source:
            im=source.convert("RGB")
    except (OSError,ImportError,ValueError):
        return None
    w,h=im.size
    if w<600 or h<1200 or not 1.9<h/w<2.5:
        return None
    def pixel(x,y):
        return im.getpixel((int(w*x),int(h*y)))
    def near(actual,expected,t=12):
        return all(abs(a-b)<=t for a,b in zip(actual,expected))
    if not near(pixel(.5,.02),(210,252,169)):
        return None
    if not near(pixel(.5,.15),(38,179,151)):
        return None
    if not near(pixel(.5,.8),(158,243,215)):
        return None
    # Seven white pill rows from Africa through Middle East. Sample at 30%
    # of screen width to avoid glyphs and right-arrow icons.
    if not all(near(pixel(.3,y),(248,250,245))
               for y in (.24,.30,.36,.42,.48,.54,.60)):
        return None
    # Expand APAC, fifth row. Do not choose a country inside that list.
    return int(w*.82),int(h*.48)

def wait_for_known_language_page(adb,max_checks:int=9,interval_seconds:float=10.0):
    """Only recognize the evidenced HOME language screen, bounded wait."""
    if max_checks<1 or max_checks>20:
        raise ValueError("max_checks out of range")
    for attempt in range(max_checks):
        image=adb("exec-out","screencap","-p",secs=30,binary=True)
        pos=screenshot_simplified_chinese_option(
            image.stdout if image and image.returncode==0 else b"")
        if pos is not None:
            return pos, attempt+1
        if attempt+1<max_checks and interval_seconds>0:
            time.sleep(interval_seconds)
    return None,max_checks

def dismiss_android_system_prompts(adb, initial_png:bytes|None=None, max_rounds:int=4):
    result=[]
    for round_index in range(max_rounds):
        # The initial screenshot is already verified by the main probe. Use
        # those exact bytes for the first OS prompt check rather than racing
        # against another asynchronously appearing permission dialog.
        if round_index==0 and initial_png:
            pixels=initial_png
        else:
            screen=adb("exec-out","screencap","-p",secs=30,binary=True)
            pixels=screen.stdout if screen and screen.returncode==0 else b""
        pos=screenshot_immersive_hint_position(pixels)
        if pos is not None:
            choice=("dismiss_android_immersive_hint_visual_signature",pos)
        else:
            dump=adb("shell","uiautomator","dump","/sdcard/window.xml",secs=30)
            if dump is None or dump.returncode!=0:
                result.append({"event":"uiautomator_unavailable"})
                break
            xml=adb("shell","cat","/sdcard/window.xml",secs=12)
            if xml is None or xml.returncode!=0:
                result.append({"event":"hierarchy_unavailable"})
                break
            choice=parse_system_action(xml.stdout)
            if choice is None:
                result.append({"event":"no_android_system_prompt_matched"})
                break
        event,(x,y)=choice
        clicked=adb("shell","input","tap",str(x),str(y),secs=12)
        result.append({"event":event,"success":bool(clicked and clicked.returncode==0)})
        if not clicked or clicked.returncode!=0:
            break
        time.sleep(2)
    return result
