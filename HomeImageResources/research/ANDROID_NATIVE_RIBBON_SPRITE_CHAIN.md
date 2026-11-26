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
