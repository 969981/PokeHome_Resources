# 统一 ID、内容哈希与迁移规范

[返回](../README.md)

| 域 | 规范 |
|---|---|
| species_id | 正整数，全国图鉴；0 不进入 canonical species |
| form_uid | 人工注册不可变 ID，如 pkmn:0869:base；slug 不使用翻译名称，不从游戏原生 Form 自动推导 |
| appearance_id | 构建器按规范序列生成稳定 UUIDv5：form_uid、gender_id、color_id、variant_id、按 attribute_id 排序的属性对 |
| subject_id | 按类型与稳定业务 ID 生成 UUIDv5；非 Pokémon 通过后续类型子表 |
| release_id | game/platform/version/build 的独立注册 ID，例如 home-switch-4.1.0；若同版本不同二进制构建，必须不同 build_id |
| native key | release_id + namespace + key_id；HOME namespace 可为 pokemon-image；key_id 使用完整原版 stem，七维元组另存 |
| source file/entry | release 内稳定 ID；原始 relative_path、member_path、locator（如 brti:2834、Unity PathID）作为可审核定位 |
| asset_id | release 内稳定 ID，按原始来源定位与导出角色注册，不能用像素哈希代替业务身份 |
| content_id | SHA256(b"PRDB-RGBA8-STRAIGHT-V1\\0" + uint32LE(width) + uint32LE(height) + raw RGBA8 bytes)；行序 top-to-bottom，列序 left-to-right；不忽略透明 RGB，不做 ICC/色彩空间转换 |
| rgba_sha256 | SHA256(raw RGBA8 bytes)，兼容现有 HOME 对账；不独立作为跨尺寸去重键 |
| file_sha256 | SHA256(完整编码文件 bytes)，CAS 路径 sha256/{前2位}/{完整文件哈希}.png（V1 PNG） |
| evidence_id | 稳定注册 ID，uri+revision+locator 定位，hash 可空但缺证据不得提升 confirmed |

UUIDv5 固定 namespace：`7fa765ae-c864-5c47-9d8b-187e38df7a1b`（本项目约定）；输入为 UTF-8 compact JSON 数组，ensure_ascii=False，不含空格，属性对按属性 ID 升序。字符串先做 Unicode NFC；不得重用或改写已发布业务 ID。V1 SQL 允许文本 ID，生成及格式约束需 importer/validator 实现。跨游戏近似形态不能凭同名、同图或相同数字强行合并。

## 迁移
- schema_version 与 source release version 独立。初始 0001_initial.sql；以后 0002_*.sql 递增、只追加。
- schema_migrations 记录文件名、SHA256、执行时间；PRAGMA user_version 同步。已应用 SQL 不得修改。
- 迁移在 BEGIN IMMEDIATE 事务内执行，外键/完整性检查通过后提交；失败回滚。迁移文件禁止内嵌 COMMIT/ROLLBACK/BEGIN/PRAGMA foreign_keys，作为受信任仓库代码审阅。
- 正式升级前先备份 SQLite 文件（关闭写入或使用 SQLite backup API），对副本执行验证。V1 不提供自动降级；回退用旧 CSV + 旧 schema 重新构建或备份恢复。
- 旧 CSV 必须有 schema_version 和 source revision manifest；字段重命名或拆表提供独立迁移脚本。禁止默默用空字符串代替 SQL NULL。
- 多版本并行写入需由上层构建器串行化。生成物仅发布经完整验收的快照。
