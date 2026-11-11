#!/usr/bin/env python3
"""Batch11: HOME 4.1.0 states 8/9/10 and transport-to-Box state provenance.

Read-only, SHA-pinned AArch64 verification. No live server ACK inference.
"""
import argparse
import hashlib
import json
from pathlib import Path
from home41_batch07_request_adrp_audit import EXPECTED_SHA, IMAGE_BASE, segments
from home41_batch09_box_save_cfg import BOX, decode, graph, shortest_path, read_scope
from home41_batch10_dispatch_audit import exact_box_state_switch, va

ENTRY = {8:0x34CB98, 9:0x34CC0C, 10:0x34CC1C}
CALLS = {
    0x34CB4C:0x64BA4C, # pending status
    0x34CB58:0x64BAB8, # +8/+B0 both zero
    0x34CB64:0x64BAD0, # response buffer accessor
    0x34CB74:0x34E638,# response decode / app status
    0x34CB9C:0x30CC20,# separate global asynchronous operation
    0x34CBB0:0x29E598,# separate async object readiness
    0x34CC14:0x333080,# manager error notification
    0x34CC24:0x3330E0,# result/error notification
    0x34CFE4:0x3333B0,# second error notification
    0x34D280:0x3330E0,# shared error/result notification
}
BRANCHES = {
    0x34CB50:("TBNZ",0x34CC04),
    0x34CB5C:("TBZ",0x34D254),
    0x34CB68:("CBZ",0x34E478),
    0x34CB7C:("CBNZ",0x34CB88),
    0x34CB84:("CBZ",0x34E4D0),
    0x34CC10:("CBZ",0x34CFDC),
    0x34CFE0:("CBZ",0x34D26C),
    0x34E4E0:("B.cond",0x34E4FC),
}
STORES = {
    # exact opcode and field are independent of labels/source decompilation
    0x34CB78:("response_parser_return_to_stage_error",0xB9000B20),
    0x34CB90:("state_9",0xB9001668),
    0x34CC2C:("clear_stage_error",0xB9000B3F),
    0x34D288:("clear_stage_error_shared",0xB9000B3F),
    0x34E4A8:("state_9_shared_failure",0xB9001528),
    0x34E4DC:("increase_local_stage_counter",0xB9000F28),
    0x34E500:("state_from_incremented_stage_counter",0xB9001668),
    0x34E51C:("state_8",0xB9001668),
}

def check_words(words):
    def at(gva):
        if gva-IMAGE_BASE not in words:
            raise ValueError("site outside pinned original FDE: "+hex(gva))
        return words[gva-IMAGE_BASE]
    for site, target in CALLS.items():
        kind,dests,_,_=decode(at(site),site-IMAGE_BASE)
        if kind!="BL" or dests!=[target-IMAGE_BASE]:
            raise AssertionError("BL target mismatch at "+hex(site)+": "+str(dests))
    for site,(kind,target) in BRANCHES.items():
        got,dests,_,_=decode(at(site),site-IMAGE_BASE)
        if got!=kind or dests!=[target-IMAGE_BASE]:
            raise AssertionError("conditional branch mismatch at "+hex(site)+": "+str((got,dests)))
    for site,(label,opcode) in STORES.items():
        if at(site)!=opcode:
            raise AssertionError("store mismatch "+hex(site)+": "+label)
    # Bound 3 object-field gate and stage result checks, verified from bytes.
    for site,opcode in {
        0x34CB3C:0x52848408, # mov w8,#0x2420; then movk => +0x2ff2420
        0x34CB7C:0x35000060,
        0x34CB84:0x3400CA68,
        0x34CC0C:0xB9400320,
        0x34CC1C:0xB9400B20,
        0x34E4D0:0xB9400F28, # stage counter at x25+0xC
        0x34E4D4:0x11000508, # add w8,w8,#1
        0x34E4D8:0x71001D1F, # cmp w8,#7
        0x34E514:0x52800108  # mov w8,#8
    }.items():
        if at(site)!=opcode:
            raise AssertionError("instruction mismatch: "+hex(site))
    return True

def path_info(succ, start, end):
    p=shortest_path(succ,start-IMAGE_BASE,end-IMAGE_BASE)
    return {"reachable_in_conservative_cfg":p is not None,
            "shortest_instruction_edges":len(p)-1 if p else None}

def check_published_c(root):
    # Published decompiled C is a separate, already committed source of
    # semantics; checks here guard against summary/callee drift.
    expected={
        "0064bb9c":["FUN__text__0064ed8c(*param_1)","*(int *)(param_1 + 1) = iVar2",
                     "*(undefined4 *)(param_1 + 0x16) = uVar3"],
        "0064ba4c":["param_1 + 0x10","0x25a"],
        "0064bab8":["param_1 + 8","param_1 + 0xb0"],
        "0064bad0":["param_1 + 0x58","param_1 + 0x10"],
        "0034e638":["FUN__text__0064baec(param_1 + 0x2ff2420)",
                     "FUN__text__0064bad0(param_1 + 0x2ff2420)",
                     "FUN__text__00317c34","*(undefined4 *)(param_1 + 0x3941474) = 30000",
                     "return iVar1;"],
        "00333080":["0x934d4"],
        "003333b0":["0x934d4"],
        "003330e0":["0x934d4"],
        "0029e598":["0x400090"],
        "0030cc20":["DAT_008e55f8"]
    }
    out={}
    for addr,needles in expected.items():
        p=root / ("_text__"+addr+".c")
        s=p.read_text(encoding="utf-8")
        missed=[n for n in needles if n not in s]
        if missed:raise AssertionError("unexpected previously published C at "+str(p)+": "+repr(missed))
        out[addr]={"published_c_verified":True,"strings_checked":len(needles)}
    return out

