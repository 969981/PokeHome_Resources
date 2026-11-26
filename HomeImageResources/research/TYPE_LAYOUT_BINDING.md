# HOME 4.1.0 属性纹理与布局绑定研究

## 直接原始字节证据（2026-11-26）
读取 type_dummy.arc、type_dummy_eng.arc、type_dummy_sch.arc 原始 SARC/BNTX：各有 18 个 typeIcon_XX_*_00^q (64x64, 0x1C01) 和 18 个 typeIcon_text_XX_*_00^o (200x44, 0x1A01)。三份布局默认同一原始纹理名称 typeIcon_text_00_normal_00^o；其他 7 个语言包待 CI 实测。

| 段 | 已观察结构 |
|---|---|
| txl1 | +8 u16 count; +12 u32 offsets; name address = section +12+offset |
| mat1 | +8 u16 count; +12 u32 record offsets relative to section; name 28B; +28 flags |
| mat record | flags 0x15 / size84 的简单单纹理材质：+44 u16 txl1 index，+46 sampler raw 2B；flags0/size44 为无纹理。复杂 flags 未解码 |
| pic1 | +12 pane name；+84 vertex colors；+100 u16 material index；+102 u8 UV count；+104 每组 8 x f32 |

三个原版属性布局 P_00 -> material0 -> txl1[0] -> BRTI typeIcon_text_00_normal_00^o，UV (0,0),(1,0),(0,1),(1,1)。在 marking_00.arc 的 3 纹理 close layout 和 marking button layout，以及 record_detail.arc 的返回按钮等样本中复核相同的索引规则。材质复杂变体、动画、shader、SRT 与真实裁切尚未全部确认。

直接读取简中 typename.tbl/dat：18 个标签 TYPENAME_000..008、010..018，另有 msg_typename_max。中文依次为 一般、格斗、飞行、毒、地面、岩石、虫、幽灵、钢、火、水、草、电、超能力、冰、龙、恶、妖精。纹理 ordinal 0..17；消息标签从火开始比 ordinal 大 1。此为名称与顺序关联，不证明 PKM Type 或原生运行时枚举。原生 selector 仍需 ELF caller 的数据流证据。

## 本轮工具
- tools/home41_type_layout_audit.py：10语言 360 纹理目标逐图 PNG/RGBA/alpha、消息表及默认绑定验证；全 ARC 布局简单材质关联，复杂材质保留 raw；SHA 绑定的 ELF 字符串/指令窗口。
- .github/workflows/home-type-layout-audit.yml：实际验证与 artifact；不修改原始 NCA/Unpack，不自动写入 production core。前一轮 CI 正在生成 core，因此避免并发写分支。
- type_index.json: texture_ordinal, message_label_id, kind, language, raw_name, PNG/RGBA SHA, source hash。未取得 ELF 原生选择证据，不将 ordinal 当作 TypeID。

## 后续门槛
原生类型输入 -> 资源名称及语言分支；材质颜色/BC1 alpha 与 native shader 对账；对复杂 mat1 flags 补齐字段并验证裁切；完整运行时证据后再接入 HomeTypeImageResolver。当前不宣称完成全量映射或渲染复原。
