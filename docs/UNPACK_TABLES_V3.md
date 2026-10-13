# HOME 4.1.0 Unpack P4.1 — Grammar/Item/Form Table Reverse Engineering

2026-10-13, branch `4.1.0`. Original input remains read-only.
Parser: `tools/home41_tables.py`; integration: `tools/unpack_home41.py --kind tables`.

## Verified from real HOME 4.1.0 files

### Language grammar (`bin/message/grammar/*.dat`)

The first two bytes are `term_group_count:u8` and `condition_column_count:u8`.
The next `term_group_count` little-endian `u16` values are **absolute file
offsets** of UTF-16LE NUL-separated variant string groups. Between the
offset table and first string is a matrix with exactly
`term_group_count * condition_column_count` bytes. Each matrix cell is
a byte offset **relative to the start of its string group**. Looking
up that offset and reading a NUL-terminated UTF-16LE string gives the
actual selected grammatical phrase.

| Language | Groups | Columns | Selector cells | Recovered variants (including empty) |
|---|---:|---:|---:|---:|
| English | 4 | 6 | 24 | 8 |
| French | 12 | 12 | 144 | 42 |
| German | 8 | 9 | 72 | 26 |
| Italian | 16 | 30 | 480 | 100 |
| Spanish | 16 | 30 | 480 | 62 |
| JPN / Korean / Simp_Chinese / Trad_Chinese | 0 | 0 | 0 | 0 |
| **Total** | **56** | | **1,200** | **238** |

Source bytes validate all 1,200 matrix byte offsets as starts of a
NUL-terminated UTF-16LE variant, with no out-of-range pointers.
Examples from actual bytes:

- English `a ` / `an ` (and an empty variant),
- French `le ` / `l’` / `la ` / `les `,
- German `der ` / `die ` / `das `.

Outputs preserve RomFS paths: `English.csv` (groups and first
variant), `English.selectors.csv` (all selector cells and resolved
variant), `English.json` (lossless parsed table, all variants).
**Unknown:** what gameplay/locale condition each numeric matrix
column represents. Thus these are **partial**, not 100% semantically
restored.

### `bin/pml/item/item_hash_to_index.dat`

- File size 29,284 bytes.
- Header count `u32=1830`.
- Exactly 1,830 records of 16 bytes: `hash_u64`, `index_u32`,
  `reserved_u32`.
- All reserved words are zero; each stored 64-bit hash is retained
  as fixed-width hexadecimal text to avoid CSV/Excel precision loss.
- Some index values repeat or are zero and therefore must **not** be
  replaced by the CSV row number.

Outputs: `item_hash_to_index.csv`, `item_hash_to_index.json`
(structural metadata). Hash algorithm and target table mapping
remain unknown.

### `bin/hayabusa/appli/pokedex/res_table/pokedex_form_storage_index_table.bin`

- File size 1,910 bytes.
- Header `u16=318`; exactly 318 records of 6 bytes each.
- Per-record `packed_value_u32`, `ordinal_u16`.
- All 318 ordinal values match row positions 0 through 317.

Outputs: `pokedex_form_storage_index_table.csv` and `.json`
(structural metadata). Meaning of packed values remains unproven.

## Status and validation

- All three decoders enforce bounds, lengths, terminators, and the
  observed record structure; invalid inputs are rejected, not silently
  converted.
- Tests: `tools/test_home41_tables.py`, using the original repository
  assets in 9 languages plus the two binary lookup tables.
- The previous baseline had **21 unsupported** files. These 11 files
  should move to **partial**, leaving **10** if the scoped full run and
  manifest verification pass.
- Unrelated opaque binary arrays, unpaired item data, and BFOTF font
  payloads have not been called "converted" without evidence.

CI publication: [HOME 4.1.0 grammar and lookup tables](../.github/workflows/home41-publish-tables.yml).
The binary v2 Release is tracked independently; this document does
not assert its assets are present until the Release job succeeds.
