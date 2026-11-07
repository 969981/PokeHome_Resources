# Pokémon HOME Android 4.1.0 — 可重建 Smali 工程

源 APK：`969981/Home_Android` 的 `master/ROMS/4.1.0/`，原 APK SHA-256：
`8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`。

生成后的工程位于 [4.1.0](4.1.0/)（只有自动化完成提交后才会存在）。由 Apktool **3.0.3** 从真实 APK 生成，包含 `apktool.yml`、`AndroidManifest.xml`、`res/`、`smali*/`、`assets/`、`lib/` 和 Apktool 解包时保留的其他必要文件。Smali 是 DEX 字节码的可汇编形式，**不是原作者 Java/Kotlin 源代码**。本 APK 核心使用 Unity IL2CPP，其原生方法体依然在 `libil2cpp.so`；Smali 不能替代原生反编译。

## 从 Git 仓库重新构建

安装 Java 17+、Python 3.9+，下载 [Apktool 3.0.3](https://github.com/iBotPeaches/Apktool/releases/tag/v3.0.3) 的 `apktool_3.0.3.jar`。

在仓库根目录执行：

```bash
python Android/Smali/tools/shard_large.py check --root Android/Smali/4.1.0
python Android/Smali/tools/shard_large.py restore --root Android/Smali/4.1.0
java -jar apktool_3.0.3.jar b Android/Smali/4.1.0 -o home41-rebuilt-unsigned.apk
```

超出普通 Git 单文件大小限制的原始成员拆分在 `4.1.0/.shards/`，通过 `.large-file-shards.json` 的大小与 SHA-256 复原；如果分片清单为空则无需额外成员。不要把输出的 APK 误认为官方签名：**重编译 APK 必须另外用自己的测试密钥 zipalign / apksigner 签名**，签名变化会影响原应用覆盖安装和服务端/平台验证。请不要在真实账号上安装验证性重打包程序。

一键 CI 见 `.github/workflows/home41-smali-roundtrip.yml`：在 GitHub Actions 的 Ubuntu ARM64 以外的标准 runner 上从仓库读取真实 APK、核对哈希、解码多 DEX、重建 APK、签名、再进行分片复原回编译，成功后才将完整工程提交到本私有仓库。真实构建结果记录在 `4.1.0/REBUILD_REPORT.json`，调试 APK 仅作为短期 Actions Artifact，不混入源代码仓库。

## 验收边界

- `apktool b` 成功表示 **DEX Smali 和 Android 资源可重组**，不等于原签名、不等于完成运行测试，也不等于恢复 Unity IL2CPP C# 源程序。
- `apksigner verify` 成功表示测试签名有效，不意味着账号登录、数据迁移或 API 功能正常。
- 只向私有 `969981/PokeHome_Resources` 提交，不向公开 `Home_Android` 仓库发布成批反编译代码及资源。
- `4.1.0` 工程可能很大，请检查 Git、版权和备份要求；不应上载私密账号、token、流量包或私有账号数据。
