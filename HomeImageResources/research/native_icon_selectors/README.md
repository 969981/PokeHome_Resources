---
title: HOME 4.1.0 原生图标选择器与独立 ID 域
tags: [pokemon-home, native-selector, language, game-version, origin-mark, database]
date: 2026-11-26
---
# HOME 4.1.0 原生选择器

[返回通道修复](../origin_swizzle/README.md) · [资源导航](../../docs/README.md) · [JSON映射](index.json) · [独立 SQLite staging SQL](staging.sql)

实际 CI [45816392865](https://github.com/969981/PokeHome_Resources/actions/runs/45816392865) 成功；artifact 15115976868 独立下载 SHA256 b8c4de56c693ef92fba89be33df04a03d025cc29c803b1ed72ee0a8f31190763，ZIP CRC 通过。原版 ELF SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a。输入域以静态 selector 为准，不宣称 PH4/EH4 字段来源或 runtime GPU parity。68个直接调用点已导出。SQLite staging SQL 与 production Schema V1 分离；未自动导入正式库。

## 语言（0x2C6808）

| 输入 | 指针表索引 | 原生资源键 |
|---:|---:|---|
| 1 | 0 | `icon_lang_jpn_00^q` |
| 2 | 1 | `icon_lang_eng_00^q` |
| 3 | 2 | `icon_lang_fra_00^q` |
| 4 | 4 | `icon_lang_ita_00^q` |
| 5 | 3 | `icon_lang_ger_00^q` |
| 7 | 6 | `icon_lang_spa_00^q` |
| 8 | 5 | `icon_lang_kor_00^q` |
| 9 | 7 | `icon_lang_chs_00^q` |
| 10 | 8 | `icon_lang_cht_00^q` |
| 11 | 9 | `icon_lang_ltm_00^q` |

输入6被 bitmask 0x7DF 排除。0x6A6F8 的 0x625368 表已恢复。见 [字段生产者](PRODUCER_CHAIN.md)。

## 出身标记（0x2C594C）

| 输入 | 指针表索引 | 普通资源键 | color资源键 |
|---:|---:|---|---|
| 0 | 0 | `icon_generation_02^t` | `icon_generation_02_color^t` |
| 1 | 1 | `icon_generation_03^t` | `icon_generation_03_color^t` |
| 2 | 2 | `icon_generation_01^t` | `icon_generation_01_color^t` |
| 3 | 3 | `icon_generation_00^t` | `icon_generation_00_color^t` |
| 4 | 4 | `icon_generation_06^t` | `icon_generation_06_color^t` |
| 5 | 5 | `icon_generation_05^t` | `icon_generation_05_color^t` |
| 6 | 6 | `icon_generation_04^t` | `icon_generation_04_color^t` |
| 7 | 7 | `icon_generation_08^t` | `icon_generation_08_color^t` |
| 8 | 8 | `icon_generation_07^t` | `icon_generation_07_color^t` |
| 9 | 9 | `icon_generation_09^t` | `icon_generation_09_color^t` |
| 10 | 10 | `icon_generation_10^t` | `icon_generation_10_color^t` |
| 11 | 11 | `icon_generation_11^t` | `icon_generation_11_color^t` |

>11回退索引2；负数不暴露给安全 API。普通直接调用者 0xAEEDC、0x15BFF4；color 0xE7F2C。纠正：0x2069D0 的返回值通过分支进入 0xAF7A4 语言选择器，非 0xAEEDC。已验证 0x15BFB4 → 0x2069B0 → 0x105790 → 0x15BFF4 的出身标记链。图片用 [origin_swizzle](../origin_swizzle/) 的真实灰度+alpha。

## 游戏版本转换（0x2D5164）

| 输入 | display index | 原生资源键 |
|---:|---:|---|
| 24 | 1 | `icon_version_0000^q` |
| 25 | 2 | `icon_version_0001^q` |
| 26 | 4 | `icon_version_0011^q` |
| 27 | 3 | `icon_version_0010^q` |
| 28 | 0 | `icon_version_9999^q` |
| 29 | 0 | `icon_version_9999^q` |
| 30 | 5 | `icon_version_0020^q` |
| 31 | 6 | `icon_version_0021^q` |
| 32 | 7 | `icon_version_0030^q` |
| 33 | 8 | `icon_version_0031^q` |
| 34 | 13 | `icon_version_0060^q` |
| 35 | 0 | `icon_version_9999^q` |
| 36 | 0 | `icon_version_9999^q` |
| 37 | 0 | `icon_version_9999^q` |
| 38 | 0 | `icon_version_9999^q` |
| 39 | 0 | `icon_version_9999^q` |
| 40 | 0 | `icon_version_9999^q` |
| 41 | 0 | `icon_version_9999^q` |
| 42 | 9 | `icon_version_0040^q` |
| 43 | 10 | `icon_version_0041^q` |
| 44 | 11 | `icon_version_0050^q` |
| 45 | 12 | `icon_version_0051^q` |
| 46 | 0 | `icon_version_9999^q` |
| 47 | 18 | `icon_version_0090^q` |
| 48 | 16 | `icon_version_0100^q` |
| 49 | 17 | `icon_version_0101^q` |
| 50 | 19 | `icon_version_0110^q` |
| 51 | 20 | `icon_version_0111^q` |
| 52 | 22 | `icon_version_0130^q` |
| 53 | 21 | `icon_version_0120^q` |
| 54 | 0 | `icon_version_9999^q` |
| 55 | 0 | `icon_version_9999^q` |
| 56 | 23 | `icon_version_0140^q` |
| 57 | 24 | `icon_version_0141^q` |

范围外返回0，映射到9999空白。原生表中 Bank/HOME 图案在索引14/15，但上述34行没有对应输入；不能自行补映射。版本直接显示表25行独立存储。0x10F218 之前调用 0x6AF80，0x195F28 从半字列表取值；这两处证明转换消费者存在，但尚不足以区分 Pokémon origin game 与 current game。0x13AD30 和0x13ADA0 分别从栈+0x68/+0x6C 读取 display index 并调用0x2D5144，作为下一轮重点。

## 四个独立业务域（历史 staging 状态；后续见 [PRODUCER_CHAIN](PRODUCER_CHAIN.md)）

- pokemon_language：10条静态输入；待验证实体字段和外层转换。
- game_version_code：34条静态输入；版本来源语义待证明。
- current_game：0条，显式 unresolved，禁止从 origin game 复制。
- origin_mark：12个输入，每个 normal/color；未证明上游业务字段。

额外 version_display_index：25条，可按原生显示索引直接查询。Tauri2 接入之前应保留 typed enum、明确 fallback，严格禁止把 BRTI index 当作 display index。正式数据库建议复用 native_enum_values、native_enum_compatibility、native_resource_keys、resource_selection_rules，不为候选伪造 confirmed 记录。当前 staging SQL 仅建立独立映射表；没有执行 production schema 迁移。


[本轮原生字段生产者、完整 OriginVersion 转换表和 Rust 接口](PRODUCER_CHAIN.md)。
