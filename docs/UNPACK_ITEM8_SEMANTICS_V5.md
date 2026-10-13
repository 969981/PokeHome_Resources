# HOME 4.1.0 P5 — 道具字段命名、原生 ELF 消费者与图鉴 Topics 结构

日期：2026-10-13；分支：`4.1.0`。这是一份**有分层证据的只读格式分析**：
不能将数据规律、其他游戏源码的字段命名以及原生 ELF 调用链混为同一类证据。

## 1. 原始 ELF 已直接证实的内容

原始 ELF: `57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf`

- SHA256: `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`
- **ELF_DIRECT**: `main+0x502104` 处 ADRP+ADD 构造 `item.dat` 字符串地址，随后存在 `0x5F66F0` 与 `0x50213C` 相关调用链。它是资源准备/装载路径，**不是** 48 字节字段读取函数。
- **ELF_DIRECT**: `main+0x6979C` 引用 `bin/pml/item/item_hash_to_index.dat`，文件载入之后 `main+0x6986C` 执行 `LDR X8,[X23],#0x10`（16 字节迭代步长）；`main+0x69870` 执行 `STRH W8,[SP,#0xC]`。这支持独立解析器观察到的哈希表每条 16 字节结构，但**不代表**已经确定哈希算法。
- **ELF_DIRECT**: `main+0x12B10` 引用 `topics_data.bin`；`main+0x12B44` 走公共资源装载路径，`main+0x12B64` 将装载结果写入 `[X19,#0x508]`。这还未指认该资源的具体业务消费者和结构成员读取。
- `main+0x17D484` 和 `main+0x17D3B8` 分别引用 `form_data.bin` 和 `shape_data.bin`。

原始 opcode 和反汇编已由 GitHub Actions 在**同一 SHA** 下实际执行并发布：