def audit(raw, root=None):
    if hashlib.sha256(raw).hexdigest()!=EXPECTED_SHA:
        raise ValueError("immutable HOME main.elf SHA mismatch")
    segs=segments(raw)
    words=read_scope(raw,segs,BOX)
    check_words(words)
    succ,_,_,_=graph(words)
    # Case transitions are constructed from actual immediate native branches,
    # not heuristically labeled as application ACK.
    direct_sites={
        "pending_to_early_return":(0x34CB50,0x34CC04),
        "failed_transport_fields_to_error_notification":(0x34CB5C,0x34D254),
        "missing_response_to_error_notification":(0x34CB68,0x34E478),
        "response_parser_nonzero_to_state9":(0x34CB7C,0x34CB90),
        "response_parser_zero_and_no_second_error_to_stage_increment":(0x34CB84,0x34E4D0),
        "state9_error_flag_path":(0x34CC10,0x34CFDC),
        "state9_second_error_flag_path":(0x34CFE0,0x34D26C),
        "stage_increment_write_to_state":(0x34E4D0,0x34E500),
        "stage_seven_special_write_to_state8":(0x34E4E4,0x34E51C)
    }
    transitions={}
    for label,(start,end) in direct_sites.items():
        transitions[label]={"from":va(start-IMAGE_BASE),"to":va(end-IMAGE_BASE),
                            **path_info(succ,start,end)}
    # After branch condition, reports only reachability, not dynamic feasibility.
    state_info={}
    windows={8:(0x34CB98,0x34CC0C),9:(0x34CC0C,0x34CC1C),10:(0x34CC1C,0x34CC94)}
    important=[0x34CB90,0x34E4A8,0x34E500,0x34E51C,0x34D280,0x34D284]
    for state,(start,end) in windows.items():
        instructions=[]
        for gva in range(start,end,4):
            kind,targets,fall,detail=decode(words[gva-IMAGE_BASE],gva-IMAGE_BASE)
            instructions.append({"va":hex(gva),"raw_word":"%08x"%words[gva-IMAGE_BASE],
                "kind":kind,"direct_target":va(targets[0]) if targets else None})
        state_info[str(state)]={"entry_va":hex(ENTRY[state]),
            "window_end_exclusive":hex(end),
            "instructions":instructions,
            "conservative_paths_to_markers":{hex(dst):path_info(succ,ENTRY[state],dst)
                                              for dst in important}}
    return {
        "status":"STATIC_RESPONSE_TO_STATE_CHAIN_NOT_SERVER_ACK",
        "source":"original SHA-256-pinned ELF and separately published Ghidra C",
        "sha256":EXPECTED_SHA,
        "transport_layer":{"callback":"0x64BB9C",
            "callback_result_offsets":[8,0xB0],
            "pending_checker":"0x64BA4C",
            "both_results_zero_checker":"0x64BAB8",
            "response_buffer_accessor":"0x64BAD0",
            "response_parser":"0x34E638",
            "response_parser_context_offset":0x2FF2420,
            "box_stage_result_context_offset":0x3941470,
            "stage_result_value_offset":8,
            "stage_business_error_offset":4,
            "server_business_ack":"UNVERIFIED"},
        "case7_verified_direct_calls":[{"site":hex(site),"callee":hex(dst)}
            for site,dst in CALLS.items() if 0x34CB3C<=site<0x34CB98],
        "state_windows":state_info,
        "direct_branch_transitions":transitions,
        "stores":[{"site":hex(site),"meaning":label,"opcode":"%08x"%op}
                    for site,(label,op) in STORES.items()],
        "published_c":check_published_c(root) if root else "NOT_PROVIDED",
        "unresolved":["which server response content/field is authoritative ACK",
            "how stage 9/10 notifications and extra async callbacks reflect remote success",
            "whether Dirty staging is replayed or requeued after any failed commit"]
    }

def selftest():
    assert BOX[1]==8372
    assert decode(0x940BFBC0,0x34CB4C-IMAGE_BASE)[1]==[0x64BA4C-IMAGE_BASE]
    assert decode(0x360037C0,0x34CB5C-IMAGE_BASE)[0]=="TBZ"
    assert decode(0x35000060,0x34CB7C-IMAGE_BASE)[0]=="CBNZ"
    assert decode(0xB9001668,0x34CB90-IMAGE_BASE)[0]=="LINEAR"
    print("Batch11 synthetic instruction decoder assertions pass.")

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--self-test",action="store_true")
    ap.add_argument("--elf",type=Path)
    ap.add_argument("--published-c",type=Path)
    ap.add_argument("--out",type=Path)
    a=ap.parse_args()
    if a.self_test:
        selftest()
        return
    if not a.elf or not a.out:ap.error("--elf and --out required")
    report=audit(a.elf.read_bytes(),a.published_c)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    brief={"status":report["status"],"sha256":report["sha256"],
        "transport_layer":report["transport_layer"],
        "direct_branch_transitions":report["direct_branch_transitions"],
        "published_c":report["published_c"],
        "unresolved":report["unresolved"]}
    print(json.dumps(brief,ensure_ascii=False,indent=2))

if __name__=="__main__":
    main()
