# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""Reproduce selector registration -> relocated vtable -> Personal getter mapping."""
import argparse,csv,hashlib,json,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments,signed
from home41_native_learnset_focus import SHA,GROUPS
from home41_native_learnset_dispatch import BASES
from home41_native_selector_guard import OBJECTS,CALLS
# selector, group, dataset, registration, GOT, store, resource loader
MAP=[(0,2,"global",0x4fdc9c,0x7a5d80,0x4fdd80,0x501ad0),
(1,0,"beluga",0x4fde0c,0x7a5d88,0x4fdef0,0x501b70),
(2,5,"orion",0x4fdf7c,0x7a5d90,0x4fe060,0x501c10),
(3,3,"hayabusa",0x4fe25c,0x7a5da0,0x4fe340,0x501d50),
(4,1,"delphis",0x4fe0ec,0x7a5d98,0x4fe1d0,0x501cb0),
(5,6,"titan",0x4fe3cc,0x7a5da8,0x4fe4b0,0x501df0),
(7,4,"ikkaku",0x4fe53c,0x7a5db0,0x4fe620,0x501e90)]
def audit(b,report,out):
    if hashlib.sha256(b).hexdigest()!=SHA or report["elf_sha256"]!=SHA:raise ValueError("source version")
    segs=elf_segments(b);md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.skipdata=True
    def raw(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                o=s["file_offset"]+va-s["vaddr"];return b[o:o+n]
        raise ValueError(hex(va))
    def ptr(va):return struct.unpack("<Q",raw(va,8))[0]
    def dis(lo,hi):
        return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in md.disasm(raw(lo,hi-lo),lo)]
    def expect(pc,op,args):
        i=dis(pc,pc+4)[0]
        if (i["op"],i["args"])!=(op,args):raise ValueError(f"{pc:#x}: {i}")
    got={x["site"]:x for x in report["got_words"]}
    rows=[];windows={}
    for sel,group,g,start,slot,store,loader in MAP:
        base=ptr(slot)+0x10
        assert got[slot]["relr"] and base==BASES[group]
        count,entry,lookup=GROUPS[group]
        assert ptr(base+0xc8)==count and ptr(base+0xd0)==entry
        expect(start+0x28,"mov","w1, #0x60")
        expect(start+0x2c,"mov","w2, #8")
        expect(start+0x4c,"blr","x8")
        expect(start+0x58,"mov","x19, x0")
        expect(start+0x84,"ldr",f"x8, [x8, #{slot&4095:#x}]")
        expect(start+0x90,"add","x9, x8, #0x10")
        expect(start+0xa0,"stp","x9, x20, [x19]")
        expect(store,"str","x19, [x20]" if sel==0 else f"x19, [x20, #{sel*8:#x}]")
        expect(CALLS[g],"bl",f"#{loader:#x}")
        # Independently verify each lookup's indexed base address, not the
        # resource holder itself; the holder and dispatch objects are distinct.
        lookup_base=OBJECTS[g]+0x110
        expect(lookup+0xc,"adrp",f"x11, #{lookup_base&~4095:#x}")
        expect(lookup+0x10,"add",f"x11, x11, #{lookup_base&4095:#x}")
        expect(CALLS[g]+0x4c,"str","x19, [x21, #8]")
        rows.append({"selector":sel,"dataset":g,"group":chr(65+group),"register":hex(start),"got_slot":hex(slot),"vtable":hex(base),"slot_address":hex(0xb15c78+8*sel),"store":hex(store),"count_getter":hex(count),"entry_getter":hex(entry),"lookup":hex(lookup),"resource_holder":hex(OBJECTS[g]),"lookup_index_base":hex(lookup_base),"loader_call":hex(CALLS[g]),"status":"static_verified"})
        windows[g]=dis(start,start+0x170)
    assert {r["selector"] for r in rows}=={0,1,2,3,4,5,7}
    assert report["slot"]["relr"] and ptr(0x7a5d78)==0xb15c78
    assert got[0x7a6308]["relr"] and ptr(0x7a6308)==0xb16258
    expect(0x53c62c,"bl","#0x53d690")
    expect(0x53c65c,"str","x21, [x20, #0x60]")
    expect(0x53c678,"ldr","x8, [x8, #0x30]")
    expect(0x53c6b4,"and","w0, w20, #1")
    expect(0x53d6b4,"mov","w10, #0x110")
    expect(0x53d6c4,"ldrb","w10, [x9, #0x170]")
    expect(0x53d6cc,"ldr","x0, [x9, #0x190]")
    expect(0x53d6d4,"ldr","x9, [x8, #8]")
    # Search for address formation of both dynamic tables. Preserve candidates
    # with instruction windows; no claim about runtime pointee without evidence.
    refs=[]
    for s in segs:
        if not s["executable"]:continue
        off,size,va=s["file_offset"],s["size"],s["vaddr"]
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
            pc=va+i*4
            if w&0x9f000000!=0x90000000:continue
            page=(pc&~4095)+(signed(((w>>29)&3)|(((w>>5)&0x7ffff)<<2),21)<<12)
            if page not in (0xb16000,0x7a6000):continue
            rd=w&31
            for j in range(1,5):
                if i*4+4*j+4>size:break
                x=struct.unpack_from("<I",b,off+i*4+4*j)[0]
                # ADD immediate or LDR unsigned immediate; same base register.
                if (x>>5)&31!=rd:continue
                a=None
                if x&0xffc00000==0x91000000:a=page+((x>>10)&4095)
                if x&0xffc00000==0xf9400000:a=page+8*((x>>10)&4095)
                if a in (0xb16258,0xb16298,0x7a6308):
                    refs.append({"anchor":pc,"pc":pc+4*j,"address":a,"window":dis(pc,max(pc+0x60,pc+4*j+4))})
    out.mkdir(parents=True,exist_ok=True)
    with (out/"personal_dataset_selectors.csv").open("w",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
    result={"status":"PASS_STATIC_SELECTOR_MAPPING","elf_sha256":SHA,"selectors":rows,"registration_windows":windows,"guard7":{"record_table":0xb16258,"query_object_table":0xb16298,"lookup":0x53d690,"record_stride":0x110,"active_flag_offset":0x170,"record_pointer_offset":0x190,"dispatch_slot":0x30,"refs":refs,"windows":{"guard":dis(0x53c5d0,0x53c6c8),"lookup":dis(0x53d690,0x53d6e0)}},"limitations":["Static mapping is version-scoped; allocation error tails retained, not fully semantically named.","Dynamic table references are candidates, not live Waza object proof.","No official game-name or learning-method mapping inferred."]}
    (out/"selector_closure.json").write_text(json.dumps(result,indent=2)+"\n")
    print(json.dumps({"status":result["status"],"mapping":{r["selector"]:r["dataset"] for r in rows},"dynamic_refs":len(refs)}))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--report",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.elf.read_bytes(),json.loads(a.report.read_text()),a.out)
