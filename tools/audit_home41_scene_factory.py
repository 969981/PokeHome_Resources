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






report=['# HOME41 Scene factory and ownership lifecycle','SHA256: '+SHA]
targets={0x6ba90,0x157d8,0x6bb1c,0x6bcec,0x6be00,0x6bf94,0x6bfb0,0x6c1f4,0x166d8,0x167a0,0x6f2b4}
focus=set(targets)|{0x6f650,0x16948,0x10090,0x1029c,0x102b8,0x10310,0x10360,0x16870,0x16874,0x6c208,0x6caa4,0x6cb40}
got=set()
report+=['','## Relocation slots and factory table candidates']
for slot in sorted(relr|set(rela)):
    try:t=ptr(slot)
    except ValueError:continue
    if t in targets:
        report.append(f'- {slot:#x} -> {t:#x}')
        if t in {0x6ba90,0x6bb1c}:
            for a in range(slot-0x40,slot+0x48,8):
                try:v=ptr(a)
                except ValueError:continue
                report.append(f'  {a:#x}: {hex(v) if v is not None else "unresolved"}')
                if v in fde and e.executable(v) and fde[v]<=0x800:focus.add(v)
            got.add(slot)
report+=['','## Direct caller census']
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str.startswith('#0x') and int(i.op_str[1:],16) in targets]
    if hits:
        report += [f'### caller {a:#x}']+hits
        if n<=0x1800 and any('#0x6ba90' in h or '#0x6bb1c' in h or '#0x6bcec' in h or '#0x6be00' in h or '#0x6c1f4' in h for h in hits):focus.add(a)
report+=['','## Complete bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus))
