# Pokémon HOME Android 4.1.0：账号创建、UTID/CID 接口请求/响应核对

静态证据：原始 APK SHA-256 `8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`，IL2CPP Metadata v31（16,115 类型 / 65,783 字段），原始 ARM64 ELF `80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe`。未采集实际线上流量或执行账号操作。**业务 DTO 不等于完整 HTTP 报文，也不提供可复用的认证凭证。**

| 业务 endpoint | 请求字段（Metadata 原名） | 响应字段（Metadata 原名） | 账号 ID 意义 |
|---|---|---|---|
| `/nauth/start` | `csrf:string,lng:int,said:string` | `state:string,nonce:string,nuri:string,exp:long` | 启动认证 |
| **`/auth/register/user`** | `csrf:string,state:string,nonce:string,lng:int,cntry:int,said:string` | **`uuid:string,apRes:int,naRes:int`** | **实际新用户注册路径；专属响应没有 UTID** |
| `/auth/create/token` | `uuid:string,tmVer:int,wvVer:int,con:int` | `token,exp,ntAId,dmin,cdn,evhs,tmVer,tmUrl,ppUrl,comUrl,tmUpM,wvVer,wvPt,crPst,udfd,mdn` | UUID 进入会话令牌流程，不是选定 ID |
| **`/auth/create/login`** | `csrf:string,udVer:long,llgt:long,rl:int,ntk:complex` | 专属：`sesId,furi,ms,otp,ottl,gmim,bdDm,bdrDm,tnmIf,plPau,sdac,gdids,crd,usref,unNg,clngf,clngl`；公共响应另有 `basic` | **首次同步服务器 `basic.utid` 的关键观察阶段** |
| `/nauth/takeover/check` | `state:string,nonce:string,newg:int,birth:string` | `uuid:string,apRes:int,supid:string,plPP:int` | 账号接管/身份关联检查；`supid` 不等于 `utid` |
| `/api/champ/transfer/account` | `dummy:string` | `csta:int,tsta:int,cname:string,clang:int,cid:string,tmc:int` | 查询 CID，不是 UTID |
| `/api/user/delete` | `dummy:string` | 空专属 DTO（还有公共结果） | 删除用户，不返回新 ID |
| `/api/user/changelanguage` | `keep:int,lng:int,uname:string` | 空专属 DTO | 更新语言，不创建新用户 |

## 关键二进制证据

Android 注册请求 `ApiRequestAuthRegisterUser.SerializeRequestParameter` RVA `0x1D334A4`：

```asm
0x1D33550 STR X1,[X0,#0x10]! ; csrf
0x1D33578 STR X1,[X0,#0x18]! ; state
0x1D33590 BL  0x1D335E4     ; nonce 空值辅助路径
0x1D335A4 STR X1,[X0,#0x20]! ; nonce
0x1D335AC LDR D0,[X19,#0xA0] ; language + country
0x1D335B8 STR XZR,[X0,#0x30]!; said null (本序列化路径)
0x1D335BC STR D0,[X20,#0x28] ; lng, cntry
```

`ApiRequestAuthRegisterUser.CallAfterResponse` RVA `0x1D33294`；响应 DTO TypeDef 2610 只有 `uuid,apRes,naRes`。所以**注册返回 uuid ≠ 直接返回目标 utid**。

服务器用户资料的另一个结构 `ResponseParamCommon`（TypeDef 3002）含 `basic` (offset `+0x18`)：

```asm
0x1D2BA60 LDR X0,[X21,#0x18] ; response.basic
0x1D2BA64 BL  0x1D763D0     ; UDManager.SetBasic
0x1D76C1C LDR X1,[X19,#0xF0] ; Android UD_Basic.utid（managed string）
0x1D76C20 STR X1,[X0,#0xF0]!
```

真实 `basic.utid` **在哪个 HTTP 响应中第一次出现**仍需对用户自己的首次注册、首次登录响应进行只读采样确认；通用 ResponseParamCommon 可附着于不止一种业务响应。另一个 `ApiChampTransferAccountResponseParam.cid +0x140` 被复制到客户端 `ResponseSupportId +0xA8`；CID 不同于 UTID。

## 遗留 DTO 不能冒充隐藏接口

`ApiCreateUserRequestParam {csrf,lng}`、`ApiCreateUserResponseParam {uuid,nuri}` 虽存在于 Metadata，但没有发现生产请求类 `ApiRequestCreateUser` 或明文路径 `/auth/create/user`。没有证据允许直接通过该遗留 DTO 申请 ID。

Switch 4.1.0 State7 的注册 `/auth/register/user` 参数是 `csrf,nsa,state,code,id_token,lng`，不同于 Android；Switch 的 `/basic/utid` 使用自己的解析路径。平台字段不能混用。

**静态结论：已发现的客户端注册字段中没有目标 UTID/TID7 参数。** 真实服务端 ID 分配算法、注销后重建是否分配不同 ID、回包具体取值与限流策略，必须通过正常授权的测试账户生命周期验证。不要把占位参数、重复请求或本地修改当成新账号已生成。
