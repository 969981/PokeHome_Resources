#!/usr/bin/env python3
"""Preconfigure CAMERA in a disposable camera-less Android emulator for UI tests.

For CI-only AVDs configured with -camera-back none -camera-front none.
No device camera is accessible and no personal data is collected.
No other runtime permissions are granted or changed.
"""
from __future__ import annotations
import re

CAMERA="android.permission.CAMERA"

def configure_emulator_camera_permission(adb,package:str)->dict:
    result={
        "strategy":"pregrant_camera_on_disposable_camera_less_avd",
        "camera_permission_declared":False,
        "grant_command_ok":False,
        "appop_command_ok":False,
        "verified_granted":False,
        "other_permissions_modified":False,
    }
    pkg=adb("shell","dumpsys","package",package,secs=25)
    text=pkg.stdout if pkg and pkg.returncode==0 else ""
    if CAMERA not in text:
        result["status"]="not_declared"
        return result
    result["camera_permission_declared"]=True
    grant=adb("shell","pm","grant",package,CAMERA,secs=25)
    result["grant_command_ok"]=bool(grant and grant.returncode==0)
    if result["grant_command_ok"]:
        op=adb("shell","cmd","appops","set",package,"CAMERA","allow",secs=20)
        result["appop_command_ok"]=bool(op and op.returncode==0)
    verify=adb("shell","dumpsys","package",package,secs=25)
    output=verify.stdout if verify and verify.returncode==0 else ""
    result["verified_granted"]=bool(
        re.search(r"android\.permission\.CAMERA:\s*granted=true\b",output)
    )
    result["status"]=(
        "verified_granted" if result["verified_granted"] else
        "grant_failed" if not result["grant_command_ok"] else
        "grant_unconfirmed"
    )
    return result
