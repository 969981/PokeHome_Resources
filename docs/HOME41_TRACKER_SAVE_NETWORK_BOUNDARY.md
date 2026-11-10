# Pokémon HOME Switch 4.1.0 — Tracker / save / network boundary audit

> Status: **STATIC PARTIAL** (2026-11-11 Asia/Singapore). No proof yet of a Tracker Dirty → HTTP operation → server ACK → Dirty clear chain.
> Do not rename any function `SaveManager` or `SaveSuccess` on the basis of this evidence.

## Immutable baseline

- Branch: `4.1.0`
- Analysis: Ghidra 12.2, [Run 42763137320](https://github.com/969981/PokeHome_Resources/actions/runs/42763137320), restored native project and committed split C/SQLite.
- ELF SHA-256: `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`
- Ghidra image base = `0x100000`. All addresses in this note are **Ghidra VAs**, not raw `main+RVA`; for text entrypoints subtract `0x100000` to get the RVA.

## Tracker, cache and local persistence

- `0x978AC8` Dirty Count and `0x960AC8` secondary Count are set to zero in `.text::00325490` at instructions `.text::00325648` / `.text::00325640`. This is Box-manager initialization, **not** network save ACK.
- `0x965248` Dirty Tracker list, `0x960AD0` secondary array, `0x960DF0` companion records have no *direct Ghidra XREFs* in the Batch06 probe; this does not rule out offset-based or indirect consumers.
- Batch05 documents a distinct local compact cache path whose restore path overwrites the GameDataCore Tracker with zero. It is **not** demonstrated to preserve HOME Tracker.
- Batch05 independently finds the `savedata.bin` local path using `nn::fs::WriteFile` / `nn::fs::Commit`. Its local filesystem success is **not** a server acknowledgement.
- Evidence: [Batch05 CI](https://github.com/969981/PokeHome_Resources/actions/runs/42851587449), `tools/ghidra/home41_batch05_persistence_audit.py`.

## HTTP literals vs executable call graph

- The Ghidra native project probe (Batch06) checked 78 string objects including `SaveRequest*`, `ApogeeSaveRequest*`, `/api/box/operation*`, `/api/mile/operation*`, `Authorization:`, `Content-Type`, and HTTP/2 literals.
- All 78 reported no **direct** Ghidra XREF. This is a negative result about indexed direct references, **not** proof of dead code or absence of dynamic string/address construction.
- See [Batch06 Run 42854063769](https://github.com/969981/PokeHome_Resources/actions/runs/42854063769).

## Crucial overlay-space correction

`AddressFactory.toAddr(0x...)` was resolving the default address space, while native functions are in the `.text` overlay. Initial reports of no callers for network function addresses were therefore not reliable.

Re-running the read-only probe with explicit `.text::...` addresses in [Run 42854990140](https://github.com/969981/PokeHome_Resources/actions/runs/42854990140) confirmed:

| Ghidra target | Reference source | Reference type | Meaning |
|---|---|---|---|
| `.text::00670d60` | `.text::00655138` | `UNCONDITIONAL_CALL`, `bl 0x00670d60` | Direct call from function `00655114` |
| `.text::00678ee8` | `.text::00678bb0` | `DATA`, `str x9,[x8, #0x280]` | TLS write callback installed inside `00678718` |
| `.text::00678718` | none indexed | `NO_XREF` | No proven direct caller, does not rule out function pointers |

C-code evidence:

- `c/_text__00678718.c` performs `nnsslConnectionCreate`, SSL options/certificate verification, `nnsslConnectionDoHandshakeWithCertBuffer`, and writes the `00678ee8` callback pointer.
- `c/_text__00678ee8.c` invokes `nnsslConnectionWrite` and maps SSL failures to local error codes (`0x51` or `0x17` in that function).
- `c/_text__00674030.c` and `c/_text__0067447c.c` implement proxy handshake logic. Treat these as **generic transport**, not HOME cloud-save state transitions.
- `c/_text__00655114.c` calls `00670d60`, corroborating the direct BL edge above.

All C paths are under `derived/4.1.0/Ghidra_12.2_Run_42763137320/` and are Ghidra pseudocode, not original source.

## Region-entry call scan (read-only follow-up)

[Run 42855464229](https://github.com/969981/PokeHome_Resources/actions/runs/42855464229) succeeded. The scoped probe examined 915 Ghidra functions in the candidate `.text::0064C000–0068FFFF` region and recovered 302 direct cross-region call edges, 0 cross-region data refs. All 302 edges were included in the TSV (the script's 400-row cap did not truncate this pass).

**This is not 302 HTTP/Box operations.** The region deliberately overapproximates transport and includes shared allocation, object management and destructors.

- 36 incoming calls to `.text::0064C260` merely call a function returning global `DAT_00C5F590`; the Box-manager init function `.text::00325490` is one caller. This is not evidence of a save request.
- 20 incoming calls to `.text::0068D884` originate from repeated cleanup in `.text::00161070` (many object fields); they do not by themselves identify HTTP.
- `.text::003E93D4 → .text::0068BB40` is a direct cross-region call, but the destination body is container/data-object handling and is not a proven HTTP sender.

**Next filter:** begin with request-body construction / URL binding, classify call targets by actual decompiled code, then trace only the corresponding callbacks and upward owners. Do not infer a network save from address-range overlap or a generic helper call.

## Continuing evidence gates

1. **Network boundary:** enumerate incoming direct calls and callback/data pointers crossing into the candidate transport region `.text::0064C000–0068FFFF`. Region membership alone is not a reliable business classification.
2. **HTTP request construction:** locate code filling URL, HTTP method, body and response handlers; distinguish generic HTTP libraries from HOME-specific `/api/box/operation` requests.
3. **Tracker serialization:** establish byte-accurate provenance from the `0x965248` / `0x960AD0` collections to the actual request body, not merely a similarly named cache.
4. **Response/ACK:** verify response status and error mapping; trace retry/rollback and any success-only changes to Dirty Count.
5. **Runtime read-only verification:** perform successful and failed save trials, recording pre/post Tracker, dirty list/count, queued request state, and callbacks (without logging credentials or account secrets).

Current evidence is limited to static native analysis. No server save, response outcome, or runtime persistence parity has been demonstrated.
