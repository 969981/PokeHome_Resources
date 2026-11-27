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





report=['# HOME41 scene state graph and transition descriptor evidence','SHA256: '+SHA,'## Scene state entry table']
targets={0x16f740,0x6bcec,0x16fd20,0x31da0,0x31e04,0x28ec0,0x32134,0x6c208,0x6d2b4,0x6d4a0,0x6d6b0,0x2232a0,0x220500,0x119960}
focus=set(targets)|{0x6caa4,0x6cb40,0x6ccb0,0x6ce20,0x6ce60,0x6cfe0,0x6d150,0x6d330,0x6d550,0x6d750,0x6d89c,0x6d930,0x6daa0,0x6dbfc,0x6dc90,0x6dde0,0x6df90,0x6e0f0,0x6e270,0x6e3e0,0x6e550,0x6e6a0,0x6e7f0}
for i in range(47):
    a=0x6c2cc+4*struct.unpack('<H',e.read(0x625638+2*i,2))[0]
    report.append(f'- {i}: {a:#x}')
report+=['','## Relocated object slots']
cells=set()
for slot in sorted(relr|set(rela)):
    try:t=ptr(slot)
    except ValueError:continue
    if t in {0x16f740,0x16fd20,0x6c208,0x119960}:
        report.append(f'- {slot:#x} -> {t:#x}')
        for a in range(slot-0x60,slot+0x38,8):
            try:v=ptr(a)
            except ValueError:continue
            report.append(f'  {a:#x}: {hex(v) if v is not None else "unresolved"}')
            if v in fde and e.executable(v) and fde[v]<=0x400:focus.add(v)
        cells.add(slot)
report+=['','## Table header GOT candidates']
got=set()
for slot in sorted(relr|set(rela)):
    try:t=ptr(slot)
    except ValueError:continue
    if t is not None and any(v-0xc0<=t<=v for v in cells):
        report.append(f'- {slot:#x} -> {t:#x}')
        got.add(slot)
report+=['','## Direct callers and GOT instruction candidates']
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str.startswith('#0x') and int(i.op_str[1:],16) in targets-{0x220500}]
    # Local same-register page + LDR tracking; bounded candidate detection.
    pages={}
    for i in ii:
        op=i.op_str
        if i.mnemonic=='adrp':
            r,p=op.split(', ');pages[r]=int(p[1:],16)
        elif i.mnemonic=='ldr':
            m=re.match(r'(\w+), \[(\w+)(?:, #(0x[0-9a-f]+|\d+))?\]$',op)
            if m:
                dst,base,off=m.groups()
                if base in pages and pages[base]+int(off or '0',0) in got:
                    hits.append('GOT '+fmt(i))
                pages.pop(dst,None)
        elif i.mnemonic in ('bl','blr'):
            pages={r:p for r,p in pages.items() if r in ('x19','x20','x21','x22','x23','x24','x25','x26','x27','x28')}
        elif op and re.match(r'x\d+,',op) and not i.mnemonic.startswith(('st','cb','tb','b','cmp','tst')):
            pages.pop(op.split(',')[0],None)
    if hits:
        report += [f'### caller {a:#x}']+hits
        if n<=0x1800 and (any('GOT ' in h for h in hits) and 0x60000<=a<=0x180000 and len(focus)<100):focus.add(a)
report+=['','## Helper jump tables']
for table,base,n in [(0x625696,0x6d2ec,4),(0x62569a,0x6d4e8,4),(0x62569e,0x6d6dc,11)]:
    report.append(f'- table {table:#x}: '+', '.join(f'{i}:{base+4*v:#x}' for i,v in enumerate(e.read(table,n))))
focus.update([0x16ee90,0x16fb20,0x16fc20,0x2236f0,0x200180,0x16f86c,0x166d8,0x32a80,0x33648,0x2c4b4c,0x2c4c48,0x2c4c58,0x2c4c60,0x2c4c50])
report+=['','## Complete bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus))
