#!/usr/bin/env python3
"""P6 HOME original topics/ELF native flag regression."""
from __future__ import annotations
import json
import unittest
from pathlib import Path
from home41_topics import decode_pokedex_topics
from home41_topics_semantic import (
    annotate_topics, native_species_form_group_gate,
    NATIVE_BIT_POSITION, NATIVE_ELF_SHA,
)
from unpack_home41 import NCA

REPO=Path(__file__).resolve().parents[1]
TOPICS=REPO / NCA / "1/bin/appli/mtt_pokedex/bin/topics_data.bin"
NATIVE=REPO/"derived/4.1.0/native_item_topics/p6_topics_native_flags.json"


class TopicsSemanticTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native=json.loads(NATIVE.read_text(encoding="utf-8"))
        cls.doc=decode_pokedex_topics(TOPICS.read_bytes())
        cls.typed=annotate_topics(cls.doc)
        cls.exceptions={
            (int(x["species_candidate_u16"]),int(x["form_candidate_u16"]))
            for x in cls.native["group_5_pairs"]
        }

    def test_real_native_game_bits_and_500_entries(self):
        self.assertEqual(tuple(self.native["group_bit_shifts"]),NATIVE_BIT_POSITION)
        self.assertEqual(self.native["elf_sha256"],NATIVE_ELF_SHA)
        self.assertEqual(self.typed["reference_count"],500)
        self.assertEqual(
            [g["species_form_references"] for g in self.typed["group_summary"]],
            [75,73,68,80,70,67,67])
        self.assertEqual(
            [g["native_flags_bit_position"] for g in self.typed["group_summary"]],
            [0,1,2,5,6,7,9])
        self.assertEqual(self.typed["active_topics"],140)

    def test_starter_species_and_form_reference_structure(self):
        expected=((19,69,43,16),(810,813,816),(387,393,390),
                  (501,722,155),(906,909,912),(498,152,158),(4,1,7))
        for group,triplet in enumerate(expected):
            vals=[r["species_no_candidate_u32"] for r in self.typed["rows"]
                  if r["group_index"]==group and r["topic_index"]==0]
            self.assertEqual(tuple(vals),triplet)
        self.assertTrue(all(r["form_no_candidate_u32"]<=6 for r in self.typed["rows"]))
        self.assertTrue(all(r["species_no_candidate_u32"]>0 for r in self.typed["rows"]))
        self.assertTrue(all(0<=r["entry_index_0_to_8"]<9 for r in self.typed["rows"]))

    def test_group5_exception_bit8_exact_native_condition(self):
        self.assertEqual(len(self.exceptions),96)
        special=(3,1)  # Venusaur candidate Mega special form; appears at index 0
        self.assertIn(special,self.exceptions)
        self.assertFalse(native_species_form_group_gate(1<<7,5,*special,self.exceptions))
        self.assertFalse(native_species_form_group_gate(1<<8,5,*special,self.exceptions))
        self.assertTrue(native_species_form_group_gate((1<<7)|(1<<8),5,*special,self.exceptions))
        self.assertTrue(native_species_form_group_gate(1<<7,5,498,0,self.exceptions))
        self.assertTrue(native_species_form_group_gate(1<<9,6,4,0,self.exceptions))
        self.assertFalse(native_species_form_group_gate(1<<7,6,4,0,self.exceptions))
        with self.assertRaises(ValueError):
            native_species_form_group_gate(1,7,3,1,self.exceptions)

if __name__=="__main__":
    unittest.main()
