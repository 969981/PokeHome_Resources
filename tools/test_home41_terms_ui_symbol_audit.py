#!/usr/bin/env python3
"""Offline synthetic tests; never invoke HOME or accept agreements."""
import unittest

from home41_terms_ui_symbol_audit import audit_methods


class StaticTermsAuditTests(unittest.TestCase):
    def test_terms_and_firstboot_controllers_are_candidates(self):
        methods = [
            {"Name": "FirstBootViewTerms$$OnClickNext", "Address": "0x1F12345"},
            {"Name": "FirstBootViewPolicy$$OnClickAgree", "Address": "0x1F12346"},
            {"Name": "OtherView$$Noop", "Address": "0x1234"},
        ]
        result = audit_methods(methods)
        self.assertEqual(result["status"], "static_candidates_only")
        self.assertGreaterEqual(result["group_match_total"]["official_terms"], 2)
        self.assertGreaterEqual(result["group_match_total"]["onboarding"], 2)
        self.assertFalse(result["native_terms_page_identified"])
        self.assertFalse(result["terms_ui_tapped"])
        self.assertFalse(result["account_created"])
        self.assertFalse(result["utid_observed"])
        self.assertIn("0x1F12345", repr(result))

    def test_invalid_and_malformed_entries_are_ignored(self):
        methods = [
            None, True, {}, {"Name": 123},
            {"Name": "FirstBootViewTerms$$Foo", "Address": "broken"},
            {"Name": "FirstBootViewTerms$$Bad", "Address": -5},
            {"Name": "FirstBootViewTerms$$Good", "Address": 123},
        ]
        result = audit_methods(methods)
        self.assertTrue(result["methods"]["official_terms"])
        self.assertIn(None, [row["rva"] for row in result["methods"]["official_terms"]])
        self.assertFalse(result["account_created"])

    def test_invalid_input_is_rejected(self):
        self.assertEqual(audit_methods(None)["status"], "invalid_method_list")
        self.assertEqual(audit_methods({})["status"], "invalid_method_list")

    def test_names_without_method_separator_are_ignored(self):
        result = audit_methods([
            {"Name": "FirstBootViewTerms", "Address": "0x1"},
            {"Name": "FirstBootViewTerms$$OnClickNext", "Address": "0x1"}
        ])
        self.assertEqual(result["group_match_total"]["official_terms"], 1)


if __name__ == "__main__":
    unittest.main()
