#!/usr/bin/env python3
"""Batch10: immutable HOME 4.1.0 jump-table and virtual-call provenance audit.

Evidence is STATIC ONLY. No server ACK, retries, remote commit, or vptr
constructor is inferred without a proven instruction/data-flow link.
"""
import argparse
import collections
import hashlib
import json
import struct
from pathlib import Path

from home41_batch07_request_adrp_audit import EXPECTED_SHA, IMAGE_BASE, segments, sign_extend
from home41_batch09_box_save_cfg import BOX, GATE, decode, read_scope

VTABLE_ENTRY = {
    "cancel": 0x87DDD0,
    "start": 0x87DE40,
    "apogee": 0x87F380,
    "box_save": 0x87F4D0,
    "mile": 0x87F6A8,
}
BOX_ENTRY_VA = 0x34C470
GATE_ENTRY_VA = 0x325D10


def va(rva):
    return "0x%08x" % (rva + IMAGE_BASE)


def raw_at(data, segs, rva, length):
    for s in segs:
        if s["va"] <= rva and rva+length <= s["va"] + s["filesz"]:
            p=s["off"] + rva - s["va"]
            return data[p:p+length]
    raise ValueError("RVA not backed by ELF file: %x + %x" % (rva,length))


def word_at(raw, segs, rva):
    return struct.unpack("<I",raw_at(raw,segs,rva,4))[0]


def qword_at(raw, segs, rva):
    return struct.unpack("<Q",raw_at(raw,segs,rva,8))[0]


def adrp_page(w, pc):
    if (w & 0x9f000000) != 0x90000000:
        raise ValueError("expected ADRP")
    imm = (((w >> 5)&0x7ffff)<<2) | ((w>>29)&3)
    return (pc & ~0xfff) + (sign_extend(imm,21)<<12)


def adr_target(w,pc):
    if (w & 0x9f000000) != 0x10000000:
        raise ValueError("expected ADR")
    imm = (((w >> 5)&0x7ffff)<<2) | ((w>>29)&3)
    return pc+sign_extend(imm,21)


def add_immediate(w, rn=None):
    if (w & 0xff000000) != 0x91000000:
        raise ValueError("expected ADD Xd,Xn,#imm")
    if rn is not None and (w>>5)&31 != rn:
        raise ValueError("wrong ADD source register")
    imm = (w>>10)&0xfff
    if (w>>22)&1: imm <<= 12
    return imm


