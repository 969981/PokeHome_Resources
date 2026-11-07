---
title: HOME Android 4.1.0 游客模式可复用启动状态机
aliases: [HOME 4.1.0 自动初始化脚本, HOME41 guest setup]
tags: [pokemon-home, android, guest, emulator, automation, frida, utid]
status: 已实现并提交配置和状态机；CI 模拟器复测中；真实 ID 未捕获
updated: 2026-11-07
---

# 设计目标

以后每次 GitHub Actions 启动临时模拟器，自动重放已经在真实截图上验证过的安全初始化步骤：

```text
HOME 启动
  ├─已确认：选择简体中文
  ├─已确认：弹窗确认简体中文
  ├─已确认：展开亚太地区
  ├─已确认：选择中国大陆
  ├─已确认：确认中国大陆地区
  └─已确认：进入“确认年龄/请输入你的出生日期”页面
       └─只读/可逆探索：展开“年”选择器，保留截图并停止
           尚未完成：选择并提交有效年月日
           尚未完成：相关协议、头像、小火龙(#0004)
           尚未完成：正常注册、首次 basic.utid、官方账号删除
```

## 已持久化的选择与动作开关

`tools/home41_guest_profile.json` 保存一次，多次 Actions 自动复用：

| 键 | 值 | 约束 |
|---|---|---|
| `app_version` | `4.1.0` | 静态截图锚点与 APK 同版本 |
| `nintendo_account_link` | `false` | 全程不打开任天堂账号关联 |
| `language` | `zh-Hans` | 简体中文 |
| `region` | `亚太地区` | 已有真实页面证据 |
| `country` | `中国大陆` | 已有真实页面证据 |
| `birthdate_candidate` | `2000-01-01` | 预留有效成年测试日期，仅为候选；**尚未提交**，不可声称是账户资料 |
| `avatar` | `first_valid` | 计划默认合法头像，尚无运行时页面证据 |
| `starter_species_id` | `4` | 小火龙，尚未执行 |
| `inspect_birth_year_picker` | `true` | 只展开年份列表，不选择生日 |
| `submit_birthdate` | `false` | 不提交不可变生日 |
| `accept_terms` | `false` | 不自动确认法律条款 |
| `create_account` | `false` | 不进行无人监管的账号创建 |
| `delete_account` | `false` | 不调用删除接口 |

> [!warning] 出生日期页标注“无法在之后更改”。虽然用户允许研究中使用任意合法测试日期，当前只把候选配置写在脚本内，直到确认真实控件坐标、规则和注册实际行为之前，不提交。要创建真实账号时应重新核对官方对身份信息的要求。

## 状态机实现

新增：
- `tools/home41_guest_onboarding.py`：严格的截图签名识别器 + 可重用状态机；
- `tools/test_home41_guest_onboarding.py`：构造不依赖生产账号的测试截图，测试合法配置、错误弹窗、生日页、安全停止及敏感操作禁用；
- `tools/android41_emulator_probe.py`：已改成调用上述状态机，避免在主程序中继续增加逐步硬编码流程；
- `.github/workflows/android41-emulator-cache.yml`：在 Android 模拟器运行前执行新的语法/单元测试。

### 工作机制

1. 启动 HOME 后只识别已经审核过的页面，截图签名由背景、标题栏、按钮等多位置组成；识别不到就持续轮询到超时。
2. **连续两次**同一页面签名匹配才允许点击。可处理 Unity 淡入、弹窗切换、下一屏加载期间的瞬态截图。
3. 每个已确认阶段仅执行一次；前页动画残影不会重复点击上一步。可从已经跳转的更后页面识别当前位置。
4. 出现已知“通用错误弹窗布局”时**只截屏不点击**。页面错误类型仍要通过真实截图核对，不能凭布局把错误码写成 `800/100101`。
5. 达到生日页后最多打开一次年份选择器，并保存截图；不选择年月日、不按“下一步”。
6. 保留 `onboarding_checkpoint.json` 和本次截图到 3 天 Actions Artifact；临时 AVD 的会话仍然会销毁，**checkpoint 是进度证据，不是可复用的云端登录态**。

### 输出文件

`ci_emulator_trial/`：
- `onboarding_before_<stage>.png`：真实自动点击前截图；
- `onboarding_birthdate_page.png`：稳定的生日页面；
- `onboarding_birth_year_picker.png`：年份下拉框（若已真正点击）；
- `onboarding_final.png`：本轮结束屏幕；
- `onboarding_checkpoint.json`：每个实际点击过的阶段、停止原因、是否出现 ID；
- `emulator_probe_summary.json`：原有安装、进程、网络、缓存和安全状态。

