#!/usr/bin/env python3
"""Read-only, hash-pinned release receiver evidence. No live device access.

Generate full FDE instruction coverage, direct CFG edges, indirect-table
candidates and conservative reaching definitions. Candidate jump targets are
explicitly distinguished from validated control flow. No receiver alias claim.
"""
import argparse
import hashlib
import json
import re
import struct
from collections import defaultdict, deque
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from home41_ghidra_elf_atlas import parse_sections, get_fdes, EXPECTED_SHA256

SCOPES = {
    0xB2160: (0xB2D0C, "x21"),
    0xDAEA0: (0xDB1DC, "x25"),
    0xDCB18: (0xDCCC8, "x20"),
    0xDCD30: (0xDCF1C, "x20"),
}
CALLERS = [0xA030C, 0xA037C, 0xB1BB4, 0xD64DC, 0xD6F10]
TABLE_RVA = 0x625E30  # Ghidra displayed 0x725e30; subtract its 0x100000 image base
CASE_BASE = 0xB22E4
COUNT = 7

def hx(value):
    return f"0x{value:X}"

def read_rva(data, segments, addr, count, executable=False):
    for off, va, size, flags in segments:
        if va <= addr and addr + count <= va + size and (not executable or flags & 1):
            return data[off + addr-va:off + addr-va+count]
    raise ValueError(f"Unmapped file-backed RVA {hx(addr)} size {count}")

def target(ins):
    m = re.search(r"#(0x[0-9a-f]+|[0-9]+)$", ins.op_str)
    return int(m.group(1), 0) if m else None

def scope(md, data, segs, start, size):
    raw = read_rva(data, segs, start, size, True)
    rows = list(md.disasm(raw, start))
    if size % 4 or len(rows) * 4 != size or any(
        ins.address != start + 4*i or ins.size != 4 for i, ins in enumerate(rows)
    ):
        raise ValueError(f"Incomplete disassembly {hx(start)}")
    return rows

def graph(rows):
    pcs = {i.address for i in rows}
    edges = []
    unresolved = []
    for ins in rows:
        a, m = ins.address, ins.mnemonic
        nxt = a+4
        if m in ("ret", "eret", "brk", "udf"):
            continue
        if m == "br" or m.startswith("bra"):
            unresolved.append(a)
            continue
        if m == "b" or m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):
            t = target(ins)
            if t is None:
                unresolved.append(a)
            elif t in pcs:
                edges.append((a,t,"branch"))
            else:
                edges.append((a,t,"external-branch"))
            if m == "b":
                continue
        if m in ("bl","blr") or m.startswith("blra"):
            t = target(ins)
            if t is not None:
                edges.append((a,t,"call"))
        if nxt in pcs:
            edges.append((a,nxt,"fallthrough"))
    return edges, unresolved

def reaching(rows, edges, register, candidates=()):
    """May-reaching definitions under AAPCS64 callee-saved register convention.

    Stack restores are definitions, not automatically aliases; calls can mutate
    pointed-to memory. An unresolved indirect edge prevents proof of completeness.
    """
    by_pc = {i.address:i for i in rows}
    succ = defaultdict(set)
    for a,b,k in list(edges)+list(candidates):
        if b in by_pc and k not in ("call","external-branch"):
            succ[a].add(b)
    wanted = {register, "w"+register[1:]}
    incoming = {rows[0].address:{"entry"}}
    q = deque([rows[0].address])
    while q:
        a = q.popleft()
        ins = by_pc[a]
        _, writes = ins.regs_access()
        names = {ins.reg_name(r) for r in writes}
        out = {hx(a)} if names & wanted else incoming[a]
        for b in succ[a]:
            before = incoming.get(b,set())
            after = before | out
            if b not in incoming or after != before:
                incoming[b] = after
                q.append(b)
    return incoming

