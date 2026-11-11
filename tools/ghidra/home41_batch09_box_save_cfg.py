#!/usr/bin/env python3
"""HOME 4.1.0 Batch09: bounded read-only AArch64 Box Save CFG audit.

Not a recovered source, a dynamic execution trace, a server ACK proof, or a
network-save completion claim. Operates on an immutable SHA-checked native ELF.
All external addresses in reports are Ghidra VAs (image_base=0x100000).
"""
import argparse
import collections
import hashlib
import json
import struct
from pathlib import Path

from home41_batch07_request_adrp_audit import EXPECTED_SHA, IMAGE_BASE, segments, sign_extend

BOX = (0x24c470, 8372)
GATE = (0x225d10, 124)
ANCHORS = {
    "request_root": 0x34c54c,
    "precommit_url": 0x34c8c8,
    "commit_url": 0x34ca0c,
    "state_commit_wait": 0x34d248,
    "secondary_read": 0x34d350,
    "secondary_clear": 0x34d4f8,
    "dirty_count_read": 0x34dba4,
    "dirty_count_check": 0x34dba8,
    "dirty_list_read": 0x34dbe0,
    "dirty_encoding": 0x34dd54,
    "dirty_copy": 0x34dd64,
    "dirty_clear": 0x34dd74,
    "save_operation_state": 0x34e418,
    "state_gate": 0x325d10,
}
# Actual ISA instruction destinations, not invented function names.
KNOWN_CALLEES = {
    0x3279dc: "endpoint_formatter",
    0x3154a0: "gzip_aes_payload_candidate",
    0x31b870: "aes_transform_candidate",
    0x64bae4: "transport_result_accessor_candidate",
    0x3200a0: "prepo_report_not_ack",
    0x321ac0: "box_manager_getter",
    0x3d60a8: "record_encoder_candidate",
    0x6f65e0: "memcpy_thunk",
    0x325d10: "network_state_gate_candidate",
}
V = lambda n: "0x%08x" % (n + IMAGE_BASE)


def decode(word, pc):
    """Return (kind, targets, fallthrough, optional detail) for a single A64 word.

    No assumptions about jump-table BR targets or flags/response semantics.
    """
    top = word & 0xfc000000
    if top in (0x14000000, 0x94000000):
        dst = pc + (sign_extend(word & 0x3ffffff, 26) << 2)
        return ("BL" if top == 0x94000000 else "B", [dst],
                top == 0x94000000, None)
    if (word & 0xff000010) == 0x54000000:
        dst = pc + (sign_extend((word >> 5) & 0x7ffff, 19) << 2)
        return ("B.cond", [dst], True, "cond=%x" % (word & 15))
    if (word & 0x7e000000) == 0x34000000:
        dst = pc + (sign_extend((word >> 5) & 0x7ffff, 19) << 2)
        return ("CBNZ" if word & 0x01000000 else "CBZ", [dst], True,
                "register=%d" % (word & 31))
    if (word & 0x7e000000) == 0x36000000:
        dst = pc + (sign_extend((word >> 5) & 0x3fff, 14) << 2)
        return ("TBNZ" if word & 0x01000000 else "TBZ", [dst], True,
                "register=%d" % (word & 31))
    if (word & 0xfffffc1f) == 0xd61f0000:
        return ("BR", [], False, "jump_table_or_indirect")
    if (word & 0xfffffc1f) == 0xd63f0000:
        return ("BLR", [], True, "indirect_call_unknown_side_effects")
    if (word & 0xfffffc1f) == 0xd65f0000:
        return ("RET", [], False, None)
    return ("LINEAR", [], True, None)


def read_scope(raw, segs, scope):
    start, length = scope
    seg = next((s for s in segs if (s["flags"] & 1) and
                s["va"] <= start and start + length <= s["va"] + s["filesz"]), None)
    if seg is None:
        raise ValueError("missing original executable scope %x/%d" % scope)
    off = seg["off"] + start - seg["va"]
    return {pc: struct.unpack_from("<I", raw, off + pc - start)[0]
            for pc in range(start, start + length, 4)}


