---
title: HOME41 Ghidra Batch02 EH4 status consumers and Dirty lifecycle
date: 2026-11-10
home_version: '4.1.0'
elf_sha256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
ghidra_run: 42763137320
status: '20/20 static_signature_checks_pass; 12/12 literal_claim_checks_pass; native_apply_not_executed'
tags: [pokemon-home, Ghidra, PH4, EH4, SideData, Dirty, Box, MRK]
---

# HOME 4.1.0：Batch02 — EH4 状态位消费者与 Dirty Key 生命周期

> [!important] 证据分级
> 以 Run #42763137320 的原始 Ghidra 12.2 C 反编译结果为基线。本轮对 20 个函数的地址、C 参数数量、关键行为语句做了交叉核对：20/20；对 12 条链路静态断言做了原文对账：12/12。这是 STATIC_C_MATCH，不是运行时行为验证、原生 .gpr/.rep 数据库回填、网络 ACK、或官方源码。

## 1. 本次文件

- [20 个函数签名 TSV](../../tools/ghidra/home41_typed_batch02.tsv)
- [Partial Record / View / DirtyOwner 结构体与 offset 断言](../../tools/ghidra/home41_partial_record_dirty_batch02.h)
- [12 组 Ghidra C 原文交叉审计脚本](../../tools/ghidra/home41_batch02_callchain_audit.py)
- [Ghidra 签名回填器（BATCH01/BATCH02）](../../tools/ghidra/Home41ApplyTypedBatch.java)
- [类型签名与参数数量验证器](../../tools/ghidra/home41_verify_typed_batch.py)

本轮所有 RVA 均为 main+RVA；Ghidra C 地址等于 RVA+0x100000。C 文件统一位于 `derived/4.1.0/Ghidra_12.2_Run_42763137320/c/`。

## 2. EH4：record+0x1E 的读写证据

字段偏移必须以 `0x50E7F8(view) = *(view+8)+0x12` 为基础复算，而不是把 getter 返回指针误当作 record 起点：

| Getter 返回指针上的偏移 | record 真实偏移 | 原生观察 |
|---|---|---|
| +0x0C | +0x1E | 状态字节；有多个独立写入者与读者 |
| +0x18 | +0x2A | uint16 字段 getter/setter |
| +0x44 | +0x56 | 输出 helper 的字段地址；完整长度未知 |
| +0x93 | +0xA5 | 带状态门控的单字节读取 |

### 状态位的生产者和消费者

| RVA | 静态来源和影响 | 注意事项 |
|---|---|---|
| `0x5306B4` | CRC 不匹配时向 `(record+0x12)+0x0C` 写 `1` | 返回 `void`，不是 `bool Unseal` |
| `0x51C860` | 单独通过 `param_2 & 1` 设置同一状态字节 | 证明标志来源不只是 CRC |
| `0x50FC9C` | 读取同一字节并返回是否非零 | `bool` 已有 Ghidra C 原型 |
| `0x510E1C` | 标志为 0 时取 `record+0xA5`，否则使用 `DAT_00C15E45` | 默认值业务含义未知 |
| `0x510D20` | LightEvent/原子访问保护上述读取 | 同步不等于网络保存 |
| `0x5168F0` | 借助 `0x50FC9C` 决定字段输出或替代分支 | 输出类型仍然不透明 |
| `0x50F268` | Seal/Decrypt 状态转换之后可 `memcpy(...,0x296)` | 记录拷贝不等于网络发送 |

结论：`record+0x1E` 暂定 `status_flag_1e`。它不能直接命名为 `CRCError`、`PokemonInvalid`、`ServerRejected` 或 `Banned`。特别是 `0x51C860` 允许另一条调用链显式写入此标志。尚未观察服务器拒绝整个对象。

### 特殊反编译问题：调用点丢失 X0 参数

在 `0x510E1C` 等函数的现有 C 中，会出现 `FUN__text__0060e7c4(param_1); FUN__text__006306b4();` 的连续调用。被调函数 `0x5306B4` 本体明确使用输入指针，但现有 C 显示无参数。不能因为连续调用推断已核实 ARM64 `X0` 的真实传递。下一次须核对每个代表性 `BL` 前的寄存器值、回填签名再反编译、对比指令级结果。

## 3. SideData Tag 删除：新确认的重建算法

`0x50E9C0` 构造一份临时的 `0x296` 字节记录，遍历原 SideData TLV，只保留 Tag 不等于目标值的条目，复制内容并重算长度和对齐，最后把重建内容复制回旧 record。这是**排除指定 Tag 的记录重建**，而非单纯清空一个标志；目前不能证明对任意畸形/超长 TLV 的安全性。

