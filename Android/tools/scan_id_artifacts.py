#!/usr/bin/env python3
"""Bounded literal locator across locally generated text, without dumping credentials."""
import argparse
import csv
import re
from pathlib import Path

PATTERN = re.compile(
    r"(?i)ApiRequestAuthRegisterUser|ApiAuthRegisterUser|ApiRequestChampTransferAccount|"
    r"UDManager|UD_Basic|ResponseSupportId|/basic/utid|/pm/cid|/auth/register/user|"
    r"CreateEmptyNonce|SetBasic"
)
TEXT_EXTENSIONS = {".cs", ".java", ".xml", ".json", ".txt", ".smali", ".md"}
MAX_FILE = 8 * 1024 * 1024
MAX_ROWS = 10000


def scan(root):
    records = []
    for path in sorted(root.rglob("*")):
        if not path.is_file() or path.suffix.lower() not in TEXT_EXTENSIONS:
            continue
        if "reports" in path.relative_to(root).parts:
            continue
        if path.stat().st_size > MAX_FILE:
            continue
        with path.open("r", encoding="utf-8", errors="replace") as source:
            for number, line in enumerate(source, 1):
                match = PATTERN.search(line)
                if match:
                    # No line contents: may include live IDs or authentication material.
                    records.append((str(path.relative_to(root)), number, match.group(0)))
                    if len(records) >= MAX_ROWS:
                        return records
    return records


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    rows = scan(args.root)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    with args.out.open("w", newline="", encoding="utf-8") as stream:
        writer = csv.writer(stream)
        writer.writerow(["source_path", "line", "matched_symbol"])
        writer.writerows(rows)
    print(f"{len(rows)} symbolic matches; no source-line values were exported")


if __name__ == "__main__":
    main()
