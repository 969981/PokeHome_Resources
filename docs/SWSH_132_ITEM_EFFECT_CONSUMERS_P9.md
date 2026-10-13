# P9 · Pokémon Sword / Shield 1.3.2 的 Item8 效果消费者与 HP 写入链

> 研究时间：2026-10-13。数据源：用户 Library 原版 `剑1.3.2.elf` 与 `盾1.3.2.elf`。所有证据属于这两个**特定 Build ID**的 ELF 虚拟地址（main-relative RVA），不是随便其他版本的内存绝对地址。**不修改游戏程序与存档**。

## 1. 二进制来源与版本

| 条件 | 剑 1.3.2 | 盾 1.3.2 |
|---|---|---|
| ELF 大小 | 40,065,128 B | 40,065,272 B |
| Build ID | `a3b75bcd3311385aeed67fbeeb79cbb7bf02f471` | `a16802625e7826bf83b6f9708e475b912a9ab7df` |
| SHA-256 | `689db76a880c6ca5b20308343e6f49268c67f75fd009b7d644a166e18adc0652` | `f59618e93f585c967f508fb10b94da81bbaab6014cadacb9a82351546ae091f4` |
| 道具资源字符串引用 | `0x7D1BD8` → `bin/pml/item`（字符串 `0x1BE87D7`） | `0x7D1BD8` → `bin/pml/item`（字符串 `0x1BE8818`） |
| Item8 通用属性分派器 | `0x788630` | `0x788630` |
| selector 66 Getter | `0x7889C8` | `0x7889C8` |

这两份 ELF 是**同版本不同构建**，不能仅因若干入口 RVA 相同而认为所有函数地址和常量字符串地址完全相同。

## 2. HOME 4.1.0 与剑盾的 Item8 读取结构一致

原生 AArch64 证明，Sword / Shield 两份 ELF 均具有以下逻辑：

```asm
main+0x788630   cmp    w1, #0x19               ; 26 种基础属性（0–25）
main+0x788644   ldrsw  x8, [x9, x8, lsl #2]  ; 分派表
main+0x78864C   br     x8
main+0x78865C   ldrb   w8, [x9, #0x15]      ; 扩展属性结构类型
main+0x7887CC   sub    w10, w1, #0x1A       ; selector-26
main+0x7887D0   cmp    w10, #0x2C          ; 最后为 selector 70
main+0x7887E0   add    x8, x9, #0x1E        ; 扩展效果参数区
main+0x7887EC   br     x10
main+0x7889C8   ldrb   w0, [x9, #0x2B]      ; selector 66, unsigned byte
```

与 HOME 4.1.0 的已证实的 Item8 48 字节布局吻合：`record+0x15` 控制效果类型，`record+0x1E` 开始效果参数区，`selector 66` 读取 `record+0x2B`。

直接 `BL` 反向分析结果：**两版各有 126 个直接调用 `main+0x788630` 的代码位置**；其中各有 **78 个**调用点，在调用前 **2 条指令**（`main+(callsite−8)`）直接以 `MOVZ W1,#selector` 给出 `26–70` 范围内的属性编号。此处仅计算严格可验证的立即数输入，不把动态选择编号与可能存在的间接调用算作不存在。

## 3. P9 核心闭环：selector 66 → 恢复量 → HP Setter

### 不同版本的真实调用点

| 功能 | 剑 1.3.2 | 盾 1.3.2 |
|---|---|---|
| 基础 Item8 分派器 | `0x788630` | `0x788630` |
| 读取恢复参数 selector66（普通） | `0x13B6940` | `0x13B6970` |
| 读取恢复参数 selector66（另一条件路径） | `0x13B6978` | `0x13B69A8` |
| 传入恢复量并调用 HP 恢复器 | `0x13B69B0` | `0x13B69E0` |
| HP 恢复计算函数 | `0x77B0A0` | `0x77B0A0` |
| HP 上限读取入口 | `0x7681F0` | `0x7681F0` |
| 当前 HP 读取入口 | `0x7680A0` | `0x7680A0` |
| HP Setter | `0x76F040` | `0x76F040` |
| 内部半字写入 | `0x76F0F0` | `0x76F0F0` |

剑版样例：

```asm
main+0x13B6938 mov   w1, #0x42           ; 属性 66
main+0x13B6940 bl    #0x788630          ; 获取 Item8 效果数据
main+0x13B694C cmp   w0, #0xFD          ; 特殊比例值
main+0x13B6954 cmp   w0, #0xFF
main+0x13B695C cmp   w0, #0xFE
main+0x13B6964 lsr   w23, w23, #1       ; 最大 HP 的 1/2
main+0x13B69A4 lsr   w23, w23, #2       ; 最大 HP 的 1/4
main+0x13B69AC mov   w1, w23            ; 把恢复量送入函数
main+0x13B69B0 bl    #0x77B0A0
```

