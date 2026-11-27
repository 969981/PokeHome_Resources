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

### 实际 CI 验收（45919541075）
[Run 45919541075](https://github.com/969981/PokeHome_Resources/actions/runs/45919541075) 成功，artifact 15164425248 ZIP SHA256 b21101c42ea12154c745aa1efa965c618e5098b8dc7fd1ded78ed146bad5242a，独立 CRC/SHA256 验证通过。修正后 27 个 0x7a5d78 读取，无直接写入或虚表地址形成，raw pointer candidate 空；扫描器不是跨基本块的数据流分析，不能据此证明没有初始化写入。171 条目标直接调用，七个 loader 各有唯一直接调用：
| loader | BL | 所在 Getter 邻近组候选 |
|---|---|---|
| Beluga | 0x53f150 | A |
| Delphis | 0x540850 | B |
| Global | 0x5421b0 | C |
| Hayabusa | 0x543420 | D |
| Ikkaku | 0x544b60 | E |
| Orion | 0x5465b0 | F |
| Titan | 0x54a510 | G |
邻近组不是完整的对象初始化证据，待提取各 callsite 所在函数及构造/虚表关系。0x7a5d78 可能通过重定位或间接指针初始化；新脚本扩展 PT_DYNAMIC/DT_RELA 检查（仅普通 RELA，不含所有压缩/间接形式）和 loader caller 窗口，待新 CI。
排除表实际32行，所有 word0=7、raw_u16_0a=0，其他三字段与消费者匹配。示例 (species,form,move)=(7,0,396),(150,0/1/2,36),(672/673,0,345/437),(865,0,533)。完整 CSV 见 artifact；不将其解释为完整合法性规则。
0x532408 的实际窗口显示先读 object+0x2f0，再调用 0x50f008，按 bit0 分支到 0x50fec8 或 0x50fed0/0x515940/0x510350 等路径；阈值语义仍待闭合。0x532ed8 -> 0x512e70；0x532e20 内调用 0x5120d0 查询索引槽。以上仅静态证据。

## Selector 间接指针、资源持有对象与 0x53db50（2026-11-27）
[Run 45919661660](https://github.com/969981/PokeHome_Resources/actions/runs/45919661660) 成功；artifact 15164335864 ZIP SHA256 be131fd1e5f8abcbd0702afab3bb02308f0ce6029d5dbfb4809f5d7807fc9cb0，独立 CRC/SHA256 通过。原 ELF 0x7a5d78 原始8字节为 785cb10000000000，即 0xb15c78；普通 DT_RELA 无匹配，动态段含 DT_RELR=6288400, DT_RELRSZ=4424, DT_RELRENT=8，需展开压缩位图。不能把无普通 RELA 当成无重定位。
| Dataset | Holder VA | BL loader | store handle at holder+8 |
|---|---|---|---|
| Beluga | 0xb16300 | 0x53f150 | 0x53f19c |
| Delphis | 0xb1e480 | 0x540850 | 0x54089c |
| Global | 0xb26790 | 0x5421b0 | 0x5421fc |
| Hayabusa | 0xb2e910 | 0x543420 | 0x54346c |
| Ikkaku | 0xb36bf0 | 0x544b60 | 0x544bac |
| Orion | 0xb3eec0 | 0x5465b0 | 0x5465fc |
| Titan | 0xb472d0 | 0x54a510 | 0x54a55c |
BL loader +0x28 调用 0x13bb0（输出栈槽 x29+0x18），+0x2c/+0x30 ADRP/ADD x21 为 holder，+0x4c STR x19,[x21,#8]。七组结构相同。此为资源句柄发布证据，非构造函数或 Selector 绑定的完整证明。
0x53db50: move=0 直接返回1（collector 自身先拒绝0）；selector 低8位减1，与6无符号比较。1..7 读取 0x65aede 的7字节跳转表，目标=0x53db7c+4*byte；其他走 0x53dc20。0x53dba0 遍历 0x65aee8 的512个u32，0x53dbe0 遍历 0x65b6e8 的177个u32，匹配返回1，否则0。0x53db94 将 w1=7 并尾调用0x53c5d0。0x53dc20 对 move=2 直接返回0，其余分支需完整窗口。
新增 [selector guard 审计](../../tools/home41_native_selector_guard.py)：展开 DT_RELR，记录 slot/holder 的文件或零填充状态、静态指针及重定位、初始化数组、精确地址形成及 store 候选、7项 jump table、两个已证明长度的 ID 表及剩余原生窗口。运行后按实际产物进一步核对。尚未发布正式 Selector 或业务方法映射。

### 实际 Selector/guard 验收（45927376807）
[Run 45927376807](https://github.com/969981/PokeHome_Resources/actions/runs/45927376807) 成功；artifact 15167275720 SHA256 d85df8d7ae22ae3337484b172d4b4183c025ba8009988a7227f2aace9e35cd4f；独立 CRC/SHA256 通过。DT_RELR 展开27112地址，0x7a5d78确实在其中。0xb15c78 八个槽及七个 holder 均为 PT_LOAD 零填充区，无原始指针值。init_array 0x7673e0 ->0x4fdc20，0x4fdc3c..48四个 STP 清零8槽；七个注册函数有实际 STR x19 写入，selector 0/1/2/4/3/5/7 对应 store 0x4fdd80/0x4fdef0/0x4fe060/0x4fe1d0/0x4fe340/0x4fe4b0/0x4fe620。0x4fe6c4 为清除slot0的生命周期路径。init_array 0x767400..430 每8字节为 holder 初始化函数 0x53efb0/0x5406b0/0x542010/0x543280/0x5449c0/0x546410/0x54a370，分别在0x53eff0/0x5406f0/0x542050/0x5432c0/0x544a00/0x546450/0x54a3b0 写入 holder 首字段。尚需恢复 X19 构造及 vtable GOT 值，holder 与注册对象不可先等同。
跳表 bytes [0,2,3,4,5,0,6]。0x53db50 move=0 返回true；selector low8 1/6直接true；2及非1..7进入0x53dc20，拒绝move2及160个ID（0x65b9b0起，0x65bc30止，实测160 unique），其余true；3用177项白名单；4用512项白名单；5用697项白名单(0x65bc30起，inclusive last offset0xae0)；7转0x53c5d0(move,7)，后者通过0x7a6308对象表、0x53d690查询、0xb16298对象表及虚表+0x30返回bit0，不等同静态表。前两表512/177均无重复。已补充四表导出及7个注册函数、holder init与GOT完整窗口，新CI待验收。此处称白/黑名单仅为局部函数成员逻辑，不等于游戏合法性。

## Selector 静态映射闭合与动态 guard（2026-11-27）
[Run 45927489997](https://github.com/969981/PokeHome_Resources/actions/runs/45927489997) 成功。artifact 15166463594，ZIP SHA256 0eccc1ff4ece079d31157ac9eedff13ea75d3a22ecb2b88b9e2f13c6583c9a5a，独立下载 SHA256/CRC 验证。另复核 Run 45919323225 artifact 15163761145，SHA256 03012765fdab94056647041f4ae5ad9e3b7761eabd07f3e822a8d38cdd6c7930。
七个注册函数成功路径：allocator vfunc+0x10(x0,0x60,8)，返回指针保存x19，清零96字节对象，初始化+0x48子对象，读取 RELR GOT，再加0x10为主虚表地址点，写入[x19]；+0x48和+0x50写入另外两个地址点；保存allocator、self、大小和对齐；调用子对象+0x10，再检查旧槽对象、调用其+0x48子对象虚函数+0x18，最后 STR x19。失败尾和生命周期具体语义尚未命名。动态分派对象与静态资源 holder 不同；七个 holder init 均读取共用 GOT 0x79f6e0=0x767928，加0x10写 holder 首字段，并非七套 Personal 分派虚表。
| Selector | Dataset | group | GOT | vtable | register | store |
|---|---|---|---|---|---|---|
| 0 | Global | C | 0x7a5d80 | 0x799000 | 0x4fdc9c | 0x4fdd80 |
| 1 | Beluga | A | 0x7a5d88 | 0x798b60 | 0x4fde0c | 0x4fdef0 |
| 2 | Orion | F | 0x7a5d90 | 0x7995d8 | 0x4fdf7c | 0x4fe060 |
| 3 | Hayabusa | D | 0x7a5da0 | 0x799150 | 0x4fe25c | 0x4fe340 |
| 4 | Delphis | B | 0x7a5d98 | 0x798da0 | 0x4fe0ec | 0x4fe1d0 |
| 5 | Titan | G | 0x7a5da8 | 0x799838 | 0x4fe3cc | 0x4fe4b0 |
| 6 | unsupported | — | — | — | — | — |
| 7 | Ikkaku | E | 0x7a5db0 | 0x799390 | 0x4fe53c | 0x4fe620 |
All GOT entries above have RELR coverage. Prior getter lookup windows independently show index bases holder+0x110 for each group, with 32-byte species stride and per-form pointer lookup. Combined with loader calls and holder+8 writes, static dataset mapping is supported. No mapping to commercial game names asserted. Four filter tables 512/177/160/697 entries all unique within each table (1546 rows, not 1546 distinct union IDs).
### Selector 7 dynamic filter
0x53db94 tailcalls 0x53c5d0(move,7). 0x7a6308 relocated pointer=0xb16258 (record-provider table). 0x53c5d0 rejects selector6, normalizes selector0 to5; for selector7 loads provider slot7 at 0xb16290; if null false. Calls provider+0x48 subobject virtual+0x10, then 0x53d690(provider,move). That function reads vector begin/end at provider+0x60/+0x68, divides byte extent by 0x110, selects record by unsigned MoveID; entry+8 pointer must exist, byte pointed object+0x170 nonzero, returns pointer at +0x190. Out-of-range, NULL entry or inactive uses index0's +0x190, **not immediate false**. If query result null, false. Then reads separate object table 0xb16298 (selector7 slot 0xb162d0); if absent false. Otherwise calls object+0x48 subobject vfunc+0x10, stores result pointer to object+0x60, calls provider subobject+0x18, invokes second object's vtable+0x30 and returns bit0 after subobject+0x18. Neither predicate's final implementation nor Waza file identity yet closed; cannot treat as direct existence check.
New [closure verifier](../../tools/home41_native_selector_closure.py) validates exact registration/lookup instruction anchors and relocated slots, produces personal_dataset_selectors.csv, exports full registration windows including failure tails and candidate dynamic table references. New CI pending; official DB V2 unchanged.

### Selector closure CI 验收（45952406345）
[Run 45952406345](https://github.com/969981/PokeHome_Resources/actions/runs/45952406345) 的原生扫描及 closure verifier 均通过，日志状态 PASS_STATIC_SELECTOR_MAPPING；artifact 15176739330，ZIP SHA256 026c9638261d8360bbf52b4859d2d063549823bbb1b887ed03e348dc3e3ee3bd，独立下载 SHA256/CRC 通过。personal_dataset_selectors.csv 7条 static_verified，selector 6 未注册且包装器拒绝。四张静态 guard 表1546行，各表内部无重复。closure 修正 Capstone 小立即数格式后的代码提交 49a37f6cab67b4b2008ed6fb7d9ea0c3d7f597fe。
动态对象表的32个邻近指令引用候选中，Selector7 的具体注册片段已见：0x53bb14/18 形成 0xb16298，0x53bb3c STR x8,[x20,#0x38] 后 0x53bb40 BL 0x53cdec；0x53bb5c/60 形成 0xb16258，0x53bb80 STR x19,[x20,#0x38] 后 0x53bb84 BL 0x53d4a0。对应两个独立 slot 0xb162d0、0xb16290；前者的指针来自栈[sp,#8]，后者来自x19。其它 selector 1/2/4/3/5 亦有成对注册，不能将其与 Personal 分派对象混同。下一阶段需提取 0x53bb14 之前的对象构造窗口、0x53cdec/0x53d4a0、最终 vtable+0x30，闭合具体 Waza 来源及 predicate。当前不声称最终动态过滤字段或完整合法性语义已恢复；未改变业务数据库。
