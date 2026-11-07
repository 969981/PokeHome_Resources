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


# HOME requests location in a fresh AVD after CAMERA is handled. Fixing a
# DENIED state is preferable to granting access to device location for an
# account-registration test, and it prevents repeated permission prompts.
LOCATIONS=("android.permission.ACCESS_FINE_LOCATION",
           "android.permission.ACCESS_COARSE_LOCATION")

def predeny_emulator_location(adb,package:str)->dict:
    initial=adb("shell","dumpsys","package",package,secs=25)
    dump=initial.stdout if initial and initial.returncode==0 else ""
    items={}
    for permission in LOCATIONS:
        if permission not in dump:
            items[permission]={"declared":False,"status":"not_declared"}
            continue
        revoked=adb("shell","pm","revoke",package,permission,secs=20)
        fixed=adb("shell","pm","set-permission-flags",package,permission,
                  "user-set","user-fixed",secs=20)
        # AppOps default deny is also set on disposable synthetic-location AVD.
        op_name="FINE_LOCATION" if "FINE" in permission else "COARSE_LOCATION"
        appop=adb("shell","cmd","appops","set",package,op_name,"ignore",secs=20)
        items[permission]={
            "declared":True,
            "revoke_command_ok":bool(revoked and revoked.returncode==0),
            "fixed_command_ok":bool(fixed and fixed.returncode==0),
            "appops_ignore_ok":bool(appop and appop.returncode==0),
        }
    check=adb("shell","dumpsys","package",package,secs=25)
    checked=check.stdout if check and check.returncode==0 else ""
    for permission,item in items.items():
        if not item["declared"]:continue
        m=re.search(re.escape(permission)+r":\s*granted=(true|false).*?flags=\[([^\]]*)\]",checked)
        flags=m.group(2) if m else ""
        item["granted_false"]=bool(m and m.group(1)=="false")
        item["user_fixed"]=bool("USER_FIXED" in flags and "USER_SET" in flags)
        item["status"]="verified_denied_fixed" if (
            item["granted_false"] and item["user_fixed"]) else "not_verified"
    active=[v for v in items.values() if v["declared"]]
    overall="verified_denied_fixed" if active and all(
        x["status"]=="verified_denied_fixed" for x in active) else (
        "no_location_permission_requested" if not active else "not_verified")
    return {"strategy":"pre_deny_and_user_fix_disposable_avd",
            "status":overall,"details":items,
            "location_access_granted":False if overall=="verified_denied_fixed" else None}


NOTIFY="android.permission.POST_NOTIFICATIONS"

def predeny_emulator_notifications(adb,package:str)->dict:
    initial=adb("shell","dumpsys","package",package,secs=25)
    src=initial.stdout if initial and initial.returncode==0 else ""
    if NOTIFY not in src:
        return {"status":"not_declared","granted":None}
    revoke=adb("shell","pm","revoke",package,NOTIFY,secs=20)
    fixed=adb("shell","pm","set-permission-flags",package,NOTIFY,
              "user-set","user-fixed",secs=20)
    check=adb("shell","dumpsys","package",package,secs=25)
    checked=check.stdout if check and check.returncode==0 else ""
    m=re.search(re.escape(NOTIFY)+r":\s*granted=(true|false).*?flags=\[([^\]]*)\]",checked)
    flags=m.group(2) if m else ""
    denied=bool(m and m.group(1)=="false")
    user_fixed=bool("USER_FIXED" in flags and "USER_SET" in flags)
    return {"status":"verified_denied_fixed" if denied and user_fixed else "not_verified",
            "granted":not denied if m else None,
            "user_fixed":user_fixed,
            "revoke_command_ok":bool(revoke and revoke.returncode==0),
            "fixed_command_ok":bool(fixed and fixed.returncode==0),
            "strategy":"deny_notifications_at_os_permission_manager"}
