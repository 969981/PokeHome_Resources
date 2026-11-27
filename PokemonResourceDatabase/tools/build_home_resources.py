# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["Pillow==12.0.0", "capstone==5.0.6"]
# ///
"""Build a read-only-source HOME 4.1.0 database snapshot; no inferred cross-game semantics."""
import argparse,csv,hashlib,json,os,re,sqlite3,struct,sys
from collections import Counter
from pathlib import Path
from PIL import Image
from schema_manager import connect,migrate,dictionary
from identity import content_id,png_cas_path,stable_id,PIXEL_CONTRACT
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/"tools"))
from home41_romfs_core import dat_lines,ahtb_labels,sarc_members
from home41_icon_brti_audit import metadata,SOURCES,NCA
from home41_bntx_to_png import read_source
from home41_image_selector_model import original_rows
R="home-switch-4.1.0"; NS="pokemon-image"
LANGS={"English":"en","French":"fr","German":"de","Italian":"it","JPN":"ja","JPN_KANJI":"ja-Jpan-kanji","Korean":"ko","LATAM":"es-419","Simp_Chinese":"zh-Hans","Spanish":"es","Trad_Chinese":"zh-Hant"}
def sha(b):return hashlib.sha256(b).hexdigest()
def gitblob(b):return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()
def rows(p):
    with p.open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def insert(c,table,*v): c.execute("INSERT INTO "+table+" VALUES("+",".join("?" for _ in v)+")",v)
def check(v,msg):
    if not v:raise ValueError(msg)
