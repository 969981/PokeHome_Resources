# HOME 4.1.0 · P6 Native 语义恢复：Topics / Item 读取链

日期：2026-10-13；分支：`4.1.0`。

## 审计边界

使用本仓库原始 `..._NCA/0/main.elf`，SHA-256 固定为
`bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`。
Native RVA 不等于运行时 ASLR 地址。静态取值和类型推断分开记录，
不把未经证明的 UI 完成条件或物品效果当作官方函数名。

本轮 Capstone 在可执行 ELF PT_LOAD 上使用 skipdata，实际扫描
**1,564,837 条可解码 AArch64 指令**。首次未跳过段内无效字节，
只扫描到 1 条的失败尝试已纠正；成功扫描和独立窗口审计由
[Actions 38347994175](https://github.com/969981/PokeHome_Resources/actions/runs/38347994175)、
[Actions 38348159384](https://github.com/969981/PokeHome_Resources/actions/runs/38348159384)
证明。涉及 0x138、0x30、+0x508 的简单立即数匹配会有大量无关结构，
必须通过调用关系、索引公式和真实数据共同缩小候选。

## Topics：已由 Native 确证的分组、槽位访问

`main+0x179540` 直接用 `UMADDL` 计算：

```c
uint8_t *rec = base + group * 0x78B8 + slot * 0x138;
uint32_t lhs = *(uint32_t *)(rec + 0x30 + index * 4);
uint32_t rhs = *(uint32_t *)(rec + 0x54 + index * 4);
uint64_t flags = native_get_flags(lhs, rhs);  // main+0x225C30
```

`0x78B8=30904`、`0x138=312`；实际 RomFS 的
`216336 = 8 + 7 × (16 + 99×312)`。

这个函数直接使用索引、读取成对数据并把它们送入 `0x225C30`，
是字段级 Native 消费者证据。相比此前仅靠文件长度的 312 字节记录
假设，证据等级实质提高。其他 `0x179640..0x179DC0` 条件分支
还读 `+0x34/+0x58`、`+0x38/+0x5C` 等连续配对成员。

### `main+0x225C30` 的 Native 标志访问

直接 opcode 为：

```asm
0x225C30 mov    w8, #0xE0
0x225C3C umaddl x8, w0, w8, x9
0x225C48 add    x8, x8, w1, uxth #3
0x225C4C ldr    x0, [x8, x9]
```

其中 `x9` 由 `mov w9,#0x1CE8; movk w9,#4,lsl#16` 形成
`0x41CE8`，函数由固定全局基址衍生 species/form 表的地址。
即 Native 返回一个 `u64` 标志值，记录跨度 `0xE0` 字节，
形态索引步长 `8` 字节。**不等于**已确定各标志位含义。

### 七个分组的 Native 位位置

ELF 常量表 `main+0x62D39C` 精确导出：

| group index | native flag bit | 跨游戏首组编号推断（非 Native 名称） |
|---:|---:|---|
| 0 | 0 | Let's Go 皮卡丘／伊布 |
| 1 | 1 | 剑／盾 |
| 2 | 2 | 晶灿钻石／明亮珍珠 |
| 3 | 5 | 传说 阿尔宙斯 |
| 4 | 6 | 朱／紫 |
| 5 | 7 | 传说 Z-A |
| 6 | 9 | 火红／叶绿 |

一般路径的位测试为 `(flags >> group_bit) & 1`。
对 group=5，ELF 会读取 `main+0x62D21A` 开始的
`0x180` 字节常量表（`96 × (u16 species, u16 form)`）；
对于命中的形态组合，额外要求 **flags bit 8**。
这段语义与 UI 对应的游戏完成／展示标签尚未直接确认。
例如该表包含 `(3,1)`、`(6,1)` 和 `(6,2)`，
符合若干特殊进化形态的编号组合，不能简单推广到所有游戏。

- [原始 96 对数据](../derived/4.1.0/native_item_topics/p6_topics_group5_special_pairs.csv)
- [Native 原始常量、偏移及 SHA](../derived/4.1.0/native_item_topics/p6_topics_native_flags.json)
- [真正的 Topics 读取者逐指令反汇编](../derived/4.1.0/native_item_topics/p6_topics_native_accessors.md)
- [CI 真实原始 ELF 校验](https://github.com/969981/PokeHome_Resources/actions/runs/38348366702)

### 140 话题 × 500 个 Species/Form 引用

原生读取对照 RomFS，活动话题共 140 条；每条提供九对候选
`species_u32` 和 `form_u32`。当前非零宝可梦编号共 **500**，
没有非零形态对应空编号、最大种族编号为 1008、形态编号不超过 6。

| group | topic 数 | 非零种族/形态引用 |
|---:|---:|---:|
| 0 | 20 | 75 |
| 1 | 20 | 73 |
| 2 | 20 | 68 |
| 3 | 20 | 80 |
| 4 | 20 | 70 |
| 5 | 20 | 67 |
| 6 | 20 | 67 |

文件 `Unpack/.../bin/appli/mtt_pokedex/bin/topics_data.references.csv`
真实包含 500 行，记录 group、题目槽位、原始记录偏移、前 16 字节
资源识别值、原始进度码、species、form、第三代码、native 组 bit 与
`0x225C30` 证据链。游戏标签来自第一组宝可梦编号对应御三家等
跨游戏数据特征，是高可信推断，不是从 ELF 恢复的原始符号名。

- [500 行实际 CSV](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/mtt_pokedex/bin/topics_data.references.csv)
- [镜像元信息](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/mtt_pokedex/bin/topics_data.json)
- [已运行的真实数据测试](https://github.com/969981/PokeHome_Resources/actions/runs/38348722162)

**未完成**：topic 进度码与显示/登记/完成阈值的 Native 语义；
`0x225C30` 读取的全局 flags 表如何由用户具体图鉴状态写入，
尚缺 producer XREF 或同 Tracker 的实机对照。

## Item.dat Native Getter：加载→ID 索引→属性读取全链路已闭合

资源装载链的真实 ELF opcode（已按 `main.elf` SHA 原始验证）：

```text
main+0x5020A0   格式化 item.dat 资源路径
main+0x4FD67C   唯一 BL 调用上述路径函数
main+0x4FD6C0   将资源对象句柄保存到 owner+0x58
main+0x4FD76C   读取 raw resource+0x190
main+0x4FD774   把原始数据指针写入 owner+0x160
main+0x4FD784   ItemID→48-byte record 的 Native Getter
main+0x4FD098   唯一 BL Getter 的 wrapper 构造调用
main+0x4FD09C   wrapper+0x00 保存 record 指针
main+0x4FD0B8   26 项属性选择器
main+0x4FD108..0x4FD250   25 个直接字段 Getter
```

`main+0x4FD784` 的真实公式：

```c
uint16_t capacity = read_u16(raw + 0x02);  // 当前 1832
uint16_t record_count = read_u16(raw + 0x04);  // 当前 1166
uint16_t item_index = (uint16_t)item_id;
assert(item_index < capacity);
uint16_t slot = read_u16(raw + 0x44 + 2 * item_index);
assert(slot < record_count);
return raw + read_u32(raw + 0x40) + 48 * slot;
```

容量 `1832` 和有效 ID 数 `1829` 不相同。末尾三个容量填充槽
映射共享的 `record_index=0`，不能将它们认定为真实道具 ID。
ELF 逐条 opcode 已通过
[Item8 record Getter CI](https://github.com/969981/PokeHome_Resources/actions/runs/38349457838)；
[17 条严格 Opcode 证据](../derived/4.1.0/native_item_topics/p6_item_native_getter_proof.json)；
全 `1832` 槽复现见 `tools/test_home41_native_item_getter.py`。

### 原生 26 路属性分派与字段宽度

`main+0x4FD0B8` 通过 `main+0x657FCC` 的 **26 字节跳转表**
选择 `0..25` 属性，目的地址由
`0x4FD0DC + table[selector] × 4` 计算。
`selector=0` 读取包装对象的道具 ID，`1..25` 直接匹配
前述 Getter 函数入口。原始 CPU 指令确认各字段的偏移、
符号扩展和位提取；以下业务名称另外根据 pkNX 对照：

| Native selector | Getter | 原始偏移 | 原生读取 | pkNX 对照/说明 |
|---:|---|---:|---|---|
| 0 | `0x4FD0DC` | wrapper+0x08 | uint32 | Item ID |
| 1 | `0x4FD108` | +0x00 | uint32 | Price |
| 2 | `0x4FD114` | +0x04 | uint32 | PriceWatts |
| 3 | `0x4FD120` | +0x08 | uint32 | PriceAlternate |
| 4 | `0x4FD12C` | +0x1A | **int16** | ItemSprite |
| 8 | `0x4FD15C` | +0x10 | uint16 提取 bit12 | raw flag |
| 11–13 | `0x4FD184..0x4FD1A4` | +0x10 | uint16 掩码/bit5/bit6 | raw flag |
| 14 | `0x4FD1B4` | +0x11 | byte 低 4 位 | Pouch |
| 15 | `0x4FD1C4` | +0x13 | uint8 | EffectField |
| 17 | `0x4FD1DC` | +0x15 | uint8 | CanUseOnPokemon |
| 19–20 | `0x4FD1F4/0x4FD204` | +0x17 | byte 低/高 4 位 | raw flag |
| 22–23 | `0x4FD220/0x4FD22C` | +0x1C/+0x1D | uint8 | GroupType/GroupIndex |
| 24–25 | `0x4FD238/0x4FD248` | +0x10 | uint16 提取 bit7/bit13 | raw flag |

其余 Native 读取入口、精确 opcode、字段类型和宽度统一见
[25 Getter 原始 ELF 证据](../derived/4.1.0/native_item_topics/p6_item_native_field_getters.json)
与 [26 路属性分派表](../derived/4.1.0/native_item_topics/p6_item_property_selector_routes.json)。

经原始 `item.dat` 的 1166 个独立记录检测，`+0x04/+0x08`
Native 均使用 **32-bit LDR**，本版高 16 位恰好全零：
瓦特价格最大 8000、备用价格最大 1000；原兼容 `uint16`
字段保留，新增了 `price_watts_native_u32` 和
`price_alternate_native_u32`。图标 `+0x1A`
Native 使用 `LDRSH`，`0xFFFF` 实际为 `-1`，
同时保留 `item_sprite_u16=65535` 供历史兼容。

完整实际镜像：

- [1,829 × 26 属性矩阵 item.native_properties.csv](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.native_properties.csv)
- [1,829 行 pkNX 业务字段及 Native provenance](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.semantic.csv)
- [Native Getter 导出元信息](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.semantic.json)
- [全部验证的 26 属性镜像 CI](https://github.com/969981/PokeHome_Resources/actions/runs/38350730770)

**审计修复记录：**第一版属性投影漏处理若干
`flags_10_bit5/6/7/13` 的移位，将整个 `u16`
错误导出为某些二进制标志。现已修正为单 bit 的 `0/1`，
并添加独立 `range(0,2)` 约束与源数据交叉校验，
`mirror-0.9.2` 已重新生成并推送。避免将旧版的 0.9.1
输出用于效果判断。

### 效果属性扩展：Native selector 26–70 真实解析闭环

对 `selector > 25` 的读取，Native 先在 `main+0x4FD0E4`
检查记录内的 `record[0x15]` 分类字节。静态 opcode
区分三种分支：

```c
if (variant == 1) {
    // x1 = record + 0x1E;
    // 45 路间接表，selector 在 [26,70]
    goto main_plus_0x4FD270;
} else if (variant == 0 || variant == 2) {
    return *(uint8_t *)(record + 0x1E);
} else {
    return 0;
}
```

主路径 `main+0x4FD270` 执行 `selector - 26`，
然后通过 ELF **`main+0x657FE6` 的 45 字节常量表**
计算 `main+0x4FD294 + 4 × entry` 跳转地址。
原始 45 个入口已完全覆盖 `26–70`，每个都有
精确 opcode、参数偏移、位掩码或有符号类型：

| 选择范围 | Native 访问模式 | 证据界限 |
|---|---|---|
| 26–37 | 从 `record+0x1E` 的 32 位字取单 bit（0–11） | 直接 ELF |
| 38–59 | 从 `record+0x1E..+0x24` 取多位或单 bit | 直接 ELF |
| 60–65 | `LDRSB` 读取 `record+0x25..+0x2A`，int8 | 直接 ELF |
| 66–67 | `LDRB` 读取 `record+0x2B..+0x2C`，uint8 | 直接 ELF |
| 68–70 | `LDRSB` 读取 `record+0x2D..+0x2F`，int8 | 直接 ELF |

当前原始文件 1166 条独立记录的 variant 分布：
`0:1007`、`1:159`。已编写零副作用的
`tools/home41_item_native_effect_values.py`，
对 1829 个逻辑 ID 和 45 项效果 Native Selector
做全量源字节读取验证。源代码只恢复**真实读取的数值与位提取**；
例如 `selector 66` 在 `item_id=17` 上为数值 20，
但没有证据证明它对应 HP 恢复量之类的特定业务标签。

- [45 路效果分派及原始 opcode](../derived/4.1.0/native_item_topics/p6_item_extended_effect_routes.json)
- [1,829 × 45 实际效果属性 CSV](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.native_effects.csv)
- [真实资源 + Native ELF 45 路验收 CI](https://github.com/969981/PokeHome_Resources/actions/runs/38351279775)

**下一阶段未闭合的是上层 gameplay 消费者：**战斗或道具使用逻辑如何根据
具体道具 ID 与 26..70 读取值判定实际效果；应先沿高层调用者追溯各字段
被读取的上下文及具体数值的操作，然后才将 raw 字段提升为真正的业务名称。

## 工程状态

`mirror-0.9.3` 已实际校验：12,074 个源文件，
**converted=6,700、partial=5,371、unsupported=3、failed=0**，
真实镜像输出 **47,851** 个。
Item8 `item.dat` 与 Topics 均已拥有可审计的 Native 字段/标志产物，
但依然标为 `partial`，因为还缺完整 gameplay/UI 条件的业务含义证据。
剩余三份 `unsupported` 均为 BFOTF 字体。

