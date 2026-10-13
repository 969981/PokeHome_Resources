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

## Item.dat Native Getter：已追到调用链，但未证明字段别名

- `main+0x502104` 在函数内引用 `item.dat` 字符串，用于格式化/
  取得资源路径；不是 Price/Effect 的 Getter。
- `main+0x5020A0` 是格式化路径所在函数。全 ELF Direct BL
  仅找到 **一个**调用点 `main+0x4FD67C`，因此该地址是下一阶段
  继续追对象和内存载入的最佳入口。
- `main+0x50213C` 为通用资源转发/构建路径，
  有 **十个**直接 BL 调用点，并非特定道具效果读取者。
- `main+0x502950` 的全局资源上下文 getter 出现 32 个直接 BL 调用点。
- `item_hash_to_index.dat` 的读取循环 `main+0x6986C`
  使用 `[x23],#0x10` 读取下一个 16 字节索引条目并通过
  `STRH` 提取一个低 16 位数据成员。

在 `main+0x500000..0x550000` 的 81,920 条解码指令范围内，
对 “MOV #0x30 → 后续 17 指令内含使用该寄存器的 UMADDL/MADD”
的保守扫描 **没有候选**。这只是局部特征匹配为零，不代表所有 ELF
不存在该 Getter；编译器可能使用其他乘法/移位优化或把数据访问
内联到另一个模块。**不能宣称已定位道具 48 字节对象的 native 属性 Getter**。

`item.semantic.csv` 仍然使用经原始数据交叉验证的
[pkNX Item8 源码定义](https://github.com/kwsch/pkNX/blob/0936c08eb14ed08eb9042c008404b24bf60e088a/pkNX.Structures/Item/Item8.cs)，
其中价格、分类、图标等字段可信，但只是**外部同结构定义+实样验证**，
不同于 HOME native 某个字段的直接 XREF 证明。

- [P6 item ELF 调用与候选审计 JSON](../derived/4.1.0/native_item_topics/p6_item_native_chain.json)
- [扩展 item Caller 反汇编窗口](UNPACK_P6_NATIVE_FOCUS_WINDOWS.md)
- [Native 调用链 CI](https://github.com/969981/PokeHome_Resources/actions/runs/38348839311)

下一步重点：从 `main+0x4FD67C` 返回值沿资源句柄追
`item.dat` 解引用地址到 `0x40` 数据偏移/索引读取处，
记录每个 Native 访问指令的真实 PC、字段偏移、有效类型及调用者，
再进一步追 ItemEffect 等业务消费者；无证据的命名暂不推进。

## 工程状态

`mirror-0.7.0` 的最新校验：12,074 源文件，
**converted=6,700、partial=5,371、unsupported=3、failed=0**，
真实镜像输出 **47,849** 个。P6 的 `topics_data.references.csv`
新增一份有效产物，不能虚假把整个 `topics_data.bin` 算成
所有字段均已恢复的 converted。剩余三种 unsupported 均为 BFOTF 字体。
