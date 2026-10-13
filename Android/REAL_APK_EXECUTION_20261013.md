# Android 4.1.0 APK — 2026-10-13 实际执行报告

## 输入与工具

- 原始 APK：`jp.pokemon.pokemonhome_4.1.0-81_minAPI23(arm64-v8a)(nodpi)_apkmirror.com.apk`
- APK SHA-256：`8dee598028cd70441f645c8fff96b093b76778d625cdf07c60109eced50ffac1`
- Unity IL2CPP (`libil2cpp.so`) SHA-256：`80bfbc3d480bf3c91297d65a441a37e40260b70fd8b0ddc8da70c34f0870b6fe`
- 原始 `global-metadata.dat` SHA-256：`dde114e58c195c44d8261ff00259c2da5dcfd62facad6103ea4b60b77bebb0ad`
- **本次实际安装并运行**：REA 6.4.0、JADX CLI 1.5.6、jadx-headless-mcp 0.7.1（JDK 21）。
- GitHub CI 安装验证：[run 38348892627](https://github.com/969981/PokeHome_Resources/actions/runs/38348892627)。官方 REA 6.4.0 NPM package，官方 JADX 1.5.6 GitHub release、jadx-headless-mcp 0.7.1 GitHub release。该 CI 的 Linux 下载包由 Actions artifact 暂存两天，**不是**官方 APK 的提取镜像。

## 已完成的真实静态任务

| 交付类型 | 实测结果 | 严格含义 |
|---|---:|---|
| APK 原始 ZIP 成员 | **1,810 / 1,810** | ZIP CRC 正常、逐个提取及 SHA-256 清单；解压字节 **302,672,347** |
| JADX 1.5.6 常规 Java 反编译 | **7,900** `.java` | JADX 报告 **94** 个错误；不应称为全部方法完美重建 |
| JADX 解码资源 | **1,906** 文件 | 含 resources 输出，并非所有 Unity 序列化资源均语义化 |
| JADX 1.5.6 fallback 源码 | **7,995** `.java` | fallback 不显示常规模式的 94 个错误，但可读性较低、并非字节级源码恢复 |
| REA 6.4.0 package inspection | **7,995** classes、**1,810** resources | 真实运行 `inspect-android-package`，校验 package=`jp.pokemon.pokemonhome`、version=4.1.0/81、minSdk=23、targetSdk=36 |
| REA `Auth` DEX 类搜索 | **3** 个匹配类 | `GetAuthTokenListener`、`okhttp3.Authenticator`、WebAuthn boundary。HOME 游戏业务 API 在 IL2CPP，不能误当作 Java DEX 函数 |
| IL2CPP 注册相关 Native 函数反汇编 | **6** 个 RVA 窗口 | 使用原始 ARM64 `libil2cpp.so` 由 `llvm-objdump` 独立再读指令 |

APK ZIP 中实际存在 **两组仅大小写不同的路径**：`res/iW.png` 类及 `res/lR.xml` 类冲突。Linux 上按原始大小写完整保存；仓库内的 `unpack_apk.py` 已修正为对可能冲突的 Windows 输出文件使用确定性别名并在 manifest 中记录原路径、输出路径。不能静默覆盖。

## 账号 ID：本轮重新读取真实机器码

确认的 Android Native 地址为 `libil2cpp.so` 相对 RVA（不是 Switch `main` RVA）。

```asm
; ApiRequestChampTransferAccount.CallAfterResponse
0x1D3479C  LDR X1, [X19,#0x140]  ; ApiChampTransferAccountResponseParam.cid
0x1D347A0  STR X1, [X20,#0xA8]! ; request.ResponseSupportId
```

上述两条指令在本轮使用原始已校验 `libil2cpp.so` 重新反汇编，和历史文档 111 一致。还重新读取了以下真实函数机器指令窗口：

- `ApiRequestAuthRegisterUser.CallAfterResponse` = `0x1D33294`
- `ApiRequestAuthRegisterUser.SerializeRequestParameter` = `0x1D334A4`
- `UDManager.SetBasic` = `0x1D763D0`
- `ApiRequestChampTransferAccount.CallAfterResponse` = `0x1D345E8`
- `ApiAuthRegisterUserRequestParamFormatter.Serialize` = `0x205AEF0`
- `ApiAuthRegisterUserResponseParamFormatter.Deserialize` = `0x205DA3C`

**确定结论**：CID 是一个 *response-to-client* 字段，Android 的上述回调把它写进 Transfer 支持 ID 的接收字段。**尚不能确定**服务端是使用哪种分配算法生成 `CID`，也无法仅从客户端确定 `UTID` 最早创建时刻。注册 DTO 不含客户端选择 CID/UTID 的业务参数仍是已存档静态证据，不应误写为“服务器算法已逆向成功”。

## 文件交付范围与发布状态

真实输出已经在本轮临时研究环境制作了完整的离线 ZIP（**19,622** 个文件、压缩后 **173,109,257** 字节，内含原始 APK 解包、JADX 常规和 fallback、REA Evidence、机器指令窗口与清单），并通过 ZIP CRC 复验。它作为对话交付，不在本仓库重复发布第三方专有二进制/大批量反编译源码。

本仓库 **确实新增并发布** 本研究报告、可复现工具、单元测试及安装 CI。仓库里的 `Android/` 目录尚**不是**完整的 19,622 文件公开镜像；如以后经版权授权决定发布，须额外实现大规模批量上传与远端 manifest SHA-256 验证，不能把“本地 ZIP 已完成”当作“GitHub 全量提交完成”。

## 再现流程

```powershell
py -3 Android/tools/unpack_apk.py --apk .\HOME_4.1.0.apk --out .\Android\work\4.1.0
py -3 -m unittest discover -s Android/tests -v
```

本机解出的原始包可辅助 REA/JADX 复现；从 GitHub 下载 [REA](https://github.com/morluto/rea/releases/tag/rea-agents-6.4.0)、[JADX](https://github.com/skylot/jadx/releases/tag/v1.5.6)、[jadx-headless-mcp](https://github.com/1013503897/jadx-headless-mcp/releases/tag/v0.7.1) 并使用 [Actions toolchain bootstrap](../.github/workflows/android41-rea-jadx-bootstrap.yml)。

下一步不是盲目搜索 DEX 里的本地 ID 生成函数，而是对 `libil2cpp.so` 的注册请求、首次 `basic` 响应、`UDManager.SetBasic` 写入及 transfer CID 首次下发做字段级生产者/消费者证据闭环。
