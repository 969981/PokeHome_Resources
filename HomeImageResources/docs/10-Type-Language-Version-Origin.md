---
title: HOME 4.1.0 属性、语言、游戏版本及出身标记原版图标
tags: [pokemon-home, image-resources, type, language, game-version, origin-mark]
version: "4.1.0"
audit_commit: "dfd1085ef769fea9db24ea8c5e43af5b30d1ebe5"
date: 2026-11-26
---
# HOME 4.1.0 属性、语言、游戏版本及出身标记

[返回资源导航](README.md) · [属性原生研究](02-Types.md) · [提取流程](07-Pipeline.md) · [数据库 Schema V1](../../PokemonResourceDatabase/README.md)

本页以 [审计快照](https://github.com/969981/PokeHome_Resources/commit/dfd1085ef769fea9db24ea8c5e43af5b30d1ebe5) 为依据。属性读取已有原生验证索引；语言、版本、出身标记直接读取原始 ARC 的 BNTX/BRTI 指针表，并与 Unpack PNG 文件名对照。游戏版本的25张 PNG 与彩色出身标记12张 PNG 已目视检查；名称按图案描述，不是运行时枚举证明。本轮未重新运行全量解码或 GPU 渲染，不修改原始 NCA、Unpack 或业务代码。

## 1. 资源总览

| 分类 | ARC | 逻辑纹理 | 归档 PNG | 尺寸/格式 | 语义 |
|---|---|---:|---:|---|---|
| 属性 | type_dummy*.arc | 360 | 179 独立 RGBA（Core） | 符号64×64 BC3；文字200×44 BC1 | 原生 display index 已验证 |
| 语言 | lang_icon*.arc | 100 | 10（10份BNTX逐字节相同） | 120×50 BC3 | BRTI 名称明确；PKM LanguageID 待验证 |
| 游戏版本 | icon_version.arc | 25 | 25 | 128×128 BC3 | 图案可辨；GameVersion 映射待证 |
| 普通出身标记 | icon_generation.arc | 12 | 12 | 64×64 BC5 | 通道预览 |
| 彩色出身标记 | icon_generation_color.arc | 12 | 12 | 64×64 BC5 | 通道预览 |

原始根目录 `57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/`，镜像目录 `Unpack/<NCA>/1/bin/appli/`。归档 [types/switch](../types/switch/)（179）、[types/android](../types/android/)（18）、[languages/switch](../languages/switch/)（10）、[origins/switch](../origins/switch/)（49=25+12+12）按历史 Git blob 命名。优先使用原始路径/纹理名，而不是猜测 hash 名字。历史 [asset_source_index.csv](../asset_source_index.csv) 是路径索引；本次接口未能读出其完整内容。

## 2. 全部语言容器

`type_dummy.arc` 和 `lang_icon.arc` 默认日语；后缀如下。注意 UI locale 和宝可梦自身语言是不同字段。

| 后缀 | 语言 | 属性源文件 | 语言标签源文件 |
|---|---|---|---|
| 无 | 日语 / JPN | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon.arc) |
| eng | 英语 / English | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_eng.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_eng.arc) |
| fre | 法语 / French | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_fre.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_fre.arc) |
| ger | 德语 / German | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_ger.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_ger.arc) |
| ita | 意大利语 / Italian | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_ita.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_ita.arc) |
| kor | 韩语 / Korean | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_kor.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_kor.arc) |
| ltm | 拉美西语 / LATAM | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_ltm.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_ltm.arc) |
| sch | 简体中文 / Simp_Chinese | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_sch.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch.arc) |
| spa | 西班牙西语 / Spanish | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_spa.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_spa.arc) |
| tch | 繁体中文 / Trad_Chinese | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_tch.arc) | [ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_tch.arc) |

## 3. 属性图片：18种符号 + 18种文字

