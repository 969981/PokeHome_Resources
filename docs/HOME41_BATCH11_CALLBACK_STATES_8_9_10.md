# HOME Switch 4.1.0 — Batch11 states 8/9/10 and transport callback → Box +0x14

> **Status: STATIC EVIDENCE LINKED / SERVER APPLICATION ACK STILL OPEN.**
> Date: 2026-11-11 (Asia/Singapore). Evidence is from immutable original AArch64 ELF and already published Ghidra C. Addresses below are **Ghidra VA** (ELF RVA + 0x100000), not live main-relative offsets.

## Verified execution

- Original main.elf SHA-256: `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`.
- Latest verified [Batch11 Actions #42939898100](https://github.com/969981/PokeHome_Resources/actions/runs/42939898100) **success**, including published C cross-checks for 13 native functions.
- [Repeatable script](../tools/ghidra/home41_batch11_callback_state_audit.py) and [CI workflow](../.github/workflows/home41-batch11-callback-state.yml).
- [Raw bounded evidence artifact](https://github.com/969981/PokeHome_Resources/actions/runs/42939898100/artifacts/13820650673) — `box_callback_state_evidence.json` and `summary.log`.
- No full Ghidra rerun; no change to ELF, Ghidra project, previously published per-function C or split SQLite.

## 1. Callback writes three different transport-level fields

`0x64B5B0` installs the `0x64BB9C` generic transfer completion callback at transfer member `+0x370`. Published `c/_text__0064bb9c.c` does the following:

1. Retrieve a transfer result with `0x64ED8C`, store it at **transport +0x08**.
2. If that result is zero, call a libcurl getinfo-like wrapper `0x64EF64` with option **`0x200002`**, writing into **transport +0xB8** (`param_1+0x17` in qword-typed C).
3. On the other path, map an error with `0x64BB00` and store it at **transport +0xB0** (`param_1+0x16`).

The libcurl header assigns `CURLINFO_LONG = 0x200000` and `CURLINFO_RESPONSE_CODE = CURLINFO_LONG + 2`, matching `0x200002`. It means **HTTP response code**, not HOME cloud-save application ACK:
- https://android.googlesource.com/platform/external/curl/+/588f576a932eef912ecc11cdf23b781b18678ae1/include/curl/curl.h
- https://curl.se/libcurl/c/CURLINFO_RESPONSE_CODE.html

The published native accessors distinguish these fields:
- `0x64BA4C`: an outstanding transfer handle may still be pending.
- `0x64BAB8`: returns true exactly when transport `+0x08 == 0` **and** `+0xB0 == 0`.
- `0x64BAD0`: returns the response buffer object at transport `+0x58` when not pending.
- `0x64BAEC`: returns the HTTP response-code word at transport `+0xB8` when not pending.
- `0x64BAE4`: returns transport `+0xB0`, a pointer to the local error/status field; it is **not** an ACK parser.

## 2. Same transport object used by the Box SaveRequest state 7 and response decoder

The original `0x34C470` switch has `state = *(u32*)(box_request+0x14)`, dispatching eleven cases `0..10`.

In state 7 `0x34CB3C`, the native code constructs **box_request +0x2FF2420**, passing it to these exact directly called functions in order:

| Ghidra VA | Callee | Effect |
|---|---|---|
| `0x34CB4C` | `0x64BA4C` | Pending handle check |
| `0x34CB58` | `0x64BAB8` | Both local transport errors zero |
| `0x34CB64` | `0x64BAD0` | Response buffer available |
| `0x34CB74` | `0x34E638` | Application response decode / parse, supplied the **Box request base**, not the transport pointer |
| `0x34CB78` | local store | Store decoder return into **request+0x3941478** (`stage+0x08`) |

Published `c/_text__0034e638.c` uses `param_1+0x2FF2420` (same transfer object), calls `0x64BAEC` to obtain the HTTP code, calls `0x64BAD0` to get the response, decrypts via `0x317C34` (AES-128-CBC wrapper), parses structured response fields, and returns `iVar1` (initially the HTTP response code, but it may be changed in business-validation branches).

A particular validation-failure path assigns **request+0x3941474 = 30000** and `iVar1=0`. Therefore distinguish:
- `stage+0x04` (request `+0x3941474`): application/parser-specific result or error;
- `stage+0x08` (request `+0x3941478`): decoder result (derived from HTTP response code unless altered);
- `stage+0x0C` (request `+0x394147C`): later incremented request-stage counter.

**No numeric HTTP status, even 200, proves the server has durably applied a Box operation.**

## 3. Exact response-driven Box state updates

The Batch11 script checks original 32-bit opcodes, exact BL targets, exact conditional destinations and conservative CFG reachability.

| Condition at state 7 | Exact branch | Result |
|---|---|---|
| Transfer still pending | `0x34CB50: TBNZ w0,#0 → 0x34CC04` | Return 0 this invocation; still pending, not necessarily failed |
| `0x64BAB8` returns false | `0x34CB5C: TBZ → 0x34D254` | Log/result path leading to common `+0x14 = 9` store `0x34E4A8` |
| Response buffer absent | `0x34CB68: CBZ → 0x34E478` | Another log/result path leading to `0x34E4A8` state-9 store |
| Decoder returns nonzero | `0x34CB7C: CBNZ → 0x34CB88` | `mov w8,#9; str w8,[x19,#0x14]` at `0x34CB90` |
| Decoder zero, but `stage+0x04` nonzero | Fall through `0x34CB80–0x34CB90` | Same state-9 store |
| Decoder zero and `stage+0x04` zero | `0x34CB84: CBZ → 0x34E4D0` | Increment `stage+0x0C` and update request state via `0x34E500`; special path can write state 8 via `0x34E51C` |

The state-7 response path is now a **real byte-level, same-object, static consumer link** from generic transport result fields through HOME's response parser to specific Box `+0x14` state writes. It is not evidence that any particular condition occurred during a live save.

## 4. State 8 — `0x34CB98`: asynchronous cleanup and virtual completion notification candidate

Instruction sequence:
- `0x34CB98: mov x0,xzr`; `0x34CB9C: bl 0x30CC20`.
- `0x34CBA0`: early branch on helper result.
- `0x34CBAC` gets an application-global object, `0x34CBB0: bl 0x29E598`, with another early branch.
- When conditions allow, an object acquired through the request `+0x18/+0x20` or inline `+0x30` is used for `0x34CBF8: blr x8` (vtable slot 0).
- `0x34CBFC` returns 1; `0x34CC04` returns 0 for skipped/pending paths.

Published `0x30CC20` and `0x29E598` check separate asynchronous handle/completion state. `0x29E598` writes its own object field `+0x400090 = 4` or `5`. This must **not** be confused with Box SaveRequest `+0x14` state. State 8 itself has no proven direct write to Box `+0x14` in this local window. It should be called `box_async_completion_notify_candidate`, **not** `commit_ack_success`.

## 5. State 9 — `0x34CC0C`: response result event/notification

- `0x34CC0C: ldr w0,[x25]` reads `stage+0x00`.
- If nonzero, `0x34CC14: bl 0x333080` constructs an event and sets manager `+0x934D4`.
- Otherwise the `0x34CFDC` branch checks `stage+0x04`; nonzero calls `0x3333B0` (also event/flag), zero follows the `0x34D26C` path via `0x3330E0`.
- Several routes join `0x34D284` and clear `stage+0x08`, check request-local flags, and optionally invoke a virtual notification method.

**State 9 can be reached from a nonzero HTTP response code including a successful code, not just an error.** Thus the manager `+0x934D4` flag is best labeled an **event/result notification flag**, not automatically a fatal error or a Dirty Count.

## 6. State 10 — `0x34CC1C`: result emission and reconciliation candidate

- `0x34CC1C`: loads `stage+0x08` into W0.
- `0x34CC20`: W1 = 0; `0x34CC24: bl 0x3330E0` publishes a result/event; published `0x3330E0` sets `BoxManager+0x934D4`.
- `0x34CC2C`: zeroes `stage+0x08`.
- `0x34CC28/38`: checks request flags at `x19+0x965` and `x19+0x964`. Depending on flags, calls `0x326FE0`, `0x322470`, `0x322870` and other helpers.
- `0x322470` published C copies/rebuilds records across 300×30 Box slots. `0x322870` compares corresponding Box records. These are **local reconciliation/copy candidates**. Their runtime use and relationship to remote rollback are not proven.
- The later path invokes an object virtual method, with a stack-local event flag passed as a parameter; this does not prove that the server acknowledged a commit.

Provisional label: `box_result_emit_reconcile_candidate`. **Do not assign `rollback_complete` or `save_success`.**

## 7. What remains open

1. Trace the **contents** of the `/api/box/operation/commit` HTTP response after `0x34E638`: which structured response field constitutes application ACK and how its valid values map to state writes.
2. Record read-only cases for HTTP status 200 / non-200, zero/nonzero `stage+0x04/+0x08`, and Box `+0x14`. Separate each from generic transport completion.
3. Test whether state 8's virtual method is completion UI, request cleanup, or server commit completion; resolve the actual vptr target and dynamic object.
4. Verify whether the Box copy/reconcile functions are triggered by failed submission, successful completion, local restoration or another state condition.
5. Verify Dirty Count and qword list before staging, after staging and after confirmed server application ACK. Without failure/retry trace, no cloud-persistence or safe-requeue conclusion.

The established static chain is:

`0x64BB9C` transport result and HTTP code → `0x64BA4C/0x64BAB8/0x64BAD0` polling → `0x34E638` response decoding → `0x34CB78` stage result → `0x34CB7C/0x34CB84` branch → **Box `+0x14 = 9` or stage progression to 8**.

The **server's application-level commit ACK → actual durable cloud state → Dirty reconcile** remains unproven.
