# 资源路径与处理流程

[返回图片资源导航](README.md)

## Switch
`57b83ea8c0af21ef26e2519b9580b373_NCA/1/` 为原始 RomFS；`Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/` 为解包镜像。ARC(SARC) → member BNTX → BRTI metadata/format/tile → mip0 → PNG/RGBA → SHA-256/alpha → 索引。BFLYT pic1→mat1→txl1→BRTI，UV、Shader 与业务 ID 单独证明。全量9362/9377解码；15条0x0501未支持。

[解码器](../../tools/home41_bntx_to_png.py) · [全量脚本](../../tools/home41_full_texture_package.py) · [布局绑定](../research/TYPE_LAYOUT_BINDING.md)。

## Android
`Unpack/Android/4.1.0/images/` Texture2D；`sprites/` Sprite；`_meta/` Unity 资源索引及引用。APK-only 导出831 Sprite、368 Texture2D；13个纹理流未解析，运行时 cache 未提供。[Unity summary](../../Unpack/Android/4.1.0/_meta/unity_summary.json)。现阶段只复用真实导出，不构造缺失 Sprite。容器前缀与 PathID、完整来源路径、文件/像素哈希保留。

## 复现
~~~bash
python -m pip install texture2ddecoder==1.0.6 Pillow==12.0.0 capstone==5.0.6
python tools/home41_supplemental_images.py --root . --out supplemental_output
~~~

[新增提取脚本](../../tools/home41_supplemental_images.py) · [CI](../../.github/workflows/home-supplemental-images.yml)。

## 管理
`HomeImageResources/core/` 只放已证实的原生 ID 域；`supplemental/` 放候选与原始图层；`docs/` 导航；`research/` 研究证据。使用 Markdown 相对链接，不依赖 Obsidian 专有 wiki 语法。PNG 预览使用标准 `![](...)`。
