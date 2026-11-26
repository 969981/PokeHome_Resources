# PokemonImageList — nested key correction (HIR)

Supersedes the raw-width interpretation in SELECTOR_CORRELATION.md and the historical leaf_selector_u32 column of pokemon_image_list_native.csv.

All 3506 leaf field0 values 40/44/48/52 are relative uoffsets, not enums. Following field0 address + uint32(field0) gives a valid FlatBuffers table for every leaf. Field1 points to the original resource name string. The nested key table has optional field0 byte, field1 byte and field2 uint32. Missing scalars are recorded as zero candidates; they correlate to the file names over all records. Level4 field0 is at object+7 when present, next field1 at +8, so the earlier 1025 (=0x401) mixed 0x01 with the next pointer byte 0x04. Correct raw view values 0 and 1.

Correlations: {
  "source": "pokemon_image_list.bin",
  "source_git_blob": "83cb3d083ee7f8e4542aa29e70ef63508276306b",
  "records": 3506,
  "selector_keys": 3506,
  "duplicate_keys": [],
  "gender_code_to_filename": {
    "2->uk": 608,
    "3->mf": 1972,
    "0->md": 212,
    "1->fd": 212,
    "4->mo": 106,
    "5->fo": 396
  },
  "variant_to_filename": {
    "0->n": 3314,
    "1->g": 192
  },
  "decoration_to_filename": {
    "0->00000000": 3290,
    "1->00000001": 36,
    "2->00000002": 36,
    "3->00000003": 36,
    "4->00000004": 36,
    "5->00000005": 36,
    "6->00000006": 36
  },
  "view_to_filename": {
    "0->f": 3486,
    "1->b": 20
  },
  "certainty": "Exact FlatBuffers pointer and field/name correlation; enum business labels and runtime precedence still require independent ELF evidence."
}

A full tuple (species, form, color, view, gender_code, variant_code, decoration_raw) has 3506 distinct keys among 3506 records. Duplicate key count 0. The numeric gender code is the image resource enum, not automatically PKM Gender. Variant and decoration code match filename tags; the actual game selection precedence/fallback remains unverified. Resource name mapping is exact within the serialized table. 32 extra PNG resources remain retained. No change to original files.
