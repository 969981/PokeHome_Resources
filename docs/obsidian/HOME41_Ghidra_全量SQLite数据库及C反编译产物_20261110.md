---
title: HOME 4.1.0 Ghidra 12.2 全量反编译数据库及 C 文件索引
aliases: [HOME41 Ghidra Full DB, HOME41 全量 C 导出]
date: 2026-11-10
home_version: "4.1.0"
source_elf_sha256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
analysis_engine: Ghidra-12.2
status: ghidra_15415_c_and_sqlite_verified_fde_25803_recovery_pending
tags: [pokemon-home, elf, ghidra, aarch64, decompile, sqlite, obsidian]
---

# HOME41 完整 Ghidra 数据库与 C 伪代码导出

## 0. 已完成的真实全量 Ghidra 导出（2026-11-10）

[**完整成功的 GitHub Actions Run #42762729226**](https://github.com/969981/PokeHome_Resources/actions/runs/42762729226) 的每个步骤（Ghidra Headless、SQLite、C ZIP、原生项目归档、各 Artifact 上传）结论均为 `success`。

| 指标 | 实际数值（Ghidra 12.2） |
|---|---:|
| Ghidra 自动发现函数 | **15,415** |
| 逐函数 C 反编译成功 | **15,415 / 15,415** |
| Ghidra C 失败 / 空文本 | **0** |
| 导出指令 | **1,029,451** |
| 导出全局引用/XREF | **423,988** |
| SQLite `PRAGMA integrity_check` | **ok** |
| 原生 Ghidra 项目 Artifact | **23,971,958B** |
| SQLite Artifact | **54,940,637B**（原始 sqlite 约 242 MiB） |
| C ZIP Artifact | **12,349,420B**（内部约 11MiB 的 C ZIP） |
| 原始 NDJSON Artifact | **24,242,104B** |

**四种可下载真实产物：**
- [Ghidra 原生 `.gpr/.rep` 项目](https://github.com/969981/PokeHome_Resources/actions/runs/42762729226/artifacts/13738248720)
- [Ghidra-derived SQLite 数据库与 Manifest](https://github.com/969981/PokeHome_Resources/actions/runs/42762729226/artifacts/13739080332)
- [**15,415 个单独 C 文件 ZIP + 全函数清单**](https://github.com/969981/PokeHome_Resources/actions/runs/42762729226/artifacts/13737949810)
- [可重建 SQLite 的完整 Ghidra NDJSON](https://github.com/969981/PokeHome_Resources/actions/runs/42762729226/artifacts/13739125238)

**重要限制**：原始 ELF 有 `25,803` 个有效 FDE，Ghidra 自动分析只发现 `15,415` 个函数。这里的“全量成功”严格指 **对当前 Ghidra 所识别的 15,415 个函数全部成功反编译**，不是对 25,803 FDE 的 100% C 覆盖。后续 [FDE 自动补建增强 Run #42763137320](https://github.com/969981/PokeHome_Resources/actions/runs/42763137320) 尝试逐个补建缺失 FDE 入口，并记录重叠/未能建函数的状态；其结果要以实际 Run 为准。

**小型报告字段修正**：成功 Run 的 `home41_build_sqlite.py` 在构建报告时把 JSON 布尔值 `true` 与字符串 `"True"` 比较，导致 `decompile_requested=false` 的报告字段误报；实际 `decompiled_ok=15415`，`decompiled_failed=0`，且 `C ZIP 15415/15415` 通过。该报告布尔字段已在后续源码提交 `e0821ea1` 修复，**不影响已有 SQLite 和 C 文件的真实性**。

## 1. 源数据身份与执行边界

本工作流直接分析 `4.1.0/57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf`。原始 SHA256 为 `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`，ELF64/AArch64/ET_DYN，GNU Build ID `325195bcb7366b15bae55171070dc4b8d7f33c0d`。

- [完整 Ghidra 12.2 GitHub Actions 工作流](../../.github/workflows/home41-ghidra-full-database.yml)
- [Ghidra 12.2 原生导出脚本 Home41Export.java](../../tools/ghidra/Home41Export.java)
- [流式 NDJSON → SQLite 数据库构建工具](../../tools/ghidra/home41_build_sqlite.py)
- [流式 NDJSON → 每函数独立 C 文件 ZIP](../../tools/ghidra/home41_extract_c.py)
- [2026-11-10 实际运行](https://github.com/969981/PokeHome_Resources/actions/runs/42762044796)

**未宣称“全部原始 C 源码还原”**：Ghidra C 是经静态反编译生成的**伪代码**，不包含原始开发者变量名、注释、类型定义及未恢复的动态调用语义。对于未成功反编译的函数，必须保留失败原因并结合原始机器码继续人工处理。

## 2. 应交付的四类真实 Ghidra Artifact

| Artifact 名 | 实际文件名 | 用途 |
|---|---|---|
| `HOME41-Ghidra12-native-project` | `HOME410_ghidra_project.tar.zst`，内部 `HOME410.gpr` 和 `HOME410.rep` | Ghidra 12.2 GUI 可继续编辑的真正项目 |
| `HOME41-Ghidra12-SQLite` | `home41_main_410.sqlite` 与 `home41_ghidra_manifest.json` | 函数、符号、汇编、重定位后引用、定义数据和 C |
| `HOME41-Ghidra12-NDJSON` | `home41_ghidra_events.ndjson.gz` | Ghidra 脱敏前的可重建 JSONL 全量事件 |
| `HOME41-Ghidra12-all-decompiled-C` | `HOME410_all_decompiled_C.zip`、`decompiled_index.csv`、`decompiled_manifest.json` | 每个反编译成功的函数一份 `decompiled/<function_entry>.c`，含失败函数清单 |

Ghidra Project 是主工作区，SQLite 与 C ZIP 是**从实际 Ghidra 自动分析结果派生**。可打开的 GPR/REP 需要两个文件（/目录）同时保存。不要把之前的仅 ELF-FDE 静态 SQLite 误认成这次全量 Ghidra-derived SQLite。

## 3. 完整性校验门槛

构建脚本只有收到 `Home41Export.java` 的最终 `summary.complete=true`，才允许 SQLite 报告 `COMPLETE`。检查 `functions`、`instructions`、`references_full` 等导出记录与最终计数一致；`PRAGMA integrity_check == 'ok'`。

C ZIP 逐一读取 `type=decompile` 的结果：
- `functions_count == decompiler_attempted`；每一个被发现的函数必须恰好一条反编译结果；
- `status=OK` 且 `c` 非空，写入独立 `.c`；
- `FAILED`、`EXCEPTION`、`EMPTY_C` 等单独写入 CSV，不虚构成功的函数；
- ZIP 中 `decompiled/*.c` 的数量 == 成功数，包含 `decompiled_index.csv` 和 `decompiled_manifest.json`；
- Ghidra 每次反编译 timeout=20s；不能因为部分函数失败就写成“全部 C 成功”。

如果工作流失败，应先查看 `diagnostics` Artifact 与 Run 中的具体步骤，区分 Java 编译、Ghidra 导入/自动分析、反编译、数据序列化、SQLite 校验、ZIP 归档与 artifact 上传。**只有实际存在 Artifact、报告数量匹配才能将本笔记状态升为 verified**。

## 4. 常用 SQLite 查询

```sql
-- 全函数清单
SELECT entry,name,namespace,body_bytes,signature
FROM functions ORDER BY entry;

-- 反编译成功率
SELECT status, COUNT(*) AS n FROM decompilation
GROUP BY status ORDER BY n DESC;

-- 反编译成功的函数及 C 长度
SELECT f.entry,f.name,LENGTH(d.c) AS chars
FROM functions f JOIN decompilation d ON d.entry=f.entry
WHERE d.status='OK' ORDER BY chars DESC;

-- EH4 CRC 检查调用者（实际 Ghidra 反汇编后引用图）
SELECT r.from_addr,r.to_addr,r.ref_type
FROM references_full r
WHERE r.is_call=1 AND r.to_addr LIKE '%5306b4'
ORDER BY r.from_addr;

-- 所有 Ghidra 定义的字符串预览
SELECT addr,preview FROM string_items WHERE preview LIKE '%HOME%' LIMIT 200;
```

若 Ghidra Image Base 重定位，`references_full.to_addr` 的字符串可能使用带前导零的大写或小写形式。上例 `LIKE` 只是示范，精确关联应先从 `functions.entry` 查确定地址格式后再使用相等条件。

## 5. Windows 本地打开 Ghidra 原生项目

将 `HOME410_ghidra_project.tar.zst` 解压到同一个目录，确认：

```text
HOME410.gpr
HOME410.rep/
  idata/
  ... Ghidra project database files ...
```

启动 **相同或兼容版本的 Ghidra 12.2**，在 GUI 中打开 `HOME410.gpr`；然后从 Symbol Tree / Functions、Decompiler、References 继续处理 `0x50E994` 与 `0x5306B4` 以及 60 个共同上层调用者。注意 `0x50E994` 是 SideData 游标边界辅助函数，不是独立的“特定 Tag 查找器”。

## 6. 与原始 ELF 静态证据的区分

既有本仓静态审计：25,803 条准确 FDE 范围、74,629 个本模块直接 BL、54 个重点函数原始汇编。这些属于 `ELF_STATIC` 证据。Ghidra 真实导出的 `functions/instructions/references/decompilation` 属于 `GHIDRA_HEADLESS` 证据，两者函数识别的覆盖范围可能不同。

相关：[PH4/EH4 与 SideData 60 个共同调用者分析](HOME41_Ghidra_PH4_EH4_SideData_调用者数据库_20261110.md)；[六游戏 PKM 数据结构与加解密](https://github.com/969981/HOME-Live-Plugin-CHS/tree/home-core-editor/docs/research/home-pkm-knowledge-base)。
