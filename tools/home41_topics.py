#!/usr/bin/env python3
"""HOME Switch 4.1.0 mtt_pokedex/topics_data.bin structural decoder.

The original 216336-byte file has seven equal-sized blocks, 99 fixed slots
in each block.  All 79 trailing slots per block are the SAME byte-exact
312-byte placeholder; first 20 slots in each group are distinct records.
Field names remain raw, pending original ELF data-consumer analysis.
"""
from __future__ import annotations
import hashlib
import struct

BLOCKS = 7
BLOCK_HEADER_SIZE = 16
BLOCK_SLOTS = 99
SLOT_SIZE = 312
FILE_HEADER_SIZE = 8
GROUP_SIZE = BLOCK_HEADER_SIZE + BLOCK_SLOTS * SLOT_SIZE
FILE_BYTES = FILE_HEADER_SIZE + BLOCKS * GROUP_SIZE


def decode_pokedex_topics(data: bytes) -> dict:
    if len(data) != FILE_BYTES:
        raise ValueError("topics_data.bin record geometry does not span original file")
    count, reserved = struct.unpack_from("<II", data, 0)
    if (count, reserved) != (BLOCKS, 0):
        raise ValueError("unexpected topic group count or reserved header")
    sentinel_off = FILE_HEADER_SIZE + BLOCK_HEADER_SIZE + (BLOCK_SLOTS - 1) * SLOT_SIZE
    sentinel = data[sentinel_off:sentinel_off + SLOT_SIZE]
    groups, slots = [], []
    for group in range(count):
        block_off = FILE_HEADER_SIZE + group * GROUP_SIZE
        fields = list(struct.unpack_from("<4I", data, block_off))
        group_active, group_placeholder = 0, 0
        for idx in range(BLOCK_SLOTS):
            off = block_off + BLOCK_HEADER_SIZE + idx * SLOT_SIZE
            raw = data[off:off + SLOT_SIZE]
            is_placeholder = raw == sentinel
            if idx < 20 and is_placeholder:
                raise ValueError(f"topic group={group} slot={idx} unexpectedly placeholder")
            if idx >= 20 and not is_placeholder:
                raise ValueError(f"topic group={group} slot={idx} unexpectedly active")
            group_placeholder += int(is_placeholder)
            group_active += int(not is_placeholder)
            words = struct.unpack("<78I", raw)
            item = {"group_index": group, "slot_index": idx, "absolute_file_offset": off,
                    "is_shared_placeholder": is_placeholder}
            for j, val in enumerate(words):
                item[f"word_{j:02d}_raw_u32"] = val
            slots.append(item)
        groups.append({
            "group_index": group, "absolute_header_offset": block_off,
            "header_u32_raw": fields, "active_slots": group_active,
            "placeholder_slots": group_placeholder,
        })
    if len(slots) != BLOCKS * BLOCK_SLOTS:
        raise ValueError("unexpected topics_data.bin number of decoded slots")
    return {
        "format": "HOME 4.1.0 seven groups of 99 fixed 312-byte topic slots",
        "size_bytes": len(data), "group_count": BLOCKS,
        "group_stride_bytes": GROUP_SIZE, "group_header_bytes": BLOCK_HEADER_SIZE,
        "slot_stride_bytes": SLOT_SIZE, "slots_per_group": BLOCK_SLOTS,
        "decoded_slots": len(slots),
        "active_count": sum(not x["is_shared_placeholder"] for x in slots),
        "placeholder_count": sum(x["is_shared_placeholder"] for x in slots),
        "placeholder_sha256": hashlib.sha256(sentinel).hexdigest(),
        "placeholder_hex": sentinel.hex(),
        "groups": groups, "rows": slots,
        "certainty": "complete byte-exact 312-byte record partition, 7 group headers and shared placeholder verified; 78 inner words remain raw unsigned u32 and their gameplay semantics are unknown",
    }
