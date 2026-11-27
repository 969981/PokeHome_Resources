"""Import version-scoped native scalar Getter evidence and validate V4 typed views."""
import hashlib,json,struct,tempfile
from pathlib import Path
from home41_native_pml_getter_closure import audit as getter_audit
from home41_native_learnset_focus import SHA
from home41_pml_schema_audit import NCA
from home41_p2_pml_readonly import records,table
R="home-switch-4.1.0"
P_LABEL={2:"flag2",3:"type1_raw",4:"type2_raw",5:"ability1_raw",6:"ability2_raw",7:"ability3_raw",8:"base_hp",9:"base_attack",10:"base_defense",11:"base_sp_attack",12:"base_sp_defense",13:"base_speed",14:"gender_ratio_raw",15:"growth_code_candidate",16:"field16_raw",17:"height_raw",18:"weight_raw",19:"hatch_cycles_candidate",20:"friendship_candidate"}
W_FIELDS=(1,0,2,3,4,5,6,7)
W_LABEL={0:"native_move_id",1:"flag1",2:"type_raw",3:"field3_raw",4:"damage_class_raw",5:"power",6:"accuracy_raw",7:"base_pp"}
def ck(ok,msg):
    if not ok:raise ValueError(msg)
def waza_pattern(row,ins):
    a=row["getter"];f=W_FIELDS[(row["slot"]-0x30)//8];slot=4+2*f
    m={i["pc"]:(i["op"],i["args"]) for i in ins}
    def imm(v):return str(v) if v<10 else hex(v)
    def expect(off,op,args):ck(m.get(a+off)==(op,args),f"Waza {row['dataset']} {a+off:#x}: {m.get(a+off)}")
    missing=a+(0x3c if f==1 else 0x34);null=a+0x3c if f==3 else missing
    expect(0,"ldr","x8, [x0, #0x60]")
    expect(4,"cbz",f"x8, #{null:#x}")
    expect(8,"ldr","w9, [x8]")
    expect(12,"add","x8, x8, x9")
    expect(16,"ldrsw","x9, [x8]")
    expect(20,"sub","x9, x8, x9")
    expect(24,"ldrh","w10, [x9]")
    expect(28,"cmp",f"w10, #{imm(slot+1)}")
    expect(32,"b.lo",f"#{missing:#x}")
    expect(36,"ldrh",f"w9, [x9, #{imm(slot)}]")
    expect(40,"cbz",f"x9, #{missing:#x}")
    expect(44,"ldrb" if f==1 else "ldr","w8, [x8, x9]" if f==1 else "w0, [x8, x9]")
    if f==1:
        expect(48,"cmp","w8, #0");expect(52,"cset","w0, ne")
    expect(missing-a,"mov","w0, wzr")
    if f==3:expect(0x3c,"mov","w0, #0xd")
    return f,1 if f==1 else 4,13 if f==3 else 0
def import_scalars(build):
    c=build.c;elf=build.root/NCA/"0/main.elf";b=elf.read_bytes()
    ck(hashlib.sha256(b).hexdigest()==SHA,"ELF SHA")
    with tempfile.TemporaryDirectory(prefix="native-scalars-") as tmp:
        getter_audit(b,Path(tmp))
        j=json.loads((Path(tmp)/"getter_closure.json").read_text())
    ck(j["status"]=="PASS_PERSONAL_SCALAR_PATTERNS" and len(j["personal"])==133 and len(j["waza"])==48,"getter coverage")
    def evidence(a,n):return build.evidence(elf.relative_to(build.root).as_posix(),hex(a),SHA,n)
    def add(row,d,domain,f,width,null,transform,label,status):
        a=row["getter"];e=evidence(a,"Exact native scalar read and missing-field path; semantic status "+status)
        c.execute("INSERT INTO native_scalar_getters VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?)",
        (R,d,domain,f,row["selector"],row["slot"],a,width,transform,0,null,label,status,e))
    for r in j["personal"]:
        f=r["field_index"];d="personal:"+r["dataset"]+"_personal_total"
        status="unresolved" if f==16 else "sample_supported"
        add(r,d,"personal",f,r["width_bytes"],None,r["transform"],P_LABEL[f],status)
    for r in j["waza"]:
        f,width,null=waza_pattern(r,j["windows"][f"{r['dataset']}:{r['slot']:#x}"])
        status="identity_verified" if f==0 else "consumer_supported" if f in (1,6,7) else "unresolved" if f==3 else "sample_supported"
        add(r,"move:"+r["dataset"],"waza",f,width,null,"nonzero_bool" if f==1 else "unsigned",W_LABEL[f],status)
    # Exhaustive comparison against the actual source bytes, including absent fields.
    # Compare per record to avoid storing a second physical copy of values.
    defs={}
    for domain,d,f,width,tr in c.execute("SELECT domain,dataset_id,field_index,width_bytes,transform FROM native_scalar_getters WHERE release_id=?",(R,)):
        defs.setdefault((domain,d),{})[f]=(width,tr)
    n=0
    for (domain,d),fields in defs.items():
        actual=c.execute("SELECT native_record_id,field_index,present,raw_value,native_value FROM v_native_scalar_values WHERE release_id=? AND domain=? AND dataset_id=? ORDER BY native_record_id,field_index",(R,domain,d))
        if domain=="personal":
            p=build.rom/"bin/pml/personal"/(d.removeprefix("personal:")+".perbin");raw=p.read_bytes()
            source=((ri,raw,t) for ri,t in enumerate(records(raw)))
        else:
            paths=sorted((build.rom/"bin/pml/waza"/d.removeprefix("move:")).glob("waza*.wazabin"))
            def move_source():
                for p in paths:
                    raw=p.read_bytes()
                    yield int(p.stem[4:]),raw,table(raw,struct.unpack_from("<I",raw)[0])
            source=move_source()
        for ri,raw,(r,offsets,size) in source:
            for f,(width,tr) in sorted(fields.items()):
                off=offsets[f] if f<len(offsets) else 0
                if off:ck(off+width<=size,"scalar out of record")
                value=int.from_bytes(raw[r+off:r+off+width],"little") if off else None
                native=0 if value is None else int(value!=0) if tr=="nonzero_bool" else value
                ck(actual.fetchone()==(ri,f,int(bool(off)),value,native),f"scalar mismatch {d}/{ri}/{f}")
                n+=1
        ck(actual.fetchone() is None,"extra scalar rows")
    ck(n==8485*19+5089*8,"scalar value coverage")
    ck(c.execute("SELECT count(*) FROM v_native_personal_base_data").fetchone()[0]==8485,"personal view count")
    ck(c.execute("SELECT count(*) FROM v_native_waza_base_data").fetchone()[0]==5089,"waza view count")
    ck(c.execute("SELECT count(*) FROM v_native_waza_base_data WHERE move_id<>native_move_id").fetchone()[0]==0,"move identity")
    for sp,stats in {1:(45,49,49,65,65,45),25:(35,55,40,50,50,90),150:(106,110,90,154,90,130),869:(65,60,75,110,121,64)}.items():
        row=c.execute("SELECT base_hp,base_attack,base_defense,base_sp_attack,base_sp_defense,base_speed FROM v_native_personal_base_data WHERE dataset_id='personal:global_personal_total' AND native_species=? AND native_form=0",(sp,)).fetchone()
        ck(row==stats,"personal semantic anchor")
    for g,mid,vals in [("beluga",1,(40,100,35)),("titan",85,(90,100,15)),("hayabusa",53,(80,100,10)),("beluga",14,(0,101,20))]:
        row=c.execute("SELECT power,accuracy_raw,base_pp FROM v_native_waza_base_data WHERE dataset_id=? AND move_id=?",("move:"+g,mid)).fetchone()
        ck(row==vals,"waza semantic anchor")
    build.inventory.append({"module":"NativeScalarCore","getters":181,"scalar_values":n,"personal":8485,"waza":5089,"status":"native_static_verified; semantic grades retained"})
