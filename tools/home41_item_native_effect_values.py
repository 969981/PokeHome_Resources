#!/usr/bin/env python3
"""Native 4.1.0 Item8 effect property values: selector 26..70 read-only.

The original ELF controls the behavior by record[0x15]:
  0 or 2 -> raw one-byte value at record[0x1E] for selectors above 25;
  1      -> interpret 0x12-byte payload at record+0x1E using 45 Native readers;
  other  -> zero.

Static field table rows are byte/provenance checked against:
derived/4.1.0/native_item_topics/p6_item_extended_effect_routes.json.
Unknown bit and parameter *business meanings* deliberately stay unnamed.
"""
from __future__ import annotations
import struct
from home41_native_item_getter import native_item_record

NATIVE_ELF_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
NATIVE_EFFECT_TABLE="derived/4.1.0/native_item_topics/p6_item_extended_effect_routes.json"
# selector, getter RVA, byte offset relative to record+0x1E, read width,
# signed, operation ("identity", "mask", "extract", "shift"), arg, arg2.
# All 45 entries originate directly from original 4.1.0 ARM64 opcodes.
EFFECT_ROUTES=(
    (26, 0x4FD294, 0, 4, False, "mask", 1, 0),
    (27, 0x4FD2A8, 0, 4, False, "extract", 1, 1),
    (28, 0x4FD2B4, 0, 4, False, "extract", 2, 1),
    (29, 0x4FD2C0, 0, 4, False, "extract", 3, 1),
    (30, 0x4FD2CC, 0, 4, False, "extract", 4, 1),
    (31, 0x4FD2D8, 0, 4, False, "extract", 5, 1),
    (32, 0x4FD2E4, 0, 4, False, "extract", 6, 1),
    (33, 0x4FD2F0, 0, 4, False, "extract", 7, 1),
    (34, 0x4FD2FC, 0, 4, False, "extract", 8, 1),
    (35, 0x4FD308, 0, 4, False, "extract", 9, 1),
    (36, 0x4FD314, 0, 4, False, "extract", 10, 1),
    (37, 0x4FD320, 0, 4, False, "extract", 11, 1),
    (38, 0x4FD32C, 0, 4, False, "extract", 12, 4),
    (39, 0x4FD338, 2, 2, False, "mask", 15, 0),
    (40, 0x4FD344, 0, 4, False, "extract", 20, 4),
    (41, 0x4FD350, 3, 1, False, "mask", 15, 0),
    (42, 0x4FD35C, 0, 4, False, "shift", 28, 0),
    (43, 0x4FD368, 4, 2, False, "mask", 15, 0),
    (44, 0x4FD374, 4, 2, False, "extract", 4, 2),
    (45, 0x4FD380, 4, 2, False, "extract", 6, 1),
    (46, 0x4FD38C, 4, 2, False, "extract", 7, 1),
    (47, 0x4FD398, 5, 2, False, "mask", 1, 0),
    (48, 0x4FD3A4, 4, 2, False, "extract", 9, 1),
    (49, 0x4FD3B0, 4, 2, False, "extract", 10, 1),
    (50, 0x4FD3BC, 4, 2, False, "extract", 11, 1),
    (51, 0x4FD3C8, 4, 2, False, "extract", 12, 1),
    (52, 0x4FD3D4, 4, 2, False, "extract", 13, 1),
    (53, 0x4FD3E0, 4, 2, False, "extract", 14, 1),
    (54, 0x4FD3EC, 4, 2, False, "shift", 15, 0),
    (55, 0x4FD3F8, 6, 1, False, "mask", 1, 0),
    (56, 0x4FD404, 6, 1, False, "extract", 1, 1),
    (57, 0x4FD410, 6, 1, False, "extract", 2, 1),
    (58, 0x4FD41C, 6, 1, False, "extract", 3, 1),
    (59, 0x4FD428, 6, 1, False, "extract", 4, 1),
    (60, 0x4FD434, 7, 1, True, "identity", 0, 0),
    (61, 0x4FD43C, 8, 1, True, "identity", 0, 0),
    (62, 0x4FD444, 9, 1, True, "identity", 0, 0),
    (63, 0x4FD44C, 10, 1, True, "identity", 0, 0),
    (64, 0x4FD454, 11, 1, True, "identity", 0, 0),
    (65, 0x4FD45C, 12, 1, True, "identity", 0, 0),
    (66, 0x4FD464, 13, 1, False, "identity", 0, 0),
    (67, 0x4FD46C, 14, 1, False, "identity", 0, 0),
    (68, 0x4FD474, 15, 1, True, "identity", 0, 0),
    (69, 0x4FD47C, 16, 1, True, "identity", 0, 0),
    (70, 0x4FD484, 17, 1, True, "identity", 0, 0),
)


def _apply_effect(payload: bytes, selector: tuple) -> int:
    index,rva,off,width,signed,mode,arg,arg2=selector
    raw=int.from_bytes(payload[off:off+width],"little",signed=signed)
    if mode=="mask":
        return raw & arg
    if mode=="extract":
        return (raw>>arg)&((1<<arg2)-1)
    if mode=="shift":
        return raw>>arg
    if mode=="identity":
        return raw
    raise ValueError(f"unexpected original ELF Native operation at selector {index}")


def decode_native_item_effects(blob: bytes) -> dict:
    """Project 45 native effect properties for all 1829 logical Item8 IDs."""
    if len(blob)!=61092 or len(EFFECT_ROUTES)!=45:
        raise ValueError("unexpected HOME Item8 resource or native routes")
    num,capacity,record_count=struct.unpack_from("<HHH",blob)
    offset=struct.unpack_from("<I",blob,0x40)[0]
    if (num,capacity,record_count,offset)!=(1829,1832,1166,5124):
        raise ValueError("HOME original 4.1.0 Item8 header mismatch")
    if tuple(x[0] for x in EFFECT_ROUTES)!=tuple(range(26,71)):
        raise ValueError("Native effect selectors not continuous")
    cols=["item_id","record_index","source_offset",
          "native_effect_variant_at_0x15","effect_payload_hex",
          *[f"native_effect_s{i:02d}_raw" for i in range(26,71)]]
    rows=[];case_counts={}
    for item_id in range(num):
        rec=native_item_record(blob,item_id)
        raw=rec.record_bytes
        variant=raw[0x15]
        payload=raw[0x1E:0x30]
        case_counts[variant]=case_counts.get(variant,0)+1
        result={"item_id":item_id,"record_index":rec.record_index_u16,
                "source_offset":rec.data_offset,
                "native_effect_variant_at_0x15":variant,
                "effect_payload_hex":payload.hex()}
        for spec in EFFECT_ROUTES:
            selector=spec[0]
            if variant==1:
                value=_apply_effect(payload,spec)
            elif variant in (0,2):
                value=payload[0]
            else:
                value=0
            result[f"native_effect_s{selector:02d}_raw"]=value
        rows.append(result)
    return {
        "format":"HOME 4.1.0 Native Item8 effect selector 26..70 values",
        "elf_sha256":NATIVE_ELF_SHA,
        "source_effect_variant_record_offset":0x15,
        "payload_record_offset":0x1E,
        "payload_bytes":0x12,
        "selector_count":45,
        "variant_counts_by_logical_item":dict(sorted(case_counts.items())),
        "logical_items":len(rows),
        "caveat":"48-byte item record offsets and field bit extraction are Native ELF-verified; effects on gameplay are unproven.",
        "column_names":cols,
        "rows":rows,
    }
