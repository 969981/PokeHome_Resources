#!/usr/bin/env python3
"""Native Item8 26-property source mirror and original ELF proof regression."""
from __future__ import annotations
import json
import struct
import unittest
from pathlib import Path

from home41_item_native_properties import ROUTES, decode_item_native_properties
from home41_item8_semantic import decode_item8_semantic
from home41_native_item_getter import native_item_record
from unpack_home41 import NCA

ROOT=Path(__file__).resolve().parents[1]
SRC=ROOT/NCA/"1/bin/pml/item/item.dat"
ROUTES_SOURCE=ROOT/"derived/4.1.0/native_item_topics/p6_item_property_selector_routes.json"
OPCODE_SOURCE=ROOT/"derived/4.1.0/native_item_topics/p6_item_native_field_getters.json"

class Item26NativePropertiesTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.blob=SRC.read_bytes()
        cls.doc=decode_item_native_properties(cls.blob)

    def test_native_26_way_elf_proof_and_column_names(self):
        elf=json.loads(ROUTES_SOURCE.read_text(encoding="utf-8"))
        proof=json.loads(OPCODE_SOURCE.read_text(encoding="utf-8"))
        self.assertEqual(self.doc["logical_item_count"],1829)
        self.assertEqual(len(self.doc["rows"]),1829)
        self.assertEqual(len(self.doc["column_names"]),29)
        self.assertEqual(len(ROUTES),25)
        self.assertEqual(len(elf["rows"]),26)
        self.assertEqual(proof["native_properties_count"],25)
        self.assertEqual(elf["rows"][0]["destination_rva"],"0x4FD0DC")
        proof_by_pc={int(x["native_getter_rva"],16):x for x in proof["property_getters"]}
        for selector,label,pc,offset,width,signed in ROUTES:
            r=elf["rows"][selector]
            self.assertEqual(r["property_selector_u8"],selector)
            self.assertEqual(int(r["destination_rva"],16),pc)
            self.assertEqual(r["direct_field_record_offset"],offset)
            self.assertEqual(r["direct_field_width_bits"],width)
            self.assertEqual(r["pkNX_cross_reference_or_unknown"],label)
            p=proof_by_pc[pc]
            self.assertEqual(p["raw_record_offset"],offset)
            self.assertEqual(p["native_read_width_bits"],width)
            self.assertEqual(p["native_read_signed"],signed)

    def test_every_native_row_is_independently_reproducible_from_record(self):
        sem=decode_item8_semantic(self.blob)["rows"]
        for r in self.doc["rows"]:
            i=r["item_id"]
            src=native_item_record(self.blob,i)
            self.assertEqual(r["native_s00_item_id_u32"],i)
            self.assertEqual(r["source_offset"],src.data_offset)
            self.assertEqual(r["record_index"],src.record_index_u16)
            for selector,label,pc,off,width,signed in ROUTES:
                col=f"native_s{selector:02d}_{label}"
                raw=int.from_bytes(src.record_bytes[off:off+width//8],"little",signed=signed)
                # Native extractor operation is solely bitmask/shift, not
                # guessed semantic name or numerical substitution.
                if label.startswith("flag10_bit") or label.startswith("flags_10_bit"):
                    raw=(raw>>int(label.split("bit")[-1]))&1
                elif label=="flags_10_low5":
                    raw&=0x1f
                elif label in ("pouch_low4_pkNX","flags_17_low4"):
                    raw&=0x0f
                elif label=="flags_17_high4":
                    raw>>=4
                self.assertEqual(r[col],raw,(i,selector,col))
            self.assertEqual(r["native_s01_price_pkNX"],sem[i]["price_u32"])
            self.assertEqual(r["native_s02_watts_price_pkNX"],sem[i]["price_watts_native_u32"])
            self.assertEqual(r["native_s03_alternate_price_pkNX"],sem[i]["price_alternate_native_u32"])
            self.assertEqual(r["native_s04_signed_sprite_pkNX"],sem[i]["item_sprite_native_i16"])
            self.assertEqual(r["native_s14_pouch_low4_pkNX"],sem[i]["pouch_index"])
            self.assertEqual(r["native_s15_effect_field_pkNX"],sem[i]["effect_field_u8"])

    def test_high_flags_and_signed_default(self):
        raw=self.doc["rows"]
        self.assertEqual(raw[2]["native_s01_price_pkNX"],800)
        self.assertEqual(raw[2]["native_s02_watts_price_pkNX"],40)
        self.assertEqual(raw[100]["native_s04_signed_sprite_pkNX"],-1)
        self.assertTrue(all(v["native_s11_flags_10_low5"]<32 for v in raw))
        for bit_name in (
            "native_s08_flag10_bit12", "native_s12_flags_10_bit5",
            "native_s13_flags_10_bit6", "native_s24_flags_10_bit7",
            "native_s25_flags_10_bit13",
        ):
            self.assertTrue(all(v[bit_name] in (0,1) for v in raw),bit_name)
        # Independent raw-byte check: these must be boolean *bits*, never
        # an unshifted 16-bit source word such as 0x201F.
        sample=native_item_record(self.blob,1).record_bytes
        mask=struct.unpack_from("<H",sample,0x10)[0]
        self.assertEqual(raw[1]["native_s12_flags_10_bit5"], (mask>>5)&1)
        self.assertEqual(raw[1]["native_s13_flags_10_bit6"], (mask>>6)&1)
        self.assertEqual(raw[1]["native_s24_flags_10_bit7"], (mask>>7)&1)
        self.assertEqual(raw[1]["native_s25_flags_10_bit13"], (mask>>13)&1)
        self.assertTrue(all(0<=v["native_s19_flags_17_low4"]<16 for v in raw))
        self.assertTrue(all(0<=v["native_s20_flags_17_high4"]<16 for v in raw))
        self.assertEqual(max(v["native_s02_watts_price_pkNX"] for v in raw),8000)
        self.assertEqual(max(v["native_s03_alternate_price_pkNX"] for v in raw),1000)

if __name__=="__main__":
    unittest.main()
