#!/usr/bin/env python3
"""Reproducible read-only value distributions for HOME 4.1.0 item.dat.

Purpose: prioritize which 48-byte record offsets deserve ELF consumer tracing.
No business names are assigned from statistical patterns alone.
"""
from __future__ import annotations
from collections import Counter
import argparse
import csv
import hashlib
import json
import struct
from pathlib import Path

RECORD_OFFSET = 5124
RECORD_BYTES = 48
RECORD_COUNT = 1166


def item_profile(data: bytes):
    if len(data) != RECORD_OFFSET + RECORD_BYTES * RECORD_COUNT:
        raise ValueError("unverified item.dat dimensions")
    if struct.unpack_from("<H", data, 4)[0] != RECORD_COUNT:
        raise ValueError("item.dat record-count header mismatch")
    out = []
    for width in (1, 2, 4):
        code = {1: "B", 2: "H", 4: "I"}[width]
        for offset in range(0, RECORD_BYTES, width):
            values = [struct.unpack_from("<" + code, data,
                      RECORD_OFFSET + i * RECORD_BYTES + offset)[0]
                      for i in range(RECORD_COUNT)]
            counts = Counter(values)
            zero = counts.get(0, 0)
            frequent = sorted(counts.items(), key=lambda kv: (-kv[1], kv[0]))[:8]
            row = {"byte_offset": offset, "width": width,
                   "distinct_values": len(counts),
                   "zero_count": zero,
                   "zero_percent": round(100 * zero / RECORD_COUNT, 2),
                   "min_raw_u": min(values),
                   "max_raw_u": max(values),
                   "top_8_raw_hex_count": ";".join(
                       f"{v:0{width*2}X}:{n}" for v, n in frequent)}
            if width == 4:
                nonzero = [v for v in values if v]
                candidates = []
                for v in nonzero:
                    f = struct.unpack("<f", struct.pack("<I", v))[0]
                    if 0.000001 <= abs(f) <= 100000:
                        candidates.append(f)
                row["possible_f32_share_of_nonzero"] = round(
                    len(candidates) / len(nonzero), 4) if nonzero else 0.0
            else:
                row["possible_f32_share_of_nonzero"] = ""
            out.append(row)
    return {
        "source_sha256": hashlib.sha256(data).hexdigest(),
        "records": RECORD_COUNT, "record_bytes": RECORD_BYTES,
        "certainty": "raw value distributions only; floats and business names are NOT confirmed",
        "fields": out,
    }


def topics_probe(data: bytes):
    """Report only observable u32 patterns, not made-up record boundaries."""
    if len(data) != 216336 or len(data) % 4:
        raise ValueError("unexpected topics_data.bin size/alignment")
    values = list(struct.unpack("<" + "I" * (len(data) // 4), data))
    tally = Counter(values)
    runs = []
    i = 0
    while i < len(values):
        j = i + 1
        while j < len(values) and values[j] == values[i]:
            j += 1
        if values[i] == 3 and j - i >= 4:
            runs.append({"file_byte_offset": i * 4, "length_u32": j - i})
        i = j
    gap_hist = Counter(
        runs[i]["file_byte_offset"] - runs[i - 1]["file_byte_offset"]
        for i in range(1, len(runs))
    )
    return {
        "source_sha256": hashlib.sha256(data).hexdigest(),
        "source_bytes": len(data), "u32_count": len(values),
        "zero_u32_count": tally[0], "three_u32_count": tally[3],
        "first_32_u32": values[:32],
        "three_runs_at_least_four": len(runs),
        "first_25_three_runs": runs[:25],
        "top_25_gap_frequency": [
            {"gap": k, "count": v} for k, v in gap_hist.most_common(25)
        ],
        "certainty": "statistical u32 signatures only; variable record boundaries, floats and header still UNVERIFIED",
    }


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--item", type=Path, required=True)
    p.add_argument("--topics", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    args = p.parse_args()
    item = item_profile(args.item.read_bytes())
    topics = topics_probe(args.topics.read_bytes())
    args.out.mkdir(parents=True, exist_ok=True)
    fields = list(item["fields"][0])
    with (args.out / "item_48byte_field_distributions.csv").open(
            "w", encoding="utf-8-sig", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=fields)
        writer.writeheader()
        writer.writerows(item["fields"])
    (args.out / "item_field_metadata.json").write_text(
        json.dumps({k: v for k, v in item.items() if k != "fields"},
                   indent=2) + "\n", encoding="utf-8")
    (args.out / "topics_data_structure_probe.json").write_text(
        json.dumps(topics, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"item_fields": len(item["fields"]),
                      "item_source_sha256": item["source_sha256"],
                      "topics_sha256": topics["source_sha256"],
                      "topics_three_runs": topics["three_runs_at_least_four"],
                      "topics_gap_hypotheses_only": topics["top_25_gap_frequency"][:8]}))


if __name__ == "__main__":
    main()
