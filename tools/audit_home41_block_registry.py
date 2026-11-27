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
focus={0x2843c0,0x1e8120,0x1bae30,0x27b040,0x27ad68,0x27af70,0x27b4fc,0x271260,0x297c70,0x1f3c70,0x274690,0x1b45b0}
ranges=[('SV',0x280000,0x2a1400,{0x9f0,0x970,0x990}),('ZA',0x1e0000,0x200000,{0x9c0,0x940,0x960}),('PLA',0x1b0000,0x1c8000,{0x54f70,0x54f90,0x54668,0x54758}),('SWSH',0x250000,0x280000,{0x5e7be0,0x230,0x240,0x268})]
report=['# HOME41 native block registration audit','SHA256: '+SHA,'Candidate offsets may belong to unrelated objects. No runtime proof.']
cached={}
for name,lo,hi,fields in ranges:
    report+=['',f'## {name} field candidates']
    for a,n in fde.items():
        if not lo<=a<hi:continue
        ii=body(a)
        hits=[i for i in ii if any(re.search(r'#'+hex(v)+r'\b',i.op_str) for v in fields)]
        # PLA large offsets synthesized by MOV/MOVK, focus relevant registry region
        if name=='PLA' and 0x1ba000<=a<0x1bc000:
            hits += [i for i in ii if re.search(r'#0x(?:4f70|4f90|4668|4758|54f|546|547)\b',i.op_str)]
        if not hits:continue
        if name=='SWSH' and not (len(hits)>=2 or any('5e7be0' in i.op_str for i in hits)):continue
        report += [f'### candidate {a:#x} ({n} bytes)']+['- '+fmt(i) for i in hits[:30]]
        if len(hits)>=2 or (name!='SWSH' and any(i.mnemonic.startswith(('str','stp')) for i in hits)):
            if n<=0x2200:focus.add(a)
        # Retain all relevant local call targets for candidate register/lookup.
        cached[a]=ii
report+=['','## SWSH / PLA provider worker vtables']
for start in [0x7806d0,0x7807a0,0x77aae8]:
    for a in range(start,start+0x68,8):
        t=ptr(a);report.append(f'- {a:#x}: {hex(t) if t is not None else "unresolved"}')
        if t in fde and e.executable(t):focus.add(t)
report+=['','## Complete candidate bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x3000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True);Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus),'field candidates',len(cached))
