#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Rebuild the HOME 4.1.0 Switch main NSO as main.elf with shuffle2/nx2elf.

Default is VERIFY (non-mutating). --mode write is required to replace main.elf.
No Nintendo executable or upstream third-party source is bundled in this tool.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
import shutil
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

NCA_DIR = "57b83ea8c0af21ef26e2519b9580b373_NCA/0"
# Both Git blob identities are already present on the 4.1.0 branch.
EXPECTED_MAIN_GIT_BLOB = "f55030b775a192e6e0c2fa93c5538dd1ef3187a5"
BASELINE_ELF_GIT_BLOB = "1dfe5d1f94732750a3e6a70b3baa833e4b9c9b28"
BASELINE_ELF_SHA256 = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
BASELINE_ELF_BYTES = 8261352
BASELINE_BUILD_ID = "325195bcb7366b15bae55171070dc4b8d7f33c0d"
UPSTREAM_REPO = "https://github.com/shuffle2/nx2elf"
UPSTREAM_COMMIT = "a1760ba54e2aefb41444933f53b90e6e8b05c399"
CHUNK = 1024 * 1024


def digests(file: Path) -> dict[str, object]:
    size = file.stat().st_size
    sha256, blob = hashlib.sha256(), hashlib.sha1()
    blob.update(f"blob {size}\0".encode("ascii"))
    with file.open("rb") as stream:
        while block := stream.read(CHUNK):
            sha256.update(block)
            blob.update(block)
    return {"bytes": size, "sha256": sha256.hexdigest(), "git_blob_sha1": blob.hexdigest()}


def validate_nso(file: Path) -> None:
    with file.open("rb") as stream:
        magic = stream.read(4)
    if magic != b"NSO0":
        raise ValueError(f"{file}: expected an NSO main (NSO0), got {magic!r}")


def validate_elf(file: Path) -> dict[str, object]:
    with file.open("rb") as stream:
        header = stream.read(64)
    if len(header) < 64 or header[:4] != b"\x7fELF":
        raise ValueError(f"{file}: not an ELF file")
    if header[4:7] != bytes((2, 1, 1)):
        raise ValueError(f"{file}: expected ELF64, little-endian, EV_CURRENT")
    e_type, e_machine, e_version = struct.unpack_from("<HHI", header, 16)
    if e_machine != 183 or e_version != 1:
        raise ValueError(f"{file}: expected AArch64 machine=183, ELF version=1")
    phnum = struct.unpack_from("<H", header, 56)[0]
    shnum = struct.unpack_from("<H", header, 60)[0]
    if phnum == 0 or shnum == 0:
        raise ValueError(f"{file}: missing ELF program or section headers")
    return {"elf_class": "ELF64", "endianness": "LE", "machine": "AArch64",
            "e_type": e_type, "program_headers": phnum, "section_headers": shnum}


def find_tool(cli: str | None, source: Path) -> str:
    candidates = [cli] if cli else []
    if not candidates:
        candidates += [os.environ.get("NX2ELF"), shutil.which("nx2elf")]
        if os.name == "nt":
            candidates.append(str(source.with_name("nx2elf.exe")))
    for item in candidates:
        if item and (Path(item).is_file() or shutil.which(item)):
            return str(item)
    raise FileNotFoundError(
        "nx2elf executable not found. Build shuffle2/nx2elf at commit "
        + UPSTREAM_COMMIT + " using cmake, then pass --nx2elf PATH."
    )


