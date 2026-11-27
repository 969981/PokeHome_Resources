# HOME 4.1.0 图像审计验收（2026-11-26）

## 可复现证据
- Actions: https://github.com/969981/PokeHome_Resources/actions/runs/45768083432 ; head 9936eb86a2d81d7048d96f958a72d6d769a5bc8c; success.
- Artifact 15092728041, 29,483,820 bytes, 3,554 files; downloaded ZIP SHA256 8552142989924f8a3071fa496dd74e0bffb0c87abcbbd1ef8692d0c13687fb89 matches API; ZIP CRC check passed.
- 240 ARC + 1 standalone BNTX paths, 178 distinct SHA256, 9,377 BRTI rows, 4,103 distinct raw names; no reported parse errors. This scope excludes compressed standalone portraits.
- 560 missing native item resource keys: zero exact raw-name matches in scanned scope. 396 keyword candidate rows are not confirmed semantic matches.
- 3,506 Pokemon icon PNGs (112x112, format 0x2001), 38 item PNGs (64x64, format 0x1A01). All file hashes verified against artifact CSV. Decoded RGBA SHA256: 3,136 distinct Pokemon icon byte arrays, 92 duplicate groups, 370 redundant logical entries; items 38 distinct, zero duplicate groups. All PNGs alpha extrema 0..255. This is not independent native GPU or decoder parity.
- Latest selector CSV at 9fa10809 contains 3,506 unique resource stems. Removing poke_icon_ and ^u from icon raw names yields 3,506 unique stems; both sorted LF-joined ASCII sets have FNV-1a32 64d07e77. This is a fingerprint check, not exact set equality; next CI performs exact joins.

## ELF instruction evidence
ELF SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a. All addresses below ELF VA; not absolute runtime addresses. Source artifact elf/elf_image_xref_windows.md, elf/elf_image_xrefs.json.

| Address | Observed evidence |
|---|---|
| 0x14990 | Prologue of function referencing pokemon_image_list.bin at 0x149A8/0x149AC; calls 0x12D08 and 0x13BB0. |
| 0x14AA0..0x14AB8 | Loads object+0x18, then +0x190, reads first u32, adds it to buffer base, stores resulting root pointer at owner+0x120. Consistent with FlatBuffers root initialization. |
| 0x14AD0 | Common selection candidate: copies request from x1 (+0, +4, +8, +0xC, +0xD, +0x10, +0x14, +0x18) to stack. 0x14B1C branches on byte +0xD; 0x14B24 compares request word +0 against 0x1EA. Existing window ends here. Do not infer business meaning or fallback ordering yet. |
| 0x2D25D8 / 0x2D2748 | Both BL 0x14AD0 with x0=owner+0x1B0, x1=request, w2=caller flag & 1. |
| 0x2D25F4 / 0x2D2764 | Format returned name into uncompressed .bntx and compressed .bntx.gz paths respectively via 0x5F66F0. |
| 0x2D28A8 / 0x2D28C8 | Common caller invokes both loader functions (0x2D2568, 0x2D26E0); exact fallback or priority not proven. |
| 0x2C3014..0x2C30D0 | Item-name wrapper: calls 0x4FD4F8 and 0x4FD80C, stores result in w23. 0x2C306C TBNZ bit31 selects item_dummy^o; nonnegative result formats item_%04d^o. Both call 0x2D0ED4. No proof of missing-texture fallback for nonnegative keys. |

## Next evidence gates
1. Export expanded disassembly windows and direct BL/B callers of 0x14AD0, loader, item mapping functions; trace each request-field producer, actual FlatBuffers lookup order, gender normalization, and missing-key branches.
2. Exact selector/icon stem joins; PNG integrity check; retain independent logical names despite pixel duplicates.
3. Do not declare 32 unused portraits or 560 missing item keys resolved until native consumers show how they are selected.
4. Do not merge draft PR or change original NCA / Unpack. Runtime/native parity remains unproven.
