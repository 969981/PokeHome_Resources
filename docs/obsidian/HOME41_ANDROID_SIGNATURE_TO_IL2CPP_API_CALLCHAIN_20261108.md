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
status: "Lineon 的静态写入、Parecool 读取和序列化前构造已核实；9007 服务端语义仍未验证"
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


## 五、进一步深入的转换与静态字段写入（已运行 CI）

[最新原生目标报告](../../Android/Smali/4.1.0/UNITY_SIGNATURE_DOWNSTREAM_TRACE.json) · [Actions #42444908677](https://github.com/969981/PokeHome_Resources/actions/runs/42444908677)

新一轮自动测试通过并把实际 ARM64 指令与 script.json 参数类型逐一匹配：

| 静态方法 | RVA | 参数及作用边界 |
| --- | --- | --- |
| `Draco.op_Implicit(string)` | `0x1F2CE50` | 返回 `Draco` 封装值 |
| `ApiRequestBase.Chenipotte(Draco)` | `0x1F26E78` | 静态入口，继续调用 `Charmillon` |
| `ApiRequestBase.Charmillon(Draco,Soporifik,Soporifik)` | `0x1F26F1C` | 转换字符串、进行字符/整数范围比较与运算 |
| `Soporifik.op_Implicit(int)` | `0x1F2FCF4` | 将整数包装成 `Soporifik`，仅 1 条指令 |

`Chenipotte` 的反汇编明确出现如下操作：

- 准备整数 `4` 与 `3`，调用两次 `Soporifik.op_Implicit`。
- 将 `Draco` 输入和两个 `Soporifik` 参数传给 `Charmillon`。
- `Charmillon` 包含 `String.IsNullOrEmpty`、`String.get_Chars`、`Convert.ToInt32`、字符构造和算术比较等调用。
- `Charmillon` 返回后，`Chenipotte` 在 `0x1F26F08` 执行 ARM64 `str x0, [x9, #0x78]`。这里 `x9` 由类元数据静态存储指针派生，说明结果被写入该类的一块共享状态。

这条证据把签名消息从 Java -> Unity -> 网络组件扩展到**转换后结果的存储**。

新补齐的字段布局同样来自这次 CI 的原始 IL2CPP dump：

```csharp
// ILib.Unity.Net.ApiRequestBase (TypeDefIndex: 3589)
private static Draco Lineon; // 0x78
// ILib.Unity.Net.Draco (TypeDefIndex: 3602)
private string <Value>k__BackingField; // 0x0
```

这里 `Chenipotte` 返回的转换结果经 `str x0,[x9,#0x78]` 写入的 **正是静态 `ApiRequestBase.Lineon` 字段**；`Draco` 结构体内封装一个字符串。该字段后续的消费者尚未通过独立静态交叉引用或真实运行事件定位。但尚未识别共享字段的原始业务名、后续读取方、真实 HTTP 请求字段或服务器响应语义。不能据此称为“官方签名校验已经被完全定位”，更不能将混淆算法替代受信任的官方签名。

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


## 六、2026-11-08：Lineon 读取者与序列化前的往返转换，独立验收通过

这一次不再止于 `Chenipotte` 的静态字段写入。

### 全域静态引用审计

先修复扫描器的一个基础性问题：`libil2cpp.so` 的 ELF `.text` 节仅含一部分原生方法（`0x192A5E0–0x1C159BC`），**不包含**已知的 `CSM`、`Chenipotte`、`Parecool`。因此改为读取 ELF 可执行 `PT_LOAD | PF_X` 段，以真实 VA/RVA 对齐。使用 `Chenipotte` `0x1F26F08` 作为强制正向控制。

[Actions #42450703202](https://github.com/969981/PokeHome_Resources/actions/runs/42450703202) 验证基础全域扫描；[Actions #42450870538](https://github.com/969981/PokeHome_Resources/actions/runs/42450870538) 将方法内追踪窗口延长到 800 条指令后，识别到唯一的 `Lineon` 静态字段读取指令：

```text
ApiRequestBase.Parecool(this)    RVA 0x1F27F5C
  0x1F28474: ldr x22, [x8, #0x78]  ; x8 已由 ApiRequestBase class->static_fields 导出
```

`Parecool` 在报告中被两个 ADRP 起点找到，但**都指向同一条机器指令**，需按指令 RVA 去重，不能算作两次读取。两处强制匹配的写入者分别为 `Chenipotte` (`0x1F26F08`) 和 `ApiRequestBase..cctor` (`0x1F2A890`)。

独立的偏移扫描 [Actions #42450817648](https://github.com/969981/PokeHome_Resources/actions/runs/42450817648) 还找出 `ApiRequestBase.Ningale` 的 `0x1F29FC4: ldr x3,[x19,#0x78]`。但 `0x1F29E80: mov x19,x0` 证明 `x19` 来自实例 `this`，这一条读的是实例偏移，不是静态 `Lineon`。该类恰好同时具有静态 `Lineon // +0x78` 与实例 `Goelise // +0x78`，**绝不能仅凭数字偏移将二者混同**。

### 关键：Parecool 把读取值进一步参与待序列化对象的构造

对源二进制原始字节的直接反汇编，与 `script.json` 方法签名交叉核对：

```csharp
bool ILib_Unity_Net_ApiRequestBase__Parecool(
    ILib_Unity_Net_ApiRequestBase_o* __this, const MethodInfo* method);
```

`Parecool` 于 `0x1F28474` 读取 `Lineon` 后出现以下连续指令：

| ARM64 RVA | 操作 | 说明 |
| --- | --- | --- |
| `0x1F28468` | `mov w0, #-4` | 第一转换参数 |
| `0x1F28474` | `ldr x22, [x8,#0x78]` | 读取静态 Lineon |
| `0x1F28478` | `bl Soporifik.op_Implicit` | 包装 -4 |
| `0x1F28480` | `mov w0, #-3` | 第二转换参数 |
| `0x1F28488` | `bl Soporifik.op_Implicit` | 包装 -3 |
| `0x1F28494` | `mov x0, x22` | 将 Lineon 作为首参数 |
| `0x1F28498` | `bl ApiRequestBase.Charmillon` | 使用 -4/-3 转换 |
| `0x1F284A0` | `bl Draco.op_Implicit` | 转成字符串 |
| `0x1F284AC` | `str x1,[x0,#0x58]!` | 写到待处理对象字段 |
| `0x1F284C4` | `bl ApiRequestBase.SerializeToJson<object>` | 序列化对象 |

相对地，已核实 `Chenipotte` 用 `4`、`3` 对输入执行 `Charmillon` 并写入 `Lineon`。前后使用了成对相反符号参数，但**是否数学意义上恰为逆函数**仍需从 `Charmillon` 所有边界条件独立证明，不应直接称加解密算法完全可逆。

[Actions #42451023333](https://github.com/969981/PokeHome_Resources/actions/runs/42451023333) 增加了逐条指令断言，确认正向证据、反向转换及 `Ningale` 实例字段歧义；完整报告：[LINEON_READER_METHOD_TRACE.json](../../Android/Smali/4.1.0/LINEON_READER_METHOD_TRACE.json)。

### 已证实和未证实

- **已证实：** 原版签名信息经 Java→Unity→`CSM`→`Chenipotte`，写入 `ApiRequestBase.Lineon`；`Parecool` 读取该值并在调用 JSON 序列化前用于构建对象。
- **尚未证实：** 具体 JSON 字段名、最终请求是否包含相同内容、请求发生时间、服务端对该字段的校验条件，以及 `400/9007` 的具体拒绝路径。
- **不能据此宣布：** 自签名重构版已恢复官方服务端身份，或通过跳过客户端比较就能正常登录。

持续使用原始未修改 APK 做对照。未经授权不要伪造官方签名、修改认证参数或在生产账号上测试不可信修改包。


## 七、2026-11-08：首次请求真实 Frida A/B 与双层错误码新探针

### 第一轮真实联网时间线（已完成）

[Actions #42460422767](https://github.com/969981/PokeHome_Resources/actions/runs/42460422767) 使用经过 SHA256 验证的原版 APK 和同文件仅 `apksigner` 重签名的 APK，x86_64 Android API35 上启用 ARM64 native bridge，Frida 17 Java + emulated realm 均成功附加，两者没有账号操作、API 修改或 HTTP 内容采集。

| 事件（从各自附加时间起） | 官方原版 | 仅重签名版 |
| --- | ---: | ---: |
| Java 签名读取 | 28,881ms | 19,872ms |
| Unity 签名回调 | 35,619ms | 23,805ms |
| `Lineon` 写入 | 36,063ms | 23,993ms |
| 请求对象构造开始 | 41,459ms | 28,117ms |
| `Lineon` 请求阶段读取 | 41,554ms | 28,126ms |
| JSON 序列化入口 | 41,564ms | 28,130ms |
| Unity 请求发送入口 | 41,642ms | 28,154ms |
| API 响应回调入口 | 55,136ms | 36,961ms |

这两列是**独立启动时钟**，不是绝对系统时间；不能从几秒的差距推断校验结果。原版 95 秒验证语言选择 UI，重签名版到 130 秒未能通过。

Java HttpURLConnection 和 UnityWebRequest 的已装只读 HTTP 状态钩子都**未取得实际状态码**。因此 `observed_http_response_codes=[]` 是*观测缺口*，不是没有联网，也不是已确认的 HTTP 400。

原版内部 `ApiRequestBase.Ningale` 的 `resultCode` 值落在 HTTP 状态码数字范围，且值为 `200`，但它只是应用 API 回调的整数。新的独立重签名版探针 [Actions #42461674896](https://github.com/969981/PokeHome_Resources/actions/runs/42461674896) 返回 `other_600_9999`，**尚不等于精确的 9007**。

对应脱敏报告：[FIRST_REQUEST_READONLY_AB.json](../../Android/Smali/4.1.0/FIRST_REQUEST_READONLY_AB.json)、[RESIGNED_CALLBACK_CODE_CLASS.json](../../Android/Smali/4.1.0/RESIGNED_CALLBACK_CODE_CLASS.json)。

### 为分离 400/9007 两层错误码新增的只读观察

静态 direct-BL caller 审计 [Actions #42460787800](https://github.com/969981/PokeHome_Resources/actions/runs/42460787800) 已映射：

```text
ApiRequestBase.Monaflemit(resultCode, headers, bytes)
  ├─ BL ApiRequestBase.Chapignon(resultCode, resultDetailCode, responseParam)
  └─ BL ApiRequestBase.Ningale(resultCode, headers, bytes)
```

`Chapignon` 的实际参数声明是 `void Chapignon(ApiRequestBase* this, int32 resultCode, int32 resultDetailCode, ResponseParameterBase*)`，RVA `0x1F27858`。因此本次新增 Frida ARM64 原生钩子，**只记录经过固定分类的整数标签**及 `resultCode==400 && resultDetailCode==9007` 布尔值，不输出参数原文或服务器内容。

代码路径：
- `Android/Smali/tools/home41_first_request_native.js`：`app_error_handler_enter` 事件。
- `Android/Smali/tools/home41_first_request_ab.py`：严格字段白名单和独立的 `app_error_handler_events` 时间线。
- `.github/workflows/home41-first-request-ab.yml`：仍同时对比原版与仅重签名版。

**进行中/未通过的断言不应写成实测发现**：只有在本次新 A/B 实际报告出现 `app_error_400_9007_pair_observed=true`，才可断言 Unity 的应用错误处理函数实际接到这对参数。在 HTTP 层直接捕获状态码或独立比对网络响应之前，该事件仍非“官方服务器返回 HTTP 400”的证据。
