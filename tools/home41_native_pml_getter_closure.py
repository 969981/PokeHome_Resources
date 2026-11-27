# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""Verify common scalar getter instruction patterns; trace Waza constructors and getters."""
import argparse,csv,hashlib,json,struct
from pathlib import Path
from collections import defaultdict
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments,signed
from home41_native_learnset_focus import SHA,GROUPS
from home41_native_learnset_dispatch import BASES
from home41_native_selector_closure import MAP
P_FIELDS=(2,3,4,8,9,10,11,12,13,14,15,5,6,7,16,17,18,19,20)
W_MAP=[(1,"beluga",0x53b778,0x53bb98,0x7a6318,0x2e6),(2,"orion",0x53b830,0x53bd04,0x7a6320,0x33a),(4,"delphis",0x53b8e8,0x53be70,0x7a6328,0x33a),(3,"hayabusa",0x53b9a0,0x53bfdc,0x7a6330,0x352),(5,"titan",0x53ba58,0x53c148,0x7a6338,0x397),(7,"ikkaku",0x53bb10,0x53c2b4,0x7a6340,0x398)]
def audit(b,out):
    if hashlib.sha256(b).hexdigest()!=SHA:raise ValueError("ELF baseline")
    segs=elf_segments(b);md=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def raw(a,n):
        for s in segs:
            if s["vaddr"]<=a and a+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+a-s["vaddr"];return b[p:p+n]
        raise ValueError(hex(a))
    def ptr(a):return struct.unpack("<Q",raw(a,8))[0]
    def dis(a,n):return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in md.disasm(raw(a,n),a)]
    def expect(a,op,args):
        x=dis(a,4)[0]
        if (x["op"],x["args"])!=(op,args):raise ValueError(f"{a:#x}: {x}")
    def imm(v):return str(v) if v<10 else hex(v)
    p_rows=[];w_rows=[];windows={};targets={}
    for sel,g,d,reg,got,store,loader in MAP:
        base=BASES[g];lookup=GROUPS[g][2]
        assert ptr(got)+16==base
        for off,f in zip(range(0x30,0xc8,8),P_FIELDS):
            a=ptr(base+off);width=2 if f in (5,6,7,17,18) else 1;opcode="ldrh" if width==2 else "ldrb";v=4+2*f
            expect(a+0x10,"bl",f"#{lookup:#x}")
            expect(a+0x14,"ldrsw","x8, [x0]")
            expect(a+0x18,"sub","x8, x0, x8")
            expect(a+0x1c,"ldrh","w9, [x8]")
            expect(a+0x20,"cmp",f"w9, #{imm(v+1)}")
            default=a+(0x44 if f==2 else 0x3c)
            expect(a+0x24,"b.lo",f"#{default:#x}")
            expect(a+0x28,"ldrh",f"w8, [x8, #{imm(v)}]")
            expect(a+0x2c,"cbz",f"x8, #{default:#x}")
            expect(a+0x30,opcode,"w8, [x0, x8]" if f==2 else "w0, [x0, x8]")
            if f==2:
                expect(a+0x34,"cmp","w8, #0")
                expect(a+0x38,"cset","w0, ne")
            expect(default,"mov","w0, wzr")
            p_rows.append({"selector":sel,"dataset":d,"slot":off,"getter":a,"field_index":f,"width_bytes":width,"missing_default":0,"transform":"nonzero_bool" if f==2 else "unsigned","field_read_pc":a+0x30,"status":"static_verified"})
    for sel,d,call,ctor,got,max_id in W_MAP:
        expect(call,"bl",f"#{ctor:#x}")
        expect(call-0xc,"mov",f"w8, #{max_id:#x}")
        expect(ctor+0x94,"ldr",f"x8, [x8, #{got&4095:#x}]")
        expect(ctor+0xa4,"add","x9, x8, #0x10")
        base=ptr(got)+16
        slots={off:ptr(base+off) for off in range(0x30,0x70,8)}
        for off,a in slots.items():
            # Read a bounded window. First-ret truncation is explicitly NOT
            # used for default-path proof; next physical getter bounds window.
            end=min([p for p in slots.values() if p>a]+[a+0x100])
            ins=dis(a,end-a);windows[f"{d}:{off:#x}"]=ins
            w_rows.append({"selector":sel,"dataset":d,"max_requested_id":max_id,"constructor":ctor,"got":got,"vtable":base,"slot":off,"getter":a,"instruction_count":len(ins)})
            targets[a]=f"{d}:{off:#x}"
        windows[f"ctor:{d}"]=dis(ctor,0x170)
    # Native PP-Up consumer: clamped 0..3, virtual base value and integer 20% increment.
    expect(0x53cc78,"ldr","x8, [x8, #0x68]")
    expect(0x53cc8c,"mul","w8, w19, w8")
    expect(0x53cc98,"add","w20, w0, w8, lsr #19")
    windows["pp_increment"]=dis(0x53cbdc,0x110)
    # Discover public wrappers by prologues preceding observed virtual-call sites;
    # export direct caller windows to validate business meaning downstream.
    wrapper_windows=dis(0x4fe774,0x4ffc50-0x4fe774)+dis(0x53c5d0,0x53cdec-0x53c5d0)
    for i in wrapper_windows:
        if i["op"]=="stp" and i["args"].startswith("x29, x30, [sp, #-"):
            targets[i["pc"]]="wrapper_candidate"
    calls=defaultdict(list)
    for s in segs:
        if not s["executable"]:continue
        off,size,base=s["file_offset"],s["size"],s["vaddr"]
        for k,(word,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
            if word&0xfc000000 not in (0x94000000,0x14000000):continue
            pc=base+k*4;t=pc+4*signed(word&0x3ffffff,26)
            if t in targets:calls[hex(t)].append({"pc":pc,"window":dis(pc-24,64)})
    out.mkdir(parents=True,exist_ok=True)
    for name,rows in (("verified_personal_scalar_getters",p_rows),("waza_getter_slots",w_rows)):
        with (out/(name+".csv")).open("w",newline="") as f:
            w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
    report={"status":"PASS_PERSONAL_SCALAR_PATTERNS","elf_sha256":SHA,"personal":p_rows,"waza":w_rows,"windows":windows,"callers":dict(calls),"limitations":["Physical fields and zero defaults verified, gameplay labels require consumers or anchors.","Waza getter windows need field/default interpretation; no guessed semantic import."]}
    (out/"getter_closure.json").write_text(json.dumps(report,indent=2)+"\n")
    print(json.dumps({"status":report["status"],"personal":len(p_rows),"waza_slots":len(w_rows),"wrapper_caller_refs":sum(map(len,calls.values())),"waza_vtables":{r["dataset"]:hex(r["vtable"]) for r in w_rows}}))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.elf.read_bytes(),a.out)