[原生索引 JSON](../core/types/index.json) · [像素目录](../core/types/pixels/) · [简中原始归档](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_sch.arc) · [简中解包镜像](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_type/bin/type_dummy_sch/timg/__Combined.bntx/) · [简中名称 TBL](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/message/Simp_Chinese/megaturtle/typename.tbl) · [DAT](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/message/Simp_Chinese/megaturtle/typename.dat)

每语言36个 BRTI；360行按 RGBA SHA256 去重为179个物理 PNG（18符号+161文字）。下表来自实际 Core JSON 中简体中文行，PNG 是可直接点击的原始解码结果。

| display index | 消息标签ID | 属性 | 符号 | 简体中文文字 | 原生符号键 / 文字键 |
|---:|---:|---|---|---|---|
| 0 | 0 | 一般 | ![](../core/types/pixels/80eeb70609adb52253a79e5c6b03bec99d8926b02b3feed3b1c924ad3f74a1cf.png) | ![](../core/types/pixels/f5ad484c28a65fed381655e94b7e84a75445d397eb014667fd83fea407e0bf24.png) | `typeIcon_00_normal_00^q` / `typeIcon_text_00_normal_00^o` |
| 1 | 1 | 格斗 | ![](../core/types/pixels/0c1e32e6d225eed41d5b6c9586f1be67f296b87d364b8fb400e20e040be0832b.png) | ![](../core/types/pixels/4a84a3ba8da366b2b058d0f0f79135ba3c5f8441603cadeefa830dbba3f9682e.png) | `typeIcon_01_kakutou_00^q` / `typeIcon_text_01_kakutou_00^o` |
| 2 | 2 | 飞行 | ![](../core/types/pixels/d3e84aeb0e488f50c942dd1c49348c483cd45a1d81daa9380acdd069cf5b1d22.png) | ![](../core/types/pixels/cbde0bac7de6a02b548c6fdf5f64ca2d33d5a2d914663a777e707af6c4399109.png) | `typeIcon_02_hikou_00^q` / `typeIcon_text_02_hikou_00^o` |
| 3 | 3 | 毒 | ![](../core/types/pixels/395feee158bfbaca8bbed49ad81fae4ac907740ca8717147e314d1aec6c53d40.png) | ![](../core/types/pixels/a887f46135c0bac2ffe04d6aa2d9c181905c7d1b93ce3eb69254e39ff54032c5.png) | `typeIcon_03_doku_00^q` / `typeIcon_text_03_doku_00^o` |
| 4 | 4 | 地面 | ![](../core/types/pixels/c1f29cf9bf0d2bb103e7b836d12eed9c23ec23dd90b0812b55bb01e5dd9c5aca.png) | ![](../core/types/pixels/7af573c476b0f4c08afaa09c5cfffaea47f3f95fcd5920b536fed9adbeb1fae6.png) | `typeIcon_04_jimen_00^q` / `typeIcon_text_04_jimen_00^o` |
| 5 | 5 | 岩石 | ![](../core/types/pixels/a090928d46c6ec6488b424265d8d0d30be55824318d3fb8e80775326de353dc6.png) | ![](../core/types/pixels/41ece6f03e0c5568e3c1336be341cad8a1720806ff28c4a79285de7ef2086bed.png) | `typeIcon_05_iwa_00^q` / `typeIcon_text_05_iwa_00^o` |
| 6 | 6 | 虫 | ![](../core/types/pixels/604462aca57209edc40bd7b0693c6e422e657fb3caa54d4950d4331eaf27de04.png) | ![](../core/types/pixels/f88250b1a79796b284cab94fc11fb69d1b179cfcbd84d65d918110e14b024c4c.png) | `typeIcon_06_mushi_00^q` / `typeIcon_text_06_mushi_00^o` |
| 7 | 7 | 幽灵 | ![](../core/types/pixels/2d73c874f0ba6f66125723773794e2a6e510c43478efc5e5e03b40b0b395811e.png) | ![](../core/types/pixels/ff6b7afd15feac64a4dfd3da50223cc64a1b552abb50a5bc21afe9867ffaf1b2.png) | `typeIcon_07_ghost_00^q` / `typeIcon_text_07_ghost_00^o` |
| 8 | 8 | 钢 | ![](../core/types/pixels/a6da78ae60de8eab204026cb038b559893fb81afee5b983ca9abb981bd5ac523.png) | ![](../core/types/pixels/d02fc4302b15f7cfef855d60e5d23f1291fc5f72ab07bf1abc36a97efa2a0f1b.png) | `typeIcon_08_hagane_00^q` / `typeIcon_text_08_hagane_00^o` |
| 9 | 10 | 火 | ![](../core/types/pixels/75322246945c26b63b1205c607468795c81d4558a13a28cc42610c68039c263a.png) | ![](../core/types/pixels/6a174b1737a4617e6207329947e031807d79725025570267fbba32cb7f53a97c.png) | `typeIcon_09_honoo_00^q` / `typeIcon_text_09_honoo_00^o` |
| 10 | 11 | 水 | ![](../core/types/pixels/4d1fb60447f0edc6fe3a89723def3f92532214cb607fa20ff31f9708e54c8788.png) | ![](../core/types/pixels/1163024e93275401b7ebcb34ef2fbadd51b0dd818dfad19604b54f025122b23d.png) | `typeIcon_10_mizu_00^q` / `typeIcon_text_10_mizu_00^o` |
| 11 | 12 | 草 | ![](../core/types/pixels/6b323a4c0c725d054f4101f29f5565c470ce082ee1bdac78e944a2b0bf6d79e4.png) | ![](../core/types/pixels/b83617b17ce79e946cfe71d136885bdc8f4cd54e831dca529fdf237f0d4bff7c.png) | `typeIcon_11_kusa_00^q` / `typeIcon_text_11_kusa_00^o` |
| 12 | 13 | 电 | ![](../core/types/pixels/1884d935ee93a81fb69b784fd9c3f72d4f927bb28a93895d2b85c11e2d775530.png) | ![](../core/types/pixels/2e5a9adfa54817df78d3cbc4f2c9cac356cc20ca66dbb0ed0c46b8631afd581c.png) | `typeIcon_12_denki_00^q` / `typeIcon_text_12_denki_00^o` |
| 13 | 14 | 超能力 | ![](../core/types/pixels/03b06b7b93ea7d49267c645624b72088c1b49bdeae42d4878adb112489dcb93a.png) | ![](../core/types/pixels/5f91f6f3a781db686ea27e49a818822ac59aae53eb431357aff3894a6b20e5e2.png) | `typeIcon_13_esper_00^q` / `typeIcon_text_13_esper_00^o` |
| 14 | 15 | 冰 | ![](../core/types/pixels/44ef3de9b7ef81160ff9da1141167acca24fa1c994160d1831b7096fe84e007f.png) | ![](../core/types/pixels/ee3879c40ae5f68d7cd4157f352777a619a738da24db4eddcf420ef378880a75.png) | `typeIcon_14_koori_00^q` / `typeIcon_text_14_koori_00^o` |
| 15 | 16 | 龙 | ![](../core/types/pixels/3eba81a16655e63e74d2ac748de2c42e5500c774f4127a6d36e1a4062389c6f7.png) | ![](../core/types/pixels/1326fbda9a0fc33ae1860132237ae1b635c0c84ef70d584c59ab03f218729879.png) | `typeIcon_15_dragon_00^q` / `typeIcon_text_15_dragon_00^o` |
| 16 | 17 | 恶 | ![](../core/types/pixels/c70cc54b1fa12c7a019ff7223c4b38eed24c17972089d91e505772f1bcdc024a.png) | ![](../core/types/pixels/0ddaf905a76b520859f13ddd3cf43128f419eb119fc893fdf3a7efdc12700253.png) | `typeIcon_16_aku_00^q` / `typeIcon_text_16_aku_00^o` |
| 17 | 18 | 妖精 | ![](../core/types/pixels/7fe06612e3c263e051f186d094ca9ffb173e1323ad242cc49c1a7251c3cf01ac.png) | ![](../core/types/pixels/768159e8a77b9153516d11b28115b270b1858d6e3197d0fae07def0eda553f2f.png) | `typeIcon_17_yousei_00^q` / `typeIcon_text_17_yousei_00^o` |

