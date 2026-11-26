#!/usr/bin/env python3
"""SHA-bound initializer instructions and native UI string reference candidates."""
import argparse,hashlib,json,re,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
from home41_elf_resource_xrefs import elf_segments,find_pc_references,signed
from home41_image_reverse_index import ELF_SHA,NCA
from home41_elf_disasm_windows import window

ENTRY=0x522e38
LO,HI=0xb15db2,0xb15ff8
def run(raw,out):
    if hashlib.sha256(raw).hexdigest()!=ELF_SHA:raise ValueError("ELF SHA")
    segs=elf_segments(raw)
    def read(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+va-s["vaddr"];return raw[p:p+n]
        raise ValueError(f"unmapped VA {va:#x}")
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.detail=True
    ins=[]
    for i in md.disasm(read(ENTRY,0x400),ENTRY):
        ins.append(i)
        if i.mnemonic=="ret":break
    if not ins or ins[-1].mnemonic!="ret":raise ValueError("no initializer RET")
    regs={}; stores=[];loads=[];calls=[]
    def reg(r):
        s=md.reg_name(r)
        return ("x"+s[1:]) if s and s[0] in "wx" and s[1:].isdigit() else s
    def get(r):
        n=reg(r)
        return 0 if n in ("xzr","wzr") else regs.get(n)
    def width(r):
        n=md.reg_name(r)
        if n.startswith("q"):return 16
        if n.startswith(("x","d")):return 8
        if n.startswith(("w","s")):return 4
        if n.startswith("h"):return 2
        if n.startswith("b"):return 1
        return 0
    def mem(o):
        v=get(o.mem.base)
        return v+o.mem.disp if v is not None and not o.mem.index else None
    for i in ins:
        o=i.operands;m=i.mnemonic;upd={};desc=m+" "+i.op_str
        if m in ("adr","adrp") and len(o)==2:upd[reg(o[0].reg)]=o[1].imm
        elif m in ("add","sub") and len(o)==3 and o[1].type==ARM64_OP_REG and o[2].type==ARM64_OP_IMM:
            a=get(o[1].reg)
            if a is not None:upd[reg(o[0].reg)]=a+(1 if m=="add" else -1)*(o[2].imm<<o[2].shift.value)
        elif m in ("mov","movz") and len(o)==2:
            a=get(o[1].reg) if o[1].type==ARM64_OP_REG else o[1].imm if o[1].type==ARM64_OP_IMM else None
            if a is not None:upd[reg(o[0].reg)]=a
        elif m in ("movi","eor") and (m=="movi" and len(o)>=2 and o[1].type==ARM64_OP_IMM and o[1].imm==0 or m=="eor" and len(o)==3 and o[1].reg==o[2].reg):
            upd[reg(o[0].reg)]=0
        elif m in ("ldr","ldur") and len(o)==2 and o[1].type==ARM64_OP_MEM:
            a=mem(o[1])
            if a is not None and width(o[0].reg)==8:
                try:
                    v=struct.unpack("<Q",read(a,8))[0]
                    if 0x7a6000<=a<0x7a7000:
                        upd[reg(o[0].reg)]=v
                        loads.append(dict(pc=hex(i.address),slot=hex(a),file_value=hex(v),instruction=desc))
                except ValueError:pass
        if m.startswith(("str","stur","stp")):
            mo=next((x for x in o if x.type==ARM64_OP_MEM),None)
            if mo is not None:
                a=mem(mo)
                rr=[x.reg for x in o if x.type==ARM64_OP_REG]
                if a is not None:
                    for r in rr:
                        n=1 if m.endswith("b") else 2 if m.endswith("h") else width(r)
                        v=get(r)
                        if a<HI and a+n>LO:stores.append(dict(pc=hex(i.address),address=hex(a),width=n,value=hex(v) if v is not None else None,instruction=desc))
                        a+=n
        if m in ("bl","blr"):
            calls.append(dict(pc=hex(i.address),instruction=desc))
            for r in list(regs):
                if re.fullmatch(r"x(?:[0-9]|1[0-8])",r):regs.pop(r,None)
        try:
            _,writes=i.regs_access()
            for r in writes:regs.pop(reg(r),None)
        except Exception:pass
        regs.update(upd)
    # Collect exact NUL-terminated printable resource-like strings in file-backed non-code segments.
    pat=re.compile(rb"(?:ribbon|medal|achievement|encounter.?mark|marking|proof|wappen|award|trophy|badge)",re.I)
    strings=[]
    for s in segs:
        if s["executable"]:continue
        data=raw[s["file_offset"]:s["file_offset"]+s["size"]]
        for m in re.finditer(rb"[ -~]{4,240}\x00",data):
            v=m.group()[:-1]
            if pat.search(v):
                strings.append(dict(virtual_address=s["vaddr"]+m.start(),text=v.decode("ascii")))
    refs=find_pc_references(raw,segs,strings)
    by={r["virtual_address"]:r["text"] for r in strings}
    for r in refs:r["text"]=by[r["target_va"]]
    direct=[]
    for s in segs:
        if not s["executable"]:continue
        for off in range(0,s["size"]-3,4):
            op=struct.unpack_from("<I",raw,s["file_offset"]+off)[0]
            if op&0xfc000000 not in (0x94000000,0x14000000):continue
            pc=s["vaddr"]+off
            if pc+(signed(op&0x3ffffff,26)<<2)==ENTRY:direct.append(dict(pc=hex(pc),opcode=f"{op:08x}"))
    report=dict(elf_sha256=ELF_SHA,entry=hex(ENTRY),ret=hex(ins[-1].address),instruction_count=len(ins),slot_loads=loads,store_candidates=stores,calls=calls,direct_callers=direct,ui_strings=strings,ui_refs=refs,scope="Straight-line tracked stores only; dynamic values, unknown aliases, and all UI semantics not established.")
    # Exact 18 marking animation names and hash destinations.
    marking=[]
    def cstr(va):
        return read(va,128).split(b"\0",1)[0].decode("ascii")
    def fnv(s):
        h=0xcbf29ce484222645
        for v in s.encode("ascii"):h=((h^v)*0x100000001b3)&0xffffffffffffffff
        return h
    for r in refs:
        if "marking_dis_%02d_%s" not in r["text"]:continue
        pc=r["pc"];args={};suffix_page=None;call=None;destination=None
        for i in md.disasm(read(pc,0x50),pc):
            o=i.operands
            if i.mnemonic=="adrp" and i.op_str.startswith("x4,"):suffix_page=o[1].imm
            if i.mnemonic=="add" and i.op_str.startswith("x4, x4,") and suffix_page is not None:args["suffix_va"]=suffix_page+o[2].imm
            if i.mnemonic=="mov" and i.op_str.startswith("w3,"):args["ordinal"]=o[1].imm if o[1].type==ARM64_OP_IMM else 0 if md.reg_name(o[1].reg)=="wzr" else None
            if i.mnemonic=="bl" and o[0].imm==0x5f66f0:call=i.address;break
        if call is None or args.get("ordinal") is None or "suffix_va" not in args:raise ValueError("marking call args")
        for i in md.disasm(read(call+4,0x60),call+4):
            if i.mnemonic=="str" and i.op_str.startswith("x10, [x19,"):
                destination=i.operands[1].mem.disp;break
        if destination is None:raise ValueError("marking hash destination")
        suffix=cstr(args["suffix_va"]);name=r["text"]%(args["ordinal"],suffix)
        marking.append(dict(ordinal=args["ordinal"],suffix=suffix,suffix_va=hex(args["suffix_va"]),name=name,hash=f"{fnv(name):016x}",format_call=hex(call),owner_offset=hex(destination)))
    if len(marking)!=18 or {(r["ordinal"],r["suffix"]) for r in marking}!={(i,s) for i in range(6) for s in ("default","red","blue")}:raise ValueError("marking domain")
    labels={}
    for i in range(320):
        for fmt in ("mes_ribbon_name_%03d","mes_ribbon_info_%03d"):
            name=fmt%i;h=fnv(name);needle=struct.pack("<Q",h);hits=[]
            for s in segs:
                if s["executable"]:continue
                start=s["file_offset"];end=start+s["size"];p=raw.find(needle,start,end)
                while p>=0:
                    hits.append(hex(s["vaddr"]+p-start));p=raw.find(needle,p+1,end)
            if hits:labels[name]=dict(hash=f"{h:016x}",hits=hits)
    report["marking_animation_keys"]=marking
    report["ribbon_literal_hash_candidates"]=labels
    out.mkdir(parents=True,exist_ok=True)
    (out/"initializer_ui_evidence.json").write_text(json.dumps(report,indent=2)+"\n")
    lines=["# Native initializer and UI candidates","",ELF_SHA,"","## Initializer","~~~asm"]
    lines.extend(f"{i.address:08x} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}" for i in ins)
    lines+=["~~~",""]
    for r in refs:
        lines.extend([f'## {r["text"]} @ {r["pc"]:#x}',"~~~asm"])
        lines.extend(f"{pc:08x} {hx} {mn:8} {args}" for pc,mn,args,hx in window(raw,segs,r["pc"],0x40,0xc0))
        lines+=["~~~",""]
    (out/"initializer_ui_windows.md").write_text("\n".join(lines))
    print(json.dumps(dict(instructions=len(ins),ret=hex(ins[-1].address),slot_loads=len(loads),stores=len(stores),callers=direct,ui_strings=len(strings),ui_refs=len(refs))))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    run((a.root/NCA/"0/main.elf").read_bytes(),a.out)
