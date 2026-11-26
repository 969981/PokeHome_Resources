# 宝可梦立绘及小图标

[返回图片资源导航](README.md) · [处理流程](07-Pipeline.md)

原始：`57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/compress_capture_pokemon/*.bntx.gz`；小图标：[icon_pokemon.arc](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/pokemon/icon_pokemon/bin/icon_pokemon.arc) → timg/__Combined.bntx。

处理：gzip → BNTX/BRTI → mip0 反平铺和解码 → PNG；保留 n/r 等完整原始 stem。立绘3538张；小图标3506张112×112 BC7、3136不同 RGBA；3506原始选择键已闭合。

[立绘索引](../pokemon_image_index.csv) · [小图标索引](../pokemon_icons/index.csv) · [选择器研究](../research/NATIVE_IMAGE_SELECTOR_MODEL.md) · [提取脚本](../../tools/home41_icon_brti_audit.py) · [资源包脚本](../../tools/home41_full_texture_package.py)。


## 立绘与小图标像素对账

[PokemonPortraitIconParityAudit](../research/POKEMON_PORTRAIT_ICON_PARITY.md) · [全量 CI](https://github.com/969981/PokeHome_Resources/actions/workflows/home-portrait-icon-parity.yml)。按 3506 原生选择键对比，结果以 CI artifact 为准。

实测分辨率：3522张512×512，16张112×112（1007/1008形态001–004普通/异色，与小图标RGBA完全相等）。3506组对账 PASS_COVERAGE；其余3490组最佳候选均需构图对齐，不能直接缩小替代。详见上方研究文档。
