# HOME 4.1.0 Personal / Waza 原生字段恢复 — 第一轮

[资源数据库](../README.md) · [数据清单](HomeResourceDataInventory.md) · [uv 审计脚本](../../tools/home41_pml_schema_audit.py)

## 来源及证据
直接读取七套 perbin 文件，独立解析 FlatBuffers 根表/记录向量/vtable/字段地址。Global 1479、Beluga 1109、Delphis 560、Hayabusa 1276、Ikkaku 1445、Orion 1192、Titan 1424，共8485记录；各自 (field0 u16,field1 u16) 键无重复。字段0/1与物种/形态匹配样本，序号不等于物种。前22字段的实际非空字节跨度各数据集一致；Ikkaku/Titan 有22–24扩展。六套 Waza 5089文件全量核查以 CI 为准。

| Personal field | 实测非空跨度 | 当前解释 |
|---|---:|---|
| 0,1 | 2 | 原生物种、形态键 |
| 2 | 1 | 可用标志候选 |
| 3,4 | 1 | 双属性候选 |
| 5,6,7 | 2 | 三特性槽候选 |
| 8–13 | 1 | HP、攻击、防御、特攻、特防、速度；六个 Global 样本一致 |
| 14 | 1 | 性别比例编码候选，跨版本30/31、126/127不能合并 |
| 15 | 1 | 成长曲线编号候选 |
| 16 | 1 | 未确定 |
| 17,18 | 2 | 身高(dm)、体重(hg)候选 |
| 19,20 | 1 | 孵化周期、基础亲密度候选 |
| 21 | 4 | 相对指针候选；必须沿消费者验证目标结构 |
| 22–24 Ikkaku | 2/1/1 | 扩展原始字段 |
| 22–24 Titan | 2/2/2 | 扩展原始字段 |

种族值证据：Global 妙蛙种子 45/49/49/65/65/45、喷火龙78/84/78/109/85/100、皮卡丘35/55/40/50/50/90、超梦106/110/90/154/90/130、霜奶仙65/60/75/110/121/64。注意 f8 是 HP，不是 f9。f14 Global 妙蛙种子30，Beluga31；Global皮卡丘126，Beluga127。Hayabusa 妙蛙种子 f2 缺省且各能力字段缺省；Ikkaku 霜奶仙 f2 缺省但保留能力值，不能将缺省一律理解为无记录。

| Waza field | 当前解释 |
|---|---|
| 0 | u32 招式编号，与文件名匹配 |
| 1 | u8 标志候选 |
| 2 | u32 属性候选 |
| 3 | 未确定 |
| 4 | u32 伤害类别候选 |
| 5 | u32 威力候选 |
| 6 | u32 原始命中值候选，101不可直接解释为101% |
| 7 | u32 PP候选 |
| 8+ | 版本特有，保留原始字节 |

实测：Beluga 0001 拍击 f4–7=1/40/100/35；Titan 0085 十万伏特 f2=12,f4–7=2/90/100/15；Hayabusa 0053 喷射火焰 f2=9,f4–7=2/80/100/10（原始值，不以通行招式威力替换）；Beluga 0014 剑舞 f3=2,f6=101,f7=20。字段缺省时保持 NULL（仅身份字段0默认可验证），不把缺省填成0后声称原生默认已恢复。样本对照支持候选名称，不证明原生 Getter 语义。

## 实际执行
`uv run tools/home41_pml_schema_audit.py --out export/pml-evidence`

输出 personal_candidates.csv、waza_candidates.csv、两份原始字段CSV、field_profiles.csv、summary.json；保留源偏移、原始字段跨度、版本域及哈希。未改变原始 NCA、Unpack、已发布 migration。当前仅结构/样本锚点验收，后续应反查 ELF 的 Personal/Waza 资源加载、Getter 及默认值；尤其 f16/f21、22–24、Waza f3/f8+。未确认字段不进入正式跨游戏业务表。

## 实测验收与嵌套向量突破
- [首轮 CI 45817030854](https://github.com/969981/PokeHome_Resources/actions/runs/45817030854) 成功：8485 Personal、5089 Waza、157049 Personal 非空字段、32327 Waza 非空字段；Ikkaku Waza 最大9字段，其他5套最大8字段。
- 独立读取七套原始文件的 field21 向量：Global 72250、Beluga 38083、Delphis 29625、Hayabusa 11075、Ikkaku 66192、Orion 66463、Titan 76796；共360484个嵌套表，子表指针解析错误0，每套1个空向量。
- Global 妙蛙种子样本 (1,33),(1,45),(3,22),(6,74),(9,73)，支持 level/move 解释；101、102 是特殊原始编码，不解释为普通等级。Hayabusa 皮卡丘 (84,1,9),(98,5,14),(86,9,18),(129,15,25) 支持 move/level/extra 顺序；Ikkaku 妙蛙种子 (33,1) 对应原始表 (1,33,10)，第三字段保留候选等级。禁止推定所有版本完全同构。
- 新脚本 [home41_personal_learnset_audit.py](../../tools/home41_personal_learnset_audit.py) 输出完整原始子表三字段、父记录键、序号、偏移、源哈希及候选解释；独立 CI 重跑验收尚未取得结果。建议 schema V3 增设 native_personal_learnset_entries，以 release/dataset/record_index/ordinal 为主键，原始字段不可丢失。业务 learnset 及学习方式映射待原生 Getter 证据。
