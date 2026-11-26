---
type: research_note
game: Pokémon HOME
version: 4.1.0
platform: Android ARM64
status: native_lookup_chain_verified_data_unresolved
tags: [HOME, Android, IL2CPP, Ribbon, Achievement, Sprite]
---
# Android 缎带主数据库与 Sprite 字典原生调用链

关联 [[NATIVE_INITIALIZER_AND_UI_SELECTOR_EVIDENCE]]、[[RUST_HOME_IMAGE_RESOURCE_CORE]]。

## 原始证据
原始库 Android/Smali/4.1.0/lib/arm64-v8a/libil2cpp.so (75365728 bytes), SHA256 80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe。IL2CPP metadata v31。工具 tools/home41_android_ribbon_native.py 对 ELF 版本门控，从 PT_LOAD 读取真实 ARM64；使用下一不同 metadata method address 划定扫描窗口（非原始符号边界，不排除填充/内部块）。
Actions 45774502534 PASS，commit d877da5d，artifact 15095890922 (22090 bytes), ZIP SHA256 65f0f4047bbd00c481860d01dd75ec2fa82643eba5374ad5468890e7b31c5e5e；已独立校验 CRC 和 SHA256。18 个方法 1454 条指令。artifact 内 android_ribbon_methods.md / .json / android_ribbon_classes.json。

