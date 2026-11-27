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







report=['# HOME41 linked editor child ownership and Model root','SHA256: '+SHA]
targets={0x157d8,0x160b0,0x158b0,0x6d750,0x74844,0x74944,0x8c130,0x87f60,0x6d930,0x6d89c}
focus=set(targets)|{0x6c208,0x74a30}
got=set()
report+=['','## Relocations to Model root and lifecycle targets']
for slot in sorted(relr|set(rela)):
    try:t=ptr(slot)
    except ValueError:continue
    if t==0x7e2080:got.add(slot)
    if t==0x7e2080 or t in targets:report.append(f'- {slot:#x} -> {t:#x}')
report+=['','## Direct callers and Model root references']
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str.startswith('#0x') and int(i.op_str[1:],16) in targets]
    pages={}
    for i in ii:
        op=i.op_str
        if i.mnemonic=='adrp':
            r,p=op.split(', ');pages[r]=int(p[1:],16)
        elif i.mnemonic in ('ldr','str','add'):
            m=re.match(r'(\w+), \[(\w+)(?:, #(0x[0-9a-f]+|\d+))?\]$',op) if i.mnemonic!='add' else re.match(r'(\w+), (\w+), #(0x[0-9a-f]+|\d+)$',op)
            if m:
                dst,base,off=m.groups()
                if base in pages and pages[base]+int(off or '0',0) in got|{0x7e2080}:
                    hits.append('ROOT '+fmt(i))
                if i.mnemonic!='str':pages.pop(dst,None)
        elif i.mnemonic in ('bl','blr'):
            pages={r:p for r,p in pages.items() if r in ('x19','x20','x21','x22','x23','x24','x25','x26','x27','x28')}
        elif op and re.match(r'x\d+,',op) and not i.mnemonic.startswith(('st','cb','tb','b','cmp','tst')):
            pages.pop(op.split(',')[0],None)
    if hits:
        report += [f'### caller {a:#x}']+hits
        if n<=0x1800 and (len(focus)<85 or any('#0x157d8' in h or '#0x160b0' in h for h in hits)):focus.add(a)
report+=['','## Complete bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus))
