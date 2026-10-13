#!/usr/bin/env python3
"""HOME 4.1.0 Pokédex topics native consumer: extract literal flag metadata.

Evidence chain:
0x179540: group*0x78B8 + slot*0x138 and indexed u32 pairs
0x179598: per-group bit shift table at 0x62D39C
0x1795B4: group 5 special 0x180-byte u16/u16 pair table at 0x62D21A
0x225C30: query called with pair, returned bitmask's semantic name pending

All locations strictly tied to exact ELF SHA256. Any unexpected layout aborts.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import struct
from pathlib import Path
from home41_elf_resource_xrefs import elf_segments
from home41_elf_disasm_windows import window

SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
GROUP_TABLE=0x62D39C
GROUP5_PAIRS=0x62D21A


def map_bytes(data: bytes, segments, va: int, size: int) -> bytes:
    for seg in segments:
        begin=seg["vaddr"]
        if begin<=va and va+size<=begin+seg["size"]:
            off=seg["file_offset"]+va-begin
            return data[off:off+size]
    raise ValueError(f"ELF virtual address 0x{va:X} is not backed by file bytes")


def extract(data: bytes):
    if hashlib.sha256(data).hexdigest()!=SHA:
        raise ValueError("different HOME build; cannot reuse native table constants")
    segments=elf_segments(data)
    # Group offsets loaded as u32 and right-shifted in function 0x179540.
    raw=map_bytes(data,segments,GROUP_TABLE,7*4)
    shifts=list(struct.unpack("<7I",raw))
    # Do not hardcode 0..6; these are native bit positions, not group indices.
    if len(shifts)!=7 or any(x>63 for x in shifts):
        raise ValueError("observed group table is not a valid seven-entry bit shift array")
    # Compiler compares a set of 96 four-byte (u16,u16) tuples, not an opaque blob.
    blob=map_bytes(data,segments,GROUP5_PAIRS,0x180)
    pairs=list(struct.iter_unpack("<HH",blob))
    if len(pairs)!=96:
        raise ValueError("unexpected group 5 special pair count")
    # Explicit ISA checks to tie tables to actual load/compare and group branch.
    needles={
        0x179550:("mov","#0x78b8"),
        0x179554:("mov","#0x138"),
        0x179558:("umaddl","w1"),
        0x179560:("umaddl","w2"),
        0x179568:("ldr","#0x30"),
        0x17956C:("ldr","#0x54"),
        0x1795A4:("ldr","lsl #2"),
        0x1795A8:("cmp","#5"),
        0x1795C8:("cmp","#0x180"),
        0x1795D0:("ldrh","[x11, x9]"),
        0x1795E0:("ldrh","#2"),
        0x1795EC:("tbz","#8"),
        0x1795F0:("lsr","x0"),
        0x1795F4:("and","#1"),
    }
    shown=[]
    mapping={}
    for label,start,stop in (
        ("topics_group_slot_and_native_flag_checker",0x179540,0x179608),
        ("topics_20_slot_condition_consumer",0x179640,0x179DC0),
        ("topics_species_form_native_flag_query",0x225C30,0x225E90),
        ("topics_owner_reference",0x12E50,0x12F80),
    ):
        instr=window(data,segments,start,0,stop-start)
        shown.append((label,start,instr))
        for pc,mnem,ops,hx in instr:
            mapping[pc]=(mnem,ops,hx)
    for pc,(opcode,term) in needles.items():
        insn=mapping.get(pc)
        if not insn or insn[0]!=opcode or term not in insn[1]:
            raise ValueError(f"unmatched raw native opcode at 0x{pc:X}: {insn}")
    return {"elf_sha256":SHA,"group_bit_shifts":shifts,
            "group_5_pairs":pairs,
            "group_5_pairs_count":len(pairs),
            "literal_table_va":{"group_shifts":GROUP_TABLE,"group5_special_pairs":GROUP5_PAIRS},
            "record_access":{"group_stride":0x78B8,"slot_stride":0x138,
                             "species_candidate_first_offset":0x30,
                             "form_candidate_first_offset":0x54},
            "opcodes_verified":len(needles),"windows":shown}


def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("--elf",type=Path,required=True)
    parser.add_argument("--out-dir",type=Path,required=True)
    args=parser.parse_args()
    d=extract(args.elf.read_bytes())
    args.out_dir.mkdir(parents=True,exist_ok=True)
    data={k:v for k,v in d.items() if k not in ("windows","group_5_pairs")}
    data["group_5_pairs"]=[{"row":i,"species_candidate_u16":a,
                           "form_candidate_u16":b}
                           for i,(a,b) in enumerate(d["group_5_pairs"])]
    data["interpretation"]="Game labels remain hypotheses until linked to native group enum. Bit-position vector and pair table are byte-exact."
    (args.out_dir/"p6_topics_native_flags.json").write_text(
        json.dumps(data,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with (args.out_dir/"p6_topics_group5_special_pairs.csv").open("w",newline="",encoding="utf-8-sig") as h:
        w=csv.DictWriter(h,fieldnames=["row","species_candidate_u16","form_candidate_u16"])
        w.writeheader();w.writerows(data["group_5_pairs"])
    lines=[
        "# P6: HOME 4.1.0 图鉴 Topics 真正 Native 消费者", "",
        "原始 ELF SHA256: \`"+SHA+"\`", "",
        "确认布局：group stride \`0x78B8\`；slot stride \`0x138\`。",
        "编译器使用 \`UMADDL\` 和 \`LDR\` 对记录内字段进行访问，",
        "下文完整列出相关函数的实际机器码、地址和反汇编结果。",
        "group 5 额外比较一组 96×(u16,u16) 对。",
        "直接 ELF 证实的是数值与比较，不能把 UI 可见性/完成条件",
        "命名当成已验证事实。", "",
        "## 七组 Native 返回标志位的右移位数", "",
        "| 组号 | Native 位右移量 |", "|---:|---:|",
        *[f"| {i} | {v} |" for i,v in enumerate(d["group_bit_shifts"])], ""
    ]
    for label,address,instr in d["windows"]:
        lines.extend([f"## {label} (main+0x{address:X})", "", "```asm"])
        for pc,mnem,ops,hx in instr:
            marker="  << EXACT OPCODE ASSERTION" if pc in (
                0x179550,0x179554,0x179558,0x179560,0x179568,0x17956C,
                0x1795A4,0x1795A8,0x1795C8,0x1795D0,0x1795E0,
                0x1795EC,0x1795F0,0x1795F4) else ""
            lines.append(f"0x{pc:08X} {hx:<8} {mnem:<8} {ops}{marker}")
        lines+=["```",""]
    (args.out_dir/"p6_topics_native_accessors.md").write_text(
        "\n".join(lines)+"\n",encoding="utf-8")
    print(json.dumps({"sha":d["elf_sha256"],"group_bit_shifts":d["group_bit_shifts"],
                      "group5_pair_count":len(d["group_5_pairs"]),
                      "pair_head":d["group_5_pairs"][:8],
                      "verified_opcodes":d["opcodes_verified"]}))

if __name__=="__main__":
    main()
