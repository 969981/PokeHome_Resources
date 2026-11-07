import hashlib
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import shard_large


class TestShards(unittest.TestCase):
    def test_roundtrip_and_idempotent_restore(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            (root / 'apktool.yml').write_text('version: 3.0.3\n')
            nested = root / 'lib/arm64-v8a'
            nested.mkdir(parents=True)
            data = bytes(range(256)) * 3000
            original = nested / 'big.so'
            original.write_bytes(data)
            with patch.object(shard_large, 'LIMIT', 4096), patch.object(shard_large, 'PART_SIZE', 3000):
                entries = shard_large.split(root)
            self.assertEqual(len(entries), 1)
            self.assertFalse(original.exists())
            self.assertGreater(len(entries[0]['parts']), 1)
            shard_large.restore(root, entries)
            shard_large.restore(root, entries)
            self.assertEqual(original.read_bytes(), data)
            for entry in entries:
                for part in entry['parts']:
                    self.assertEqual(shard_large.sha256_file(root / part['path']), part['sha256'])
            shard_large.verify_record(root, entries[0])
            original.unlink()
            shard_large.restore(root, entries)
            self.assertEqual(hashlib.sha256(original.read_bytes()).hexdigest(),
                             hashlib.sha256(data).hexdigest())


if __name__ == '__main__':
    unittest.main()
