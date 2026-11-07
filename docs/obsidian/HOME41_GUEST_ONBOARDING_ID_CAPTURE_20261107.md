---
title: HOME 4.1.0 不绑定 Nintendo Account 的新号 ID 最早捕获
tags: [pokemon-home, android, onboarding, utid, frida, guest]
status: 地区列表已验证；真实注册与 ID 仍未执行
updated: 2026-11-07
---

# 目标与实际状态

> [!important] 不绑定 Nintendo Account。国家优先使用亚太地区→中国大陆；候选生日 1999-01-01，头像选默认第一项，初始宝可梦选小火龙（全国图鉴 0004）。这些是本次实验的计划选择，不代表已在应用内完成。

目标比较六位 ID 888888；请求无已知可指定 UTID 字段，不能通过修改本地显示冒充服务端换号。

## 最新实验证据

- 真实 Android 15 / x86_64 + libndk_translation.so 运行：GitHub Actions #42351711883。HOME 4.1.0 APK 安装、运行；简体中文选择和确认、亚太国家列表展开成功。
- 1080×2340 的 screen_after_region_dropdown.png 已见中国大陆、香港、日本、韩国、马来西亚、菲律宾、新加坡等选择；此前 JSON 明确 country_selected=false、birthdate_entered=false、first_basic_utid_status=not_observed。
- 已加入 tools/android41_ui_flow.py 中截图门控 screenshot_apac_mainland_option，要求标题栏为 RGB(38,179,151)、折叠栏为 RGB(248,250,245)，前三条展开国家按钮 RGB(18,166,168)，才点击中国大陆候选点 (324,1251)。
- 已加入 tools/android41_emulator_probe.py 单次点击和 screen_after_country_selection.png；点击事件成功不等于服务端接受国家资料，须读取新的 Actions Artifact。
- tools/test_android41_ui_flow.py 增加正反图像测试。没有真实下一屏结果前，生日、头像、小火龙及注册仍均属于未完成。

## 从结构抓 ID：静态确认

| 观察位置 | Android 4.1.0 RVA 或字段 | 证据 |
|---|---|---|
| 注册序列化 | 0x1D334A4 | DTO csrf/state/nonce/lng/cntry/said；无自选目标 UTID |
| 注册响应回调 | 0x1D33294 | 专属响应 uuid/apRes/naRes；不等于六位 ID |
| 首次 basic 数据 | 0x1D2BA60, ResponseParamCommon.basic +0x18 | 客户端接受公共基本资料 |
| SetBasic 调用 | 0x1D2BA64 → 0x1D763D0 | 确定的消费者 BL 调用 |
| 首次 UTID | UD_Basic +0xF0 | **IL2CPP 托管 UTF-16 字符串指针**，不是 int 槽 |
| 字段写入 | 0x1D76C1C / 0x1D76C20 | 托管引用复制与 GC write barrier |

tools/early_home_tid_observer.js 已增加 SetBasic 首次命中时的 LR/调用点记录：若 LR=module+0x1D2BA68，能证实来自此公共 basic 消费者。观察器只输出六位候选值、阶段时序和来源调用点，不保存会话令牌。ID32 % 1000000 只是工作假设，必须和真实 HOME 可见六位训练家 ID 对账。

## 必需的下一次真实测试

1. 下载新 Actions 的 screen_after_country_selection.png；只有确认进入生日页才继续。
2. 使用符合实际身份及服务年龄规则的生日，默认头像，小火龙；全程不登录或绑定 Nintendo Account，正常完成协议流程。
3. 在 ARM64 原生 Android 设备运行只读 Frida 观察器，记录注册回调、token/login 和第一个 basic.utid 的时间顺序。现有 x86_64 转译模拟器不支持把这些 ARM64 RVA 当作已验证 Hook。
4. 对账 HOME 界面显示值；首次观察 ID 不代表已证明服务器具体分配时刻。
5. 若不匹配目标，先做一次同一账号重启/重新登录以测试 UTID 稳定性；随后再经官方 UI 查看永久删除是否可正常完成。不要以清空 APP 数据冒充云端账号删除，且不要进行未经验证的批量删号循环。

## 参考

- [2026-11-07 真实 Actions #42351711883](https://github.com/969981/PokeHome_Resources/actions/runs/42351711883)
- [[HOME41_UTID_EARLY_READ_AND_EMULATOR]]
- [[HOME41_REGISTRATION_EARLIEST_UTID_GATE]]
- [官方：手机版无需 Nintendo Account](https://app-ph.pokemon-support.com/hc/zh-tw/articles/360058218891)
- [官方：删除 HOME 账号及永久性](https://app-ph.pokemon-support.com/hc/zh-cn/articles/34818163611545)

## 2026-11-07：最新 GitHub Actions 验收（#42354360305）

> [!warning] GitHub Actions 工作流成功，**并不意味着 HOME 在线登录成功**。

- [Android 模拟器真实运行 #42354360305](https://github.com/969981/PokeHome_Resources/actions/runs/42354360305) 的最终状态是 workflow success；已下载 `home-android-4.1.0-emulator-probe`（artifact ID `13567023493`）核验截图与运行报告。
- `screen_after_country_selection.png` 显示日文通信错误：`code:800 / detail code:100101`。截图名称只是程序预定的截图阶段，**不是中国大陆选择已经执行或成功的证明**。
- 报告明确：`home_language_screen_recognized=false`、`simplified_chinese_confirmed=false`、`region_page_poll_attempts=0`、`mainland_option_visual_gate=false`、`country_selection_tap_attempted=false`、`country_selected=false`。
- `birthdate_entered=false`、`terms_or_privacy_accepted=false`、`auth_registration_status=not_attempted_no_test_account`、`first_basic_utid_status=not_observed`；**未创建测试账号、未获得任何真实六位 ID、未执行账号删除**。
- 此前首次尝试中持续重复出现 800/100101，尚不能确证是 AVD 网络、HOME 服务端或其它环境因素。官方说明在此错误发生时可以稍后重试或更换 Wi-Fi：[官方 800/100101 说明](https://app-ph.pokemon-support.com/hc/en-us/articles/58149598512281--Pok%C3%A9mon-HOME-Smartphone-version-The-error-code-800-detail-code-100101-appears-and-I-can-t-log-in-to-Pok%C3%A9mon-HOME)。
- 独立 [六位 ID 只读分析 Smoke Test #42354360295](https://github.com/969981/PokeHome_Resources/actions/runs/42354360295) 为 success，只表示脚本、fixture 与语法检查通过，不构成账户运行时 ID 捕获证据。

**下次验收优先级**：先解决通信错误，拿到完成语言与国家选择后的真正生日页；然后才是未绑定任天堂账号的正常资料初始化、小火龙选择、首次 `basic.utid`、客户端可见六位 ID 的语义对账。未获得真实新号成功回包前，不得进行删除重建循环。
