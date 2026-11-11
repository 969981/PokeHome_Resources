# Pokémon HOME 4.1.0 — Batch10 native jump tables, Box state transitions and callback boundary

> **STATIC PARTIAL (2026-11-11). Not a server ACK, cloud-save success, or verified failure rollback.**
> All addresses below are **Ghidra VA** with image base `0x100000`; subtract that base for the raw ELF RVA.

## Reproducibility and immutable inputs

- Branch: `4.1.0`.
- Verified original `main.elf` SHA-256: `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`.
- Source: [`tools/ghidra/home41_batch10_dispatch_audit.py`](../tools/ghidra/home41_batch10_dispatch_audit.py), using the established Batch07 ELF parser and Batch09 CFG decoder.
- **Latest successful verification:** [Batch10 Run 42936911077](https://github.com/969981/PokeHome_Resources/actions/runs/42936911077), including syntax, synthetic instruction tests, real ELF SHA, 11/6 case bounds and all 28 Box indirect sites.
- Downloadable small evidence: [HOME41-Batch10-Dispatch-Callback-Audit](https://github.com/969981/PokeHome_Resources/actions/runs/42936911077/artifacts/13818134520) (`dispatch_audit.json`, `summary.log`, `box_state_original_fde.bin`, `gate_original_fde.bin`).
- No full Ghidra analysis was rerun. Original ELF, original Ghidra database, published C files and SQLite shards were not modified.

## 1. Exact six-case global state gate at 0x325D10

The native machine code reads an application-global word at `0x8EF050`, subtracts one, checks that the resulting unsigned value is at most five, then indexes a byte displacement table at `0x734BF2`.

- Table bytes: `00 05 08 0B 0E 11`; branch base: `0x325D3C`.
- Global values 1–6 dispatch to `0x325D3C`, `0x325D50`, `0x325D5C`, `0x325D68`, `0x325D74`, `0x325D80`.
- Other values use `0x325D48`.
- **No verified interprocedural edge makes this a Box-specific server ACK state gate.** Use the neutral name `global_six_state_gate_candidate`.

## 2. Exact eleven-case Box SaveRequest switch at 0x34C470

The entry reads `w8 = *(uint32_t *)(x0+0x14)`, rejects state values above 10, and branches via an unsigned halfword table using `ldrh w12,[x9,x8,lsl #1]`, `add x11,x11,x12,lsl #2`, `br x11`.

- Raw halfword table Ghidra VA: **`0x734CE0`**.
- Raw bytes: `00000500e600eb00f300420148019601ad01ca01ce01`.
- Branch base VA: `0x34C4E4`.
- Each case is an exact `uint16_t` table entry (little endian) multiplied by four.

| State | Real branch entry | Direct static CFG distinction |
|---|---|---|
| 0 | `0x34C4E4` | Initial short path to state-related common code |
| 1 | `0x34C4F8` | Dirty records / encoding / Count clear; transport setup candidate |
| 2 | `0x34C87C` | Distinct state entry |
| 3 | `0x34C890` | Can reach state-4 write site |
| 4 | `0x34C8B0` | `/api/box/operation/precommit` formatting |
| 5 | `0x34C9EC` | Distinct state entry |
| 6 | `0x34CA04` | `/api/box/operation/commit` formatting and commit-wait label |
| 7 | `0x34CB3C` | Branches that can write states 8/9 |
| 8 | `0x34CB98` | Distinct state entry |
| 9 | `0x34CC0C` | Distinct state entry |
| 10 | `0x34CC1C` | Distinct state entry |

These are **true switch destinations** and static branch reachability results. No case has yet been labeled `ACK_SUCCESS`, `FAILED`, `RETRY`, or `ROLLBACK` because result decoding and condition values are not proven.

## 3. Dirty staging can precede transport setup

At `0x34DBA4`, the Box Manager `+0x93498` Dirty Count is read. An entry of the `+0x7FC18` qword Tracker list is read at `0x34DBE0`. Records are resolved and encoded; `0x34DD54` calls the record encoder, `0x34DD64` the `memcpy` thunk, and `0x34DD74` performs the real Count reset.

The bounded Batch10 direct CFG has:

- **State 1 entry `0x34C4F8` → Dirty Count clear `0x34DD74`**: one conservatively modeled route exists.
- **State 1 entry → transfer-object setup call `0x34E3D0`**: one conservatively modeled route exists.
- **`0x34DD74` → `0x34E3D0`**: shortest modeled direct path is **97 instruction edges**, confirmed in Run 42936911077.
- At `0x34E3D0`, the caller invokes `0x64B5B0` and tests its result bit; this is transport setup, **not the underlying HTTP send or remote acceptance**.

Implication: a queue/snapshot-first architecture is plausible. This is *not* proof that user changes are lost on transport failure; the buffer ownership, retry path and resubmission mechanism remain open. Nor is the local Dirty Count clear a cloud persistence marker.

## 4. Candidate state-field writes

These are verified native instructions in the same recovered FDE, with the source immediate only when visible in the local basic block:

| Native instruction | Write | Immediate/source |
|---|---|---|
| `0x34CB90` | `str w8,[x19,#0x14]` | preceding `mov w8,#9` |
| `0x34D208` | `str w8,[x19,#0x14]` | preceding `mov w8,#4` |
| `0x34D234` | `str w8,[x20,#0x14]` | preceding `mov w8,#10` |
| `0x34E4A8` | `str w8,[x9,#0x14]` | preceding `mov w8,#9`; `x9` loaded from saved object pointer |
| `0x34E51C` | `str w8,[x19,#0x14]` | preceding `mov w8,#8` |
| `0x34E500` | `str w8,[x19,#0x14]` | value is branch/context dependent; do not invent an immediate |

A static path from state 3 to the state-4 assignment supports a **transition candidate** into the precommit case. State 7 has paths to the state-8 and state-9 stores. Branch feasibility, input status and dynamic owner must be verified before classifying success or error transitions.

## 5. Virtual dispatch and generic network completion are distinct layers

- The raw pointer slot `0x87F4D0` contains the `0x34C470` function pointer in a **vtable-shaped group**. This establishes an address-taken dispatch candidate, not its C++ class name or constructor.
- The Box FDE has **27 BLR** callsites and **one BR** (the latter now fully resolved to the 11-case state table).
- All 27 BLR site-local target-register producers are `LDR x8,[x8,#immediate]`: **21 at +0x18**, **4 at +0x10**, **1 at +0x00**, **1 at +0x08**. The `x8` object/virtual-table base is not yet proven for these callsites; many may be shared cleanup methods, not server response callbacks.
- Published `c/_text__0064b5b0.c` installs **`0x64BB9C`** as a generic transport callback into a transfer-object member at offset `+0x370`; the generated callback also writes several companion handler pointers nearby.
- Published `c/_text__0064bb9c.c` retrieves a transport result and response metadata, then performs transport cleanup. This is **stronger than a mere string label**, but it is **not** a demonstrated HOME application-level ACK or a Dirty-clear invocation.
- Published `c/_text__0064bae4.c` returns `param_1+0xB0`, a result-field accessor. Its Box callsites and downstream result tests are promising callback-to-state-machine gates, but must be resolved with dataflow and branch conditions.

## Remaining acceptance gates

1. Identify the actual HTTP transfer submission site, its exact request/response buffers, response status and retryable vs terminal result classification.
2. From transport completion `0x64BB9C`, trace the consumer of `param_1+8` / the derived result field through Box's `0x64BAE4` polling/checking callsites into *specific state transitions*.
3. Verify server application response/ACK independently of curl-like transfer completion; then determine whether the application clears, requeues, retains, or reconstructs Dirty entries on failure.
4. Perform read-only successful/failed-save observations on a controlled guest. Capture only state numbers, result codes, Dirty Count/list hash, request/response sizes and commit phase; no credentials/tokens/account identifiers.

**Interpretation discipline:** `STAGED_TO_BUFFER`, `TRANSPORT_SUBMITTED`, `TRANSPORT_COMPLETED`, `APPLICATION_ACKED`, and `DIRTY_RECONCILED` are separate evidence levels. Never infer the next from the previous.
