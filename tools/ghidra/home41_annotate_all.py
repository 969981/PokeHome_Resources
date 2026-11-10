#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Annotate every actual Ghidra instruction and decompiled C function.

All comments are conservative static explanations. Function business purpose
is VERIFIED only where original machine code was independently established.
Unknown functions remain explicitly UNKNOWN. Original C files are untouched.
"""
from __future__ import annotations
import argparse,bisect,csv,hashlib,json,re,sqlite3
from collections import Counter
from pathlib import Path

SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
BASE=0x100000
PART_SIZE=40*1024*1024
# Confirmed via original AArch64 ELF bytes and Ghidra 12.2 C cross-checks.
NATIVE={
0x50E994:("HOME_SideData_CursorHasNext","检查 SideData TLV 迭代游标和记录长度边界；不检查 Tag ID"),
0x5306B4:("HOME_EH4_CRC_CheckedDecrypt","计算 EH4 密文 CRC、执行 AES-CBC 解密、比较 CRC 并置错误标志"),
0x530120:("HOME_EH4_CiphertextCRC","按块 CRC32 后 XOR 汇总 EH4 密文校验"),
0x530214:("HOME_EH4_AES_CBC_Encrypt","AES-CBC 加密 EH4 payload"),
0x53041C:("HOME_EH4_AES_CBC_Decrypt","AES-CBC 解密 EH4 payload"),
0x5303F4:("HOME_EH4_CopyDecrypt","复制 EH4 工作区并解密"),
0x5305FC:("HOME_PH4_Seal","把 PH4 密封为 EH4，更新 CRC"),
0x53A010:("PKM_Checksum16","小端 16 位字累加生成 PKM body Checksum"),
0x53A0C0:("PKM_LCG_Encrypt","使用 EC 和 LCG 高16位 XOR 加密游戏 PKM"),
0x53A140:("PKM_LCG_Decrypt","使用 EC 和 LCG 高16位 XOR 解密游戏 PKM"),
0x53FBB0:("LGPE_PB7_Decode","LGPE PB7 原始 PKM 解密入口"),
0x53FC20:("LGPE_PB7_Encode","LGPE PB7 原始 PKM 加密入口"),
0x549898:("SWSH_PK8_Decode","剑盾 PK8 原始 PKM 解密入口"),
0x5498F8:("SWSH_PK8_Encode","剑盾 PK8 原始 PKM 加密入口"),
0x543F74:("PLA_PA8_Decode","阿尔宙斯 PA8 原始 PKM 解密入口"),
0x543FA4:("PLA_PA8_Encode","阿尔宙斯 PA8 原始 PKM 加密入口"),
0x541618:("BDSP_PB8_Decode","BDSP PB8 原始 PKM 解密入口"),
0x541678:("BDSP_PB8_Encode","BDSP PB8 原始 PKM 加密入口"),
0x54B0A0:("SV_PK9_Decode","朱紫 PK9 原始 PKM 解密入口"),
0x54B100:("SV_PK9_Encode","朱紫 PK9 原始 PKM 加密入口"),
0x545888:("ZA_PA9_Decode","Z-A PA9 原始 PKM 解密入口"),
0x5458E0:("ZA_PA9_Encode","Z-A PA9 原始 PKM 加密入口"),
0x50AA70:("LGPE_ToPH4","LGPE PB7 → PH4 Core/Tag 转换"),
0x50AF70:("PH4_ToLGPE","PH4 Core/Tag → LGPE PB7 转换"),
0x50D280:("SWSH_ToPH4","剑盾 PK8 → PH4 Core/Tag2 转换"),
0x50D780:("PH4_ToSWSH","PH4 Core/Tag2 → 剑盾 PK8 转换"),
0x50BE40:("PLA_ToPH4","阿尔宙斯 PA8 → PH4 Core/Tag3 转换"),
0x50C330:("PH4_ToPLA","PH4 Core/Tag3 → PA8 转换"),
0x50B490:("BDSP_ToPH4","BDSP PB8 → PH4 Core/Tag4 转换"),
0x50B930:("PH4_ToBDSP","PH4 Core/Tag4 → PB8 转换"),
0x50DD00:("SV_ToPH4","朱紫 PK9 → PH4 Core/Tag5 转换"),
0x50E1F0:("PH4_ToSV","PH4 Core/Tag5 → PK9 转换"),
0x50C840:("ZA_ToPH4","Z-A PA9 → PH4 Core/Tag7 转换"),
0x50CD30:("PH4_ToZA","PH4 Core/Tag7 → PA9 转换"),
0x504CDC:("FRLG_RawImport","FRLG 第三世代格式读取/导入"),
0x50A460:("FRLG_ToPH4","FRLG 数据映射至 PH4 Core/Tag"),
0x50E8B0:("HOME_SideData_CreateTLV","创建 SideData TLV 的原生辅助入口"),
0x52D120:("HOME_Champions_Tag6","HOME Champions Tag6 元数据处理"),
}
def address(s):return int(s.split("::")[-1],16)
def native(s):return address(s)-BASE
def safe(s):return re.sub(r"[\t\r\n]+"," ",str(s or "")).replace("*/","* /")[:700]
def digest(path):
    h=hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda:f.read(4*1024*1024),b""):h.update(chunk)
    return h.hexdigest()
def observed(c):
    terms=[]
    for rx,name in (
        (r"\b(?:memcpy|memset|memmove)\s*\(","内存复制/初始化"),
        (r"\b(?:malloc|free)\s*\(","内存分配/释放"),
        (r"WaitLightEvent|SignalLightEvent|ExclusiveMonitor","同步/原子操作"),
        (r"DataMemoryBarrier|ClearExclusiveLocal","内存顺序控制"),
        (r"\b(?:switch|case)\b","多分支分派"),
        (r"\breturn\b","有返回值")):
        if re.search(rx,c):terms.append(name)
    if terms:return "用途尚未确认；代码可观察到："+", ".join(terms),"BEHAVIOR_OBSERVED"
    return "用途尚未确认；当前仅有原生反汇编与 C 伪代码，无充分业务语义证据","UNRESOLVED"
def purpose(entry,name,c):
    rva=native(entry)
    if rva in NATIVE:
        label,note=NATIVE[rva];return label,note,"VERIFIED_NATIVE_STATIC"
    if name and not name.startswith(("FUN_","thunk_FUN_","LAB_","DAT_")):
        return safe(name),("Ghidra 保留符号名称 "+safe(name)+"；调用者与业务副作用需独立复核"),"SYMBOL_EVIDENCE"
    note,level=observed(c)
    return f"SUB_{rva:08X}",note,level
def cnote(line):
    t=line.strip()
    if not t or t.startswith(("/*","*","//","#")) or "*/" in t:return ""
    if t in ("{","}","};"):return "作用域/控制流边界"
    if "WARNING:" in t:return "反编译器告警；须复核原始机器码"
    if re.search(r"\breturn\b",t):return "返回表达式；具体返回语义取决于调用者"
    if re.search(r"\b(?:if|else if)\s*\(",t):return "条件判断/分支"
    if re.search(r"\b(?:do|while|for)\b",t):return "循环/迭代"
    if re.search(r"\b(?:memcpy|memset|memmove)\s*\(",t):return "内存复制、清零或移动"
    if "ExclusiveMonitor" in t or "DataMemoryBarrier" in t:return "AArch64 独占访问或内存屏障"
    if "WaitLightEvent" in t or "SignalLightEvent" in t:return "nn::os 事件等待/通知"
    if "FUN_" in t and "(" in t:return "调用尚未恢复正式名称的函数"
    if re.search(r"(?<![!<>=])=(?!=)",t):return "赋值或状态更新，字段名称仍待恢复"
    return "反编译表达式/局部变量；未验证业务语义"
def opcode(mn,display,refs):
    m=str(mn or "").upper()
    if m=="BL":return "CALL","PC 相对直接调用；Ghidra 目标："+("、".join(refs[:2]) or "待解析")
    if m=="BLR":return "INDIRECT_CALL","寄存器间接调用；可能为函数指针或虚表"
    if m in ("RET","RETAA","RETAB"):return "RETURN","按调用约定返回"
    if m in ("B","BR","BRAA","BRAB"):return "JUMP","无条件跳转/间接分派"
    if m.startswith("B.") or m in ("CBZ","CBNZ","TBZ","TBNZ"):
        return "BRANCH","基于标志位、寄存器零值或位测试的条件分支"
    if m.startswith(("LDR","LDUR","LDP","LDAR","LDXR","LDAX","LD1","LD2")):
        return "READ","按指令寻址模式从内存读取；对象归属待追踪"
    if m.startswith(("STR","STUR","STP","STLR","STXR","STLX","ST1","ST2")):
        return "WRITE","按指令寻址模式向内存写入；字段归属待追踪"
    if m.startswith(("CMP","CMN","CCMP","TST","FCMP")):return "COMPARE","比较/位测试，为条件分支准备标志"
    if m.startswith(("MOV","FMOV","DUP","INS","UMOV","SMOV")):
        return "MOVE","装载或复制寄存器/向量数据"
    if m in ("ADR","ADRP"):return "PC_REL","构造 PC 相对地址，结合重定位和邻近指令解读"
    if m.startswith(("ADD","SUB","MUL","MADD","MSUB","NEG","ADC","SBC","UDIV","SDIV","FADD","FMUL","FSUB")):
        return "MATH","整数/浮点算术或地址偏移"
    if m.startswith(("AND","ORR","EOR","BIC","LSL","LSR","ASR","ROR","UBFM","SBFM","UBFX","SBFX")):
        return "BITWISE","位逻辑、移位或位域处理"
    if m in ("DMB","DSB","ISB","CAS","CASA","CASAL"):return "SYNC","内存屏障或原子访问"
    if m in ("NOP","PACIASP","AUTIASP","HINT","BTI"):return "HINT","无操作/指针认证/架构提示"
    return "UNRESOLVED","保留真实操作码与操作数，精确语义待复核"
def split_file(path,dirname):
    dirname.mkdir(parents=True,exist_ok=True)
    total=hashlib.sha256();parts=[]
    with path.open("rb") as f:
        i=0
        while data:=f.read(PART_SIZE):
            p=dirname/f"annotations.sqlite.part{i:04d}.bin"
            p.write_bytes(data);total.update(data)
            parts.append({"path":p.name,"size":len(data),
                          "sha256":hashlib.sha256(data).hexdigest()})
            i+=1
    return {"size":path.stat().st_size,"sha256":total.hexdigest(),"parts":parts}
def annotate_c(src,dst,label,meaning,level):
    dst.parent.mkdir(parents=True,exist_ok=True)
    n=0;inside=False
    with src.open("r",encoding="utf-8") as inp,dst.open("w",encoding="utf-8") as out:
        out.write("/* HOME41 静态自动注释；并非任天堂原始源代码\n")
        out.write(" * 函数研究名："+safe(label)+"\n * 用途/行为："+safe(meaning)+"\n")
        out.write(" * 证据等级："+level+"；原有 Ghidra C 表达式未改动\n */\n")
        for line in inp:
            text=line.strip()
            if text.startswith("/*"):inside=True
            explanation="" if inside or line.rstrip().endswith("\\") else cnote(line)
            if explanation:
                line=line.rstrip("\n")+" // [自动静态注释] "+explanation+"\n";n+=1
            out.write(line)
            if "*/" in text:inside=False
    return n
def execute(db_path,c_root,index_path,fde_path,out):
    if out.exists() and any(out.iterdir()):raise ValueError("Destination must be empty")
    out.mkdir(parents=True,exist_ok=True)
    src=sqlite3.connect("file:"+str(db_path.resolve())+"?mode=ro",uri=True)
    src.row_factory=sqlite3.Row
    if src.execute("PRAGMA integrity_check").fetchone()[0]!="ok":raise ValueError("Ghidra DB corrupt")
    counts={t:src.execute("SELECT COUNT(*) FROM "+t).fetchone()[0]
            for t in ("functions","instructions","references_full","decompilation")}
    if counts!={"functions":15415,"instructions":1029451,"references_full":423988,
               "decompilation":15415}:raise ValueError("Unexpected original analysis counts")
    row=src.execute("SELECT value FROM metadata WHERE key='original_elf_sha256'").fetchone()
    if not row or row[0]!=SHA:raise ValueError("Wrong ELF identity")
    with index_path.open(newline="",encoding="utf-8") as f:
        idx={r["entry"]:r for r in csv.DictReader(f)}
    if len(idx)!=15415 or any(r["status"]!="OK" for r in idx.values()):
        raise ValueError("Original C index incomplete")
    refs={}
    for frm,to in src.execute("SELECT from_addr,to_addr FROM references_full WHERE is_call=1"):
        if len(refs.get(frm,()))<3:refs.setdefault(frm,[]).append(to)
    annotation_db=sqlite3.connect(out/"annotation_work.sqlite")
    annotation_db.executescript("""
    PRAGMA journal_mode=DELETE;
    CREATE TABLE function_annotations(entry TEXT PRIMARY KEY,rva TEXT,original_name TEXT,
        label TEXT,purpose TEXT,evidence_level TEXT,c_lines INTEGER,c_file TEXT);
    CREATE TABLE instruction_annotations(addr TEXT PRIMARY KEY,bytes_hex TEXT,
        mnemonic TEXT,display_text TEXT,behavior_class TEXT,comment TEXT,
        candidate_function TEXT);
    CREATE INDEX idx_function_level ON function_annotations(evidence_level);
    CREATE INDEX idx_instruction_behavior ON instruction_annotations(behavior_class);
    """)
    source_count=Counter();starts=[];c_lines=0
    with (out/"function_catalog.csv").open("w",newline="",encoding="utf-8") as f:
        writer=csv.writer(f)
        writer.writerow(["entry","rva","original_name","label","purpose",
                         "evidence_level","c_lines_annotated","c_filename"])
        for fun in src.execute("SELECT entry,name,min_addr,max_addr FROM functions ORDER BY entry"):
            entry=fun["entry"];name=fun["name"];i=idx.get(entry)
            if not i:raise ValueError("Missing C "+entry)
            file=Path(i["zip_member"]).name
            original=c_root/file
            if not original.is_file():raise FileNotFoundError(original)
            label,meaning,level=purpose(entry,name,original.read_text(encoding="utf-8"))
            lines=annotate_c(original,out/"c_annotated"/file,label,meaning,level)
            c_lines+=lines;source_count[level]+=1
            t=(entry,f"0x{native(entry):X}",name,label,meaning,level,lines,file)
            writer.writerow(t)
            annotation_db.execute("INSERT INTO function_annotations VALUES(?,?,?,?,?,?,?,?)",t)
            try:starts.append((address(fun["min_addr"]),address(fun["max_addr"]),entry))
            except (ValueError,TypeError):pass
    annotation_db.commit()
    starts.sort()
    startnums=[x[0] for x in starts]
    asm_dir=out/"asm_annotated";asm_dir.mkdir()
    part=0;curbytes=0;asm=None;line_count=0;types=Counter()
    try:
        for addr,b,m,display in src.execute(
                "SELECT addr,bytes_hex,mnemonic,display_text FROM instructions ORDER BY addr"):
            kind,note=opcode(m,display,refs.get(addr,[]))
            try:
                pos=bisect.bisect_right(startnums,address(addr))-1
                cand=starts[pos][2] if pos>=0 and address(addr)<=starts[pos][1] else ""
            except (ValueError,TypeError):cand=""
            annotation_db.execute("INSERT INTO instruction_annotations VALUES(?,?,?,?,?,?,?)",
                                  (addr,b,m,display,kind,note,cand))
            line=(f"{addr}\t{b or '-'}\t{display or m or ''}"
                  f"\t// [{kind}] {note}\t{cand or 'NO_FUNCTION_CANDIDATE'}\n").encode()
            if asm is None or curbytes+len(line)>PART_SIZE:
                if asm:asm.close()
                asm=(asm_dir/f"asm.part{part:04d}.tsv").open("wb")
                part+=1;curbytes=0
            asm.write(line);curbytes+=len(line)
            line_count+=1;types[kind]+=1
            if line_count%50000==0:annotation_db.commit()
    finally:
        if asm:asm.close()
    annotation_db.commit()
    if line_count!=counts["instructions"]:raise ValueError("Missing opcode annotations")
    if annotation_db.execute("PRAGMA integrity_check").fetchone()[0]!="ok":
        raise ValueError("Annotation database damaged")
    annotation_db.close();src.close()
    bin_manifest=split_file(out/"annotation_work.sqlite",out/"annotation_db")
    (out/"annotation_work.sqlite").unlink()
    lookup={}
    with (out/"function_catalog.csv").open(newline="",encoding="utf-8") as f:
        for frow in csv.DictReader(f):lookup[frow["rva"].upper()]=frow
    fde_match=0;fde_total=0
    with fde_path.open(newline="",encoding="utf-8") as f,(
         out/"fde_catalog.csv").open("w",newline="",encoding="utf-8") as o:
        w=csv.writer(o)
        w.writerow(["rva","fde_bytes","ghidra_bytes","recovery_status",
                    "semantic_status","label","purpose"])
        for row in csv.DictReader(f):
            key=f"0x{int(row['rva'],16):X}"
            item=lookup.get(key);fde_total+=1
            if item:fde_match+=1
            w.writerow([row["rva"],row["fde_bytes"],row["ghidra_bytes"],row["status"],
                item["evidence_level"] if item else "NOT_DECOMPILED",
                item["label"] if item else "",
                item["purpose"] if item else "有效 FDE 起点；本次 Ghidra 未识别为独立 C 函数，业务用途待查"])
    if fde_total!=25803:raise ValueError("Incomplete FDE catalog "+str(fde_total))
    report={"status":"STATIC_ANNOTATION_GENERATED",
      "source_run":42763137320,"elf_sha256":SHA,"input_counts":counts,
      "annotated_functions":15415,"function_levels":dict(source_count),
      "annotated_c_files":15415,"annotated_c_lines":c_lines,
      "annotated_instructions":line_count,"opcode_categories":dict(types),
      "asm_parts":part,"annotation_sqlite":bin_manifest,
      "fde_total":fde_total,"fde_ghidra_matches":fde_match,
      "fde_not_ghidra_matches":fde_total-fde_match,
      "important_caveat":"These are static opcode and C-expression annotations; unknown business purposes remain UNKNOWN; not official source."}
    (out/"annotation_manifest.json").write_text(
        json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    (out/"README.md").write_text(
        "# HOME 4.1.0 全量指令与 C 注释（静态证据分级）\n\n"
        "源码原始 SHA-256: "+SHA+"\n\n"
        "- c_annotated/: 15,415 个 C 函数逐条非空代码行的解释，保留原代码不改写\n"
        "- asm_annotated/: 1,029,451 条真实 Ghidra 指令地址/机器码/操作数/解释，一行一条\n"
        "- function_catalog.csv: 每个 Ghidra 函数的用途、来源和置信度\n"
        "- fde_catalog.csv: 原始 25,803 条 FDE，未识别者标记 NOT_DECOMPILED\n"
        "- annotation_db/: 独立 SQLite 注释数据库的可无损拼接原始字节片（<=40MiB）\n"
        "- annotation_manifest.json: 统计、原始版本、完整 SHA256 和每片 SHA256\n\n"
        "等级: VERIFIED_NATIVE_STATIC 仅用于已经核查的原生功能；SYMBOL_EVIDENCE 是原始符号线索；"
        "BEHAVIOR_OBSERVED 仅表示观察到 API/算术等静态特征；UNRESOLVED 不作业务断言。\n"
        "逐行注释是**机器级/表达式级的自动解释**，不能等同于每个函数的真实业务逻辑均已人工恢复。\n",
        encoding="utf-8")
    print(json.dumps(report,ensure_ascii=False,indent=2))
def main():
    p=argparse.ArgumentParser()
    for arg in ("db","c-root","index","fde","out"):
        p.add_argument("--"+arg,type=Path,required=True)
    v=p.parse_args()
    execute(v.db,v.c_root,v.index,v.fde,v.out)
if __name__=="__main__":main()
