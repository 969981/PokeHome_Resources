# Unpack 实施记录 — 2026-10-13

## 首轮已提交

- U00：文档基线已提交，含 AGENTS.md、目标、命名规则、任务。
- U01：统一 CLI 扫描 RomFS、计算源 SHA-256 并写 source_manifest.csv 的代码已提交；尚无全仓运行得到的 manifest 文件。
- U02：镜像路径映射、DAT/TBL 相邻后缀映射、静态同名碰撞回退与 dry-run 已实现；仍需完成真实 Git 树全量预演验收。
- U03：tools/unpack_home41.py 已实现 --file/--kind/--all/--dry-run/--resume/--verify/--strict，需 Python 3.10+；现阶段为待 CI 验收的实现。
- 已镜像提交 16 个真实旧版解析产物：7 套 Personal 的 JSON+CSV（14 文件）、beluga waza0001 JSON（1）、primitive_renderer_texture PNG（1）；来源及 Git 对象见 Unpack/_meta/seed_sources.json。
- 新增 tools/test_home41_unpack.py，包含真实资源样本、目录冲突、CRC/PNG 签名、完整性核验路径；新增 GitHub Actions 工作流。

## 自动化执行状态

- [GitHub Actions run 38336950044](https://github.com/969981/PokeHome_Resources/actions/runs/38336950044) 显示 completed/failure，job steps 为空，无法取得有效日志。因此并未完成 Python unittest 或全量 dry-run；不能把失败解释为具体解析器 bug，也不能标记为通过。
- 首批 16 个文件是从仓库已有真实解析结果重用 Git blob，并非本次新 CLI 在运行器上完整重新生成。两者 JSON 内部 schema 可能不同；新 CLI 运行后会生成同语义但不保证与旧输出字节完全相同的文件。

## 下一轮验收命令

```powershell
python -m compileall -q tools
python -m unittest discover -s tools -p 'test_home41_unpack.py' -v
python tools/unpack_home41.py --root . --out Unpack --dry-run
python tools/unpack_home41.py --root . --out Unpack --all --resume
python tools/unpack_home41.py --root . --out Unpack --verify --strict
```

后续必须完成全量本地运行和实测 source SHA-256、output SHA-256，才可以更新 U04–U17 为完成。对未知 schema/像素格式，允许 partial/unsupported；禁止伪造成功。
