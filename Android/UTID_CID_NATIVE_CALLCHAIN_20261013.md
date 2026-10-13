# Android HOME 4.1.0 — UTID inbound call-chain evidence (2026-10-13)

## Scope and provenance

APK SHA-256 `8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`; `libil2cpp.so` SHA-256 `80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe`. All addresses below are **Android arm64 libil2cpp.so RVA**, not Nintendo Switch `main` addresses. This pass re-opened the original local ELF and decoded AArch64 instructions, including an independent whole-executable-segment direct `BL` cross-reference scan.

## Newly independently closed: server basic profile -> SetBasic inbound call edge

One direct AArch64 `BL` target to `UDManager.SetBasic` (`0x1D763D0`) occurs at exactly `0x1D2BA64` in the entire executable LOAD segment (`0x0192A5E0..0x042CF4A0`).

```asm
0x1D2BA3C  LDR W0,[X21,#0x120] ; ResponseParamCommon.budv, ancillary
0x1D2BA60  LDR X0,[X21,#0x18]  ; ResponseParamCommon.basic
0x1D2BA64  BL  0x1D763D0      ; UDManager.SetBasic
0x1D2BA68  AND W19,W19,W0      ; aggregate result
0x1D2BA74  LDR X0,[X21,#0x28]  ; next response section
0x1D2BA78  BL  0x1D79D5C
```

This establishes an actual response-object field read and direct managed-profile call, not merely a metadata method name.

## Newly independently closed: SetBasic performs copy, not allocation of utid

```asm
0x1D76BF8  LDR X8,[X19,#0xF0] ; source UD_Basic.utid (metadata offset +F0)
0x1D76BFC  CBZ X8,0x1D76C2C  ; null skips update
...
0x1D76C1C  LDR X1,[X19,#0xF0] ; input utid
0x1D76C20  STR X1,[X0,#0xF0]! ; persisted UD_Basic.utid
0x1D76C24  BL  0x1B23A14      ; write barrier
```

Hence in this managed model the `+0xF0` member is loaded/stored as an **8-byte reference**, with null-based gating and the managed write barrier; it is **not** visibly a locally generated 32-bit random integer here. A native `uint32` interpretation of this Android field would therefore be wrong absent a converter or further type evidence. The Switch `/basic/utid` parsing into its own numeric manager storage is a separate platform representation; do not silently assume the representations are identical.

## Registration request/callback boundary

- `ApiRequestAuthRegisterUser.SerializeRequestParameter = 0x1D334A4`; metadata DTO has `csrf,state,nonce,lng,cntry,said` but no direct `utid/cid`.
- `ApiRequestAuthRegisterUser.CallAfterResponse = 0x1D33294`; code branches on HTTP 200 and tests the response's `+0x128` reference via `0x3610B64`, rather than implementing a visible `utid` generator.
- `ApiRequestChampTransferAccount.CallAfterResponse = 0x1D345E8`; `0x1D3479C: LDR X1,[X19,#0x140]`, `0x1D347A0: STR X1,[X20,#0xA8]!` transfers response `cid` into client `ResponseSupportId` exactly.

## What this does not prove

The 2026-10-13 native disassembly **directly proves** `ResponseParamCommon.basic -> SetBasic -> UD_Basic.utid` as a receive/copy path, and independently corroborates the separate CID receive path. It **does not prove** whether the backend's account UTID/CID allocation uses RNG, incremental counters, server database keys, deterministic hashing, or other logic. Client-side source cannot reveal a proprietary server implementation that is absent from the APK.

To locate *first receipt in a new account session*, capture a consenting test account's read-only registration response, first /auth/create/login response, and first /api/champ/transfer/account response; correlate the exact request/session identity, `ResponseParamCommon.basic.utid` value, and `cid` without attempting to replay or overwrite an account.

## Minimal reproducibility

```bash
# ELF: /Android/4.1.0/Raw/lib/arm64-v8a/libil2cpp.so
llvm-objdump -d --start-address=0x1d2ba3c --stop-address=0x1d2ba80 libil2cpp.so
llvm-objdump -d --start-address=0x1d76bf4 --stop-address=0x1d76c30 libil2cpp.so
llvm-objdump -d --start-address=0x1d34798 --stop-address=0x1d347a8 libil2cpp.so
```
