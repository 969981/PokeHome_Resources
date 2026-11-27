# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""HOME 4.1.0: RELR pointer-table and 0x53db50 branch/table evidence."""
import argparse,csv,hashlib,json,struct
from collections import defaultdict
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM,ARM64_OP_REG,ARM64_OP_MEM
from home41_elf_resource_xrefs import elf_segments,signed
from home41_native_learnset_focus import SHA,GROUPS
from home41_native_learnset_dispatch import BASES
SLOT=0x7a5d78
TABLE=0xb15c78
OBJECTS={"beluga":0xb16300,"delphis":0xb1e480,"global":0xb26790,"hayabusa":0xb2e910,"ikkaku":0xb36bf0,"orion":0xb3eec0,"titan":0xb472d0}
CALLS={"beluga":0x53f150,"delphis":0x540850,"global":0x5421b0,"hayabusa":0x543420,"ikkaku":0x544b60,"orion":0x5465b0,"titan":0x54a510}
def relr_sites(words):
    cursor=None
    for word in words:
        if not word&1:
            if word%8:raise ValueError("unaligned RELR address")
            yield word;cursor=word+8
        else:
            if cursor is None:raise ValueError("bitmap without base")
            for i in range(1,64):
                if word>>i&1:yield cursor+(i-1)*8
            cursor+=63*8
