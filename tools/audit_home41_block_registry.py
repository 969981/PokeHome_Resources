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
report+=['','## Registry address points and constant cells']
for cell in [0x7a3150,0x7a2688,0x7a23e8,0x7a32a0,0x7a25d8,0x7a2f28,0x7a2f30]:
    t=ptr(cell)
    report.append(f'- cell {cell:#x}, target {hex(t) if t is not None else "unresolved"}')
    if t is not None:
        try:report.append(f'  target raw bytes: {e.read(t,32).hex()}')
        except ValueError:pass
        if cell in [0x7a32a0,0x7a25d8,0x7a2f28]:
            v=t+0x10
            for off in range(0,0x60,8):
                a=ptr(v+off);report.append(f'  vptr {v:#x}+{off:#x}: {hex(a) if a is not None else "unresolved"}')
                if a in fde and e.executable(a):focus.add(a)
focus.update([0x286180,0x284180,0x1ea550,0x1e9e90,0x1bc700,0x1bac00,0x1b145c,0x1bde6c,0x270a20,0x273654,0x274c00,0x274880,0x25b280,0x27a6d0,0x27127c,0x1b19ac,0x1c44a8])
report+=['','## Reverse vtable lookup']
for wanted in [0x1bae30,0x283dd0,0x1e7ff0]:
    for slot in sorted(relr):
        try:t=ptr(slot)
        except ValueError:continue
        if t!=wanted:continue
        report.append(f'- target {wanted:#x} at slot {slot:#x}')
        for a in range(slot-0x40,slot+0x30,8):
            try:t=ptr(a)
            except ValueError:continue
            report.append(f'  {a:#x}: {hex(t) if t is not None else "unresolved"}')
            if t in fde and e.executable(t):focus.add(t)
focus.update([0x25aa20,0x29d88c,0x1fb510,0x2981e0,0x29da38,0x1fb6e0,0x1c43d4,0x1c44b0,0x1b1b84,0x1bb1b8,0x1bb1ec,0x1bb248,0x1bb258,0x1f4260,0x1c45dc,0x1c46a8,0x29be30,0x29b9a4,0x25ad90,0x25c080,0x1b4930])
report+=['','## Complete candidate bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x3000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True);Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('selected',len(focus),'field candidates',len(cached))
