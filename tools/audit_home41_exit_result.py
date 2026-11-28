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









report=['# HOME41 exit result producers and virtual adapters','SHA256: '+SHA]
focus={0x24b48,0x24c50,0x253bc,0x6dde0,0x6df90,0x6d930,0x6d89c,0xdfce0,0xe0530,0xe0dd0,0x8c130,0x8ccd0,0x8cb68,0x8cc18,0x253f0,0x258d0,0x258cc,0x258d4,0x258d8,0x258dc,0x258e0,0x26fdc,0x26fe0,0x6c208,0x6d750,0xc8098,0x89390,0x8d140}
targets={0x8cb68,0x8cc18,0x253f0,0x258d0,0x26fdc,0x26fe0}
report+=['','## Direct call and candidate field stores']
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str.startswith('#0x') and int(i.op_str[1:],16) in targets]
    stores=[fmt(i) for i in ii if i.mnemonic.startswith(('str','stur','stp')) and re.search(r'#0x1a4\]',i.op_str)]
    if hits or stores:
        report += [f'### candidate {a:#x}']+hits+stores
        if n<=0x2000 and (hits or (0x74000<=a<0x100000 and stores)):focus.add(a)
report+=['','## Owner exit table']
for i,v in enumerate(e.read(0x62592e,4)):report.append(f'- state {i}: {0x8cd84+4*v:#x}')
report+=['','## Producer vtable references']
for slot in sorted(relr|set(rela)):
    try:t=ptr(slot)
    except ValueError:continue
    if t in {0xdf2f0,0xe1a70,0xf1b70,0x253f0,0x24c50,0x8ccd0}:
        report.append(f'- {slot:#x} -> {t:#x}')
report+=['','## Producer branch tables and resource references']
for a in [0xdf2f0,0xe1a70,0x24c50,0x24b48,0x6dde0,0x6df90]:
    report.append(f'### {a:#x}')
    ii=body(a);pages={}
    for i in ii:
        if i.mnemonic=='adrp':
            reg,p=i.op_str.split(', ');pages[reg]=int(p[1:],16)
        elif i.mnemonic=='add':
            m=re.match(r'(\w+), (\w+), #(0x[0-9a-f]+|\d+)
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus))
,i.op_str)
            if m:
                dst,base,off=m.groups()
                if base in pages:
                    addr=pages[base]+int(off,0)
                    if 0x600000<=addr<0x625000:
                        try:
                            raw=e.read(addr,100).split(bytes([0]))[0]
                            if raw and all(32<=v<127 for v in raw):report.append(fmt(i)+' -> '+repr(raw))
                        except ValueError:pass
                pages.pop(dst,None)
        elif i.mnemonic in ('bl','blr'):pages.clear()
        elif i.op_str and re.match(r'x\d+,',i.op_str) and not i.mnemonic.startswith(('st','cb','tb','b','cmp','tst')):pages.pop(i.op_str.split(',')[0],None)
report+=['','## Complete bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus))
