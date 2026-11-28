#!/usr/bin/env python3
"""HOME41 shared operation functions: static read-only evidence, no device access."""
import csv
import hashlib
import struct
import sys
from collections import defaultdict, deque
from functools import lru_cache
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from audit_home41_save_serializers import Elf, SHA, direct_branch

elf_path, fde_path, report_path = sys.argv[1:]
data = Path(elf_path).read_bytes()
if hashlib.sha256(data).hexdigest() != SHA:
    raise SystemExit("ELF SHA mismatch")
e = Elf(data)
relr, rela = e.relocations()
with open(fde_path, encoding="utf-8") as f:
    fde = {int(r["rva"], 0): int(r["fde_bytes"]) for r in csv.DictReader(f)
           if int(r["fde_bytes"]) > 0}
d = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
d.skipdata = True
roots = {0x97040,0x97440,0x975b0,0x9c44c,0x9c3e4,0x9bb38,0x9bb44,0x8ea84,0x8ecb4,0x2c684}

@lru_cache(maxsize=2048)
def body(a):
    if a not in fde or not e.executable(a):
        return []
    return list(d.disasm(e.read(a, fde[a]), a))

def fmt(i):
    return f"{i.address:08X} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}"

def edges(a):
    for i in body(a):
        if i.mnemonic in ("bl", "b") and i.op_str.startswith("#0x"):
            t = int(i.op_str[1:], 16)
            if t in fde:
                yield i.address, t

def pointer(a):
    raw = struct.unpack("<Q", e.read(a, 8))[0]
    if a in relr:
        return raw
    r = rela.get(a)
    return r[2] if r and r[0] == 1027 else None


report = ["# HOME41 receiver and record collection audit", "", "SHA256: "+SHA, "Static only. Candidate vtables require constructor/type evidence."]
focus = roots | {0x8e980,0x8ebb0,0xe1450,0xe1f60,0x96fbc,0xdbe5c,0x35c44,0x36064,
  0xc4190,0xc4318,0xd6cdc,0x94e98,0x930e0,0x9264c,0x92b40,0x920e4,0x91358,0x91d1c,0x9accc,0x24c470}
incoming = defaultdict(list)
graph = defaultdict(list)
for a,n in sorted(fde.items()):
    if not e.executable(a): continue
    for off,(w,) in enumerate(struct.iter_unpack("<I",e.read(a,n-n%4))):
        b=direct_branch(a+off*4,w)
        if b:
            t=int(b["target"],16)
            if t in fde:
                graph[a].append((a+off*4,t))
                incoming[t].append((a,a+off*4,b["kind"]))
report += ["", "## Direct callers"]
for a in sorted(roots):
    report.append(f"### {a:#x}: {len(incoming[a])} sites")
    for fn,pc,k in incoming[a]:
        report.append(f"- {fn:#x} @ {pc:#x} {k}")
        if len(incoming[a]) <= 24: focus.add(fn)

report += ["", "## Type-token getter reverse paths and relocated slots"]
tokens={0x8ea84,0x8ecb4}
possible = {}
for token in sorted(tokens):
    seen={token:0}
    q=deque([token])
    while q:
        t=q.popleft()
        if seen[t]>=2: continue
        for fn,pc,k in incoming[t]:
            if fn not in seen and len(seen)<256:
                seen[fn]=seen[t]+1
                q.append(fn)
    possible[token]=seen
    report.append(f"### token {token:#x}: {len(seen)} reverse candidates")
    for fn,depth in sorted(seen.items()):
        report.append(f"- {fn:#x} depth={depth}")
        focus.add(fn)

slots={}
for a in sorted(relr|set(rela)):
    try: t=pointer(a)
    except ValueError: continue
    if t is not None and e.executable(t): slots[a]=t
tables={}
for token,seen in possible.items():
    for slot,t in slots.items():
        if t not in seen: continue
        report.append(f"- token {token:#x} relocation {slot:#x} -> {t:#x} depth={seen[t]}")
        # Secondary address point has offset-to-top -0x50; primary has zero.
        try: hdr=struct.unpack("<q",e.read(slot-16,8))[0]
        except ValueError: continue
        if hdr not in (0,-0x50): continue
        for base in ([slot] if hdr==0 else range(slot-0x400,slot,8)):
            try: h=struct.unpack("<q",e.read(base-16,8))[0]
            except ValueError: continue
            if h!=0 or not all(base+i in slots for i in range(0,0x68,8)): continue
            if hdr==-0x50 and base>=slot: continue
            tables.setdefault(base,set()).add((token,slot,hdr))
report += ["", "## Candidate primary table windows"]
for base,why in sorted(tables.items()):
    report.append(f"- primary {base:#x}, +58={slots[base+0x58]:#x}, +60={slots[base+0x60]:#x}, evidence={sorted(why)!r}")
    focus.update({slots[base],slots[base+0x58],slots[base+0x60]})

