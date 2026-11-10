# HOME 4.1.0 Ghidra 12.2 — uncompressed / losslessly split

Source: Actions Run #42763137320 (verified success), ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a

- project/HOME410.gpr and project/HOME410.rep/: editable native Ghidra project;
- c/: 15415 individual Ghidra pseudocode .c files;
- database/: byte-exact raw SQLite pieces, not ZIP/GZ;
- ndjson/: plain newline-delimited JSON fragments, each line intact;
- fde_recovery.csv: 25,803 original FDE recovery audit;
- parts_manifest.json: every chunk SHA256 and original full-file SHA256.

Restore the original SQLite and NDJSON using: python tools/ghidra/home41_restore_split.py --source derived/4.1.0/Ghidra_12.2_Run_42763137320 --out /some/local/directory

GitHub cannot accept >100 MB ordinary Git blobs; we deliberately use uncompressed binary chunks <=45 MiB rather than LFS, TAR, or ZIP. If project_parts/ is present, restoration also reconstructs any oversized internal Ghidra project files.

This is Ghidra-generated C pseudocode, not Nintendo source code. All 15,415 Ghidra-identified functions are covered by this verified Run, while the ELF contains 25,803 native FDE ranges.
