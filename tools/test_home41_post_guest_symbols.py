#!/usr/bin/env python3
"""Synthetic offline tests: no client launch or registration."""
import unittest
from home41_post_guest_symbols import audit_methods, extract_declarations

class PostGuestAuditTests(unittest.TestCase):
    def test_groups_and_exact_rvas(self):
        sample={"ScriptMethod":[
            {"Name":"FirstBootBodyController$$ConfirmGestAccountSecond","Address":"0x1DE5318"},
            {"Name":"FirstBootBodyController$$GoToPhase","Address":0x1DE1C10},
            {"Name":"FirstBootBodyController$$SetUpForMTSelectIcon","Address":"0xAA44"},
            {"Name":"ExamplePrologueController$$Start","Address":"0x1234"},
            {"Name":"ApiManagerLogin$$AtuhRegisterUser","Address":"0x1D2F8DC"},
            {"Name":"Unrelated$$Done","Address":"0x2000"}
        ]}
        r=audit_methods(sample)
        self.assertEqual(r["status"],"static_symbol_candidates_only")
        self.assertTrue(any(x["rva"]=="0x1DE5318" for x in
                            r["methods"]["firstboot_controller"]))
        self.assertTrue(any(x["rva"]=="0xAA44" for x in
                            r["methods"]["profile_icon"]))
        self.assertTrue(any(x["rva"]=="0x1D2F8DC" for x in
                            r["methods"]["registration"]))
        self.assertFalse(r["post_guest_ui_observed"])
        self.assertFalse(r["registration_observed"])

    def test_reject_invalid_metadata_and_missing_methods(self):
        r=audit_methods({"ScriptMethod":[
            {"Name":"FirstBootBodyController$$Fake","Address":"not-an-address"},
            {"Name":"FirstBootBodyController$$Untrusted","Address":"-1"},
            {"Name":"FirstBootBodyController$$Foo","Address":0},
            {"Name":"FirstBootBodyController$$Method","Address":"0x1000"}
        ]})
        self.assertEqual(r["counts"]["firstboot_controller"],1)
        self.assertEqual(audit_methods({})["status"],"missing_script_method_list")

    def test_dump_declaration_exact_class_boundaries(self):
        dump="// Namespace: Game\npublic class FirstBootBodyController : MonoBehaviour\n{\n"\
             "    public void ConfirmGestAccountSecond();\n}\n"\
             "// Namespace: Game\npublic enum FirstBootBodyController.Phase\n{\n"\
             "    GEST_CONFIRMATION = 23,\n}\n"
        d=extract_declarations(dump)
        self.assertIn("ConfirmGestAccountSecond",d["FirstBootBodyController"][0])
        self.assertIn("GEST_CONFIRMATION",d["FirstBootBodyController.Phase"][0])
        self.assertEqual(d["FirstBootViewPrologue"],[])

if __name__=="__main__":
    unittest.main()
