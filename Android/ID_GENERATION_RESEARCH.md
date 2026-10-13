# Pokémon HOME Android 4.1.0 — registration, UTID, CID and ID-generation hypothesis

**Evidence scope:** Reassessment of previously archived ARM64 IL2CPP 4.1.0 static results from the user's existing research repository; no newly executed APK analysis, no backend source, no production enrollment test. Native RVAs are relative to `libil2cpp.so` in the **specific SHA-256-matched 4.1.0 build**.

## 1. Which “ID”?

| Symbol | Business domain | Confirmed client data flow | Interpretation |
|---|---|---|---|
| `UD_Basic.utid` | basic profile | Android 4.1.0 managed instance `+0xF0`; `UDManager.SetBasic` at RVA `0x1D763D0` | 32-bit trainer/profile ID; not CID |
| `UD_Basic.supid` | basic profile | managed instance `+0x60` | Separate support-like field; equivalence with CID is **not** shown |
| `ApiChampTransferAccountResponseParam.cid` | transfer-account response | managed field `+0x140` | string-like account/transfer support ID |
| `ApiRequestChampTransferAccount.ResponseSupportId` | transfer-account view | destination `+0xA8` at `CallAfterResponse` RVA `0x1D345E8` | explicitly copied from `response.cid`; **not generated here** |

Native instruction pair preserved in earlier analysis:

```asm
LDR X1,[X19,#0x140]  ; response.cid
STR X1,[X20,#0xA8]! ; ResponseSupportId
```

The transfer-account request DTO has only `dummy +0x10`; it has no `cid`, `utid`, or `supportId` field in the identified *business DTO*. A request may still have a common session/authentication envelope.

## 2. Registration / first disclosure

| Entry | Android 4.1.0 static anchor | Why it matters |
|---|---|---|
| `ApiRequestAuthRegisterUser.CallAfterResponse` | `0x1D33294` | registration response handler |
| `ApiRequestAuthRegisterUser.SerializeRequestParameter` | `0x1D334A4` | recorded DTO: `csrf/state/nonce/lng/cntry/said`, **not** a client-chosen UTID/CID |
| `ApiAuthRegisterUserRequestParamFormatter.Serialize` | `0x205AEF0` | serialization review point |
| `ApiAuthRegisterUserResponseParamFormatter.Deserialize` | `0x205DA3C` | registration response review point |
| `UDManager.SetBasic` | `0x1D763D0` | consumer of server-returned basic profile |
| `ApiRequestChampTransferAccount.CallAfterResponse` | `0x1D345E8` | transfer CID response-field handoff |
| `ApiChampTransferAccountResponseParamFormatter.Deserialize` | `0x207F920` | CID response deserialization candidate |

**Important:** Android 4.1.0 request-field list above is evidence from the archived ARM64 method mapping, not the Switch registration JSON payload. The Switch 4.1.0 registration pathway and the mobile one have different implementation/envelope details; do **not** paste Switch `csrf,nsa,state,code,id_token,lng` as an Android request DTO.

On Switch 4.1.0, independently archived login state-machine research places `/auth/register/user` at `main+0x213B4C`, `/auth/create/login` near `main+0x213D64`, and profile parser at `main+0x2164CC` (where `/basic/utid` is read). These are **Switch ELF RVAs, not Android libil2cpp.so RVAs**.

## 3. What we can and cannot claim about the creation algorithm

Supported observations:
1. The identified client registration DTO does not expose a field for selecting the final `utid`/`cid`.
2. `UDManager.SetBasic` consumes the basic profile; CID is read from the transfer-account response DTO.
3. The best-supported working model is **server-owned identity assignment/binding**, with Android consuming returned values.

**Not proven:** the backend's random-number generator, database allocator, hash/sequence design, when allocation occurs, the probability of a chosen ID, or whether an account recreation gets new identifiers. Server-first disclosure does **not** prove the exact server allocation instant. Local nonce/state creation is for protocol state and must not be mislabeled an ID generator.

**Number formatting is not number generation.** For the usual 32-bit Pokémon trainer ID interpretation (validate semantic applicability before displaying as a HOME identifier):

```python
tid16 = utid & 0xffff
sid16 = (utid >> 16) & 0xffff
tid7  = utid % 1_000_000
sid7  = utid // 1_000_000
```

This is a representation of an **existing** `utid`, not an implementation of creating it.

## 4. Next evidence to close the chain

1. Reproduce the exact APK extraction, key SHA-256s and Unity metadata v31 mappings.
2. Reopen Android `ApiRequestAuthRegisterUser.SerializeRequestParameter`, response formatter/deserializer and `CallAfterResponse`; classify every ID-like source as **local / request / response / persistent state**.
3. Trace `ApiManager` common-response dispatch → `ResponseParamCommon.basic` → `UDManager.SetBasic` and identify first write to `UD_Basic.utid`.
4. Trace transfer-account response JSON `cid` → response field `+0x140` → `ResponseSupportId+0xA8` → UI.
5. For an **authorized disposable account only**, record protocol event names, timestamp and whether a field is absent/present, without collecting credentials or actual account identifiers. Separate first disclosure from creation; do not replay, alter or automate destructive registration/deletion traffic.
6. Record cases separately for mobile guest HOME and Nintendo-linked HOME; they are not equivalent identity lifecycles.

### Static audit status

| Question | Status |
|---|---|
| Exact target APK fingerprints | archived documented |
| Android 4.1.0 native DTO field anchors | archived documented |
| CID copied from response into UI support field | archived instruction-level |
| Complete Android registration caller/consumer chain | incomplete |
| First fresh login after registration, response attribution | untested |
| Backend UTID/CID generation algorithm | unknown |
| Full local unpack / REA execution in this change | **not performed (APK unavailable)** |

## Primary existing source materials

- [111: Android 4.1.0 IL2CPP field offsets/method RVA reconstruction](https://github.com/969981/HOME-Live-Plugin-CHS/blob/home-core-editor/docs/pokemon_home_reverse/4.1.0/111_home_4_1_0_android_il2cpp_layout_rva_reconstruction.md)
- [109: 4.0.3 → 4.1.0 APK semantic diff](https://github.com/969981/HOME-Live-Plugin-CHS/blob/home-core-editor/docs/pokemon_home_reverse/4.1.0/109_home_4_1_0_android_apk_semantic_diff_and_il2cpp_rebuild_plan.md)
- [157: Switch 4.1.0 registration state machine](https://github.com/969981/HOME-Live-Plugin-CHS/blob/home-core-editor/docs/pokemon_home_reverse/4.1.0/157_home_4_1_0_auth_registration_linked_account_reset_reenrollment_elf_audit.md)
- [158: Android 4.1.0 native metadata and request DTO audit](https://github.com/969981/HOME-Live-Plugin-CHS/blob/home-core-editor/docs/pokemon_home_reverse/4.1.0/158_home_android_4_1_0_user_delete_api_native_elf_and_switch_boundary.md)
- [REA's actual Android provider contract](https://github.com/morluto/rea/blob/main/docs/android-analysis.md)
