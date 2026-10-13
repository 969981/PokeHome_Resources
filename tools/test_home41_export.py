#!/usr/bin/env python3
"""Smoke tests against actual 4.1.0 files in PokeHome_Resources (no fixtures invented)."""
import json
import tempfile
import unittest
from pathlib import Path
from export_home41_resources import (
    convert, fbs_details, layout_sections, read_limited, safe_member, run
)
from home41_romfs_core import ahtb_labels, sarc_members

ROOT = Path(__file__).resolve().parents[1] / "57b83ea8c0af21ef26e2519b9580b373_NCA" / "1"

class ConverterSmokeTests(unittest.TestCase):
    def setUp(self):
        self.assertTrue(ROOT.is_dir(), f"Missing actual source: {ROOT}")
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.out = Path(self.tmp.name)

    def check(self, relative, kind="all"):
        p = ROOT / relative
        self.assertTrue(p.is_file(), str(p))
        return convert(p, ROOT, self.out, kind, False, None, False)

    def test_ahtb_real_labels(self):
        rel = "bin/beluga/flagwork/event_flags.tbl"
        actual = ahtb_labels(read_limited(ROOT / rel))
        self.assertGreater(len(actual), 100)
        self.assertTrue(actual[0][0].startswith("FE_"))
        status, n, target = self.check(rel, "messages")
        self.assertEqual(status, "ahtb_labels")
        self.assertEqual(n, len(actual))
        self.assertTrue((self.out / target).is_file())

    def test_waza_real_flatbuffer(self):
        rel = "bin/pml/waza/beluga/waza0001.wazabin"
        report = fbs_details(read_limited(ROOT / rel))
        self.assertEqual(report["header"]["root"], 24)
        status, _, output = self.check(rel, "flatbuffers")
        self.assertEqual(status, "flatbuffer_structure_only")
        self.assertEqual(json.loads((self.out / output).read_text(encoding="utf-8"))["header"]["root"], 24)

    def test_ui_sarc_real_bflyt_and_bflan(self):
        rel = "bin/appli/mtt_common_fade/bin/mtt_common_fade.arc"
        members = sarc_members(read_limited(ROOT / rel))
        self.assertEqual(len(members), 3)
        status, n, output = self.check(rel, "archives")
        self.assertEqual(status, "sarc_members")
        self.assertEqual(n, 3)
        self.assertTrue((self.out / output).is_file())
        self.assertTrue((self.out / "layouts" / rel / "blyt/mtt_common_fade.bflyt.json").is_file())

    def test_sort_table_u16(self):
        rel = "bin/appli/sort_string/English/item_sort_table.dat"
        status, n, output = self.check(rel, "messages")
        self.assertEqual(status, "sort_u16")
        self.assertEqual(n, 5368 // 2)
        self.assertTrue((self.out / output).is_file())

    def test_bntx_metadata_not_fake_png(self):
        rel = "system_resource/texture/primitive_renderer_texture.bntx"
        status, _, output = self.check(rel, "images")
        self.assertEqual(status, "bntx_metadata")
        self.assertTrue((self.out / output).is_file())
        self.assertFalse(list(self.out.rglob("*.png")))

    def test_sarc_path_traversal_rejected(self):
        with self.assertRaises(ValueError):
            safe_member("../escape.png")
        with self.assertRaises(ValueError):
            safe_member("/absolute.png")

if __name__ == "__main__":
    unittest.main()
