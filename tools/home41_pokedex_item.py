#!/usr/bin/env python3
"""Read-only HOME 4.1.0 Pokémon list and item-table parsers.

All data fields are raw numeric values; the packed keys' low/high 16-bit
components are NOT asserted to be official species/form semantics.
"""
from __future__ import annotations
from collections import Counter
import struct


def pairs_u32(data: bytes, kind: str, expected_rows: int | None = None) -> dict:
    if len(data) % 8:
        raise ValueError(kind + ": u32/u32 row is not 8-byte aligned")
    rows = len(data) // 8
    if expected_rows is not None and rows != expected_rows:
        raise ValueError(f"{kind}: expected {expected_rows} rows, saw {rows}")
    result = []
    for i, (key, value) in enumerate(struct.iter_unpack("<II", data)):
        result.append({
            "row": i, "packed_key_u32": key,
            "key_low16_candidate": key & 65535,
            "key_high16_candidate": key >> 16,
            "value_raw_u32": value,
        })
    return {
        "format": "HOME 4.1.0 " + kind + " fixed u32 pair array",
        "row_count": rows,
        "distinct_keys": len(set(x["packed_key_u32"] for x in result)),
        "rows": result,
        "certainty": "8-byte record boundaries and values verified; gameplay meaning of raw codes unconfirmed"
    }


def decode_pokemon_test(data: bytes) -> dict:
    doc = pairs_u32(data, "pokemon_test_list", 1593)
    by_key = {}
    for row in doc["rows"]:
        code = row["value_raw_u32"]
        if code > 5:
            raise ValueError("test code beyond observed HOME 4.1 range")
        by_key.setdefault(row["packed_key_u32"], []).append(code)
    if len(by_key) != 1492:
        raise ValueError("unexpected test key cardinality")
    if any(sorted(v) != [0, 1] for v in by_key.values() if len(v) > 1):
        raise ValueError("unexpected repeated test-key pattern")
    doc["duplicate_01_groups"] = sum(len(v) == 2 for v in by_key.values())
    doc["code_counts"] = dict(sorted(Counter(x["value_raw_u32"] for x in doc["rows"]).items()))
    return doc


def decode_pokemon_valid(data: bytes) -> dict:
    doc = pairs_u32(data, "pokemon_valid_list", 1492)
    if doc["distinct_keys"] != 1492:
        raise ValueError("valid-list keys not unique")
    doc["bitmask_interpretation"] = "unknown: exported as raw uint32; no claim about individual availability flags"
    return doc


def decode_pokedex_form(data: bytes) -> dict:
    doc = pairs_u32(data, "pokedex_form_data", 1593)
    if any(row["value_raw_u32"] not in range(5, 13) for row in doc["rows"]):
        raise ValueError("outside observed form classification range")
    return doc


def decode_pokedex_shape(data: bytes) -> dict:
    doc = pairs_u32(data, "pokedex_shape_data", 2980)
    rows = doc["rows"]
    grouped = []
    for i in range(0, len(rows), 2):
        first, second = rows[i:i + 2]
        a, b = first["value_raw_u32"], second["value_raw_u32"]
        if first["packed_key_u32"] != second["packed_key_u32"] or a ^ b != 0x100:
            raise ValueError("pokedex shape pair mismatch at row " + str(i))
        grouped.append({
            "pair_index": i // 2,
            "packed_key_u32": first["packed_key_u32"],
            "key_low16_candidate": first["key_low16_candidate"],
            "key_high16_candidate": first["key_high16_candidate"],
            "variant0_u32": a,
            "variant1_u32": b,
            "variant0_hex": f"{a:08X}",
            "variant1_hex": f"{b:08X}",
        })
    doc["shape_pairs"] = grouped
    doc["pair_count"] = len(grouped)
    doc["certainty"] += "; all adjacent pairs have same key and values differ by 0x100"
    return doc


def decode_pokedex_sugata(data: bytes) -> dict:
    if len(data) % 24 or len(data) != 76944:
        raise ValueError("unexpected 24-byte sugata record layout")
    rows = []
    for i, nums in enumerate(struct.iter_unpack("<6I", data)):
        rows.append({"row": i, "key_raw_u32": nums[0],
                     "variant_raw_u32": nums[1], "field_2_raw_u32": nums[2],
                     "field_3_raw_u32": nums[3], "field_4_raw_u32": nums[4],
                     "field_5_raw_u32": nums[5]})
    return {
        "format": "HOME 4.1.0 sugata raw 24-byte records",
        "record_stride": 24, "record_count": len(rows),
        "rows": rows,
        "certainty": "24-byte alignment and six raw u32 fields only; key/variant and UI semantics not proven",
    }


