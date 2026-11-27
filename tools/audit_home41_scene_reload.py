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


# Bounded call and relocation census: direct branch + address point evidence.
targets={0x271718,0x27a2f0,0x6c208,0x271ba4,0x27a1ac,0x274690,0x274640,0x274a10,0x25afd0,0xf1e7c,0x221dc0,0x2221c0,0x224e80,0x225490,0x225930,0x226fe0,0x222470,0x222a70}
focus=set(targets)|{0x24c470,0x27ae98,0x2749d0}
report=['# HOME41 Registry reload and scene lifecycle', 'SHA256: '+SHA,'## Direct callers']
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str.startswith('#0x') and int(i.op_str[1:],16) in targets]
    if hits:
        report += [f'### caller {a:#x}']+hits
        if n<=0x4000:focus.add(a)
report+=['','## Relocated callback/vtable references']
for slot in sorted(relr|set(rela)):
    try:t=ptr(slot)
    except ValueError:continue
    if t in targets:
        report.append(f'- {slot:#x} -> {t:#x}')
        for a in range(slot-0x30,slot+0x38,8):
            try:v=ptr(a)
            except ValueError:continue
            report.append(f'  {a:#x}: {hex(v) if v is not None else "unresolved"}')
            if v in fde and e.executable(v) and fde[v]<=0x1000:focus.add(v)
report+=['','## Scene state jump table']
for idx in range(47):
    v=struct.unpack('<H',e.read(0x625638+2*idx,2))[0]
    report.append(f'- state {idx}: {0x6c2cc+4*v:#x}')
report+=['','## Scene vtable address candidates']
for slot in range(0x7a0b60,0x7a0be8,8):
    try:t=ptr(slot)
    except ValueError:continue
    report.append(f'- {slot:#x}: {hex(t) if t is not None else "unresolved"}')
    if t in fde and e.executable(t):focus.add(t)
report+=['','## Complete bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus))
