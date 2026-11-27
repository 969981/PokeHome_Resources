# HOME Personal field21 / 101 / 102 原生消费者研究

[前一轮字段研究](PersonalWazaSchemaResearch.md) · [ELF scanner](../../tools/home41_native_learnset_scan.py) · [编码交叉表](../../tools/home41_learnset_code_crosswalk.py)

2026-11-27：上一轮 [PML CI](https://github.com/969981/PokeHome_Resources/actions/runs/45817287564) 与 [V2 import](https://github.com/969981/PokeHome_Resources/actions/runs/45817030626) 均成功。360484条子表中 101=249122，102=1129，等级缺省=2275。102 仅 Global 519、Ikkaku 294、Titan 316；分别180、132、80个父记录，185、73、171个不同招式候选。对七个原版二进制直接遍历：三套中每条102在同一数字物种/形态/招式键上均不和等级或101重合。Ikkaku/Titan 102 数字键并集587，Global 519 全为其子集，68个并集键未被Global标102。跨版本数字键相同不证明形态等价。Global 102 中 165 个键在 Orion 具有101，205个具有普通等级（交叉计数非互斥）。样本：Global/Ikkaku 皮卡丘577=102、Orion/Titan=101；Global/Ikkaku 胡地93=102、Titan=1；Global/Ikkaku 水伊布36/38/129/204/273=102，而 Global 伊布相同招式为40/50/20/45/30。支持102可能涉及间接或特殊可获得来源的假说，但不证明其是进化前、遗传、转移或任意具体规则。101也不可直接认定为TM。

## Native audit
Personal field21 的 FlatBuffers vtable 字节槽 4+2*21=0x2e。仅追踪该 vtable slot、Personal/Waza 字符串地址形成、附近直接 BL 和 100/101/102 即时比较候选。固定 ELF SHA256；保留原指令、RVA、操作数。不能凭 immediate 值或邻近指令确认消费者。只有完成调用者参数、向量读取、子表字段读取和分支结果的完整数据流，才提升语义证据状态。
命令：
```powershell
uv run tools/home41_personal_learnset_audit.py --out export/learnsets
uv run tools/home41_learnset_code_crosswalk.py --csv export/learnsets/personal_learnset_records.csv --out export/native
uv run tools/home41_native_learnset_scan.py --elf 57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf --out export/native
```
当前 scanner 与 CI 新增，等待实际原生输出，未宣称 Getter 或方法语义已经闭合。保留 V2 schema，不把猜测写入业务表。

## 原生扫描验收与具体 Getter（2026-11-27）
[Run 45915330321](https://github.com/969981/PokeHome_Resources/actions/runs/45915330321) 成功，artifact 15161583622 ZIP SHA256 336d7a58a50728ba5145ea751b603e40c6d58bd21bc2bf88a482119a8f969d5a，独立下载 CRC/哈希通过。1564840 executable words，16字符串/17 xrefs，30个0x2e读取候选，71个100/101/102比较候选。路径引用 Global 0x501b34、Beluga 0x501bd4、Orion 0x501c74、Delphis 0x501d14、Hayabusa 0x501db4、Titan 0x501e54、Ikkaku 0x501ef4，均于引用+0x20 调用0x50213c（共用资源加载入口）。
| 组（不预设数据域） | count | entry | lookup |
|---|---|---|---|
| A | 0x53ea48 | 0x53ea7c | 0x53f468 |
| B | 0x5401ec | 0x540220 | 0x540b68 |
| C | 0x541c48 | 0x541c7c | 0x5424c8 |
| D | 0x542d50 | 0x542d84 | 0x543738 |
| E | 0x54454c | 0x544580 | 0x544e78 |
| F | 0x545f58 | 0x545f8c | 0x5468c8 |
| G | 0x549fa0 | 0x549fd4 | 0x54a828 |

A: 0x53ea58 BL lookup; ldrsw [x0], sub, ldrh vtable+0x2e, add, ldr uoffset, ldr vector length. Entry 0x53eac4 cmp length,index; 0x53eb10 loads element uoffset; 0x53eb2c child slot6 (f1), 0x53eb48 store output+0; 0x53eba0 slot4 (f0), 0x53ebb4 store output+4. Missing child scalar -> 0. D output +0 from f0, +4 from f1, +8 from f2 (0x542f1c/0x542f30). Do not silently replace raw NULL with runtime zero. E exact output layout pending full window.
101/102 shared upstream: 0xfc6c8 BL 0x4ffce8, 0xfc6cc AND w8,w0,#0xffff, 0xfc6d0 CMP w8,#0x65, EQ -> 0xfc4d4; 0x4fcc84 BL same, saves w27, 0x4fcc9c BL 0x500044, 0x4fcca8 CMP w8,#0x66, EQ -> 0x4fcc50; otherwise 0x4fccb0 CMP w25,w8, unsigned lower -> 0x4fcc68 else 0x4fcc50. Shared return is concrete evidence; input provenance, destinations, method semantics not yet closed. 0x539408 stack/struct +0x2e clamp and ASCII parser 0x582xxx not promoted as field21 getter. New [focused script](../../tools/home41_native_learnset_focus.py) exports full windows, BL/B and raw pointer/RELA candidates, fixed SHA and instruction anchors. No official business mapping changes.

## 双查询包装器的实际反汇编（2026-11-27）
[Run 45918557253](https://github.com/969981/PokeHome_Resources/actions/runs/45918557253) 成功。artifact 15163296086, ZIP SHA256 ca3af5cc5334590a2de3acb2382d1316d36931f7bf47462be11a80e7b70620b7，下载独立 SHA256/CRC 校验通过。以下由 focused.json 原始指令恢复，函数名均为研究命名。

### 共用包装器
三者使用同一输入 ABI：w0/w1（物种/形态候选，调用组 lookup 支持）、w2（索引，截断低16位）、w3（数据域选择器，低8位）。选择器=6 或 >7 返回默认；否则从全局地址 0x7a5d78 读取指针表再按 selector*8 取对象；NULL 亦返回默认。对象+0x48 子对象的虚表+0x10/+0x18 调用包围查询（同步/生命周期语义未命名）。12字节输出初始化为0；对象虚表+0xd0 接收 (object, &out, w0, w1, u16(w2))。检查返回值 bit0；成功时读取对应字段，否则默认。

| wrapper | query PC | success output | failure |
|---|---|---|---|
| 0x4ffce8 | 0x4ffd6c | +4 (0x4ffd7c) | 101 (0x4ffd8c) |
| 0x4ffdac | 0x4ffe30 | +8 (0x4ffe40) | 101 (0x4ffe50) |
| 0x500044 | 0x5000c8 | +0 (0x5000d8) | 0 (0x5000e8) |

0x4ffce8 and 0x500044 返回的是不同输出字段，不是两个独立查询引擎。101 同时存在于成功的原始数据及失败哨兵，故必须保存 query_ok 或调用上下文；不能仅凭包装器结果推断方法。0x4ffdac 对无第三字段的 getter 在成功时返回预先清零的0；查询失败返回101。原始缺省仍保留 NULL。

```cpp
uint32_t QueryPart(uint32_t species, uint32_t form, uint32_t index,
                   uint32_t domain, unsigned part) {
    uint32_t failure = part == 0 ? 0 : 101;
    uint8_t selector = uint8_t(domain);
    if (selector == 6 || selector > 7) return failure;
    auto obj = load_pointer_table(0x7a5d78)[selector];
    if (!obj) return failure;
    CallSubobjectVfunc(obj + 0x48, 0x10);
    uint32_t out[3] = {};
    auto ok = CallVfunc(obj, 0xd0, out, species, form, uint16_t(index));
    CallSubobjectVfunc(obj + 0x48, 0x18);
    return (ok & 1) ? out[part] : failure;
}
```
伪代码只重建局部行为，不代表运行时对象类型、锁语义或原作者源码。

### 两个调用者的实际输出
0xfc654 调用0x4ffc50取低16位数量；0xfc688 遍历0x500044 返回值并与目标招式比较，找到第一个匹配后0xfc6c8调用0x4ffce8。101 -> 0xfc4d4 写记录+9=1；0 -> 0xfc6ec 写+8=1；1 -> 0xfc724 写+0x10=1；2..100 -> 0xfc708 写+0x0c数值；102及其他非上述值在本段不写这四个字段。后续0xfc744将20字节记录区传给0x101ac0，不能先命名为 TM/遗传或合法性标志。该函数在匹配到首个招式ID后结束查找，不等于遍历全部可能学习方式。
0x4fcbd0: 经0x535c70 guard 后获取两个身份参数及阈值（0x532408），0x4fcc3c取数量；每条记录查询 code (0x4fcc84) 和 move (0x4fcc9c)。code==102 或 threshold>=u16(code) 进入0x4fcc50，调用0x4fcce0，其 w1 为 move ID 返回值、w5=0；否则直接下一条。102绕过本地阈值，不等于合法性判定通过，101未在此处单独排除。

### 虚表物理地址证据
focused.json raw_pointer_candidates 中7组 count/entry 指针都连续，相差8字节。以 entry 为 +0xd0 推导地址点；对应 count 为 +0xc8。原始指针槽已在产物中存在，实际对象初始化/重定位仍需核验。
| 组 | 地址点候选 | count 槽 | entry 槽 |
|---|---|---|---|
| A | 0x798b60 | 0x798c28 | 0x798c30 |
| B | 0x798da0 | 0x798e68 | 0x798e70 |
| C | 0x799000 | 0x7990c8 | 0x7990d0 |
| D | 0x799150 | 0x799218 | 0x799220 |
| E | 0x799390 | 0x799458 | 0x799460 |
| F | 0x7995d8 | 0x7996a0 | 0x7996a8 |
| G | 0x799838 | 0x799900 | 0x799908 |

A/B/C/F/G 写 +0=f1、+4=f0；D 写 +0=f0、+4=f1、+8=f2；E 写 +0=f1、+4=f0、+8=f2（0x544624/0x544648/0x5446a8）。据结构匹配，D 与 Hayabusa、E 与 Ikkaku 对应关系是强候选，尚未通过初始化闭合。新 [dispatch 审计](../../tools/home41_native_learnset_dispatch.py) 检查7组 raw pair、10处指令锚点、地址点引用及 collector/初始化完整窗口。其 CI 尚待验收，不修改正式数据库语义。

## Collector、membership 与初始化证据（2026-11-27）
[Run 45919323225](https://github.com/969981/PokeHome_Resources/actions/runs/45919323225) 成功；artifact 15163761145 SHA256 03012765fdab94056647041f4ae5ad9e3b7761eabd07f3e822a8d38cdd6c7930，独立 CRC、SHA256 验证成功，7组虚表指针对与10处指令锚点通过。旧 address_refs 唯一命中 0x561ca4 -> 0x799000 是误报：实际 0x561ca8 add x9,x9,#0xf78，而 0x561cbc 重写 x9 后 0x561cc0 add #0，不能关联旧 ADRP。因此尚未闭合对象初始化。

### 0x4fcce0 (collector, end ret 0x4fce70)
ABI: x0=context,w1=move,w2=source domain candidate,w3=target domain candidate,x4=pokemon object,w5=mode. 0x4fcc50 caller passes source from count/entry selector and target from caller w3. Correction: previous pseudocode used generic dataset/argument labels. 
- move==0 returns; 0x53db50(move,target) must return bit0 true.
- If target low8=2, source low8 in {1,2}, mode in {1,2}, object 0x5312d8 result not 44 or 45, require 0x500108(object,move,target,0,0) bit0.
- Otherwise same source/target low8 skips membership; different requires 0x500108(object,move,target,1,1) bit0.
- target low8=7: compare 32 fixed 16-byte entries at 0x657db8..0x657fb8 (exclusive): entry+0xc move, entry+4 matches 0x531008(object), entry+8 u16 matches 0x531010(object) low16; match returns without appending. Other bytes unknown.
- context+0xe64 count, context+4*i move IDs. Reject duplicate, otherwise append and increment. No explicit capacity check in this function; do not infer overall buffer capacity without caller proof. Native 102 only bypasses caller threshold, not these filters.

### 0x500108 (membership; args object,move,target,flag3,flag4)
0x50013c/148 get identities; select object via 0x7a5d78, virtual slots +0xc8 count and +0xd0 indexed entry. Loop 0x5001f8..258 compares output+0 to requested move, success branch 0x5001dc sets result1. If no match: flag3 bit0 + 0x535c70 guard allows four 0x532ed8(object,index,target) comparisons; flag4 bit0 + guard allows 0x532e20(object,move,target). Finally explicit numerical exceptions: identity0=25/26/172 and move=344, identity0=479 with (form,move)=(1,315),(2,56),(3,59),(4,403),(5,435). Return true on match; otherwise false. These exceptions are raw IDs (not proof of legal move acquisition). Query failure in indexed loop uses move=0 fallback, so callers must reject zero (collector does).
### Initialization
Verified loader entrypoints 0x501ad0 Global, 0x501b70 Beluga, 0x501c10 Orion, 0x501cb0 Delphis, 0x501d50 Hayabusa, 0x501df0 Titan, 0x501e90 Ikkaku; each uses 0x502950 and corresponding pointer +0x18,+0x20,+0x28,+0x30,+0x38,+0x40,+0x48 respectively, then formats resource path and calls 0x50213c. These are path context fields, not selector indices. Thunks demonstrate fixed selectors 1,2,4,3,5,7 but do not name datasets. New [object init audit](../../tools/home41_native_learnset_object_init.py) tracks register writes within straight-line blocks for ADRP/ADD/LDR/STR, includes indirect raw pointer candidates, direct loader callers, exclusion table extraction and guard/threshold windows; new CI pending. Formal dataset mapping and method semantics remain unconfirmed.