def decode_item_data(data: bytes) -> dict:
    """Recover 1,829 item IDs (three padded slots) and 1,166 fixed 48-byte records.

    Header layout checked using real HOME 4.1.0 bytes at offsets 0,2,4,64.
    Remaining region between the lookup array and payload is 348 raw u16/u16
    pairs: do NOT assume they are species IDs, item categories, or offsets.
    """
    if len(data) < 68:
        raise ValueError("truncated item.dat header")
    declared_max, lookup_count, record_count = struct.unpack_from("<HHH", data, 0)
    record_start = struct.unpack_from("<H", data, 64)[0]
    if (declared_max, lookup_count, record_count) != (1829, 1832, 1166):
        raise ValueError("unexpected HOME 4.1.0 item.dat counts")
    lookup_end = 68 + lookup_count * 2
    if record_start < lookup_end or (record_start - lookup_end) % 4:
        raise ValueError("bad item.dat lookup/auxiliary boundary")
    if len(data) != record_start + 48 * record_count:
        raise ValueError("48-byte record payload length mismatch")
    lookup = struct.unpack_from(f"<{lookup_count}H", data, 68)
    if max(lookup) >= record_count:
        raise ValueError("lookup references nonexistent record")
    item_count = declared_max  # Confirmed against pkNX Item8.GetArray: u16@0.
    if item_count > lookup_count or any(lookup[item_count:]):
        raise ValueError("item index padding must be three zero entries")
    nonzero = [v for v in lookup if v]
    if len(set(nonzero)) != record_count - 1 or set(nonzero) != set(range(1, record_count)):
        raise ValueError("lookup does not contain every nonzero record index exactly once")
    lookup_rows = [
        {"candidate_item_id": i if i < item_count else None,
         "index_slot": i, "outside_item_id_domain": i >= item_count,
         "record_index_raw_u16": value, "zero_is_ambiguous": value == 0}
        for i, value in enumerate(lookup)
    ]
    aux = [
        {"row": i, "word_a_u16": a, "word_b_u16": b}
        for i, (a, b) in enumerate(struct.iter_unpack("<HH", data[lookup_end:record_start]))
    ]
    index_to_item = {r["record_index_raw_u16"]: r["candidate_item_id"]
                     for r in lookup_rows if r["record_index_raw_u16"] and not r["outside_item_id_domain"]}
    record_rows = []
    for i in range(record_count):
        offset = record_start + 48 * i
        block = data[offset:offset + 48]
        words = struct.unpack_from("<12I", block)
        rec = {"record_index": i, "offset": offset,
               "candidate_item_id": index_to_item.get(i),
               "record_raw_hex": block.hex()}
        for j, val in enumerate(words):
            rec[f"word_{j:02d}_u32"] = val
        record_rows.append(rec)
    return {
        "format": "HOME 4.1.0 PML item multi-index and fixed-record table",
        "file_bytes": len(data), "item_id_count": item_count,
        "declared_first_u16": declared_max,
        "lookup_count": lookup_count, "padding_index_slots": lookup_count - item_count,
        "record_count": record_count,
        "record_stride": 48, "record_start": record_start,
        "aux_pair_count": len(aux),
        "header_first68_hex": data[:68].hex(),
        "index_rows": lookup_rows, "aux_pairs": aux, "record_rows": record_rows,
        "certainty": "offset/count/stride and lookup permutation verified; 48-byte member meanings and auxiliary pair semantics unknown",
    }


def join_item_hash(item_data: dict, hash_doc: dict) -> dict:
    """Correlate records without erasing observed special-case mismatches."""
    look = item_data["index_rows"]
    hashed = hash_doc["rows"]
    rows = []
    mismatches = []
    in_domain_mismatches = []
    for i, hr in enumerate(hashed):
        if i >= len(look):
            raise ValueError("hash index longer than item lookup")
        ri = look[i]["record_index_raw_u16"]
        h_index = hr["index_candidate_u32"]
        if bool(ri) != bool(h_index):
            mismatches.append(i)
            if i < item_data["item_id_count"]:
                in_domain_mismatches.append(i)
        rows.append({"hash_row": i, "hash_u64_hex": hr["hash_u64_hex"],
                     "hash_index_raw_u32": h_index, "item_lookup_record_index_u16": ri,
                     "present_in_both": bool(ri) and bool(h_index),
                     "nonzero_presence_agrees": bool(ri) == bool(h_index),
                     "outside_item_id_domain": i >= item_data["item_id_count"]})
    return {"rows": rows, "hash_rows": len(rows),
            "nonzero_both": sum(x["present_in_both"] for x in rows),
            "presence_mismatch_rows": mismatches,
            "in_domain_presence_mismatch_rows": in_domain_mismatches,
            "outside_domain_presence_mismatch_rows": [
                i for i in mismatches if i >= item_data["item_id_count"]
            ],
            "certainty": "item ID domain uses u16@0=1829 per pkNX Item8; observed hash row 1829 lies outside valid item IDs"}


def pokemon_key_crosswalk(test: dict, valid: dict, form: dict, shape: dict) -> dict:
    """Correlate observed identical 32-bit keys without giving them invented names."""
    def collect(doc, field="value_raw_u32"):
        d = {}
        for row in doc["rows"]:
            d.setdefault(row["packed_key_u32"], []).append(row[field])
        return d
    t, v, f = (collect(x) for x in (test, valid, form))
    sh = {}
    for row in shape["shape_pairs"]:
        sh.setdefault(row["packed_key_u32"], []).append(
            (row["variant0_hex"], row["variant1_hex"]))
    if set(t) != set(v):
        raise ValueError("pokemon test/valid packed key sets do not match")
    keys = sorted(set(t) | set(f) | set(sh))
    out = []
    for key in keys:
        out.append({"packed_key_u32": key, "key_low16_candidate": key & 65535,
                    "key_high16_candidate": key >> 16,
                    "test_raw_codes": ";".join(map(str, t.get(key, []))),
                    "valid_raw_u32": v.get(key, [None])[0],
                    "form_raw_codes": ";".join(map(str, f.get(key, []))),
                    "shape_pair_count": len(sh.get(key, [])),
                    "seen_in_test": key in t, "seen_in_form": key in f,
                    "seen_in_shape": key in sh})
    return {"rows": out, "union_count": len(keys),
            "test_keys": len(t), "valid_keys": len(v),
            "form_keys": len(f), "shape_keys": len(sh),
            "test_without_form": len(set(t) - set(f)),
            "form_without_test": len(set(f) - set(t)),
            "certainty": "exact equality join on raw 32-bit keys; derived species/form bit meaning remains candidate"}
