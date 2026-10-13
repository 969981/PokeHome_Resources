# Pokémon HOME Switch 4.1.0 — RomFS 资源批量转换

> 来源：本仓库 `4.1.0` 分支下的 `57b83ea8c0af21ef26e2519b9580b373_NCA/1`（RomFS）。**全部输入只读；输出目录必须在输入目录外。**

这个工具将可验证的二进制内容导出为便于检索的 **UTF-8 JSON、CSV**，按需要解包 SARC 中的 BFLYT、BFLAN、BNTX，并可在安装外部解码器时输出 **PNG**。它不是“所有二进制都变成语义明确的 JSON”——未知 schema/编码会保留结构字段及验证状态。

## 快速开始

Windows PowerShell，仓库根目录执行：

```powershell
git clone --branch 4.1.0 https://github.com/969981/PokeHome_Resources.git
cd PokeHome_Resources

$romfs = '.\57b83ea8c0af21ef26e2519b9580b373_NCA\1'
python .\tools\export_home41_resources.py --root $romfs --out '..\HOME41_converted' --kind all --extract
```

分类型运行（推荐用于分批导出和检查）：

```powershell
python .\tools\export_home41_resources.py --root $romfs --out '..\HOME41_text' --kind messages
python .\tools\export_home41_resources.py --root $romfs --out '..\HOME41_pml' --kind flatbuffers
python .\tools\export_home41_resources.py --root $romfs --out '..\HOME41_ui' --kind archives --extract
python .\tools\export_home41_resources.py --root $romfs --out '..\HOME41_images' --kind images --write-bntx
```

使用外部 `wimgt`（必须安装支持 BNTX 的版本）尝试将 BNTX 转成 PNG：

```powershell
python .\tools\export_home41_resources.py --root $romfs --out '..\HOME41_png' --kind images --png required --png-tool 'C:\path\to\wimgt.exe'
```

`--kind archives` 中如果 SARC 成员包含 BNTX，同样会使用指定解码器尝试生成 PNG。对不能解码的压缩纹理**不会造假写入 PNG**；失败会进入 `index.csv`，继续处理其它文件。

## 对应输入与输出

| 实际资源类型 | 导出内容 | 验证程度 |
|---|---|---|
| `*.tbl`，内容是 AHTB | `.csv` + `.json`：原始标签、FNV64 哈希和行号 | 真实标签 + 哈希验证 |
| 有匹配 AHTB 的 `*.dat` | `.csv` + `.json`：多语言文本、控制码、标签 | 真实解密/解码，但行号不等于 MetLocation |
| `sort_string/*.dat` | `.csv`：原始 U16 数值索引 | 数值真实，业务意义待判定 |
| `*.wazabin` | `.json`：FlatBuffers 字段索引、原始字段 hex、候选数值/引用 | 结构已读取，不虚构招式字段名称 |
| `*_personal_total.perbin` | `.json`：字段结构 | 完整记录还需专用表向量解析 |
| `*_lyt.bin / *_uikit.bin` | `.json`：FlatBuffers vtable/字段索引及候选引用 | 无 schema 结构解析 |
| `*.arc`（SARC） | `.members.csv/.json` + `layouts/...bflyt.json`、`...bflan.json`；`--extract` 写出原始成员 | 档案完整性、条目 SHA-256 与段表结构 |
| `*.bntx.gz`、`*.bntx` | `.bntx.json`：BNTX 容器与 hash；`--write-bntx` 导出解压文件，外部工具可产出 PNG | PNG 依赖实际像素格式及第三方解码器 |
| 未知 `*.bin/.tbl/.dat` | `index.csv` 中记录 `unsupported_*/skipped` | **不猜测、不伪造** |

## 目录结构

```text
HOME41_converted/
  index.csv                  # 逐文件状态、记录数、错误与输出相对路径
  summary.json               # 各类别数量、解码器及限制
  bin/...                    # 镜像源 RomFS 路径输出 JSON/CSV
  layouts/...                # 归档成员的 BFLYT/FLAN 分节元数据
  archives_extracted/...     # --extract 才写出 .bflyt/.bflan/.bntx 等
```

## 重要边界

