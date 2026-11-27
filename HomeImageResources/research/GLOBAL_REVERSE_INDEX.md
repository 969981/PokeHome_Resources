# HIR — ELF image references and global SARC reverse index (2026-11-26)

## Verified in this turn
- 240 original SARC paths, all under bin/appli (239) or bin/pokemon (1); 177 distinct Git blobs. This is a Git tree census, not completed BRTI scan.
- Direct reads of 9 focused original SARC archives recovered 259 BRTI name rows (including 38 from icon_item.arc), 30 marking-name candidates from two archives. None of 560 missing item resource keys matched in these 9. Evidence: targeted_sarc_scan.json, preserving path, Git blob identity, member, name, index and format.
- The 18 marking textures in mtt_context_marking_00.arc (86x86 BC4) and 12 in mtt_pokebox_list.arc (38x38 BC4/BC5) are box marking UI candidates, not proven ribbon or encounter-mark images. BC4/BC5 are channels, not final shader colors.
- First BRTI workflow run 45767012345 failed in all four real fixture tests: sparse checkout excluded primitive_renderer_texture.bntx and icon_label, icon_pokerus, icon_generation ARC files. Actual icon extraction step skipped. Zero artifacts. Fix expands checkout to all 239 appli ARC sources, icon_pokemon, standalone system texture, and original ELF.
- The raw main.elf 8,261,352-byte binary was not returned by the connector (empty body). No new ELF address is asserted. The new workflow scans exact resource strings and ADR/ADRP+ADD with the existing SHA-qualified scanner, disassembles windows, records instruction bytes. These are entry points for tracing; not complete consumers.

## Next executable evidence
tools/home41_image_reverse_index.py generates per-path archive coverage, BRTI reverse index, 560 missing-key exact joins, keyword candidates, and SHA-checked ELF references/windows. It does not relabel any resource automatically and retains partial errors. The scan covers ARC containers plus standalone .bntx, not 3538 compressed portrait textures. The workflow installs optional BC7/ASTC decoder and capstone, and runs icon extraction after metadata audits. CI output must be verified before claiming global results or committing PNG assets. No change to NCA or Unpack.
