# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["capstone==5.0.6"]
# ///
"""Focused, reproducible HOME 4.1.0 learnset callsite windows and direct/indirect anchors."""
import argparse,json,hashlib,struct
from pathlib import Path
from collections import defaultdict
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from home41_elf_resource_xrefs import elf_segments,signed
SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
GROUPS=[(0x53ea48,0x53ea7c,0x53f468),(0x5401ec,0x540220,0x540b68),(0x541c48,0x541c7c,0x5424c8),(0x542d50,0x542d84,0x543738),(0x54454c,0x544580,0x544e78),(0x545f58,0x545f8c,0x5468c8),(0x549fa0,0x549fd4,0x54a828)]
# Half-open windows, not assumed function boundaries.
WINDOWS={"code101_caller":(0xfc400,0xfc780),"code102_caller":(0x4fcb00,0x4fcd00),"common_4ffce8":(0x4ffce8,0x4fff30),"common_500044":(0x500044,0x500290),"loader":(0x50213c,0x502300),"compare_53cb68":(0x53ca80,0x53cbc0),"unrelated_candidate_502b80":(0x502b00,0x502ba0)}
for i,(count,entry,lookup) in enumerate(GROUPS):
    WINDOWS[f"group_{i}_count"]=(count,entry)
    WINDOWS[f"group_{i}_entry"]=(entry,entry+0x200)
    WINDOWS[f"group_{i}_lookup"]=(lookup,lookup+0x180)
def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    b=a.elf.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
    segs=elf_segments(b);md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.skipdata=True
    def dis(lo,hi):
        for s in segs:
            if s["executable"] and s["vaddr"]<=lo<hi<=s["vaddr"]+s["size"]:
                o=s["file_offset"]+lo-s["vaddr"]
                return [{"pc":i.address,"op":i.mnemonic,"args":i.op_str,"bytes":i.bytes.hex()} for i in md.disasm(b[o:o+hi-lo],lo)]
        raise ValueError(hex(lo))
    targets={x for g in GROUPS for x in g}|{0x4ffce8,0x500044,0x50213c}
    direct=defaultdict(list);ptrs=defaultdict(list)
    for s in segs:
        off,size,base=s["file_offset"],s["size"],s["vaddr"]
        if s["executable"]:
            for k,(word,) in enumerate(struct.iter_unpack("<I",memoryview(b)[off:off+size-size%4])):
                if word&0xfc000000 not in (0x94000000,0x14000000):continue
                pc=base+k*4;t=pc+4*signed(word&0x3ffffff,26)
                if t in targets:direct[t].append({"pc":pc,"op":"bl" if word>>26==0x25 else "b"})
        else:
            for k,(word,) in enumerate(struct.iter_unpack("<Q",memoryview(b)[off:off+size-size%8])):
                if word in targets:ptrs[word].append(base+k*8)
    result={"status":"STATIC_WINDOWS_ONLY","elf_sha256":SHA,"groups":GROUPS,"windows":{k:dis(*v) for k,v in WINDOWS.items()},"direct_refs":{hex(k):v for k,v in direct.items()},"raw_pointer_candidates":{hex(k):v for k,v in ptrs.items()}}
    # Raw RELA addends may be the only reference in a relocated PIE. Parse ELF
    # section headers, restrict to AArch64 RELATIVE (1027), retain relocation site.
    rela=defaultdict(list)
    shoff=struct.unpack_from("<Q",b,40)[0];ents,n=struct.unpack_from("<HH",b,58)
    if ents>=64 and shoff+n*ents<=len(b):
        for j in range(n):
            _,typ,_,_,off,size,_,_,_,entry=struct.unpack_from("<IIQQQQIIQQ",b,shoff+j*ents)
            if typ!=4 or entry!=24 or off+size>len(b) or size%24:continue
            for site,info,addend in struct.iter_unpack("<QQq",memoryview(b)[off:off+size]):
                if info&0xffffffff==1027 and addend in targets:rela[addend].append(site)
    result["relative_relocations"]={hex(k):v for k,v in rela.items()}
    # Verify the known instruction anchors, not just a nearby numeric match.
    anchors={0xfc6c8:("bl","#0x4ffce8"),0xfc6d0:("cmp","w8, #0x65"),0x4fcc84:("bl","#0x4ffce8"),0x4fcca8:("cmp","w8, #0x66")}
    for pc,expected in anchors.items():
        ins=dis(pc,pc+4)[0]
        if (ins["op"],ins["args"])!=expected:raise ValueError(f"anchor mismatch {pc:x}")
    a.out.mkdir(parents=True,exist_ok=True)
    (a.out/"focused.json").write_text(json.dumps(result,indent=2)+"\n",encoding="utf-8")
    with (a.out/"focused.asm").open("w",encoding="utf-8") as f:
        for name,window in result["windows"].items():
            f.write("\n; "+name+"\n")
            for i in window:f.write(f"{i['pc']:08x}  {i['bytes']:8}  {i['op']:9} {i['args']}\n")
    print(json.dumps({"status":result["status"],"windows":len(WINDOWS),"direct_counts":{hex(k):len(v) for k,v in direct.items()},"pointer_counts":{hex(k):len(v) for k,v in ptrs.items()},"rela_counts":{hex(k):len(v) for k,v in rela.items()}}))
if __name__=="__main__":main()
