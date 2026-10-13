#!/usr/bin/env python3
"""4.1.0 original ELF Native Pouch consumer and Item8 catalog consistency."""
from __future__ import annotations
import unittest
from pathlib import Path
from home41_native_p7_pouch_consumers import analyze, CASE_DEFINITIONS
from home41_item8_semantic import decode_item8_semantic
from unpack_home41 import NCA

ROOT=Path(__file__).resolve().parents[1]
ELF=ROOT/NCA/"0/main.elf"
ITEM=ROOT/NCA/"1/bin/pml/item/item.dat"
EXPECTED_COUNTS=[37,27,10,53,640,200,20,25,154]
EXPECTED_SLOT_CAPACITY=[60,30,20,80,550,210,100,100,64]

class ItemNativePouchConsumerTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw=ITEM.read_bytes()
        cls.doc=analyze(ELF.read_bytes(),cls.raw)

    def test_every_case_is_bound_to_real_elffile_and_record_census(self):
        d=self.doc
        self.assertEqual(d["native_pouch_selector_rva"],"0x266D58")
        self.assertEqual(d["native_property_call_rva"],"0x4FD48C")
        self.assertEqual(d["native_encoded_id_low_bits"],15)
        self.assertEqual(d["native_qty_limit_in_existing_entry_path"],999)
        self.assertEqual(len(d["pouches"]),9)
        self.assertEqual(d["header_per_pouch_total"],1166)
        self.assertEqual(d["bag_total_slot_capacity"],1214)
        self.assertEqual([r["item_dat_header_pouch_count"] for r in d["pouches"]],EXPECTED_COUNTS)
        self.assertEqual([r["bag_slot_capacity"] for r in d["pouches"]],EXPECTED_SLOT_CAPACITY)
        self.assertTrue(all(r["item_dat_header_pouch_count"]==r["unique_48_byte_item_records"] for r in d["pouches"]))
        self.assertEqual(d["native_anchors_checked"],16)

    def test_actual_semantic_item_ids_match_raw_native_pouch_index(self):
        semantic=decode_item8_semantic(self.raw)["rows"]
        self.assertEqual(len(semantic),1829)
        for item in semantic:
            self.assertGreaterEqual(item["pouch_index"],0)
            self.assertLess(item["pouch_index"],9)
            self.assertEqual(item["pouch_name_pkNX"],
                             self.doc["pouches"][item["pouch_index"]]["pkNX_pouch_name"])
        self.assertEqual(semantic[2]["pouch_name_pkNX"],"Balls")
        self.assertEqual(semantic[17]["pouch_name_pkNX"],"Medicine")
        self.assertEqual(semantic[100]["shared_default_record"],True)

    def test_pouch_counts_not_falsely_confused_with_bag_slot_sizes(self):
        # Category 4 has 640 catalog records but 550 storage slots.
        # This mismatch is expected; never use header values as bag sizes.
        row=self.doc["pouches"][4]
        self.assertEqual(row["unique_48_byte_item_records"],640)
        self.assertEqual(row["bag_slot_capacity"],550)
        self.assertTrue(row["capacity_is_distinct_from_catalog_item_count"])
        self.assertEqual(sum(x[3] for x in CASE_DEFINITIONS),1214)

if __name__=="__main__":
    unittest.main()
