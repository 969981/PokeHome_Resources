import sqlite3,tempfile,unittest,csv
from pathlib import Path
from schema_manager import connect,migrate,dictionary

H="0"*64; F="1"*64; C="2"*64
class SchemaV1(unittest.TestCase):
    def setUp(self):
        self.con=connect(":memory:");migrate(self.con)
        self.con.executescript("""
        INSERT INTO games VALUES ('HOME','HOME'),('SV','Scarlet/Violet');
        INSERT INTO platforms VALUES ('switch','Switch'),('android','Android');
        INSERT INTO source_releases VALUES ('home1','HOME','switch','4.1.0',''),('home2','HOME','android','4.1.0',''),('sv1','SV','switch','4.0.0','');
        INSERT INTO evidence(evidence_id,uri) VALUES ('e','fixture:synthetic');
        INSERT INTO pokemon_species VALUES (869);
        INSERT INTO pokemon_forms VALUES ('pkmn:0869:base',869,'base');
        INSERT INTO pokemon_appearances VALUES ('a','pkmn:0869:base','female','normal','normal');
        INSERT INTO attribute_definitions VALUES ('sweet','synthetic decoration');
        INSERT INTO attribute_values VALUES ('sweet','strawberry','Strawberry'),('sweet','star','Star');
        INSERT INTO form_allowed_attributes VALUES ('pkmn:0869:base','sweet','strawberry','e');
        INSERT INTO resource_subjects VALUES ('s','pokemon','fixture'),('i','item','fixture');
        INSERT INTO pokemon_subjects VALUES ('s','a');
        INSERT INTO native_resource_keys VALUES ('home1','pokemon','k','same_stem',0,'e'),('home2','pokemon','k','same_stem',0,'e'),('sv1','pokemon','k','same_stem',0,'e'),('home1','pokemon','k2','other_stem',1,'e'),('home1','pokemon','egg','egg',2,'e');
        INSERT INTO native_pokemon_keys VALUES ('home1','pokemon','k',869,0,0,0,5,0,0),('home2','pokemon','k',869,0,0,0,5,0,0),('sv1','pokemon','k',869,0,0,0,5,0,0),('home1','pokemon','egg',0,0,0,0,2,0,0);
        """)
        self.con.execute("INSERT INTO image_contents VALUES (?,?,?,?,?)",(C,112,112,"rgba8-straight-v1",H))
        self.con.execute("INSERT INTO image_files VALUES (?,?,?,?,?)",(F,C,"png",100,"sha256/11/"+F+".png"))
        for rel in ("home1","home2"):
            self.con.execute("INSERT INTO source_files VALUES (?,?,?,?,?)",(rel,"f","original.arc",100,H))
            self.con.execute("INSERT INTO source_entries VALUES (?,?,?,?,?,?,?,?)",(rel,"f","t","texture","timg/__Combined.bntx","brti:0","fixture","e"))
            self.con.execute("INSERT INTO image_assets VALUES (?,?,?,?,?,?,?,?)",(rel,"a","f","t",F,"icons/a.png","native","e"))
        self.con.execute("INSERT INTO image_assets VALUES (?,?,?,?,?,?,?,?)",("home1","orphan","f","t",F,"orphan.png","unreferenced_placeholder","e"))
        self.con.commit()
    def tearDown(self): self.con.close()
    def bad(self,sql,args=()):
        with self.assertRaises(sqlite3.IntegrityError):self.con.execute(sql,args)
    def test_idempotence(self):
        self.assertEqual(migrate(self.con),1)
        self.assertEqual(self.con.execute("PRAGMA user_version").fetchone()[0],1)
    def test_version_isolation_and_raw_zero(self):
        self.assertEqual(self.con.execute("SELECT count(*) FROM native_pokemon_keys").fetchone()[0],4)
        self.bad("INSERT INTO pokemon_species VALUES(0)")
        self.bad("INSERT INTO native_pokemon_keys VALUES('home1','pokemon','k2',869,0,0,0,5,0,0)")
    def test_bindings_and_dedup(self):
        for rel in ("home1","home2"):
            self.con.execute("INSERT INTO native_key_images VALUES (?,?,?,?,?,?)",(rel,"pokemon","k","icon","a","e"))
        self.assertEqual(self.con.execute("SELECT count(*) FROM v_native_pokemon_images").fetchone()[0],2)
        self.assertEqual(self.con.execute("SELECT count(*) FROM image_contents").fetchone()[0],1)
        self.bad("INSERT INTO native_key_images VALUES('sv1','pokemon','k','icon','a','e')")
        self.bad("INSERT INTO native_key_images VALUES('home1','pokemon','k','portrait','orphan','e')")
        self.bad("UPDATE image_assets SET quality_status='candidate' WHERE release_id='home1' AND asset_id='a'")
    def test_fk(self):
        self.bad("INSERT INTO pokemon_forms VALUES('bad',9999,'x')")
        self.bad("INSERT INTO pokemon_subjects VALUES('i','a')")
        self.bad("INSERT INTO native_key_images VALUES('home1','pokemon','k','icon','missing','e')")
    def test_attribute_scope(self):
        self.bad("INSERT INTO appearance_attributes VALUES('a','sweet','star')")
        self.con.execute("INSERT INTO appearance_attributes VALUES('a','sweet','strawberry')")
        self.bad("UPDATE appearance_attributes SET value_id='star' WHERE appearance_id='a'")
        self.bad("DELETE FROM form_allowed_attributes WHERE form_uid='pkmn:0869:base'")
    def test_dictionary_and_checksum(self):
        with tempfile.TemporaryDirectory() as d:
            r=dictionary(self.con,Path(d));self.assertGreater(r["tables"],20)
            self.assertEqual(len(list((Path(d)/"templates").glob("*.csv"))),r["tables"])
            with (Path(d)/"field_dictionary.csv").open() as f:self.assertEqual(len(list(csv.DictReader(f))),r["fields"])
        self.con.execute("UPDATE schema_migrations SET sha256='tampered'");self.con.commit()
        with self.assertRaises(ValueError):migrate(self.con)
if __name__=="__main__":unittest.main()
