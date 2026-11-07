import unittest
import sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"tools"))
from early_tid_candidate import candidate_tid7, result

class EarlyTidCandidateTest(unittest.TestCase):
    def test_boundaries(self):
        self.assertEqual(candidate_tid7("0"),"000000")
        self.assertEqual(candidate_tid7("888888"),"888888")
        self.assertEqual(candidate_tid7("4294967295"),"967295")
        self.assertEqual(candidate_tid7("1000001"),"000001")
    def test_compare(self):
        data=result("888888","888888")
        self.assertTrue(data["candidate_equals_target"])
        self.assertFalse(data["new_account_created"])
    def test_reject(self):
        for raw in ("-1","+1","4294967296","abc","123.5","12345678901"):
            with self.assertRaises(ValueError):
                candidate_tid7(raw)
        for target in ("88888","8888888","x88888"):
            with self.assertRaises(ValueError):
                result("888888",target)

if __name__=="__main__":
    unittest.main()