def exact_six_way_gate(raw,segs):
    """Decode exact assembly pattern at native 0x325D10, do not generalize."""
    start=GATE_ENTRY_VA - IMAGE_BASE
    ins={pc:word_at(raw,segs,pc) for pc in range(start,start+0x3c,4)}
    # Encode-backed pattern checks prevent table values from being read at
    # arbitrary guessed addresses if a later ELF changes.
    if (ins[start] & 0x9f000000)!=0x90000000 or (ins[start]&31)!=8:
        raise ValueError("gate global ADRP x8 differs")
    if (ins[start+4]&0xffc003ff)!=0xb9400108:
        raise ValueError("gate global LDR W8,[X8,#offset] differs")
    if ((ins[start+4]>>10)&0xfff)*4!=0x50:
        raise ValueError("gate global word offset differs")
    if (ins[start+8]&0xffc003ff)!=0x51000108:
        raise ValueError("gate SUB W8,W8,#1 differs")
    if ((ins[start+8]>>10)&0xfff)!=1:
        raise ValueError("gate SUB immediate differs")
    cmp=ins[start+0xc]
    if (cmp & 0xffc003ff)!=0x7100011f or ((cmp>>10)&0xfff)!=5:
        raise ValueError("gate bounds cmp w8,#5 differs")
    if decode(ins[start+0x10],start+0x10)[0]!="B.cond":
        raise ValueError("gate default branch missing")
    # ADRP X9; ADD X9,X9,#off; ADR X10 near table base.
    adrp_pc=start+0x14
    page=adrp_page(ins[adrp_pc],adrp_pc)
    if (ins[adrp_pc]&31)!=9:
        raise ValueError("expected table page in x9")
    off=add_immediate(ins[start+0x18],9)
    if (ins[start+0x18]&31)!=9:
        raise ValueError("expected table address in x9")
    table_rva=page+off
    base_rva=adr_target(ins[start+0x1c],start+0x1c)
    if (ins[start+0x1c]&31)!=10:
        raise ValueError("expected branch base in x10")
    # Verify the indexed LDRB and the BR x10. Register-based dispatch is
    # manually grounded by the original Ghidra assembly, not virtual execution.
    if (ins[start+0x20]&0xffe00c00)!=0x38600800:
        raise ValueError("expected LDRB register indexing")
    if (ins[start+0x28]&0xfffffc1f)!=0xd61f0000 or ((ins[start+0x28]>>5)&31)!=10:
        raise ValueError("expected BR X10")
    table=raw_at(raw,segs,table_rva,6)
    default=decode(ins[start+0x10],start+0x10)[1][0]
    cases=[]
    for i,delta in enumerate(table):
        target=base_rva+delta*4
        typ,dests,_,_=decode(word_at(raw,segs,target),target)
        cases.append({"state_global_value":i+1,"index_after_minus_one":i,
            "table_byte":delta,"branch_case_va":va(target),
            "first_word":"%08x"%word_at(raw,segs,target),
            "first_flow_kind":typ,
            "first_direct_target_va":va(dests[0]) if dests and typ!="BL" else None})
    return {
        "global_state_word_address_va":va(adrp_page(ins[start],start)+0x50),
        "raw_table_address_va":va(table_rva),
        "raw_table_bytes_hex":table.hex(),
        "dispatch_base_va":va(base_rva),
        "out_of_range_default_va":va(default),
        "cases":cases,
        "confidence":"EXACT_TABLE_BYTES_AND_COMPUTED_TARGETS",
        "limitation":"Six-way global network state gate; linkage to HTTP ACK or Box save is not established."
    }


def load_writers(words, pc, target_reg, max_back=24):
    """Nearest local writing instructions; an LDR producer is only an observed
    register data source, not resolved vtable/target identity."""
    observations=[]
    for prev in range(pc-4,max(pc-4*max_back-4,min(words)-4),-4):
        if prev not in words:break
        w=words[prev]
        typ,_,_,_=decode(w,prev)
        if typ in ("B","RET","BR","B.cond","CBZ","CBNZ","TBZ","TBNZ"):
            break
        if (w & 0xffc00000)==0xf9400000 and w&31==target_reg:
            observations.append({"site":va(prev),"kind":"LDR_X_UNSIGNED_IMMEDIATE",
                "dest_register":"x%d"%target_reg,
                "base_register":"x%d"%((w>>5)&31),
                "byte_offset":((w>>10)&0xfff)*8,
                "same_register_base":((w>>5)&31)==target_reg})
            break
        if (w&0xffc00000)==0xf9400000:
            observations.append({"site":va(prev),"kind":"NEARBY_LDR_X",
                "dest_register":"x%d"%(w&31),"base_register":"x%d"%((w>>5)&31),
                "byte_offset":((w>>10)&0xfff)*8})
        if typ in ("BL","BLR"):
            # Calls can overwrite caller-saved x0-x18; no provenance claim
            # may cross the ABI call boundary without interprocedural proof.
            if target_reg<=18:
                observations.append({"site":va(prev),"kind":"CALL_CLOBBER_BOUNDARY"})
                break
    return observations[:8]


def indirect_sites(words):
    out=[]
    for pc,w in sorted(words.items()):
        typ,_,_,_=decode(w,pc)
        if typ not in ("BLR","BR"):continue
        reg=(w>>5)&31
        ctx=[]
        for q in range(pc-28,pc+8,4):
            if q not in words:continue
            t,targ,_,_=decode(words[q],q)
            ctx.append({"va":va(q),"word":"%08x"%words[q],"kind":t,
                        "direct_target_va":va(targ[0]) if targ else None})
        out.append({"site_va":va(pc),"kind":typ,"target_register":"x%d"%reg,
            "local_register_provenance":load_writers(words,pc,reg),
            "native_instruction_context":ctx,
            "target_resolution":"UNRESOLVED_INDIRECT_CALL_OR_BRANCH"})
    return out