## RibbonID -> Sprite 实际代码链
| PC | 原生指令/调用 | 意义 |
| --- | --- | --- |
| 2381490 | BL 1CDC69C | MasterDataHelper.GetRibbon(string id) |
| 2381494 | CBZ X0 | null -> return null |
| 238149C | CMP W20,#0 | type==0 |
| 23814A0/A4 | MOV W8,#0x28 / MOV W9,#0x20 | 两个字段偏移 |
| 23814A8 | CSEL X8,X9,X8,EQ | type0->20, else28 |
| 23814AC | LDR X1,[X0,X8] | 主记录 string 引用 |
| 23814BC | B 23813E8 | 尾调用文件名重载 |
| 238141C | LDR X0,[X20,#0x50] | StaticSpriteManager 字典 |
| 2381428 | BL 2056FA8 | IsNullOrEmpty |
| 2381454 | BL 2D17CAC | Dictionary.TryGetValue(fileName,out Sprite) |
| 2381460 | CSEL X0,X8,XZR,NE | found sprite or null |

MasterDataHelper.GetRibbon at 1CDC69C: 1CDC6E8 MOV W1,#0x32; 1CDC6EC MOV X2,X19 (string id); 1CDC6F0 BL 1CD8B40 MasterDataManagerBase.GetMasterDataSingle. GetRibbons at 1CDC740: 1CDC788 MOV W1,#0x32; 1CDC78C BL 1CD9044 GetMasterData. Table ID50 proved; exact master data record source, dictionary initializer, concrete ID-to-fileName data unresolved.
RibbonField.SingleRibbon: 1E62658 LDR X1,[X8,#0x20]; 1E62660 BL 23813E8; 1E62674 Image.set_sprite.
RibbonField.LumpingRibbon: 1E62358 LDR W24,[X21,#0x28] (closure field, not master record); 1E62368 CMP W23,W24; B.LE 1E62380. If count > threshold use master record+0x20, else +0x28. 1E62390 BL 23813E8; 1E623A4 Image.set_sprite.
RibbonField.SetData: 1E61E08 BL GetHasRibbonList; 1E61ED8 OrderBy; 1E61F5C SingleRibbon; 1E61F8C LumpingRibbon.
PokemonRibbonUtility.HasRibbon: 1EAF0D4 BL MakeHasRibbonList; 1EAF124 LDR W8,[X8,#0x18]; 1EAF128 CMP W8,W19. Integer field membership test; not yet exact bit-to-ID rule. HasRibbons checks any matching ID, not all, based on early successful return at 1EAF2A0/1EAF2B4.
No implicit mapping from PH4 flag position to ID or image. Rust still returns unsupported/unresolved.

## Achievement/Medal
AchievementScrollerCellView._LoadImage 1D4F3CC: 1D4F4C4 LDR X1,[X8,#0x38], 1D4F4CC String.Concat, 1D4F4E8 MOV W1,#6, 1D4F4F8 CacheResourceSprite constructor, 1D4F564 tail calls CacheResourceBase.LoadAsync. String prefix metadata reference not resolved by current direct-address scan. This confirms a cache resource loader path, not proof of network or a specific atlas mapping.
MedalResourceData._LoadTexture 1D105E0 -> File.Exists -> TextureUtility.LoadFromFile -> _OnTextureLoaded. _LoadTextureFromBase64Str 1D10758 -> File.Exists -> TextureUtility.LoadFromBase64Str -> _OnTextureLoaded. _OnTextureLoaded 1D1061C -> SpriteUtility.CreateSpriteFromTexture -> LoadComplete. _CoDownloadTexture is coroutine factory, inspect MoveNext before claiming network details.
Current device runtime cache status runtime_cache_not_supplied, 0 files. Need actual master data/cache (legitimately obtained from user's installed app) or static serialized object evidence; cannot claim complete assets. No editor/NCA/Unpack modification.

## Next
Expanded audit commit ebd6440: MakeHasRibbonList/GetHasRibbonList, MasterDataManagerBase, StaticSpriteManager initialization and native struct definitions. Actions 45774637164 pending at initial doc creation; check result separately. Independent Android atlas audit 45774597113 running at time of writing. Neither is treated as passed in this initial document.

## 第二轮已验收：字段定义与128位选择模型
Actions [45774637164](https://github.com/969981/PokeHome_Resources/actions/runs/45774637164) PASS，head ebd6440，artifact 15094579786，SHA256 6e8987492017d687e8bbddf76bc7602d1649083073a360fe3f18668f695c306e；ZIP CRC/SHA 独立验证。26 个方法、2067 条指令。
原版 il2cpp.h 恢复 MD_Data_Ribbon_Fields（继承 MD_Data_Base_Fields）：image_a、image_b、order、lumpingIndex、lumpingMax、softwareAppearIds、no。结合 LDR，+0x20 image_a，+0x28 image_b，+0x30 order（负值排除）。+0x18 是继承字段的 int32 访问点；暂不将其命名为 no，后者是派生结构尾部字段。StaticSpriteManager_Fields 明确有 _ribbonIconSpriteDic，对象+0x50 访问与该字典一致。
MakeHasRibbonList 0x1EAED08：调用 GetRibbons 取得表50数组；分别读取 get_ribbonA/B/C/D (0x1E620BC/0x1E620D4/0x1E620EC/0x1E62104)，各32位，测试 bit i，将其映射到原始数组 ordinal i+0/32/64/96，数组长度检查，row+0x30 的 signed order<0 时跳过。证据: 1EAEDB4/1EAEE64/1EAEF14/1EAEFC4 LSR；1EAEDD0/1EAEE80/1EAEF30/1EAEFE0 LDR W8,[X1,#0x30]，TBNZ sign。总共最多128个 bit 槽，不代表128张图或128条有效缎带。原始数组顺序不能排序。HasRibbon 比较 row+0x18。GetHasRibbonList 0x1EAF34C 另有分组列表及 CurtSoftwareAppearId + FindAll 消费，尚未闭合软件筛选、分组计数及其与 PH4 位图的跨平台关系。
GetMasterDataSingle 0x1CD8B40 实际调用 Dictionary<int,object>.TryGetValue 和 Dictionary<object,object>.TryGetValue；table=50 的运行时字典访问已证明，真实数据尚未取得。
StaticSpriteManager.LoadForFirstBoot/LoadForTitle/LoadForMain 是 coroutine factory（0x23809D4/0x2380A68/0x2380AFC）；需转向 MoveNext 与底层字典构造方法，不能把 factory 当加载完成。

## Android 原始图集验收
独立 Actions [45774597113](https://github.com/969981/PokeHome_Resources/actions/runs/45774597113) PASS，artifact 15095546269，SHA256 2aeb32a555964db3826cd51c3320dd6b58ef39fbc8e26cd3de2f0c095071be4b，ZIP CRC/SHA 独立验证。UnityPy1.25.4，1507 个源、1471 serialized files、0 load failures。Achievement 与 BankMarks 各12/12 PPtr 解析、12/12 Sprite 解码。Achievement 12项实际为 ach_colormap_01..07、ach_pattern_01..03、ach_icon_search、ach_icon_question_01；不是按业务ID区分的成就图标。输出记录保留 m_Rect / m_RenderDataKey / textureRect / uvTransform / settingsRaw / PNG与RGBA SHA256。BankMarks 6 shapes × filled/none；未验证红蓝 shader 状态。奖章3个 Material 及 shader/纹理 PPtr 已解析；例如 medal_front _BumpMap -> MTmedal_front_normal、_MainTex -> MTmedal_front_albedo 1、_OcclusionMap -> MTmedal_front_ao、_ParallaxMap -> MTmedal_front_height、_EmissionMap -> Gradation02_TX。无成品渲染 parity 或 medalID。实际成就/缎带业务映射仍0。未在本轮修改 Rust 生产 resolver。
