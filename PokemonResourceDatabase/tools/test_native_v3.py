import sqlite3,unittest
from schema_manager import connect,migrate
class NativeV3(unittest.TestCase):
    def setUp(self):
        self.c=connect(":memory:");migrate(self.c)
        self.c.executescript("""
        INSERT INTO games VALUES('HOME','HOME');
        INSERT INTO platforms VALUES('switch','Switch');
        INSERT INTO source_releases VALUES('r','HOME','switch','4.1.0','');
        INSERT INTO evidence(evidence_id,release_id,uri) VALUES('e','r','fixture');
        INSERT INTO data_datasets VALUES('r','h','PokemonCore','hayabusa','structural','e'),('r','g','PokemonCore','global','structural','e');
        INSERT INTO native_personal_selectors VALUES('r',3,100,'h','static_verified','e'),('r',0,108,'g','static_verified','e'),('r',6,116,NULL,'unsupported','e');
        INSERT INTO native_learnset_layouts VALUES('r','h',0,1,2,'e'),('r','g',1,0,NULL,'e');
        INSERT INTO native_personal_records VALUES('r','h',0,25,0,10,20,1,'e'),('r','g',0,25,0,10,20,2,'e'),('r','g',1,0,0,30,40,0,'e');
        INSERT INTO native_personal_learnset_entries VALUES('r','h',0,0,50,84,1,9),('r','g',0,0,50,NULL,33,NULL),('r','g',0,1,60,101,45,NULL);
        """)
    def tearDown(self):self.c.close()
    def test_layout_and_null(self):
        self.assertEqual(self.c.execute("SELECT selector,native_move_id,native_code,native_extra_code FROM v_native_personal_learnsets ORDER BY selector,ordinal").fetchall(),[(0,33,0,0),(0,45,101,0),(3,84,1,9)])
        self.assertIsNone(self.c.execute("SELECT field0_u16 FROM native_personal_learnset_entries WHERE dataset_id='g' AND ordinal=0").fetchone()[0])
        self.assertEqual(self.c.execute("SELECT vector_count FROM native_personal_records WHERE native_species=0").fetchone()[0],0)
    def test_fk(self):
        with self.assertRaises(sqlite3.IntegrityError):self.c.execute("INSERT INTO native_personal_learnset_entries VALUES('r','g',99,0,0,1,1,NULL)")
        with self.assertRaises(sqlite3.IntegrityError):self.c.execute("INSERT INTO native_personal_selectors VALUES('r',4,200,'g','static_verified','e')")
        with self.assertRaises(sqlite3.IntegrityError):self.c.execute("INSERT INTO native_personal_selectors VALUES('r',5,200,NULL,'static_verified','e')")
    def test_guard_shared(self):
        self.c.execute("INSERT INTO native_move_guard_tables VALUES('r','t',1000,1,'e')")
        self.c.execute("INSERT INTO native_move_guard_entries VALUES('r','t',0,99)")
        for s in (0,3):self.c.execute("INSERT INTO native_move_guard_rules VALUES('r',?,'exclude_table','t',2,NULL,'e')",(s,))
        self.assertEqual(self.c.execute("SELECT count(*) FROM native_move_guard_entries").fetchone()[0],1)
        with self.assertRaises(sqlite3.IntegrityError):self.c.execute("INSERT INTO native_move_guard_rules VALUES('r',6,'dynamic',NULL,NULL,NULL,'e')")
