#!/usr/bin/env python3
"""Real ROMFS regression for HOME 4.1.0 Pokédex/PML item cross-file tables."""
from __future__ import annotations

import csv
import io
import json
import tempfile
import unittest
from pathlib import Path

from home41_pokedex_item import (
    decode_pokemon_test, decode_pokemon_valid, decode_pokedex_form,
    decode_pokedex_shape, decode_pokedex_sugata, decode_item_data,
    join_item_hash, pokemon_key_crosswalk,
)
from home41_tables import decode_item_hash_index
from unpack_home41 import NCA, export_one, output_name, type_for

REPO = Path(__file__).resolve().parents[1]
ROMFS = REPO / NCA / "1"
PATHS = {
    "test": "bin/pokemon/pokemon_list/pokemon_test_list.bin",
    "valid": "bin/pokemon/pokemon_list/pokemon_valid_list.bin",
    "form": "bin/appli/mtt_pokedex/bin/form_data.bin",
    "shape": "bin/appli/mtt_pokedex/bin/shape_data.bin",
    "sugata": "bin/appli/mtt_pokedex/bin/sugata.bin",
    "item": "bin/pml/item/item.dat",
    "hash": "bin/pml/item/item_hash_to_index.dat",
}

class PokedexItemTests(unittest.TestCase):
    def read(self, key):
        path = ROMFS / PATHS[key]
        self.assertTrue(path.is_file(), path)
        return path.read_bytes()

    def test_pokemon_test_valid_exact_key_join(self):
        test = decode_pokemon_test(self.read("test"))
        valid = decode_pokemon_valid(self.read("valid"))
        form = decode_pokedex_form(self.read("form"))
        shape = decode_pokedex_shape(self.read("shape"))
        self.assertEqual(test["row_count"], 1593)
        self.assertEqual(test["distinct_keys"], 1492)
        self.assertEqual(test["duplicate_01_groups"], 101)
        self.assertEqual(valid["row_count"], 1492)
        self.assertEqual(form["row_count"], 1593)
        self.assertEqual(shape["row_count"], 2980)
        self.assertEqual(shape["pair_count"], 1490)
        self.assertEqual(shape["distinct_keys"], 1489)
        doc = pokemon_key_crosswalk(test, valid, form, shape)
        self.assertEqual(doc["test_keys"], 1492)
        self.assertEqual(doc["valid_keys"], 1492)
        self.assertEqual(doc["form_keys"], 1461)
        self.assertEqual(doc["shape_keys"], 1489)
        self.assertEqual(doc["test_without_form"], 85)
        self.assertEqual(doc["form_without_test"], 54)
        rows = {v["packed_key_u32"]: v for v in doc["rows"]}
        self.assertEqual(rows[3]["test_raw_codes"], "0;1")
        self.assertEqual(rows[3]["valid_raw_u32"], 3458)
        self.assertEqual(rows[3]["form_raw_codes"], "12;12;7")

    def test_sugata_fixed_raw_records(self):
        doc = decode_pokedex_sugata(self.read("sugata"))
        self.assertEqual(doc["record_count"], 3206)
        self.assertEqual(doc["record_stride"], 24)
        self.assertEqual(doc["rows"][0]["key_raw_u32"], 50331649)
        with self.assertRaises(ValueError):
            decode_pokedex_sugata(self.read("sugata")[:-4])

    def test_item_fixed_48_byte_records_and_hash_join(self):
        item = decode_item_data(self.read("item"))
        hashed = decode_item_hash_index(self.read("hash"))
        joined = join_item_hash(item, hashed)
        self.assertEqual(item["file_bytes"], 61092)
        self.assertEqual(item["lookup_count"], 1832)
        self.assertEqual(item["record_count"], 1166)
        self.assertEqual(item["record_stride"], 48)
        self.assertEqual(item["record_start"], 5124)
        self.assertEqual(item["aux_pair_count"], 348)
        self.assertEqual(joined["hash_rows"], 1830)
        self.assertEqual(joined["nonzero_both"], 1165)
        self.assertEqual(joined["presence_mismatch_rows"], [1829])
        self.assertEqual(item["record_rows"][-1]["offset"] + 48, 61092)
        self.assertEqual(item["index_rows"][1828]["record_index_raw_u16"], 1165)
        self.assertEqual(hashed["rows"][1829]["index_candidate_u32"], 1828)

    def test_corrupt_source_rejected(self):
        for key, parse in [("test", decode_pokemon_test),
                           ("valid", decode_pokemon_valid),
                           ("form", decode_pokedex_form),
                           ("shape", decode_pokedex_shape),
                           ("sugata", decode_pokedex_sugata),
                           ("item", decode_item_data)]:
            with self.subTest(key=key), self.assertRaises(ValueError):
                parse(self.read(key)[:-1])

    def test_mirror_all_six_sources(self):
        with tempfile.TemporaryDirectory() as name:
            out = Path(name)
            for kind in ("test", "valid", "form", "shape", "sugata", "item"):
                with self.subTest(kind=kind):
                    src = ROMFS / PATHS[kind]
                    self.assertEqual(type_for(Path(PATHS[kind])), "pokemon")
                    main = output_name(src.relative_to(REPO))
                    self.assertIsNotNone(main)
                    status, count, warn, outputs = export_one(src, REPO, out, main)
                    self.assertEqual(status, "partial")
                    self.assertTrue(warn)
                    self.assertGreater(count, 0)
                    self.assertTrue(outputs)
                    self.assertTrue(all((out / x["path"]).is_file() for x in outputs))
            id_path = out / NCA / "1/bin/pml/item/item.id_lookup.csv"
            id_rows = list(csv.DictReader(io.StringIO(id_path.read_text(encoding="utf-8-sig"))))
            self.assertEqual(len(id_rows), 1832)
            data_path = out / NCA / "1/bin/pml/item/item.csv"
            recs = list(csv.DictReader(io.StringIO(data_path.read_text(encoding="utf-8-sig"))))
            self.assertEqual(len(recs), 1166)
            meta = json.loads((out / NCA / "1/bin/pml/item/item.json").read_text())
            self.assertEqual(meta["record_stride"], 48)
            cross_path = out / NCA / "1/bin/pokemon/pokemon_list/pokemon_test_list.crosswalk.csv"
            self.assertTrue(cross_path.is_file())
            lines = list(csv.DictReader(io.StringIO(cross_path.read_text(encoding="utf-8-sig"))))
            self.assertGreaterEqual(len(lines), 1492)

if __name__ == "__main__":
    unittest.main()
