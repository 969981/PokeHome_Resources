# HOMEImageResources — HOME 4.1.0 图片资源

**[打开 Obsidian / Markdown 图片资源导航](docs/README.md)**

已归档：3538立绘、3506小图标、38原生球种显示资源（含占位）、179独立属性图片/360逻辑键。Switch BRTI 9362/9377 成功解码。普通道具、缎带、证章、成就尚未取得完整业务图片映射；补充候选归档及来源审计见 [覆盖率](docs/08-Coverage.md)。旧 manifest 为历史基线，不代表当前完整数量。以下保留旧审计记录以追踪来源。

---

# HOMEImageResourceAudit / HomeImageResources

HOME 4.1.0 原版素材的独立衍生包（不更改原始 NCA 和 Unpack 镜像）。基准 commit: 067114503d166d34795515fb0794b8559e617cc5。

## 本轮实测 Git 树结果
- 3538 个 PNG 与 3538 个 .bntx.gz 逐名对应，1769 对 n/r，3169 个不同 PNG Git blob，1026 个编号（含 0）。
- 7121 条 UI/Android 来源记录；分类内、平台内按 Git blob 去重。以 asset_source_index.csv 保留所有原始路径。pokemon/ 保持原始文件名，不去掉变体。
- 207 个 Switch BNTX 图集分组；38 个道具纹理，ItemID 不猜测。
- 归档 icon_pokemon.arc 的 timg/__Combined.bntx 为 52,879,496 字节，成员 SHA-256 eca6074b6b4a8c6f487c515dee8080e147426b4db335dd8b5847b9a1efc7de06；当前无小图标 PNG。icon_item.arc 对应成员 106,624 字节，SHA-256 b0a2810b30e7a8b7e3737f2fac24f7694f6a7662c507691554a9ac10708894ef。详见原 Unpack 归档 JSON。

## 索引约定
pokemon_image_index.csv: Species/Form 是文件名数字候选；gender_code 原样保留，mf/uk/fo/mo/fd/md 解释是候选；n/r 末尾暂作 normal/rare (shiny) 候选，尚未验证原生选择函数。中间 n/g、8 位值、f/b 单独保留，不丢掉性别/形态/装饰/视角的其他区分。0000 为特殊编号，不能当普通物种。使用完整文件名作为无冲突键。禁止把候选自动当成编辑器已确认规则。
asset_source_index.csv: 每条原始路径映射到分类/平台/内容 SHA 文件。分类主要按原始目录或 Android Sprite 名称推定，未分类全部放 ui。BC4/BC5 等通道预览不等于最终渲染。
texture_atlas_index.json: archive output directory 和 BNTX member + texture_index，尚未恢复 BRTI 名称、UV 和布局引用。
item_image_index.csv: 纹理索引不等于 ItemID，native_resource_key 及 item_id 留空；后续用原生 item_%04d^o 资源键和 BRTI 名称建立真实映射。

## 下一阶段
1. 全量 PNG 解码/像素 SHA-256、alpha、尺寸、源 BNTX 双解码器核验。
2. 恢复 pokemon_image_list.bin 及原生资源选择函数，确认全部命名字段。
3. 提取 icon_pokemon.arc BNTX，恢复 BRTI 名称、格式、图集 UV、独立小图标；检查 icon_item.arc 和原生 ItemID 对应关系。
4. 确认 balls/ribbons/marks/wallpapers 的语义并补齐缺失资源。
5. 编辑器只消费 confirmed 映射；保留显式 fallback 和包版本，不修改 HOME-Live-Plugin-CHS。

Git tree 统计和逐名/成对检查已执行，未进行全量 PNG 像素验证。本包不包含 Android 运行时模型或缓存，不声明原版全量语义已恢复。原始游戏素材权利仍归权利人，使用和分发需符合相应权利。
