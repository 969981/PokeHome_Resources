# /// script
# requires-python = ">=3.11,<3.14"
# dependencies = ["unicorn==2.1.4", "capstone==5.0.6"]
# ///
"""Pure arithmetic reference models compared against original HOME AArch64 leaf functions.

Domain: valid gameplay-like scalar inputs only. Not a live PKM reader or legality engine.
"""
import argparse,csv,hashlib,json,math,random,struct
from pathlib import Path
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_PROT_ALL
from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7,UC_ARM64_REG_LR,UC_ARM64_REG_SP,UC_ARM64_REG_NZCV,UC_ARM64_REG_FPCR
from home41_elf_resource_xrefs import elf_segments
from home41_native_learnset_focus import SHA
REGS=(UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3,UC_ARM64_REG_X4,UC_ARM64_REG_X5,UC_ARM64_REG_X6,UC_ARM64_REG_X7)
ORDINARY=(0x5378fc,0x53861c,0x538694,0x538710,0x53878c,0x538808)
BELUGA=(0x537944,0x537984,0x537a44,0x537b08,0x537bcc,0x537c90)
HAYABUSA=(0x5380f8,0x538174,0x538238,0x538300,0x5383c8,0x538490)
SPECIAL=(0x538884,0x5388f8,0x53897c,0x5389f8,0x538a80,0x538afc)
EFFORT=(0,2,3,4,7,8,9,14,15,16,25)
def f32(v):return struct.unpack("<f",struct.pack("<f",v))[0]
def add(a,b):return f32(a+b)
def mul(a,b):return f32(a*b)
def div(a,b):return f32(a/b)
def fma(a,b,c):return f32(a*b+c)
def nature_apply(v,sign):return v*(100+10*sign)//100
def ordinary(stat,species,level,base,iv,ev,sign):
    n=(2*base+iv+ev//4)*level//100
    if stat==0:return 1 if species==292 else n+level+10
    return nature_apply(n+5,sign)
def beluga(stat,species,level,base,iv,av,sign,friend):
    n=(2*base+iv)*level//100
    if stat==0:return 1 if species==292 else n+level+10+av
    n=nature_apply(n+5,sign)
    bonus=int(mul(add(div(div(f32(friend),255.),10.),1.),100.))
    return n*bonus//100+av
def hayabusa(stat,species,level,base,el,sign,effort):
    if stat==0 and species==292:return 1
    b=f32(base);l=f32(level)
    if stat==0:n=int(fma(b,add(div(l,100.),1.),l))
    else:n=nature_apply(int(div(mul(add(div(l,50.),1.),b),1.5)),sign)
    extra=math.floor(div(fma(float(effort[min(el,10)]),f32(math.sqrt(b)),l),2.5)+0.5)
    return n+extra
def effective_el(iv,correction,stored):
    # Verified thresholds from 0x535b20..0x535bc4.
    return min(10,stored+(3 if correction or iv>30 else 2 if iv>25 else 1 if iv>19 else 0))
def audit(b,out):
    if hashlib.sha256(b).hexdigest()!=SHA:raise ValueError("ELF SHA")
    segs=elf_segments(b)
    def raw(va,n):
        for s in segs:
            if s["vaddr"]<=va and va+n<=s["vaddr"]+s["size"]:
                p=s["file_offset"]+va-s["vaddr"];return b[p:p+n]
        raise ValueError(hex(va))
    nature=[struct.unpack("<5b",raw(0x65accc+5*i,5)) for i in range(25)]
    assert all(v in (-1,0,1) for row in nature for v in row)
    assert all(sum(row)==0 and sum(abs(v) for v in row) in (0,2) for row in nature)
    effort=struct.unpack("<11i",raw(0x65ac74,44));assert effort==EFFORT
    factors=struct.unpack("<11f",raw(0x65aca0,44))
    assert all(abs(x-(1.5+.05*i))<1e-6 for i,x in enumerate(factors))
    # Execute only pure leaf arithmetic functions, with original code/table bytes.
    # No live game process, no external calls, no device writes.
    u=Uc(UC_ARCH_ARM64,UC_MODE_ARM)
    top=max(s["vaddr"]+s["size"] for s in segs);u.mem_map(0,(top+4095)&~4095,UC_PROT_ALL)
    for s in segs:u.mem_write(s["vaddr"],b[s["file_offset"]:s["file_offset"]+s["size"]])
    stop=0x10000000;u.mem_map(stop,0x2000,UC_PROT_ALL)
    def native(addr,args):
        for k,r in enumerate(REGS):u.reg_write(r,args[k] if k<len(args) else 0)
        u.reg_write(UC_ARM64_REG_LR,stop);u.reg_write(UC_ARM64_REG_SP,stop+0x1000)
        u.reg_write(UC_ARM64_REG_NZCV,0);u.reg_write(UC_ARM64_REG_FPCR,0)
        u.emu_start(addr,stop,count=256)
        from unicorn.arm64_const import UC_ARM64_REG_PC
        if u.reg_read(UC_ARM64_REG_PC)!=stop:raise ValueError("leaf did not return")
        return u.reg_read(UC_ARM64_REG_X0)&0xffffffff
    rng=random.Random(4100);counts={k:0 for k in ("ordinary","beluga","hayabusa","special")}
    examples=[]
    # Test every nature plus boundaries and deterministic random inputs.
    for k in range(3000):
        species=292 if k%41==0 else 25
        level=rng.randint(1,100);base=rng.randint(1,255);iv=rng.randint(0,31);ev=rng.randint(0,252)
        ni=k%25;av=rng.randint(0,200);friend=rng.randint(0,255);el=rng.randint(0,10);boost=rng.randint(0,15)
        if k<25:level,base,iv,ev,av,friend,el,boost=100,90,31,252,200,255,10,10
        for stat in range(6):
            sign=0 if stat==0 else nature[ni][stat-1]
            x=ordinary(stat,species,level,base,iv,ev,sign)
            cases=[("ordinary",ORDINARY[stat],(species,level,base,iv,ev) if stat==0 else (level,base,iv,ev,ni),x),
                   ("beluga",BELUGA[stat],(species,level,base,iv,av) if stat==0 else (level,base,iv,ni,av,0,friend),beluga(stat,species,level,base,iv,av,sign,friend)),
                   ("hayabusa",HAYABUSA[stat],(species,level,base,iv,el) if stat==0 else (level,base,iv,el,ni),hayabusa(stat,species,level,base,el,sign,effort)),
                   ("special",SPECIAL[stat],(species,level,base,iv,ev,boost) if stat==0 else (level,base,iv,ev,0,ni),
                    (1 if species==292 else int(mul(float(x),factors[min(boost,10)]))) if stat==0 else x)]
            for name,addr,args,want in cases:
                got=native(addr,args)
                if got!=want:raise ValueError(f"{name} stat{stat} {addr:#x} args={args} native={got} model={want}")
                counts[name]+=1
                if k==0:examples.append({"family":name,"stat":stat,"function":hex(addr),"args":args,"native":got,"model":want})
    out.mkdir(parents=True,exist_ok=True)
    with (out/"nature_modifiers.csv").open("w",newline="") as f:
        w=csv.writer(f);w.writerow(["native_nature","attack","defense","sp_attack","sp_defense","speed"])
        for i,row in enumerate(nature):w.writerow([i,*row])
    with (out/"effort_multipliers.csv").open("w",newline="") as f:
        w=csv.writer(f);w.writerow(["index","effort_multiplier","special_hp_float32"])
        for i,(m,h) in enumerate(zip(effort,factors)):w.writerow([i,m,repr(h)])
    report={"status":"PASS_LEAF_EMULATION","elf_sha256":SHA,"case_counts":counts,"total":sum(counts.values()),"examples":examples,"limitations":["Leaf functions only; inputs supplied, upstream runtime identity and data paths not executed.","Special HP mode trigger not resolved.","Level/experience and complete object read parity remain separate work.","Domain tested, not exhaustive equivalence."]}
    (out/"stat_formula_verification.json").write_text(json.dumps(report,indent=2)+"\n")
    print(json.dumps(report))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--elf",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();audit(a.elf.read_bytes(),a.out)
