---
title: HOME41 Ghidra PH4 EH4 上层调用者数据库
date: 2026-11-10
home_version: "4.1.0"
elf_sha256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
status: "sqlite_pass_ghidra_native_project_pending"
tags: [pokemon-home, Ghidra, ELF, PH4, EH4, SideData, SQLite, Obsidian]
---

# HOME 4.1.0：SideData 与 EH4 逆向调用者索引

> [!important] 文件身份及真实状态
> 已实际创建 HOME 4.1.0 ELF 原始机器码驱动的 SQLite 索引，数据库完整性检查返回 `ok`。它不是 Ghidra 专用的 `.gpr/.rep` 格式，当前环境没有安装 Ghidra 12.2，**本轮没有运行 Ghidra Decompiler**，没有凭空生成 C 反编译结果。要创建原生项目，见文末导入脚本。

## 1. 原生函数 0x50E994 更正：它是游标边界检查

```asm
50E994 LDR   X8,[X0,#8]       ; X8 = wrapper.record
50E998 SUB   X9,X1,X8         ; cursor - record
50E99C LDRH  W8,[X8,#0xD6]    ; SideDataLength
50E9A0 SUB   X9,X9,#0x10
50E9A4 ADD   X8,X8,#0xC8
50E9A8 CMP   X9,X8
50E9AC CSET  W0,LO
50E9B0 RET
```

在合法游标/长度下，返回的布尔值等价于 `cursor < Record+0xD8+SideDataLength`。函数未读取或比较 Tag ID，因此不能叫精确的 FindTag。建议研究名称：`HOME_SideData_TLV_CursorHasNext`。

## 2. 0x5306B4：先计算 CRC、解密后比较

```asm
5306EC LDUR W22,[X21,#0x0A]  ; EH4 Header CRC
5306F8 BL   0x530120         ; 计算密文 CRC32/XOR
530704 BL   0x53041C         ; AES-CBC 解密
530708 CMP  W22,W21          ; 比较保存 CRC 和计算 CRC
53070C B.EQ 0x530718
530714 STRB W8,[X19,#0x0C]   ; CRC 不匹配时 Core invalid flag
```

研究名称：`HOME_EH4_CRC_CompareAfterDecrypt`。该入口不是官方服务器保存 ACK 的直接证据。

## 3. 上层调用者数量（实际 ELF + FDE 分类）

| 被调用入口 | BL 调用点数 | 不同 FDE 调用者 |
|---|---:|---:|
| `0x50E994` | **562** | **113** |
| `0x5306B4` | **250** | **155** |
| 两者共同的调用函数 | — | **60** |
| 两者调用函数并集 | — | **208** |

与既有的 54 个研究重点函数合并去重后，Ghidra 导入 TSV 包含 **248 个唯一函数标签**；另有 **812 个实际 BL 调用点**可作为 Ghidra 分析书签导入。

### 3.1 第一批最值得反编译的共同调用者

| FDE RVA | FDE 大小 | TLV 边界检查 BL | CRC 解密 BL |
|---|---:|---:|---:|
| `0x5106D0` | 1,224B | 12 | 6 |
| `0x5120D0` | 1,292B | 12 | 6 |
| `0x515DF0` | 1,208B | 12 | 6 |
| `0x5162B0` | 1,208B | 12 | 6 |
| `0x517A10` | 1,224B | 12 | 6 |
| `0x517EE0` | 1,224B | 12 | 6 |

原生 `0x5106D0` 包含 `LDAXRB/STXRB` 原子访问、`DMB ISH`、`nn::os::WaitLightEvent` 及 7-way 分派表。确认它包含同步操作和多个处理模式，但暂时不能把它直接命名成 SaveManager 或网络保存事务。

## 4. 本轮实际数据库结构

离线数据库名：`HOME41_Ghidra_FDE_Xrefs.sqlite`。

| 表 | 实测条数 | 内容 |
|---|---:|---|
| `functions` | 25,803 | FDE 首/末地址、长度、FDE 指针、研究名称 |
| `calls` | 74,629 | BL callsite、caller FDE、callee RVA |
| `focus_anchors` | 54 | 已审阅的研究性核心入口 |
| `notable_path` | 1,973 | 重点入口的部分二跳逆调用路径 |
| `dynamic_symbols` | 593 | ELF 动态符号与类型 |
| `relocations` | 1,061 | .rela.dyn + .rela.plt |
| `sections` | 33 | ELF 区段列表 |

数据库主键、索引和 `named_callers` View 已创建，`PRAGMA integrity_check` 返回 `ok`。原始 ELF SHA256 是 `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`。

```sql
SELECT printf('0x%X', caller_function_rva) AS fde_entry,
       SUM(callee_target_rva=0x50E994) AS side_checks,
       SUM(callee_target_rva=0x5306B4) AS crc_unseals
FROM calls
WHERE callee_target_rva IN (0x50E994,0x5306B4)
GROUP BY caller_function_rva
HAVING side_checks>0 AND crc_unseals>0
ORDER BY side_checks DESC,crc_unseals DESC;
```

## 5. 真正的 Ghidra 项目数据库如何构建

已提交 [Home41ImportSeed.java](../../tools/ghidra/Home41ImportSeed.java)；在 Ghidra 12.2 + JDK25 中：

1. 新建项目并导入 HOME 4.1.0 的原始 `main.elf`，执行 Auto Analyze。
2. 执行 ImportSeed 脚本，传入 `ghidra_research_annotations.tsv`、`focus_direct_callers.csv`。
3. 脚本按当前 Ghidra 的 ImageBase + RVA 找地址，命名函数、写原生研究注释，并对 812 个 BL 书签进行标记。
4. 保存 Ghidra 项目，届时才实际生成 `.gpr/.rep`。
5. 如果需要补全剩余 FDE 入口，可选第三参数 `function_fde_index.tsv` 与第四参数 `1`（批量创建函数前先备份项目）。

```text
analyzeHeadless /private/projects HOME41 -import /private/main.elf
    -scriptPath /private/ghidra_scripts -analysisTimeoutPerFile 2400
    -postScript Home41ImportSeed.java
    /private/ghidra_research_annotations.tsv
    /private/focus_direct_callers.csv
    /private/function_fde_index.tsv 0
```

已有 [完整 Ghidra Headless 数据库工作流](../../.github/workflows/home41-ghidra-full-database.yml) 可以在 Runner 正常时产生真正的 Ghidra 项目、实际 C 和 Ghidra-derived SQLite；但此前多次 Actions 运行在**分配执行步骤之前失败**，故本笔记不声称已经生成原生项目。

## 6. 实际状态与下一技术关口

| 证据 | 状态 |
|---|---|
| 25,803 FDE、74,629 BL、SQLite integrity | **PASS，已实际执行** |
| 208 个上层 FDE、812 个 callsite、248 条标注 | **PASS，已生成数据文件** |
| 0x50E994 游标边界语义 | **原始 ELF 指令支持** |
| 0x5106D0 的同步+分派机器码 | **原始 ELF 指令支持** |
| Ghidra 导入并保存 .gpr/.rep | **NOT_EXECUTED** |
| Ghidra 实际导出的 C | **NOT_EXECUTED** |
| HOME 保存链及服务器所有权 | **NOT_CLOSED** |

后续应优先在 Ghidra 中恢复这 60 个共同 caller 的参数对象类型、控制流 switch、Core invalid 标志消费者，再向上追踪 Box/MRK/K/Store 和网络事务边界。不要只因出现 EH4 解密就判定服务器操作。
