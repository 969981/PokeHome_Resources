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

以下保留本次真实验收结果。后续可加入线性光重采样、独立解码验证和原版渲染器证据。


## 2026-11-26 全量实测结果（已验收）

[Run 45808165667](https://github.com/969981/PokeHome_Resources/actions/runs/45808165667) at 4fe883cbf7f5671e1d977761d5c02ed0906a77b5, success; all four synthetic regression tests passed. [Artifact 15109339076](https://github.com/969981/PokeHome_Resources/actions/runs/45808165667/artifacts/15109339076), 7,747,601 bytes, independently downloaded and verified SHA256 944385e4924f8d7cd8241812cf0f939530d8db6f7725aed2b45dda5eb38b1f03 and ZIP CRC. Four files present; 3506 JSONL and CSV pairs.

- PASS_COVERAGE: 3538 portraits, 3506 icons, 3506 pairs, no missing or extra icons. Actual portrait dimensions: 3522 × 512x512 and 16 × 112x112. The 16 low-resolution files are species 1007/1008 forms 001–004, normal and shiny; all 16 have exact RGBA equality with their icons. Other 3490 paired portraits are 512x512; no exact RGBA match after the tested transforms.
- Categories: exact_canvas_visual 16; near_canvas 0; near_after_alignment 343; needs_visual_review 3147. This is threshold classification, not provenance.
- Median direct/aligned: premultiplied RGBA MAE 10.526661/3.4153415; SSIM .78877445/.94039095; silhouette IoU .85007745/.96686905. Direct best filters bilinear 3168, box 287, bicubic 51. Best overall 3462 uniform_bbox_BILINEAR, 28 stretch_bbox_BILINEAR, 16 canvas_BICUBIC. For 3490 high-resolution pairs the median icon foreground bbox width/height ratios against direct scaling are .957529/.959184, normalized center offset x=0/y=-.00251115. Strong visual relation and altered composition; no claim of identical native render pipeline.
- Largest residual MAE: 0701_001_mf_n_00000000_f_n (10.335938), 0006_000_mf_g_00000000_f_r (10.200013), 0006_000_mf_g_00000000_f_n (10.139292). Inspect worst_pairs.png and individual metrics for details; the sheet previews direct Lanczos, not the best aligned image.

## 32 unreferenced portraits

Independently compared complete portrait index blob a20205665c2aa9ee01b8bf78eb70508488ee317f and selector CSV ac401a447ba0f9dff77fbb6a61f5c93ac8be14a7. All 32 extra names have distinct PNG Git blobs; none matches the referenced PNG blobs. This does not establish decoded RGBA uniqueness. 30 have same species/form/color candidate differing in gender tag; 2 (0918 form001 normal/shiny) have only form000 candidate. All are normal/shiny pairs. Species: 0128 (6), 0902 (4), 0905 (4), 0916 (4), 0918 (2), 0924 (2), 0925 (4), 0957 (2), 0958 (2), 0959 (2).
[Supplemental pixel audit](../../tools/home41_unreferenced_portrait_audit.py) verifies all 3538 PNG blob identities and decoded RGBA/visible equality, and compares same-species form candidates. [Run 45808571811](https://github.com/969981/PokeHome_Resources/actions/runs/45808571811) triggered; its actual results remain pending at this revision. Do not infer historical or unused status without caller/version evidence.
