# Unpack — Pokémon HOME 4.1.0 镜像解包目录

这个目录是 `PokeHome_Resources` 的**解码产物交付目录**，不是原始资源目录，也不是现有 `derived/4.1.0/` 的重命名。

## 当前状态

2026-10-13：已建立**目录规范**，尚未向本目录提交 12,074 个 RomFS 文件的镜像解包成果；请不要把此 `README.md` 当作已完成解包的证据。

目标结构：

```text
Unpack/
  README.md
  57b83ea8c0af21ef26e2519b9580b373_NCA/
    1/bin/...                          # 与原始 RomFS 完全一致的相对层级
  _raw_members/                        # SARC 中的原始归档成员
  _meta/
    source_manifest.csv
    manifest.csv
    manifest.json
    summary.json
    unsupported.csv
    errors.csv
```

主转换产物保持源文件主体名，替换格式扩展名：`waza0001.wazabin` → `waza0001.json`、`event_flags.tbl` → `event_flags.json`、`event_flags.dat` → `event_flags.csv`，`*.bntx.gz` 真正解压成 `*.bntx`，并且仅在格式支持时生成 `*.png`。

详见：

- [项目目标](../docs/UNPACK_GOAL.md)
- [转换命名/审计合同](../docs/UNPACK_OUTPUT_SPEC.md)
- [分阶段实施任务](../docs/UNPACK_TASKS.md)
- [Agent 开发规范](../AGENTS.md)

实际开发入口计划为 `tools/unpack_home41.py`。在该文件实现之前，已有可用的旧入口 `tools/export_home41_resources.py`、`tools/export_home41_everything.py` 和 `tools/home41_bntx_to_png.py` 仍应按照根目录 `README_CONVERSION.md` 的命令使用；它们**不会自动产生本目录约定的镜像布局**。
