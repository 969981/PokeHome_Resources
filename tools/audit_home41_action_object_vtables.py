#!/usr/bin/env python3
"""Read-only HOME 4.1.0 action/exit evidence. Bounded direct paths are not runtime proof."""
import csv
import hashlib
import struct
import sys
from collections import deque
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from audit_home41_save_serializers import Elf, SHA

elf_path, fde_path, report_path = sys.argv[1:]
data = Path(elf_path).read_bytes()
if hashlib.sha256(data).hexdigest() != SHA:
    raise SystemExit("ELF identity mismatch")
elf = Elf(data)
relr, rela = elf.relocations()
with open(fde_path, encoding="utf-8") as f:
    fde = {int(r["rva"], 0): int(r["fde_bytes"]) for r in csv.DictReader(f)
           if int(r["fde_bytes"]) > 0}
dis = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
dis.skipdata = True

def body(a):
    if a not in fde or not elf.executable(a):
        return []
    return list(dis.disasm(elf.read(a, fde[a]), a))

def fmt(i):
    return f"{i.address:08X} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}"

def pointer(a):
    raw = struct.unpack("<Q", elf.read(a, 8))[0]
    if a in relr:
        return raw, raw, "RELR"
    r = rela.get(a)
    if r and r[0] == 1027:
        return raw, r[2], "RELA_RELATIVE"
    return raw, None, "unresolved"

def edges(a):
    for i in body(a):
        if i.mnemonic in ("bl", "b") and i.op_str.startswith("#0x"):
            t = int(i.op_str[1:], 16)
            if t in fde:
                yield i.address, t

report = ["# HOME41 action 4/7 and root exit objects", "", "SHA256: " + SHA,
          "Static evidence only. Table windows are constructor-derived; no UI semantics assumed.",
          "", "## Constructor-derived VTable windows"]
roots = {}
focus = {0x8f154, 0x8f3a4, 0x2566c, 0x8c130, 0x24c50, 0x78f48,
         0x79b08, 0x79048, 0x79c08, 0x6f970, 0x4d87d4, 0x24c470}
for name, base in (("action4", 0x76e648), ("action7", 0x76e7e8)):
    report += ["", "### " + name, "| group | offset | slot | raw | relocation | executable target |",
               "|---|---|---|---|---|---|"]
    for group, start, end in (("primary", 0x10, 0x68), ("ref48", 0x78, 0xa8),
                               ("interface50", 0xb8, 0xd0)):
        for off in range(start, end, 8):
            raw, target, kind = pointer(base + off)
            valid = target is not None and elf.executable(target)
            report.append(f"| {group} | {off-start:#x} | {base+off:#x} | {raw:#x} | {kind} | {hex(target) if valid else '?'} |")
            if valid:
                roots.setdefault(target, []).append(f"{name}.{group}+{off-start:#x}")
                focus.add(target)
    for off in (0x10, 0x78, 0xb8):
        raw, target, kind = pointer(base + off)
        if target is None or not elf.executable(target):
            raise SystemExit(f"unresolved first slot {name} {off:#x}: {kind} {raw:#x}")

report += ["", "## Bounded direct B/BL reachability",
           "Depth 6; at most 600 visited FDEs per root. No indirect call resolution. Missing path is inconclusive."]
sinks = {0x24c470, 0x4d87d4, 0x8ccd0, 0x24c50}
for root in sorted(set(roots) | {0x78f48, 0x79b08}):
    report.append(f"### {root:#x} " + ", ".join(roots.get(root, [])))
    q = deque([(root, [])])
    seen = {root}
    hits = set()
    while q:
        a, path = q.popleft()
        if a in sinks and a not in hits:
            hits.add(a)
            report.append("path: " + hex(root) + "".join(f" --{pc:#x}--> {t:#x}" for pc,t in path))
            focus.update(t for _,t in path)
        if len(path) >= 6:
            continue
        for pc,t in edges(a):
            if t not in seen and len(seen) < 600:
                seen.add(t)
                q.append((t, path+[(pc,t)]))
    report.append(f"Visited {len(seen)}; cap reached: {len(seen)>=600}; sink hits: {len(hits)}")
    # One-hop candidates for manual inspection, not identity assertions.
    for pc,t in edges(root):
        report.append(f"- direct {pc:#x} -> {t:#x}")
        focus.add(t)

report += ["", "## Function bodies"]
for a in sorted(focus):
    ii = body(a)
    report.append(f"### {a:#x} ({len(ii)} slots)")
    if not ii:
        report.append("No exact FDE; unresolved.")
        continue
    if len(ii)>4096:
        report.append("Body exceeds report cap; omitted.")
        continue
    report += ["~~~asm"] + [fmt(i) for i in ii] + ["~~~"]
out = Path(report_path)
out.parent.mkdir(parents=True, exist_ok=True)
out.write_text("\n".join(report)+"\n", encoding="utf-8")
print(f"Resolved {len(roots)} distinct executable slots; {len(focus)} function candidates")