## 本地运行 / GitHub Actions

在检出 `4.1.0` 的仓库上：

```powershell
py -3 -m pip install pillow
py -3 -m unittest tools/test_home41_guest_onboarding.py -v
```

通过现有工作流启动：

```text
GitHub → 969981/PokeHome_Resources → Actions
→ HOME Android 4.1.0 emulator install, launch and resource cache probe
→ Run workflow（4.1.0）
```

默认运行实际调用：

```powershell
python tools/android41_emulator_probe.py --apk <local HOME_4.1.0.apk> --output ci_emulator_trial --guest-profile tools/home41_guest_profile.json
```

**不需要每次改写按钮坐标**。若改版、分辨率或语言变化导致签名不匹配，状态机必须停下并交付截图；再在当前仓库加一个经过真实截图校验的新识别器。

## 已有运行时证据与下一步

- 真实可到生日页：[GitHub Actions #42356611191](https://github.com/969981/PokeHome_Resources/actions/runs/42356611191)。
- 动画竞态验证：[GitHub Actions #42357127834](https://github.com/969981/PokeHome_Resources/actions/runs/42357127834)。
- 网络错误 & 报告推送冲突：[GitHub Actions #42357644804](https://github.com/969981/PokeHome_Resources/actions/runs/42357644804)。
- 状态机重构后的 Actions 结果必须另行确认；尚不能把先前截图当成新状态机实测。

**下一项验收**：首次通过新状态机拿到完整年份下拉选项截图；随后逐步实现年月日选择（需要核对控件、合法性与不得更改规则），再继续头像 → 小火龙。登录/Token/首次 `ResponseParamCommon.basic.utid` 需要独立的原生 ARM64 Hook 证据，当前 x86_64 + Native Bridge 模拟器没有这项验证。**无任天堂账号关联、无自动删号循环。**

参考：[[HOME41_GUEST_ONBOARDING_ID_CAPTURE_20261107]]、[[HOME41_NO_UI_FIRST_ID_PATH_20261107]]。


## 2026-11-07：状态机第一次真实自动重放，进入年份列表

- [GitHub Actions #42358938707](https://github.com/969981/PokeHome_Resources/actions/runs/42358938707) **success**，实际报告 `onboarding.status=birth_year_picker_open_attempted`，`checks=28`。
- `completed` 明确包含 `choose_language`、`confirm_language`、`expand_apac`、`select_mainland`、`confirm_mainland`、`inspect_birth_year_picker`，全部一次性由统一状态机自动执行。
- `onboarding_final.png` **真实可见**年份下拉菜单：从 2026、2025 … 降至 2018，显示可滚动列表。初始 `onboarding_birth_year_picker.png` 截屏过早，处于下拉动画期；因此本次运行结构化状态仍只能称“点击已发送”，**截图才证明列表稍后实际出现**。
- 为修复这个时间差，又增加 `birth_year_popup_visible` 的独立灰色列表签名 + 连续两次校验。未来 `year_picker_verified=true` 和 `birth_year_picker_verified_open` 仅在真正看到稳定列表时输出，点击不等于确认打开。
- 本轮未选择 2000 年，未输入月/日，未点击下一步；`birthday_submitted=false`、`terms_accepted=false`、`account_created=false`、`account_deleted=false`、`first_basic_utid_observed=false`。**无真实六位 ID**。
- [独立只读/UI 单测 #42359250851](https://github.com/969981/PokeHome_Resources/actions/runs/42359250851)：13 项测试通过（6 项最早 UTID 只读逻辑、7 项本次状态机逻辑）。

### 下一段脚本应该补什么

1. 从真实年份列表验证“滑动/选中 2000”的 scroll 与 click 行为；需要只选年份并截屏，不能随意点击下一步。
2. 再从月/日控件中分别读取选项并确定 01/01；DOB 是不可修改信息，提交前应校验三项均正确。
3. 头像和小火龙仍为配置字段、未经过真实运行；每补一页都加入严格图片签名、离线单测和新的真实 Actions 截图。
4. 不绑定 Nintendo Account；云端账号创建、首次响应 `basic.utid`、官方删除与新号区别仍各有独立验收门槛。
