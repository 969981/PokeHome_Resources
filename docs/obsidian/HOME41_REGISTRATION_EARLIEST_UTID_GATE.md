---
title: "HOME Android 4.1.0 注册前端阶段与最早 UTID 时序验收"
aliases:
  - HOME 4.1.0 registration timing verification
tags: [pokemon-home, android, id32, trainer-id, api, emulator, onboarding]
status: "已进入地区选择；在线注册和首次 UTID 尚未验证"
updated: "2026-11-07"
---

# HOME 4.1.0 正常注册流程的最早 ID 读取

> [!summary]
> Android 15 Google APIs x86_64 + ARM Native Bridge \`libndk_translation.so\` 已证明能够安装并运行 HOME 4.1.0 APK。屏幕录证已经到达 **简体中文确认后 → 选择地区**。下一阶段需要用户实际完成国家/地区、生日与条款确认，不能凭空创建“授权账号”。

## 现场证据

| 证据 | 值 | 级别 |
|---|---|---|
| APK SHA-256 | \`8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1\` | 原始 APK 核验 |
| AVD | Android API 35，x86_64 + arm64-v8a bridge | 运行时实测 |
| CAMERA | 临时无实体相机测试设备，\`granted=true\` | \`dumpsys\` 已确认 |
| 位置（Fine/Coarse） | \`granted=false\`，\`USER_SET|USER_FIXED\` | \`dumpsys\` 已确认 |
| 通知 | \`granted=false\`，\`USER_SET|USER_FIXED\` | \`dumpsys\` 已确认 |
| 实际 UI | 语言选择 → 简体中文确认 → 地区选择 | Actions #42341229111 屏幕实测 |
| 注册 HTTP 调用 | 未运行 | 无证据 |
| \`UDManager.SetBasic\` | 原生函数 RVA 已知，未实机命中 | 静态恢复 |
| HOME 六位 ID \`888888\` | 未生成 | 无证据 |

## ID 接收阶段

\`\`\`mermaid
flowchart TD
  L[确认语言] --> R[地区与国家]
  R --> B[真实生日输入]
  B --> T[服务协议与隐私确认]
  T --> A[正常 HOME 账户初始化]
  A --> N[认证/注册请求和 UUID]
  N --> C{首个包含 basic.utid 的真实回包?}
  C -->|待验证: 注册公共部分| D[UDManager.SetBasic]
  C -->|待验证: 首次 login| D
  D --> E[读取 numeric UTID]
  E --> F[六位候选 ID32 % 1e6]
  F --> G[和游戏实际显示的六位训练家 ID 对账]
\`\`\`

研究锚点：

- 注册 serializer \`0x1D334A4\`、注册响应回调 \`0x1D33294\`；
- 公共响应读取 \`ResponseParamCommon.basic\`：\`0x1D2BA60\`；
- 调用 \`UDManager.SetBasic\`：\`0x1D2BA64 BL 0x1D763D0\`；
- Android \`UD_Basic.utid +0xF0\` 为**托管字符串引用**，不是 32 位整型槽。

## 复现 / 读出

- 模拟器自动化：\`.github/workflows/android41-emulator-cache.yml\`
- AVD 只读探针：\`tools/android41_emulator_probe.py\`
- OS 权限：\`tools/android41_test_permissions.py\`
- UI 识别（不接触服务协议）：\`tools/android41_ui_flow.py\`
- 只读注册/ID Frida hook：\`tools/early_home_tid_observer.js\`
- 回调时间差工具：\`tools/home41_auth_timeline.py\`（只接受真实事件日志；附测试示例仅用于检验算法）
- 完整迭代日志：[[HOME41_UTID_EARLY_READ_AND_EMULATOR]]

真实首次注册还缺：**经账号所有者确认的国家/地区、真实生日/年龄信息、条款确认与授权账号会话**。无上述信息时不能为用户捏造“测试账号”，也不能模拟服务器正常分配的 UTID。目标是观察而非修改 ID。


## 2026-11-07 继续：地区页的可逆探索（不提交账号资料）

十三轮 Actions \`42341229111\` 的 \`screen_after_wait.png\` 实际分辨率是 **1080×2340**。在颜色与布局复核后，已确认此页面含七个大区分类：非洲、北美洲、拉丁美洲、大洋洲、**亚太地区**、欧洲和中东地区。

本轮仅为判明接下来可选的国家/地区列表，新增 \`screenshot_apac_region_expand_position\`：同时验证顶部青绿色标题栏、淡绿色底色和七条白色圆角选项的像素结构，且只返回**第五项“亚太地区”的展开箭头位置**。若截图不是当前已核验的地区列表，则返回 \`None\` 并禁止任何点击。展开以后只截图，不选择国家/地区，也不提交出生日期或确认协议。

- 状态字段：\`region_list_page_recognized\`、\`region_apac_dropdown_expansion_attempted\`、\`region_apac_dropdown_tap_succeeded\`；
- 明确约束：\`country_selected=false\`、\`birthdate_entered=false\`、\`terms_or_privacy_accepted=false\`；
- 截图：\`screen_after_region_dropdown.png\` 仅保存至私有短期 Actions Artifact；
- 下一步仍需来自账号本人明确授权的地区/生日/条款选择以及真实首次注册会话，才能比较注册回调与首个 \`SetBasic\` 事件。

**地区展开属于导航实验，不能等价于账号地区设置成功。**
