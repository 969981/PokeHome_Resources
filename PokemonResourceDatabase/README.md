# PokemonResourceDatabase Schema V1

[返回 HOME 图片导航](../HomeImageResources/docs/README.md) · [ER 图](docs/ER.md) · [字段字典与 CSV 约定](docs/CSV.md) · [ID 与版本规范](docs/Identity.md)

状态：V1 基线保留，V2 迁移与 HOME 导入器已提交，实际数据发布以 CI 验收为准。原 NCA/Unpack/图片归档保持只读。SQLite >=3.37，CSV 为人工审计和版本管理输入，SQLite/JSON/flat CSV 为生成物。

## 构建与验证
```powershell
uv run PokemonResourceDatabase/tools/schema_manager.py --db PokemonResourceDatabase/dist/schema_v1.sqlite --dictionary PokemonResourceDatabase/dist/csv
uv run --no-project python -m unittest discover -s PokemonResourceDatabase/tools -p test_schema_v1.py -v
```
生成 field_dictionary.csv 和各业务表空 CSV 表头。实际导入前应保持无源版本、无图片资产、无物种记录。源字段依赖见 [SQL](schemas/migrations/0001_initial.sql)。测试全部使用合成数据（非原版 HOME 数据）。

## 扩展边界
- 规范化实体、发行版、原生七维键、选择规则、图片角色、源文件与像素内容互不混淆。
- 新游戏/平台/版本是新 release，不重写旧行；同 native Form 不自动等价。
- 道具/属性/缎带等类型已预留 resource_subjects；业务子表尚未实现，须通过后续 migration 加入。
- V1 扩展属性仅支持经批准的单值分类属性。统一 appearance 去重需构建器校验完整属性集合；SQL 不声称已强制任意集合唯一。
- native_form/species 映射的跨表语义一致性、证据 release 一致性、规范路径、内容哈希计算、业务子表完整性由后续 importer/validator 负责。SQL 保证已声明的主外键、局部唯一、类型与 CHECK；不等于游戏合法性。
- 3NF：每个表以独立事实粒度存储；关系表只保存关联事实，显示用联接视图不是人工输入。迁移历史单独维护。
- HOME 实证：[原生选择器](../HomeImageResources/research/NATIVE_IMAGE_SELECTOR_MODEL.md)、[原生提取指南](../HomeImageResources/docs/09-Pokemon-UV-Extraction.md)、[像素对账](../HomeImageResources/research/POKEMON_PORTRAIT_ICON_PARITY.md)。

## 初始架构验收（2026-11-26）
[Run 45810966448](https://github.com/969981/PokeHome_Resources/actions/runs/45810966448) 成功：38 张业务表、158 字段、6 项合成测试通过；[产物 15114200283](https://github.com/969981/PokeHome_Resources/actions/runs/45810966448/artifacts/15114200283) SHA256 `83ca41d0fa292a4c1eda6334ec00e0d8a122b9d9284a2d11ba42be8deabe5562`，下载后独立 CRC、SQLite integrity_check、foreign_key_check 通过，38 个 CSV 模板；source_releases/native_pokemon_keys/image_assets/pokemon_species 均为0。产物有保留期，使用构建脚本可复现。后续 [ID 实现](tools/identity.py) 和 [ID/迁移回归](tools/test_identity.py) 为补充，按对应新运行验收。

## V2 HOME 数据导入
[数据清单与导入契约](docs/HomeResourceDataInventory.md) · [V2 SQL](schemas/migrations/0002_gameplay_data.sql) · [构建器](tools/build_home_resources.py) · [实际 CI](https://github.com/969981/PokeHome_Resources/actions/runs/45815350921)。
