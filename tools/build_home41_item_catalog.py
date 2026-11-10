#!/usr/bin/env python3
"""Rebuild auditable Pokémon HOME 4.1.0 ItemID catalogs from PokeHome_Resources.

Read-only HOME 4.1.0 RomFS derived sources; writes only to --out-dir. No HOME/game/save access.
Usage:
  python tools/build_home41_item_catalog.py --source-root . --out-dir derived/4.1.0/item_catalog
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import Counter
from pathlib import Path

NCA = "57b83ea8c0af21ef26e2519b9580b373_NCA"
PREFIX = Path("Unpack") / NCA / "1" / "bin"
LANGS = [
    ("Simp_Chinese", "name_zh_hans"),
    ("Trad_Chinese", "name_zh_hant"),
    ("English", "name_en"),
    ("JPN", "name_ja"),
    ("JPN_KANJI", "name_ja_kanji"),
    ("Korean", "name_ko"),
    ("German", "name_de"),
    ("French", "name_fr"),
    ("Italian", "name_it"),
    ("Spanish", "name_es"),
    ("LATAM", "name_es_latam"),
]
NAMES_FIELDS = [
    "item_id", "item_hex", "label", "label_hash_fnv64",
    "in_pml_id_domain", "has_physical_item_record",
] + [k for _, k in LANGS]
ITEM_FIELDS = [
    "item_id", "item_hex", "name_zh_hans", "name_en", "name_ja",
    "name_label_hash_fnv64", "item_hash_u64_hex", "hash_index_raw_u32",
    "lookup_record_index_u16", "record_index", "shared_default_record",
    "source_record_offset", "price_u32", "price_watts_native_u32",
    "price_alternate_native_u32", "pouch_index", "pouch_name_pkNX",
    "sprite_native_i16", "icon_resource_key", "icon_fallback",
    "group_type_u8", "group_index_u8", "effect_field_u8",
    "can_use_on_pokemon", "record_raw_hex",
]
EXPECTED_POUCHES = {
    "Medicine": 37, "Balls": 27, "Battle": 10, "Berries": 53,
    "Items": 640, "TMs": 200, "Treasures": 20, "Ingredients": 25,
    "Key": 154,
}
EXPECTED_DATA_SHA = "4f5edd3f0ca8ed0c60ceb91fda0c5385f20ec986a66dcf4aa68d1c145903a1a2"


def load_csv(p: Path) -> list[dict[str, str]]:
    with p.open("r", encoding="utf-8-sig", newline="") as f:
        return list(csv.DictReader(f))


def write_csv(p: Path, fields: list[str], rows: list[dict]) -> str:
    with p.open("w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=fields, lineterminator="\n")
        w.writeheader()
        w.writerows(rows)
    return hashlib.sha256(p.read_bytes()).hexdigest()


def build(root: Path, out: Path) -> dict:
    itemdir = root / PREFIX / "pml" / "item"
    namesdir = root / PREFIX / "message"
    names = {}
    for locale, field in LANGS:
        rows = load_csv(namesdir / locale / "megaturtle" / "itemname.csv")
        if len(rows) != 2685:
            raise ValueError(f"Expected 2685 {locale} names, got {len(rows)}")
        for i, row in enumerate(rows):
            if (int(row["index"]) != i
                    or row["label"] != f"ITEMNAME_{i:03d}"):
                raise ValueError(f"{locale} label/index mismatch for item {i}")
        names[field] = rows

    baseline = names["name_zh_hans"]
    for locale, field in LANGS:
        for i, (first, translated) in enumerate(zip(baseline, names[field])):
            if first["hash_fnv64"] != translated["hash_fnv64"]:
                raise ValueError(f"Cross-locale label hash mismatch: {locale} ID {i}")
    sem = load_csv(itemdir / "item.semantic.csv")
    mapping = load_csv(itemdir / "item.id_lookup.csv")
    hashed = load_csv(itemdir / "item_hash_to_index.csv")
    if (len(sem), len(mapping), len(hashed)) != (1829, 1832, 1830):
        raise ValueError("Unexpected source counts; do not silently adjust ID domain")
    for i, record in enumerate(sem):
        if int(record["item_id"]) != i or int(mapping[i]["index_slot"]) != i:
            raise ValueError(f"Bad PML lookup row {i}")
        if int(mapping[i]["record_index_raw_u16"]) != int(record["record_index"]):
            raise ValueError(f"PML lookup/semantic mismatch for ItemID {i}")
        if int(hashed[i]["row"]) != i:
            raise ValueError(f"Unexpected PML hash table row {i}")
        if int(hashed[i]["index_candidate_u32"]) not in (0, i):
            raise ValueError(f"PML hash-index unexpected value for ItemID {i}")
    if (any(int(x["record_index_raw_u16"]) for x in mapping[1829:])
            or any(x["outside_item_id_domain"] != "True" for x in mapping[1829:])):
        raise ValueError("PML padded ID slots 1829–1831 have changed")
    if (int(hashed[-1]["row"]), int(hashed[-1]["index_candidate_u32"])) != (1829,1828):
        raise ValueError("Out-of-domain item-hash sentinel changed")
    meta = json.loads((itemdir / "item.semantic.json").read_text("utf-8-sig"))
    if (meta["item_count"], meta["unique_record_count"], meta["record_start"],
        meta["record_bytes"]) != (1829, 1166, 5124, 48):
        raise ValueError("ROMFS metadata count/stride changed")
    if meta["source_sha256"] != EXPECTED_DATA_SHA:
        raise ValueError("Source item.dat SHA256 metadata mismatch")

    named = []
    for i in range(2685):
        row = {
            "item_id": i, "item_hex": f"0x{i:04X}",
            "label": baseline[i]["label"],
            "label_hash_fnv64": baseline[i]["hash_fnv64"],
            "in_pml_id_domain": "true" if i < 1829 else "false",
            "has_physical_item_record": (
                "true" if i < 1829 and sem[i]["shared_default_record"] != "True"
                else "false"
            ),
        }
        row.update({field: names[field][i]["text"] for _, field in LANGS})
        named.append(row)
    physical = []
    for i, s in enumerate(sem):
        itemhash = hashed[i]
        physical.append({
            "item_id": i, "item_hex": f"0x{i:04X}",
            "name_zh_hans": names["name_zh_hans"][i]["text"],
            "name_en": names["name_en"][i]["text"],
            "name_ja": names["name_ja"][i]["text"],
            "name_label_hash_fnv64": baseline[i]["hash_fnv64"],
            "item_hash_u64_hex": itemhash["hash_u64_hex"],
            "hash_index_raw_u32": itemhash["index_candidate_u32"],
            "lookup_record_index_u16": mapping[i]["record_index_raw_u16"],
            "record_index": s["record_index"],
            "shared_default_record": s["shared_default_record"].lower(),
            "source_record_offset": s["source_offset"],
            "price_u32": s["price_u32"],
            "price_watts_native_u32": s["price_watts_native_u32"],
            "price_alternate_native_u32": s["price_alternate_native_u32"],
            "pouch_index": s["pouch_index"],
            "pouch_name_pkNX": s["pouch_name_pkNX"],
            "sprite_native_i16": s["item_sprite_native_i16"],
            "icon_resource_key": s["native_icon_resource_key"],
            "icon_fallback": s["native_icon_uses_fallback_key"].lower(),
            "group_type_u8": s["group_type_u8"],
            "group_index_u8": s["group_index_u8"],
            "effect_field_u8": s["effect_field_u8"],
            "can_use_on_pokemon": s["can_use_on_pokemon"].lower(),
            "record_raw_hex": s["record_raw_hex"],
        })
    defaults = sum(s["shared_default_record"] == "True" for s in sem)
    fallbacks = sum(s["native_icon_uses_fallback_key"] == "True" for s in sem)
    categories = dict(Counter(
        s["pouch_name_pkNX"] for s in sem
        if s["shared_default_record"] != "True"
    ))
    if (defaults, fallbacks, categories) != (663, 683, EXPECTED_POUCHES):
        raise ValueError(f"Count changed: {defaults=}, {fallbacks=}, {categories=}")
    if len({int(s["record_index"]) for s in sem}) != 1166:
        raise ValueError("Unexpected number of physical record indices")
    out.mkdir(parents=True, exist_ok=True)
    filenames = (
        ("HOME41_itemname_2685_11lang.csv", NAMES_FIELDS, named),
        ("HOME41_itemid_1829_pml_crosswalk.csv", ITEM_FIELDS, physical),
    )
    file_hashes = {name: write_csv(out / name, fields, rows)
                   for name, fields, rows in filenames}
    summary = {
        "source": "969981/PokeHome_Resources@4.1.0",
        "itemname_ids": 2685, "pml_item_ids": 1829,
        "name_only_ids_outside_pml": 856,
        "pml_index_slots_including_padding": 1832,
        "pml_physical_records": 1166, "shared_default_logical_ids": defaults,
        "icon_fallback_logical_ids": fallbacks,
        "pouch_physical_record_counts": categories,
        "source_item_dat_sha256": EXPECTED_DATA_SHA,
        "outputs_sha256": file_hashes,
        "evidence": "ROMFS names + item.dat + HOME 4.1.0 ELF native getters; no server/game admissibility",
    }
    (out / "HOME41_item_catalog_validation.json").write_text(
        json.dumps(summary, indent=2, ensure_ascii=False) + "\n", encoding="utf-8"
    )
    return summary


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source-root", type=Path, required=True)
    parser.add_argument("--out-dir", type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(build(args.source_root, args.out_dir), indent=2, ensure_ascii=False))