def tables(raw,segs):
    out={}
    for name,slotva in VTABLE_ENTRY.items():
        slot=slotva-IMAGE_BASE
        entries=[]
        for delta in range(-0x30,0x69,8):
            addr=slot+delta
            val=qword_at(raw,segs,addr)
            executable=any((s["flags"]&1) and s["va"]<=val<s["va"]+s["filesz"] for s in segs)
            entries.append({"slot_va":va(addr),"offset_from_state_pointer":delta,
                "raw_qword":"0x%016x"%val,
                "code_pointer_va":va(val) if executable else None,
                "state_pointer_here":delta==0})
        out[name]={"pointer_slot_va":"0x%08x"%slotva,
                   "state_function_va":entries[6]["code_pointer_va"],"neighbors":entries,
                   "classification":"VTABLE_SHAPED_GROUP_NOT_CONSTRUCTOR_PROOF"}
    return out


def exact_box_state_switch(raw,segs,box):
    """Decode 11-case object state table from original .rodata halfwords.

    Unlike the earlier generic CFG, these are the actual BR targets for
    x0+0x14 = 0..10, so case-to-marker reachability can be classified
    separately, without assuming an HTTP success outcome.
    """
    from home41_batch09_box_save_cfg import graph,shortest_path,ANCHORS
    entry=BOX[0]
    if word_at(raw,segs,entry)!=0xb9401408:
        raise ValueError("expected ldr w8,[x0,#0x14]")
    if word_at(raw,segs,entry+4)!=0x7100291f:
        raise ValueError("expected cmp w8,#0xa")
    if decode(word_at(raw,segs,entry+8),entry+8)[0]!="B.cond":
        raise ValueError("expected upper-bound branch")
    table_pc=0x34c4c0-IMAGE_BASE
    page=adrp_page(word_at(raw,segs,table_pc),table_pc)
    add=word_at(raw,segs,table_pc+4)
    if (word_at(raw,segs,table_pc)&31)!=9 or (add&31)!=9:
        raise ValueError("unexpected register holding branch offsets")
    addr=page+add_immediate(add,9)
    if addr+22>max(s["va"]+s["filesz"] for s in segs):
        raise ValueError("jump table outside file-backed region")
    base=adr_target(word_at(raw,segs,0x34c4c8-IMAGE_BASE),0x34c4c8-IMAGE_BASE)
    if base!=0x34c4e4-IMAGE_BASE:
        raise ValueError("computed BR base mismatch")
    if word_at(raw,segs,0x34c4cc-IMAGE_BASE)!=0x7868792c or \
       word_at(raw,segs,0x34c4d0-IMAGE_BASE)!=0x8b0c096b or \
       word_at(raw,segs,0x34c4e0-IMAGE_BASE)!=0xd61f0160:
        raise ValueError("LDRH/add-shifted/BR pattern mismatch")
    b=raw_at(raw,segs,addr,22)
    halfwords=struct.unpack("<11H",b)
    succ,_,_,_=graph(box)
    markers=("precommit_url","commit_url","state_commit_wait",
             "secondary_clear","dirty_count_read","dirty_list_read",
             "dirty_encoding","dirty_copy","dirty_clear","save_operation_state")
    cases=[]
    for state,delta in enumerate(halfwords):
        target=base+delta*4
        start_valid=target in box
        edges={}
        for name in markers:
            a=ANCHORS[name]-IMAGE_BASE
            path=shortest_path(succ,target,a) if start_valid else None
            edges[name]={"static_direct_path":path is not None,
                         "shortest_path_edges":len(path)-1 if path else None}
        cases.append({"state":state,"halfword_offset":delta,
                      "entry_va":va(target),"entry_word":"%08x"%word_at(raw,segs,target),
                      "in_verified_box_fde":start_valid,
                      "static_direct_paths_to_markers":edges})
    return {"status":"EXACT_11_CASE_HALFWORD_TABLE",
            "object_state_field_offset":0x14,
            "allowed_values":[0,10],
            "other_state_path":va(decode(word_at(raw,segs,entry+8),entry+8)[1][0]),
            "jump_halfword_table_va":va(addr),"raw_table_bytes_hex":b.hex(),
            "branch_base_va":va(base),"cases":cases,
            "caveat":"Static path permits either branch outcome and ignores indirect/external callback effects. No ACK proven."}


