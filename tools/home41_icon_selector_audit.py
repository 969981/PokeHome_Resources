#!/usr/bin/env python3
"""SHA-bound language/version/generation selector candidates, not business ID mappings."""
import argparse, hashlib, json, re, struct
from collections import defaultdict
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG, ARM64_OP_IMM, ARM64_OP_MEM
from home41_image_reverse_index import NCA, ELF_SHA
from home41_elf_resource_xrefs import elf_segments, file_to_va, signed
from home41_elf_disasm_windows import window

PATTERNS = {
    "language": re.compile(rb"icon_lang_[a-z]{3}_00\^q"),
    "version": re.compile(rb"icon_version_\d{4}\^q"),
    "origin": re.compile(rb"icon_generation_\d{2}(?:_color)?\^t"),
}
NEEDLES = (b"icon_lang_",b"lang_icon",b"icon_version",b"icon_generation",b"icon_generation_color")
def domain(s):
    if PATTERNS["language"].fullmatch(s): return "language"
    if PATTERNS["version"].fullmatch(s): return "version"
    if PATTERNS["origin"].fullmatch(s): return "origin_color" if b"_color" in s else "origin_normal"
    return "other_string"

def audit(raw):
    if hashlib.sha256(raw).hexdigest()!=ELF_SHA: raise ValueError("ELF SHA mismatch")
    segs=elf_segments(raw)
    def read(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+va-s["vaddr"];return raw[p:p+n]
        raise ValueError(f"unmapped VA {va:#x}")
    strings={}
    for m in re.finditer(rb"[\x20-\x7e]{3,512}\x00", raw):
        b=m.group()[:-1]
        if not any(x in b for x in NEEDLES): continue
        va=file_to_va(segs,m.start())
        if va is not None: strings[va]=dict(text=b.decode("ascii"),domain=domain(b),file_offset=m.start())
        # Exact suffixes can also be used by pointers into longer strings.
        for pattern in PATTERNS.values():
            for q in pattern.finditer(b):
                if q.end()!=len(b):continue
                va=file_to_va(segs,m.start()+q.start())
                if va is not None:strings[va]=dict(text=q.group().decode("ascii"),domain=domain(q.group()),file_offset=m.start()+q.start())
    if not strings: raise ValueError("no icon string candidates")
    dyn={}
    phoff=struct.unpack_from("<Q",raw,32)[0];ent,num=struct.unpack_from("<HH",raw,54)
    for i in range(num):
        typ,flags,off,va,pa,size,mem,align=struct.unpack_from("<IIQQQQQQ",raw,phoff+i*ent)
        if typ!=2: continue
        for p in range(off,off+size-15,16):
            tag,val=struct.unpack_from("<qQ",raw,p)
            if tag==0:break
            dyn[tag]=val
    relr=set()
    for addr,size,ent in [(36,35,37),(0x6fffe000,0x6fffe001,0x6fffe003)]:
        if not dyn.get(addr) or not dyn.get(size):continue
        if dyn[size]%8 or dyn.get(ent,8)!=8:raise ValueError("invalid RELR")
        cursor=None
        for (word,) in struct.iter_unpack("<Q",read(dyn[addr],dyn[size])):
            if word&1==0:relr.add(word);cursor=word+8
            else:
                if cursor is None:raise ValueError("RELR bitmap without base")
                relr.update(cursor+8*(bit-1) for bit in range(1,64) if word&(1<<bit))
                cursor+=63*8
    hits=defaultdict(list)
    for va,s in strings.items():
        start=0; needle=struct.pack("<Q",va)
        while True:
            p=raw.find(needle,start)
            if p<0:break
            start=p+1;slot=file_to_va(segs,p)
            if slot is not None and slot%8==0:
                hits[slot].append(dict(kind="RELR" if slot in relr else "raw_u64_candidate",string_va=va,**s))
    if dyn.get(7) and dyn.get(8):
        if dyn.get(9,24)!=24 or dyn[8]%24:raise ValueError("RELA geometry")
        for slot,info,addend in struct.iter_unpack("<QQq",read(dyn[7],dyn[8])):
            if info&0xffffffff==1027 and addend in strings:
                hits[slot].append(dict(kind="R_AARCH64_RELATIVE",string_va=addend,**strings[addend]))
    slots={}
    for slot,rows in hits.items():
        chosen=[r for r in rows if r["kind"]=="R_AARCH64_RELATIVE"] or rows
        if len({r["string_va"] for r in chosen})==1:slots[slot]=chosen[0]
    runs=[]
    for stride in (8,16,24,32):
        for va,r in sorted(slots.items()):
            d=r["domain"]
            if d=="other_string" or slots.get(va-stride,{}).get("domain")==d:continue
            cur=va;items=[]
            while slots.get(cur,{}).get("domain")==d:
                items.append(dict(slot_va=cur,**slots[cur]));cur+=stride
            if len(items)>=3:runs.append(dict(base_va=va,stride=stride,domain=d,entries=items))
    # Track known addresses within a bounded straight-line block, respecting register
    # writes and control-flow boundaries. Indexed loads are recorded as candidates,
    # not interpreted as enum mappings.
    targets=defaultdict(list)
    for va,s in strings.items():targets[va].append(dict(kind="string",**s))
    for va,s in slots.items():targets[va].append(dict(kind="pointer_slot",**{k:v for k,v in s.items() if k!="kind"}))
    for r in runs:targets[r["base_va"]].append(dict(kind="table_base",domain=r["domain"],stride=r["stride"]))
    pages={va&~4095 for va in targets}; md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.detail=True
    def reg(r):
        n=md.reg_name(r)
        return int(n[1:]) if n and n[0] in "wx" and n[1:].isdigit() else None
    events={}
    def emit(pc,kind,va,seed,desc):
        if va in targets:events[(pc,kind,va)]=dict(pc=pc,kind=kind,target_va=va,seed=seed,instruction=desc,targets=targets[va])
    for s in segs:
        if not s["executable"]:continue
        start=s["file_offset"]
        for rel in range(0,s["size"]-3,4):
            op=struct.unpack_from("<I",raw,start+rel)[0];pc=s["vaddr"]+rel
            kind=op&0x9f000000
            if kind not in (0x90000000,0x10000000):continue
            imm=signed(((op>>29)&3)|(((op>>5)&0x7ffff)<<2),21)
            adr=(pc&~4095)+(imm<<12) if kind==0x90000000 else pc+imm
            if adr&~4095 not in pages:continue
            regs={op&31:adr};emit(pc,"direct_address",adr,pc,"ADR/ADRP")
            for i in md.disasm(raw[start+rel+4:min(start+s["size"],start+rel+4+0x90)],pc+4):
                ops=i.operands;mn=i.mnemonic;desc=mn+" "+i.op_str;upd={}
                if mn in ("bl","blr","b","br","ret") or mn.startswith(("b.","cb","tb")):
                    for r,a in regs.items():emit(i.address,"control_flow_argument_candidate",a,pc,desc)
                    break
                for o in ops:
                    if o.type==ARM64_OP_MEM and reg(o.mem.base) in regs:
                        a=regs[reg(o.mem.base)]+o.mem.disp
                        emit(i.address,"indexed_memory_candidate" if o.mem.index else "memory_candidate",a,pc,desc)
                if mn in ("add","sub") and len(ops)==3 and ops[0].type==ops[1].type==ARM64_OP_REG and ops[2].type==ARM64_OP_IMM:
                    dst,src=reg(ops[0].reg),reg(ops[1].reg)
                    if src in regs and dst is not None and md.reg_name(ops[0].reg).startswith("x"):
                        delta=ops[2].imm<<ops[2].shift.value;a=regs[src]+(delta if mn=="add" else -delta);upd[dst]=a;emit(i.address,"computed_address",a,pc,desc)
                elif mn=="mov" and len(ops)==2 and ops[0].type==ops[1].type==ARM64_OP_REG:
                    dst,src=reg(ops[0].reg),reg(ops[1].reg)
                    if src in regs and dst is not None and md.reg_name(ops[0].reg).startswith("x"):upd[dst]=regs[src]
                try:
                    _,writes=i.regs_access()
                    for r in writes:regs.pop(reg(r),None)
                except Exception:break
                regs.update(upd)
                if not regs:break
    return dict(elf_sha256=ELF_SHA,strings=strings,pointer_hits=dict(hits),pointer_runs=runs,events=list(events.values()),scope="static candidates only; no function entry or business ID certified"),segs

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    raw=(a.root/NCA/"0/main.elf").read_bytes();report,segs=audit(raw);a.out.mkdir(parents=True,exist_ok=True)
    (a.out/"selector_candidates.json").write_text(json.dumps(report,indent=2)+"\n")
    lines=["# HOME native icon selector candidates","","ELF SHA256: "+ELF_SHA,"","No business ID mapping is certified by this report."]
    for pc in sorted({r["pc"] for r in report["events"]}):
        lines += ["",f"## {pc:#x}","","~~~asm"]+[f"{v:08x} {h} {m} {o}" for v,m,o,h in window(raw,segs,pc,0x60,0x100)]+["~~~"]
    (a.out/"selector_windows.md").write_text("\n".join(lines)+"\n")
    print(json.dumps({k:len(report[k]) for k in ("strings","pointer_hits","pointer_runs","events")}))
if __name__=="__main__":main()
