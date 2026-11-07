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
