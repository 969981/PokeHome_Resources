# P7：HOME 4.1.0 Item8 上层 Native 业务消费者

2026-10-13。范围为 `969981/PokeHome_Resources@4.1.0` 原始 ExeFS ELF 与对应 RomFS `item.dat`，**只读静态研究**。

## 证据分级与明确结论

本次没有把 `record+0x1E` 内的 45 个扩展选择属性臆测成“战斗效果已证明”。目前实际闭合的跨层消费者：

1. **Pouch / 背包分组**：`main+0x266D30` 取得 Native selector 14 (`main+0x4FD48C`)，读取 `item.dat` 的 `record+0x11 & 0xF`，然后将道具 ID 映射到 0..8 的背包分组、寻找原槽位并更新数量。
2. **ItemSprite / 资源键构造**：`main+0x2C3018` 经 `main+0x4FD80C` 使用固定 selector 4，Native `LDRSH` 取得有符号图标编号，正值路径以 `item_%04d^o` 构造资源键，负值走 `item_dummy^o`，最终传给 `main+0x2D0ED4`。
3. **文件头分类计数**：`main+0x4FD854` 从 `item.dat` `+0x20+2*Pouch` 读取 `u16`，与 **1166 条独立 48B 记录**按 Pouch 分类的数量逐组完全一致。

完整来源：

- [P7 ELF 全段直接 B/BL 交叉引用及候选数据指针](../derived/4.1.0/native_item_topics/p7_item_upstream_calls.json)
- [P7 Native 实际上层调用的逐指令反汇编](UNPACK_P7_NATIVE_ITEM_CALLER_WINDOWS.md)
- [P7 Pouch 消费者、九分类、背包槽结构、源码校验与 opcode](../derived/4.1.0/native_item_topics/p7_item_pouch_native_consumer.json)
- [P7 原生道具图标路径构造、回退及消费者调用](../derived/4.1.0/native_item_topics/p7_item_sprite_native_sink.json)

## A. 真实上层调用者与 Pouch 选择编号

```asm
0x266D40  and    w21, w1, #0xffff   ; 将入参道具 ID 保存到 w21
0x266D48  mov    w1, #0xe          ; Native PropertySelector = 14
0x266D4C  mov    w0, w21
0x266D58  bl     #0x4fd48c        ; 通过 PML 包装查询 Pouch
0x266D5C  cmp    w0, #8
0x266D74  ldrb   w11, [x9, x8]    ; 9 路分支表，表址 main+0x634FFC
0x266D7C  br     x10
```

`main+0x4FD48C` 是调用记录 Getter / 属性 Getter 的中间包装，
确实在 `0x4FD4D4` 调用 `0x4FD0B8`，并返回 selector 14 的值。

| 原生 Pouch 索引 | pkNX 类别名称（外部枚举） | 文件头 +0x20 的 catalog 独立记录数 | 原生背包槽容量 | 背包对象指针成员 |
|---:|---|---:|---:|---|
| 0 | Medicine | 37 | 60 | +0x2650 |
| 1 | Balls | 27 | 30 | +0x2658 |
| 2 | Battle | 10 | 20 | +0x2660 |
| 3 | Berries | 53 | 80 | +0x2668 |
| 4 | Items | 640 | 550 | +0x2670 |
| 5 | TMs | 200 | 210 | +0x2678 |
| 6 | Treasures | 20 | 100 | +0x2680 |
| 7 | Ingredients | 25 | 100 | +0x2688 |
| 8 | Key | 154 | 64 | +0x2690 |

**重要区别**：九类 catalog 独立记录数之和为 **1166**；九类 bag 容量之和为 **1214**。它们本来就是两个不同的概念，不应当为了让数据相等而修改其中任意一方。例如 Items 目录有 640 条实体记录，bag 有 550 个物品槽位。

`0x266E60` 对每个背包槽 `LDR W12,[X8,X10,LSL #2]`：
每个槽是 4 字节。Native 将槽位值按以下方式读取与更新：

```c
uint32_t item_id = packed & 0x7FFF;             // bits 0..14
uint32_t quantity = (packed >> 15) & 0x7FFF;    // bits 15..29
uint32_t flags = packed & 0xC0000000;           // bits 30..31
// 对已存在的 ID 追加数量时，Native 约束上限为 999。
```

与 UI 具体栏目名称无关的 `flags` 位业务含义仍未断言。

## B. ItemSprite 的 Native 消费者：确定真实资源键

