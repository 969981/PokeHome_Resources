#!/usr/bin/env python3
"""HOME 4.1.0 source-anchored native Item8 record and field semantics.

Record pointer and the per-field read *widths/offsets* are verified against
HOME 4.1.0 original main.elf; the business meanings are separately annotated
using pinned pkNX Item8.cs and real HOME ROMFS data. Do not conflate them.
"""
from __future__ import annotations
import hashlib
import struct
from home41_native_item_getter import native_item_record, EXPECTED_SHA_ELF

SCHEMA_SOURCE = ("https://github.com/kwsch/pkNX/blob/"
    "0936c08eb14ed08eb9042c008404b24bf60e088a/"
    "pkNX.Structures/Item/Item8.cs")
POUCH_NAMES = (
    "Medicine", "Balls", "Battle", "Berries", "Items",
    "TMs", "Treasures", "Ingredients", "Key"
)
# Original Native ELF Pouch selector14 at main+0x266D58 dispatches into
# these nine bag storage pointer members and capacities. NOT item catalog
# record counts, which appear separately at source header +0x20.
POUCH_NATIVE_OWNER_MEMBERS = (0x2650,0x2658,0x2660,0x2668,0x2670,0x2678,0x2680,0x2688,0x2690)
POUCH_NATIVE_STORAGE_SLOTS = (60,30,20,80,550,210,100,100,64)
POUCH_NATIVE_EVIDENCE = "derived/4.1.0/native_item_topics/p7_item_pouch_native_consumer.json"
SPRITE_NATIVE_EVIDENCE = "derived/4.1.0/native_item_topics/p7_item_sprite_native_sink.json"
GROUP_NAMES = {
    0: "None", 1: "Ball", 2: "Unknown_2",
    3: "Berries", 4: "TM", 5: "Gems"
}

