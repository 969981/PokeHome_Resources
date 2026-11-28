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
roots = {0x2c378, 0x2c7ec0, 0x35c44, 0x35f10}
extra = {0x96fbc, 0x97040, 0xdbe5c, 0xc4240, 0xc4278, 0xd6c04, 0xd6c3c, 0x24c470}
keys = (0x6951884aa529101d, 0x2d5743d6ac63d786)

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

for a in roots:
    if not body(a):
        raise SystemExit(f"Missing required function {a:#x}")
report = ["# HOME41 shared operation audit", "", "SHA256: " + SHA,
          "Read-only static evidence; direct edges do not resolve indirect receivers.", "",
          "## Direct callers (FDE-backed instructions)"]
callers = defaultdict(list)
for a, n in sorted(fde.items()):
    if not e.executable(a):
        continue
    raw = e.read(a, n - n % 4)
    for off, (word,) in enumerate(struct.iter_unpack("<I", raw)):
        if word & 0x7c000000 != 0x14000000:
            continue
        b = direct_branch(a + off*4, word)
        t = int(b["target"], 16)
        if t in roots:
            callers[t].append((a, a+off*4, b["kind"]))
for a in sorted(roots):
    report += [f"### {a:#x}: {len(callers[a])} direct callers"]
    report += [f"- {fn:#x} @ {pc:#x} {kind}" for fn,pc,kind in callers[a]]
report += ["", "## Relocation references to four roots"]
for slot in sorted(relr | set(rela)):
    try:
        t = pointer(slot)
    except ValueError:
        continue
    if t in roots:
        report.append(f"- {slot:#x} -> {t:#x}")

focus = set(roots) | extra
report += ["", "## Direct callees, two levels (bounded)"]
for root in sorted(roots | {0x96fbc,0xdbe5c}):
    report.append(f"### {root:#x}")
    seen = {root}
    q = deque([(root, 0)])
    while q:
        a, depth = q.popleft()
        if depth >= 2:
            continue
        for pc,t in edges(a):
            report.append(f"- depth {depth+1}: {a:#x} @ {pc:#x} -> {t:#x}")
            if t not in seen and len(seen) < 160:
                seen.add(t)
                q.append((t, depth+1))
                focus.add(t)
    report.append(f"visited {len(seen)}")
report += ["", "## Bounded direct paths to SaveTick (depth 8, 2000 nodes/root)"]
for root in sorted(roots):
    seen = {root}
    q = deque([(root, [])])
    found = None
    while q:
        a, path = q.popleft()
        if a == 0x24c470:
            found = path
            break
        if len(path) >= 8:
            continue
        for pc,t in edges(a):
            if t not in seen and len(seen) < 2000:
                seen.add(t)
                q.append((t, path+[(pc,t)]))
    report.append(f"- {root:#x}: visited {len(seen)}, cap={len(seen)>=2000}, path={found!r}; missing path is inconclusive")
report += ["", "## Raw key occurrences (file offsets, not semantic identity)"]
for k in keys:
    needle = struct.pack("<Q", k)
    offsets = []
    pos = data.find(needle)
    while pos >= 0:
        offsets.append(hex(pos))
        pos = data.find(needle, pos+1)
    report.append(f"- {k:#018x}: {len(offsets)} exact LE matches: {', '.join(offsets[:100])}")

report += ["", "## Mode jump table and callback descriptors"]
for mode, offset in enumerate(e.read(0x6219d0, 4)):
    report.append(f"- mode {mode}: {0x35c8c+4*offset:#x}")
focus.update({0x36064,0x36090,0x36094,0x360a0,0x360ac,0x360d8,0x360dc,0x360e8,
              0x360f4,0x36120,0x36124,0x36130,0x3613c,0x36168,0x3616c,0x36178,
              0x597398,0x5973b0,0x2eb584,0x2eb73c,0x2eb744})
report += ["", "## Key name hypotheses (ELF ASCII strings; exact hash matches only)"]
import re
# Candidate algorithms only, no assumed original hash implementation.
wanted = set(keys) | {0xd5a646e9eb5de80c,0x31b5f77ad1a1d139,0x08e89686f5660e8f,
                      0xbf2bb2531b7cde14,0x3b8f5513c2470901}
def fnv(raw, variant):
    h = 0xcbf29ce484222325
    for v in raw:
        h = ((h ^ v)*0x100000001b3 if variant == 1 else (h*0x100000001b3)^v) & 0xffffffffffffffff
    return h
strings = set()
for m in re.finditer(rb"[ -~]{3,160}\x00", data):
    raw = m.group()[:-1]
    strings.add(raw)
    strings.update(re.findall(rb"[A-Za-z_][A-Za-z0-9_.-]{2,100}",raw))
for raw in sorted(strings):
    for variant in (1,0):
        h = fnv(raw,variant)
        if h in wanted:
            report.append(f"- FNV{'1a' if variant else '1'} {h:#018x}: {raw!r}")
report.append(f"Checked {len(strings)} distinct ELF ASCII candidates; no match is inconclusive.")

report += ["", "## Caller evidence windows"]
for a in sorted(roots):
    for fn, pc, kind in callers[a]:
        report.append(f"### {a:#x} caller {fn:#x} @ {pc:#x}")
        report += ["~~~asm"] + [fmt(i) for i in body(fn) if pc-40 <= i.address <= pc+24] + ["~~~"]
report += ["", "## Function bodies"]
for a in sorted(focus):
    ii = body(a)
    report.append(f"### {a:#x} ({len(ii)} slots)")
    if not ii:
        report.append("No exact FDE.")
    elif len(ii)>4096:
        report.append("Body exceeds cap.")
    else:
        report += ["~~~asm"] + [fmt(i) for i in ii] + ["~~~"]
out = Path(report_path)
out.parent.mkdir(parents=True,exist_ok=True)
out.write_text("\n".join(report)+"\n", encoding="utf-8")
print("roots:", len(roots), "direct call sites:", sum(map(len,callers.values())), "function candidates:",len(focus))
