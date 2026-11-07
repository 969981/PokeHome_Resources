#!/usr/bin/env python3
"""Android 15 test AVD: narrowly dismiss an actual Pixel Launcher ANR.

Only this exact, screen-and-UI-hierarchy-verified Android OS dialog is handled.
No HOME app permission, account, birthday, terms, or registration action.
Never store the full UI hierarchy, tokens, UUIDs, or private input.
"""
from __future__ import annotations

from io import BytesIO
import re
from xml.etree import ElementTree
from PIL import Image

SCREEN_MAGIC = bytes.fromhex("89504e470d0a1a0a")
TITLE = "Pixel Launcher isn't responding"
CLOSE = "Close app"
BOUNDS = re.compile(r"^\[(\d+),(\d+)\]\[(\d+),(\d+)\]$")


def verify_os_anr_screen(png: bytes) -> bool:
    if not isinstance(png, bytes) or not png.startswith(SCREEN_MAGIC):
        return False
    try:
        with Image.open(BytesIO(png)) as src:
            im=src.convert("RGB")
    except (OSError, ValueError):
        return False
    w,h=im.size
    if w<600 or h<1200 or not 1.9<h/w<2.5:
        return False
    # Calibrated to real Android 15 system dialog in Actions #42361874063.
    pts=(
        (.50,.10,(102,102,102),16),
        (.50,.30,(102,102,102),16),
        (.50,.40,(102,102,102),16),
        (.50,.46,(241,240,247),16),
        (.50,.50,(241,240,247),16),
        (.50,.55,(241,240,247),16),
        (.50,.60,(241,240,247),16),
        (.50,.72,(102,102,102),16),
        (.50,.85,(102,102,102),16),
    )
    return all(
        all(abs(a-b)<=tol for a,b in zip(im.getpixel((int(w*x),int(h*y))),rgb))
        for x,y,rgb,tol in pts)


def find_launcher_close_button(xml: str):
    """Return center of Android OS 'Close app' button only for exact Launcher ANR."""
    try:
        tree=ElementTree.fromstring(xml)
    except (TypeError,ValueError,ElementTree.ParseError):
        return None
    nodes=list(tree.iter("node"))
    has_exact_title=any((node.get("text") or "")==TITLE
                        or (node.get("content-desc") or "")==TITLE
                        for node in nodes)
    if not has_exact_title:
        return None
    matches=[]
    for node in nodes:
        if (node.get("text") or "")!=CLOSE and (node.get("content-desc") or "")!=CLOSE:
            continue
        found=BOUNDS.fullmatch(node.get("bounds") or "")
        if not found:
            continue
        x1,y1,x2,y2=map(int,found.groups())
        if 0<=x1<x2<=6000 and 0<=y1<y2<=8000:
            matches.append(((x1+x2)//2,(y1+y2)//2))
    if len(matches)!=1:
        return None
    return matches[0]


def dismiss_verified_launcher_anr(adb,png:bytes) -> dict:
    report={"recognized_screen":verify_os_anr_screen(png),
            "exact_title_and_button_in_os_hierarchy":False,
            "os_dialog_close_sent":False,
            "home_account_actions_performed":False}
    if not report["recognized_screen"]:
        return report
    dump=adb("shell","uiautomator","dump","/sdcard/home41_android_anr.xml",secs=30)
    if dump is None or dump.returncode!=0:
        return report
    content=adb("shell","cat","/sdcard/home41_android_anr.xml",secs=15)
    adb("shell","rm","-f","/sdcard/home41_android_anr.xml",secs=12)
    if content is None or content.returncode!=0:
        return report
    point=find_launcher_close_button(content.stdout or "")
    if point is None:
        return report
    report["exact_title_and_button_in_os_hierarchy"]=True
    sent=adb("shell","input","tap",str(point[0]),str(point[1]),secs=15)
    report["os_dialog_close_sent"]=bool(sent and sent.returncode==0)
    return report
