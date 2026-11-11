#!/usr/bin/env python3
"""Read-only ELF AArch64 PC-relative string-reference audit for HOME Switch 4.1.0.

This is a literal / instruction-level candidate detector, NOT a proof of a HOME
business SaveRequest implementation or server acknowledgement. Does not use
or modify the Ghidra project, ELF, or pre-existing SQL/NDJSON.
"""
import argparse
import hashlib
import json
import struct
from collections import defaultdict
from pathlib import Path

EXPECTED_SHA = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
KEYS = (
    b"/api/box/operation", b"/api/mile/operation",
    b"SaveRequest", b"ApogeeSaveRequest",
    b"MtSaveThread", b"savedata.bin",
)
IMAGE_BASE = 0x100000

def sign_extend(value, bits):
    sign = 1 << (bits - 1)
    return (value ^ sign) - sign

def segments(data):
    if data[:4] != b"\x7fELF" or data[4] != 2 or data[5] != 1:
        raise ValueError("expected little-endian 64-bit ELF")
    header = struct.unpack_from("<16sHHIQQQIHHHHHH", data)
    if header[2] != 183:
        raise ValueError("expected AArch64 (EM_AARCH64)")
    phoff, entsize, num = header[5], header[9], header[10]
    if entsize < 56 or phoff + entsize * num > len(data):
        raise ValueError("invalid program header span")
    out = []
    for n in range(num):
        ptype, flags, off, va, _pa, fs, mem, _align = struct.unpack_from(
            "<IIQQQQQQ", data, phoff + n * entsize)
        if ptype == 1 and fs and off + fs <= len(data):
            out.append({"off": off, "va": va, "filesz": fs, "memsz": mem, "flags": flags})
    return out

def find_literals(data, segs):
    found = {}
    for seg in segs:
        if not (seg["flags"] & 4):  # readable only
            continue
        lo, hi = seg["off"], seg["off"] + seg["filesz"]
        chunk = data[lo:hi]
        for key in KEYS:
            pos = 0
            while True:
                ix = chunk.find(key, pos)
                if ix < 0:
                    break
                end = chunk.find(b"\x00", ix, min(ix + 150, len(chunk)))
                if end < 0:
                    pos = ix + len(key)
                    continue
                # Keep bounded literal; omit unrelated large string buffers.
                val = chunk[ix:end]
                if len(val) > 126:
                    pos = ix + len(key)
                    continue
                addr = seg["va"] + ix
                found[addr] = val.decode("utf-8", "backslashreplace")
                pos = ix + len(key)
    return dict(sorted(found.items()))

def scan(data):
    segs = segments(data)
    literals = find_literals(data, segs)
    target_addresses = set(literals)
    pages = defaultdict(set)
    for addr in target_addresses:
        pages[addr & ~0xfff].add(addr)
    hits = []
    counts = defaultdict(lambda: {"adrp_page_candidates": 0, "exact_code_hits": 0, "pointer_hits": 0})
    # AArch64 code is decoded from executable PT_LOAD, not any Ghidra XREF metadata.
    for seg in segs:
        if not (seg["flags"] & 1):
            continue
        off, va, fs = seg["off"], seg["va"], seg["filesz"]
        for i in range(0, fs - 3, 4):
            insn = struct.unpack_from("<I", data, off + i)[0]
            pc = va + i
            if (insn & 0x9f000000) == 0x10000000:  # ADR
                imm = sign_extend(((insn >> 5) & 0x7ffff) << 2 | ((insn >> 29) & 3), 21)
                target = pc + imm
                if target in target_addresses:
                    counts[target]["exact_code_hits"] += 1
                    hits.append({"kind": "ADR_DIRECT", "target_va": hex(target),
                                 "instruction_va": hex(pc), "ghidra_instruction_va": hex(pc + IMAGE_BASE),
                                 "register": insn & 31, "literal": literals[target]})
            if (insn & 0x9f000000) != 0x90000000:  # ADRP
                continue
            imm = sign_extend(((insn >> 5) & 0x7ffff) << 2 | ((insn >> 29) & 3), 21)
            page = (pc & ~0xfff) + (imm << 12)
            if page not in pages:
                continue
            rd = insn & 31
            for target in pages[page]:
                counts[target]["adrp_page_candidates"] += 1
            for step in range(1, 21):
                j = i + step * 4
                if j + 4 > fs:
                    break
                op = struct.unpack_from("<I", data, off + j)[0]
                # ADRP Xd; ADD Xn, Xd, #imm{, LSL #12}
                if (op & 0xff000000) == 0x91000000 and ((op >> 5) & 31) == rd:
                    delta = ((op >> 10) & 0xfff) << (12 if (op >> 22) & 1 else 0)
                    target = page + delta
                    if target in target_addresses:
                        counts[target]["exact_code_hits"] += 1
                        hits.append({"kind": "ADRP_ADD", "target_va": hex(target),
                                     "instruction_va": hex(pc), "paired_instruction_va": hex(va + j),
                                     "ghidra_instruction_va": hex(pc + IMAGE_BASE),
                                     "register": rd, "literal": literals[target]})
                # Load from address: ADRP Xd; LDR Xn, [Xd,#imm*8].
                # This identifies pointer slots, not direct string addresses.
                if (op & 0xffc00000) == 0xf9400000 and ((op >> 5) & 31) == rd:
                    target = page + (((op >> 10) & 0xfff) << 3)
                    if target in target_addresses:
                        counts[target]["exact_code_hits"] += 1
                        hits.append({"kind": "ADRP_LDR_FROM_LITERAL_ADDRESS", "target_va": hex(target),
                                     "instruction_va": hex(pc), "paired_instruction_va": hex(va + j),
                                     "ghidra_instruction_va": hex(pc + IMAGE_BASE),
                                     "register": rd, "literal": literals[target],
                                     "caution": "LDR fetches content at the address; not necessarily URL usage"})
                # A call or unconditional branch ends this local construction window.
                if (op & 0xfc000000) in (0x94000000, 0x14000000):
                    break
                # If ADRP register is overwritten (ADD pairing checked above), stop.
                if ((op & 0xff000000) == 0x91000000 and (op & 31) == rd):
                    break
    # Absolute pointer constants may be in relocation tables or arrays, and are
    # evidence only of pointer-shaped data, not executable callsites.
    for addr, literal in literals.items():
        needle = struct.pack("<Q", addr)
        for seg in segs:
            if seg["flags"] & 1:
                continue
            pos = seg["off"]
            lim = seg["off"] + seg["filesz"]
            while True:
                pos = data.find(needle, pos, lim)
                if pos == -1:
                    break
                if (pos - seg["off"]) % 8 == 0:
                    counts[addr]["pointer_hits"] += 1
                    hits.append({"kind": "ALIGNED_ABSOLUTE_POINTER", "target_va": hex(addr),
                                 "pointer_va": hex(seg["va"] + pos - seg["off"]),
                                 "literal": literal, "caution": "pointer data, not proven code consumer"})
                pos += 1
    summary = []
    for addr, literal in literals.items():
        summary.append({"target_va": hex(addr), "ghidra_expected_va": hex(addr + IMAGE_BASE),
                        "literal": literal, **counts[addr]})
    return {"status": "STATIC_SCOPE_ONLY", "literal_count": len(summary),
            "literal_summary": summary, "hits": hits, "executable_segments":
            [{k: s[k] for k in ("va", "filesz", "flags")} for s in segs if s["flags"] & 1],
            "limitations": [
                "ADRP window heuristic; not an interprocedural register/dataflow proof",
                "Unresolved RELA relocations or dynamic string construction are not covered",
                "No server ACK or Dirty Tracker linkage inferred from literal matches",
                "Ghidra address conversion assumes published image_base=0x100000"]}


