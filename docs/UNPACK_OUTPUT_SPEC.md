# Unpack 文件布局、命名合同与可验证索引（v1）

此规范适用于计划中的 `tools/unpack_home41.py`，不是对现有 `export_home41_everything.py` 当前输出布局的描述。

## 1. 根路径映射

源：`<repo>/57b83ea8c0af21ef26e2519b9580b373_NCA/1/<relative>`

输出：`<repo>/Unpack/57b83ea8c0af21ef26e2519b9580b373_NCA/1/<relative-parent>/<same-basename>.<converted-ext>`

主产物保留大小写及全部父目录，不添加 `_decoded`、`export` 等额外分组。原始目录中的 `derived/`、`examples/`、`tools/` 不进入本次 RomFS 转换树。

## 2. 文件类型对应表

| 源文件 | 主转换产物 | 附加结果 / 约束 |
|---|---|---|
| `waza0001.wazabin` | `waza0001.json` | 保留原字段索引/raw_hex；可另提供可核验 CSV |
| `global_personal_total.perbin` | `global_personal_total.json` | 记录级字段 JSON；数据集 CSV 可另导出 |
| `mtt_moving_uikit.bin` | `mtt_moving_uikit.json` | FlatBuffers 结构候选，未知 schema 不赋值 |
| `mtt_moving_lyt.bin` | `mtt_moving_lyt.json` | 同上 |
| `event_flags.tbl` | `event_flags.json` | AHTB 标签、hash、索引 |
| `event_flags.dat` | `event_flags.csv` | 与同名 TBL 对齐后导出文字 |
| `some.arc` | `some.json` | SARC 成员索引；成员再展开为同目录 `some/` 子树 |
| `poke_capture_....bntx.gz` | `poke_capture_....bntx` | 解 gzip；支持时同名 `.png`，多纹理按成员子目录命名 |
| `primitive_renderer_texture.bntx` | `primitive_renderer_texture.png`（支持时） | 无法解码时只登记 `unsupported`；不伪造 |
| `*.bfbs` | `*.json`（确认 Binary Schema 后） | 需 Reflection schema 实证 |
| `*.prmb` / `*.bnsh` / `*.bnk` / `*.pck` | 待格式探测 | 可先生成可核验 metadata，不对未知字节强行修改后缀 |
| `*.BFOTF` / `*.bffnt` | 仅索引元数据 | 不额外提交字体副本 |

主产物原则是“保留完整文件主体名，只改变扩展名”，而非将 `.json` 直接附到源扩展名之后。后缀 `.bntx.gz` 是一个复合格式：`gunzip` 的实际无损产物为 `.bntx`，再解出 PNG。

## 3. 同名文件处理（严禁覆盖）

`foo.tbl` 和 `foo.dat` 共存时，规定：
- `foo.tbl` → `foo.json`（真实标签结构）
- `foo.dat` → `foo.csv`（匹配标签的文本记录）

其他组合如 `foo.wazabin` + `foo.bin` 可能同时要求 `foo.json`；调度器必须先预计算映射、识别冲突。只有在不改变逻辑主体名的前提下有唯一扩展名可选时，才使用它；否则将非主优先级目标降级为如 `foo.bin.json` 并在 manifest 写入 `collision_fallback`，或者标记 `blocked_collision`。绝不能丢掉/覆盖其中之一。

Windows 不区分大小写的碰撞也必须检查，比较时进行 Unicode 规范化和 casefold，但实际 Git 文件名仍保留源大小写。

## 4. SARC 多成员输出

源示意：

```text
<NCA>/1/bin/appli/cursor/bin/cursor.arc
```

输出（成员名仅示意，以文件内部真实 SFNT 为准）：

```text
Unpack/<NCA>/1/bin/appli/cursor/bin/cursor.json            # SARC 索引
Unpack/<NCA>/1/bin/appli/cursor/bin/cursor/blyt/cursor.json # 已解析成员
Unpack/_raw_members/<NCA>/1/bin/appli/cursor/bin/cursor.arc/blyt/cursor.bflyt
```

