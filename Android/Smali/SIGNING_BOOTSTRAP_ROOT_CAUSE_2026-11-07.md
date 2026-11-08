# HOME Android 4.1.0：400 / 9007 的签名差异定位（2026-11-07）

**结论（实测）：** 这是 **原版 APK 身份/签名相关元数据改变后，HOME 初始联网流程不再通过** 的问题，而不是首先由 Smali 重新汇编或 Unity 资源重构导致。**已实测相关性，但尚未通过请求/响应或代码级动态跟踪确认校验是在客户端、Google 服务还是 HOME 后端执行。**

## 关键证据

| 测试包 | 是否更改 DEX/资源 | 是否改了签名或签名来源标记 | Android 15 / 60 秒后 |
|---|---|---|---|
| 原始官方分发包 | 否 | 否 | **正常**显示 Choose Your Language |
| **直接用 apksigner 重签的原版包（无 zipalign、无 Apktool）** | **否** | **是** | **失败**，显示 `code:400 / detail code:9007` |
| 原版素材 + Smali 重编译的 3 DEX | 是 | 是 | 相同 400 / 9007 |
| 完整 Apktool Smali 重构 | 是 | 是 | 相同 400 / 9007 |

运行环境：Android 15 API 35，x86_64 AVD 通过 `libndk_translation.so` 加载 ARM64 原生库。所有包均干净安装且能启动、PID 在 35 秒时存活，无注册、未同意条款、未绑定 Nintendo Account。Android OS 层固定拒绝定位/通知权限，以排除系统弹窗误判。

最有说服力的是**直接签名组**：原 APK 与新 APK 的 ZIP 内容逐成员比较：

- 原版 `1810` 条目，新版 `1809` 条目。
- `1806` 个共同成员内容未变化；仅 `META-INF/MANIFEST.MF` 内容变化。
- 原版有 `META-INF/GOOGPLAY.RSA`、`META-INF/GOOGPLAY.SF`、`stamp-cert-sha256`；新测试签名替换成 `META-INF/FORENSIC.RSA` 与 `FORENSIC.SF`，来源印章标记不再存在。
- **所有 3 个 DEX 和 9 个 SO 内容均相同，其他应用资源也相同**；差异落在签名、签名清单和签名来源标记（APK signing block/ZIP 元信息仍需额外二进制比较）。
- 两包都能通过 Android 的 v1/v2/v3 安装包签名格式检查；**“签名结构有效”并不意味着仍是官方证书或服务端信任的 APK 身份**。

