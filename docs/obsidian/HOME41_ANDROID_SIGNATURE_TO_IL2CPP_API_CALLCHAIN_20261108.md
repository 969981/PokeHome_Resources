---
title: "Pokémon HOME Android 4.1.0 — 原版签名到 IL2CPP 网络层的调用链"
aliases:
  - HOME41 签名校验链
  - HOME41 400 9007 定位
tags:
  - pokemon-home
  - android
  - il2cpp
  - frida
  - obsidian
  - signing
updated: 2026-11-08
status: "回调及下游 BL 已验证；9007 服务端语义和自签名在线兼容仍未验证"
---

# 研究范围与结论

研究场景：通过可重建的 Smali 工程生成的 HOME Android 4.1.0 APK，在一次性 Android 15 AVD 上可安装、可启动进程，但屏幕出现 `code:400 / detail code:9007`。**原始签名的同一版本 APK 能进入正式 HOME 语言选择界面。**

**最核心的验证：**直接对原始 APK 执行 `apksigner` 重签名（不做 Apktool、zipalign、DEX 或 SO 修改），也会复现通信错误。因此**修改 DEX 不是触发该失败的必要条件**。这不是“Smali 无法编译”的问题，也不能从安装包签名格式检查成功推导“能通过官方联网身份认证”。

目前已闭合了启动后的签名消息路径：

```text
Android CheckSignatureCore.Check(Context, String, String)
    │ PackageManager 读取安装包签名
    │ UnityPlayer.UnitySendMessage("Azurill", "Tarinor", message)
    ▼
CSM.Tarinor(string message)          RVA 0x1D4AA34 / file 0x1D46A34
    │ 判断空字符串、搜索 ':'、Substring、前缀字符串比较
    │ 有条件跳转/尾调用
    ▼
CSM.Skitty(string Delcatty)          RVA 0x1D4AB04 / file 0x1D46B04
    │ 调用 ILib.Unity.Net.Draco.op_Implicit(string)
    ▼
ILib.Unity.Net.Draco.op_Implicit    RVA 0x1F2CE50
    │ string 转换到 Draco
    ▼
ILib.Unity.Net.ApiRequestBase.Chenipotte(Draco)
                                      RVA 0x1F26E78
    │ 后续调用 Soporifik.op_Implicit、ApiRequestBase.Charmillon
    ▼
ILib.Unity.Net.ApiRequestBase.Charmillon  RVA 0x1F26F1C
```

注意：该图根据**Frida 动态 Java 命中**与**IL2CPP ARM64 静态反汇编 BL 调用目标**组合绘制，并非每个 native 节点均已在 Android x86_64 AVD 中被单独动态 Hook 命中。尤其不能由上述代码路径直接断言服务器校验的规则、应答内容或登录成功。

## 一、实测动态证据

