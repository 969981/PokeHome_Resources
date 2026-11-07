---
title: "HOME Android 4.1.0 — 无 UI 获取最早 ID 的实现与边界"
tags: [pokemon-home, android, guest, utid, frida, read-only, no-ui]
status: "已提交观察器与离线单测；未完成 ARM64 实机或线上新号验证"
updated: "2026-11-07"
---

# 不依赖逐屏 UI 的六位 ID 观察

> [!important] 结论
> 不打开 HOME 资料页即可读取已经正常初始化的 guest 账号首次服务器 basic.utid。这与“完全绕过 UI 创建云端新账户”不同；后者仍未验证。本轮没有网络 API 重放、账号注册、清档或永久删除。

## 1. 正常业务路径（现有 4.1.0 静态证据）

| 阶段 | Android 原生地址 | 含义 |
| --- | --- | --- |
| 注册请求构造 | 0x1D334A4 | DTO 字段 csrf/state/nonce/lng/cntry/said，不允许填写目标 UTID |
| 注册结果回调 | 0x1D33294 | 专属响应 uuid/apRes/naRes，没有直接返回 UTID |
| Token 响应回调 | 0x1D35AD0 | 静态入口，尚未实机命中 |
| 登录响应回调 | 0x1D3C020 | 静态入口，尚未实机命中 |
| 公共响应 | 0x1D2BA60 | ResponseParamCommon.basic +0x18 |
| SetBasic 调用 | 0x1D2BA64 → 0x1D763D0 | 把服务器基本资料交给 UDManager |
| UTID 字段 | UD_Basic +0xF0 | IL2CPP 托管字符串指针，非 uint32 |

候选顺序为注册 → Token → 首次 Login → 首个 basic.utid。真正首次回包的生产者尚未经过网络运行时核对；不能仅凭时间相近认定来自哪个 HTTP endpoint。六位候选目前使用数值型 UTID % 1,000,000，仍需对照应用内可见数字验证，不是已验证的生成算法。

## 2. 这次新增的无 UI 观察工具

- tools/home41_fast_id_probe.py：在本地原生 ARM64 Android Frida 设备 spawn HOME 进程，加载原有 tools/early_home_tid_observer.js，监听第一次 basic.utid；不模拟点击、不注册或删除账号、不发送原始 API 请求。
- tools/test_home41_fast_id_probe.py：六项离线单元测试，包含匹配、不匹配、错误调用源、缺少数据、非原生架构和凭据字段剔除。CI 可重跑。
- 输出只保留白名单事件、六位候选及核验状态；绝不保存 CSRF、nonce、access_token、uuid、原始 UTID 或请求体。

### 前提条件

使用自己已合法创建并完成初始化的 HOME 4.1.0 Android guest 账号；无需绑定 Nintendo Account。设备必须为原生 ARM64 且能附加 Frida。以前 GitHub Actions 的 x86_64 + libndk_translation.so 模拟器只证明能启动 UI，未证明可以按这些 ARM64 RVA 实机 Hook。

### 本地命令

    python -m pip install frida
    python tools/home41_fast_id_probe.py --live --target 888888 --timeout 180 --output local_fast_id_result.json

没有真实合法会话时，监听器不会神奇地生成新号。请勿把 local_fast_id_result.json 中的真实候选账户信息上传公开仓库。

离线代码测试：

    python -m py_compile tools/home41_fast_id_probe.py tools/test_home41_fast_id_probe.py
    python -m unittest tools/test_home41_fast_id_probe.py -v

输入已脱敏的 JSONL 时可离线对账：

    python tools/home41_fast_id_probe.py --input local_redacted_events.jsonl --target 888888

离线输入的结果标记 offline_untrusted_fixture，不能据此宣称获得在线六位 ID。live 结果仍标记 tid7_semantics_confirmed=false，直到用户可见游戏 ID 对账。

## 3. 是否能把注册也做成完全无 UI？

目前不能声称已经做到。原生注册确有无目标-ID 参数的请求 DTO，但整个注册涉及 HOME 官方首次设置、身份和设备状态、授权条款、认证 challenge、会话 Token 与后端账户生命周期。直接重复 HTTP POST 可能复用旧 UUID、失败或限流，不能当成每次新建账户。

研究优先次序：
1. 在原生 ARM64 上以自有 guest 测试会话证明 SetBasic 只读监听真实命中；
2. 首次合法注册时记录注册/Token/Login/SetBasic 时间轴，确认哪个服务器公共响应第一次给出 UTID；
3. 独立验证六位显示语义；
4. 如不匹配目标，只记录结果。必须先确认官方云端删除流程实际可用，不能因为清除本地数据就认为云端账号删除，也不做无人监管的批量刷号。

## 4. 此前真实阻塞与官方规则

- Android Actions #42354360305 已出现 HOME 通信错误 code 800 / detail 100101，不能视为注册成功。官方建议稍后重新登录或更换网络：
  https://app-ph.pokemon-support.com/hc/en-us/articles/58149598512281--Pok%C3%A9mon-HOME-Smartphone-version-The-error-code-800-detail-code-100101-appears-and-I-can-t-log-in-to-Pok%C3%A9mon-HOME
- 官方明确手机版无需绑定 Nintendo Account：
  https://app-ph.pokemon-support.com/hc/zh-tw/articles/360058218891
- 官方永久删除云端账户：设置 → 账号 → 管理账号 → 删除账号；删除的数据无法恢复：
  https://app-ph.pokemon-support.com/hc/zh-cn/articles/34818163611545

## 5. 验收状态

| 验收项目 | 当前 |
| --- | --- |
| 原始客户端中注册/登录/SetBasic 静态地址 | 已有原生证据 |
| 新无 UI 观察 CLI | 已实现、待真实设备测试 |
| 离线六项单元测试 | 本地 6/6 通过 |
| ARM64 真实首次 guest UTID | 未执行 |
| 真实新用户创建及六位显示核对 | 未执行 |
| 官方删除后新账号分配新 UTID | 未执行 |

关联：[[HOME41_GUEST_ONBOARDING_ID_CAPTURE_20261107]]、[[HOME41_AUTH_METHOD_INDEX]]、[[HOME41_UTID_EARLY_READ_AND_EMULATOR]]。