真实报告：[DIRECT_RESIGN_PROOF.json](4.1.0/DIRECT_RESIGN_PROOF.json)；[运行记录 #42373911746](https://github.com/969981/PokeHome_Resources/actions/runs/42373911746) 内有两包 12/35/60 秒截图。

## 逆向与原因边界

1. `smali_classes3/jp/co/ilca/www/checksignature/CheckSignatureCore.smali` **具备**使用 `PackageManager` 读取签名并通过 `UnityPlayer.UnitySendMessage` 返回证书字符串/hash 的能力。
2. 实际元数据审计没有找到 `CheckSignatureCore` 在 IL2CPP 字符串列表或原生 ASCII 中的明确引用，**尚不能证明该方法在出错时真正执行**。
3. `libsigner.so` 由 `com.adjust.sdk.sig.NativeLibHelper` 加载，属于 Adjust SDK 的签名组件；不要把它与 HOME 官方接口签名机制等同。
4. 公开玩家报告表明 `400/9007` 还可出现于未改 APK 的账号/转移故障，**不是已证实的“证书不匹配专用错误码”**。

参考：[STATIC_SIGNATURE_TRACE.json](4.1.0/STATIC_SIGNATURE_TRACE.json)；[RUNTIME_TEST_FINDINGS_2026-11-07.md](RUNTIME_TEST_FINDINGS_2026-11-07.md)；[DIFFERENTIAL_RUNTIME_REPORT.json](4.1.0/DIFFERENTIAL_RUNTIME_REPORT.json)。

**当前最可能的几种机制（均未独立证明）**：
- 服务端/Google 身份体系认可的 APK 签名证书指纹与测试密钥不一致；
- APK 来源印章 `stamp-cert-sha256` 或 APK 整体签名/文件身份被验证；
- Android 客户端读取证书/包指纹后，通过 Unity 逻辑触发服务不可用状态。

## 工程结论

- Smali 工程能够重新汇编、签名、安装，但**当前测试签名生成的 APK 无法达到原版联网初始化状态**。
- 若目标是研究代码和现有账号的真实接口行为，应保留原始 APK 原样，通过合法、只读的运行时观测进行诊断，避免用重签名包覆盖原账号环境。
- 若目标是发行一个能通过官方服务端验证的 APK，**不能依赖普通 Apktool + 自签名方式保留发行商身份**。只有发行商控制的可信签名、授权的正式发布流程或明确支持测试签名的受控服务环境才能提供等价的身份保证。
- 后续若要精确确认本地/服务端边界，需匿名化的只读生命周期事件（请求发起、HTTP 状态类别、哪一阶段给出错误）及签名读取函数的调用事实；不要记录账号令牌、签名私有密钥或未授权请求内容，也不以跳过服务端校验冒充验收。

## 新补充：2026-11-07 Frida 17 真实调用证据

[运行 #42375246500](https://github.com/969981/PokeHome_Resources/actions/runs/42375246500) 的一次性 Android 15 模拟器执行了**原版 APK 与直接重签名原版**的 Frida spawn-attach。Frida Server 17.26.1 安装、官方下载哈希校验、x86_64 设备 root、Frida 17 Java Bridge 编译与脚本附加均被实际验证。

在**两个变体**中，`jp.co.ilca.www.checksignature.CheckSignatureCore.Check(Context,String,String)` 入口都**真实命中一次**，并且 `UnityPlayer.UnitySendMessage` 实际传递过以下签名相关内容的*类别*：
- `PackageName:` 前缀
- `toCharsString:` 前缀
- `hash:` 前缀

只保存事件种类、时间与次数，**不记录证书正文、证书哈希值、消息体、账号信息或真实访问令牌**。详情：[FRIDA_SIGNATURE_CALL_TRACE.json](4.1.0/FRIDA_SIGNATURE_CALL_TRACE.json)。

因此此前“无法证明该类在启动时执行”的不确定性已消除：**启动时确实读取签名并转交 Unity**。仍未证实转交结果由谁比较、与哪个证书指纹比较、`400/9007` 是否是该比较的直接结果。

第一次 Frida A/B 测试中，原版 60 秒截图还是 Pokémon LOGO + 加载圆环，因此不能把第一轮直接判定为成功。**后续 [#42375870072](https://github.com/969981/PokeHome_Resources/actions/runs/42375870072) 的真实结果已经改善**：原版在 60 秒明确显示 HOME 语言选择页，直接重签名版到 **130 秒仍没有进入该页面**，而是保持通信错误弹窗。两者的签名检查回调均真实命中，Frida 脚本无错误。

[#42375870072] 虽然运行证据完整，GitHub Actions 的最后一个检查步骤因**稀疏检出后 git commit/rebase 清理了非检出路径上的报告文件**而报错（`No runtime trace produced`），不是实际 HOME UI 不可用。已修复 CI 以直接读取始终保存在 `signing-runtime-evidence/comparison.json` 的原始测试结果，避免将报告路径问题误归咎于 APP。新 CI 结果仍需独立核验。

## 精确状态

- 已验证：签名及来源元数据改变**足以复现**初始化错误；DEX/资源内容改变**不是触发该错误的必要条件**。
- 未验证：具体是哪项签名/来源元数据触发、校验方、服务端返回值的内部语义、修改版能否在官方服务中完成登录。


## 2026-11-08：签名的 Unity 接收对象、回调方法已由真实事件锁定

本次重新核对 [Frida 双包测试 #42376455037](https://github.com/969981/PokeHome_Resources/actions/runs/42376455037) 的原始 Artifact `official_unmodified/events.jsonl` 和 `directly_resigned/events.jsonl`，不再依赖汇总报告。

两份 APK 均在启动约 15–19 秒命中 `CheckSignatureCore.Check`，并观察到三条签名信息传给 Unity：
- `UnityPlayer.UnitySendMessage("Azurill","Tarinor","PackageName:...")`
- `UnityPlayer.UnitySendMessage("Azurill","Tarinor","toCharsString:...")`
- `UnityPlayer.UnitySendMessage("Azurill","Tarinor","hash:...")`

只读观察器原始事件仅保存 `receiver_class=Azurill`、`handler_method=Tarinor` 以及消息**类别**和单调时间，未记录第三参数正文、证书、token 或 HTTP 流量。**`Azurill` 是 UnitySendMessage 的 GameObject 接收名，不一定是 C# 类名；`Tarinor` 是其目标方法名。名称可能经过混淆，与宝可梦实体无关。**

原版在 95 秒显示 HOME 语言选择页；重签名版直到 130 秒仍未通过。由此可验证两者**都执行签名读取与转交**，但不能单凭回调命中认定签名检查就是 `400/9007` 的具体发出点。

现在通过 [UNITY_SIGNATURE_CALLBACK_AUDIT.json](4.1.0/UNITY_SIGNATURE_CALLBACK_AUDIT.json) 做原始 IL2CPP dump / script / stringliteral 的精确查找，见 [新审核工作流](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-signature-unity-callback-audit.yml)。下一步要找出真正消费 `Tarinor` 内容的 IL2CPP 接收方法和之后的分支，而非修改证书检查结果。

## 2026-11-08：签名消息最终写入 ApiRequestBase.Lineon 的静态证据

最新实际通过的 Actions：

- [#42444503381](https://github.com/969981/PokeHome_Resources/actions/runs/42444503381)：`CSM.Tarinor` 解析目标来自 `dump.cs`、`script.json`。
- [#42444620319](https://github.com/969981/PokeHome_Resources/actions/runs/42444620319)：读取 `libil2cpp.so` 真正 ARM64 字节，将 `Tarinor` / `Skitty` 的 BL 和跳转解析到具体方法。
- [#42444908677](https://github.com/969981/PokeHome_Resources/actions/runs/42444908677)：扩展 `ILib.Unity.Net.ApiRequestBase` 下游函数。
- [#42445024402](https://github.com/969981/PokeHome_Resources/actions/runs/42445024402)：进一步核对原始字段表（成功）。

可证实的数据链：

```text
CheckSignatureCore.Check
  └─ UnitySendMessage("Azurill", "Tarinor", message)
      └─ CSM.Tarinor(string) @ 0x1D4AA34
          └─ CSM.Skitty(string) @ 0x1D4AB04
              ├─ ILib.Unity.Net.Draco.op_Implicit(string) @ 0x1F2CE50
              └─ ApiRequestBase.Chenipotte(Draco) @ 0x1F26E78
                  └─ ApiRequestBase.Charmillon(Draco,4,3) @ 0x1F26F1C
                      └─ 转换值写入 ApiRequestBase.Lineon +0x78
```

`ApiRequestBase` 的真实字段声明：

```csharp
private static Draco Lineon; // 0x78
```

`Draco` 为包含 `string Value` 的结构体。写入的原生指令 `0x1F26F08: str x0, [x9,#0x78]`，源于 `Charmillon` 返回值；`x9` 源于相应静态字段存储指针。**因此签名回调经转换写入网络请求基础类的一块静态存储，这一环已经不是单纯猜测。**

下一项尚未闭合的是找出 `Lineon` 的真正读取者、请求哪一部分使用它，以及 `400/9007` 究竟由哪个后端或本地错误分支产生。**不得把现有回调与字段写入证据当成已经修复自签名 APK 在线兼容。**

权威资料：[Obsidian 调用链](../../docs/obsidian/HOME41_ANDROID_SIGNATURE_TO_IL2CPP_API_CALLCHAIN_20261108.md)、[原生指令和字段报告](4.1.0/UNITY_SIGNATURE_DOWNSTREAM_TRACE.json)。


## 2026-11-08：Lineon 唯一读取者和序列化前数据链（真实 CI 通过）

本轮不再把“未找到直接读取”误当作字段未使用。第一版 ELF 扫描器只查看 `.text` 节，遗漏了实际 IL2CPP 可执行方法，已改为覆盖可执行 `PT_LOAD` 段，并以 `Chenipotte @ 0x1F26F08` 的已知静态字段写入作正控制。加长函数内寄存器追踪至 800 指令后，`ApiRequestBase.Parecool` `0x1F28474` 的 `ldr x22,[x8,#0x78]` 被匹配为 **Lineon 直接静态字段读取**，重复扫描起点已经按机器指令 RVA 去重为一条。

同偏移的 `ApiRequestBase.Ningale @ 0x1F29FC4` 被排除：`mov x19,x0` 证明其 `[x19,#0x78]` 来源为实例对象，而非静态 `Lineon`。

后续 `Parecool` 指令进一步证明：
- `0x1F28468/0x1F28480` 准备 `-4/-3` 参数，`0x1F28498` 再调用 `Charmillon(Lineon,-4,-3)`。
- `0x1F284A0` 使用 `Draco.op_Implicit`；`0x1F284AC` 写入对象偏移 `+0x58`。
- `0x1F284C4` 调用 `ApiRequestBase.SerializeToJson<object>`。这些是实机版本原生代码的静态指令证据，尚未独立观察最终 HTTP 请求字段。

CI 与原始报告：
- [TypeInfo 静态字段扫描 #42450870538](https://github.com/969981/PokeHome_Resources/actions/runs/42450870538)
- [独立全局 +0x78 读写清单 #42450817648](https://github.com/969981/PokeHome_Resources/actions/runs/42450817648)
- [Parecool/Ningale 方法级签名和逐指令断言 #42451023333](https://github.com/969981/PokeHome_Resources/actions/runs/42451023333)
- [唯一静态读取清单](4.1.0/LINEON_STATIC_XREF_AUDIT.json)、[偏移歧义清单](4.1.0/LINEON_BROAD_OFFSET_CANDIDATES.json)、[完整方法证据](4.1.0/LINEON_READER_METHOD_TRACE.json)
- [Obsidian 分析说明](../../docs/obsidian/HOME41_ANDROID_SIGNATURE_TO_IL2CPP_API_CALLCHAIN_20261108.md)

**结论边界：**现已证明签名衍生数据会流入客户端请求序列化前的构造流程；尚不能仅凭静态调用链确认最终发出的字段、服务端证书策略或 `400/9007` 错误产生位置。原版 APK 仍可显示 HOME 语言选择页，但修改后的自签名构建依旧没有恢复官方联网兼容性。


## 2026-11-08：Frida ARM64 首次请求实测，响应阶段差异已复现

[Actions #42460422767](https://github.com/969981/PokeHome_Resources/actions/runs/42460422767) 在同一一次性 Android 15 AVD 中，对 hash 验证的原始 HOME 4.1.0 APK 和只经 `apksigner` 重签名 APK 做对照。本轮 CI 的原版语言页验证与证据提交均成功；两组 Java/ARM64 Frida 钩子就绪，0 脚本异常，不注册、不修改 HTTP、不读取认证密钥。

- 两边都在启动后依次出现 Java 签名检查 → `CSM.Tarinor` → `ApiRequestBase.Lineon` 静态写入 → `Parecool` 读取 → JSON 序列化 → `UnityWebRequest.SendWebRequest`。
- 原版约 55.136 秒命中 `ApiRequestBase.Ningale` 的 `resultCode=200`，95 秒截图已在 HOME 官方语言选择页。原版有第二次 `SendWebRequest` 事件。
- 重签名约 36.961 秒命中同一 `Ningale` 回调，整数**不在 100–599 范围**；130 秒截图仍显示 `code:400 / detail code:9007`。
- 两组均未捕获 `UnityWebRequest.get_responseCode` 或 Java `HttpURLConnection.getResponseCode` 的真实 HTTP 状态。因此不能说 HTTP 200 vs HTTP 400，不能把 UI code 当 HTTP 状态。
- 静态 ARM64 方法调用者 [FIRST_REQUEST_NATIVE_CALLERS.json](4.1.0/FIRST_REQUEST_NATIVE_CALLERS.json) 确认 `Ningale` 是 `ApiRequestBase.Monaflemit` 的直接 `BL` 目标；`UnityWebRequest.SendWebRequest` 可由 `ILib.Unity.Net.IAWWW.<CoSendRequest>d__18.MoveNext` 直接调用；`get_responseCode` 的 6 处直接调用未发现 `IAWWW`，其缺席实际运行事件有代码层解释。间接调用未分析，不能解释成没有 HTTP。
- 主汇总：[FIRST_REQUEST_READONLY_AB.json](4.1.0/FIRST_REQUEST_READONLY_AB.json)；技术文档：[HOME41_FIRST_REQUEST_READONLY_AB_20261108.md](../../docs/obsidian/HOME41_FIRST_REQUEST_READONLY_AB_20261108.md)。

**可证实：** 重签名 APK 至少执行完签名衍生字段处理和首次请求构造/发送方法，并进入应用响应回调；故障差异最早在这条可观察响应阶段出现。**不可证实：** 真实 HTTP 状态、某个官方服务器是否拒绝证书、应用错误 `9007` 的精确定义或是否可以在无发行方授权下恢复在线初始化。继续禁止把仅能安装和启动的 Smali 包描述成在线修复成功。
