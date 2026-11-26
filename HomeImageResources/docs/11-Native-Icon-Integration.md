---
title: HOME 4.1.0 原版图标调用验收与 Tauri2 接入
date: 2026-11-26
version: "4.1.0"
verified_commit: f914861687c0b5e2d8bb986936c666a98824d380
status: static_contract_verified
tags: [pokemon-home, image-resources, Rust, Tauri2, origin-mark, verification]
---
# HOME 4.1.0 原版图标调用验收与 Tauri2 接入

[返回资源导航](README.md) · [完整源文件与图览](10-Type-Language-Version-Origin.md) · [字段生产者](../research/native_icon_selectors/PRODUCER_CHAIN.md) · [通道恢复](../research/origin_swizzle/README.md)

## 1. 实际验收

[Actions 45818615015](https://github.com/969981/PokeHome_Resources/actions/runs/45818615015)，commit [f9148616](https://github.com/969981/PokeHome_Resources/commit/f914861687c0b5e2d8bb986936c666a98824d380)，job 139904733726，2026-11-26 20:20 SGT，cargo test 成功。日志确认 4 native_icons + 3 parity + 2 types = 9 个集成测试通过。3506 selector rows、3506 icon paths、3506 portrait paths、38 ball paths；360 type rows、179 unique PNG SHA-256、10语言、message label 9 拒绝。原生图标路径测试不等于实时 GPU 像素差分。此页只记录验收，不修改生产代码或数据库。

## 2. 源文件与实际消费路径

原始根目录 `57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/`，Unpack 镜像同名；ARC 内成员均为 `timg/__Combined.bntx`。

| 分类 | 原始 ARC | 可消费资源 | 状态 |
|---|---|---|---|
| 属性 | [type_dummy_sch.arc](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_sch.arc) 等10语言 | [index.json](../core/types/index.json)、[pixels](../core/types/pixels/) | 360键 /179 PNG |
| 语言 | [lang_icon_sch.arc](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch.arc) 等10语言 | [languages/switch](../languages/switch/) | 10 PNG，PH4 Language |
| 游戏版本 | [icon_version.arc](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version.arc) | [origins/switch](../origins/switch/) 中由 Rust VERSION 表指定的25 PNG | native version/display/selected descriptor |
| 普通出身 | [icon_generation.arc](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation.arc) | [normal](../research/origin_swizzle/normal/) | 12 RGBA |
| Color 出身 | [icon_generation_color.arc](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color.arc) | [color](../research/origin_swizzle/color/) | 12 RGBA，runtime tint 未证 |

原版出身图标不是旧 origins/switch 中的 BC5 通道预览。打包必须包含 research/origin_swizzle/normal、color，不能仅复制 core。语言/版本使用 [native_icons.rs](../rust/home-image-resource-core/src/native_icons.rs) 中实际的 hash 路径，不自行按编号拼接。

## 3. PH4 字段与映射

Language: Core+0x93 = PH4+0xA5，0x2069D0 → 0x5312D0 → 0x510D20 → 0x510E1C，最终消费者 0x2C6808。OriginVersion: Core+0x91 = PH4+0xA3，0x2069B0 → 0x5312D8 → 0x516C70 → 0x105790 → 0x2C596C（普通），color selector 0x2C5654。

| OriginVersion | generation | 纹理号 |
|---|---:|---:|
| 24–29 | 0 | 02 |
| 30–33 | 1 | 03 |
| 34 | 4 | 06 |
| 35–41 | 3 | 00 |
| 42–43 | 5 | 05 |
| 44–45 | 6 | 04 |
| 47 | 8 | 07 |
| 48–49 | 7 | 08 |
| 50–51 | 9 | 09 |
| 52 | 10 | 10 |
| 56–57 | 11 | 11 |
| 其他（含53） | 2 | 01（透明） |

示例：朱/紫来源 50/51 → 09 普通/Color；Z-A 52 → 10；56/57 → 11。01 是透明占位而不是错误 PNG。普通示例 ![](../research/origin_swizzle/normal/09.png)，Color 示例 ![](../research/origin_swizzle/color/09.png)。全部 256 个 byte 输入已通过静态回归测试。PH4 Language ID 1日、2英、3法、4意、5德、7西、8韩、9简中、10繁中、11拉美西语；6及范围外返回 None。

## 4. Rust 调用

[crate](../rust/home-image-resource-core/Cargo.toml) · [原生接口](../rust/home-image-resource-core/src/native_icons.rs) · [属性接口](../rust/home-image-resource-core/src/type_image.rs) · [测试](../rust/home-image-resource-core/tests/native_icons.rs)

```rust
use home_image_resource_core::*;
let core = HomeImageResourceCore::open("HomeImageResources")?;
let fields = Ph4::parse(plaintext)?.native_icon_inputs()?;
let lang = core.resolve_ph4_language(plaintext)?;
let origin = core.resolve_ph4_origin_mark(plaintext, OriginMarkStyle::Normal)?;
let color = core.resolve_ph4_origin_mark(plaintext, OriginMarkStyle::Color)?;
let version = core.resolve_native_game_version(NativeVersionCode(51))?;
let selected = core.resolve_selected_game(HomeInternalGameCode(10))?;
let fire = core.resolve_type_display(9, TypeKind::Text, "Simp_Chinese")?;
```

示例片段需在返回 Result 的函数内运行；plaintext 为调用方已解密的单条 PH4。NativeIconAsset 返回 raw_name 和 path。BadEgg 拒绝，异常 PH4 返回错误。Version code 51→display20→icon_version_0111^q；内部游戏10→version52→display22。不要把 OriginVersionCode 与 NativeVersionCode 强制当作同一语义；仅当调用方明确需要 native version code 域时使用后者。没有 PH4 直接版本图标 API。属性 display 9=火，message label 10=火，label 9无效；外部 PKM TypeID 适配另做。UI locale 与 PH4 language 分离。

## 5. 转换复现

[SARC 解析](../../tools/home41_romfs_core.py) → [BRTI 元数据](../../tools/home41_icon_brti_audit.py) → [BNTX 解码](../../tools/home41_bntx_to_png.py) → [全量纹理打包](../../tools/home41_full_texture_package.py) → [属性打包](../../tools/home41_type_native_package.py) / [出身通道恢复](../../tools/home41_origin_swizzle_audit.py)。属性符号 BC3 64×64、文字 BC1 200×44；语言 BC3 120×50；版本 BC3 128×128；出身 BC5 64×64，BRTI +0x58=02 02 02 03，采样 (R,R,R,G)，非旧预览 (R,G,0,255)。普通白色，Color 灰度100；不声称运行时最终颜色。

```powershell
uv run --with texture2ddecoder==1.0.6 --with Pillow==12.0.0 --with capstone==5.0.6 python tools/home41_full_texture_package.py --root . --out .audit/home41-textures
cargo test --manifest-path HomeImageResources/rust/home-image-resource-core/Cargo.toml -- --nocapture
```

首条命令本次未重跑；cargo test 本次读取实际 CI 日志。资源权利仍归原权利人。

## 6. 编辑器接入边界

- Tauri2 后端统一调用 Rust core，前端消费受限资源路径/字节，不直接猜 hash 或 BRTI index。完整打包根包含 core、pokemon、pokemon_icons、balls、languages、origins、research/origin_swizzle；按实际资源索引保留目录。
- 游戏版本直接显示表 25项；Bank/HOME 可通过 display 14/15 获取，但不伪造对应 version code。
- selected descriptor 的内部 13 项已闭合；不代表任意宝可梦当前所在游戏。UI snapshot +0x48/+0x4C 仅为 version_a/version_b，未恢复写入者，不能贴 Origin/Current 标签。
- 原版 runtime tint、shader/blend、GPU parity 未证。保留明确降级策略：透明占位、None、错误分别处理。
- 本轮未修改 HOME Tauri2 编辑器；尚未执行 GUI / 安装包端到端验收或 production schema 导入。

## 7. 下一步

闭合 UI row 的两个 version 字段生产者，补充 Tauri2 资源打包和 invoke 集成测试；使用真实 PH4 样本与原版 UI 截图差分验收，单独记录 runtime tint。不要将静态路径测试描述为原版运行时等价。
