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
