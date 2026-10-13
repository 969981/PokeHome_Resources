#!/usr/bin/env python3
"""Publish the exact 19,622-file HOME 4.1.0 local evidence ZIP to a git checkout.

Run on a case-sensitive Linux filesystem (WSL2 ext4), never a case-insensitive
Windows checkout. This command operates ONLY on the input ZIP you supply; it
never downloads or substitutes a different APK/version.
"""
import argparse
import csv
import hashlib
import os
from pathlib import Path, PurePosixPath
import shutil
import stat
import subprocess
import sys
import tempfile
import zipfile

EXPECTED_ZIP_SHA256 = "5f6fe5dfe8924098e8af818282262575c5063b4de7d579e31562da8d38080ed3"
EXPECTED_APK_SHA256 = "8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1"
EXPECTED_FILE_COUNT = 19622
EXPECTED_RAW_COUNT = 1810
ARCHIVE_ROOT = "HOME_Android_4.1.0/"
TARGET_REL = Path("Android") / "4.1.0"


def sha256(path):
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(4 * 1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def git(repo, *args, capture=True):
    proc = subprocess.run(["git", "-C", str(repo), *args],
                          text=True, stdout=subprocess.PIPE if capture else None,
                          stderr=subprocess.PIPE if capture else None)
    if proc.returncode:
        raise RuntimeError(f"git {' '.join(args)} failed: {proc.stderr}")
    return proc.stdout.strip() if capture else ""


def safe_name(name):
    if not name.startswith(ARCHIVE_ROOT):
        raise ValueError(f"unexpected ZIP prefix: {name!r}")
    suffix = name[len(ARCHIVE_ROOT):]
    rel = PurePosixPath(suffix)
    if not suffix or rel.is_absolute() or any(p in ("", ".", "..") for p in rel.parts):
        raise ValueError(f"unsafe ZIP name: {name!r}")
    if any("\\" in p or ":" in p or p.endswith((" ", ".")) for p in rel.parts):
        raise ValueError(f"Windows-problematic ZIP name: {name!r}")
    return Path(*rel.parts)


def check_case_sensitive(parent):
    with tempfile.TemporaryDirectory(dir=parent) as d:
        a, b = Path(d) / "file", Path(d) / "FILE"
        a.write_bytes(b"a")
        b.write_bytes(b"b")
        if a.read_bytes() != b"a" or b.read_bytes() != b"b":
            raise RuntimeError("filesystem is not case-sensitive; use WSL2 ext4")


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--zip", type=Path, required=True)
    p.add_argument("--repo", type=Path, required=True, help="checkout of 969981/PokeHome_Resources")
    p.add_argument("--push", action="store_true", help="git push origin 4.1.0 after committing")
    args = p.parse_args()
    archive = args.zip.resolve()
    repo = args.repo.resolve()
    if git(repo, "branch", "--show-current") != "4.1.0":
        raise RuntimeError("checkout branch must be 4.1.0")
    if git(repo, "status", "--porcelain"):
        raise RuntimeError("checkout must be clean; commit/stash your changes first")
    if sha256(archive) != EXPECTED_ZIP_SHA256:
        raise RuntimeError("archive SHA-256 mismatch; refusing to import the wrong archive")
    target = repo / TARGET_REL
    if target.exists():
        raise RuntimeError(f"already exists; refusing to overwrite: {target}")
    parent = target.parent
    check_case_sensitive(parent)
    names, folded_names = set(), {}
    with zipfile.ZipFile(archive) as z:
        entries = [item for item in z.infolist() if not item.is_dir()]
        if len(entries) != EXPECTED_FILE_COUNT:
            raise ValueError(f"wrong file count: {len(entries)}")
        for i in entries:
            if i.external_attr >> 16 & stat.S_IFMT(0o170000) == stat.S_IFLNK:
                raise ValueError(f"symlink not allowed: {i.filename}")
            rel = safe_name(i.filename)
            if str(rel) in names:
                raise ValueError(f"duplicate ZIP path: {rel}")
            names.add(str(rel))
            folded_names.setdefault(str(rel).casefold(), []).append(str(rel))
        raw_paths = [v for v in names if v.startswith("Raw/")]
        if len(raw_paths) != EXPECTED_RAW_COUNT:
            raise ValueError(f"wrong raw member count: {len(raw_paths)}")
        if "manifest.csv" not in names:
            raise ValueError("manifest.csv missing")
        # Verify every RAW member against the archived per-member SHA-256 manifest.
        with z.open(ARCHIVE_ROOT + "manifest.csv") as f:
            rows = list(csv.DictReader((b.decode("utf-8-sig") for b in f)))
        expected = {row["path"]: row["sha256"].lower() for row in rows}
        if len(expected) != EXPECTED_RAW_COUNT:
            raise ValueError("manifest has incomplete raw members")
        print(f"Validated input ZIP, {len(entries)} files, {len(raw_paths)} raw members")
        collisions = [a for a in folded_names.values() if len(a) > 1]
        print(f"Case-fold collisions: {len(collisions)} groups; Linux ext4 preserves each exact path")
        temp = Path(tempfile.mkdtemp(prefix=".home41-ingest-", dir=parent))
        try:
            for idx, item in enumerate(entries, 1):
                rel = safe_name(item.filename)
                output = temp / rel
                output.parent.mkdir(parents=True, exist_ok=True)
                h = hashlib.sha256()
                with z.open(item) as src, output.open("wb") as dst:
                    while chunk := src.read(1024 * 1024):
                        h.update(chunk)
                        dst.write(chunk)
                if str(rel).startswith("Raw/"):
                    key = str(rel)[4:]
                    if h.hexdigest() != expected.get(key):
                        raise ValueError(f"raw SHA-256 mismatch: {rel}")
                if idx % 3000 == 0:
                    print(f"Validated and extracted {idx}/{len(entries)}")
            if len([p for p in temp.rglob("*") if p.is_file()]) != EXPECTED_FILE_COUNT:
                raise ValueError("post-extraction file count mismatch")
            temp.rename(target)
        except BaseException:
            shutil.rmtree(temp, ignore_errors=True)
            raise
    print(f"Exact full archive extracted: {target}")
    # -f is deliberate: this repository currently ignores *.so, *.apk etc.
    git(repo, "add", "-f", "-A", "--", TARGET_REL.as_posix(), capture=False)
    git(repo, "commit", "-m", "archive(android): publish exact 4.1.0 APK member and JADX research tree", capture=False)
    head = git(repo, "rev-parse", "HEAD")
    print(f"Local commit: {head}")
    if args.push:
        git(repo, "push", "origin", "4.1.0", capture=False)
        remote = git(repo, "ls-remote", "origin", "refs/heads/4.1.0").split()[0]
        if head != remote:
            raise RuntimeError(f"remote HEAD did not match local commit: local {head} remote {remote}")
        print(f"Verified remote 4.1.0 HEAD: {remote}")
    else:
        print("NOT pushed. Run with --push when ready to publish third-party contents publicly.")


if __name__ == "__main__":
    main()
