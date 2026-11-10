---
title: HOME41 Ghidra Batch03 X0 transfer, Tracker provenance and Dirty consumer boundary
date: 2026-11-10
home_version: '4.1.0'
elf_sha256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
ghidra_run: 42763137320
status: '120/120 X0 callsites instruction-proven; Tracker chain instruction-proven; IsBadEgg cross-source corroborated; Dirty consumer/save ACK not closed'
tags: [pokemon-home, Ghidra, PH4, EH4, GameDataCore, Tracker, IsBadEgg, Box, Dirty]
---

# HOME 4.1.0 — Batch03：X0 隐式参数、HOME Tracker 来源与 Dirty 消费边界

> [!important] 基线与范围
> SQLite 来自 Ghidra 12.2 Run #42763137320，原始 `main.elf` SHA-256 为 `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`。本数据库包含 15,415 个函数、1,029,451 条指令、423,988 条引用、15,415/15,415 成功反编译。所有结论均限定于该 main.elf 静态证据；没有运行时观察、服务端 ACK 或其他模块的完整性保证。

## 1. 本批交付

- [Provenance TSV：12 条字段/调用边](../../tools/ghidra/home41_batch03_provenance.tsv)
- [SQLite 指令级审计脚本](../../tools/ghidra/home41_batch03_provenance_audit.py)
- [Batch03 GitHub Actions 验证工作流](../../.github/workflows/home41-batch03-provenance-audit.yml)
- [修正后的 Record / GameDataCore / Tracker 部分布局](../../tools/ghidra/home41_partial_record_dirty_batch02.h)
- [Batch02 函数签名与 IsBadEgg 命名修正](../../tools/ghidra/home41_typed_batch02.tsv)

## 2. `0x5306B4` 的 X0 隐式参数：120/120 指令级确认

现有 C 反编译会把若干调用显示成 `FUN__text__006306b4()`，看起来没有参数。SQLite 的直接 CALL 引用和原始 AArch64 指令说明它实际通过 X0 接收 Record 指针。

```asm
mov x0, x20                 ; view*
bl  0x0060e7c4              ; x0 = *(view + 8), 返回 Record*
bl  0x006306b4              ; 无中间指令，X0 直接传入

; 0x0060e7c4
ldr x0, [x0, #0x8]
ret

; 0x006306b4 的入口
sub sp, sp, #0x40
stp x29, x30, [sp, #0x10]
stp x22, x21, [sp, #0x20]
stp x20, x19, [sp, #0x30]
add x29, sp, #0x10
mov x20, x0                 ; callee 保存 Record*
```

全量 120 个直接调用点全部满足：目标 BL 的前一条指令为 `BL 0x0060E7C4`；向前追踪到 Getter 输入 X0 的最近写入，中间没有其他 BL/BLR；目标函数入口把 X0 保存到 X20。

| Getter 输入 X0 最近写入 | 与 Getter BL 的距离 | 调用点数 |
|---|---:|---:|
| `mov x0,x20` | 8 bytes | 109 |
| `mov x0,x19` | 8 bytes | 10 |
| `mov x0,x20` | 12 bytes | 1 |
| **合计** | | **120** |

最后一个例外点中，`mov x0,x20` 与 Getter 之间有一条 `strh`，它不写 X0，也没有夹入其他调用，因此不影响参数传递。

**结论：** `0x5306B4` 的第一参数就是 `view+8` 指向的 Record。此前的“隐式参数候选”已升级为 120/120 指令级证明。

## 3. Record+0x12 是 GameDataCore 起点：Tracker / EC / IsBadEgg

Ghidra 指令：

```asm
; 0x0060e7f8(view)
ldr x8, [x0, #0x8]
add x0, x8, #0x12
ret

; 0x0060f8d0(view) 的关键读取
bl  0x0060e7f8              ; 返回 Record+0x12
ldr x21, [x0]               ; 读取首个 uint64
...
mov x0, x21
ret
```

独立对照 PKHeX 的 GameDataCore 定义：

