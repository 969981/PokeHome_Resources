#!/usr/bin/env python3
"""Prepare controlled APK variants and audit actual repack differences.

Variants:
- resign_only: original package payload, disposable replacement signature.
- hybrid_dex: original payload plus 3 DEX files assembled from Smali.
A separate Apktool-built APK is the main test variant.
"""
import argparse
import hashlib
import json
import re
import zipfile
from pathlib import Path

DEX = re.compile(r"classes(?:[0-9]+)?\.dex$")


def digest(data):
    return hashlib.sha256(data).hexdigest()


def member_audit(original: Path, rebuilt: Path, output: Path):
    with zipfile.ZipFile(original) as old, zipfile.ZipFile(rebuilt) as new:
        names_old, names_new = set(old.namelist()), set(new.namelist())
        common = sorted(names_old & names_new)
        different = []
        changed_categories = {}
        for name in common:
            if name.endswith('/'):
                continue
            original_digest, new_digest = digest(old.read(name)), digest(new.read(name))
            if original_digest != new_digest:
                category = ("DEX" if DEX.fullmatch(name) else
                            "native_lib" if name.startswith("lib/") else
                            "unity_asset" if name.startswith("assets/") else
                            "resource" if name.startswith("res/") or name=="resources.arsc" else
                            "manifest" if name=="AndroidManifest.xml" else "other")
                different.append({"member": name, "category": category,
                                  "old_sha256": original_digest, "new_sha256": new_digest})
                changed_categories[category] = changed_categories.get(category, 0) + 1
        original_dex = sorted(n for n in names_old if DEX.fullmatch(n))
        rebuilt_dex = sorted(n for n in names_new if DEX.fullmatch(n))
        if original_dex != rebuilt_dex or len(original_dex) != 3:
            raise ValueError(f"DEX count/name mismatch: {original_dex} vs {rebuilt_dex}")
        changed_compression = sum(old.getinfo(n).compress_type != new.getinfo(n).compress_type
                                  for n in common if not n.endswith("/"))
        report = {
            "original_entries": len(names_old), "apktool_entries": len(names_new),
            "original_only_count": len(names_old - names_new),
            "rebuilt_only_count": len(names_new - names_old),
            "different_content_count": len(different),
            "different_content_by_category": changed_categories,
            "different_compression_methods_count": changed_compression,
            "sample_changed_member_names": [d["member"] for d in different[:60]],
            "source_native_libs_identical": not changed_categories.get("native_lib"),
            "source_unity_assets_identical": not changed_categories.get("unity_asset"),
            "source_dex_identical": not changed_categories.get("DEX"),
            "original_dex_names": original_dex,
            "rebuilt_dex_names": rebuilt_dex,
            "original_only_sample": sorted(names_old - names_new)[:35],
            "rebuilt_only_sample": sorted(names_new - names_old)[:35],
        }
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_text(json.dumps(report, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")
    return report


def create_hybrid(original: Path, rebuilt: Path, hybrid: Path):
    hybrid.parent.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(original) as old, zipfile.ZipFile(rebuilt) as new, \
         zipfile.ZipFile(hybrid, 'w', allowZip64=True) as out:
        expected = {"classes.dex", "classes2.dex", "classes3.dex"}
        assert expected.issubset(new.namelist())
        for info in old.infolist():
            name = info.filename
            if name in expected:
                data = new.read(name)
            elif re.match(r"META-INF/[^/]+\.(?:RSA|DSA|EC|SF|MF)$", name, re.IGNORECASE):
                # Original JAR signing blocks cannot be preserved after DEX change.
                continue
            else:
                data = old.read(name)
            out.writestr(info, data)
        names = set(out.namelist())
        assert expected.issubset(names)
    with zipfile.ZipFile(original) as old, zipfile.ZipFile(hybrid) as new, \
         zipfile.ZipFile(rebuilt) as smali:
        for name in expected:
            assert new.read(name) == smali.read(name)
        for name in old.namelist():
            if name in expected or name not in new.namelist() or name.endswith('/'):
                continue
            assert digest(old.read(name)) == digest(new.read(name)), name


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--original",type=Path,required=True)
    p.add_argument("--rebuilt",type=Path,required=True)
    p.add_argument("--hybrid-output",type=Path,required=True)
    p.add_argument("--audit-output",type=Path,required=True)
    a=p.parse_args()
    print(json.dumps(member_audit(a.original,a.rebuilt,a.audit_output),indent=2))
    create_hybrid(a.original,a.rebuilt,a.hybrid_output)


if __name__ == "__main__":
    main()
