#!/usr/bin/env python3
"""Rebuild HOME 4.1.0 item catalogs from original, read-only Switch RomFS.

Runs the proven PokeHome_Resources decoder for 13 source .dat files,
verifies their manifest and original item.dat bytes, then builds both CSVs.
Python 3.10+; standard library only. Does not modify source RomFS.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import subprocess
import sys
from pathlib import Path

from build_home41_item_catalog import build
from home41_romfs_core import ahtb_labels, dat_lines

NCA = "57b83ea8c0af21ef26e2519b9580b373_NCA"
RAW_ITEM_SHA256 = "4f5edd3f0ca8ed0c60ceb91fda0c5385f20ec986a66dcf4aa68d1c145903a1a2"
ORIGINAL_ELF_SHA256 = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
LOCALES = (
    "Simp_Chinese", "Trad_Chinese", "English", "JPN", "JPN_KANJI",
    "Korean", "German", "French", "Italian", "Spanish", "LATAM",
)
RELATIVE_SOURCES = (
    "bin/pml/item/item_hash_to_index.dat",
    "bin/pml/item/item.dat",
    *(f"bin/message/{locale}/megaturtle/itemname.dat" for locale in LOCALES),
)


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(block)
    return h.hexdigest()


def validate_originals(root: Path) -> None:
    item = root / NCA / "1/bin/pml/item/item.dat"
    if not item.is_file():
        raise FileNotFoundError(f"Original RomFS item.dat absent: {item}")
    if sha256(item) != RAW_ITEM_SHA256:
        raise ValueError("Original item.dat SHA-256 differs from known HOME 4.1.0")
    elf = root / NCA / "0/main.elf"
    if elf.is_file() and sha256(elf) != ORIGINAL_ELF_SHA256:
        raise ValueError("Present main.elf is not the verified HOME 4.1.0 ELF")
    for relative in RELATIVE_SOURCES:
        source = root / NCA / "1" / relative
        if not source.is_file():
            raise FileNotFoundError(f"RomFS input missing: {source}")
        if relative.startswith("bin/message/"):
            twin = source.with_suffix(".tbl")
            if not twin.is_file():
                raise FileNotFoundError(f"Message label table missing: {twin}")


def decode_sources(root: Path) -> None:
    tool = root / "tools/unpack_home41.py"
    if not tool.is_file():
        raise FileNotFoundError(f"PokeHome decoder absent: {tool}")
    for index, relative in enumerate(RELATIVE_SOURCES, start=1):
        print(f"[decode {index}/{len(RELATIVE_SOURCES)}] {relative}", flush=True)
        subprocess.run(
            (sys.executable, str(tool), "--root", str(root),
             "--out", "Unpack", "--file", relative),
            check=True,
        )


def verify_decoded_manifest(root: Path) -> None:
    manifest = root / "Unpack/_meta/manifest.json"
    if not manifest.is_file():
        raise FileNotFoundError(f"No decoder manifest: {manifest}")
    payload = json.loads(manifest.read_text(encoding="utf-8"))
    rows = payload["files"] if isinstance(payload, dict) else payload
    lookup = {record["source_path"]: record for record in rows}
    for relative in RELATIVE_SOURCES:
        key = f"{NCA}/1/{relative}"
        item = lookup.get(key)
        if item is None or item.get("status") in ("failed", "not_run", None):
            raise ValueError(f"Decoder manifest has no successful entry: {key}")
        if sha256(root / key) != item["source_sha256"]:
            raise ValueError(f"Decoder manifest source hash mismatch: {key}")
        if not item.get("outputs"):
            raise ValueError(f"Decoder produced no output: {key}")
        for output in item["outputs"]:
            file = root / "Unpack" / output["path"]
            if not file.is_file() or sha256(file) != output["sha256"]:
                raise ValueError(f"Decoder output hash mismatch: {file}")



def validate_message_pairs(root: Path) -> None:
    """Always independently verify raw .tbl/.dat pairs, including --skip-unpack.

    The decoder manifest hashes .dat itself. Its paired .tbl can change
    independently, so check label/hash/text against the actual raw files.
    """
    for locale in LOCALES:
        relative = Path("bin/message") / locale / "megaturtle/itemname.dat"
        raw_dir = root / NCA / "1"
        labels = ahtb_labels((raw_dir / relative).with_suffix(".tbl").read_bytes())
        lines = dat_lines((raw_dir / relative).read_bytes())
        if len(labels) != 2685 or len(lines) != 2685:
            raise ValueError(f"Source itemname row count differs: {locale}")
        target = root / "Unpack" / NCA / "1" / relative.with_suffix(".csv")
        with target.open("r", encoding="utf-8-sig", newline="") as stream:
            decoded = list(csv.DictReader(stream))
        if len(decoded) != len(labels):
            raise ValueError(f"Decoded itemname row count mismatch: {locale}")
        for idx, ((label, name_hash), raw_line, decoded_line) in enumerate(
            zip(labels, lines, decoded)
        ):
            if (decoded_line["index"] != str(idx)
                    or decoded_line["label"] != label
                    or decoded_line["hash_fnv64"] != f"{name_hash:016X}"
                    or decoded_line["text"] != raw_line["text"]
                    or decoded_line["flags"] != str(raw_line["flags"])
                    or decoded_line["source_offset"] != str(raw_line["offset"])):
                raise ValueError(f"Raw DAT/TBL differs from generated CSV: {locale} ItemID {idx}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source-root", type=Path, default=Path("."),
                        help="PokeHome_Resources repository root on branch 4.1.0")
    parser.add_argument("--out-dir", type=Path, default=None,
                        help="Target directory for the two completed CSVs and JSON report")
    parser.add_argument("--skip-unpack", action="store_true",
                        help="Reuse existing decoded Unpack/ results; still verify manifest")
    args = parser.parse_args()
    root = args.source_root.resolve(strict=True)
    validate_originals(root)
    if not args.skip_unpack:
        decode_sources(root)
    verify_decoded_manifest(root)
    validate_message_pairs(root)
    target = args.out_dir.resolve() if args.out_dir is not None else root / "derived/4.1.0/item_catalog"
    if target == root / NCA / "1" or (root / NCA / "1") in target.parents:
        raise ValueError("Output may not overlap original RomFS input")
    summary = build(root, target)
    print(json.dumps({"status": "PASS", **summary}, indent=2, ensure_ascii=False))


if __name__ == "__main__":
    main()
