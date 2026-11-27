---
title: HOME 4.1.0 PH4 语言、出身标记及内部游戏编号生产者
tags: [pokemon-home, PH4, ELF, image-resources, native-selector]
date: 2026-11-26
---
# 原生图标字段生产者

[原生选择器](README.md) · [资源导航](../../docs/README.md) · [结构化模型](producer_model.json) · [Rust 模块](../../rust/home-image-resource-core/src/native_icons.rs)

## 证据与纠正

原版 ELF SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a。Actions [45817769009](https://github.com/969981/PokeHome_Resources/actions/runs/45817769009)、[45817870352](https://github.com/969981/PokeHome_Resources/actions/runs/45817870352)、[45818003591](https://github.com/969981/PokeHome_Resources/actions/runs/45818003591)、[45818226766](https://github.com/969981/PokeHome_Resources/actions/runs/45818226766)、[45818303284](https://github.com/969981/PokeHome_Resources/actions/runs/45818303284)。最后一轮 artifact 15117220225，Actions 报告 SHA256 7b4a22457c168456091296d1c51997466f1c48fa7c71e57624564d6e8924e2e4。第一、第三轮 ZIP 独立下载校验 SHA256、CRC 成功；最终轮 SHA256 来自 Actions，不声称独立校验。

**纠正旧文档：** 0xAEE88 调 0x2069D0，w20 保存其返回值；0xAEE9C/0xAEEA8/0xAEEC4 分支汇合到 0xAF794，再由 0xAF798 MOV W1,W20 / 0xAF7A4 BL 0x2C6808 消费。不能因为 0xAEEDC 处邻近的出身 selector 而将其作为该 getter 的消费者。

## PH4 / Core 真实读取链

| 字段 | Core | PH4 | getter chain | 消费者 |
|---|---:|---:|---|---|
| OriginVersion | 0x91 | 0xA3 | 0x2069B0 → 0x5312D8 → 0x516C70 | 0x105790 → 0x2C596C |
| Language | 0x93 | 0xA5 | 0x2069D0 → 0x5312D0 → 0x510D20 → 0x510E1C | 0x2C6808 |

0x2069D0 / 0x2069B0 读取 wrapper+0x58；0x5312D0 / 0x5312D8 读取 inner+0x2F0。0x510D20 同步保护后调用 0x510E1C；后者 0x510E48 BL 0x50E7F8，0x510E94 LDRB W20,[X0,#0x93]。0x516C70 的 0x516D70 BL 0x50E7F8 和 0x516D80 LDRB W21,[X0,#0x91] 证明原始版本 byte。0x50E7F8 返回 owner record+0x12，见 [Core 证据](../NATIVE_CORE_DEFAULT_OBJECTS.md)。BadEgg 使用默认对象 0xB15DB2；离线 API 拒绝，不模拟默认初始化、同步/重封装或异常记录。

0x15BFB4 BL 0x2069B0，0x15BFB8 BL 0x105790，0x15BFBC MOV W22,W0，0x15BFE8 MOV W1,W22，0x15BFF4 BL 0x2C596C。

## OriginVersion → generation → BRTI

0x105790 的 0x627130 5个 i32 原始表为 [1,1,1,1,4]；其它分支直接由原始指令恢复。256个 byte 输入完整映射已写入 JSON。0x105790 有 3 个直调用点。

| OriginVersion byte | generation | 纹理号 |
|---|---:|---:|
| 24–29 | 0 | 02 |
| 30–33 | 1 | 03 |
| 34 | 4 | 06 |
| 35–41 | 3 | 00 |
| 42–43 | 5 | 05 |
| 44–45 | 6 | 04 |
| 47 | 8 | 07 |
| 48–49 | 7 | 08 |
| 50–51 | 9 | 09 |
| 52 | 10 | 10 |
| 56–57 | 11 | 11 |
| 其他（含 53） | 2 | 01 空白 |

普通/Color 资源由同一 generation 映射，Color 指已恢复的纹理采样结果，不等于最终运行时 tint。见 [swizzle](../origin_swizzle/README.md)。

## 选定游戏描述符：独立输入域

0x6AF80 从 VA 0x625450 读取13字节 [0,42,43,44,45,48,49,47,50,51,52,56,57]，超界返回0。0x10B890 获取 0x221AC0 返回的全局对象 0x7E5630，选定描述符位于 base+0x202A18 附近，0x223C30 返回0xA0步长的描述符，再复制0xA0字节到调用者栈。0x10F20C 从 SP+0x74（描述符副本+0x2C）读 w0，依次调用 0x6AF80、0x2D5164、0x2D5154；与 0xAF494 → 0x225BC0 → [X0+0x2C] → 0x6AF80 的全局描述符链区分。0x225BC0 返回 0x7EEF30。只确认 selected/connected descriptor context，不假定是任意 Pokémon 的 current game。

| 内部输入 | version code | display index | key |
|---:|---:|---:|---|
| 0 | 0 | 0 | icon_version_9999^q |
| 1 | 42 | 9 | icon_version_0040^q |
| 2 | 43 | 10 | icon_version_0041^q |
| 3 | 44 | 11 | icon_version_0050^q |
| 4 | 45 | 12 | icon_version_0051^q |
| 5 | 48 | 16 | icon_version_0100^q |
| 6 | 49 | 17 | icon_version_0101^q |
| 7 | 47 | 18 | icon_version_0090^q |
| 8 | 50 | 19 | icon_version_0110^q |
| 9 | 51 | 20 | icon_version_0111^q |
| 10 | 52 | 22 | icon_version_0130^q |
| 11 | 56 | 23 | icon_version_0140^q |
| 12 | 57 | 24 | icon_version_0141^q |

0x6A6F8 从 0x625368 读取 [1,1,2,3,4,5,7,8,9,10,11]；超界返回2。与 PH4 language ID 不同，不对 Core+0x93 再执行此转换。

## 双版本 UI snapshot

0x13A7AC 内 0x13A83C–0x13A858 读取 controller+0x640 的 indexA/indexB（+0x20/+0x24）及 base+0x28，计算 base+indexA*0x5DC0+indexB*0x50。记录主体从该地址+0x84开始，实际行长度0x50。复制到 SP+0x20 后：

| Row 内偏移 | 原始相对地址 | Stack | 消费点 |
|---|---|---|---|
| +0x1C u8 | +0xA0 | +0x3C | 0x13A95C → 0x13A970 BL 0x2C6808 |
| +0x48 u32 | +0xCC | +0x68 | 0x13AD1C → 0x13AD30 BL 0x2D5144 |
| +0x4C u32 | +0xD0 | +0x6C | 0x13AD8C → 0x13ADA0 BL 0x2D5144 |

0x13A8B8 的 LDR X11,[X8,#0xC8] 与 0x13A8C4 STUR X11,[SP,#0x64] 传递第一版本的高32位；0x13A8BC/0x13A8C0 传递第二版本。0x12F148 只读取 X2 指向的首个引用，再构造自己的局部引用传给 0x12EF30；未发现直接改写两个 stack 字段。indexA==2 时第二 pane 不显示，另一个 pane 可见（0x13AD58–0x13ADE0）；pane 常量 0x62B880/888/890 非可读字符串。0x1172A4 零填充相邻另一种0x50步长结构，不能认定为本记录写入者。全局9个 stride/store 候选仍未闭合本行写入者。

因此仅命名 version_a/version_b，两者是直接 display index。不能认定 A=Origin、B=Current，不能将 UI row 偏移当 PH4 偏移。当前游戏的实体级存储/来源仍未确认。

## Rust / Tauri2 接入

新增 native_icons.rs 的 typed inputs、PH4 只读适配、语言、出身标记、显式 native version code 和 selected game descriptor 查询。实际图片通过 Git tree blob identity 对应到既有35个语言/版本 PNG；出身标记引用已恢复的24图。原始 NCA/Unpack 不变；不接入编辑器主项目，不修改生产数据库。测试覆盖256个 byte 输入、13个内部游戏输入、11个内部语言输入、普通明文 PH4、BadEgg拒绝、UI snapshot边界和真实图片路径。CI 结果需以实际验收为准。
