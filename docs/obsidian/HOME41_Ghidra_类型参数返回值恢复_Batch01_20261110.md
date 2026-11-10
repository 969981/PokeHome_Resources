---
title: HOME 4.1.0 Ghidra 第一批函数签名类型恢复
date: 2026-11-10
home_version: "4.1.0"
elf_sha256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
status: "static_14_of_14_crosscheck_pass; native_project_apply_not_executed"
tags: [pokemon-home, Ghidra, PH4, EH4, SideData, Box, MRK, signature, Obsidian]
---

# HOME 4.1.0：第一批 14 个函数类型、参数与业务证据

> [!important] 证据边界
> 本批从 **Run #42763137320 的真实 Ghidra 12.2 C** 出发，对 14 个独立函数核对入口 RVA、C 片段证据和参数数量；**14/14 静态交叉核对通过**。类型中的 `void *`、`void **` 是刻意保留的**不透明对象/指针形状**，不能解读为已恢复任天堂的完整类布局。**本轮未运行 Ghidra GUI/Headless 写回，不声称已更新现有 `.gpr/.rep`、验证 ABI 寄存器分配、证明实机一致或闭合服务器存档事务。**

## 1. 资产与执行状态

- 原始 ELF SHA-256：`bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`
- 反编译基线：`derived/4.1.0/Ghidra_12.2_Run_42763137320/annotation_v1/c_annotated/`
- 类型清单：[`tools/ghidra/home41_typed_batch01.tsv`](../../tools/ghidra/home41_typed_batch01.tsv)
- 静态重验：[`tools/ghidra/home41_verify_typed_batch.py`](../../tools/ghidra/home41_verify_typed_batch.py)
- 原生 Ghidra 回填：[`tools/ghidra/Home41ApplyTypedBatch.java`](../../tools/ghidra/Home41ApplyTypedBatch.java)
- 本轮工具侧已进行：14/14 Ghidra C 的入口、参数数量与关键操作字面量交叉校验。
- `Ghidra `APPLY` / 修改已提交项目 / 实机对照 / Save ACK`：**NOT_EXECUTED / NOT_CLOSED**。

## 2. 首批函数签名

| 原始 RVA | 提议的 C 原型（研究命名，不代表官方符号） | 机器码/C 所支持的行为 | 尚未证明 |
|---|---|---|---|
| `0x50E76C` | `void HOME_RecordView_Init50E76C(void *view, void *record)` | writes record pointer at wrapper+8; initializes vtable | object ownership unknown |
| `0x50E784` | `void HOME_RecordView_Init50E784(void *view, void *record)` | initializes second wrapper entrypoint | do not assume entrypoints interchangeable |
| `0x50E7E4` | `void *HOME_RecordView_GetRecord(void *view)` | returns wrapper.record | concrete record type unknown |
| `0x50E7EC` | `unsigned char *HOME_RecordView_GetOffset10(void *view)` | returns record+0x10 | business field unknown |
| `0x50E7F8` | `unsigned char *HOME_RecordView_GetOffset12(void *view)` | returns record+0x12 | business field unknown |
| `0x50E8B0` | `void HOME_SideData_AppendTLV(void *view, void **header_out, void **data_out, unsigned char tag, unsigned int length)` | writes TLV tag u16 length zeroed payload and two output pointers | capacity bound not verified |
| `0x50E994` | `bool HOME_SideData_CursorHasNext(void *view, const unsigned char *cursor)` | u16 SideData length boundary test | not a tag lookup; requires valid cursor |
| `0x530120` | `unsigned int HOME_EH4_CiphertextCRC(void *record)` | CRC32 per chunk XOR result | not authentication |
| `0x530214` | `void HOME_EH4_AES_CBC_Encrypt(void *record)` | native AES-CBC encrypt helper and copy | key layout unresolved |
| `0x53041C` | `void HOME_EH4_AES_CBC_Decrypt(void *record)` | native AES-CBC decrypt helper and copy | key layout unresolved |
| `0x5305FC` | `void HOME_PH4_Seal(void *record)` | encrypt then write CRC to record+0x0A | not a persistence transaction |
| `0x5306B4` | `void HOME_EH4_CRC_CheckedDecrypt(void *record)` | CRC compare after decrypt and invalid flag write | no bool result or server ACK |
| `0x221AC0` | `void *HOME_DirtyManager_Get(void)` | global manager is main+0x7E5630 | manager layout partial |
| `0x2068C0` | `void HOME_Dirty_AppendUnique(void *owner, unsigned int arg2, unsigned int arg3)` | deduplicates owner+0x60 against manager+0x7FC18 then increments manager+0x93498 | arg2 arg3 and later save unresolved |

