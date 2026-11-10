#!/usr/bin/env python3
"""Standard-library smoke tests for tools/nx2elf_home41.py.

The synthetic ELF header is ONLY a wrapper test, not a real generated main.elf.
"""
import hashlib
import struct
import tempfile
import unittest
from pathlib import Path

import nx2elf_home41 as nx


class TestHome41NX2ELF(unittest.TestCase):
    def test_git_blob_and_sha256(self):
        value = b"NSO0" + bytes(range(24))
        with tempfile.TemporaryDirectory() as temp:
            source = Path(temp) / "main"
            source.write_bytes(value)
            actual = nx.digests(source)
            expected = hashlib.sha1(f"blob {len(value)}\0".encode() + value).hexdigest()
            self.assertEqual(actual["bytes"], len(value))
            self.assertEqual(actual["git_blob_sha1"], expected)
            self.assertEqual(actual["sha256"], hashlib.sha256(value).hexdigest())
            nx.validate_nso(source)

    def test_invalid_nso_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / "bad-main"
            path.write_bytes(b"\x7fELF")
            with self.assertRaises(ValueError):
                nx.validate_nso(path)

    def test_minimal_elf_header_only(self):
        # Checks header parser with an artificial 64B ELF64/AArch64 header.
        # It does NOT test nx2elf output or validate actual ELF section offsets.
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / "header-only.elf"
            data = bytearray(64)
            data[0:7] = b"\x7fELF\x02\x01\x01"
            struct.pack_into("<HHI", data, 16, 3, 183, 1)
            struct.pack_into("<H", data, 56, 5)
            struct.pack_into("<H", data, 60, 33)
            path.write_bytes(data)
            self.assertEqual(nx.validate_elf(path)["machine"], "AArch64")
            data[18:20] = (62).to_bytes(2, "little")  # x86-64, not AArch64
            path.write_bytes(data)
            with self.assertRaises(ValueError):
                nx.validate_elf(path)

    def test_committed_elf_baseline_when_present(self):
        target = Path(__file__).resolve().parents[1] / nx.NCA_DIR / "main.elf"
        if not target.is_file():
            self.skipTest("main.elf is absent in this reduced checkout")
        actual = nx.digests(target)
        self.assertEqual(actual["git_blob_sha1"], nx.BASELINE_ELF_GIT_BLOB)
        self.assertEqual(actual["sha256"], nx.BASELINE_ELF_SHA256)
        self.assertEqual(actual["bytes"], nx.BASELINE_ELF_BYTES)
        header = nx.validate_elf(target)
        self.assertEqual(header["program_headers"], 5)
        self.assertEqual(header["section_headers"], 33)


if __name__ == "__main__":
    unittest.main()
