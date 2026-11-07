#!/usr/bin/env python3
"""Runtime matrix: Apktool reconstruction, original-assets+Smali-DEX, resigned original, untouched original."""
from __future__ import annotations
import argparse
import json
from pathlib import Path

from smali_runtime_probe import case, value, sha256, ORIGINAL_SHA256


def classify(results):
    original=results["original"]["result"]=="visible_process_survived"
    resigned=results["resigned_original"]["result"]=="visible_process_survived"
    hybrid=results["original_assets_smali_dex"]["result"]=="visible_process_survived"
    rebuilt=results["apktool_rebuilt"]["result"]=="visible_process_survived"
    if not original:
        return "blocked_original_baseline_not_visible"
    if not resigned:
        return "resigned_original_fails_original_passes_signature_or_ziplayout_suspected"
    if not hybrid:
        return "original_resigned_passes_but_smali_dex_hybrid_fails"
    if not rebuilt:
        return "smali_dex_hybrid_passes_but_apktool_full_package_fails"
    return "all_four_launch_visible"


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--rebuilt",required=True,type=Path)
    p.add_argument("--hybrid",required=True,type=Path)
    p.add_argument("--resigned",required=True,type=Path)
    p.add_argument("--original",required=True,type=Path)
    p.add_argument("--out",required=True,type=Path)
    a=p.parse_args()
    if sha256(a.original)!=ORIGINAL_SHA256:
        raise SystemExit("Original APK SHA-256 mismatch")
    a.out.mkdir(parents=True,exist_ok=True)
    device={key:value("shell","getprop",prop) for key,prop in {
        "android_api":"ro.build.version.sdk",
        "device_abi":"ro.product.cpu.abi",
        "device_abilist":"ro.product.cpu.abilist",
        "native_bridge":"ro.dalvik.vm.native.bridge",
    }.items()}
    inputs=[
        ("apktool_rebuilt",a.rebuilt),
        ("original_assets_smali_dex",a.hybrid),
        ("resigned_original",a.resigned),
        ("original",a.original),
    ]
    results={}
    for name,path in inputs:
        results[name]=case(path,name,a.out)
    status=classify(results)
    report={"device":device,"status":status,"results":results,
            "interpretation":"Qualifies bootstrap UI only; not service login, account, or IL2CPP source recovery.",
            "read_only_no_registration":True}
    (a.out/"matrix.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"status":status,"cases":{k:v["result"] for k,v in results.items()}}))
    return 0


if __name__=="__main__":
    raise SystemExit(main())
