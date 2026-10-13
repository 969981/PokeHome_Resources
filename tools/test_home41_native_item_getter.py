#!/usr/bin/env python3
"""Original 4.1.0 HOME item.dat Native Getter tests against all 1,832 slots."""
from __future__ import annotations
import hashlib
import struct
import unittest
from pathlib import Path

from home41_native_item_getter import (
    native_item_record, NativeLookupFailure, RECORD_BYTES,
)
from home41_item8_semantic import decode_item8_semantic
from home41_pokedex_item import decode_item_data
from unpack_home41 import NCA

REPO=Path(__file__).resolve().parents[1]
DATA=REPO/NCA/"1/bin/pml/item/item.dat"
EXPECTED_SHA="4f5edd3f0ca8ed0c60ceb91fda0c5385f20ec986a66dcf4aa68d1c145903a1a2"


class NativeItemGetterTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.blob=DATA.read_bytes()

    def test_header_and_known_sample_prices(self):
        self.assertEqual(hashlib.sha256(self.blob).hexdigest(),EXPECTED_SHA)
        for item_id,price,watts in ((2,800,40),(3,600,30),(4,200,10)):
            item=native_item_record(self.blob,item_id)
            self.assertEqual(item.record_index_u16,item_id)
            self.assertEqual(item.data_offset,5124+48*item_id)
            self.assertEqual(struct.unpack_from("<I",item.record_bytes,0)[0],price)
            self.assertEqual(struct.unpack_from("<H",item.record_bytes,4)[0],watts)
            self.assertFalse(item.padded_slot)
            self.assertEqual(item.indexed_capacity_u16,1832)
            self.assertEqual(item.logical_item_count_u16,1829)

    def test_all_1832_native_slots_match_permutation_and_raw_record(self):
        indexed=decode_item_data(self.blob)
        known=decode_item8_semantic(self.blob)
        self.assertEqual(len(known["rows"]),1829)
        for idx in range(1832):
            rec=native_item_record(self.blob,idx)
            self.assertEqual(rec.indexed_id_u16,idx)
            self.assertEqual(rec.record_index_u16,
                             indexed["index_rows"][idx]["record_index_raw_u16"])
            self.assertEqual(rec.data_offset,5124+48*rec.record_index_u16)
            self.assertEqual(rec.record_bytes,
                             self.blob[rec.data_offset:rec.data_offset+48])
            if idx<1829:
                self.assertEqual(rec.record_index_u16,
                                 known["rows"][idx]["record_index"])
            else:
                self.assertTrue(rec.padded_slot)
                self.assertEqual(rec.record_index_u16,0)

    def test_padded_capacity_slots_are_not_logical_item_ids(self):
        shared=native_item_record(self.blob,0)
        for index in (1829,1830,1831):
            slot=native_item_record(self.blob,index)
            self.assertTrue(slot.padded_slot)
            self.assertEqual(slot.data_offset,shared.data_offset)
            self.assertEqual(slot.record_bytes,shared.record_bytes)
        for index in (1832,65535):
            with self.assertRaises(NativeLookupFailure):
                native_item_record(self.blob,index)

    def test_native_uxth_truncates_32bit_item_argument(self):
        direct=native_item_record(self.blob,4)
        masked=native_item_record(self.blob,0x10004)
        self.assertEqual(masked.indexed_id_u16,4)
        self.assertEqual(masked.data_offset,direct.data_offset)
        with self.assertRaises(NativeLookupFailure):
            native_item_record(self.blob,-1)
        with self.assertRaises(NativeLookupFailure):
            native_item_record(self.blob,1<<32)

    def test_invalid_index_record_count_and_record_bounds_rejected(self):
        corrupted=bytearray(self.blob)
        struct.pack_into("<H",corrupted,0x44+2*4,1166)
        with self.assertRaises(NativeLookupFailure):
            native_item_record(corrupted,4)
        corrupted=bytearray(self.blob)
        struct.pack_into("<I",corrupted,0x40,62000)
        with self.assertRaises(NativeLookupFailure):
            native_item_record(corrupted,4)
        with self.assertRaises(NativeLookupFailure):
            native_item_record(b"",0)


if __name__=="__main__":
    unittest.main()
