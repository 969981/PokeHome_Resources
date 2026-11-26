# HOME Resource Data Inventory / V2 importer
[数据库首页](../README.md) · [迁移](../schemas/migrations/0002_gameplay_data.sql) · [构建器](../tools/build_home_resources.py)

按优先级执行：P0 文本、图片、Personal、Item；P1 招式、特性、图鉴、地点、成长；P2 缎带证章。V2 保留原始证据及语义层，不凭字段序号猜业务含义。

| 模块 | 当前实现 |
|---|---|
| LocalizationCore | 从11个原版 DAT/TBL 目录解码成原生文本表与条目，保留标签/哈希/偏移/flags；物种名称按标签验证入库 |
| ImageResourceCore | 3506原生键、7044图片资产、7012绑定，验证原版BRTI及归档 PNG/像素哈希，保留32未引用资产 |
| PokemonCore | 7套 Personal 原始字段索引及字节，未确认字段语义 |
| ItemCore | 1829 ID / 1166物理记录 / 1830哈希槽；与原始48字节及已研究索引交叉校验 |
| MoveCore | 5089文件的原始字段候选，不声称已恢复全部招式业务字段 |
| AbilityCore / PokedexCore / LocationCore | 原生文本按语言及表名导入，跨作品业务映射待确认 |
| ExperienceCore | 8张原始u32表，成长类型枚举含义待验证 |
| RibbonMarkCore | 文本入库，独立图片及成就业务ID仍待研究 |

运行：`uv run PokemonResourceDatabase/tools/build_home_resources.py --out export/home-db`；可选 `--with-cas` 生成实际 PNG CAS 文件。默认 CI 产物为 SQLite、规范化 CSV、schema 字典、统计清单，不重复打包原版图片，archive_path 相对于仓库；CAS 路径仅在显式生成时存在。输出目录必须为空。状态以实际 CI 为准，失败不发布快照。源码及归档只读。Personal/Waza 使用现有结构化解析产物；不视为原生语义验收。所有版本和命名域隔离。后续需要补充图鉴二进制表、Android 来源、正式业务形态、地点及描述映射。
