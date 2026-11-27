#!/usr/bin/env python3
"""Read-only SHA-qualified producer/consumer evidence for HOME icon fields."""
import argparse, hashlib, json, struct
from pathlib import Path
from home41_image_reverse_index import NCA, ELF_SHA
from home41_elf_resource_xrefs import elf_segments,signed
from home41_elf_disasm_windows import window
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM

TARGETS={0x2069b0,0x5312d8,0x516c70,0x105790,0x2c6808,0x12f148,0x510d20,0x5312d0,0x223c30,0x13a7ac,0x2069d0,0x6af80,0x6a6f8,0x10b890,0x2d5164,0x2d5144,0x2d5154,0x2c594c,0x2c596c,0x2c5654,0x2c68d8}
CENTERS={0x516c70:(0x10,0x240),0x105790:(0x10,0x240),0x2069b0:(0x10,0x40),0x5312d8:(0x10,0x40),0x15bff4:(0x60,0x10),0xaf7a4:(0x30,0x10),0x12f148:(0x10,0x200),0x510d20:(0x10,0x200),0x225bc0:(0x10,0x90),0x223f38:(0x40,0x100),0x5312d0:(0x30,0x160),0x223c30:(0x20,0x100),0x221ac0:(0x10,0x80),0x2069d0:(0x30,0x220),0x6af80:(0x40,0x200),0x13ad30:(0x700,0x110),0x13ada0:(0x100,0x100),0x10b890:(0x30,0x300),0x6a6f8:(0x10,0x60),0xaeedc:(0x110,0x50),0x10f218:(0x100,0x80),0x195f28:(0x200,0x60),0x2d0ed4:(0x10,0x150)}
def audit(root,out):
 raw=(root/NCA/"0/main.elf").read_bytes()
 if hashlib.sha256(raw).hexdigest()!=ELF_SHA:raise ValueError("ELF SHA mismatch")
 segs=elf_segments(raw)
 def read(va,n):
  for s in segs:
   if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
    p=s["file_offset"]+va-s["vaddr"];return raw[p:p+n]
  raise ValueError(f"unmapped {va:#x}")
 def cstr(va):
  try:
   b=read(va,96).split(b"\0")[0]
   return b.decode("ascii") if b and all(32<=x<127 for x in b) else None
  except (ValueError,UnicodeError):return None
 callers=[]
 for s in segs:
  if not s["executable"]:continue
  start=s["file_offset"]
  for rel in range(0,s["size"]-3,4):
   op=struct.unpack_from("<I",raw,start+rel)[0];pc=s["vaddr"]+rel
   if op&0x7c000000==0x14000000:
    dest=pc+(signed(op&0x3ffffff,26)<<2)
    if dest in TARGETS:callers.append(dict(pc=pc,target=dest,kind="BL" if op&0x80000000 else "B"))
 md=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
 def rows(pc,before,after):
  result=window(raw,segs,pc,before,after)
  return [dict(va=v,op=m,args=o,raw=h) for v,m,o,h in result]
 def block(pc,before,after):
  r=rows(pc,before,after)
  return [f"{x['va']:08x} {x['raw']} {x['op']} {x['args']}" for x in r]
 strings={hex(x):cstr(x) for x in (0x62b880,0x62b888,0x62b890,0x60cf95)}
 tables={hex(x):read(x,n).hex() for x,n in [(0x627130,20),(0x625450,13),(0x625368,11),(0x625374,44),(0x63a7f0,48),(0x63a948,136)]}
 report=dict(elf_sha256=ELF_SHA,callers=callers,strings=strings,tables=tables,windows={hex(x):rows(x,*a) for x,a in CENTERS.items()},scope="bounded static disassembly; record layout and function extent not assumed")
 out.mkdir(parents=True,exist_ok=True)
 (out/"producer_evidence.json").write_text(json.dumps(report,indent=2)+"\n")
 lines=["# HOME icon producer evidence","",ELF_SHA]
 for pc,(b,a) in CENTERS.items():lines += ["",f"## {pc:#x}","","~~~asm"]+block(pc,b,a)+["~~~"]
 for c in callers:lines += ["",f"## {c['pc']:#x} -> {c['target']:#x}","","~~~asm"]+block(c["pc"],0x80,0x30)+["~~~"]
 (out/"producer_windows.md").write_text("\n".join(lines)+"\n")
 # Candidate stride 0x50 address producers (MADD/UMADDL) and nearby writes.
 # Record offsets are relative to the base before +0x84, not PH4.
 md.detail=True
 stride_candidates=[]
 for seg in segs:
  if not seg["executable"]:continue
  beg=seg["file_offset"];size=seg["size"]
  for rel in range(0,size-3,4):
   op=struct.unpack_from("<I",raw,beg+rel)[0];pc=seg["vaddr"]+rel
   # movz wN,#0x50 or xN,#0x50
   if op&0x7fffffe0 != 0x52800a00:continue
   buf=raw[beg+rel:min(beg+size,beg+rel+0xc0)]
   ins=list(md.disasm(buf,pc))
   if not ins:continue
   reg=ins[0].op_str.split(",")[0].strip()
   madd=[i for i in ins[1:] if i.mnemonic in ("madd","umaddl","smaddl") and reg in [p.strip() for p in i.op_str.split(",")[1:3]]]
   if not madd:continue
   stores=[i for i in ins if i.mnemonic.startswith(("str","stp","stur")) and any(("#"+x) in i.op_str for x in ("0xcc","0xd0","0xc8","0x48","0x4c","0x84","0x88","0xa0"))]
   if not stores:continue
   stride_candidates.append(dict(pc=pc,madd=[i.address for i in madd],stores=[dict(pc=i.address,op=i.mnemonic,args=i.op_str) for i in stores]))
 report["stride_store_candidates"]=stride_candidates
 (out/"producer_evidence.json").write_text(json.dumps(report,indent=2)+"\n")
 for q in stride_candidates:
  lines += ["",f"## Row stride candidate {q['pc']:#x}","","~~~asm"]+block(q["pc"],0x20,0xc0)+["~~~"]
 (out/"producer_windows.md").write_text("\n".join(lines)+"\n")
 print("ROW_STRIDE_STORE_CANDIDATES",json.dumps(stride_candidates))
 print("TABLES",json.dumps(tables));print("STRINGS",json.dumps(strings))
 from collections import Counter
 print("CALLERS",json.dumps({hex(k):v for k,v in Counter(c["target"] for c in callers).items()}))
 for pc in (0x105790,):
  print("WINDOW",hex(pc));print("\n".join(block(pc,*CENTERS[pc])))
if __name__=="__main__":
 p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.root,a.out)
