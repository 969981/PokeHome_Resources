import json
import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from home41_auth_timeline import analyze
def evt(name,t,**fields):return json.dumps(dict(event=name,elapsed_ms=t,**fields))
class TimelineTests(unittest.TestCase):
    def test_empty_is_not_success(self):
        result=analyze([])
        self.assertEqual(result["status"],"no_real_basic_utid_observed")
        self.assertFalse(result["first_basic_utid_seen"])
    def test_real_order_and_only_allowed_fields(self):
        lines=[evt("registration_response_handler_enter",1500),
               evt("first_basic_utid",1700,six_digit_candidate="888888",token="secret"),
               evt("registration_request_serializer_enter",500)]
        r=analyze(lines)
        self.assertEqual(r["delta_ms_from_register_response"],200)
        self.assertEqual(r["first_basic_relative_to_registration_response"],"after")
        self.assertEqual(r["six_digit_candidate"],"888888")
        self.assertNotIn("secret",json.dumps(r))
        self.assertNotIn("token",json.dumps(r))
    def test_no_registration_not_attributed(self):
        r=analyze([evt("first_basic_utid",500,six_digit_candidate="000000")])
        self.assertEqual(r["first_basic_relative_to_registration_response"],"unknown")
        self.assertIsNone(r["delta_ms_from_register_response"])
    def test_ignore_untrusted_logs(self):
        r=analyze([evt("unknown",10,authorization="hi"),"not json",
                   evt("first_basic_utid",30,six_digit_candidate="12345"),
                   evt("registration_response_handler_enter",-1)])
        self.assertEqual(r["event_count"],0)
if __name__=="__main__":
    unittest.main()
