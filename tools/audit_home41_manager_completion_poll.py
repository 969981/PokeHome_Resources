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




report=['# HOME41 dispatch manager callback producer and completion poll audit','SHA256: '+SHA]
focus={0x221dc0,0x221ff8,0x2221c0,0x54db70,0x54db88,0x11a2e0,0x11a14c,0x11a214,0x6c208,0x6cb40}
factories=[];polls=[]
for a,n in sorted(fde.items()):
    if not e.executable(a):continue
    ii=body(a)
    # GOT page + exact scaled LDR; this is an instruction-pattern candidate, not receiver proof.
    haspage=any(i.mnemonic=='adrp' and i.op_str.endswith('#0x7a1000') for i in ii)
    hascell=any(i.mnemonic=='ldr' and re.search(r'#0x7b8\]',i.op_str) for i in ii)
    if haspage and hascell:
        factories.append(a)
        report += [f'### manager table candidate {a:#x}']
        for i in ii:
            if (i.mnemonic.startswith(('str','stp','stur')) and re.search(r'#0x(?:120|128|130|138|1a0|1a8|1b0|1b8|220|228|230|238|2a0|2a8|2b0|2b8)\]',i.op_str)) or (i.mnemonic=='ldr' and '#0x7b8]' in i.op_str) or (i.mnemonic=='adrp' and i.op_str.endswith('#0x7a1000')):report.append(fmt(i))
        if n<=0x1600:focus.add(a)
    hits=[fmt(i) for i in ii if i.mnemonic in ('bl','b') and i.op_str in ('#0x54db70','#0x2221c0')]
    if hits:
        polls.append(a);report += [f'### completion poll caller {a:#x}']+hits
        if n<=0x1800:focus.add(a)
report += ['','## Candidate counts',f'- GOT page/cell pattern: {len(factories)}',f'- completion poll direct callers: {len(polls)}','## Complete bodies']
for a in sorted(focus):
    if a in fde and fde[a]<=0x4000:report+=dump(a)
Path(out).parent.mkdir(parents=True,exist_ok=True)
Path(out).write_text('\n'.join(report)+'\n',encoding='utf8')
print('factory candidates',len(factories),'poll callers',len(polls))
