#!/usr/bin/env python3
"""Read-only original ELF callback/provider evidence, plus current BDSP buffer validator."""
import argparse, csv, hashlib, json, struct, bisect, re
from pathlib import Path
from audit_home41_save_serializers import Elf, SHA, direct_branch
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

SIZES=[0x4,0x7d0,0x3e80,0xfa0,0x40,0x4,0x4,0xbb80,0x2ed4,0x8,0x812,0x64a,0x64c80,0x7b4,0x30b8,0x18814,0x1b8,0x134,0x1a0,0x2c0,0x386f4,0x64,0x1ad80,0x10,0x3c0,0x3570,0x30,0xf8,0x400,0x170c,0x318]
OFFSETS=[sum(SIZES[:i]) for i in range(31)]
TOTAL=sum(SIZES)
MD5=OFFSETS[23]
BOX=OFFSETS[12]
def validate(data):
    result={'length':len(data),'expected_length':TOTAL,'valid_length':len(data)==TOTAL}
    if not result['valid_length']:
        return result
    tmp=bytearray(data)
    stored=bytes(tmp[MD5:MD5+16]); tmp[MD5:MD5+16]=bytes(16)
    actual=hashlib.md5(tmp).digest()
    result.update(md5_valid=stored==actual,stored_md5=stored.hex(),computed_md5=actual.hex(),
                  sha256=hashlib.sha256(data).hexdigest(),
                  box_offset=BOX,box_length=SIZES[12],
                  segments=[{'index':i,'offset':o,'size':n,'sha256':hashlib.sha256(data[o:o+n]).hexdigest()} for i,(o,n) in enumerate(zip(OFFSETS,SIZES))])
    return result
