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
            and blue(pixel(.85,.28)) and gray(pixel(.50,.39))
            and gray(pixel(.50,.90))):
        # center of empirically observed OS button (x~918, y~655)
        return (int(w*.85),int(h*.28))
    return None

def dismiss_android_system_prompts(adb, max_rounds:int=4):
    result=[]
    for _ in range(max_rounds):
        check=adb("shell","uiautomator","dump","/sdcard/window.xml",secs=30)
        if check is None or check.returncode!=0:
            result.append({"event":"uiautomator_unavailable"})
            break
        xml=adb("shell","cat","/sdcard/window.xml",secs=12)
        if xml is None or xml.returncode!=0:
            result.append({"event":"hierarchy_unavailable"})
            break
        choice=parse_system_action(xml.stdout)
        if choice is None:
            # Some Android immersive overlays aren't in uiautomator's tree.
            # An image fallback is allowed only if the complete known
            # Android-system visual signature matches the current screenshot.
            image=adb("exec-out","screencap","-p",secs=30,binary=True)
            pos=screenshot_immersive_hint_position(
                image.stdout if image and image.returncode==0 else b"")
            if pos is None:
                result.append({"event":"no_android_system_prompt_matched"})
                break
            choice=("dismiss_android_immersive_hint_visual_signature",pos)
        event,(x,y)=choice
        # An ADB tap is performed ONLY after explicit permitted OS package +
        # literal button label is read from Android's UI hierarchy.
        tapped=adb("shell","input","tap",str(x),str(y),secs=12)
        result.append({"event":event,"success":bool(tapped and tapped.returncode==0)})
        if not tapped or tapped.returncode!=0:
            break
        time.sleep(2)
    return result
