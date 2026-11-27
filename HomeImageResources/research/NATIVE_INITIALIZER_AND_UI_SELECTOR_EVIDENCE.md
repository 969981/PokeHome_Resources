---
type: research_note
game: Pokémon HOME
version: 4.1.0
status: static_evidence_partial
tags: [HOME, ELF, DefaultCore, Ribbon, Mark, Achievement]
---
# 原生默认对象初始化及缎带／证章／奖章 UI 证据

关联 [[DEFAULT_POINTER_RELR_AND_RUST_TYPE_RESOLVER]]、[[NATIVE_CORE_DEFAULT_OBJECTS]]、[[RUST_HOME_IMAGE_RESOURCE_CORE]]。

## 原始 ELF 逐指令
SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a。Actions 45772770487 success, head 722af4aa, artifact 15094762731，ZIP SHA256 518e1a20627542eb2ecae72ef1cd4f84af5900cfd19eb90084a54f8698453cca；已下载 CRC 与 SHA 校验通过。完整指令在 initializer_ui_windows.md。
0x522E38 至 0x522F28（含 RET）共 61 条指令。直接 BL 0x502664，属于 0x5023C0。通过八个指针槽加载（含两个区域前置对象），目标区域内 34 条 store 指令、59 个分解写入记录、444 个独立字节，覆盖 [0xB15DB2,0xB15F6E)。另外在区域前 0xB15DA0..0xB15DB1 写零18字节（不计入444）。指令级写入范围如下（半开区间）：
| 对象 | 区间 | 写入 PC | 字节 |
| --- | --- | --- | --- |
| 前置对象 | B15DA0–B15DB0 | 522E50 | 16 |
| 前置字段 | B15DB0–B15DB2 | 522E5C | 2 |
| Core | B15DB2–B15E76 | 522E68–522E94,522EF8 | 196 |
| Core 之后额外字段 | B15E76–B15E78 | 522E9C STRH | 2 |
| Tag1 | B15E78–B15EB7 | 522EA8–522EB8 | 63 |
| Tag2 | B15EB7–B15EFF | 522EC4–522ED4 | 72 |
| Tag3 | B15EFF–B15F3F | 522EE0–522EEC | 64 |
| Tag4 | B15F3F–B15F6E | 522EFC–522F08 | 47 |
Tag1 和 Tag4 各存在1字节重复写入，无越界。最终 Core+0x0D = 02 04 (522F0C MOV W8,#0x402; 522F10 STURH)，Core+0x93 = runtime language byte (522F14 BL 502950; 522F18 LDRB W8,[X0,#0x2C8]; 522F1C STRB W8,[X19,#0x93])。444 字节中 441 零、2 常量非零、1 动态未知。不得把 Core 之后的2字节当作已确认的 Core 成员。Tag5/7 本函数无写入，Tag6 未定位；后续初始化与 runtime parity 仍未证实。BadEgg 与缺失指定 SideData 的生产接口仍拒绝。

## UI 素材和标记
补充素材 artifact 15094736328，SHA256 271d0e0ae11275451edb41542bd65db9dc24dcfd6ba99665f7b2c1c45f01176a，CRC OK。97 记录、94 独立 RGBA，30 Switch / 67 Android。box_marking42, medal_material8, medal_ui25, pokemon_status10, stamp_candidate8, achievement_atlas1, box_marking_atlas1, ball_atlas_candidate1, mint_atlas_candidate1。原版 SARC/BNTX 名称扫描没有直接 Ribbon/Medal/Achievement 命名的独立纹理；不能断言游戏没有该功能或其它格式资源。
原始 ELF 可打印 NUL 字符串关键词扫描 39 条，20 处直接地址引用，全部为 marking；其中 2 条为 mtt_context_marking_00_lyt.bin / _uikit.bin，PC 0x40BC4 / 0x40C8C；18 条为 anime_L_info_poke_00_L_btn_info_marking_00_L_icon_marking_dis_%02d_%s，PC 0xADBC4–0xAE114，间隔0x50。函数入口 0xAD4D0（Ghidra 0x1AD4D0），格式化调用 0x5F66F0，字节 FNV-1a 循环与 owner+0x458..+0x4E0 的连续 hash store；注意每条引用前紧邻的 store 是前一条动画/其它键，不是本次键的 destination。W3 ordinal=0..5，X4 三个常量地址 0x61735F/0x61C20A/0x614EC4。后续 commit 2baa431 增加真实后缀解码、18 键及 ribbon label FNV literal 候选；待 CI。这里是盒子标记动画注册，不等于相遇证章的业务 ID，也未证实颜色状态选择和最终材质渲染。
缎带通用 ribbon 文本表每语言320行，含 name 系列209（含其它后缀）、info111；另有 BDSP298、LA294、LPLE100、SV320、SWSH295、USUM100。不以此推断独立缎带 ID；补充包所有文本共54738。AHTB/DAT 是文本资源，不是图片索引。下一步应定位 Core flags +0x30/+0x3A 和 AffixedRibbon +0x98 的 UI 消费者，使用已知 hash/表结构验证，不按 label 序号猜图。
Android Achievement SpriteAtlas: source assets/bin/Data/6e26bfd444fa55b46903a2904dda6ee6, PathID1, 12 m_PackedSprites 外部引用。FileID1..12 与 PathID 序列 [2,1,2,2,2,2,1,1,1,2,2,2]；atlas texture candidate assets/bin/Data/00000000000000000000000000000000 PathID19, sactx-0-1024x1024-ETC2-Achievement-ccbb449d。需要外部文件表和 Sprite render data 才能闭合，未把文件名关联当作已验证 SpriteAtlas 绑定。Switch ELF 不适用于 Android Unity Sprite 消费者。
原始 NCA/Unpack/编辑器均未修改，Rust 生产映射本轮不扩大。上一轮 Rust 5/5 已通过。补充包 run 45771943727 归档失败，未声称新归档成功。

## 第二轮取证验收
2baa431 的首轮扩展 CI 45772957016 失败，原因是末尾 hash store 采用不同寄存器；7ff5454 修复后 Actions 45773057296 成功。artifact 15094807325 SHA256 a688292caac2844f6bbc9161680a9450a47fe6aac9bc13505990708690d17e1d，独立 CRC/SHA 校验通过。18 个 format 调用 0xADBE8..0xAE138，对应 owner+0x458..0x4E0，按 ordinal 0..5、default/blue/red 顺序，全部从真实 ELF 读取后缀。[[marking_animation_keys.json]] 为已验收的注册键证据，不是 PH4 packed marking state 或 PNG 图层映射。320个编号候选的 name/info 共640个 FNV-1a 哈希在非执行 file-backed 段字面搜索无命中，不排除动态 hash/其它编码或间接表。
## Android IL2CPP 方法入口
独立 Actions 45772878715 success，artifact 15095056482，SHA256 2d525e37f76f13d3c011eb7a4c470624687a93609a8d6a20bcd6dcda970f268d；CRC/SHA 验证。已有 metadata 扫描180628方法，2229关键词候选，0已验证业务ID。以下是 metadata method address，不是 Switch VA，函数体尚未验收。
| Method | Address | Signature/role candidate |
| --- | --- | --- |
| StaticSpriteManager.GetRibbonIcon | 0x23813E8 | fileName -> Sprite |
| StaticSpriteManager.GetRibbonIcon | 0x2381478 | ribbonId, type -> Sprite |
| RibbonField.SingleRibbon | 0x1E62430 | MD_Data_Ribbon |
| RibbonField.LumpingRibbon | 0x1E62134 | ribbonNum, MD_Data_Ribbon |
| PokemonRibbonUtility.HasRibbon | 0x1EAF06C | PokemonIndividualData, ribbonID |
| MasterDataHelper.GetRibbon | 0x1CDC69C | id -> MD_Data_Ribbon |
| AchievementScrollerCellView._LoadImage | 0x1D4F3CC | MD_Data_Achievement, AchievementRewardData |
| AchievementScrollerCellView._SetIcon | 0x1D4F56C | Sprite, Material, curtStep |
| AchievementDetailDialog._SetupRewardIcon | 0x1C5DD80 | UI reward icon |
| MedalResourceData._CoDownloadTexture | 0x1D1054C | coroutine method candidate |
| MedalResourceData._LoadTextureFromBase64Str | 0x1D10758 | texture input method candidate |

BankMarks control has 12 same-file resolved Sprite references; Achievement has 12 external unresolved references. Medal OBJ 218 vertices/218 UV/218 normals/144 faces, no usemtl/mtllib; no verified rendered medal business ID. Android runtime cache not supplied. Names indicate priority, not executed semantics. Production Rust remains unchanged.
