#!/usr/bin/env python3
"""P8 HOME 4.1.0 original ELF item execution-producer evidence regressions.

Tests intentionally distinguish raw BLR instruction, resolved source of BLR
callee register, and a proved effect *business* consumer. No inference of
battle mechanics is made solely from item.dat record contents.
"""
from __future__ import annotations
import hashlib
import json
import struct
import unittest
from pathlib import Path
from unpack_home41 import NCA

ROOT=Path(__file__).resolve().parents[1]
ELF=ROOT/NCA/"0/main.elf"
DATA=ROOT/"derived/4.1.0/native_item_topics"
EXPECTED_SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"

class P8ItemExecutorEvidenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw=ELF.read_bytes()
        cls.refs=json.loads((DATA/"p8_item_indirect_xrefs.json").read_text(encoding="utf-8"))
        cls.triage=json.loads((DATA/"p8_item_local_blr_triage.json").read_text(encoding="utf-8"))
        cls.direct=json.loads((DATA/"p7_item_upstream_calls.json").read_text(encoding="utf-8"))

    def test_original_sha_and_scope(self):
        self.assertEqual(hashlib.sha256(self.raw).hexdigest(),EXPECTED_SHA)
        self.assertEqual(self.refs["original_elf_sha256"],EXPECTED_SHA)
        self.assertEqual(self.triage["elf_sha256"],EXPECTED_SHA)
        self.assertEqual(self.direct["elf_sha256"],EXPECTED_SHA)
        self.assertGreater(self.refs["executable_code_words_scanned"],1500000)
        self.assertEqual(self.refs["address_taken_pc_relative_candidate_count"],2)
        self.assertEqual(self.refs["relocation_to_item_address_candidate_count"],0)

    def test_candidate_adr_destinations_are_internal_jump_tables(self):
        d={r["pc"]:r["target"] for r in self.refs["address_taken_pc_relative_candidates"]}
        self.assertEqual(d,{"0x4FD0CC":"0x4FD0DC","0x4FD284":"0x4FD294"})
        self.assertFalse(any(r["exact_target_function"] for r in self.refs["address_taken_pc_relative_candidates"]))

    def test_nine_indirect_register_sources_do_not_prove_executor(self):
        rows=self.triage["rows"]
        self.assertEqual(len(rows),9)
        self.assertEqual(self.triage["interface_slot_0x18_sites"],7)
        self.assertEqual(self.triage["interface_slot_0x10_sites"],1)
        self.assertEqual(self.triage["owner_callback_sites"],1)
        for row in rows:
            self.assertEqual(row["blr_argument_register"],"x8")
            self.assertEqual(row["resolved_target"],None)
            self.assertFalse(row["confirmed_item_property_or_battle_effect_call"])
            self.assertFalse(row["is_direct_item_property_dispatch"])
            prior=row["last_load_into_x8"]
            self.assertIsNotNone(prior)
            if row["target_source_class"]=="object_interface_slot_0x18":
                self.assertEqual(prior["operands"],"x8, [x8, #0x18]")
            elif row["target_source_class"]=="object_interface_slot_0x10":
                self.assertEqual(prior["operands"],"x8, [x8, #0x10]")
            else:
                self.assertEqual(prior["operands"],"x8, [x19, #0xe8]")
        self.assertFalse(self.triage["item_effect_selector_26_to_70_consumer_confirmed"])

    def test_complete_direct_dispatcher_callers_and_known_pouch_and_sprite(self):
        hits=self.direct["raw_branch_hits_targeting_item_selector_range"]
        incoming=[(x["callsite_rva"],x["target_rva"]) for x in hits if x["kind"]=="BL"]
        self.assertEqual([caller for caller,target in incoming if target=="0x4FD0B8"],
                         ["0x4FD4D4","0x4FD830"])
        self.assertIn(("0x266D58","0x4FD48C"),incoming)
        self.assertIn(("0x2C3054","0x4FD80C"),incoming)
        self.assertIn(("0x266BA4","0x4FD854"),incoming)
        # These are the only proved direct consumers. An indirect invocation
        # elsewhere remains possible; do not write "none exist" as a fact.

if __name__=="__main__":
    unittest.main()