def graph(words):
    successors, predecessors, cross_edges, kinds = {}, collections.defaultdict(list), [], {}
    for pc, word in words.items():
        kind, targets, fallthrough, detail = decode(word, pc)
        kinds[pc] = kind
        internal = []
        if kind == "BL":
            # A call's target is *not* same-function CFG; external side effects unknown.
            cross_edges.append({"at": V(pc), "kind": kind, "target": V(targets[0]),
                                "semantic_hint": KNOWN_CALLEES.get(targets[0]+IMAGE_BASE)})
        elif kind == "B" or kind in ("B.cond", "CBZ", "CBNZ", "TBZ", "TBNZ"):
            for target in targets:
                if target in words:
                    internal.append(target)
                else:
                    cross_edges.append({"at": V(pc), "kind": kind, "target": V(target)})
        if fallthrough and pc + 4 in words:
            internal.append(pc + 4)
        successors[pc] = sorted(set(internal))
        for nextpc in successors[pc]:
            predecessors[nextpc].append(pc)
    return successors, predecessors, cross_edges, kinds


def shortest_path(graphmap, start, end, max_nodes=10000):
    if start not in graphmap or end not in graphmap:
        return None
    todo=collections.deque([start])
    prev={start:None}
    while todo and len(prev)<max_nodes:
        cur=todo.popleft()
        if cur==end:
            ret=[]
            while cur is not None:
                ret.append(cur)
                cur=prev[cur]
            return list(reversed(ret))
        for nxt in graphmap[cur]:
            if nxt not in prev:
                prev[nxt]=cur
                todo.append(nxt)
    return None


def incoming_to(words, dst):
    items=[]
    for pc,w in words.items():
        kind,targ,fall,_=decode(w,pc)
        if kind in ("B","B.cond","CBZ","CBNZ","TBZ","TBNZ") and dst in targ:
            items.append({"site":V(pc),"branch":kind})
    return items


def window(words, center, before=48, after=48):
    items=[]
    for pc in range(center-before,center+after+4,4):
        if pc not in words:
            continue
        op=words[pc]
        typ,dst,fall,detail=decode(op,pc)
        row={"va":V(pc),"word":"%08x"%op,"flow":typ}
        if dst: row["target"]=V(dst[0])
        if detail:row["detail"]=detail
        if typ=="BL":row["callee_hint"]=KNOWN_CALLEES.get(dst[0]+IMAGE_BASE,"unclassified")
        items.append(row)
    return items