def run(args: argparse.Namespace) -> int:
    repo = Path(__file__).resolve().parents[1]
    source = args.source or (repo / NCA_DIR / "main")
    target = args.target or (repo / NCA_DIR / "main.elf")
    source, target = source.resolve(), target.resolve()
    report: dict[str, object] = {
        "tool": "shuffle2/nx2elf", "upstream": UPSTREAM_REPO,
        "pinned_commit": UPSTREAM_COMMIT, "mode": args.mode,
        "expected_main_git_blob_sha1": EXPECTED_MAIN_GIT_BLOB,
        "baseline_main_elf_sha256": BASELINE_ELF_SHA256,
    }
    if args.mode == "inspect":
        if not target.is_file():
            raise FileNotFoundError(target)
        report["elf"] = digests(target)
        report["elf_header"] = validate_elf(target)
        report["baseline_identical"] = (
            report["elf"]["git_blob_sha1"] == BASELINE_ELF_GIT_BLOB
            and report["elf"]["sha256"] == BASELINE_ELF_SHA256
            and report["elf"]["bytes"] == BASELINE_ELF_BYTES
        )
        report["status"] = "existing_elf_inspected"
        return finish(report, args.report, 0)

    if not source.is_file():
        raise FileNotFoundError(source)
    if source == target:
        raise ValueError("NSO source and ELF output must be different paths")
    validate_nso(source)
    report["source"] = digests(source)
    if report["source"]["git_blob_sha1"] != EXPECTED_MAIN_GIT_BLOB and not args.allow_different_main:
        raise ValueError(
            "main NSO differs from the pinned HOME 4.1.0 Git blob. "
            "Use --allow-different-main only after independently checking the version."
        )
    tool = find_tool(args.nx2elf, source)
    # A temporary output ensures a converter failure cannot corrupt the committed ELF.
    directory = target.parent if args.mode == "write" else None
    if directory:
        directory.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="home41-nx2elf-", dir=directory) as workspace:
        generated = Path(workspace) / "main.elf"
        command = [tool, str(source), "--export-elf", str(generated)]
        subprocess.run(command, check=True)
        if not generated.is_file():
            raise RuntimeError("nx2elf exited successfully but did not create main.elf")
        report["generated"] = digests(generated)
        report["generated_header"] = validate_elf(generated)
        if target.is_file():
            report["existing"] = digests(target)
            validate_elf(target)
            identical = report["generated"]["sha256"] == report["existing"]["sha256"]
        else:
            report["existing"] = None
            identical = False
        report["identical_to_tracked_elf"] = identical
        report["identical_to_known_baseline"] = (
            report["generated"]["sha256"] == BASELINE_ELF_SHA256
            and report["generated"]["bytes"] == BASELINE_ELF_BYTES
        )
        if args.artifact:
            artifact = args.artifact.resolve()
            artifact.parent.mkdir(parents=True, exist_ok=True)
            if artifact == source or artifact == target:
                raise ValueError("--artifact cannot overwrite source or tracked ELF")
            shutil.copyfile(generated, artifact)
            report["artifact"] = str(artifact)
        if args.mode == "write":
            if not identical:
                os.replace(generated, target)
            report["status"] = "unchanged" if identical else "updated_tracked_elf"
            return finish(report, args.report, 0)
        report["status"] = "identical" if identical else "ELF_DIFFERENT_FROM_TRACKED"
        return finish(report, args.report, 0 if identical else 2)


def finish(report: dict[str, object], file: Path | None, code: int) -> int:
    payload = json.dumps(report, indent=2, ensure_ascii=False, sort_keys=True) + "\n"
    print(payload)
    if file:
        file = file.resolve()
        file.parent.mkdir(parents=True, exist_ok=True)
        file.write_text(payload, encoding="utf-8")
    return code


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--mode", choices=("verify", "write", "inspect"), default="verify",
                        help="verify=compare only (default); write=atomic replace; inspect=check existing ELF")
    parser.add_argument("--source", type=Path, help="path to HOME 4.1.0 extracted main NSO")
    parser.add_argument("--target", type=Path, help="destination/committed main.elf")
    parser.add_argument("--nx2elf", help="path to locally built shuffle2/nx2elf executable")
    parser.add_argument("--artifact", type=Path, help="optional generated ELF copy (not the committed path)")
    parser.add_argument("--report", type=Path, help="optional JSON validation report path")
    parser.add_argument("--allow-different-main", action="store_true",
                        help="override strict original HOME 4.1.0 source identity check")
    args = parser.parse_args()
    try:
        return run(args)
    except (OSError, ValueError, subprocess.CalledProcessError, RuntimeError) as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
