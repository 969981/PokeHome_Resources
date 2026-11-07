# Pokémon HOME Android 4.1.0 — Smali 重新构建的真实模拟器验收

> 状态：**Smali 重新汇编及 APK 构建通过；官方语言选择界面未在重新签名的三个变体中通过验收。** 测试于 2026-11-07 执行。
>
> 证据：[首次 A/B #42366271778](https://github.com/969981/PokeHome_Resources/actions/runs/42366271778) · [四变体对比 #42366966148](https://github.com/969981/PokeHome_Resources/actions/runs/42366966148) · [严格原生 UI 验收 #42367756274](https://github.com/969981/PokeHome_Resources/actions/runs/42367756274) · [机器报告](4.1.0/DIFFERENTIAL_RUNTIME_REPORT.json)

## 目的与环境

本工程从 `14,841` 份 Smali 源文件重新汇编 3 个 DEX，不复用 `build/classes*.dex` 缓存；使用 Apktool 3.0.3、`zipalign`、`apksigner` 和一次性测试密钥重建。Android 15 / API 35 x86_64 Google APIs AVD，native bridge 为 `libndk_translation.so`，可安装原始 arm64-v8a APK。

源 APK SHA-256: `8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`。

所有测试都在新模拟器会话中卸载后重新安装。Android CAMERA 仅针对无实体摄像头的模拟器预授权；定位和通知权限在 Android OS 层预设为拒绝。未接受 HOME 服务条款、创建账号、绑定 Nintendo Account、读取用户私有资料或执行批量操作。

## 最终四组实际结果

| 变体 | 35/60 秒进程 | 官方 HOME 语言选择页 | 60 秒截图及现象 |
| --- | --- | --- | --- |
| 完整 Apktool 重建、测试证书签名 | 存活 | **未通过** | HOME 弹出通信错误，`code:400` / `detail code:9007` |
| 原版资源 + 重编译 Smali DEX、测试证书签名 | 存活 | **未通过** | 相同的 `400 / 9007` 弹窗 |
| 原始 APK 重新 `zipalign` + 测试证书签名（没有改任何代码） | 存活 | **未通过** | 相同的 `400 / 9007` 弹窗 |
| 原封未动的原版 APK | 存活 | **通过** | 可见 `Choose Your Language` 原生语言选择页 |

证据来源：`4.1.0/DIFFERENTIAL_RUNTIME_REPORT.json`（自动提交）；四份 60 秒原始 PNG 在 [严格验收 #42367756274 的 Actions Artifact](https://github.com/969981/PokeHome_Resources/actions/runs/42367756274)。机器结果字段：`resigned_original_fails_original_passes_signature_or_ziplayout_suspected`。

**说明：** 400 / 9007 是**游戏 UI 显示出的错误码**，尚未捕获证明它对应哪一个后端校验分支，也未从代码级定位含义。因此“签名或完整性校验导致”是基于对照试验的强嫌疑，不是已证实的反编译结果。

## 首次绿色结果为什么不成立

第一次运行的两个变体在 35 秒都有彩色屏幕，但回取 PNG 后确认屏幕实际上是 **Android 系统的定位权限弹窗**，不是 HOME 游戏 UI。那次四组运行的 `all_four_launch_visible` 仅说明进程与 OS 弹窗的可见性，是**假阳性**，不能当作成功验收。

严格版先用 `pm revoke`、`pm set-permission-flags user-set user-fixed` 和 `appops ignore` 确认拒绝定位，再使用先前在真实 HOME 4.1.0 上校准的语言列表特征色进行截图核验。结果以 UI 识别而非 APK 编译、PID 存活或像素非黑作为判定。

## 文件差异归因

首轮逐 ZIP Entry 字节哈希对照：

- 原版：`1,810` 个成员；完整 Apktool 重建版：`1,806` 个成员（部分成员拆并、来源 metadata 与 APK 重封装行为需要单独对照）。
- 共同成员的 `lib/` 下原生 SO 内容相同；`assets/` 下 Unity 本地资源内容相同。
- 共同成员内发现内容变化的主要类别为 DEX（3）、Manifest（1）、Android Resource（4）。
- 这说明不能把错误归咎于原生 SO 或 Unity 素材本体发生了字节修改，但**不排除签名、压缩、ZIP 布局、Android Manifest 语义以及服务端校验影响**。

## 结论及后续验证要求

本轮已经实测并确认：

1. `apktool b -f` 能根据全部真实 Smali 源码生成可安装的 3 DEX APK，Android 签名验证通过。
2. 在测试设备上，重建版、DEX 混合版、原版重新对齐签名版均不能通过 HOME 初始联网校验；它们都显示 `400/9007`。
3. 只有原始未修改包完成了 HOME 语言选择页验收。因此**不得宣称“重建 APK 已正常运行”或“与原版等价”**。

要进一步区分签名与 ZIP 布局，应在离线可控的实验环境中分别研究原版 ZIP 对齐前后差异和安装签名证书指纹，并定位客户端本地是否有包签名读取逻辑；任何涉及官方服务端的数据交互，均不得虚构或绕过未获授权的服务端校验。完成这些验证之前，建议继续使用**原版 APK 作为运行基线**，以 Smali 工程作为代码研究与本地可重建输入，不把测试证书包安装在现有真实 HOME 账号环境中。
