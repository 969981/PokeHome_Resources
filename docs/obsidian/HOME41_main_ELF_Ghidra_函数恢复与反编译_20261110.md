---
title: HOME 4.1.0 main ELF Ghidra 函数恢复
aliases: [HOME41 Ghidra, HOME41 FDE 25803]
date: 2026-11-10
home_version: 4.1.0
elf_sha256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
status: native_static_verified_ghidra_not_executed
tags: [pokemon-home, ghidra, elf, aarch64, fde, obsidian]
---

# HOME 4.1.0 main.elf：原始函数拆解与 Ghidra Headless 研究

> [!important] 已完成的范围
> 本轮直接读取 SHA256 一致的 HOME 4.1.0 ELF，实际运行标准库解析、readelf、LLVM 反汇编和完整 AArch64 BL 调用扫描。得到真实 FDE 函数边界、54 份完整函数 ASM、静态 XREF。**尚未在本环境运行 Ghidra**（缺少安装包；Ghidra 12.2 要求 JDK 25，本地仅有 JDK 21）。下面的静态汇编不能冒充 Ghidra C 反编译。

## 1. ELF 身份与内存结构

- 仓库 ELF：[NCA/0/main.elf](../../57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf)
- 文件：8,261,352 字节，SHA256 `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`
- Build ID：`325195bcb7366b15bae55171070dc4b8d7f33c0d`
- ELF64 / AArch64 / Little Endian / ET_DYN；运行时地址必须按 Base + RVA 换算
- 依赖 `multimedia.nss`、`glslc.nss`、`nnSdk.nss`

| ELF 区域 | RVA | File Offset | Size |
|---|---|---|---|
| `.text` | 0x0 | 0xA38 | 0x5F82A0 = 6,259,360 字节 |
| `.rodata` | 0x5F9000 | 0x5F8CD8 | 0x16E000 = 1,499,136 字节 |
| `.data` | 0x767000 | 0x766CD8 | 0x7A210 = 500,240 字节 |
| `.bss` | 0x7E1210 | NOBITS | 0x37FDF0 = 3,669,488 字节 |
| `.dynsym` | 0x601878 | 0x601550 | 593 symbols |
| `.rela.dyn` | 0x5F9098 | 0x5F8D70 | 526 entries |
| `.rela.plt` | 0x5FC1E8 | 0x5FBEC0 | 535 entries |
| `.eh_frame_hdr` | 0x67FD70 | 0x67FA48 | 0x32670 |
| `.eh_frame` | 0x6B23E0 | 0x6B20B8 | 0xB3C80 |

动态符号 **593 条，其中 UND 574、Defined 19**，不代表函数数目。Dynamic Tag 还有 `DT_RELR=0x5FF410`，长度 4424 字节；处理动态指针/虚表时应注意 packed relocations，不要只解析 RELA。

## 2. FDE 恢复：25,803 个有效且不重叠的函数范围

真实 `.eh_frame_hdr`：Version=1，PC-relative sdata4=0x1B，count udata4=0x03，table datarel sdata4=0x3B，Count=`0x64CB=25803`。逐一读取其指向的 `.eh_frame`：

```python
start = eh_hdr_rva + signed32(function_delta)
fde = eh_hdr_rva + signed32(fde_delta)
fde_pos = eh_frame_file_offset + fde - eh_frame_rva
length, cie_delta, initial_pc_delta, function_bytes = unpack("<IIiI", elf[fde_pos:])
assert fde + 8 + initial_pc_delta == start
assert function_bytes > 0
assert start >= prior_function_end
```

逐条验证结果：**25,803/25,803 有效，起点重复 0、区间重叠 0、PC/长度解码失败 0**。FDE 累计覆盖 `5,979,476` 字节，占 `.text` 的 **95.529%**。54 个重点函数入口均与 FDE 起点精确一致。

FDE 是真实 unwind 记录，**不代表 95.529% 已反编译成功**；剩余区域也可能包含 thunk、短入口或没有 FDE 的代码。

### FDE 精确尺寸例子

| RVA | 研究性名称 | 函数大小 | 结束 RVA（不含） |
|---|---|---:|---|
| 0x530120 | EH4 密文 CRC | 244 | 0x530214 |
| 0x530214 | EH4 AES 加密 | 480 | 0x5303F4 |
| 0x5303F4 | EH4 Copy + Decrypt | 40 | 0x53041C |
| 0x53041C | EH4 AES 解密 | 480 | 0x5305FC |
| 0x5305FC | PH4 Seal | 88 | 0x530654 |
| 0x5306B4 | EH4 CRC-checked Unseal | 128 | 0x530734 |
| 0x53A010 | PKM Checksum16 | 164 | 0x53A0B4 |
| 0x53A0C0 | PKM LCG Encode | 124 | 0x53A13C |
| 0x53A140 | PKM LCG Decode | 124 | 0x53A1BC |
| 0x50D280 | 剑盾 PK8→PH4 | 1268 | 0x50D774 |
| 0x50E994 | SideData TLV 扫描 | 32 | 0x50E9B4 |

## 3. 模块内直接 BL 调用和研究优先级

