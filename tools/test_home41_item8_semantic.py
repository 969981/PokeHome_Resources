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

    def test_native_u32_width_sign_and_real_record_regression(self):
        from home41_native_item_getter import native_item_record
        import struct

        semantic = decode_item8_semantic(self.raw)
        rows = semantic["rows"]
        self.assertEqual(semantic["native_price_field_width_bits"],
                         {"price": 32, "watts": 32, "alternate": 32})
        self.assertTrue(semantic["native_sprite_field_signed"])
        self.assertEqual(semantic["native_field_getter_evidence"],
                         "derived/4.1.0/native_item_topics/p6_item_native_field_getters.json")
        self.assertEqual(len(rows), 1829)
        for row in rows:
            raw = native_item_record(self.raw, row["item_id"]).record_bytes
            self.assertEqual(row["price_u32"], struct.unpack_from("<I", raw, 0)[0])
            self.assertEqual(row["price_watts_native_u32"], struct.unpack_from("<I", raw, 4)[0])
            self.assertEqual(row["price_alternate_native_u32"], struct.unpack_from("<I", raw, 8)[0])
            self.assertEqual(row["price_watts_u16"], row["price_watts_native_u32"])
            self.assertEqual(row["price_alternate_u16"], row["price_alternate_native_u32"])
            self.assertEqual(row["item_sprite_u16"], struct.unpack_from("<H", raw, 0x1a)[0])
            self.assertEqual(row["item_sprite_native_i16"], struct.unpack_from("<h", raw, 0x1a)[0])
            self.assertEqual(row["native_price_watts_rva"], "0x4FD114")
            self.assertEqual(row["native_item_sprite_signed_rva"], "0x4FD12C")
        self.assertEqual(rows[100]["item_sprite_native_i16"], -1)
        self.assertEqual(rows[100]["item_sprite_u16"], 65535)
        self.assertEqual(max(r["price_watts_native_u32"] for r in rows), 8000)
        self.assertEqual(max(r["price_alternate_native_u32"] for r in rows), 1000)

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
            self.assertEqual(len(outputs), 9)
            self.assertTrue(warnings)
            self.assertTrue(all((out / entry["path"]).is_file() for entry in outputs))
            semantic = out / main.with_name("item.semantic.csv")
            with semantic.open(encoding="utf-8-sig", newline="") as file:
                entries = list(csv.DictReader(file))
            self.assertEqual(len(entries), 1829)
            self.assertEqual(entries[2]["price_u32"], "800")
            native_csv = out / main.with_name("item.native_properties.csv")
            with native_csv.open(encoding="utf-8-sig", newline="") as f:
                selected = list(csv.DictReader(f))
            self.assertEqual(len(selected), 1829)
            self.assertEqual(selected[2]["native_s01_price_pkNX"], "800")
            self.assertEqual(selected[2]["native_s02_watts_price_pkNX"], "40")
            self.assertEqual(selected[100]["native_s04_signed_sprite_pkNX"], "-1")
            self.assertEqual(selected[2]["native_s14_pouch_low4_pkNX"], "1")
            with (out / main.with_name("item.native_effects.csv")).open(
                    encoding="utf-8-sig", newline="") as f:
                extended = list(csv.DictReader(f))
            self.assertEqual(len(extended), 1829)
            self.assertEqual(extended[2]["native_effect_variant_at_0x15"], "0")
            self.assertEqual(extended[2]["native_effect_s26_raw"], "1")
            self.assertEqual(extended[17]["native_effect_variant_at_0x15"], "1")
            self.assertEqual(entries[2]["pouch_name_pkNX"], "Balls")
            meta = json.loads((out / main.with_name("item.semantic.json")).read_text())
            self.assertEqual(meta["item_count"], 1829)
            self.assertEqual(meta["native_record_getter_rva"], "0x4FD784")
            self.assertEqual(meta["native_elf_sha256"], "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a")
            self.assertEqual(entries[2]["native_record_pointer_getter_rva"], "0x4FD784")
            self.assertIn("kwsch/pkNX", meta["schema_reference"])

if __name__ == "__main__":
    unittest.main()
