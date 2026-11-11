# HOME Switch 4.1.0 — Batch13 real guest read-only commit/failure observation protocol

> **CURRENT STATUS: READY FOR GUEST, NO LIVE SWITCH GUEST CONNECTED.**
> GitHub Actions can statically verify the original ELF and simulate Python/GDB events, but GitHub-hosted Ubuntu runners cannot by themselves operate the user's Switch HOME process or reproduce remote application ACK. Do not label CI success as a successful online save.

## Artifacts and frozen original

- [Batch13 source scanner](../tools/ghidra/home41_batch13_detail_callsite_scan.py).
- [Guest hardware-breakpoint observer](../tools/home41_switch_guest_observer.py).
- [JSONL safety and interpretation validator](../tools/home41_switch_trace_validate.py).
- [Offline validator tests](../tools/test_home41_switch_trace_validate.py) and [GDB shim tests](../tools/test_home41_switch_guest_observer.py).
- [GitHub workflow](../.github/workflows/home41-batch13-runtime-observer.yml) produces **only static parser XREF evidence plus offline test results**.
- Immutable original `main.elf` SHA-256: `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`.
- Ghidra IMAGE_BASE is `0x100000`. A guest breakpoint is set at **`guest_main_base + (Ghidra_VA - 0x100000)`**. Never add the Ghidra VA directly to the guest main address.

## 1. Newly verified parser hook sites

Batch13's immutable ELF scanner found one direct `/detail` reference and the corresponding numeric-parse callsite:

| Ghidra VA | Verified original evidence |
|---|---|
| `0x34E7E4` / `0x34E7E8` | ADRP + ADD forms the `/detail` pointer `0x710FB3` |
| `0x34E808` | BL `0x317E00` — response path lookup |
| `0x34E814` | BL `0x6F6630` — numeric conversion (`atoi`) on result of `/detail` lookup |
| `0x34CB78` | Response parser return in W0, before store into Box request stage result |
| `0x34E51C` | State 8 write; asynchronous completion candidate |
| `0x34CBF8` | State 8 object vtable method slot 0 |
| `0x34D2F4` | State 10 object vtable method slot +8 |
| `0x34DBA4` | Original Dirty Count read |
| `0x34DD74` | Original Dirty Count clear |
| `0x34CC48` | Local Box compare return in W0 |

The observer **reads only the numeric string passed to `atoi`**, and records the integer, not the decrypted response body. The `/detail` hook only runs if that particular lookup succeeded and invoked numeric conversion. Its absence means “not observed”, *not* “detail field missing”.

## 2. Preconditions for a real execution

1. Use a **separate authorized disposable HOME test environment** and backups; never disrupt saving of valuable Pokémon/production account data. The hardware observer is not a transactional backup or protection against interruption.
2. Start a Switch 4.1.0 guest that exposes **real AArch64 guest registers and memory over a working GDB remote stub**. An Android HOME emulator/IL2CPP Frida agent or host-only JIT debugger does not satisfy this prerequisite.
3. Obtain the guest's **actual mapped `main` module base** from the guest debugger/module map. Do not guess it from a different version, the ELF image base, or a host process address.
4. Verify `main_base + (0x710FB3 - 0x100000)` contains the eight bytes `/detail\0`. The script checks this and checks pinned opcode canaries before installing any breakpoints.
5. The remote GDB stub must genuinely support `Z1`/hardware execution breakpoints. This script **never falls back to software breakpoints, memory patches, function calls, code injection, traffic injection or modified server responses**. A debugger that falsely emulates hardware breakpoints by patching guest memory violates this requirement and must not be used.

### Linux/WSL GDB launch

Substitute a **real** guest main base and GDB server address. `PORT` is a placeholder, not a known available emulator service.

```bash
export HOME41_MAIN_BASE=0xACTUAL_GUEST_MAIN_MODULE_BASE
export HOME41_CASE=normal
export HOME41_GROUP=core
export HOME41_OUTPUT="$PWD/home41_normal_core.jsonl"

gdb-multiarch -q \
  -ex 'set architecture aarch64' \
  -ex 'target remote 127.0.0.1:PORT' \
  -ex 'source -s python tools/home41_switch_guest_observer.py'
```

Once the observer says “ready”, invoke `continue` and conduct **only one** test save. Stop GDB with Ctrl-C when stable, then execute `home41-stop` to remove breakpoints, flush the trace and close the file. A breakpoint observer can delay threads and influence network timing; always record whether it affected your test.

### Hardware breakpoint grouping

