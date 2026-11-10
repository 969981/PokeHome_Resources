#!/usr/bin/env python3
"""Offline no-Ghidra contract test for the SQLite evidence exporter."""
import gzip
import hashlib
import importlib.util
import json
import sqlite3
import tempfile
import unittest
from pathlib import Path

SOURCE = Path(__file__).with_name("home41_build_sqlite.py")
SPEC = importlib.util.spec_from_file_location("home41_build_sqlite", SOURCE)
mod = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(mod)

EVENTS = [
    {"type": "meta", "program": "main.elf", "language": "AARCH64:LE:64:v8A", "decompile_requested": True},
    {"type": "memory", "name": ".text", "start": "00001000", "end": "00002000",
     "length": 4096, "execute": True, "read": True, "write": False, "initialized": True},
    {"type": "function", "entry": "00001000", "name": "FUN_1000",
     "namespace": "Global", "body_min": "00001000", "body_max": "00001003",
     "body_bytes": 4, "signature": "void foo(void)", "thunk": False,
     "external": False, "source": "ANALYSIS"},
    {"type": "instruction", "address": "00001000", "length": 4,
     "bytes_hex": "00000014", "mnemonic": "b", "display": "b 00002000",
     "flow_type": "UNCONDITIONAL_JUMP", "fallthrough": None},
    {"type": "reference", "from": "00001000", "to": "00002000",
     "kind": "UNCONDITIONAL_CALL", "op_index": 0, "is_call": True,
     "is_jump": False, "is_data": False, "is_read": False,
     "is_write": False, "primary": True},
    {"type": "symbol", "address": "00001000", "name": "FUN_1000",
     "namespace": "Global", "symbol_type": "FUNCTION",
     "source": "ANALYSIS", "primary": True},
    {"type": "data", "address": "00002000", "length": 10,
     "datatype": "string", "value": "itemname", "is_string": True},
    {"type": "decompile", "entry": "00001000", "status": "OK",
     "c": "void foo(void) { }", "error": None},
    {"type": "summary", "functions": 1, "instructions": 1,
     "references": 1, "symbols": 1, "defined_data": 1,
     "decompiled_ok": 1, "decompiled_failed": 0,
     "decompile_requested": True, "complete": True}
]


class TestSQLiteExport(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.root = Path(self.temp.name)
        self.elf = self.root / "main.elf"
        self.elf.write_bytes(b"tiny deterministic ELF fixture")
        self.oldsha = mod.EXPECTED_ELF_SHA256
        mod.EXPECTED_ELF_SHA256 = hashlib.sha256(self.elf.read_bytes()).hexdigest()
        self.src = self.root / "events.ndjson.gz"
        self.db = self.root / "out.sqlite"

    def tearDown(self):
        mod.EXPECTED_ELF_SHA256 = self.oldsha
        self.temp.cleanup()

    def write(self, rows):
        with gzip.open(self.src, "wt", encoding="utf-8") as out:
            for row in rows:
                out.write(json.dumps(row) + "\n")

    def test_full_stream_and_queries(self):
        self.write(EVENTS)
        report = mod.build(self.elf, self.src, self.db)
        self.assertEqual("COMPLETE", report["status"])
        with sqlite3.connect(self.db) as c:
            self.assertEqual("ok", c.execute("PRAGMA integrity_check").fetchone()[0])
            self.assertEqual(1, c.execute("SELECT COUNT(*) FROM functions").fetchone()[0])
            self.assertEqual("00002000", c.execute("SELECT to_addr FROM call_edges").fetchone()[0])
            self.assertEqual("itemname", c.execute("SELECT preview FROM string_items").fetchone()[0])
            self.assertEqual("void foo(void) { }", c.execute("SELECT c FROM decompilation").fetchone()[0])

    def test_missing_final_summary_is_rejected(self):
        self.write(EVENTS[:-1])
        with self.assertRaisesRegex(ValueError, "completed summary"):
            mod.build(self.elf, self.src, self.db)
        self.assertFalse(self.db.exists())

    def test_mismatch_count_rejected(self):
        records = [dict(x) for x in EVENTS]
        records[-1]["functions"] = 2
        self.write(records)
        with self.assertRaisesRegex(ValueError, "summary mismatch"):
            mod.build(self.elf, self.src, self.db)

    def test_wrong_elf_rejected(self):
        mod.EXPECTED_ELF_SHA256 = "0" * 64
        self.write(EVENTS)
        with self.assertRaisesRegex(ValueError, "ELF SHA256 mismatch"):
            mod.build(self.elf, self.src, self.db)


if __name__ == "__main__":
    unittest.main()
