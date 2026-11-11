# Pokémon HOME 4.1.0 — Batch12: /detail business-stage result, commit→state7, dual callback, Box reconciliation

**Static result:** `BUSINESS_STAGE_GATE_RESTORED; REMOTE_COMMIT_ACK_NOT_PROVEN`. All native addresses are Ghidra VAs (ELF RVA + `0x100000`). No live HOME account, server request or modified game data was used.

## Reproducible provenance

- Immutable original `main.elf` SHA-256: `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`.
- [Batch12 completed run 42941847310](https://github.com/969981/PokeHome_Resources/actions/runs/42941847310) — success; verified **15 exact BL targets, 9 exact conditional/unconditional branch targets, 20 exact machine words**, and 9 immutable published C artifacts.
- [Evidence artifact](https://github.com/969981/PokeHome_Resources/actions/runs/42941847310/artifacts/13821455844) with `response_callback_report.json` and `summary.log`.
- [Self-checking original-ELF audit script](../tools/ghidra/home41_batch12_ack_field_callback_audit.py) and [small independent CI workflow](../.github/workflows/home41-batch12-ack-field-callback.yml).
- Existing Batch07–11 reports, Ghidra 12.2 source project, original ELF, split SQLite and per-function C remain unmodified.

## 1. Important discovery: /detail is the actual hardcoded numeric response discriminator

From published `derived/4.1.0/Ghidra_12.2_Run_42763137320/c/_text__0034e638.c`:

```c
iVar1 = FUN__text__0064baec(param_1 + 0x2ff2420);   // HTTP response code, transport +0xb8
...
uVar6 = FUN__text__00317e00(param_1, local_d0, 0x710fb3, pbVar8);
if ((uVar6 & 1) != 0) {
    iVar1 = atoi(local_d0);
    ...
}
...
if (business_validation_failed) {
    iVar1 = 0;  // this branch also sets a distinct local error
    *(undefined4 *)(param_1 + 0x3941474) = 30000;
}
return iVar1;
```

Reading `0x710FB3 - 0x100000` through the **original ELF's PT_LOAD mapping** produced the verified null-terminated bytes `2f64657461696c00`, UTF-8 **`/detail`**. This is not a guessed field name. Its exact value semantics for every endpoint remain unverified; it is a strong **business-stage response discriminator**, not independently a durable commit ACK.

Other original literal strings in the same response parsing function:

| Ghidra VA | Original bytes as UTF-8 |
|---|---|
| `0x711C24` | `/pm` |
| `0x716AE6` | `/recrd/1` |
| `0x711C28` | `/recrd/2` |
| `0x70AF2A` | `/recrd/3` |
| `0x71B8A3` | `/recrd/4` |
| `0x71B8AC` | `/recrd/5` |
| `0x70D18A` | `/trtime` |
| `0x70C59D` | `/dic` |

These paths indicate additional structured response fields; they do **not** individually prove successful Box persistence. Four other key/path pointers are read from request object offsets `+0x38/+0x40/+0x48/+0x50`; their runtime contents are not established by these static literals.

## 2. Both /precommit and /commit enqueue a shared state-7 response handler

The preserved native Box `0x34C470` 11-case switch has:

- **Precommit state 4 entry `0x34C8B0`:** a conditional successful local request setup path reaches `0x34C9E4` (`mov w8,#4`), then `0x34CB30` (`stage+0x0C = 4`), `0x34CB34` (`mov w8,#7`), and `0x34E4A8` (`request+0x14 = 7`). Verified shortest conservative CFG segment lengths: **77, 2, 6 edges**.
- **Commit state 6 entry `0x34CA04`:** a conditional successful local request setup path reaches `0x34CB2C` (`mov w8,#6`), then same `0x34CB30` (`stage+0x0C = 6`), `0x34CB34` and `0x34E4A8` (`request+0x14 = 7`). Segment lengths **74, 1, 6 edges**.
- This proves the request stages share the **state-7 pending/response consumer** (`0x34CB3C`), *not* that either remote service accepted the operation.

State 7's known call chain: `0x64BA4C` pending → `0x64BAB8` transport error test → `0x64BAD0` response buffer → `0x34E638` parser → `0x34CB78` stage-result write → `0x34CB7C/+0x34CB84` test → state 9 or stage advancement.

Under the parser's verified `/detail` override path:

| Condition | Native consequence | Confidence |
|---|---|---|
| `/detail = 0` and separate `stage+0x04 = 0` | `0x34CB84` branches to `0x34E4D0`, increments `stage+0x0C` | Machine branch verified; response value not observed |
| `/detail != 0` | `0x34CB7C` branches to `0x34CB88/0x34CB90`, state `9` | Machine branch verified |
| `/detail` missing with HTTP status `200` | Parser may retain initial HTTP 200; state 9 path | Static fallback, requires real response |
| A failed payload validation `0x31A614` | Sets `stage+0x04 = 30000` and `iVar1=0`, so stage-9 condition may still hold | Published C branch verified |
| Counter increment reaches `7` with other local gates satisfied | Native state `8` written at `0x34E51C` | Machine branch verified |

The first row is a **candidate per-stage application-success condition**, including the commit stage, but it must not be confused with a cloud readback or server durable commit proof. In particular, `/detail` may be an application error code; only real protocol samples can establish its full value mapping.

## 3. State 8 and state 10 invoke different method slots on the same callback holder

The native assembly resolves two independent indirect calls:

| Phase | Original callsite | Dispatch pattern | External readiness |
|---|---|---|---|
| State 8 (`0x34CB98`) | `0x34CBF8: blr x8` | `ldr x8,[x0]`; `ldr x8,[x8]` → **method slot +0** | `0x30CC20` and `0x29E598` gates |
| State 10 (`0x34CC1C`) | `0x34D2F4: blr x8` | `ldr x8,[x0]`; `ldr x8,[x8,#8]` → **method slot +8** | Request flags, result event and local reconciliation checks |

Both use the same request-owned type-erased callback holder layout: a control/refcount pointer at `x20+0x18`, pointer storage at `x20+0x20`, or inline object at `x20+0x30`. A read-only `ldar` determines which pointer/inline object is used. This similarity is instruction-level, **but the concrete virtual-table pointer and method target code have not been recovered**.

This is strong structural evidence of **two different completion/notification methods**. It is **not** proof that slot+0 means server success and slot+8 means rollback. A runtime vptr/function-pointer read or constructor-to-vptr assignment chain is the next critical gate.

## 4. State 10's local copy and comparison are conditionally gated — not unconditional server rollback

The original FDE at `0x34CC1C` proves:

```text
0x34CC24  BL   0x3330E0   local event/result notification
0x34CC28  LDRB W8,[X19,#0x965]
0x34CC2C  STR  WZR,[X25,#0x08]  clear stage result, not Dirty Count
0x34CC30  CBZ  W8,skip
0x34CC34  BL   0x326FE0   local global-state handler
0x34CC38  LDRB W8,[X19,#0x964]
0x34CC3C  CBZ  W8,skip_copy
0x34CC40  BL   0x322470   local 300x30 Box record copy/rebuild
0x34CC44  BL   0x322870   local 300x30 Box record comparison
0x34CC48  TBZ  W0,#0,skip_difference_handler
0x34CC4C  BL   0x322A70   changed/difference handler candidate
...
0x34D2F4  BLR  X8         callback method slot +8
```

The local flags have real preceding writers:
- `0x34C8A8`: `STRH` to request `+0x964`;
- `0x34C8C0`: writes request `+0x965`;
- `0x34C9EC/+0x34C9F8`: clears the two flags;
- `0x34E464`: sets flags on a shared error/state path;
- `0x34D224`: another writer to `+0x964`.

These are **request-local workflow flags**, not the `BoxManager+0x93498` Dirty Count. It is now proved that the Box compare/copy branch depends on them. It is **not** proved that these flags reflect a failed server commit rather than a local precommit/reconciliation stage.

## 5. Evidence gap and targeted read-only guest verification

To move from `STATIC_PARTIAL` to `APPLICATION_ACK_VERIFIED`, log a bounded set of success/failure trials with:

1. Request stage (4/precommit or 6/commit), Box `+0x14` state and stage `+0x0C` before and after submission.
2. Generic callback `0x64BB9C` transport result `+0x08/+0xB0`, HTTP status `+0xB8`, and presence/value of decrypted **`/detail`**. Record *only* status/values, **not full response data, Pokémon records, credentials or tokens**.
3. Decoder `0x34E638` `iVar1` and local `stage+0x04/+0x08`, followed by actual `+0x14` state writes.
4. Before invoking state 8 or 10 callbacks, record x0, vptr, target function pointer at slot+0/+8, LR and the request holder selection; check that it is the same object and whether a server response is actually available.
5. Record `+0x964/+0x965`, the local compare result, Dirty Count and Dirty list hash (not contents), and eventual cold-restart/remote readback after an application-level confirmation.

**No live runtime observation or durable server ACK was performed in Batch12.** No persistence, auto retry, requeue, or rollback guarantee is established.
