#!/usr/bin/env python3
"""Original HOME 4.1.0 effect selector 26..70 exhaustive regression."""
from __future__ import annotations
import json
import unittest
from pathlib import Path

from home41_item_native_effect_values import (
    EFFECT_ROUTES, decode_native_item_effects
)
from home41_native_item_getter import native_item_record
from unpack_home41 import NCA

ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/NCA/"1/bin/pml/item/item.dat"
EVIDENCE=ROOT/"derived/4.1.0/native_item_topics/p6_item_extended_effect_routes.json"

class Item45EffectTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw=SOURCE.read_bytes()
        cls.mat=decode_native_item_effects(cls.raw)
        cls.proof=json.loads(EVIDENCE.read_text(encoding="utf-8"))

    def test_original_elf_45_targets_and_opcode_types(self):
        self.assertEqual(self.mat["selector_count"],45)
        self.assertEqual(self.mat["logical_items"],1829)
        self.assertEqual(len(EFFECT_ROUTES),45)
        self.assertEqual(len(self.mat["column_names"]),50)
        self.assertEqual(len(self.proof["rows"]),45)
        self.assertEqual(self.proof["first_selector"],26)
        self.assertEqual(self.proof["last_selector"],70)
        width_of={"ldr":4,"ldrh":2,"ldurh":2,"ldrb":1,"ldrsb":1}
        for spec, proof in zip(EFFECT_ROUTES,self.proof["rows"]):
            selector,rva,off,width,signed,opkind,arg1,arg2=spec
            self.assertEqual(selector,proof["extended_selector"])
            self.assertEqual(rva,int(proof["native_target_rva"],16))
            self.assertEqual(width,width_of[proof["first_opcodes"][0]["mnemonic"]])
            self.assertEqual(signed,proof["first_opcodes"][0]["mnemonic"]=="ldrsb")
            self.assertGreaterEqual(off,0)
            self.assertLessEqual(off+width,18)
            second=proof["first_opcodes"][1]
            expected_operation={"identity":"ret","mask":"and","extract":"ubfx","shift":"lsr"}[opkind]
            self.assertEqual(second["mnemonic"],expected_operation)
            if opkind=="extract":
                parts=second["operands"].split("#")
                self.assertEqual(int(parts[-2].split(",")[0],0),arg1)
                self.assertEqual(int(parts[-1],0),arg2)
            if opkind in ("mask","shift"):
                self.assertEqual(int(second["operands"].rsplit("#",1)[-1],0),arg1)

    def test_all_1829_original_rows_type_gate_and_readvalues(self):
        variants={}
        for row in self.mat["rows"]:
            i=row["item_id"]
            record=native_item_record(self.raw,i).record_bytes
            typ=record[0x15]
            variants[typ]=variants.get(typ,0)+1
            self.assertEqual(typ,row["native_effect_variant_at_0x15"])
            self.assertEqual(row["effect_payload_hex"],record[0x1e:0x30].hex())
            payload=record[0x1e:0x30]
            for spec in EFFECT_ROUTES:
                selector,rva,off,width,signed,opkind,a,b=spec
                if typ==1:
                    n=int.from_bytes(payload[off:off+width],"little",signed=signed)
                    if opkind=="mask":
                        n &= a
                    elif opkind=="extract":
                        n=(n>>a)&((1<<b)-1)
                    elif opkind=="shift":
                        n >>= a
                elif typ in (0,2):
                    n=payload[0]
                else:
                    n=0
                self.assertEqual(row[f"native_effect_s{selector:02d}_raw"],n,
                                 (i,selector))
        self.assertEqual(sum(variants.values()),1829)
        self.assertEqual(set(variants),{0,1})
        self.assertGreater(variants[0],variants[1])

    def test_native_known_items_and_effect_signedness(self):
        rows=self.mat["rows"]
        self.assertEqual(rows[2]["native_effect_s26_raw"],1)
        self.assertEqual(rows[2]["native_effect_s70_raw"],1)
        self.assertEqual(rows[17]["native_effect_variant_at_0x15"],1)
        self.assertEqual(rows[17]["native_effect_s66_raw"],20)
        self.assertEqual(rows[18]["native_effect_s27_raw"],1)
        for row in rows:
            if row["native_effect_variant_at_0x15"]!=1:
                continue
            for selector in list(range(26,38))+list(range(45,60)):
                if selector in (38,39,40,41,42,43,44):
                    continue
                self.assertIn(row[f"native_effect_s{selector:02d}_raw"],(0,1),
                              (row["item_id"],selector))
            for selector in [60,61,62,63,64,65,68,69,70]:
                self.assertTrue(-128<=row[f"native_effect_s{selector:02d}_raw"]<=127)

if __name__=="__main__":
    unittest.main()
