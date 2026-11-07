---
title: "Pokémon HOME Android 4.1.0｜最早六位训练家 ID 与模拟器验收"
aliases:
  - HOME 4.1.0 UTID first disclosure
tags:
  - pokemon-home
  - android
  - il2cpp
  - frida
  - utid
  - tid7
  - runtime-evidence
status: "静态定位完成；真实新账号首次 UTID 读取待验证"
version: "4.1.0"
updated: "2026-11-07"
---

# 最早六位训练家 ID：注册、回包、观察、模拟器

> [!important] 结论
> 不必等待 HOME 下载模型或走完主界面才能开始判断 ID。**最早有证据的可观察点是第一个包含 \`basic.utid\` 的服务器公共响应写入 \`UDManager.SetBasic\`**。但第一个这样的响应是否就是注册回包、\`utid\` 到六位显示 ID 是否适用 \`% 1000000\`，都**尚无真实新账号验证**。

## Obsidian 导航

- [[HOME41_EARLIEST_TRAINER_ID|最早训练家 ID 的函数分析]]
- [[ANDROID41_MODEL_CACHE_LOADER_MAP|模型与 AssetBundle 加载器入口]]
- [[ANDROID41_RUNTIME_CACHE_AND_SPECIES|运行时缓存与物种映射]]
- [[Android/UTID_CID_NATIVE_CALLCHAIN_20261013|UTID / CID 原生证据]]
- [[Android/REGISTRATION_ID_REROLL_REQUEST_AUDIT_20261013|注销-注册请求审计]]

## 1. 真实静态证据

| 观察点 | Android 4.1.0 RVA | 确认程度 |
|---|---:|---|
| \`ApiRequestAuthRegisterUser.SerializeRequestParameter\` | \`0x1D334A4\` | 原始 Native 字段构造 |
| \`ApiRequestAuthRegisterUser.CallAfterResponse\` | \`0x1D33294\` | 注册结果回调；专属 DTO 只有 \`uuid/apRes/naRes\` |
| \`ApiManager.CallbackResponseHook\` 中读取 \`ResponseParamCommon.basic\` | \`0x1D2BA60\` | \`LDR X0,[X21,#0x18]\` |
| 公共响应触发 \`UDManager.SetBasic\` | \`0x1D2BA64\` → \`0x1D763D0\` | 原始机器码 BL |
| \`UD_Basic.utid\` 被写入 | \`0x1D76C1C/20\` | 托管字符串引用 \`+0xF0\`，GC write barrier |

特别注意：\`utid +0xF0\` 是 **IL2CPP 字符串对象指针**，不是可以直接写 \`888888\` 的整数偏移。真实目标六位号码应当从服务器发出的值只读计算并与 UI 验证；**客户端内存显示篡改不等于换云端账户 ID**。

## 2. 最短可验证的观察路径

\`\`\`mermaid
flowchart TD
    A[官方注册与认证] --> B{注册专属响应}
    B --> C[得到 uuid / apRes / naRes]
    C --> D[建立 token 与必要登录]
    B -. 公共 basic? 尚未实测 .-> E
    D --> E[第一个包含 basic.utid 的公共响应]
    E --> F[UDManager.SetBasic 收到 utid]
    F --> G{是否为合法数字字符串}
    G -->|是| H[计算候选 6 位 ID]
    G -->|否| I[仅记录状态，不猜测]
    H --> J{是否等于目标 888888}
    J -->|是| K[记录候选结果，等待游戏可见 ID 校验]
    J -->|否| L[正常结束本次只读检查]
\`\`\`

**不必等待：**图鉴下载、模型/音效下载、进入盒子、进首页、打开账号资料页。**不可随意跳过：**服务端真正创建新 HOME 身份、官方认证必要步骤与协议服务端约束。

## 3. 模拟器实测历史与本轮目标

### 已执行：2026-11-07
- Actions [#42333306343](https://github.com/969981/PokeHome_Resources/actions/runs/42333306343) 与 [#42333843019](https://github.com/969981/PokeHome_Resources/actions/runs/42333843019)。
- Android API 35；ABI \`x86_64,arm64-v8a\`，转译器 \`libndk_translation.so\`。
- APK SHA \`8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1\`。
- 安装成功；进程运行并存活；初次两轮资源缓存扫描均为 0。
- 两张实际截图显示 Android 系统 **“Viewing full screen → Got it”** 与相机权限 **“Don't allow / Only this time / While using the app”** 的提示叠加；并未进入真实注册、登录或图鉴 UI。

### 本轮新增：
- \`tools/android41_ui_flow.py\`：Android \`uiautomator dump\` 后 **仅当**匹配系统进程 \`com.android.systemui\` 的 \`Got it\` 和系统权限控制器的 \`Don't allow\` 时点击。
- 不会自动按游戏内服务条款、注册、Nintendo 登录、授权、删除或购买相关按钮。
- 运行后生成 \`screen_after_system_prompts.png\`、\`screen_after_wait.png\` 和 JSON 行为记录。
- 如果 \`uiautomator\` 无法识别原生提示，就会停止，不用硬编码坐标乱点游戏。
- 不采集账号、令牌或完整 UI XML；PNG 只放私有、短期 Actions Artifact。

## 4. 只读 UTID 观察器

\`tools/early_home_tid_observer.js\` 是 Frida 只读观察器。只监听同一 Build 下的注册/SetBasic 方法，记录时间顺序、第一次数值型 UTID 的 **六位候选**，不发网络请求。**ARM64 原生实机附加未测**；在 x86_64 ARM native bridge 模拟器上 Frida attach 地址的正确性也未证明。

\`\`\`shell
frida -U -f jp.pokemon.pokemonhome -l tools/early_home_tid_observer.js
\`\`\`

因为最早公共 \`basic\` 的真实来源暂不明，即使观察到注册回调和 SetBasic 靠近，仍须通过响应类型或原生调用链定位实际 producer。不能把 \`uuid\` 当 ID，也不能把 \`cid/supid\` 混成训练家 ID。

## 5. 本轮验收要求

- 系统弹窗的点击必须有 UI 层级的 Android 原生包名 + 对应按钮文字证据。
- 应用进程启动并持续运行不等于已成功注册。
- 截图须显示当前 UI 才能确认是否进到游戏首屏、语言选项、TOS 或登录界面。
- 只在**自有、空白、授权测试账号**下观察 \`basic.utid\`；不得批量刷注册、反复删号、使用或保存令牌。
- 只有真实 ID 与游戏显示六位号码交叉吻合，才能升级结论为 \`TID7_CONFIRMED\`。
- 当前 \`UTID_TIMING\` = 未完成真实新账户回包验证；后续回填实际 Actions run id 和结果。

## 6. 私有仓库证据产物位置

- \`Unpack/Android/4.1.0/_meta/emulator_probe_summary.json\`：真实系统/安装/进程/缓存结果。
- \`tools/android41_ui_flow.py\` 与 \`tools/test_android41_ui_flow.py\`：系统弹窗解析器及单元测试。
- \`tools/early_home_tid_observer.js\`：只读 native hook。
- \`docs/HOME41_EARLIEST_TRAINER_ID.md\`：原始早期 ID 静态分析。
- \`docs/obsidian/HOME41_UTID_EARLY_READ_AND_EMULATOR.md\`：本文。


## 7. 2026-11-07 本轮实测：UIAutomator 识别盲区

- 已完成 [Actions #42336066871](https://github.com/969981/PokeHome_Resources/actions/runs/42336066871)：工作流成功；APK 安装成功；HOME 进程存活，致命崩溃计数 0。
- \`system_prompt_actions\` 实际返回 \`no_android_system_prompt_matched\`。
- \`screen_after_wait.png\` 直接证实还停留在 Android 系统 **Viewing full screen → Got it**；不是 Nintendo 登录、注册成功或模型下载页面。
- 实际缓存对象 0，\`pokemon_cache_summary.json\` = \`no_cached_unity_assets\`；没有找到 ID 或建立新账号。
- 由此新增 \`screenshot_immersive_hint_position\`，只在严格命中真实 Android 15 全屏提示图像特征时点击 OS 按钮；随后重试 UIAutomator 对权限拒绝按钮的处理。这是一种针对**已确认系统画面**的有限回退，不允许随意自动点击 HOME UI。
- 必须用下一轮模拟器截图和 JSON 证明 OS 弹窗已经消失，不能以通过单元测试代替真实 UI 验收。


## 8. 2026-11-07 第四轮：可复现实测像素与视觉误判修复

- [Actions #42336616397](https://github.com/969981/PokeHome_Resources/actions/runs/42336616397) 成功执行，实际报告仍为 \`no_android_system_prompt_matched\`、0 缓存、未注册。
- \`screen_15s.png\`：在 1080×2340 设备上，点位 \`(0.5w,0.055h)\`、\`(0.75w,0.24h)\` 是 Android 提示白色背景；\`(0.85w,0.28h)\` 是蓝色 \`Got it\` 按钮；\`(0.5w,0.39h)\` 是下方灰色区域。
- \`screen_after_system_prompts.png\`：顶部与蓝色按钮未变，但相机系统权限弹窗出现使 \`(0.5w,0.9h)\` 从 \`(127,127,127)\` 变为 \`(51,51,51)\`。旧规则对该下半屏点位的要求属于**过度检测**，是误判根因。
- 修复：仅由稳定的顶部 OS 白色面板 + 蓝色按钮 + 紧邻背景区域四个点位判断，并在运行 \`uiautomator\` 前先试此已知提示的视觉检测。**没有使用 OCR，不会识别或点击 HOME 业务页面**。
- 当前修复仍需下一次 Actions 真实截图与 \`system_prompt_actions\` 报告确认，不能仅凭像素样例单元测试声称游戏已过登录。


## 9. 2026-11-07 第五轮：改为初始截图复用与 OS 设置双验证

- [Actions #42337122744](https://github.com/969981/PokeHome_Resources/actions/runs/42337122744) CI success，但 \`system_prompt_actions\` 仍为 \`no_android_system_prompt_matched\`。
- 本轮 \`screen_15s.png\` 的实际 1080×2340 像素符合屏幕识别标准：顶部 \`(238,237,244)\`、蓝色按钮 \`(71,93,146)\`、下方灰色 \`(127,127,127)\`。因此不是该已存图片本身缺少视觉特征。
- 下一轮增加 \`initial_screenshot_immersive_signature\`，使用**已成功落盘的 \`screen_15s.png\` 原始字节**做同一严格匹配，避免第二次截屏与权限弹窗的异步竞争。
- 同时使用 Android 模拟器的 \`settings put secure immersive_mode_confirmations confirmed\` 设置仅跳过**操作系统**全屏使用说明，不绕过 Pokémon HOME 自身协议、登录或授权。运行时会读回记录为 \`android_immersive_setting\`。
- 结果必须结合三个字段：\`android_immersive_setting\`、\`initial_screenshot_immersive_signature\`、\`system_prompt_actions\`。系统截图与缓存都保留独立证据；CI 成功本身仍不代表 HOME 账号注册或 ID 获取成功。


## 10. 2026-11-07 第六轮：系统提示可禁用，但应用启动后退出

- [Actions #42337686894](https://github.com/969981/PokeHome_Resources/actions/runs/42337686894) 完成。
- Android API 35 的 \`settings put secure immersive_mode_confirmations confirmed\` 写入成功且读回 \`confirmed\`，两张实际截图都是 Android 桌面而非全屏使用提示。**这一次不是 UI 遮罩造成的“进程存活假象”**。
- APK 安装和启动事件返回成功，但 \`process_at_15s=false\`、\`process_after_wait=false\`，最终状态 \`app_process_ended\`。实际截图在桌面，HOME 图标存在。
- 既有四类 logcat 崩溃关键字统计均为 0，不足以证明不存在主动退出或其他进程错误。
- 没有登录、首次 \`basic.utid\`、训练家六位 ID 或游戏模型缓存；不是“HOME 已正常进入游戏”。
- 再次执行时改为 45 秒快速诊断，额外收集 Android 系统 exit-info、\`am_proc_died\` / \`am_crash\` 计数和最多 40 条经过过滤与脱敏的相关系统日志，禁止保存完整 logcat、帐号标识和网络令牌。
- **动态可用性结论**：在没有测试帐号与正常 APP 界面的前提下，本方案仍不能验证 \`register\` 专属/公共响应首发 UTID；需先排查启动退出并确认当前版本是否支持这套测试系统。


## 11. 2026-11-07 第七轮：真正进入 HOME 的首次语言选择页

- [Actions #42338242991](https://github.com/969981/PokeHome_Resources/actions/runs/42338242991) 全部完成，\`result=app_running_no_recognized_cache_assets\`。
- 安卓 API35 / \`libndk_translation.so\`；安装成功、启动时与观察结束进程均存活，致命崩溃计数、ANR 和 \`am_crash\` 均为 0。
- \`android_immersive_setting=confirmed\`，系统全屏提示已被正确处理；系统权限对话框共三次选择 \`deny_android_runtime_permission\` 且返回成功。该权限拒绝只属于 OS，不涉及 Pokémon HOME 条款。
- **最重要的真实视觉证据**：\`screen_after_wait.png\` 显示 Pokémon HOME 4.1.0 自身的 \`Choose Your Language\` 界面，有 English、简体中文、繁體中文等语言项，确认已经进入游戏 APP 首次使用 UI，而不是 Android 桌面。
- 目前仍无登录、注册、UUID、UTID 或 HOME 六位训练家 ID，缓存 \`0\`：正常，因为只是语言选择页。
- 下一轮脚本仅在屏幕截图与已观察的 HOME 语言选择页像素布局同时匹配时点击 \`简体中文\`（首选语言设置），等待并截取下一屏。**明确禁止自动确认协议、Nintendo 登录或触发云端账户创建/删除**。
- 工具字段 \`home_language_screen_recognized\` 和 \`simplified_chinese_selected\` 分别表示截图检测与 ADB 点击事件；即使后者为 true 也须通过下一屏截图证明语言实际生效。


## 12. 2026-11-07 第八轮：首次语言页与原生相机权限提示的时序差异

- [Actions #42338672876](https://github.com/969981/PokeHome_Resources/actions/runs/42338672876) 完成，\`install_status=ok\`、\`process_at_15s=true\`、\`process_after_wait=true\`。
- 本轮 \`home_language_screen_recognized=false\`、\`simplified_chinese_selected=false\`：**没有做任何游戏内点击**。
- 最终真实截图 \`screen_after_wait.png\` 仍为 Android 系统相机权限请求：\`Allow Pokémon HOME to take pictures and record video?\`，按钮含 \`Don't allow\`，下方为灰色遮罩。\`system_prompt_actions=no_android_system_prompt_matched\`，权限处理没有命中。
- 这与第七轮已经成功完成三次系统权限拒绝并进入 \`Choose Your Language\` 的实测结果并不冲突：同一个 Android API35 转译环境存在时序/原生 UI 层级识别差异。
- 后续改进应优先在一次性模拟器内设置相机等系统运行时权限的拒绝标志，或完善与截图签名绑定的权限按钮点击，再测试完整 UI；**不能**以这次 CI success 虚构语言选项已经选中。
- 当前最重要的业务结论不变：注册专属响应返回 \`uuid\`，六位训练家 ID 的最早可观察候选仍是首次 \`ResponseParamCommon.basic.utid → UDManager.SetBasic\`。真实前后时序、UTID 数值语义、服务器是否每次创建新 ID 均未实测。
- 所有账号操作保持未执行状态；现阶段不要开发无证据的大批量账户创建与删除循环。

### 本阶段验收矩阵

| 检查 | 状态 | 证据 |
|---|---|---|
| 4.1.0 APK 在 GitHub Actions AVD 安装 | 已通过 | run 42338242991、42338672876 |
| ARM64 转译器正常加载 APK | 已通过 | \`libndk_translation.so\` |
| HOME 首次语言选择页存在且能显示 | 已通过 | run 42338242991 Screenshot |
| 相机权限自动稳定处理 | **未通过** | run 42338672876 |
| 语言项 \`简体中文\` 实际选中 | **未验证** | run 42338672876 未触发点击 |
| 首次 \`basic.utid\` 实机读到 | **未验证** | 尚无授权注册会话 |
| HOME 六位训练家 ID 确认为 \`utid % 10^6\` | **未验证** | 仍缺一组官方 UI 对照 |
| 指定 \`888888\` 由服务端生成/可多次重刷 | **未验证** | 没有服务器分配算法或安全批量注册机制 |


## 13. 2026-11-07 第九轮：Camera 权限确定性初始化和真实回调时间对照器

### 为什么改成 Android 权限管理器配置

此前多轮 Actions 是权限弹窗的 **OS 权限层** 不稳定，而不是 HOME 账号 API 的故障。本次测试模拟器创建时已设置 \`-camera-back none -camera-front none\`，不会暴露物理摄像头。仅在此一次性、无用户数据的测试设备上，安装 APK 后通过 \`pm grant jp.pokemon.pokemonhome android.permission.CAMERA\`，并用 \`dumpsys package\` 读回 \`granted=true\` 验证。其它 Android 危险权限不授予；之前版本通过屏幕点击拒绝的方式保留作为 fallback。此权限变更仅影响测试 AVD，不代表正常设备建议关闭权限保护。

**验收字段**：\`camera_permission_preflight.status=verified_granted\`；如果不是这个值，不能声明权限问题已解决，需保留实际截图并报告原因。官方 Android 文档明确支持在测试中通过 \`pm\` 对危险权限进行配置；这是官方测试接口，不是绕过 HOME 的授权/认证。

### 时间线对照：只有真实注册回调才可以回答“早多少秒”

使用自有、合法的新 HOME 测试账号且**已实际阅读/确认官方条款**后，在 ARM64 原生设备上启动只读 Frida 观察器。它会记三个事件：

- \`registration_request_serializer_enter\` → 构造注册请求；
- \`registration_response_handler_enter\` → 注册专属响应回调；
- \`first_basic_utid\` → 首次可读的 \`UDManager.SetBasic\` 数字候选。

\`tools/home41_auth_timeline.py\` 接收这些事件的日志，计算 \`Δt=first_basic_utid.elapsed_ms - registration_response_handler_enter.elapsed_ms\`，但**不会据此断言首个 \`basic\` 属于注册响应**；仍需绑定真正的响应请求类别。若 \`first_basic_utid\` 没有出现，则明确返回 \`no_real_basic_utid_observed\`。不会把预测、随机生成的数字或静态 RVA 当作在线发号实测。

\`\`\`bash
python tools/home41_auth_timeline.py --input /path/to/redacted-frida-events.jsonl \
  --output home41_auth_timeline_summary.json
\`\`\`

**严格的限制**：

- 官方 Nintendo 支持文档：手机端可以不关联 Nintendo Account 使用，但第一次安装选择语言、国家/地区、生日、阅读并同意条款都是正常初始化步骤，不能凭空捏造个人出生日期；部分服务还要求首次就关联 Nintendo Account。
- 此 GitHub Actions 运行器是短生命周期的 headless AVD，当前没有由用户提供的合法空白账号、生日/国家选择以及条款确认，因此**不可能凭本次运行证明新注册回调与 \`basic.utid\` 的真实顺序**。
- \`home41_auth_timeline.py\` 的测试数据只是测试时间线排序与过滤，不能宣称测试时创建了 HOME 云端账号。
- Android IL2CPP 地址针对 ARM64 ELF；x86_64 使用 \`libndk_translation\`，尚未证明 Frida 能在其转译的 ARM64 代码执行 \`Interceptor.attach\`，不能假装完成运行时 hook。

### 官方参考

- Nintendo Getting Started: https://en-americas-support.nintendo.com/app/answers/detail/a_id/48857
- Nintendo FAQ (mobile guest allowed): https://en-americas-support.nintendo.com/app/answers/detail/p/856/a_id/48803
- Android testing runtime permission: https://android.googlesource.com/platform/frameworks/base/+/refs/heads/main/core/java/android/permission/Permissions.md


## 14. 第九轮实测：相机成功预授予，下一个阻塞是位置权限

- [Actions #42339409576](https://github.com/969981/PokeHome_Resources/actions/runs/42339409576) 成功完成。
- \`camera_permission_preflight.status=verified_granted\`，\`grant_command_ok=true\`、\`appop_command_ok=true\`，说明受控、无摄像头的 GitHub AVD 已可靠消除相机弹窗；没有改动其他危险权限。
- 但 \`system_prompt_actions=hierarchy_unavailable\`，最终 screenshot 实际为 Android **“Allow Pokémon HOME to access this device's location?”**，并不是 HOME 游戏错误，也不是注册/登录页面。
- 新实现 \`predeny_emulator_location\`：对 APK 中声明的 \`ACCESS_FINE_LOCATION\` 和 \`ACCESS_COARSE_LOCATION\`，在临时 AVD 上设置 revoked + \`USER_SET|USER_FIXED\` 并配置 appops ignore，\`dumpsys package\` 再次核实两权限均 \`granted=false\`。**不向 HOME 授予位置访问**。
- 只有 \`location_permission_preflight.status=verified_denied_fixed\` 才算系统位置权限处理通过；如果提示仍出现，以截图为准继续排查。不同设备的 OS 行为可能不同，不能把模拟器的一次结果视为所有 Android 设备的保证。
- 第九轮 \`home_language_screen_recognized=false\`、\`simplified_chinese_selected=false\`、\`auth_registration_status=not_attempted_no_test_account\`、\`first_basic_utid_status=not_observed\`，明确**没有取得 ID**。
