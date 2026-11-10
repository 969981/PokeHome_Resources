#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""HOME 4.1.0 original ELF offline atlas for Ghidra (standard library only).

Outputs exact .eh_frame_hdr+FDE ranges, all local AArch64 BL counts, a focus
function CSV/TSV for Ghidra and optional LLVM assembler listings. Input ELF
is strictly read-only; no Ghidra is required for this preprocessing step.
"""
from __future__ import annotations
import argparse
import csv
import gzip
import hashlib
import json
import re
import struct
import subprocess
from collections import defaultdict
from pathlib import Path

REPO = Path(__file__).resolve().parents[1]
DEFAULT_ELF = REPO / "57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf"
EXPECTED_SHA256 = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"

# RVA | Research label | category. These are not Nintendo debug symbols.
FOCUS = """
5305FC HOME_PH4_Seal crypto
5303F4 HOME_EH4_CopyDecrypt crypto
530214 HOME_AES_CBC_Encrypt crypto
53041C HOME_AES_CBC_Decrypt crypto
530120 HOME_CiphertextCRC32_XOR_100B crypto
5306B4 HOME_EH4_CRC_Checked_Unseal crypto
53A010 PKM_Checksum16 crypto
53A0C0 PKM_LCG_XOR_Encode crypto
53A140 PKM_LCG_XOR_Decode crypto
53FBB0 LGPE_PB7_Decode lgpe
53FC20 LGPE_PB7_Encode lgpe
50AA70 LGPE_GameToPH4 lgpe
50AF70 LGPE_PH4ToGame lgpe
53FB10 LGPE_GetBlockA lgpe
53FB38 LGPE_GetBlockB lgpe
53FB60 LGPE_GetBlockC lgpe
53FB88 LGPE_GetBlockD lgpe
549898 SWSH_PK8_Decode swsh
5498F8 SWSH_PK8_Encode swsh
50D280 SWSH_GameToPH4 swsh
50D780 SWSH_PH4ToGame swsh
549754 SWSH_GetBlockA swsh
54977C SWSH_GetBlockB swsh
5497A4 SWSH_GetBlockC swsh
5497CC SWSH_GetBlockD swsh
543F74 PLA_PA8_Decode pla
543FA4 PLA_PA8_Encode pla
50BE40 PLA_GameToPH4 pla
50C330 PLA_PH4ToGame pla
543ED4 PLA_GetBlockA pla
541618 BDSP_PB8_Decode bdsp
541678 BDSP_PB8_Encode bdsp
50B490 BDSP_GameToPH4 bdsp
50B930 BDSP_PH4ToGame bdsp
541578 BDSP_GetBlockA bdsp
54B0A0 SV_PK9_Decode sv
54B100 SV_PK9_Encode sv
50DD00 SV_GameToPH4 sv
50E1F0 SV_PH4ToGame sv
54B000 SV_GetBlockA sv
545888 ZA_PA9_Decode za
5457B0 ZA_PA9_SpecialLCG_Decode za
5458E0 ZA_PA9_Encode za
50C840 ZA_GameToPH4 za
50CD30 ZA_PH4ToGame za
54570C ZA_GetBlockA za
50E8B0 HOME_CreateSideDataTLV side
50E994 HOME_FindSideDataTLV side
52D120 HOME_ChampionsTag6_Metadata side
504CDC FRLG_ImportRaw frlg
50A460 FRLG_GameToPH4_Tag2 frlg
53DCB4 FRLG_Permutation frlg
4971F0 NN_AES_EncryptWrapper crypto
4973A0 NN_AES_DecryptWrapper crypto
""".strip()

def u32(data: bytes, off: int) -> int:
    return struct.unpack_from("<I", data, off)[0]

def parse_sections(data: bytes) -> dict[str, dict]:
    if data[:7] != b"\x7fELF\x02\x01\x01" or struct.unpack_from("<H", data, 18)[0] != 183:
        raise ValueError("Expected 64-bit little-endian AArch64 ELF")
    table = struct.unpack_from("<Q", data, 40)[0]
    stride, count, names_idx = struct.unpack_from("<HHH", data, 58)
    all_sections = []
    for i in range(count):
        x = struct.unpack_from("<IIQQQQIIQQ", data, table+i*stride)
        all_sections.append(dict(index=i,name_offset=x[0],type=x[1],rva=x[3],
                                 file_offset=x[4],size=x[5],entry_size=x[9]))
    strings = all_sections[names_idx]
    names = data[strings["file_offset"]:strings["file_offset"]+strings["size"]]
    for s in all_sections:
        q = s["name_offset"]
        s["name"] = names[q:].split(b"\0", 1)[0].decode("ascii", "replace") if q<len(names) else ""
    return {s["name"]:s for s in all_sections if s["name"]}

def get_fdes(data: bytes, secs: dict) -> list[tuple[int, int, int]]:
    header = secs[".eh_frame_hdr"]
    eh = secs[".eh_frame"]
    pos = header["file_offset"]
    enc = tuple(data[pos:pos+4])
    if enc != (1,0x1B,0x03,0x3B):
        raise ValueError(f"Unsupported eh_frame_hdr encoding {enc}")
    n = u32(data, pos+8)
    if pos+12+8*n > pos+header["size"]:
        raise ValueError("FDE header table exceeds section size")
    records = []
    previous_end = 0
    for i in range(n):
        start_delta,ptr_delta = struct.unpack_from("<ii", data, pos+12+i*8)
        pc = header["rva"]+start_delta
        ptr = header["rva"]+ptr_delta
        p = eh["file_offset"]+ptr-eh["rva"]
        if p < eh["file_offset"] or p+16 > eh["file_offset"]+eh["size"]:
            raise ValueError(f"FDE #{i} points outside .eh_frame")
        length,cie_rel,init_delta,span=struct.unpack_from("<IIiI", data, p)
        if length<12 or span<=0 or ptr+8+init_delta != pc:
            raise ValueError(f"FDE #{i} PC/span mismatch")
        if pc < previous_end or pc+span > secs[".text"]["rva"]+secs[".text"]["size"]:
            raise ValueError(f"FDE #{i} overlaps previous or exceeds .text")
        records.append((pc,span,ptr))
        previous_end=pc+span
    return records

def scan_calls(data: bytes, text: dict) -> tuple[dict[int, list[int]], int, int, int]:
    calls=defaultdict(list)
    intra_bl=0
    intra_b=0
    branches=0
    for pc in range(text["rva"], text["rva"]+text["size"], 4):
        word = u32(data, text["file_offset"]+pc-text["rva"])
        opcode=word & 0xFC000000
        if opcode not in (0x94000000,0x14000000):
            continue
        imm=word&0x3ffffff
        if imm&0x2000000:
            imm-=0x4000000
        target=pc+4*imm
        if text["rva"]<=target<text["rva"]+text["size"]:
            if opcode==0x94000000:
                calls[target].append(pc)
                intra_bl+=1
            else:
                intra_b+=1
        branches+=1
    return calls,intra_bl,intra_b,branches

def write_atlas(elf: Path, output: Path, asm: bool) -> dict:
    data=elf.read_bytes()
    actual=hashlib.sha256(data).hexdigest()
    if actual!=EXPECTED_SHA256:
        raise ValueError("Refusing different ELF; expected "+EXPECTED_SHA256+", got "+actual)
    secs=parse_sections(data)
    fdes=get_fdes(data,secs)
    fde_map={rva:(size,ptr) for rva,size,ptr in fdes}
    calls,bl_total,b_total,branch_total=scan_calls(data,secs[".text"])
    sym=secs[".dynsym"]
    symbols=sym["size"]//sym["entry_size"]
    undef=0
    for k in range(symbols):
        if struct.unpack_from("<H",data,sym["file_offset"]+k*sym["entry_size"]+6)[0]==0:
            undef+=1
    relocs={n:secs[n]["size"]//secs[n]["entry_size"] for n in (".rela.dyn",".rela.plt")}
    rows=[]
    for line in FOCUS.splitlines():
        addr,name,category=line.split()
        rva=int(addr,16)
        if rva not in fde_map:
            raise ValueError(f"{name}: 0x{rva:X} is not an FDE start")
        size,ptr=fde_map[rva]
        callers=calls.get(rva,[])
        rows.append(dict(rva=f"0x{rva:X}",name=name,category=category,
                         size=size,end=f"0x{rva+size:X}",fde_pointer=f"0x{ptr:X}",
                         direct_bl=len(callers),caller_examples=";".join(f"0x{c:X}" for c in callers[:15])))
    output.mkdir(parents=True,exist_ok=True)
    manifest=dict(source_elf_sha256=actual,source_elf_bytes=len(data),analysis="static Python ELF/ARM64 scan; NOT a Ghidra run",
                  elf_type="ET_DYN",machine="AArch64",section_count=struct.unpack_from("<H",data,60)[0],
                  dynsym_entries=symbols,undefined_dynsyms=undef,defined_dynsyms=symbols-undef,
                  relocations=relocs,fde_count=len(fdes),fde_nonoverlapping=True,
                  fde_covered_bytes=sum(size for _,size,_ in fdes),
                  fde_text_coverage_percent=round(100*sum(size for _,size,_ in fdes)/secs[".text"]["size"],3),
                  intra_module_bl=bl_total,distinct_bl_targets=len(calls),
                  intra_module_b=b_total,focus_count=len(rows))
    (output/"manifest.json").write_text(json.dumps(manifest,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    fields=["rva","name","category","size","end","fde_pointer","direct_bl","caller_examples"]
    with (output/"focus_functions.csv").open("w",newline="",encoding="utf-8") as file:
        w=csv.DictWriter(file,fieldnames=fields);w.writeheader();w.writerows(rows)
    (output/"focus_functions.tsv").write_text(
        "\n".join("\t".join((r["rva"],r["name"],r["category"],str(r["size"]))) for r in rows)+"\n",encoding="utf-8")
    with gzip.open(output/"fde_25803.csv.gz","wt",encoding="utf-8",newline="") as file:
        w=csv.writer(file);w.writerow(["index","entry_rva","length_bytes","end_exclusive","fde_rva"])
        for i,(pc,size,ptr) in enumerate(fdes):
            w.writerow([i,f"0x{pc:X}",size,f"0x{pc+size:X}",f"0x{ptr:X}"])
    if asm:
        directory=output/"asm"
        directory.mkdir(exist_ok=True)
        for row in rows:
            pc=int(row["rva"],16)
            end=pc+row["size"]
            result=subprocess.run(["llvm-objdump","-d","-z",f"--start-address=0x{pc:X}",
                                   f"--stop-address=0x{end:X}",str(elf)],
                                  capture_output=True,text=True,check=True)
            lines=[s for s in result.stdout.splitlines() if re.match(r"^\s*[0-9a-f]+:\s+[0-9a-f]{8}\s+",s)]
            if len(lines)*4!=row["size"]:
                raise ValueError(f"Disassembly incomplete for {row['name']}")
            header=f"; {row['name']} RVA={row['rva']} end={row['end']} FDE-size={row['size']}\n"
            (directory/f"{pc:08X}_{row['name']}.asm").write_text(header+"\n".join(lines)+"\n",encoding="utf-8")
    return manifest

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--elf",type=Path,default=DEFAULT_ELF)
    parser.add_argument("--out",type=Path,default=REPO/"derived/4.1.0/ghidra")
    parser.add_argument("--asm",action="store_true",help="Requires llvm-objdump; exports 54 actual instruction listings")
    args=parser.parse_args()
    print(json.dumps(write_atlas(args.elf,args.out,args.asm),indent=2,ensure_ascii=False))

if __name__=="__main__":
    main()
