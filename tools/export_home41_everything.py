#!/usr/bin/env python3
"""Single entrypoint for HOME Switch 4.1.0 RomFS -> JSON/CSV/PNG.

Exports to directories OUT/metadata, OUT/pml, OUT/png.
No source file modifications, network calls, or HOME/Switch save writes.
Python 3.9+, standard library only. Unknown BNTX codecs are reported as unsupported.
"""
from __future__ import annotations
import argparse
import json
import subprocess
import sys
from datetime import datetime, timezone
from pathlib import Path

TOOLS = Path(__file__).resolve().parent

def run_step(argv):
    cmd = [sys.executable, str(TOOLS / argv[0]), *[str(arg) for arg in argv[1:]]]
    proc = subprocess.run(cmd, check=False)
    return {"command": cmd, "exit_code": proc.returncode}

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", required=True, type=Path, help="4.1.0 <NCA>/1 (RomFS root)")
    parser.add_argument("--out", required=True, type=Path, help="outside the RomFS root")
    parser.add_argument("--extract-sarc", action="store_true", help="also write SARC raw members")
    parser.add_argument("--no-png", action="store_true", help="disable built-in BNTX->PNG pass")
    args = parser.parse_args()
    root, out = args.root.resolve(), args.out.resolve()
    if not root.is_dir() or out == root or root in out.parents:
        parser.error("--out must be outside the existing --root folder")
    (out / "metadata").mkdir(parents=True, exist_ok=True)
    steps = []
    c = ["export_home41_resources.py", "--root", root, "--out", out / "metadata",
         "--kind", "all", "--png", "off"]
    if args.extract_sarc:
        c.append("--extract")
    steps.append({"name": "readable_metadata", **run_step(c)})
    pml = root / "bin" / "pml"
    if pml.is_dir():
        steps.append({"name": "pml_record_csv", **run_step([
            "export_home41_pml_csv.py", "--root", pml, "--out", out / "pml"])})
    if not args.no_png:
        steps.append({"name": "bntx_png", **run_step([
            "home41_bntx_to_png.py", "--root", root, "--out", out / "png", "--archives"])})
    report = {
        "version": "4.1.0", "input_root": str(root),
        "output_root": str(out), "steps": steps,
        "metadata": "metadata/index.csv and metadata/summary.json",
        "pml": "pml/waza_fields.csv and pml/personal_fields.csv",
        "images": "png/texture_index.csv and png/summary.json",
        "limitations": [
            "FlatBuffers fields are untyped without an authoritative schema",
            "Location label index/hash is not a numeric MetLocation ID",
            "ASTC, BC7 and unsupported BNTX formats produce status entries, not fake PNGs",
            "BC5 output is a two-channel visualization, not complete shader-rendered colors",
            "Existing source files are never edited"
        ]
    }
    (out / "conversion_report.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print("Report:", out / "conversion_report.json")
    return int(any(step["exit_code"] != 0 for step in steps))

if __name__ == "__main__":
    raise SystemExit(main())
