# HOME 4.1.0 全量纹理与分类资源包研究

## 本阶段目标与证据边界
- 3,506 个小图标按原生完整 resource_stem 存入 pokemon_icons，逐图 PNG/RGBA SHA-256、Alpha、尺寸验证，精确关联七维原始选择键。
- 扫描 240 ARC + 1 BNTX 的 9,377 条逻辑 BRTI 记录，以 member SHA + texture index 去重实际解码；保留每条来源路径。mip0，不包括已有 3,538 个压缩立绘和 Android 资源。
- 按源路径/BRTI 名称筛选道具、球、缎带、证章、盒子标记、属性、奖章候选。候选不等于原生 ID；BC4/BC5 仅通道可视化。未解码条目保留原因。
- 通用 ItemID 交叉表与实际界面 37 项输入模型分开验收，后者复用原始 item.dat 选择函数模型。未匹配通用键不能直接称为缺失 UI 图标。

## 输出
- pokemon_icons/index.csv、manifest.json、实际 PNG（CI 成功提交后可见）
- Actions artifact: global/texture_pixels.csv、category_candidates.csv、item_crosswalk_global.csv、summary.json、textures/<member SHA>/<index>.png；native_model.json。
- 后续使用 BFLYT 纹理绑定、UIKIT、ELF 调用者证明枚举及图集裁切；独立复核解码器与 shader，不自动将名称候选升级为 confirmed。

## 状态
本提交实现代码及 CI，实际执行、归档数量和语义映射以 CI 结果为准。原始 NCA、Unpack、编辑器不修改。保持 Draft。
