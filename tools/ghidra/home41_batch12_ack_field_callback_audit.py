#!/usr/bin/env python3
"""HOME41 Batch12: response discriminator strings and two-slot callback semantics.

Original native ELF is SHA-pinned and read-only. Evidence is static: no claim
about actual cloud persistence or observed runtime branch.
"""
import argparse
import hashlib
import json
from pathlib import Path

from home41_batch07_request_adrp_audit import EXPECTED_SHA, IMAGE_BASE, segments
from home41_batch09_box_save_cfg import BOX, decode, read_scope, graph, shortest_path
from home41_batch10_dispatch_audit import raw_at, va

# Every address below is Ghidra VA; the ELF reader accepts RVA.
RESPONSE_LITERAL_VAS = [
    0x710FB3, # first integer read becomes parser return iVar1
    0x711C24, # structured payload
    0x716AE6, 0x711C28, 0x70AF2A, 0x71B8A3, 0x71B8AC,
    0x70D18A, 0x70C59D, 0x711C24,
]
DIRECT_BL = {
    0x34CB4C:0x64BA4C, 0x34CB58:0x64BAB8, 0x34CB64:0x64BAD0,
    0x34CB74:0x34E638, 0x34CB9C:0x30CC20,
    0x34CBB0:0x29E598,
    0x34CC24:0x3330E0,
    0x34CC34:0x326FE0,
    0x34CC40:0x322470,
    0x34CC44:0x322870,
    0x34CC4C:0x322A70,
    0x34D290:0x326FE0,
    0x34D29C:0x322470,
    0x34D2A0:0x322870,
    0x34D2A8:0x322A70,
}
BRANCHES = {
    0x34CC30:("CBZ",0x34CC38), # +0x965 flag false bypasses 0x326FE0
    0x34CC3C:("CBZ",0x34CC44), # +0x964 false bypasses local copy
    0x34CC48:("TBZ",0x34CC50), # compare zero bypasses reconcile helper
    0x34D298:("CBZ",0x34D2A0),
    0x34D2A4:("TBZ",0x34D2AC),
    0x34E4E0:("B.cond",0x34E4FC),
    0x34C9E8:("B",0x34CB30),
    0x34CB38:("B",0x34D328),
    0x34D32C:("B",0x34E4A4),
}
# Native load and call instruction signatures, not inferred C class names.
RAW_ASSERT = {
    0x34CBF0:0xF9400008, # ldr x8,[x0]   method-table pointer
    0x34CBF4:0xF9400108, # ldr x8,[x8]   slot 0
    0x34CBF8:0xD63F0100, # blr x8
    0x34D2EC:0xF9400008, # ldr x8,[x0]   same ownership selection
    0x34D2F0:0xF9400508, # ldr x8,[x8,#8] slot 1
    0x34D2F4:0xD63F0100, # blr x8
    0x34CC28:0x39659668, # ldrb w8,[x19,#0x965] (verified byte provenance)
    0x34CC38:0x39659268, # ldrb w8,[x19,#0x964]
    0x34C8A8:0x7912CA68, # strh w8,[x19,#0x964]
    0x34C8C0:0x39259668, # strb w8,[x19,#0x965]
    0x34C9EC:0x3925967F, # strb wzr,[x19,#0x965]
    0x34C9F8:0x3925927F, # strb wzr,[x19,#0x964]
    0x34CB30:0xB9000F28, # Save stage counter from precommit or commit
    0x34CB34:0x528000E8, # mov w8,#7 (next asynchronous state)
    0x34E4A8:0xB9001528, # actual Box Request state field store
    0x34E4D0:0xB9400F28, # local stage counter
    0x34E4D4:0x11000508, # increment by one
    0x34E4D8:0x71001D1F, # compare seven
    0x34E500:0xB9001668, # state=stage counter
    0x34E51C:0xB9001668, # state=8 by preceding MOV
}
def word(words, ghidra_va):
    return words[ghidra_va-IMAGE_BASE]
def inspect_string(raw, segs, gha, cap=170):
    # Don't require a long contiguous segment if the text sits near segment end.
    start=gha-IMAGE_BASE
    s=next((z for z in segs if z["va"]<=start<z["va"]+z["filesz"]),None)
    if s is None:
        return {"address":hex(gha),"status":"UNMAPPED"}
    maximum=min(cap,s["filesz"]-(start-s["va"]))
    data=raw_at(raw,segs,start,maximum)
    buf=data.split(b"\0",1)[0]
    return {"address":hex(gha),"raw_hex":buf.hex(),"text_utf8":buf.decode("utf8","backslashreplace"),
            "null_terminated":len(buf)<len(data),"status":"ORIGINAL_ELF_BYTES"}

