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
