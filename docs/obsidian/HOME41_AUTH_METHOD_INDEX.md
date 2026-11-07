---
title: "HOME Android 4.1.0 注册回调函数地址及最早 UTID 证据"
tags: [pokemon-home, android, il2cpp, registration, login, utid, evidence]
version: "4.1.0"
status: "54 条真实静态候选已提取；注册-令牌-登录-SetBasic 链就绪；无在线 UTID"
updated: "2026-11-07"
---

# 注册、登录与 basic.utid 的静态函数索引

## 为什么需要再做一次索引

此前从原生 AArch64 ELF 通过 BL 交叉引用确认：
\`ResponseParamCommon.basic (+0x18)\` → \`UDManager.SetBasic (0x1D763D0)\`，
源代码位于 \`Android/UTID_CID_NATIVE_CALLCHAIN_20261013.md\`。

但是“注册后第几秒能读到六位 ID”目前还是未知：\`/auth/register/user\` 的专属业务 DTO 只有 \`uuid/apRes/naRes\`，公共 \`basic.utid\` 是否在该响应出现、或直到 \`/auth/create/login\` 才首次下发，需要真实自有测试账号。

## 新索引工作流

\`.github/workflows/android41-auth-symbol-audit.yml\` 在**私有** \`4.1.0\` 分支检出实际恢复的 IL2CppDumper \`script.json\`（已恢复 180,628 条 \`ScriptMethod\`）。仅扫描目标方法名称和地址候选，不重放、修改或请求任何认证 API，也不读取账户凭据。

目标组：\`ApiRequestAuthRegisterUser\`、\`ApiRequestAuthCreateToken\`、\`ApiRequestAuthCreateLogin\`、\`ApiManager.CallbackResponseHook\`、\`UDManager.SetBasic\`。

结果：
- \`Unpack/Android/4.1.0/_meta/auth_method_candidates.csv\`：每个阶段实际匹配的方法名与 Dumper 地址；
- \`Unpack/Android/4.1.0/_meta/auth_method_audit.json\`：条目计数和已知三个原生 RVA 的核对结果；
- 空的目标匹配会明确标为 \`no_relevant_symbols\`，不会冒充已经定位；
- 这份索引只是方法名地址，不是实际注册/登录**调用顺序**。

## 下一阶段：唯一合理的真实 ID 验收

自有空白测试账号必须按官方流程完成国家、实际出生日期、服务条款后，以**原生 ARM64** 测试机采集只读事件：

\`\`\`text
T0 registration_request_serializer_enter
T1 registration_response_handler_enter
T2 first_basic_utid
\`\`\`

用 \`tools/home41_auth_timeline.py\` 计算 \`T2-T1\`；另用真正响应类型验证 \`basic\` 属于哪一次 HTTP 响应，避免时间接近就误判。最后将实际 HOME 显示的六位 Trainer ID 与候选换算核对。

当前 **未完成真实注册、没有 UTID 样本、没有生成 888888**。不能将静态方法命中、CI 成功、UTID 模型或模拟测试时间线视为在线发号证据。

相关文档：[[HOME41_REGISTRATION_EARLIEST_UTID_GATE]]、[[HOME41_UTID_EARLY_READ_AND_EMULATOR]]。


## 第一轮真实脚本审计结果（2026-11-07）

[Actions #42352256829](https://github.com/969981/PokeHome_Resources/actions/runs/42352256829) 全部通过，\`script_method_entries=180628\`、\`auth_method_candidates=11\`。已核对三个关键候选地址与历史 ARM64 原生证据完全一致：

- \`ApiRequestAuthRegisterUser$$SerializeRequestParameter = 0x1D334A4\`
- \`ApiRequestAuthRegisterUser$$CallAfterResponse = 0x1D33294\`
- \`UDManager$$SetBasic = 0x1D763D0\`
- 新补充公共响应处理入口候选 \`ApiManager$$CallbackResponseHook = 0x1D2AFF0\`，还需与之前已验证的内部指令 \`0x1D2BA60\` 一起做边界确认。

**重要的筛选缺口：** 精确匹配 \`ApiRequestAuthCreateLogin\` / \`ApiRequestAuthCreateToken\` 得到 0 条。它只能证明**这两个类名未命中**，不表示客户端没有首次登录或令牌创建流程；新版规则扩大到 \`ApiRequest + Login/Token\` 的类名集合，重新审计真实地址。仍然没有运行注册/登录网络请求。


## 第二轮真实方法清单：54 条候选，登录与令牌类名闭合（2026-11-07）

[Actions #42352499946](https://github.com/969981/PokeHome_Resources/actions/runs/42352499946) 通过，实际审计 \`ScriptMethod=180628\`，筛出 54 条注册/令牌/登录/公共回调/基本资料处理候选。其中 \`ApiRequestCreateToken\` 与 \`ApiRequestLogin\` 是客户端真实类名，而非先前假设的 \`ApiRequestAuthCreateToken\` 和 \`ApiRequestAuthCreateLogin\`。

| 阶段 | 实际方法名称 | Dumper ELF 地址候选 |
|---|---|---:|
| 注册请求构造 | \`ApiRequestAuthRegisterUser$$SerializeRequestParameter\` | \`0x1D334A4\` |
| 注册响应回调 | \`ApiRequestAuthRegisterUser$$CallAfterResponse\` | \`0x1D33294\` |
| 令牌请求构造 | \`ApiRequestCreateToken$$SerializeRequestParameter\` | \`0x1D35888\` |
| 令牌响应回调 | \`ApiRequestCreateToken$$CallAfterResponse\` | \`0x1D35AD0\` |
| 登录请求构造 | \`ApiRequestLogin$$SerializeRequestParameter\` | \`0x1D3BE50\` |
| 登录响应回调 | \`ApiRequestLogin$$CallAfterResponse\` | \`0x1D3C020\` |
| 公共响应处理入口 | \`ApiManager$$CallbackResponseHook\` | \`0x1D2AFF0\` |
| 用户基本资料接收 | \`UDManager$$SetBasic\` | \`0x1D763D0\` |

其中三个历史 ELF Native 地址再次匹配，\`ResponseParamCommon.basic (+0x18) -> SetBasic\` 的真实 AArch64 \`BL\` 边见 \`Android/UTID_CID_NATIVE_CALLCHAIN_20261013.md\`。**其余方法属于静态入口候选**，不能仅凭名称保证 HTTP 路径与原生调用关系相同；需同版本地址范围的 disassembly 和自有账号实测。

新版本 \`tools/early_home_tid_observer.js\` 为令牌回调、登录请求构造、登录响应回调增加只读时间事件；\`tools/home41_auth_timeline.py\` 对比：
- \`first_basic_utid - registration_response_handler_enter\`；
- \`first_basic_utid - login_request_serializer_enter\`；
- \`first_basic_utid - login_response_handler_enter\`。

回调函数**进入**不代表认证成功（尚须检查实际 HTTP 结果）；\`SetBasic\` 首次收到 \`utid\` 前后顺序也不自动证明 \`basic\` 来自哪一个服务端响应。当前没有在线事件样本，不能给出实际多少秒，也不能据此声称成功刷到目标 ID。
