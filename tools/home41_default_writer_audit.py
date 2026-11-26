#!/usr/bin/env python3
"""Conservative static scan of page materialization, direct memory uses and pointer escapes.
Does not establish startup reachability, indirect aliasing or runtime default values.
"""
import argparse, hashlib, json, struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM, CS_AC_READ, CS_AC_WRITE
from capstone.arm64 import ARM64_OP_REG, ARM64_OP_IMM, ARM64_OP_MEM
from home41_elf_resource_xrefs import elf_segments,signed
from home41_image_reverse_index import ELF_SHA,NCA

LO,HI=0xb15db2,0xb15ff8
def audit(raw):
    if hashlib.sha256(raw).hexdigest()!=ELF_SHA: raise ValueError("ELF SHA")
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.detail=True
    def key(r):
        n=md.reg_name(r)
        if n and n[0] in "wx" and n[1:].isdigit():return int(n[1:])
        return None
    refs=[];pages=[];events={}
    def emit(kind,pc,addr,op,seed):
        k=(kind,pc,addr)
        events[k]=dict(kind=kind,pc=hex(pc),address=hex(addr),instruction=op,seed=hex(seed))
    for s in elf_segments(raw):
        if not s["executable"]:continue
        start=s["file_offset"]
        for rel in range(0,s["size"]-3,4):
            op=struct.unpack_from("<I",raw,start+rel)[0];pc=s["vaddr"]+rel
            if op&0x9f000000 not in (0x90000000,0x10000000):continue
            imm=signed(((op>>29)&3)|(((op>>5)&0x7ffff)<<2),21)
            adrp=(op&0x9f000000)==0x90000000
            addr=((pc&~4095)+(imm<<12)) if adrp else pc+imm
            if not (addr==LO&~4095 or LO<=addr<HI):continue
            pages.append(dict(pc=hex(pc),address=hex(addr),kind="adrp" if adrp else "adr"))
            regs={op&31:addr}
            # Follow straight-line local register aliases; record branch/call escapes,
            # but deliberately do not pretend to solve CFG or stack aliases.
            data=raw[start+rel+4:min(start+s["size"],start+rel+4+0x180)]
            for i in md.disasm(data,pc+4):
                ops=i.operands;mn=i.mnemonic;desc=mn+" "+i.op_str
                updates={}
                for o in ops:
                    if o.type==ARM64_OP_MEM:
                        r=key(o.mem.base)
                        if r in regs and not o.mem.index:
                            a=regs[r]+o.mem.disp
                            # Include nearby stores potentially overlapping start; width is not inferred.
                            if LO-32<=a<HI:
                                kind="store_candidate" if mn.startswith(("st","cas","swp")) else "load_candidate" if mn.startswith("ld") else "memory_candidate"
                                emit(kind,i.address,a,desc,pc)
                if mn in ("add","sub") and len(ops)==3 and ops[0].type==ops[1].type==ARM64_OP_REG and ops[2].type==ARM64_OP_IMM:
                    dst,src=key(ops[0].reg),key(ops[1].reg)
                    if src in regs and dst is not None and md.reg_name(ops[0].reg).startswith("x"):
                        delta=ops[2].imm<<ops[2].shift.value
                        a=regs[src]+(delta if mn=="add" else -delta)
                        updates[dst]=a
                        if LO<=a<HI:emit("address_materialized",i.address,a,desc,pc)
                elif mn=="mov" and len(ops)==2 and ops[0].type==ops[1].type==ARM64_OP_REG:
                    dst,src=key(ops[0].reg),key(ops[1].reg)
                    if src in regs and dst is not None and md.reg_name(ops[0].reg).startswith("x"):updates[dst]=regs[src]
                if mn.startswith(("str","stur","stp")):
                    for o in ops:
                        if o.type==ARM64_OP_REG and key(o.reg) in regs:
                            a=regs[key(o.reg)]
                            if LO<=a<HI:emit("pointer_store_candidate",i.address,a,desc,pc)
                if mn in ("bl","blr","b","br","ret") or mn.startswith("b.") or mn.startswith(("cb","tb")):
                    for r,a in regs.items():
                        if LO<=a<HI and (r<=7 or mn not in ("bl","blr")):
                            emit("control_flow_or_call_candidate",i.address,a,desc,pc)
                    # Stop at conditional branches too: no false path merging.
                    break
                try:
                    _,writes=i.regs_access()
                    for r in writes:
                        regs.pop(key(r),None)
                except Exception:break
                regs.update(updates)
                if not regs:break
    # Search exact little endian pointers in non-executable file-backed segments.
    # PIE relocations and runtime pointer creation remain outside this search.
    literals=[]
    for s in elf_segments(raw):
        if s["executable"]:continue
        st=s["file_offset"]
        for rel in range(0,s["size"]-7,8):
            x=struct.unpack_from("<Q",raw,st+rel)[0]
            if LO<=x<HI:literals.append(dict(va=hex(s["vaddr"]+rel),target=hex(x)))
    # Identify candidate slots via ELF64 section metadata and RELA entries.
    # Some stripped NSO-derived ELF files have no useful section table.
    sections=[]
    shoff=struct.unpack_from("<Q",raw,0x28)[0]
    entsize,count,stridx=struct.unpack_from("<HHH",raw,0x3a)
    if entsize>=64 and shoff and shoff+entsize*count<=len(raw):
        headers=[struct.unpack_from("<IIQQQQIIQQ",raw,shoff+i*entsize) for i in range(count)]
        strings=b""
        if stridx<count:
            h=headers[stridx];strings=raw[h[4]:h[4]+h[5]]
        for h in headers:
            name=strings[h[0]:].split(b"\0",1)[0].decode("ascii",errors="replace") if strings else ""
            sections.append(dict(name=name,type=h[1],va=h[3],offset=h[4],size=h[5],entsize=h[9]))
    for x in literals:
        va=int(x["va"],16)
        x["section_candidates"]=[s["name"] for s in sections if s["va"]<=va<s["va"]+s["size"]]
    relocations=[]
    for s in sections:
        if s["type"]!=4 or s["entsize"]<24 or s["offset"]+s["size"]>len(raw):continue
        for p in range(s["offset"],s["offset"]+s["size"]-23,s["entsize"]):
            dst,info,addend=struct.unpack_from("<QQq",raw,p)
            if LO<=addend<HI or LO<=dst<HI or any(dst==int(x["va"],16) for x in literals):
                relocations.append(dict(section=s["name"],entry_va=hex(s["va"]+p-s["offset"]),destination=hex(dst),type=info&0xffffffff,symbol=info>>32,addend=hex(addend)))
    init_arrays=[s for s in sections if s["type"]==14 or s["name"] in (".init_array",".preinit_array")]
    from collections import Counter
    return dict(elf_sha256=ELF_SHA,range=[hex(LO),hex(HI)],page_seeds=pages,events=list(events.values()),literal_pointer_candidates=literals,sections=sections,relocation_candidates=relocations,init_arrays=init_arrays,counts=dict(Counter(x["kind"] for x in events.values())),scope="Straight-line bounded static candidates only; not proof of absence of writers, startup constructors, relocations or runtime aliases.")

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    report=audit((a.root/NCA/"0/main.elf").read_bytes());a.out.mkdir(parents=True,exist_ok=True)
    (a.out/"default_writer_candidates.json").write_text(json.dumps(report,indent=2)+"\n")
    print(json.dumps(dict(page_seeds=len(report["page_seeds"]),counts=report["counts"],literal_pointer_candidates=len(report["literal_pointer_candidates"]),relocations=len(report["relocation_candidates"]),init_arrays=len(report["init_arrays"]))))
if __name__=="__main__":main()