1. FlatBuffers 仅凭 vtable 无法可靠还原字段名称、整数/枚举/浮点语义；`u32_candidate`、`reference_candidate` 均为候选，**不能当作已验证业务含义**。
2. `BNTX` 是纹理容器，不是普通 PNG；PNG 输出由独立 `wimgt` 进行，未装工具也能导出完整纹理容器及索引。 `wimgt` 可参考 [nintoolbox](https://github.com/quatric/nintoolbox)，也可用 [Switch Toolbox](https://github.com/KillzXGaming/Switch-Toolbox) 手动导出；不同工具对 ASTC/BCn 支持不同。
3. 为避免仓库过度膨胀，**默认不将数 GB 衍生纹理与 PNG 提交 Git**。建议在本地或 GitHub Actions Artifact 中保存转换结果，并记录哈希。
4. 原始 4.1.0 已解码研究数据（58,740 多语言地点条目、921 招式差分和 SARC 明细）另可在 [HOME-Live-Plugin-CHS 的 P1/P2/P3 研究数据](https://github.com/969981/HOME-Live-Plugin-CHS/tree/home-core-editor/docs/pokemon_home_reverse/4.1.0/resources/home41_p1p2p3) 查看。
5. 本工具不修改宝可梦数据、存档、服务端状态，不联网；只处理你自行取得的本地已提取资源。

## 文件

- [`tools/export_home41_resources.py`](tools/export_home41_resources.py)：批量转换入口。
- [`tools/home41_romfs_core.py`](tools/home41_romfs_core.py)：从 `HOME-Live-Plugin-CHS` 复用的 AHTB、DAT、SARC、FlatBuffers 只读解析器。
- [`tools/home41_p2_pml_readonly.py`](tools/home41_p2_pml_readonly.py)：从之前的 4.1.0 PML 研究复用的 per-record 原始字段与差异审计。

## PML 专用结构化导出（推荐）

为了使原始字段**直接可在 Excel / pandas 中筛选**，另提供两份聚合长表：

```powershell
python .\tools\export_home41_pml_csv.py `
    --root "$romfs\bin\pml" `
    --out '..\HOME41_pml_csv'
```

- `waza_fields.csv`：每条记录包含 game、move_id、field_index、raw_hex、byte_count。
- `personal_fields.csv`：每条记录包含 game、record_index、field_index、raw_hex、byte_count。
- `errors.csv`：任何与 4.1.0 实际文件不一致的记录（例如招式文件名 ID 与字段 ID 不符）。
- `summary.json`：各版本记录数、错误数。

**这是真实字段字节的结构化输出，不等于已确认的招式威力、属性或合法性表。**

## 已随源码提交的真实样例

- [`examples/4.1.0/event_flags.csv`](examples/4.1.0/event_flags.csv) — 已逐条核对 **214/214** 个 AHTB 标签 FNV64 哈希。
- [`examples/4.1.0/waza0001.json`](examples/4.1.0/waza0001.json) — 真实 52 字节 Waza FlatBuffers，根对象 0x18、字段原始 hex。
- [`examples/4.1.0/mtt_common_fade_sarc.json`](examples/4.1.0/mtt_common_fade_sarc.json) — 真实 1516 字节 SARC 的三个 UI 成员。

大批量资源可在 GitHub Actions 手动运行 `HOME 4.1.0 resource conversion`，分组导出 JSON/CSV 工件。首次 CI 未能启动正常的执行步骤，**不能视为测试通过**，应检查仓库 Actions 的运行器与计费状态。

SARC 中的 `.bntx` 可先用 `--kind archives --extract` 解包，再将输出的 `archives_extracted` 目录作为 `--kind images` 的输入进行 PNG 转换。

## 已复制到资源仓库的验证数据

`derived/4.1.0/` 现包含 **10 份与既有研究仓库 Git blob SHA 完全一致**的压缩 CSV/JSON：

- `p1_place_resource_status.csv.gz`：地点资源文件状态；
- `p2_waza_flatbuffer_diff.csv.gz`：921 个招式 ID 的原始字段差异；
- `p2_personal_record_presence_and_rawdiff.csv.gz`：各游戏 Personal 记录存在性与原始差异；
- `p3_sarc_members.csv.gz`：SARC 成员目录与尺寸；
- `p3_elf_resource_xrefs.csv.gz`、结构证据与 P1/P2/P3 摘要 JSON。

其中 **58,740 行完整地点文本的 `p1_all_place_labels_text.csv.gz` 文件仍保存在原研究仓库**，未重复复制（连接器对大于 1 MiB 的文件未返回有效内容）；可从上文给出的 `HOME-Live-Plugin-CHS` 原路径下载，不影响资源仓库本地批量重新生成。

另外新增 [`B2W2_place_name_English.csv`](examples/4.1.0/B2W2_place_name_English.csv)，来自真实 DAT/AHTB 的 **154 条英文地名文本**，包含 Nuvema Town、Accumula Town 等，无需运行脚本即可查看。

解压任意 `.csv.gz`：

```powershell
python -c "import gzip, pathlib; p=pathlib.Path('derived/4.1.0/p2_waza_flatbuffer_diff.csv.gz'); p.with_suffix('').write_bytes(gzip.decompress(p.read_bytes()))"
```

## 新增：原生 BNTX/BCn PNG 解码与真实图片（2026-10-13）

本仓库已经不只是 `.bntx` 元数据识别：新增纯 Python 标准库 [`tools/home41_bntx_to_png.py`](tools/home41_bntx_to_png.py)，可以真正从 **RGBA8、BC1、BC3、BC4 UNORM、BC5 UNORM** Nintendo Switch BNTX 纹理解码并输出 PNG。支持 BlockLinear（Tegra）去平铺、`.bntx.gz` 解压和 SARC 中 `.bntx` 成员递归提取。

**已实际提交 16 张真实 PNG：**

- [RGBA8 `primitive_renderer_texture.png`](derived/4.1.0/png/primitive_renderer_texture.png) — 32×32，来自原文件，内容为白色。
- [BC3 `icon_pokerus.png`](derived/4.1.0/png/icon_pokerus.png)、[`icon_pokerus_anti.png`](derived/4.1.0/png/icon_pokerus_anti.png) — 两张 44×44。
- [BC3 `icon_label_00.png`](derived/4.1.0/png/icon_label_00.png) — 64×64。
- [BC5 `icon_generation_00～11`](derived/4.1.0/png/channels/) — 十二张 64×64，**R/G 通道数据可视化**（不是游戏着色器的最终颜色）。

**兼容性边界**：ASTC、BC7、BC6 等尚未实现的格式不能由此工具直接还原 PNG；对应项写入 `texture_index.csv` 的 `unsupported` 状态。不能认为 3,538 张 gzip 纹理全部转换成功。

```powershell
# 一条命令：全量 CSV/JSON + 可支持的 PNG
python .\tools\export_home41_everything.py `
    --root $romfs `
    --out '..\HOME41_all_converted' `
    --extract-sarc

# 单独扫描 BNTX 与 SARC 纹理
python .\tools\home41_bntx_to_png.py `
    --root $romfs `
    --out '..\HOME41_all_png' `
    --archives
```

`export_home41_everything.py` 的输出包括：

- `metadata/`：每个文件解析 JSON/CSV，`index.csv`、`summary.json`
- `pml/`：全部可解析 Waza、Personal 原始字段长表
- `png/`：PNG、`texture_index.csv`、错误/不支持状态
- `conversion_report.json`：分步骤执行结果和能力边界

## 已直接提交的 11 语言地点 CSV

[`derived/4.1.0/place_names/`](derived/4.1.0/place_names/) 中有 `B2W2_English.csv`、`B2W2_Simp_Chinese.csv` 等 **11 语言 × 154 条 = 1,694 条** 直接从源 DAT/AHTB 解密得到的地名记录（并非凭名称翻译），包含原始 label / FNV64 / index。

注意：这些文件及上述 16 张 PNG 已经真正转换并提交；**完整 12,082 个源文件尚未整仓跑通并发布所有衍生文件**。GitHub Actions 首次尝试在无执行步骤的情况下失败，不能将其视作完成验收。当前的 `derived` 目录代表已提交的真实转换子集，脚本代表可用转换流程。
