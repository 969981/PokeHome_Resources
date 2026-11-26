---
title: Android Achievement SpriteAtlas 与 MTmedal 原生证据
tags: [pokemon-home, unity, achievement, medal, research]
version: "4.1.0"
---
# Android Achievement SpriteAtlas 与 MTmedal

[返回成就分类](../docs/06-Achievements.md) · [覆盖率](../docs/08-Coverage.md) · [引用索引](achievement_packed_refs.csv)

## 实际证据（2026-11-26）

基线提交 722af4aa1d85fa6764f97a492bc2ce8bca511fc3。本轮直接读取仓库 Unity 引用 CSV、导出文件清单、OBJ、IL2CPP loader hints 与 supplemental index；未重新读取 APK 原始字节。上一轮 [Actions 45771877915](https://github.com/969981/PokeHome_Resources/actions/runs/45771877915) 成功。

- SpriteAtlas 容器 `assets/bin/Data/6e26bfd444fa55b46903a2904dda6ee6`，PathID 1，m_PackedSprites[0..11] 共 12 条、FileID 1..12，均 external_file。精确转录见 [CSV](achievement_packed_refs.csv)，AchievementID 留空。
- [1024×1024 ETC2 图集导出](../../Unpack/Android/4.1.0/images/9eaea10cde8e_19_sactx-0-1024x1024-ETC2-Achievement-ccbb449d.png) 实际尺寸已由上一轮 index 验证，PNG SHA256 681808913e356d41e75c707014ee8305318ceacac8d31f1f8bc2d276ff6841e3。纹理导出名 PathID 19；尚无直接 PPtr 证据将该 Texture2D 与 SpriteAtlas 绑定。
- 831 个现有 Sprite 导出中，按 achievement/achieve 名称筛选仅见 achievedate 排序 UI 与 cmn_icon_achieve（通用图标候选）；不能据名称认定 12 个 sprite 未导出，也不能据序号推断业务 ID。
- [Unity 引用表](../../Unpack/Android/4.1.0/_meta/unity_references.csv) 全局 2631 条，1148 same-file、1483 external；BankMarks 的 12 个 m_PackedSprites 全部 same-file，适合作为 PPtr resolver 正对照。
- `MedalResourceData$$_OnTextureLoaded` 地址 30475804 / 0x1D1061C，来自 [loader hints](../../Unpack/Android/4.1.0/_meta/il2cpp_loader_hints.csv)，仅符号名候选，不是已反汇编函数或消费者调用链。

## 奖章几何及材质

[原始导出 OBJ](../../Unpack/Android/4.1.0/models/7376f9962a00_1_Medal.obj) · [几何 GLB](../../Unpack/Android/4.1.0/models/glb/7376f9962a00_1_Medal.glb) · [GLB 索引](../../Unpack/Android/4.1.0/_meta/glb_objects.csv)。

OBJ 实查：218 v、218 vt、218 vn、144 f，0 usemtl、0 mtllib；GLB 既有验收为 218 顶点、144 三角形、geometry_validated。不是带原生材质的可验收成品。

| Material | 容器 | Shader PPtr |
|---|---|---|
| medal_front | 326cd1d6e986e90479974e750894ef82 | FileID 1 / PathID 7 |
| medal_back | 3ce7ac26ed1e5be40b55737872cda53b | FileID 1 / PathID 7 |
| Medal_01 | a43b6ffb691531448a3185e1b298fafa | FileID 1 / PathID 1 |

三条 Shader PPtr 都未解析外部文件；FileID 局部有效，不能将两个 1/7 当作同一 shader。已归档前后面 albedo、normal、height、AO 共 8 张，[图片预览](../supplemental/README.md)。材质槽名、渲染器 submesh、UV transform、法线编码、色彩空间及运行时成就叠图尚未证实；不得生成伪称原版的成品。

## 后续离线研究与验收

1. 使用合法本地 APK，核对 SHA256 8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1，恢复 1471 个 Unity 容器间的 external file table；解析指针需以 SerializedFile 身份和 PathID 为复合键。
2. 恢复 m_PackedSprites、m_PackedSpriteNamesToIndex、m_RenderDataMap（存在性以实际 typetree 为准），导出 textureRect、rotation、pivot、mesh UV、RGBA hash；有独立 sprite 时用 UnityPy sprite 输出像素交叉验证。
3. 从 IL2CPP dump/script 方法地址筛选 Achievement / Medal / Ribbon / held item，结合原始 libil2cpp.so 验证地址映射及消费者调用；没有真实业务 ID 时保持 null。
4. 按 renderer → mesh/submesh → material → shader/texture PPtr 解析奖章材质；仅证据充分后输出独立 PNG 或可渲染 GLB。禁止按名称猜绑定。
5. 普通道具、Ribbon/Mark 仅在具备图片来源及业务 ID 证据时晋升。跨作品素材标明来源作品，与 HOME 原生域分离。

原始 APK 未在仓库发布（[Android README](../../Android/README.md)）；运行时缓存也未提供（[状态](../../Unpack/Android/4.1.0/_meta/runtime_inventory_summary.json)）。本轮不声明已恢复 UV、独立成就图或业务 ID。新增 [元数据审计工具](../../tools/home41_android_image_evidence.py) 只读取现有导出，不等同于 APK 原生解析。
