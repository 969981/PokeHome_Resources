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

## 下一项动态验证

Home_Android 已增加只读 Frida Hook：协议内容设置、同意条款区域、checkbox 状态变化、条款对话框打开及 OK 调用。先独立验证真实调用次数和事件顺序，之后再辨别协议 Next 与 I agree 的原版对象。

本轮所有证据都不证明协议已同意、游客号已创建、服务器曾下发 basic.utid 或六位 ID 已获得。用户已授权这次正常注册中的协议同意；该授权不等于完成了 UI 操作。
