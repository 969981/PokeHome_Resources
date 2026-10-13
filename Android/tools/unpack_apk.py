#!/usr/bin/env python3
"""Offline, fail-closed APK inventory/extraction with optional jadx/apktool/REA.

Output is local only. REA + JADX inspect Android DEX; Unity IL2CPP methods in
libil2cpp.so additionally require native binary + global-metadata analysis.
"""
import argparse
import csv
import hashlib
import json
import os
import shutil
import stat
import subprocess
import sys
import zipfile
from pathlib import Path, PurePosixPath

EXPECTED_APK = "8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1"
KEYS = {
    "lib/arm64-v8a/libil2cpp.so":
        "80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe",
    "assets/bin/Data/Managed/Metadata/global-metadata.dat":
        "dde114e58c195c44d8261ff00259c2da5dcfd62facad6103ea4b60b77bebb0ad",
}
MAX_FILES = 100000
MAX_TOTAL = 4 * 1024**3
MAX_MEMBER = 2 * 1024**3
CHUNK = 1024 * 1024


def digest_file(path):
    h = hashlib.sha256()
    with open(path, "rb") as stream:
        for chunk in iter(lambda: stream.read(CHUNK), b""):
            h.update(chunk)
    return h.hexdigest()


def safe_member(name):
    """Return normalized POSIX path; never accept traversal, links or aliases."""
    if not name or "\\" in name or "\x00" in name or ":" in name:
        raise ValueError("invalid ZIP member name")
    path = PurePosixPath(name)
    if path.is_absolute() or not path.parts or any(p in (".", "..") for p in name.split("/")):
        raise ValueError("unsafe ZIP member path")
    return path


def inspect_members(infos):
    if len(infos) > MAX_FILES:
        raise ValueError("too many ZIP members")
    names = set()
    folded = set()
    total = 0
    for info in infos:
        path = safe_member(info.filename)
        mode = (info.external_attr >> 16) & 0xffff
        if stat.S_ISLNK(mode):
            raise ValueError("symbolic-link member blocked")
        if not (info.is_dir() or stat.S_ISREG(mode) or stat.S_IFMT(mode) == 0):
            raise ValueError("unsupported ZIP member type")
        key = str(path).rstrip("/")
        if key in names:
            raise ValueError("duplicate ZIP member name")
        names.add(key)
        # Case-only name conflicts exist in this exact APK. Extraction uses
        # deterministic aliases for those entries, and manifest tracks both
        # the original archive path and emitted path.
        folded.add(key.casefold())
        if info.file_size > MAX_MEMBER:
            raise ValueError("oversized member")
        total += info.file_size
        if total > MAX_TOTAL:
            raise ValueError("extraction budget exceeded")
    return total


def extract(apk, root):
    with zipfile.ZipFile(apk) as archive:
        infos = archive.infolist()
        declared = inspect_members(infos)
        folded_counts = {}
        for info in infos:
            if info.is_dir():
                continue
            key = str(safe_member(info.filename)).casefold()
            folded_counts[key] = folded_counts.get(key, 0) + 1
        if (root / "raw").exists():
            raise FileExistsError("output/raw already exists; use a new output path")
        raw = root / "raw"
        raw.mkdir(parents=True)
        seen_bytes = 0
        manifest = []
        for entry in infos:
            relative = safe_member(entry.filename)
            raw_key = str(relative)
            output_relative = relative
            if not entry.is_dir() and folded_counts.get(raw_key.casefold(), 0) > 1:
                name = relative.name
                marker = hashlib.sha256(raw_key.encode("utf-8")).hexdigest()[:10]
                output_relative = relative.with_name(name + ".__case_" + marker)
            target = raw.joinpath(*output_relative.parts)
            if not target.resolve().is_relative_to(raw.resolve()):
                raise ValueError("ZIP member escaped output root")
            if entry.is_dir():
                target.mkdir(parents=True, exist_ok=True)
                continue
            target.parent.mkdir(parents=True, exist_ok=True)
            digest = hashlib.sha256()
            actual = 0
            with archive.open(entry) as source, open(target, "xb") as sink:
                while True:
                    block = source.read(CHUNK)
                    if not block:
                        break
                    actual += len(block)
                    seen_bytes += len(block)
                    if actual > entry.file_size or seen_bytes > MAX_TOTAL:
                        raise ValueError("ZIP member exceeded declared budget")
                    digest.update(block)
                    sink.write(block)
            if actual != entry.file_size:
                raise ValueError("ZIP byte count mismatch: " + entry.filename)
            manifest.append({
                "path": str(relative), "extraction_path": str(output_relative),
                "bytes": actual, "crc32": f"{entry.CRC:08x}",
                "sha256": digest.hexdigest(),
            })
        if seen_bytes != declared:
            raise ValueError("uncompressed ZIP byte count mismatch")
    return sorted(manifest, key=lambda x: x["path"])


