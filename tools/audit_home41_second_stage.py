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

# Restrict report to exact stage-two functions and lifecycle anchors.
families={0x253e60:'LGPE',0x2555d0:'SWSH',0x1a4290:'BDSP',0x1c6560:'PLA',0x294440:'SV',0x1cae6c:'ZA'}
focus=set(families)|{0x2267b0,0x226d20,0x226f90,0x222870,0x25b6ec,0x2247c0,0x255c80,0x25609c,0x25afd0,0x25b1f8,0x25aa70,0x226420}
report=['# HOME41 second-stage save and baseline lifecycle', 'SHA256: '+SHA,'## Exact stage-two FDE coverage']
for a,name in families.items():
    ii=body(a)
    assert a in fde and len(ii)*4==fde[a] and all(i.address==a+k*4 for k,i in enumerate(ii)),name
    report.append(f'- {name}: {a:#x}..{a+fde[a]:#x}, {len(ii)} instruction slots')
    for i in ii:
        if i.mnemonic in ('bl','blr','b') and (i.mnemonic=='blr' or i.op_str.startswith('#0x')):report.append('  '+fmt(i))
report+=['','## Direct callers of lifecycle anchors']
targets=focus|{0x201ddc,0x2232a0,0x224e80,0x20c840,0x2227d0,0x2204a0,0x2204d0,0x220500}
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str.startswith('#0x') and int(i.op_str[1:],16) in targets]
    if hits:
        report.append(f'### caller {a:#x}')
        report+=hits
        if any('#0x25afd0' in h or '#0x222870' in h or '#0x226d20' in h or '#0x226f90' in h for h in hits) and n<=0x3000:focus.add(a)
report+=['','## SWSH load virtual reverse references']
for slot in sorted(relr):
    try:t=ptr(slot)
    except ValueError:continue
    if t==0x25afd0:
        report.append(f'- slot {slot:#x}, inferred address point {slot-0x40:#x}')
report+=['','## Complete function bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('six stage-two ranges complete; selected',len(focus))
