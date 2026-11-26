# PokemonPortraitIconParityAudit — 立绘与小图标像素对账

[返回宝可梦资源](../docs/01-Pokemon.md) · [图片导航](../docs/README.md) · [原生选择器](NATIVE_IMAGE_SELECTOR_MODEL.md)

## 输入与证据

- 3538 原版立绘 PNG，3506 小图标 PNG，3506 原生选择键；基准来自现有归档，不视为本次实测。
- 以 resource_stem 精确连接原生选择表和小图标 index，检查七字段元组完全一致；立绘通过 poke_capture_ + stem 定位；小图标使用索引 package_path，并验收原 PNG 与 RGBA SHA256。
- 所有立绘读取真实文件尺寸（含额外32张）；逐对记录 PNG 和 RGBA 哈希。任何缺失、重复、尺寸异常或解码错误不得标记覆盖率 PASS。
- 输入为已解码的原版纹理；不等同于独立重新解码 BNTX 或原生渲染器执行。

## 对账策略

1. 整画布缩放：NEAREST、BOX、BILINEAR、BICUBIC、LANCZOS。
2. alpha>=16 的轮廓边界：原始归一化 bbox、面积占比、silhouette IoU；不裁剪边缘，另做保持比例/非等比 bbox 仿射诊断，分别使用双线性和双三次插值。
3. RGBA 逐像素严格相等与忽略完全透明 RGB 的预乘视觉相等分别统计；预乘 RGB 三通道 MAE、前景 RGB MAE、alpha MAE/最大差值/非零差像素/256 桶直方图、PSNR、黑白背景 SSIM 均保存。
4. 按预乘 MAE 最低选择候选，SSIM 用作并列判定。固定 sRGB 编码空间，未测试线性光重采样或原生 GPU 压缩；非等比对齐仅为诊断。
5. exact_canvas_visual / near_canvas / near_after_alignment / needs_visual_review 为启发式分类，不是原生渲染身份结论。PASS_COVERAGE 只表示覆盖和校验通过，不表示图像一致。
6. 保留32个未引用立绘的完整 stem；不自动删除，不补造图标。

## 复现与输出

```bash
python -m pip install Pillow==12.0.0 numpy==2.2.6 scikit-image==0.25.2
python -m unittest discover -s tools -p test_home41_portrait_icon_parity.py -v
python tools/home41_portrait_icon_parity.py --root . --out parity_output
```

- [脚本](../../tools/home41_portrait_icon_parity.py)
- [回归测试](../../tools/test_home41_portrait_icon_parity.py)
- [Actions 工作流](../../.github/workflows/home-portrait-icon-parity.yml)
- [Actions 运行列表](https://github.com/969981/PokeHome_Resources/actions/workflows/home-portrait-icon-parity.yml)

Artifact home41-portrait-icon-parity:
- summary.json：覆盖、尺寸分布、分类、最佳滤镜、误差分位数、32个额外立绘及错误。
- pairs.csv：每对关键指标，便于排序筛选。
- pairs.jsonl：每对全部候选、alpha 直方图、来源及哈希。
- worst_pairs.png：最差对齐 MAE 的24组，展示直接 Lanczos 缩放与原图标；标签为最佳对齐指标，不是图中直接缩放的指标。

## 当前状态

代码和 CI 已提交；实际运行结果需以 Actions artifact 为准。未取得结果前不得声称3506组像素一致、已通过测试或来源相同。后续可加入线性光重采样、独立解码验证和原版渲染器证据。
