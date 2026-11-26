---
title: HOME 4.1.0 图片资源导航
tags: [pokemon-home, image-resources, research]
version: "4.1.0"
---
# HOME 图片资源导航（Obsidian / GitHub）

[返回资源包首页](../README.md) · [历史研究](../research/README.md) · [原始项目文档](../../docs/UNPACK_OUTPUT_SPEC.md)

建议将仓库根目录作为 Obsidian vault。全部导航使用相对 Markdown 链接，GitHub 和 Obsidian 均可打开；原始资源路径不复制到文档中作为伪链接。二进制与 CSV/JSON 可直接从仓库查看。

## 分类索引

| 分类 | 状态 | 研究文档 | 资源 |
|---|---|---|---|
| 宝可梦立绘及小图标 | 已归档，3506 选择键 | [01 宝可梦](01-Pokemon.md) | [立绘索引](../pokemon_image_index.csv) / [小图标索引](../pokemon_icons/index.csv) |
| 属性 | 179 PNG / 360 逻辑映射 | [02 属性](02-Types.md) | [属性索引](../core/types/index.json) |
| 精灵球 | 38 原生显示键，含占位 | [03 精灵球与道具](03-Balls-Items.md) | [Core](../core/resource_core.json) |
| 普通道具 | 有文本/记录；图片尚未闭合 | [03 精灵球与道具](03-Balls-Items.md) | [历史道具索引](../item_image_index.csv) |
| 缎带与证章 | 有原生文本，独立图片未确认 | [04 缎带证章](04-Ribbons-Marks.md) | [缎带原始文本](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/message/Simp_Chinese/megaturtle/ribbon.dat) |
| 盒子标记 | 30 Switch 层纹理 + Android 12 符号目标 | [05 盒子标记](05-Box-Markings.md) | [补充素材目录](../supplemental/README.md)（已归档） |
| 奖章与成就 | Android 图集、材质、UI | [06 奖章成就](06-Achievements.md) | [原始 Achievement 图集](../../Unpack/Android/4.1.0/images/9eaea10cde8e_19_sactx-0-1024x1024-ETC2-Achievement-ccbb449d.png) |
| 其他 UI | 旧包，语义待验证 | [07 提取流程与来源](07-Pipeline.md) | [来源索引](../asset_source_index.csv) |

## 使用规则
- 生产 Resolver 仅使用已证实 ID 域；原始资源、候选、确认映射分层保存。
- [处理流程](07-Pipeline.md) · [已知缺口](08-Coverage.md) · [原生 Core](../research/HOME_IMAGE_RESOURCE_CORE.md) · [Rust Core](../rust/home-image-resource-core/Cargo.toml)。
- 原始素材权利归权利人；不修改 NCA、Unpack 或编辑器。
