# HOME 4.1.0 Batch04 — Tracker side collection and unresolved save consumer

> Static follow-up to Batch03. Source baseline: Ghidra 12.2 Run #42763137320, ELF SHA-256 `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`. This note records newly inspected functions only; it does not claim save/ACK verification.

## 1. Batch03 CI rerun repaired

Batch03's SQLite instruction-level audit had already passed (120/120 X0 sites, six Dirty insertion calls, expected direct key/count users). The workflow then failed at the C11 header compile because the assertion still referred to the pre-rename macro `HOME41_DIRTY_KEY_LIST_OFFSET`; the header had already renamed it to `HOME41_TRACKER_DIRTY_SET_OFFSET`.

Fixed the stale macro reference. Re-run: [Actions #42839172506](https://github.com/969981/PokeHome_Resources/actions/runs/42839172506) — instruction-level audit PASS and C11 layout compile PASS.

## 2. New adjacent collection: manager+0x7B498

While searching the global manager getter `0x321AC0` callers, a separate data-collection path appeared:

```text
0x19555C
  ├─ calls 0x306588 on object from param_1+0x38
  ├─ if low bit clear, calls 0x307CA0(object)
  └─ separately updates a wrapper through 0x1951D4

0x307CA0(object)
  ├─ duplicate/probe helper 0x3028C4(object+0x60)
  ├─ if helper low bit clear:
  │    manager+0x7B4A0 + count*8 = *(u64 *)(object+0x60)
  │    manager+0x7B7C0 + count*0x38 = 0x637404(object+0x58)
  │    writes several additional fields from object+0x58 accessors
  │    increments manager+0x7B498
  └─ return
```

### What this proves

- `0x307CA0` appends a 64-bit value from `object+0x60` into a distinct manager collection rooted at `manager+0x7B4A0`, using count `manager+0x7B498`.
- Each entry has a companion `0x38`-byte record rooted at `manager+0x7B7C0`, filled with Tracker plus multiple fields obtained from accessors on `object+0x58`.
- `0x19555C` is a direct caller and gates the append with `0x306588`.
- This is **not** the Batch03 Tracker Dirty set at `manager+0x7FC18` / count `manager+0x93498`; the two collections have different bases, counters, entry shapes, and insertion functions.

### What it does not prove

- The `0x7B498` collection's consumer has not been identified.
- It is not yet established whether it is a Box snapshot, deferred update list, serialization staging list, or a save request list.
- Similar use of a Tracker does not prove that this collection is consumed by the same persistence path as the `0x7FC18` Tracker Dirty set.
- No I/O, server response, ACK, retry, or successful-save clearing condition has been found.

## 3. Next reverse-engineering targets

1. Enumerate all references to manager offsets `0x7B498`, `0x7B4A0`, `0x7B7C0`, and `0x7B7F0`, including references expressed through computed base pointers rather than literal C offsets.
2. Trace the `0x19555C` caller chain upward to identify the lifecycle event that populates the side collection.
3. Compare initialization/reset of the `0x7B498` collection with the `0x93498` Tracker Dirty counter.
4. Find consumers of the 0x38-byte entry records and follow their outputs to serialization and I/O. Do not label either collection as saved until success/failure branches are evidenced.

## 4. Reproducible C sources

- `derived/4.1.0/Ghidra_12.2_Run_42763137320/c/_text__00307ca0.c`
- `derived/4.1.0/Ghidra_12.2_Run_42763137320/c/_text__0019555c.c`
- `derived/4.1.0/Ghidra_12.2_Run_42763137320/c/_text__00321ac0.c`
- `tools/ghidra/home41_batch03_provenance_audit.py`

Current status: `X0_TRANSFER_VERIFIED`, `HOME_TRACKER_IDENTITY_VERIFIED`, `TRACKER_DIRTY_INSERT_VERIFIED`, `SECONDARY_TRACKER_COLLECTION_IDENTIFIED`, `SAVE_ACK_NOT_CLOSED`.
