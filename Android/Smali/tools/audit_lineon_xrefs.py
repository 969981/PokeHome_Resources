#!/usr/bin/env python3
"""Read-only cross-reference audit of HOME 4.1.0 ApiRequestBase.Lineon.

Anchor: ApiRequestBase TypeInfo pointer at RVA 0x44EA750, deduced from
CSM.Skitty and ApiRequestBase.Chenipotte disassembly. Track only explicit
ADRP -> LDR TypeInfo -> LDR class -> LDR static_fields(+0xB8) ->
LDR/STR/ADD static field(+0x78) register chains.

Results are STATIC instruction candidates, not dynamic proofs, server claims,
or a modification to app credentials/signatures.
"""
from __future__ import annotations

import argparse
import bisect
import json
import re
import struct
from pathlib import Path

TYPEINFO_POINTER_RVA = 0x44EA750
FIELD_OFFSET = 0x78
STATIC_FIELDS_OFFSET = 0xB8
MAX_INSNS = 800
MAX_ANCHORS = 12000
MAX_RECORDS = 900
RXMEM = re.compile(
    r"^([wx][0-9]+), \[([wx][0-9]+)(?:, #(-?0x[0-9a-f]+|-?[0-9]+))?\]"
)
RXADD = re.compile(r"^([wx][0-9]+), ([wx][0-9]+), #(-?0x[0-9a-f]+|-?[0-9]+)$")
RXMOV = re.compile(r"^([wx][0-9]+), ([wx][0-9]+)$")


def adrp_target(word: int, address: int) -> int | None:
    # AArch64 ADRP: op=1, immlo[30:29], immhi[23:5], Rd[4:0].
    if (word & 0x9F000000) != 0x90000000:
        return None
    imm = ((word >> 5) & 0x7FFFF) << 2 | ((word >> 29) & 3)
    if imm & (1 << 20):
        imm -= 1 << 21
    return (address & ~0xFFF) + (imm << 12)


def read_methods(script: Path):
    obj = json.loads(script.read_text(encoding="utf-8"))
    methods: dict[int, list[str]] = {}
    queue = [obj]
    while queue:
        n = queue.pop()
        if isinstance(n, dict):
            address = n.get("Address")
            name = n.get("Name")
            if isinstance(address, int) and address > 0 and isinstance(name, str):
                methods.setdefault(address, []).append(name)
            queue.extend(v for v in n.values() if isinstance(v, (list, dict)))
        elif isinstance(n, list):
            queue.extend(v for v in n if isinstance(v, (list, dict)))
    return sorted(methods), methods


def parse_mem(ops: str):
    match = RXMEM.match(ops)
    if match:
        dest, base, imm = match.groups()
        return dest, base, int(imm, 0) if imm else 0
    return None


def norm_reg(reg: str) -> str:
    return ("x" + reg[1:]) if re.fullmatch(r"[wx][0-9]+", reg) else reg


