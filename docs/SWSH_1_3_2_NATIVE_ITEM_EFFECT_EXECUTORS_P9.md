# P9 · 剑／盾 1.3.2 Item8 真实效果消费者：HP、PP 写入闭环

研究日期：2026-10-13。来源为用户 Library 的 `剑1.3.2.elf` 和 `盾1.3.2.elf`。
本仓库不包含原始 SWSH ELF，也不会将其提交到 GitHub；以下只发布真实原生指令的地址和审计结论。

## 一、构建与边界

| 属性 | Sword 1.3.2 | Shield 1.3.2 |
|---|---|---|
| ELF 大小 | 40,065,128 bytes | 40,065,272 bytes |
| Build ID | `a3b75bcd3311385aeed67fbeeb79cbb7bf02f471` | `a16802625e7826bf83b6f9708e475b912a9ab7df` |
| SHA256 | `689db76a880c6ca5b20308343e6f49268c67f75fd009b7d644a166e18adc0652` | `f59618e93f585c967f508fb10b94da81bbaab6014cadacb9a82351546ae091f4` |
| PML item 资源路径 | `0x7D1BD8 → bin/pml/item` | `0x7D1BD8 → bin/pml/item` |

地址均为**ELF 虚拟地址（main-relative RVA）**，不是 ASLR 后运行时绝对地址。
审计分别用两份 ELF 的原始 SHA256、GNU Build ID、ELF PT_LOAD 映射与 AArch64 指令核验。

## 二、剑盾复现了与 HOME 对应的 48 字节 Item8 Getter

两个版本均在 `main+0x788630` 使用参数 `w1` 作为属性 selector。
`0–25` 是普通属性，`26–70` 进入扩展数据分派。
在 `0x78865C` 读 `record+0x15` 的效果类别，
`0x7887E0` 使用 `record+0x1E` 作为扩展参数区，
`0x7889C8` 对 selector 66 读取 `record+0x2B` unsigned byte，
`0x7889D0` 对 selector 67 读取 `record+0x2C` unsigned byte。

全代码段**每版 126 个**直接 `BL` 调用 `0x788630`。
其中 **78 个**可直接确认调用前两条指令存在
`MOVZ w1,#(26..70)`，与之相同的 selector 分布也在另一版复现。
其余调用存在不同形式的参数传递，不应将此 78 误当全部消费者。

## 三、selector 66：HP 恢复与实际写入

| 入口 | Sword | Shield |
|---|---|---|
| 正常 HP 效果读取（selector 66） | `0x13B6940` | `0x13B6970` |
| 第二条件分支的效果读取 | `0x13B6978` | `0x13B69A8` |
| 调用 HP 恢复执行者 | `0x13B69B0` | `0x13B69E0` |
| 恢复执行函数 | `0x77B0A0` | `0x77B0A0` |
| 最大 HP 读取 | `0x7681F0` | `0x7681F0` |
| 当前 HP 读取 | `0x7680A0` | `0x7680A0` |
| HP 写入函数 | `0x76F040` | `0x76F040` |
| HP 原始 16 位写入 | `0x76F0F0` | `0x76F0F0` |

剑版原始调用片段：

```asm
0x13B6938 mov   w1, #0x42
0x13B6940 bl    #0x788630    ; 原生 Item8 selector 66
0x13B694C cmp   w0, #0xFD    ; 1/4 最大 HP 候选分支
0x13B6954 cmp   w0, #0xFF    ; 全量最大 HP 候选分支
0x13B695C cmp   w0, #0xFE    ; 1/2 最大 HP 候选分支
0x13B69AC mov   w1, w23
0x13B69B0 bl    #0x77B0A0   ; 进入恢复执行者

0x77B0BC  bl    #0x7681F0   ; max HP
0x77B0C8  bl    #0x7680A0   ; current HP
0x77B0CC  add   w8, w0, w19 ; current + amount
0x77B0DC  csel  w1, w21, w8, lo ; 上限
0x77B0E8  b     #0x76F040
0x76F0F0  strh  w20, [x8, #0x32] ; 实际底层半字写入
```

`0xFD` 走右移 2 位（约 1/4 最大 HP），`0xFE` 走右移 1 位，
`0xFF` 走全量最大 HP 的恢复量路径。存在额外状态条件，
不能独立使用这一简化公式替代完整使用判定逻辑。

**结论：selector 66 的参数在剑盾中确实用于 HP 恢复。**

## 四、selector 67：单招式 PP 恢复与实际写入

| 入口 | Sword | Shield |
|---|---|---|
| 使用 selector 67 的调用点 | `0x13B6BC8` | `0x13B6BF8` |
| 将恢复量传给 PP 执行者 | `0x13B6C18` | `0x13B6C48` |
| PP 恢复执行者 | `0x77B770` | `0x77B770` |
| 当前 PP 读取 | `0x76A040` | `0x76A040` |
| PP 上限取值 | `0x780A40` | `0x780A40` |
| PP 写入执行者 | `0x770D20` | `0x770D20` |
| 最终 8 位写入 | `0x770DDC` | `0x770DDC` |

```asm
0x13B6BC0 mov   w1, #0x43
0x13B6BC8 bl    #0x788630   ; selector 67
0x13B6C10 mov   w2, w22
0x13B6C18 bl    #0x77B770

0x77B7CC  bl    #0x76A040  ; 当前招式 PP
0x77B7D8  add   w8, w8, w21, uxtb
0x77B7E4  csel  w22, w22, w8, hi ; PP 上限
0x77B828  b     #0x770D20
0x770DD8  add   x8, x8, w21, uxtb ; 招式槽位
0x770DDC  strb  w20, [x8, #0x22] ; 最终字节写入
```

**结论：selector 67 的参数在剑盾中确实用于按招式槽位的 PP 恢复。**

## 五、与 HOME 4.1.0 研究结论的关系

- HOME 4.1.0 的 `item.dat` 扩展属性取值器早已确认存在 45 路属性；
- 现在 Sword/Shield 1.3.2 自身真正消费了 `66/67` 的效果值，
  并将其传给明确的 HP/PP 状态写入路径；
- 因此可以将 HOME 源格式里 `selector66/67` 的**结构级业务含义**分别标记为
  “HP 恢复参数”与“PP 恢复参数（剑盾 Native 佐证）”；
- 但**不能断言**每一个 Sword/Shield 道具 ID 的配置记录都和 HOME 的
  相同；本轮仍没有用户 Library 中的配套 `Sword/Shield 1.3.2 RomFS item.dat`。
- 其余 43 路效果参数仍需找具体消费者，不能单凭数值或道具名称命名。
- 这里完成的是原始 AArch64 的静态取值→写回闭环；
  尚没有实时 Switch 设备内存采样证明每个运行时实例身份。

## 六、后续任务

优先对 `0x13B61xx` 一带的状态条件，
`0x13B64xx..0x13B78xx` 中的 selector 26–65 与 68–70 继续做
**原生读取→目标计算→Setter** 双版本交叉校验。
另外取得同版本剑盾 RomFS 道具资源后，才能逐个 ID 对照：
源物品 ID、原始 48 字节记录、参数值、运行时状态变化。