恢复函数：

```asm
main+0x77B0BC bl   #0x7681F0            ; 读取最大 HP
main+0x77B0C8 bl   #0x7680A0            ; 读取当前 HP
main+0x77B0CC add  w8, w0, w19         ; 当前 HP + 恢复量
main+0x77B0D4 cmp  w21, w8
main+0x77B0DC csel w1, w21, w8, lo     ; cap 到最大 HP
main+0x77B0E8 b    #0x76F040            ; 跳至属性写入
main+0x76F0F0 strh w20, [x8, #0x32]   ; 最终 16-bit HP 写入
```

结论：**Selector 66 是实际 HP 恢复量参数**，不仅因为样例数值与伤药吻合，而是游戏自身 Native 在代码中读取该属性、以当前 HP 与最大 HP 为输入做有上限的加法，最终使用 `STRH` 写入队伍数据。

### 特殊值

恢复路径含有明确的三种特殊值：

- `0xFD`：从最大 HP 右移 2 位，按约 1/4 计算。
- `0xFE`：从最大 HP 右移 1 位，按约 1/2 计算。
- `0xFF`：使用最大 HP 作为恢复量的路径。

存在其他条件（例如当前 HP 是 0、最大 HP 为 1、是否允许当前道具复活等），**不能把这三个值无条件当作所有道具的通用运算公式**。不假定 Sword / Shield 的每个道具 ID 与 HOME 的资源映射完全一致。

## 4. 第二条原生执行闭环：selector 67 → PP 恢复

Sword/Shield 1.3.2 的 Item8 45 路分派表使 selector 67 进入 `main+0x7889D0`：

```asm
main+0x7889D0  ldrb  w0, [x9, #0x2C]   ; record+0x2C，unsigned 8 位
```

随后找到真正的招式 PP 恢复流程：

| 业务环节 | 剑 1.3.2 | 盾 1.3.2 |
|---|---|---|
| 读取 selector 67 | `0x13B6BC8` | `0x13B6BF8` |
| 调用恢复执行函数 | `0x13B6C18` | `0x13B6C48` |
| 执行按槽位的 PP 恢复 | `0x77B770` | `0x77B770` |
| 当前 PP 读取 | `0x76A040` | `0x76A040` |
| 最大 PP 计算／读取 | `0x780A40` | `0x780A40` |
| PP 写入函数 | `0x770D20` | `0x770D20` |
| 字节级落盘位置 | `0x770DDC` | `0x770DDC` |

以剑版为例：

```asm
main+0x13B6BC0  mov  w1, #0x43         ; 67
main+0x13B6BC8  bl   #0x788630         ; 获取单招式 PP 恢复量
main+0x13B6C10  mov  w2, w22           ; 该恢复量送入第三参数
main+0x13B6C18  bl   #0x77B770         ; 执行恢复

main+0x77B7CC   bl   #0x76A040         ; 当前 PP
main+0x77B7D8   add  w8, w8, w21, uxtb ; 当前值 + 恢复量
main+0x77B7DC   cmp  w8, w22, uxtb
main+0x77B7E4   csel w22, w22, w8, hi  ; 限制最大 PP
main+0x77B828   b    #0x770D20
main+0x770DD8   add  x8, x8, w21, uxtb ; PP 槽位 0–3
main+0x770DDC   strb w20, [x8, #0x22] ; 8 位实际写入
```

**结论**：selector 67 是游戏内实际被 PP 恢复逻辑消费的单次恢复量参数，不只是一项静态字节。对当前 HP、PP 读取和写入函数的语义命名仍由上下文和算术／落盘指令支持，尚未进行运行时单步验证。

## 5. 第三条原生执行闭环：selector 68–70 → 分段友好度增减 → 状态写入

在剑／盾 1.3.2 原始代码中，**同一个函数连续读取 `68`、`69` 和 `70`，根据当前 0–255 数值选择有符号增减量**，执行上下限保护，最终由同一个 Byte Setter 写回。

| 阶段 | 剑版 RVA | 盾版 RVA |
|---|---|---|
| 读取 selector 68 | `0x13A9D44` | `0x13A9D74` |
| 读取 selector 69 | `0x13A9D54` | `0x13A9D84` |
| 读取 selector 70 | `0x13A9D64` | `0x13A9D94` |
| 当前友好度候选 Getter 调用 | `0x13A9D88` | `0x13A9DB8` |
| 对比当前值与 99 | `0x13A9D8C` | `0x13A9DBC` |
| 对比当前值与 159 | `0x13A9D94` | `0x13A9DC4` |
| 读取选定有符号 byte | `0x13A9D9C` | `0x13A9DCC` |
| 计算原值 + 调整量 | `0x13A9DF0` | `0x13A9E20` |
| 裁剪下限为 0 | `0x13A9DF4` | `0x13A9E24` |
| 裁剪上限为 255 | `0x13A9E00` | `0x13A9E30` |
| 调用最终写入包装器 | `0x13A9E08` | `0x13A9E38` |

