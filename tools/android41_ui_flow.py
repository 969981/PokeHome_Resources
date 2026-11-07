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
            result.append({"event":"no_android_system_prompt_matched"})
            break
        event,(x,y)=choice
        # An ADB tap is performed ONLY after explicit permitted OS package +
        # literal button label is read from Android's UI hierarchy.
        tapped=adb("shell","input","tap",str(x),str(y),secs=12)
        result.append({"event":event,"success":bool(tapped and tapped.returncode==0)})
        if not tapped or tapped.returncode!=0:
            break
        time.sleep(2)
    return result
