# Pokémon HOME Android 4.1.0 — Hidden register endpoint and target-UTID audit (2026-10-13)

Static-only reverse engineering of the verified APK; no HTTP registration/deletion, server access, or live account tests were performed.

## What was searched

- APK SHA-256: `8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`.
- IL2CPP Metadata v31: 16,115 types, 65,783 fields, 103,238 methods and 19,651 string literals.
- Android ARM64 `libil2cpp.so`: registration, authentication, login, and user-deletion methods revalidated.

| Client schema | Business fields | Finding |
|---|---|---|
| `ApiAuthRegisterUserRequestParam` | `csrf,state,nonce,lng,cntry,said` | No `utid` or target trainer ID |
| `ApiAuthRegisterUserResponseParam` | `uuid,apRes,naRes` | No directly returned `utid` |
| `ApiCreateTokenRequestParam` | `uuid,tmVer,wvVer,con` | Session/bootstrap, not a user-selected trainer ID |
| `ApiLoginRequestParam` | `csrf,udVer,llgt,rl,ntk` | `udVer` is not `utid` |
| `ApiNauthTakeOverCheckRequestParam` | `state,nonce,newg,birth` | Account takeover/association, no target UTID |
| `ApiNauthTakeOverCheckResponseParam` | `uuid,apRes,supid,plPP` | `supid` is a separate server-returned field |
| `ApiUserDeleteRequestParam` | `dummy` | Account deletion, no next-ID selector |
| `ApiUserSettingRequestParam` | `uname,ntk,sex,bym,icon,vlng,vlng2,cntry,tds` | Profile settings, not account ID |
| `ApiUserChangeLanguageRequestParam` | `keep,lng,uname` | Language selection only |
| `ApiTrainerDataUpdateRequestParam` | `uptd,deltd` | Trainer data records; not proven to assign account UTID |

### Legacy-looking user creation DTO

The APK includes `ApiCreateUserRequestParam` (`csrf,lng`) and `ApiCreateUserResponseParam` (`uuid,nuri`), plus generated Utf8Json formatters. The metadata has **no `ApiRequestCreateUser` request class**, no application-level method named `CreateUser`, and no literal `/auth/create/user`. This is **not evidence of a working hidden user-creation API**; it may be leftover protocol material.

The identified authentication path literals are `/auth/create/token`, `/auth/create/login`, and `/auth/register/user`. Some debug DTOs contain a `uid` field; their presence does not establish an authorized account-ID setter or imply `uid == utid`.

### Native call-chain checks

- `ApiManagerLogin.AtuhRegisterUser = 0x1D2F8DC`; invokes register request construction and hands control to the usual token flow.
- `ApiRequestAuthRegisterUser.SerializeRequestParameter = 0x1D334A4`, `CallAfterResponse = 0x1D33294`; handles request fields and returned UUID, not a client-chosen UTID.
- `ResponseParamCommon.basic(+0x18)` → `0x1D2BA64 BL UDManager.SetBasic(0x1D763D0)` → `UD_Basic.utid(+0xF0)` is an inbound profile/ID copy, not local ID generation.

**Conclusion:** No exposed request field or recovered production client call path can specify a desired server UTID. This is a scoped negative finding from the shipped Android client, **not proof that undocumented server-side allocation code cannot exist**.

For repeated ID assignment, first verify with a small number of authorized test-account lifecycles that the official delete action truly produces a new cloud user and distinct fresh-login UTID. Replaying the same registration payload is not a new user-creation event. Observe privacy-masked UUID and UTID; do not repeatedly submit unauthorized authentication requests or bypass service limits.