# Search direct ADRP+ADD materialization of candidate header/address points.
# Register reuse and constructor identity still need manual confirmation.
report += ["", "## Candidate table address materializers"]
targets={p+i for p in tables for i in (-16,0)}
for a,n in sorted(fde.items()):
    if not e.executable(a): continue
    raw=e.read(a,n-n%4)
    for off,(w,) in enumerate(struct.iter_unpack("<I",raw)):
        if w & 0x9f000000 != 0x90000000: continue
        imm=((w>>29)&3)|(((w>>5)&0x7ffff)<<2)
        if imm & (1<<20): imm-=1<<21
        pc=a+off*4; page=(pc&~0xfff)+(imm<<12); reg=w&31
        if not any((t&~0xfff)==page for t in targets): continue
        for delta in range(4,36,4):
            if off*4+delta+4>len(raw): break
            v=struct.unpack_from("<I",raw,off*4+delta)[0]
            if v&0xffc00000 != 0x91000000 or (v>>5)&31 !=reg: continue
            val=page+((v>>10)&0xfff)
            if val in targets:
                report.append(f"- {a:#x} @ {pc:#x}/{pc+delta:#x} -> {val:#x}")
                focus.add(a)
report += ["", "## Record data call graph"]
for a in sorted(roots):
    report.append(f"### {a:#x}")
    for pc,t in graph[a]:
        report.append(f"- {pc:#x} -> {t:#x}")
        focus.add(t)
report += ["", "## Bounded direct paths to SaveTick"]
for root in sorted(roots | {0x96fbc,0xdbe5c}):
    seen={root};q=deque([(root,[])])
    path=None
    while q:
        a,p=q.popleft()
        if a==0x24c470:
            path=p;break
        if len(p)>=8: continue
        for pc,t in graph[a]:
            if t not in seen and len(seen)<2000:
                seen.add(t);q.append((t,p+[(pc,t)]))
    report.append(f"- {root:#x}: visited={len(seen)} cap={len(seen)>=2000} path={path!r}")
report += ["", "## Exact token-thunk relocation windows"]
anchors={0x76dd18,0x76dda8,0x76ddc0,0x76e1a0,0x76e230,0x76e248}
for anchor in sorted(anchors):
    report.append(f"### token thunk slot {anchor:#x}")
    for slot in range(anchor-0x80,anchor+0x90,8):
        raw=struct.unpack("<Q",e.read(slot,8))[0]
        t=slots.get(slot)
        report.append(f"- {slot:#x} delta={slot-anchor:+#x} raw={raw:#x} executable={hex(t) if t is not None else '-'}")
        if t is not None: focus.add(t)
# Token-specific primary candidates and known UI name strings
report += ["", "## UI name anchors"]
for va in (0x6167d4,0x615c42):
    raw=e.read(va,64).split(b"\\0")[0]
    report.append(f"- {va:#x}: {raw!r}")
report += ["", "## Exact thunk window reference materializers"]
targets={p+i for p in anchors for i in range(-0x80,0x20,8)}
# Also include relocated cells pointing to these windows.
cells={}
for slot in sorted(relr|set(rela)):
    try: t=pointer(slot)
    except ValueError: continue
    if t in targets: cells[slot]=t
for slot,t in cells.items(): report.append(f"- relocated cell {slot:#x} -> {t:#x}")
pages={t&~0xfff for t in targets|set(cells)}
for a,n in sorted(fde.items()):
    if not e.executable(a): continue
    raw=e.read(a,n-n%4)
    for off,(w,) in enumerate(struct.iter_unpack("<I",raw)):
        if w&0x9f000000!=0x90000000: continue
        imm=((w>>29)&3)|(((w>>5)&0x7ffff)<<2)
        if imm&(1<<20): imm-=1<<21
        pc=a+off*4;page=(pc&~0xfff)+(imm<<12);reg=w&31
        if page not in pages: continue
        for delta in range(4,48,4):
            if off*4+delta+4>len(raw): break
            v=struct.unpack_from("<I",raw,off*4+delta)[0]
            if (v>>5)&31!=reg: continue
            if v&0xffc00000==0x91000000:
                val=page+((v>>10)&0xfff)
                if val in targets:
                    report.append(f"- {a:#x} @ {pc:#x}/{pc+delta:#x} ADD {val:#x}")
                    focus.add(a)
            elif v&0xffc00000==0xf9400000:
                val=page+8*((v>>10)&0xfff)
                if val in cells:
                    report.append(f"- {a:#x} @ {pc:#x}/{pc+delta:#x} LDR {val:#x} -> {cells[val]:#x}")
                    focus.add(a)
focus.update({0x201310,0x9a14c,0x2c9f8,0x27f78,0x27f7c,0x27f80})

report += ["", "## Function bodies"]
for a in sorted(focus):
    ii=body(a)
    report.append(f"### {a:#x} ({len(ii)} slots)")
    if not ii: report.append("No exact FDE.")
    elif len(ii)>4096: report.append("Body exceeds cap.")
    else: report += ["~~~asm"]+[fmt(i) for i in ii]+["~~~"]
out=Path(report_path)
out.parent.mkdir(parents=True,exist_ok=True)
out.write_text("\n".join(report)+"\n",encoding="utf-8")
print(f"candidate tables={len(tables)}, bodies={len(focus)}")
