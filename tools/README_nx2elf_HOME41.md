---
title: HOME 4.1.0 NSO main 到 main.elf 转换
date: 2026-11-10
upstream: https://github.com/shuffle2/nx2elf
upstream_commit: a1760ba54e2aefb41444933f53b90e6e8b05c399
status: committed_elf_verified_nx2elf_rebuild_not_yet_verified
tags: [HOME, NSO, ELF, nx2elf, Obsidian]
---

# HOME 4.1.0 main → main.elf

使用 [shuffle2/nx2elf](https://github.com/shuffle2/nx2elf) 把 Nintendo Switch NSO 转为 ELF（上游支持 NSO、NRO、MOD）。本仓库**仅引用**上游程序，不复制源码。为确保可重现，锁定上游提交 [a1760ba54e2aefb41444933f53b90e6e8b05c399](https://github.com/shuffle2/nx2elf/commit/a1760ba54e2aefb41444933f53b90e6e8b05c399)。

## 输入和已经提交的 ELF

| 文件 | 大小 | Git Blob SHA1 |
|---|---:|---|
| `57b83ea8c0af21ef26e2519b9580b373_NCA/0/main` | 4,610,506 B | `f55030b775a192e6e0c2fa93c5538dd1ef3187a5` |
| `57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf` | 8,261,352 B | `1dfe5d1f94732750a3e6a70b3baa833e4b9c9b28` |
| `57b83ea8c0af21ef26e2519b9580b373_NCA/0/nx2elf.exe` | 84,480 B | `5d3a01b2ded95b858e5cedc1eb856a9153bc81b5` |

本地文件与 GitHub 已提交 `main.elf` 的 Git Blob SHA1 一致。该 ELF 的 SHA256 为 `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`，GNU Build ID 为 `325195bcb7366b15bae55171070dc4b8d7f33c0d`；已通过 readelf 结构检查：ELF64、Little Endian、AArch64、ET_DYN、5 个 Program Headers 和 33 个 Section Headers。

**已经存在正确身份的 ELF，不意味着当前已证明它历史上由此固定上游版本生成。** 必须实际重新运行 nx2elf 并与仓库 ELF 逐字节比较，才能验证此版本重建完全一致。

## Linux/macOS：固定上游源码并编译

```bash
git clone -b 4.1.0 https://github.com/969981/PokeHome_Resources.git
cd PokeHome_Resources

git clone https://github.com/shuffle2/nx2elf.git ../nx2elf
git -C ../nx2elf checkout a1760ba54e2aefb41444933f53b90e6e8b05c399
cmake -S ../nx2elf -B ../nx2elf/build -DCMAKE_BUILD_TYPE=Release
cmake --build ../nx2elf/build --parallel

# 默认只读验证，生成临时 ELF 并比较现有已提交 main.elf
python3 tools/nx2elf_home41.py --nx2elf ../nx2elf/build/nx2elf --mode verify

# 无需重新转换，检查现有 ELF Header 和 SHA
python3 tools/nx2elf_home41.py --mode inspect
```

上游原生命令（**会覆写指定输出**）：

```bash
../nx2elf/build/nx2elf 57b83ea8c0af21ef26e2519b9580b373_NCA/0/main --export-elf 57b83ea8c0af21ef26e2519b9580b373_NCA/0/main.elf
```

安全 wrapper `tools/nx2elf_home41.py` 使用原始 `NSO0` 魔数、固定 HOME 4.1.0 Git Blob 身份和输出 ELF64/AArch64 校验。`verify` 不修改已提交 ELF，重新生成结果不同时退出码为 2。只有明确执行 `--mode write`，才会原子替换目标文件。

## Windows PowerShell

从固定上游源码用 CMake+Visual Studio 构建 `nx2elf.exe` 后，在资源仓库根目录执行：

```powershell
py -3 .\tools\nx2elf_home41.py --mode verify --nx2elf 'C:\tools\nx2elf\build\Release\nx2elf.exe'
```

已有 `NCA/0/nx2elf.exe` 的具体构建来源尚未核实，推荐使用自己从上述固定源码编译的程序。

## GitHub Actions：自动验证与可选提交

[HOME41 NX2ELF 工作流](../.github/workflows/home41-nx2elf.yml) 会在 `4.1.0` 分支工具、工作流、原始 NSO 变更时运行，也支持在 Actions 页面手动启动：

1. Checkout 固定上游源码并用 CMake Release 构建；
2. 检查已提交 `main.elf` 结构；
3. 从本仓 `main` 实际转换生成一个新 ELF；
4. 对新 ELF / 已提交 ELF 进行 SHA256、Git Blob SHA1、字节大小对账；
5. 上传 `home41-main-elf-nx2elf` Artifact（生成 ELF、JSON 报告），保留 30 天。

**默认只做验证，不偷偷改动二进制。** 手动运行时指定 `commit_generated=true` 才在新旧字节不一致的情况下更新 `main.elf` 并提交到 `4.1.0`；相同则不会创建重复提交。是否真实跑通以 [GitHub Actions 运行记录](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-nx2elf.yml) 为准。

**首次运行审计（2026-11-10）**：[Actions #42754440095](https://github.com/969981/PokeHome_Resources/actions/runs/42754440095) 于 04:13:12 UTC 触发，04:13:17 UTC 结束，Job `convert` 状态 `failure`，但 GitHub REST API 返回 `steps=[]`、`runner_name=""`，因此**没有任何 nx2elf 代码构建或 main 转换步骤实际被执行**。当前无法从该记录确定是 Runner 分配、账单/额度、平台策略或其他启动失败原因；请不要把它表述为转换算法失败，也不能把当前 ELF 与固定上游版本的字节相同标成 PASS。GitHub Job Logs 下载返回 `BlobNotFound`，说明这次没有可用的标准作业日志。


## 本版本 ELF RVA 研究

已提交 ELF 的 SHA256/Build ID 与 [HOME-Live-Plugin-CHS 的 PKM/ELF/PKHeX 研究](https://github.com/969981/HOME-Live-Plugin-CHS/tree/home-core-editor/docs/research/home-pkm-knowledge-base) 相同：`main+0x53A140` 对应游戏 PKM XOR；`main+0x530214` 对应 EH4 AES 加密；`main+0x50D280` 对应剑盾 PK8→PH4 的转换器。它们是主模块的 RVA，不是 ASLR 后的绝对地址。

此工具仅重建仓库已经拥有的本地 HOME NSO，不替其他游戏的二进制再发行做授权判断。