def check_native(words):
    def require_bl(site,callee):
        kind,targets,_,_=decode(word(words,site),site-IMAGE_BASE)
        if kind!="BL" or targets!=[callee-IMAGE_BASE]:
            raise AssertionError("wrong BL: %x %s %s"%(site,kind,targets))
    for site,callee in DIRECT_BL.items(): require_bl(site,callee)
    for site,(kind,dest) in BRANCHES.items():
        got,targs,_,_=decode(word(words,site),site-IMAGE_BASE)
        if got!=kind or targs!=[dest-IMAGE_BASE]:
            raise AssertionError("wrong branch: %x, %s -> %s"%(site,got,targs))
    for site,expected in RAW_ASSERT.items():
        got=word(words,site)
        if got!=expected:
            raise AssertionError("opcode mismatch: %08x %08x != %08x"%(site,got,expected))
    return {"direct_calls":len(DIRECT_BL),"branches":len(BRANCHES),"exact_words":len(RAW_ASSERT)}

def check_published(root):
    # Maintain direct excerpts as source evidence, avoid inventing a JSON schema.
    files={
        "0034e638":["iVar1 = FUN__text__0064baec(param_1 + 0x2ff2420)",
                    "FUN__text__00317e00(param_1,local_d0,0x710fb3,pbVar8)",
                    "iVar1 = atoi(local_d0)","*(undefined4 *)(param_1 + 0x3941474) = 30000",
                    "iVar1 = 0;","return iVar1;"],
        "0064bb9c":["FUN__text__0064ed8c(*param_1)",
                    "0x200002,param_1 + 0x17"],
        "0064baec":["param_1 + 0xb8"],
        "00317e00":["return 1;"],
        "00317c34":["DecryptAes128Cbc"],
        "00322470":["FUN__text__00301ddc","iVar6 != 300"],
        "00322870":["FUN__text__00637404","iVar10 != 300"],
        "0030cc20":["DAT_008e55f8"],
        "0029e598":["0x400090"],
    }
    output={}
    for gva,needles in files.items():
        p=root/("_text__"+gva+".c")
        text=p.read_text("utf-8")
        missing=[w for w in needles if w not in text]
        if missing:
            raise AssertionError("%s missing required evidence %s"%(str(p),missing))
        output[gva]={"lines":len(text.splitlines()),"verified_patterns":len(needles)}
    return output

def scope(words, a,b):
    events=[]
    for gh in range(a,b,4):
        w=word(words,gh);kind,targs,fall,detail=decode(w,gh-IMAGE_BASE)
        events.append({"at_va":hex(gh),"opcode":"%08x"%w,
           "type":kind,"target_va":va(targs[0]) if targs else None})
    return events