[真实 Frida A/B #42376455037](https://github.com/969981/PokeHome_Resources/actions/runs/42376455037) 的原始事件文件：

- `official_unmodified/events.jsonl`
- `directly_resigned/events.jsonl`

两者分别都观察到一次 `checksignature_core_called`、`package_name_sent_to_unity`、`signature_chars_sent_to_unity`、`signature_hash_sent_to_unity`，回调对象/方法一致：

```text
receiver_class="Azurill"
handler_method="Tarinor"
```

这里 `Azurill` 是 UnitySendMessage **GameObject 对象名称**，不必然是 C# 类名；`Tarinor` 才是目标方法名称。这些名称看起来经过游戏资源名称混淆，不能将它们当作宝可梦实体数据。观察器**未保存证书字符串、哈希正文、账户凭据、服务端应答或接口 URL**。

原始签名 APK 95 秒时确认 HOME 语言选择页；测试签名 APK 到 130 秒仍未通过。两者 Frida script error 都是 0。

汇总：[FRIDA_SIGNATURE_CALL_TRACE.json](../../Android/Smali/4.1.0/FRIDA_SIGNATURE_CALL_TRACE.json)。

## 二、方法映射证据

从 [UNITY_SIGNATURE_CALLBACK_AUDIT.json](../../Android/Smali/4.1.0/UNITY_SIGNATURE_CALLBACK_AUDIT.json) 原始 IL2CppDumper 结果可验证：

- `CSM : MonoBehaviourSingleton<CSM>`，TypeDefIndex **1610**。
- `CSM.Tarinor(string message)`，RVA **0x1D4AA34**，文件偏移 **0x1D46A34**；script 中签名 `void CSM__Tarinor(CSM_o*, System_String_o*, MethodInfo*)`。
- `CSM.Skitty(string Delcatty)`，RVA **0x1D4AB04**，文件偏移 **0x1D46B04**；下一方法 `CSM.Start` 位于 **0x1D4AD0C**。
- `CSM` 还存在一个静态字节数组字段 `Hariyama`；其业务用途未独立解释。

## 三、ARM64 反汇编证据

[UNITY_SIGNATURE_NATIVE_TRACE.json](../../Android/Smali/4.1.0/UNITY_SIGNATURE_NATIVE_TRACE.json) / [#42444620319](https://github.com/969981/PokeHome_Resources/actions/runs/42444620319)：

- `Tarinor`：解析出 52 条 ARM64 指令，在消息处理中调用 `String.IsNullOrEmpty`、`String.IndexOf`、`String.Substring`、`String.op_Equality`；末段 `0x1D4AAF0` 跳到 `0x1D4AB04`（`CSM.Skitty`）。
- `Skitty`：解析出 130 条指令；直接调用 `Draco.op_Implicit`（`0x1F2CE50`）及 `ApiRequestBase.Chenipotte`（`0x1F26E78`）。
- 从扩展分析 [UNITY_SIGNATURE_DOWNSTREAM_TRACE.json](../../Android/Smali/4.1.0/UNITY_SIGNATURE_DOWNSTREAM_TRACE.json) 可见 `ApiRequestBase.Chenipotte` 方法签名为 `void Chenipotte(Draco Armulys)`，且其代码调用 `Soporifik.op_Implicit` 和 `ApiRequestBase.Charmillon`。

目前 `Chenipotte` 具体设置的是请求字段、会话值、签名识别状态还是其他元数据，尚未通过后续接收字段和真实响应内容闭合。**不能将“传入 ApiRequestBase”简化成“已证明后端因签名拒绝登录”。**

## 四、源码与复测

- `Android/Smali/tools/signature_trace_agent.js`：只读监听 Java `CheckSignatureCore.Check` 与 `UnityPlayer.UnitySendMessage` 的签名消息类型、Unity 接收方法名称。不能输出原始证书。
- `Android/Smali/tools/signature_frida_ab.py`：原版与仅重签名版的独立安装/启动/截图/事件对照，最长观察 130 秒。
- `Android/Smali/tools/signature_unity_callback_audit.py`：扫描 `dump.cs`、`script.json`、`stringliteral.json`。
- `Android/Smali/tools/trace_signature_unity_native.py`：通过 Capstone 只读反汇编 ARM64 函数，按 `script.json` 地址映射 BL 目标。
- `.github/workflows/home41-signature-downstream-api.yml`：在私有 CI 中生成详细调用图，不修改 APK。

### 在线启动验收边界

| 检查 | 状态 |
| --- | --- |
| 原版签名 APK 正常显示官方语言界面 | 已通过 |
| 重新签名 APK 可以安装、启动进程 | 已通过 |
| 重新签名 APK 恢复官方联网初始化 | **未通过** |
| Java 读取签名并传入 Unity | 已通过 |
| 静态 CSM → ApiRequestBase 调用图 | 已通过 |
| 9007 由哪个实际请求、服务端规则产生 | **未验证** |
| 原版官方服务可允许自签名构建 | **未验证，不作此声称** |

后续应继续做**不改数据的观察**：定位 `Charmillon` 所访问的状态字段与静态类型，并在已授权的原版运行环境中比对回调之后的阶段时间；若需要发行一个可正常连接官方服务的修改版，须采用发行方认可的签名、正式发布机制或获授权的服务端测试环境。不能以隐藏错误弹窗、伪造官方证书或跳过认证来替代验收。
