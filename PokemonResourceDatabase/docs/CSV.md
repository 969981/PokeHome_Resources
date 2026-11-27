# CSV 字段字典与导入规范

[返回](../README.md) · [DDL](../schemas/migrations/0001_initial.sql)

运行 schema_manager.py --dictionary dist/csv，生成每表一份 CSV 空模板及机器可读 field_dictionary.csv（表、字段、SQL 类型、是否可空、主键顺序、默认值、外键、唯一索引）。完整 CHECK、复合 UNIQUE、部分索引与触发器以 SQL 为准。

## 表粒度和依赖

| 表 | 一行代表什么 |
|---|---|
| games / platforms / source_releases | 游戏、平台、发行构建 |
| languages / resource_types / image_roles / texture_formats | 字典条目 |
| evidence | 可定位的来源证据 |
| pokemon_species / pokemon_forms | 全国图鉴物种、跨版本业务形态 |
| pokemon_species_names / pokemon_form_names | 实体某语言的一个名称 |
| genders / color_states / variants | 统一业务维度 |
| pokemon_appearances | 固定维度的业务外观（可附加扩展属性） |
| attribute_definitions / attribute_values | 受控分类属性及值 |
| form_allowed_attributes / appearance_attributes | 允许值与外观实际取值 |
| resource_subjects / pokemon_subjects / resource_subject_names | 资源父实体、宝可梦子类型、多语言名称 |
| native_species_mappings / native_form_mappings | release scoped 原生→业务候选/确认 |
| native_enum_values / native_enum_compatibility | 原生枚举和请求→资源兼容关系 |
| native_resource_keys / native_pokemon_keys | 原生键及七维字段、原始顺序 |
| subject_native_links | 业务资源↔原生键关联，状态与证据 |
| resource_selection_rules | 某发行版某域的选择器实现版本及证据 |
| source_files / source_entries / source_texture_details | 原文件、容器定位、原始纹理元数据 |
| image_contents / image_files | 解码像素身份、编码文件身份 |
| image_assets | 原始定位到编码文件的具体导出，质量状态 |
| native_key_images | 某 release 的原生键、图片角色、实际资产 |
| v_native_pokemon_images | 自动联接视图，每键每角色一行，不是主数据 |

## CSV 契约
UTF-8（导入可接受 BOM），RFC 4180，逗号分隔，首行为字段名；整数十进制；禁止科学计数法和 Excel 自动数值改写；SQL NULL 使用保留字 \\N，空字符串仍表示空文本。禁止裸写字面 \\N（后续若需要则版本化转义规范）。哈希小写十六进制。导入路径相对、POSIX、无 ..；导入按 FK 拓扑顺序，单事务，任何错误中止。组合主键各字段分别列出，不压缩成 JSON。生成文件稳定排序：PK 顺序，原生向量顺序另存 native_order。

## HOME 导入契约（下一阶段）
- 3506 native_pokemon_keys，3506 native_resource_keys，7012 native_key_images（portrait+icon）。
- 7044 image_assets（3538 立绘+3506 图标），包括32条没有绑定的研究资源：24 unreferenced_alternative、8 unreferenced_placeholder；16 native_lowres。
- HOME 选择表七维键保持原始值，保留 species=0。统一物种、形态、性别和装饰映射可暂空，不根据文件名自动创建已确认业务行。
- 霜奶仙252键，504资产；去重仅合并同像素内容，不合并 native key。
- 验收原始选择表、BRTI 名称、原生顺序、图像尺寸、PNG/像素哈希、证据链接、跨版本隔离；导入器及全量数据尚未在本阶段创建。
