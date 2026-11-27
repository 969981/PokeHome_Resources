import unittest
from schema_manager import connect,migrate
class ScalarV4(unittest.TestCase):
    def test_native_defaults_and_le(self):
        c=connect(":memory:");migrate(c)
        c.executescript("""
        INSERT INTO games VALUES('HOME','HOME');
        INSERT INTO platforms VALUES('switch','Switch');
        INSERT INTO source_releases VALUES('r','HOME','switch','4.1.0','');
        INSERT INTO evidence(evidence_id,release_id,uri) VALUES('e','r','fixture');
        INSERT INTO data_datasets VALUES('r','p','PokemonCore','global','structural','e'),('r','w','MoveCore','beluga','structural','e');
        INSERT INTO native_personal_selectors VALUES('r',0,100,'p','static_verified','e'),('r',1,108,NULL,'unsupported','e');
        INSERT INTO native_learnset_layouts VALUES('r','p',1,0,NULL,'e');
        INSERT INTO native_personal_records VALUES('r','p',0,25,0,10,20,0,'e');
        INSERT INTO native_personal_fields VALUES('r','p',0,5,'3412');
        INSERT INTO native_personal_fields VALUES('r','p',0,2,'02');
        INSERT INTO native_scalar_getters VALUES
          ('r','p','personal',5,0,136,1000,2,'unsigned',0,NULL,'ability1_raw','sample_supported','e'),
          ('r','p','personal',2,0,48,1004,1,'nonzero_bool',0,NULL,'flag2','sample_supported','e'),
          ('r','p','personal',8,0,72,1008,1,'unsigned',0,NULL,'base_hp','sample_supported','e');
        """)
        self.assertEqual(c.execute("SELECT field_index,present,raw_value,native_value FROM v_native_scalar_values ORDER BY field_index").fetchall(),[(2,1,2,1),(5,1,4660,4660),(8,0,None,0)])
        c.close()
