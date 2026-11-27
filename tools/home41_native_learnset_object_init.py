# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""HOME static learnset object-table and collector audit. No runtime object identity claims."""
import argparse,csv,hashlib,json,struct
from collections import defaultdict
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
from home41_elf_resource_xrefs import elf_segments,signed
from home41_native_learnset_focus import SHA
from home41_native_learnset_dispatch import BASES
GLOBAL=0x7a5d78
LOADERS={0x501ad0:"global",0x501b70:"beluga",0x501c10:"orion",0x501cb0:"delphis",0x501d50:"hayabusa",0x501df0:"titan",0x501e90:"ikkaku"}
CALLS={**LOADERS,0x4fcce0:"collector",0x500108:"membership",0x53db50:"initial_guard",0x532408:"threshold",0x535c70:"guard",0x532ed8:"slot_query",0x532e20:"additional_query",0x531008:"identity0",0x531010:"identity1",0x5312d8:"identity_extra"}
def audit(b,out):
    if hashlib.sha256(b).hexdigest()!=SHA:raise ValueError("ELF hash mismatch")
    segs=elf_segments(b);md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.skipdata=True;md.detail=True
    def raw(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                o=s["file_offset"]+va-s["vaddr"];return b[o:o+n]
        raise ValueError(f"unbacked VA {va:#x}")
    def dis(lo,hi):
        return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in md.disasm(raw(lo,hi-lo),lo)]
    # Resolve exact raw pointer candidates as alternate indirection targets.
    pointer_sites=defaultdict(list);targets={GLOBAL,*BASES}
    for s in segs:
        if s["executable"]:continue
        off,size,base=s["file_offset"],s["size"],s["vaddr"]
        for j,(v,) in enumerate(struct.iter_unpack("<Q",memoryview(b)[off:off+size-size%8])):
            if v in targets:pointer_sites[v].append(base+j*8)
    reverse={p:v for v,ps in pointer_sites.items() for p in ps}
    wanted=targets|set(reverse);pages={v&~4095 for v in wanted}
    refs=[];callers=[];seen=set()
    # Scan ADRP anchors, then a bounded straight-line instruction window.
    # Discard register facts on writes, stop at control flow; no cross-block inference.
    for s in segs:
        if not s["executable"]:continue
        off,size,base=s["file_offset"],s["size"],s["vaddr"]
        for j,(word,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
            pc=base+j*4
            if word&0xfc000000 in (0x94000000,0x14000000):
                t=pc+4*signed(word&0x3ffffff,26)
                if t in CALLS:callers.append({"pc":pc,"target":t,"label":CALLS[t]})
            if word&0x9f000000!=0x90000000:continue
            imm=((word>>29)&3)|(((word>>5)&0x7ffff)<<2)
            page=(pc&~4095)+(signed(imm,21)<<12)
            if page not in pages:continue
            regs={}
            for i in md.disasm(b[off+j*4:off+min(size,j*4+128)],pc):
                if i.mnemonic==".byte":break
                op=i.mnemonic;ops=i.operands
                if i.address!=pc and (op.startswith("b.") or op in ("b","bl","blr","br","ret","cbz","cbnz","tbz","tbnz")):break
                def r(o):return i.reg_name(o.reg)
                def rn(n):return i.reg_name(n)
                new={}
                def note(kind,address):
                    if address not in wanted:return
                    k=(i.address,kind,address)
                    if k in seen:return
                    seen.add(k);refs.append({"pc":i.address,"anchor":pc,"kind":kind,"address":address,"points_to":reverse.get(address),"instruction":op+" "+i.op_str})
                if op=="adrp" and len(ops)==2 and ops[1].type==ARM64_OP_IMM:
                    new[r(ops[0])]=ops[1].imm
                elif op=="add" and len(ops)==3 and ops[1].type==ARM64_OP_REG and ops[2].type==ARM64_OP_IMM and r(ops[1]) in regs:
                    address=regs[r(ops[1])]+(ops[2].imm<<ops[2].shift.value)
                    new[r(ops[0])]=address;note("address_formation",address)
                elif op=="mov" and len(ops)==2 and ops[1].type==ARM64_OP_REG and r(ops[1]) in regs:
                    new[r(ops[0])]=regs[r(ops[1])]
                elif op.startswith(("ldr","str","ldur","stur","ldp","stp")):
                    for o in ops:
                        if o.type!=ARM64_OP_MEM or o.mem.index:continue
                        reg=rn(o.mem.base)
                        if reg not in regs:continue
                        address=regs[reg]+o.mem.disp
                        note("load" if op.startswith("ld") else "store",address)
                        if op=="ldr" and len(ops)==2 and r(ops[0]).startswith("x") and address in reverse:new[r(ops[0])]=reverse[address]
                try:
                    for reg in i.regs_access()[1]:
                        name=rn(reg);regs.pop(name,None)
                        if name.startswith("w"):regs.pop("x"+name[1:],None)
                except Exception:break
                regs.update(new)
    for row in refs:
        pc=row["pc"];row["window"]=dis(pc-32,pc+96)
    # Fixed 0x200-byte exclusion table traversed in 16-byte strides.
    table=raw(0x657db8,0x200)
    entries=[{"ordinal":j,"address":0x657db8+j*16,"raw_hex":table[j*16:j*16+16].hex(),"word0":struct.unpack_from("<I",table,j*16)[0],"identity0":struct.unpack_from("<I",table,j*16+4)[0],"identity1":struct.unpack_from("<H",table,j*16+8)[0],"raw_u16_0a":struct.unpack_from("<H",table,j*16+10)[0],"move_id":struct.unpack_from("<I",table,j*16+12)[0]} for j in range(32)]
    windows={name:dis(addr,addr+(0x100 if name not in ("collector","membership") else (0x194 if name=="collector" else 0x2f0))) for addr,name in CALLS.items()}
    report={"status":"STATIC_EVIDENCE_ONLY","elf_sha256":SHA,"global_slot":GLOBAL,"references":refs,"pointer_sites":{hex(k):v for k,v in pointer_sites.items()},"direct_callers":callers,"exclusion_table":entries,"windows":windows,"limitations":["Bounded straight-line register tracking misses cross-branch, indirect and relocation-only references.","Address formation or store candidates do not by themselves prove global initialization or dataset identity.","Exclusion rows preserve raw identities; no legality mapping inferred."]}
    # Examine static pointer slot and dynamic relocations, including stripped ELF.
    # A relocation addend is a static address candidate, not a runtime value.
    phoff=struct.unpack_from("<Q",b,32)[0]
    ents,n=struct.unpack_from("<HH",b,54)
    dynamic={}
    for j in range(n):
        typ,flags,off,va,pa,sz,ms,align=struct.unpack_from("<IIQQQQQQ",b,phoff+j*ents)
        if typ!=2 or off+sz>len(b):continue
        for tag,val in struct.iter_unpack("<qQ",memoryview(b)[off:off+sz-sz%16]):
            if tag==0:break
            dynamic[tag]=val
    reloc=[]
    if all(t in dynamic for t in (7,8,9)) and dynamic[9]==24 and dynamic[8]%24==0:
        for site,info,addend in struct.iter_unpack("<QQq",raw(dynamic[7],dynamic[8])):
            if site==GLOBAL or addend in targets:
                reloc.append({"site":site,"type":info&0xffffffff,"symbol":info>>32,"addend":addend})
    try:global_bytes=raw(GLOBAL,8).hex()
    except ValueError:global_bytes=None
    loader_windows={r["label"]:dis(r["pc"]-0x100,r["pc"]+0x100) for r in callers if r["target"] in LOADERS}
    report["global_slot_raw_hex"]=global_bytes
    report["dynamic_relocations"]=reloc
    report["loader_caller_windows"]=loader_windows
    report["dynamic_tags"]={hex(k):v for k,v in dynamic.items()}
    out.mkdir(parents=True,exist_ok=True)
    (out/"object_init.json").write_text(json.dumps(report,indent=2)+"\n")
    with (out/"exclusion_table.csv").open("w",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(entries[0]));w.writeheader();w.writerows(entries)
    print(json.dumps({"status":report["status"],"references":[{k:(hex(v) if k in ("pc","address","anchor") else v) for k,v in x.items() if k!="window"} for x in refs],"loader_callers":[{**x,"pc":hex(x["pc"]),"target":hex(x["target"])} for x in callers if x["target"] in LOADERS],"exclusion_rows":len(entries),"total_direct_calls":len(callers)}))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.elf.read_bytes(),a.out)
