---
title: "HOME 4.1.0：GitHub Actions Runner 无法启动的实证、计费检查与自托管方案"
date: 2026-11-10
status: RUNNER_START_BLOCKED_BILLING_NOT_CONFIRMED
tags: [github-actions, ghidra, pokemon-home, self-hosted-runner, troubleshooting]
---

# GitHub Actions Runner 启动阻断

> [!warning] 当前状态
> 2026-11-10 私有仓库 `969981/PokeHome_Resources` 的多个 Actions Job 都在数秒内失败，`runner_name=""` 且 `steps=[]`。工作流代码**没有实际执行**。
> 具体 Job 注释不可经当前 GitHub 连接取得，因此不能直接证明是欠费或额度已用尽。

## 1. 跨仓库原始 API 对比

| 仓库 | 可见性 | 实测 |
|---|---|---|
| `969981/PokeHome_Resources` | private | [Ghidra Run 42758442820](https://github.com/969981/PokeHome_Resources/actions/runs/42758442820)：failure，runner 空，steps=0 |
| `969981/HOME-Live-Plugin-CHS` | private | 多个 Obsidian 导航工作流同类故障 |
| `969981/NX2navi` | public | 2026-11-10 `Content guard` 成功 |
| `969981/Hookshot` | public | 同日多个 Actions 运行成功 |

> [!important] 工作假设（尚未确证）
> 私有仓库使用 GitHub-hosted Runner 消耗账户附带计算额度，超过配额可能需要有效支付方式；到达设置了“Stop usage”的 Actions 预算也会阻断托管 Runner。公开仓库标准 Runner 通常免费，符合上述跨仓库分布。
> 其他可能原因包括仓库 Actions 策略或账户限制，必须看 GitHub 失败 Job 的 **Annotations** 才能确诊。

## 2. 恢复 GitHub-hosted Runner：账户所有者操作

1. 访问 [个人账单](https://github.com/settings/billing) → **Budgets and alerts**，核对 Actions 的实际剩余额度、支出上限与 **Stop usage when budget limit is reached**。若耗尽且已触发停止，可在愿意承担额外费用时调整预算及有效付款方式；不想产生费用则保留预算，改用下述自托管。
2. 访问 [PokeHome_Resources → Settings → Actions → General](https://github.com/969981/PokeHome_Resources/settings/actions)，检查 Actions 是否允许运行、GitHub-hosted Runner 是否被组织策略禁用。
3. 查看 [实际失败 Run 42758442820](https://github.com/969981/PokeHome_Resources/actions/runs/42758442820) 的 **Annotations / workflow errors**。这里的完整错误文字能区分 Billing / Spending limit / Actions policy / 其他错误。
4. 设置修复后，运行 **[HOME 4.1.0 Runner availability smoke test](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-runner-smoke.yml)**，选择 branch `4.1.0`、`runner_target=github-hosted`。成功条件是出现 **Prove actual runner started** 步骤以及日志中的 `HOME41_RUNNER_SMOKE_PASS`。
5. 冒烟测试成功，再执行 [Ghidra 全量数据库工作流](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-ghidra-full-database.yml)。

官方依据：[GitHub Actions 计费](https://docs.github.com/en/actions/concepts/billing-and-usage)、[预算设置](https://docs.github.com/en/billing/how-tos/set-up-budgets)。

## 3. 低成本替代：私有仓库专用 Self-hosted Linux Runner

GitHub 官方文档确认自托管 Runner 不按 GitHub-hosted 分钟计费，但计算机、网络、存储由用户承担。将原始 ELF 保持在私有仓库，不要为获取公共免费分钟而公开二进制。

**在本地 Linux 或 Windows WSL2 Ubuntu 环境**：

```bash
sudo apt-get update
sudo apt-get install -y curl ca-certificates git unzip tar zstd python3 python3-pip
mkdir -p "$HOME/actions-runner-home41"
cd "$HOME/actions-runner-home41"
```

打开 [PokeHome_Resources → Settings → Actions → Runners](https://github.com/969981/PokeHome_Resources/settings/actions/runners)，点击 **New self-hosted runner**，选择 **Linux / x64**。按照页面上的*当前有效版本*命令下载并验证 Runner，获取只在 GitHub 网站中显示、有效期短的注册 token；不要把 token 写进 GitHub 仓库、文档或聊天。

在 GitHub 官方页面的 `./config.sh` 步骤注册到**此私有仓库**，增加自定义标签 `home41-ghidra`：

```bash
# 此时已经根据 GitHub 页面下载、解压了 Runner 到当前目录
./config.sh --url https://github.com/969981/PokeHome_Resources \
  --token '<从 GitHub UI 获取的一次性注册 token>' \
  --labels home41-ghidra \
  --name home41-local
./run.sh
```

在终端看到 `Listening for Jobs` 并且 GitHub Runners 页面显示 **Idle** 才表示真正连通。保持 Runner 进程运行。

随后：

1. 在 [Runner availability smoke test](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-runner-smoke.yml) 手动选择 `runner_target=self-hosted`；查看 Job 是否分配到 `home41-local`。
2. 成功后到 [Ghidra 工作流](https://github.com/969981/PokeHome_Resources/actions/workflows/home41-ghidra-full-database.yml)，选择 `runner_target=self-hosted`、`decompile_all=true`。
3. 自托管 Runner 需要有足够 RAM、磁盘、联网能力；建议预留至少 16 GiB 内存和 20 GiB 空闲磁盘用于 Ghidra + 分析工程（容量是保守估计，不是实测的最小值）。工作流会自行安装 Temurin Java 25 并下载官方 Ghidra 12.2。
4. 只允许可信分支的工作流执行，避免在放有个人文件、密钥的机器上运行不可信 PR。官方同样建议优先让 self-hosted runner 服务于私有仓库。

官方：[添加 self-hosted runner](https://docs.github.com/en/actions/how-tos/manage-runners/self-hosted-runners/add-runners)、[self-hosted runner 安全与使用](https://docs.github.com/en/actions/concepts/runners/self-hosted-runners)。

## 4. 数据完整性与真实验收

`runner_target` 是手动运行的可选输入，`github-hosted` 为默认；已有 push 事件仍会沿用官方 `ubuntu-latest`。没有注册到此仓库、并带 `home41-ghidra` 标签的 Linux x64 自托管 Runner 时，手动选择 `self-hosted` **只会排队，不会自动创建 Runner**。

成功执行 Ghidra 后必须看到：
- `main.elf` SHA256 校验成功；
- Ghidra Headless 导出完整 `.gpr/.rep`；
- `home41_ghidra_manifest.json` 的 `status=COMPLETE`；
- SQLite 完整性检查 `ok`；
- Ghidra project、SQLite、NDJSON 三类 Actions Artifacts。

这些都仍属于**静态分析**，不会自动闭合 itemname Getter 到实际 UI 的运行时证据。

> [!failure] 2026-11-10 结论
> 已定位到 Runner 分配前失败并部署手动自托管路径。账户账单和 Runner 注册令牌必须由所有者在 GitHub 登录界面处理；当前没有得到运行器成功启动的真实证据，不能宣告阻断已经解除。