def audit(b,out):
    if hashlib.sha256(b).hexdigest()!=SHA:raise ValueError("ELF baseline mismatch")
    segs=elf_segments(b)
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.detail=True;md.skipdata=True
    def raw(a,n):
        for s in segs:
            if s["vaddr"]<=a and a+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+a-s["vaddr"];return b[p:p+n]
        raise ValueError(f"not file backed: {a:#x}")
    def ptr(a):
        try:return struct.unpack("<Q",raw(a,8))[0]
        except ValueError:return None
    def dis(a,z):
        return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in md.disasm(raw(a,z-a),a)]
    phoff=struct.unpack_from("<Q",b,32)[0];ents,n=struct.unpack_from("<HH",b,54);dyn={};loads=[]
    for i in range(n):
        t,f,o,va,pa,sz,ms,al=struct.unpack_from("<IIQQQQQQ",b,phoff+i*ents)
        if t==1:loads.append((va,sz,ms))
        if t==2:
            for tag,value in struct.iter_unpack("<qQ",b[o:o+sz-sz%16]):
                if not tag:break
                dyn[tag]=value
    assert dyn[37]==8 and dyn[35]%8==0
    sites=set(relr_sites(v for (v,) in struct.iter_unpack("<Q",raw(dyn[36],dyn[35]))))
    def storage(a):
        for va,sz,ms in loads:
            if va<=a and a+8<=va+ms:return "file" if a+8<=va+sz else "zero_fill"
        return "unmapped"
    slots=[{"selector":i,"address":TABLE+8*i,"raw_pointer":ptr(TABLE+8*i),"storage":storage(TABLE+8*i),"relr":TABLE+8*i in sites} for i in range(8)]
    objects=[{"dataset":g,"address":a,"vtable_raw":ptr(a),"storage":storage(a),"relr":a in sites,"load_call":CALLS[g]} for g,a in OBJECTS.items()]
    target_set={SLOT,TABLE,*[x["address"] for x in slots],*OBJECTS.values(),*[a+8 for a in OBJECTS.values()],*BASES}
    target_pages={a&~4095 for a in target_set}
    # Report every exact raw address formation, memory access and pointer value
    # in bounded blocks. Do not equate neighboring function addresses with identity.
    pointers=defaultdict(list)
    for s in segs:
        if s["executable"]:continue
        off,size,base=s["file_offset"],s["size"],s["vaddr"]
        for k,(v,) in enumerate(struct.iter_unpack("<Q",memoryview(b)[off:off+size-size%8])):
            if v in target_set:pointers[v].append(base+8*k)
    indirect={a:v for v,aa in pointers.items() for a in aa}
    wanted=target_set|set(indirect);pages={a&~4095 for a in wanted}
    refs=[];seen=set()
    for s in segs:
        if not s["executable"]:continue
        off,size,base=s["file_offset"],s["size"],s["vaddr"]
        for k,(v,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
            pc=base+4*k
            if v&0x9f000000!=0x90000000:continue
            page=(pc&~4095)+(signed(((v>>29)&3)|(((v>>5)&0x7ffff)<<2),21)<<12)
            if page not in pages:continue
            regs={}
            for i in md.disasm(b[off+4*k:off+min(size,4*k+160)],pc):
                op=i.mnemonic
                if op==".byte" or (i.address!=pc and (op.startswith("b.") or op in ("b","bl","blr","br","ret","cbz","cbnz","tbz","tbnz"))):break
                ops=i.operands;new={}
                def rn(o):return i.reg_name(o.reg)
                def emit(kind,a,source=None):
                    if a not in wanted and source not in target_set:return
                    key=(i.address,kind,a,source)
                    if key in seen:return
                    seen.add(key)
                    refs.append({"pc":i.address,"anchor":pc,"kind":kind,"address":a,"source_address_candidate":source,"indirect_raw_target":indirect.get(a),"op":op,"args":i.op_str,"bytes":i.bytes.hex()})
                if op in ("adrp","adr") and len(ops)==2 and ops[1].type==ARM64_OP_IMM:
                    new[rn(ops[0])]=ops[1].imm
                    if op=="adr":emit("address",ops[1].imm)
                elif op=="add" and len(ops)==3 and ops[1].type==ARM64_OP_REG and ops[2].type==ARM64_OP_IMM and rn(ops[1]) in regs:
                    a=regs[rn(ops[1])]+(ops[2].imm<<ops[2].shift.value);new[rn(ops[0])]=a;emit("address",a)
                elif op=="mov" and len(ops)==2 and ops[1].type==ARM64_OP_REG and rn(ops[1]) in regs:new[rn(ops[0])]=regs[rn(ops[1])]
                elif op.startswith(("ldr","str","ldur","stur","ldp","stp")):
                    for o in ops:
                        if o.type!=ARM64_OP_MEM or o.mem.index:continue
                        r=i.reg_name(o.mem.base)
                        if r not in regs:continue
                        a=regs[r]+o.mem.disp
                        src=regs.get(rn(ops[0])) if op.startswith("st") and ops[0].type==ARM64_OP_REG else None
                        emit("load" if op.startswith("ld") else "store",a,src)
                        if op=="ldr" and a in indirect:new[rn(ops[0])]=indirect[a]
                try:
                    for r in i.regs_access()[1]:
                        name=i.reg_name(r);regs.pop(name,None)
                        if name.startswith("w"):regs.pop("x"+name[1:],None)
                except Exception:break
                regs.update(new)
    # Keep windows for all relevant stores and exact address formations.
    for x in refs:
        if x["kind"]!="load" or x["address"]==SLOT:x["window"]=dis(x["pc"]-24,x["pc"]+60)
    init_array=[]
    if 25 in dyn and 27 in dyn:
        for i,(v,) in enumerate(struct.iter_unpack("<Q",raw(dyn[25],dyn[27]))):
            init_array.append({"site":dyn[25]+8*i,"raw_target":v,"relr":dyn[25]+8*i in sites})
    jt=raw(0x65aede,7)
    jump=[{"selector":i+1,"raw_byte":v,"target":0x53db7c+4*v} for i,v in enumerate(jt)]
    tables=[]
    for name,a,n in [("guard_53dba0",0x65aee8,512),("guard_53dbe0",0x65b6e8,177)]:
        values=list(struct.unpack("<"+"I"*n,raw(a,n*4)))
        tables.append({"name":name,"address":a,"count":n,"values":values,"unique":len(set(values))})
    report={"status":"STATIC_EVIDENCE_ONLY","elf_sha256":SHA,"slot":{"address":SLOT,"raw_pointer":ptr(SLOT),"relr":SLOT in sites},"relr_count":len(sites),"selector_slots":slots,"objects":objects,"refs":refs,"raw_pointer_sites":{hex(k):v for k,v in pointers.items()},"init_array":init_array,"guard_jump_table":jump,"guard_tables":tables,"guard_tail_raw_hex":raw(0x65b9ac,0x700).hex(),"windows":{"guard":dis(0x53db50,0x53dd20),"guard_tailcall":dis(0x53c5d0,0x53c700),**{g:dis(pc-0x140,pc+0x200) for g,pc in CALLS.items()}},"limitations":["RELR proves relocation coverage only, not runtime registration.","Static pointer values may be zero-fill or unresolved. Bounded register facts are not full SSA.","Guard tailcall and pair-table semantics require review; raw bytes retained."]}
    out.mkdir(parents=True,exist_ok=True)
    (out/"selector_guard.json").write_text(json.dumps(report,indent=2)+"\n")
    with (out/"guard_move_tables.csv").open("w",newline="") as f:
        w=csv.writer(f);w.writerow(["table","ordinal","address","move_id_raw"])
        for t in tables:
            for i,v in enumerate(t["values"]):w.writerow([t["name"],i,hex(t["address"]+i*4),v])
    print(json.dumps({"status":report["status"],"slot":report["slot"],"relr_count":len(sites),"slots":slots,"objects":objects,"jump":jump,"table_counts":[[t["name"],t["count"],t["unique"]] for t in tables],"refs":len(refs),"stores":[{k:v for k,v in x.items() if k!="window"} for x in refs if x["kind"]=="store"][:40]}))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.elf.read_bytes(),a.out)
