# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""HOME PML evidence audit. FlatBuffer scalar interpretations remain candidate unless proven."""
import argparse,csv,hashlib,json,struct,sys
from collections import Counter,defaultdict
from pathlib import Path
from home41_p2_pml_readonly import table,records
NCA="57b83ea8c0af21ef26e2519b9580b373_NCA"
P_COUNTS=dict(global_=1479,beluga=1109,delphis=560,hayabusa=1276,ikkaku=1445,orion=1192,titan=1424)
P_COUNTS["global"]=P_COUNTS.pop("global_")
W_COUNTS=dict(beluga=743,delphis=827,hayabusa=851,ikkaku=921,orion=827,titan=920)
# Known storage widths are scoped by dataset; field21 is a relative offset candidate,
# not an interpreted gameplay scalar. For Waza, extensions remain raw.
P_WIDTH={0:2,1:2,2:1,3:1,4:1,5:2,6:2,7:2,8:1,9:1,10:1,11:1,12:1,13:1,14:1,15:1,16:1,17:2,18:2,19:1,20:1,21:4}
P_NAMES={0:"native_species",1:"native_form",2:"availability_flag_candidate",3:"type1_candidate",4:"type2_candidate",5:"ability1_candidate",6:"ability2_candidate",7:"hidden_ability_candidate",8:"hp_candidate",9:"attack_candidate",10:"defense_candidate",11:"sp_attack_candidate",12:"sp_defense_candidate",13:"speed_candidate",14:"gender_ratio_candidate",15:"growth_code_candidate",16:"unknown_16",17:"height_dm_candidate",18:"weight_hg_candidate",19:"hatch_cycles_candidate",20:"base_friendship_candidate",21:"relative_offset_candidate"}
W_NAMES={0:"native_move_id",1:"availability_flag_candidate",2:"type_candidate",3:"unknown_03",4:"damage_class_candidate",5:"power_candidate",6:"accuracy_raw_candidate",7:"pp_candidate"}
# Only key fields get absent=0; all other absent fields remain NULL until native defaults proven.
def spans(b,t):
    root,offs,size=t
    ordered=sorted(o for o in offs if o)
    if len(ordered)!=len(set(ordered)):raise ValueError("overlapping field offsets")
    for i,o in enumerate(offs):
        if not o:yield i,0,b"";continue
        end=next((z for z in ordered if z>o),size)
        if not 4<=o<end<=size:raise ValueError("field extent")
        yield i,o,b[root+o:root+end]
def val(raw,w):
    if len(raw)<w:raise ValueError("field shorter than scalar")
    return int.from_bytes(raw[:w],"little")
def write(path,header,rows):
    with path.open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f);w.writerow(header);w.writerows(rows)
