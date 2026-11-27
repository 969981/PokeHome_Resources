# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""Extract complete native Personal getter windows and Waza registration candidates."""
import argparse,csv,hashlib,json,struct
from pathlib import Path
from collections import defaultdict
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_MEM,ARM64_OP_IMM
from home41_elf_resource_xrefs import elf_segments,signed
from home41_native_learnset_focus import SHA,GROUPS
from home41_native_learnset_dispatch import BASES
from home41_native_selector_closure import MAP
def audit(b,out):
    if hashlib.sha256(b).hexdigest()!=SHA:raise ValueError("ELF SHA")
    segs=elf_segments(b);md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.detail=True
    def raw(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                a=s["file_offset"]+va-s["vaddr"];return b[a:a+n]
        raise ValueError(hex(va))
    def ptr(a):return struct.unpack("<Q",raw(a,8))[0]
    def dis(lo,hi):
        return list(md.disasm(raw(lo,hi-lo),lo))
    def render(ins):return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in ins]
    def first_body(a,limit=0x100):
        # Keep complete bounded window including default paths after early returns.
        return dis(a,a+limit)
    def field_candidates(ins):
        result=[]
        for k,i in enumerate(ins):
            if i.mnemonic!="ldrh" or len(i.operands)!=2:continue
            op=i.operands[1]
            if op.type!=ARM64_OP_MEM or op.mem.index or not 4<=op.mem.disp<=52 or op.mem.disp%2:continue
            dest=i.reg_name(i.operands[0].reg)
            # Vtable slot and subsequent scalar read are candidates. Preserve
            # exact instructions for manual register/default/branch proof.
            following=ins[k+1:k+9]
            for j in following:
                if j.mnemonic in ("ldrb","ldrh","ldr","ldrsb","ldrsh","ldrsw") and len(j.operands)==2 and j.operands[1].type==ARM64_OP_MEM:
                    m=j.operands[1].mem
                    idx=i.reg_name(m.index) if m.index else ""
                    if idx in (dest,"x"+dest[1:]):
                        result.append({"vtable_slot":op.mem.disp,"field_index":(op.mem.disp-4)//2,"slot_pc":i.address,"load_pc":j.address,"load":j.mnemonic,"args":j.op_str});break
        return result
    entries=[];windows={};targets=set()
    for sel,g,dataset,reg,got,store,loader in MAP:
        base=BASES[g];assert ptr(got)+16==base
        slots={off:ptr(base+off) for off in range(0x30,0xd8,8)}
        assert (slots[0xc8],slots[0xd0])==GROUPS[g][:2]
        ordered=sorted(set(slots.values()))
        for off,a in slots.items():
            end=next((x for x in ordered if x>a),a+0x200)
            ins=dis(a,min(end,a+0x240))
            windows[f"{dataset}:{off:#x}"]=render(ins)
            hits=field_candidates(ins)
            entries.append({"selector":sel,"dataset":dataset,"slot":off,"target":a,"field_candidates":hits,"calls":[i.op_str for i in ins if i.mnemonic in ("bl","b")],"instruction_count":len(ins)})
            targets.add(a)
    # Full registration region and exact Waza resource path/loader anchors.
    for name,a,z in [("waza_registration",0x53b000,0x53bbd0),("waza_query_init",0x53cdec,0x53d110),("waza_provider_init",0x53d4a0,0x53d690),("waza_dynamic_guard",0x53c5d0,0x53c6c8),("waza_record_lookup",0x53d690,0x53d6e0),("waza_path_builder",0x501f30,0x50213c),("personal_wrapper_region",0x4fe720,0x4ffc50),("waza_wrapper_region",0x53c000,0x53cdec)]:
        windows[name]=render(dis(a,z))
    # Resolve GOT-backed vtable address candidates in the Waza registration
    # region. Include raw neighboring slots, and bounded target windows.
    vtables={}
    for i in dis(0x53b000,0x53bbd0):
        if i.mnemonic!="adrp":continue
        reg=i.reg_name(i.operands[0].reg);page=i.operands[1].imm
        for j in dis(i.address+4,i.address+36):
            if j.mnemonic in ("bl","blr","b","ret"):break
            if j.mnemonic=="ldr" and len(j.operands)==2 and j.operands[1].type==ARM64_OP_MEM:
                m=j.operands[1].mem
                if i.reg_name(m.base)==reg and not m.index:
                    site=page+m.disp
                    try:base=ptr(site)+16;slots=[ptr(base+k) for k in range(0,0x70,8)]
                    except ValueError:break
                    if all(any(s["executable"] and s["vaddr"]<=p<s["vaddr"]+s["size"] for s in segs) for p in slots[:7]):
                        key=hex(site);vtables[key]={"got":site,"vtable":base,"slots":slots,"anchor":i.address,"load":j.address}
                        for k,p in enumerate(slots):
                            if any(s["executable"] and s["vaddr"]<=p and p+0x80<=s["vaddr"]+s["size"] for s in segs):
                                windows[f"waza_candidate:{base:#x}:{8*k:#x}"]=render(first_body(p,0x80));targets.add(p)
                    break
            try:
                if any(j.reg_name(r)==reg or (reg.startswith("x") and j.reg_name(r)=="w"+reg[1:]) for r in j.regs_access()[1]):break
            except Exception:break
    callers=defaultdict(list)
    for s in segs:
        if not s["executable"]:continue
        off,size,va=s["file_offset"],s["size"],s["vaddr"]
        for k,(w,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
            if w&0xfc000000 not in (0x94000000,0x14000000):continue
            pc=va+4*k;a=pc+4*signed(w&0x3ffffff,26)
            if a in targets:callers[hex(a)].append(pc)
    out.mkdir(parents=True,exist_ok=True)
    report={"status":"STATIC_GETTER_EVIDENCE","elf_sha256":SHA,"personal_slots":entries,"waza_vtable_candidates":list(vtables.values()),"windows":windows,"direct_refs":dict(callers),"limitations":["Field candidates require review of register provenance and default branches; no business labels inferred.","Waza GOT candidates are not final object identity.","Bounded windows are not guaranteed complete function CFGs."]}
    (out/"getter_evidence.json").write_text(json.dumps(report,indent=2)+"\n")
    with (out/"personal_getter_slots.csv").open("w",newline="") as f:
        w=csv.writer(f);w.writerow(["selector","dataset","slot","target","field_candidates","instruction_count"])
        for r in entries:w.writerow([r["selector"],r["dataset"],hex(r["slot"]),hex(r["target"]),";".join(str(x["field_index"]) for x in r["field_candidates"]),r["instruction_count"]])
    with (out/"getter_evidence.asm").open("w") as f:
        for name,ins in windows.items():
            f.write("\n; "+name+"\n")
            for i in ins:f.write(f"{i['pc']:08x} {i['bytes']:8} {i['op']:8} {i['args']}\n")
    print(json.dumps({"status":report["status"],"personal_slots":len(entries),"waza_vtable_candidates":len(vtables),"windows":len(windows),"direct_refs":sum(map(len,callers.values()))}))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.elf.read_bytes(),a.out)
