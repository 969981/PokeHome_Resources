#!/usr/bin/env python3
"""Readonly HOME 4.1.0 orion/titan/ikkaku FlatBuffers evidence inventory.
This is a structure/field-byte comparison, NOT move legality interpretation.
Usage: python home41_p2_pml_readonly.py --pml-dir extracted_pml --output diff.csv
"""
from pathlib import Path
import argparse,csv,struct,hashlib
GAMES=('orion','titan','ikkaku')
def u16(b,i):return struct.unpack_from('<H',b,i)[0]
def u32(b,i):return struct.unpack_from('<I',b,i)[0]
def i32(b,i):return struct.unpack_from('<i',b,i)[0]
def table(b,root):
    if root<4 or root+4>len(b):raise ValueError('table range')
    vt=root-i32(b,root)
    if vt<0 or vt+4>len(b):raise ValueError('vtable range')
    vs,os=u16(b,vt),u16(b,vt+2)
    if vs<4 or vs%2 or vt+vs>len(b) or root+os>len(b):raise ValueError('table bounds')
    offs=[u16(b,vt+4+2*j) for j in range((vs-4)//2)]
    if any(o>=os for o in offs if o):raise ValueError('field beyond object')
    return root,offs,os
def payload(b,t):
    root,offs,os=t; keys=sorted(o for o in offs if o)
    data=[]
    for i,o in enumerate(offs):
        if not o:data.append(None);continue
        later=next((z for z in keys if z>o),os)
        data.append(b[root+o:root+later].hex())
    return tuple(data)
def records(b):
    root,offs,_=table(b,u32(b,0))
    if not offs or not offs[0]:raise ValueError('personal vector absent')
    slot=root+offs[0];v=slot+u32(b,slot);n=u32(b,v)
    if n>20000 or v+4+n*4>len(b):raise ValueError('personal vector overflow')
    return [table(b,v+4+4*i+u32(b,v+4+4*i)) for i in range(n)]
def main():
    p=argparse.ArgumentParser();p.add_argument('--pml-dir',type=Path,required=True)
    p.add_argument('--output',type=Path,required=True);a=p.parse_args()
    a.output.parent.mkdir(parents=True,exist_ok=True)
    print('Personal vector record counts:')
    for g in GAMES:
        f=a.pml_dir/'personal'/f'{g}_personal_total.perbin';b=f.read_bytes()
        arr=records(b)
        print(g,len(arr),len(b),hashlib.sha256(b).hexdigest())
    cols=['move_id']+[f'{g}_present' for g in GAMES]+['orion_titan_fieldwise_equal','titan_ikkaku_fieldwise_equal']
    valid={g:0 for g in GAMES};equal=[0,0]
    with a.output.open('w',encoding='utf-8-sig',newline='') as f:
        w=csv.DictWriter(f,fieldnames=cols);w.writeheader()
        for i in range(921):
            found={}
            for g in GAMES:
                p=a.pml_dir/'waza'/g/f'waza{i:04d}.wazabin'
                if not p.is_file():continue
                b=p.read_bytes();t=table(b,u32(b,0))
                root,offs,_=t
                ident=u32(b,root+offs[0]) if offs and offs[0] else 0
                if ident!=i:raise ValueError(f'{p}: ID {ident} != {i}')
                found[g]=payload(b,t);valid[g]+=1
            eq1=('orion' in found and 'titan' in found and found['orion']==found['titan'])
            eq2=('titan' in found and 'ikkaku' in found and found['titan']==found['ikkaku'])
            equal[0]+=eq1;equal[1]+=eq2
            row={'move_id':i,'orion_titan_fieldwise_equal':eq1 if 'orion' in found and 'titan' in found else '',
                 'titan_ikkaku_fieldwise_equal':eq2 if 'titan' in found and 'ikkaku' in found else ''}
            for g in GAMES:row[f'{g}_present']=g in found
            w.writerow(row)
    print('Verified waza ID counts',valid,'identical field sequences',equal)
if __name__=='__main__':main()
