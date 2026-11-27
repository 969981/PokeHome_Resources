#!/usr/bin/env python3
"""Read-only HOME 4.1.0 ELF evidence extraction; no device or network access."""
import argparse
import hashlib
import json
import shutil
import struct
import subprocess
from pathlib import Path

SHA = 'bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a'
FUNCTIONS = {0x255970: (0x255C74, 'swsh_rebuild'), 0x1C6790: (0x1C69BC, 'pla_rebuild'),
             0x294BB0: (0x295384, 'sv_rebuild'), 0x1A1700: (0x1A17A8, 'bdsp_segments'),
             0x1A4630: (0x1A49EC, 'bdsp_rebuild'), 0x2A09E0: (0x2A0AE8, 'sv_child_ctor'),
             0x1FF2C0: (0x1FF3C8, 'za_child_ctor')}
FUNCTIONS.update({0x19F4CC: (0x1A0BB8, 'bdsp_registry_ctor'),
                  0x1A17B0: (0x1A1864, 'bdsp_deserialize'),
                  0x1A2E18: (0x1A2EA0, 'bdsp_box_ctor'),
                  0x1A0ED0: (0x1A0FE0, 'bdsp_box_allocate'),
                  0x2542D0: (0x2546C8, 'lgpe_rebuild'),
                  0x1CA8D0: (0x1CAE6C, 'za_rebuild')})
TABLES = {'sv_primary': (0x7815B8, 0x781630), 'sv_ref': (0x781630, 0x781660),
          'sv_third_window': (0x781660, 0x781690), 'za_primary': (0x77C738, 0x77C7B0),
          'za_ref': (0x77C7B0, 0x77C7E0), 'za_third_window': (0x77C7E0, 0x77C810)}


def relr_offsets(words):
    cursor = None
    for word in words:
        if not word & 1:
            if word & 7:
                raise ValueError('unaligned RELR address')
            yield word
            cursor = word + 8
        else:
            if cursor is None:
                raise ValueError('bitmap before address')
            for i in range(63):
                if word & (2 << i):
                    yield cursor + 8*i
            cursor += 63*8


def direct_branch(pc, word):
    if word & 0x7c000000 != 0x14000000:
        return None
    imm = word & 0x03ffffff
    if imm & 0x02000000:
        imm -= 0x04000000
    return {'pc': hex(pc), 'opcode': hex(word), 'kind': 'BL' if word & 0x80000000 else 'B',
            'target': hex(pc + imm*4)}


class Elf:
    def __init__(self, data):
        self.data = data
        if data[:6] != b'\x7fELF\x02\x01' or struct.unpack_from('<H', data, 18)[0] != 183:
            raise ValueError('expected AArch64 little-endian ELF64')
        phoff = struct.unpack_from('<Q', data, 32)[0]
        entsize, count = struct.unpack_from('<HH', data, 54)
        self.ph = [struct.unpack_from('<IIQQQQQQ', data, phoff+i*entsize) for i in range(count)]
        self.loads = [p for p in self.ph if p[0] == 1]
        self.tags = {}
        for p in self.ph:
            if p[0] == 2:
                for i in range(p[2], p[2]+p[5], 16):
                    tag, val = struct.unpack_from('<qQ', data, i)
                    if tag == 0:
                        break
                    self.tags[tag] = val

    def read(self, va, size):
        for p in self.loads:
            if p[3] <= va and va+size <= p[3]+p[5]:
                off = p[2]+va-p[3]
                result = self.data[off:off+size]
                if len(result) == size:
                    return result
        raise ValueError(f'not file-backed: {va:#x}+{size:#x}')

    def executable(self, va):
        return any(p[1]&1 and p[3] <= va < p[3]+p[5] for p in self.loads)

    def relocations(self):
        t = self.tags
        relr = set()
        rela = {}
        if 36 in t:
            if t[37] != 8 or t[35] % 8:
                raise ValueError('unexpected RELR format')
            raw = self.read(t[36], t[35])
            relr = set(relr_offsets(x[0] for x in struct.iter_unpack('<Q', raw)))
        if 7 in t:
            if t[9] != 24 or t[8] % 24:
                raise ValueError('unexpected RELA format')
            for off, info, addend in struct.iter_unpack('<QQq', self.read(t[7], t[8])):
                rela[off] = (info & 0xffffffff, info >> 32, addend)
        return relr, rela


