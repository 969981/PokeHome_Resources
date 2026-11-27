"""HOME V3 import. Re-run verified ELF and original FlatBuffer audits; no guessed method mapping."""
import csv,hashlib,json,struct,tempfile
from collections import Counter
from pathlib import Path
from home41_personal_learnset_audit import audit as learnset_audit, EXPECTED
from home41_pml_schema_audit import P_COUNTS,spans
from home41_p2_pml_readonly import records
from home41_native_selector_guard import audit as guard_audit
from home41_native_selector_closure import audit as closure_audit
from home41_native_learnset_focus import SHA
from home41_elf_resource_xrefs import elf_segments
from home41_pml_schema_audit import NCA
R="home-switch-4.1.0"
def insert(c,table,*v):c.execute("INSERT INTO "+table+" VALUES("+",".join("?" for _ in v)+")",v)
def check(ok,msg):
    if not ok:raise ValueError(msg)
def nullable(s):return int(s) if s!="" else None
def import_native(build):
    c=build.c;root=build.root;elf=root/NCA/"0/main.elf";b=elf.read_bytes()
    check(hashlib.sha256(b).hexdigest()==SHA,"V3 ELF SHA")
    elf_uri=elf.relative_to(root).as_posix()
    ev=lambda loc,note:build.evidence(elf_uri,loc,SHA,note)
    pml=build.rom/"bin/pml"
    with tempfile.TemporaryDirectory(prefix="home-v3-") as tmp:
        tmp=Path(tmp)
        guard_audit(b,tmp)
        guard=json.loads((tmp/"selector_guard.json").read_text())
        closure_audit(b,guard,tmp)
        closure=json.loads((tmp/"selector_closure.json").read_text())
        check(closure["status"]=="PASS_STATIC_SELECTOR_MAPPING","closure status")
        learnset_audit(pml,tmp)
        mapping={int(x["selector"]):x for x in closure["selectors"]}
        check({k:v["dataset"] for k,v in mapping.items()}=={0:"global",1:"beluga",2:"orion",3:"hayabusa",4:"delphis",5:"titan",7:"ikkaku"},"selector mapping")
        for sel in range(8):
            x=mapping.get(sel)
            d="personal:"+x["dataset"]+"_personal_total" if x else None
            e=ev(f"selector:{sel}","RELR/GOT/registration/getter/loader verified" if x else "unregistered; wrapper rejects selector 6")
            insert(c,"native_personal_selectors",R,sel,0xb15c78+8*sel,d,"static_verified" if x else "unsupported",e)
            if not x:continue
            insert(c,"native_personal_dispatch",R,sel,*[int(x[k],16) for k in ("register","got_slot","vtable","store","count_getter","entry_getter","lookup","resource_holder","lookup_index_base","loader_call")])
            g=x["dataset"];insert(c,"native_learnset_layouts",R,d,0 if g=="hayabusa" else 1,1 if g=="hayabusa" else 0,2 if g in ("hayabusa","ikkaku") else None,e)
        source_hash={}
        for g,n in sorted(P_COUNTS.items()):
            p=pml/"personal"/f"{g}_personal_total.perbin";raw=p.read_bytes();digest=hashlib.sha256(raw).hexdigest();source_hash[g]=digest
            d="personal:"+p.stem
            e=build.evidence(p.relative_to(root).as_posix(),"field21",digest,"Original FlatBuffer parent record and vector")
            arr=records(raw);check(len(arr)==n,"parent count")
            for ri,t in enumerate(arr):
                r,offs,size=t;fields={i:v for i,o,v in spans(raw,t) if o}
                sp=int.from_bytes(fields.get(0,b"\0\0"),"little");form=int.from_bytes(fields.get(1,b"\0\0"),"little")
                check(len(fields[21])==4,"field21 width")
                pos=r+offs[21];ptr=pos+int.from_bytes(fields[21],"little")
                count=struct.unpack_from("<I",raw,ptr)[0]
                insert(c,"native_personal_records",R,d,ri,sp,form,r,ptr,count,e)
        counts=Counter()
        with (tmp/"personal_learnset_records.csv").open(encoding="utf-8",newline="") as f:
            for x in csv.DictReader(f):
                g=x["dataset"];d="personal:"+g+"_personal_total"
                check(x["source_sha256"]==source_hash[g],"learnset hash mismatch")
                insert(c,"native_personal_learnset_entries",R,d,int(x["record_index"]),int(x["ordinal"]),int(x["table_offset"]),*[nullable(x[k]) for k in ("field0_u16","field1_u16","field2_u16")])
                counts[g]+=1
        check(dict(counts)==EXPECTED,"learnset count per dataset")
        # Compare all parent vector counts (including empty vectors) and contiguous ordinals.
        bad=c.execute("""SELECT p.dataset_id,p.record_index FROM native_personal_records p LEFT JOIN
        (SELECT release_id,dataset_id,record_index,count(*) n,min(ordinal) lo,max(ordinal) hi
         FROM native_personal_learnset_entries GROUP BY release_id,dataset_id,record_index) e
        USING(release_id,dataset_id,record_index) WHERE p.release_id=? AND
        (p.vector_count<>coalesce(e.n,0) OR (p.vector_count>0 AND (e.lo<>0 OR e.hi<>p.vector_count-1))) LIMIT 1""",(R,)).fetchone()
        check(not bad,"parent vector count/ordinal mismatch")
        # V2 raw field records must resolve to a V3 parent.
        check(not c.execute("""SELECT 1 FROM native_personal_fields f LEFT JOIN native_personal_records p
        USING(release_id,dataset_id,record_index) WHERE f.release_id=? AND p.record_index IS NULL LIMIT 1""",(R,)).fetchone(),"V2 parent mismatch")
        sizes={"guard_53dba0":512,"guard_53dbe0":177,"guard_53dc20_exclusion":160,"guard_53dc80":697}
        check({t["name"]:t["count"] for t in guard["guard_tables"]}==sizes,"guard sizes")
        for t in guard["guard_tables"]:
            check(len(t["values"])==len(set(t["values"]))==t["count"],"guard uniqueness")
            e=ev(hex(t["address"]),"Static move table")
            insert(c,"native_move_guard_tables",R,t["name"],t["address"],t["count"],e)
            for i,v in enumerate(t["values"]):insert(c,"native_move_guard_entries",R,t["name"],i,v)
        check([x["raw_byte"] for x in guard["guard_jump_table"]]==[0,2,3,4,5,0,6],"guard jump table")
        rules=[("exclude_table","guard_53dc20_exclusion",2,None),("allow",None,None,None),("exclude_table","guard_53dc20_exclusion",2,None),("allow_table","guard_53dbe0",None,None),("allow_table","guard_53dba0",None,None),("allow_table","guard_53dc80",None,None),("allow",None,None,None),("dynamic",None,None,0x53c5d0)]
        for i,rule in enumerate(rules):insert(c,"native_move_guard_rules",R,i,*rule,ev("0x53db50", "Local guard dispatch; move zero handled before dispatch"))
        for s in elf_segments(b):
            va=0x657db8
            if s["vaddr"]<=va and va+0x200<=s["vaddr"]+s["size"]:
                at=s["file_offset"]+va-s["vaddr"];ex=b[at:at+0x200];break
        else:raise ValueError("exclusion table not backed")
        e=ev("0x657db8","Selector 7 collector exclusion table, 32 x 16 bytes")
        for i,(word,sp,form,unk,move) in enumerate(struct.iter_unpack("<IIHHI",ex)):
            check(word==7 and unk==0,"exclusion layout")
            insert(c,"native_move_exclusion_entries",R,va,i,word,sp,form,unk,move,ex[i*16:i*16+16].hex(),e)
        functions={0x4ffc50:("GetLearnsetCount","static_verified"),0x4ffce8:("GetLearnsetCode","static_verified"),0x4ffdac:("GetLearnsetExtraCode","static_verified"),0x500044:("GetLearnsetMoveID","static_verified"),0x53db50:("MoveGuard","static_verified"),0x4fcce0:("CollectMove","partial"),0x500108:("MoveMembership","partial"),0x53c5d0:("DynamicMoveGuard","partial"),0x53d690:("DynamicRecordLookup","static_verified")}
        for x in mapping.values():
            for k in ("register","count_getter","entry_getter","lookup"):
                functions[int(x[k],16)]=(x["dataset"]+"_"+k,"static_verified")
        for a,(name,status) in sorted(functions.items()):insert(c,"native_function_evidence",R,a,name,status,ev(hex(a),"Native static analysis; research names"))
        # All raw missing fields remain NULL; successful getters derive defaults.
        dist=dict(c.execute("SELECT native_code,count(*) FROM v_native_personal_learnsets WHERE release_id=? GROUP BY native_code",(R,)))
        check(dist.get(101)==249122 and dist.get(102)==1129 and dist.get(0)==2275,"native code histogram")
        check(c.execute("SELECT count(*) FROM v_native_personal_learnsets WHERE release_id=?",(R,)).fetchone()[0]==360484,"view count")
        check(c.execute("SELECT count(*) FROM v_native_personal_learnsets WHERE native_move_id=0 AND release_id=?",(R,)).fetchone()[0]==0,"unexpected zero move")
        build.inventory.append({"module":"PokemonLearnsetCore","parents":sum(P_COUNTS.values()),"entries":sum(counts.values()),"selectors":8,"mapped":7,"static_guard_rows":1546,"exclusions":32,"semantic_status":"native_static_only","codes":{"0":dist[0],"101":dist[101],"102":dist[102]}})