| RVA | 行为 |
|---|---|
| `0x50E8B0` | 追加 TLV，提供头和 payload 两个输出指针（Batch01） |
| `0x50E994` | SideData 游标边界检查，而不是 FindTag（Batch01） |
| `0x50E9C0` | 排除指定 Tag 后重建记录 |
| `0x50F828` | 包含状态切换的 TLV 删除包装器 |

## 4. Dirty：六字段 → Packed 2-bit → key 去重

```text
0x0F67F0(context)
  ├─ 上游间接引用求出 owner
  ├─ 0x206588(owner) 结果低位为 0 时进入更新
  ├─ 0x2068C0(owner, 0, *(context+0x84))
  ├─ 0x2068C0(owner, 1, *(context+0x88))
  ├─ 0x2068C0(owner, 2, *(context+0x8C))
  ├─ 0x2068C0(owner, 3, *(context+0x90))
  ├─ 0x2068C0(owner, 4, *(context+0x94))
  ├─ 0x2068C0(owner, 5, *(context+0x98))
  └─ 0x1951D4(...) 相邻对象状态更新；业务含义待追

0x2068C0(owner,index,value)
  ├─ 0x531268(owner+0x58 指向的子对象,index,value)
  ├─ 若 *(int *)(owner+0x90)==2，调用 0x53505C
  ├─ 0x531268 / 0x53505C 通过 +0x2F0 指针读/写 u16
  │     0x510BA0 read → 0x53784C 2-bit set → 0x51D4A0 write
  ├─ key=*(uint64_t *)(owner+0x60)
  ├─ 去重查询 manager+0x7FC18
  └─ 不重复时追加 key、递增 manager+0x93498
```

在 `0x531268` / `0x53505C` 的 Ghidra C 中，只看到 `index < 6` 和 `value < 3`，尚未独立确认负值限制；尽管结构吻合六字段，每个字段的业务名称（MRK、HP、PP 或其他）仍然没有闭合。`owner+0x60` 也仍只能称为 **64-bit key**，不能定为 MRK 序列号。

### manager 地址与清零边界

| 字段 | 地址/偏移 | 依据 |
|---|---|---|
| manager | `main+0x7E5630` | `0x221AC0` Getter |
| 前置区间 | `manager+0x7D1E8` 起，共 `0x2A30` 字节 | `0x205BA4` memcpy |
| key list | `manager+0x7FC18 = main+0x865248` | `0x2068C0` 遍历/写入 |
| count | `manager+0x93498 = main+0x878AC8` | `0x2068C0` 递增 |

`0x205BA4` 的复制刚好在 Dirty key list 起点结束（`0x7D1E8+0x2A30=0x7FC18`），不能据此说它在提交 Dirty 列表。

`0x225490` 是大规模**全局初始化**的一部分，包含 `DAT_00978AC8=0`；这证明初始化时 Count 清零，**不能证明成功保存后清零**。当前没有从 key list / count 追到磁盘 I/O、网络请求或服务端确认。

## 5. 静态检查与 Ghidra 回填

```bash
python tools/ghidra/home41_verify_typed_batch.py --tsv tools/ghidra/home41_typed_batch02.tsv --expect-count 20 --c-root derived/4.1.0/Ghidra_12.2_Run_42763137320/annotation_v1/c_annotated --json-out /tmp/batch02_signatures.json
python tools/ghidra/home41_batch02_callchain_audit.py --c-root derived/4.1.0/Ghidra_12.2_Run_42763137320/c --out /tmp/batch02_callchain.json
```

要在 Ghidra 12.2 写入签名，先备份项目，使用 `Home41ApplyTypedBatch.java <ABS_TSV> DRY_RUN BATCH02` 预览，核对 ELF SHA-256、实际函数边界、调用约定和冲突；只有手工确认后才用 `APPLY BATCH02`。脚本保护已有 USER_DEFINED 签名。本轮未在原生 Ghidra 环境运行 APPLY；必须重跑反编译和审计后才能升级为 NATIVE_PROJECT_VERIFIED。

## 6. 下一批尚未闭合的关口

1. `0x5306B4` 的代表性 callsite：ARM64 `X0` 追踪 + 错误标志引发的实际流程与输出。避免把 C 无参显示误当作事实。
2. `0x0F67F0` → owner 的来源：虚表与 `owner+0x60` 的 key 生产函数，确定它究竟是什么业务 ID。
3. 查找 manager key list 的真实消费者、提交/失败时的清空或保留条件，并明确保存缓冲区与 I/O/ACK 边界。**初始化 Count 归零不应晋升为保存成功证据**。

关联：[Batch01 类型签名](HOME41_Ghidra_类型参数返回值恢复_Batch01_20261110.md)、[PH4/EH4 共同调用者索引](HOME41_Ghidra_PH4_EH4_SideData_调用者数据库_20261110.md)。
