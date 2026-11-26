# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""HOME 4.1.0 Personal field21 nested learnset evidence. Preserve variant schemas."""
import argparse,csv,hashlib,json,struct
from pathlib import Path
from collections import Counter
from home41_p2_pml_readonly import table,records
from home41_pml_schema_audit import NCA,spans,P_COUNTS
EXPECTED={"global":72250,"beluga":38083,"delphis":29625,"hayabusa":11075,"ikkaku":66192,"orion":66463,"titan":76796}
def check(ok,msg):
    if not ok: raise ValueError(msg)
def audit(root,out):
    out.mkdir(parents=True,exist_ok=True)
    total=0;inventory=[]
    with (out/"personal_learnset_records.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f)
        w.writerow(["dataset","record_index","native_species","native_form","ordinal","table_offset","field0_u16","field1_u16","field2_u16","move_id_candidate","level_code_candidate","extra_level_code_candidate","semantic_status","source_sha256"])
        for g,n in sorted(P_COUNTS.items()):
            p=root/"personal"/f"{g}_personal_total.perbin";b=p.read_bytes()
            digest=hashlib.sha256(b).hexdigest();arr=records(b)
            check(len(arr)==n,g+" parent count")
            count=0;patterns=Counter();codes=Counter();max_move=0;empty=0
            for ri,t in enumerate(arr):
                r,offs,size=t
                data={i:raw for i,o,raw in spans(b,t) if o}
                sp=int.from_bytes(data.get(0,b"\0\0"),"little");form=int.from_bytes(data.get(1,b"\0\0"),"little")
                check(21 in data and len(data[21])==4,g+" missing vector")
                pos=r+offs[21];ptr=pos+int.from_bytes(data[21],"little")
                check(pos<ptr and ptr+4<=len(b),g+" vector target")
                num=struct.unpack_from("<I",b,ptr)[0]
                check(ptr+4+num*4<=len(b),g+" vector bounds")
                if not num:empty+=1
                for j in range(num):
                    q=ptr+4+j*4;child=q+struct.unpack_from("<I",b,q)[0]
                    check(q<child<len(b),g+" child pointer")
                    ct=table(b,child);fields={i:raw for i,o,raw in spans(b,ct) if o}
                    check(all(i<=2 and len(raw)==2 for i,raw in fields.items()),g+" child shape")
                    check(len(ct[1])<= (3 if g in ("hayabusa","ikkaku") else 2),g+" child field count")
                    x=[int.from_bytes(fields[i],"little") if i in fields else None for i in range(3)]
                    move,level=(x[0],x[1]) if g=="hayabusa" else (x[1],x[0])
                    check(move is not None and move>0,g+" move candidate missing")
                    max_move=max(max_move,move)
                    patterns["/".join(str(len(fields.get(i,b""))) for i in range(len(ct[1])))]+=1
                    codes[str(level)]+=1
                    w.writerow((g,ri,sp,form,j,child,*x,move,level,x[2],"sample_supported_not_native",digest));count+=1
            check(count==EXPECTED[g],g+" record count");total+=count
            inventory.append({"dataset":g,"parents":n,"empty_vectors":empty,"records":count,"patterns":dict(patterns),"level_code_histogram":dict(codes),"max_move_candidate":max_move})
    check(total==360484,"total")
    result={"status":"PASS_STRUCTURE","nested_records":total,"inventory":inventory,"limitations":["Absent fields remain NULL, not zero.","Level codes 101/102 and third field semantics require ELF consumer proof.","Hayabusa column reversal is sample-supported, not runtime-confirmed."]}
    (out/"learnset_summary.json").write_text(json.dumps(result,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(result))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path(__file__).resolve().parents[1]/NCA/"1/bin/pml");p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    root=a.root.resolve();out=a.out.resolve()
    if out==root or root in out.parents:raise ValueError("output overlaps source")
    audit(root,out)
