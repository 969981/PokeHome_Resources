#!/usr/bin/env python3
"""Real HOME 4.1.0 grammar, item hash, and form table regression tests."""
import csv
import io
import json
import tempfile
import unittest
from pathlib import Path

from home41_tables import decode_grammar, grammar_csv_rows, decode_item_hash_index, decode_form_storage_index
from unpack_home41 import NCA, export_one, output_name, type_for

ROOT = Path(__file__).resolve().parents[1]
ROMFS = ROOT / NCA / "1"


class TablesTests(unittest.TestCase):
    def read(self, rel):
        path = ROMFS / rel
        self.assertTrue(path.is_file(), path)
        return path.read_bytes()

    def test_grammar_real_languages(self):
        expected = {
            "English": (4, 6, ["the ", "The ", "a ", "A "]),
            "French": (12, 12, ["le ", "Le ", "un ", "Un "]),
            "German": (8, 9, ["der ", "Der ", "ein ", "Ein "]),
            "Italian": (16, 30, ["il ", "Il ", "un ", "Un "]),
            "Spanish": (16, 30, ["el ", "El ", "un ", "Un "]),
            "JPN": (0, 0, []),
            "Korean": (0, 0, []),
            "Simp_Chinese": (0, 0, []),
            "Trad_Chinese": (0, 0, []),
        }
        for lang, (count, width, terms) in expected.items():
            with self.subTest(lang=lang):
                raw = self.read("bin/message/grammar/" + lang + ".dat")
                d = decode_grammar(raw)
                self.assertEqual((d["term_count"], d["matrix_width"]), (count, width))
                self.assertEqual([x["text"] for x in d["terms"][:len(terms)]], terms)
                self.assertEqual(len(grammar_csv_rows(d)), count * width)
                self.assertTrue(all("resolved_text" in x for x in grammar_csv_rows(d)))
                if lang == "English":
                    self.assertEqual([v["text"] for v in d["terms"][2]["variants"]], ["a ", "an ", ""])
                    self.assertEqual(d["resolved_selectors"][13]["resolved_text"], "an ")
                if lang == "French":
                    self.assertIn("l’", [v["text"] for v in d["terms"][0]["variants"]])
                self.assertEqual(type_for(Path("bin/message/grammar/" + lang + ".dat")), "tables")

    def test_grammar_reject_corruption(self):
        data = self.read("bin/message/grammar/French.dat")
        with self.assertRaises(ValueError):
            decode_grammar(data[:-1])
        broken = bytearray(data)
        broken[2] = 0
        with self.assertRaises(ValueError):
            decode_grammar(broken)

    def test_item_hash_real(self):
        rel = "bin/pml/item/item_hash_to_index.dat"
        d = decode_item_hash_index(self.read(rel))
        self.assertEqual(d["count"], 1830)
        self.assertEqual(d["rows"][0]["hash_u64_hex"], "7A4866ADE63039A6")
        self.assertEqual(d["rows"][0]["index_candidate_u32"], 0)
        self.assertTrue(all(x["reserved_u32"] == 0 for x in d["rows"]))
        self.assertEqual(type_for(Path(rel)), "tables")
        with self.assertRaises(ValueError):
            decode_item_hash_index(self.read(rel)[:-1])

    def test_form_storage_real(self):
        rel = "bin/hayabusa/appli/pokedex/res_table/pokedex_form_storage_index_table.bin"
        d = decode_form_storage_index(self.read(rel))
        self.assertEqual(d["count"], 318)
        self.assertEqual(d["rows"][0]["packed_value_u32"], 0)
        self.assertEqual(d["rows"][1]["packed_value_u32"], 25)
        self.assertEqual(d["rows"][-1]["ordinal_u16"], 317)
        self.assertEqual(type_for(Path(rel)), "tables")
        with self.assertRaises(ValueError):
            decode_form_storage_index(self.read(rel)[:-1])

    def test_bfbs_typed_blacklist(self):
        from home41_extra_formats import Reflection
        from home41_reflection_decode import decode_reflected_scalar_vector_tables
        stem = "bin/ikkaku/world/ik_data/ui/pokedex/black_list_main/black_list_main_array"
        schema = Reflection(self.read(stem + ".bfbs")).extract()
        decoded = decode_reflected_scalar_vector_tables(self.read(stem + ".bin"), schema)
        self.assertEqual(decoded["root_table"], "PokedexBlackListMainArray")
        self.assertEqual(decoded["count"], 3)
        self.assertEqual(decoded["rows"],
                         [{"row": 0, "devNo": 720, "formNo": 0},
                          {"row": 1, "devNo": 720, "formNo": 1},
                          {"row": 2, "devNo": 721, "formNo": 0}])
        with tempfile.TemporaryDirectory() as folder:
            source = ROMFS / (stem + ".bin")
            out = Path(folder)
            status, count, warnings, outputs = export_one(
                source, ROOT, out, output_name(source.relative_to(ROOT)))
            self.assertEqual(status, "converted")
            self.assertEqual(count, 3)
            self.assertFalse(warnings)
            self.assertEqual(len(outputs), 2)
            self.assertTrue((out / NCA / "1" / (stem + ".csv")).is_file())

    def test_export_mirror_real(self):
        rels = ["bin/message/grammar/English.dat",
                "bin/pml/item/item_hash_to_index.dat",
                "bin/hayabusa/appli/pokedex/res_table/pokedex_form_storage_index_table.bin"]
        with tempfile.TemporaryDirectory() as folder:
            out = Path(folder)
            for rel in rels:
                src = ROMFS / rel
                main = output_name(src.relative_to(ROOT))
                status, count, warnings, paths = export_one(src, ROOT, out, main)
                self.assertEqual(status, "partial")
                self.assertTrue(warnings)
                self.assertGreater(count, 0)
                self.assertTrue(paths)
                self.assertTrue(all((out / p["path"]).is_file() for p in paths))
            grammar_main = out / NCA / "1/bin/message/grammar/English.csv"
            decoded = list(csv.DictReader(io.StringIO(grammar_main.read_text("utf-8-sig"))))
            self.assertEqual(decoded[0]["text"], "the ")
            matrix = out / NCA / "1/bin/message/grammar/English.selectors.csv"
            matrix_rows = list(csv.DictReader(io.StringIO(matrix.read_text(encoding="utf-8-sig"))))
            self.assertEqual(len(matrix_rows), 24)
            meta = json.loads((out / NCA / "1/bin/message/grammar/English.json").read_text())
            self.assertEqual(meta["term_count"], 4)


if __name__ == "__main__":
    unittest.main()
