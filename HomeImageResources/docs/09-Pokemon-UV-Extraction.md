---
title: HOME 4.1.0 宝可梦立绘与小图标原始资源提取
tags: [pokemon-home, romfs, bntx, uv, alcremie]
version: "4.1.0"
---

# HOME 4.1.0 立绘与小图标解析转换指南

[返回图片导航](README.md) · [宝可梦图片](01-Pokemon.md) · [像素对账研究](../research/POKEMON_PORTRAIT_ICON_PARITY.md)

## 1. 原始文件位置

原始 RomFS 根目录为 `57b83ea8c0af21ef26e2519b9580b373_NCA/1/`。

| 资源 | 原始相对路径 | 说明 |
|---|---|---|
| 立绘 | bin/pokemon/compress_capture_pokemon/poke_capture_*.bntx.gz | 3538 个文件，其中3506个被原生选择表引用 |
| 小图标 | bin/pokemon/icon_pokemon/bin/icon_pokemon.arc | SARC 中 timg/__Combined.bntx，3506 个 BRTI |
| 选择表 | bin/pokemon/pokemon_list/pokemon_image_list.bin | 3506 个唯一七维键 |
| 立绘 PNG | HomeImageResources/pokemon/ | 已导出3538张 |
| 小图标 PNG | HomeImageResources/pokemon_icons/ | 已导出3506张 |

[原始立绘目录](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/compress_capture_pokemon/) · [原始小图标 ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/icon_pokemon/bin/icon_pokemon.arc) · [原始选择表](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/pokemon_list/pokemon_image_list.bin)

已验收的立绘分辨率为 3522 张 512×512、16 张 112×112（故勒顿与密勒顿）；小图标全为 112×112 BC7。32 张未引用立绘另行保留：24 张近似替代编码、8 张带标记的蛋形占位。详见 [对账结果](../research/POKEMON_PORTRAIT_ICON_PARITY.md)。

## 2. 霜奶仙（0869）

9 个奶油形态 × 7 个糖饰 × 2 种颜色 × 2 个变体 n/g = 252 个原生选择键。普通/异色 n 为126键，g 为另外126键。此前索引中各组按立绘PNG blob/小图标RGBA去重分别为63、7、1、1，合计72。

- [原始普通立绘 BNTX.GZ](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/compress_capture_pokemon/poke_capture_0869_000_fo_n_00000000_f_n.bntx.gz)
- [普通立绘 PNG](../pokemon/poke_capture_0869_000_fo_n_00000000_f_n.png)
- [普通小图标 PNG](../pokemon_icons/poke_icon_0869_000_fo_n_00000000_f_n.png)
- [原生选择键 CSV](../research/pokemon_image_selector_v2.csv)
- [小图标 BRTI 索引](../pokemon_icons/index.csv)

小图标原始纹理名形如 `poke_icon_0869_000_fo_n_00000000_f_n^u`，BRTI 索引 2834–3085（0-based）。实际提取依据名称和原生选择键，而非写死索引范围。

命名：物种_形态_性别资源码_变体_装饰编号_视角_颜色；fo 为资源性别编码，n/g 为变体，颜色末尾 n/r 为普通/异色。资源编码不是直接等同于 PKM 字段；业务映射参考 [原生选择器](../research/NATIVE_IMAGE_SELECTOR_MODEL.md)。

## 3. 解析流程

- 立绘：GZIP → BNTX → BRTI 元数据 → mip0 数据指针 → Tegra block-linear 反平铺 → 按原始压缩格式解码 → RGBA → PNG。
- 小图标：SARC 的 SFAT/SFNT → timg/__Combined.bntx → BRTI 原始名称及索引 → BC7 block-linear 反平铺 → BGRA 转 RGBA → PNG。
- FlatBuffers 选择表：读取原始七字段元组，使用完整 stem 将两类图片一一对应，禁止仅按物种编号配对。
- 保存原生分辨率与 alpha，不进行裁剪、缩放、颜色美化、透明背景合成或人为补图。PNG 是已解码 mip0 的无损保存，不等于逆转 GPU 有损压缩。
- 版本校验：原始选择表 SHA256 92d950d1006bfd254a92947f4ad16b95e7f69630af0f36db7c5d1088f132ffbc；Combined BNTX 52,879,496 bytes，SHA256 eca6074b6b4a8c6f487c515dee8080e147426b4db335dd8b5847b9a1efc7de06。不同版本拒绝直接套用。

## 4. uv Python 实际使用

[主脚本](../../tools/home41_export_pokemon_images_uv.py) 使用 PEP 723 内联依赖，uv 自动创建隔离 Python 环境；这里 uv 是 Python 包和环境管理器，不是纹理 UV 坐标。依赖固定 texture2ddecoder==1.0.6、Pillow==12.0.0。

在仓库根目录（research/home-image-resource-audit 分支）PowerShell 执行：

~~~powershell
# 如未安装 uv
winget install --id astral-sh.uv -e

# 霜奶仙（默认物种869）
uv run tools/home41_export_pokemon_images_uv.py --species 869 --out export/alcremie

# 同时验证已归档 PNG 的实际 RGBA
uv run tools/home41_export_pokemon_images_uv.py --species 869 --verify-existing --out export/alcremie-verified

# 其他物种
uv run tools/home41_export_pokemon_images_uv.py --species 6 25 869 --out export/selected

# 全部3506原生选择键：每套3506张
uv run tools/home41_export_pokemon_images_uv.py --all --out export/all-native

# 使用本地独立解包的 RomFS（该目录须直接包含 bin）
uv run tools/home41_export_pokemon_images_uv.py --romfs "D:/HOME/RomFS" --species 869 --out export/local-alcremie
~~~

输出目录必须新建或为空，不能指向原始 RomFS 或原归档 PNG 目录。--all 不导出32张未引用立绘；它们的名称保留在 summary.json。脚本复用仓库中的解码与解析模块，因此不要只复制单一主脚本。原版资源需自行合法取得。

## 5. 输出结构

~~~text
export/alcremie/
  portraits/
    poke_capture_0869_*.png
  icons/
    poke_icon_0869_*.png
  index.csv
  summary.json
~~~

index.csv 每条纹理保存源路径、SARC member、BRTI原始名称和索引、七字段键、原始格式、实际尺寸、源文件SHA256、PNG SHA256、解码RGBA SHA256。summary.json 记录分辨率分布、去重后RGBA数、缺失/异常及版本校验。完整提取预期252立绘+252小图标；只有实际输出计数无误且无异常才返回PASS。--verify-existing 对归档 PNG 逐像素核验，不要求 PNG 压缩后的文件字节相同。

## 6. 依赖模块与验收

- [BNTX 解码器](../../tools/home41_bntx_to_png.py)
- [SARC 解析器](../../tools/home41_romfs_core.py)
- [BRTI 元数据](../../tools/home41_icon_brti_audit.py)
- [原版 FlatBuffers 选择器](../../tools/home41_image_selector_model.py)
- [uv 回归工作流](../../.github/workflows/home-uv-pokemon-export.yml)

当前脚本复用已存在的顺序解码 API，因此小图标会从容器开头顺序解码到最后一个目标索引，只写入选中图片；这并不是随机访问优化。现有解码器不处理未知格式、完整着色器渲染或其他版本资源。新 uv 入口的真实验收结果以对应 Actions 的日志与产物为准。