def decode_item8_semantic(data: bytes) -> dict:
    if len(data) < 0x44 or len(data) != 61092:
        raise ValueError("HOME 4.1.0 item.dat expected 61092 source bytes")
    item_count, capacity, record_count = struct.unpack_from("<HHH", data, 0)
    record_start = struct.unpack_from("<I", data, 0x40)[0]
    if (item_count, capacity, record_count, record_start) != (1829, 1832, 1166, 5124):
        raise ValueError("item.dat header does not match verified Item8 layout")
    lookup_end = 0x44 + capacity * 2
    if lookup_end > record_start or record_start + record_count * 0x30 != len(data):
        raise ValueError("item.dat index and 48-byte record boundaries invalid")
    entries = struct.unpack_from("<" + "H" * capacity, data, 0x44)
    if any(n >= record_count for n in entries):
        raise ValueError("item.dat lookup escapes 48-byte record section")
    padding = list(entries[item_count:])
    if padding != [0, 0, 0]:
        raise ValueError("three unused alignment slots unexpectedly populated")
    # Independent per-unique-record census is verified against the original
    # catalogue header and the native 0x4FD854 accessor of its +0x20 array.
    catalog_counts = struct.unpack_from("<9H", data, 0x20)
    physical_by_pouch = [0] * 9
    for physical_record_index in range(record_count):
        raw_pos = record_start + physical_record_index*0x30
        cat = data[raw_pos+0x11] & 15
        if cat >= 9:
            raise ValueError(f"unrecognized Native pouch index in physical record {physical_record_index}")
        physical_by_pouch[cat] += 1
    if tuple(physical_by_pouch) != catalog_counts or sum(catalog_counts) != record_count:
        raise ValueError("item.dat header catalog category counts mismatch physical records")
    records = []
    for item_id, index in enumerate(entries[:item_count]):
        ofs = record_start + index * 0x30
        raw = data[ofs:ofs + 0x30]
        # Same pointer calculation as original main+0x4FD784.
        native = native_item_record(data, item_id)
        if native.data_offset != ofs or native.record_bytes != raw or native.record_index_u16 != index:
            raise ValueError(f"native Item8 record mismatch for ID {item_id}")
        price = struct.unpack_from("<I", raw, 0)[0]
        watts_native = struct.unpack_from("<I", raw, 4)[0]
        alternative_native = struct.unpack_from("<I", raw, 8)[0]
        watts = watts_native & 0xFFFF
        alternative = alternative_native & 0xFFFF
        # Historical pkNX-compatible u16 columns must never truncate data
        # without explicit validation. Current original blob has zero upper
        # halves for both u32 native getters.
        if watts_native != watts or alternative_native != alternative:
            raise ValueError(f"native 32-bit price exceeds pkNX u16 compatibility at ID {item_id}")
        pouch_raw = raw[0x11]
        pouch = pouch_raw & 15
        group_type = raw[0x1C]
        icon_i16 = struct.unpack_from("<h", raw, 0x1A)[0]
        if pouch >= len(POUCH_NAMES):
            raise ValueError(f"unknown native pouch index {pouch} for ItemID={item_id}")
        rec = {
            "item_id": item_id,
            "record_index": index,
            "shared_default_record": index == 0 and item_id != 0,
            "source_offset": ofs,
            "native_record_pointer_getter_rva": "0x4FD784",
            "price_u32": price,
            "price_watts_u16": watts,
            "price_alternate_u16": alternative,
            "price_watts_native_u32": watts_native,
            "price_alternate_native_u32": alternative_native,
            "native_price_rva": "0x4FD108",
            "native_price_watts_rva": "0x4FD114",
            "native_price_alternate_rva": "0x4FD120",
            "native_pouch_low4_rva": "0x4FD1B4",
            "native_effect_field_rva": "0x4FD1C4",
            "native_item_use_rva": "0x4FD1DC",
            "native_item_sprite_signed_rva": "0x4FD12C",
            "pouch_raw_u8": pouch_raw,
            "pouch_index": pouch,
            "native_pouch_business_consumer_rva": "0x266D30",
            "native_pouch_owner_member_offset": POUCH_NATIVE_OWNER_MEMBERS[pouch],
            "native_pouch_bag_slot_capacity": POUCH_NATIVE_STORAGE_SLOTS[pouch],
            "native_pouch_catalog_unique_records": catalog_counts[pouch],
            "pouch_name_pkNX": (POUCH_NAMES[pouch] if pouch < len(POUCH_NAMES)
                                else f"Unknown_{pouch}"),
            "effect_field_u8": raw[0x13],
            "can_use_on_pokemon": raw[0x15] == 1,
            "can_use_on_pokemon_raw_u8": raw[0x15],
            "item_sprite_u16": struct.unpack_from("<H", raw, 0x1A)[0],
            "item_sprite_native_i16": icon_i16,
            "native_icon_resource_key": (f"item_{icon_i16:04d}^o" if icon_i16 >= 0 else "item_dummy^o"),
            "native_icon_uses_fallback_key": icon_i16 < 0,
            "native_icon_asset_path_consumer_rva": "0x2C3018",

            "group_type_u8": group_type,
            "group_type_name_pkNX": GROUP_NAMES.get(group_type, f"Unknown_{group_type}"),
            "group_index_u8": raw[0x1D],
            "boost0_u8": raw[0x1F],
            "boost1_u8": raw[0x20],
            "boost2_u8": raw[0x21],
            "boost3_u8": raw[0x22],
            "record_raw_hex": raw.hex(),
        }
        records.append(rec)
    # Three canonical ball prices and the direct ID->sprite correspondence
    # make a strong independent sanity check against swapped byte offsets.
    for item_id, expected_price in ((2, 800), (3, 600), (4, 200)):
        rec = records[item_id]
        if (rec["price_u32"] != expected_price or rec["pouch_index"] != 1
                or rec["item_sprite_u16"] != item_id):
            raise ValueError("Item8 source mappings inconsistent with HOME test item IDs")
    return {
        "format": "HOME 4.1.0 item.dat / pkNX Item8 0x30-compatible fields",
        "source_sha256": hashlib.sha256(data).hexdigest(),
        "schema_reference": SCHEMA_SOURCE,
        "native_record_getter_rva": "0x4FD784",
        "native_elf_sha256": EXPECTED_SHA_ELF,
        "native_getter_evidence": "derived/4.1.0/native_item_topics/p6_item_native_getter_proof.json",
        "native_verified": "ELF native 1832-capacity, 1166 records, 0x40 base, 0x44 indexed u16 mapping, 48-byte stride and selected direct field Getter RVA/opcode proofs; field semantic names still pkNX-correlated",
        "schema_confidence": "HOME original ELF native field widths/offsets plus pinned pkNX Item8 business names and exact ROMFS regression",
        "native_field_getter_evidence": "derived/4.1.0/native_item_topics/p6_item_native_field_getters.json",
        "native_price_field_width_bits": {"price": 32, "watts": 32, "alternate": 32},
        "native_sprite_field_signed": True,
        "native_business_consumer_provenance": {
            "pouch": POUCH_NATIVE_EVIDENCE,
            "sprite_asset_key": SPRITE_NATIVE_EVIDENCE,
            "pouch_proven_native_selector": 14,
            "item_sprite_proven_native_selector": 4,
            "actual_battle_effect_consumer_proven": False,
        },
        "pouch_native_catalog_record_counts": list(catalog_counts),
        "pouch_native_bag_slot_capacities": list(POUCH_NATIVE_STORAGE_SLOTS),
        "native_icon_key_format": "item_%04d^o",
        "native_icon_fallback_key": "item_dummy^o",
        "item_count": item_count,
        "indexed_slot_capacity": capacity,
        "indexed_padding": padding,
        "unique_record_count": record_count,
        "record_start": record_start,
        "record_bytes": 0x30,
        "rows": records,
    }