```asm
0x2C3054  bl    #0x4fd80c    ; 通过 0x4FD82C 的 selector 4
0x2C3058  mov   w23, w0      ; ItemSprite 原生有符号 16 位
0x2C306C  tbnz  w23, #31, #0x2c308c
0x2C3074  add   x2, x2, #0xba7  ; 字符串 RVA 0x616BA7
0x2C3084  bl    #0x5f66f0      ; 按 icon ID 格式化资源键
0x2C3090  add   x8, x8, #0xff3 ; 回退键 RVA 0x60AFF3
0x2C30B8  bl    #0x2d0ed4      ; 资源键交给下游消费者
```

从 ELF 的原始只读字符串中取得：

- 正常图标：`item_%04d^o`，例如 ItemID 2 的 sprite 2 -> `item_0002^o`。
- 不可用图标：`item_dummy^o`，如共享默认记录的 `sprite=-1`。
- 当前 1829 个逻辑 ItemID 中，**683 个**包含负图标编号，对应回退路径（其中多个 ID 共享同一条默认记录）。

这证明了 **ItemID → Record → signed Sprite Getter → 格式化/回退 → 下游资源调用**，
并不意味着已经完成实际 GPU 贴图绑定或证明了每个纹理最终如何渲染。

## C. 已落地的镜像增强和验证

`tools/home41_item8_semantic.py` 现在按原始 ELF 业务消费含义导出：

- `native_pouch_business_consumer_rva`、`native_pouch_owner_member_offset`、`native_pouch_bag_slot_capacity`、`native_pouch_catalog_unique_records`；
- `native_icon_resource_key`、`native_icon_uses_fallback_key`、`native_icon_asset_path_consumer_rva`；
- 元信息 `native_business_consumer_provenance` 显式区分证明完毕的背包与图标消费者，以及仍不成立的 `actual_battle_effect_consumer_proven=false`。

实际产物：

- [镜像中 1829 条 Item8 业务字段、路径键和 Native 证据](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.semantic.csv)
- [Item8 元数据与各类计数和证据路径](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.semantic.json)
- [26 属性完整原生数值](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.native_properties.csv)
- [45 扩展效果的原始数值（未擅自命名）](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.native_effects.csv)

实际 CI：
[Pouch 原始 ELF + ROMFS](https://github.com/969981/PokeHome_Resources/actions/runs/38354786695)、
[Sprite 原始 ELF + ROMFS](https://github.com/969981/PokeHome_Resources/actions/runs/38355129618)、
[镜像 P7 业务字段发布](https://github.com/969981/PokeHome_Resources/actions/runs/38355415452)。

`mirror-1.0.0`：12074 源文件，6700 converted、5371 partial、3 unsupported、0 failed；输出数 47851。

## D. 战斗 / 真正使用效果仍然未闭合

从整个 ELF 可执行段直接 B/BL 指令的扫描，目前实际可指认的 Item8 读取调用：

- `0x266D58 → 0x4FD48C`，固定传 `selector 14` 用于 Pouch。
- `0x2C3054 → 0x4FD80C`，其包装函数固定传 `selector 4` 用于 Sprite。
- 同区域还有 `0x4FD854` 的文件头类别计数读取等。

对 `main+0x4FD0B8` 的直接调用目前仅位于这些内部包装函数。
**未从这些上层直接调用链找到向扩展属性 selector 26..70 传入值并实际执行战斗 / HP 恢复 / 状态变化的 Native 消费者。**

这是有意义的**阴性搜索结果，但不是不存在调用的绝对证明**：本轮搜索的
直接 `BL/B` 不包括所有 `BLR` 虚调、动态脚本绑定、反射引用或其他游戏的可执行文件。

特别要避免这样的错误：发现道具 ID17（伤药）的原生扩展 selector 66 为
`20`，就直接声称 HOME 的 ELF 已证明“伤药回复 20HP”。该数值与游戏知识一致，但 **P7 HOME 4.1.0 的使用效果消费者仍没有直接证明**。

接下来若要给 26..70 绑定权威业务名称，应优先：
1. 找 `main+0x4FD48C` 和 `main+0x4FD0B8` 的间接/脚本注册与真正调用参数；
2. 对照在实际实现道具使用或战斗的联动游戏可执行文件，锁定 HP、PP、状态治疗等原生消费者；
3. 逐个拿具体道具 ID 做数值对照，Native opcode→字段→用户可观察操作三段完整闭环后再命名。

在上述证据到位前继续将 `item.dat` 保持 `partial`，不修改任何原始 RomFS/ELF。
