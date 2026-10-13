#!/usr/bin/env python3
"""Original HOME 4.1.0 native Item8 selector->value reconstruction.

These 25 getter selections exactly match the original ELF 26-case jump table,
and all source offsets/widths are independently opcode-verified. Selector 0 is
the logical uint32 ItemID stored in the wrapper at +0x08, not the raw record.

No Switch runtime flag nor storage write; inspect only original item.dat.
Business names tagged pkNX are cross-references, not recovered Nintendo names.
"""
from __future__ import annotations
import struct
from home41_native_item_getter import native_item_record

SELECTOR_NATIVE_TABLE_RVA = "0x657FCC"
SELECTOR_DISPATCH_RVA = "0x4FD0B8"
NATIVE_ELF_SHA = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
# Exact 26-way branch destinations established by original ELF 0x657FCC bytes.
# Row tuple: selector, native getter label (pkNX or raw), function RVA,
#            uint8 offset in 48-byte record, read bits, signed interpretation.
ROUTES = (
    (1, "price_pkNX", 0x4FD108, 0, 32, False),
    (2, "watts_price_pkNX", 0x4FD114, 4, 32, False),
    (3, "alternate_price_pkNX", 0x4FD120, 8, 32, False),
    (4, "signed_sprite_pkNX", 0x4FD12C, 26, 16, True),
    (5, "misc_0c_raw", 0x4FD138, 12, 8, False),
    (6, "misc_0d_raw", 0x4FD144, 13, 8, False),
    (7, "misc_0e_raw", 0x4FD150, 14, 8, False),
    (8, "flag10_bit12", 0x4FD15C, 16, 16, False),
    (9, "misc_12_raw", 0x4FD16C, 18, 8, False),
    (10, "misc_0f_raw", 0x4FD178, 15, 8, False),
    (11, "flags_10_low5", 0x4FD184, 16, 16, False),
    (12, "flags_10_bit5", 0x4FD194, 16, 16, False),
    (13, "flags_10_bit6", 0x4FD1A4, 16, 16, False),
    (14, "pouch_low4_pkNX", 0x4FD1B4, 17, 8, False),
    (15, "effect_field_pkNX", 0x4FD1C4, 19, 8, False),
    (16, "misc_14_raw", 0x4FD1D0, 20, 8, False),
    (17, "can_use_on_pokemon_pkNX", 0x4FD1DC, 21, 8, False),
    (18, "misc_16_raw", 0x4FD1E8, 22, 8, False),
    (19, "flags_17_low4", 0x4FD1F4, 23, 8, False),
    (20, "flags_17_high4", 0x4FD204, 23, 8, False),
    (21, "misc_18_raw", 0x4FD214, 24, 8, False),
    (22, "group_type_pkNX", 0x4FD220, 28, 8, False),
    (23, "group_index_pkNX", 0x4FD22C, 29, 8, False),
    (24, "flags_10_bit7", 0x4FD238, 16, 16, False),
    (25, "flags_10_bit13", 0x4FD248, 16, 16, False),
)


def _native_value(raw: bytes, label: str, offset: int, bits: int, signed: bool) -> int:
    val=int.from_bytes(raw[offset:offset+bits//8], "little", signed=signed)
    if label.startswith("flag10_bit") or label.startswith("flags_10_bit"):
        n=int(label.split("bit")[-1])
        return (val>>n)&1
    if label == "flags_10_low5":
        return val&0x1F
    if label in ("pouch_low4_pkNX","flags_17_low4"):
        return val&0x0F
    if label == "flags_17_high4":
        return val>>4
    return val


def decode_item_native_properties(blob: bytes) -> dict:
    """Return all 1,829 logical item IDs × 26 verified native selectors."""
    if len(blob)!=61092 or len(ROUTES)!=25:
        raise ValueError("wrong HOME 4.1.0 Item8 resource or native selector matrix")
    logical_count,index_capacity,record_count=struct.unpack_from("<HHH",blob)
    start=struct.unpack_from("<I",blob,0x40)[0]
    if (logical_count,index_capacity,record_count,start)!=(1829,1832,1166,5124):
        raise ValueError("source geometry unsupported by ELF proof")
    if tuple(x[0] for x in ROUTES)!=tuple(range(1,26)):
        raise ValueError("selector ordering changed unexpectedly")
    # Export BOTH selector number and externally cross-checked field name.
    keys=["item_id","record_index","source_offset","native_s00_item_id_u32"]
    keys += [f"native_s{i:02d}_{label}" for i,label,*_ in ROUTES]
    rows=[]
    for item_id in range(logical_count):
        rec=native_item_record(blob,item_id)
        result={
            "item_id":item_id, "record_index":rec.record_index_u16,
            "source_offset":rec.data_offset, "native_s00_item_id_u32":item_id,
        }
        for i,label,pc,off,bits,signed in ROUTES:
            result[f"native_s{i:02d}_{label}"] = _native_value(rec.record_bytes,label,off,bits,signed)
        if set(result)!=set(keys):
            raise ValueError(f"Native property output mismatch at ItemID={item_id}")
        rows.append(result)
    return {
        "format":"HOME 4.1.0 original native item selector value matrix",
        "elf_sha256":NATIVE_ELF_SHA,
        "native_dispatch_rva":SELECTOR_DISPATCH_RVA,
        "native_branch_table_rva":SELECTOR_NATIVE_TABLE_RVA,
        "exact_route_proof":"derived/4.1.0/native_item_topics/p6_item_property_selector_routes.json",
        "exact_opcode_proof":"derived/4.1.0/native_item_topics/p6_item_native_field_getters.json",
        "selector_count":26,
        "logical_item_count":logical_count,
        "column_names":keys,
        "business_semantics_caveat":"Raw values and native selectors verified; pkNX labels are cross-referenced; effect behavior has not been traced.",
        "rows":rows,
    }
