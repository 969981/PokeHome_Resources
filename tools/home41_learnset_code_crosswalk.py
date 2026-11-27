# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""Compare raw learnset code membership by dataset/species/form/move; not legality."""
import argparse,csv,json
from pathlib import Path
from collections import defaultdict,Counter
def run(src,out):
    groups=defaultdict(lambda:defaultdict(set));rows=Counter()
    with src.open(encoding="utf-8-sig",newline="") as f:
        for x in csv.DictReader(f):
            g=x["dataset"];k=tuple(int(x[y]) for y in ("native_species","native_form","move_id_candidate"))
            raw=x["level_code_candidate"];code=int(raw) if raw else None
            groups[g][k].add(code);rows[g,code]+=1
    special={g:{k for k,c in m.items() if 102 in c} for g,m in groups.items()}
    assert sum(rows.values())==360484
    assert sum(rows[g,101] for g in groups)==249122
    assert sum(rows[g,102] for g in groups)==1129
    assert all(groups[g][k]=={102} for g,keys in special.items() for k in keys)
    u=special["ikkaku"]|special["titan"];s=special["global"]
    assert (len(s),len(u),len(s&u),len(u-s))==(519,587,519,68)
    out.mkdir(parents=True,exist_ok=True)
    with (out/"learnset_102_crosswalk.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["source_dataset","species","form","move_id"]+sorted(groups))
        for g,keys in sorted(special.items()):
            for k in sorted(keys):
                w.writerow([g,*k,*[";".join(sorted("NULL" if c is None else str(c) for c in groups[d].get(k,set()))) for d in sorted(groups)]])
    report={"status":"PASS_RAW_KEY_COMPARISON","counts":{g:{"101":rows[g,101],"102":rows[g,102],"absent":rows[g,None],"distinct_102":len(special[g])} for g in groups},"global_102_union":{"global":len(s),"ikkaku_titan_union":len(u),"intersection":len(s&u),"union_only":len(u-s)},"crosswalk_caveat":"Identical numeric keys across datasets are comparison candidates, not confirmed canonical form mappings. No method semantics inferred."}
    (out/"learnset_code_summary.json").write_text(json.dumps(report,indent=2)+"\n");print(json.dumps(report))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--csv",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.csv,a.out)
