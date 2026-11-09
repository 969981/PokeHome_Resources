---
title: HOME Android 4.1.0 原版首次启动协议控制器
date: 2026-11-08
status: 静态类布局与 RVA 已验证；动态命中和真实注册未验收
tags: [HOME, Android, IL2CPP, Frida, FirstBoot]
---

# 首次注册协议原生控制器

## 来源与边界

[方法索引 Actions #42460354867](https://github.com/969981/PokeHome_Resources/actions/runs/42460354867) 在真实 4.1.0 IL2CppDumper 的 180,628 条方法中定位名称和原版 RVA。

[类布局 Actions #42460662202](https://github.com/969981/PokeHome_Resources/actions/runs/42460662202) 还原 FirstBootBodyController、FirstBootViewCheckBoxText、FirstBootViewClausePart、TermsOfServiceConfirmDialog 等七个类。

Android 侧 [Actions #42459707874](https://github.com/969981/Home_Android/actions/runs/42459707874) 已真实点击生日页 Next，HOME 仍在前台、新页面显示，但 UIAutomator 未提供协议/隐私正文及可点按钮；这只能说明 Android 可访问性信息不足。

## 核心方法与 ARM64 RVA

| 原版 IL2CPP 方法 | RVA | 静态含义 |
|---|---|---|
| FirstBootBodyController.SetUpContentsForConfirmationTerms | 0x1DE2400 | 条款确认内容 |
| FirstBootBodyController._AddClauseAgreePart | 0x1DE09D8 | 协议同意区域 |
| FirstBootBodyController._AddClauseDenyPart | 0x1DE0B10 | 协议拒绝区域 |
| FirstBootBodyController._AddCheckBoxText | 0x1DE19B8 | 创建勾选框文本 |
| FirstBootBodyController.ConfirmationTermOfService | 0x1DE2E4C | Action endCbk |
| FirstBootBodyController.ConfirmationAdvertisementSDK | 0x1DE30E8 | Action endCbk |
| FirstBootBodyController.ConfirmationGestAccount | 0x1DE369C | Action<bool> onFinished |
| FirstBootBodyController.ConfirmGestAccountFirst | 0x1DE5140 | Action<bool> onFinished |
| FirstBootBodyController.ConfirmGestAccountSecond | 0x1DE5318 | Action<bool> onFinished |
| FirstBootViewCheckBoxText.OnValueChange | 0x1C7FD54 | 布尔参数 isFlag |
| FirstBootViewCheckBoxText.get_CheckBoxFlag | 0x1C7FD08 | 获取布尔值 |
| FirstBootViewCheckBoxText.set_CheckBoxFlag | 0x1C7FD20 | 原版写入方法，未调用 |
| FirstBootViewClausePart.Setup | 0x1C7FE48 | 使用本地资源文本 ID |
| TermsOfServiceConfirmDialog.Open | 0x1E22360 | 含协议和隐私同意布尔参数 |
| TermsOfServiceConfirmDialog._OnClickOkButton | 0x1E22738 | 对话框确认按钮 |

Gest 是原版符号的原始拼写。TermsOfServiceConfirmDialog 可能由标题页及其他场景复用，不能仅凭类名认定是首次注册页。

## FirstBootBodyController 原生字段

- 底部按钮根节点 +0x48
- 宽按钮预制体 +0x60
- 单按钮预制体 +0x68
- 双按钮预制体 +0x70
- 同意条款预制体 +0x80
- 拒绝条款预制体 +0x88
- Checkbox 文本预制体 +0xC8
- 当前步骤 _step +0xE8

协议区域来自 Unity 预制体，因此 Android UIAutomator 不一定可以读到完整的文字或按钮。字段与 RVA 均来自静态布局；尚不具备安全写入依据。

## 原版 FirstBoot Phase 已完成 A/B 验证

静态证据：[原版 Phase 枚举提取 Actions #42462496408](https://github.com/969981/PokeHome_Resources/actions/runs/42462496408) 从 dump.cs 获取 TypeDefIndex 1949，完整 0—25 共 26 个枚举；相关步骤为：

| 原版 Phase 值 | 精确符号 | 对应概念 |
|---:|---|---|
| 1 | LANGUAGE | 语言选择 |
| 2 | MD_DOWNLOAD | 下载/准备 |
| **3** | **TERM_OF_SERVICE** | **服务协议** |
| 4 | ADVERTISEMENT_SDK | 广告 SDK 声明/设置 |
| 5 | WARNING | 警告 |
| 7—12 | NA_LINK_* | Nintendo Account 关联流程相关 |
| 13 | NA_NOT_LINK | 不绑定 Nintendo Account |
| 14 | MT_LOGIN | 移动端账户登录 |
| 15 | MT_SELECT_ICON | 选择头像 |
| 16 | MT_INPUT_NAME | 输入昵称 |
| 17 | MT_INPUT_BIRTH | 出生日期 |
| 18 | MT_SELECT_COUNTRY | 国家/地区 |
| 19 | MT_CONFIRMATION | 信息确认 |
| 21—22 | PROLOGUE / PROLOGUE2 | 序章 |
| 23 | GEST_CONFIRMATION | 游客确认（原版拼写 GEST） |
| 24 | ALL_END | 完成 |

**动态证据**：[原版 HOME 实际运行 Actions #42461177711](https://github.com/969981/Home_Android/actions/runs/42461177711)：经过原版生日页「下一步」，FirstBootBodyController 当前 _currentPhase 原生读数为整数 3，且 ConfirmationTermOfService 实际命中；与上述静态 Phase 枚举一一对应，说明**确实到达了服务协议阶段**。这仍不等于已经勾选或同意。

截图取证已改为 **只有原版 Phase 3 + 原生 Terms 控制器事件 + 未注册**才允许保存遮蔽系统栏的图像。普通 UIAutomator 无法给出具体按钮，不猜坐标、不调用原生条款写入函数。原版状态扫描不读取 token 或 UTID。

## 原版协议页用户授权同意 UI 已成功验证

- [Actions #42462814367](https://github.com/969981/Home_Android/actions/runs/42462814367)：Frida 原版阶段 3 与协议入口共证，安全取得「确认用户协议及隐私权政策」真实截图。
- [Actions #42463584108](https://github.com/969981/Home_Android/actions/runs/42463584108)：第一个 checkbox 真实勾选 A/B 成功，第二个未改动。
- [Actions #42464173987](https://github.com/969981/Home_Android/actions/runs/42464173987)：首轮 Frida GitHub Release 504 下载失败，重跑后在原版 HOME 中两个 checkbox 均真实选中；单次点击原版协议「下一步」，新页面出现，日志 status=terms_next_clicked_new_page_seen，后续页面未保存或点击。
- 协议点击只是用户授权的客户端 UI 行为；服务器是否持久化条款同意仍未独立确认，也没有证据证明游客账号创建、任天堂账号解绑或 basic.utid 到达。
- 独立的正式账号流程仍应在用户可保存会话的设备上完成；临时 AVD 测试不作为正式建号成果。

## 协议后 Phase 4 的原版动态证据（2026-11-09）

[Actions #42475979434](https://github.com/969981/Home_Android/actions/runs/42475979434) 的原版 HOME 4.1.0 ARM64 Frida 实测表明，已经在 Phase 3 成功勾选用户协议和隐私政策、点击一次原版「下一步」后，
原生 FirstBootBodyController._currentPhase = 4、最近一次 GoToPhase 请求参数 = 4、ConfirmationAdvertisementSDK 方法入口计数 = 1、GoToPhase 入口累计 = 4。
根据原版 Phase 枚举，Phase 4 对应 ADVERTISEMENT_SDK。日志没有显示账号创建或 Nintendo Account 绑定。

后续 [Actions #42496860432](https://github.com/969981/Home_Android/actions/runs/42496860432) 的首次执行在 ADB/语言页初始化失败，没有取得 Phase 4 画面；并非推翻已证明的 3→4 转移。
HOME Android 的 Phase 4 遮蔽截图工具已修复两份报告衔接：home41_emulator_report.json 保留日期/进程状态，home41_post_terms_phase_report.json 才是原生 Terms 后 Phase 结果。
现在必须同时验证两份报告，才允许保存已遮蔽系统栏的图像。

[修复后的 Phase 4 可视化实测 Actions #42538845441](https://github.com/969981/Home_Android/actions/runs/42538845441) 已启动。该任务不点击广告 SDK 页的任何选项，也不读取账号资料。尚未有新截图验收。
## Phase 4 页面已经获得原版截屏（2026-11-09）

[HOME Actions #42538845441](https://github.com/969981/Home_Android/actions/runs/42538845441) 成功完成 Phase4 原生证据合并与屏幕取证：
当前 Phase=4 ADVERTISEMENT_SDK、最近请求 Phase=4、ConfirmAdvertisementSDK 原生入口命中。工具输出 masked_screenshot_saved=true。

**页面标题**：关于用户信息的使用。
**页面正文**：HOME 为优化功能、保持稳定和改善服务，收集应用操作记录、性能相关错误信息，依照隐私政策使用；页面明确「即使不同意上述内容，你仍可使用 Pokémon HOME」。
**底部两个原版按钮**：左「不同意」，右「同意」。这是一个非必需的额外数据收集选择，和上一步的用户协议+隐私政策勾选不同。此前用户仅授权同意服务协议，因此应走官方左侧「不同意」选项以避免额外信息收集。

已加入原版 Phase4 一次性操作 [HOME Actions #42539800940](https://github.com/969981/Home_Android/actions/runs/42539800940)：在原生 Phase 4、原版中文像素特征、HOME 前台、已完成两项条款确认全部吻合时，才允许点击左侧「不同意」一次；随后使用**同一个仍附加的 ARM64 Frida agent** 读取 Phase 和 GoToPhase 的真实变更，尝试验证 Phase 5 WARNING。该实验不点击右侧「同意」、不注册账号、不绑定 Nintendo Account、不读取 UTID。

**结果边界**：该 Phase5 A/B 工作流尚未取得运行结论，不能提前声称 Phase 5 已到达。
## Phase 4 不同意：第一次真实按钮 A/B 结果

[HOME Actions #42539800940](https://github.com/969981/Home_Android/actions/runs/42539800940) 在原版 ARM64 FirstBoot Phase4 页面完成了左侧「不同意」的一次性点击。视觉取证报告：decline_button_tapped=true、post_decline_screen_changed=true、agree_button_tapped=false。
但是同一个 Frida agent 在动作后再次读取原生 `_currentPhase=4`，最近请求 Phase=4，GoToPhase 计数仍为 4。因此**不能把该步骤视为进入 Phase5**；即便 UI 已变化，也可能存在额外确认页或内部等待回调。

新增 [点击后遮蔽截图 Actions #42540554942](https://github.com/969981/Home_Android/actions/runs/42540554942)：只有用户信息使用页的「不同意」真实点击、画面变化、原生当前和最近请求 Phase 均为 4、尚未注册时，才截取被系统栏遮蔽的画面。不执行任何额外操作。
## Phase4 不同意后的二次确认弹窗（2026-11-09）

[HOME Actions #42540554942](https://github.com/969981/Home_Android/actions/runs/42540554942) 使用同一 ARM64 原生代理确认在首次「不同意」后仍为 Phase 4、最近请求仍为 4，且读取了遮蔽后的实际 Unity 界面。
弹窗原文：**「即使你不同意此条款，仍然可以使用 Pokémon HOME。」**
底部按钮为左「返回」、右侧橙色「下一步」。因此前一次没有进入 Phase5，是因为还有 **二次确认**，并非错误调用 GoToPhase。

已提交 `ci/home41_phase4_decline_modal_next_once.py` 及严格图像门控测试，只允许点击该原版已验收弹窗的右侧橙色 Next 一次，绝不选择数据收集的「同意」。
[完整原生 Phase5 再验收 Actions #42541431359](https://github.com/969981/Home_Android/actions/runs/42541431359) 已启动，在同一个 Frida 代理中检验 `_currentPhase`、最近请求 Phase 和 GoToPhase 增量。当前未取得最终 Phase5 证据，不应提前声称通过。
## 2026-11-09：用户追加授权 Phase 4 的可选信息收集同意

这项授权与前面的「用户协议」「隐私政策」是分开的。原版广告 SDK 信息使用页有两个选项：左「不同意」、右「同意」。用户本轮明确允许右侧「同意」。因此在全新的、未注册的临时 AVD 上新增独立 opt-in 路径，不在已经执行左侧 opt-out 的同一会话上反复点选。

- [HOME Actions #42542169594](https://github.com/969981/Home_Android/actions/runs/42542169594)：按授权独立验证原版 Phase 4 右侧「同意」单击，保留 Frida ARM64 观察器记录后续阶段请求。
- `ci/home41_phase4_agree_once.py` 与 `ci/test_home41_phase4_agree_once.py` 复用已成功实测的 Phase 4 原始页面严格图像签名，只将点击目标改为右侧，不点击左侧或未知按钮。
- AVD 仍未注册账号，测试不创建账号、不绑定 Nintendo Account、不导出 UTID、Token 或网络正文。

旧路径对照结果：[Actions #42541431359](https://github.com/969981/Home_Android/actions/runs/42541431359) 「不同意」→二次弹窗「下一步」后，原生 GoToPhase 累计调用从 4 增加到 6，最后请求阶段 7 = NA_LINK_CONTINUE；此时 _currentPhase 返回 null，可能因控制器在转场中不可读。原流程虽然因只允许 Phase 5 验收而标记失败，但有继续前进的原生请求证据。严禁将最后请求 Phase 7 冒充已完成 Nintendo Account 绑定或账号注册。
## Phase 4 同意：原版 ARM64 A/B 通过

[HOME Actions #42542169594](https://github.com/969981/Home_Android/actions/runs/42542169594) 已完成用户明确授权的 Phase 4 可选设备操作记录和性能错误信息收集「同意」A/B。

| 项目 | 运行结果 |
|---|---|
| 原版 Phase 4 右侧「同意」 | 点击成功 |
| 画面切换 | post_agree_screen_changed=true |
| 误点击左侧「不同意」 | false |
| GoToPhase 调用累计 | 4 → 6 |
| 最后请求阶段 | 7 = NA_LINK_CONTINUE |
| 当前阶段 | null（转场控制器不可读），不可声称当前 7 已稳定驻留 |
| Nintendo Account 绑定 / 账号注册 / UTID | 均未执行或未观测 |

这证明了客户端执行原版右侧「同意」及后续阶段请求，不证明服务器持久化该可选隐私选择；更不代表已创建正式游客号。

下一步 [HOME Actions #42542835109](https://github.com/969981/Home_Android/actions/runs/42542835109) 增加只读遮蔽取证：只有原版 Phase4 的同意真实点击、原生 GoToPhase(7) 请求、尚未注册/绑定三项条件同时成立时，才保存 Nintendo Account 关联流程入口**实际显示的页面**。截图不是自动点击，不会直接绑定账户，也不能单凭 GoToPhase 请求确认已进入最终稳定 Phase7。
## 下一项动态验证

Home_Android 已增加只读 Frida Hook：协议内容设置、同意条款区域、checkbox 状态变化、条款对话框打开及 OK 调用。先独立验证真实调用次数和事件顺序，之后再辨别协议 Next 与 I agree 的原版对象。

本轮所有证据都不证明协议已同意、游客号已创建、服务器曾下发 basic.utid 或六位 ID 已获得。用户已授权这次正常注册中的协议同意；该授权不等于完成了 UI 操作。

## 2026-11-09：Phase 4 同意及 Nintendo Account 关联选项原版取证

[HOME Actions #42542169594](https://github.com/969981/Home_Android/actions/runs/42542169594) 已实测在新原版 Android AVD 中点击 Phase4 信息收集页面右侧「同意」一次，画面改变，GoToPhase 累计 4→6，最后请求 Phase7 NA_LINK_CONTINUE；当前 Phase 值因控制器转场暂不可读。没有注册账号或实际绑定 Nintendo Account。

[HOME Actions #42542835109](https://github.com/969981/Home_Android/actions/runs/42542835109) 再次完整验证此路径，成功保存经过系统栏遮蔽的下一个真实页面；运行日志标明 masked_image_saved=true，脚本未点击此页。

**新页面标题**：关联 Nintendo Account。下方两个官方按钮为橙色「关联」、白色「不关联」。该页警告：**「若现在不关联，以后将无法关联。」** 与后续 Switch 版联动、跨设备迁移、冠军赛成绩及部分功能存在关联限制。

**关键限制与决策门禁**：用户原始目标为不绑定 Nintendo Account 进行单次游客初始化，但最新截图显示「不关联」具有不可逆后果。临时 Actions 模拟器仍未点击此按钮、未注册或删除账号，也没有首次 basic.utid。不得把 GoToPhase(7) 当作已选择不关联。今后只有用户在看到该不可逆提示后仍明确同意不关联，才应在用户可持久保有的设备上沿官方页面继续，避免把唯一游客号建立在会被回收的临时 CI AVD 中。

## 2026-11-09：已明确确认 Nintendo Account 永久不关联

用户本轮已明确确认在官方原版 HOME 初次初始化中选择「不关联 Nintendo Account」，并接受官方界面提示的以后无法再关联限制。这项确认不同于此前的 Phase4 可选信息收集「同意」授权。

在已实测的 [Phase7 请求后页面 Actions #42542835109](https://github.com/969981/Home_Android/actions/runs/42542835109) 上，顶部橙色按钮「关联」与底部灰白按钮「不关联」完全不同。新增 ci/home41_nintendo_no_link_once.py，只有满足原版 ARM64 GoToPhase(7)、完整已验证页面警告区与两个按钮像素签名时才允许点击下方「不关联」一次；随后停在下一未知页面。该脚本不点击关联、不进行头像/小火龙/注册操作，也不保存 UTID 或 Token。

[本轮原版 Android 模拟器 Actions #42545454494](https://github.com/969981/Home_Android/actions/runs/42545454494) 正在验证该单次操作。正式持久游客号和第一次 basic.utid 仍未得到证据；GitHub 临时 AVD 的状态不能作为可长期使用的账号存档。

## 2026-11-09：「不关联」原版单次点击验收成功

[HOME Actions #42545454494](https://github.com/969981/Home_Android/actions/runs/42545454494) 已成功，严格基于原版 4.1.0 Android ARM64 Frida GoToPhase(7) 证据和官方中文 Nintendo Account 页面像素签名，点击**底部灰白色「不关联」一次**；上方橙色「关联」没有点击。运行 JSON 为 original_no_link_button_tapped=true、post_click_screen_changed=true、nintendo_link_button_tapped=false。

原生阶段证据：GoToPhase 计数从 6 增为 7，最新请求阶段为 **23 = GEST_CONFIRMATION**（原版 IL2CPP 拼写）；当前阶段值为 null（旧 FirstBoot 控制器可能在转场中销毁），因此只能确认真实**阶段请求**，不能谎称当前 Phase 23 已稳定显示。

此次未点击后续确认、注册、头像或初始宝可梦选择按钮；也没有在新页面保存/上传原始图片，未取得真实 basic.utid。GitHub Hosted AVD 是一次性环境，不能把它视为已有可持久使用的游客账号。为了避免反复从头创建临时游客会话，后续应优先在用户可持续保有的设备或可安全保存会话的模拟器里继续单账号注册。

完整证据由同一 Actions Artifact 提供：home41_post_terms_phase_report.json、home41_nintendo_no_link/no_link_once_status.json、点击前遮蔽截图。选择「不关联」的不可逆后果已由用户明确确认，后续无需重复询问。

## 2026-11-09：原版游客确认页 GEST_CONFIRMATION 的真实界面

[HOME 原版模拟器 Actions #42547016591](https://github.com/969981/Home_Android/actions/runs/42547016591) 已成功。前置流程按用户授权：1999/4/5、服务协议与隐私政策勾选、可选信息收集右侧「同意」、Nintendo Account 底部「不关联」一次。原生 GoToPhase 从 6 增至 7，最后请求 23 = GEST_CONFIRMATION，且注册序列化原生调用计数 0、first_basic_seen=false。

此后得到真实的系统栏遮蔽图 `home41_guest_confirmation/guest_confirmation_masked.png`，页面标题 **「使用游客账号开始」**，再次强调「若现在不关联，以后将无法关联」，还列出：Switch版 HOME 与其他游戏软件联动、Pokémon Bank 转入、换设备数据继承、主系列对战赛事个人成绩、手机 HOME 神秘礼物与奖牌，以及 Pokémon Champions 的关联均不支持游客账号。

底部为 **「要用游客账号开始吗？」** 的最终确认。首次截图沿用通用截图遮挡策略，最底部 3% 被遮住，未露出完整确认按钮文字；不能依照颜色猜哪个按钮是「是」。已提交仅针对原版未注册 GEST 阶段的按钮区域局部取证，并启动 [Actions #42547739283](https://github.com/969981/Home_Android/actions/runs/42547739283)，只截图不操作。

**安全与真实性边界**：此阶段已经选择不关联，但尚未执行最后的游客创建按钮；不是已注册账号，未取得服务器 basic.utid，也未证明账户可在用户设备持久使用。不要在公开 CI 上传 Token/授权会话或原始注册响应。

## 2026-11-09：游客确认「否/是」原版按钮与单次创建验收

[原版 GEST_CONFIRMATION 下方按钮截图 Actions #42547739283](https://github.com/969981/Home_Android/actions/runs/42547739283) 经过首轮 ADB root 环境失败与第二次重跑，成功取得仅包含底部游戏按钮、不包含 Android 导航栏的局部图：左边白色「否」、右边橙色「是」。标题为「使用游客账号开始」，并明确列出游客账号无法联动 Switch、Pokémon Bank、换机数据继承、赛事成绩、手机神秘礼物/奖牌和 Pokémon Champions。

同时原始 ARM64 只读 Hook 显示 `ConfirmationGestAccount=1`、`ConfirmGestAccountFirst=0`、`ConfirmGestAccountSecond=0`，首次注册序列化=0、`first_basic_seen=false`。因此此阶段仍未创建账号。

[第一次一次性 Guest YES Actions #42549278199](https://github.com/969981/Home_Android/actions/runs/42549278199) 因将右侧「是」的白色文字误判为橙色背景而正确拒绝：`guest_yes_tapped=false`，未触发注册。已用真实图片逐像素校准页眉、红色警告框、左右按钮、两个字的颜色和位置，修正安全门禁。其原版按钮目标为 (810,2280)，仅适用于受原生证据确认且截图 1080×2340 的中文游客确认页。

[修正后的用户授权单次 Guest YES Actions #42549571055](https://github.com/969981/Home_Android/actions/runs/42549571055) 已启动。正式执行仅在原始 GEST_CONFIRMATION、双截图和完整原生 No-Link 证据满足时，点击右侧「是」一次，随后通过保留的 Frida agent 只记录：注册请求序列化次数、注册响应回调次数、首次 basic 是否出现、GuestConfirm first/second 方法命中和最后请求 Phase，不保存任何 Token、UTID、HTTP body 或注册后截图。

**注意**：GitHub-hosted emulator 属于会销毁 userdata 的临时环境，假如真实游客号已创建，也不能把它当作用户能长期使用的 HOME 账号。这个研究用的单次建号不代表已经获得永久保存的游客登录会话。独立的私有持久环境仍需验收。

## 2026-11-09：游客「是」触发原版 First 回调，注册请求仍为 0

[HOME Actions #42549571055](https://github.com/969981/Home_Android/actions/runs/42549571055) 已实测通过：原版游客确认页右侧橙色「是」已点击一次，屏幕明显变化；Frida 仍附加原版 ARM64 libil2cpp。运行时 `ConfirmationGestAccount=1`、`ConfirmGestAccountFirst=1`、`ConfirmGestAccountSecond=0`，注册请求序列化 0、注册响应回调 0、首次 Basic / UTID 0。

**结论**：尚未创建或持久保存游客账号，点击第一个「是」仅进入第一段 guest confirmation，绝不可宣称正式账号已创建。此处没有执行 Nintendo Account 登录。

为避免下一步误点已经存在的账号控件，新增 `ci/home41_guest_after_first_visual.py`：仅在第一次确认方法真实命中、第二次确认仍为 0、注册请求与响应均为 0、first_basic_seen=false 时，保存当前界面系统栏遮蔽图和底部游戏按钮局部图。

[新的只读 Actions #42550641554](https://github.com/969981/Home_Android/actions/runs/42550641554) 已启动；在获得 UI 证据前，不使用原生回调模拟「是」，也不会自动点击未知第二层操作。账号如果最终在 GitHub 临时 AVD 创建，相关登录会话无法通过本流程持久化；工作流禁止 Token、原始 UTID、HTTP body 或注册后截图进入公开 Actions Artifacts。
