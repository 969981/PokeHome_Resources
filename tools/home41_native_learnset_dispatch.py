# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""Verify raw vtable slots, dispatch wrappers and collector windows for HOME 4.1.0."""
import argparse,hashlib,json,struct,csv
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments,find_pc_references
from home41_native_learnset_focus import SHA,GROUPS
BASES=(0x798b60,0x798da0,0x799000,0x799150,0x799390,0x7995d8,0x799838)
WINDOWS={
 "count_wrapper":(0x4ffc50,0x4ffce8),
 "code_wrapper":(0x4ffce8,0x4ffdac),
 "extra_wrapper":(0x4ffdac,0x4ffe70),
 "extended_query":(0x4ffe70,0x500044),
 "move_wrapper":(0x500044,0x500108),
 "collector":(0x4fcce0,0x4fce80),
 "collector_caller":(0x4fcbd0,0x4fccd8),
 "resource_initialization":(0x501ac0,0x50213c),
 "display_flags":(0xfc630,0xfc750),
 "related_query":(0x500108,0x500400),
 "wrapper_thunks":(0x52fa20,0x5300c0),
}
def audit(b,out):
    if hashlib.sha256(b).hexdigest()!=SHA:raise ValueError("wrong ELF SHA")
    segs=elf_segments(b);md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.skipdata=True
    def raw(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                at=s["file_offset"]+va-s["vaddr"];return b[at:at+n]
        raise ValueError(f"unbacked VA {va:#x}")
    def dis(lo,hi):
        return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in md.disasm(raw(lo,hi-lo),lo)]
    tables=[]
    for i,(base,(count,entry,lookup)) in enumerate(zip(BASES,GROUPS)):
        c,e=struct.unpack("<QQ",raw(base+0xc8,16))
        if (c,e)!=(count,entry):raise ValueError(f"vtable pair mismatch {i}")
        slots=[{"offset":j,"target":struct.unpack("<Q",raw(base+j,8))[0]} for j in range(0,0xd8,8)]
        tables.append({"group":chr(65+i),"address_point_candidate":base,"slot_c8":c,"slot_d0":e,"lookup":lookup,"raw_slots":slots})
    refs=find_pc_references(b,segs,[{"virtual_address":v} for v in BASES])
    for r in refs:r["window"]=dis(max(r["pc"]-32,0),r["pc"]+84)
    windows={k:dis(*v) for k,v in WINDOWS.items()}
    anchors={0x4ffd68:("ldr","x8, [x8, #0xd0]"),0x4ffd7c:("ldr","w19, [sp, #8]"),0x4ffd8c:("mov","w19, #0x65"),0x4ffe40:("ldr","w19, [sp, #0xc]"),0x5000c4:("ldr","x8, [x8, #0xd0]"),0x5000d8:("ldr","w19, [sp, #4]"),0x5000e8:("mov","w19, wzr"),0x4fcc64:("bl","#0x4fcce0"),0xfc6ec:("strb","w9, [x8, #8]"),0xfc708:("str","w8, [x9, #0xc]")}
    for pc,expected in anchors.items():
        i=dis(pc,pc+4)[0]
        if (i["op"],i["args"])!=expected:raise ValueError(f"anchor mismatch {pc:#x}")
    report={"status":"PASS_STATIC_SLOT_AND_INSTRUCTION_ANCHORS","elf_sha256":SHA,"vtable_candidates":tables,"address_refs":refs,"windows":windows,"limitations":["Raw pointer pairs and address references are not live object identity proof.","Dataset enum to concrete vtable initialization still requires dataflow review.","No formal learning-method or legality mapping inferred."]}
    out.mkdir(parents=True,exist_ok=True)
    (out/"dispatch.json").write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    with (out/"dispatch.asm").open("w",encoding="utf-8") as f:
        for name,w in windows.items():
            f.write("\n; "+name+"\n")
            for i in w:f.write(f"{i['pc']:08x} {i['bytes']:8} {i['op']:9} {i['args']}\n")
    with (out/"vtable_slots.csv").open("w",newline="") as f:
        w=csv.writer(f);w.writerow(["group","address_point_candidate","offset","target"])
        for t in tables:
            for s in t["raw_slots"]:w.writerow([t["group"],hex(t["address_point_candidate"]),hex(s["offset"]),hex(s["target"])])
    print(json.dumps({"status":report["status"],"vtable_pairs":len(tables),"address_refs":len(refs),"anchors":len(anchors),"windows":len(windows)}))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.elf.read_bytes(),a.out)
