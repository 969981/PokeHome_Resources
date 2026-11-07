#!/usr/bin/env python3
"""Inspect APK byte-level differences caused by apksigner directly resigning an APK.

Read-only. Does not modify the original APK, accounts, network or app state.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import re
import zipfile
from pathlib import Path

def sha256(blob):
    return hashlib.sha256(blob).hexdigest()

def package_audit(a: Path, b: Path):
    with zipfile.ZipFile(a) as old, zipfile.ZipFile(b) as new:
        originals={x.filename:x for x in old.infolist()}
        signed={x.filename:x for x in new.infolist()}
        changed=[]
        unchanged=0
        for path in originals.keys() & signed.keys():
            if path.endswith('/'):
                continue
            v1, v2=old.read(path),new.read(path)
            if v1!=v2:
                changed.append(path)
            else:
                unchanged+=1
        original_only=sorted(originals.keys()-signed.keys())
        signed_only=sorted(signed.keys()-originals.keys())
        relevant=[name for name in changed+original_only+signed_only
                  if not name.startswith('META-INF/') and name!='stamp-cert-sha256']
        return {
            "zip_original_count":len(originals),
            "zip_resigned_count":len(signed),
            "same_content_members":unchanged,
            "changed_member_count":len(changed),
            "changed_member_names":sorted(changed)[:40],
            "original_only":original_only[:40],
            "resigned_only":signed_only[:40],
            "non_signature_payload_modified":bool(relevant),
            "source_stamp_certificate_marker_removed": ("stamp-cert-sha256" in original_only),
            "non_signature_changed_samples":relevant[:25],
            "native_so_bytes_identical":all(
                name in signed and old.read(name)==new.read(name)
                for name in originals if name.startswith('lib/') and name.endswith('.so')),
            "dex_bytes_identical":all(
                name in signed and old.read(name)==new.read(name)
                for name in originals if re.fullmatch(r'classes\d*\.dex',name)),
            "original_sha256":sha256(a.read_bytes()),
            "resigned_sha256":sha256(b.read_bytes()),
        }

if __name__=="__main__":
    ap=argparse.ArgumentParser()
    ap.add_argument("--original",type=Path,required=True)
    ap.add_argument("--resigned",type=Path,required=True)
    ap.add_argument("--output",type=Path,required=True)
    ar=ap.parse_args()
    report=package_audit(ar.original,ar.resigned)
    ar.output.parent.mkdir(parents=True,exist_ok=True)
    ar.output.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(report,indent=2))
    if report['non_signature_payload_modified']:
        raise SystemExit("Re-signed APK changed non-signature payload: not a clean signing-only control")
