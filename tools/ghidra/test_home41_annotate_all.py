#!/usr/bin/env python3
"""Regression tests for conservative HOME41 function / instruction annotations."""
import unittest
import tempfile
from pathlib import Path
import home41_annotate_all as a

class TestAnnotations(unittest.TestCase):
    def test_native_ghidra_image_base(self):
        self.assertEqual(a.native(".text::0060e994"),0x50E994)
        self.assertEqual(a.native(".text::006306b4"),0x5306B4)

    def test_native_verified_vs_unknown(self):
        label,note,level=a.purpose(".text::0060e994",
                                  "FUN_.text__0060e994","return 0;")
        self.assertEqual(level,"VERIFIED_NATIVE_STATIC")
        self.assertIn("游标",note)
        label,note,level=a.purpose(".text::006a3100",
                                  "FUN_.text__006a3100","return 0;")
        self.assertIn(level,("UNRESOLVED","BEHAVIOR_OBSERVED"))
        self.assertNotIn("服务器",note)

    def test_instruction_explanations_are_opcode_grounded(self):
        self.assertEqual(a.opcode("BL","bl 0x60000",[".text::006306b4"])[0],"CALL")
        self.assertEqual(a.opcode("LDRH","ldrh w1,[x2,#0xd6]",[])[0],"READ")
        self.assertEqual(a.opcode("STRB","strb w8,[x19,#0xc]",[])[0],"WRITE")
        self.assertEqual(a.opcode("CBNZ","cbnz x0,...",[])[0],"BRANCH")
        cat,text=a.opcode("UNRECOGNIZED","opaque",[])
        self.assertEqual(cat,"UNRESOLVED")
        self.assertIn("待复核",text)

    def test_c_line_comments_preserve_upstream_blocks(self):
        self.assertEqual(a.cnote("/* native comment */"),"")
        self.assertIn("返回",a.cnote("  return param_1;"))
        self.assertIn("条件",a.cnote("  if (param_1 == 3) {"))

    def test_comment_C_is_pure_addition(self):
        with tempfile.TemporaryDirectory() as td:
            root=Path(td)
            original=root/"in.c"
            original.write_text(
                "/* Original Ghidra C */\nvoid FUN(void)\n{\n  memcpy((void*)1,(void*)2,1);\n  return;\n}\n",
                encoding="utf-8")
            out=root/"out.c"
            n=a.annotate_c(original,out,"SUB_1234","用途待查","UNRESOLVED")
            self.assertGreater(n,0)
            new=out.read_text(encoding="utf-8")
            self.assertIn("/* Original Ghidra C */",new)
            self.assertIn("memcpy((void*)1,(void*)2,1);",new)
            self.assertIn("原有 Ghidra C 表达式未改动",new)
            self.assertIn("自动静态注释",new)

    def test_sqlite_split_recreates_sha(self):
        with tempfile.TemporaryDirectory() as td:
            root=Path(td)
            original=root/"db.sqlite"
            original.write_bytes(b"sqlite body 1234"*4000)
            m=a.split_file(original,root/"parts")
            reconstructed=b"".join((root/"parts"/part["path"]).read_bytes()
                                   for part in m["parts"])
            self.assertEqual(reconstructed,original.read_bytes())
            self.assertEqual(a.digest(original),m["sha256"])

if __name__=="__main__":
    unittest.main()
