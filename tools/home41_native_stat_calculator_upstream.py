# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""HOME 4.1.0 stat upstream: bounded static evidence, never a live object reader."""
import argparse, hashlib, json, struct
from pathlib import Path
from collections import defaultdict
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM, ARM64_OP_REG, ARM64_OP_MEM
from home41_elf_resource_xrefs import elf_segments, signed
from home41_native_learnset_focus import SHA

TARGETS = {
    0x53167c: "special_hp_candidate_1",
    0x5326f8: "special_hp_candidate_2",
    0x515c70: "nature_source_candidate",
    0x537870: "level_from_exp_candidate",
    0x5013f0: "growth_selector_candidate_1",
    0x501470: "growth_selector_candidate_2",
    0x514010: "beluga_input_candidate",
    0x514b00: "hayabusa_input_candidate",
}
REGIONS = {
    "growth_selectors": (0x5013f0, 0x501550),
    "stat_dispatch": (0x5318c0, 0x5325d0),
    "level_and_hp_arithmetic": (0x537870, 0x537944),
    "dataset_calculators": (0x5347b0, 0x537870),
}
def branch_target(pc, word):
    kind = word & 0xfc000000
    if kind not in (0x94000000, 0x14000000):
        return None
    return pc + 4 * signed(word & 0x3ffffff, 26)

def audit(b, out):
    if hashlib.sha256(b).hexdigest() != SHA:
        raise ValueError("ELF version mismatch")
    segs = elf_segments(b)
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    md.detail = True
    def segment(a, n):
        return next((s for s in segs if s["vaddr"] <= a and a+n <= s["vaddr"]+s["size"]), None)
    def raw(a, n):
        s = segment(a, n)
        if s is None:
            raise ValueError(hex(a))
        p = s["file_offset"] + a-s["vaddr"]
        return b[p:p+n]
    def dis(a, z):
        return list(md.disasm(raw(a, z-a), a))
    def row(i):
        return {"pc": hex(i.address), "bytes": i.bytes.hex(), "op": i.mnemonic, "args": i.op_str}
    def direct(i):
        if i.mnemonic in ("b", "bl") and len(i.operands)==1 and i.operands[0].type==ARM64_OP_IMM:
            return i.operands[0].imm
        return None
    # Scan executable segments once. Exact direct branches only, not virtual dispatch.
    refs = defaultdict(list)
    for s in segs:
        if not s["executable"]:
            continue
        off, size, va = s["file_offset"], s["size"], s["vaddr"]
        for k, (w,) in enumerate(struct.iter_unpack("<I", memoryview(b)[off:off+size-size%4])):
            pc = va+4*k
            dst = branch_target(pc, w)
            if dst in TARGETS:
                refs[dst].append({"pc": hex(pc), "kind": "bl" if w & 0xfc000000 == 0x94000000 else "b"})
    windows, literals, edges = {}, [], []
    def add_window(label, a, z):
        s = segment(a, z-a)
        if not s or not s["executable"]:
            raise ValueError("not executable: "+label)
        ins = dis(a,z)
        windows[label] = [row(i) for i in ins]
        # Adjacent ADR/ADRP + immediate ADD or memory load candidates only.
        # No propagation across control flow or register writes is claimed.
        for j,i in enumerate(ins):
            dst = direct(i)
            if dst is not None:
                edges.append({"window":label,"pc":hex(i.address),"target":hex(dst),"kind":i.mnemonic})
            if i.mnemonic not in ("adr","adrp") or len(i.operands)!=2:
                continue
            d,p = i.operands
            if d.type!=ARM64_OP_REG or p.type!=ARM64_OP_IMM:
                continue
            candidates = [(p.imm, i.address, "adr")] if i.mnemonic=="adr" else []
            if j+1<len(ins):
                q=ins[j+1]; ops=q.operands
                if q.mnemonic=="add" and len(ops)==3 and ops[1].type==ARM64_OP_REG and ops[1].reg==d.reg and ops[2].type==ARM64_OP_IMM and not ops[2].shift.value:
                    candidates.append((p.imm+ops[2].imm,q.address,"adjacent_add"))
                if q.mnemonic.startswith("ldr"):
                    for op in ops:
                        if op.type==ARM64_OP_MEM and op.mem.base==d.reg and op.mem.index==0:
                            candidates.append((p.imm+op.mem.disp,q.address,"adjacent_load"))
            for addr,pc,kind in candidates:
                ss=segment(addr,1)
                if ss is None:
                    continue
                n=min(404, ss["vaddr"]+ss["size"]-addr)
                literals.append({"window":label,"producer":hex(i.address),"consumer":hex(pc),"address":hex(addr),"kind":kind,
                                 "executable_segment":ss["executable"],"preview_hex":raw(addr,n).hex(),"status":"CANDIDATE"})
    for a,label in TARGETS.items():
        add_window(label,a,a+0x180)
        for ref in refs[a]:
            pc=int(ref["pc"],16)
            s=segment(pc,4)
            lo=max(s["vaddr"],pc-0x40)
            hi=min(s["vaddr"]+s["size"],pc+0x44)
            add_window(f"xref_{a:x}_{pc:x}",lo,hi)
    for label,(a,z) in REGIONS.items():
        add_window(label,a,z)
    # Export known arithmetic tables without assigning upstream ownership.
    constants = {
        "nature_25x5": [list(struct.unpack("<5b",raw(0x65accc+5*i,5))) for i in range(25)],
        "effort_11": list(struct.unpack("<11i",raw(0x65ac74,44))),
        "special_hp_float32_11": list(struct.unpack("<11f",raw(0x65aca0,44))),
    }
    out.mkdir(parents=True,exist_ok=True)
    report={"status":"STATIC_EVIDENCE_ONLY","elf_sha256":SHA,
            "targets":{hex(a):{"label":v,"direct_refs":refs[a]} for a,v in TARGETS.items()},
            "constants":constants,"edges":edges,"literal_candidates":literals,"windows":windows,
            "limitations":["Bounded windows are not recovered CFG or function boundaries.",
                           "Direct branches omit indirect calls and data references.",
                           "Literal candidates are uninterpreted; growth curve and producer identity are not proved.",
                           "No emulation of upstream object methods, no live device or database writes."]}
    (out/"stat_upstream_evidence.json").write_text(json.dumps(report,indent=2)+"\n")
    with (out/"stat_upstream_evidence.asm").open("w") as f:
        for label,rows in windows.items():
            f.write("\n; "+label+"\n")
            for i in rows:
                f.write(f"{i['pc']:>10} {i['bytes']} {i['op']:8} {i['args']}\n")
    print(json.dumps({"status":report["status"],"refs":{hex(a):len(refs[a]) for a in TARGETS},"windows":len(windows),"literal_candidates":len(literals)}))

if __name__=="__main__":
    assert branch_target(0x1000,0x94000001)==0x1004
    assert branch_target(0x1000,0x17ffffff)==0xffc
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    audit(a.elf.read_bytes(),a.out)
