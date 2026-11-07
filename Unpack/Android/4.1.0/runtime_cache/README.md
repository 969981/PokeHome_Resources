# Android 4.1.0 宝可梦运行时模型/图标缓存

**当前状态**：仓库已包含 APK 内置 Unity UI 资源和 IL2CPP 方法映射；**尚未收到 Android 实机运行后的资源缓存**。因此 `pokemon_cache_summary.json` 在无输入时应为 `no_cached_unity_assets`，不能宣称已经找到完整的宝可梦种族模型。

## 目标目录

```text
Unpack/Android/4.1.0/
  _meta/
    runtime_inventory.csv
    runtime_inventory_summary.json
    pokemon_asset_candidates.csv
    pokemon_cache_summary.json
    il2cpp_loader_hints.csv
    il2cpp_loader_hints_summary.json
  runtime_cache_input/        # 可选：用户预先脱敏且授权的资源缓存输入
  runtime_cache/
    imported/                 # SHA-256 命名的 UnityFS/有效媒体候选
    pokemon/
      images/
      models/
```

## 如何提供本地缓存

1. 在自己持有的 Android 设备/测试模拟器上运行 HOME 至自己允许访问的模型查看界面。不要导出帐号、用户资料、私有令牌或整个 `/data/user/0`。
2. 资源通常位于 Unity 持久数据目录或临时缓存目录；真实路径因 Android 版本和应用实现而异。Unity 缓存可能是 `BundleName/Hash/__data`，也可能是下载到另一个目录的 AssetBundle。
3. 在本地通过 `Home_Android/tools/runtime_cache_inventory.py` 先筛选魔数、排除用户数据，再只把合格的资源文件复制到本私有仓库的 `runtime_cache_input/`。直接上传原始账户目录是不允许的。
4. 推送后，此私有工作流自动扫描缓存，按候选 `pm0025`、`pokemon0150` 等明确命名建立物种/形态 ID **候选**。没有种族语义证据时不猜测。
5. 验收需对照游戏中本体 3D 显示、骨骼动画和图标，并匹配来源 Hash+PathID；再决定哪些能标记 confirmed。

## 资源缓存的边界
只探测用户已经授权导出的静态文件，不提供绕过登陆、破解 Android 应用沙箱或调用 CDN 的步骤。缓存文件内容可能不是完整 AssetBundle，而是 Unity 内部索引/压缩分块，需要在实际样本上单独验证。

**APK 自带 35 个 OBJ/GLB 主要是 UI/场景几何，并非已经证实的 Pokémon 本体模型。**
