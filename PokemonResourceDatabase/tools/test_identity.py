import hashlib,sqlite3,tempfile,unittest
from pathlib import Path
from unittest.mock import patch
import schema_manager as sm
from identity import appearance_id,subject_id,content_id,png_cas_path
class IdentityTests(unittest.TestCase):
    def test_stable_appearance(self):
        a=appearance_id("form","female","normal","normal",[("sweet","star"),("coat","a")])
        b=appearance_id("form","female","normal","normal",[("coat","a"),("sweet","star")])
        self.assertEqual(a,b)
        self.assertNotEqual(a,appearance_id("form","female","shiny","normal",[("coat","a"),("sweet","star")]))
        with self.assertRaises(ValueError): appearance_id("form","female","normal","normal",[("sweet","star"),("sweet","rose")])
    def test_namespace_and_unicode(self):
        self.assertEqual(subject_id("pokemon","e\u0301"),subject_id("pokemon","\u00e9"))
        self.assertNotEqual(subject_id("pokemon","1"),subject_id("item","1"))
    def test_pixels_and_files(self):
        pixels=bytes(16)
        self.assertNotEqual(content_id(1,4,pixels),content_id(2,2,pixels))
        self.assertNotEqual(content_id(2,2,pixels),content_id(2,2,b"\x01"+pixels[1:]))
        with self.assertRaises(ValueError): content_id(2,2,b"bad")
        h=hashlib.sha256(b"file").hexdigest()
        self.assertEqual(png_cas_path(h),f"sha256/{h[:2]}/{h}.png")
    def test_migration_rollback(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d)
            (root/"0001_initial.sql").write_text("CREATE TABLE t(id INTEGER PRIMARY KEY) STRICT;")
            (root/"0002_bad.sql").write_text("CREATE TABLE should_rollback(id INTEGER PRIMARY KEY); INSERT INTO missing VALUES(1);")
            con=sm.connect(":memory:")
            with patch.object(sm,"MIG",root):
                with self.assertRaises(sqlite3.Error):sm.migrate(con)
                self.assertEqual(con.execute("PRAGMA user_version").fetchone()[0],1)
                self.assertEqual(con.execute("SELECT count(*) FROM schema_migrations").fetchone()[0],1)
                self.assertFalse(con.execute("SELECT 1 FROM sqlite_schema WHERE name='should_rollback'").fetchone())
            con.close()
