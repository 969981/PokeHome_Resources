# Pokémon HOME 4.1.0 Unpack — 项目目标与交付边界

## 项目定义

- 仓库：`969981/PokeHome_Resources`
- 基准分支：`4.1.0`
- 输入源：`57b83ea8c0af21ef26e2519b9580b373_NCA/1/`
- 输出根：`Unpack/`
- 实施清单：[`UNPACK_TASKS.md`](UNPACK_TASKS.md)
- 文件命名与 manifest 合同：[`UNPACK_OUTPUT_SPEC.md`](UNPACK_OUTPUT_SPEC.md)
- 协作指令：[`../AGENTS.md`](../AGENTS.md)

本次项目旨在将 HOME 4.1.0 的原始 RomFS 二进制资源，按**与原目录一致的相对路径**展开为可直接阅读、分析、复用和核验的标准文件。要求提供源代码、解包工具、转换结果、覆盖率索引和可重复运行的验证手段。

## 基线规模（2026-10-13 从 4.1.0 Git 树核对）

| 格式 | 文件数 | 初始交付期待 |
|---|---:|---|
| `.wazabin` | 5,089 | JSON（可证实的结构/字段原始数据） |
| `.bntx.gz` | 3,538 | 原生 BNTX 解压；支持的纹理输出 PNG |
| `.dat` + `.tbl` | 1,583 + 1,479 | DAT/TBL 配对的 CSV/JSON；无法判定的文件标记 |
| `.arc` | 240 | JSON 成员表 + 原始归档成员 + 可读布局信息 |
| `.bin` | 108 | 已识别 FlatBuffers/UI 的 JSON，未知的登记状态 |
| `.perbin` | 7 | JSON；有证据时 CSV |
| `.prmb` | 3 | 结构证据确认后转换 |
| `.BFOTF` + `.bffnt` | 3 + 4 | 识别并记元数据；避免重复分发字体 |
| `.bnsh` | 13 | 着色器元信息（尚未承诺完整反编译） |
| `.bfbs` | 1 | Binary Schema 专项探测，可能辅助 FlatBuffers 类型化 |
| `.bnk` + `.pck` | 4 + 1 | Wwise 结构清单，提取/音频转码视验证结果 |
| `.bntx` | 1 | 支持时 PNG |
| **合计** | **12,074** | 所有源文件进入 manifest |

RomFS 源总尺寸 **1,054,426,820** 字节；`..._NCA/0/` 另有 8 个 ExeFS 文件，不计入本期基线。当前既有 `derived/4.1.0/` 包含 Personal 数据、地点文字样例、纹理样例和索引，但不是所需的镜像完整输出。

## 目录目标

```text
PokeHome_Resources/
├── 57b83ea8c0af21ef26e2519b9580b373_NCA/
│   ├── 0/                                 # ExeFS，保留原状
│   └── 1/bin/                             # RomFS 原始源，保持不变
├── Unpack/
│   ├── README.md
│   ├── 57b83ea8c0af21ef26e2519b9580b373_NCA/
│   │   └── 1/bin/
│   │       ├── pml/waza/beluga/waza0001.json
│   │       ├── appli/.../mtt_moving_uikit.json
│   │       ├── appli/.../mtt_moving.json
│   │       └── pokemon/compress_capture_pokemon/... .bntx
│   ├── _raw_members/                      # SARC 内原始成员
│   └── _meta/                             # source_manifest / manifest / report
├── tools/
│   ├── home41_romfs_core.py              # 已有解析器
│   ├── home41_bntx_to_png.py             # 已有纹理解码器
│   └── unpack_home41.py                  # 规划中的镜像输出总入口
├── docs/
│   ├── UNPACK_GOAL.md
│   ├── UNPACK_OUTPUT_SPEC.md
│   └── UNPACK_TASKS.md
└── AGENTS.md
```

上面 `Unpack/` 中的具体转换文件是**目标示例**，不代表本轮已生成。任一源文件的主输出都必须保留其目录和文件主体名；不适合单个文件表达的 SARC 多成员、BNTX 多纹理另使用相邻子目录和单独的元数据目录。

## 交付清单

1. **解包入口**：`tools/unpack_home41.py`，支持单文件/指定格式/全量、dry-run、resume、verify、strict，完全离线；
2. **可复用解析器**：优先调用仓库现有 `tools/home41_*.py`，在必要时补齐已被验证的格式；
3. **真实 `Unpack/` 产物**：按原路径镜像提交可发布的文本、表格、纹理和归档成员，必要时通过版本化 LFS/Release 分片交付；
4. **逐文件索引**：manifest 记录每一输入、解析状态、转换文件路径、校验和、未支持原因；
5. **质量保障**：格式单测、与原字节的对应核查、目录冲突测试、PNG 有效性、增量重跑等；
6. **发布说明**：哪些格式已完成、已转换多少文件、哪些因 schema/像素编码不可读、外部大文件如何获取。

## 成功判据

- **清单覆盖率 100%**：所有 12,074 个 RomFS 文件都在 `Unpack/_meta/manifest.csv` 中，且有真实状态；不要求所有未知格式被猜解。
- **已声明完成的格式 100% 可核验**：产物存在、签名/结构有效、路径可追溯，源 SHA-256 与输出 SHA-256 可重复计算。
- **目录镜像正确**：输出映射可机械推导，不丢失原目录层级；大小写/同名碰撞有明确结果。
- **脚本与结果同时交付**：脚本能从原始资源重新生成已公布的产物；仅有 JSON 示例或失败 CI 不能宣布完成。
- **未知项透明**：`partial`、`unsupported`、`failed` 明确区分，并附下一步取证点。
- **不回写任何源文件**：二次运行前后原始 RomFS 的文件数、SHA-256 保持一致。

## 不在本期强行承诺的范围

- 无官方/可靠 schema 时还原全部 FlatBuffers 业务字段名或 MetLocation 数字与游戏显示一一映射；
- 解码所有 ASTC、BC7、BC6、特殊 shader 着色表现，或把 BC5 通道图称为最终 UI 图；
- 反编译全部 shader、转换所有 Wwise 音频为完美无损素材；
- 分析网络协议、编辑 HOME 数据或更改游戏内容；
- 将不可读的二进制伪装成 JSON/PNG 以凑百分比。

## 本轮里程碑

- [x] 查验 Git 仓库、基准分支、输入目录和现有工具；
- [x] 建立协作规范、目标、输出合同、开发任务和 `Unpack/` 入口说明；
- [x] 实现镜像映射 CLI（首版代码已提交；CI 待验证）；
- [ ] 分格式完成真实解包与逐文件验证（已镜像首批 16 个既有真实解析产物）；
- [ ] 分批提交或提供持久化下载的完整成果；
- [ ] 输出最终全量覆盖率报告。
