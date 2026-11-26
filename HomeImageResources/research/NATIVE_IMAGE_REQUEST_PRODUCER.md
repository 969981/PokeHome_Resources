# HOME 4.1.0 原生图片请求生产者与精灵球转换链

## 证据
原始 ELF SHA256 bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a。源：derived/4.1.0/Ghidra_12.2_Run_42763137320/c/ 下的同版本 Ghidra 导出。Ghidra .text VA = 本文 ELF VA +0x100000。此次读取完整反编译；原始 ELF 二进制仍须由新 CI 导出逐指令、跳转表证据。以下是静态研究，不是实机运行验证。

## 0x105D60 请求生产者
调用者 0x15B7C8（详细页面路径），由 0x206BC4 读取 wrapper+0x58，传入构造函数。构造函数各 Getter 主要读取 Pokemon object+0x2F0 的容器，并使用 0x50E7F8 取得解码 Core。不是直接 PK8/PK9 文件偏移。普通分支 Core+0xC==0；其他分支使用默认全局对象或默认状态，暂不建模。

| Request | Getter | 普通 Core 证据 |
|---|---|---|
| +0x00 u32 | 0x531008 -> 0x50FED0 | u16 +0xD |
| +0x04 u16 | 0x531010 -> 0x515940 | u16 +0x22；species 414 强制 form0 |
| +0x08 u32 | 0x53378C -> 0x5157C0 | u8 +0x21 |
| +0x0C u8 | 0x534538 -> 0x5101D0 / 0x516770 -> 0x5497F4 | u32 +0xF XOR u32 +0x1A；((x&0xFFF0) XOR (x>>16))<16 |
| +0x0D u8 | 0x533B34(arg=2) -> 0x513C00 / 0x50FBA0 | OR 两状态；普通 Core 下 +0x66 !=0；另一状态依据 Core+0xC |
| +0x10 u32 | 0x534578 -> 0x50FA20 | u32 +8；业务名称仍未证实 |
| +0x14 u32 | 0x5319D4 -> 0x51AE24 | 该被调函数为 return0；原生产者另有 species890/form1 -> form0,variant2 |
| +0x18 u32 | 0x531324 -> 0x5229B0 | 默认 -1；仅 species869 取 u32 +0x94 低8位 |

Species 890 = 无极汰那（Eternatus）；414 = 绅士蛾（Mothim）。其他 UI 生产者不必完全相同：0x191EF4 从 0x17A570 返回的紧凑 UI record 取数据；869 使用 form / 7、form % 7 拆分；0x18ACA0 按 UI 字段重新打包并将 gender3 改为0；0x1671D0 直接消费 28B 请求数组（piVar5 += 7）。这些路径不可无条件视作实体 Getter 的同义替代。

## 精灵球上下文选择
0x206BC4 = return *(object+0x58)。
0x5312F0 = 0x522F84(*(pokemon+0x2F0)); 若返回0则使用0x1B。上一轮 item.dat 实测 27->ItemID1785->item_1785^o；这不是 dummy。
0x522F84: 0x516C70 读取原始 Core+0x91，0x5300E0 根据输入 42..53（掩码0xFEF）选择候选侧数据；0x50F6E0 检测该侧存在性，失败依次尝试侧1、2；均失败返回0。选中侧由0x518760 读取球编号。侧存在性底层 0x50EC80，七路间接跳转。0x518760 也有七路跳转，不能把它认作一个固定字节偏移。
0x206734 -> 0x5312E0: 从同一个容器读取 pokemon+0x54 所指定侧编号。
0x15B7C8 和0xAF924 均按 0x94B7C(current_game) 与 0x94B7C(target_game) 的返回分组选择路径：
- 同组：0x206734 -> 0x6B220(raw_ball,target_game)，后者有十路游戏转换跳转。
- 异组：0x206BC4 -> 0x5312F0。
- 组均为2且0x207E54为真且0x206734返回27，则最终改为4。0x207E54 要求0x5312D8==0x22并且0x5313C4(arg7)==0x753C；业务含义待证。
- 最终 0x2C3014 -> 0x4FD4F8 -> 0x4FD80C -> BRTI name。上一轮 38/38 名称关联不证明上游所有跨游戏编号已经闭合。

## 新增工具和证据边界
tools/home41_image_request_adapter.py: 仅支持已解码普通 Core 快照；8 个合成单测；特殊默认对象分支拒绝，球种读取依赖已取得的 Getter 结果，不冒充完整 PKM 转换。
tools/home41_image_producer_evidence.py: SHA 门控，读取缺失物种常量、游戏分组表及三组间接跳转表和指令窗口，扫描直接调用者。跳转基址从 Ghidra 推导，需对原始 ARM64 校验。
独立只读 Actions 不修改 NCA、Unpack、编辑器或已归档图像。CI 尚待验收；最终 HomeImageResourceCore 继续阻塞于侧数据球字段分支、游戏转换规则、原始 Core 格式与真实 PKM 字段对应及独立运行时验证。

## 追加实测验收（2026-11-26）
Actions 45769731018 succeeded at 8ff8cb40; downloaded artifact 15093048652, ZIP SHA256 62021e0492bef095eb2f48fead3eeab92f84d8c54e0a19459d8b9225979e38c4, CRC passed. All three dispatch tables confirmed from original bytes; 1405 aligned direct B/BL references across expanded targets. 0x105D60 has six direct BL callsites (0x15C034,0x15C198,0x15C2B8,0x1C0FB4,0x26DCB0,0x26E4BC).
0x61E360 literal: 0000_000_uk_n_00000000_f_n; selector model updated in af22d113.
0x94B7C game group table (13 bytes): 00 01 01 02 02 04 04 03 05 05 07 02 02.
0x6B220 exact game filter: raw zero ->0; target1/2 preserve nonzero 1,2,3,4,12,16 (mask0x1101E), else27; target7 preserve28..37, else27; target3..6,8..10 clamp unsigned ball to27; other target IDs preserve nonzero input.
0x5300E0 origin IDs42..53 -> side [1,1,2,2,0,3,4,4,5,5,7,6]; other IDs->0. 0x522F84 checks preferred then1 then2, only presence triggers fallback; selected side with ball0 returns27 via0x5312F0, does not retry subsequent side.
0x50E7F8 returns owner[8]+0x12. Record base owner[8]; length u16 at+0xD6; TLV starts+0xD8; tag u8, length u16 LE, payload+3; scan first matching tag. 0x50E994 confirms boundary. Original0x518760 payload ball byte offsets: side1 +0x36, side2 +0x3F, side3 +0x27, side4 +0x26, side5 +0x1B, side7 +0x37; side6 directly returns zero (w21 initialized zero). Absent side reads default global, not yet modeled; ordinary cross-game selection checks presence first.
Adapter d2444229 implements these normal decoded-record rules with bounds checking and synthetic tests, plus resolve_native_record() combining portrait lookup and cross-game ball key. Latest CI still pending; raw PKM->decoded owner record, default globals, same-group raw context predicate, PNG resource path lookup integration and native runtime parity remain pending. Older eight/ten tests passed on 45769605689/45769709775, prior native selector model CI 45769301068 passed. Full texture package independent CI not yet accepted.
