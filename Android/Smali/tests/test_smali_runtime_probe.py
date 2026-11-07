import unittest
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from smali_runtime_probe import compare


def record(ok):
    return {"result": "visible_process_survived" if ok else "not_verified",
            "crash_evidence": {"counts": {"fatal signal": 0}}}


class RuntimeComparatorTests(unittest.TestCase):
    def test_both_live(self):
        self.assertEqual(compare(record(True), record(True), {})["status"],
                         "both_original_and_rebuilt_smoke_passed")

    def test_original_blocked(self):
        self.assertEqual(compare(record(True), record(False), {})["status"],
                         "blocked_reference_baseline_not_verified")

    def test_rebuilt_regressed(self):
        self.assertEqual(compare(record(False), record(True), {})["status"],
                         "reconstructed_app_launch_regression_or_unverified")

    def test_crash_signal(self):
        r = record(True)
        r["crash_evidence"]["counts"]["fatal signal"] = 2
        self.assertEqual(compare(r, record(True), {})["status"],
                         "rebuilt_process_alive_but_crash_signals_present")


if __name__ == "__main__":
    unittest.main()
