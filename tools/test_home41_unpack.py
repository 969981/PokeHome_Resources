#!/usr/bin/env python3
"""Tests for mirrored HOME 4.1.0 Unpack using actual repository bytes."""
from __future__ import annotations

import json
import shutil
import tempfile
import unittest
from pathlib import Path

from unpack_home41 import NCA, main, output_name, plan_paths

REPO = Path(__file__).resolve().parents[1]
ORIGINAL = REPO / NCA / "1"

WAZA = "bin/pml/waza/beluga/waza0001.wazabin"
TBL = "bin/beluga/flagwork/event_flags.tbl"
ARC = "bin/appli/mtt_common_fade/bin/mtt_common_fade.arc"
BNTX = "system_resource/texture/primitive_renderer_texture.bntx"


class MirrorTests(unittest.TestCase):
    def setUp(self):
        if not ORIGINAL.is_dir():
            self.skipTest("real 4.1.0 source assets unavailable")
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.repo = Path(self.temp.name) / "repository"
        self.root = self.repo / NCA / "1"
        self.root.mkdir(parents=True)
        for rel in (WAZA, TBL, ARC, BNTX):
            src = ORIGINAL / rel
            self.assertTrue(src.is_file(), f"real fixture missing: {src}")
            dst = self.root / rel
            dst.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(src, dst)
        self.out = self.repo / "Unpack"

    def run_unpack(self, *args):
        return main(["--root", str(self.repo), "--out", str(self.out), *args])

    def test_dry_run_creates_no_output(self):
        self.assertEqual(self.run_unpack("--dry-run"), 0)
        self.assertFalse(self.out.exists())

    def test_all_real_formats_and_verify(self):
        self.assertEqual(self.run_unpack("--all"), 0)
        mirror = self.out / NCA / "1"
        waza = json.loads((mirror / "bin/pml/waza/beluga/waza0001.json").read_text())
        self.assertEqual(waza["header"]["root"], 24)
        labels = json.loads((mirror / "bin/beluga/flagwork/event_flags.json").read_text())
        self.assertGreater(len(labels), 100)
        archive = json.loads((mirror / "bin/appli/mtt_common_fade/bin/mtt_common_fade.json").read_text())
        self.assertEqual(len(archive["members"]), 3)
        members = list((self.out / "_raw_members" / NCA / "1").rglob("*.*"))
        self.assertGreaterEqual(len([p for p in members if p.is_file()]), 3)
        png = mirror / "system_resource/texture/primitive_renderer_texture.png"
        self.assertTrue(png.read_bytes().startswith(b"\x89PNG\r\n\x1a\n"))
        manifest = json.loads((self.out / "_meta/manifest.json").read_text())
        self.assertEqual(len(manifest["files"]), 4)
        self.assertEqual(self.run_unpack("--verify", "--strict"), 0)
        self.assertEqual(self.run_unpack("--all", "--resume"), 0)

    def test_file_scoped_manifest_and_corruption_detection(self):
        self.assertEqual(self.run_unpack("--file", WAZA), 0)
        state = json.loads((self.out / "_meta/manifest.json").read_text())
        self.assertEqual(sum(x["status"] == "not_run" for x in state["files"]), 3)
        self.assertEqual(self.run_unpack("--verify", "--strict"), 1)
        self.assertEqual(self.run_unpack("--all"), 0)
        target = self.out / NCA / "1" / WAZA.replace(".wazabin", ".json")
        target.write_bytes(b"tampered")
        self.assertEqual(self.run_unpack("--verify"), 1)

    def test_scoped_verification_when_release_only_members_are_missing(self):
        self.assertEqual(self.run_unpack("--all"),0)
        members=[x for x in (self.out/"_raw_members").rglob("*") if x.is_file()]
        self.assertTrue(members)
        members[0].unlink()
        self.assertEqual(self.run_unpack("--verify","--kind","images","--strict"),0)
        self.assertEqual(self.run_unpack("--verify","--strict"),1)

    def test_collision_fallback(self):
        base = self.repo / NCA / "1" / "bin/collision"
        base.mkdir(parents=True)
        a, b = base / "same.arc", base / "same.tbl"
        a.write_bytes(b"unused")
        b.write_bytes(b"unused")
        plan, collisions = plan_paths([a, b], self.repo)
        self.assertEqual(len(collisions), 1)
        self.assertNotEqual(plan[a.relative_to(self.repo).as_posix()]["main"],
                            plan[b.relative_to(self.repo).as_posix()]["main"])

    def test_output_names(self):
        self.assertEqual(output_name(Path("bin/pml/waza0001.wazabin")),
                         Path("bin/pml/waza0001.json"))
        self.assertEqual(output_name(Path("bin/message/foo.dat")), Path("bin/message/foo.csv"))
        self.assertEqual(output_name(Path("bin/message/foo.tbl")), Path("bin/message/foo.json"))
        self.assertEqual(output_name(Path("bin/pokemon/a.bntx.gz")), Path("bin/pokemon/a.bntx"))


if __name__ == "__main__":
    unittest.main()