原生 selector VA `0x2D3DAC`；指针表 `0x784898` 18组，每组16字节，+0 symbol、+8 text。标签 ID 跳过9，不能将 `message_label_id`、`native_display_index` 与外部 PKM TypeID 混为一谈。Python [resolver](../../tools/home41_type_image_resolver.py)；Rust [type_image.rs](../rust/home-image-resource-core/src/type_image.rs)。详见 [原生指针表](../research/NATIVE_TYPE_RESOURCE_CORE.md) 与 [布局证据](../research/TYPE_LAYOUT_BINDING.md)。

## 4. 宝可梦语言标签

[简中原始 ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch.arc) · [SARC成员索引](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch.json) · [解包 PNG](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/)

十个语言 ARC 内均为10个 BRTI，BNTX成员偏移8192、大小90240，10份 BNTX 完整字节相同；简中成员 SHA256 `0aed07bcf6a54bd567d2e34f9c4d8928882173b3ea37c3d71d9eb08975762d93`。BRTI格式 `0x1C01` (BC3)，120×50。布局成员 `blyt/lang_icon.bflyt`，pane `P_pict_00`。纹理编号并非 PKM LanguageID。

| BRTI index | 语言 | 原生名称 | PNG |
|---:|---|---|---|
| 0 | 简体中文 | `icon_lang_chs_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_000.png) |
| 1 | 繁体中文 | `icon_lang_cht_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_001.png) |
| 2 | 英语 | `icon_lang_eng_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_002.png) |
| 3 | 法语 | `icon_lang_fra_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_003.png) |
| 4 | 德语 | `icon_lang_ger_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_004.png) |
| 5 | 意大利语 | `icon_lang_ita_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_005.png) |
| 6 | 日语 | `icon_lang_jpn_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_006.png) |
| 7 | 韩语 | `icon_lang_kor_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_007.png) |
| 8 | 拉美西语 | `icon_lang_ltm_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_008.png) |
| 9 | 西班牙西语 | `icon_lang_spa_00^q` | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_language/bin/lang_icon_sch/timg/__Combined.bntx/texture_009.png) |

## 5. 游戏版本图标（Version）

[原始 ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version.arc) · [SARC成员索引](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version.json) · [解包 PNG](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/)

`timg/__Combined.bntx` 偏移4096，430208字节，SHA256 `412dab9c1f5ca5e1d6cc9dc5bf6704730b72e7d521f795a123e20f6d93bc4282`；`blyt/icon_version.bflyt` pane `P_00`。25个128×128 BC3纹理；以下名称是对原图的目视识别，不代表原生 GameVersion ID 或当前所在游戏判定逻辑。

| BRTI index | 资源编号 | 图案识别（候选） | PNG |
|---:|---|---|---|
| 0 | `icon_version_0000^q` | X | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_000.png) |
| 1 | `icon_version_0001^q` | Y | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_001.png) |
| 2 | `icon_version_0010^q` | 欧米伽红宝石 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_002.png) |
| 3 | `icon_version_0011^q` | 阿尔法蓝宝石 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_003.png) |
| 4 | `icon_version_0020^q` | 太阳 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_004.png) |
| 5 | `icon_version_0021^q` | 月亮 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_005.png) |
| 6 | `icon_version_0030^q` | 究极之日 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_006.png) |
| 7 | `icon_version_0031^q` | 究极之月 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_007.png) |
| 8 | `icon_version_0040^q` | Let's Go 皮卡丘 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_008.png) |
| 9 | `icon_version_0041^q` | Let's Go 伊布 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_009.png) |
| 10 | `icon_version_0050^q` | 剑 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_010.png) |
| 11 | `icon_version_0051^q` | 盾 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_011.png) |
| 12 | `icon_version_0060^q` | Pokémon GO | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_012.png) |
| 13 | `icon_version_0070^q` | Pokémon Bank | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_013.png) |
| 14 | `icon_version_0080^q` | Pokémon HOME 图案 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_014.png) |
| 15 | `icon_version_0090^q` | 传说 阿尔宙斯 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_015.png) |
| 16 | `icon_version_0100^q` | 晶灿钻石 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_016.png) |
| 17 | `icon_version_0101^q` | 明亮珍珠 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_017.png) |
| 18 | `icon_version_0110^q` | 朱 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_018.png) |
| 19 | `icon_version_0111^q` | 紫 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_019.png) |
| 20 | `icon_version_0120^q` | 徽章图案（具体游戏待证） | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_020.png) |
| 21 | `icon_version_0130^q` | 传说 Z-A 图案 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_021.png) |
| 22 | `icon_version_0140^q` | 火红图案 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_022.png) |
| 23 | `icon_version_0141^q` | 叶绿图案 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_023.png) |
| 24 | `icon_version_9999^q` | 空白占位 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_version/bin/icon_version/timg/__Combined.bntx/texture_024.png) |

## 6. 宝可梦出身标记（Generation / Origin Mark）

[普通 ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation.arc) · [彩色 ARC](../../57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color.arc) · [普通 PNG](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/) · [彩色 PNG](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/)

每个 ARC 为69760字节，BNTX偏移8192，61568字节，12个64×64 `0x1E01` (BC5-UNORM) BRTI。两个 BNTX 字节不同；同编号有普通与 color 两变体。现有 decoder 将 R、G 通道直接显示且 B=0，不能作为原生最终色彩或透明度。彩色图目视形状见下。运行时 origin/version 对应表尚未证实，编号不等于世代数。

| index | 普通 BRTI / color BRTI | 形状描述（候选） | 普通原始通道 | 彩色原始通道 |
|---:|---|---|---|---|
| 0 | `icon_generation_00^t` / `icon_generation_00_color^t` | 掌机外形 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_000.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_000.png) |
| 1 | `icon_generation_01^t` / `icon_generation_01_color^t` | 无可见绿色符号（占位候选） | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_001.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_001.png) |
| 2 | `icon_generation_02^t` / `icon_generation_02_color^t` | 五边形 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_002.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_002.png) |
| 3 | `icon_generation_03^t` / `icon_generation_03_color^t` | 四叶草 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_003.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_003.png) |
| 4 | `icon_generation_04^t` / `icon_generation_04_color^t` | S 形圆环 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_004.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_004.png) |
| 5 | `icon_generation_05^t` / `icon_generation_05_color^t` | 皮卡丘头形 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_005.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_005.png) |
| 6 | `icon_generation_06^t` / `icon_generation_06_color^t` | G 字圆环 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_006.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_006.png) |
| 7 | `icon_generation_07^t` / `icon_generation_07_color^t` | 四向环形 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_007.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_007.png) |
| 8 | `icon_generation_08^t` / `icon_generation_08_color^t` | 三节点三角 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_008.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_008.png) |
| 9 | `icon_generation_09^t` / `icon_generation_09_color^t` | 星形晶体 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_009.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_009.png) |
| 10 | `icon_generation_10^t` / `icon_generation_10_color^t` | S 形 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_010.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_010.png) |
| 11 | `icon_generation_11^t` / `icon_generation_11_color^t` | 横向掌机 | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation/timg/__Combined.bntx/texture_011.png) | ![](../../Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/bin/appli/icon_generation/bin/icon_generation_color/timg/__Combined.bntx/texture_011.png) |

## 7. 如何转换及复现

```mermaid
flowchart TD
  A[原始 ARC / SARC] --> B[timg/__Combined.bntx]
  B --> C[BRTI 指针表与原始名称]
  C --> D[Block-linear 去平铺]
  D --> E[BC1 / BC3 / BC5 解码 mip0]
  E --> F[PNG / RGBA SHA256]
  F --> G[源路径 + BRTI index + 原生键索引]
  A --> H[blyt/*.bflyt]
  H --> I[pic1 → mat1 → txl1]
  I --> G
```

- [SARC解析器](../../tools/home41_romfs_core.py) `sarc_members()` 定位 member 偏移和大小。
- [BRTI metadata](../../tools/home41_icon_brti_audit.py) `metadata()`：BNTX +36 count、+40 u64 table；BRTI +28 format、+36 width、+40 height、+96 name pointer（u16长度后UTF-8）。保留完整原名和后缀。
- [纹理解码器](../../tools/home41_bntx_to_png.py) `decode_bntx()`：读取 mip0、block-linear deswizzle、BC1/BC3/BC5 解码；BC5 输出通道可视化，不能假装 shader parity。
- [全局纹理导出](../../tools/home41_full_texture_package.py) `full()` 导出 `texture_pixels.csv`、`category_candidates.csv`、`summary.json`，保留原名、source、member、SHA256、PNG路径。
- [属性布局审计](../../tools/home41_type_layout_audit.py) 和 [原生属性打包](../../tools/home41_type_native_package.py) 生成 `type_index.json` 并检查360行与179种像素；后者会写入 `HomeImageResources/core/types/`，建议在独立工作树运行。

从仓库根目录，以 uv 临时环境复现全局纹理审计（现有 CLI，未在本次对话实际运行）：

```powershell
uv run --with texture2ddecoder==1.0.6 --with Pillow==12.0.0 --with capstone==5.0.6 python tools/home41_full_texture_package.py --root . --out .audit/home41-textures
```

按 `source` 过滤 `appli/icon_type/`、`appli/icon_language/`、`appli/icon_version/`、`appli/icon_generation/`。当前全局脚本绑定240 ARC+1 BNTX、9377逻辑纹理基线，版本变化需更新验收基线。

## 8. 数据库与下一阶段

不要直接用资源编号替代业务 ID。建议基于 [Schema V1](../../PokemonResourceDatabase/README.md) 增加四类 resolver，而不是混在一张图标表。

| Resolver（建议） | 业务输入 | 映射状态 |
|---|---|---|
| HomeTypeImageResolver | native_display_index + UI locale + symbol/text | 静态验证；外部 enum 适配另做 |
| HomeLanguageImageResolver | Pokémon language ID → 原生 lang token | BRTI 已定位；ID 选择函数待证 |
| HomeGameVersionImageResolver | 游戏版本/当前游戏 ID → native version key | 25资源已定位；原生 consumer 待证 |
| HomeOriginMarkResolver | Pokémon origin → generation key + style | 24原始通道图；selector 与材质待证 |

建议 CSV / SQL 将 `source_asset`（version/platform/arc/member/BRTI index/raw_name/format/size/source hash）、`pixel_asset`（RGBA hash/path）、`semantic_mapping`（ID domain / native key / locale / variant / evidence/status）分离。语言可将100来源行关联到10个物理图；版本和出身标记不要使用同一 ID 域。缺失映射状态置 unresolved，不填猜测值。

后续：验证 ELF 中 `icon_lang_*`、`icon_version_*`、`icon_generation_*` 的原生资源选择函数、版本枚举转换与 BC5 native material/shader，核对 game version、origin mark、当前所在游戏三个业务语义。原始素材权利归原权利人。
