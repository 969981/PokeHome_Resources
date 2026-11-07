---
title: "HOME Android 4.1.0 注册回调函数地址及最早 UTID 证据"
tags: [pokemon-home, android, il2cpp, registration, login, utid, evidence]
version: "4.1.0"
status: "自动静态方法清单待验收；无首次在线 UTID"
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
