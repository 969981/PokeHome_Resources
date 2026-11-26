---
title: HOME 4.1.0 出身标记 BRTI 通道重映射
tags: [pokemon-home, image-resources, bc5, shader, origin-mark]
date: 2026-11-26
---
# 出身标记原版纹理通道恢复

[返回图片导航](../../docs/README.md) · [上一轮资源索引](../../docs/10-Type-Language-Version-Origin.md) · [索引](index.json)

基线 68340804dc12d54d6196102ae9ec80ad5f3b5673。直接读取两套原始 ARC 内的 BRTI +0x58：24/24 为 02 02 02 03（R,R,R,G），对照版本、语言、属性为 02 03 04 05（R,G,B,A）。原有 BC5 decoder 输出 (R,G,0,255) 是通道预览，不是 RGBA。正确纹理采样层为 (R,R,R,G)。本轮直接读取压缩 BC5 block、去平铺并独立解码，再写入24张 RGBA PNG。普通可见灰度255，color可见灰度100；01两者全透明；11的两种 alpha 非零像素数不同，不可只使用一个 mask。未证明 runtime shader / tint / blending / game enum，不宣称 GPU parity。

## 布局证据

普通与彩色 BFLYT 的 material P_00 84B 逐字节相同，flags 0x15，+32..43 为 0002040800000000ffffffff，+44 u16 texture map index=0，+46 sampler raw=0404；顶点色16字节全 ff，UV [0,0,1,0,0,1,1,1]。普通 txl1[0] 为 icon_generation_00^t，color 为 icon_generation_00_color^t。版本默认 icon_version_0000^q，简中语言布局默认 icon_lang_jpn_00^q；两者同样 0x15/84B、白顶点、full UV。布局默认不等于业务映射。未把未知 mat1 字段认定为某个颜色参数。

## 恢复图览

| BRTI index | 普通（白色，透明底，深色背景查看） | color（#646464，透明底） | 非零 alpha 普通 / color |
|---:|---|---|---:|
| 0 | ![](normal/00.png) | ![](color/00.png) | 1406 / 1406 |
| 1 | ![](normal/01.png) | ![](color/01.png) | 0 / 0 |
| 2 | ![](normal/02.png) | ![](color/02.png) | 1570 / 1570 |
| 3 | ![](normal/03.png) | ![](color/03.png) | 1360 / 1360 |
| 4 | ![](normal/04.png) | ![](color/04.png) | 1372 / 1372 |
| 5 | ![](normal/05.png) | ![](color/05.png) | 1386 / 1386 |
| 6 | ![](normal/06.png) | ![](color/06.png) | 1924 / 1924 |
| 7 | ![](normal/07.png) | ![](color/07.png) | 1509 / 1509 |
| 8 | ![](normal/08.png) | ![](color/08.png) | 1146 / 1146 |
| 9 | ![](normal/09.png) | ![](color/09.png) | 1245 / 1245 |
| 10 | ![](normal/10.png) | ![](color/10.png) | 1333 / 1333 |
| 11 | ![](normal/11.png) | ![](color/11.png) | 1673 / 1359 |

## 边界及后续

本目录为 research，不覆盖旧 Unpack PNG，不声明 origin ID。原始通道与恢复 PNG 可并存。通过 [复现脚本](../../../tools/home41_origin_swizzle_audit.py) 从源 ARC 重建，并以 Pillow 对已归档 PNG 逐像素比较（PNG 压缩方式不同无影响）。ELF 8,261,352 字节，连接器本轮读取返回空；[ELF 审计](../../../tools/home41_icon_selector_audit.py) 需在仓库工作树实际运行，报告字符串、指针表和代码窗口候选，未将候选自动发布到 Core。四个 ID 域（PokemonLanguage、OriginGameVersion、CurrentGame、OriginMark）必须分离；待原生消费者数据流证明后再建立业务 ID 映射。运行时 tint/渲染验证未完成。
