---
title: HOME 4.1.0 原版纹理名称图片库
tags: [pokemon-home, image-resources, BRTI]
version: "4.1.0"
---
# 原版纹理名称图片库

[返回资源导航](../docs/README.md) · [原版来源及转换](../docs/10-Type-Language-Version-Origin.md) · [调用验收](../docs/11-Native-Icon-Integration.md) · [完整映射 JSON](index.json)

本目录按原始 BRTI 名称存放 PNG，保留大小写与 ^q、^o、^t 后缀，仅追加 .png。所有文件直接复用已验证源 PNG 的 Git blob，不重新编码、不改现有 Rust resolver 或 Hash 路径。基线 commit 82ee2e81500ba40c92dd4befd926b55a4ccdb2af。

| 分类 | 数量 | 目录 |
|---|---:|---|
| 属性 | 360（10语言×36） | [types](types/) |
| 语言标签 | 10 | [languages](languages/) |
| 游戏版本 | 25 | [versions](versions/) |
| 出身标记 | 24 | [normal](origins/normal/) / [color](origins/color/) |

属性按原始语言目录分开，以免同名不同语言文字覆盖。出身标记使用已恢复 RGBA 的 normal/color 图片，而不是旧 BC5 通道预览；仍未证实运行时 tint。

## 属性语言入口

- [JPN](types/JPN/)
- [English](types/English/)
- [French](types/French/)
- [German](types/German/)
- [Italian](types/Italian/)
- [Korean](types/Korean/)
- [LATAM](types/LATAM/)
- [Simp_Chinese](types/Simp_Chinese/)
- [Spanish](types/Spanish/)
- [Trad_Chinese](types/Trad_Chinese/)

## 图览

### type

| 原版名称 | 图片 |
|---|---|
| `typeIcon_00_normal_00^q` | ![](types/Simp_Chinese/typeIcon_00_normal_00%5Eq.png) |
| `typeIcon_01_kakutou_00^q` | ![](types/Simp_Chinese/typeIcon_01_kakutou_00%5Eq.png) |
| `typeIcon_02_hikou_00^q` | ![](types/Simp_Chinese/typeIcon_02_hikou_00%5Eq.png) |
| `typeIcon_03_doku_00^q` | ![](types/Simp_Chinese/typeIcon_03_doku_00%5Eq.png) |
| `typeIcon_04_jimen_00^q` | ![](types/Simp_Chinese/typeIcon_04_jimen_00%5Eq.png) |
| `typeIcon_05_iwa_00^q` | ![](types/Simp_Chinese/typeIcon_05_iwa_00%5Eq.png) |
| `typeIcon_06_mushi_00^q` | ![](types/Simp_Chinese/typeIcon_06_mushi_00%5Eq.png) |
| `typeIcon_07_ghost_00^q` | ![](types/Simp_Chinese/typeIcon_07_ghost_00%5Eq.png) |
| `typeIcon_08_hagane_00^q` | ![](types/Simp_Chinese/typeIcon_08_hagane_00%5Eq.png) |
| `typeIcon_09_honoo_00^q` | ![](types/Simp_Chinese/typeIcon_09_honoo_00%5Eq.png) |
| `typeIcon_10_mizu_00^q` | ![](types/Simp_Chinese/typeIcon_10_mizu_00%5Eq.png) |
| `typeIcon_11_kusa_00^q` | ![](types/Simp_Chinese/typeIcon_11_kusa_00%5Eq.png) |
| `typeIcon_12_denki_00^q` | ![](types/Simp_Chinese/typeIcon_12_denki_00%5Eq.png) |
| `typeIcon_13_esper_00^q` | ![](types/Simp_Chinese/typeIcon_13_esper_00%5Eq.png) |
| `typeIcon_14_koori_00^q` | ![](types/Simp_Chinese/typeIcon_14_koori_00%5Eq.png) |
| `typeIcon_15_dragon_00^q` | ![](types/Simp_Chinese/typeIcon_15_dragon_00%5Eq.png) |
| `typeIcon_16_aku_00^q` | ![](types/Simp_Chinese/typeIcon_16_aku_00%5Eq.png) |
| `typeIcon_17_yousei_00^q` | ![](types/Simp_Chinese/typeIcon_17_yousei_00%5Eq.png) |
| `typeIcon_text_00_normal_00^o` | ![](types/Simp_Chinese/typeIcon_text_00_normal_00%5Eo.png) |
| `typeIcon_text_01_kakutou_00^o` | ![](types/Simp_Chinese/typeIcon_text_01_kakutou_00%5Eo.png) |
| `typeIcon_text_02_hikou_00^o` | ![](types/Simp_Chinese/typeIcon_text_02_hikou_00%5Eo.png) |
| `typeIcon_text_03_doku_00^o` | ![](types/Simp_Chinese/typeIcon_text_03_doku_00%5Eo.png) |
| `typeIcon_text_04_jimen_00^o` | ![](types/Simp_Chinese/typeIcon_text_04_jimen_00%5Eo.png) |
| `typeIcon_text_05_iwa_00^o` | ![](types/Simp_Chinese/typeIcon_text_05_iwa_00%5Eo.png) |
| `typeIcon_text_06_mushi_00^o` | ![](types/Simp_Chinese/typeIcon_text_06_mushi_00%5Eo.png) |
| `typeIcon_text_07_ghost_00^o` | ![](types/Simp_Chinese/typeIcon_text_07_ghost_00%5Eo.png) |
| `typeIcon_text_08_hagane_00^o` | ![](types/Simp_Chinese/typeIcon_text_08_hagane_00%5Eo.png) |
| `typeIcon_text_09_honoo_00^o` | ![](types/Simp_Chinese/typeIcon_text_09_honoo_00%5Eo.png) |
| `typeIcon_text_10_mizu_00^o` | ![](types/Simp_Chinese/typeIcon_text_10_mizu_00%5Eo.png) |
| `typeIcon_text_11_kusa_00^o` | ![](types/Simp_Chinese/typeIcon_text_11_kusa_00%5Eo.png) |
| `typeIcon_text_12_denki_00^o` | ![](types/Simp_Chinese/typeIcon_text_12_denki_00%5Eo.png) |
| `typeIcon_text_13_esper_00^o` | ![](types/Simp_Chinese/typeIcon_text_13_esper_00%5Eo.png) |
| `typeIcon_text_14_koori_00^o` | ![](types/Simp_Chinese/typeIcon_text_14_koori_00%5Eo.png) |
| `typeIcon_text_15_dragon_00^o` | ![](types/Simp_Chinese/typeIcon_text_15_dragon_00%5Eo.png) |
| `typeIcon_text_16_aku_00^o` | ![](types/Simp_Chinese/typeIcon_text_16_aku_00%5Eo.png) |
| `typeIcon_text_17_yousei_00^o` | ![](types/Simp_Chinese/typeIcon_text_17_yousei_00%5Eo.png) |