# A call edge is not an ACK; collect it separately from string-reference proof.
FDE_FOCUS = {
    "box_cancel": (0x22c1cc, 856),
    "box_start": (0x22cb94, 1280),
    "apogee_state": (0x248bb0, 3916),
    "box_save_state": (0x24c470, 8372),
    "mile_operation": (0x252cc4, 2736),
}

def audit_fde_calls(data, segs, hits):
    bygroup = {}
    for name, (start, length) in FDE_FOCUS.items():
        seg = next((p for p in segs if p["flags"] & 1 and
                    p["va"] <= start and start + length <= p["va"] + p["filesz"]), None)
        if seg is None:
            bygroup[name] = {"status": "NO_EXEC_SEGMENT"}
            continue
        base = seg["off"] + start - seg["va"]
        calls = []
        indirect = []
        for off in range(0, length - 3, 4):
            word = struct.unpack_from("<I", data, base + off)[0]
            pc = start + off
            if (word & 0xfc000000) == 0x94000000:
                target = pc + (sign_extend(word & 0x3ffffff, 26) << 2)
                calls.append({"at_va": hex(pc + IMAGE_BASE), "target_va": hex(target + IMAGE_BASE)})
            elif (word & 0xfffffc1f) == 0xd63f0000:
                indirect.append({"at_va": hex(pc + IMAGE_BASE),
                                 "register": (word >> 5) & 31})
        anchors = [h for h in hits if start <= int(h.get("instruction_va","0"),16) < start+length]
        buckets = defaultdict(list)
        for c in calls:
            buckets[c["target_va"]].append(c["at_va"])
        top = [{"callee": k, "calls": len(v), "examples": v[:8]}
               for k,v in sorted(buckets.items(), key=lambda kv:(-len(kv[1]), kv[0]))]
        around = []
        for anchor in anchors:
            pc = int(anchor["instruction_va"],16)+IMAGE_BASE
            local = [c for c in calls if 0 <= int(c["at_va"],16) - pc <= 0x100]
            around.append({"literal": anchor["literal"],
                           "anchor_ghidra_va": hex(pc), "following_direct_calls_0x100": local[:15]})
        bygroup[name]={"status": "STATIC_CALL_EDGES_ONLY",
                       "start_ghidra_va": hex(start+IMAGE_BASE), "fde_bytes": length,
                       "direct_bl_count": len(calls), "unique_targets": len(buckets),
                       "indirect_blr_count": len(indirect),
                       "indirect_sample": indirect[:20], "top_direct_callees": top[:30],
                       "literal_windows": around}
    return bygroup

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", required=True, type=Path)
    ap.add_argument("--out", required=True, type=Path)
    a = ap.parse_args()
    raw = a.elf.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if sha != EXPECTED_SHA:
        raise SystemExit("ELF SHA mismatch: " + sha)
    result = scan(raw)
    result["call_analysis"] = audit_fde_calls(raw, segments(raw), result["hits"])
    result["elf_sha256"] = sha
    a.out.parent.mkdir(parents=True, exist_ok=True)
    a.out.write_text(json.dumps(result, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print(json.dumps({"status": result["status"], "elf_sha256": sha,
        "literal_count": result["literal_count"], "hits_count": len(result["hits"]),
        "literal_summary": result["literal_summary"], "hits": result["hits"],
        "call_analysis": result["call_analysis"]}, indent=2, ensure_ascii=False))

if __name__ == "__main__":
    main()