所有项目的 `status=STATIC_ABI_PARTIAL`。这表示该原型具有静态基础，但指针目标、隐藏参数、对象所有权与某些业务语义仍存在不确定性，**不等于业务端到端 VERIFIED**。

## 3. PH4/EH4 / SideData：具体结构证据

### 3.1 RecordView 与 Record 的层次

```c
// 数据布局草图，偏移来自 Ghidra C；不是可直接编译的正式完整结构体。
struct RecordView_Partial {
    void *vtable_or_dispatch;   // wrapper + 0x00，初始化时常量 0x8988B0
    unsigned char *record;      // wrapper + 0x08
};
// record + 0x0A : EH4 header CRC32 (uint32; C 中为非对齐访问)
// record + 0x0E : 16-bit encrypted/serialized payload length
// record + 0x10 : payload accessor returns this offset
// record + 0x12 : alternate accessor returns this offset
// record + 0xD6 : SideData byte length (uint16)
// record + 0xD8 : first SideData TLV
//
// SideData entry: [tag: u8][length: u16 little endian][payload: length bytes]
```

`0x50E76C` / `0x50E784` 创建 16 字节 RecordView；`0x50E7E4` 取 record，`0x50E7EC` / `0x50E7F8` 分别取 record+0x10 / +0x12。现在可先统一指针层次，再细化具体 class，避免把 RecordView 和 record 混成同一个 `this`。

`0x50E8B0` 的五个参数（view、TLV 头输出、payload 输出、Tag、长度）在 Ghidra C 中可直接追踪：写 Tag 与 16-bit length，清零 payload，并更新 `record+0xD6` 和 `record+0x0E`。**尚未发现可确认的容量参数或完整上层容量保证**；不能据此声称该辅助函数在任意输入长度下安全。

`0x50E994` 只比较游标与 `record+0xD8+side_len` 的边界关系，**没有比较 Tag ID**。涉及无符号减法的表达式仅应在合法游标前提下解释为范围判断，不要把它提升成 `FindSideDataByTag`。

### 3.2 EH4 校验链

```text
0x5305FC  PH4_Seal(record)
  ├─ RecordView_Init → GetRecord
  ├─ 0x530214  AES-CBC Encrypt
  ├─ 0x530120  CiphertextCRC -> uint32_t
  └─ [record + 0x0A] = CRC32

0x5306B4  EH4_CRC_CheckedDecrypt(record)
  ├─ RecordView_Init → GetRecord / GetOffset12
  ├─ [record + 0x0A] 读取已存 CRC32
  ├─ 0x530120  计算密文 CRC32
  ├─ 0x53041C  AES-CBC Decrypt
  └─ 若 CRC 不相等：[(record + 0x12) + 0x0C] = 1
                            即 record + 0x1E
```

注意 `0x5306B4` 在 Ghidra 中为 **`void`**；不应把它误标成 `bool Unseal`。它的失败标志消费者才是下一批的重要逆向目标。以上链路也没有证明数据是否进入在线 HOME 服务器。

## 4. Box/MRK Dirty 去重：已闭合的指针/计数数据流

