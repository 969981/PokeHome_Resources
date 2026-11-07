# Pokémon HOME Android 4.1.0：签名失效后的可用调试方案

**适用状态：** 重新构建的 Smali 项目已在 CI 确认可汇编，但**重签名 APK 目前不能通过官方 HOME 首次通信**。不是因为 `apktool b` 本身失败。本页描述经过可追溯测试的替代研发流程，不声称已经修复官方后端登录。

## 为什么不能直接在 Smali 改掉错误

重签名后的 APK 实机出现 `code:400 / detail code:9007`；然而完整未修改的官方签名 APK 能进入 HOME 语言选择页。更严格的对照中，即使不重编译 3 个 DEX、不改 `lib/`、不改 `assets/`、不执行 Apktool / zipalign，仅**直接重签名**仍复现相同错误。

相关源报告：

- [纯重签名对照](4.1.0/DIRECT_RESIGN_PROOF.json)
- [四变体对照](4.1.0/DIFFERENTIAL_RUNTIME_REPORT.json)
- [签名方法静态审计](4.1.0/STATIC_SIGNATURE_TRACE.json)
- [纯签名 / OS 无修改只读 Frida 对照](4.1.0/FRIDA_SIGNATURE_CALL_TRACE.json)

`jp/co/ilca/www/checksignature/CheckSignatureCore.smali` 可以在 Java 端读取安装包的签名信息，并通过 `UnityPlayer.UnitySendMessage` 发送到 Unity 层，**但仅有代码存在不代表该类启动时执行或其输出导致错误**。`libsigner.so` 另属于 Adjust SDK 的签名组件，不能认作任天堂/ILCA 官方服务端的认证实现。

更改的内容包括原版证书、公钥关联的 APK 签名块、`META-INF/GOOGPLAY.*` 及来源印章 `stamp-cert-sha256`。还没有逐项证明其中哪个因子被官方服务校验。与不同 App Signing 私钥对应的受信任证书不能通过修改本地字节、混入原版 `META-INF` 文件或普通 `apksigner` 重建得到。

## 实际可行路径

| 目标 | 方法 | 能否保持官方签名 |
| --- | --- | --- |
| 分析真实网络初始化与 HOME UI | 安装、运行**原封未动**的原版 APK；Frida 只读观察 | 是 |
| 定位 Smali/Java 代码问题 | 在自签名 APK 上构建、执行本地测试、比较日志 | 否 |
| 运行需修改的原生/Java 本地实验 | 使用自己控制的测试环境或仅观测原版运行时行为；禁止把结果说成官网验收 | 视实验而定 |
| 发布能正常使用官方线上服务的修改版 | 需要有权限使用发行商认可的签名/发布流程或其授权测试环境 | 普通自签名不具备此条件 |

**已添加的可执行调试文件：**

- `Android/Smali/tools/signature_trace_agent.js`：Frida 17 只读 Hook `CheckSignatureCore.Check` 和签名消息转交 Unity 的事件类型；不记录原始证书字符串、哈希、回调参数、账号数据。
- `Android/Smali/tools/signature_frida_ab.py`：同一一次性 AVD 中验证真正原版与直接重签名版，安装前执行卸载重装、预拒绝定位，分别采样 35 / 60 秒画面。
- `.github/workflows/home41-original-frida-signature-ab.yml`：自动安装官方 Frida 17.26.1 server、编译 Java bridge、进行双包比较，并将图片/脱敏事件留在**私有** Actions Artifact 中；结果写回 `FRIDA_SIGNATURE_CALL_TRACE.json`。
- 原有 `tools/home41_frida_interface_agent.js` 与 `tools/home41_frida_interface_monitor.py` 可用于观察原版在无重签名情况下的初始化过程和只读网络事件类别。它们不恢复完整 TLS/Unity 原生请求内容。

## 两个互相独立的验收指标

1. **源码可重建：** `apktool b -f`、Android 安装包签名校验、DEX 数、资源完整性都通过。
2. **官方在线启动：** 实际 HOME `Choose Your Language` 页面显示；不能以 PID、纯彩色屏幕、Android 权限弹窗或没有 Java crash 代替。

未满足第二项前，不应给用户发布「可正常联网 HOME 4.1.0 修改版」的结论。

## 重要限制

此工作流不会伪造官方证书、绕过 Android 签名校验、篡改服务端响应或登录 Token，也不执行注册、批量账号创建、删除。Frida 在已经安装且签名有效的原版上附加观察器，本身不能证明修改后的 APK 也获得了相同的服务端信任。若未来需要合法发行支持官方服务的定制版本，需由应用发行方/官方平台提供签名和测试环境。
