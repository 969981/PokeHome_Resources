#!/usr/bin/env python3
"""Read-only HOME41 native block registration evidence. Candidates are not proven aliases."""
import csv, hashlib, struct, re, sys
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from audit_home41_save_serializers import Elf,SHA
elf,fde_csv,out=sys.argv[1:]
data=Path(elf).read_bytes()
assert hashlib.sha256(data).hexdigest()==SHA
e=Elf(data); relr,rela=e.relocations()
fde={int(r['rva'],0):int(r['fde_bytes']) for r in csv.DictReader(open(fde_csv,encoding='utf8')) if int(r['fde_bytes'])>0}
d=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);d.skipdata=True
def body(a):
    return list(d.disasm(e.read(a,fde[a]),a)) if a in fde and e.executable(a) else []
def fmt(i):return f'{i.address:08X} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}'
def dump(a):
    ii=body(a)
    return [f'### {a:#x} ({len(ii)} slots)','~~~asm']+[fmt(i) for i in ii]+['~~~']
def ptr(a):
    r=rela.get(a);v=struct.unpack('<Q',e.read(a,8))[0]
    return v if a in relr else r[2] if r and r[0]==1027 else None



targets={0x22867c,0x2286a4,0x228388,0x11a14c,0x54e4e0,0x54db90,0x54dc38,0x54dc74,0x6c208,0x6cb40,0x233050,0x24c50,0x20cc20,0x24c470}
focus=set(targets)|{0x228a90,0x24ed78,0x11b520,0x16fd20,0x24e524}
report=['# HOME41 SaveTick completion and scene handoff','SHA256: '+SHA,'## SaveTick jump table']
for i in range(11):
    v=struct.unpack('<H',e.read(0x634ce0+i*2,2))[0]
    report.append(f'- state {i}: raw offset {v:#x}')
report+=['','## Direct callers']
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str.startswith('#0x') and int(i.op_str[1:],16) in targets]
    if hits:
        report += [f'### caller {a:#x}']+hits
        if n<=0x2000 and any(any('#'+hex(t)==h.split()[-1] for t in targets-{0x54db90,0x54dc38,0x54dc74,0x20cc20}) for h in hits):focus.add(a)
report+=['','## Relocated references']
for slot in sorted(relr|set(rela)):
    try:t=ptr(slot)
    except ValueError:continue
    if t in targets:
        report.append(f'- {slot:#x} -> {t:#x}')
        if t in {0x22867c,0x2286a4,0x6c208,0x24c470}:
            for a in range(slot-0x30,slot+0x38,8):
                try:v=ptr(a)
                except ValueError:continue
                report.append(f'  {a:#x}: {hex(v) if v is not None else "unresolved"}')
                if v in fde and e.executable(v) and fde[v]<=0x1000:focus.add(v)
report+=['','## Complete bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus))