def digest(b):return hashlib.sha256(b).hexdigest()
def audit(root,out):
    out.mkdir(parents=True,exist_ok=True)
    prow=[];wrow=[];praw=[];wraw=[];inventory=[];profiles=defaultdict(Counter)
    pointers=Counter();anchor={}
    for g,n in sorted(P_COUNTS.items()):
        p=root/"personal"/f"{g}_personal_total.perbin";b=p.read_bytes();arr=records(b)
        if len(arr)!=n:raise ValueError(f"{g}: record count")
        keys=set()
        for ri,t in enumerate(arr):
            r,offs,size=t;fields={i:(o,raw) for i,o,raw in spans(b,t) if o}
            widths=dict(P_WIDTH)
            if g=="ikkaku":widths.update({22:2,23:1,24:1})
            if g=="titan":widths.update({22:2,23:2,24:2})
            data={}
            for i in range(max(len(offs),max(widths)+1)):
                o,raw=fields.get(i,(0,b""))
                if o:
                    profiles[("personal",g,i)][len(raw)]+=1
                    if i in widths and len(raw)!=widths[i]:raise ValueError(f"{g} {ri} field{i} span {len(raw)}")
                    praw.append((g,ri,i,r+o,len(raw),raw.hex()))
                    if i in widths:data[i]=val(raw,widths[i])
            sp=data.get(0,0);form=data.get(1,0)
            if (sp,form) in keys:raise ValueError(f"{g} duplicate {sp}:{form}")
            keys.add((sp,form))
            if 21 in fields:
                pos=r+fields[21][0];target=pos+data[21]
                if target+4<=len(b) and data[21]>=4:
                    length=struct.unpack_from("<I",b,target)[0]
                    pointers[(g,"in_bounds_target")]+=1
                    if length<=100000 and target+4+length*2<=len(b):pointers[(g,"u16_vector_size_candidate")]+=1
                else:pointers[(g,"invalid_target")]+=1
            prow.append((g,ri,sp,form,*[data.get(i) for i in range(2,21)],data.get(21),*[data.get(i) for i in range(22,25)],r))
            if g=="global" and form==0 and sp in (1,4,6,25,150,201,869,1007):anchor[sp]=data
        inventory.append(dict(kind="personal",dataset=g,records=n,unique_keys=len(keys),source_sha256=digest(b),max_fields=max(len(t[1]) for t in arr)))
    # Real byte anchors for species/form identity and stat ordering.
    expected={1:[45,49,49,65,65,45],4:[39,52,43,60,50,65],6:[78,84,78,109,85,100],25:[35,55,40,50,50,90],150:[106,110,90,154,90,130],869:[65,60,75,110,121,64]}
    for sp,stats in expected.items():
        if [anchor[sp][i] for i in range(8,14)]!=stats:raise ValueError(f"personal anchor {sp}")
    move_anchors={}
    for g,n in sorted(W_COUNTS.items()):
        files=sorted((root/"waza"/g).glob("waza*.wazabin"))
        if len(files)!=n:raise ValueError(f"{g} move count")
        ids=set();maxfields=0
        for p in files:
            b=p.read_bytes();mid=int(p.stem[4:]);r,offs,size=table(b,struct.unpack_from("<I",b)[0]);maxfields=max(maxfields,len(offs))
            data={}
            for i,o,raw in spans(b,(r,offs,size)):
                if not o:continue
                profiles[("waza",g,i)][len(raw)]+=1
                wraw.append((g,mid,i,r+o,len(raw),raw.hex()))
                if i<=7:
                    width=1 if i==1 else 4
                    if len(raw)<width:raise ValueError(f"{g}/{mid} f{i} span")
                    data[i]=val(raw,width)
            if data.get(0,0)!=mid or mid in ids:raise ValueError(f"{g}/{mid} ID")
            ids.add(mid)
            wrow.append((g,mid,*[data.get(i) for i in range(1,8)],r,digest(b)))
            if (g,mid) in (("beluga",1),("titan",85),("hayabusa",53),("beluga",14),("ikkaku",98),("orion",165)):move_anchors[g,mid]=data
        inventory.append(dict(kind="waza",dataset=g,records=len(ids),unique_keys=len(ids),max_fields=maxfields))
    for g,mid,expected in [("beluga",1,{4:1,5:40,6:100,7:35}),("titan",85,{2:12,4:2,5:90,6:100,7:15}),("hayabusa",53,{2:9,4:2,5:80,6:100,7:10}),("beluga",14,{3:2,6:101,7:20})]:
        for k,v in expected.items():
            if move_anchors[g,mid].get(k)!=v:raise ValueError(f"waza anchor {g}/{mid}/f{k}")
    write(out/"personal_candidates.csv",["dataset","record_index","native_species","native_form"]+[P_NAMES[i] for i in range(2,22)]+["extension22_raw","extension23_raw","extension24_raw","table_offset"],prow)
    write(out/"waza_candidates.csv",["dataset","move_id"]+[W_NAMES[i] for i in range(1,8)]+["table_offset","source_sha256"],wrow)
    write(out/"personal_raw_fields.csv",["dataset","record_index","field_index","source_offset","span_bytes","raw_hex"],praw)
    write(out/"waza_raw_fields.csv",["dataset","move_id","field_index","source_offset","span_bytes","raw_hex"],wraw)
    write(out/"field_profiles.csv",["kind","dataset","field_index","span_bytes","count"],[(k,g,i,w,n) for (k,g,i),c in sorted(profiles.items()) for w,n in sorted(c.items())])
    summary={"status":"PASS_STRUCTURE_AND_ANCHORS","personal_records":len(prow),"waza_records":len(wrow),"personal_present_fields":len(praw),"waza_present_fields":len(wraw),"inventory":inventory,"personal_pointer_candidates":[{"dataset":g,"check":k,"count":n} for (g,k),n in sorted(pointers.items())],"personal_anchors":anchor,"waza_anchors":[{"dataset":g,"move_id":i,"fields":d} for (g,i),d in move_anchors.items()],"limitations":["No native getter/ELF verification in this audit; names ending candidate are sample-supported, not native schema.","Absent scalar defaults unknown except native identity 0; raw byte spans can contain padding.","Field21 target/vector interpretation and game-specific extensions unresolved."]}
    (out/"summary.json").write_text(json.dumps(summary,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1]/NCA/"1/bin/pml");p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    root=a.root.resolve();out=a.out.resolve()
    if out==root or root in out.parents:raise ValueError("output overlaps source")
    audit(root,out)
