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
