---
title: HOME41 Ghidra Batch05 — Tracker consumers, local cache serialization and save boundaries
date: 2026-11-10
home_version: '4.1.0'
elf_sha256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
ghidra_run: 42763137320
status: 'main.elf static audit: Dirty and secondary Tracker consumers not found; separate local compact cache identified; cloud save ACK not closed'
tags: [pokemon-home, Ghidra, Tracker, Dirty, Box, SaveData, serialization]
---

# HOME 4.1.0 — Batch05：Tracker 消费者与本地保存边界

> [!important] 证据范围
> 本文基于 Ghidra 12.2 Run #42763137320 的完整 SQLite（15,415 函数、1,029,451 指令、423,988 引用，ELF SHA-256 `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`）。结论限定于 `main.elf`。本轮静态校验 `PASS_STATIC_SCOPE_ONLY`，不代表运行时、跨模块或服务器 ACK 验证。

## 0. 地址记法校正

下文同时标注 main RVA 与 Ghidra VA。Ghidra C 文件地址 = main RVA + `0x100000`。例如 `0x307CA0` 是 Ghidra VA，对应 main+`0x207CA0`；`0x19555C` 对应 main+`0x09555C`。Batch04 中这些函数地址曾混用两种记法，本篇统一校正。

## 1. Dirty Tracker set：主程序内仍只有登记，没有消费者

| 项目 | 地址 | 证据 |
|---|---|---|
| 插入/去重函数 | main+`0x2068C0`（VA `0x3068C0`） | 读取 `owner+0x60` Tracker；遍历并追加 key；递增 count |
| Tracker set | `manager+0x7FC18` = main+`0x865248` | C 中唯一直接用户为 `0x3068C0` |
| Count | `manager+0x93498` = main+`0x878AC8` | C 中唯一直接用户为 `0x3068C0` |
| Count reset | main+`0x225490`（VA `0x325490`） | `DAT_00978AC8=0`，同一函数调用 Box manager initializer `0x300180` |

重查完整 SQLite 后，直接引用结果与 Batch03 一致：没有第二个函数直接遍历 `0x7FC18` 或读取 `0x93498`。初始化路径只将 Count 归零；没有证据表明它逐项清零 Tracker 数组，更不能把这个 reset 解释为保存成功 ACK。

## 2. 第二个 Tracker 集合：条件式“当前 Box 中已不存在的 Tracker”登记

### 2.1 调用链

```text
14 个调用者
  → main+0x09555C (Ghidra VA 0x19555C)
      → 0x306588 状态门控
      → 若返回 false：main+0x207CA0 (VA 0x307CA0)
          → main+0x2028C4 (VA 0x3028C4) 检查当前 Box slot 是否仍含该 Tracker
          → 若未找到：追加 Tracker + 0x38-byte companion record
```

- `0x307CA0` 在当前 main.elf 中唯一直接调用点为 VA `0x1955C8`。
- `0x19555C` 有 14 个直接调用者。
- `0x3028C4` 有 5 个直接调用者，是通用 Tracker presence probe；它按 manager 的 Box group count 遍历，group stride `0x5FA0`，每组检查 30 个 slot 位置。
- 只有在 `0x306588` 返回 false 且 `0x3028C4` 未在当前 Box slots 找到 Tracker 时，`0x307CA0` 才追加记录。

### 2.2 集合布局与生命周期

| 字段 | 地址 | 观察到的行为 |
|---|---|---|
| Count | `manager+0x7B498` = main+`0x860AC8` | `0x307CA0` 读取当前 index 并递增 |
| Tracker array | `manager+0x7B4A0` = main+`0x860AD0` | 按 index 写入 64-bit Tracker |
| Companion records | `manager+0x7B7C0` = main+`0x860DF0` | 每项 stride `0x38`，由多个 Record accessor 填充 |
| Count reset | VA `0x325490` | `DAT_00960AC8=0`，与 Box manager reinitialization 同处 |

对 `0x7B498`、`0x7B4A0`、`0x7B7C0`、`0x7B7F0` 做完整 C 用户扫描，直接使用者仍只有 `0x307CA0`；Count 只在 `0x325490` 重置。当前没有独立消费者、序列化读取者或成功后清空分支。

因此最稳妥的名称是 `TrackerAbsentFromCurrentBoxSnapshot` 候选登记。它看起来像移出当前 Box 集合的 Tracker 快照/墓碑候选，但在找到消费者前，不将它定名为服务器删除队列或云端同步队列。

## 3. 邻近的六加二 Tracker 固定表，不是第二个集合

`0x3542D0`（main+`0x2542D0`）扫描 34 组 × 30 个 slot。它使用 `manager+0x7B458` 的六个 qword，以及 `manager+0x7B488`、`manager+0x7B490` 两个额外 Tracker 值，进行位置/索引匹配。它不读取 `0x7B498`、`0x7B4A0` 或 `0x7B7C0`。

这一区分很重要：不能因为两个区域都保存 Tracker，就把固定 6+2 表误认为第二个动态集合的消费者。

## 4. 找到一条独立的本地 compact cache 序列化/恢复路径

### 4.1 保存侧结构

