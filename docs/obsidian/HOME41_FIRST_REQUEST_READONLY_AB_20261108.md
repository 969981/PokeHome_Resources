---
title: "HOME Android 4.1.0：首次请求字段类别与 HTTP 结果只读 A/B 验收"
tags: [pokemon-home, android, frida, il2cpp, network, read-only, reverse-engineering]
date: 2026-11-08
status: "完整首启 A/B 运行通过；差异已定位到响应回调阶段，但 HTTP 状态及 9007 语义尚未闭合"
---

# 目的

继续验证官方原始 APK 与**只做 apksigner 重签名**的 HOME Android 4.1.0 首次启动差异，尝试将应用层 `code:400 / detail code:9007` 与真实请求阶段、HTTP 状态码对应。

**切记：**`9007` 不是已经验证的 APK 签名错误专用代码。普通官方使用场景中也有类似错误报道。不能仅由签名 A/B 的失败相关性推导服务器校验具体规则。

## 原始版本与安全边界

- 官方原始 APK SHA-256：`8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`，从 `969981/Home_Android/ROMS/4.1.0` 获取、安装前重新哈希校验。
- 对照 APK：原版直接 `apksigner` 以一次性测试密钥重签名，未重新打包 DEX、SO、Manifest 或资源；通过 `audit_direct_resign.py` 验证内容差异。
- 环境：Android API 35 / x86_64 可用 ARM64 Native Bridge 的一次性 AVD；Frida 17.26.1 只读观察。
- 不点击同意条款、不注册、不删除、不登录任何真实账户；不修改认证请求、签名参数、服务器返回，也不做 TLS/证书校验绕过。
- 永不持久化原始请求/响应正文、URL、Host、Cookie、HTTP Header、证书原文、哈希、`basic.utid`、设备 ID、账户令牌。
- 结果只包含事件类型、分类字段、宿主单调相对时间、HTTP 3 位状态码与预定义的布尔值。

## 观察点：静态路径已核实，实际命中以 Frida 实测为准

```text
CheckSignatureCore.Check (Java)
 → UnitySendMessage("Azurill","Tarinor", …)
 → CSM.Tarinor
 → ApiRequestBase.Chenipotte(Draco)
 → ApiRequestBase.Lineon (静态 +0x78)
 → ApiRequestBase.Parecool 读取 (+0x78)
 → Charmillon(Lineon,-4,-3)
 → 写入待序列化对象 (+0x58)
 → SerializeToJson<object>
 → UnityWebRequest.SendWebRequest / get_responseCode [仅在方法存在并被实际命中时成立]
 → ApiRequestBase.Ningale(int resultCode,…)
```

所有钩子只监听函数入口、返回值或指定指令地址，不读取任何敏感内容。**特别区分**：

1. `UnityWebRequest.get_responseCode` / Java `HttpURLConnection.getResponseCode` 返回且在 100–599 范围时，才能记录为“原生/Java 网络层 HTTP 状态”。
2. `ApiRequestBase.Ningale` 的 `resultCode` 即使数字恰好在 100–599，也只能标成 `api_response_callback_result_in_http_range`；尚未证明它的语义就是 HTTP 状态。
3. UI 显示 `code:400` 不等于真实 HTTP 状态 400；`detail code:9007` 不等于证书不符结论。
4. `Lineon` 是签名衍生字段类别的**代码结构证据**，不是读取真实签名字符串。原始签名、转换值、最终 JSON 字段名称均不上传。
5. `SendWebRequest` 或序列化入口未命中，可能是其他网络栈、捕获延迟或脚本钩子未准备好，不应直接解释为“没有发送请求”。

## 文件与验收规则