def optional_tool(label, exe, args, log_dir):
    path = shutil.which(exe)
    record = {"tool": label, "status": "not_installed", "command": [exe] + args}
    if not path:
        return record
    log_dir.mkdir(parents=True, exist_ok=True)
    logfile = log_dir / (label + ".log")
    try:
        with open(logfile, "w", encoding="utf-8") as log:
            process = subprocess.run([path, *args], stdout=log,
                                     stderr=subprocess.STDOUT, timeout=1800,
                                     check=False)
        record.update(status="ok" if process.returncode == 0 else "failed",
                      returncode=process.returncode, logfile=str(logfile))
    except (OSError, subprocess.TimeoutExpired) as error:
        record.update(status="error", message=str(error), logfile=str(logfile))
    return record


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--apk", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--skip-jadx", action="store_true")
    parser.add_argument("--skip-apktool", action="store_true")
    parser.add_argument("--skip-rea", action="store_true")
    args = parser.parse_args(argv)
    apk = args.apk.resolve(strict=True)
    out = args.out.resolve()
    actual_hash = digest_file(apk)
    if actual_hash != EXPECTED_APK:
        parser.error("APK SHA-256 does not match the documented 4.1.0/versionCode81 build: " + actual_hash)
    if out.exists() and any(out.iterdir()):
        parser.error("output directory must be new/empty (no overwrite of earlier evidence)")
    out.mkdir(parents=True, exist_ok=True)
    reports = out / "reports"
    reports.mkdir()
    report = {"apk": apk.name, "sha256": actual_hash, "status": "incomplete",
              "tool_results": [], "key_files": {}}
    try:
        manifest = extract(apk, out)
        for name, expected in KEYS.items():
            match = next((x for x in manifest if x["path"] == name), None)
            if not match or match["sha256"] != expected:
                raise ValueError("missing or hash-mismatched key member: " + name)
            report["key_files"][name] = {"sha256": match["sha256"], "bytes": match["bytes"]}
        with open(reports / "apk_manifest.csv", "w", newline="", encoding="utf-8") as fp:
            writer = csv.DictWriter(fp, fieldnames=["path", "extraction_path", "bytes", "crc32", "sha256"])
            writer.writeheader()
            writer.writerows(manifest)
        report["zip_file_count"] = len(manifest)
        report["uncompressed_bytes"] = sum(x["bytes"] for x in manifest)
        report["status"] = "raw_extracted_verified"
        if not args.skip_jadx:
            report["tool_results"].append(optional_tool("jadx", "jadx",
                ["-d", str(out / "jadx"), str(apk)], reports / "logs"))
        if not args.skip_apktool:
            report["tool_results"].append(optional_tool("apktool", "apktool",
                ["d", "-f", "-o", str(out / "apktool"), str(apk)], reports / "logs"))
        if not args.skip_rea:
            report["tool_results"].append(optional_tool("rea", "rea",
                ["inspect-android-package", str(apk), "--json"], reports / "logs"))
    except Exception as error:
        report["status"] = "failed"
        report["error"] = f"{type(error).__name__}: {error}"
        raise
    finally:
        (reports / "extraction.json").write_text(
            json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"status": report["status"], "zip_file_count": report["zip_file_count"],
                      "tool_results": report["tool_results"]}, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
