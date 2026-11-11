#!/usr/bin/env python3
"""Offline-only tests. Fixture events are SYNTHETIC and never guest evidence."""
import json
import tempfile
import unittest
from pathlib import Path

import home41_switch_trace_validate as m

def event(kind,**kwargs):
    result={
      "schema":"HOME41_SWITCH_GDB_V1","session":"synthetic-001",
      "scenario":"normal","group":"core","event":kind,
      "time":"2026-11-11T00:00:00Z","thread":"1"}
    result.update(kwargs)
    return result
def start():
    return event("session_start",expected_elf_sha256=m.SHA,
                 main_base="0x700000000",point_count=4,
                 instrumentation="HARDWARE_EXECUTION_BREAKPOINTS_ONLY",
                 no_mutations=True,real_runtime_verified=False)
def write(path,items):
    path.write_text("\n".join(json.dumps(v) for v in items)+"\n","utf8")

class TestGuestTraceValidator(unittest.TestCase):
    def test_no_guest_does_not_claim_success(self):
        a=m.summarize([])
        self.assertEqual(a["status"],"UNVERIFIED_NO_GUEST_TRACE")
        self.assertFalse(a["application_ack_verified"])
        self.assertFalse(a["remote_persistence_verified"])

    def test_synthetic_zero_detail_not_remote_ack(self):
        with tempfile.TemporaryDirectory() as t:
            p=Path(t)/"mock.jsonl"
            write(p,[start(),event("detail_observed",detail_numeric=0,
                                  detail_numeric_valid=True),
                 event("parser_result",detail_observed=True,detail_numeric=0,
                       stage_counter=6,parser_return=0,app_error=0,http_status=200),
                 event("state_write_before",site="write_state8",
                       new_state=8,prior_state=7),
                 event("session_end",events_written=4)])
            r=m.summarize([p])
            s=r["sessions"][0]
            self.assertTrue(s["commit_detail_zero_and_local_fields_zero"])
            self.assertTrue(s["box_state8_write_observed"])
            self.assertFalse(r["application_ack_verified"])
            self.assertFalse(r["dirty_failure_recovery_verified"])

    def test_error_and_stale_dirty_not_rollback_proof(self):
        with tempfile.TemporaryDirectory() as t:
            p=Path(t)/"failure.jsonl"
            arr=[start(),event("dirty_snapshot",sample="dirty_clear_before",
                                count_effective=32,manager_dirty_count=32),
                 event("dirty_snapshot",sample="dirty_clear_after",
                       count_effective=0,manager_dirty_count=0),
                 event("reconcile_compare_result",comparison_word=1,differs=True)]
            for a in arr:a["scenario"]="failure"
            write(p,arr)
            r=m.summarize([p])
            self.assertEqual(r["sessions"][0]["dirty_snapshots_recorded"],2)
            self.assertFalse(r["dirty_failure_recovery_verified"])

    def test_reject_raw_response_and_identity_fields(self):
        with tempfile.TemporaryDirectory() as t:
            p=Path(t)/"unsafe.jsonl"
            write(p,[start(),event("parser_result",raw_decrypted_response="secret")])
            with self.assertRaisesRegex(ValueError,"unexpected/sensitive keys"):
                m.summarize([p])

    def test_reject_non_hardware_mode(self):
        with tempfile.TemporaryDirectory() as t:
            p=Path(t)/"soft.jsonl"
            s=start();s["instrumentation"]="SOFTWARE_BREAKPOINTS"
            write(p,[s])
            with self.assertRaisesRegex(ValueError,"not read-only"):
                m.summarize([p])

    def test_missing_session_start_is_not_guest_trace(self):
        with tempfile.TemporaryDirectory() as t:
            p=Path(t)/"synthetic.jsonl"
            write(p,[event("parser_result",stage_counter=6)])
            with self.assertRaisesRegex(ValueError,"no session_start"):
                m.summarize([p])

    def test_different_sessions_do_not_merge_causality(self):
        with tempfile.TemporaryDirectory() as t:
            p=Path(t)/"multi.jsonl"
            w=event("state_write_before",site="write_state8",new_state=8)
            w["session"]="synthetic-002"
            write(p,[start(),w])
            with self.assertRaisesRegex(ValueError,"multiple sessions"):
                m.summarize([p])

if __name__=="__main__":
    unittest.main()