必须保存归档成员原始字节及 member SHA-256；对无法转换的 BNTX/BFLAN 不要丢掉原成员。不得将 archive member 名称不经校验直接拼接到磁盘目录。多层递归必须设置深度、大小和文件数上限。相邻子目录与现有输出撞名时，使用记录过的隔离路径并上报。

## 5. BNTX / PNG

- 确实符合 PNG 规范并通过签名、尺寸和像素验证，才允许使用 `.png`；
- 解码器需留存像素格式、尺寸、mipmap、阵列层、输出语义，特别标明 BC4/BC5 是否只是通道可视化；
- 没有实现 ASTC、BC6、BC7 等时，不生成空 PNG。原始 `.bntx.gz` 永远保留在输入树；成功 gzip 解出的 `.bntx` 可作为真实输出；
- 多纹理 BNTX 输出同名文件夹里的 `<texture-name>.png`，重名时按稳定 `index` 后缀区分；
- 对解压异常、CRC 异常、解码失败分别给出明确状态和原因。

## 6. Manifest 与状态（生成到 `Unpack/_meta/`）

至少交付以下文件：

```text
Unpack/_meta/source_manifest.csv
Unpack/_meta/manifest.csv
Unpack/_meta/manifest.json
Unpack/_meta/summary.json
Unpack/_meta/unsupported.csv
Unpack/_meta/errors.csv
```

`source_manifest.csv`：`source_path,source_size,source_sha256,detected_format`。

`manifest.csv`：`source_path,source_size,source_sha256,parser,parser_version,status,outputs,output_sha256,records,warning,error,collision_fallback`。多产物在 CSV 中用 JSON 字符串数组编码，JSON manifest 则保留真实数组；所有路径以仓库根为基准且采用 `/` 分隔符。

状态分类：

- `converted`：有真实、有效的标准转换内容；
- `partial`：解出真实结构或容器，但语义/媒体格式仍有已知限制；
- `unsupported`：格式未支持或解析前置条件不足；不等于处理异常；
- `failed`：预期受支持的文件解析、IO 或校验失败。

需另有 `component_status`（例如 `gzip=converted,png=unsupported_astc`），允许一只 BNTX 在“解压成功 / 图片暂不支持”同时保留事实。不要用笼统成功掩盖部分失败。

`summary.json` 必须包括源版本、Git commit SHA、时间与机器环境、工具版本、总文件数、分格式计数、status 计数、产物数量与字节数、跳过/错误原因、校验结果、源哈希校验结果。时间戳只写在 summary，**不写入每个产物**，确保重跑输出稳定。

## 7. CLI 契约（后续开发实现）

```text
python tools/unpack_home41.py --root . --out Unpack --dry-run
python tools/unpack_home41.py --root . --out Unpack --file "<NCA>/1/bin/.../waza0001.wazabin"
python tools/unpack_home41.py --root . --out Unpack --kind messages
python tools/unpack_home41.py --root . --out Unpack --kind archives --resume
python tools/unpack_home41.py --root . --out Unpack --all --resume
python tools/unpack_home41.py --root . --out Unpack --verify --strict
```

`--root` 为仓库根，`--out` 为镜像输出根；禁止输出目录等于输入原始 RomFS 或其子目录。`--dry-run` 只输出预期映射及冲突；`--resume` 比对源 SHA-256、parser 版本及已有产物校验；`--verify` 不更改任何文件。

退出码：`0` 校验通过且无 `failed`；`1` 存在实际失败/校验不一致；`2` 参数、路径或运行环境不合法。`--strict` 对 `unsupported` 不视为错误，除非对应格式在本期明确承诺全部支持；但对已承诺格式的 `failed` 和缺失产物必须失败。

## 8. 完整性与发布条件

源路径与 main 输出之间要能逆向追到唯一原文件；每个公开产物能比对 SHA-256。不要把 >100 MiB 文件直接作为普通 Git blob。体积超过常规 Git 可维护范围的成果优先评估 Git LFS 或持久 Release 分片，分片仍须可下载、可校验并与 manifest 关联；临时 Actions artifact 不能充当长期交付。先产出体积预测报告，再决定分批提交策略。