def compare(a,b):
    if len(a)!=TOTAL or len(b)!=TOTAL:raise ValueError('current serialized buffers only')
    slots=[]
    for i in range(1200):
        o=BOX+i*0x158
        if a[o:o+0x158]!=b[o:o+0x158]:slots.append({'box':i//30+1,'slot':i%30+1,'offset':o})
    return {'changed_segments':[i for i,(o,n) in enumerate(zip(OFFSETS,SIZES)) if a[o:o+n]!=b[o:o+n]],'changed_slot_bytes':slots,
            'note':'Byte differences only; not decoded Pokémon identity or release legality.'}
def tests():
    assert len(SIZES)==31 and TOTAL==0xef0a4 and MD5==0xe9818 and BOX==0x14ef4
    assert SIZES[12]==40*30*0x158
    a=bytearray(TOTAL);a[MD5:MD5+16]=hashlib.md5(a).digest()
    assert validate(a)['md5_valid']
    b=bytearray(a);b[BOX+31*0x158]=1
    assert not validate(b)['md5_valid']
    assert not validate(b[:-1])['valid_length']
    b[MD5:MD5+16]=bytes(16);b[MD5:MD5+16]=hashlib.md5(b).digest()
    assert validate(b)['md5_valid']
    c=compare(a,b);assert c['changed_segments']==[12,23] and c['changed_slot_bytes']==[{'box':2,'slot':2,'offset':BOX+31*0x158}]
    print('7 synthetic BDSP assertions passed; no actual save tested')

def audit(elf,fde_path,outpath):
    b=Path(elf).read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
    e=Elf(b)
    fde={int(r['rva'],0):int(r['fde_bytes']) for r in csv.DictReader(open(fde_path,encoding='utf-8')) if int(r['fde_bytes'])>0}
    starts=sorted(fde)
    d=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    d.skipdata=True
    def owner(a):
        i=bisect.bisect_right(starts,a)-1
        return starts[i] if i>=0 and a<starts[i]+fde[starts[i]] else None
    def body(a):
        n=fde.get(a,0); return list(d.disasm(e.read(a,n),a)) if n and e.executable(a) else []
    def fmt(i):return f'{i.address:08X} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}'
    def dump(a):
        ins=body(a)
        return [f'### {a:#x} ({fde.get(a,0)} bytes; {len(ins)} slots)','~~~asm']+[fmt(i) for i in ins]+['~~~']
    targets={0x1bb820,0x1bb4dc,0x1bb5e4,0x1bb8e4,0x1b1fcc,0x25b448,0x25b5c0,0x271d20,0x271ed4,0x271f38,
             0x25d670,0x25d3c4,0x25d528,0x29c3ec,0x1fa24c,0x2a094c,0x1ff22c,0x29f060,0x1fce00,0x4fc460,0x4fc5dc}
    ranges=[(0x29a000,0x29c3ec,'SV owner candidates'),(0x1f8000,0x1fa24c,'ZA owner candidates'),(0x26f000,0x271d20,'SWSH owner candidates')]
    out=['# HOME41 original ELF callback and provider audit',f'SHA256: {SHA}','',
         'Candidate matching is not type proof. No live operations.','## Focused original FDEs']
    for a in sorted(targets):out+=dump(a)
    selected=set()
    for lo,hi,label in ranges:
        out+=['',f'## {label}']
        for a in starts:
            if not lo<=a<hi:continue
            ii=body(a)
            hits=[i for i in ii if re.search(r'#0x(?:380|388|400|408|410|418|480|488|490|498|4a0|4a8|4b0|4b8|4c0|4c8)\b',i.op_str)]
            if not hits:continue
            selected.add(a)
            out += [f'### candidate {a:#x} ({len(hits)} matching instructions)']
            for i in hits:out.append('- '+fmt(i))
            if fde[a]<=0x2000:out+=dump(a)
    # Exact direct B/BL references to filesystem wrappers.
    sinks={0x4dc198,0x4dc190,0x4dd758,0x5f7070,0x5f7080,0x5f7720}
    direct={}
    for p in e.loads:
        if not p[1]&1:continue
        raw=b[p[2]:p[2]+p[5]]
        for j in range(0,len(raw)-3,4):
            a=p[3]+j;w=struct.unpack_from('<I',raw,j)[0]
            if w&0x7c000000!=0x14000000:continue
            br=direct_branch(a,w);t=int(br['target'],16)
            if t in sinks:
                o=owner(a)
                direct.setdefault(t,[]).append((a,o))
    out+=['','## Direct filesystem calls by owning FDE']
    writers=set()
    for t,hits in sorted(direct.items()):
        out.append(f'### sink {t:#x}: {len(hits)}')
        for a,o in hits:
            out.append(f'- {a:#x} FDE {hex(o) if o is not None else "unknown"}')
            if o is not None and (0x1e0000<=o<0x200000 or 0x260000<=o<0x2b0000 or 0x1b0000<=o<0x1c8000):
                writers.add(o)
    out+=['','## Game-range direct writer bodies']
    for a in sorted(writers):
        if fde[a]<=0x3000:out+=dump(a)
    # Follow concrete callback entrypoints and second-level worker / writer callers.
    extra={0x29dbe0,0x1fb8b8,0x1f3ef8,0x1ff6e8,0x1bb2f8,0x4fc210,0x4fc278,0x274300,0x2978e0,0x1f3650,0x1b41b0,0x2717bc}
    follow={0x274120,0x297700,0x1f3320,0x1b3fd0,0x1f3ef8,0x1ff6e8}
    callrefs={}
    for p in e.loads:
        if not p[1]&1:continue
        raw=b[p[2]:p[2]+p[5]]
        for j in range(0,len(raw)-3,4):
            a=p[3]+j;w=struct.unpack_from('<I',raw,j)[0]
            if w&0x7c000000!=0x14000000:continue
            br=direct_branch(a,w);t=int(br['target'],16)
            if t in follow:callrefs.setdefault(t,[]).append((a,owner(a)))
    out+=['','## Callback and concrete file writer incoming edges']
    for t,sites in sorted(callrefs.items()):
        out.append(f'### Target {t:#x}')
        for a,o in sites:
            out.append(f'- site {a:#x}, owner {hex(o) if o is not None else "unknown"}')
            if o is not None:extra.add(o)
    relr,rela=e.relocations()
    # Read the second-level ZA worker address point and analogous SV table neighborhood.
    out+=['','## Nested worker vtable candidates']
    for start,end in [(0x77c808,0x77c880),(0x781688,0x781700)]:
        for a in range(start,end,8):
            raw=struct.unpack('<Q',e.read(a,8))[0];rr=rela.get(a)
            t=raw if a in relr else rr[2] if rr and rr[0]==1027 else None
            out.append(f'- {a:#x}: raw {raw:#x}, target {hex(t) if t is not None else "unresolved"}')
            if t in fde and e.executable(t):extra.add(t)
    # Add directly called family-local helpers from callback entries and concrete writer owners.
    for a in list(extra):
        for i in body(a):
            if i.mnemonic not in ('bl','b'):continue
            m=re.fullmatch(r'#(0x[0-9a-f]+)',i.op_str)
            if not m:continue
            t=int(m[1],16)
            if t in fde and (0x1b0000<=t<0x1c8000 or 0x1e0000<=t<0x200000 or 0x260000<=t<0x2b0000):
                extra.add(t)
    out+=['','## Additional complete FDEs']
    for a in sorted(extra):
        if a in fde and fde[a]<=0x3000:out+=dump(a)
    Path(outpath).parent.mkdir(parents=True,exist_ok=True)
    Path(outpath).write_text('\n'.join(out)+'\n',encoding='utf8')
    print('focused',len(targets),'owner candidates',len(selected),'game-range writer FDEs',len(writers))

if __name__=='__main__':
    p=argparse.ArgumentParser()
    p.add_argument('--self-test',action='store_true')
    p.add_argument('--audit',nargs=3,metavar=('ELF','FDE_CSV','REPORT'))
    p.add_argument('--validate',type=Path)
    p.add_argument('--compare',type=Path)
    a=p.parse_args()
    if a.self_test:tests()
    if a.audit:audit(*a.audit)
    if a.validate:
        data=a.validate.read_bytes()
        r=validate(data)
        if a.compare:
            other=a.compare.read_bytes()
            r['comparison_input_validation']=validate(other)
            r['comparison']=compare(data,other)
        print(json.dumps(r,indent=2))
        if not r.get('md5_valid',False) or (a.compare and not r['comparison_input_validation'].get('md5_valid',False)):raise SystemExit(1)