def self_test():
    assert list(relr_offsets([0x1000, 1 | 2 | 8, 0x2000, 3])) == [0x1000, 0x1008, 0x1018, 0x2000, 0x2008]
    assert list(relr_offsets([0x1000, 1, 3])) == [0x1000, 0x1200]
    assert direct_branch(0x100, 0x94000002)['target'] == '0x108'
    assert direct_branch(0x100, 0x17ffffff)['target'] == '0xfc'
    assert direct_branch(0x100, 0xd65f03c0) is None
    print('5 synthetic assertions passed; original ELF not used')


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('elf', type=Path, nargs='?')
    p.add_argument('--out', type=Path, default=Path('home41_serializer_evidence'))
    p.add_argument('--objdump', default='llvm-objdump')
    p.add_argument('--self-test', action='store_true')
    a = p.parse_args()
    if a.self_test:
        self_test()
        return
    if a.elf is None:
        p.error('ELF required unless --self-test')
    data = a.elf.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != SHA:
        raise SystemExit(f'wrong ELF SHA256: {digest}')
    e = Elf(data)
    relr, rela = e.relocations()
    a.out.mkdir(parents=True, exist_ok=True)
    report = {'sha256': digest, 'relr_count': len(relr), 'rela_count': len(rela), 'tables': {}, 'functions': []}
    box_cell = 0x7A2258
    box_raw = struct.unpack('<Q', e.read(box_cell, 8))[0]
    box_rela = rela.get(box_cell)
    box_base = box_raw if box_cell in relr else (box_rela[2] if box_rela and box_rela[0] == 1027 else None)
    report['bdsp_box_vtable_cell'] = {'rva': hex(box_cell), 'raw': hex(box_raw), 'relr': box_cell in relr, 'rela': box_rela}
    report['bdsp_size_table_raw'] = [hex(x[0]) for x in struct.iter_unpack('<Q', e.read(0x632828, 16*8))]
    tables = dict(TABLES)
    if box_base is not None:
        tables['bdsp_box_primary_window'] = (box_base+0x10, box_base+0x60)
    for label, (start, end) in tables.items():
        rows = []
        for va in range(start, end, 8):
            raw = struct.unpack('<Q', e.read(va, 8))[0]
            r = rela.get(va)
            target = raw if va in relr else (r[2] if r and r[0] == 1027 else None)
            rows.append({'slot_rva': hex(va), 'raw': hex(raw), 'relr': va in relr, 'rela': r,
                         'relative_target_rva': hex(target) if target is not None else None,
                         'target_executable': e.executable(target) if target is not None else None})
        report['tables'][label] = rows
    objdump = shutil.which(a.objdump)
    for start, (end, label) in FUNCTIONS.items():
        code = e.read(start, end-start)
        (a.out/(label+'.bin')).write_bytes(code)
        branches = [b for i, (word,) in enumerate(struct.iter_unpack('<I', code))
                    if (b := direct_branch(start+4*i, word))]
        row = {'name': label, 'start': hex(start), 'end_exclusive': hex(end), 'bytes': len(code),
               'sha256': hashlib.sha256(code).hexdigest(), 'direct_branches': branches}
        if objdump:
            r = subprocess.run([objdump, '-d', '--start-address='+hex(start), '--stop-address='+hex(end),
                                str(a.elf)], capture_output=True, text=True, check=False)
            (a.out/(label+'.asm')).write_text(r.stdout, encoding='utf-8')
            row['objdump_returncode'] = r.returncode
            if r.stderr:
                row['objdump_stderr'] = r.stderr
        else:
            row['objdump_unavailable'] = True
        report['functions'].append(row)
    (a.out/'evidence.json').write_text(json.dumps(report, indent=2)+'\n', encoding='utf-8')
    print(f'Wrote raw windows and relocation evidence to {a.out}; no semantic or runtime closure claimed')



import csv
from collections import deque
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from capstone.arm64_const import ARM64_OP_IMM

