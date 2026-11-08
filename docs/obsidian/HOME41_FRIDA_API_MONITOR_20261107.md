---
title: Pokémon HOME 4.1.0 — Frida 初始化接口只读监控
tags:
  - pokemon-home
  - android
  - frida
  - il2cpp
  - obsidian
date: 2026-11-07
status: implemented-ci-verification-pending
---

# Pokémon HOME Android 4.1.0 — Frida 初始化接口只读监控

> 仅研究自己授权的空白测试流程。**不记录 HTTP 全量响应、Cookie、OAuth Token、登录凭据或原始完整 UTID；不重放 API、不绕过 TLS、不签名伪造任何服务端响应，不创建/删除账号。**

## 一、与 UI 初始化的关系

已确认真实模拟器运行 [#42368887392](https://github.com/969981/PokeHome_Resources/actions/runs/42368887392)：从冷启动自动完成语言=简体中文、地区=亚太、中国大陆，进入出生日期页面。本地月份选择 **4**、日期选择 **5**，最终截图文件为 \`month_4_day_5_unsubmitted_form.png\`，表单实际显示 **年未选、月=4、日=5**。日期目标为 **1999-04-05**；年份 1999 尚未在列表中找到。该运行未提交出生日期、协议或注册账号，亦未观察到 \`basic.utid\`。

## 二、静态 IL2CPP 研究已有的地址锚点

来源：当前仓库的 \`tools/early_home_tid_observer.js\` 和 \`tools/home41_auth_symbol_audit.py\`，**对应特定 HOME 4.1.0 ARM64 libil2cpp.so，不能在 x86_64 模拟器直接使用**。

| 目标阶段 | 已知 ARM64 RVA | 证据类型 |
| --- | --- | --- |
| \`ApiRequestAuthRegisterUser.SerializeRequestParameter\` | \`0x1D334A4\` | 静态 IL2CppDumper 候选 |
| \`ApiRequestAuthRegisterUser.CallAfterResponse\` | \`0x1D33294\` | 静态方法与回调候选 |
| Token 回调 | \`0x1D35AD0\` | 静态回调候选 |
| Login serializer | \`0x1D3BE50\` | 静态请求候选 |
| Login 回调 | \`0x1D3C020\` | 静态响应候选 |
| \`UDManager.SetBasic\` | \`0x1D763D0\` | 静态基础数据写入入口 |

不能把静态地址正确、方法命中、真实网络响应以及六位 TID7 语义等同。需分别收集调用时间和实际首次 \`basic.utid\`，再与 HOME UI 显示对账。没有经过真实 ARM64 执行就不宣布完成。

## 三、Frida 17.26.1 工作流

新增的工具：

- \`tools/home41_frida_server_setup.py\`：仅针对 GitHub Actions 一次性 root AVD，获取官方 frida/frida release **17.26.1** 的 \`frida-server-17.26.1-android-x86_64.xz\`，校验 GitHub API 官方发布的 SHA256 digest。安装到 \`/data/local/tmp/home41-frida-server\`，使用 \`-l 127.0.0.1:27042 -D\` 启动，并通过 ADB forward 连接。此步骤失败时记录安全状态，不会修改安装包或跳过正常 HOME UI。
- \`tools/home41_frida_interface_agent.js\`：通过官方 \`frida-java-bridge\` 和 \`frida-compile\` 打包。在 Frida spawn-resume 后只读监测 \`java.net.URL.openConnection\`、\`HttpURLConnection.getResponseCode\`、\`getaddrinfo\` DNS 相关事件及 \`libil2cpp.so\` 加载状况。仅输出分类，不输出网址、Cookie、Token、请求/响应 body、主机名。**Unity 原生网络通道未必经过 Java Hook。**
- \`tools/home41_frida_interface_monitor.py\`：在原 \`android41_emulator_probe.py\` 运行正常 UI 初始化前，由 Python 连接 ADB-forwarded Frida server，\`spawn\` HOME，\`attach\`，加载 agent（ARM64 时另可加载现有静态脚本），然后 \`resume\`，最后导出严格白名单事件。\`frida_interface_summary.json\` 和 \`frida_interface_events.jsonl\`。
- \`tools/test_home41_frida_interface_monitor.py\`：覆盖事件白名单、去除敏感资料、虚拟设备启动/恢复顺序及无 Frida Server 时安全降级。
- 主模拟器工作流 \`.github/workflows/android41-emulator-cache.yml\` 支持 Frida 17 安装和完整试验。

**注意 Frida 17 不再默认内置 Java Bridge**。由 Python \`Session.create_script\` 载入的 Java Agent 必须使用 \`import Java from "frida-java-bridge"\` 并先交给 \`frida-compile\` 打包；不能把旧 \`Java.perform\` 片段原样直接传给新版 Session。详见官方：https://frida.re/docs/bridges/ 。

## 四、只允许落盘的字段

| 事件 | 仅保存 |
| --- | --- |
| \`frida_agent_loaded\` | 事件名、启动后毫秒数 |
| \`native_arch_report\` | \`x64\`/ \`arm64\` 等架构类别 |
| \`java_http_request_open\` | 规范化类别：register/token/login/locale/basic_profile/other |
| \`java_http_response_status\` | 类别与 HTTP 状态码（100～599） |
| \`pokemon_dns_query\` | DNS 事件标志，不保存域名 |
| \`il2cpp_module_seen\` | 模块加载标志，不保存内存地址 |
| \`registration_* / login_* / token_*\` | 已验证静态位置的阶段时间戳（ARM64 条件） |
| \`first_basic_utid\` | 事件是否发生，不保存 UTID 字符串 |

事件总数强制限制为 180，未知字段全部丢弃。脚本运行失败只保存错误**类型**，不保存系统异常文本。这个记录不是解密 HTTP 响应，因此不能伪称获得到服务器原始包。

## 五、实际验收判据

1. \`frida_server_setup.json.status == "ready"\`：实际在模拟器成功安装/启动 Frida Server，不能以下载成功代替。
2. \`frida_interface_summary.json.status == "spawn_attach_resumed"\` 且 \`frida_agent_loaded=true\`：Frida Agent 已附加。
3. \`java_hook_ready=true\` 或 \`dns_hook_ready=true\`：相应只读网络观测点已安装。**仅安装并不代表有 HTTP 通讯事件。**
4. \`api_stage_event_count > 0\`：实际看到了某类通信/初始化事件，仍不代表接口响应成功；HTTP 状态仅在 Java 通道提供。
5. \`first_basic_utid_event_seen=true\`：只有原生 ARM64 SetBasic 钩子被真实命中且解出数值时才可报告，不表示已验证 HOME 可见六位 ID。随后要独立与 HOME UI 的六位显示值核验。

对于 GitHub Actions API35 x86_64 模拟器：即使 \`frida_agent_loaded=true\`，也不能套用 ARM64 RVA。必须区分 \`native_arch_report= x64\` 与 \`native_arm64 hook\` 未验证。若 Unity 采用自己的网络通道，Java HTTP 事件可能为 0；这只是可观测范围限制。

## 六、运行状态

- [Frida 脱敏单元测试 #42373639433](https://github.com/969981/PokeHome_Resources/actions/runs/42373639433)：44/44 通过。
- [Frida 完整模拟器 #42373639368](https://github.com/969981/PokeHome_Resources/actions/runs/42373639368)：需要查看实际 Frida Server、Agent 和事件文件验收，不能因为通过单元测试就宣布成功。
- 目标日期 **1999-04-05**，当前界面已经独立验证 **4 月、5 日**。年份未选中，没有完整生日提交、账号创建/删除或首次六位 ID。


## 2026-11-07：真实截图与 Agent 编译核验进展

### 月/日实际截图已闭合

从完整模拟器运行 #42368887392 下载的真实 Artifact 中逐张查看：
- month_4_popup_02.png 展示月份 1～9，可见第四个选项；
- month_4_selected_field_source.png 的月份输入框实际显示 **4**；
- day_5_popup_02.png 展示日期 1～9，可见第五个选项；
- month_4_day_5_unsubmitted_form.png 最终真实显示“**年（未选）/ 4 / 5**”。

在此之前数据报告中的 month/day `_semantically_verified=false` 是为了避免将点击命令误当成已选中；以上真正截图可以将*人工验收*结论更新为月=4、日=5。仍没有完整出生日期 1999-04-05，更没有提交或观察到六位 ID。

### Frida 17 bundle 并非普通纯 JS

[Frida agent 编译 #42374090402](https://github.com/969981/PokeHome_Resources/actions/runs/42374090402) 已通过。**237,685 字节**，官方编译器输出以 `📦` 包头、字节长度、源路径和 `✄` 分隔符开始，后面才是 JavaScript payload。这是 Frida 17 接受的编译器包格式；用 Node 的 `--check` 直接检查整包会报语法错，不表示 Frida bundle 构建失败。独立 CI 已改为先验证包格式，再抽出 JS 部分检查语法。实际 `Session.create_script(bundle)` 应接收完整包，不应剥离头后再注入。

- 事件脱敏/Frida spawn 测试：[#42373639433](https://github.com/969981/PokeHome_Resources/actions/runs/42373639433)，44 项通过。
- 真正的 Android x86_64 Frida server、spawn、连接及 API 事件：[#42373639368](https://github.com/969981/PokeHome_Resources/actions/runs/42373639368)，当前仍须按实际 Artifact 判定；以上 CI 都不代表已捕获真实 HTTP 内容。


## 七、实机 Frida 注入与传输层盲区核验

### 真实注入与分级观测（已完成）

- 完整 HOME UI 运行：[Actions #42374803315](https://github.com/969981/PokeHome_Resources/actions/runs/42374803315)，独立无 UI 启动：[Actions #42374866803](https://github.com/969981/PokeHome_Resources/actions/runs/42374866803)，**两轮均有真实 Artifact**，不能只依据工作流 success 推测。
- `frida_server_setup.json`：**status=ready**，官方 frida-server 17.26.1 SHA256 校验通过、Android ADB root 检查通过、server 进程启动、端口转发和 TCP 连接均通过。
- `frida_interface_summary.json` 两轮均为 **status=spawn_attach_resumed**、`frida_agent_loaded=true`、`java_hook_ready=true`、`dns_hook_ready=true`、`observed_arch=x64`；对应 `frida_interface_events.jsonl` 均确实包含六条事件：`frida_agent_loaded`、`native_arch_report`、`dns_hook_ready`、`java_runtime_ready`、`java_url_hook_ready`、`java_response_hook_ready`。
- **重要负结果**：两轮 `api_stage_event_count=0`，`il2cpp_module_seen=false`、`first_basic_utid_event_seen=false`，没有 Java HTTP 请求/响应、按 Pokémon 域名识别的 DNS 事件，或真实 `basic.utid`。因此本轮只证明监控器附加与 Hook 安装成功，不代表已经捕获接口通信。由于 Unity 和 ARM64 Native Bridge 的原因，事件 0 不能解释成 HOME 没有网络连接。
- 完整 UI 运行再次通过简体中文、亚太、中国大陆，并保存了本地选择 **月=4、日=5** 的截图；目标 **1999-04-05** 的年份 1999 未定位，生日、协议和注册均未提交。

### 新尝试：Native Socket metadata（不读取数据包）

针对 Java/DNS Hook 没有实际网络事件，新增到 `tools/home41_frida_interface_agent.js`：
- 仅当 `libc connect()` 入参的 `sa_family` 是 IPv4/IPv6 时，监测非阻塞连接及返回类别；**不读取或记录 sockaddr 里的 IP 地址/端口**。
- 对该连接的 fd，使用 `send/sendto/write/recv/recvfrom/read` 拦截点，只按返回的**正数字节数粗略分类**成 1–512、513–4096、超过 4096；不保存字节内容、缓冲指针、fd、IP、域名、URL、请求头或 Token。
- 对这些事件单独输出 `native_transport_event_count`；**绝不把 Socket 收发称为 HTTP 200、具体 API 路径或 `SetBasic` 响应**。仍保留独立 `api_stage_event_count`，不存在时保持 0。
- `tools/home41_frida_interface_monitor.py` 对 `native_socket_connect/native_socket_send/native_socket_receive` 严格白名单清洗，未知字段（包括恶意注入的 Authorization、IP）都不进入 Artifact。
- [Frida bundle CI #42378979751](https://github.com/969981/PokeHome_Resources/actions/runs/42378979751) 已成功编译并通过 6 项专项测试；[只读观测单元 CI #42378979678](https://github.com/969981/PokeHome_Resources/actions/runs/42378979678) 通过 **46 项**。真实 Socket 事件需要查看运行 [#42378930850](https://github.com/969981/PokeHome_Resources/actions/runs/42378930850)、[#42378956808](https://github.com/969981/PokeHome_Resources/actions/runs/42378956808) 的 Artifact 才能确认；在未取得实际事件前不把它们记为成功。

### 关于下一步真正的 API 响应

Socket Hook 仅提供“进程是否有原生收发”与大致时序。要知道 `basic.utid` 是哪个服务端响应下发，优先在**实机 ARM64 的 IL2CPP 回调**里记录字段是否首次赋值、事件时序，再跟该运行的官方 UI 六位显示对账。现存 ARM64 RVA 不适用于 x64 Native Bridge，不能硬插，更不能通过修改网络响应或账号资料来推断合法六位 ID。


## 八、原生 Socket 真实命中与 Frida 17.26 的 emulated realm

### 原生传输第一条真实证据

[独立 Frida 首启 #42378956808](https://github.com/969981/PokeHome_Resources/actions/runs/42378956808) 的真实 Artifact 给出：

| 字段 | 结果 |
| --- | --- |
| frida_server_setup.status | ready |
| frida_interface.status | spawn_attach_resumed |
| native_connect_hook_ready | true |
| native_socket_io_hooks_ready | true |
| native_transport_event_count | **6** |
| 原生 IPv6 连接尝试 | **1**（约 3.501s；返回非 0，并非已证明连接成功） |
| Socket send | **3**（约 3.523s、5.469s、5.558s） |
| Socket receive | **2**（约 4.008s、5.805s） |
| api_stage_event_count | **0** |
| first_basic_utid_event_seen | **false** |
| observed_arch | **x64** |
| il2cpp_module_seen | false |

这是真实运行中的 `Interceptor` 收发事件，而不是静态代码或合成单元测试。因此已经证明进程有 Socket 级别的数据收发，但**仍不清楚是否对应 HOME 用户信息 API**；不会推出任何 HTTP 状态或 `basic.utid` 内容。完整 Artifact 由 Actions 链接进入下载。

### Native Bridge 原生架构研究

Frida 17.26.0 于 2026-11-05 发布，其官方说明 https://frida.re/news/2026/11/05/frida-17-26-0-released/ 提到 emulated realm 在 Android x86_64 Native Bridge 下修复了线程列表、导出符号查找和加载问题。Frida 核心 API 支持 `session=device.attach(pid, realm='emulated')`，官方参考 https://frida.re/news/releases/ 。

本项目的 CPU: Android API35 x86_64 + `ro.dalvik.vm.native.bridge=libndk_translation.so`，观察到 Frida 默认 `Process.arch=x64`，无法列出 ARM64 的 `libil2cpp.so`。该状态不代表 ARM64 游戏库没加载，更不能直接拿 x64 realm 的 `Interceptor` 安装 ARM64 RVA。

新增：

- `tools/home41_frida_emulated_realm_probe.js`：只读收集 emulated realm 的 `Process.arch`、`libil2cpp.so` 是否可见，以及 `SetBasic` 候选 RVA 是否在模块范围内；不报告地址、内存内容、UTID 或凭据。
- `FridaInterfaceMonitor.probe_emulated_realm()`：在正常 HOME 进程启动约 20 秒后，显式 `device.attach(pid, realm='emulated')`；失败只记错误类别。仅在 `arch=arm64`、`libil2cpp.so visible=true` 且 RVA 边界有效时，加载原有 ARM64 只读 `early_home_tid_observer.js`。
- `tools/home41_frida_first_launch_smoke.py`：正常 x64 Frida 启动、等待 Unity 加载、尝试 emulated realm、再记录事件并退出；不点击任何 HOME 页面或执行账号操作。
- [快速 CI #42379574983](https://github.com/969981/PokeHome_Resources/actions/runs/42379574983) 通过 **48 项单元测试**；[Frida 编译 #42379574956](https://github.com/969981/PokeHome_Resources/actions/runs/42379574956) 通过，包含 8 项专项测试。
- 实机结果需以 [#42379526660](https://github.com/969981/PokeHome_Resources/actions/runs/42379526660) 的 `frida_interface_summary.json.emulated_realm_status`、`emulated_arch`、`emulated_il2cpp_visible` 为准。不能预先声称 ARM64 SetBasic 钩子已运行。

当 `emulated` attach 无效时，不应尝试把 ARM64 函数地址转为 x64 并直接钩取；应另用真正 ARM64 测试设备或可被 Frida 识别的 Android 仿真环境做分支验证。


## 九、ARM64 emulated realm 实机成功与回调事件修复

### native ARM64 realm 成功

- [实机 #42379526660](https://github.com/969981/PokeHome_Resources/actions/runs/42379526660) 的脱敏 Artifact 实际显示：
  - `frida_spawn_attached=true`，`emulated_realm_probe_status=emulated_arm64_readonly_observer_loaded`；
  - `emulated_arch=arm64`，`emulated_il2cpp_visible=true`，`emulated_basic_rva_in_bounds=true`；
  - 同时正常 x64 端可观察原生 Socket 连接/收发 `native_transport_event_count=7`；
  - 但 `api_stage_event_count=0`、`first_basic_utid_event_seen=false`，**当时没有 ARM64 Hook 真正触发的证据**。
- [复测 #42380051198](https://github.com/969981/PokeHome_Resources/actions/runs/42380051198) 同样可以访问 ARM64 IL2CPP，但 `arm64_hook_preflight_seen=false`、`arm64_observer_ready=false`、`arm64_preflight_exception_seen=false`。即使观察器改为库加载完即尝试安装，仍未获得 Hook 反馈。
- 现象原因待复核：老 `tools/early_home_tid_observer.js` 通过 `console.log` 输出事件，但已成功的 emulated realm 小探针用 `send()`。因此本次已改为原生 observer 的 `report()` 统一走 Frida `send()`，`tools/home41_fast_id_probe.py` 同步兼容 send/log 两种消息，且对事件保留严格白名单。
- 新 [Frida 首启复测 #42380528102](https://github.com/969981/PokeHome_Resources/actions/runs/42380528102) 需要实机检查 `hook_preflight`、`read_only_observer_ready` 或 `preflight_exception`：它们三个事实必须明确，不应把“脚本 loaded”直接记为 Hook ready。

### 核验链

`frida_server_setup.status == ready`
→ `frida_interface.status == spawn_attach_resumed`
→ `emulated_arch == arm64`
→ `emulated_il2cpp_visible && emulated_basic_rva_in_bounds`
→ `arm64_hook_preflight_seen`
→ `arm64_observer_ready`
→ `first_basic_utid_event_seen`
→ **官方 HOME UI 六位 Trainer ID 对账**。

当前证据已经闭合到第 4 步；最后三项尚未完成。不应该根据静态 RVA、有 Hook 代码或 Socket 收发推测用户 ID 或注册成功。全程不提交生日、不做账号创建或删除。


## 十、ARM64 只读 Hook 真实预检及就绪已闭合

- [Frida 实机 #42380528102](https://github.com/969981/PokeHome_Resources/actions/runs/42380528102) 已成功闭合 ARM64 原生观察器的**实际运行**：`emulated_arch=arm64`、`emulated_il2cpp_visible=true`、`emulated_basic_rva_in_bounds=true`，且 `hook_preflight` 真正出现 1 次、`supported_arch=true`；约 2.420s 后，观察器发出了 **`read_only_observer_ready`** 事件，`arm64_preflight_exception_seen=false`。因此不再只是脚本 loaded，而是实测到 native hook 安装完成后的就绪消息。
- 问题修复原理：以前 `tools/early_home_tid_observer.js` 使用 `console.log` 输出阶段事件，在 Frida 17 的 emulated realm 中即使脚本已加载，Python 仍观察不到日志；将 `report()` 改成 Frida 原生 `send()` 并兼容老 `home41_fast_id_probe.py` 的 send/log 后，ARM64 Hook 就绪成功上报。此前还已保留先检查模块、未加载再轮询的无损初始化。
- 这次 `first_basic_utid_event_seen=false`、`api_stage_event_count=0`，与本次仅为未提交注册的首次启动一致。**不能推出已取得六位 ID，也不能证明具体哪个服务端响应包含了 basic.utid。**
- [完整脱敏原生证据](https://github.com/969981/PokeHome_Resources/actions/runs/42380528102) 包含 `frida_interface_events.jsonl` 与 `frida_interface_summary.json`；不保存任何原始 UTID、访问令牌或 HTTP payload。
- 最新 `android41_emulator_probe.py` 已将 ARM64 observer 的附加时机提前到已校验 HOME 启动后、**语言/地区/生日控件操作之前**。其目的在于真正观察官方首次初始化期间的回调，而不是在所有 UI 操作结束后再附加。依旧不提交生日、不自动接受协议、不创建/删除账号；当前测试目标为 `1999-04-05`，只有 4 月、5 日本地 UI 选择经过截图验证，1999 年尚未可靠选中。


## 十一、提前附加导致白屏的回归与截图门控修复

### 失败证据，不把 GitHub Actions 成功当 UI 成功

[GitHub Actions #42381075880](https://github.com/969981/PokeHome_Resources/actions/runs/42381075880) 最终 workflow=success，**但这是资源扫描/Artifact 上传成功，不代表 HOME UI 已通过**。读取该次专属 Artifact 后：

- `frida_server_setup.status=ready`、`frida_interface.status=spawn_attach_resumed`、`observed_arch=x64`、`java_hook_ready=true`、`dns_hook_ready=true`。
- ARM64 在 HOME 页面尚未出现之前提前尝试 `realm='emulated'`：`emulated_realm_before_ui_status=emulated_attach_or_load_failed`、`emulated_realm_error_type=TransportError`。
- 真实 `screen_15s.png` 和 `onboarding_final.png` 均为**纯白屏**，`onboarding.status=no_known_next_screen`，70 次检查、`completed=[]`，没有进入任何验证过的页面，也没有执行生日/注册。
- 本轮有 7 条原生 Socket 事件；`api_stage_event_count=0`，`arm64_observer_ready=false`，`first_basic_utid_event_seen=false`。
- 白屏在初始 15s 截图即出现；**不能证明是 emulated attach 引起白屏**。只能证明这轮在未知／白屏状态尝试 emulated attach 失败，不应把该异常当成服务端返回信息或 UTID 事件。

对照 [#42380528059](https://github.com/969981/PokeHome_Resources/actions/runs/42380528059)：先完成正常 UI 操作，再附加 ARM64 时 `emulated_realm_status=emulated_arm64_readonly_observer_loaded`、`arm64_hook_preflight_seen=true`、`arm64_observer_ready=true`，月=4、日=5 的实际页面截图也存在。两轮差异支持调整**附加的前置条件**，但尚未证明单一因果。

### 实施修复：两张真实 UI 截图 → ARM64 就绪 → 首次点击

已更新 `tools/home41_guest_onboarding.py`、`tools/android41_emulator_probe.py`：

1. 移除启动 15s 时无条件尝试 `realm='emulated'` 的动作。
2. 状态机在连续两帧识别同一 HOME 已知初始化页面（此前真实验收过的语言、地区、出生日期页）之后，且在**首次 HOME 页面 tap 之前**，调用可选 `on_first_verified_page` 回调安装 ARM64 只读 Hook。纯白屏、未知模态和通信错误不能触发它。
3. `FridaInterfaceMonitor.probe_emulated_realm()` 在 ARM64 `libil2cpp.so` 可见且 RVA 边界通过后加载 `early_home_tid_observer.js`，但不再把仅 `script.load()` 视为就绪。**必须在最多 8 秒内收到真实 `read_only_observer_ready` 事件**才返回 `emulated_arm64_readonly_observer_loaded`。
4. `TransportError`、未就绪或其他失败则立即停止该次 UI 自动化，不点语言确认、生日下一步或其他注册相关控件；报告 `early_arm64_hook_unavailable_safe_stop` 和脱敏错误类型。未开启监控的普通 UI 测试保持原逻辑。
5. 白屏或未知页面不会在结尾再次尝试 ARM64 附加，避免不可信运行中重复激活。
6. 状态独立记录 `early_arm64_hook_attempted`、`early_arm64_hook_status`、`early_arm64_hook_before_first_tap`；绝不能把只有 x64 Socket 事件的运行记成已命中 `SetBasic`。

[快速 CI #42382760960](https://github.com/969981/PokeHome_Resources/actions/runs/42382760960) **54 项测试通过**，明确覆盖白屏无 Hook、出现有效页面后首次 tap 之前 Hook、TransportError 失败前停止、ARM64 就绪事件和拒绝仅 script.load 的假阳性。[Frida 编译专项 #42382760968](https://github.com/969981/PokeHome_Resources/actions/runs/42382760968) 10 项通过。

下一次真实模拟器回归是 [#42382760954](https://github.com/969981/PokeHome_Resources/actions/runs/42382760954)。必须读取其专属 `emulator_probe_summary.json`、`onboarding_checkpoint.json`、`frida_interface_events.jsonl` 与截图后判断；工作流成功只是运行结束。截止本次文档整理，没有注册账号、DOB 提交、首次 `basic.utid` 或官方六位 ID 对账。


## 十二、UI 上移布局修复与日期下拉函数索引观测

### 2026-11-07 #42382760954：为什么提前 Hook 没有尝试

- [GitHub Actions #42382760954](https://github.com/969981/PokeHome_Resources/actions/runs/42382760954) 实际 Artifact 里的 `screen_15s.png` 为白屏，但`onboarding_final.png` 已经显示 **英文 Choose Your Language** 页面。**这轮不是持续白屏，也没有重新触发 ARM64 TransportError。**
- `onboarding.status=no_known_next_screen`、`checks=70`、`completed=[]`；`early_arm64_hook_attempted=false`、`emulated_realm_status=not_attempted`、`api_stage_event_count=0`、`native_transport_event_count=8`。没有任何用户首次初始化点击。
- 真正阻塞点是语言识别器只使用原布局。两次 1080×2340 真截图对比：原语言页在 y≈0.14 有青绿标题条、**简体中文**行 y≈0.775；这轮标题条上移到 y≈0.08，**简体中文**行 y≈0.720，差值接近 **0.055 屏幕高度**。其他语言选项同样整体上移；旧五点像素签名因此无法认出新版首屏。
- 已更新 `tools/android41_ui_flow.py` 的 `screenshot_simplified_chinese_option()`：保留原坐标方案，并为截图确认的新布局增加独立组合校验（浅绿背景、青绿标题、多个浅灰语言选项及末行之外绿色背景）；**只有模式全匹配才返回 x=.5,y=.720**。无匹配则拒绝点击，不使用 OCR 猜测。
- 新单元测试 `tools/test_android41_ui_flow.py::test_compact_language_layout_from_real_emulator_42382760954` 采用相同的像素位置，并验证缺失标题时返回 None；不把任何页面视为可以点击。

### 2026-11-07 私有 IL2CPP 审计带来的年份突破方向

[Native Birthdate UI audit #42384315106](https://github.com/969981/PokeHome_Resources/actions/runs/42384315106) 是来自 **180,628 个 HOME 4.1.0 IL2CPP 函数**的静态索引，Artifact 中 `birthdate_class_layouts.json` 有以下原始证据：

| 类或方法 | 4.1.0 ARM64 RVA／偏移 | 解释 |
|---|---|---|
| `FirstBootViewInputBirthData.START_YEAR` | 常量 1900 | 年份选项的静态起点定义；未验年列表排序算法 |
| `FirstBootViewInputBirthData.yearDropdown` | 对象字段 +0x28 | 年份选框的原生组件指针 |
| `FirstBootViewInputBirthData.inputedYear` | 实例字段 +0x58 | 本地年份字段，**不代表已提交服务端** |
| `FirstBootViewInputBirthData.OnYearChageValue(int index)` | `0x1C80EF8` | 年份索引变化回调 |
| `FirstBootViewInputBirthData.OnMonthChangeValue(int index)` | `0x1C814C0` | 月份索引变化回调 |
| `FirstBootViewInputBirthData.OnDayChangeValue(int index)` | `0x1C8181C` | 日期索引变化回调 |
| `CustomTMPDropdownScrollList.Open(int value)` | `0x1F14C90` | 打开基于 `EnhancedScroller` 的下拉滚动列表 |
| `CustomTMPDropdown.SetValueWithoutNotify(int)` | `0x1F14150` | 游戏自身 UI 方法，**此阶段不调用、不改写** |

这说明先前普通 ADB swipe 导致误选年份，并不能证明游戏没有滚动功能：它使用的是真实 Unity `EnhancedScroller` 组件而不是 Android 原生滚轮。静态索引足以确定可以安放观测点，但 **尚不能证明 1999 的索引=27、会从 2026 起倒序，也不能证明 UI 改写后服务端会保存**。必须用真实点击与 Hook 返回索引交叉验证。

新增 `tools/early_home_tid_observer.js` 原生只读 Hook（不修改任何入参）：
- `birthdate_year_change_index`、`birthdate_month_change_index`、`birthdate_day_change_index`：仅捕获进入对应 Unity 回调时的有界 index；
- `dropdown_scroll_open_index`：只记录打开滚动列表的原生 index 参数；同一时间需要匹配截图才能确认来自“年”还是“月／日”；
- `date_hook_installed`/失败事件：每个 Hook 都有独立安装结果，不等同函数已经命中；
- `tools/home41_frida_interface_monitor.py` 严格限制索引边界与 Hook 名称，丢弃所有完整生日文本、用户标识、对象地址、网络 URL、令牌或未认可字段。
- 新测试确保出生日期本地 UI 回调计数 **不等同** `api_stage_event_count` 或 `first_basic_utid_event_seen`。
- [只读监控快速 CI #42385968843](https://github.com/969981/PokeHome_Resources/actions/runs/42385968843)：**56 项测试成功**；[Frida 17 bundle #42385968860](https://github.com/969981/PokeHome_Resources/actions/runs/42385968860) 通过 **12 项专项测试**。

下一验收标准：1. 新布局进入中文界面成功；2. 首次非破坏性点击前 ARM64 观察器真正就绪；3. 在真实月/日 UI 操作期间观察回调索引，并和截图中的“4”“5”对应；4. 后续再进行一次已知可见年份的本地选择，确定年索引规律，然后才考虑导航到 **1999**。一直不提交日期、不绑定 Nintendo Account、不做云端注册或删除。


## 十三、4 个出生日期原生 Hook 的实机安装与候选索引读取

### Frida 模拟执行环境实机证据

- [实际运行 #42385936928](https://github.com/969981/PokeHome_Resources/actions/runs/42385936928) 的 Artifact 包括 `first_launch_report.json`、`frida_interface_events.jsonl`、`frida_interface_summary.json`，确认 `frida_spawn_attached=true`、`emulated_arch=arm64`、`arm64_hook_preflight_seen=true`、`arm64_observer_ready=true`。
- ARM64 emulated realm 发出 **4 个真正的 `date_hook_installed` 事件**，依次是 `birthdate_year_change_index`、`birthdate_month_change_index`、`birthdate_day_change_index`、`dropdown_scroll_open_index`，后续才出现 `read_only_observer_ready`。这验证了静态 RVA 可用和 Frida 安装回调成功。
- 该实机是**首次启动无 UI 点击**测试：`birthdate_ui_callback_event_count=0`、`api_stage_event_count=0`、`first_basic_utid_event_seen=false`。不能从已安装推断回调已触发、实际选中了 1999 或账号已经创建。
- 同轮 x64 Native Socket 元数据中出现 7 次网络收发事件，与 API 响应／HTTP 状态码无关。

### 直接读取 Unity 年份列表，而不是猜索引

静态审计证明 `FirstBootViewInputBirthData` 上的 `yearOptionDataList` 字段位于 +0x40，类型为 `List<CustomTMPDropdown.OptionData>`，其中 `OptionData.m_Text` 为 UTF-16 文本。年列表对应 `SetData(int languageCode)` 的 **RVA `0x1C80964`**。

新增 `tools/early_home_tid_observer.js` 的只读实验入口：
1. **仅拦截 `SetData` 的入口/返回**，不修改任何入参、不调用游戏方法或设置日期。
2. 方法返回后读取有界的 100～140 个选项；每项最多 12 UTF-16 字符，仅在 Frida 进程内匹配 1900～2100 的四位年份。
3. 只有大多数选项都是合理年份、数列严格逐年递减、且只有一个 1999 匹配时，才通过 `send()` 上报 `year_1999_option_index_verified`，仅包含 **选项索引、数量、首末年份以及是否严格递减**；不输出原始文本、对象地址、HTTP 包或身份凭据。
4. 实际元数据可能含占位选项；对此允许最多 2 个不符合数字年份的选项，并由严格递减条件排除明显错序。其余情况上报 `year_options_layout_not_verified` 或不触发。
5. 只有真实运行收到了 `year_1999_option_index_verified`，才可将索引作为**本地 UI 选项位置的候选**；不表示已经选择 1999，也不表示该索引可直接作为 Unity setter 入参。

独立监控器 `tools/home41_frida_interface_monitor.py` 仅在进一步验证列表数值合理时保留目标选项索引。新的单元测试覆盖错误长度、伪造顺序、非数字输入和敏感资料字段过滤。

[快速测试 #42386652090](https://github.com/969981/PokeHome_Resources/actions/runs/42386652090) **58 项通过**；[Frida 编译测试 #42386652173](https://github.com/969981/PokeHome_Resources/actions/runs/42386652173) 通过。**尚无真实 1999 目标索引，也没有实际 UI 年份选择或 `basic.utid`**。完整模拟器还要验证 HOME 的语言新布局、首次点击前 Hook 就绪、然后进入 DOB 页并收到 `SetData`/月日回调事件。


## 十四、Frida 在首次点击前安装成功并观察到月份、日期回调

### 全量 HOME UI + 原生 ARM64 Hook 实机闭合

[GitHub Actions #42385968873](https://github.com/969981/PokeHome_Resources/actions/runs/42385968873) 的真实 Artifact，不是脱离 HOME 的测试夹具，已经完成：

- `frida_server_setup.status=ready`，`frida_interface.status=spawn_attach_resumed`，`emulated_realm_status=emulated_arm64_readonly_observer_loaded`。
- `onboarding.early_arm64_hook_attempted=true`、`early_arm64_hook_before_first_tap=true`、`early_arm64_hook_status=emulated_arm64_readonly_observer_loaded`，证明在 **第一次语言选择 tap 前**完成 ARM64 观察器初始化。
- `arm64_hook_preflight_seen=true`、`arm64_observer_ready=true`、`birthdate_ui_hook_install_count=4`。四个具体 native Hook 对应 `OnYearChageValue`、`OnMonthChangeValue`、`OnDayChangeValue`、`CustomTMPDropdownScrollList.Open`。
- 语言选择、确认语言、亚太地区、中国大陆和出生日期页面均识别成功；照片 `month_4_day_5_unsubmitted_form.png` 显示年空白、月 4、日 5。
- **实际回调**：`OnMonthChangeValue(index=3)` 对应界面选择 **4 月**，`OnDayChangeValue(index=4)` 对应选择 **5 日**。不仅是静态 RVA 或 Hook 安装状态，这两次真实运行事件把 UI 与 native index 配对。说明两个字段采用 **0-based** 索引。
- `dropdown_scroll_open_index` 出现 3 次，但旧日志把当时不在 0～126 范围的入参记为 `index_range_valid=false`；不可推断其数值或每个弹窗的具体来源。
- `birthdate_year_change_index=0` 次，因为本轮没有点击任何年份；`basic.utid`、注册/登录回调仍未命中。
- `birthday_submitted=false`、`terms_accepted=false`、`account_created=false`、`account_deleted=false`。此实验不会触发云端账号操作。

该实机结果已经证明截图门控、首次点击前 ARM64 Hook 安装与两项日期 native UI 事件**可以在同一真实 HOME 进程中同时实现**。

### 下一验收

后续使用 `FirstBootViewInputBirthData.SetData` 的只读 `yearOptionDataList` 检查求出 **1999** 在列表中的实际 index，再通过可见 UI 或经过验证的本地 Unity 下拉操作选中；必须用截图验证“年=1999、月=4、日=5”。还未选中 1999，也未提交生日。不能因为单元测试用了 27 这个合成索引，就宣布真实索引为 27。注册回调、服务端 `basic.utid` 和六位 Trainer ID 尚未验收。

## 十五、1999 选项真实索引 27 与 2018 可见项校准

### 运行时年份列表证据

[真实模拟器 #42386652133](https://github.com/969981/PokeHome_Resources/actions/runs/42386652133) 的报告确认：

- ARM64 FirstBootViewInputBirthData.SetData 只读 Hook 收到 year_1999_option_index_verified，1999 年的选项 index=27，年份列表从 2026 逐年递减到 1900。
- 在第一次语言选择 tap 前已安装 ARM64 只读 Hook，随后成功进入出生日期页面；月 4／日 5 的 UI 回调已独立验证为 index 3／4。
- 此结果只证明年份**选项位置**，并不证明 index=27 可以直接传给本地 Unity setter；1999 年尚未在真实表单中选中，更没有提交生日或获得 basic.utid。

### 可见 2018 年索引校准

当前实验保留目标生日 1999-04-05，临时启用 probe_year_anchor=true（其他年份滚动、月日自动选择均关闭）。仅在真实已验证的年份列表中点击一次可见 2018，拍摄本地字段显示，并重新展开，不点击下一步、不创建账号。

Frida 17 ARM64 OnYearChageValue 的只读回调应独立报告 index=8（2026-2018）；只在**同一运行**既观察到此回调、又重新验证 1999→27 的年份选项时，监控器才报告 known_2018_index_expected_8_observed=true。仍须人工检查 year_anchor_selected_field_closeup_source.png 确实显示 2018，才算完成校准。

- [实机校准 #42392087765](https://github.com/969981/PokeHome_Resources/actions/runs/42392087765)
- [新增交叉校验回归 #42392140383](https://github.com/969981/PokeHome_Resources/actions/runs/42392140383)
- 不绑定 Nintendo Account、不提交生日、不接受条款、不注册、不删除账号。首次 HOME 六位训练家 ID 仍未取得。

## 十六、2018 实机索引校准完成与一次性 1999 本地回调实验

### 同一真实会话的双重索引证据

- Actions #42392140383（https://github.com/969981/PokeHome_Resources/actions/runs/42392140383）的截图 year_anchor_selected_field_closeup_source.png 明确显示年份 **2018**，月份和日期仍空白。
- 同一 Artifact 的 frida_interface_events.jsonl 记录了 2026～1900 完整倒序年份选项，1999 index=27；真实 `birthdate_year_change_index` 回调是 index=8，恰与 2018 的可见文字一致。
- 报告 known_2018_index_expected_8_observed=true；不再是仅靠静态函数猜测的映射。首次 basic.utid 仍未触发，生日未提交。

### 临时、单次的本地日期 UI 实验

- `tools/early_home_tid_observer.js` 增加默认**不启用**的 `rpc.exports.armlocalyear1999()`。只允许 ARM64 已安装 Hook 且本轮实时读到 127 个 2026～1900 严格倒序选项、1999 唯一对应 index=27 时启用一次，20 秒自动失效，单个进程不可二次启用。
- 仅在真正的 Unity `OnYearChageValue(int)` 回调发生、原始索引严格为 8（用户可见点击 2018）时，将本地这个回调的参数索引重定向为 27；不调用 HTTP／注册／登录接口，不修改服务器数据，也不执行生日下一步。
- `onLeave` 只读检查 FirstBootViewInputBirthData.inputedYear（+0x58）是否为 1999，事件不记录附近个人资料和任何账户信息。注意：**本地内部字段变为 1999 不代表 UI 显示 1999**，需要独立检查截图。
- 新探针 `tools/home41_local_year_1999_probe.py` 先以保守多点像素签名确认初始年份列表确实存在，再调用主机端 Frida RPC；若 RPC 拒绝、未准备好、超时或页面未知，零点击退出。成功启用后只点击一次已知可见的 2018 行，保存 `local_year1999_field_requires_visual_review.png` 和回调事件，绝不点击提交按钮。
- 测试档仍为目标生日 **1999-04-05**，但此轮独立研究仅在本地尝试年份；4 月/5 日的功能已在之前实验独立验证，暂不混合执行。
- [单元与 Frida 安全回归 #42443660570](https://github.com/969981/PokeHome_Resources/actions/runs/42443660570)：68/68 项通过，覆盖旧实验互斥、弹窗签名、一次性 RPC、异常停止、敏感字段白名单与无注册。
- [真实模拟器 #42443660553](https://github.com/969981/PokeHome_Resources/actions/runs/42443660553)：需要检查本次独立 Artifact 的 native event 与 UI 实拍，尚不能在任务未完成时宣称 1999 已选中。

### 安全性质区分

常规 Frida Java/DNS/Socket 和 IL2CPP 注册、登录、SetBasic **观察器仍然只读**。上述受控的 index 8→27 **是有意改变仅本地 Unity UI 回调的实验功能**，不应被称为只读。没有用户同意的正常 DOB 提交、Nintendo Account 绑定、账号创建/删除，也没有已验证的真实六位 HOME ID。
