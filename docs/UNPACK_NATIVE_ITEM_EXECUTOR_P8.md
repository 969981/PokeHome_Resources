# P8：Item8 扩展效果执行者调查——原生间接调用、重定位与跨游戏边界

**日期**：2026-10-13　**研究仓库**：`969981/PokeHome_Resources`　**分支**：`4.1.0`

**真实原始 ELF SHA-256**：`bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`

本轮目标不是再从 `record+0x1E` 拆分原始属性，而是确认
`main+0x4FD0B8` 的 `selector 26..70` **实际被谁使用，
是否进入 HP、状态、战斗能力、PP 的业务操作**。

## 1. 研究结论和证据等级

**已证明**：

- 全部可执行 PT_LOAD 检查 **1,564,840 个 4 字节指令位置**。
- 直接 `BL` 进入 `main+0x4FD0B8` 的两处点：
  `0x4FD4D4` 和 `0x4FD830`，均来自内部包装器。
- 已实际证实的业务消费者主要是：
  - `0x266D58 → 0x4FD48C`，入参 `selector=14`，
    使用 Pouch 处理九种背包和道具数量；
  - `0x2C3054 → 0x4FD80C`，后者固定
    `selector=4`，使用有符号 ItemSprite 生成
    `item_%04d^o` 或 `item_dummy^o` 资源键。
- PC 相对指向 Item8 相关 `0x4FD000..0x4FD900` 区域的
  两处静态引用：
  `main+0x4FD0CC → 0x4FD0DC`、
  `main+0x4FD284 → 0x4FD294`。
  它们是普通属性和扩展属性的**内部跳转表**，
  并非发现了效果执行函数的独立注册。
- 实际读取的 ELF section / PT_DYNAMIC relocation
  **没有发现以该 Item8 区域地址为 addend 的条目**。
  这是本轮指定扫描范围内的阴性结果，
  不代表所有可能的运行时生成表、外部模块或注册关系不存在。

**仍未证明**：HOME 4.1.0 有直接执行
`selector 26–70 → HP 恢复 / PP 恢复 / 状态解除 /
能力变化` 的业务函数。
`item.dat` 的 Native 取值正确，
不等于该值真的被 HOME 执行了对应效果。

## 2. P8 九处 Item8 相邻 BLR 的真实寄存器来源

对 `main+0x4FD000..0x4FD900` 的 9 处间接 `BLR x8`
完成了逐处 opcode 复核，按 **x8 真实来源**归类：

| BLR 地址（main+） | 最近一次写入 x8 的指令模式 | 当前证据类别 |
|---|---|---|
| 0x4FD5D8 | `ldr x8,[x8,#0x18]` | 接口函数槽位 +0x18 |
| 0x4FD634 | `ldr x8,[x8,#0x18]` | 接口函数槽位 +0x18 |
| 0x4FD6B8 | `ldr x8,[x8,#0x18]` | 接口函数槽位 +0x18 |
| 0x4FD6D8 | `ldr x8,[x8,#0x10]` | 接口函数槽位 +0x10 |
| 0x4FD710 | `ldr x8,[x8,#0x18]` | 接口函数槽位 +0x18 |
| 0x4FD72C | `ldr x8,[x8,#0x18]` | 接口函数槽位 +0x18 |
| 0x4FD760 | `ldr x8,[x8,#0x18]` | 接口函数槽位 +0x18 |
| 0x4FD8D8 | `ldr x8,[x8,#0x18]` | 接口函数槽位 +0x18 |
| 0x4FD8F0 | `ldr x8,[x19,#0xE8]` | 对象成员存储的回调指针 |

样本实际指令：

```asm
main+0x4FD6B0  ldr x8, [x0, #0x48]!
main+0x4FD6B4  ldr x8, [x8, #0x18]
main+0x4FD6B8  blr x8
```

第九处独立于前面的接口虚表：

```asm
main+0x4FD8DC  ldr x8, [x19, #0xe8]
main+0x4FD8E0  cbz x8, #0x4fd8f4
main+0x4FD8E4  add x0, x19, #0x100
main+0x4FD8E8  stp xzr, xzr, [x19, #0xf0]
main+0x4FD8EC  stp xzr, xzr, [x19, #0xe0]
main+0x4FD8F0  blr x8
```