### language

| 原版名称 | 图片 |
|---|---|
| `icon_lang_jpn_00^q` | ![](languages/icon_lang_jpn_00%5Eq.png) |
| `icon_lang_eng_00^q` | ![](languages/icon_lang_eng_00%5Eq.png) |
| `icon_lang_fra_00^q` | ![](languages/icon_lang_fra_00%5Eq.png) |
| `icon_lang_ger_00^q` | ![](languages/icon_lang_ger_00%5Eq.png) |
| `icon_lang_ita_00^q` | ![](languages/icon_lang_ita_00%5Eq.png) |
| `icon_lang_kor_00^q` | ![](languages/icon_lang_kor_00%5Eq.png) |
| `icon_lang_spa_00^q` | ![](languages/icon_lang_spa_00%5Eq.png) |
| `icon_lang_chs_00^q` | ![](languages/icon_lang_chs_00%5Eq.png) |
| `icon_lang_cht_00^q` | ![](languages/icon_lang_cht_00%5Eq.png) |
| `icon_lang_ltm_00^q` | ![](languages/icon_lang_ltm_00%5Eq.png) |

### version

| 原版名称 | 图片 |
|---|---|
| `icon_version_9999^q` | ![](versions/icon_version_9999%5Eq.png) |
| `icon_version_0000^q` | ![](versions/icon_version_0000%5Eq.png) |
| `icon_version_0001^q` | ![](versions/icon_version_0001%5Eq.png) |
| `icon_version_0010^q` | ![](versions/icon_version_0010%5Eq.png) |
| `icon_version_0011^q` | ![](versions/icon_version_0011%5Eq.png) |
| `icon_version_0020^q` | ![](versions/icon_version_0020%5Eq.png) |
| `icon_version_0021^q` | ![](versions/icon_version_0021%5Eq.png) |
| `icon_version_0030^q` | ![](versions/icon_version_0030%5Eq.png) |
| `icon_version_0031^q` | ![](versions/icon_version_0031%5Eq.png) |
| `icon_version_0040^q` | ![](versions/icon_version_0040%5Eq.png) |
| `icon_version_0041^q` | ![](versions/icon_version_0041%5Eq.png) |
| `icon_version_0050^q` | ![](versions/icon_version_0050%5Eq.png) |
| `icon_version_0051^q` | ![](versions/icon_version_0051%5Eq.png) |
| `icon_version_0060^q` | ![](versions/icon_version_0060%5Eq.png) |
| `icon_version_0070^q` | ![](versions/icon_version_0070%5Eq.png) |
| `icon_version_0080^q` | ![](versions/icon_version_0080%5Eq.png) |
| `icon_version_0100^q` | ![](versions/icon_version_0100%5Eq.png) |
| `icon_version_0101^q` | ![](versions/icon_version_0101%5Eq.png) |
| `icon_version_0090^q` | ![](versions/icon_version_0090%5Eq.png) |
| `icon_version_0110^q` | ![](versions/icon_version_0110%5Eq.png) |
| `icon_version_0111^q` | ![](versions/icon_version_0111%5Eq.png) |
| `icon_version_0120^q` | ![](versions/icon_version_0120%5Eq.png) |
| `icon_version_0130^q` | ![](versions/icon_version_0130%5Eq.png) |
| `icon_version_0140^q` | ![](versions/icon_version_0140%5Eq.png) |
| `icon_version_0141^q` | ![](versions/icon_version_0141%5Eq.png) |

