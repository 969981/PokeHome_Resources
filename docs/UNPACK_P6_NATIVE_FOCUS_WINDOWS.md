# P6 — 4.1.0 Native Item / Topics 消费者候选窗口

ELF SHA256: \`bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a\`

**证据类型：原始 opcode / static window。**
对没有别名追踪及动态对照的同名偏移、立即数不可直接
判定为业务字段。尤其 \`0x138\` 也可能是对象字段偏移、
而非 topic stride，需要检查后续数据流与真实槽位地址。

仅报告实际解码的目标指令，且每条地址为 main-relative RVA。

## topics resource load and owner assignment: main+0x12B10

```asm
0x00012AB0 e01340f9 ldr      x0, [sp, #0x20]
0x00012AB4 00fdffb4 cbz      x0, #0x12a54
0x00012AB8 088c44f8 ldr      x8, [x0, #0x48]!
0x00012ABC 080d40f9 ldr      x8, [x8, #0x18]
0x00012AC0 00013fd6 blr      x8
0x00012AC4 e4ffff17 b        #0x12a54
0x00012AC8 1f2003d5 nop      
0x00012ACC 1f2003d5 nop      
0x00012AD0 606e42f9 ldr      x0, [x19, #0x4d8]
0x00012AD4 480396d2 mov      x8, #0xb01a
0x00012AD8 0830baf2 movk     x8, #0xd180, lsl #16
0x00012ADC 48c1d3f2 movk     x8, #0x9e0a, lsl #32
0x00012AE0 88ecf4f2 movk     x8, #0xa764, lsl #48
0x00012AE4 e1230091 add      x1, sp, #8
0x00012AE8 e203152a mov      w2, w21
0x00012AEC e8d300a9 stp      x8, x20, [sp, #8]
0x00012AF0 fcff01a9 stp      x28, xzr, [sp, #0x18]
0x00012AF4 580a0094 bl       #0x15454
0x00012AF8 e01340f9 ldr      x0, [sp, #0x20]
0x00012AFC 20faffb4 cbz      x0, #0x12a40
0x00012B00 088c44f8 ldr      x8, [x0, #0x48]!
0x00012B04 080d40f9 ldr      x8, [x8, #0x18]
0x00012B08 00013fd6 blr      x8
0x00012B0C cdffff17 b        #0x12a40
0x00012B10 003000b0 adrp     x0, #0x613000
0x00012B14 00142791 add      x0, x0, #0x9c5
0x00012B18 e8230091 add      x8, sp, #8
0x00012B1C 84ceff97 bl       #0x652c
0x00012B20 773c00b0 adrp     x23, #0x79f000
0x00012B24 a82300d1 sub      x8, x29, #8
0x00012B28 f7aa42f9 ldr      x23, [x23, #0x550]
0x00012B2C e40340f9 ldr      x4, [sp]
0x00012B30 e2230091 add      x2, sp, #8
0x00012B34 21008052 mov      w1, #1
0x00012B38 e3031f2a mov      w3, wzr
0x00012B3C e5031faa mov      x5, xzr
0x00012B40 e00240f9 ldr      x0, [x23]
0x00012B44 1b040094 bl       #0x13bb0
0x00012B48 608642f9 ldr      x0, [x19, #0x508]
0x00012B4C 800000b4 cbz      x0, #0x12b5c
0x00012B50 088c44f8 ldr      x8, [x0, #0x48]!
0x00012B54 080d40f9 ldr      x8, [x8, #0x18]
0x00012B58 00013fd6 blr      x8
0x00012B5C b5835ff8 ldur     x21, [x29, #-8]
0x00012B60 783c00b0 adrp     x24, #0x79f000
0x00012B64 758602f9 str      x21, [x19, #0x508]  << VERIFIED OPCODE
0x00012B68 18ef41f9 ldr      x24, [x24, #0x3d8]
0x00012B6C 550200b4 cbz      x21, #0x12bb4
0x00012B70 f40315aa mov      x20, x21
0x00012B74 888e44f8 ldr      x8, [x20, #0x48]!
0x00012B78 e00314aa mov      x0, x20
0x00012B7C 080940f9 ldr      x8, [x8, #0x10]
0x00012B80 00013fd6 blr      x8
0x00012B84 688a42f9 ldr      x8, [x19, #0x510]
0x00012B88 69ca42f9 ldr      x9, [x19, #0x590]
0x00012B8C 080109aa orr      x8, x8, x9
0x00012B90 a80000b4 cbz      x8, #0x12ba4
0x00012B94 61021491 add      x1, x19, #0x500
0x00012B98 e00315aa mov      x0, x21
0x00012B9C 22008052 mov      w2, #1
0x00012BA0 1c191394 bl       #0x4d9010
0x00012BA4 880240f9 ldr      x8, [x20]
0x00012BA8 e00314aa mov      x0, x20
0x00012BAC 080d40f9 ldr      x8, [x8, #0x18]
0x00012BB0 00013fd6 blr      x8
0x00012BB4 e81340f9 ldr      x8, [sp, #0x20]
0x00012BB8 c80000b4 cbz      x8, #0x12bd0
0x00012BBC e00740f9 ldr      x0, [sp, #8]
0x00012BC0 800000b4 cbz      x0, #0x12bd0
0x00012BC4 088c44f8 ldr      x8, [x0, #0x48]!
0x00012BC8 080d40f9 ldr      x8, [x8, #0x18]
0x00012BCC 00013fd6 blr      x8
0x00012BD0 e01740f9 ldr      x0, [sp, #0x28]
0x00012BD4 f62f00b0 adrp     x22, #0x60f000
0x00012BD8 d60e1a91 add      x22, x22, #0x683
0x00012BDC ffe700a9 stp      xzr, x25, [sp, #8]
0x00012BE0 f6ff01a9 stp      x22, xzr, [sp, #0x18]
0x00012BE4 800000b4 cbz      x0, #0x12bf4
0x00012BE8 088c44f8 ldr      x8, [x0, #0x48]!
0x00012BEC 080d40f9 ldr      x8, [x8, #0x18]
0x00012BF0 00013fd6 blr      x8
0x00012BF4 080340f9 ldr      x8, [x24]
0x00012BF8 403000d0 adrp     x0, #0x61c000
0x00012BFC 008c0391 add      x0, x0, #0xe3
0x00012C00 140540f9 ldr      x20, [x8, #8]
0x00012C04 e8230091 add      x8, sp, #8
0x00012C08 40000094 bl       #0x12d08
0x00012C0C e00240f9 ldr      x0, [x23]
0x00012C10 a82300d1 sub      x8, x29, #8
0x00012C14 e2230091 add      x2, sp, #8
0x00012C18 21008052 mov      w1, #1
0x00012C1C e3031f2a mov      w3, wzr
0x00012C20 e40314aa mov      x4, x20
0x00012C24 e5031faa mov      x5, xzr
0x00012C28 e2030094 bl       #0x13bb0
0x00012C2C 600e43f9 ldr      x0, [x19, #0x618]
0x00012C30 800000b4 cbz      x0, #0x12c40
0x00012C34 088c44f8 ldr      x8, [x0, #0x48]!
0x00012C38 080d40f9 ldr      x8, [x8, #0x18]
0x00012C3C 00013fd6 blr      x8
0x00012C40 b5835ff8 ldur     x21, [x29, #-8]
0x00012C44 750e03f9 str      x21, [x19, #0x618]
0x00012C48 550200b4 cbz      x21, #0x12c90
0x00012C4C f40315aa mov      x20, x21
0x00012C50 888e44f8 ldr      x8, [x20, #0x48]!
0x00012C54 e00314aa mov      x0, x20
0x00012C58 080940f9 ldr      x8, [x8, #0x10]
0x00012C5C 00013fd6 blr      x8
0x00012C60 681243f9 ldr      x8, [x19, #0x620]
0x00012C64 695243f9 ldr      x9, [x19, #0x6a0]
0x00012C68 080109aa orr      x8, x8, x9
0x00012C6C a80000b4 cbz      x8, #0x12c80
```

## topics same-owner early read: main+0x12E5C

```asm
0x00012DAC 8a820191 add      x10, x20, #0x60
0x00012DB0 0801899a csel     x8, x8, x9, eq
0x00012DB4 693c00b0 adrp     x9, #0x79f000
0x00012DB8 080140f9 ldr      x8, [x8]
0x00012DBC 29e942f9 ldr      x9, [x9, #0x5d0]
0x00012DC0 29018a9a csel     x9, x9, x10, eq
0x00012DC4 290140f9 ldr      x9, [x9]
0x00012DC8 940200b4 cbz      x20, #0x12e18
0x00012DCC 8a3640f9 ldr      x10, [x20, #0x68]
0x00012DD0 68a600a9 stp      x8, x9, [x19, #8]
0x00012DD4 e00314aa mov      x0, x20
0x00012DD8 6afe01a9 stp      x10, xzr, [x19, #0x18]
0x00012DDC 088c44f8 ldr      x8, [x0, #0x48]!
0x00012DE0 080940f9 ldr      x8, [x8, #0x10]
0x00012DE4 00013fd6 blr      x8
0x00012DE8 601240f9 ldr      x0, [x19, #0x20]
0x00012DEC 741200f9 str      x20, [x19, #0x20]
0x00012DF0 800000b4 cbz      x0, #0x12e00
0x00012DF4 088c44f8 ldr      x8, [x0, #0x48]!
0x00012DF8 080d40f9 ldr      x8, [x8, #0x18]
0x00012DFC 00013fd6 blr      x8
0x00012E00 7f2a00b9 str      wzr, [x19, #0x28]
0x00012E04 e00313aa mov      x0, x19
0x00012E08 f50b40f9 ldr      x21, [sp, #0x10]
0x00012E0C f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00012E10 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00012E14 1fe9ff17 b        #0xd290
0x00012E18 68a600a9 stp      x8, x9, [x19, #8]
0x00012E1C 7ffe01a9 stp      xzr, xzr, [x19, #0x18]
0x00012E20 7f2a00b9 str      wzr, [x19, #0x28]
0x00012E24 e00313aa mov      x0, x19
0x00012E28 f50b40f9 ldr      x21, [sp, #0x10]
0x00012E2C f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00012E30 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00012E34 17e9ff17 b        #0xd290
0x00012E38 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x00012E3C f30b00f9 str      x19, [sp, #0x10]
0x00012E40 fd030091 mov      x29, sp
0x00012E44 08884b39 ldrb     w8, [x0, #0x2e2]
0x00012E48 f30300aa mov      x19, x0
0x00012E4C c8010034 cbz      w8, #0x12e84
0x00012E50 606e42f9 ldr      x0, [x19, #0x4d8]
0x00012E54 d7090094 bl       #0x155b0
0x00012E58 e0020036 tbz      w0, #0, #0x12eb4
0x00012E5C 688642f9 ldr      x8, [x19, #0x508]  << VERIFIED OPCODE
0x00012E60 a80200b4 cbz      x8, #0x12eb4
0x00012E64 08c14539 ldrb     w8, [x8, #0x170]
0x00012E68 68020034 cbz      w8, #0x12eb4
0x00012E6C 680e43f9 ldr      x8, [x19, #0x618]
0x00012E70 280200b4 cbz      x8, #0x12eb4
0x00012E74 08c14539 ldrb     w8, [x8, #0x170]
0x00012E78 1f010071 cmp      w8, #0
0x00012E7C e0079f1a cset     w0, ne
0x00012E80 11000014 b        #0x12ec4
0x00012E84 607641f9 ldr      x0, [x19, #0x2e8]
0x00012E88 e00100b4 cbz      x0, #0x12ec4
0x00012E8C dff70a94 bl       #0x2d0e08
0x00012E90 1f040071 cmp      w0, #1
0x00012E94 01010054 b.ne     #0x12eb4
0x00012E98 607641f9 ldr      x0, [x19, #0x2e8]
0x00012E9C 28008052 mov      w8, #1
0x00012EA0 688a0b39 strb     w8, [x19, #0x2e2]
0x00012EA4 f7f70a94 bl       #0x2d0e80
0x00012EA8 606e42f9 ldr      x0, [x19, #0x4d8]
0x00012EAC c1090094 bl       #0x155b0
0x00012EB0 60fd0737 tbnz     w0, #0, #0x12e5c
0x00012EB4 e0031f2a mov      w0, wzr
0x00012EB8 f30b40f9 ldr      x19, [sp, #0x10]
0x00012EBC fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00012EC0 c0035fd6 ret      
0x00012EC4 f30b40f9 ldr      x19, [sp, #0x10]
0x00012EC8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00012ECC c0035fd6 ret      
0x00012ED0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00012ED4 f50b00f9 str      x21, [sp, #0x10]
0x00012ED8 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00012EDC fd030091 mov      x29, sp
0x00012EE0 088442f9 ldr      x8, [x0, #0x508]
0x00012EE4 13c940f9 ldr      x19, [x8, #0x190]
0x00012EE8 680240f9 ldr      x8, [x19]
0x00012EEC 280200b4 cbz      x8, #0x12f30
0x00012EF0 f5031f2a mov      w21, wzr
0x00012EF4 f4031f2a mov      w20, wzr
0x00012EF8 06000014 b        #0x12f10
0x00012EFC 1f2003d5 nop      
0x00012F00 680240f9 ldr      x8, [x19]
0x00012F04 b5060011 add      w21, w21, #1
0x00012F08 1f0115eb cmp      x8, x21
0x00012F0C 49010054 b.ls     #0x12f34
0x00012F10 e003152a mov      w0, w21
0x00012F14 5f4b0894 bl       #0x225c90
0x00012F18 40ff0736 tbz      w0, #0, #0x12f00
0x00012F1C e00313aa mov      x0, x19
0x00012F20 e103152a mov      w1, w21
0x00012F24 a39b0594 bl       #0x179db0
0x00012F28 1400140b add      w20, w0, w20
0x00012F2C f5ffff17 b        #0x12f00
0x00012F30 f4031f2a mov      w20, wzr
0x00012F34 e003142a mov      w0, w20
0x00012F38 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00012F3C f50b40f9 ldr      x21, [sp, #0x10]
0x00012F40 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00012F44 c0035fd6 ret      
0x00012F48 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00012F4C f50b00f9 str      x21, [sp, #0x10]
0x00012F50 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00012F54 fd030091 mov      x29, sp
0x00012F58 f40300aa mov      x20, x0
0x00012F5C 003840f9 ldr      x0, [x0, #0x70]
0x00012F60 f503022a mov      w21, w2
0x00012F64 f30308aa mov      x19, x8
0x00012F68 d7801394 bl       #0x4f32c4
0x00012F6C 803e40f9 ldr      x0, [x20, #0x78]
0x00012F70 a00f00f9 str      x0, [x29, #0x18]
0x00012F74 800000b4 cbz      x0, #0x12f84
0x00012F78 088c44f8 ldr      x8, [x0, #0x48]!
0x00012F7C 080940f9 ldr      x8, [x8, #0x10]
0x00012F80 00013fd6 blr      x8
0x00012F84 813a40f9 ldr      x1, [x20, #0x70]
0x00012F88 63018052 mov      w3, #0xb
0x00012F8C a0630091 add      x0, x29, #0x18
0x00012F90 e203152a mov      w2, w21
0x00012F94 40100194 bl       #0x57094
0x00012F98 a00f40f9 ldr      x0, [x29, #0x18]
0x00012F9C a00000b4 cbz      x0, #0x12fb0
0x00012FA0 088c44f8 ldr      x8, [x0, #0x48]!
0x00012FA4 080d40f9 ldr      x8, [x8, #0x18]
0x00012FA8 00013fd6 blr      x8
0x00012FAC bf0f00f9 str      xzr, [x29, #0x18]
0x00012FB0 803e40f9 ldr      x0, [x20, #0x78]
0x00012FB4 600200f9 str      x0, [x19]
0x00012FB8 800000b4 cbz      x0, #0x12fc8
0x00012FBC 088c44f8 ldr      x8, [x0, #0x48]!
0x00012FC0 080940f9 ldr      x8, [x8, #0x10]
0x00012FC4 00013fd6 blr      x8
0x00012FC8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00012FCC f50b40f9 ldr      x21, [sp, #0x10]
0x00012FD0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00012FD4 c0035fd6 ret      
0x00012FD8 00000000 udf      #0
```

## topics same-owner second read: main+0x12EE0

```asm
0x00012E50 606e42f9 ldr      x0, [x19, #0x4d8]
0x00012E54 d7090094 bl       #0x155b0
0x00012E58 e0020036 tbz      w0, #0, #0x12eb4
0x00012E5C 688642f9 ldr      x8, [x19, #0x508]  << VERIFIED OPCODE
0x00012E60 a80200b4 cbz      x8, #0x12eb4
0x00012E64 08c14539 ldrb     w8, [x8, #0x170]
0x00012E68 68020034 cbz      w8, #0x12eb4
0x00012E6C 680e43f9 ldr      x8, [x19, #0x618]
0x00012E70 280200b4 cbz      x8, #0x12eb4
0x00012E74 08c14539 ldrb     w8, [x8, #0x170]
0x00012E78 1f010071 cmp      w8, #0
0x00012E7C e0079f1a cset     w0, ne
0x00012E80 11000014 b        #0x12ec4
0x00012E84 607641f9 ldr      x0, [x19, #0x2e8]
0x00012E88 e00100b4 cbz      x0, #0x12ec4
0x00012E8C dff70a94 bl       #0x2d0e08
0x00012E90 1f040071 cmp      w0, #1
0x00012E94 01010054 b.ne     #0x12eb4
0x00012E98 607641f9 ldr      x0, [x19, #0x2e8]
0x00012E9C 28008052 mov      w8, #1
0x00012EA0 688a0b39 strb     w8, [x19, #0x2e2]
0x00012EA4 f7f70a94 bl       #0x2d0e80
0x00012EA8 606e42f9 ldr      x0, [x19, #0x4d8]
0x00012EAC c1090094 bl       #0x155b0
0x00012EB0 60fd0737 tbnz     w0, #0, #0x12e5c
0x00012EB4 e0031f2a mov      w0, wzr
0x00012EB8 f30b40f9 ldr      x19, [sp, #0x10]
0x00012EBC fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00012EC0 c0035fd6 ret      
0x00012EC4 f30b40f9 ldr      x19, [sp, #0x10]
0x00012EC8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00012ECC c0035fd6 ret      
0x00012ED0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00012ED4 f50b00f9 str      x21, [sp, #0x10]
0x00012ED8 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00012EDC fd030091 mov      x29, sp
0x00012EE0 088442f9 ldr      x8, [x0, #0x508]
0x00012EE4 13c940f9 ldr      x19, [x8, #0x190]
0x00012EE8 680240f9 ldr      x8, [x19]
0x00012EEC 280200b4 cbz      x8, #0x12f30
0x00012EF0 f5031f2a mov      w21, wzr
0x00012EF4 f4031f2a mov      w20, wzr
0x00012EF8 06000014 b        #0x12f10
0x00012EFC 1f2003d5 nop      
0x00012F00 680240f9 ldr      x8, [x19]
0x00012F04 b5060011 add      w21, w21, #1
0x00012F08 1f0115eb cmp      x8, x21
0x00012F0C 49010054 b.ls     #0x12f34
0x00012F10 e003152a mov      w0, w21
0x00012F14 5f4b0894 bl       #0x225c90
0x00012F18 40ff0736 tbz      w0, #0, #0x12f00
0x00012F1C e00313aa mov      x0, x19
0x00012F20 e103152a mov      w1, w21
0x00012F24 a39b0594 bl       #0x179db0
0x00012F28 1400140b add      w20, w0, w20
0x00012F2C f5ffff17 b        #0x12f00
0x00012F30 f4031f2a mov      w20, wzr
0x00012F34 e003142a mov      w0, w20
0x00012F38 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00012F3C f50b40f9 ldr      x21, [sp, #0x10]
0x00012F40 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00012F44 c0035fd6 ret      
0x00012F48 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00012F4C f50b00f9 str      x21, [sp, #0x10]
0x00012F50 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00012F54 fd030091 mov      x29, sp
0x00012F58 f40300aa mov      x20, x0
0x00012F5C 003840f9 ldr      x0, [x0, #0x70]
0x00012F60 f503022a mov      w21, w2
0x00012F64 f30308aa mov      x19, x8
0x00012F68 d7801394 bl       #0x4f32c4
0x00012F6C 803e40f9 ldr      x0, [x20, #0x78]
0x00012F70 a00f00f9 str      x0, [x29, #0x18]
0x00012F74 800000b4 cbz      x0, #0x12f84
0x00012F78 088c44f8 ldr      x8, [x0, #0x48]!
0x00012F7C 080940f9 ldr      x8, [x8, #0x10]
0x00012F80 00013fd6 blr      x8
0x00012F84 813a40f9 ldr      x1, [x20, #0x70]
0x00012F88 63018052 mov      w3, #0xb
0x00012F8C a0630091 add      x0, x29, #0x18
0x00012F90 e203152a mov      w2, w21
0x00012F94 40100194 bl       #0x57094
0x00012F98 a00f40f9 ldr      x0, [x29, #0x18]
0x00012F9C a00000b4 cbz      x0, #0x12fb0
0x00012FA0 088c44f8 ldr      x8, [x0, #0x48]!
0x00012FA4 080d40f9 ldr      x8, [x8, #0x18]
0x00012FA8 00013fd6 blr      x8
0x00012FAC bf0f00f9 str      xzr, [x29, #0x18]
0x00012FB0 803e40f9 ldr      x0, [x20, #0x78]
0x00012FB4 600200f9 str      x0, [x19]
0x00012FB8 800000b4 cbz      x0, #0x12fc8
0x00012FBC 088c44f8 ldr      x8, [x0, #0x48]!
0x00012FC0 080940f9 ldr      x8, [x8, #0x10]
0x00012FC4 00013fd6 blr      x8
0x00012FC8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00012FCC f50b40f9 ldr      x21, [sp, #0x10]
0x00012FD0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00012FD4 c0035fd6 ret      
0x00012FD8 00000000 udf      #0
0x00012FDC 00000000 udf      #0
0x00012FE0 683c00b0 adrp     x8, #0x79f000
0x00012FE4 086946f9 ldr      x8, [x8, #0xcd0]
0x00012FE8 09014039 ldrb     w9, [x8]
0x00012FEC 49010037 tbnz     w9, #0, #0x13014
0x00012FF0 613c00b0 adrp     x1, #0x79f000
0x00012FF4 1f2003d5 nop      
0x00012FF8 00010010 adr      x0, #0x13018
0x00012FFC 214846f9 ldr      x1, [x1, #0xc90]
```

## Pokédex adjacent 312-byte stride, first site: main+0x179554

```asm
0x001794D4 f44f41a9 ldp      x20, x19, [sp, #0x10]
0x001794D8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x001794DC 86b0fa17 b        #0x256f4
0x001794E0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x001794E4 f44f01a9 stp      x20, x19, [sp, #0x10]
0x001794E8 fd030091 mov      x29, sp
0x001794EC 48310090 adrp     x8, #0x7a1000
0x001794F0 f40300aa mov      x20, x0
0x001794F4 087947f9 ldr      x8, [x8, #0xef0]
0x001794F8 f30300aa mov      x19, x0
0x001794FC 09410091 add      x9, x8, #0x10
0x00179500 890e1bf8 str      x9, [x20, #-0x50]!
0x00179504 09e10191 add      x9, x8, #0x78
0x00179508 08e10291 add      x8, x8, #0xb8
0x0017950C 09a03fa9 stp      x9, x8, [x0, #-8]
0x00179510 001c40f9 ldr      x0, [x0, #0x38]
0x00179514 a00000b4 cbz      x0, #0x179528
0x00179518 088c44f8 ldr      x8, [x0, #0x48]!
0x0017951C 080d40f9 ldr      x8, [x8, #0x18]
0x00179520 00013fd6 blr      x8
0x00179524 7f1e00f9 str      xzr, [x19, #0x38]
0x00179528 e00314aa mov      x0, x20
0x0017952C f44f41a9 ldp      x20, x19, [sp, #0x10]
0x00179530 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00179534 70b0fa17 b        #0x256f4
0x00179538 00000000 udf      #0
0x0017953C 00000000 udf      #0
0x00179540 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00179544 f50b00f9 str      x21, [sp, #0x10]
0x00179548 f44f02a9 stp      x20, x19, [sp, #0x20]
0x0017954C fd030091 mov      x29, sp
0x00179550 08178f52 mov      w8, #0x78b8
0x00179554 09278052 mov      w9, #0x138  << VERIFIED OPCODE
0x00179558 2800a89b umaddl   x8, w1, w8, x0
0x0017955C f403012a mov      w20, w1
0x00179560 4820a99b umaddl   x8, w2, w9, x8
0x00179564 0849238b add      x8, x8, w3, uxtw #2
0x00179568 153140b9 ldr      w21, [x8, #0x30]
0x0017956C 135540b9 ldr      w19, [x8, #0x54]
0x00179570 e003152a mov      w0, w21
0x00179574 e103132a mov      w1, w19
0x00179578 aeb10294 bl       #0x225c30
0x0017957C 9f1a0071 cmp      w20, #6
0x00179580 c9000054 b.ls     #0x179598
0x00179584 e0031f2a mov      w0, wzr
0x00179588 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x0017958C f50b40f9 ldr      x21, [sp, #0x10]
0x00179590 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00179594 c0035fd6 ret      
0x00179598 e803142a mov      w8, w20
0x0017959C a9250090 adrp     x9, #0x62d000
0x001795A0 29710e91 add      x9, x9, #0x39c
0x001795A4 287968b8 ldr      w8, [x9, x8, lsl #2]
0x001795A8 9f160071 cmp      w20, #5
0x001795AC 21020054 b.ne     #0x1795f0
0x001795B0 e9031faa mov      x9, xzr
0x001795B4 aa3e0012 and      w10, w21, #0xffff
0x001795B8 ab250090 adrp     x11, #0x62d000
0x001795BC 6b690891 add      x11, x11, #0x21a
0x001795C0 04000014 b        #0x1795d0
0x001795C4 29110091 add      x9, x9, #4
0x001795C8 3f0106f1 cmp      x9, #0x180
0x001795CC 20010054 b.eq     #0x1795f0
0x001795D0 6c696978 ldrh     w12, [x11, x9]
0x001795D4 9f010a6b cmp      w12, w10
0x001795D8 61ffff54 b.ne     #0x1795c4
0x001795DC 6c01098b add      x12, x11, x9
0x001795E0 8c054079 ldrh     w12, [x12, #2]
0x001795E4 9f21336b cmp      w12, w19, uxth
0x001795E8 e1feff54 b.ne     #0x1795c4
0x001795EC c0fc4736 tbz      w0, #8, #0x179584
0x001795F0 0824c89a lsr      x8, x0, x8
0x001795F4 00010012 and      w0, w8, #1
0x001795F8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x001795FC f50b40f9 ldr      x21, [sp, #0x10]
0x00179600 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00179604 c0035fd6 ret      
0x00179608 00000000 udf      #0
0x0017960C 00000000 udf      #0
0x00179610 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
0x00179614 f90b00f9 str      x25, [sp, #0x10]
0x00179618 f85f02a9 stp      x24, x23, [sp, #0x20]
0x0017961C f65703a9 stp      x22, x21, [sp, #0x30]
0x00179620 f44f04a9 stp      x20, x19, [sp, #0x40]
0x00179624 fd030091 mov      x29, sp
0x00179628 f703012a mov      w23, w1
0x0017962C 08178f52 mov      w8, #0x78b8
0x00179630 2800a89b umaddl   x8, w1, w8, x0
0x00179634 f603022a mov      w22, w2
0x00179638 09278052 mov      w9, #0x138
0x0017963C 4820a99b umaddl   x8, w2, w9, x8
0x00179640 f30300aa mov      x19, x0
0x00179644 3f1c0071 cmp      w1, #7
0x00179648 03020054 b.lo     #0x179688
0x0017964C 003140b9 ldr      w0, [x8, #0x30]
0x00179650 003a0034 cbz      w0, #0x179d90
0x00179654 08178f52 mov      w8, #0x78b8
0x00179658 09278052 mov      w9, #0x138
0x0017965C e84ea89b umaddl   x8, w23, w8, x19
0x00179660 c822a99b umaddl   x8, w22, w9, x8
0x00179664 015540b9 ldr      w1, [x8, #0x54]
0x00179668 72b10294 bl       #0x225c30
0x0017966C e0031f2a mov      w0, wzr
0x00179670 f44f44a9 ldp      x20, x19, [sp, #0x40]
0x00179674 f90b40f9 ldr      x25, [sp, #0x10]
0x00179678 f65743a9 ldp      x22, x21, [sp, #0x30]
0x0017967C f85f42a9 ldp      x24, x23, [sp, #0x20]
0x00179680 fd7bc5a8 ldp      x29, x30, [sp], #0x50
0x00179684 c0035fd6 ret      
0x00179688 143140b9 ldr      w20, [x8, #0x30]
0x0017968C 3f140071 cmp      w1, #5
0x00179690 81080054 b.ne     #0x1797a0
0x00179694 f4370034 cbz      w20, #0x179d90
0x00179698 08178f52 mov      w8, #0x78b8
0x0017969C 09278052 mov      w9, #0x138
0x001796A0 e84ea89b umaddl   x8, w23, w8, x19
0x001796A4 e003142a mov      w0, w20
0x001796A8 c822a99b umaddl   x8, w22, w9, x8
0x001796AC 155540b9 ldr      w21, [x8, #0x54]
0x001796B0 e103152a mov      w1, w21
0x001796B4 5fb10294 bl       #0x225c30
0x001796B8 a8250090 adrp     x8, #0x62d000
0x001796BC 08710e91 add      x8, x8, #0x39c
0x001796C0 e9031faa mov      x9, xzr
0x001796C4 087977b8 ldr      w8, [x8, x23, lsl #2]
0x001796C8 8a3e0012 and      w10, w20, #0xffff
0x001796CC b8250090 adrp     x24, #0x62d000
0x001796D0 186b0891 add      x24, x24, #0x21a
0x001796D4 06000014 b        #0x1796ec
0x001796D8 1f2003d5 nop      
0x001796DC 1f2003d5 nop      
0x001796E0 29110091 add      x9, x9, #4
0x001796E4 3f0106f1 cmp      x9, #0x180
0x001796E8 20010054 b.eq     #0x17970c
0x001796EC 0b6b6978 ldrh     w11, [x24, x9]
0x001796F0 7f010a6b cmp      w11, w10
0x001796F4 61ffff54 b.ne     #0x1796e0
0x001796F8 0b03098b add      x11, x24, x9
0x001796FC 6b054079 ldrh     w11, [x11, #2]
0x00179700 7f21356b cmp      w11, w21, uxth
0x00179704 e1feff54 b.ne     #0x1796e0
0x00179708 20fb4736 tbz      w0, #8, #0x17966c
0x0017970C 29008052 mov      w9, #1
0x00179710 3921c89a lsl      x25, x9, x8
0x00179714 3f0300ea tst      x25, x0
0x00179718 a0faff54 b.eq     #0x17966c
0x0017971C 08178f52 mov      w8, #0x78b8
0x00179720 09278052 mov      w9, #0x138
0x00179724 e84ea89b umaddl   x8, w23, w8, x19
0x00179728 c822a99b umaddl   x8, w22, w9, x8
0x0017972C 153540b9 ldr      w21, [x8, #0x34]
0x00179730 15330034 cbz      w21, #0x179d90
0x00179734 08178f52 mov      w8, #0x78b8
0x00179738 09278052 mov      w9, #0x138
0x0017973C e84ea89b umaddl   x8, w23, w8, x19
0x00179740 e003152a mov      w0, w21
0x00179744 c822a99b umaddl   x8, w22, w9, x8
0x00179748 145940b9 ldr      w20, [x8, #0x58]
0x0017974C e103142a mov      w1, w20
0x00179750 38b10294 bl       #0x225c30
0x00179754 e80300aa mov      x8, x0
0x00179758 e9031faa mov      x9, xzr
0x0017975C aa3e0012 and      w10, w21, #0xffff
0x00179760 04000014 b        #0x179770
0x00179764 29110091 add      x9, x9, #4
0x00179768 3f0106f1 cmp      x9, #0x180
0x0017976C 40120054 b.eq     #0x1799b4
0x00179770 0b6b6978 ldrh     w11, [x24, x9]
0x00179774 7f010a6b cmp      w11, w10
0x00179778 61ffff54 b.ne     #0x179764
0x0017977C 0b03098b add      x11, x24, x9
0x00179780 6b054079 ldrh     w11, [x11, #2]
0x00179784 7f21346b cmp      w11, w20, uxth
0x00179788 e1feff54 b.ne     #0x179764
0x0017978C e0031f2a mov      w0, wzr
0x00179790 08f74736 tbz      w8, #8, #0x179670
0x00179794 2803088a and      x8, x25, x8
0x00179798 281100b5 cbnz     x8, #0x1799bc
0x0017979C b5ffff17 b        #0x179670
0x001797A0 942f0034 cbz      w20, #0x179d90
0x001797A4 08178f52 mov      w8, #0x78b8
0x001797A8 09278052 mov      w9, #0x138  << VERIFIED OPCODE
0x001797AC e84ea89b umaddl   x8, w23, w8, x19
0x001797B0 e003142a mov      w0, w20
0x001797B4 c822a99b umaddl   x8, w22, w9, x8
0x001797B8 015540b9 ldr      w1, [x8, #0x54]
0x001797BC 1db10294 bl       #0x225c30
0x001797C0 a8250090 adrp     x8, #0x62d000
0x001797C4 08710e91 add      x8, x8, #0x39c
0x001797C8 29008052 mov      w9, #1
0x001797CC 087977b8 ldr      w8, [x8, x23, lsl #2]
0x001797D0 3421c89a lsl      x20, x9, x8
0x001797D4 9f0200ea tst      x20, x0
0x001797D8 a0f4ff54 b.eq     #0x17966c
0x001797DC 08178f52 mov      w8, #0x78b8
0x001797E0 09278052 mov      w9, #0x138
```

## Pokédex adjacent 312-byte stride, later: main+0x1797A8

```asm
0x001796F8 0b03098b add      x11, x24, x9
0x001796FC 6b054079 ldrh     w11, [x11, #2]
0x00179700 7f21356b cmp      w11, w21, uxth
0x00179704 e1feff54 b.ne     #0x1796e0
0x00179708 20fb4736 tbz      w0, #8, #0x17966c
0x0017970C 29008052 mov      w9, #1
0x00179710 3921c89a lsl      x25, x9, x8
0x00179714 3f0300ea tst      x25, x0
0x00179718 a0faff54 b.eq     #0x17966c
0x0017971C 08178f52 mov      w8, #0x78b8
0x00179720 09278052 mov      w9, #0x138
0x00179724 e84ea89b umaddl   x8, w23, w8, x19
0x00179728 c822a99b umaddl   x8, w22, w9, x8
0x0017972C 153540b9 ldr      w21, [x8, #0x34]
0x00179730 15330034 cbz      w21, #0x179d90
0x00179734 08178f52 mov      w8, #0x78b8
0x00179738 09278052 mov      w9, #0x138
0x0017973C e84ea89b umaddl   x8, w23, w8, x19
0x00179740 e003152a mov      w0, w21
0x00179744 c822a99b umaddl   x8, w22, w9, x8
0x00179748 145940b9 ldr      w20, [x8, #0x58]
0x0017974C e103142a mov      w1, w20
0x00179750 38b10294 bl       #0x225c30
0x00179754 e80300aa mov      x8, x0
0x00179758 e9031faa mov      x9, xzr
0x0017975C aa3e0012 and      w10, w21, #0xffff
0x00179760 04000014 b        #0x179770
0x00179764 29110091 add      x9, x9, #4
0x00179768 3f0106f1 cmp      x9, #0x180
0x0017976C 40120054 b.eq     #0x1799b4
0x00179770 0b6b6978 ldrh     w11, [x24, x9]
0x00179774 7f010a6b cmp      w11, w10
0x00179778 61ffff54 b.ne     #0x179764
0x0017977C 0b03098b add      x11, x24, x9
0x00179780 6b054079 ldrh     w11, [x11, #2]
0x00179784 7f21346b cmp      w11, w20, uxth
0x00179788 e1feff54 b.ne     #0x179764
0x0017978C e0031f2a mov      w0, wzr
0x00179790 08f74736 tbz      w8, #8, #0x179670
0x00179794 2803088a and      x8, x25, x8
0x00179798 281100b5 cbnz     x8, #0x1799bc
0x0017979C b5ffff17 b        #0x179670
0x001797A0 942f0034 cbz      w20, #0x179d90
0x001797A4 08178f52 mov      w8, #0x78b8
0x001797A8 09278052 mov      w9, #0x138  << VERIFIED OPCODE
0x001797AC e84ea89b umaddl   x8, w23, w8, x19
0x001797B0 e003142a mov      w0, w20
0x001797B4 c822a99b umaddl   x8, w22, w9, x8
0x001797B8 015540b9 ldr      w1, [x8, #0x54]
0x001797BC 1db10294 bl       #0x225c30
0x001797C0 a8250090 adrp     x8, #0x62d000
0x001797C4 08710e91 add      x8, x8, #0x39c
0x001797C8 29008052 mov      w9, #1
0x001797CC 087977b8 ldr      w8, [x8, x23, lsl #2]
0x001797D0 3421c89a lsl      x20, x9, x8
0x001797D4 9f0200ea tst      x20, x0
0x001797D8 a0f4ff54 b.eq     #0x17966c
0x001797DC 08178f52 mov      w8, #0x78b8
0x001797E0 09278052 mov      w9, #0x138
0x001797E4 e84ea89b umaddl   x8, w23, w8, x19
0x001797E8 c822a99b umaddl   x8, w22, w9, x8
0x001797EC 003540b9 ldr      w0, [x8, #0x34]
0x001797F0 002d0034 cbz      w0, #0x179d90
0x001797F4 08178f52 mov      w8, #0x78b8
0x001797F8 09278052 mov      w9, #0x138
0x001797FC e84ea89b umaddl   x8, w23, w8, x19
0x00179800 c822a99b umaddl   x8, w22, w9, x8
0x00179804 015940b9 ldr      w1, [x8, #0x58]
0x00179808 0ab10294 bl       #0x225c30
0x0017980C 9f0200ea tst      x20, x0
0x00179810 e0f2ff54 b.eq     #0x17966c
0x00179814 08178f52 mov      w8, #0x78b8
0x00179818 09278052 mov      w9, #0x138
0x0017981C e84ea89b umaddl   x8, w23, w8, x19
0x00179820 c822a99b umaddl   x8, w22, w9, x8
0x00179824 003940b9 ldr      w0, [x8, #0x38]
0x00179828 402b0034 cbz      w0, #0x179d90
0x0017982C 08178f52 mov      w8, #0x78b8
0x00179830 09278052 mov      w9, #0x138
0x00179834 e84ea89b umaddl   x8, w23, w8, x19
0x00179838 c822a99b umaddl   x8, w22, w9, x8
0x0017983C 015d40b9 ldr      w1, [x8, #0x5c]
0x00179840 fcb00294 bl       #0x225c30
0x00179844 9f0200ea tst      x20, x0
0x00179848 20f1ff54 b.eq     #0x17966c
0x0017984C 08178f52 mov      w8, #0x78b8
0x00179850 09278052 mov      w9, #0x138
0x00179854 e84ea89b umaddl   x8, w23, w8, x19
0x00179858 c822a99b umaddl   x8, w22, w9, x8
0x0017985C 003d40b9 ldr      w0, [x8, #0x3c]
0x00179860 80290034 cbz      w0, #0x179d90
0x00179864 08178f52 mov      w8, #0x78b8
0x00179868 09278052 mov      w9, #0x138
0x0017986C e84ea89b umaddl   x8, w23, w8, x19
0x00179870 c822a99b umaddl   x8, w22, w9, x8
0x00179874 016140b9 ldr      w1, [x8, #0x60]
0x00179878 eeb00294 bl       #0x225c30
0x0017987C 9f0200ea tst      x20, x0
0x00179880 60efff54 b.eq     #0x17966c
0x00179884 08178f52 mov      w8, #0x78b8
0x00179888 09278052 mov      w9, #0x138
0x0017988C e84ea89b umaddl   x8, w23, w8, x19
0x00179890 c822a99b umaddl   x8, w22, w9, x8
0x00179894 004140b9 ldr      w0, [x8, #0x40]
0x00179898 c0270034 cbz      w0, #0x179d90
0x0017989C 08178f52 mov      w8, #0x78b8
0x001798A0 09278052 mov      w9, #0x138
0x001798A4 e84ea89b umaddl   x8, w23, w8, x19
0x001798A8 c822a99b umaddl   x8, w22, w9, x8
0x001798AC 016540b9 ldr      w1, [x8, #0x64]
0x001798B0 e0b00294 bl       #0x225c30
0x001798B4 9f0200ea tst      x20, x0
0x001798B8 a0edff54 b.eq     #0x17966c
0x001798BC 08178f52 mov      w8, #0x78b8
0x001798C0 09278052 mov      w9, #0x138
0x001798C4 e84ea89b umaddl   x8, w23, w8, x19
0x001798C8 c822a99b umaddl   x8, w22, w9, x8
0x001798CC 004540b9 ldr      w0, [x8, #0x44]
0x001798D0 00260034 cbz      w0, #0x179d90
0x001798D4 08178f52 mov      w8, #0x78b8
0x001798D8 09278052 mov      w9, #0x138
0x001798DC e84ea89b umaddl   x8, w23, w8, x19
0x001798E0 c822a99b umaddl   x8, w22, w9, x8
0x001798E4 016940b9 ldr      w1, [x8, #0x68]
0x001798E8 d2b00294 bl       #0x225c30
0x001798EC 9f0200ea tst      x20, x0
0x001798F0 e0ebff54 b.eq     #0x17966c
0x001798F4 08178f52 mov      w8, #0x78b8
0x001798F8 09278052 mov      w9, #0x138
0x001798FC e84ea89b umaddl   x8, w23, w8, x19
0x00179900 c822a99b umaddl   x8, w22, w9, x8
0x00179904 004940b9 ldr      w0, [x8, #0x48]
0x00179908 40240034 cbz      w0, #0x179d90
0x0017990C 08178f52 mov      w8, #0x78b8
0x00179910 09278052 mov      w9, #0x138
0x00179914 e84ea89b umaddl   x8, w23, w8, x19
0x00179918 c822a99b umaddl   x8, w22, w9, x8
0x0017991C 016d40b9 ldr      w1, [x8, #0x6c]
0x00179920 c4b00294 bl       #0x225c30
0x00179924 9f0200ea tst      x20, x0
0x00179928 20eaff54 b.eq     #0x17966c
0x0017992C 08178f52 mov      w8, #0x78b8
0x00179930 09278052 mov      w9, #0x138
0x00179934 e84ea89b umaddl   x8, w23, w8, x19
0x00179938 c822a99b umaddl   x8, w22, w9, x8
0x0017993C 004d40b9 ldr      w0, [x8, #0x4c]
0x00179940 80220034 cbz      w0, #0x179d90
0x00179944 08178f52 mov      w8, #0x78b8
0x00179948 09278052 mov      w9, #0x138
0x0017994C e84ea89b umaddl   x8, w23, w8, x19
0x00179950 c822a99b umaddl   x8, w22, w9, x8
0x00179954 017140b9 ldr      w1, [x8, #0x70]
0x00179958 b6b00294 bl       #0x225c30
0x0017995C 9f0200ea tst      x20, x0
0x00179960 60e8ff54 b.eq     #0x17966c
0x00179964 08178f52 mov      w8, #0x78b8
0x00179968 09278052 mov      w9, #0x138
0x0017996C e84ea89b umaddl   x8, w23, w8, x19
0x00179970 c822a99b umaddl   x8, w22, w9, x8
0x00179974 005140b9 ldr      w0, [x8, #0x50]
0x00179978 c0200034 cbz      w0, #0x179d90
0x0017997C 08178f52 mov      w8, #0x78b8
0x00179980 09278052 mov      w9, #0x138
0x00179984 e84ea89b umaddl   x8, w23, w8, x19
0x00179988 c822a99b umaddl   x8, w22, w9, x8
0x0017998C 017540b9 ldr      w1, [x8, #0x74]
0x00179990 a8b00294 bl       #0x225c30
0x00179994 9f0200ea tst      x20, x0
0x00179998 e0079f1a cset     w0, ne
0x0017999C f44f44a9 ldp      x20, x19, [sp, #0x40]
0x001799A0 f90b40f9 ldr      x25, [sp, #0x10]
0x001799A4 f65743a9 ldp      x22, x21, [sp, #0x30]
0x001799A8 f85f42a9 ldp      x24, x23, [sp, #0x20]
0x001799AC fd7bc5a8 ldp      x29, x30, [sp], #0x50
0x001799B0 c0035fd6 ret      
0x001799B4 3f0308ea tst      x25, x8
0x001799B8 a0e5ff54 b.eq     #0x17966c
0x001799BC 08178f52 mov      w8, #0x78b8
0x001799C0 09278052 mov      w9, #0x138
0x001799C4 e84ea89b umaddl   x8, w23, w8, x19
0x001799C8 c822a99b umaddl   x8, w22, w9, x8
0x001799CC 153940b9 ldr      w21, [x8, #0x38]
0x001799D0 151e0034 cbz      w21, #0x179d90
0x001799D4 08178f52 mov      w8, #0x78b8
```

## Pokédex adjacent 312-byte stride, exit: main+0x179E04

```asm
0x00179C94 09278052 mov      w9, #0x138
0x00179C98 e84ea89b umaddl   x8, w23, w8, x19
0x00179C9C e003152a mov      w0, w21
0x00179CA0 c822a99b umaddl   x8, w22, w9, x8
0x00179CA4 147140b9 ldr      w20, [x8, #0x70]
0x00179CA8 e103142a mov      w1, w20
0x00179CAC e1af0294 bl       #0x225c30
0x00179CB0 e80300aa mov      x8, x0
0x00179CB4 e9031faa mov      x9, xzr
0x00179CB8 aa3e0012 and      w10, w21, #0xffff
0x00179CBC 04000014 b        #0x179ccc
0x00179CC0 29110091 add      x9, x9, #4
0x00179CC4 3f0106f1 cmp      x9, #0x180
0x00179CC8 a0010054 b.eq     #0x179cfc
0x00179CCC 0b6b6978 ldrh     w11, [x24, x9]
0x00179CD0 7f010a6b cmp      w11, w10
0x00179CD4 61ffff54 b.ne     #0x179cc0
0x00179CD8 0b03098b add      x11, x24, x9
0x00179CDC 6b054079 ldrh     w11, [x11, #2]
0x00179CE0 7f21346b cmp      w11, w20, uxth
0x00179CE4 e1feff54 b.ne     #0x179cc0
0x00179CE8 e0031f2a mov      w0, wzr
0x00179CEC 28cc4736 tbz      w8, #8, #0x179670
0x00179CF0 2803088a and      x8, x25, x8
0x00179CF4 880000b5 cbnz     x8, #0x179d04
0x00179CF8 5efeff17 b        #0x179670
0x00179CFC 3f0308ea tst      x25, x8
0x00179D00 60cbff54 b.eq     #0x17966c
0x00179D04 08178f52 mov      w8, #0x78b8
0x00179D08 09278052 mov      w9, #0x138
0x00179D0C e84ea89b umaddl   x8, w23, w8, x19
0x00179D10 c822a99b umaddl   x8, w22, w9, x8
0x00179D14 145140b9 ldr      w20, [x8, #0x50]
0x00179D18 d4030034 cbz      w20, #0x179d90
0x00179D1C 08178f52 mov      w8, #0x78b8
0x00179D20 09278052 mov      w9, #0x138
0x00179D24 e84ea89b umaddl   x8, w23, w8, x19
0x00179D28 e003142a mov      w0, w20
0x00179D2C c822a99b umaddl   x8, w22, w9, x8
0x00179D30 137540b9 ldr      w19, [x8, #0x74]
0x00179D34 e103132a mov      w1, w19
0x00179D38 beaf0294 bl       #0x225c30
0x00179D3C e80300aa mov      x8, x0
0x00179D40 e9031faa mov      x9, xzr
0x00179D44 8a3e0012 and      w10, w20, #0xffff
0x00179D48 04000014 b        #0x179d58
0x00179D4C 29110091 add      x9, x9, #4
0x00179D50 3f0106f1 cmp      x9, #0x180
0x00179D54 a0010054 b.eq     #0x179d88
0x00179D58 0b6b6978 ldrh     w11, [x24, x9]
0x00179D5C 7f010a6b cmp      w11, w10
0x00179D60 61ffff54 b.ne     #0x179d4c
0x00179D64 0b03098b add      x11, x24, x9
0x00179D68 6b054079 ldrh     w11, [x11, #2]
0x00179D6C 7f21336b cmp      w11, w19, uxth
0x00179D70 e1feff54 b.ne     #0x179d4c
0x00179D74 e0031f2a mov      w0, wzr
0x00179D78 c8c74736 tbz      w8, #8, #0x179670
0x00179D7C 2803088a and      x8, x25, x8
0x00179D80 880000b5 cbnz     x8, #0x179d90
0x00179D84 3bfeff17 b        #0x179670
0x00179D88 3f0308ea tst      x25, x8
0x00179D8C 00c7ff54 b.eq     #0x17966c
0x00179D90 20008052 mov      w0, #1
0x00179D94 f44f44a9 ldp      x20, x19, [sp, #0x40]
0x00179D98 f90b40f9 ldr      x25, [sp, #0x10]
0x00179D9C f65743a9 ldp      x22, x21, [sp, #0x30]
0x00179DA0 f85f42a9 ldp      x24, x23, [sp, #0x20]
0x00179DA4 fd7bc5a8 ldp      x29, x30, [sp], #0x50
0x00179DA8 c0035fd6 ret      
0x00179DAC 00000000 udf      #0
0x00179DB0 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
0x00179DB4 fa6701a9 stp      x26, x25, [sp, #0x10]
0x00179DB8 f85f02a9 stp      x24, x23, [sp, #0x20]
0x00179DBC f65703a9 stp      x22, x21, [sp, #0x30]
0x00179DC0 f44f04a9 stp      x20, x19, [sp, #0x40]
0x00179DC4 fd030091 mov      x29, sp
0x00179DC8 08178f52 mov      w8, #0x78b8
0x00179DCC f303012a mov      w19, w1
0x00179DD0 2800a89b umaddl   x8, w1, w8, x0
0x00179DD4 f40300aa mov      x20, x0
0x00179DD8 f9031f2a mov      w25, wzr
0x00179DDC f7031f2a mov      w23, wzr
0x00179DE0 18c10091 add      x24, x8, #0x30
0x00179DE4 f6031faa mov      x22, xzr
0x00179DE8 f503192a mov      w21, w25
0x00179DEC fa0318aa mov      x26, x24
0x00179DF0 f9031f2a mov      w25, wzr
0x00179DF4 07000014 b        #0x179e10
0x00179DF8 1f2003d5 nop      
0x00179DFC 1f2003d5 nop      
0x00179E00 d6060091 add      x22, x22, #1
0x00179E04 5ae30491 add      x26, x26, #0x138
0x00179E08 df8e01f1 cmp      x22, #0x63
0x00179E0C a0010054 b.eq     #0x179e40
0x00179E10 480340b9 ldr      w8, [x26]
0x00179E14 68010034 cbz      w8, #0x179e40
0x00179E18 48835fb8 ldur     w8, [x26, #-8]
0x00179E1C bf02086b cmp      w21, w8
0x00179E20 03ffff54 b.lo     #0x179e00
0x00179E24 e00314aa mov      x0, x20
0x00179E28 e103132a mov      w1, w19
0x00179E2C e203162a mov      w2, w22
0x00179E30 f8fdff97 bl       #0x179610
0x00179E34 08000012 and      w8, w0, #1
0x00179E38 3903080b add      w25, w25, w8
0x00179E3C f1ffff17 b        #0x179e00
0x00179E40 bf02196b cmp      w21, w25
0x00179E44 a2000054 b.hs     #0x179e58
0x00179E48 ff8a0171 cmp      w23, #0x62
0x00179E4C f7060011 add      w23, w23, #1
0x00179E50 f503192a mov      w21, w25
0x00179E54 89fcff54 b.ls     #0x179de4
0x00179E58 e003152a mov      w0, w21
0x00179E5C f44f44a9 ldp      x20, x19, [sp, #0x40]
0x00179E60 f65743a9 ldp      x22, x21, [sp, #0x30]
0x00179E64 f85f42a9 ldp      x24, x23, [sp, #0x20]
0x00179E68 fa6741a9 ldp      x26, x25, [sp, #0x10]
0x00179E6C fd7bc5a8 ldp      x29, x30, [sp], #0x50
0x00179E70 c0035fd6 ret      
0x00179E74 00000000 udf      #0
0x00179E78 00000000 udf      #0
0x00179E7C 00000000 udf      #0
0x00179E80 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00179E84 f65701a9 stp      x22, x21, [sp, #0x10]
0x00179E88 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00179E8C fd030091 mov      x29, sp
0x00179E90 08484291 add      x8, x0, #0x92, lsl #12
0x00179E94 09ec4191 add      x9, x0, #0x7b, lsl #12
0x00179E98 f30300aa mov      x19, x0
0x00179E9C 14212591 add      x20, x8, #0x948
0x00179EA0 08a44191 add      x8, x0, #0x69, lsl #12
0x00179EA4 35610891 add      x21, x9, #0x218
0x00179EA8 16612391 add      x22, x8, #0x8d8
0x00179EAC c4adfa97 bl       #0x255bc
0x00179EB0 7f3200f9 str      xzr, [x19, #0x60]
0x00179EB4 483100b0 adrp     x8, #0x7a2000
0x00179EB8 89018052 mov      w9, #0xc
0x00179EBC 08d540f9 ldr      x8, [x8, #0x1a8]
0x00179EC0 696a00b9 str      w9, [x19, #0x68]
0x00179EC4 69c20491 add      x9, x19, #0x130
0x00179EC8 7f9a00f9 str      xzr, [x19, #0x130]
0x00179ECC 6af60491 add      x10, x19, #0x13d
0x00179ED0 3f5100f8 stur     xzr, [x9, #5]
0x00179ED4 09410091 add      x9, x8, #0x10
0x00179ED8 690200f9 str      x9, [x19]
0x00179EDC 09610191 add      x9, x8, #0x58
0x00179EE0 08610291 add      x8, x8, #0x98
0x00179EE4 69a204a9 stp      x9, x8, [x19, #0x48]
0x00179EE8 48428252 mov      w8, #0x1212
0x00179EEC 890180d2 mov      x9, #0xc
0x00179EF0 48010079 strh     w8, [x10]
0x00179EF4 480180d2 mov      x8, #0xa
0x00179EF8 8902c0f2 movk     x9, #0x14, lsl #32
0x00179EFC c801c0f2 movk     x8, #0xe, lsl #32
0x00179F00 682614a9 stp      x8, x9, [x19, #0x140]
0x00179F04 49008052 mov      w9, #2
0x00179F08 68620591 add      x8, x19, #0x158
0x00179F0C 695201b9 str      w9, [x19, #0x150]
0x00179F10 1f010079 strh     wzr, [x8]
0x00179F14 1f0500f9 str      xzr, [x8, #8]
0x00179F18 1f410039 strb     wzr, [x8, #0x10]
0x00179F1C 1f310079 strh     wzr, [x8, #0x18]
0x00179F20 1f1100f9 str      xzr, [x8, #0x20]
0x00179F24 1fa10039 strb     wzr, [x8, #0x28]
0x00179F28 1f610079 strh     wzr, [x8, #0x30]
0x00179F2C 1f1d00f9 str      xzr, [x8, #0x38]
0x00179F30 1f010139 strb     wzr, [x8, #0x40]
0x00179F34 1f910079 strh     wzr, [x8, #0x48]
0x00179F38 1f2900f9 str      xzr, [x8, #0x50]
0x00179F3C 1f610139 strb     wzr, [x8, #0x58]
0x00179F40 08810191 add      x8, x8, #0x60
0x00179F44 1f0116eb cmp      x8, x22
0x00179F48 41feff54 b.ne     #0x179f10
0x00179F4C 1f2003d5 nop      
0x00179F50 df0200b9 str      wzr, [x22]
0x00179F54 df1a00b9 str      wzr, [x22, #0x18]
0x00179F58 df3200b9 str      wzr, [x22, #0x30]
0x00179F5C df4a00b9 str      wzr, [x22, #0x48]
0x00179F60 df6200b9 str      wzr, [x22, #0x60]
0x00179F64 df7a00b9 str      wzr, [x22, #0x78]
0x00179F68 dffe00a9 stp      xzr, xzr, [x22, #8]
0x00179F6C df7e02a9 stp      xzr, xzr, [x22, #0x20]
0x00179F70 dffe03a9 stp      xzr, xzr, [x22, #0x38]
0x00179F74 df7e05a9 stp      xzr, xzr, [x22, #0x50]
0x00179F78 dffe06a9 stp      xzr, xzr, [x22, #0x68]
0x00179F7C df7e08a9 stp      xzr, xzr, [x22, #0x80]
0x00179F80 d6420291 add      x22, x22, #0x90
0x00179F84 df0215eb cmp      x22, x21
0x00179F88 41feff54 b.ne     #0x179f50
0x00179F8C 691a4291 add      x9, x19, #0x86, lsl #12
0x00179F90 a8820091 add      x8, x21, #0x20
0x00179F94 bf0200b9 str      wzr, [x21]
0x00179F98 20e13691 add      x0, x9, #0xdb8
0x00179F9C bf0600f9 str      xzr, [x21, #8]
0x00179FA0 bf420039 strb     wzr, [x21, #0x10]
0x00179FA4 bf0e00f9 str      xzr, [x21, #0x18]
0x00179FA8 1f2003d5 nop      
0x00179FAC 1f2003d5 nop      
0x00179FB0 1f0100b9 str      wzr, [x8]
```

## item.dat path and forwarded resource load: main+0x502104

```asm
0x0050206C a1d10394 bl       #0x5f66f0
0x00502070 e0030191 add      x0, sp, #0x40
0x00502074 e80313aa mov      x8, x19
0x00502078 ffff0439 strb     wzr, [sp, #0x13f]
0x0050207C 30000094 bl       #0x50213c
0x00502080 f44f56a9 ldp      x20, x19, [sp, #0x160]
0x00502084 fcab40f9 ldr      x28, [sp, #0x150]
0x00502088 fd7b54a9 ldp      x29, x30, [sp, #0x140]
0x0050208C ffc30591 add      sp, sp, #0x170
0x00502090 c0035fd6 ret      
0x00502094 00000000 udf      #0
0x00502098 00000000 udf      #0
0x0050209C 00000000 udf      #0
0x005020A0 ffc304d1 sub      sp, sp, #0x130
0x005020A4 fd7b10a9 stp      x29, x30, [sp, #0x100]
0x005020A8 fc8b00f9 str      x28, [sp, #0x110]
0x005020AC f44f12a9 stp      x20, x19, [sp, #0x120]
0x005020B0 fd030491 add      x29, sp, #0x100
0x005020B4 f30308aa mov      x19, x8
0x005020B8 26020094 bl       #0x502950
0x005020BC 140840f9 ldr      x20, [x0, #0x10]
0x005020C0 e00314aa mov      x0, x20
0x005020C4 6bd00394 bl       #0x5f6270
0x005020C8 680800b0 adrp     x8, #0x60f000
0x005020CC 080d1a91 add      x8, x8, #0x683
0x005020D0 000100b4 cbz      x0, #0x5020f0
0x005020D4 0900148b add      x9, x0, x20
0x005020D8 6a080090 adrp     x10, #0x60e000
0x005020DC 4ae13f91 add      x10, x10, #0xff8
0x005020E0 29f15f38 ldurb    w9, [x9, #-1]
0x005020E4 3fbd0071 cmp      w9, #0x2f
0x005020E8 04018a9a csel     x4, x8, x10, eq
0x005020EC 02000014 b        #0x5020f4
0x005020F0 e40308aa mov      x4, x8
0x005020F4 9f0200f1 cmp      x20, #0
0x005020F8 c20800d0 adrp     x2, #0x61c000
0x005020FC 42a01391 add      x2, x2, #0x4e8
0x00502100 0301949a csel     x3, x8, x20, eq
0x00502104 c50800f0 adrp     x5, #0x61d000  << VERIFIED OPCODE
0x00502108 a5d03a91 add      x5, x5, #0xeb4
0x0050210C e0030091 mov      x0, sp
0x00502110 e11f8052 mov      w1, #0xff
0x00502114 77d10394 bl       #0x5f66f0
0x00502118 e0030091 mov      x0, sp
0x0050211C e80313aa mov      x8, x19
0x00502120 ffff0339 strb     wzr, [sp, #0xff]
0x00502124 06000094 bl       #0x50213c
0x00502128 f44f52a9 ldp      x20, x19, [sp, #0x120]
0x0050212C fc8b40f9 ldr      x28, [sp, #0x110]
0x00502130 fd7b50a9 ldp      x29, x30, [sp, #0x100]
0x00502134 ffc30491 add      sp, sp, #0x130
0x00502138 c0035fd6 ret      
0x0050213C fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00502140 f50b00f9 str      x21, [sp, #0x10]
0x00502144 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00502148 fd030091 mov      x29, sp
0x0050214C f51400b0 adrp     x21, #0x79f000
0x00502150 f40300aa mov      x20, x0
0x00502154 b5e242f9 ldr      x21, [x21, #0x5c0]
0x00502158 f30308aa mov      x19, x8
0x0050215C e00315aa mov      x0, x21
0x00502160 44d00394 bl       #0x5f6270
0x00502164 e20300aa mov      x2, x0
0x00502168 e00314aa mov      x0, x20
0x0050216C e10315aa mov      x1, x21
0x00502170 44d00394 bl       #0x5f6280
0x00502174 60020034 cbz      w0, #0x5021c0
0x00502178 e01400b0 adrp     x0, #0x79f000
0x0050217C a8630091 add      x8, x29, #0x18
0x00502180 00e042f9 ldr      x0, [x0, #0x5c0]
0x00502184 e10314aa mov      x1, x20
0x00502188 39000094 bl       #0x50226c
0x0050218C a1630091 add      x1, x29, #0x18
0x00502190 e00313aa mov      x0, x19
0x00502194 e2031f2a mov      w2, wzr
0x00502198 006cff97 bl       #0x4dd198
0x0050219C a00f40f9 ldr      x0, [x29, #0x18]
0x005021A0 800000b4 cbz      x0, #0x5021b0
0x005021A4 088c44f8 ldr      x8, [x0, #0x48]!
0x005021A8 080d40f9 ldr      x8, [x8, #0x18]
0x005021AC 00013fd6 blr      x8
0x005021B0 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x005021B4 f50b40f9 ldr      x21, [sp, #0x10]
0x005021B8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x005021BC c0035fd6 ret      
0x005021C0 e00313aa mov      x0, x19
0x005021C4 e10314aa mov      x1, x20
0x005021C8 831fec97 bl       #0x9fd4
0x005021CC 740240f9 ldr      x20, [x19]
0x005021D0 e81400b0 adrp     x8, #0x79f000
0x005021D4 89620191 add      x9, x20, #0x58
0x005021D8 08e542f9 ldr      x8, [x8, #0x5c8]
0x005021DC 9f0200f1 cmp      x20, #0
0x005021E0 8a820191 add      x10, x20, #0x60
0x005021E4 0801899a csel     x8, x8, x9, eq
0x005021E8 e91400b0 adrp     x9, #0x79f000
0x005021EC 080140f9 ldr      x8, [x8]
0x005021F0 29e942f9 ldr      x9, [x9, #0x5d0]
0x005021F4 29018a9a csel     x9, x9, x10, eq
0x005021F8 290140f9 ldr      x9, [x9]
0x005021FC 940200b4 cbz      x20, #0x50224c
0x00502200 8a3640f9 ldr      x10, [x20, #0x68]
0x00502204 68a600a9 stp      x8, x9, [x19, #8]
0x00502208 e00314aa mov      x0, x20
0x0050220C 6afe01a9 stp      x10, xzr, [x19, #0x18]
0x00502210 088c44f8 ldr      x8, [x0, #0x48]!
0x00502214 080940f9 ldr      x8, [x8, #0x10]
0x00502218 00013fd6 blr      x8
0x0050221C 601240f9 ldr      x0, [x19, #0x20]
0x00502220 741200f9 str      x20, [x19, #0x20]
0x00502224 800000b4 cbz      x0, #0x502234
0x00502228 088c44f8 ldr      x8, [x0, #0x48]!
0x0050222C 080d40f9 ldr      x8, [x8, #0x18]
0x00502230 00013fd6 blr      x8
0x00502234 7f2a00b9 str      wzr, [x19, #0x28]
0x00502238 e00313aa mov      x0, x19
```

## item indirect dispatch and data source: main+0x50213C

```asm
0x0050210C e0030091 mov      x0, sp
0x00502110 e11f8052 mov      w1, #0xff
0x00502114 77d10394 bl       #0x5f66f0
0x00502118 e0030091 mov      x0, sp
0x0050211C e80313aa mov      x8, x19
0x00502120 ffff0339 strb     wzr, [sp, #0xff]
0x00502124 06000094 bl       #0x50213c
0x00502128 f44f52a9 ldp      x20, x19, [sp, #0x120]
0x0050212C fc8b40f9 ldr      x28, [sp, #0x110]
0x00502130 fd7b50a9 ldp      x29, x30, [sp, #0x100]
0x00502134 ffc30491 add      sp, sp, #0x130
0x00502138 c0035fd6 ret      
0x0050213C fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00502140 f50b00f9 str      x21, [sp, #0x10]
0x00502144 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00502148 fd030091 mov      x29, sp
0x0050214C f51400b0 adrp     x21, #0x79f000
0x00502150 f40300aa mov      x20, x0
0x00502154 b5e242f9 ldr      x21, [x21, #0x5c0]
0x00502158 f30308aa mov      x19, x8
0x0050215C e00315aa mov      x0, x21
0x00502160 44d00394 bl       #0x5f6270
0x00502164 e20300aa mov      x2, x0
0x00502168 e00314aa mov      x0, x20
0x0050216C e10315aa mov      x1, x21
0x00502170 44d00394 bl       #0x5f6280
0x00502174 60020034 cbz      w0, #0x5021c0
0x00502178 e01400b0 adrp     x0, #0x79f000
0x0050217C a8630091 add      x8, x29, #0x18
0x00502180 00e042f9 ldr      x0, [x0, #0x5c0]
0x00502184 e10314aa mov      x1, x20
0x00502188 39000094 bl       #0x50226c
0x0050218C a1630091 add      x1, x29, #0x18
0x00502190 e00313aa mov      x0, x19
0x00502194 e2031f2a mov      w2, wzr
0x00502198 006cff97 bl       #0x4dd198
0x0050219C a00f40f9 ldr      x0, [x29, #0x18]
0x005021A0 800000b4 cbz      x0, #0x5021b0
0x005021A4 088c44f8 ldr      x8, [x0, #0x48]!
0x005021A8 080d40f9 ldr      x8, [x8, #0x18]
0x005021AC 00013fd6 blr      x8
0x005021B0 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x005021B4 f50b40f9 ldr      x21, [sp, #0x10]
0x005021B8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x005021BC c0035fd6 ret      
0x005021C0 e00313aa mov      x0, x19
0x005021C4 e10314aa mov      x1, x20
0x005021C8 831fec97 bl       #0x9fd4
0x005021CC 740240f9 ldr      x20, [x19]
0x005021D0 e81400b0 adrp     x8, #0x79f000
0x005021D4 89620191 add      x9, x20, #0x58
0x005021D8 08e542f9 ldr      x8, [x8, #0x5c8]
0x005021DC 9f0200f1 cmp      x20, #0
0x005021E0 8a820191 add      x10, x20, #0x60
0x005021E4 0801899a csel     x8, x8, x9, eq
0x005021E8 e91400b0 adrp     x9, #0x79f000
0x005021EC 080140f9 ldr      x8, [x8]
0x005021F0 29e942f9 ldr      x9, [x9, #0x5d0]
0x005021F4 29018a9a csel     x9, x9, x10, eq
0x005021F8 290140f9 ldr      x9, [x9]
0x005021FC 940200b4 cbz      x20, #0x50224c
0x00502200 8a3640f9 ldr      x10, [x20, #0x68]
0x00502204 68a600a9 stp      x8, x9, [x19, #8]
0x00502208 e00314aa mov      x0, x20
0x0050220C 6afe01a9 stp      x10, xzr, [x19, #0x18]
0x00502210 088c44f8 ldr      x8, [x0, #0x48]!
0x00502214 080940f9 ldr      x8, [x8, #0x10]
0x00502218 00013fd6 blr      x8
0x0050221C 601240f9 ldr      x0, [x19, #0x20]
0x00502220 741200f9 str      x20, [x19, #0x20]
0x00502224 800000b4 cbz      x0, #0x502234
0x00502228 088c44f8 ldr      x8, [x0, #0x48]!
0x0050222C 080d40f9 ldr      x8, [x8, #0x18]
0x00502230 00013fd6 blr      x8
0x00502234 7f2a00b9 str      wzr, [x19, #0x28]
0x00502238 e00313aa mov      x0, x19
0x0050223C f50b40f9 ldr      x21, [sp, #0x10]
0x00502240 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00502244 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00502248 122cec17 b        #0xd290
0x0050224C 68a600a9 stp      x8, x9, [x19, #8]
0x00502250 7ffe01a9 stp      xzr, xzr, [x19, #0x18]
0x00502254 7f2a00b9 str      wzr, [x19, #0x28]
0x00502258 e00313aa mov      x0, x19
0x0050225C f50b40f9 ldr      x21, [sp, #0x10]
0x00502260 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00502264 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00502268 0a2cec17 b        #0xd290
0x0050226C fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00502270 f65701a9 stp      x22, x21, [sp, #0x10]
0x00502274 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00502278 fd030091 mov      x29, sp
0x0050227C f30301aa mov      x19, x1
0x00502280 f40300aa mov      x20, x0
0x00502284 f50308aa mov      x21, x8
0x00502288 facf0394 bl       #0x5f6270
0x0050228C f60300aa mov      x22, x0
0x00502290 e00313aa mov      x0, x19
0x00502294 f7cf0394 bl       #0x5f6270
0x00502298 c802008b add      x8, x22, x0
0x0050229C e9030091 mov      x9, sp
0x005022A0 08410091 add      x8, x8, #0x10
0x005022A4 08ed7c92 and      x8, x8, #0xfffffffffffffff0
0x005022A8 360108cb sub      x22, x9, x8
0x005022AC df020091 mov      sp, x22
0x005022B0 e00316aa mov      x0, x22
0x005022B4 e10314aa mov      x1, x20
0x005022B8 df020039 strb     wzr, [x22]
0x005022BC 0dd00394 bl       #0x5f62f0
0x005022C0 e10313aa mov      x1, x19
0x005022C4 0bd00394 bl       #0x5f62f0
0x005022C8 e00315aa mov      x0, x21
0x005022CC e10316aa mov      x1, x22
0x005022D0 411fec97 bl       #0x9fd4
0x005022D4 bf030091 mov      sp, x29
0x005022D8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x005022DC f65741a9 ldp      x22, x21, [sp, #0x10]
0x005022E0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x005022E4 c0035fd6 ret      
0x005022E8 00000000 udf      #0
0x005022EC 00000000 udf      #0
0x005022F0 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
0x005022F4 f85f01a9 stp      x24, x23, [sp, #0x10]
0x005022F8 f65702a9 stp      x22, x21, [sp, #0x20]
0x005022FC f44f03a9 stp      x20, x19, [sp, #0x30]
0x00502300 fd030091 mov      x29, sp
0x00502304 130040f9 ldr      x19, [x0]
0x00502308 1f0000f9 str      xzr, [x0]
0x0050230C 130500b4 cbz      x19, #0x5023ac
0x00502310 b6c884d2 mov      x22, #0x2645
0x00502314 5684b0f2 movk     x22, #0x8422, lsl #16
0x00502318 f40300aa mov      x20, x0
0x0050231C 15488052 mov      w21, #0x240
0x00502320 969cd3f2 movk     x22, #0x9ce4, lsl #32
0x00502324 567ef9f2 movk     x22, #0xcbf2, lsl #48
0x00502328 770800b0 adrp     x23, #0x60f000
0x0050232C f70e1a91 add      x23, x23, #0x683
0x00502330 05000014 b        #0x502344
0x00502334 b5c200f1 subs     x21, x21, #0x30
0x00502338 1f3b00f9 str      xzr, [x24, #0x70]
0x0050233C 1f7b00b9 str      wzr, [x24, #0x78]
0x00502340 20020054 b.eq     #0x502384
0x00502344 7802158b add      x24, x19, x21
0x00502348 083740f9 ldr      x8, [x24, #0x68]
0x0050234C c80000b4 cbz      x8, #0x502364
0x00502350 002b40f9 ldr      x0, [x24, #0x50]
0x00502354 800000b4 cbz      x0, #0x502364
0x00502358 088c44f8 ldr      x8, [x0, #0x48]!
0x0050235C 080d40f9 ldr      x8, [x8, #0x18]
0x00502360 00013fd6 blr      x8
0x00502364 003b40f9 ldr      x0, [x24, #0x70]
0x00502368 1f5b05a9 stp      xzr, x22, [x24, #0x50]
0x0050236C 177f06a9 stp      x23, xzr, [x24, #0x60]
0x00502370 20feffb4 cbz      x0, #0x502334
0x00502374 088c44f8 ldr      x8, [x0, #0x48]!
0x00502378 080d40f9 ldr      x8, [x8, #0x18]
0x0050237C 00013fd6 blr      x8
0x00502380 edffff17 b        #0x502334
0x00502384 808a40a9 ldp      x0, x2, [x20, #8]
0x00502388 e10313aa mov      x1, x19
```

## item hash-index record reader: main+0x69850

```asm
0x00069800 d4a640f9 ldr      x20, [x22, #0x148]
0x00069804 f40f00f9 str      x20, [sp, #0x18]
0x00069808 140500b4 cbz      x20, #0x698a8
0x0006980C f50314aa mov      x21, x20
0x00069810 a88e44f8 ldr      x8, [x21, #0x48]!
0x00069814 e00315aa mov      x0, x21
0x00069818 080940f9 ldr      x8, [x8, #0x10]
0x0006981C 00013fd6 blr      x8
0x00069820 e00314aa mov      x0, x20
0x00069824 6fbd1194 bl       #0x4d8de0
0x00069828 a80240f9 ldr      x8, [x21]
0x0006982C e00315aa mov      x0, x21
0x00069830 080d40f9 ldr      x8, [x8, #0x18]
0x00069834 00013fd6 blr      x8
0x00069838 e00f40f9 ldr      x0, [sp, #0x18]
0x0006983C 14c840f9 ldr      x20, [x0, #0x190]
0x00069840 880240b9 ldr      w8, [x20]
0x00069844 a8030034 cbz      w8, #0x698b8
0x00069848 f5031faa mov      x21, xzr
0x0006984C 73a20291 add      x19, x19, #0xa8
0x00069850 97320091 add      x23, x20, #0xc
0x00069854 e8825ff8 ldur     x8, [x23, #-8]
0x00069858 a12300d1 sub      x1, x29, #8
0x0006985C a22300d1 sub      x2, x29, #8
0x00069860 e3330091 add      x3, sp, #0xc
0x00069864 e00313aa mov      x0, x19
0x00069868 c8a600f9 str      x8, [x22, #0x148]
0x0006986C e80641f8 ldr      x8, [x23], #0x10  << VERIFIED OPCODE
0x00069870 e81b0079 strh     w8, [sp, #0xc]
0x00069874 87010094 bl       #0x69e90
0x00069878 880240b9 ldr      w8, [x20]
0x0006987C b5060091 add      x21, x21, #1
0x00069880 bf0208eb cmp      x21, x8
0x00069884 83feff54 b.lo     #0x69854
0x00069888 e83700d0 adrp     x8, #0x767000
0x0006988C 08212591 add      x8, x8, #0x948
0x00069890 e00f40f9 ldr      x0, [sp, #0x18]
0x00069894 08410091 add      x8, x8, #0x10
0x00069898 e80b00f9 str      x8, [sp, #0x10]
0x0006989C 600100b5 cbnz     x0, #0x698c8
0x000698A0 ff0f00f9 str      xzr, [sp, #0x18]
0x000698A4 11000014 b        #0x698e8
0x000698A8 e0031faa mov      x0, xzr
0x000698AC 14c840f9 ldr      x20, [x0, #0x190]
0x000698B0 880240b9 ldr      w8, [x20]
0x000698B4 a8fcff35 cbnz     w8, #0x69848
0x000698B8 e83700d0 adrp     x8, #0x767000
0x000698BC 08212591 add      x8, x8, #0x948
0x000698C0 08410091 add      x8, x8, #0x10
0x000698C4 e80b00f9 str      x8, [sp, #0x10]
0x000698C8 e1430091 add      x1, sp, #0x10
0x000698CC 71be1194 bl       #0x4d9290
0x000698D0 e00f40f9 ldr      x0, [sp, #0x18]
0x000698D4 ff0f00f9 str      xzr, [sp, #0x18]
0x000698D8 800000b4 cbz      x0, #0x698e8
0x000698DC 088c44f8 ldr      x8, [x0, #0x48]!
0x000698E0 080d40f9 ldr      x8, [x8, #0x18]
0x000698E4 00013fd6 blr      x8
0x000698E8 c84e40f9 ldr      x8, [x22, #0x98]
0x000698EC e80000b4 cbz      x8, #0x69908
0x000698F0 ea430091 add      x10, sp, #0x10
0x000698F4 c9420291 add      x9, x22, #0x90
0x000698F8 40c10291 add      x0, x10, #0xb0
0x000698FC 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0x00069900 3f7d00a9 stp      xzr, xzr, [x9]
0x00069904 00013fd6 blr      x8
0x00069908 e81740f9 ldr      x8, [sp, #0x28]
0x0006990C c80000b4 cbz      x8, #0x69924
```

## item hash-index insert consumer: main+0x69E90

```asm
0x00069E10 f65701a9 stp      x22, x21, [sp, #0x10]
0x00069E14 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00069E18 fd030091 mov      x29, sp
0x00069E1C f30301aa mov      x19, x1
0x00069E20 f40300aa mov      x20, x0
0x00069E24 f50308aa mov      x21, x8
0x00069E28 12311694 bl       #0x5f6270
0x00069E2C f60300aa mov      x22, x0
0x00069E30 e00313aa mov      x0, x19
0x00069E34 0f311694 bl       #0x5f6270
0x00069E38 c802008b add      x8, x22, x0
0x00069E3C e9030091 mov      x9, sp
0x00069E40 08410091 add      x8, x8, #0x10
0x00069E44 08ed7c92 and      x8, x8, #0xfffffffffffffff0
0x00069E48 360108cb sub      x22, x9, x8
0x00069E4C df020091 mov      sp, x22
0x00069E50 e00316aa mov      x0, x22
0x00069E54 e10314aa mov      x1, x20
0x00069E58 df020039 strb     wzr, [x22]
0x00069E5C 25311694 bl       #0x5f62f0
0x00069E60 e10313aa mov      x1, x19
0x00069E64 23311694 bl       #0x5f62f0
0x00069E68 e00315aa mov      x0, x21
0x00069E6C e10316aa mov      x1, x22
0x00069E70 5980fe97 bl       #0x9fd4
0x00069E74 bf030091 mov      sp, x29
0x00069E78 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00069E7C f65741a9 ldp      x22, x21, [sp, #0x10]
0x00069E80 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00069E84 c0035fd6 ret      
0x00069E88 00000000 udf      #0
0x00069E8C 00000000 udf      #0
0x00069E90 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
0x00069E94 f90b00f9 str      x25, [sp, #0x10]
0x00069E98 f85f02a9 stp      x24, x23, [sp, #0x20]
0x00069E9C f65703a9 stp      x22, x21, [sp, #0x30]
0x00069EA0 f44f04a9 stp      x20, x19, [sp, #0x40]
0x00069EA4 fd030091 mov      x29, sp
0x00069EA8 370040f9 ldr      x23, [x1]
0x00069EAC f50303aa mov      x21, x3
0x00069EB0 f60302aa mov      x22, x2
0x00069EB4 180440f9 ldr      x24, [x0, #8]
0x00069EB8 f30300aa mov      x19, x0
0x00069EBC 580200b4 cbz      x24, #0x69f04
0x00069EC0 08ff41d3 lsr      x8, x24, #1
0x00069EC4 08f10092 and      x8, x8, #0x5555555555555555
0x00069EC8 080308cb sub      x8, x24, x8
0x00069ECC 09e50092 and      x9, x8, #0x3333333333333333
0x00069ED0 08fd42d3 lsr      x8, x8, #2
0x00069ED4 08e50092 and      x8, x8, #0x3333333333333333
0x00069ED8 2801088b add      x8, x9, x8
0x00069EDC e9c300b2 mov      x9, #0x101010101010101
0x00069EE0 0811488b add      x8, x8, x8, lsr #4
0x00069EE4 08cd0092 and      x8, x8, #0xf0f0f0f0f0f0f0f
0x00069EE8 087d099b mul      x8, x8, x9
0x00069EEC 08fd78d3 lsr      x8, x8, #0x38
0x00069EF0 1f0500f1 cmp      x8, #1
0x00069EF4 a8000054 b.hi     #0x69f08
0x00069EF8 090700d1 sub      x9, x24, #1
0x00069EFC 3901178a and      x25, x9, x23
0x00069F00 07000014 b        #0x69f1c
0x00069F04 2d000014 b        #0x69fb8
0x00069F08 ff0218eb cmp      x23, x24
0x00069F0C f90317aa mov      x25, x23
0x00069F10 63000054 b.lo     #0x69f1c
0x00069F14 e90ad89a udiv     x9, x23, x24
0x00069F18 39dd189b msub     x25, x9, x24, x23
0x00069F1C 690240f9 ldr      x9, [x19]
0x00069F20 297979f8 ldr      x9, [x9, x25, lsl #3]
0x00069F24 a90400b4 cbz      x9, #0x69fb8
0x00069F28 340140f9 ldr      x20, [x9]
0x00069F2C 740400b4 cbz      x20, #0x69fb8
0x00069F30 1f0900f1 cmp      x8, #2
0x00069F34 e2000054 b.hs     #0x69f50
0x00069F38 080700d1 sub      x8, x24, #1
0x00069F3C 17000014 b        #0x69f98
0x00069F40 1f0119eb cmp      x8, x25
0x00069F44 a1030054 b.ne     #0x69fb8
0x00069F48 940240f9 ldr      x20, [x20]
0x00069F4C 740300b4 cbz      x20, #0x69fb8
0x00069F50 880640f9 ldr      x8, [x20, #8]
0x00069F54 1f0117eb cmp      x8, x23
0x00069F58 c1000054 b.ne     #0x69f70
0x00069F5C 880a40f9 ldr      x8, [x20, #0x10]
0x00069F60 1f0117eb cmp      x8, x23
0x00069F64 21ffff54 b.ne     #0x69f48
0x00069F68 12000014 b        #0x69fb0
0x00069F6C 1f2003d5 nop      
0x00069F70 1f0118eb cmp      x8, x24
0x00069F74 63feff54 b.lo     #0x69f40
0x00069F78 0909d89a udiv     x9, x8, x24
0x00069F7C 28a1189b msub     x8, x9, x24, x8
0x00069F80 f0ffff17 b        #0x69f40
0x00069F84 2901088a and      x9, x9, x8
0x00069F88 3f0119eb cmp      x9, x25
0x00069F8C 61010054 b.ne     #0x69fb8
0x00069F90 940240f9 ldr      x20, [x20]
0x00069F94 340100b4 cbz      x20, #0x69fb8
0x00069F98 890640f9 ldr      x9, [x20, #8]
0x00069F9C 3f0117eb cmp      x9, x23
0x00069FA0 21ffff54 b.ne     #0x69f84
0x00069FA4 890a40f9 ldr      x9, [x20, #0x10]
0x00069FA8 3f0117eb cmp      x9, x23
0x00069FAC 21ffff54 b.ne     #0x69f90
0x00069FB0 e1031faa mov      x1, xzr
0x00069FB4 a1000014 b        #0x6a238
0x00069FB8 601a40f9 ldr      x0, [x19, #0x30]
0x00069FBC 01048052 mov      w1, #0x20
0x00069FC0 02018052 mov      w2, #8
0x00069FC4 080040f9 ldr      x8, [x0]
0x00069FC8 080940f9 ldr      x8, [x8, #0x10]
0x00069FCC 00013fd6 blr      x8
0x00069FD0 f40300aa mov      x20, x0
0x00069FD4 a00000b5 cbnz     x0, #0x69fe8
0x00069FD8 601a40f9 ldr      x0, [x19, #0x30]
0x00069FDC 080040f9 ldr      x8, [x0]
0x00069FE0 085d40f9 ldr      x8, [x8, #0xb8]
0x00069FE4 00013fd6 blr      x8
0x00069FE8 48d03bd5 mrs      x8, tpidr_el0
0x00069FEC 08c97392 and      x8, x8, #0xffffffffffffe000
0x00069FF0 094d40f9 ldr      x9, [x8, #0x98]
0x00069FF4 3f4100f1 cmp      x9, #0x10
0x00069FF8 e0120054 b.eq     #0x6a254
0x00069FFC 6a1a40f9 ldr      x10, [x19, #0x30]
0x0006A000 090d098b add      x9, x8, x9, lsl #3
0x0006A004 2a0d00f9 str      x10, [x9, #0x18]
0x0006A008 094d40f9 ldr      x9, [x8, #0x98]
0x0006A00C 29050091 add      x9, x9, #1
0x0006A010 094d00f9 str      x9, [x8, #0x98]
0x0006A014 c90240f9 ldr      x9, [x22]
0x0006A018 890a00f9 str      x9, [x20, #0x10]
0x0006A01C a9024079 ldrh     w9, [x21]
0x0006A020 89320079 strh     w9, [x20, #0x18]
0x0006A024 094d40f9 ldr      x9, [x8, #0x98]
0x0006A028 290500d1 sub      x9, x9, #1
0x0006A02C 094d00f9 str      x9, [x8, #0x98]
0x0006A030 9f5e00a9 stp      xzr, x23, [x20]
0x0006A034 682640f9 ldr      x8, [x19, #0x48]
0x0006A038 615240bd ldr      s1, [x19, #0x50]
0x0006A03C 08050091 add      x8, x8, #1
0x0006A040 0001239e ucvtf    s0, x8
0x0006A044 780100b4 cbz      x24, #0x6a070
0x0006A048 0203239e ucvtf    s2, x24
0x0006A04C 2208221e fmul     s2, s1, s2
0x0006A050 4020201e fcmp     s2, s0
0x0006A054 e4000054 b.mi     #0x6a070
0x0006A058 680240f9 ldr      x8, [x19]
0x0006A05C 087979f8 ldr      x8, [x8, x25, lsl #3]
0x0006A060 080a00b4 cbz      x8, #0x6a1a0
0x0006A064 090140f9 ldr      x9, [x8]
0x0006A068 890200f9 str      x9, [x20]
0x0006A06C 6e000014 b        #0x6a224
0x0006A070 08fb7fd3 lsl      x8, x24, #1
0x0006A074 1f0f00f1 cmp      x24, #3
0x0006A078 a3000054 b.lo     #0x6a08c
0x0006A07C 090700d1 sub      x9, x24, #1
0x0006A080 1f0309ea tst      x24, x9
0x0006A084 e9079f1a cset     w9, ne
0x0006A088 02000014 b        #0x6a090
0x0006A08C 29008052 mov      w9, #1
0x0006A090 0018211e fdiv     s0, s0, s1
0x0006A094 280108aa orr      x8, x9, x8
0x0006A098 0900299e fcvtpu   x9, s0
0x0006A09C 1f0109eb cmp      x8, x9
0x0006A0A0 1581899a csel     x21, x8, x9, hi
0x0006A0A4 a80600f1 subs     x8, x21, #1
0x0006A0A8 61000054 b.ne     #0x6a0b4
0x0006A0AC 55008052 mov      w21, #2
0x0006A0B0 06000014 b        #0x6a0c8
0x0006A0B4 bf0208ea tst      x21, x8
0x0006A0B8 80000054 b.eq     #0x6a0c8
0x0006A0BC e00315aa mov      x0, x21
0x0006A0C0 9c301694 bl       #0x5f6330
0x0006A0C4 f50300aa mov      x21, x0
0x0006A0C8 760640f9 ldr      x22, [x19, #8]
0x0006A0CC bf0216eb cmp      x21, x22
0x0006A0D0 a9000054 b.ls     #0x6a0e4
0x0006A0D4 e00313aa mov      x0, x19
0x0006A0D8 e10315aa mov      x1, x21
0x0006A0DC 61000094 bl       #0x6a260
0x0006A0E0 28000014 b        #0x6a180
0x0006A0E4 e2040054 b.hs     #0x6a180
0x0006A0E8 682640f9 ldr      x8, [x19, #0x48]
0x0006A0EC df0e00f1 cmp      x22, #3
0x0006A0F0 615240bd ldr      s1, [x19, #0x50]
0x0006A0F4 0001239e ucvtf    s0, x8
0x0006A0F8 0018211e fdiv     s0, s0, s1
0x0006A0FC 0000299e fcvtpu   x0, s0
0x0006A100 63030054 b.lo     #0x6a16c
0x0006A104 c8fe41d3 lsr      x8, x22, #1
0x0006A108 08f10092 and      x8, x8, #0x5555555555555555
0x0006A10C c80208cb sub      x8, x22, x8
0x0006A110 09e50092 and      x9, x8, #0x3333333333333333
0x0006A114 08fd42d3 lsr      x8, x8, #2
0x0006A118 08e50092 and      x8, x8, #0x3333333333333333
0x0006A11C 2801088b add      x8, x9, x8
0x0006A120 e9c300b2 mov      x9, #0x101010101010101
0x0006A124 0811488b add      x8, x8, x8, lsr #4
0x0006A128 08cd0092 and      x8, x8, #0xf0f0f0f0f0f0f0f
0x0006A12C 087d099b mul      x8, x8, x9
0x0006A130 08fd78d3 lsr      x8, x8, #0x38
0x0006A134 1f0500f1 cmp      x8, #1
0x0006A138 a8010054 b.hi     #0x6a16c
0x0006A13C 080400d1 sub      x8, x0, #1
0x0006A140 29008052 mov      w9, #1
0x0006A144 1f0800f1 cmp      x0, #2
0x0006A148 0811c0da clz      x8, x8
0x0006A14C e80308cb neg      x8, x8
```

## item source context and owner: main+0x502950

```asm
0x005028E0 002b40f9 ldr      x0, [x24, #0x50]
0x005028E4 800000b4 cbz      x0, #0x5028f4
0x005028E8 088c44f8 ldr      x8, [x0, #0x48]!
0x005028EC 080d40f9 ldr      x8, [x8, #0x18]
0x005028F0 00013fd6 blr      x8
0x005028F4 003b40f9 ldr      x0, [x24, #0x70]
0x005028F8 1f5b05a9 stp      xzr, x22, [x24, #0x50]
0x005028FC 177f06a9 stp      x23, xzr, [x24, #0x60]
0x00502900 20feffb4 cbz      x0, #0x5028c4
0x00502904 088c44f8 ldr      x8, [x0, #0x48]!
0x00502908 080d40f9 ldr      x8, [x8, #0x18]
0x0050290C 00013fd6 blr      x8
0x00502910 edffff17 b        #0x5028c4
0x00502914 808a40a9 ldp      x0, x2, [x20, #8]
0x00502918 e10313aa mov      x1, x19
0x0050291C 830e40f9 ldr      x3, [x20, #0x18]
0x00502920 f44f43a9 ldp      x20, x19, [sp, #0x30]
0x00502924 f65742a9 ldp      x22, x21, [sp, #0x20]
0x00502928 080040f9 ldr      x8, [x0]
0x0050292C f85f41a9 ldp      x24, x23, [sp, #0x10]
0x00502930 040d40f9 ldr      x4, [x8, #0x18]
0x00502934 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0x00502938 80001fd6 br       x4
0x0050293C f44f43a9 ldp      x20, x19, [sp, #0x30]
0x00502940 f65742a9 ldp      x22, x21, [sp, #0x20]
0x00502944 f85f41a9 ldp      x24, x23, [sp, #0x10]
0x00502948 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0x0050294C c0035fd6 ret      
0x00502950 883000f0 adrp     x8, #0xb15000
0x00502954 08013691 add      x8, x8, #0xd80
0x00502958 000140f9 ldr      x0, [x8]
0x0050295C c0035fd6 ret      
0x00502960 883000f0 adrp     x8, #0xb15000
0x00502964 08013691 add      x8, x8, #0xd80
0x00502968 080140f9 ldr      x8, [x8]
0x0050296C 00210b39 strb     w0, [x8, #0x2c8]
0x00502970 c0035fd6 ret      
0x00502974 00000000 udf      #0
0x00502978 00000000 udf      #0
0x0050297C 00000000 udf      #0
0x00502980 011500f0 adrp     x1, #0x7a5000
0x00502984 1f2003d5 nop      
0x00502988 40cbff10 adr      x0, #0x5022f0
0x0050298C 21f046f9 ldr      x1, [x1, #0xde0]
0x00502990 221300b0 adrp     x2, #0x767000
0x00502994 42c01191 add      x2, x2, #0x470
0x00502998 0ef6eb17 b        #0x1d0
0x0050299C c0035fd6 ret      
0x005029A0 c0035fd6 ret      
0x005029A4 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
0x005029A8 fd030091 mov      x29, sp
0x005029AC e9ffff97 bl       #0x502950
0x005029B0 006841f9 ldr      x0, [x0, #0x2d0]
0x005029B4 fd7bc1a8 ldp      x29, x30, [sp], #0x10
0x005029B8 00001fd6 br       x0
0x005029BC fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x005029C0 f30b00f9 str      x19, [sp, #0x10]
0x005029C4 fd030091 mov      x29, sp
0x005029C8 f303002a mov      w19, w0
0x005029CC e1ffff97 bl       #0x502950
0x005029D0 016c41f9 ldr      x1, [x0, #0x2d8]
0x005029D4 e003132a mov      w0, w19
0x005029D8 f30b40f9 ldr      x19, [sp, #0x10]
0x005029DC fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x005029E0 20001fd6 br       x1
0x005029E4 1ff00371 cmp      w0, #0xfc
0x005029E8 e3000054 b.lo     #0x502a04
0x005029EC 08540451 sub      w8, w0, #0x115
0x005029F0 1f190271 cmp      w8, #0x86
0x005029F4 a8000054 b.hi     #0x502a08
0x005029F8 a90a00f0 adrp     x9, #0x659000
0x005029FC 29110191 add      x9, x9, #0x44
0x00502A00 205968b8 ldr      w0, [x9, w8, uxtw #2]
0x00502A04 c0035fd6 ret      
0x00502A08 e0031f2a mov      w0, wzr
0x00502A0C c0035fd6 ret      
0x00502A10 1ff00371 cmp      w0, #0xfc
0x00502A14 0b030054 b.lt     #0x502a74
0x00502A18 1f080671 cmp      w0, #0x182
0x00502A1C 69000054 b.ls     #0x502a28
0x00502A20 e0031f2a mov      w0, wzr
0x00502A24 c0035fd6 ret      
0x00502A28 e8031faa mov      x8, xzr
0x00502A2C a90a00f0 adrp     x9, #0x659000
0x00502A30 29110191 add      x9, x9, #0x44
0x00502A34 2a797fb8 ldr      w10, [x9, xzr, lsl #2]
0x00502A38 5f01006b cmp      w10, w0
0x00502A3C a0010054 b.eq     #0x502a70
0x00502A40 1f1902f1 cmp      x8, #0x86
0x00502A44 e0feff54 b.eq     #0x502a20
0x00502A48 2a09088b add      x10, x9, x8, lsl #2
0x00502A4C 4a0540b9 ldr      w10, [x10, #4]
0x00502A50 5f01006b cmp      w10, w0
0x00502A54 c0000054 b.eq     #0x502a6c
0x00502A58 08090091 add      x8, x8, #2
0x00502A5C 2a7968b8 ldr      w10, [x9, x8, lsl #2]
0x00502A60 5f01006b cmp      w10, w0
0x00502A64 e1feff54 b.ne     #0x502a40
0x00502A68 02000014 b        #0x502a70
0x00502A6C 08050091 add      x8, x8, #1
0x00502A70 00550411 add      w0, w8, #0x115
0x00502A74 c0035fd6 ret      
0x00502A78 083c0012 and      w8, w0, #0xffff
0x00502A7C 1ff10371 cmp      w8, #0xfc
0x00502A80 e3000054 b.lo     #0x502a9c
0x00502A84 08550451 sub      w8, w8, #0x115
0x00502A88 1f190271 cmp      w8, #0x86
0x00502A8C 28030054 b.hi     #0x502af0
0x00502A90 a90a00f0 adrp     x9, #0x659000
0x00502A94 29110191 add      x9, x9, #0x44
0x00502A98 285968b8 ldr      w8, [x9, w8, uxtw #2]
0x00502A9C 1f090671 cmp      w8, #0x182
0x00502AA0 c0020054 b.eq     #0x502af8
0x00502AA4 1f250371 cmp      w8, #0xc9
0x00502AA8 41020054 b.ne     #0x502af0
0x00502AAC 287c1253 lsr      w8, w1, #0x12
0x00502AB0 29441053 ubfx     w9, w1, #0x10, #2
0x00502AB4 2a7c0653 lsr      w10, w1, #6
0x00502AB8 2b040012 and      w11, w1, #3
0x00502ABC 6911092a orr      w9, w11, w9, lsl #4
0x00502AC0 08051a12 and      w8, w8, #0xc0
0x00502AC4 4a051e12 and      w10, w10, #0xc
0x00502AC8 08010a2a orr      w8, w8, w10
0x00502ACC aa048052 mov      w10, #0x25
0x00502AD0 2801082a orr      w8, w9, w8
0x00502AD4 097d0253 lsr      w9, w8, #2
0x00502AD8 297d0a1b mul      w9, w9, w10
0x00502ADC 8a038052 mov      w10, #0x1c
0x00502AE0 297d0853 lsr      w9, w9, #8
0x00502AE4 28a10a1b msub     w8, w9, w10, w8
0x00502AE8 001d0012 and      w0, w8, #0xff
0x00502AEC c0035fd6 ret      
0x00502AF0 e0031f2a mov      w0, wzr
0x00502AF4 c0035fd6 ret      
0x00502AF8 5f040071 cmp      w2, #1
0x00502AFC e8179f1a cset     w8, eq
0x00502B00 5f000071 cmp      w2, #0
0x00502B04 08791f53 lsl      w8, w8, #1
0x00502B08 00159f1a csinc    w0, w8, wzr, ne
0x00502B0C c0035fd6 ret      
```

