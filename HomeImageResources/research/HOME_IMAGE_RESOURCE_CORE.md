# HomeImageResourceCore — 原生资源消费者与布局证据

## 本轮实现边界
- Pokemon: 3,506 个已归档 PNG 小图标与原始七维选择键、立绘精确关联。离线接口接受资源枚举，不是 PKM 字段。
- Ball: 0..37 原生显示输入 -> item.dat 37项转换+dummy -> BRTI -> 64x64 PNG，独立保存；不将此输入误作跨作品 BallID。
- Item/Ribbon/Mark/Type/Achievement: 公开接口暂返回 None。通用道具与球显示资源不混用；候选命名不得用于生产映射。
- BFLYT/FLAN: 复用分节解析器，txl1 多基址候选及原始名称精确连接，mat1 原偏移、pic1 固定偏移 UV 候选；未验证材质引用及图集裁切。不宣称渲染复原。
- UIKIT/LYT: FlatBuffers root 结构 + NUL 结尾的确切纹理名称偏移，仅字符串证据。
- ELF: 原始 SHA-256 门控，分类关键词、ADR/ADRP+ADD 引用和带指令字节窗口；不是已确认的业务 ID 消费函数。

## 接口
`tools/home41_image_resource_core.py` 是 Python 离线参考接口；`HomeImageResources/core/resource_core.json` 是跨语言静态数据合同，生成并实际提交后可供 Rust/Tauri2 读取。路径相对于 HomeImageResources。所有未确认映射返回 None，不猜测或静默 fallback。

## 验收
Actions 先解码原版资源，再生成 core，扫描布局/UIKIT/ELF，验证全部路径及缺失行为。待 CI 实测；不修改原始 NCA、Unpack、编辑器；PR 保持 Draft。
