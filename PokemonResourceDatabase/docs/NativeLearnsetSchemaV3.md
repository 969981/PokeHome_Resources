# Schema V3 — HOME Native Personal / Learnset

[数据库首页](../README.md) · [原生证据](PersonalLearnsetNativeResearch.md) · [SQL](../schemas/migrations/0003_native_learnsets.sql)

V1/V2 不改动。V3 添加10张原生表及成功 Getter 查询视图。Selector 0=Global,1=Beluga,2=Orion,3=Hayabusa,4=Delphis,5=Titan,6=unsupported,7=Ikkaku。原始证据通过完整 ELF SHA、RELR/GOT/注册指令/Getter/loader 重新验证；构建时重新读取七个 perbin，并生成 8485 父记录（含空向量）、360484子记录。原始 NULL 仍为 NULL，视图仅模拟成功 Getter 的 0 默认，不把失败哨兵 101 生成记录。保留所有 ordinal，不按招式ID去重；正式跨游戏形态、学习方式、合法性仍不导入。四个过滤表1546行，Global/Orion共享表；Selector7 动态规则仅记录函数地址，未宣称最终 predicate 已恢复。32排除记录直接读取 ELF 0x657db8。局部 guard 的 move=0 先返回 true，collector 自身拒绝0；不支持的 selector6 在 guard 函数仍直接通过，不能混淆两层。

## 运行
```powershell
uv run PokemonResourceDatabase/tools/build_home_resources.py --out export/home-v3
```
输出原有 V2 数据及 V3 数据、CSV、SQLite、字段字典。构建需要原始 ELF（新增 capstone 依赖）。已有 V2 数据库可由 schema_manager 追加空结构，但完整导入通过重新构建快照，避免修改现有文件。正式发布以 CI 结果为准。

## 查询
```sql
SELECT selector,ordinal,native_move_id,native_code,native_extra_code,field0_u16,field1_u16,field2_u16
FROM v_native_personal_learnsets
WHERE release_id='home-switch-4.1.0' AND native_species=25 AND native_form=0
ORDER BY selector,ordinal;
```
数据库只描述已恢复的原生事实。research_name 并非原版符号。所有 ELF 地址为静态 VA；未执行实机行为测试。原生语义的学习方式及合法性规则仍在研究。

## Schema CI 验收（2026-11-27）
[Run 45966490348](https://github.com/969981/PokeHome_Resources/actions/runs/45966490348) 成功：schema_version=3、59业务表、294字段、13/13 tests。artifact 15183166244 SHA256 b0f0c970b889579841e554c2fbbe2701ca7fd9ddb80689871d1116b347480cda，下载独立 CRC、SHA256、SQLite integrity_check、foreign_key_check 均通过。结构产物因沿用历史工作流文件名仍叫 schema_v1.sqlite，PRAGMA user_version 实际为3；它是空结构，不是已导入数据的数据库。全量原版数据导入：[Run 45966490493](https://github.com/969981/PokeHome_Resources/actions/runs/45966490493)，数据量以最终 PASS 及实际产物为准。
