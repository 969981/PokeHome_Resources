import sys
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from home41_auth_symbol_audit import analyze,number

class HomeAuthSymbolAuditTest(unittest.TestCase):
    def test_parse_numbers(self):
        self.assertEqual(number(0x1D334A4),0x1D334A4)
        self.assertEqual(number("0x1D334A4"),0x1D334A4)
        self.assertIsNone(number(-1))
        self.assertIsNone(number(True))
        self.assertIsNone(number("unknown"))
    def test_static_anchors_and_stage_index(self):
        data={"ScriptMethod":[
            {"Name":"ApiRequestAuthRegisterUser$$SerializeRequestParameter","Address":0x1D334A4},
            {"Name":"ApiRequestAuthRegisterUser$$CallAfterResponse","Address":0x1D33294},
            {"Name":"UDManager$$SetBasic","Address":0x1D763D0},
            {"Name":"ApiManager$$CallbackResponseHook","Address":12345},
            {"Name":"ApiRequestAuthCreateLogin$$CallAfterResponse","Address":67890},
            {"Name":"Unrelated$$Method","Address":7},
        ]}
        rows,summary=analyze(data)
        self.assertEqual(len(rows),5)
        self.assertEqual(summary["script_method_entries"],6)
        self.assertEqual(summary["group_counts"]["create_login"],1)
        self.assertTrue(all(
            x["status"]=="static_address_match"
            for x in summary["native_address_anchor_checks"].values()))
        self.assertFalse(summary["first_utid_observed"])
        self.assertNotIn("Unrelated",str(rows))
    def test_missing_symbols_do_not_claim_success(self):
        rows,summary=analyze({"ScriptMethod":[]})
        self.assertEqual(rows,[])
        self.assertEqual(summary["status"],"no_relevant_symbols")
        self.assertTrue(all(x["status"]=="missing_or_mismatch"
            for x in summary["native_address_anchor_checks"].values()))
    def test_schema_required(self):
        with self.assertRaises(ValueError):
            analyze({"methods":[]})

if __name__=="__main__":
    unittest.main()