def audit(raw):
    segs=segments(raw)
    box=read_scope(raw,segs,BOX)
    gate=read_scope(raw,segs,GATE)
    box_indirect=indirect_sites(box)
    gate_indirect=indirect_sites(gate)
    direct_to_gate=[]
    direct_to_box=[]
    for pc,word in box.items():
        kind,targs,_,_=decode(word,pc)
        if kind!="BL":continue
        if targs[0]==GATE_ENTRY_VA-IMAGE_BASE:direct_to_gate.append(va(pc))
        if targs[0]==BOX_ENTRY_VA-IMAGE_BASE:direct_to_box.append(va(pc))
    return {
        "status":"STATIC_INDIRECT_DISPATCH_ONLY_NOT_HTTP_ACK",
        "elf_sha256":EXPECTED_SHA,
        "gate":exact_six_way_gate(raw,segs),
        "box_state_switch":exact_box_state_switch(raw,segs,box),
        "box_fde_va":hex(BOX_ENTRY_VA),
        "box_indirect_counts":dict(collections.Counter(x["kind"] for x in box_indirect)),
        "box_indirect_sites":box_indirect,
        "box_dispatch_entry_window":[{"va":va(pc),"word":"%08x"%box[pc],
              "kind":decode(box[pc],pc)[0]} for pc in range(BOX[0],BOX[0]+0x90,4)],
        "gate_indirect_sites":gate_indirect,
        "method_pointer_groups":tables(raw,segs),
        "box_fde_direct_calls_to_gate":direct_to_gate,
        "box_fde_direct_calls_to_own_entry":direct_to_box,
        "unresolved":[
            "Virtual call register provenance does not identify the concrete dynamic object.",
            "GATE six-state global belongs to program network state; its business semantics remain unnamed.",
            "No HTTP response status, remote ACK, Dirty restoration or rollback state verified.",
            "Offsets/targets are original ELF bytes plus Ghidra 0x100000 image base."
        ]
    }


def selftest():
    assert adr_target(0x10000020,0x1000)==0x1004
    assert add_immediate(0x91001529,9)==5
    assert adrp_page(0x90000009,0x1234)==0x1000
    assert decode(0xd63f0100,0x1000)[0]=="BLR"
    assert decode(0xd61f0140,0x1000)[0]=="BR"
    assert (0xf9401508&0xffc00000)==0xf9400000
    assert len(list(range(-0x30,0x69,8)))==20
    print("Batch10 unit test: synthetic AArch64 instruction constraints passed")


def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--self-test",action="store_true")
    ap.add_argument("--elf",type=Path)
    ap.add_argument("--out",type=Path)
    opts=ap.parse_args()
    if opts.self_test:
        selftest()
        return
    if not opts.elf or not opts.out:ap.error("--elf and --out required")
    raw=opts.elf.read_bytes()
    sha=hashlib.sha256(raw).hexdigest()
    if sha!=EXPECTED_SHA:raise SystemExit("Refusing non-baseline ELF: "+sha)
    report=audit(raw)
    opts.out.parent.mkdir(parents=True,exist_ok=True)
    # Small immutable byte slices for local disassembly, not modified ELF files.
    segs=segments(raw)
    opts.out.with_name("box_state_original_fde.bin").write_bytes(raw_at(raw,segs,BOX[0],BOX[1]))
    opts.out.with_name("gate_original_fde.bin").write_bytes(raw_at(raw,segs,GATE[0],GATE[1]))
    opts.out.write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({
        "status":report["status"],"elf_sha256":sha,"gate":report["gate"],
        "box_state_switch":report["box_state_switch"],
        "box_indirect_counts":report["box_indirect_counts"],
        "box_indirect_sites":[{"site":x["site_va"],"type":x["kind"],
                               "target_register":x["target_register"],
                               "local_provenance":x["local_register_provenance"]}
                              for x in report["box_indirect_sites"]],
        "box_fde_direct_calls_to_gate":report["box_fde_direct_calls_to_gate"]
    },indent=2,ensure_ascii=False))

if __name__=="__main__":
    main()
