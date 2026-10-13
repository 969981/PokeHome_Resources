#!/usr/bin/env python3
"""Real HOME 4.1.0 fixture tests: BNTX swizzle+BCn -> PNG."""
import struct
import unittest
import zlib
from pathlib import Path
from home41_bntx_to_png import decode_bntx, png_rgba
from home41_romfs_core import sarc_members

ROOT = Path(__file__).resolve().parents[1] / "57b83ea8c0af21ef26e2519b9580b373_NCA" / "1"

def from_arc(path):
    data = (ROOT / "bin" / "appli" / path).read_bytes()
    entries = sarc_members(data)
    return [data[e["offset"]:e["offset"] + e["bytes"]]
            for e in entries if e["name"].endswith(".bntx")]

def validate_png(data, w, h):
    assert data[:8] == b"\x89PNG\r\n\x1a\n"
    assert struct.unpack_from(">II", data, 16) == (w, h)
    pos, decoded = 8, b""
    while pos < len(data):
        n = struct.unpack_from(">I", data, pos)[0]
        tag = data[pos + 4:pos + 8]
        payload = data[pos + 8:pos + 8 + n]
        expected = struct.unpack_from(">I", data, pos + 8 + n)[0]
        assert zlib.crc32(tag + payload) & 0xffffffff == expected
        if tag == b"IDAT":
            decoded += zlib.decompress(payload)
        pos += 12 + n
        if tag == b"IEND":
            break
    assert len(decoded) == h * (1 + w * 4)

class BntxRealTests(unittest.TestCase):
    def test_primitive_rgba8_white(self):
        bntx = (ROOT / "system_resource/texture/primitive_renderer_texture.bntx").read_bytes()
        parsed = list(decode_bntx(bntx))
        self.assertEqual(len(parsed), 1)
        meta, png = parsed[0]
        self.assertEqual(meta["format"], "0x0B01")
        self.assertEqual((meta["width"],meta["height"]), (32,32))
        validate_png(png, 32, 32)

    def test_real_bc3_pokerus(self):
        data = from_arc("icon_pokerus/bin/icon_pokerus.arc")
        self.assertEqual(len(data), 1)
        parsed = list(decode_bntx(data[0]))
        self.assertEqual(len(parsed), 2)
        for meta, png in parsed:
            self.assertEqual(meta["format"], "0x1C01")
            validate_png(png, 44, 44)

    def test_real_bc3_label(self):
        data = from_arc("icon_label/bin/icon_label.arc")
        parsed = list(decode_bntx(data[0]))
        self.assertEqual(len(parsed), 1)
        validate_png(parsed[0][1], 64, 64)

    def test_real_bc5_generation_twelve(self):
        data = from_arc("icon_generation/bin/icon_generation.arc")
        parsed = list(decode_bntx(data[0]))
        self.assertEqual(len(parsed), 12)
        for meta, png in parsed:
            self.assertEqual(meta["format"], "0x1E01")
            self.assertIn("BC5", meta["color_interpretation"])
            validate_png(png, 64, 64)

if __name__ == "__main__":
    unittest.main()