def callback_references(md, data, segs, fdes, secs):
    """Find direct and address-taken callback references. A raw qword, relocation
    or ADRP/ADD pair is only a reference candidate, not a registration proof."""
    import bisect
    targets = {0xDAEA0, 0xDCB18, 0xDCD30, 0xD6D28}
    starts = sorted(fdes)
    rows = []
    def owner(pc):
        index = bisect.bisect_right(starts, pc)-1
        if index >= 0:
            s = starts[index]
            if pc < s + fdes[s]:
                return hx(s)
        return None
    def signed(n, bits):
        return n-(1<<bits) if n & (1<<(bits-1)) else n
    def window(pc, start, end):
        left=max(start,pc-0x20)
        right=min(end,pc+0x30)
        return [{"rva":hx(i.address),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str}
                for i in md.disasm(read_rva(data,segs,left,right-left,True),left)]
    for off, va, size, flags in segs:
        if flags & 1:
            for pos in range(0,size-3,4):
                w=struct.unpack_from("<I",data,off+pos)[0]
                pc=va+pos
                if (w&0x7c000000)==0x14000000:
                    dest=pc+4*signed(w&0x3ffffff,26)
                    if dest in targets:
                        rows.append({"kind":"direct-b/bl","site":hx(pc),"target":hx(dest),"owner":owner(pc),
                                     "window":window(pc,va,va+size)})
                if (w&0x9f000000) not in (0x10000000,0x90000000):
                    continue
                imm=signed(((w>>5)&0x7ffff)*4+((w>>29)&3),21)
                if (w&0x9f000000)==0x10000000:
                    dest=pc+imm
                    if dest in targets:
                        rows.append({"kind":"adr","site":hx(pc),"target":hx(dest),"owner":owner(pc),
                                     "window":window(pc,va,va+size)})
                else:
                    page=(pc&~0xfff)+(imm<<12)
                    if not any((t&~0xfff)==page for t in targets):
                        continue
                    reg=w&31
                    for k in range(pos+4,min(pos+36,size-3),4):
                        n=struct.unpack_from("<I",data,off+k)[0]
                        if (n&0xffc00000)==0x91000000 and ((n>>5)&31)==reg:
                            dest=page+((n>>10)&0xfff)
                            if dest in targets:
                                site=va+k
                                rows.append({"kind":"adrp-add-candidate","site":hx(pc),"add_site":hx(site),
                                             "target":hx(dest),"owner":owner(pc),
                                             "window":window(site,va,va+size)})
        else:
            for pos in range((-va)%8,size-7,8):
                val=struct.unpack_from("<Q",data,off+pos)[0]
                if val in targets:
                    rows.append({"kind":"raw-qword-candidate","site":hx(va+pos),"target":hx(val)})
    for sec in secs.values():
        if sec["type"]!=4 or sec["entry_size"]<24:
            continue
        for pos in range(sec["file_offset"],sec["file_offset"]+sec["size"],sec["entry_size"]):
            loc,info,addend=struct.unpack_from("<QQq",data,pos)
            if addend in targets:
                rows.append({"kind":"rela-addend-candidate","site":hx(loc),"target":hx(addend),
                             "relocation_type":info&0xffffffff})
    return rows

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf",type=Path,required=True)
    ap.add_argument("--out",type=Path,required=True)
    args = ap.parse_args()
    data = args.elf.read_bytes()
    sha = hashlib.sha256(data).hexdigest()
    if sha != EXPECTED_SHA256:
        raise ValueError("Original ELF SHA256 mismatch")
    secs = parse_sections(data)
    fdes = {s:n for s,n,_ in get_fdes(data,secs)}
    # The atlas returns (start, span, FDE address); exact spans below are
    # independently pinned by the previous native lifecycle audit.
    expected = {0xB2160:0xE14,0xDAEA0:0x560,0xDCB18:0x214,0xDCD30:0x288}
    if any(fdes.get(s)!=n for s,n in expected.items()):
        raise ValueError("FDE identity mismatch")
    phoff=struct.unpack_from("<Q",data,32)[0]
    ents,num=struct.unpack_from("<HH",data,54)
    segs=[]
    for j in range(num):
        t,f,o,v,pa,fs,ms,al=struct.unpack_from("<IIQQQQQQ",data,phoff+j*ents)
        if t==1:
            segs.append((o,v,fs,f))
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    md.detail=True
    report={"elf_sha256":sha,"scope":"static only; no native execution",
            "functions":[],"caller_windows":[],"jump_table_candidate":{}}
    # Candidate extracted from Ghidra, independently check file bytes and target boundaries.
    table_bytes=read_rva(data,segs,TABLE_RVA,COUNT*2)
    table=[]
    for i,delta in enumerate(struct.unpack("<7H",table_bytes)):
        dest=CASE_BASE+4*delta
        table.append({"index":i,"u16":delta,"target":hx(dest),
                      "in_fde":0xB2160<=dest<0xB2160+expected[0xB2160] and dest%4==0})
    report["jump_table_candidate"]={"source":"Ghidra expression; not yet instruction-proven",
        "table_rva":hx(TABLE_RVA),"base_rva":hx(CASE_BASE),"raw_hex":table_bytes.hex(),"entries":table}
    for s,(anchor,reg) in SCOPES.items():
        rows=scope(md,data,segs,s,fdes[s])
        edges,unresolved=graph(rows)
        indirect=[]
        if s==0xB2160:
            branches=[a for a in unresolved if 0xB22C0<=a<CASE_BASE]
            if len(branches)==1 and all(x["in_fde"] for x in table):
                indirect=[(branches[0],int(x["target"],16),"candidate-table") for x in table]
        direct_defs=reaching(rows,edges,reg)
        candidate_defs=reaching(rows,edges,reg,indirect)
        report["functions"].append({
            "rva":hx(s),"size":fdes[s],"instruction_count":len(rows),
            "anchor":hx(anchor),"register":reg,
            "direct_only_reaching_defs":sorted(direct_defs.get(anchor,set())),
            "candidate_table_reaching_defs":sorted(candidate_defs.get(anchor,set())),
            "unresolved_indirect_branches":[hx(a) for a in unresolved],
            "candidate_indirect_edges":[[hx(a),hx(b),k] for a,b,k in indirect],
            "direct_edges":[[hx(a),hx(b),k] for a,b,k in edges],
            "instructions":[{"rva":hx(i.address),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str}
                            for i in rows],
            "proof_boundary":"May-reaching definitions only; unresolved edges, memory alias and interprocedural lifetime require manual review."
        })
    for s in CALLERS:
        if s in fdes:
            rows=scope(md,data,segs,s,fdes[s])
            report["caller_windows"].append({"rva":hx(s),"size":fdes[s],
                "instructions":[{"rva":hx(i.address),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str} for i in rows]})
    report["callback_reference_candidates"] = callback_references(md,data,segs,fdes,secs)

    # The first callback audit found a raw function-pointer cell for DAEA0.
    # Export the actual descriptor cells and their FDEs rather than guessing
    # wrapper addresses or treating a member pointer as a plain function.
    descriptor_cells=[]
    helpers=set()
    for cell in range(0x7A1080,0x7A10E8,8):
        value=struct.unpack("<Q",read_rva(data,segs,cell,8))[0]
        descriptor_cells.append({"rva":hx(cell),"raw_qword":hx(value),"fde_entry":value in fdes})
        if value in fdes:
            helpers.add(value)
    assert next(c["raw_qword"] for c in descriptor_cells if c["rva"]=="0x7A10C8")=="0xDAEA0"
    report["callback_descriptor_cells"]=descriptor_cells
    report["callback_binding_functions"]=[]
    for start in sorted(helpers | {0xD97F0,0xD6D28,0xD70DC}):
        if start not in fdes:
            report["callback_binding_functions"].append({"rva":hx(start),"missing_fde":True})
            continue
        rows=scope(md,data,segs,start,fdes[start])
        report["callback_binding_functions"].append({"rva":hx(start),"size":fdes[start],
            "instructions":[{"rva":hx(i.address),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str} for i in rows]})

    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    print("Full FDE instruction coverage:", [(f["rva"],f["instruction_count"]) for f in report["functions"]])
    print("Candidate table:",table)

if __name__=="__main__":
    main()