```text
0x221AC0 HOME_DirtyManager_Get()
    -> DAT_008E5630 (Ghidra base 0x100000)
    -> main + 0x7E5630

0x2068C0 HOME_Dirty_AppendUnique(owner, arg2, arg3)
    ├─ 调用 0x631268(manager/owner 相邻对象，语义待确认)
    ├─ owner + 0x90 == 2 时调用 0x63505C (可选分支)
    ├─ key = *(uint64_t *)(owner + 0x60)
    ├─ 搜索 manager + 0x7FC18 的 8-byte key 数组
    ├─ count = *(int32_t *)(manager + 0x93498)
    ├─ 已出现 key -> return
    └─ 否则 keys[count] = key; count++
```

地址复算（RVA）：

| 对象 | 相对偏移 | `main+RVA` |
|---|---:|---:|
| Manager 起点 | — | `0x7E5630` |
| Dirty key list | `0x7FC18` | `0x865248` |
| Dirty count | `0x93498` | `0x878AC8` |

这里能够确认的是 **去重、追加、递增计数**；`owner+0x60` 的键究竟在业务上对应什么 ID、数组容量保障、序列号是否为 MRK/K，以及 Dirty 列表何时被提交/清空，仍须追踪实际消费者，不能凭地址命名。

## 5. 验证与回填

静态数据验证（不需要 Ghidra）：

```bash
python tools/ghidra/home41_verify_typed_batch.py \
  --tsv tools/ghidra/home41_typed_batch01.tsv \
  --c-root derived/4.1.0/Ghidra_12.2_Run_42763137320/annotation_v1/c_annotated \
  --json-out /tmp/home41_batch01_verify.json
```

对 **备份后的** Ghidra 12.2 原生项目执行只读预览：

```text
analyzeHeadless <PROJECT_PARENT> HOME410 -process main.elf
  -scriptPath <ABS_REPO>/tools/ghidra
  -postScript Home41ApplyTypedBatch.java
    <ABS_REPO>/tools/ghidra/home41_typed_batch01.tsv DRY_RUN
```

人工核对后改为 `APPLY`，脚本才会尝试写入；要求 Ghidra Program 的 `getExecutableSHA256()` 与基线一致，自动保护已有 `USER_DEFINED` 签名，不创建函数、不强制重命名。**本批没有运行 APPLY；回填是否真正成功需检查 Headless 日志、保存后的 Ghidra 项目和二次 Decompiler 输出。**

## 6. 后续逐批提升验收

1. **Batch 02 — PH4/EH4 消费者：** `0x5306B4` 的 `record+0x1E` 错误字节读者、PH4/EH4 所有权、记录创建/释放、加密前后持久缓冲区界限；将 `void *` 替换成有证据的局部 struct。
2. **Batch 03 — SideData Tag 分派：** 在 `0x50E8B0` / `0x50E994` 上层逐 Tag 列出条件分支、迭代步长、长度边界；分清 Tag1–Tag7 的实际生成者与读取者。
3. **Batch 04 — Box/MRK/K：** `0x2068C0` 的 key 生成者、`0x221AC0` 返回对象的数据消费者、 Dirty key 数组清理/提交/去重边界，以及盒名更新与 MRK/K 的调用关联。
4. **Batch 05 — 保存事务：** 穿过分发器、数据序列化、队列/同步、实际磁盘或网络 I/O，寻找成功/失败 ACK 与 Dirty 清零条件；只有实际调用边和写入结果闭合后才升级为 `SAVE_TRANSACTION_VERIFIED`。

旧文档的 60 个 `0x50E994` / `0x5306B4` 共同 FDE 调用者仍是排查入口，但 `0x5106D0` 等含原子同步及多分派的函数 **不能仅因调用链交集就被命名为 SaveManager**。

## 7. 相关基线

- [PH4/EH4 SideData 共同调用者和 FDE](HOME41_Ghidra_PH4_EH4_SideData_调用者数据库_20261110.md)
- [真实 Ghidra 全量项目及 SQLite/C 产物](HOME41_Ghidra_全量SQLite数据库及C反编译产物_20261110.md)
- [原始 ELF 函数恢复与反编译](HOME41_main_ELF_Ghidra_函数恢复与反编译_20261110.md)
