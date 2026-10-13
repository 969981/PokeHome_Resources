#!/usr/bin/env python3
"""Read-only, source-anchored semantics for HOME 4.1.0 0x30-byte PML Item8.

Offsets are matched against pinned pkNX.Structures/Item/Item8.cs and the
actual HOME item.dat record geometry.  Native HOME per-field getters still
require independent ELF verification; therefore fields stay annotated as
'pkNX-compatible' rather than asserted to be HOME internal function names.
"""
from __future__ import annotations
import hashlib
import struct

SCHEMA_SOURCE = ("https://github.com/kwsch/pkNX/blob/"
    "0936c08eb14ed08eb9042c008404b24bf60e088a/"
    "pkNX.Structures/Item/Item8.cs")
POUCH_NAMES = (
    "Medicine", "Balls", "Battle", "Berries", "Items",
    "TMs", "Treasures", "Ingredients", "Key"
)
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
    records = []
    for item_id, index in enumerate(entries[:item_count]):
        ofs = record_start + index * 0x30
        raw = data[ofs:ofs + 0x30]
        price = struct.unpack_from("<I", raw, 0)[0]
        watts = struct.unpack_from("<H", raw, 4)[0]
        alternative = struct.unpack_from("<H", raw, 8)[0]
        pouch_raw = raw[0x11]
        pouch = pouch_raw & 15
        group_type = raw[0x1C]
        rec = {
            "item_id": item_id,
            "record_index": index,
            "shared_default_record": index == 0 and item_id != 0,
            "source_offset": ofs,
            "price_u32": price,
            "price_watts_u16": watts,
            "price_alternate_u16": alternative,
            "pouch_raw_u8": pouch_raw,
            "pouch_index": pouch,
            "pouch_name_pkNX": (POUCH_NAMES[pouch] if pouch < len(POUCH_NAMES)
                                else f"Unknown_{pouch}"),
            "effect_field_u8": raw[0x13],
            "can_use_on_pokemon": raw[0x15] == 1,
            "can_use_on_pokemon_raw_u8": raw[0x15],
            "item_sprite_u16": struct.unpack_from("<H", raw, 0x1A)[0],
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
        "schema_confidence": "pkNX Item8 offset definitions plus HOME original real-byte cross-validation; not yet each native getter",
        "item_count": item_count,
        "indexed_slot_capacity": capacity,
        "indexed_padding": padding,
        "unique_record_count": record_count,
        "record_start": record_start,
        "record_bytes": 0x30,
        "rows": records,
    }