| GameDataCore 相对偏移 | Record 绝对偏移 | 字段 |
|---:|---:|---|
| `+0x00` | `+0x12` | `Tracker`，uint64 |
| `+0x08` | `+0x1A` | `EncryptionConstant`，uint32 |
| `+0x0C` | `+0x1E` | `IsBadEgg`，uint8 |

交叉参考：

- [PKHeX GameDataCore.cs：Tracker / EncryptionConstant / IsBadEgg](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/PKM/HOME/GameDataCore.cs#L34-L36)
- [PKHeX PKH.cs：Tracker 转发到 GameDataCore](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/PKM/HOME/PKH.cs#L97-L99)
- [PKHeX G8PKM.cs：Tracker 字段](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/PKM/Shared/G8PKM.cs#L441-L444)
- [PKHeX PA8.cs：Tracker 字段](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/PKM/PA8.cs#L486-L490)
- [PKHeX PK9.cs：Tracker 字段](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/PKM/PK9.cs#L435-L439)
- [PKHeX PA9.cs：Tracker 字段](https://github.com/kwsch/PKHeX/blob/master/PKHeX.Core/PKM/PA9.cs#L431-L435)

### 3.1 `0x5306B4` 的 CRC 错误路径实际上置位 IsBadEgg

`0x5306B4` 在 CRC 比较失败时写入 `(Record+0x12)+0x0C`，即 `Record+0x1E`。现在可以把这处写入准确解释为 `GameDataCore.IsBadEgg = 1`，而不是一个泛化的 `status_flag_1e`。

- `0x5306B4`：CRC mismatch → `IsBadEgg=1`。
- `0x51C860`：显式 setter，同样写 `GameDataCore+0x0C`，输入经 `& 1`。
- `0x50FC9C`：读取 `GameDataCore+0x0C` 并返回 bool。
- `0x510E1C`：依据 `IsBadEgg` 在 Record+0xA5 与 fallback 常量之间选择。
- `0x5168F0`：使用 `0x50FC9C` 的结果选择字段导出路径。

因此 Batch02 的临时名称已修正：`status_flag_1e` → `GameDataCore.IsBadEgg`。CRC mismatch 是它的一个置位来源，但不是这个字段的完整语义。

## 4. `owner+0x60` 的真实身份：HOME Tracker

这条链不是 Dirty 插入时临时生成随机 ID；它是从 GameDataCore 读取现有 Tracker，再在 Box 槽位与 wrapper 之间搬运。

```text
PH4 Record+0x12
  └─ GameDataCore.Tracker (uint64)
       ▲
       │ 0x50F8D0：在 Record lock 下读取 qword
       │ 0x537404：先取 nested object+0x2F0，再 tail-branch 到 0x50F8D0
       │
0x301B08：从 source object+0x58 取 Tracker，写 Box Slot+0x2F0
       │
0x300380：Box Slot+0x2F0/+0x2F8 → wrapper+0x60/+0x68
       │
0x301F08：wrapper+0x60/+0x68 → Box Slot+0x2F0/+0x2F8
       │
0x0F67F0：取得 Box object，六次调用 0x2068C0
       │
0x2068C0：以 owner+0x60（HOME Tracker）做去重并追加到 Tracker dirty set
```

关键指令证据：

| Ghidra VA | 指令 | 含义 |
|---|---|---|
| `0x637404` | `ldr x0,[x0,#0x2f0]` / `b 0x60f8d0` | Tracker accessor wrapper |
| `0x301CF4` | `ldr x0,[x21,#0x58]` | 取源 object 内的 Record view |
| `0x301CF8` | `bl 0x637404` | 读取 GameDataCore Tracker |
| `0x301CFC` | `str x0,[x22,#0x2f0]` | 写入 Box Slot Tracker |
| `0x3003E0`–`0x3003E8` | 从 Slot+0x2F0/+0x2F8 读入并 STP 到 wrapper+0x60 | Slot → wrapper |
| `0x302044`–`0x302050` | 从 wrapper+0x60/+0x68 读出并写回 Slot+0x2F0/+0x2F8 | wrapper → Slot |

因此：`owner+0x60` = HOME Tracker；Box Slot+0x2F0 保存同一个 64 位 Tracker。`+0x68` 与 Slot+0x2F8 是伴随 qword，其业务含义暂不命名。

### 4.1 Tracker 上游赋值来源

在 GameDataCore 构造/转换路径中，至少观察到：

- `0x60A460`：新建/重建 core 时将 Tracker 清零。
- `0x60AA70`：把显式参数 `param_4` 写入 Tracker。
- `0x60B490`、`0x60BE40`、`0x60C840`：从各自源数据 accessor 取一个 64 位值并写入 GameDataCore Tracker。

这些路径证明 Tracker 是从源对象/调用参数导入到 GameDataCore，而不是由 `0x2068C0` 生成。各 accessor table selector 与具体游戏格式的逐一映射仍需单独核实；不要仅凭相似偏移将某个函数硬命名为 PK8/PA8/PK9 转换器。

## 5. Dirty Tracker set：插入已闭合，消费端仍未找到

`0x0F67F0` 对同一个 owner 连续调用 `0x2068C0` 六次，索引 0–5，值来自 `context+0x84` 至 `context+0x98`。`0x2068C0` 使用 `owner+0x60`（HOME Tracker）去重；未命中时写入 manager 的 64-bit Tracker set 并递增 count。

| 字段 | 地址 | 作用 |
|---|---|---|
| manager | `main+0x7E5630` | `0x221AC0` getter |
| Tracker dirty set | `manager+0x7FC18 = main+0x865248` | `0x2068C0` 遍历/追加 Tracker |
| count | `manager+0x93498 = main+0x878AC8` | `0x2068C0` 读取/递增 |

### 5.1 全量静态消费者搜索结果

在当前 15,415 个成功反编译函数中，直接出现 `0x7FC18` 和 `0x93498` 的 C 代码均只有 `0x2068C0`。也就是说，目前找到的是**自去重/追加**，没有找到另一个直接遍历该 Tracker set 的消费者。

`0x225490` 会将 `DAT_00978AC8` 置零，但同一函数还会执行大量全局状态重置，并调用 `0x300180` 初始化 Box manager。它没有静态函数 xref。该证据与 Box 子系统初始化/重建一致，不能解释为上传成功后的 ACK 清空。

**结论：** 当前不能把 Tracker dirty set 命名为服务器上传队列，也不能把 `0x2068C0` 命名为 SaveManager。保存缓冲区、实际 I/O、成功/失败响应、重试与成功后清空条件仍未闭合。它可能是 main.elf 内部的变更去重登记，也可能被间接/外部消费者使用；当前证据不足以判定。

## 6. 自动复验

本地（或 Actions）下载 Run #42763137320 的 `HOME41-Ghidra12-SQLite` Artifact 后运行：

```bash
python tools/ghidra/home41_batch03_provenance_audit.py \
  --db home41_main_410.sqlite \
  --out home41_batch03_provenance.json
```

脚本会核对 SQLite 完整性、函数/指令/引用数量、120 个 X0 调用点、Tracker 读写链、六次 Dirty 插入，以及 key-list/count 的直接静态引用范围。`PASS_STATIC_ONLY` 不代表服务器保存成功。

## 7. 下一阶段唯一主缺口

1. 沿 Box manager / Tracker dirty set 的上层对象继续找间接消费者：谁读取 set/count，是否构建待保存对象集合。
2. 从该消费者追到序列化缓冲区、SaveData/网络 I/O、返回状态与失败重试。
3. 只有观察到成功分支确实消费/清空 Tracker set，才可将这条链标记为 `SAVE_ACK_VERIFIED`。

关联：[Batch02 EH4 / SideData / Dirty 静态分析](HOME41_Ghidra_EH4状态位与Dirty生命周期_Batch02_20261110.md)。
