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
- [[../Android/UTID_CID_NATIVE_CALLCHAIN_20261013|UTID / CID 原生证据]]
- [[../Android/REGISTRATION_ID_REROLL_REQUEST_AUDIT_20261013|注销-注册请求审计]]

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