固定 Native Getter 均已定位到 Item8 记录的尾部：

```asm
main+0x7889D8  ldrsb w0, [x9, #0x2D]   ; selector 68，有符号 int8
main+0x7889E0  ldrsb w0, [x9, #0x2E]   ; selector 69，有符号 int8
main+0x7889E8  ldrsb w0, [x9, #0x2F]   ; selector 70，有符号 int8
```

游戏的实际分段公式可以表达为：

```c
int delta = current < 100 ? effect68 : (current < 160 ? effect69 : effect70);
// 在正向增量时还执行额外修正（捕获球编号 11、携带道具编号 218）。
int next = clamp(current + modified_delta, 0, 255);
write_state_byte(next);
```

具体反汇编不仅显示 `CMP W0,#0x63`、`CMP W0,#0x9F` 的 99/159 边界，还在正增量分支中使用 `CMP W0,#0xB`（球类别 11）和 `CMP W8,#0xDA`（道具编号 218），后者使用乘数 150 进行约 1.5 倍计算；这与豪华球/安抚之铃类的友好度增加修正行为高度一致。

```asm
; 剑版，盾版的对应消费者调用地址偏移 +0x30
main+0x13A9D88  bl    #0x77D3E0   ; 读取当前值
main+0x13A9D8C  cmp   w0, #0x63  ; 99 分界
main+0x13A9D94  cmp   w0, #0x9F  ; 159 分界
main+0x13A9D9C  ldrsb w21, [x8] ; 对应 tier 的有符号 delta
main+0x13A9DF0  add   w8, w21, w20
main+0x13A9DF4  bic   w8, w8, w8, asr #31 ; 负值清 0
main+0x13A9DF8  cmp   w8, #0xFF
main+0x13A9E00  csel  w1, w8, w9, lt ; 最大值 255
main+0x13A9E08  bl    #0x77D3F0  ; 原生写入包装器
main+0x77D410   bl    #0x76FE10  ; 状态底层 Setter
main+0x76FEE8   strb  w20, [x8, #0x20] ; 真实字节写入
```

**结论：selector 68–70 是按当前友好度等级分别设置的有符号调整参数**，与 66/67 一样存在真实游戏端执行者和最终写回。它们是“同一对象的状态字段 + 分段规则 + 修正条件 + STRB”的静态闭环；正式字段命名依赖整条 Native 调用链和 0–255 友好度经典区间，未进行实机动态验证。

## 6. 仍缺消费者的其余 40 个效果属性

- `main+0x13B61xx`：连续读取 selector `26–29`、`34–37`、`45–47` 等，并对目标状态做条件判断。需要将各条分支与状态读取/Setter 一一对应后才能正式命名。
- `main+0x13B64xx–0x13B78xx`：连续读取 `50–59`、`61/65` 等，可能与状态恢复、PP、能力基础点数有关；仍需寻找实际写入者和参量类型。
- 当前已闭合的五个属性：`66=HP 恢复`、`67=PP 恢复`、`68–70=按友好度区间的增减参数`。

其余 40 个属性继续采用“原始字节 → Getter → 固定 selector 的实际调用点 → 结果流 → 最终写入者”五层证据，不能只根据道具名称推断用途。

## 6. 证据边界、测试和后续输入

研究已通过 Python 原始 ELF64/AArch64 解析与 LLVM 反汇编交叉检查，两个 Build ID、两个 SHA-256 以及相应核心指令均已核实。Python 审计器只读源文件，导出具体调用点和原生指令证据，不写回 ELF。

- 严格读入和校验剑盾两份 ELF，验证资源路径与 selector 66 分派表；
- 两版各 126 个直接调用位置、各 78 个立即数 26–70 调用位置；
- 两版各自正确的 0x30 偏移上层 HP/PP/友好度效果调用点，共用底层 HP、PP 与友好度 Byte Setter RVA；
- 输出完整审计 JSON 和代码供复现。

**当前仍缺**与这两份 1.3.2 ELF 对应的 Sword / Shield RomFS 道具资源文件；因此尚未完成同一个 ID 的 Sword/Shield 资源值和 HOME 资源值逐项差异检测。此外尚无运行中游戏状态的动态采样。以上对 selector 66 的业务认定是游戏 Native 静态调用与写入闭环，不是实机运行闭环。