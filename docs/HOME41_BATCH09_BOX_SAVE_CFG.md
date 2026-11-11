# Pokémon HOME 4.1.0 — Batch09 Box SaveRequest Dirty-clear CFG evidence

> Status: **STATIC PARTIAL — NOT A SERVER ACK PROOF** (2026-11-11).
> The analysis is limited to original immutable AArch64 executable bytes.
> No online account, HTTP endpoint, saved data, or original Ghidra project was modified.

## Provenance and execution

- Branch: `4.1.0`; ELF SHA-256 `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`.
- Native function FDE: Ghidra VA `0x34C470`, length **8,372 bytes**; raw ELF RVA `0x24C470`.
- Network gate candidate: Ghidra VA `0x325D10`, length 124 bytes.
- Reproducible standard-library scanner: [`tools/ghidra/home41_batch09_box_save_cfg.py`](../tools/ghidra/home41_batch09_box_save_cfg.py).
- CI [Run #42933064544](https://github.com/969981/PokeHome_Resources/actions/runs/42933064544) **success**, synthetic branch tests passed.
- Result artifact: [HOME41-Batch09-Box-Save-CFG](https://github.com/969981/PokeHome_Resources/actions/runs/42933064544/artifacts/13816612741) (`box_save_cfg.json`, `summary.log`).
- Original native Ghidra recovery from [Batch08 #42932152093](https://github.com/969981/PokeHome_Resources/actions/runs/42932152093); existing reports and Ghidra source were not rewritten.

## Bounded machine-code control-flow inventory

For the single Box SaveRequest FDE: **184 direct BL**, **27 BLR**, **1 indirect BR**, **52 B.cond**, **59 unconditional B**, **45 CBZ**, **4 CBNZ**, **15 TBZ**, **13 TBNZ**, **2 RET**, and **1,691 other linear instructions**. The single indirect BR is important because it leaves some dispatch destinations unresolved.

The scanner models direct branch, fall-through, conditional branch alternatives, and intra-FDE graph paths. It does **not** resolve jump tables, virtual callback implementations, HTTP response semantics, execution order across asynchronous calls, or side effects of called functions. No label string is by itself proof of a successful save.

## Dirty-list to clear

The earlier Batch08 real assembly indicates:

| Ghidra VA | Operation | What it establishes |
| --- | --- | --- |
| `0x34DBA4` | `ldrh w19,[x0,x8]` | Read manager `+0x93498` Dirty Count |
| `0x34DBA8` | `cbz w19,0x34DD78` | Zero count may bypass serialization |
| `0x34DBE0` | `ldr x8,[x0,x25]` | Read Dirty qword Tracker entry |
| `0x34DD54` | `bl 0x3D60A8` | Call record encoder |
| `0x34DD64` | `bl 0x6F65E0` | Call memcpy |
| `0x34DD68` | `bl 0x321AC0` | Retrieve Box Manager |
| `0x34DD74` | `str wzr,[x0,x8]` | Clear Dirty Count |

Batch09 confirms a **direct static CFG path** from the Count read to the clear (shortest modeled path **37 instruction edges**), and a direct **four-edge** continuation from `0x34DD64` through `0x34DD68`, `0x34DD6C`, and `0x34DD70` to `0x34DD74`. There is **no explicit direct branch targeting `0x34DD74`**; it follows prior instructions by fall-through.

This is evidence of **data staging/serialization followed by a local Count reset**. It is *not* evidence of a remote ACK. The network response might be processed at an earlier dispatcher, a different state, or a callback, and such a link has not been demonstrated.

## Request-state and network-response separation

With only direct AArch64 branch and fall-through edges, the scanner reports:

| Starting reference site | Direct intra-FDE CFG path to `0x34DD74` |
| --- | --- |
| `0x34C54C` `/api/box/operation` | Yes — overapproximating path, 363 instruction edges |
| `0x34C8C8` `/precommit` | Not found |
| `0x34CA0C` `/commit` | Not found |
| `0x34D248` `SaveRequestSEND_COMMIT_WAIT_SAVE_COMMIT` | Not found |
| `0x34E418` `SaveRequestSEND_OPERATION` | Not found |
| `0x34DBA4` Dirty Count read | Yes |
| `0x34DBE0` Dirty entry read | Yes |
| `0x34DD54` data encoder | Yes |
| `0x34DD64` memcpy | Yes |

**Important limitations:** The two branch outcomes are both conservatively retained regardless of runtime conditions. The “no direct path” results do **not** prove that precommit/commit cannot reach Dirty clear via the indirect BR, virtual callback, earlier state transition, or response dispatcher. The 363-edge result similarly does not prove the path is taken at runtime.

## Outstanding validation gates

1. Recover the indirect BR table at `0x34C470` and the state-gate table near `0x325D10`; identify table values and state-to-handler edges.
2. Use existing original ELF / FDE metadata to resolve callback targets for `BLR` and the C++ request-object vtable; cross-check the concurrently extended Batch07 pointer-table audit.
3. Pinpoint request send, response-status decoding and retry/rollback handlers. Do not label `PlayReport` or endpoint formatting as a server ACK.
4. Confirm whether Dirty Count is reset at staging or only after verified ACK by comparing **read-only runtime** successful/failed request traces. Keep credentials, account IDs and tokens out of logs.
5. Verify error-path behavior: requeue/rollback, failure Count retention or restoration, and success-only state cleanup. A static Count reset is not a durable cloud save.

Do not rename `0x34C470` to `SaveSuccess`, `SaveManager`, or `CommitACK` until the server-result-to-Dirty-state causal edge is actually established. These are research labels only.
