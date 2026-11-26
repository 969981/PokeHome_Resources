# 奖章 Medal / 成就 Achievement

[返回图片资源导航](README.md) · [处理流程](07-Pipeline.md)

Android 原版现有解包发现 [Achievement 图集](../../Unpack/Android/4.1.0/images/9eaea10cde8e_19_sactx-0-1024x1024-ETC2-Achievement-ccbb449d.png)（1024×1024 名义尺寸）和 [正面 albedo](../../Unpack/Android/4.1.0/images/2f27fe95bd78_1_MTmedal_front_albedo_1.png)、[背面 albedo](../../Unpack/Android/4.1.0/images/08a068ddc2ac_1_MTmedal_back_albedo_1.png)。另有 normal、height、AO、medal UI、礼物/交换/释放图标等。

![Achievement 图集](../../Unpack/Android/4.1.0/images/9eaea10cde8e_19_sactx-0-1024x1024-ETC2-Achievement-ccbb449d.png)

处理：复用 UnityPy 导出，原样复制 PNG、校验像素 SHA、保存容器前缀及 PathID 候选。需从 SpriteAtlas packed sprite、rect、rotation、pivot 及原生 AchievementID 查到确定映射才可裁切。不可用连通域直接假定 ID。奖章模型贴图不等于成品图片。[补充索引](../supplemental/index.json)（待 CI）。[Unity 审计](../../Unpack/Android/4.1.0/_meta/unity_summary.json) · [运行时缓存状态](../../Unpack/Android/4.1.0/_meta/runtime_inventory_summary.json)。
