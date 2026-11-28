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








report=['# HOME41 editor action dispatch and child scheduler','SHA256: '+SHA,'## 26 action routes']
ii=body(0x8c130)
targets={0x4d87d4,0x8c130,0x8ccd0,0xc81a0,0x8d584}
focus=set(targets)|{0x87f60,0x8d190,0x6d750,0xc8098,0xc81b8,0x248f0}
entries=[0x8c1f0+4*struct.unpack('<H',e.read(0x6258fa+2*i,2))[0] for i in range(26)]
for i,a in enumerate(entries):
    end=min([v for v in entries if v>a]+[0x8cb68])
    hits=[fmt(x) for x in ii if a<=x.address<end and x.mnemonic in ('bl','b')]
    report += [f'### action {i+1}: {a:#x}']+hits[:18]
    for x in ii:
        if a<=x.address<end and x.mnemonic=='bl' and x.op_str.startswith('#0x'):
            t=int(x.op_str[1:],16)
            if 0x8cc00<=t<0x92000:focus.add(t)
report+=['','## Scheduler neighborhood candidates']
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str.startswith('#0x') and int(i.op_str[1:],16) in targets]
    if hits:
        report += [f'### caller {a:#x}']+hits
        if n<=0x2000 and any('#0x8d584' in h or '#0xc81a0' in h for h in hits):focus.add(a)
    if 0x4d7000<=a<0x4d9900:
        h=[fmt(i) for i in ii if i.mnemonic.startswith(('ldr','str','ldp','stp')) and re.search(r'#0x(?:60|61|62|68|70|78|80|88)\]',i.op_str)]
        if h:
            report += [f'### scheduler candidate {a:#x}']+h
            if n<=0x2000:focus.add(a)
report+=['','## Complete bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus))
