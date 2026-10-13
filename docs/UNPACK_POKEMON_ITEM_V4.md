# HOME 4.1.0 — Pokedex / Pokémon list / PML item record evidence (P4.2)

Date: 2026-10-13. Source: original `4.1.0` RomFS read-only data,
not handwritten or fabricated test records.

This phase adds `tools/home41_pokedex_item.py`, connects it to
`tools/unpack_home41.py --kind pokemon`, and verifies real samples in
`tools/test_home41_pokedex_item.py`. Outputs mirror the original
file paths under `Unpack/<NCA>/1`, using JSON for structural metadata
and CSV for true numeric record arrays.

## Pokémon and Pokédex tables

| Original file | Actual size | Parsed rows | Actual structure |
|---|---:|---:|---|
| `pokemon_test_list.bin` | 12,744 | 1,593 | repeated `<u32 packed_key,u32 raw_code>` |
| `pokemon_valid_list.bin` | 11,936 | 1,492 | unique `<u32 packed_key,u32 raw_mask>` |
| `mtt_pokedex/form_data.bin` | 12,744 | 1,593 | `<u32 packed_key,u32 raw_form_code>` |
| `mtt_pokedex/shape_data.bin` | 23,840 | 2,980 | `<u32 packed_key,u32 raw_shape_code>`; every adjacent pair shares a key and differs by `0x100` |
| `mtt_pokedex/sugata.bin` | 76,944 | 3,206 | 24-byte fixed record; six raw `u32` words, no invented semantics |

The key is consistently a 32-bit integer, also exported as
`key_low16_candidate` and `key_high16_candidate`. These names
do not assert that the split always denotes species and form.

- Both Pokémon lists have **exactly the same set of 1,492 keys**, even
  though test has 1,593 rows. Test contains **101 duplicated keys**,
  each appearing twice with raw codes `0` and `1`.
- Form data contains **1,461 unique keys**: **85** Pokémon test keys
  absent in form, and **54** form keys absent in test. These are
  legitimate unmatched rows in a raw-key join, not missing files.
- Shape data contains **1,490 paired entries** (1,489 distinct keys);
  every adjacent pair shares a key and differs by bit `0x100`.
- `sugata.bin` is aligned to 24 bytes, but the *meaning* of
  its six words and unusual packing has not been proved.

A `pokemon_test_list.crosswalk.csv` now joins test/valid/form/shape
strictly by the original unmodified packed key. It preserves multiple
codes per key and the missing/extra groups rather than guessing.

**Example raw key = 3**:
test codes `0;1`, valid mask `3458`, form codes `12;12;7`.
No unverified gender or game-version labels are assigned to these values.

## `bin/pml/item/item.dat`

This file has **61,092 bytes**. All four structural constraints
match the original bytes:

- `uint16@0 = 1829` (the first raw header word, role unproven);
- `uint16@2 = 1832` — lookup length;
- `uint16@4 = 1166` — fixed-record count;
- `uint16@64 = 5124` — start offset of the record payload;
- `5124 + (1166 * 48) = 61092` — **exact EOF**, so the data
  contains 1,166 records of 48 bytes each.
- Offset `68` to `68 + 1832 * 2` holds 1,832 little-endian u16
  lookup entries. Every **nonzero** record index 1 through 1,165
  occurs exactly once, while the value 0 occurs in multiple positions
  and is **ambiguous** (do not treat 0 as definitely empty).
- The remaining pre-record region is divisible by four and contains
  **348 pairs** of raw `u16` values. Their meaning is unknown.

The resulting output files alongside the original mirrored path are:

- `item.csv`: 1,166 fixed 48-byte records as a record offset, raw
  48-byte hex, and 12 raw u32 words. Business names remain unverified.
- `item.id_lookup.csv`: 1,832 raw ID-to-record-index slots with
  explicit zero ambiguity.
- `item.aux_pairs.csv`: 348 raw pairs, no invented dictionary meaning.
- `item.hash_join.csv`: per-hash-slot data with the original
  hash u64 from `item_hash_to_index.dat` in **hex** to preserve precision.
- `item.json`: counts, original 68-byte header and hash joins.

## Cross-file verification: item hash mapping

The existing `item_hash_to_index.dat` contains 1,830 entries.
For index positions 0 through 1,828, a nonzero item-record lookup
coincides with the nonzero hash index. All **1,165 nonzero lookups**
agree in presence. There is a deliberately retained edge case:
`hash row 1829 -> index 1828`, but `item.dat` index position 1829
has value zero. **Neither file is modified to erase the discrepancy.**

Field meanings within the 48-byte item records require an ELF XREF,
schema discovery, or independent game data mapping. The new CSV
representation is **structurally decoded / semantic partial**, not a
purported complete legal item database.

## Safety and acceptance

- `python -m unittest discover -s tools -p test_home41_pokedex_item.py -v`
- `python tools/unpack_home41.py --root . --out Unpack --kind pokemon --resume`
- `python tools/unpack_home41.py --root . --out Unpack --kind pokemon --verify --strict`
- [Publish workflow](../.github/workflows/home41-publish-pokemon-item.yml)
- All original NCA files remain read-only.
- **Published and verified:** the six new source files passed the
  original-byte regression tests and full output SHA verification in
  [GitHub Actions run 38344005393](https://github.com/969981/PokeHome_Resources/actions/runs/38344005393).
- The 4.1.0 branch now contains the actual outputs at
  [commit 1984cc3](https://github.com/969981/PokeHome_Resources/commit/1984cc331fd5ab5930987abf4a8d9d93b5cd576b).
- The verified complete manifest covers 12,074 RomFS source files:
  **converted=6,700; partial=5,370; unsupported=4; failed=0**.
  The 4 unsupported are `topics_data.bin` and three `BFOTF` fonts.
- The separate [v2 Release](https://github.com/969981/PokeHome_Resources/releases/tag/home41-unpack-4.1.0-mirror-v2)
  succeeded and contains a 791,953,572-byte archive plus SHA256SUMS.
  It was built from the earlier pre-P4.2 snapshot. For the latest
  parsed arrays and current manifest, use the **Git branch**, not that
  older Release bundle.
