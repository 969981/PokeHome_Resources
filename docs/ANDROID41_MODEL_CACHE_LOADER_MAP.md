# HOME Android 4.1.0 宝可梦本体模型：IL2CPP 资源加载优先路线

**证据来源**：真实匹配 APK `4.1.0` 的 `libil2cpp.so` 与 `global-metadata.dat`，使用 IL2CppDumper v31 恢复的 `script.json`（共 180,628 条 `ScriptMethod`）。2026-11-07 对生成的函数名实际执行筛查，命中 929 条，再精选以下 20 条方法候选。

**地址含义**：下表是 Dumper `Address` 字段转换为十六进制，尚未以 Ghidra 交叉确认是否全为函数入口/ELF RVA，也未证明真实调用关系。它们不包含完整的 C# 方法体。

## 优先函数

| 阶段 | 静态方法名 | 地址候选 | 优先 |
|---|---|---:|---|
| model_identity | `MasterDataHelper$$GetPokemonModel` | `0x1CDB518` | P1 |
| model_identity | `MasterDataHelper$$GetPokemonModels` | `0x1CDB5BC` | P1 |
| model_identity | `MD.Data.PokemonModel$$SolveReferences` | `0x1F0DD00` | P1 |
| model_identity | `MD.Util$$GetModelMD` | `0x1F0810C` | P1 |
| model_instance | `PokemonSetController$$LoadHomeModelAsync` | `0x1C5A434` | P1 |
| model_instance | `PokemonSetController$$InitModelForUI` | `0x1C5AA98` | P1 |
| model_instance | `PokemonSetController$$InitModelForUI` | `0x1C5B090` | P1 |
| model_viewer | `ModelViewerController$$LoadModel` | `0x1D26F44` | P1 |
| model_viewer | `ModelViewerController$$PlayAnim` | `0x1D2733C` | P1 |
| model_viewer | `ModelViewerController$$PlayAnim` | `0x1D273E0` | P1 |
| bundle_download | `ILib.Unity.Net.SplitDownloadAssetBundleManager$$DownloadModelCoroutine` | `0x1F41B34` | P1 |
| bundle_download | `ILib.Unity.Net.SplitDownloadAssetBundleManager$$RequestDownload` | `0x1F4142C` | P1 |
| bundle_download | `ILib.Unity.Net.AssetBundleMDDownloader$$Download` | `0x1F2B7DC` | P2 |
| bundle_decode | `ILib.File.AssetbundlePackageFileExtracter$$ReadHeader` | `0x1F1699C` | P1 |
| bundle_decode | `ILib.File.AssetbundlePackageFileExtracter$$UnpackAndWriteOnefile` | `0x1F16C70` | P2 |
| bundle_decode | `ILib.File.AssetbundlePackageFileExtracter$$UnpackAndWrite` | `0x1F171D8` | P2 |
| bundle_loader | `ILib.Unity.File.RAssetBundleManager$$LoadRequest` | `0x1F48FE0` | P1 |
| bundle_loader | `ILib.Unity.File.RAssetBundleManager$$LoadRequest` | `0x1F49140` | P1 |
| bundle_cache | `SmartPoint.AssetAssistant.AssetManager$$IsCached` | `0x240872C` | P1 |
| model_viewer | `HomeScreenRandomModelLoader$$GetActiveModelMD` | `0x1C994F4` | P2 |

## 调查路径（推测，仍需验证）

1. `MasterDataHelper.GetPokemonModel`、`MD.Util.GetModelMD`、`MD.Data.PokemonModel.SolveReferences`：对照物种/形态 ID 与模型资源引用，查明名字规则或 GUID，而不是猜。
2. `PokemonSetController.LoadHomeModelAsync`、`ModelViewerController.LoadModel`：使用 Ghidra 追踪模型查看页面如何传入模型参数，定位运行时真实 Bundle 名称。
3. `SplitDownloadAssetBundleManager.RequestDownload/DownloadModelCoroutine`：核对下载清单及拆分包结构，查找 BundleName / Hash / 存储路径的实际来源。
4. `RAssetBundleManager.LoadRequest` 与 `SmartPoint.AssetAssistant.AssetManager.IsCached`：验证磁盘缓存是否由 Unity 标准 `__data` 容器管理，还是自有文件系统。
5. `ModelViewerController.PlayAnim`：查 AnimationClip 与 AnimatorController 如何绑定 Mesh / 材质 / 骨架，模型能够播放才算完整恢复。

以上是研究顺序，**不是**已经证明的调用图。绝不可由方法名直接断言缓存实际位置、CDN URL 或物种数据已经存在于 APK。

## 当前唯一可信的“宝可梦本体资源”状态

- APK 提取的 35 个几何 GLB 是 UI 场景/特效，尚未确认包含任何宝可梦本体。
- 私有仓库尚无合法提供的 Android 运行时缓存；`_meta/runtime_inventory_summary.json` = `runtime_cache_not_supplied`。
- `_meta/pokemon_cache_summary.json` = `no_cached_unity_assets`，物种候选数 0。
- 一旦取得脱敏 Unity 缓存资源，使用 `Home_Android/tools/runtime_cache_inventory.py` 和 `pokemon_cache_scan.py` 生成 PathID / SHA-256 / species/form 候选对照，并逐个与模型截图与骨骼动画交叉验证。

## 证据与操作链接
- 本目录 `_meta/il2cpp_loader_hints.csv`：929 个函数名线索，查询不依赖网络通信。
- 本目录 `_meta/loader_priority.csv`：P1/P2 经筛选函数及地址。
- `docs/ANDROID41_RUNTIME_CACHE_AND_SPECIES.md`：本地缓存采集与过滤规范。
- https://github.com/969981/PokeHome_Resources/tree/4.1.0/Unpack/Android/4.1.0/il2cpp