Some targets support only four hardware execution breakpoints simultaneously. The default `core` group uses **four**, while `all` may exceed a target's capacity and fail safely.

| `HOME41_GROUP` | What it records | Breakpoints |
|---|---|---|
| `core` | Parser entry, `/detail` numeric value, parser return and state 8 write | 4 |
| `states` | State 7/8/9/10/4 writes and local stage counter transition | 5 |
| `callbacks` | Actual state-8 and state-10 object/vptr/callee, slot comparison and LR | 2 |
| `dirty` | Dirty Count and list hash at original read, before and after local clear | 3 |
| `reconcile` | Flags `+0x964/+0x965`, actual local copy call and Box comparison result | 3 |
| `transport` | Transport completion callback entry and shared state-7 entry | 2 |
| `all` | All of the above (only if guest supports enough hardware slots) | Many |

Do not claim a causal link between two different transactions simply because their logs are from different breakpoint groups. For a single-transaction proof, either use `all` if supported **or** gather several *separately marked* test runs with their own independent readback, and report the limitation.

## 3. Two controlled scenarios

**Scenario A: normal Commit.** On the disposable test environment, initiate one ordinary Box change and a normal save. Let the request run without interference. Observe:

- Stage counter `+0x0C` (precommit=4 / commit=6), actual Box `+0x14` state transitions, transport `+0x08/+0xB0/+0xB8`.
- Was `/detail` numerically parsed? What exact integer was returned at the `0x34E814` atoi hook?
- Did `0x34CB78` report zero with `stage+0x04=0`? Was state 8 written at `0x34E51C`? Was vtable slot 0 invoked?
- After the server response and a **clean restart**, independently check whether the test Box content can be read back. That independent observation is separate from the debugger trace.

**Scenario B: controlled network failure.** On a *different disposable* test session with a known backed-up baseline, deliberately make the emulator's network unavailable **at a documented point** (before save, after precommit, or during commit). Never edit saved records or rewrite HTTP responses, and do not attempt this on a production account. Capture the same fields and exact timing of the network change. A network outage before `/commit` is not a failed server commit ACK; label the phase precisely.

- Note whether the generic transport returns error/non-200 and whether any `/detail` numeric parsing happens.
- Record **Dirty Count before request staging**, at local clear, after the failure and after cold restart. Distinguish a cleared live queue from the captured staging buffer, any requeue, and actual content restored/read back.
- Observe flags `+0x964/+0x965`, `0x322470` copy invocation, `0x322870` compare result, and whether state 10 invokes callback slot +8.
- Do not classify recovery successful solely from `Dirty Count > 0` or a Box comparison; require independent test-data readback.

## 4. Trace validation — no false cloud success

The observer produces local `.jsonl` files (private, not automatically uploaded). Run:

```bash
python tools/home41_switch_trace_validate.py \
  --trace home41_normal_core.jsonl home41_failure_core.jsonl \
  --out home41_trial_summary.json
```

This validates the schema, rejects unexpected/sensitive fields, checks source/revision markers and summarizes observations by **actual session**, without merging unrelated attempts.

```bash
python tools/home41_switch_trace_validate.py --out home41_no_guest_status.json
```

Without input traces, the result is precisely `UNVERIFIED_NO_GUEST_TRACE`. Even with trace events indicating `/detail=0` and state 8 entered, `application_ack_verified`, `remote_persistence_verified` and `dirty_failure_recovery_verified` remain `false`. The script intentionally **does not convert an HTTP/business-stage marker into a durable storage guarantee**.

Raw read-only guest traces can contain live pointer addresses, result codes and event timing. Store them locally and do not publish them to GitHub until they have been reviewed for privacy. Never log credentials, cookies, encryption keys, Pokémon contents, complete decrypted payloads or response bodies.

## 5. Completion gates

| Evidence | Current status |
|---|---|
| Native `/detail` getter + `atoi` exact instruction sites | **STATIC VERIFIED** |
| Read-only GDB instrumentation source | **WRITTEN** |
| Python schema validator and synthetic GDB behavior | **CI TESTED** |
| Real normal `/commit` trace with actual `/detail` | **NOT OBSERVED** |
| Real controllable failed-commit trace | **NOT OBSERVED** |
| Live state 8/10 vtable targets | **NOT OBSERVED** |
| Dirty recovery and clean-restart readback | **NOT OBSERVED** |
| Server durable commit ACK | **NOT VERIFIED** |

An observed numeric `/detail=0` with stage-6 completion remains a **business-stage-success candidate**, not final cloud commit proof until tested with remote readback and failure/retry cases.