def expanded(elf_path, fde_path, report_path):
    data = Path(elf_path).read_bytes()
    assert hashlib.sha256(data).hexdigest() == SHA
    e=Elf(data)
    relr,rela=e.relocations()
    fde={int(r['rva'],0):int(r['fde_bytes']) for r in csv.DictReader(open(fde_path,encoding='utf-8')) if int(r['fde_bytes'])>0}
    d=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    d.detail=True
    def ptr(a):
        raw=struct.unpack('<Q',e.read(a,8))[0]
        r=rela.get(a)
        if a in relr: return raw,'RELR'
        if r and r[0]==1027: return r[2],'RELA_RELATIVE'
        return None,'unresolved raw='+hex(raw)
    def insns(a,n):
        return list(d.disasm(e.read(a,n),a))
    def body(a):
        n=fde.get(a)
        return insns(a,n) if n and e.executable(a) else []
    def fmt(i): return f'{i.address:08X}  {i.bytes.hex()}  {i.mnemonic:<8} {i.op_str}'
    def code(a):
        ii=body(a)
        return '\n'.join(fmt(i) for i in ii) or 'FDE unavailable'
    def const(a):
        ii=body(a)
        if not ii or len(ii)>8 or ii[-1].mnemonic!='ret': return None
        v=None
        import re
        for i in ii[:-1]:
            m=re.fullmatch(r'[wx]0, #(-?(?:0x[0-9a-f]+|\d+))(?:, lsl #(\d+))?',i.op_str)
            if not m or i.mnemonic not in ('mov','movz','movk'): return None
            x=int(m[1],0); sh=int(m[2] or 0)
            if i.mnemonic=='movk':
                if v is None: return None
                v=(v & ~(0xffff<<sh)) | ((x&0xffff)<<sh)
            else: v=x<<sh
            if i.op_str.startswith('w'): v &= 0xffffffff
        return v if v is not None and 0<=v<=0x400000 else None
    cells=[0x7a22a8,0x7a22b0,0x7a22b8,0x7a22c0,0x7a22c8,0x7a22a8,0x7a22d0,
           0x7a2268,0x7a22d8,0x7a22e0,0x7a2270,0x7a2260,0x7a2258,0x7a2278,
           0x7a2290,0x7a22e8,0x7a2250,0x7a2288,0x7a2280,0x7a2240,0x7a22f0,
           0x7a2298,0x7a22f8,None,0x7a2308,0x7a2310,0x7a2318,0x7a2320,
           0x7a2328,0x7a2330,0x7a2248]
    out=['# HOME 4.1.0 original ELF serializer evidence','',f'SHA256: {SHA}',f'RELR decoded offsets: {len(relr)}; RELA: {len(rela)}.','',
         '## BDSP 31 segment getters','',
         '| index | source | vptr candidate | buffer getter | size getter | constant size | conditional prefix |','|---:|---|---|---|---|---|---|']
    sizes=[]; detail=[]; prefix=0
    for i,c in enumerate(cells):
        v,kind=ptr(c) if c is not None else (0x779550,'ctor immediate')
        if c is not None and v is not None: v+=0x10
        a,b=(ptr(v+0x28)[0],ptr(v+0x30)[0]) if v is not None else (None,None)
        n=const(b) if b is not None else None
        sizes.append(n)
        def hx(x):return hex(x) if x is not None else '?'
        out.append(f'| {i} | {hx(c)} {kind}'+(' (candidate)' if i==5 else '')+f' | {hx(v)} | {hx(a)} | {hx(b)} | {hx(n)} | {hx(prefix)} |')
        prefix=prefix+n if prefix is not None and n is not None else None
        detail += [f'### Segment {i}', '~~~asm',code(a) if a is not None else 'unresolved',code(b) if b is not None else 'unresolved','~~~']
    out+=['',f'Conditional box prefix (only if all previous getter identities verified): {hex(sum(sizes[:12])) if all(x is not None for x in sizes[:12]) else "unresolved"}',
          f'Conditional total: {hex(prefix) if prefix is not None else "unresolved"}',
          'Segment 5 constructor register provenance is a candidate. Do not treat prefix as verified until checked.',
          '', 'Size table (0x632828): '+', '.join(hex(x[0]) for x in struct.iter_unpack('<Q',e.read(0x632828,128)))]
    out+=['','## Getter disassembly']+detail
    out+=['','## SV and ZA child vtable windows']
    roots={}
    for label,(s,z) in TABLES.items():
        out += [f'### {label}','| slot | relocation | target | FDE bytes |','|---|---|---|---|']
        for a in range(s,z,8):
            t,k=ptr(a)
            out.append(f'| {a:#x} | {k} | {hex(t) if t is not None else "?"} | {fde.get(t,"?")} |')
            if t in fde and e.executable(t): roots.setdefault(t,[]).append(label+'@'+hex(a))
    sinks={0x4dc198,0x4dc190,0x4dd758,0x5f7070,0x5f7080,0x5f7720}
    out+=['','## B/BL paths from vtable targets to file API wrappers',
          'Depth limit 6, at most 1500 visited FDEs per root. Missing path is not proof of absence; indirect calls not resolved.']
    for r in sorted(roots):
        q=deque([(r,[r])]); seen={r}; hits={}
        while q and len(seen)<1500:
            a,path=q.popleft()
            if len(path)>7:continue
            for i in body(a):
                if i.mnemonic not in ('b','bl') or not i.operands or i.operands[0].type!=ARM64_OP_IMM:continue
                t=i.operands[0].imm
                if t in sinks and t not in hits:hits[t]=(path+[t],i.address)
                if t in fde and t not in seen and len(path)<7:
                    seen.add(t);q.append((t,path+[t]))
        for t,(path,site) in sorted(hits.items()):
            out.append('- '+','.join(roots[r])+': '+' -> '.join(hex(a) for a in path)+f' (sink callsite {site:#x})')
    out+=['','## Complete FDE disassembly']
    for a,(z,label) in FUNCTIONS.items():
        ii=insns(a,z-a)
        assert len(ii)*4==z-a and all(i.address==a+j*4 for j,i in enumerate(ii)), f'incomplete disassembly {label}'
        out += [f'### {label} {a:#x}..{z:#x} ({len(ii)} instructions)','~~~asm']+[fmt(i) for i in ii]+['~~~']
    out+=['','## Vtable target bodies (bounded to 0x2000 bytes)']
    for a in sorted(roots):
        n=fde[a]
        if n<=0x2000: out += [f'### {a:#x}: '+', '.join(roots[a]),'~~~asm',code(a),'~~~']
    out+=['','No device writes, no runtime persistence claim. Vtable windows are not complete ABI tables; paths need receiver and buffer dataflow review.']
    Path(report_path).write_text('\n'.join(out)+'\n',encoding='utf-8')
    print('\n'.join(out[:42]))

if __name__ == '__main__':
    import sys
    if len(sys.argv)==5 and sys.argv[1]=='--expanded': expanded(*sys.argv[2:])
    else: main()