- `Android/Smali/tools/home41_first_request_java.js`：签名相关 Java 回调 + Java HTTP 状态，只有受限事件。
- `Android/Smali/tools/home41_first_request_native.js`：ARM64 Frida emulated realm 的 `Lineon`、`Parecool`、序列化、响应状态只读跟踪。
- `Android/Smali/tools/resolve_first_request_rvas.py`：从**原版** IL2CPP 4.1.0 `script.json` 查 UnityWebRequest 两个可选函数地址；重复/无效则跳过，不能猜地址。
- `Android/Smali/tools/home41_first_request_ab.py`：清理安装、相同权限前置、启动、先后 35/60/95/130 秒截图、严控事件持久化。
- `.github/workflows/home41-first-request-ab.yml`：构建、两份 APK A/B、提交只读汇总、保留临时 Artifact 7 天。
- `Android/Smali/4.1.0/FIRST_REQUEST_READONLY_AB.json`：运行后的脱敏汇总；如果原版语言页未验证，CI 明确失败，不作对照结论。

**结果只能归因到实际记录的最靠近阶段**；如果没有任何真实 HTTP 状态，则报告“HTTP 状态不可见”，不得为满足验收而虚构 400 或 9007 的网络来源。

## 相关证据

- [签名到请求构建与 Lineon 静态引用详解](HOME41_ANDROID_SIGNATURE_TO_IL2CPP_API_CALLCHAIN_20261108.md)
- [这次真实 GitHub Actions](https://github.com/969981/PokeHome_Resources/actions/runs/42459657452)



## 原版首次 ARM64 事件链（2026-11-08，首轮实测，单边证据）

本次原版事件来源：[Actions #42459952862 的私有 Artifact](https://github.com/969981/PokeHome_Resources/actions/runs/42459952862)，路径为 `official_unmodified/events.jsonl`、`official_unmodified/summary.json`。

**原版 Android HOME 4.1.0 实测正常进入语言选择页（截图 130 秒）**。通过 Frida emulated realm ARM64 成功加载 10 个 native Hook；Java 4 个 Hook 均 ready；Frida 脚本异常数为 0。完整事件包含：

| 启动相对时间 | 实际命中事件 | 语义界限 |
| --- | --- | --- |
| 29.252s | Java `CheckSignatureCore.Check`；发出第一个 Unity 签名消息 | 从 Java 实际观察 |
| 35.746s | `ApiRequestBase.Lineon` 静态签名衍生字段写入 | 原始 RVA 0x1F26F08 |
| 42.137s | `ApiRequestBase.Parecool` 请求构造入口 | 实际函数命中 |
| 42.166s | `Lineon` 静态字段读取 | 原始 RVA 0x1F28474 |
| 42.177s | 对象字段 `+0x58` 写入、JSON 序列化入口 | 原始 RVA 0x1F284AC、0x27395F0 |
| 42.280s | `UnityWebRequest.SendWebRequest` | 仅证明请求发送方法被调用 |
| 70.949s | `ApiRequestBase.Ningale` 回调 `resultCode=200` | **未验证等价于 HTTP 200** |
| 92.520s | 第二次 `UnityWebRequest.SendWebRequest` | 不代表第二个请求的用途 |

本次 `UnityWebRequest.get_responseCode` 的 RVA `0x421AD30` 和 `SendWebRequest` RVA `0x421A6DC` 均由原版 script.json 找到**唯一**静态定义并且 Hook 就绪；**未捕获真实网络层 HTTP 状态码**。不能把 `Ningale(resultCode=200)` 误记成 HTTP 200。

首轮在完成原版采样后，因为 Python 调试输出处误将 `flush=True` 传进 `json.dumps`，在进入第二组测试前异常终止。原版事件与截图保存在 Artifact 中，但**未完成同轮重签名对照**。根因已定位，输出代码改为 `print(json.dumps(...), flush=True)`，下一轮重新运行完整 A/B。

因此此节是**原版单边已验证证据**，不是双包差异结论，也不能证明 `400/9007` 出现在某个具体 HTTP 响应上。尤其不能由 callback result 200 断言后端 HTTP 返回 200。


## 同轮完整 A/B：两份 APK 均到达响应回调，但结果类别不同

[GitHub Actions #42460422767](https://github.com/969981/PokeHome_Resources/actions/runs/42460422767) **实际验收通过**，无注册、无账号操作、无请求/响应修改。

- 原版在 95 秒已显示 HOME 语言选择页；原始签名和 ARM64 原生观察器正常。
- 仅重签名版在 130 秒截图中仍为明确的 **`code:400 / detail code:9007`** 日文通信错误弹窗。
- Java 和 ARM64 两端全部 10 个 native Hook 就绪，无 Frida 脚本异常；两包均命中完整签名衍生字段写入、读取、待序列化对象写入、JSON 序列化入口及 `UnityWebRequest.SendWebRequest`。
- 两包**都命中一次** `ApiRequestBase.Ningale(int resultCode,Dictionary headers,byte[] data)` 响应回调。
- 原版 `Ningale.resultCode=200`；重签名版同一参数**不在 100–599 范围**，由于隐私白名单本轮未持久化这个范围外的确切整数。
- 两包 `UnityWebRequest.get_responseCode` 都未命中返回 100–599 的值；Java HttpURLConnection 也没有适用事件，所以**目前没有真实 HTTP 状态码**。不能把 `Ningale.resultCode=200` 或 UI `code:400` 直接理解成 HTTP 状态码。
- 原版有 2 次 `UnityWebRequest.SendWebRequest` 事件，重签名版只有 1 次；但这仅统计 native Hook 事件，不能由次数直接推断实际网络包数。

### 相对时间线（秒）

| 阶段 | 原版 | 重签名版 |
| --- | ---: | ---: |
| Java 签名读取 | 28.881 | 19.872 |
| `Lineon` 存储 | 36.063 | 23.993 |
| `Parecool` 请求构造入口 | 41.459 | 28.117 |
| `Lineon` 读取 | 41.554 | 28.126 |
| JSON 序列化 | 41.564 | 28.130 |
| 首次 `SendWebRequest` | 41.642 | 28.154 |
| `Ningale` 响应回调 | 55.136 | 36.961 |

这并不是重签名包在发出任何请求之前就被本地函数拦截的证据。双方均进行了完整构造并进入响应处理，**首个明确可观察差异是在响应回调参数类别和后续 UI 阶段**。原版还有第二次发送方法事件（77.524 秒），重签名版没有。

### 图片及脱敏事件来源

- 本轮私有 Actions Artifact：`home41-first-request-readonly-ab-evidence`，包含 `official_unmodified/screen_95s.png`、`directly_resigned/screen_130s.png`、两份 `events.jsonl`、两份 `summary.json`、`comparison.json`。
- 分支汇总：[FIRST_REQUEST_READONLY_AB.json](../../Android/Smali/4.1.0/FIRST_REQUEST_READONLY_AB.json)。
- 静态调用者证据：[FIRST_REQUEST_NATIVE_CALLERS.json](../../Android/Smali/4.1.0/FIRST_REQUEST_NATIVE_CALLERS.json)：`Ningale` 的直接调用者是 `ApiRequestBase.Monaflemit`；`SendWebRequest` 可以从 `ILib.Unity.Net.IAWWW.<CoSendRequest>d__18.MoveNext` 直接调用；已找到的 `get_responseCode` 6 处直接调用不涉及该 `IAWWW` 方法。此扫描只涵盖静态 `BL`，无法发现虚拟分发或委托调用。

**结论边界：**现有证据将重签名启动故障定位到已执行请求构造/发送方法并进入响应回调之后，但不能证明拒绝发生在哪个 HTTP 连接或服务端规则中。UI `9007` 的代码与 `Ningale` 的确切值还没有通过同一个有证据的解析链关联。

### 后续定向诊断

针对原版/重签名差异，本轮单独增加了仅重签名的粗粒度 `Ningale.resultCode` 分类观察器；它**只判断是否精确等于 200、400、9007 或属于受限数值区间**，不读取、保存任何响应字节、证书正文或账号信息。[独立 CI](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-resigned-result-class.yml) 和 [分类汇总](../../Android/Smali/4.1.0/RESIGNED_CALLBACK_CODE_CLASS.json) 以真实运行结果为准。

