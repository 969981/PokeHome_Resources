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
