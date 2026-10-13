# HOME 4.1.0 通过注销→新注册“刷”指定 Trainer ID：请求协议与可行性（2026-10-13）

> 静态证据：Android APK versionCode81 SHA-256 `8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`，`libil2cpp.so` SHA-256 `80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe`，global-metadata v31 SHA-256 `dde114e58c195c44d8261ff00259c2da5dcfd62facad6103ea4b60b77bebb0ad`。Android RVA 与 Switch main RVA 不可混用。**未执行真实申请、注销或服务器请求重放。**

## 需求澄清

需求是“服务器每次**实际创建新 HOME 用户**并发放 ID；不是目标则经官方流程注销这个 HOME 账号，完成必要的注册前置流程，再创建新的 HOME 用户并读回 ID；命中指定 TID7（例：888888）则停止”。

**关键结论：反复 HTTP POST 同一注册请求 != 每次创建新用户**。当前客户端静态证据没有任何接口可以在请求中传目标 `utid`，也没有证据证明服务端同一认证上下文重复申请会返回新的 ID。请求中的 `state,nonce,csrf` 属于认证会话状态；盲目复用、绕过授权或反复删除可能被服务端拒绝、复用旧用户或触发限流。真实协议结果需要自有测试账号、小规模授权实验判断。

## Android 4.1.0 注册请求字段（已经由 Metadata + Native 验证）

Endpoint：`/auth/register/user`（`ApiRequestAuthRegisterUser.get_ApiPath = 0x1D33244`；`SerializeRequestParameter = 0x1D334A4`）。

`ApiAuthRegisterUserRequestParam` TypeDef 2609 的六个字段，顺序与 instance offsets：

| JSON key | Instance offset | Type | 客户端获取/语义 |
|---|---:|---|---|
| `csrf` | `+0x10` | string | 已存在的认证/会话状态，非指定 ID |
| `state` | `+0x18` | string | 当前注册状态；如果相关字段无值可走内置替代值 |
| `nonce` | `+0x20` | string | 当前随机挑战状态；空值可调用 `CreateEmptyNonce` |
| `lng` | `+0x28` | int | 语言设置 |
| `cntry` | `+0x2C` | int | 国家/地区设置 |
| `said` | `+0x30` | string | 额外账户/授权关联字段；**该已观测序列化路径写入 null，尚不能从名称准确确认其业务功能** |

`ApiRequestAuthRegisterUser` 实例字段 `requestState`、`requestNonce`、`requestLanguage`、`requestCountry`、`requestSaid`。直接从原始 Native 的 `0x1D334A4..0x1D335DC` 复核：

```asm
0x1D33550 STR X1,[X0,#0x10]!   ; csrf, from auth static/current object
0x1D33574 LDR X1,[X8]          ; state selected from requestState or fallback
0x1D33578 STR X1,[X0,#0x18]!
0x1D33590 BL  0x1D335E4       ; CreateEmptyNonce, conditional
0x1D3359C LDR X1,[X19,#0x98]  ; requestNonce when present
0x1D335A4 STR X1,[X0,#0x20]!
0x1D335AC LDR D0,[X19,#0xA0]  ; requestLanguage + requestCountry
0x1D335B8 STR XZR,[X0,#0x30]! ; said = null in this path
0x1D335BC STR D0,[X20,#0x28]  ; lng + cntry
0x1D335DC B   0x2739484      ; DTO serializer invocation
```

所示是**内存数据构造**（并非可独立发送的完整原始 HTTP body）；请求仍受公共 envelope、认证、session、版本/签名逻辑约束。公开记录不得包含真实 CSRF、nonce、Bearer、cookie、OAuth/Nintendo `id_token`。

## Android 注册响应没有直接的 UTID

`ApiAuthRegisterUserResponseParam` 包含 `uuid (+0x128), apRes (+0x130), naRes (+0x134)`；`ApiRequestAuthRegisterUser.CallAfterResponse = 0x1D33294` 在 HTTP 200 成功路径保存 typed response 并检查 `uuid`，**它不是已经证明返回 `utid` 的直接入口**。

第一次 `basic` 响应 → native `ApiManager.CallbackResponseHook` → `ResponseParamCommon.basic (+0x18)` → `0x1D2BA64 BL UDManager.SetBasic (0x1D763D0)` → `UD_Basic.utid (+0xF0)`。Android 这个 `utid` 在 metadata 中是 **managed string reference**，`SetBasic` 是对象引用拷贝 + GC write barrier；不是客户端 ID 生成器。