这**证明其调用地址取自对象 `+0xE8`**。
目前尚缺对象成员写入者与运行时实际目标，
不能给它命名为具体业务回调，也不能将其归为
`selector 26–70` 的消费者。

- [原始 ELF 全段间接注册与重定位扫描](../derived/4.1.0/native_item_topics/p8_item_indirect_xrefs.json)
- [9 处 BLR 原始 Opcode、寄存器来源与分类](../derived/4.1.0/native_item_topics/p8_item_local_blr_triage.json)
- [BLR 原始 ELF 测试 Actions](https://github.com/969981/PokeHome_Resources/actions/runs/38361006565)
- [独立边界与逻辑值回归](https://github.com/969981/PokeHome_Resources/actions/runs/38361217854)

## 3. 已恢复 45 个效果数值，但不能跨越的证据边界

源文件 `item.dat` **1,166 条独立记录**包含 45 个
原生扩展效果 Getter 对应的数据，
镜像已准确输出 1,829 个逻辑道具 ID：

- [Item8 45 属性 Native 提取源数据](../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pml/item/item.native_effects.csv)
- [45 路 AArch64 属性跳转/取值指令](../derived/4.1.0/native_item_topics/p6_item_extended_effect_routes.json)

现有事实足以支持
`ItemID → 48B Record → selector 26–70 → 返回值`。
不能由此推论
`返回值 → 玩家对道具按使用 → HP/PP/异常状态改变`。

例如 `ItemID=17` 的 selector 66 值为 `20`；
这与伤药的常见治疗数值相符，
但 **P8 中仍没有直接定位出消费这个返回值并写入 HP 的指令**。
因此业务意义只能标注为“与已知道具效果吻合的候选”，
而非“HOME 4.1.0 Native 已证明疗效 20HP”。

## 4. 下一阶段：建议转向真正具有道具使用功能的游戏 ELF

更高收益的路线为对照拥有实际道具使用和战斗处理的可执行文件：

1. **优先剑／盾（SWSH）的原始可分析 ELF/NSO**，
   与对应版本 RomFS 原始道具资源成对提供。
   HOME 4.1.0 的 Item8 48B 表与 pkNX Item8
   存在同结构证据，因此 SWSH 是较合理的优先研究对象，
   但必须重新核对两个版本的内容哈希、记录映射与效果表，
   不能直接套用 HOME RVA。
2. 也可使用已经有完整源码/二进制的**朱／紫版本**；
   但应单独重建其道具结构，不能默认它与
   HOME 的 Item8 48B 记录、选择器编号相同。
3. 在真正的游戏 ELF 里优先寻找
   “物品使用入口 → item_id / effect_type →
   读取参数 → 修改目标战斗/队伍状态”的原生链，
   而不是遍历所有 `LDRB` 给无名 byte 猜效果名。
4. 执行**只读对照**：记录使用前后 HP、PP、状态位、
   属性选择编号、目标内存对象身份与返回值；
   要求同一个道具例子中的 source ID、
   参数数值和真实业务写入操作形成同一事务证据。
5. 对药品、解除异常、PP 恢复、能力阶段类
   分别抽取有代表性的普通和特殊道具，
   每一类建立 `opcode/source record/consumer/runtime`
   四列证据再分批命名。

**当前阻塞**：在本 P8 仓库中已验证的完整 ELF 是
`Pokémon HOME 4.1.0 main.elf`，并不是剑盾或朱紫的
实际战斗引擎可执行文件。没有对应游戏二进制时
不能声称已经追到了 HP 状态 Setter。

## 5. 交付与验收

本轮新增了
`tools/home41_native_p8_indirect_xrefs.py`、
`tools/home41_native_p8_blr_triage.py`
及单元测试
`tools/test_home41_p8_effect_executor_evidence.py`。

所有脚本只读取用户已有 ELF 与导出的 JSON，
严格检查目标构建的 SHA，
不会写回游戏文件，不会修改保存数据。

P8 没有故意将没有使用方证据的 45 个字段由 `partial`
升级为 `converted`，也没有修改原始二进制或 Item8 的
未知业务枚举。当前主镜像仍维持
**12,074 source / 6,700 converted / 5,371 partial /
3 unsupported / 0 failed**。