def audit(raw):
    segs=segments(raw)
    box=read_scope(raw,segs,BOX)
    gate=read_scope(raw,segs,GATE)
    succ,pred,edges,kinds=graph(box)
    scope_start,scope_end=BOX[0],BOX[0]+BOX[1]
    clean=ANCHORS["dirty_clear"]-IMAGE_BASE
    requests=("request_root","precommit_url","commit_url","state_commit_wait",
              "dirty_count_read","dirty_list_read","dirty_encoding",
              "dirty_copy","save_operation_state")
    paths={}
    for label in requests:
        src=ANCHORS[label]-IMAGE_BASE
        p=shortest_path(succ,src,clean)
        paths[label]={
            "path_in_static_direct_edges":p is not None,
            "path_length_instructions":len(p)-1 if p else None,
            "path_branch_sites": [
                {"at":V(x), "type":kinds[x]}
                for x in (p or []) if kinds[x] != "LINEAR"
            ][:25],
            "caution":"The anchor is not necessarily a function entry or a live state; BR jump-table paths are omitted."
        }
    marker={}
    for name in ("dirty_count_read","dirty_count_check","dirty_list_read",
                 "dirty_encoding","dirty_copy","dirty_clear",
                 "secondary_clear","state_gate"):
        pc=ANCHORS[name]-IMAGE_BASE
        scope=gate if name=="state_gate" else box
        marker[name]={"va":V(pc),"opcode":"%08x"%scope[pc],
                      "window":window(scope,pc,24,32),
                      "direct_incoming_branches":incoming_to(scope,pc)}
    # Count direct branches / instructions over the entire scope, not just the
    # sparse windows from the earlier Ghidra export.
    counts=collections.Counter(kinds.values())
    direct_calls=[e for e in edges if e["kind"]=="BL"]
    from_read_to_clear=shortest_path(succ,ANCHORS["dirty_count_read"]-IMAGE_BASE,clean)
    from_copy_to_clear=shortest_path(succ,ANCHORS["dirty_copy"]-IMAGE_BASE,clean)
    return {
        "status":"STATIC_CFG_ONLY_NOT_ACK",
        "version":"HOME 4.1.0",
        "image_base":hex(IMAGE_BASE),
        "box_fde_ghidra_va":V(BOX[0]),
        "box_fde_bytes":BOX[1],
        "direct_flow_counts":dict(counts),
        "unknown_indirect_branches":sum(v=="BR" for v in kinds.values()),
        "known_direct_calls": [e for e in direct_calls if e.get("semantic_hint")],
        "branch_anchors":marker,
        "direct_branch_edges_targeting_dirty_clear":incoming_to(box,clean),
        "static_anchor_paths_to_clear":paths,
        "dirty_read_to_clear": {
            "linear_cfg_path_found":from_read_to_clear is not None,
            "path_instructions":len(from_read_to_clear)-1 if from_read_to_clear else None,
            "conditional_sites": [{"at":V(x),"kind":kinds[x]}
                                  for x in (from_read_to_clear or [])
                                  if kinds[x] in ("B.cond","CBZ","CBNZ","TBZ","TBNZ")]
        },
        "dirty_copy_to_clear":{
            "linear_cfg_path_found":from_copy_to_clear is not None,
            "path": [V(x) for x in from_copy_to_clear] if from_copy_to_clear else None,
        },
        "state_gate_words":len(gate),
        "caveats":[
            "Conditional branch edges represent both possible outcomes, not observed execution.",
            "Indirect BR/BLR, exception exits, and interprocedural callback behavior are not resolved.",
            "An anchor label is a string/site label, not an established state-function identity.",
            "No HTTP response status, server ACK, payload-to-wire send, or rollback causality is proven.",
            "All conclusions refer to immutable original ELF bytes; no live HOME account accessed."
        ]
    }


def selftest():
    # Known encoding: B +8 (0x14000002), BL +8 (0x94000002), CBZ W0 +8 (0x34000040)
    assert decode(0x14000002,0x1000)[:3] == ("B",[0x1008],False)
    assert decode(0x94000002,0x1000)[:3] == ("BL",[0x1008],True)
    assert decode(0x34000040,0x1000)[:3] == ("CBZ",[0x1008],True)
    assert decode(0x35000040,0x1000)[:3] == ("CBNZ",[0x1008],True)
    assert decode(0x54000040,0x1000)[:3] == ("B.cond",[0x1008],True)
    assert decode(0xd65f03c0,0x1000)[:3] == ("RET",[],False)
    assert decode(0xd61f0140,0x1000)[0] == "BR"
    words={0x1000:0x34000040,0x1004:0x14000002,0x1008:0xd65f03c0,
           0x100c:0xd65f03c0}
    succ,_,_,_=graph(words)
    assert shortest_path(succ,0x1000,0x1008) == [0x1000,0x1008]
    assert shortest_path(succ,0x1000,0x100c) == [0x1000,0x1004,0x100c]
    print("Batch09 tests: 9 synthetic assertions passed")


def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--elf",type=Path)
    ap.add_argument("--out",type=Path)
    ap.add_argument("--self-test",action="store_true")
    args=ap.parse_args()
    if args.self_test:
        selftest()
        return
    if args.elf is None or args.out is None:
        ap.error("--elf and --out are required")
    raw=args.elf.read_bytes()
    sha=hashlib.sha256(raw).hexdigest()
    if sha!=EXPECTED_SHA:
        raise SystemExit("Refusing unknown ELF: SHA-256 mismatch "+sha)
    report=audit(raw)
    report["elf_sha256"]=sha
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    compact={k:report[k] for k in ("status","elf_sha256","direct_flow_counts",
        "unknown_indirect_branches","direct_branch_edges_targeting_dirty_clear",
        "static_anchor_paths_to_clear","dirty_read_to_clear","dirty_copy_to_clear")}
    print(json.dumps(compact,ensure_ascii=False,indent=2))

if __name__=="__main__":
    main()
