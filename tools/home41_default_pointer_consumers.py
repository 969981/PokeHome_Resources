#!/usr/bin/env python3
"""Classify .data pointer slots, RELR and bounded direct instruction consumers.
ELF file values only; no claim of runtime initialization or full alias coverage.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
from home41_elf_resource_xrefs import elf_segments,signed
from home41_image_reverse_index import ELF_SHA,NCA

SLOTS={0x7a6258:0xb15db2,0x7a6270:0xb15eb7,0x7a6280:0xb15e78,0x7a6288:0xb15eff,0x7a6290:0xb15f3f,0x7a6298:0xb15f6e,0x7a62a0:0xb15fb8,0x7a62e0:0xb15e76}
LO,HI=0xb15db2,0xb15ff8

def audit(raw):
    if hashlib.sha256(raw).hexdigest()!=ELF_SHA:raise ValueError("ELF SHA")
    segs=elf_segments(raw)
    def read(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+va-s["vaddr"];return raw[p:p+n]
        raise ValueError(f"unmapped file-backed VA {va:#x}")
    def q(va):return struct.unpack("<Q",read(va,8))[0]
    for va,target in SLOTS.items():
        if q(va)!=target:raise ValueError("slot value mismatch")
    # Read dynamic entries from PT_DYNAMIC, not only named sections.
    phoff=struct.unpack_from("<Q",raw,0x20)[0];phent,phnum=struct.unpack_from("<HH",raw,0x36)
    dyn={}
    for i in range(phnum):
        typ,flags,off,va,pa,fs,ms,align=struct.unpack_from("<IIQQQQQQ",raw,phoff+i*phent)
        if typ!=2:continue
        for p in range(off,off+fs-15,16):
            tag,val=struct.unpack_from("<qQ",raw,p)
            if tag==0:break
            dyn.setdefault(tag,[]).append(val)
    def val(tag):return dyn.get(tag,[0])[0]
    relr=set();relr_tables=[]
    # Standard ELF DT_RELR/RELRSZ/RELRENT; Android packed RELR legacy aliases.
    for addr_tag,size_tag,ent_tag in [(36,35,37),(0x6fffe000,0x6fffe001,0x6fffe003)]:
        addr,size,ent=val(addr_tag),val(size_tag),val(ent_tag)
        if not addr or not size:continue
        if size%8 or ent not in (0,8) or size>len(raw):raise ValueError("invalid RELR table")
        cursor=0;decoded=set()
        for (word,) in struct.iter_unpack("<Q",read(addr,size)):
            if word&1==0:decoded.add(word);cursor=word+8
            else:
                for bit in range(1,64):
                    if word&(1<<bit):decoded.add(cursor+(bit-1)*8)
                cursor+=63*8
        relr.update(decoded);relr_tables.append(dict(address=hex(addr),size=size,entries=len(decoded),tag=hex(addr_tag)))
    relocs=[]
    for addr,size,ent,kind in [(val(7),val(8),val(9) or 24,"RELA"),(val(17),val(18),val(19) or 16,"REL")]:
        if not addr or not size:continue
        if ent!=(24 if kind=="RELA" else 16) or size%ent:raise ValueError("invalid dynamic relocation size")
        b=read(addr,size)
        for p in range(0,size,ent):
            dst,info=struct.unpack_from("<QQ",b,p)
            addend=struct.unpack_from("<q",b,p+16)[0] if kind=="RELA" else None
            if dst in SLOTS or LO<=dst<HI or addend is not None and LO<=addend<HI:
                relocs.append(dict(kind=kind,destination=hex(dst),type=info&0xffffffff,addend=hex(addend) if addend is not None else None))
    init=[]
    if val(25) and val(27):
        for i in range(val(27)//8):
            a=val(25)+i*8;v=q(a)
            init.append(dict(slot=hex(a),file_value=hex(v),relr=a in relr,executable=any(s["executable"] and s["vaddr"]<=v<s["vaddr"]+s["size"] for s in segs)))
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.detail=True
    def reg(r):
        n=md.reg_name(r)
        return int(n[1:]) if n and n[0] in "wx" and n[1:].isdigit() else None
    events={};seeds=[]
    def emit(kind,pc,slot,insn,seed):
        events[(kind,pc,slot)]=dict(kind=kind,pc=hex(pc),slot=hex(slot),instruction=insn,seed=hex(seed))
    for s in segs:
        if not s["executable"]:continue
        st=s["file_offset"]
        for rel in range(0,s["size"]-3,4):
            op=struct.unpack_from("<I",raw,st+rel)[0];pc=s["vaddr"]+rel
            if op&0x9f000000 not in (0x90000000,0x10000000):continue
            imm=signed(((op>>29)&3)|(((op>>5)&0x7ffff)<<2),21)
            adr=(pc&~4095)+(imm<<12) if op&0x9f000000==0x90000000 else pc+imm
            if adr!=0x7a6000 and adr not in SLOTS:continue
            seeds.append(hex(pc));regs={op&31:adr}
            for i in md.disasm(raw[st+rel+4:min(st+s["size"],st+rel+4+0x180)],pc+4):
                ops=i.operands;mn=i.mnemonic;desc=mn+" "+i.op_str;upd={}
                for o in ops:
                    if o.type==ARM64_OP_MEM and reg(o.mem.base) in regs and not o.mem.index:
                        a=regs[reg(o.mem.base)]+o.mem.disp
                        for slot in SLOTS:
                            # pair accesses may cover slot+8; record approximate width separately
                            if slot==a or mn.startswith(("ldp","stp")) and slot==a+8:
                                emit("slot_load" if mn.startswith("ld") else "slot_store_candidate" if mn.startswith("st") else "slot_memory",i.address,slot,desc,pc)
                if mn in ("add","sub") and len(ops)==3 and ops[0].type==ops[1].type==ARM64_OP_REG and ops[2].type==ARM64_OP_IMM:
                    dst,src=reg(ops[0].reg),reg(ops[1].reg)
                    if src in regs and dst is not None and md.reg_name(ops[0].reg).startswith("x"):
                        delta=ops[2].imm<<ops[2].shift.value;a=regs[src]+(delta if mn=="add" else -delta);upd[dst]=a
                        if a in SLOTS:emit("slot_address",i.address,a,desc,pc)
                elif mn=="mov" and len(ops)==2 and ops[0].type==ops[1].type==ARM64_OP_REG:
                    dst,src=reg(ops[0].reg),reg(ops[1].reg)
                    if src in regs and dst is not None and md.reg_name(ops[0].reg).startswith("x"):upd[dst]=regs[src]
                if mn in ("bl","blr","b","br","ret") or mn.startswith(("b.","cb","tb")):
                    for r,a in regs.items():
                        if a in SLOTS:emit("slot_control_flow_candidate",i.address,a,desc,pc)
                    break
                try:
                    _,writes=i.regs_access()
                    for r in writes:regs.pop(reg(r),None)
                except Exception:break
                regs.update(upd)
                if not regs:break
    from collections import Counter
    return dict(elf_sha256=ELF_SHA,dynamic_tags={hex(k):[hex(x) for x in v] for k,v in dyn.items()},relr_tables=relr_tables,slot_relr=[hex(x) for x in SLOTS if x in relr],default_region_relr=[hex(x) for x in sorted(relr) if LO<=x<HI],dynamic_relocation_candidates=relocs,init_array=init,slot_values={hex(k):hex(v) for k,v in SLOTS.items()},page_seeds=seeds,events=list(events.values()),counts=dict(Counter(e["kind"] for e in events.values())),scope="Bounded straight-line direct slots only; no CFG, GOT alias, stack alias or constructor execution. Packed relocation tags not decoded unless RELR.")
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    r=audit((a.root/NCA/"0/main.elf").read_bytes());a.out.mkdir(parents=True,exist_ok=True)
    (a.out/"default_pointer_consumers.json").write_text(json.dumps(r,indent=2)+"\n")
    print(json.dumps({k:r[k] for k in ("relr_tables","slot_relr","default_region_relr","dynamic_relocation_candidates","counts")}|{"page_seeds":len(r["page_seeds"]),"init_slots":len(r["init_array"])}))
if __name__=="__main__":main()
