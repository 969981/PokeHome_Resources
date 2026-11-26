---
type: research_note
game: Pokémon HOME
version: 4.1.0
status: static_model_only
tags: [HOME, PH4, Rust, ImageResolver]
---
# Rust HomeImageResourceCore 与默认对象写入候选审计

关联 [[NATIVE_CORE_DEFAULT_OBJECTS]]、[[NATIVE_IMAGE_REQUEST_PRODUCER]]、[[NATIVE_IMAGE_SELECTOR_MODEL]]。

## 范围与现有数据
原始 ELF SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a。
原有 default audit artifact 15094060665 已重新检查 SHA256 c011cfc31a4a29eb1ec140cd67f5189d2f1f8a739b1db6bcfbbad8fc0a2f1cff：284 处完整基址 ADRP+ADD 候选全部在 0x50F000–0x530000 Getter 区间；Core 70，Tag1 53，Tag2 29，Tag3 48，Tag4 24，Tag5 31，Tag7 29。不能证明全局无写入。
新增 tools/home41_default_writer_audit.py：扫描整个可执行 PT_LOAD 的 ADR/ADRP，跟踪页内加减立即数、MOV 别名及内存操作、指针传递；停止于分支或调用，最多 0x180 字节。另扫描非执行段对区域的对齐字面指针。输出 default_writer_candidates.json。仅候选，不覆盖 CFG、初始化数组、重定位、寄存器间接和跨函数传播等。范围 [0xB15DB2,0xB15FF8)，不包括未知 Tag6 默认对象。
现有 resource_core.json 已归档，3,506 宝可梦键及立绘/小图标、38 native display ball。资源合同使用原版向量顺序。保留未证实的类别，不把普通 ItemID 当球种。

## Rust 模块
HomeImageResources/rust/home-image-resource-core 独立 crate，版本0.1.0，serde/serde_json。提交 81328864。
- Ph4::parse：仅接收单条已解密 PH4，校验 V4、196B Core、长度、padding、TLV 重复及已知 Tag 长度；无解密、写入、网络。
- Request::from_core：直接读取 PH4 Core；保留 Form 高字节、EC、ID32/PID shiny XOR；species414/890、869 特判。
- HomeImageResourceCore::select：按照原始向量顺序进行七维选择与四次叶节点回退；缺失物种使用 ELF 常量。
- Ph4::cross_group_ball：来源侧优先、再 Tag1、Tag2；不存在或选中球种为零时按已证实 0x5312F0 返回27。
- Ph4::side_ball：缺失默认 SideData 返回 UnsupportedDefaultSide；Tag6 返回原生0；BadEgg 返回 UnsupportedBadEgg。same_group_filter 单独暴露，不自动猜测目标游戏或特殊谓词。
- resolve_ph4_cross_group：返回 icon/portrait/ball 路径及资源记录；检查 canonical path 在资源根内，拒绝非 PNG 或路径越界。资源合同 SHA 字段校验不是原始二进制重新计算。
- 测试：原版资源合同3506行回归，3506图标+3506立绘+38球路径可用性，合成 PH4、缺失物种、异常记录及特殊形态。属于静态模型回归，不是原生运行时差分。

## 接入边界
现有编辑器提供解密明文 PH4；Rust 不负责 EH4 或 raw PKM 转换。不自动写回、不修改 editor 或原始 NCA/Unpack。BadEgg、默认对象运行时初始化、同组完整 UI 上下文、其他资源类别尚未接入。CI 以实际运行结果为准，PR 保持 Draft。
