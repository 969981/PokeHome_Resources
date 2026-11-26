---
type: research_note
game: Pokémon HOME
version: 4.1.0
status: static_partial_verified
tags: [HOME, PH4, Core, SideData, image-resolver]
---
# 原生 Core 与默认对象：图片适配边界

关联 [[NATIVE_IMAGE_REQUEST_PRODUCER]]、[[NATIVE_IMAGE_SELECTOR_MODEL]]。

## Core 解码层与字段
ELF SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a。
0x50E7C4 返回 owner+8 中的记录指针，0x50E7F8 返回该指针+0x12。它不是解密器。
原生 Getter 按 owner+0x10 状态条件调用 0x5306B4，后者先计算密文 CRC（0x530120），调用 0x53041C 解密，CRC 不匹配设置 Core+0x0C；Getter 完成后可能通过 0x5305FC 重新密封。0x50E7F8 只消费已经解密的内容。
PH4 记录 Version+0，PayloadLength+0xE，CoreLength+0x10=0xC4，Core+0x12，SideLength+0xD6，TLV+0xD8。现有编辑器 Core/SideData 结构与这些偏移一致；严格离线适配器只接收单条已经解码的 PH4，不负责 EH4、工作槽或任意 PKM 解码。

| Core offset | PH4 offset | Width | Field |
| --- | --- | --- | --- |
| 0x08 | 0x1A | 4 | EncryptionConstant（请求+0x10） |
| 0x0C | 0x1E | 1 | IsBadEgg |
| 0x0D | 0x1F | 2 | Species |
| 0x0F | 0x21 | 4 | ID32 |
| 0x1A | 0x2C | 4 | PID |
| 0x21 | 0x33 | 1 | Gender |
| 0x22 | 0x34 | 2 native read | Form + storage high byte；编辑器逻辑 Form u8 |
| 0x66 | 0x78 | 1 | IsEgg |
| 0x91 | 0xA3 | 1 | OriginVersion |
| 0x94 | 0xA6 | 4 | FormArgument；species869 用低8位 |

Ball 不在共同 Core。六种已知 payload Ball 偏移：1/0x36、2/0x3F、3/0x27、4/0x26、5/0x1B、7/0x37；Tag6 球 Getter 返回0。已知长度分别 0x3F、0x48、0x40、0x2F、0x4A、0x19(Tag6)、0x40。严格 PH4 读取拒绝重复 Tag、错误已知长度和 Padding；这是一项编辑器安全策略，不宣称模拟原生畸形输入行为。

## 默认对象原始机器码证据
0x518760 分支选择：BadEgg 或找不到 TLV 时使用对应全局对象。原始 ARM64 窗口来自 Actions 45769860488；默认对象审计 Actions 45770123352 成功，下载 artifact 15094060665，ZIP SHA256 c011cfc31a4a29eb1ec140cd67f5189d2f1f8a739b1db6bcfbbad8fc0a2f1cff，CRC 完整。以下地址为 ELF VA。

| Object | Base | Bytes | Ball byte VA | ADRP+ADD candidate refs |
| --- | --- | --- | --- | --- |
| Core | 0xB15DB2 | 196 | — | 70 |
| Tag1 | 0xB15E78 | 63 | 0xB15EAE | 53 |
| Tag2 | 0xB15EB7 | 72 | 0xB15EF6 | 29 |
| Tag3 | 0xB15EFF | 64 | 0xB15F26 | 48 |
| Tag4 | 0xB15F3F | 47 | 0xB15F65 | 24 |
| Tag5 | 0xB15F6E | 74 | 0xB15F89 | 31 |
| Tag7 | 0xB15FB8 | 64 | 0xB15FEF | 29 |

全部七个块（共同 Core 加六个 SideData）落在 PT_LOAD 内存范围且超出 file-backed 范围，加载阶段 zero-fill；六种球数据块连续。284 条候选地址物化引用不等于 284 个独立消费者或写入者。Tag6 未定位默认对象地址，Ball 分支直接返回0；不能将其算作已恢复的第七个 SideData 默认对象。
加载时全零不代表初始化后全零。尚未闭合启动构造、间接指针写入、memset/memcpy 覆盖，禁止将 load-time zero-fill 当作 runtime default 值。当前适配器继续拒绝 BadEgg 与未证实的默认对象读取。

## 验收与接入
- 45769860488：11 个请求适配器合成测试通过。
- 45769757019：修正缺失物种常量后的 BRTI/selector CI 通过。
- 45770123352：七块存储分类与 284 处引用候选证据通过。
- bbd1b561 新增 validate_ph4 / resolve_ph4_plaintext，单条明文 PH4 验证及 2 个边界测试，最新 CI 尚待验收。
- 现有独立资源索引生成 45769854022 的提交阶段遭遇 non-fast-forward；不要标记资源合同已归档。
- Rust 迁移可先采用只读 PH4 适配器接口；完整原生等价仍依赖默认对象初始化、原生运行时对照、PNG 索引归档及真实 PKM 输入转换。原始 NCA、Unpack、编辑器不修改，PR 保持 Draft。
