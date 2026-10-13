#!/usr/bin/env python3
"""Real 4.1.0 extension format regression tests, no fabricated input samples."""
import gzip
import json
import tempfile
import unittest
from pathlib import Path

from home41_extra_formats import Reflection, bfbs_to_fbs, decode_bnk, decode_bnsh, decode_bffnt, decode_akpk
from home41_bntx_to_png import decode_bntx
from unpack_home41 import NCA, export_one, output_name

ROMFS=Path(__file__).resolve().parents[1]/NCA/"1"

BFBS="bin/ikkaku/world/ik_data/ui/pokedex/black_list_main/black_list_main_array.bfbs"
PRMB="bin/appli/parameter/constant_data.prmb"
BNK="bin/sound/NX64/wwise/bank/Common_UI.bnk"
PCK="bin/sound/NX64/wwise/bank/Stream.pck"
BNSH="system_resource/shader/array_texture_renderer.bnsh"
FONT="bin/font/bmp/font_fs_32_00.bffnt"
ASTC="bin/pokemon/compress_capture_pokemon/poke_capture_1007_001_uk_n_00000000_f_n.bntx.gz"

class ExtraTests(unittest.TestCase):
    def source(self, rel):
        p=ROMFS/rel
        self.assertTrue(p.is_file(),p)
        return p

    def test_bfbs_reflection(self):
        doc=Reflection(self.source(BFBS).read_bytes()).extract()
        self.assertTrue(doc["objects"])
        self.assertTrue(doc["root_table"])
        self.assertIn("table ",bfbs_to_fbs(doc))
        self.assertEqual(doc["format"],"FlatBuffers binary reflection (BFBS)")

    def test_wwise_chunks(self):
        doc,payload=decode_bnk(self.source(BNK).read_bytes())
        self.assertEqual(doc["format"],"Wwise SoundBank")
        self.assertGreater(doc["version"],0)
        self.assertTrue(doc["chunks"])

    def test_bnsh_real_header(self):
        doc=decode_bnsh(self.source(BNSH).read_bytes())
        self.assertEqual(doc["declared_file_size_candidate"],doc["size_bytes"])

    def test_nintendo_font_sections(self):
        doc=decode_bffnt(self.source(FONT).read_bytes())
        self.assertTrue(any(x["tag"]=="FINF" for x in doc["sections"]))

    def test_wwise_package(self):
        doc=decode_akpk(self.source(PCK).read_bytes())
        self.assertGreater(doc["header_size"],100)

    def test_prmb_flatbuffer(self):
        with tempfile.TemporaryDirectory() as d:
            src=self.source(PRMB)
            repo=ROMFS.parents[1]
            out=Path(d)
            name=output_name(src.relative_to(repo))
            st,n,w,paths=export_one(src,repo,out,name)
            self.assertEqual(st,"partial")
            self.assertGreater(n,0)
            self.assertTrue((out/name).is_file())

    def test_bc7_optional_real_image(self):
        blob=gzip.decompress(self.source(ASTC).read_bytes())
        results=list(decode_bntx(blob))
        self.assertTrue(results)
        self.assertTrue(all(x["png_status"]=="decoded" for x,_ in results),str(results[0][0]))
        for info,png in results:
            self.assertTrue(png.startswith(b"\x89PNG\r\n\x1a\n"))
            self.assertEqual(info["format"],"0x2001")
            self.assertEqual(info["block_dimensions"],[4,4])

if __name__=="__main__":
    unittest.main()
