#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Verify HOME41 typed batch against the exact published Ghidra 12.2 C files.

This does NOT prove runtime behavior, C ABI calling convention, class ownership,
or server save semantics. It only prevents batch imports backed by missing,
wrong-version, or structurally inconsistent static evidence.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
from pathlib import Path

ELF_SHA = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
HEADER = (
    "rva", "label", "prototype", "status", "literal_evidence",
    "static_behavior", "unknowns",
)
DEFAULT_C_ROOT = (
    Path(__file__).resolve().parents[2]
    / "derived/4.1.0/Ghidra_12.2_Run_42763137320/annotation_v1/c_annotated"
)
DEFAULT_TSV = Path(__file__).with_name("home41_typed_batch01.tsv")


def proposed_arg_count(prototype: str, label: str) -> int:
    match = re.fullmatch(
        rf"\s*.+?\s+\**{re.escape(label)}\s*\(([^()]*)\)\s*", prototype
    )
    if not match:
        raise ValueError(f"Invalid or mismatched function prototype: {prototype}")
    arguments = match.group(1).strip()
    return 0 if arguments in ("", "void") else len(arguments.split(","))


def actual_arg_count(text: str, rva: int) -> int:
    symbol = f"FUN__text__{rva + 0x100000:08x}("
    start = text.find(symbol)
    if start == -1:
        raise ValueError(f"Missing original Ghidra C symbol {symbol}")
    params_start = start + len(symbol)
    params_end = text.find(")", params_start)
    if params_end < 0:
        raise ValueError("Unterminated Ghidra function parameter list")
    params = text[params_start:params_end]
    return len(set(re.findall(r"\bparam_[0-9]+\b", params)))


def verify(tsv: Path, c_root: Path, expect_count: int = 14) -> dict:
    failures = []
    checks = []
    seen: set[int] = set()
    raw = tsv.read_bytes()
    with tsv.open(encoding="utf-8", newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        if tuple(reader.fieldnames or ()) != HEADER:
            raise ValueError(f"Unexpected signature TSV columns: {reader.fieldnames}")
        for line_no, row in enumerate(reader, start=2):
            try:
                rva = int(row["rva"], 16)
                if rva in seen:
                    raise ValueError("Duplicate function RVA")
                seen.add(rva)
                if row["status"] != "STATIC_ABI_PARTIAL":
                    raise ValueError("Unapproved evidence status")
                if not all(row[k].strip() for k in HEADER):
                    raise ValueError("Empty field")
                actual_name = f"_text__{rva + 0x100000:08x}.c"
                source = c_root / actual_name
                content = source.read_text(encoding="utf-8")
                if (
                    f"Ghidra function entry: .text::{rva + 0x100000:08x}"
                    not in content
                    or ELF_SHA not in content
                    or "Recovered by Ghidra 12.2" not in content
                ):
                    raise ValueError("Wrong version, Ghidra origin or C entrypoint")
                if row["literal_evidence"] not in content:
                    raise ValueError("Literal evidence absent from recovered C")
                want = proposed_arg_count(row["prototype"], row["label"])
                got = actual_arg_count(content, rva)
                if want != got:
                    raise ValueError(
                        f"Parameter count mismatch: proposed={want}, Ghidra={got}"
                    )
                # Return width is validated only for unambiguous primitive returns.
                if row["prototype"].startswith("bool ") and not re.search(
                    rf"\bbool\s+FUN__text__{rva + 0x100000:08x}\s*\(", content
                ):
                    raise ValueError("Bool return not supported by Ghidra C")
                # undefined4 establishes return width, not signedness semantics.
                if row["prototype"].startswith("unsigned int ") and not re.search(
                    rf"\b(?:uint|undefined4)\s+FUN__text__{rva + 0x100000:08x}\s*\(", content
                ):
                    raise ValueError("4-byte return width not supported by Ghidra C")
                checks.append({
                    "rva": row["rva"],
                    "prototype": row["prototype"],
                    "source": str(source),
                    "source_sha256": hashlib.sha256(content.encode("utf-8")).hexdigest(),
                    "parameters": got,
                    "status": "STATIC_C_MATCH",
                })
            except (ValueError, KeyError, OSError, TypeError) as exc:
                failures.append(f"TSV line {line_no}: {exc}")
    if len(checks) != expect_count:
        failures.append(f"Expected {expect_count} valid functions, found {len(checks)}")
    return {
        "source_elf_sha256": ELF_SHA,
        "tsv_sha256": hashlib.sha256(raw).hexdigest(),
        "validated": len(checks),
        "failed": len(failures),
        "status": "PASS_STATIC_ONLY" if not failures else "FAIL",
        "runtime_equivalence": "NOT_TESTED",
        "native_ghidra_project_import": "NOT_EXECUTED_BY_THIS_SCRIPT",
        "errors": failures,
        "functions": checks,
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--tsv", type=Path, default=DEFAULT_TSV)
    parser.add_argument("--c-root", type=Path, default=DEFAULT_C_ROOT)
    parser.add_argument("--expect-count", type=int, default=14)
    parser.add_argument("--json-out", type=Path)
    args = parser.parse_args()
    report = verify(args.tsv, args.c_root, args.expect_count)
    if args.json_out:
        args.json_out.write_text(
            json.dumps(report, ensure_ascii=False, indent=2) + "\n",
            encoding="utf-8",
        )
    print(json.dumps(
        {k: report[k] for k in (
            "status", "validated", "failed", "tsv_sha256",
            "runtime_equivalence", "errors"
        )}, ensure_ascii=False, indent=2
    ))
    return 0 if not report["errors"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
