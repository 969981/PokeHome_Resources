# HOME 4.1.0 ROMFS → home-core-editor 文档同步

运行仓库：[PokeHome_Resources / 4.1.0](https://github.com/969981/PokeHome_Resources/tree/4.1.0)，结果仓库：[HOME-Live-Plugin-CHS / home-core-editor](https://github.com/969981/HOME-Live-Plugin-CHS/tree/home-core-editor)（私有）。

## 1. 数据流和目录

~~~text
PokeHome_Resources / 4.1.0
  57b83ea8..._NCA/1/bin/              原始 RomFS（只读）
  Unpack/57b83ea8.../                已解析资源（只读）
  tools/home41_export_to_core_editor.py
             |
             v
  runner 临时目录 -> CSV + 全字段表 + 源二进制 TAR.GZ + SHA-256
             |
             v
  HOME-Live-Plugin-CHS / home-core-editor
  docs/pokemon_home_reverse/4.1.0/resources/home41_romfs_full_4_1_0/
    README.md                         既有文档，保留
    semantic/                         既有语义表，保留
    parsed_raw/                       既有原始字段表，保留
    generated/                        自动管理，只覆盖本目录
      semantic/species_forms_all_games.csv
      semantic/species_6game_matrix.csv
      semantic/moves_all_games.csv
      semantic/moves_6game_matrix.csv
      raw_fields/waza_fields.csv
      raw_fields/personal_fields.csv
      raw_fields/summary.json
      parsed_raw/...
      source_romfs_subset.tar.gz
      source_sha256_manifest.csv
      bundle_summary.json
~~~

这个工作流不修改上游 RomFS、Unpack、本体 C# 程序、HOME 账号或 Nintendo 服务器。

## 2. 配置跨仓库私有提交权限（必须用户自己设置）

创建 GitHub Fine-grained personal access token，Resource owner 为 969981，Only select repositories 仅选 HOME-Live-Plugin-CHS，Repository permissions 中 Contents = Read and write。令牌所属账户必须能写目标仓库。

然后打开 [PokeHome_Resources → Actions secrets](https://github.com/969981/PokeHome_Resources/settings/secrets/actions)，添加仓库 Secret：

- Secret 名称：HOME_CORE_EDITOR_PUSH_TOKEN
- Secret 值：上面的 token

不要将令牌发布到仓库、Issue、日志或聊天里。原始仓库的 GITHUB_TOKEN 不具有默认跨仓库私有写权限。

## 3. 执行入口

[HOME 4.1.0 ROMFS export to home-core-editor docs](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-sync-core-editor-docs.yml) 支持手动 workflow_dispatch；4.1.0 分支的对应原始资源、Unpack、解析器和工作流代码更新时，也会自动运行。

阶段顺序：检出源仓库相关目录 → 校验脚本与单测 → 完整解码和源文件打包 → 8,485 Personal / 5,089 Waza / 1,479 Species/Form / 921 Move ID 数量验证 → 上传短期 Actions Artifact → 校验私有仓库令牌 → 检出私有目标 → 同步 generated 子目录 → 仅在有变化时提交、非强制推送。

没有配置 Secret、Actions 没有实际启动执行步骤、任何数据校验失败或 push 失败，均不算发布成功。

## 4. 解析成果和限制

- semantic/moves_all_games.csv 从 5,089 个真实 Wazabin 读出 move_id、属性、分类、power、accuracy、PP、扩展 raw。
- raw_fields/waza_fields.csv 保存每个 FlatBuffers 槽位的 raw_hex 和长度。
- semantic/species_forms_all_games.csv 保存七份 Personal 的全部 8,485 个 Species/Form，包含类型、特性、六围、性别及高重 raw。
- raw_fields/personal_fields.csv 保存完整 Personal 原始字段长表。
- parsed_raw 包含 Unpack 已解析的道具 ID/属性、图鉴、local valid-list、中文名等。
- source_romfs_subset.tar.gz 保存相关原始资源字节，source_sha256_manifest.csv 逐文件记录 SHA-256。

资源字段、Waza 存在性、valid-list 本地 bit 并不等于服务器认可、跨游戏转移合法性，尚不能得出 LGPE/ZA 历史锁的全部逻辑。

## 5. 常见故障

- 没有工作步骤：检查 GitHub Actions 配额、Runner、Actions 开关或账单限制。
- 导出失败：核对源文件缺失、数量、FlatBuffers 字段范围和 DAT/AHTB 解码日志。
- 导出成功但同步失败：检查 HOME_CORE_EDITOR_PUSH_TOKEN 是否配置、过期、仓库权限不足或目标分支受保护。
- 原始归档单文件超过 95 MiB：脚本会停止并要求改用 Git LFS / Release，不会绕过 Git 限制。


## 6. 真实 CI 导出记录（2026-10-16）

[Actions Run 38849367651](https://github.com/969981/PokeHome_Resources/actions/runs/38849367651) 的源码检出、语法验证、针对性 PML/Waza/AHTB/DAT 测试、全量导出、数据总量验证及 Artifact 上传均成功；随后在 **Check private destination access** 步骤因仓库 Secret HOME_CORE_EDITOR_PUSH_TOKEN 尚未配置而主动失败。**私有仓库的 generated/ 此时尚无同步结果**。

- Artifact：home41-romfs-full-export，ZIP 4,832,373 字节，GitHub Artifact ID 12024676911；到期 2026-10-30。
- 实际导出：Personal 8,485，Species/Form 1,479，Waza 5,089，Move ID 921；原始文件 5,139 个；已导出其他表文件 74 个。
- 源 TAR.GZ：2,293,165 字节；SHA-256 cc5908d0b474c0bcb12f5d5d487aeabb0070fb8ed5cb140c31a28a90113081c9。
- 下一步：配置只允许写私有目标仓库的 Secret，并在上述 Actions Run 重新运行失败作业/手动运行工作流。只有远端 push 成功及 generated/ 存在实物才能判定同步完成。
