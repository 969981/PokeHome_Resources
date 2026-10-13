# HOME Android 4.1.0 — 指定或修改 UTID / CID 的可行性复核

> 2026-10-13；实物：APK SHA-256 `8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`、IL2CPP ELF SHA-256 `80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe`、Metadata v31 SHA-256 `dde114e58c195c44d8261ff00259c2da5dcfd62facad6103ea4b60b77bebb0ad`。本轮针对原始 `global-metadata.dat` 解析全部 16,115 个 TypeDefinition、65,783 个 FieldDefinition、103,238 个 MethodDefinition，针对原始 ELF 再次复核目标 RVA。没有运行实机、网络抓包、服务器端代码，也没有修改云端账户。

## 结论等级

| 目标 | 状态 | 当前证据 |
|---|---|---|
| **在 Android RAM 里改变显示/缓存的 `utid`** | **技术上可做，实机未测** | `UD_Basic.utid` 是字符串引用，可读写托管对象；改缓存不能证明服务器接受 |
| **在 Android RAM 里改变 CID/supportId 显示** | **技术上可做，实机未测** | `ApiRequestChampTransferAccount.ResponseSupportId` 另有 `set_ResponseSupportId`，且受下行响应覆盖 |
| **新注册时指定 HOME 云端 UTID** | **没有找到客户端接口** | 注册 DTO 字段不含 `utid`、`cid` 或设定目标 ID 的业务参数 |
| **已有 HOME 账号永久更改云端 UTID/CID** | **没有已证实方案** | 已确认的是 response/receive/copy；尚未发现授权的账号 ID 修改 API 或回写闭环 |
| **恢复真实服务端生成算法/随机种子** | **未知** | 服务器代码不包含于 APK，客户端接收链不能推出分配算法 |

## 重要纠正：Android `UD_Basic.utid` 不是内嵌的 32-bit 整数

`UD_Basic` TypeDef 3130，字段表中 `utid` 的字段号 **15215**、token `0x04003B70`，IL2CPP TypeIndex **28539**。该类型索引与 `UD_Basic.supid`、`ApiAuthRegisterUserRequestParam.csrf/state/nonce`、`ApiChampTransferAccountResponseParam.cid` 共享，是托管字符串引用形态：

```
UD_Basic.utid = [UD_Basic + 0xF0] -> managed string object
```

Native `SetBasic` 确切指令：

```asm
0x1D76BF8 LDR X8,[X19,#0xF0]   ; incoming utid string pointer
0x1D76BFC CBZ X8,0x1D76C2C    ; absent -> skip
0x1D76C1C LDR X1,[X19,#0xF0]
0x1D76C20 STR X1,[X0,#0xF0]!  ; copy pointer to managed UD_Basic
0x1D76C24 BL  0x1B23A14       ; GC write barrier
```

**不能**在 Android `+0xF0` 直接用 `writeU32(888888)`：这里不是整数槽位；这样会破坏对象指针。Switch 4.1.0 `/basic/utid` 的 numeric parser/manager 存储是另一份二进制上的数据表示，不能直接搬用 Android 偏移和写入类型。

## 首次收到 UTID 的已证实 Android 接收链

```asm
0x1D2BA60 LDR X0,[X21,#0x18] ; ResponseParamCommon.basic
0x1D2BA64 BL  0x1D763D0     ; UDManager.SetBasic
```

再经上面的 `SetBasic` 在 `UD_Basic+0xF0` 写缓存。说明**目前验证的是从服务器响应载入对象的副作用**，不是本地生成 ID。

`ApiRequestAuthRegisterUser` TypeDef 1483：

```
ApiAuthRegisterUserRequestParam:
  csrf, state, nonce, lng, cntry, said
ApiAuthRegisterUserResponseParam:
  uuid, apRes, naRes

ApiRequestAuthRegisterUser.CallAfterResponse          RVA 0x1D33294
ApiRequestAuthRegisterUser.SerializeRequestParameter  RVA 0x1D334A4
```

这段注册请求结构没有 `utid/cid`。但仍需严谨：不能从未见到字段就证明服务端绝对不存在内部或其他协议的 ID 相关功能。

## CID 与 UTID 严禁混同

`ApiChampTransferAccountResponseParam` 的 `cid` 在 managed `+0x140`；`ApiRequestChampTransferAccount` 的 `ResponseSupportId` 在 `+0xA8`。真实机器码：

```asm
0x1D3479C LDR X1,[X19,#0x140]
0x1D347A0 STR X1,[X20,#0xA8]!
```

该类确有 `get_ResponseSupportId`、`set_ResponseSupportId` 方法；**Setter 证明属性可在客户端变更，不证明云端账户 CID 可编辑**。`ApiChampTransferAccountRequestParam` 只有 `dummy` 字段，没有 CID 目标值。

## 排除误判：能更新“资料”不等于能更新“账号 ID”

本轮直接按 Metadata 逐项恢复以下字段：

| API | Request DTO 字段 | 备注 |
|---|---|---|
| `/auth/register/user` | `csrf,state,nonce,lng,cntry,said` | 无自选 UTID |
| `/api/user/setting` | `uname,ntk,sex,bym,icon,vlng,vlng2,cntry,tds` | 用户名等设置，非 UTID |
| `/api/trainerdata/update` | `uptd,deltd` | 更新/删除训练家数据集合；其**嵌套语义**仍须按消费者验证，不能直接假设是云端账号 ID |
| `/api/champ/transfer/account` | `dummy` | 客户端查询/响应消费，不提交自选 CID |

在全部 **65,783** 个 FieldDefinition 中，名为 `utid` 的字段只有 **一个**，即 `UD_Basic.utid`。该事实不构成否定任何反射、通用序列化或 server-side 能力的证明。

## 对指定六位豹子号的影响

若目标是显示型 `TID7=888888`，历史 Switch 端模型为 `TID7 = ID32 % 1000000`。但本轮 Android 的 `utid` 是字符串，需要明确它在 UI/登录响应如何规范化为数值，以及它与对应 Switch `/basic/utid` 的具体同一性。即便临时替换本地显示，服务器账户标识也不会因 UI 改动而获得已证明的改变。

如果重新注册分配完全随机且六位显示均匀，单次恰为指定六位的理论概率才是 `1/1000000`；**目前没有验证实际分布/重建时是否重新分配**，因此不能依据理论概率设计所谓 100% 成功的刷号器。删除 HOME 云端账户可能造成不可恢复的数据损失。

## 推荐的下一阶段实验（仅本人测试账号）

1. **Baseline**：记录注册前 `basic.utid` 是否存在；分别观察 Android `ApiRequestAuthRegisterUser.CallAfterResponse`、`ApiManager.CallbackResponseHook`、`UDManager.SetBasic`、`ApiRequestChampTransferAccount.CallAfterResponse` 的输入/输出，记录同一个测试账号的两个 ID，务必屏蔽 token/nonce/授权头。
2. **只读 Fresh Sync**：清除纯本地缓存/重启重新登录（不要先删除云端账户），确定 `utid` 是服务器再下发还是仅本地读取。
3. **本地显示隔离测试**：只在离线或模拟隔离条件下改变可显示的客户端字段，再登录读回；把 UI 变化与服务器响应变化分开记录。切勿假定本地写入等于服务端更改。
4. **账号重建**：仅在确认云端数据可丢弃的专用测试账号上，经官方流程操作；两次完整 fresh-read 对照 UTID/CID，并记录同 Nintendo Account 关联与本地 UUID 是否复用。

暂不编造服务器生成器、指定 ID 的 API、可永久修改 CID/UTID 的端点或实机验证结果。
