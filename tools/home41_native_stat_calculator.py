# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""Read-only HOME 4.1.0 stat calculator evidence; bounded windows, not symbols."""
import argparse,hashlib,json,struct
from collections import defaultdict
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM
from home41_elf_resource_xrefs import elf_segments,signed
from home41_native_learnset_focus import SHA
WRAPPERS=[0x4fea6c,0x4feb84,0x4fec9c,0x4fedb4,0x4feecc,0x4fefe4]
CALLS=[0x531eb4,0x531fa4,0x5320a0,0x53219c,0x532298,0x532394]
def audit(b,out):
    if hashlib.sha256(b).hexdigest()!=SHA:raise ValueError("ELF version")
    segs=elf_segments(b);md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.detail=True
    def raw(a,n):
        for s in segs:
            if s["vaddr"]<=a and a+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+a-s["vaddr"];return b[p:p+n]
        raise ValueError(hex(a))
    def dis(a,z):
        return list(md.disasm(raw(a,z-a),a))
    def render(ins):
        return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in ins]
    def direct(ins):
        return {i.operands[0].imm for i in ins if i.mnemonic=="bl" and len(i.operands)==1 and i.operands[0].type==ARM64_OP_IMM}
    for k,(pc,t) in enumerate(zip(CALLS,WRAPPERS)):
        i=dis(pc,pc+4)[0]
        if i.mnemonic!="bl" or i.operands[0].imm!=t:raise ValueError(f"stat anchor {k}")
    region=dis(0x531c80,0x532580)
    targets=direct(region)
    windows={"stat_region":render(region),"stat_dispatch":render(dis(0x532408,0x5325d0))}
    # Preserve every direct callee from the region, and one more level of small
    # helper windows. Do not equate adjacent functions or assume first RET
    # is a function boundary.
    second=set()
    for a in sorted(targets):
        ins=dis(a,a+0x180);windows[f"callee:{a:#x}"]=render(ins)
        if a not in WRAPPERS:second|=direct(ins)
    second-=targets
    for a in sorted(second):
        if any(s["executable"] and s["vaddr"]<=a and a+0x100<=s["vaddr"]+s["size"] for s in segs):
            windows[f"helper:{a:#x}"]=render(dis(a,a+0x100))
    refs=defaultdict(list)
    for s in segs:
        if not s["executable"]:continue
        off,size,va=s["file_offset"],s["size"],s["vaddr"]
        for k,(w,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
            if w&0xfc000000 not in (0x94000000,0x14000000):continue
            pc=va+4*k;a=pc+4*signed(w&0x3ffffff,26)
            if 0x531c80<=a<0x532408:refs[hex(a)].append(pc)
    out.mkdir(parents=True,exist_ok=True)
    report={"status":"STATIC_STAT_EVIDENCE","elf_sha256":SHA,"windows":windows,"stat_wrapper_calls":CALLS,"direct_targets":sorted(targets),"incoming_refs":dict(refs),"limitations":["Window boundaries not recovered function boundaries.","No live object execution or universal game formula claimed."]}
    # Resolve tail-call arithmetic targets and six dataset dispatch blocks.
    windows["arithmetic_region"]=render(dis(0x5378fc,0x538c00))
    windows["dataset_dispatch_region"]=render(dis(0x5318c0,0x531e20))
    windows["dataset_calculators"]=render(dis(0x5347b0,0x537870))
    windows["growth_select"]=render(dis(0x5013f0,0x501550))
    jump_tables={}
    for a,n in [(0x65a7e6,0x42),(0x65a828,0x30)]:
        jump_tables[hex(a)]=raw(a,n).hex()
    report["jump_table_bytes"]=jump_tables
    # Export contiguous literal bytes near arithmetic table xrefs after
    # disassembly review; this interval is not yet an interpreted nature table.
    report["arithmetic_constants"]=raw(0x65a000,0x1000).hex()
    (out/"stat_evidence.json").write_text(json.dumps(report,indent=2)+"\n")
    with (out/"stat_evidence.asm").open("w") as f:
        for name,ins in windows.items():
            f.write("\n; "+name+"\n")
            for i in ins:f.write(f"{i['pc']:08x} {i['bytes']:8} {i['op']:8} {i['args']}\n")
    print(json.dumps({"status":report["status"],"windows":len(windows),"direct_targets":[hex(a) for a in sorted(targets)],"incoming":{k:len(v) for k,v in refs.items()}}))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.elf.read_bytes(),a.out)
