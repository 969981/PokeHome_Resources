#!/usr/bin/env python3
"""Regression for pkNX Item8-compatible semantic fields on real HOME 4.1.0 bytes."""
from __future__ import annotations
import csv
import json
import tempfile
import unittest
from pathlib import Path
from home41_item8_semantic import decode_item8_semantic
from home41_pokedex_item import decode_item_data, join_item_hash
from home41_tables import decode_item_hash_index
from unpack_home41 import NCA, export_one, output_name

ROOT = Path(__file__).resolve().parents[1]
REL = "bin/pml/item/item.dat"
SRC = ROOT / NCA / "1" / REL
HASH = SRC.with_name("item_hash_to_index.dat")


class ItemSemanticTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw = SRC.read_bytes()

    def test_item8_real_semantic_header_and_prices(self):
        d = decode_item8_semantic(self.raw)
        self.assertEqual(d["item_count"], 1829)
        self.assertEqual(d["indexed_slot_capacity"], 1832)
        self.assertEqual(d["indexed_padding"], [0, 0, 0])
        self.assertEqual(d["unique_record_count"], 1166)
        self.assertEqual(d["record_start"], 5124)
        self.assertEqual(d["record_bytes"], 48)
        self.assertEqual(len(d["rows"]), 1829)
        for item_id, price, watts in ((2, 800, 40), (3, 600, 30), (4, 200, 10)):
            r = d["rows"][item_id]
            self.assertEqual(r["record_index"], item_id)
            self.assertEqual(r["price_u32"], price)
            self.assertEqual(r["price_watts_u16"], watts)
            self.assertEqual(r["pouch_name_pkNX"], "Balls")
            self.assertEqual(r["group_type_name_pkNX"], "Ball")
            self.assertEqual(r["item_sprite_u16"], item_id)
        medicine = d["rows"][17]
        self.assertEqual(medicine["price_u32"], 200)
        self.assertEqual(medicine["pouch_name_pkNX"], "Medicine")
        self.assertEqual(medicine["effect_field_u8"], 1)
        self.assertTrue(medicine["can_use_on_pokemon"])
        unused = d["rows"][100]
        self.assertTrue(unused["shared_default_record"])
        self.assertEqual(unused["record_index"], 0)
        self.assertEqual(unused["item_sprite_u16"], 65535)

    def test_item_hash_row_outside_domain_not_valid_item_id(self):
        structural = decode_item_data(self.raw)
        hashes = decode_item_hash_index(HASH.read_bytes())
        joined = join_item_hash(structural, hashes)
        self.assertEqual(structural["item_id_count"], 1829)
        self.assertEqual(structural["padding_index_slots"], 3)
        self.assertEqual(joined["presence_mismatch_rows"], [1829])
        self.assertEqual(joined["in_domain_presence_mismatch_rows"], [])
        self.assertEqual(joined["outside_domain_presence_mismatch_rows"], [1829])

    def test_invalid_record_geometry_and_padding_rejected(self):
        with self.assertRaises(ValueError):
            decode_item8_semantic(self.raw[:-1])
        corrupted = bytearray(self.raw)
        corrupted[0x44 + 1829 * 2] = 1
        with self.assertRaises(ValueError):
            decode_item8_semantic(corrupted)

    def test_actual_mirrored_semantic_files(self):
        with tempfile.TemporaryDirectory() as name:
            out = Path(name)
            main = output_name(SRC.relative_to(ROOT))
            status, n, warnings, outputs = export_one(SRC, ROOT, out, main)
            self.assertEqual(status, "partial")
            self.assertEqual(n, 1166)
            self.assertEqual(len(outputs), 7)
            self.assertTrue(warnings)
            self.assertTrue(all((out / entry["path"]).is_file() for entry in outputs))
            semantic = out / main.with_name("item.semantic.csv")
            with semantic.open(encoding="utf-8-sig", newline="") as file:
                entries = list(csv.DictReader(file))
            self.assertEqual(len(entries), 1829)
            self.assertEqual(entries[2]["price_u32"], "800")
            self.assertEqual(entries[2]["pouch_name_pkNX"], "Balls")
            meta = json.loads((out / main.with_name("item.semantic.json")).read_text())
            self.assertEqual(meta["item_count"], 1829)
            self.assertEqual(meta["native_record_getter_rva"], "0x4FD784")
            self.assertEqual(meta["native_elf_sha256"], "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a")
            self.assertEqual(entries[2]["native_record_pointer_getter_rva"], "0x4FD784")
            self.assertIn("kwsch/pkNX", meta["schema_reference"])

if __name__ == "__main__":
    unittest.main()
