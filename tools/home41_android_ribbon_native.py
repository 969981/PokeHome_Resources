#!/usr/bin/env python3
"""Read-only Android HOME 4.1.0 ribbon/achievement method and serialized atlas audit."""
import argparse,hashlib,json,re
from pathlib import Path
from collections import defaultdict
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM,ARM64_OP_REG,ARM64_OP_MEM
from home41_elf_resource_xrefs import elf_segments

SHA="80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe"
NAMES={"StaticSpriteManager$$GetRibbonIcon","MasterDataHelper$$GetRibbon","MasterDataHelper$$GetRibbons","PokemonRibbonUtility$$HasRibbon","PokemonRibbonUtility$$HasRibbons","RibbonField$$SetData","RibbonField$$SingleRibbon","RibbonField$$LumpingRibbon","AchievementScrollerCellView$$_LoadImage","AchievementScrollerCellView$$_SetIcon","AchievementDetailDialog$$_SetupRewardIcon","MedalResourceData$$_CoDownloadTexture","MedalResourceData$$_LoadTexture","MedalResourceData$$_LoadTextureFromBase64Str","MedalResourceData$$_OnTextureLoaded","MSManager$$GetRibbonNameMsId","MSManager$$GetRibbonInfoMsId"}
CLASSES={"MD_Data_Ribbon","StaticSpriteManager","PokemonRibbonUtility","MD_Data_Achievement","AchievementRewardData","MedalResourceData","MasterDataHelper"}
def run(root,out):
    a=root/"Unpack/Android/4.1.0"
    source=root/"Android/Smali/4.1.0"
    raw=(source/"lib/arm64-v8a/libil2cpp.so").read_bytes()
    if hashlib.sha256(raw).hexdigest()!=SHA:raise ValueError("Android libil2cpp SHA mismatch")
    segs=elf_segments(raw)
    def read(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+va-s["vaddr"];return raw[p:p+n]
        raise ValueError(f"unmapped VA {va:#x}")
    data=json.loads((a/"il2cpp/script.json").read_text(encoding="utf-8-sig"))
    methods=data["ScriptMethod"];by=defaultdict(list)
    for m in methods:
        if isinstance(m.get("Address"),int) and m["Address"]>0:by[m["Address"]].append(m["Name"])
    addresses=sorted(by)
    import bisect
    strings={x["Address"]:x.get("Value","") for x in data.get("ScriptString",[]) if isinstance(x.get("Address"),int)}
    metadata={x["Address"]:x.get("Name","") for k in ("ScriptMetadata","ScriptMetadataMethod") for x in data.get(k,[]) if isinstance(x.get("Address"),int)}
    md=Cs(CS_ARCH_ARM64,CS_MODE_ARM);md.detail=True
    reports=[];lines=["# Android HOME 4.1.0 ARM64 method windows","","libil2cpp SHA256 "+SHA,""]
    for m in methods:
        name=m["Name"];va=m.get("Address")
        if name not in NAMES or not isinstance(va,int) or va<=0:continue
        idx=bisect.bisect_right(addresses,va)
        if idx==len(addresses):continue
        end=addresses[idx];size=end-va
        if size<=0 or size>0x10000:raise ValueError(f"method boundary {name} {size}")
        ins=list(md.disasm(read(va,size),va))
        if len(ins)*4!=size:raise ValueError(f"decode incomplete {name}")
        calls=[];literals=[];refs=[];pages={}
        def reg(r):
            n=md.reg_name(r)
            return "x"+n[1:] if n and n[0] in "wx" and n[1:].isdigit() else n
        for i in ins:
            op=i.operands;mn=i.mnemonic;upd={}
            if mn in ("bl","b") and op and op[0].type==ARM64_OP_IMM:
                target=op[0].imm
                if mn=="bl" or not va<=target<end:
                    calls.append(dict(pc=hex(i.address),target=hex(target),names=by.get(target,[]),kind=mn))
            if mn=="adrp" and len(op)==2:upd[reg(op[0].reg)]=op[1].imm
            elif mn=="adr" and len(op)==2:upd[reg(op[0].reg)]=op[1].imm
            elif mn=="add" and len(op)==3 and op[1].type==ARM64_OP_REG and op[2].type==ARM64_OP_IMM and reg(op[1].reg) in pages:
                upd[reg(op[0].reg)]=pages[reg(op[1].reg)]+(op[2].imm<<op[2].shift.value)
            candidates=list(upd.values())
            for o in op:
                if o.type==ARM64_OP_MEM and reg(o.mem.base) in pages and not o.mem.index:candidates.append(pages[reg(o.mem.base)]+o.mem.disp)
            for x in set(candidates):
                if x in strings:literals.append(dict(pc=hex(i.address),address=hex(x),value=strings[x],instruction=mn+" "+i.op_str))
                if x in metadata:refs.append(dict(pc=hex(i.address),address=hex(x),name=metadata[x],instruction=mn+" "+i.op_str))
            if mn in ("b","br","ret") or mn.startswith(("b.","cb","tb")):pages.clear()
            if mn in ("bl","blr"):
                for r in list(pages):
                    if re.fullmatch(r"x(?:[0-9]|1[0-8])",r):pages.pop(r,None)
            try:
                _,writes=i.regs_access()
                for r in writes:pages.pop(reg(r),None)
            except Exception:pages.clear()
            pages.update(upd)
        row=dict(name=name,address=hex(va),next_method_address=hex(end),bytes=size,instructions=len(ins),signature=m.get("Signature"),calls=calls,string_candidates=literals,metadata_candidates=refs,boundary="next distinct metadata method address; may include padding or internal blocks")
        reports.append(row);lines.extend([f"## {name} {va:#x}","~~~asm"])
        for i in ins:
            comment=" | ".join(by.get(i.operands[0].imm,[])) if i.mnemonic in ("bl","b") and i.operands and i.operands[0].type==ARM64_OP_IMM else ""
            lines.append(f"{i.address:08x} {i.bytes.hex()} {i.mnemonic:8} {i.op_str}"+(" ; "+comment if comment else ""))
        lines.extend(["~~~",""])
    if sum(r["name"]=="StaticSpriteManager$$GetRibbonIcon" for r in reports)!=2:raise ValueError("ribbon overloads missing")
    dump=(a/"il2cpp/dump.cs").read_text(encoding="utf-8-sig")
    classes={}
    for name in CLASSES:
        m=re.search(r"^.*(?:class|struct) "+re.escape(name)+r"\b[^\n]*\n\{",dump,re.M)
        if m:
            end=dump.find("\n}",m.end())
            chunk=dump[m.start():end+2]
            classes[name]=chunk[:120000]
    out.mkdir(parents=True,exist_ok=True)
    (out/"android_ribbon_methods.json").write_text(json.dumps(dict(lib_sha256=SHA,methods=reports,scope="Original ARM64 direct call and metadata address candidates; no runtime invocation or resolved business ID"),indent=2,ensure_ascii=False)+"\n")
    (out/"android_ribbon_methods.md").write_text("\n".join(lines))
    (out/"android_ribbon_classes.json").write_text(json.dumps(classes,indent=2,ensure_ascii=False)+"\n")
    print(json.dumps(dict(methods=len(reports),instructions=sum(r["instructions"] for r in reports),calls=sum(len(r["calls"]) for r in reports),string_candidates=sum(len(r["string_candidates"]) for r in reports),classes=len(classes))))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root,a.out)
