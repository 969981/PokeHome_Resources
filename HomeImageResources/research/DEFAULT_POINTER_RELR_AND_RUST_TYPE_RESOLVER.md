---
type: research_note
game: Pokémon HOME
version: 4.1.0
status: static_model_verified_partial
tags: [HOME, ELF, RELR, Rust, TypeImageResolver]
---
# 默认对象 RELR 消费者与 Rust 属性解析器

关联 [[RUST_HOME_IMAGE_RESOURCE_CORE]]、[[NATIVE_CORE_DEFAULT_OBJECTS]]。

## RELR 与指针槽位
Actions 45772305404 success, head 766788fb; artifact 15094791918 (85516 bytes), ZIP SHA256 9015792b854d447907fc5b933411d217837bd1c05f92c0a3f40ac169138c5c17, CRC verified. Original ELF SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a.
PT_DYNAMIC: DT_RELR=0x5FF410, DT_RELRSZ=0x1148 (4424), DT_RELRENT=8. Decode 27112 relocation destinations; all eight slots match RELR, zero relocations inside the default object region itself. No matching dynamic REL/RELA. All 142 DT_INIT_ARRAY slots have RELR and executable file values. 0x522E38 itself not a direct init-array entry.
1174 page seeds, six direct slot-load candidates; scan stops at branch and is not exhaustive.
| ELF slot | file addend | load PC |
| --- | --- | --- |
| 0x7A6258 | 0xB15DB2 | 0x522E64 |
| 0x7A6270 | 0xB15EB7 | 0x522EC0 |
| 0x7A6280 | 0xB15E78 | 0x522EA4 |
| 0x7A6288 | 0xB15EFF | 0x522EDC |
| 0x7A6290 | 0xB15F3F | 0x522EF4 |
| 0x7A6298 | 0xB15F6E | not found by bounded scan |
| 0x7A62A0 | 0xB15FB8 | not found by bounded scan |
| 0x7A62E0 | 0xB15E76 | 0x522E98 |

## Newly found initializer
Same ELF Ghidra export derived/4.1.0/Ghidra_12.2_Run_42763137320/c/_text__00622e38.c, entry 0x522E38 (Ghidra VA minus 0x100000). Its caller _text__006023c0.c = ELF 0x5023C0. The six actual slot LDR instructions in artifact corroborate this function's pointer access. Full instruction-level store width/range still to be audited.
Decompiled path zeros Core 196 bytes and Tag1 63, Tag2 72, Tag3 64, Tag4 47 bytes, writes Core+0x0D u16 = 0x0402 (1026), writes Core+0x93 u8 from *(0x502950() + 0x2C8), and writes zero at Core end pointer. 0x502950 returns global (Ghidra DAT_00c15d80 / ELF 0xB15D80). The exact Core language value depends on runtime context. Do not claim whole Core zero. Tag5 and Tag7 load-time zero-fill established earlier but initialization writers unresolved. Tag6 ball branch returns zero, default object not located. No BadEgg behavior enabled; complete runtime parity not established.

## Rust TypeImageResolver
Commit 1f942e63086a82b89e032ab1b360e243967e1b11. Uses existing core/types/index.json. Strict version/ELF source identity/360 rows/179 unique PNG/domain/status/hash shape/duplicate validation. Native display indices 0..17; message label 0..8 unchanged, 10..18 map label-1, label9 rejected. 10 languages and two kinds; no implicit PKM enum conversion. Public resolve_type_display / resolve_type_message_label return Result<Option<PathBuf>,Error>; unknown language/index/label returns None. Core open now requires archived type index, deliberate contract change.
Actions 45772246121 success (5 integration tests, 0 failed); existing 3506 selector rows, 3506 icons, 3506 portraits, 38 balls paths remain verified; new 360 type rows, 179 distinct PNG actual SHA256 all verified. Test is stored PNG hash verification, not fresh BRTI decoding or runtime rendering parity.
No changes to original NCA, Unpack or editor; research PR not merged. Future: obtain full ARM64 0x522E38 store windows, trace initializer call graph and global language field; resolve Tag5/7 indirect consumers, then add explicit BadEgg policy based on confirmed complete native behavior. Continue Ribbon/Mark/Achievement resources separately.