def audit(raw, c_root):
    sha=hashlib.sha256(raw).hexdigest()
    if sha!=EXPECTED_SHA:raise AssertionError("unknown original ELF SHA "+sha)
    s=segments(raw);box=read_scope(raw,s,BOX)
    verified=check_native(box)
    cverified=check_published(c_root)
    # source params: Parser's top-level numeric code is only assigned if
    # 0x710FB3-key lookup returns true. Need confirm the actual UTF8 key.
    strings=[inspect_string(raw,s,gva) for gva in sorted(set(RESPONSE_LITERAL_VAS))]
    succ,_,_,_=graph(box)
    stage_sources={
       "precommit":(0x34C8B0,0x34C9E4,4),
       "commit":(0x34CA04,0x34CB2C,6)
    }
    stage_routes={}
    for endpoint,(case_entry,stage_mov,stage_id) in stage_sources.items():
        p1=shortest_path(succ,case_entry-IMAGE_BASE,stage_mov-IMAGE_BASE)
        p2=shortest_path(succ,stage_mov-IMAGE_BASE,0x34CB30-IMAGE_BASE)
        p3=shortest_path(succ,0x34CB30-IMAGE_BASE,0x34E4A8-IMAGE_BASE)
        if not p1 or not p2 or not p3:
            raise AssertionError("lost request-to-pending state path: "+endpoint)
        # MOV W8,#imm -> STR W8,[X25,#0xC] -> MOV W8,#7 ->
        # shared STR W8,[X9,#0x14]. No HTTP ACK along this path.
        w=word(box,stage_mov)
        if w != (0x52800008 | (stage_id<<5)):
            raise AssertionError("request stage value drift "+endpoint+" "+hex(w))
        stage_routes[endpoint]={
          "entry_va":hex(case_entry),
          "stage_mov_va":hex(stage_mov),"stage_value":stage_id,
          "stage_counter_store_va":"0x34CB30",
          "next_request_state_value":7,
          "shared_state_write_va":"0x34E4A8",
          "shortest_cfg_edges":[len(p1)-1,len(p2)-1,len(p3)-1],
          "caution":"This shows locally queued/pending transition, not server ACK."}
    return {
      "request_to_response_stage7":stage_routes,
      "status":"STATIC_PARSER_FIELD_AND_DUAL_CALLBACK_AUDIT_NO_REMOTE_ACK",
      "sha256":sha,"native_assertions":verified,"published_c":cverified,
      "response_key_strings":strings,
      "request_body_and_result":{
        "state_7_invokes_response_parser":"0x34CB74 -> 0x34E638",
        "http_code_slot":hex(0xB8),"parser_initial_result":"0x64BAEC HTTP response code",
        "numeric_response_override_key_va":hex(0x710FB3),
        "numeric_parse":"FUN_00317E00 lookup -> atoi -> iVar1",
        "application_error_slot":"BoxRequest+0x3941474",
        "parser_return_slot":"BoxRequest+0x3941478",
        "state_9_store_va":hex(0x34CB90),
        "statement":"This is a response-derived numeric discriminator, not independently a durable commit ACK."},
      "state8_virtual_call":{
         "entry_va":hex(0x34CB98),"virtual_call_va":hex(0x34CBF8),
         "method_slot_offset":0,
         "owner_selection":"BoxRequest callback holder +0x18/+0x20 or in-place +0x30",
         "gate_call_sites":[hex(0x34CB9C),hex(0x34CBB0)],
         "instruction_window":scope(box,0x34CBB8,0x34CC08),
         "dynamic_callee":"NOT_RESOLVED"},
      "state10_virtual_call":{
         "entry_va":hex(0x34CC1C),"virtual_call_va":hex(0x34D2F4),
         "method_slot_offset":8,
         "same_callback_holder_as_state8":True,
         "event_flag_stack_va":"SP+0x138",
         "instruction_window":scope(box,0x34D2AC,0x34D300),
         "dynamic_callee":"NOT_RESOLVED"},
      "state10_reconciliation":{
         "flag_965_check_va":"0x34CC28",
         "flag_964_check_va":"0x34CC38",
         "local_copy_callee":"0x322470",
         "local_compare_callee":"0x322870",
         "difference_handler_callee":"0x322A70",
         "state10_branch_window":scope(box,0x34CC1C,0x34CC50),
         "flag_writes":{k:scope(box,*v) for k,v in {
             "before_precommit_setup":(0x34C890,0x34C8C8),
             "precommit_exit":(0x34C9EC,0x34CA04),
             "shared_error":(0x34E45C,0x34E478)}.items()},
         "limitations":"Local copy/compare gated by request flags; not proven cloud rollback or durable ACK."},
      "stage_progression":scope(box,0x34E4D0,0x34E524),
      "outstanding":[
          "prove response numeric key's value semantics across all endpoints including /commit",
          "identify actual dynamic callback object and code targets of slots 0 and 8",
          "match +0x964/+0x965 to server failure, ACK success or other local conditions",
          "verify remote application ACK / persisted storage and Dirty requeue independently"]
    }
def selftest():
    assert len(RESPONSE_LITERAL_VAS)>=7
    assert DIRECT_BL[0x34CC44]==0x322870
    assert (0x34D2F4-0x34CBF8)>0
    print("Batch12 synthetic layout assertions passed.")
def main():
    a=argparse.ArgumentParser()
    a.add_argument("--elf",type=Path)
    a.add_argument("--published-c",type=Path)
    a.add_argument("--out",type=Path)
    a.add_argument("--self-test",action="store_true")
    x=a.parse_args()
    if x.self_test:selftest();return
    if not (x.elf and x.published_c and x.out):a.error("--elf, --published-c, --out required")
    r=audit(x.elf.read_bytes(),x.published_c)
    x.out.parent.mkdir(parents=True,exist_ok=True)
    x.out.write_text(json.dumps(r,ensure_ascii=False,indent=2)+"\n",encoding="utf8")
    display={k:r[k] for k in ("status","sha256","native_assertions","response_key_strings","request_body_and_result","state10_reconciliation","outstanding")}
    display["state10_reconciliation"]={k:r["state10_reconciliation"][k] for k in ("flag_965_check_va","flag_964_check_va","local_copy_callee","local_compare_callee","difference_handler_callee","limitations")}
    print(json.dumps(display,ensure_ascii=False,indent=2))
if __name__=="__main__":
    main()
