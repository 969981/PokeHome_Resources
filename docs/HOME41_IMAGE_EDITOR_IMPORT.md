---
type: research_resource
game: Pokémon HOME
version: "4.1.0"
status: scoped_archive
evidence_level: offline_static
tags: [HOME, image-resources, Tauri2, RomFS, Obsidian]
---
# HOME 4.1.0 原始图片资源、转换与调用

本目录是 PokeHome_Resources 的**限定范围、可复现归档**；不是编辑器运行时资源目录，不自动打包原始 ARC/ELF，不改变业务代码。源仓库 [research/home-image-resource-audit](https://github.com/969981/PokeHome_Resources/tree/research/home-image-resource-audit)，固定实际导入 SHA、文件清单、字节数和 SHA-256 见 [IMPORT-MANIFEST.json](IMPORT-MANIFEST.json)。所有图片保留源内容，源文件不覆盖。原始素材权利归原权利人。

## 资源路径

| 分类 | 原始资源 | 转换后与调用 |
|---|---|---|
| 立绘 3538 | [BNTX.GZ](57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/compress_capture_pokemon/) | [PNG](HomeImageResources/pokemon/) · [索引](HomeImageResources/pokemon_image_index.csv) |
| 小图标 3506 | [icon_pokemon.arc](57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/icon_pokemon/bin/icon_pokemon.arc) | [PNG](HomeImageResources/pokemon_icons/) · [BRTI CSV](HomeImageResources/pokemon_icons/index.csv) |
| 选择表 | [pokemon_image_list.bin](57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/pokemon_list/pokemon_image_list.bin) | [原生七字段选择表](HomeImageResources/research/pokemon_image_selector_v2.csv) |
| 属性 360 /179 RGBA | [type_dummy*.arc](57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/) | [10语言兼容名](HomeImageResources/native_names_compat/types/) · [核心索引](HomeImageResources/core/types/index.json) |
| 语言 10 | [lang_icon*.arc](57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/) | [兼容名](HomeImageResources/native_names_compat/languages/) |
| 游戏版本 25 | [icon_version.arc](57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version.arc) | [兼容名](HomeImageResources/native_names_compat/versions/) |
| 出身 normal/color 24 | [icon_generation*.arc](57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/) | [normal](HomeImageResources/native_names_compat/origins/normal/) · [color](HomeImageResources/native_names_compat/origins/color/) |
| 静态 ELF 证据 | [main.elf](57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf) | [字段生产者](HomeImageResources/research/native_icon_selectors/PRODUCER_CHAIN.md) |

[原版名称419图图览](HomeImageResources/native_names/README.md) · [兼容名称419图图览](HomeImageResources/native_names_compat/README.md) · [原版/兼容/Hash 对照 JSON](HomeImageResources/native_names_compat/index.json)。三套命名指向相同像素，不要手动改名；`^` 只在兼容路径替换为 `_`。包含原生 Rust Core 的38个球种依赖（不代表普通道具图片已闭合）。原始 NCA、Unpack 镜像按原相对路径归档；仅本专题所需文件，不是完整 ROMFS。旧上游文档原样保留，若链接到未归档的其他资源，请在源仓库按 manifest SHA 查看。

## 转换算法和证据

GZIP → BNTX/BRTI → mip0 block-linear 去平铺 → BC1/BC3/BC5/BC7 解码 → RGBA PNG。SARC 的 SFAT/SFNT 定位 timg/__Combined.bntx；以原始 BRTI 名称匹配索引，不以序号猜业务 ID。普通/Color 出身标记 BC5 的 BRTI +0x58 为 02 02 02 03，输出 (R,R,R,G)，而非旧通道预览 (R,G,0,255)。Color 是恢复的灰度纹理，不保证运行时 tint。32张未被原版选择表引用的立绘仍然保留。

## 脚本使用（在本目录执行）

安装 uv（Windows：winget install --id astral-sh.uv -e）。需要独立输出目录。原始源码及依赖位于 [tools](tools/)。

```powershell
# 验证归档文件 SHA256（不需要原仓库 Git checkout）
uv run --with Pillow==12.0.0 python tools/home41_export_editor_images.py --verify-bundle .

# 从原始 ARC 重新解码属性、语言、版本、出身标记并逐像素比较
uv run tools/home41_rebuild_image_subset.py --mode ui --out .audit/ui

# 全部3538原始立绘（含32张未引用立绘）
uv run tools/home41_rebuild_image_subset.py --mode portraits --out .audit/portraits

# 指定物种、立绘和小图标
uv run tools/home41_export_pokemon_images_uv.py --species 25 869 --verify-existing --out .audit/selected

# 原版3506选择键完整重建
uv run tools/home41_export_pokemon_images_uv.py --all --verify-existing --out .audit/all-native
```

注意：verify-bundle 只允许 manifest 记录的文件和本 README/manifest，运行转换前验证，转换输出建议放目录外（例如 `../home41-image-audit/ui`）。上述命令中 .audit 会生成本地文件，不提交。上游全 ROMFS 扫描器、复杂材质分析脚本也保留供追溯；全仓模式需要完整源仓库，不在本限定归档宣称可重建全部 UI。

## Rust/Tauri2 使用

[crate](HomeImageResources/rust/home-image-resource-core/Cargo.toml) · [接口验收](HomeImageResources/docs/11-Native-Icon-Integration.md) · [属性解析](HomeImageResources/rust/home-image-resource-core/src/type_image.rs) · [原生图标](HomeImageResources/rust/home-image-resource-core/src/native_icons.rs)。

```powershell
$env:HOME_IMAGE_PACKAGE = (Resolve-Path HomeImageResources).Path
cargo test --manifest-path HomeImageResources/rust/home-image-resource-core/Cargo.toml -- --nocapture
```

开发时从 HomeImageResources 根打开 Rust Core。PH4 Language 与 OriginVersion 可由已解密单条 PH4 只读解析；游戏版本、当前选定游戏及 UI snapshot 分属不同 ID 域。编辑器前端可消费兼容 PNG 或后端解析路径，但此归档不提供 Tauri invoke/前端修改、不自动加入绿色版/安装版。后续应从此归档生成独立运行时包，只打包必需的 PNG 与索引，避免把原始纹理/ELF/研究材料一并分发。

## 原始研究文档（Obsidian/GitHub）

- [立绘及小图标提取与 uv 使用](HomeImageResources/docs/09-Pokemon-UV-Extraction.md)
- [属性、语言、版本、出身完整图览与原始路径](HomeImageResources/docs/10-Type-Language-Version-Origin.md)
- [原生调用验收与 Tauri2](HomeImageResources/docs/11-Native-Icon-Integration.md)
- [原版立绘图标对账](HomeImageResources/research/POKEMON_PORTRAIT_ICON_PARITY.md)
- [原始出身通道恢复](HomeImageResources/research/origin_swizzle/README.md)
- [原生选择器与 ID 域](HomeImageResources/research/native_icon_selectors/README.md)
- [原始字段生产者](HomeImageResources/research/native_icon_selectors/PRODUCER_CHAIN.md)

## 同步与验收

源仓库 Actions `home41-sync-editor-images.yml` 先检查原文件与 PNG 数量、实际解码、SHA、别名逐字节一致、原版选择表、ELF 和小图标 BNTX 基线，并重解码 UI 和抽样宝可梦；再运行 Rust 静态测试，最后同步到 develop。目标端再按 manifest SHA-256 核验，非强制推送。导入只在这些检查通过后提交；运行日志才是本次验收依据。无实机 PH4、运行时 GPU 或编辑器 GUI 验收。UI version_a/version_b 语义与 runtime tint 仍待证。