ARM64 direct BL：`(word & 0xFC000000) == 0x94000000`，目标 `pc + 4*signExtend26(word & 0x03FFFFFF)`。

实测 `74,629` 条指向模块代码区的直接 BL，`12,674` 个不同目标；另有 `39,517` 条模块内 B 分支。未计入 BLR、虚函数、运行时函数指针，也非运行时调用频率。

| RVA | 研究命名 | 直接 BL 来电数 | Caller 证据 |
|---|---|---:|---|
| 0x50E994 | SideDataScan | **562** | 0x50A4CC、0x50AAD8 |
| 0x5306B4 | EH4 CRC Check | **250** | 0x50F2C4、0x50F3FC |
| 0x5305FC | PH4 Seal | **175** | 0x504A74、0x504AD8 |
| 0x53A010 | PKM Checksum16 | **70** | 0x53FC44 |
| 0x53A0C0 | PKM LCG Encode | **70** | 0x53FC58 |
| 0x53A140 | PKM LCG Decode | **69** | 0x53FC00 |
| 0x5303F4 | Copy + Decode | **39** | 0x504744、0x5047CC |
| 0x50E8B0 | SideData TLV Create | **35** | 0x50AB1C、0x50D32C |

这些名称均为行为研究标签而非发行方原始函数符号。优先调查 `0x50E994` 和 `0x5306B4` 的上游调用归属，再扩展六游戏 GameData converter、PH4 SideData 和 K/MRK 管理器。

## 4. 一键导出实际 ELF 数据

[工具：home41_ghidra_elf_atlas.py](../../tools/home41_ghidra_elf_atlas.py)，只读，Python 3.10+ 标准库，`--asm` 需要 LLVM objdump：

```bash
python tools/home41_ghidra_elf_atlas.py --elf 57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf --out derived/4.1.0/ghidra --asm
```

输出：`manifest.json`、`fde_25803.csv.gz`（每个函数精确起点、size、end 和 FDE pointer）、`focus_functions.csv`（54 个函数含 Caller）、`focus_functions.tsv`（给 Ghidra 的研究标签映射）、`asm/*.asm`（54 个完整的 AArch64 汇编）。每份 ASM 按真实 FDE 范围截取，LLVM 输出指令数与记录的函数长度严格核对。

## 5. Ghidra 12.2 Headless 正式流程

官方 [Ghidra 12.2](https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.2_build) 要求 **JDK 25**。ZIP `ghidra_12.2_PUBLIC_20261016.zip` 的官方 SHA256 为 `2c2cd776db3c1f6a097ba418922378ac3649cadd5e844a6f5f088ae628a7be67`。参见 [Headless Analyzer 手册](https://github.com/NationalSecurityAgency/ghidra/blob/master/Ghidra/RuntimeScripts/support/analyzeHeadlessREADME.md)。

先运行上面的 Python atlas，再从仓库根目录运行（以下为单行参数语义，可按 Shell 换行）：

```text
analyzeHeadless <project_directory> HOME41_4_1_0 -import <full_path_to_main.elf> -scriptPath <full_path_to_repo/tools/ghidra> -analysisTimeoutPerFile 2700 -postScript Home41Analyze.java <full_path_to_output/ghidra-results> <full_path_to_output/focus_functions.tsv> 16
```

[Home41Analyze.java](../../tools/ghidra/Home41Analyze.java) 会按 `currentProgram.getImageBase()+RVA` 识别地址、为全部 54 个研究焦点命名、统计 Ghidra XREF、默认反编译前 16 个函数为 `ghidra-results/decompiled/<group>/*.c`，同时导出 `ghidra_focus_results.csv` 记录每一个失败/成功状态。需要全部 54 个可将末尾的 `16` 改为 `54`。再次处理现有项目时改用 `-process main.elf`。

亦提供 [GitHub Actions Headless 工作流](../../.github/workflows/home41-ghidra-headless.yml)，固定 Ghidra 12.2 ZIP/SHA256 和 Temurin JDK25，手动触发后上传 ELF 索引、汇编、Ghidra C、反编译结果表。**当前尚无实际成功的 Ghidra Run，因此没有交付虚构的 C 伪代码或 GPR 项目**。

## 6. 严格验收状态

| 项目 | 状态 |
|---|---|
| 原始 ELF / 代码段 / 符号 / 重定位 | 原始静态已验 |
| FDE 25,803/25,803 与函数跨度 | **PASS** |
| 整个 .text BL 扫描 | **PASS** |
| 54 个函数完整 LLVM AArch64 ASM | **PASS** |
| Ghidra 12.2 Headless 执行 | NOT_EXECUTED |
| Ghidra C 伪代码及项目文件 | NOT_CREATED |
| Nintendo ARM64 动态运行验证 | NOT_OBSERVED |

相关：[原始 ELF 重建与 nx2elf 文档](../../tools/README_nx2elf_HOME41.md) / [PKHeX × HOME 六游戏字段研究](https://github.com/969981/HOME-Live-Plugin-CHS/tree/home-core-editor/docs/research/home-pkm-knowledge-base)。
