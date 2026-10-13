import importlib.util
import io
import sys
import tempfile
import unittest
import zipfile
from pathlib import Path

MODULE = Path(__file__).resolve().parents[1] / "tools" / "unpack_apk.py"
spec = importlib.util.spec_from_file_location("unpack_apk", MODULE)
unpack = importlib.util.module_from_spec(spec)
spec.loader.exec_module(unpack)


class ApkExtractionTests(unittest.TestCase):
    def test_reject_traversal(self):
        for name in ("../secret", "/absolute", "a/../../b", "a\\b", "C:/file"):
            with self.subTest(name=name):
                with self.assertRaises(ValueError):
                    unpack.safe_member(name)

    def test_preserve_case_collision_with_alias(self):
        with tempfile.TemporaryDirectory() as tmp:
            base = Path(tmp)
            apk = base / "case.apk"
            with zipfile.ZipFile(apk, "w") as z:
                z.writestr("res/iW.png", b"A")
                z.writestr("res/Iw.png", b"B")
            self.assertEqual(unpack.inspect_members(zipfile.ZipFile(apk).infolist()), 2)
            rows = unpack.extract(apk, base / "unpack")
            self.assertEqual(len(rows), 2)
            self.assertNotEqual(rows[0]["extraction_path"].casefold(),
                                rows[1]["extraction_path"].casefold())
            self.assertEqual({(base / "unpack/raw" / row["extraction_path"]).read_bytes()
                              for row in rows}, {b"A", b"B"})

    def test_archive_extract_and_checksum(self):
        with tempfile.TemporaryDirectory() as tmp:
            base = Path(tmp)
            apk = base / "example.apk"
            with zipfile.ZipFile(apk, "w") as out:
                out.writestr("assets/test.txt", "hello")
                out.writestr("classes.dex", b"dex-file-test")
            result = unpack.extract(apk, base / "out")
            self.assertEqual(len(result), 2)
            self.assertEqual((base / "out/raw/assets/test.txt").read_text(), "hello")
            self.assertEqual(result[0]["sha256"],
                             unpack.digest_file(base / "out/raw/assets/test.txt"))

    def test_duplicate_member_blocked(self):
        infos = [zipfile.ZipInfo("a"), zipfile.ZipInfo("a")]
        with self.assertRaises(ValueError):
            unpack.inspect_members(infos)


if __name__ == "__main__":
    unittest.main()