目标条件若为六位 `TID7=888888`，在服务器原始值确认为十进制 32-bit `ID32` 的前提下，判断 `ID32 % 1000000 == 888888`。只有客户端实际回读值符合映射时才算命中，不要比较注册 `uuid` 或 `cid`，也不要用本地内存补丁伪装命中。

## Switch 注册请求与 Android 不同

Switch 4.1.0 `sub_213390` state7 `0x213B4C` 调用 `/auth/register/user`，业务请求参数 `csrf, nsa, state, code, id_token, lng`。后续还要 `/auth/create/token`、`/auth/create/login`、统一 parser `0x2164CC` 才能看到 `/basic/utid`。

Switch 本地 `uuid` 非空时可跳过 state7，走 state8 既有账号 token 路径（分支 RVA `0x2152E0..`；存储 `sub_20D5F0()+0x121D`）。即使 Android 云端账户已被删，Switch 旧本地 UUID 仍可能影响初始化；**更改本地缓存不等于删除云端用户**。

## Android 官方删除路径、何时才能认为有“下一次机会”

Android 4.1.0 `/api/user/delete`：`ApiRequestUserDelete.get_ApiPath = 0x1D44A18`、`SerializeRequestParameter=0x1D44A58`、`CallAfterResponse=0x1D44B34`，DTO `ApiUserDeleteRequestParam` 包含 `dummy`。删除 UI 第三次确认的 native 回调 `0x1E10DF0` 在 `0x1E10E60` 真实构造该请求。

官方删除指引：https://app-ph.pokemon-support.com/hc/zh-cn/articles/34818163611545 。删除是**永久删除 HOME 云端账号**，所有盒子及图鉴数据不可恢复，订阅不会自动停止；清除手机缓存、重新安装、Switch 本地存档并非等价的注销。

官方确认 Android 可在**不绑定 Nintendo Account** 的情况下首次使用：https://app-ph.pokemon-support.com/hc/zh-tw/articles/360058218891 。但若最终需共享 Switch HOME，官方强调应**首次设置就与正确的 Nintendo Account 关联**：https://app-ph.pokemon-support.com/hc/zh-cn/articles/360053177771 。因此 guest 模式刷出来的 Android ID 不代表后续可无损与 Switch 上的目标 Nintendo Account 合并。

## “连续重复申请”可行性：必须先验四个分支

| 操作 | 预期可验证现象 | 目前证明等级 |
|---|---|---|
| 同一次注册回调 HTTP 重试 | 同一个请求状态/同一个用户，或错误/限流，不保证新 ID | 未经实机验证 |
| 同一 HOME 账号退出再登录 | fresh response 读到同一个 `utid` 可作为稳定性基线 | 需实测 |
| 官方永久删除→真正新账号初始化 | 观察新的服务端 `uuid` 与 `basic.utid`；如果复用旧 ID，循环不成立 | 需实测 |
| 已绑定 Nintendo Account 删除→再次关联 | 观察服务端是否允许同一 Nintendo 身份重新创建；是否解绑由后端控制 | 有外部成功个案但并非保证 |

如果原始 ID32 均匀独立，指定六位 `TID7` 的单次成功率约为百万分之一，平均需要约百万次**真正的新用户分配**，不是百万次 HTTP 请求。算法/分布尚未证实；即使能自动化，账号删除与服务器限流的现实成本很高。

## 建议先做小样本、只读实验

1. 使用**完全空白、可永久删除**的个人测试账号，在官方流程创建一位新 HOME 用户，日志只记录请求类别、返回码、是否有 `uuid`、first-basic `utid`；绝不存 auth/CSRF/nonce 的原始值。
2. 不删除账号，fresh-login 一次以确立服务器 ID 的稳定性。仅在确认能承担永久损失的前提下，经官方 UI 删除，检查返回结果。
3. 重建一次，比较新旧 `uuid`（仅在本地日志用摘要比对）和新旧 `utid`，验证服务端是否真的重新分配。遇到错误、限流或无法重新绑定即停止。
4. **只有**重复试验真实建立“官方注销→新用户→新 ID”闭环后，才讨论进一步提升本地观察/人工操作效率；不要将注册请求原样重放、伪造授权或批量制造账号当作已经证实的方案。

**现阶段没有服务器生成算法，也没有能按目标指定 ID 的官方注册参数；无法保证可刷。**
