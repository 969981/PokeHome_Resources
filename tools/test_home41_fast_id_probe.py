import json
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]/"tools"))
from home41_fast_id_probe import parse_safe_event, evaluate, main


def evt(name, **kw):
    return json.dumps({"event": name, "elapsed_ms": 100, **kw})


class FastIdTests(unittest.TestCase):
    def test_live_candidate_match_needs_display_validation(self):
        inputs = [evt("registration_response_handler_enter"), evt("first_basic_utid",
            six_digit_candidate="888888", observed_common_response_basic_consumer=True,
            token="DO_NOT_STORE", uuid="DO_NOT_STORE")]
        events = [parse_safe_event(v) for v in inputs]
        result = evaluate(events, "888888", "offline_untrusted_fixture")
        self.assertEqual(result["status"], "candidate_matches_target_unverified_display")
        self.assertFalse(result["tid7_semantics_confirmed"])
        self.assertNotIn("DO_NOT_STORE", json.dumps(result))
        self.assertFalse(result["account_created_or_deleted"])

    def test_unverified_callsite(self):
        e = parse_safe_event(evt("first_basic_utid", six_digit_candidate="123456",
            observed_common_response_basic_consumer=False))
        self.assertEqual(evaluate([e], "123456", "fixture")["status"],
                         "candidate_seen_unverified_callsite")

    def test_nonmatch_does_not_delete(self):
        e = parse_safe_event(evt("first_basic_utid", six_digit_candidate="123456",
            observed_common_response_basic_consumer=True))
        r = evaluate([e], "888888", "fixture")
        self.assertEqual(r["status"], "candidate_does_not_match_target")
        self.assertFalse(r["account_created_or_deleted"])

    def test_absent_or_unsupported(self):
        self.assertEqual(evaluate([], "888888", "fixture")["status"], "no_first_basic_utid_observed")
        self.assertEqual(evaluate([parse_safe_event(evt("unsupported_native_arch"))], "888888", "fixture")["status"], "unsupported_native_arch")

    def test_drop_secrets_and_bad_values(self):
        self.assertIsNone(parse_safe_event('{"event":"first_basic_utid","six_digit_candidate":"12345"}'))
        self.assertIsNone(parse_safe_event('{"event":"first_basic_utid","six_digit_candidate":"1234567"}'))
        self.assertIsNone(parse_safe_event('some access_token=secret'))
        self.assertIsNone(parse_safe_event(evt("unknown", access_token="secret")))
        self.assertEqual(parse_safe_event(evt("first_basic_utid", six_digit_candidate="000000",
            observed_common_response_basic_consumer=True, password="secret"))["six_digit_candidate"], "000000")

    def test_no_fake_registration_from_offline_fixture(self):
        from tempfile import TemporaryDirectory
        with TemporaryDirectory() as d:
            p = Path(d)/"fixture.jsonl"
            p.write_text(evt("first_basic_utid", six_digit_candidate="000001",
                observed_common_response_basic_consumer=True), encoding="utf-8")
            self.assertEqual(main(["--input",str(p),"--target","888888"]),0)


if __name__ == "__main__":
    unittest.main()