def summarize_anchor(reader, data: bytes, addr: int, page: int):
    """Conservative straight-line register provenance, clipped to a method."""
    state = {}
    events = []
    lines = []
    initialized = False
    seen_slot = False
    seen_class = False
    seen_statics = False

    for ins in reader.disasm(data, addr):
        mn, op = ins.mnemonic, ins.op_str
        line = f"0x{ins.address:X}: {mn} {op}".strip()
        lines.append(line)

        if mn == "adrp":
            reg = op.split(",", 1)[0].strip()
            # First ADRP page is passed in, all later ADRPs are new origins.
            # Some functions re-load TypeInfo inside a function.
            target = adrp_target(struct.unpack_from("<I", data, ins.address-addr)[0], ins.address)
            state[norm_reg(reg)] = "page" if target == page else ""
            if target == page:
                initialized = True
            continue

        if mn == "mov":
            m = RXMOV.match(op)
            if m:
                dest, src = m.groups()
                state[norm_reg(dest)] = state.get(norm_reg(src), "")
            continue

        if mn in {"ldr", "ldur"}:
            parsed = parse_mem(op)
            if parsed:
                dest, base, off = parsed
                base_state = state.get(norm_reg(base), "")
                new = ""
                if base_state == "page" and off == TYPEINFO_POINTER_RVA % 4096:
                    new = "typeinfo_slot"; seen_slot = True
                elif base_state == "typeinfo_slot" and off == 0:
                    new = "classinfo"; seen_class = True
                elif base_state == "classinfo" and off == STATIC_FIELDS_OFFSET:
                    new = "statics"; seen_statics = True
                elif base_state == "statics" and off == FIELD_OFFSET:
                    new = "lineon_value"
                    events.append({
                        "kind": "field_read",
                        "instruction_rva": f"0x{ins.address:X}",
                        "instruction":line,
                        "source": "register_chain"
                    })
                elif base_state == "statics" and off == FIELD_OFFSET + 8:
                    # Nearby unrelated field e.g. ClientAppVersion; don't
                    # count as Lineon. Retain as evidence for classification.
                    pass
                state[norm_reg(dest)] = new
            continue

        if mn in {"str", "stur"}:
            parsed = parse_mem(op)
            if parsed:
                _src, base, off = parsed
                if state.get(norm_reg(base)) == "statics" and off == FIELD_OFFSET:
                    events.append({
                        "kind": "field_write",
                        "instruction_rva": f"0x{ins.address:X}",
                        "instruction":line,
                        "source":"register_chain"
                    })
            continue

        if mn == "add":
            match = RXADD.match(op)
            if match:
                dest, src, imm = match.groups()
                state[norm_reg(dest)] = ""
                if state.get(norm_reg(src)) == "statics" and int(imm,0)==FIELD_OFFSET:
                    events.append({
                        "kind":"field_address",
                        "instruction_rva":f"0x{ins.address:X}",
                        "instruction":line,
                        "source":"register_chain"
                    })
            continue

        # Reset simple destination-write semantics to avoid spurious inherited
        # provenance. Branch/cmp/tst do not overwrite registers.
        if mn.startswith(("ldp", "stp")):
            regs = [x.strip() for x in op.split(",")[:2]]
            if mn.startswith("ldp"):
                for reg in regs:
                    state[norm_reg(reg)] = ""
            continue
        if mn.startswith(("cbz", "cbnz", "tbz", "tbnz", "b.", "b ", "ret", "bl", "cmp", "tst")):
            continue
        if mn in {"sub","orr","and","eor","adr","movz","movk","movn","ldrb","ldrh","ldrsw","csel"}:
            dest = op.split(",",1)[0].strip()
            state[norm_reg(dest)] = ""

    return {
        "explicit_typeinfo_adpr": initialized,
        "typeinfo_slot_read": seen_slot,
        "classinfo_read": seen_class,
        "static_fields_read": seen_statics,
        "field_events": events,
        "evidence_lines": lines[:110],
    }


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--binary", required=True, type=Path)
    parser.add_argument("--script", required=True, type=Path)
    parser.add_argument("--out", required=True, type=Path)
    a = parser.parse_args()

    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
    from elftools.elf.elffile import ELFFile
    with a.binary.open("rb") as f:
        elf = ELFFile(f)
        assert elf.elfclass == 64 and elf["e_machine"] == "EM_AARCH64"
        # Unity IL2CPP functions do not all live in an ELF section named
        # ".text": this binary's .text ends before CSM.Tarinor / Chenipotte.
        # PT_LOAD PF_X is the authoritative executable mapping.
        regions = [
            (int(seg["p_vaddr"]), seg.data()[:int(seg["p_filesz"])])
            for seg in elf.iter_segments()
            if seg["p_type"] == "PT_LOAD" and (int(seg["p_flags"]) & 1)
        ]
    if not regions:
        raise SystemExit("No executable ELF PT_LOAD segments")
    print("ELF_EXECUTABLE_SEGMENTS",json.dumps([
        {"start":hex(rva),"end":hex(rva+len(data)),"bytes":len(data)}
        for rva,data in regions
    ]),flush=True)
    if not any(rva <= 0x1F26E88 < rva + len(data) for rva,data in regions):
        raise SystemExit("Known CSM native method missing from PF_X ELF segments")
    starts, names = read_methods(a.script)
    reader = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    page = TYPEINFO_POINTER_RVA & ~0xFFF
    records = []
    anchors = 0
    confirmed = 0
    fullchains = 0
    for text_rva, text in regions:
        l = len(text) // 4
        for i in range(l):
            pos = i * 4
            word = struct.unpack_from("<I", text, pos)[0]
            rva = text_rva + pos
            if adrp_target(word, rva) != page:
                continue
            anchors += 1
            if anchors > MAX_ANCHORS:
                raise SystemExit("Unexpected TypeInfo ADRP page frequency; refuse unbounded scan")
            meth_idx = bisect.bisect_right(starts, rva) - 1
            method = starts[meth_idx] if meth_idx >= 0 else None
            if method is None:
                continue
            # Clip at next method RVA; cap windows for performance.
            next_method = starts[meth_idx+1] if meth_idx+1 < len(starts) else rva + MAX_INSNS*4
            size = min(MAX_INSNS*4, max(0,next_method-rva), len(text)-pos)
            if size < 12:
                continue
            block = summarize_anchor(reader, text[pos:pos+size], rva, page)
            if not block["typeinfo_slot_read"]:
                continue
            confirmed += 1
            if block["static_fields_read"]:
                fullchains += 1
            if not block["field_events"]:
                continue
            if len(records) >= MAX_RECORDS:
                raise SystemExit("Unusually many Lineon candidate accesses")
            records.append({
                "adrp_rva":f"0x{rva:X}",
                "method_start_rva":f"0x{method:X}",
                "method_names":names.get(method,[])[:8],
                "distance_to_method_start":rva-method,
                "provenance": {
                    k:block[k] for k in (
                        "explicit_typeinfo_adpr","typeinfo_slot_read","classinfo_read","static_fields_read"
                    )
                },
                "lineon_events":block["field_events"],
                "instructions":block["evidence_lines"],
            })

    # A known positive control: ApiRequestBase.Chenipotte must be detected.
    control = [
        x for x in records
        if "ILib.Unity.Net.ApiRequestBase$$Chenipotte" in x["method_names"]
        and any(ev["kind"]=="field_write" for ev in x["lineon_events"])
    ]
    if not control:
        details=[]
        for region_rva,region_data in regions:
            check_rva=0x1F26E88
            check_offset=check_rva-region_rva
            if 0 <= check_offset < len(region_data):
                check_word=struct.unpack_from("<I",region_data,check_offset)[0]
                block=summarize_anchor(
                    reader, region_data[check_offset:check_offset+0x94],check_rva,page)
                details.append({
                    "anchor_rva":hex(check_rva),
                    "decoded_page":hex(adrp_target(check_word,check_rva) or 0),
                    "register_chain":block
                })
        print("CONTROL_DIAGNOSTIC",json.dumps(details),flush=True)
        raise SystemExit("Control missing: expected Chenipotte static Lineon write at 0x1F26F08")

    out = {
        "status":"static_typeinfo_crossreference_complete",
        "typeinfo_global_pointer_rva":f"0x{TYPEINFO_POINTER_RVA:X}",
        "static_field":"ILib.Unity.Net.ApiRequestBase.Lineon",
        "field_offset":"0x78",
        "static_class_fields_offset":"0xB8",
        "executable_regions":[
            {"rva_start":f"0x{rva:X}","bytes":len(data)}
            for rva,data in regions
        ],
        "text_bytes":sum(len(data) for _,data in regions),
        "method_start_count":len(starts),
        "adrp_candidates_to_typeinfo_page":anchors,
        "with_confirmed_global_slot_load":confirmed,
        "with_static_fields_access":fullchains,
        "access_record_count":len(records),
        "kind_counts":{
            kind:sum(
                1 for record in records for ev in record["lineon_events"]
                if ev["kind"]==kind
            ) for kind in ("field_read","field_write","field_address")
        },
        "known_control_write_detected":True,
        "scan_window_instructions":MAX_INSNS,
        "scope_limitations":[
            "This is a conservative straight-line register-chain scan with no full control-flow analysis",
            "Indirect aliases, cached class-info pointers, stack spills, inlined readers and unrecognized ARM64 opcodes may be missed",
            "Matched field references are static instruction candidates, not observed runtime requests",
            "Does not inspect, reproduce or modify credentials, signatures, server responses or HTTP request bodies"
        ],
        "accesses":records
    }
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(out,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({
        k:out[k] for k in (
            "adrp_candidates_to_typeinfo_page","with_confirmed_global_slot_load",
            "with_static_fields_access","access_record_count","kind_counts","known_control_write_detected"
        )
    },sort_keys=True))
    for rec in records:
        print("FIELD",rec["method_names"][:3],rec["lineon_events"])
    return 0


if __name__=="__main__":
    raise SystemExit(main())
