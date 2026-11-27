# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""Static ELF triage of Personal field 21 and learnset-code consumers. Not a semantic proof."""
import argparse,csv,hashlib,json,re,struct
from collections import defaultdict,Counter
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM,ARM64_OP_MEM
import home41_elf_resource_xrefs as xr
SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
NEEDLES=("personal_total.perbin","personal_total","pml/personal","wazabin","pml/waza","grow_table","Learnset","LearnSet","learnset")
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    b=a.elf.read_bytes();sha=hashlib.sha256(b).hexdigest()
    if sha!=SHA:raise ValueError("ELF version mismatch")
    segs=xr.elf_segments(b);xr.NEEDLES=NEEDLES
    strings=xr.resource_strings(b,segs);refs=xr.find_pc_references(b,segs,strings)
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.skipdata=True
    def window(pc,lo=40,hi=80):
        for s in segs:
            if not s["executable"] or not s["vaddr"]<=pc<s["vaddr"]+s["size"]:continue
            begin=max(s["vaddr"],pc-lo);end=min(s["vaddr"]+s["size"],pc+hi)
            off=s["file_offset"]+begin-s["vaddr"]
            return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in md.disasm(b[off:off+end-begin],begin)]
        return []
    for r in refs:
        r["text"]=[x["text"] for x in strings if x["virtual_address"]==r["target_va"]]
        r["window"]=window(r["pc"],64,144)
    # First pass: raw A64 unsigned-immediate LDRH with displacement 0x2e;
    # CMP (immediate) / SUBS with imm 100/101/102; do not assume these are learnset.
    half=[];checks=[];callers=defaultdict(list);n=0
    for s in segs:
        if not s["executable"]:continue
        off,size,base=s["file_offset"],s["size"],s["vaddr"]
        for k,(word,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
            pc=base+k*4;n+=1
            if word&0xffc00000==0x79400000 and ((word>>10)&4095)*2==0x2e:half.append(pc)
            if word&0x7f00001f==0x7100001f and not(word&(1<<22)) and ((word>>10)&4095) in (100,101,102):checks.append((pc,(word>>10)&4095))
    candidates=[]
    for pc in half:
        w=window(pc,56,112);before=[i for i in w if i["pc"]<pc];after=[i for i in w if i["pc"]>pc]
        tags=[]
        if any(i["op"] in ("ldrsw","ldr") and "[" in i["args"] for i in before):tags.append("prior_load")
        if any(i["op"]=="sub" and not "#" in i["args"] for i in before):tags.append("prior_register_sub")
        if any(i["op"] in ("ldrh","ldurh") for i in before):tags.append("prior_vtable_size_candidate")
        if any(i["op"] in ("cbz","cbnz","b.eq","b.ls","b.lo") for i in after[:6]):tags.append("near_guard")
        if any(i["op"]=="add" and ("uxtw" in i["args"] or "sxtw" in i["args"]) for i in after):tags.append("offset_add_candidate")
        candidates.append({"pc":pc,"tags":tags,"score":len(tags),"window":w})
    candidates.sort(key=lambda x:(-x["score"],x["pc"]))
    checks_out=[]
    for pc,code in checks:
        w=window(pc,40,52)
        tags=[]
        if any(i["op"] in ("ldrh","ldurh") for i in w if i["pc"]<pc):tags.append("prior_u16_load")
        if any(i["op"].startswith("b.") or i["op"] in ("csel","cset","ccmp") for i in w if pc<i["pc"]<=pc+12):tags.append("conditional_use")
        if any(i["op"]=="cmp" and re.search(r"#(?:0x6[456]|10[012])\b",i["args"]) for i in w if i["pc"]!=pc):tags.append("multiple_special_comparisons")
        checks_out.append({"pc":pc,"code":code,"tags":tags,"window":w})
    # Direct callers to candidate entry windows are not proof of function boundaries.
    targets=set()
    for r in refs:
        for i in r["window"]:
            if i["op"]=="bl" and re.fullmatch(r"#0x[0-9a-f]+",i["args"]):targets.add(int(i["args"][1:],16))
    for s in segs:
        if not s["executable"]:continue
        off,size,base=s["file_offset"],s["size"],s["vaddr"]
        for k,(word,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
            if word&0xfc000000!=0x94000000:continue
            pc=base+4*k;t=pc+4*xr.signed(word&0x3ffffff,26)
            if t in targets:callers[t].append(pc)
    a.out.mkdir(parents=True,exist_ok=True)
    result={"status":"STATIC_CANDIDATES_ONLY","elf_sha256":sha,"scanned_words":n,"strings":strings,"path_xrefs":refs,"field21_load_candidates":candidates,"special_code_compare_candidates":checks_out,"near_path_call_targets":[{"target":t,"direct_callers":callers[t],"target_window":window(t,0,128)} for t in sorted(targets)],"limitations":["0x2e is the FlatBuffers vtable byte slot, not a runtime object offset.","Immediate compares may be unrelated. ADRP+ADD and nearby BL are only candidate anchors.","No proof of alias, caller argument provenance or native method semantics."]}
    (a.out/"native_learnset_candidates.json").write_text(json.dumps(result,indent=2)+"\n")
    with (a.out/"native_learnset_candidates.csv").open("w",newline="") as f:
        w=csv.writer(f);w.writerow(["kind","pc","code","tags"])
        for x in candidates:w.writerow(["field21",hex(x["pc"]),"",";".join(x["tags"])])
        for x in checks_out:w.writerow(["cmp",hex(x["pc"]),x["code"],";".join(x["tags"])])
    print(json.dumps({"status":result["status"],"scanned_words":n,"strings":len(strings),"path_xrefs":[{"pc":hex(r["pc"]),"text":r["text"]} for r in refs],"field21_loads":len(candidates),"top_field21":[{"pc":hex(x["pc"]),"tags":x["tags"]} for x in candidates[:15]],"compares":dict(Counter(x["code"] for x in checks_out)),"top_compare":[{"pc":hex(x["pc"]),"code":x["code"],"tags":x["tags"]} for x in checks_out if "prior_u16_load" in x["tags"] and "multiple_special_comparisons" in x["tags"]][:30]}))
if __name__=="__main__":main()
