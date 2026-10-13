#!/usr/bin/env python3
"""Original HOME 4.1.0 topics_data.bin exact geometry tests."""
from __future__ import annotations
import csv
import io
import json
import tempfile
import unittest
from pathlib import Path

from home41_topics import decode_pokedex_topics, FILE_BYTES, GROUP_SIZE, SLOT_SIZE
from unpack_home41 import NCA, export_one, type_for, output_name

ROOT = Path(__file__).resolve().parents[1]
REL = "bin/appli/mtt_pokedex/bin/topics_data.bin"
FILE = ROOT / NCA / "1" / REL


class TopicsTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw = FILE.read_bytes()

    def test_complete_geometry_and_shared_template(self):
        doc = decode_pokedex_topics(self.raw)
        self.assertEqual(FILE_BYTES, 216336)
        self.assertEqual(GROUP_SIZE, 30904)
        self.assertEqual(SLOT_SIZE, 312)
        self.assertEqual(doc["group_count"], 7)
        self.assertEqual(doc["decoded_slots"], 693)
        self.assertEqual(doc["active_count"], 140)
        self.assertEqual(doc["placeholder_count"], 553)
        self.assertEqual([g["active_slots"] for g in doc["groups"]], [20] * 7)
        self.assertEqual([g["placeholder_slots"] for g in doc["groups"]], [79] * 7)
        self.assertEqual(doc["groups"][0]["absolute_header_offset"], 8)
        self.assertEqual(doc["groups"][-1]["absolute_header_offset"], 8 + 6 * 30904)
        self.assertEqual(doc["rows"][0]["absolute_file_offset"], 24)
        self.assertEqual(doc["rows"][-1]["absolute_file_offset"] + 312, len(self.raw))
        for g in range(7):
            p = 8 + g * 30904 + 16
            self.assertEqual(doc["rows"][g * 99]["absolute_file_offset"], p)
            self.assertFalse(doc["rows"][g * 99 + 19]["is_shared_placeholder"])
            self.assertTrue(doc["rows"][g * 99 + 20]["is_shared_placeholder"])
            self.assertTrue(doc["rows"][g * 99 + 98]["is_shared_placeholder"])

    def test_nested_raw_word_layout(self):
        doc = decode_pokedex_topics(self.raw)
        row = doc["rows"][0]
        self.assertEqual(row["word_00_raw_u32"], 1021400720)
        self.assertEqual(row["word_01_raw_u32"], 3543445279)
        self.assertEqual(row["word_24_raw_u32"], 3)
        self.assertEqual(row["word_32_raw_u32"], 3)
        self.assertEqual(len([key for key in row if key.startswith("word_")]), 78)

    def test_corruptions_rejected(self):
        with self.assertRaises(ValueError):
            decode_pokedex_topics(self.raw[:-1])
        x = bytearray(self.raw)
        x[0] = 6
        with self.assertRaises(ValueError):
            decode_pokedex_topics(x)
        original = bytearray(self.raw)
        record20 = 8 + 16 + 20 * SLOT_SIZE
        original[record20 + 3] ^= 0x40
        with self.assertRaises(ValueError):
            decode_pokedex_topics(original)

    def test_export_as_real_csv_json_and_verify_mirror_path(self):
        self.assertEqual(type_for(Path(REL)), "topics")
        with tempfile.TemporaryDirectory() as t:
            out = Path(t)
            main = output_name(FILE.relative_to(ROOT))
            self.assertEqual(main.suffix, ".json")
            status, n, warning, outputs = export_one(FILE, ROOT, out, main)
            self.assertEqual(status, "partial")
            self.assertEqual(n, 693)
            self.assertEqual(len(outputs), 3)
            self.assertTrue(warning)
            self.assertTrue(all((out / x["path"]).is_file() for x in outputs))
            meta = json.loads((out / main).read_text(encoding="utf-8"))
            self.assertEqual(meta["placeholder_count"], 553)
            self.assertEqual(meta["active_count"], 140)
            self.assertEqual(meta["native_reference_summary"]["reference_count"], 500)
            self.assertEqual(meta["native_reference_summary"]["group_summary"][5]["native_flags_bit_position"], 7)
            with (out / main.with_suffix(".csv")).open(encoding="utf-8-sig") as fp:
                decoded = list(csv.DictReader(fp))
            self.assertEqual(len(decoded), 693)
            self.assertEqual(decoded[0]["group_index"], "0")
            self.assertEqual(decoded[0]["slot_index"], "0")
            self.assertEqual(decoded[-1]["group_index"], "6")
            self.assertEqual(decoded[-1]["slot_index"], "98")
            with (out / main.with_name("topics_data.references.csv")).open(
                    encoding="utf-8-sig", newline="") as fp:
                refs = list(csv.DictReader(fp))
            self.assertEqual(len(refs), 500)
            self.assertEqual(refs[0]["group_index"], "0")
            self.assertEqual(refs[0]["species_no_candidate_u32"], "19")
            self.assertEqual(
                [int(x["species_no_candidate_u32"]) for x in refs if x["group_index"]=="4" and x["topic_index"]=="0"],
                [906, 909, 912],
            )

if __name__ == "__main__":
    unittest.main()
