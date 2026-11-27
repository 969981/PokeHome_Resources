# HOME 4.1.0 原生图片选择器：静态闭环研究

## 证据版本与验收
- ELF SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a.
- Actions https://github.com/969981/PokeHome_Resources/actions/runs/45768786219 succeeded at 24d4f2b9; artifact 15092623436 ZIP SHA256 f68fb7a9417ba48414de4451b2cd11c507ff191cccdc1d7443fbbefcce388469 independently verified, CRC passed.
- Exact stem multiset join: 3506/3506, no selector-only, icon-only or duplicate stems. 39 direct B/BL references to nine targets; 0x14AD0 exactly three direct BL at 0x2C33F4, 0x2D25D8, 0x2D2748.
- Existing SHA-bound Ghidra exports: derived/4.1.0/Ghidra_12.2_Run_42763137320/annotation_v1/c_annotated/_text__00114ad0.c, _text__00115190.c, _text__005fd4f8.c, _text__005fd7d0.c, _text__005fd80c.c. ARM64 confirmation: artifact selector/native_selector_windows.md and docs/UNPACK_P7_NATIVE_ITEM_CALLER_WINDOWS.md. Ghidra VA is ELF VA +0x100000.
- Read original 344352-byte pokemon_image_list.bin (Git blob 83cb3d083ee7f8e4542aa29e70ef63508276306b) and 61092-byte item.dat. All 3506 CSV rows equal native field values and vector order. Independently implemented JS model roundtrip 3506/3506, five fallback examples. Python reproduction tools/home41_image_selector_model.py submitted, not yet CI accepted.

## 0x14AD0 request (observed fields; semantic labels research names)
| offset | width | observed use |
| --- | --- | --- |
| +0x00 | u32 | species |
| +0x04 | u16 | form |
| +0x08 | u32 | input gender enum 0/1/2 |
| +0x0C | u8 | color, nonzero selects code 1 |
| +0x0D | u8 | egg-like normalization flag |
| +0x10 | u32 | copied, not used in observed matching; unresolved |
| +0x14 | u32 | variant input 0/1/2 |
| +0x18 | u32 | decoration for species 869 |
| w2 | bit 0 | view selector |

0x14B1C..0x14B50: special +0xD nonzero replaces species with 0, form with (original species==490), gender with 2, color with 0, +0x10/+0x14/+0x18 with 0; view remains w2 bit0. Egg interpretation supported by species 0 resource names; actual request producer still pending.

Lookup order: species exact (absent returns constant ELF VA 0x61E360; literal not yet extracted), form exact -> 0 -> first source entry; color desired 0/1 -> 0 -> first; view desired bit -> 0 -> first. Preserve native vector order, not lexicographic sorting.
Helper 0x15190 matches input gender 0 to resource codes {0,3,4} (mask 0x19), 1 to {1,3,5}, 2 to {2}; input variant 0/1 -> resource variant 0; 2 -> resource variant 1. Decoration compared only for species 0x365 (=869).
0x150AC..0x150E8: attempts (variant,decoration), (0,decoration), (original variant,0), (0,0); if all miss, first leaf in selected view vector. No arbitrary species fallback asserted. Original data is nonempty; malformed vector behavior is outside model.
Static test samples: egg-like request for 490 -> 0000_001_uk_n_00000000_f_n; Pikachu form 99/color1/view1/gender1/variant2 -> 0025_000_mf_g_00000000_f_r; species869 decoration7/variant2 -> 0869_000_fo_g_00000000_f_n; species1 gender2 -> first leaf 0001_000_mf_n_00000000_f_n. Missing species -> None in model until constant read. These are model outputs, not runtime captures.

## 0x4FD4F8 and 0x4FD80C
0x4FD4F8 tail B 0x4FD7D0 (0x4FD508), owner uses global pointer. 0x4FD7D0 returns zero if input=0 or u8(input-1)>=header[0x15]; otherwise u16 at 0x364+2*u16(header+2)+2*u8(header+8)+2*u8(input-1). Native truncation is deliberate; do not treat all large inputs as rejected. Original header count 37, capacity 1832, header+8=0, table starts 0x11B4.
0x4FD80C masks input to u16, constructs record wrapper via 0x4FD06C -> 0x4FD784, selector 4 -> LDRSH at 0x4FD130 (record+0x1A). Record start 0x1404; record count 1166. 0x2C306C checks sign, chooses item_dummy^o or item_%04d^o.
Actual conversion inputs 1..37: 1..16, 492..499, 576,851,1785,1710..1713,1746..1750,1771. All 37 nonnegative sprite IDs equal mapped IDs. Including input0 dummy, resource name set equals exactly all 38 original icon_item BRTI names. This resolves coverage for this path, strongly consistent with ball icons, not general held-item icons. Historical 560 missing ordinary-item keys were outside this input domain; retain historical crosswalk, do not assert all items have images.
Five direct callers of 0x2C3014: 0xAEB28,0x137B44,0x137FDC,0x13A9F8,0x15BF2C. The last gets an input via 0x206BC4 -> 0x5312F0 and conditionally replaces it with 4 (0x15BEF8); need recover upstream semantics and conditions rather than asserting raw PKM Ball equivalence.

## Remaining gates
Missing species literal 0x61E360, +0x10 semantics, request producers incl. ball input, 32 unreferenced portraits, independent native execution / texture renderer parity. Do not label static model as native equivalence. No change to NCA or Unpack; keep PR draft.
