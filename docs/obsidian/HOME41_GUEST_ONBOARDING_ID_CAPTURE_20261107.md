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


## 2026-11-07：真实国家确认与出生日期页面

本阶段继续遵循：不绑定 Nintendo Account；仅对已实证的界面进行可逆导航；出生日期使用用户授权的有效配置，尚未提交；头像和御三家小火龙（0004）尚未选择；真实云端账号注册、basic.utid 与官方云端删除均未发生。

| GitHub Actions | 真实界面进度 | 关键证据 |
|---|---|---|
| [#42356071498](https://github.com/969981/PokeHome_Resources/actions/runs/42356071498) | 中国大陆点击后出现【确认选择此地区吗？中国大陆】的 YES/NO 弹窗 | 语言、亚太地区展开、国家选项点击成功；无通用错误弹窗；`country_selected=false` 仅表示尚未最终确认 |
| [#42356611191](https://github.com/969981/PokeHome_Resources/actions/runs/42356611191) | YES 被正确识别并点击，真实截图出现【确认年龄 → 请输入你的出生日期】、年/月/日三框、下一步 | `country_confirmation_tap_succeeded=true`，DOB 未填写 |
| [#42357127834](https://github.com/969981/PokeHome_Resources/actions/runs/42357127834) | 国家确认仍成功，年龄页刚淡入时截图像素暂不稳定 | `birthday_page_recognized=false`、`birth_year_dropdown_open_attempted=false`，**不是注册失败** |

这三轮 APK 均正常安装启动，HOME 进程存活，未观察到 Android 致命崩溃；第三轮的年龄页最终截图已经稳定，说明需要在确认后增加“等待年龄页面稳定”门控，而非立即点击。

### 新增测试：稳定生日页后再展开年份

- 代码在 `tools/android41_emulator_probe.py`：`birthday_year_dropdown_from_screenshot` 严格匹配已拍到的真实年龄页，以区别语言确认弹窗、国家确认弹窗和错误提示。匹配后只展开年选择框；不点击下一步，不输入/提交生日。
- 新增最多 15 次 / 每次间隔 3 秒的稳态截图检查，以处理 Unity 页面的淡入异步延迟。
- 新运行见 [#42357644804](https://github.com/969981/PokeHome_Resources/actions/runs/42357644804)，结果需以该运行实际 Artifact/报告为准；**创建云端用户、训练家 ID 和删号验收仍未完成**。
- `android_network_preflight` 可验证飞行模式、Android connectivity 的 INTERNET/VALIDATED 标志，但不能单独据此判断 HOME 专用后端连通，亦不能解释所有 `800/100101` 原因。

### 下一步条件

确认年份下拉控件表现 → 在官方允许、用户授权的有效配置下选择年月日 → 确认日期变更限制及必要协议 → 正常创建 guest 用户 → 在原生 ARM64 上只读获取第一个 `basic.utid` → 与六位显示 ID 校对。未验证官方永久删除云端账号前，不自动循环创建/删除账号。保留 `auth_registration_status=not_attempted_no_test_account` 与 `first_basic_utid_status=not_observed`，不能用工作流成功标记代替它们。


### 第四轮实际结果：年龄页稳态等待测试被网络错误阻断

- [Actions #42357644804](https://github.com/969981/PokeHome_Resources/actions/runs/42357644804) 的模拟器实际安装启动，但 `home_language_screen_recognized=false`、`country_confirmation_tap_succeeded=false`、`birthday_page_poll_attempts=0`、`birth_year_dropdown_open_attempted=false`。
- 真实最终截图为日文「通信環境が良い場所で再度お試しください」等网络环境提示，并非生日控件；没有显示详细数值错误码，**不能擅自标注为 800/100101**。
- 报告 `result=home_error_dialog_visible_unclassified`。未登录、不绑定 Nintendo Account、无云端账号注册或 ID 下发。
- 工作流被标记 failure 的直接原因是最后 Git 推送报告时 remote 4.1.0 已因本轮 Obsidian 文档提交前进，导致 `[rejected] HEAD -> 4.1.0 (fetch first)`；**不是模拟器启动失败**。原始截图和 JSON 已成功上传至该次短期 Artifact（ID `13568154230`），仓库上的最后一份报告未被本轮覆盖。
- 已在 `.github/workflows/android41-emulator-cache.yml` 中补上 `git fetch origin 4.1.0` + `git rebase FETCH_HEAD` 后再推送，不使用 force push。此改动尚未经过新一轮 Actions 执行验证。
- 原因区分：年龄页过渡动画导致的识别失败是第三轮 #42357127834；网络阻断是第四轮 #42357644804。两个失败点不应合并成一个问题。

截至本轮最远**真实完成位置**依然是第二轮 #42356611191 的中国大陆确认后年龄页出现。当前没有真实 `basic.utid`、目标六位 ID、生日提交、头像、小火龙选择或官方云端删除验收。
