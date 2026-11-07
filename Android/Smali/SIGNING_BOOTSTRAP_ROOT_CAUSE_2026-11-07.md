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
