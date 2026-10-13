# AGENTS.md — Pokémon HOME 4.1.0 Unpack 工程协作规范

适用范围：本仓库 `4.1.0` 分支及后续从该分支派生的 Unpack 开发分支。此文件用于约束 AI Agent、维护者和自动化脚本。先阅读 `docs/UNPACK_GOAL.md`、`docs/UNPACK_OUTPUT_SPEC.md`、`docs/UNPACK_TASKS.md`。

## 1. 项目唯一目标

为原始 Pokémon HOME Switch 4.1.0 RomFS 构建可复现、可核验、**保持原资源目录镜像**的 `Unpack/`。源文件原名不变，转换后的主产物尽量只替换后缀为 `.json` / `.csv` / `.png` / 真实的容器解压后缀。脚本和**真实解出的文件**都应交付；仅提交脚本不代表任务完成。

源输入：`57b83ea8c0af21ef26e2519b9580b373_NCA/1/`（RomFS），本次经 Git 树核对有 **12,074** 个文件，总计 **1,054,426,820** 字节。另有 `..._NCA/0/` 的 8 个 ExeFS 文件；不属于本轮 RomFS 转换覆盖目标。可从 `derived/4.1.0/inventory/` 复用既有索引，但每次仍要与当前 Git 树比对。

## 2. 不可违反的规则

1. **输入只读**：不得修改、改名、覆盖、删除 `..._NCA/0` 和 `..._NCA/1` 内任何原始文件。
2. **路径镜像**：`Unpack/<NCA>/1/<原相对目录>/<同名主体>.<输出后缀>`。不要把主产物集中输出到 `metadata/`、`png/` 等与原目录脱离的平铺目录；审计信息可以放在 `Unpack/_meta/`。
3. **真实解析**：禁止把原字节简单改扩展名冒充 JSON/CSV/PNG，禁止把猜测的 FlatBuffers 字段名写成已确认语义。无完整 schema 时标明 `structure_only`。
4. **未知格式不伪造**：支持的格式实际解析，不支持的格式保留可用原始容器及 `unsupported` 状态；不输出假的图片、文字、数值映射。
5. **归档一对多**：SARC `.arc` 的主产物为成员索引 `.json`，原始成员安全解包到 `Unpack/_raw_members/`，可读成员镜像到与归档同名的子目录。内部路径必须防穿越。
6. **同名冲突必须检查**：先生成目标路径映射并检测冲突，优先按 `docs/UNPACK_OUTPUT_SPEC.md` 处理 `.dat/.tbl` 配对；其余冲突采用可追溯的原扩展名限定或上报，绝不可静默覆盖。
7. **逐文件可追溯**：每个源文件必须有唯一 manifest 记录：相对路径、原始字节数与 SHA-256、识别类型、所用 parser/版本、输出列表及 SHA-256、状态、错误/限制。
8. **幂等/增量**：对同一输入和工具版本重复运行应得到同等语义、稳定的输出文件名与排序。输出使用临时文件与原子替换；失败不得破坏上次成功产物。
9. **转换安全**：限制 gzip 展开大小、纹理尺寸、SARC 成员数量/大小与目录深度；拒绝链接逃逸、绝对路径、`..`、大小写折叠冲突和解压炸弹。
10. **实际验证才算完成**：只新增脚本、空目录、示例或 workflow，不代表全量解包完成；文档须如实区分 planned / implemented / tested / published。

## 3. 复用既有实现，不得重复造轮子

- `tools/home41_romfs_core.py`：AHTB / DAT / SARC / FlatBuffers 结构识别；
- `tools/export_home41_resources.py`：现有 JSON/CSV 与原始 SARC 成员提取；
- `tools/export_home41_pml_csv.py`、`tools/home41_p2_pml_readonly.py`：Waza/Personal；
- `tools/home41_bntx_to_png.py`：RGBA8、BC1、BC3、BC4、BC5，其他纹理格式必须明确标记不支持；
- `tools/export_home41_everything.py`：旧版分目录导出入口，不能直接视为镜像产物；
- `tools/test_home41_export.py`、`tools/test_home41_bntx.py`：既有测试样例。

新入口按计划使用 `tools/unpack_home41.py`，实现针对单文件、某类文件、全量以及增量验证的统一调度。将现有解析器整理为可复用函数，不允许为 12,074 个文件复制 12,074 份一次性脚本；manifest 中记录每个文件对应解析器即可。

## 4. 各格式事实边界

- `.wazabin/.perbin/*_lyt.bin/*_uikit.bin`：无可信 schema 时仅导出结构、raw_hex、数组/字段索引；不可直接称为招式威力、特性、地点 ID。
- `.tbl + .dat`：AHTB 标签及文本解码应优先成对验证；`MetLocation` 数字映射与文字标签索引不是同一已证实概念。
- `.arc`：校验 SARC/SFAT/SFNT 成员偏移与散列，递归分析 BFLYT/BFLAN/BNTX 时保留原成员。
- `.bntx.gz`：先 gzip 解出真实 `.bntx`，再视支持情况转换 PNG；BC5 双通道可视化不能冒充最终游戏渲染。
- `.bfbs`：按 FlatBuffers Binary Schema/Reflection 单独确认，不可先验当业务 FlatBuffers 表。
- 音频、字体、着色器等：只有解析器证据充分时才转换；未实现时登记状态，保留源，不发布伪造衍生品。

## 5. 实施与验收顺序

按照 `docs/UNPACK_TASKS.md` 逐项执行：基线清单 → 映射及路径冲突 → 统一 CLI → 文字与 PML → SARC/UI → BNTX/PNG → 其余格式 → 验证/分批发布。每项任务必须有测试、实际样本、已提交路径及待解决问题。

验收命令（**计划的统一 CLI，尚未实现前不可声称能够运行**）：

```powershell
python tools/unpack_home41.py --root . --out Unpack --dry-run
python tools/unpack_home41.py --root . --out Unpack --all --resume
python tools/unpack_home41.py --root . --out Unpack --verify --strict
```

全量 manifest 必须对齐当前全部 12,074 个 RomFS 文件；`converted/partial/unsupported/failed` 统计相加应等于源文件数，`failed` 不得被悄悄混作成功。`--strict` 的具体非零退出码定义见输出规范。

## 6. 提交与发布

- 修改只提交到用户指定的仓库/分支；不自动改动 `HOME-Live-Plugin-CHS`。
- 每次提交在说明中写实际转换格式、文件数、可验证产物位置与问题；未经实际执行，不写“全量完成”。
- 小型 JSON/CSV/PNG 可按格式/目录分批 Git 提交；大文件或大规模二进制交付须评估 Git 100 MiB 单文件限制、Git LFS 配额、仓库体积，并把实际可下载位置和 SHA-256 列入 manifest。不得以只保留 Actions artifact 冒充永久发布。
- 不强行在仓库提交转换后的字体文件。可记录其元数据、解析状态。
- Python 3.9+，优先标准库；第三方纹理解码器应声明依赖、来源与不兼容情况。
- 任何代码变更至少运行 Python 语法检查、目标格式单测和真实源文件抽样；大型全量测试另记录平台、命令、退出码、成功/失败计数。

## 7. 本轮文档状态

2026-10-13：本轮建立的是 **规划/约束/目录说明**。现有 `derived/` 与 `tools/` 的成果仍有效；新的镜像调度器及 `Unpack/` 全量衍生数据属于后续实施任务，不能用本文件的存在替代实际产物。
