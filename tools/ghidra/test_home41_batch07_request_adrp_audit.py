#!/usr/bin/env python3
"""Offline unit tests: synthetic ELF, no original game binary required."""
import importlib.util
import struct
import unittest
from pathlib import Path

SOURCE = Path(__file__).with_name("home41_batch07_request_adrp_audit.py")
spec = importlib.util.spec_from_file_location("home41_batch07", SOURCE)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)

def synth(matched=True):
    data = bytearray(0x3000)
    data[:16] = b"\x7fELF" + bytes([2, 1, 1]) + bytes(9)
    # ELF64 header with two PT_LOAD segments: text RVA 0, rodata RVA 0x4000.
    struct.pack_into("<HHIQQQIHHHHHH", data, 16, 2, 183, 1, 0, 64, 0, 0, 64, 56, 2, 0, 0, 0)
    struct.pack_into("<IIQQQQQQ", data, 64, 1, 5, 0x1000, 0, 0, 0x100, 0x100, 0x1000)
    struct.pack_into("<IIQQQQQQ", data, 120, 1, 4, 0x2000, 0x4000, 0, 0x100, 0x100, 0x1000)
    # ADRP X1, PC+4 pages -> 0x4000; ADD X1, X1, #offset
    struct.pack_into("<I", data, 0x1000, 0x90000021 if matched else 0x90000001)
    struct.pack_into("<I", data, 0x1004, 0x91000021)
    data[0x2000:0x2000+len(b"/api/box/operation/commit\x00")] = b"/api/box/operation/commit\x00"
    return bytes(data)

class Tests(unittest.TestCase):
    def test_positive_adrp_add(self):
        r = mod.scan(synth())
        self.assertGreaterEqual(r["literal_count"], 1)
        self.assertTrue(any(h["kind"] == "ADRP_ADD" and h["target_va"] == "0x4000"
                            for h in r["hits"]))
    def test_wrong_base_register_not_exact_match(self):
        # X1 in ADD, but ADRP writes X0 -> must not match.
        r = mod.scan(synth(matched=False))
        self.assertFalse(any(h["kind"] == "ADRP_ADD" for h in r["hits"]))
    def test_bad_header(self):
        with self.assertRaises(ValueError):
            mod.segments(b"not an ELF")

if __name__ == "__main__":
    unittest.main()
