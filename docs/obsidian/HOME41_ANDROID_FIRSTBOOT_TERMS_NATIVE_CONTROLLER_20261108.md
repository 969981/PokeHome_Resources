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

## 下一项动态验证

Home_Android 已增加只读 Frida Hook：协议内容设置、同意条款区域、checkbox 状态变化、条款对话框打开及 OK 调用。先独立验证真实调用次数和事件顺序，之后再辨别协议 Next 与 I agree 的原版对象。

本轮所有证据都不证明协议已同意、游客号已创建、服务器曾下发 basic.utid 或六位 ID 已获得。用户已授权这次正常注册中的协议同意；该授权不等于完成了 UI 操作。
