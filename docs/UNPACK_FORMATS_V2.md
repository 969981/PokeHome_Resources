# HOME 4.1.0 Unpack v2 — 原生格式与测试记录

日期：2026-10-13。分支：`4.1.0`。

## 实际证据（不是推测）

- 第一版源资源 **12,074** 项，v1 运行 [38338642486](https://github.com/969981/PokeHome_Resources/actions/runs/38338642486) 成功，原始 `partial=8880`、`unsupported=65`。
- `docs/UNPACK_P4_SIGNATURES.json` 收集 65 个未支持资源前 64 字节（非完整字节）；原始分类 `bin=25/prmb=3/BFOTF=3/bffnt=4/bnsh=13/bfbs=1/dat=11/bnk=4/pck=1`。
- `*.bntx.gz` 中的真实首例 `poke_capture_1007_001_uk_n_00000000_f_n.bntx.gz` 是 **BC7_UNORM (0x2001)**，宽高 112×112，非 ASTC。可使用 `texture2ddecoder==1.0.6` 解码 BGRA 后交换 R/B 得到 RGBA，再输出标准 PNG。转换必须遵守 BNTX BRTI、BlockLinear 块寻址，不可直接读取块序列当线性贴图。
- [运行 38340798935](https://github.com/969981/PokeHome_Resources/actions/runs/38340798935) 的图像阶段实测 `selected=3539`，生成的各源状态达到 `converted=6672, partial=5380, unsupported=21, failed=1, total_outputs=47184`。其中 **唯一失败** 是 `system_resource/shader/movie.bnsh`；其 header +0x1C 为边界内值，但并非该资源长度。现已修复 `tools/home41_extra_formats.py` 的过度断言；零错误的更新发布待后续独立工作流验证。
- 对应 BFBS `black_list_main_array.bfbs` 从真实 **BFBS file_identifier** 恢复 reflection Schema 的 Object、Field、Type、Enum 与根表，并生成 JSON / 重建候选 `.fbs`；候选文本不可当作原作者原文。
- `constant_data.prmb` 为合法 FlatBuffers 结构，只能读取未定型字段；`*.bnk` 采用 Wwise `BKHD`、`DIDX`、`DATA`、`HIRC` 分块，可提取有有效 RIFF 签名的 WEM（并不解码音频）；`*.bffnt` 验证 FFNT 的文件长度和分节；`*.bnsh` 可识别容器头部，**没有反编译 shader 程序**；`Stream.pck` 的 AKPK 只解析包头，未完成流媒体索引。
- 上述格式均有 `tools/test_home41_extra.py` 使用真实 4.1.0 资源的回归用例。原文源数据始终只读。

## 代码位置

- `tools/home41_bntx_to_png.py`：BC7 + 可选 ASTC，依赖 `texture2ddecoder==1.0.6`；无可用依赖时保持 unsupported 而非写伪 PNG。
- `tools/home41_extra_formats.py`：BFBS / BNK / BNSH / FFNT / AKPK。
- `tools/unpack_home41.py`：镜像路径、无副作用 dry-run、分格式解析、源/输出 SHA256 与断点续跑。
- `tools/home41_probe_unknown.py`：未知格式的真实字节证据。

## 已配置的验收与发布

1. [BC7 PNG 发布](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-publish-bc7.yml)：3,538 个 `.bntx.gz` 中要求超过 3,000 个真实 PNG，提交 Git 及 manifest。
2. [P4 结构化文件发布](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-publish-other.yml)：在图像发布成功后运行，要求 `failed=0`、`not_run=0` 及 SHA256 完整性通过。
3. [v2 全量 Release](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-unpack-v2.yml)：在 P4 成功后全源增量补齐 SARC 原始成员/二进制镜像并发布 v2（以 Release 资产真正出现为成功依据）。

## 后续尚未恢复的语义

- 原始 8,880 个 partial 中，绝大部分 Waza、Personal 仍为 schema-free FlatBuffers 字段，属于**字段位宽已验证，种族/招式业务含义未验证**。
- 部分 `.bin` 尚无 schema、语法 `grammar/*.dat` 尚无规则表定义；
- `.BFOTF` 未恢复可用字体、`*.bnsh` 未得到着色器源码、`Stream.pck` 的声轨未完全分离；
- BC7 PNG 是原纹理解码，不保证经过了游戏渲染管线的光照、色彩调整或 UI 混合。

不要把 generic header JSON 或 16 进制转换当作全语义解包。