- [ELF 资源 XREF JSON](../derived/4.1.0/native_elf_item_topics_xrefs.json)
- [ELF 指令窗口](UNPACK_ELF_ITEM_TOPICS_NATIVE_WINDOWS.md)
- [数据消费者指令审计](UNPACK_ELF_NATIVE_ITEM_TOPICS_CONSUMERS.md)
- [消费者审计 Actions](https://github.com/969981/PokeHome_Resources/actions/runs/38345196552)

以上只能证明实际装载/读取指令，不代表对所有道具字段的 HOME Native Getter 做到了逐字段 XREF。

## 2. Item8 48 字节结构（外部可信类型定义 + HOME 原始数据双重验证）

字段名称来自开源 [pkNX `Item8.cs` 的固定提交](https://github.com/kwsch/pkNX/blob/0936c08eb14ed08eb9042c008404b24bf60e088a/pkNX.Structures/Item/Item8.cs)：

| Record 偏移 | pkNX 源码成员 | 原生宽度 | 验证级别 |
|---|---|---|---|
| `0x00` | `Price` | u32 | 源码定义 + 真实球价格 |
| `0x04` | `PriceWatts` | u16 | 源码定义 + 球瓦特价格 |
| `0x08` | `PriceAlternate` | u16 | 源码定义，值保留原样 |
| `0x11` | `Pouch` | u8 低4位 | 源码枚举 + 球/药物分类 |
| `0x13` | `EffectField` | u8 | 源码定义 + 伤药抽样 |
| `0x15` | `CanUseOnPokemon` | u8 | 源码定义 + 伤药抽样 |
| `0x1A` | `ItemSprite` | u16 | 源码定义 + 球图标 ID |
| `0x1C` | `GroupType` | u8 | 源码枚举 + 球类别 |
| `0x1D` | `GroupIndex` | u8 | 源码定义 + 球排序 |
| `0x1F–0x22` | `Boost0..Boost3` | 4×u8 | 源码定义，业务仍待原生证明 |

样本源数据直接在现有 4.1.0 RomFS：

| Item ID | 实测 Price | 实测 Watts | Pouch | Sprite | 注 |
|---:|---:|---:|---|---:|---|
| 2 | 800 | 40 | Balls | 2 | 高级球 |
| 3 | 600 | 30 | Balls | 3 | 超级球 |
| 4 | 200 | 10 | Balls | 4 | 精灵球 |
| 17 | 200 | 10 | Medicine | 17 | 伤药，EffectField=1，CanUseOnPokemon=1 |

该数据形态一致，**不能自动证明全部字段在 HOME 原生代码里具有同一业务用法**。

### 正确的 Item8 记录域及边界

- `u16@0 = 1829`: 实际的 Item ID 项数，即 `0..1828`。
- `u16@2 = 1832`: 对齐后的索引槽数，末尾 **1829/1830/1831 三槽均为零**，超出 Item ID 域。
- `u16@4 = 1166`: 实际唯一的 48 字节记录条数。
- `u32@0x40 = 5124`: 记录区起始；`5124+1166*48=61092` 到达 EOF。
- 哈希索引文件有 1830 行，多出一行 `row1829 -> index1828`；此条在**有效 Item ID 域之外**，因此旧文档所谓「末尾索引异常」是不同表的容量比较，不应当算作有效物品 ID 的错配。在 `item_id=0..1828` 范围内，已核对的 1,165 个非零索引存在性全部吻合。
- 记录索引零被广泛复用为**共享默认记录**；不能错误地将每个零索引解释成一个独立的 48 字节实体。

## 3. 真实交付与来源

同一镜像目录下：

- [`item.semantic.csv`](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.semantic.csv)：**1,829 个 ID**，包含价格、分类、图标、效果、RawHex 等及复用默认记录标记。
- [`item.semantic.json`](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.semantic.json)：外部源码提交、源文件 SHA、字段可信度、索引域和步长。
- 原有 `item.csv` 仍保留 **1,166 条 48 字节唯一记录**和 12 个 `u32` 原始字段，便于逐字节无损对照。
- 其余 `item.id_lookup.csv`、`item.aux_pairs.csv`、`item.hash_join.csv` 仍存在。

[实际解析产物提交](https://github.com/969981/PokeHome_Resources/commit/ccc613fc015bb3bb006412ad87989bae08d6a817)
和 [真实样本 CI](https://github.com/969981/PokeHome_Resources/actions/runs/38345532598) 已验证全部生成路径、哈希与源码回归测试。

## 4. `topics_data.bin` 已由 unsupported 变成 partial

`216336=8+7*(16+99*312)`，全部源数据被准确分割为：
7 个分组头，每组 99 条 312 字节记录，共 693 槽；每组前20条非模板，后79条字节完全等于一个共享占位模板，总计 **140 条有效候选、553 条模板占位**。

- [`topics_data.csv`](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/mtt_pokedex/bin/topics_data.csv) 含 693 行，每行 78 个原始 u32 字段，分组/槽位/源偏移/是否模板。
- [`topics_data.json`](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/mtt_pokedex/bin/topics_data.json) 含分组计数、模板 hash 等。
- **语义仍未闭合**：每条记录中部分字段可能是浮点原始位模式；不能简单解释为全部整型逻辑量，也未确认第 0~19 槽的游戏内实际话题名称。

[真实样本解析和完整 hash 校验](https://github.com/969981/PokeHome_Resources/actions/runs/38345035768) 已通过。

## 5. 当前转换覆盖与后续证据

`mirror-0.6.0`: **12074 source; 6700 converted; 5371 partial; 3 unsupported; 0 failed; 47848 output files**。

仅剩三份 `*.BFOTF` 字体缺少可靠解码器；按项目规范仍保留未支持状态，不以伪造字体数据充数。

下一步验证应沿 ELF **字段 Getter 本体**推进，特别是 `item.dat` 的 48-byte member 取值、位掩码判断、使用效果分支；以及从 `topics_data.bin` 的 `x19+0x508` 追到 312-byte 槽位中实际读取偏移。静态计算路径之外仍需必要的实机只读对照。

**不能只因为剩下 3 个 unsupported 就宣称完全解包：5,371 个 partial 仍是未完全恢复语义的真实工作量。**
