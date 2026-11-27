# 奖章 Medal / 成就 Achievement

[返回图片资源导航](README.md) · [处理流程](07-Pipeline.md)

Android 原版现有解包发现 [Achievement 图集](../../Unpack/Android/4.1.0/images/9eaea10cde8e_19_sactx-0-1024x1024-ETC2-Achievement-ccbb449d.png)（1024×1024 名义尺寸）和 [正面 albedo](../../Unpack/Android/4.1.0/images/2f27fe95bd78_1_MTmedal_front_albedo_1.png)、[背面 albedo](../../Unpack/Android/4.1.0/images/08a068ddc2ac_1_MTmedal_back_albedo_1.png)。另有 normal、height、AO、medal UI、礼物/交换/释放图标等。

![Achievement 图集](../../Unpack/Android/4.1.0/images/9eaea10cde8e_19_sactx-0-1024x1024-ETC2-Achievement-ccbb449d.png)

处理：复用 UnityPy 导出，原样复制 PNG、校验像素 SHA、保存容器前缀及 PathID 候选。需从 SpriteAtlas packed sprite、rect、rotation、pivot 及原生 AchievementID 查到确定映射才可裁切。不可用连通域直接假定 ID。奖章模型贴图不等于成品图片。[补充索引](../supplemental/index.json)（已归档）。[Unity 审计](../../Unpack/Android/4.1.0/_meta/unity_summary.json) · [运行时缓存状态](../../Unpack/Android/4.1.0/_meta/runtime_inventory_summary.json)。

## 2026-11-26 原生引用审计

已确认 Achievement SpriteAtlas 有 12 条外部 PPtr，奖章 OBJ 有 218 顶点和 144 三角形；业务 ID 与 UV 尚未闭合。详见 [Android 原生证据](../research/ANDROID_ACHIEVEMENT_MEDAL_EVIDENCE.md) · [12 条原始引用](../research/achievement_packed_refs.csv)。

## 原始 APK 来源已定位

[元数据审计 Actions 45772878715](https://github.com/969981/PokeHome_Resources/actions/runs/45772878715) 成功：12 Achievement、12 BankMarks、3 材质、41 对象候选、27 引用候选、2229 方法名候选。原始 APK 位于 [Home_Android 固定提交](https://github.com/969981/Home_Android/tree/46f4dd1827c70236bcd3b63faf21f0384798dffb/ROMS/4.1.0)，不复制 APK 或 ELF 到本仓库。新增 [原始 APK 审计工具](../../tools/home41_android_native_atlas.py) 与 [工作流](../../.github/workflows/home-android-native-atlas.yml)。原始字节执行结果尚待 Actions 验收；通过后生成 android_native_atlas/README.md（位于 research 下）。Runtime cache 仍未提供。业务 ID 不以图集序号代替。