### origin

| 原版名称 | 图片 |
|---|---|
| `icon_generation_00^t` | ![](origins/normal/icon_generation_00%5Et.png) |
| `icon_generation_01^t` | ![](origins/normal/icon_generation_01%5Et.png) |
| `icon_generation_02^t` | ![](origins/normal/icon_generation_02%5Et.png) |
| `icon_generation_03^t` | ![](origins/normal/icon_generation_03%5Et.png) |
| `icon_generation_04^t` | ![](origins/normal/icon_generation_04%5Et.png) |
| `icon_generation_05^t` | ![](origins/normal/icon_generation_05%5Et.png) |
| `icon_generation_06^t` | ![](origins/normal/icon_generation_06%5Et.png) |
| `icon_generation_07^t` | ![](origins/normal/icon_generation_07%5Et.png) |
| `icon_generation_08^t` | ![](origins/normal/icon_generation_08%5Et.png) |
| `icon_generation_09^t` | ![](origins/normal/icon_generation_09%5Et.png) |
| `icon_generation_10^t` | ![](origins/normal/icon_generation_10%5Et.png) |
| `icon_generation_11^t` | ![](origins/normal/icon_generation_11%5Et.png) |
| `icon_generation_00_color^t` | ![](origins/color/icon_generation_00_color%5Et.png) |
| `icon_generation_01_color^t` | ![](origins/color/icon_generation_01_color%5Et.png) |
| `icon_generation_02_color^t` | ![](origins/color/icon_generation_02_color%5Et.png) |
| `icon_generation_03_color^t` | ![](origins/color/icon_generation_03_color%5Et.png) |
| `icon_generation_04_color^t` | ![](origins/color/icon_generation_04_color%5Et.png) |
| `icon_generation_05_color^t` | ![](origins/color/icon_generation_05_color%5Et.png) |
| `icon_generation_06_color^t` | ![](origins/color/icon_generation_06_color%5Et.png) |
| `icon_generation_07_color^t` | ![](origins/color/icon_generation_07_color%5Et.png) |
| `icon_generation_08_color^t` | ![](origins/color/icon_generation_08_color%5Et.png) |
| `icon_generation_09_color^t` | ![](origins/color/icon_generation_09_color%5Et.png) |
| `icon_generation_10_color^t` | ![](origins/color/icon_generation_10_color%5Et.png) |
| `icon_generation_11_color^t` | ![](origins/color/icon_generation_11_color%5Et.png) |

## 维护原则

index.json 保存每一张图的原名、命名路径、原 Hash 源路径、Git blob SHA、相关 ID 与来源证据（如已知）。后续应从已确认索引重新生成，而不是手动修改图片。BRTI 资源编号不等于存档业务 ID。