class Build:
    def __init__(self,c,root,out,cas):
        self.c=c;self.root=root;self.out=out;self.cas=cas;self.rom=root/NCA/"1";self.unpack=root/"Unpack"/NCA/"1";self.img=root/"HomeImageResources";self.files={};self.inventory=[]
        self.revision=os.environ.get("GITHUB_SHA","")
    def file(self,p):
        rel=p.relative_to(self.rom).as_posix()
        if rel not in self.files:
            b=p.read_bytes();fid=stable_id("source-file",rel)
            insert(self.c,"source_files",R,fid,rel,len(b),sha(b));self.files[rel]=fid
        return self.files[rel]
    def evidence(self,uri,locator="",digest=None,note=""):
        e=stable_id("evidence",R,uri,locator or "-")
        self.c.execute("INSERT OR IGNORE INTO evidence VALUES(?,?,?,?,?,?,?)",(e,R,uri,self.revision,locator,digest,note));return e
    def dataset(self,id,module,scope,status,paths,proof):
        e=self.evidence(proof,note=status)
        insert(self.c,"data_datasets",R,id,module,scope,status,e)
        for p,role in paths:insert(self.c,"dataset_files",R,id,self.file(p),role)
        return e
    def texts(self):
        counts=Counter()
        for folder,lang in LANGS.items():
            insert(self.c,"languages",lang,folder)
            src=self.rom/"bin/message"/folder/"megaturtle"
            for dat in sorted(src.glob("*.dat")):
                tbl=dat.with_suffix(".tbl")
                if not tbl.is_file():continue
                name=dat.stem;d=f"text:{lang}:{name}"
                module=("PokedexCore" if name.startswith(("zukan_comment","zkn_","topics_")) else "LocationCore" if "place_name" in name else "AbilityCore" if name.startswith("tokusei") else "MoveCore" if name.startswith("waza") else "ItemCore" if "itemname" in name or "iteminfo" in name else "RibbonMarkCore" if name.startswith("ribbon") else "LocalizationCore")
                a=dat_lines(dat.read_bytes());b=ahtb_labels(tbl.read_bytes())
                # Match the established unpack parser: trailing MAX is an enum sentinel, not a DAT row.
                if len(b)==len(a)+1 and b[-1][0].lower().endswith("max"): b=b[:-1]
                check(len(a)==len(b),str(dat)+" label count")
                self.dataset(d,module,name,"decoded",[(dat,"data"),(tbl,"labels")],dat.relative_to(self.root).as_posix())
                insert(self.c,"native_text_tables",R,d,lang,name)
                self.c.executemany("INSERT INTO native_text_entries VALUES(?,?,?,?,?,?,?,?)",[(R,d,x["index"],label,f"{h:016X}",x["text"],x["flags"],x["offset"]) for x,(label,h) in zip(a,b)])
                counts[(lang,name)]=len(a)
        for lang in LANGS.values():
            for name,num in {"monsname":1026,"zkn_form":1531,"itemname":2685,"wazaname":921,"tokusei":318}.items():check(counts[(lang,name)]==num,f"{lang}/{name} expected {num}, got {counts[(lang,name)]}")
        # Canonical species names only when the exact MONSNAME label proves numeric identity.
        for i in range(1,1026):
            label=f"MONSNAME_{i:03d}"
            found=self.c.execute("SELECT t.language_id,x.text,d.evidence_id FROM native_text_entries x JOIN native_text_tables t USING(release_id,dataset_id) JOIN data_datasets d USING(release_id,dataset_id) WHERE t.table_name='monsname' AND x.label=? AND x.row_index=?",(label,i)).fetchall()
            check(len(found)==11,f"species label {label}")
            insert(self.c,"pokemon_species",i)
            for lang,name,e in found:insert(self.c,"pokemon_species_names",i,lang,name,e)
        self.inventory.append({"module":"LocalizationCore","tables":len(counts),"entries":sum(counts.values()),"core_counts":{n:sum(v for (l,k),v in counts.items() if k==n) for n in ("monsname","zkn_form","itemname","wazaname","tokusei")}})
    def items(self):
        p=self.rom/"bin/pml/item/item.dat";h=p.with_name("item_hash_to_index.dat");d="item:pml"
        b=p.read_bytes();n,cap,count=struct.unpack_from("<HHH",b);start=struct.unpack_from("<I",b,64)[0]
        check((n,cap,count,start,len(b))==(1829,1832,1166,5124,61092),"item header")
        self.dataset(d,"ItemCore","pml","semantic_partial",[(p,"records"),(h,"hash_index")],"docs/UNPACK_ITEM8_SEMANTICS_V5.md")
        sem=rows(self.unpack/"bin/pml/item/item.semantic.csv")
        check(len(sem)==n,"item semantic coverage")
        for i in range(count):
            off=start+i*48;x=b[off:off+48]
            insert(self.c,"native_item_records",R,d,i,off,x.hex(),struct.unpack_from("<I",x,0)[0],struct.unpack_from("<H",x,4)[0],struct.unpack_from("<H",x,8)[0],x[17]&15,x[19],x[21],struct.unpack_from("<h",x,26)[0])
        for i,x in enumerate(sem):
            r=struct.unpack_from("<H",b,68+2*i)[0]
            check(int(x["item_id"])==i and int(x["record_index"])==r and x["record_raw_hex"].lower()==b[start+r*48:start+(r+1)*48].hex(),"item semantic index/bytes mismatch")
            insert(self.c,"native_item_ids",R,d,i,r)
        hb=h.read_bytes();hn=struct.unpack_from("<I",hb)[0];check(hn==1830 and len(hb)==4+16*hn,"item hash layout")
        for i in range(hn):
            hv,idx,res=struct.unpack_from("<QII",hb,4+16*i);insert(self.c,"native_item_hash_slots",R,d,i,f"{hv:016X}",idx,res)
        self.inventory.append({"module":"ItemCore","ids":n,"physical_records":count,"hash_slots":hn})
    def personal(self):
        for p in sorted((self.rom/"bin/pml/personal").glob("*.perbin")):
            d="personal:"+p.stem;csvp=self.unpack/p.relative_to(self.rom).with_suffix(".csv")
            a=rows(csvp);self.dataset(d,"PokemonCore",p.stem,"structural",[(p,"original")],csvp.relative_to(self.root).as_posix())
            for x in a:
                raw=x["raw_hex"];check(len(bytes.fromhex(raw))==int(x["byte_count"]),"personal raw width")
                insert(self.c,"native_personal_fields",R,d,int(x["record_index"]),int(x["field_index"]),raw)
            self.inventory.append({"module":"PokemonCore","dataset":d,"raw_fields":len(a),"records_with_present_fields":len({x["record_index"] for x in a}),"status":"structural"})
    def moves(self):
        for folder in sorted((self.rom/"bin/pml/waza").iterdir()):
            if not folder.is_dir():continue
            files=sorted(folder.glob("*.wazabin"));d="move:"+folder.name
            self.dataset(d,"MoveCore",folder.name,"structural",[(p,"original") for p in files],"docs/UNPACK_OUTPUT_SPEC.md")
            for p in files:
                mid=int(p.stem.removeprefix("waza"));j=json.loads((self.unpack/p.relative_to(self.rom).with_suffix(".json")).read_text(encoding="utf-8"))
                insert(self.c,"native_move_records",R,d,mid,self.file(p))
                for x in j["fields"]:insert(self.c,"native_move_fields",R,d,mid,int(x["field_index"]),int(x["present"]),int(x["object_offset"]),x.get("raw_hex"))
            self.inventory.append({"module":"MoveCore","dataset":d,"records":len(files),"status":"structural"})
    def growth(self):
        for p in sorted((self.rom/"bin/pml/grow_table").glob("grow_*.bin")):
            b=p.read_bytes();check(len(b)%4==0,"growth layout");a=struct.unpack("<"+"I"*(len(b)//4),b)
            d="growth:"+p.stem;self.dataset(d,"ExperienceCore",p.stem,"structural",[(p,"original")],p.relative_to(self.root).as_posix())
            for i,v in enumerate(a):insert(self.c,"native_growth_values",R,d,i,v)
            self.inventory.append({"module":"ExperienceCore","dataset":d,"values":len(a),"status":"structural"})
    def images(self):
        p=self.rom/"bin/pokemon/pokemon_list/pokemon_image_list.bin";a=list(original_rows(p.read_bytes()))
        check(len(a)==3506 and len({x[7] for x in a})==3506,"selector count")
        selector=rows(self.img/"research/pokemon_image_selector_v2.csv")
        fields=("species","form","color_code","view_code","gender_code","variant_code","decoration_raw")
        check(a==[tuple(int(x[k]) for k in fields)+(x["resource_stem"],) for x in selector],"selector CSV mismatch")
        e=self.dataset("pokemon-images","ImageResourceCore","pokemon-image","decoded",[(p,"selector")],"HomeImageResources/research/NATIVE_IMAGE_SELECTOR_MODEL.md")
        for i,x in enumerate(a):
            insert(self.c,"native_resource_keys",R,NS,x[7],x[7],i,e)
            insert(self.c,"native_pokemon_keys",R,NS,x[7],*x[:7])
        insert(self.c,"resource_selection_rules",R,NS,1,"tools/home41_image_selector_model.py","static_model",e)
        keys={x[7] for x in a};por=rows(self.img/"pokemon_image_index.csv");icons=rows(self.img/"pokemon_icons/index.csv")
        check(len(por)==3538 and len(icons)==3506 and {x["resource_stem"] for x in icons}==keys,"image index coverage")
        arc=self.rom/"bin/pokemon/icon_pokemon/bin/icon_pokemon.arc";b=arc.read_bytes()
        m=[x for x in sarc_members(b) if x["name"]=="timg/__Combined.bntx"];check(len(m)==1,"icon member")
        raw=b[m[0]["offset"]:m[0]["offset"]+m[0]["bytes"]];_,sz,h=SOURCES["pokemon_icons"];check(len(raw)==sz and sha(raw)==h,"BNTX baseline")
        meta=metadata(raw);check(len(meta)==3506,"BRTI count")
        ev=self.evidence("HomeImageResources/research/POKEMON_PORTRAIT_ICON_PARITY.md",note="archived PNG and source metadata, not new texture decode")
        def asset(kind,stem,path,source,meta,member="",idx=None,blob=None,rgba_expected=None,png_expected=None,quality="native"):
            orig=path.read_bytes()
            if blob:check(gitblob(orig)==blob,"PNG blob mismatch")
            fh=sha(orig)
            if png_expected:check(fh==png_expected,"PNG hash mismatch")
            with Image.open(path) as im:
                check(im.format=="PNG","not PNG");w,h=im.size;pixels=im.convert("RGBA").tobytes()
            check((w,h)==(meta["width"],meta["height"]),"texture size mismatch")
            ph=sha(pixels)
            if rgba_expected:check(ph==rgba_expected,"RGBA mismatch")
            cid=content_id(w,h,pixels);cas=png_cas_path(fh)
            self.c.execute("INSERT OR IGNORE INTO image_contents VALUES(?,?,?,?,?)",(cid,w,h,PIXEL_CONTRACT,ph))
            self.c.execute("INSERT OR IGNORE INTO image_files VALUES(?,?,?,?,?)",(fh,cid,"png",len(orig),cas))
            if self.cas:
                dest=self.out/"assets"/cas
                if not dest.exists():dest.parent.mkdir(parents=True,exist_ok=True);dest.write_bytes(orig)
            fid=self.file(source);locator=f"brti:{meta['texture_index']}";eid=stable_id("source-entry",fid,member or "-",locator)
            insert(self.c,"source_entries",R,fid,eid,"texture",member,locator,meta["raw_name"],ev)
            fmt=meta["format"];self.c.execute("INSERT OR IGNORE INTO texture_formats VALUES(?,?)",(fmt,"native BNTX format word"))
            insert(self.c,"source_texture_details",R,fid,eid,fmt,meta["texture_index"],0,w,h)
            aid=stable_id("asset",fid,eid,kind)
            insert(self.c,"image_assets",R,aid,fid,eid,fh,path.relative_to(self.root).as_posix(),quality,ev)
            if stem in keys:insert(self.c,"native_key_images",R,NS,stem,kind,aid,ev)
        extras=[]
        for x in por:
            stem=x["file"].removeprefix("poke_capture_").removesuffix(".png");src=self.rom/"bin/pokemon/compress_capture_pokemon"/("poke_capture_"+stem+".bntx.gz")
            check(gitblob(src.read_bytes())==x["source_git_blob"],"portrait source blob")
            mm=metadata(read_source(src));check(len(mm)==1,"portrait texture count")
            if stem not in keys:
                extras.append(stem);quality="unreferenced_placeholder" if int(stem[:4]) in (918,924,925) else "unreferenced_alternative"
            else:quality="native_lowres" if mm[0]["width"]==112 else "native"
            asset("portrait",stem,self.img/"pokemon"/x["file"],src,mm[0],blob=x["png_git_blob"],quality=quality)
        check(len(extras)==32,"orphan count")
        for x in icons:
            stem=x["resource_stem"];mm=meta[int(x["texture_index"])]
            check(mm["raw_name"]==x["raw_name"]=="poke_icon_"+stem+"^u","BRTI name mismatch")
            asset("icon",stem,self.img/x["package_path"],arc,mm,"timg/__Combined.bntx",png_expected=x["png_sha256"],rgba_expected=x["rgba_sha256"])
        self.inventory.append({"module":"ImageResourceCore","keys":len(keys),"portraits":len(por),"icons":len(icons),"unreferenced":len(extras)})
    def run(self):
        insert(self.c,"games","HOME","Pokémon HOME");insert(self.c,"platforms","switch","Nintendo Switch")
        insert(self.c,"source_releases",R,"HOME","switch","4.1.0","")
        self.texts();self.items();self.personal();self.moves();self.growth();self.images()
def export(c,out):
    target=out/"csv";target.mkdir()
    tables=[x[0] for x in c.execute("SELECT name FROM sqlite_schema WHERE type='table' AND name NOT LIKE 'sqlite_%' AND name<>'schema_migrations' ORDER BY name")]
    counts={}
    for t in tables+["v_native_pokemon_images","v_native_personal_learnsets"]:
        cols=c.execute(f"PRAGMA table_info({t})").fetchall();pk=[x[1] for x in sorted(cols,key=lambda x:x[5]) if x[5]]
        order=",".join(pk) if pk else ",".join(x[1] for x in cols)
        cur=c.execute(f"SELECT * FROM {t} ORDER BY {order}")
        with (target/(t+".csv")).open("w",encoding="utf-8",newline="") as f:
            w=csv.writer(f);w.writerow([x[0] for x in cur.description]);n=0
            for row in cur:
                w.writerow([r"\N" if v is None else v for v in row]);n+=1
            counts[t]=n
    return counts
def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=ROOT);p.add_argument("--out",type=Path,required=True);p.add_argument("--with-cas",action="store_true")
    a=p.parse_args();out=a.out.resolve();root=a.root.resolve()
    check(not out.exists() or not any(out.iterdir()),"output must be empty")
    for src in (root/NCA,root/"Unpack",root/"HomeImageResources"):
        check(out!=src and src not in out.parents,"source overwrite refused")
    out.mkdir(parents=True,exist_ok=True);db=out/"home_resources.sqlite"
    c=connect(db);version=migrate(c)
    with c:
        build=Build(c,root,out,a.with_cas);build.run()
        from import_native_learnsets import import_native
        import_native(build)
        expected={"native_pokemon_keys":3506,"native_resource_keys":3506,"native_key_images":7012,"image_assets":7044,"native_item_ids":1829,"native_item_records":1166,"native_move_records":5089,"pokemon_species_names":11275,"native_personal_selectors":8,"native_personal_dispatch":7,"native_learnset_layouts":7,"native_personal_records":8485,"native_personal_learnset_entries":360484,"native_move_guard_tables":4,"native_move_guard_entries":1546,"native_move_guard_rules":8,"native_move_exclusion_entries":32}
        for t,n in expected.items():check(c.execute(f"SELECT count(*) FROM {t}").fetchone()[0]==n,t+" coverage")
        quality=dict(c.execute("SELECT quality_status,count(*) FROM image_assets GROUP BY quality_status"))
        check(quality=={"native":6996,"native_lowres":16,"unreferenced_alternative":24,"unreferenced_placeholder":8},"quality counts")
        check(not c.execute("PRAGMA foreign_key_check").fetchone(),"FK failure")
        check(c.execute("PRAGMA integrity_check").fetchone()==("ok",),"integrity failure")
    counts=export(c,out);dictionary(c,out/"schema");c.close()
    summary={"status":"PASS","schema_version":version,"release":R,"source_revision":build.revision,"cas_included":a.with_cas,"counts":counts,"quality":quality,"inventory":build.inventory,"db_sha256":sha(db.read_bytes()),"limitations":["Personal and Waza raw fields are structural only","form names remain native labels; no inferred cross-game form IDs","image archives verified, not re-decoded","ribbon/mark/achievement images not imported"]}
    (out/"summary.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8");print(json.dumps(summary,ensure_ascii=False))
if __name__=="__main__":main()