- `0x311634`（VA）限制索引最多 1000，并更新 `*(*(base+0x7EF98)+0x62)`；遇到 species `0x85` 或 `0x19` 且 form 非零时，额外更新一个索引字段。
- `0x311910` 固定遍历 1000 项，输出 stride `0x104`。
- 每项由 `0x5FC07C` 生成，临时 Record buffer 大小 `0x296`，再经 `0x604704` / `0x60AF70` 转成 compact 表示。
- `0x60AF70` 的 GameDataCore 首个明确字段读取是 `+0x08`（EncryptionConstant）；未看到读取 GameDataCore+`0x00`（Tracker）。

### 4.2 一个容易误判的 X1 参数

在 VA `0x354474`，调用点先执行 `0x306BC4`，将结果放入 X1，再调用 `0x311634`。但 `0x311634` 的完整指令体没有读取 X1；它只从 `base+0x7EFA0+index*8` 读取既有 pointer array，并更新 count。因此不能把这个调用点误解为 `0x311634` 将 X1 的 Record view 写进数组。

对 `0x7EFA0` 的直接字面量用户为 `0x3115D0`、`0x311634`、`0x3118A0`、`0x311910`；这些已恢复访问均为读取，当前 main.elf 中尚未找到该 pointer array 的直接写入者。它可能由更早的对象构造、间接方法或其他模块初始化，仍需追踪。

### 4.3 恢复侧证明：这条本地缓存不会保留 HOME Tracker

```text
0x3118A0
  → 对 1000 个 pointer-array entries 调用 0x5FC188(record, compact_entry, 0)
      → 0x604A24(..., param_4=0)
          → 0x60AA70(..., param_4)
              → *GameDataCore = param_4
```

`0x60AA70` 中 `puVar7` 是 GameDataCore 基址，`*puVar7 = param_4` 写入 GameDataCore+`0x00`，也就是 Tracker。由于 `0x3118A0` 对每项传入常数 `0`，这条本地 compact cache 的恢复路径会把 Tracker 写成 0，而不是恢复原 Tracker。

**结论：** 这条 `0x104` compact cache 是独立的本地记录缓存，不是 `0x7FC18` Dirty Tracker set 的序列化路径；它的保存转换不读取 Tracker，恢复转换还明确将 Tracker 清零。不能用它证明 HOME Tracker 已进入云端保存缓冲区。

## 5. 本地文件提交与云端 ACK 必须分开

main.elf 还包含本地 SaveData 组件：

- `0x30C650`（VA）创建名为 `SaveThread` 的线程，并调用 `0x310610` 将对象分段序列化到缓冲区。
- `0x30D9A0`（VA）有独立的 `savedata.bin` 写入路径，调用 `0x5DC198` 的 `nn::fs::WriteFile` wrapper，并经 `0x5DD758` 调用 `nn::fs::Commit`。
- 当前静态证据没有闭合 `0x30C650` 到 `0x30D9A0` 的线程入口/回调绑定；更没有把它们连到 `0x7FC18` Dirty set。

`nn::fs::Commit` 只能证明本地文件系统提交。它不是 Pokémon HOME 服务端响应，也不是 Box/MRK 云端保存 ACK。

另外，`SaveRequest...` / `ApogeeSaveRequest...` 状态名和 `/api/box/operation/...` 字符串虽存在于 main.elf 字符串区，但本轮尚未把这些字符串映射到具体请求对象、函数指针或 callsite。更正此前的表述：它们只是候选字符串，不应称为已找到的保存状态机入口。

## 6. 本轮自动复验

```bash
python tools/ghidra/home41_batch05_persistence_audit.py \
  --db home41_main_410.sqlite \
  --out home41_batch05_persistence_audit.json
```

预期状态 `PASS_STATIC_SCOPE_ONLY`。该状态只说明上述 main.elf 静态范围和证据断言一致，不等于保存链闭合。

## 7. 当前结论与下一批工作

1. `0x7FC18` Dirty Tracker set：main.elf 内只找到 `0x2068C0` 登记/去重与 `0x225490` 初始化 Count reset；没有独立消费者。
2. `0x7B498` 第二集合：`0x307CA0` 条件追加 Tracker + 0x38 记录；同样没有独立消费者，初始化只重置 Count。
3. 本地 compact cache：确实存在保存/恢复流程，但不保存 HOME Tracker；恢复时 Tracker 被写为 0。
4. 本地 `savedata.bin` 的 `nn::fs::Commit` 与云端 ACK 无关，当前也未与 Dirty set 建立调用链。

**下一阶段应扩展到同一 NCA 的 `rtld`、`sdk`、`subsdk0`、`subsdk1`，而不是继续在 main.elf 中给没有消费者的数组强行命名。** 同时追踪 `base+0x7EFA0` pointer array 的初始化写入者，并在运行时观察 `0x2068C0` 后的请求对象、成功/失败返回与 Count 清理。

关联：[Batch02](HOME41_Ghidra_EH4状态位与Dirty生命周期_Batch02_20261110.md)、[Batch03](HOME41_Ghidra_X0与Tracker来源及Dirty消费边界_Batch03_20261110.md)、[Batch04](HOME41_Ghidra_Tracker辅助集合与保存消费边界_Batch04_20261110.md)。
