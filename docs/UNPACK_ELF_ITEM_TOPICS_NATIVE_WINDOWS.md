# HOME 4.1.0 — 原始 ELF 资源 XREF 逐指令窗口

ELF SHA256: \`bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a\`.

**证据边界**：ADRP/ADD 是资源字符串的引用点；这里仅是反汇编
证据，不等于已经确定的读取者、字段类型或业务语义。

反汇编目标数：7。每处展示 -0x100 到 +0x240。

## item.dat — main+0x502104

资源常量：\`item.dat\`

原始指令: \`F00008C5\`; 后续 ADD: \`913AD0A5\`

```asm
0x00502004 e1078052 mov       w1, #0x3f
0x00502008 f30308aa mov       x19, x8
0x0050200C b9d10394 bl        #0x5f66f0
0x00502010 ffff0039 strb      wzr, [sp, #0x3f]
0x00502014 4f020094 bl        #0x502950
0x00502018 140440f9 ldr       x20, [x0, #8]
0x0050201C e00314aa mov       x0, x20
0x00502020 94d00394 bl        #0x5f6270
0x00502024 680800b0 adrp      x8, #0x60f000
0x00502028 080d1a91 add       x8, x8, #0x683
0x0050202C 000100b4 cbz       x0, #0x50204c
0x00502030 0900148b add       x9, x0, x20
0x00502034 6a080090 adrp      x10, #0x60e000
0x00502038 4ae13f91 add       x10, x10, #0xff8
0x0050203C 29f15f38 ldurb     w9, [x9, #-1]
0x00502040 3fbd0071 cmp       w9, #0x2f
0x00502044 04018a9a csel      x4, x8, x10, eq
0x00502048 02000014 b         #0x502050
0x0050204C e40308aa mov       x4, x8
0x00502050 9f0200f1 cmp       x20, #0
0x00502054 c20800d0 adrp      x2, #0x61c000
0x00502058 42a01391 add       x2, x2, #0x4e8
0x0050205C 0301949a csel      x3, x8, x20, eq
0x00502060 e0030191 add       x0, sp, #0x40
0x00502064 e5030091 mov       x5, sp
0x00502068 e11f8052 mov       w1, #0xff
0x0050206C a1d10394 bl        #0x5f66f0
0x00502070 e0030191 add       x0, sp, #0x40
0x00502074 e80313aa mov       x8, x19
0x00502078 ffff0439 strb      wzr, [sp, #0x13f]
0x0050207C 30000094 bl        #0x50213c
0x00502080 f44f56a9 ldp       x20, x19, [sp, #0x160]
0x00502084 fcab40f9 ldr       x28, [sp, #0x150]
0x00502088 fd7b54a9 ldp       x29, x30, [sp, #0x140]
0x0050208C ffc30591 add       sp, sp, #0x170
0x00502090 c0035fd6 ret       
0x00502094 00000000 udf       #0
0x00502098 00000000 udf       #0
0x0050209C 00000000 udf       #0
0x005020A0 ffc304d1 sub       sp, sp, #0x130
0x005020A4 fd7b10a9 stp       x29, x30, [sp, #0x100]
0x005020A8 fc8b00f9 str       x28, [sp, #0x110]
0x005020AC f44f12a9 stp       x20, x19, [sp, #0x120]
0x005020B0 fd030491 add       x29, sp, #0x100
0x005020B4 f30308aa mov       x19, x8
0x005020B8 26020094 bl        #0x502950
0x005020BC 140840f9 ldr       x20, [x0, #0x10]
0x005020C0 e00314aa mov       x0, x20
0x005020C4 6bd00394 bl        #0x5f6270
0x005020C8 680800b0 adrp      x8, #0x60f000
0x005020CC 080d1a91 add       x8, x8, #0x683
0x005020D0 000100b4 cbz       x0, #0x5020f0
0x005020D4 0900148b add       x9, x0, x20
0x005020D8 6a080090 adrp      x10, #0x60e000
0x005020DC 4ae13f91 add       x10, x10, #0xff8
0x005020E0 29f15f38 ldurb     w9, [x9, #-1]
0x005020E4 3fbd0071 cmp       w9, #0x2f
0x005020E8 04018a9a csel      x4, x8, x10, eq
0x005020EC 02000014 b         #0x5020f4
0x005020F0 e40308aa mov       x4, x8
0x005020F4 9f0200f1 cmp       x20, #0
0x005020F8 c20800d0 adrp      x2, #0x61c000
0x005020FC 42a01391 add       x2, x2, #0x4e8
0x00502100 0301949a csel      x3, x8, x20, eq
0x00502104 c50800f0 adrp      x5, #0x61d000 << RESOURCE ADDRESS
0x00502108 a5d03a91 add       x5, x5, #0xeb4 << RESOURCE ADDRESS
0x0050210C e0030091 mov       x0, sp
0x00502110 e11f8052 mov       w1, #0xff
0x00502114 77d10394 bl        #0x5f66f0
0x00502118 e0030091 mov       x0, sp
0x0050211C e80313aa mov       x8, x19
0x00502120 ffff0339 strb      wzr, [sp, #0xff]
0x00502124 06000094 bl        #0x50213c
0x00502128 f44f52a9 ldp       x20, x19, [sp, #0x120]
0x0050212C fc8b40f9 ldr       x28, [sp, #0x110]
0x00502130 fd7b50a9 ldp       x29, x30, [sp, #0x100]
0x00502134 ffc30491 add       sp, sp, #0x130
0x00502138 c0035fd6 ret       
0x0050213C fd7bbda9 stp       x29, x30, [sp, #-0x30]!
0x00502140 f50b00f9 str       x21, [sp, #0x10]
0x00502144 f44f02a9 stp       x20, x19, [sp, #0x20]
0x00502148 fd030091 mov       x29, sp
0x0050214C f51400b0 adrp      x21, #0x79f000
0x00502150 f40300aa mov       x20, x0
0x00502154 b5e242f9 ldr       x21, [x21, #0x5c0]
0x00502158 f30308aa mov       x19, x8
0x0050215C e00315aa mov       x0, x21
0x00502160 44d00394 bl        #0x5f6270
0x00502164 e20300aa mov       x2, x0
0x00502168 e00314aa mov       x0, x20
0x0050216C e10315aa mov       x1, x21
0x00502170 44d00394 bl        #0x5f6280
0x00502174 60020034 cbz       w0, #0x5021c0
0x00502178 e01400b0 adrp      x0, #0x79f000
0x0050217C a8630091 add       x8, x29, #0x18
0x00502180 00e042f9 ldr       x0, [x0, #0x5c0]
0x00502184 e10314aa mov       x1, x20
0x00502188 39000094 bl        #0x50226c
0x0050218C a1630091 add       x1, x29, #0x18
0x00502190 e00313aa mov       x0, x19
0x00502194 e2031f2a mov       w2, wzr
0x00502198 006cff97 bl        #0x4dd198
0x0050219C a00f40f9 ldr       x0, [x29, #0x18]
0x005021A0 800000b4 cbz       x0, #0x5021b0
0x005021A4 088c44f8 ldr       x8, [x0, #0x48]!
0x005021A8 080d40f9 ldr       x8, [x8, #0x18]
0x005021AC 00013fd6 blr       x8
0x005021B0 f44f42a9 ldp       x20, x19, [sp, #0x20]
0x005021B4 f50b40f9 ldr       x21, [sp, #0x10]
0x005021B8 fd7bc3a8 ldp       x29, x30, [sp], #0x30
0x005021BC c0035fd6 ret       
0x005021C0 e00313aa mov       x0, x19
0x005021C4 e10314aa mov       x1, x20
0x005021C8 831fec97 bl        #0x9fd4
0x005021CC 740240f9 ldr       x20, [x19]
0x005021D0 e81400b0 adrp      x8, #0x79f000
0x005021D4 89620191 add       x9, x20, #0x58
0x005021D8 08e542f9 ldr       x8, [x8, #0x5c8]
0x005021DC 9f0200f1 cmp       x20, #0
0x005021E0 8a820191 add       x10, x20, #0x60
0x005021E4 0801899a csel      x8, x8, x9, eq
0x005021E8 e91400b0 adrp      x9, #0x79f000
0x005021EC 080140f9 ldr       x8, [x8]
0x005021F0 29e942f9 ldr       x9, [x9, #0x5d0]
0x005021F4 29018a9a csel      x9, x9, x10, eq
0x005021F8 290140f9 ldr       x9, [x9]
0x005021FC 940200b4 cbz       x20, #0x50224c
0x00502200 8a3640f9 ldr       x10, [x20, #0x68]
0x00502204 68a600a9 stp       x8, x9, [x19, #8]
0x00502208 e00314aa mov       x0, x20
0x0050220C 6afe01a9 stp       x10, xzr, [x19, #0x18]
0x00502210 088c44f8 ldr       x8, [x0, #0x48]!
0x00502214 080940f9 ldr       x8, [x8, #0x10]
0x00502218 00013fd6 blr       x8
0x0050221C 601240f9 ldr       x0, [x19, #0x20]
0x00502220 741200f9 str       x20, [x19, #0x20]
0x00502224 800000b4 cbz       x0, #0x502234
0x00502228 088c44f8 ldr       x8, [x0, #0x48]!
0x0050222C 080d40f9 ldr       x8, [x8, #0x18]
0x00502230 00013fd6 blr       x8
0x00502234 7f2a00b9 str       wzr, [x19, #0x28]
0x00502238 e00313aa mov       x0, x19
0x0050223C f50b40f9 ldr       x21, [sp, #0x10]
0x00502240 f44f42a9 ldp       x20, x19, [sp, #0x20]
0x00502244 fd7bc3a8 ldp       x29, x30, [sp], #0x30
0x00502248 122cec17 b         #0xd290
0x0050224C 68a600a9 stp       x8, x9, [x19, #8]
0x00502250 7ffe01a9 stp       xzr, xzr, [x19, #0x18]
0x00502254 7f2a00b9 str       wzr, [x19, #0x28]
0x00502258 e00313aa mov       x0, x19
0x0050225C f50b40f9 ldr       x21, [sp, #0x10]
0x00502260 f44f42a9 ldp       x20, x19, [sp, #0x20]
0x00502264 fd7bc3a8 ldp       x29, x30, [sp], #0x30
0x00502268 0a2cec17 b         #0xd290
0x0050226C fd7bbda9 stp       x29, x30, [sp, #-0x30]!
0x00502270 f65701a9 stp       x22, x21, [sp, #0x10]
0x00502274 f44f02a9 stp       x20, x19, [sp, #0x20]
0x00502278 fd030091 mov       x29, sp
0x0050227C f30301aa mov       x19, x1
0x00502280 f40300aa mov       x20, x0
0x00502284 f50308aa mov       x21, x8
0x00502288 facf0394 bl        #0x5f6270
0x0050228C f60300aa mov       x22, x0
0x00502290 e00313aa mov       x0, x19
0x00502294 f7cf0394 bl        #0x5f6270
0x00502298 c802008b add       x8, x22, x0
0x0050229C e9030091 mov       x9, sp
0x005022A0 08410091 add       x8, x8, #0x10
0x005022A4 08ed7c92 and       x8, x8, #0xfffffffffffffff0
0x005022A8 360108cb sub       x22, x9, x8
0x005022AC df020091 mov       sp, x22
0x005022B0 e00316aa mov       x0, x22
0x005022B4 e10314aa mov       x1, x20
0x005022B8 df020039 strb      wzr, [x22]
0x005022BC 0dd00394 bl        #0x5f62f0
0x005022C0 e10313aa mov       x1, x19
0x005022C4 0bd00394 bl        #0x5f62f0
0x005022C8 e00315aa mov       x0, x21
0x005022CC e10316aa mov       x1, x22
0x005022D0 411fec97 bl        #0x9fd4
0x005022D4 bf030091 mov       sp, x29
0x005022D8 f44f42a9 ldp       x20, x19, [sp, #0x20]
0x005022DC f65741a9 ldp       x22, x21, [sp, #0x10]
0x005022E0 fd7bc3a8 ldp       x29, x30, [sp], #0x30
0x005022E4 c0035fd6 ret       
0x005022E8 00000000 udf       #0
0x005022EC 00000000 udf       #0
0x005022F0 fd7bbca9 stp       x29, x30, [sp, #-0x40]!
0x005022F4 f85f01a9 stp       x24, x23, [sp, #0x10]
0x005022F8 f65702a9 stp       x22, x21, [sp, #0x20]
0x005022FC f44f03a9 stp       x20, x19, [sp, #0x30]
0x00502300 fd030091 mov       x29, sp
0x00502304 130040f9 ldr       x19, [x0]
0x00502308 1f0000f9 str       xzr, [x0]
0x0050230C 130500b4 cbz       x19, #0x5023ac
0x00502310 b6c884d2 mov       x22, #0x2645
0x00502314 5684b0f2 movk      x22, #0x8422, lsl #16
0x00502318 f40300aa mov       x20, x0
0x0050231C 15488052 mov       w21, #0x240
0x00502320 969cd3f2 movk      x22, #0x9ce4, lsl #32
0x00502324 567ef9f2 movk      x22, #0xcbf2, lsl #48
0x00502328 770800b0 adrp      x23, #0x60f000
0x0050232C f70e1a91 add       x23, x23, #0x683
0x00502330 05000014 b         #0x502344
0x00502334 b5c200f1 subs      x21, x21, #0x30
0x00502338 1f3b00f9 str       xzr, [x24, #0x70]
0x0050233C 1f7b00b9 str       wzr, [x24, #0x78]
0x00502340 20020054 b.eq      #0x502384
```

## item_hash_to_index.dat — main+0x6979C

资源常量：\`bin/pml/item/item_hash_to_index.dat\`

原始指令: \`90002D20\`; 后续 ADD: \`9127E400\`

```asm
0x0006969C 00013fd6 blr       x8
0x000696A0 e01340f9 ldr       x0, [sp, #0x20]
0x000696A4 ff2700f9 str       xzr, [sp, #0x48]
0x000696A8 ff5300b9 str       wzr, [sp, #0x50]
0x000696AC 800000b4 cbz       x0, #0x696bc
0x000696B0 088c44f8 ldr       x8, [x0, #0x48]!
0x000696B4 080d40f9 ldr       x8, [x8, #0x18]
0x000696B8 00013fd6 blr       x8
0x000696BC 95030094 bl        #0x6a510
0x000696C0 e0830c39 strb      w0, [sp, #0x320]
0x000696C4 1b060094 bl        #0x6af30
0x000696C8 e0870c39 strb      w0, [sp, #0x321]
0x000696CC a83900f0 adrp      x8, #0x7a0000
0x000696D0 e1630191 add       x1, sp, #0x58
0x000696D4 082d42f9 ldr       x8, [x8, #0x458]
0x000696D8 e89701f9 str       x8, [sp, #0x328]
0x000696DC 1f2003d5 nop       
0x000696E0 0872ff10 adr       x8, #0x68520
0x000696E4 e89b01f9 str       x8, [sp, #0x330]
0x000696E8 c83b0090 adrp      x8, #0x7e1000
0x000696EC 08413591 add       x8, x8, #0xd50
0x000696F0 604e40f9 ldr       x0, [x19, #0x98]
0x000696F4 f3630191 add       x19, sp, #0x58
0x000696F8 080140f9 ldr       x8, [x8]
0x000696FC 081540f9 ldr       x8, [x8, #0x28]
0x00069700 e89f01f9 str       x8, [sp, #0x338]
0x00069704 2f631294 bl        #0x5023c0
0x00069708 16488052 mov       w22, #0x240
0x0006970C 05000014 b         #0x69720
0x00069710 d6c200f1 subs      x22, x22, #0x30
0x00069714 ff3a00f9 str       xzr, [x23, #0x70]
0x00069718 ff7a00b9 str       wzr, [x23, #0x78]
0x0006971C 20020054 b.eq      #0x69760
0x00069720 7702168b add       x23, x19, x22
0x00069724 e83640f9 ldr       x8, [x23, #0x68]
0x00069728 c80000b4 cbz       x8, #0x69740
0x0006972C e02a40f9 ldr       x0, [x23, #0x50]
0x00069730 800000b4 cbz       x0, #0x69740
0x00069734 088c44f8 ldr       x8, [x0, #0x48]!
0x00069738 080d40f9 ldr       x8, [x8, #0x18]
0x0006973C 00013fd6 blr       x8
0x00069740 e03a40f9 ldr       x0, [x23, #0x70]
0x00069744 ff5205a9 stp       xzr, x20, [x23, #0x50]
0x00069748 f57e06a9 stp       x21, xzr, [x23, #0x60]
0x0006974C 20feffb4 cbz       x0, #0x69710
0x00069750 088c44f8 ldr       x8, [x0, #0x48]!
0x00069754 080d40f9 ldr       x8, [x8, #0x18]
0x00069758 00013fd6 blr       x8
0x0006975C edffff17 b         #0x69710
0x00069760 ff030d91 add       sp, sp, #0x340
0x00069764 f44f43a9 ldp       x20, x19, [sp, #0x30]
0x00069768 f65742a9 ldp       x22, x21, [sp, #0x20]
0x0006976C fc5f41a9 ldp       x28, x23, [sp, #0x10]
0x00069770 fd7bc4a8 ldp       x29, x30, [sp], #0x40
0x00069774 c0035fd6 ret       
0x00069778 00000000 udf       #0
0x0006977C 00000000 udf       #0
0x00069780 ff8306d1 sub       sp, sp, #0x1a0
0x00069784 fd7b16a9 stp       x29, x30, [sp, #0x160]
0x00069788 fc5f17a9 stp       x28, x23, [sp, #0x170]
0x0006978C f65718a9 stp       x22, x21, [sp, #0x180]
0x00069790 f44f19a9 stp       x20, x19, [sp, #0x190]
0x00069794 fd830591 add       x29, sp, #0x160
0x00069798 f30300aa mov       x19, x0
0x0006979C 202d0090 adrp      x0, #0x60d000 << RESOURCE ADDRESS
0x000697A0 00e42791 add       x0, x0, #0x9f9 << RESOURCE ADDRESS
0x000697A4 a8e300d1 sub       x8, x29, #0x38
0x000697A8 f6430091 add       x22, sp, #0x10
0x000697AC 7d000094 bl        #0x699a0
0x000697B0 df7e0aa9 stp       xzr, xzr, [x22, #0xa0]
0x000697B4 a83900d0 adrp      x8, #0x79f000
0x000697B8 ff1f00f9 str       xzr, [sp, #0x38]
0x000697BC df7e09a9 stp       xzr, xzr, [x22, #0x90]
0x000697C0 ffff02a9 stp       xzr, xzr, [sp, #0x28]
0x000697C4 087143f9 ldr       x8, [x8, #0x6e0]
0x000697C8 08410091 add       x8, x8, #0x10
0x000697CC ff1300f9 str       xzr, [sp, #0x20]
0x000697D0 e80b00f9 str       x8, [sp, #0x10]
0x000697D4 5f641294 bl        #0x502950
0x000697D8 a83900d0 adrp      x8, #0x79f000
0x000697DC 047041f9 ldr       x4, [x0, #0x2e0]
0x000697E0 a2e300d1 sub       x2, x29, #0x38
0x000697E4 08a942f9 ldr       x8, [x8, #0x550]
0x000697E8 e1031f2a mov       w1, wzr
0x000697EC e3031f2a mov       w3, wzr
0x000697F0 e5031faa mov       x5, xzr
0x000697F4 000140f9 ldr       x0, [x8]
0x000697F8 a82300d1 sub       x8, x29, #8
0x000697FC eda8fe97 bl        #0x13bb0
0x00069800 d4a640f9 ldr       x20, [x22, #0x148]
0x00069804 f40f00f9 str       x20, [sp, #0x18]
0x00069808 140500b4 cbz       x20, #0x698a8
0x0006980C f50314aa mov       x21, x20
0x00069810 a88e44f8 ldr       x8, [x21, #0x48]!
0x00069814 e00315aa mov       x0, x21
0x00069818 080940f9 ldr       x8, [x8, #0x10]
0x0006981C 00013fd6 blr       x8
0x00069820 e00314aa mov       x0, x20
0x00069824 6fbd1194 bl        #0x4d8de0
0x00069828 a80240f9 ldr       x8, [x21]
0x0006982C e00315aa mov       x0, x21
0x00069830 080d40f9 ldr       x8, [x8, #0x18]
0x00069834 00013fd6 blr       x8
0x00069838 e00f40f9 ldr       x0, [sp, #0x18]
0x0006983C 14c840f9 ldr       x20, [x0, #0x190]
0x00069840 880240b9 ldr       w8, [x20]
0x00069844 a8030034 cbz       w8, #0x698b8
0x00069848 f5031faa mov       x21, xzr
0x0006984C 73a20291 add       x19, x19, #0xa8
0x00069850 97320091 add       x23, x20, #0xc
0x00069854 e8825ff8 ldur      x8, [x23, #-8]
0x00069858 a12300d1 sub       x1, x29, #8
0x0006985C a22300d1 sub       x2, x29, #8
0x00069860 e3330091 add       x3, sp, #0xc
0x00069864 e00313aa mov       x0, x19
0x00069868 c8a600f9 str       x8, [x22, #0x148]
0x0006986C e80641f8 ldr       x8, [x23], #0x10
0x00069870 e81b0079 strh      w8, [sp, #0xc]
0x00069874 87010094 bl        #0x69e90
0x00069878 880240b9 ldr       w8, [x20]
0x0006987C b5060091 add       x21, x21, #1
0x00069880 bf0208eb cmp       x21, x8
0x00069884 83feff54 b.lo      #0x69854
0x00069888 e83700d0 adrp      x8, #0x767000
0x0006988C 08212591 add       x8, x8, #0x948
0x00069890 e00f40f9 ldr       x0, [sp, #0x18]
0x00069894 08410091 add       x8, x8, #0x10
0x00069898 e80b00f9 str       x8, [sp, #0x10]
0x0006989C 600100b5 cbnz      x0, #0x698c8
0x000698A0 ff0f00f9 str       xzr, [sp, #0x18]
0x000698A4 11000014 b         #0x698e8
0x000698A8 e0031faa mov       x0, xzr
0x000698AC 14c840f9 ldr       x20, [x0, #0x190]
0x000698B0 880240b9 ldr       w8, [x20]
0x000698B4 a8fcff35 cbnz      w8, #0x69848
0x000698B8 e83700d0 adrp      x8, #0x767000
0x000698BC 08212591 add       x8, x8, #0x948
0x000698C0 08410091 add       x8, x8, #0x10
0x000698C4 e80b00f9 str       x8, [sp, #0x10]
0x000698C8 e1430091 add       x1, sp, #0x10
0x000698CC 71be1194 bl        #0x4d9290
0x000698D0 e00f40f9 ldr       x0, [sp, #0x18]
0x000698D4 ff0f00f9 str       xzr, [sp, #0x18]
0x000698D8 800000b4 cbz       x0, #0x698e8
0x000698DC 088c44f8 ldr       x8, [x0, #0x48]!
0x000698E0 080d40f9 ldr       x8, [x8, #0x18]
0x000698E4 00013fd6 blr       x8
0x000698E8 c84e40f9 ldr       x8, [x22, #0x98]
0x000698EC e80000b4 cbz       x8, #0x69908
0x000698F0 ea430091 add       x10, sp, #0x10
0x000698F4 c9420291 add       x9, x22, #0x90
0x000698F8 40c10291 add       x0, x10, #0xb0
0x000698FC 3f7d01a9 stp       xzr, xzr, [x9, #0x10]
0x00069900 3f7d00a9 stp       xzr, xzr, [x9]
0x00069904 00013fd6 blr       x8
0x00069908 e81740f9 ldr       x8, [sp, #0x28]
0x0006990C c80000b4 cbz       x8, #0x69924
0x00069910 e9430091 add       x9, sp, #0x10
0x00069914 ff7f03a9 stp       xzr, xzr, [sp, #0x30]
0x00069918 20c10091 add       x0, x9, #0x30
0x0006991C ff7f02a9 stp       xzr, xzr, [sp, #0x20]
0x00069920 00013fd6 blr       x8
0x00069924 e00f40f9 ldr       x0, [sp, #0x18]
0x00069928 800000b4 cbz       x0, #0x69938
0x0006992C 088c44f8 ldr       x8, [x0, #0x48]!
0x00069930 080d40f9 ldr       x8, [x8, #0x18]
0x00069934 00013fd6 blr       x8
0x00069938 c89a40f9 ldr       x8, [x22, #0x130]
0x0006993C c80000b4 cbz       x8, #0x69954
0x00069940 c08e40f9 ldr       x0, [x22, #0x118]
0x00069944 800000b4 cbz       x0, #0x69954
0x00069948 088c44f8 ldr       x8, [x0, #0x48]!
0x0006994C 080d40f9 ldr       x8, [x8, #0x18]
0x00069950 00013fd6 blr       x8
0x00069954 c09e40f9 ldr       x0, [x22, #0x138]
0x00069958 a8c884d2 mov       x8, #0x2645
0x0006995C 4884b0f2 movk      x8, #0x8422, lsl #16
0x00069960 889cd3f2 movk      x8, #0x9ce4, lsl #32
0x00069964 487ef9f2 movk      x8, #0xcbf2, lsl #48
0x00069968 dfa211a9 stp       xzr, x8, [x22, #0x118]
0x0006996C 282d00d0 adrp      x8, #0x60f000
0x00069970 080d1a91 add       x8, x8, #0x683
0x00069974 c8fe12a9 stp       x8, xzr, [x22, #0x128]
0x00069978 800000b4 cbz       x0, #0x69988
0x0006997C 088c44f8 ldr       x8, [x0, #0x48]!
0x00069980 080d40f9 ldr       x8, [x8, #0x18]
0x00069984 00013fd6 blr       x8
0x00069988 f44f59a9 ldp       x20, x19, [sp, #0x190]
0x0006998C f65758a9 ldp       x22, x21, [sp, #0x180]
0x00069990 fc5f57a9 ldp       x28, x23, [sp, #0x170]
0x00069994 fd7b56a9 ldp       x29, x30, [sp, #0x160]
0x00069998 ff830691 add       sp, sp, #0x1a0
0x0006999C c0035fd6 ret       
0x000699A0 fd7bbda9 stp       x29, x30, [sp, #-0x30]!
0x000699A4 f50b00f9 str       x21, [sp, #0x10]
0x000699A8 f44f02a9 stp       x20, x19, [sp, #0x20]
0x000699AC fd030091 mov       x29, sp
0x000699B0 b53900d0 adrp      x21, #0x79f000
0x000699B4 f40300aa mov       x20, x0
0x000699B8 b5e242f9 ldr       x21, [x21, #0x5c0]
0x000699BC f30308aa mov       x19, x8
0x000699C0 e00315aa mov       x0, x21
0x000699C4 2b321694 bl        #0x5f6270
0x000699C8 e20300aa mov       x2, x0
0x000699CC e00314aa mov       x0, x20
0x000699D0 e10315aa mov       x1, x21
0x000699D4 2b321694 bl        #0x5f6280
0x000699D8 60020034 cbz       w0, #0x69a24
```

## topics_data.bin — main+0x12B10

资源常量：\`bin/appli/mtt_pokedex/bin/topics_data.bin\`

原始指令: \`B0003000\`; 后续 ADD: \`91271400\`

```asm
0x00012A10 597ef9f2 movk      x25, #0xcbf2, lsl #48
0x00012A14 08478452 mov       w8, #0x2238
0x00012A18 09018052 mov       w9, #8
0x00012A1C 687602f9 str       x8, [x19, #0x4e8]
0x00012A20 697a02f9 str       x9, [x19, #0x4f0]
0x00012A24 ba3a00b0 adrp      x26, #0x767000
0x00012A28 5ae33691 add       x26, x26, #0xdb8
0x00012A2C 7c038052 mov       w28, #0x1b
0x00012A30 1820c0f2 movk      x24, #0x100, lsl #32
0x00012A34 54300090 adrp      x20, #0x61a000
0x00012A38 940a2591 add       x20, x20, #0x942
0x00012A3C 04000014 b         #0x12a4c
0x00012A40 b5060011 add       w21, w21, #1
0x00012A44 bf2e0071 cmp       w21, #0xb
0x00012A48 40060054 b.eq      #0x12b10
0x00012A4C fb031faa mov       x27, xzr
0x00012A50 04000014 b         #0x12a60
0x00012A54 7b070091 add       x27, x27, #1
0x00012A58 7f4f00f1 cmp       x27, #0x13
0x00012A5C a0030054 b.eq      #0x12ad0
0x00012A60 577b7bf8 ldr       x23, [x26, x27, lsl #3]
0x00012A64 e00317aa mov       x0, x23
0x00012A68 766e42f9 ldr       x22, [x19, #0x4d8]
0x00012A6C 018e1794 bl        #0x5f6270
0x00012A70 ea024039 ldrb      w10, [x23]
0x00012A74 e80319aa mov       x8, x25
0x00012A78 0a010034 cbz       w10, #0x12a98
0x00012A7C e9060091 add       x9, x23, #1
0x00012A80 e80319aa mov       x8, x25
0x00012A84 ea030a2a mov       w10, w10
0x00012A88 08010aca eor       x8, x8, x10
0x00012A8C 087d189b mul       x8, x8, x24
0x00012A90 2a154038 ldrb      w10, [x9], #1
0x00012A94 8affff35 cbnz      w10, #0x12a84
0x00012A98 e0ff01a9 stp       x0, xzr, [sp, #0x18]
0x00012A9C e1230091 add       x1, sp, #8
0x00012AA0 e00316aa mov       x0, x22
0x00012AA4 e203152a mov       w2, w21
0x00012AA8 e8df00a9 stp       x8, x23, [sp, #8]
0x00012AAC 6a0a0094 bl        #0x15454
0x00012AB0 e01340f9 ldr       x0, [sp, #0x20]
0x00012AB4 00fdffb4 cbz       x0, #0x12a54
0x00012AB8 088c44f8 ldr       x8, [x0, #0x48]!
0x00012ABC 080d40f9 ldr       x8, [x8, #0x18]
0x00012AC0 00013fd6 blr       x8
0x00012AC4 e4ffff17 b         #0x12a54
0x00012AC8 1f2003d5 nop       
0x00012ACC 1f2003d5 nop       
0x00012AD0 606e42f9 ldr       x0, [x19, #0x4d8]
0x00012AD4 480396d2 mov       x8, #0xb01a
0x00012AD8 0830baf2 movk      x8, #0xd180, lsl #16
0x00012ADC 48c1d3f2 movk      x8, #0x9e0a, lsl #32
0x00012AE0 88ecf4f2 movk      x8, #0xa764, lsl #48
0x00012AE4 e1230091 add       x1, sp, #8
0x00012AE8 e203152a mov       w2, w21
0x00012AEC e8d300a9 stp       x8, x20, [sp, #8]
0x00012AF0 fcff01a9 stp       x28, xzr, [sp, #0x18]
0x00012AF4 580a0094 bl        #0x15454
0x00012AF8 e01340f9 ldr       x0, [sp, #0x20]
0x00012AFC 20faffb4 cbz       x0, #0x12a40
0x00012B00 088c44f8 ldr       x8, [x0, #0x48]!
0x00012B04 080d40f9 ldr       x8, [x8, #0x18]
0x00012B08 00013fd6 blr       x8
0x00012B0C cdffff17 b         #0x12a40
0x00012B10 003000b0 adrp      x0, #0x613000 << RESOURCE ADDRESS
0x00012B14 00142791 add       x0, x0, #0x9c5 << RESOURCE ADDRESS
0x00012B18 e8230091 add       x8, sp, #8
0x00012B1C 84ceff97 bl        #0x652c
0x00012B20 773c00b0 adrp      x23, #0x79f000
0x00012B24 a82300d1 sub       x8, x29, #8
0x00012B28 f7aa42f9 ldr       x23, [x23, #0x550]
0x00012B2C e40340f9 ldr       x4, [sp]
0x00012B30 e2230091 add       x2, sp, #8
0x00012B34 21008052 mov       w1, #1
0x00012B38 e3031f2a mov       w3, wzr
0x00012B3C e5031faa mov       x5, xzr
0x00012B40 e00240f9 ldr       x0, [x23]
0x00012B44 1b040094 bl        #0x13bb0
0x00012B48 608642f9 ldr       x0, [x19, #0x508]
0x00012B4C 800000b4 cbz       x0, #0x12b5c
0x00012B50 088c44f8 ldr       x8, [x0, #0x48]!
0x00012B54 080d40f9 ldr       x8, [x8, #0x18]
0x00012B58 00013fd6 blr       x8
0x00012B5C b5835ff8 ldur      x21, [x29, #-8]
0x00012B60 783c00b0 adrp      x24, #0x79f000
0x00012B64 758602f9 str       x21, [x19, #0x508]
0x00012B68 18ef41f9 ldr       x24, [x24, #0x3d8]
0x00012B6C 550200b4 cbz       x21, #0x12bb4
0x00012B70 f40315aa mov       x20, x21
0x00012B74 888e44f8 ldr       x8, [x20, #0x48]!
0x00012B78 e00314aa mov       x0, x20
0x00012B7C 080940f9 ldr       x8, [x8, #0x10]
0x00012B80 00013fd6 blr       x8
0x00012B84 688a42f9 ldr       x8, [x19, #0x510]
0x00012B88 69ca42f9 ldr       x9, [x19, #0x590]
0x00012B8C 080109aa orr       x8, x8, x9
0x00012B90 a80000b4 cbz       x8, #0x12ba4
0x00012B94 61021491 add       x1, x19, #0x500
0x00012B98 e00315aa mov       x0, x21
0x00012B9C 22008052 mov       w2, #1
0x00012BA0 1c191394 bl        #0x4d9010
0x00012BA4 880240f9 ldr       x8, [x20]
0x00012BA8 e00314aa mov       x0, x20
0x00012BAC 080d40f9 ldr       x8, [x8, #0x18]
0x00012BB0 00013fd6 blr       x8
0x00012BB4 e81340f9 ldr       x8, [sp, #0x20]
0x00012BB8 c80000b4 cbz       x8, #0x12bd0
0x00012BBC e00740f9 ldr       x0, [sp, #8]
0x00012BC0 800000b4 cbz       x0, #0x12bd0
0x00012BC4 088c44f8 ldr       x8, [x0, #0x48]!
0x00012BC8 080d40f9 ldr       x8, [x8, #0x18]
0x00012BCC 00013fd6 blr       x8
0x00012BD0 e01740f9 ldr       x0, [sp, #0x28]
0x00012BD4 f62f00b0 adrp      x22, #0x60f000
0x00012BD8 d60e1a91 add       x22, x22, #0x683
0x00012BDC ffe700a9 stp       xzr, x25, [sp, #8]
0x00012BE0 f6ff01a9 stp       x22, xzr, [sp, #0x18]
0x00012BE4 800000b4 cbz       x0, #0x12bf4
0x00012BE8 088c44f8 ldr       x8, [x0, #0x48]!
0x00012BEC 080d40f9 ldr       x8, [x8, #0x18]
0x00012BF0 00013fd6 blr       x8
0x00012BF4 080340f9 ldr       x8, [x24]
0x00012BF8 403000d0 adrp      x0, #0x61c000
0x00012BFC 008c0391 add       x0, x0, #0xe3
0x00012C00 140540f9 ldr       x20, [x8, #8]
0x00012C04 e8230091 add       x8, sp, #8
0x00012C08 40000094 bl        #0x12d08
0x00012C0C e00240f9 ldr       x0, [x23]
0x00012C10 a82300d1 sub       x8, x29, #8
0x00012C14 e2230091 add       x2, sp, #8
0x00012C18 21008052 mov       w1, #1
0x00012C1C e3031f2a mov       w3, wzr
0x00012C20 e40314aa mov       x4, x20
0x00012C24 e5031faa mov       x5, xzr
0x00012C28 e2030094 bl        #0x13bb0
0x00012C2C 600e43f9 ldr       x0, [x19, #0x618]
0x00012C30 800000b4 cbz       x0, #0x12c40
0x00012C34 088c44f8 ldr       x8, [x0, #0x48]!
0x00012C38 080d40f9 ldr       x8, [x8, #0x18]
0x00012C3C 00013fd6 blr       x8
0x00012C40 b5835ff8 ldur      x21, [x29, #-8]
0x00012C44 750e03f9 str       x21, [x19, #0x618]
0x00012C48 550200b4 cbz       x21, #0x12c90
0x00012C4C f40315aa mov       x20, x21
0x00012C50 888e44f8 ldr       x8, [x20, #0x48]!
0x00012C54 e00314aa mov       x0, x20
0x00012C58 080940f9 ldr       x8, [x8, #0x10]
0x00012C5C 00013fd6 blr       x8
0x00012C60 681243f9 ldr       x8, [x19, #0x620]
0x00012C64 695243f9 ldr       x9, [x19, #0x6a0]
0x00012C68 080109aa orr       x8, x8, x9
0x00012C6C a80000b4 cbz       x8, #0x12c80
0x00012C70 61421891 add       x1, x19, #0x610
0x00012C74 e00315aa mov       x0, x21
0x00012C78 22008052 mov       w2, #1
0x00012C7C e5181394 bl        #0x4d9010
0x00012C80 880240f9 ldr       x8, [x20]
0x00012C84 e00314aa mov       x0, x20
0x00012C88 080d40f9 ldr       x8, [x8, #0x18]
0x00012C8C 00013fd6 blr       x8
0x00012C90 e81340f9 ldr       x8, [sp, #0x20]
0x00012C94 c80000b4 cbz       x8, #0x12cac
0x00012C98 e00740f9 ldr       x0, [sp, #8]
0x00012C9C 800000b4 cbz       x0, #0x12cac
0x00012CA0 088c44f8 ldr       x8, [x0, #0x48]!
0x00012CA4 080d40f9 ldr       x8, [x8, #0x18]
0x00012CA8 00013fd6 blr       x8
0x00012CAC e01740f9 ldr       x0, [sp, #0x28]
0x00012CB0 ffe700a9 stp       xzr, x25, [sp, #8]
0x00012CB4 f6ff01a9 stp       x22, xzr, [sp, #0x18]
0x00012CB8 800000b4 cbz       x0, #0x12cc8
0x00012CBC 088c44f8 ldr       x8, [x0, #0x48]!
0x00012CC0 080d40f9 ldr       x8, [x8, #0x18]
0x00012CC4 00013fd6 blr       x8
0x00012CC8 f44f49a9 ldp       x20, x19, [sp, #0x90]
0x00012CCC f65748a9 ldp       x22, x21, [sp, #0x80]
0x00012CD0 f85f47a9 ldp       x24, x23, [sp, #0x70]
0x00012CD4 fa6746a9 ldp       x26, x25, [sp, #0x60]
0x00012CD8 fc6f45a9 ldp       x28, x27, [sp, #0x50]
0x00012CDC fd7b44a9 ldp       x29, x30, [sp, #0x40]
0x00012CE0 ff830291 add       sp, sp, #0xa0
0x00012CE4 c0035fd6 ret       
0x00012CE8 cabfff97 bl        #0x2c10
0x00012CEC a80240f9 ldr       x8, [x21]
0x00012CF0 e00315aa mov       x0, x21
0x00012CF4 085d40f9 ldr       x8, [x8, #0xb8]
0x00012CF8 00013fd6 blr       x8
0x00012CFC e0031faa mov       x0, xzr
0x00012D00 e10315aa mov       x1, x21
0x00012D04 b5f70a94 bl        #0x2d0bd8
0x00012D08 fd7bbda9 stp       x29, x30, [sp, #-0x30]!
0x00012D0C f50b00f9 str       x21, [sp, #0x10]
0x00012D10 f44f02a9 stp       x20, x19, [sp, #0x20]
0x00012D14 fd030091 mov       x29, sp
0x00012D18 753c00b0 adrp      x21, #0x79f000
0x00012D1C f40300aa mov       x20, x0
0x00012D20 b5e242f9 ldr       x21, [x21, #0x5c0]
0x00012D24 f30308aa mov       x19, x8
0x00012D28 e00315aa mov       x0, x21
0x00012D2C 518d1794 bl        #0x5f6270
0x00012D30 e20300aa mov       x2, x0
0x00012D34 e00314aa mov       x0, x20
0x00012D38 e10315aa mov       x1, x21
0x00012D3C 518d1794 bl        #0x5f6280
0x00012D40 60020034 cbz       w0, #0x12d8c
0x00012D44 603c00b0 adrp      x0, #0x79f000
0x00012D48 a8630091 add       x8, x29, #0x18
0x00012D4C 00e042f9 ldr       x0, [x0, #0x5c0]
```

## form_data.bin — main+0x17D484

资源常量：\`bin/appli/mtt_pokedex/bin/form_data.bin\`

原始指令: \`D00024C0\`; 后续 ADD: \`91371000\`

```asm
0x0017D384 c80000b4 cbz       x8, #0x17d39c
0x0017D388 e00340f9 ldr       x0, [sp]
0x0017D38C 800000b4 cbz       x0, #0x17d39c
0x0017D390 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D394 080d40f9 ldr       x8, [x8, #0x18]
0x0017D398 00013fd6 blr       x8
0x0017D39C e01340f9 ldr       x0, [sp, #0x20]
0x0017D3A0 ff6700a9 stp       xzr, x25, [sp]
0x0017D3A4 fa7f01a9 stp       x26, xzr, [sp, #0x10]
0x0017D3A8 800000b4 cbz       x0, #0x17d3b8
0x0017D3AC 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D3B0 080d40f9 ldr       x8, [x8, #0x18]
0x0017D3B4 00013fd6 blr       x8
0x0017D3B8 e02400b0 adrp      x0, #0x61a000
0x0017D3BC 00882d91 add       x0, x0, #0xb62
0x0017D3C0 e8030091 mov       x8, sp
0x0017D3C4 3d020094 bl        #0x17dcb8
0x0017D3C8 640640f9 ldr       x4, [x19, #8]
0x0017D3CC a8630091 add       x8, x29, #0x18
0x0017D3D0 e2030091 mov       x2, sp
0x0017D3D4 c00240f9 ldr       x0, [x22]
0x0017D3D8 21008052 mov       w1, #1
0x0017D3DC e3031f2a mov       w3, wzr
0x0017D3E0 e5031faa mov       x5, xzr
0x0017D3E4 f359fa97 bl        #0x13bb0
0x0017D3E8 60f645f9 ldr       x0, [x19, #0xbe8]
0x0017D3EC 800000b4 cbz       x0, #0x17d3fc
0x0017D3F0 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D3F4 080d40f9 ldr       x8, [x8, #0x18]
0x0017D3F8 00013fd6 blr       x8
0x0017D3FC b50f40f9 ldr       x21, [x29, #0x18]
0x0017D400 75f605f9 str       x21, [x19, #0xbe8]
0x0017D404 550200b4 cbz       x21, #0x17d44c
0x0017D408 f40315aa mov       x20, x21
0x0017D40C 888e44f8 ldr       x8, [x20, #0x48]!
0x0017D410 e00314aa mov       x0, x20
0x0017D414 080940f9 ldr       x8, [x8, #0x10]
0x0017D418 00013fd6 blr       x8
0x0017D41C 68fa45f9 ldr       x8, [x19, #0xbf0]
0x0017D420 693a46f9 ldr       x9, [x19, #0xc70]
0x0017D424 080109aa orr       x8, x8, x9
0x0017D428 a80000b4 cbz       x8, #0x17d43c
0x0017D42C 61822f91 add       x1, x19, #0xbe0
0x0017D430 e00315aa mov       x0, x21
0x0017D434 22008052 mov       w2, #1
0x0017D438 f66e0d94 bl        #0x4d9010
0x0017D43C 880240f9 ldr       x8, [x20]
0x0017D440 e00314aa mov       x0, x20
0x0017D444 080d40f9 ldr       x8, [x8, #0x18]
0x0017D448 00013fd6 blr       x8
0x0017D44C e80f40f9 ldr       x8, [sp, #0x18]
0x0017D450 c80000b4 cbz       x8, #0x17d468
0x0017D454 e00340f9 ldr       x0, [sp]
0x0017D458 800000b4 cbz       x0, #0x17d468
0x0017D45C 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D460 080d40f9 ldr       x8, [x8, #0x18]
0x0017D464 00013fd6 blr       x8
0x0017D468 e01340f9 ldr       x0, [sp, #0x20]
0x0017D46C ff6700a9 stp       xzr, x25, [sp]
0x0017D470 fa7f01a9 stp       x26, xzr, [sp, #0x10]
0x0017D474 800000b4 cbz       x0, #0x17d484
0x0017D478 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D47C 080d40f9 ldr       x8, [x8, #0x18]
0x0017D480 00013fd6 blr       x8
0x0017D484 c02400d0 adrp      x0, #0x617000 << RESOURCE ADDRESS
0x0017D488 00103791 add       x0, x0, #0xdc4 << RESOURCE ADDRESS
0x0017D48C e8030091 mov       x8, sp
0x0017D490 db23fa97 bl        #0x63fc
0x0017D494 640640f9 ldr       x4, [x19, #8]
0x0017D498 a8630091 add       x8, x29, #0x18
0x0017D49C e2030091 mov       x2, sp
0x0017D4A0 c00240f9 ldr       x0, [x22]
0x0017D4A4 21008052 mov       w1, #1
0x0017D4A8 e3031f2a mov       w3, wzr
0x0017D4AC e5031faa mov       x5, xzr
0x0017D4B0 c059fa97 bl        #0x13bb0
0x0017D4B4 607e46f9 ldr       x0, [x19, #0xcf8]
0x0017D4B8 800000b4 cbz       x0, #0x17d4c8
0x0017D4BC 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D4C0 080d40f9 ldr       x8, [x8, #0x18]
0x0017D4C4 00013fd6 blr       x8
0x0017D4C8 b50f40f9 ldr       x21, [x29, #0x18]
0x0017D4CC 757e06f9 str       x21, [x19, #0xcf8]
0x0017D4D0 550200b4 cbz       x21, #0x17d518
0x0017D4D4 f40315aa mov       x20, x21
0x0017D4D8 888e44f8 ldr       x8, [x20, #0x48]!
0x0017D4DC e00314aa mov       x0, x20
0x0017D4E0 080940f9 ldr       x8, [x8, #0x10]
0x0017D4E4 00013fd6 blr       x8
0x0017D4E8 688246f9 ldr       x8, [x19, #0xd00]
0x0017D4EC 69c246f9 ldr       x9, [x19, #0xd80]
0x0017D4F0 080109aa orr       x8, x8, x9
0x0017D4F4 a80000b4 cbz       x8, #0x17d508
0x0017D4F8 61c23391 add       x1, x19, #0xcf0
0x0017D4FC e00315aa mov       x0, x21
0x0017D500 22008052 mov       w2, #1
0x0017D504 c36e0d94 bl        #0x4d9010
0x0017D508 880240f9 ldr       x8, [x20]
0x0017D50C e00314aa mov       x0, x20
0x0017D510 080d40f9 ldr       x8, [x8, #0x18]
0x0017D514 00013fd6 blr       x8
0x0017D518 e80f40f9 ldr       x8, [sp, #0x18]
0x0017D51C c80000b4 cbz       x8, #0x17d534
0x0017D520 e00340f9 ldr       x0, [sp]
0x0017D524 800000b4 cbz       x0, #0x17d534
0x0017D528 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D52C 080d40f9 ldr       x8, [x8, #0x18]
0x0017D530 00013fd6 blr       x8
0x0017D534 e01340f9 ldr       x0, [sp, #0x20]
0x0017D538 ff6700a9 stp       xzr, x25, [sp]
0x0017D53C fa7f01a9 stp       x26, xzr, [sp, #0x10]
0x0017D540 800000b4 cbz       x0, #0x17d550
0x0017D544 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D548 080d40f9 ldr       x8, [x8, #0x18]
0x0017D54C 00013fd6 blr       x8
0x0017D550 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D554 1f4100f1 cmp       x8, #0x10
0x0017D558 400e0054 b.eq      #0x17d720
0x0017D55C 750640f9 ldr       x21, [x19, #8]
0x0017D560 01308052 mov       w1, #0x180
0x0017D564 02028052 mov       w2, #0x10
0x0017D568 157b28f8 str       x21, [x24, x8, lsl #3]
0x0017D56C e00315aa mov       x0, x21
0x0017D570 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D574 08050091 add       x8, x8, #1
0x0017D578 e84e00f9 str       x8, [x23, #0x98]
0x0017D57C a80240f9 ldr       x8, [x21]
0x0017D580 080940f9 ldr       x8, [x8, #0x10]
0x0017D584 00013fd6 blr       x8
0x0017D588 600d00b4 cbz       x0, #0x17d734
0x0017D58C e10315aa mov       x1, x21
0x0017D590 f40300aa mov       x20, x0
0x0017D594 914d0594 bl        #0x2d0bd8
0x0017D598 28310090 adrp      x8, #0x7a1000
0x0017D59C e00314aa mov       x0, x20
0x0017D5A0 088d47f9 ldr       x8, [x8, #0xf18]
0x0017D5A4 09410191 add       x9, x8, #0x50
0x0017D5A8 08410091 add       x8, x8, #0x10
0x0017D5AC 885600a9 stp       x8, x21, [x20]
0x0017D5B0 08308052 mov       w8, #0x180
0x0017D5B4 098c04f8 str       x9, [x0, #0x48]!
0x0017D5B8 942201a9 stp       x20, x8, [x20, #0x10]
0x0017D5BC 08028052 mov       w8, #0x10
0x0017D5C0 881200f9 str       x8, [x20, #0x20]
0x0017D5C4 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D5C8 080500d1 sub       x8, x8, #1
0x0017D5CC e84e00f9 str       x8, [x23, #0x98]
0x0017D5D0 080040f9 ldr       x8, [x0]
0x0017D5D4 080940f9 ldr       x8, [x8, #0x10]
0x0017D5D8 00013fd6 blr       x8
0x0017D5DC 601647f9 ldr       x0, [x19, #0xe28]
0x0017D5E0 800000b4 cbz       x0, #0x17d5f0
0x0017D5E4 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D5E8 080d40f9 ldr       x8, [x8, #0x18]
0x0017D5EC 00013fd6 blr       x8
0x0017D5F0 e00314aa mov       x0, x20
0x0017D5F4 e1031f2a mov       w1, wzr
0x0017D5F8 741607f9 str       x20, [x19, #0xe28]
0x0017D5FC 9b4d0594 bl        #0x2d0c68
0x0017D600 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D604 1f4100f1 cmp       x8, #0x10
0x0017D608 c0080054 b.eq      #0x17d720
0x0017D60C 750640f9 ldr       x21, [x19, #8]
0x0017D610 01308052 mov       w1, #0x180
0x0017D614 02028052 mov       w2, #0x10
0x0017D618 157b28f8 str       x21, [x24, x8, lsl #3]
0x0017D61C e00315aa mov       x0, x21
0x0017D620 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D624 08050091 add       x8, x8, #1
0x0017D628 e84e00f9 str       x8, [x23, #0x98]
0x0017D62C a80240f9 ldr       x8, [x21]
0x0017D630 080940f9 ldr       x8, [x8, #0x10]
0x0017D634 00013fd6 blr       x8
0x0017D638 e00700b4 cbz       x0, #0x17d734
0x0017D63C e10315aa mov       x1, x21
0x0017D640 f40300aa mov       x20, x0
0x0017D644 654d0594 bl        #0x2d0bd8
0x0017D648 283100b0 adrp      x8, #0x7a2000
0x0017D64C e00314aa mov       x0, x20
0x0017D650 08dd40f9 ldr       x8, [x8, #0x1b8]
0x0017D654 09410191 add       x9, x8, #0x50
0x0017D658 08410091 add       x8, x8, #0x10
0x0017D65C 885600a9 stp       x8, x21, [x20]
0x0017D660 08308052 mov       w8, #0x180
0x0017D664 098c04f8 str       x9, [x0, #0x48]!
0x0017D668 942201a9 stp       x20, x8, [x20, #0x10]
0x0017D66C 08028052 mov       w8, #0x10
0x0017D670 881200f9 str       x8, [x20, #0x20]
0x0017D674 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D678 080500d1 sub       x8, x8, #1
0x0017D67C e84e00f9 str       x8, [x23, #0x98]
0x0017D680 080040f9 ldr       x8, [x0]
0x0017D684 080940f9 ldr       x8, [x8, #0x10]
0x0017D688 00013fd6 blr       x8
0x0017D68C 601a47f9 ldr       x0, [x19, #0xe30]
0x0017D690 800000b4 cbz       x0, #0x17d6a0
0x0017D694 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D698 080d40f9 ldr       x8, [x8, #0x18]
0x0017D69C 00013fd6 blr       x8
0x0017D6A0 e00314aa mov       x0, x20
0x0017D6A4 e1031f2a mov       w1, wzr
0x0017D6A8 741a07f9 str       x20, [x19, #0xe30]
0x0017D6AC 6f4d0594 bl        #0x2d0c68
0x0017D6B0 083100d0 adrp      x8, #0x79f000
0x0017D6B4 e1008052 mov       w1, #7
0x0017D6B8 08d142f9 ldr       x8, [x8, #0x5a0]
0x0017D6BC e2031f2a mov       w2, wzr
0x0017D6C0 000140f9 ldr       x0, [x8]
```

## shape_data.bin — main+0x17D3B8

资源常量：\`bin/appli/mtt_pokedex/bin/shape_data.bin\`

原始指令: \`B00024E0\`; 后续 ADD: \`912D8800\`

```asm
0x0017D2B8 8a2500f0 adrp      x10, #0x630000
0x0017D2BC 4a510691 add       x10, x10, #0x194
0x0017D2C0 002500b0 adrp      x0, #0x61e000
0x0017D2C4 00ec1791 add       x0, x0, #0x5fb
0x0017D2C8 a8220da9 stp       x8, x8, [x21, #0xd0]
0x0017D2CC a8220ea9 stp       x8, x8, [x21, #0xe0]
0x0017D2D0 a92a0ba9 stp       x9, x10, [x21, #0xb0]
0x0017D2D4 892500f0 adrp      x9, #0x630000
0x0017D2D8 29610691 add       x9, x9, #0x198
0x0017D2DC 8a2500f0 adrp      x10, #0x630000
0x0017D2E0 4a710691 add       x10, x10, #0x19c
0x0017D2E4 a8220fa9 stp       x8, x8, [x21, #0xf0]
0x0017D2E8 e8030091 mov       x8, sp
0x0017D2EC a92a0ca9 stp       x9, x10, [x21, #0xc0]
0x0017D2F0 26020094 bl        #0x17db88
0x0017D2F4 163100d0 adrp      x22, #0x79f000
0x0017D2F8 640640f9 ldr       x4, [x19, #8]
0x0017D2FC a8630091 add       x8, x29, #0x18
0x0017D300 d6aa42f9 ldr       x22, [x22, #0x550]
0x0017D304 e2030091 mov       x2, sp
0x0017D308 21008052 mov       w1, #1
0x0017D30C e3031f2a mov       w3, wzr
0x0017D310 e5031faa mov       x5, xzr
0x0017D314 c00240f9 ldr       x0, [x22]
0x0017D318 265afa97 bl        #0x13bb0
0x0017D31C 606e45f9 ldr       x0, [x19, #0xad8]
0x0017D320 800000b4 cbz       x0, #0x17d330
0x0017D324 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D328 080d40f9 ldr       x8, [x8, #0x18]
0x0017D32C 00013fd6 blr       x8
0x0017D330 b50f40f9 ldr       x21, [x29, #0x18]
0x0017D334 756e05f9 str       x21, [x19, #0xad8]
0x0017D338 550200b4 cbz       x21, #0x17d380
0x0017D33C f40315aa mov       x20, x21
0x0017D340 888e44f8 ldr       x8, [x20, #0x48]!
0x0017D344 e00314aa mov       x0, x20
0x0017D348 080940f9 ldr       x8, [x8, #0x10]
0x0017D34C 00013fd6 blr       x8
0x0017D350 687245f9 ldr       x8, [x19, #0xae0]
0x0017D354 69b245f9 ldr       x9, [x19, #0xb60]
0x0017D358 080109aa orr       x8, x8, x9
0x0017D35C a80000b4 cbz       x8, #0x17d370
0x0017D360 61422b91 add       x1, x19, #0xad0
0x0017D364 e00315aa mov       x0, x21
0x0017D368 22008052 mov       w2, #1
0x0017D36C 296f0d94 bl        #0x4d9010
0x0017D370 880240f9 ldr       x8, [x20]
0x0017D374 e00314aa mov       x0, x20
0x0017D378 080d40f9 ldr       x8, [x8, #0x18]
0x0017D37C 00013fd6 blr       x8
0x0017D380 e80f40f9 ldr       x8, [sp, #0x18]
0x0017D384 c80000b4 cbz       x8, #0x17d39c
0x0017D388 e00340f9 ldr       x0, [sp]
0x0017D38C 800000b4 cbz       x0, #0x17d39c
0x0017D390 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D394 080d40f9 ldr       x8, [x8, #0x18]
0x0017D398 00013fd6 blr       x8
0x0017D39C e01340f9 ldr       x0, [sp, #0x20]
0x0017D3A0 ff6700a9 stp       xzr, x25, [sp]
0x0017D3A4 fa7f01a9 stp       x26, xzr, [sp, #0x10]
0x0017D3A8 800000b4 cbz       x0, #0x17d3b8
0x0017D3AC 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D3B0 080d40f9 ldr       x8, [x8, #0x18]
0x0017D3B4 00013fd6 blr       x8
0x0017D3B8 e02400b0 adrp      x0, #0x61a000 << RESOURCE ADDRESS
0x0017D3BC 00882d91 add       x0, x0, #0xb62 << RESOURCE ADDRESS
0x0017D3C0 e8030091 mov       x8, sp
0x0017D3C4 3d020094 bl        #0x17dcb8
0x0017D3C8 640640f9 ldr       x4, [x19, #8]
0x0017D3CC a8630091 add       x8, x29, #0x18
0x0017D3D0 e2030091 mov       x2, sp
0x0017D3D4 c00240f9 ldr       x0, [x22]
0x0017D3D8 21008052 mov       w1, #1
0x0017D3DC e3031f2a mov       w3, wzr
0x0017D3E0 e5031faa mov       x5, xzr
0x0017D3E4 f359fa97 bl        #0x13bb0
0x0017D3E8 60f645f9 ldr       x0, [x19, #0xbe8]
0x0017D3EC 800000b4 cbz       x0, #0x17d3fc
0x0017D3F0 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D3F4 080d40f9 ldr       x8, [x8, #0x18]
0x0017D3F8 00013fd6 blr       x8
0x0017D3FC b50f40f9 ldr       x21, [x29, #0x18]
0x0017D400 75f605f9 str       x21, [x19, #0xbe8]
0x0017D404 550200b4 cbz       x21, #0x17d44c
0x0017D408 f40315aa mov       x20, x21
0x0017D40C 888e44f8 ldr       x8, [x20, #0x48]!
0x0017D410 e00314aa mov       x0, x20
0x0017D414 080940f9 ldr       x8, [x8, #0x10]
0x0017D418 00013fd6 blr       x8
0x0017D41C 68fa45f9 ldr       x8, [x19, #0xbf0]
0x0017D420 693a46f9 ldr       x9, [x19, #0xc70]
0x0017D424 080109aa orr       x8, x8, x9
0x0017D428 a80000b4 cbz       x8, #0x17d43c
0x0017D42C 61822f91 add       x1, x19, #0xbe0
0x0017D430 e00315aa mov       x0, x21
0x0017D434 22008052 mov       w2, #1
0x0017D438 f66e0d94 bl        #0x4d9010
0x0017D43C 880240f9 ldr       x8, [x20]
0x0017D440 e00314aa mov       x0, x20
0x0017D444 080d40f9 ldr       x8, [x8, #0x18]
0x0017D448 00013fd6 blr       x8
0x0017D44C e80f40f9 ldr       x8, [sp, #0x18]
0x0017D450 c80000b4 cbz       x8, #0x17d468
0x0017D454 e00340f9 ldr       x0, [sp]
0x0017D458 800000b4 cbz       x0, #0x17d468
0x0017D45C 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D460 080d40f9 ldr       x8, [x8, #0x18]
0x0017D464 00013fd6 blr       x8
0x0017D468 e01340f9 ldr       x0, [sp, #0x20]
0x0017D46C ff6700a9 stp       xzr, x25, [sp]
0x0017D470 fa7f01a9 stp       x26, xzr, [sp, #0x10]
0x0017D474 800000b4 cbz       x0, #0x17d484
0x0017D478 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D47C 080d40f9 ldr       x8, [x8, #0x18]
0x0017D480 00013fd6 blr       x8
0x0017D484 c02400d0 adrp      x0, #0x617000
0x0017D488 00103791 add       x0, x0, #0xdc4
0x0017D48C e8030091 mov       x8, sp
0x0017D490 db23fa97 bl        #0x63fc
0x0017D494 640640f9 ldr       x4, [x19, #8]
0x0017D498 a8630091 add       x8, x29, #0x18
0x0017D49C e2030091 mov       x2, sp
0x0017D4A0 c00240f9 ldr       x0, [x22]
0x0017D4A4 21008052 mov       w1, #1
0x0017D4A8 e3031f2a mov       w3, wzr
0x0017D4AC e5031faa mov       x5, xzr
0x0017D4B0 c059fa97 bl        #0x13bb0
0x0017D4B4 607e46f9 ldr       x0, [x19, #0xcf8]
0x0017D4B8 800000b4 cbz       x0, #0x17d4c8
0x0017D4BC 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D4C0 080d40f9 ldr       x8, [x8, #0x18]
0x0017D4C4 00013fd6 blr       x8
0x0017D4C8 b50f40f9 ldr       x21, [x29, #0x18]
0x0017D4CC 757e06f9 str       x21, [x19, #0xcf8]
0x0017D4D0 550200b4 cbz       x21, #0x17d518
0x0017D4D4 f40315aa mov       x20, x21
0x0017D4D8 888e44f8 ldr       x8, [x20, #0x48]!
0x0017D4DC e00314aa mov       x0, x20
0x0017D4E0 080940f9 ldr       x8, [x8, #0x10]
0x0017D4E4 00013fd6 blr       x8
0x0017D4E8 688246f9 ldr       x8, [x19, #0xd00]
0x0017D4EC 69c246f9 ldr       x9, [x19, #0xd80]
0x0017D4F0 080109aa orr       x8, x8, x9
0x0017D4F4 a80000b4 cbz       x8, #0x17d508
0x0017D4F8 61c23391 add       x1, x19, #0xcf0
0x0017D4FC e00315aa mov       x0, x21
0x0017D500 22008052 mov       w2, #1
0x0017D504 c36e0d94 bl        #0x4d9010
0x0017D508 880240f9 ldr       x8, [x20]
0x0017D50C e00314aa mov       x0, x20
0x0017D510 080d40f9 ldr       x8, [x8, #0x18]
0x0017D514 00013fd6 blr       x8
0x0017D518 e80f40f9 ldr       x8, [sp, #0x18]
0x0017D51C c80000b4 cbz       x8, #0x17d534
0x0017D520 e00340f9 ldr       x0, [sp]
0x0017D524 800000b4 cbz       x0, #0x17d534
0x0017D528 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D52C 080d40f9 ldr       x8, [x8, #0x18]
0x0017D530 00013fd6 blr       x8
0x0017D534 e01340f9 ldr       x0, [sp, #0x20]
0x0017D538 ff6700a9 stp       xzr, x25, [sp]
0x0017D53C fa7f01a9 stp       x26, xzr, [sp, #0x10]
0x0017D540 800000b4 cbz       x0, #0x17d550
0x0017D544 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D548 080d40f9 ldr       x8, [x8, #0x18]
0x0017D54C 00013fd6 blr       x8
0x0017D550 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D554 1f4100f1 cmp       x8, #0x10
0x0017D558 400e0054 b.eq      #0x17d720
0x0017D55C 750640f9 ldr       x21, [x19, #8]
0x0017D560 01308052 mov       w1, #0x180
0x0017D564 02028052 mov       w2, #0x10
0x0017D568 157b28f8 str       x21, [x24, x8, lsl #3]
0x0017D56C e00315aa mov       x0, x21
0x0017D570 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D574 08050091 add       x8, x8, #1
0x0017D578 e84e00f9 str       x8, [x23, #0x98]
0x0017D57C a80240f9 ldr       x8, [x21]
0x0017D580 080940f9 ldr       x8, [x8, #0x10]
0x0017D584 00013fd6 blr       x8
0x0017D588 600d00b4 cbz       x0, #0x17d734
0x0017D58C e10315aa mov       x1, x21
0x0017D590 f40300aa mov       x20, x0
0x0017D594 914d0594 bl        #0x2d0bd8
0x0017D598 28310090 adrp      x8, #0x7a1000
0x0017D59C e00314aa mov       x0, x20
0x0017D5A0 088d47f9 ldr       x8, [x8, #0xf18]
0x0017D5A4 09410191 add       x9, x8, #0x50
0x0017D5A8 08410091 add       x8, x8, #0x10
0x0017D5AC 885600a9 stp       x8, x21, [x20]
0x0017D5B0 08308052 mov       w8, #0x180
0x0017D5B4 098c04f8 str       x9, [x0, #0x48]!
0x0017D5B8 942201a9 stp       x20, x8, [x20, #0x10]
0x0017D5BC 08028052 mov       w8, #0x10
0x0017D5C0 881200f9 str       x8, [x20, #0x20]
0x0017D5C4 e84e40f9 ldr       x8, [x23, #0x98]
0x0017D5C8 080500d1 sub       x8, x8, #1
0x0017D5CC e84e00f9 str       x8, [x23, #0x98]
0x0017D5D0 080040f9 ldr       x8, [x0]
0x0017D5D4 080940f9 ldr       x8, [x8, #0x10]
0x0017D5D8 00013fd6 blr       x8
0x0017D5DC 601647f9 ldr       x0, [x19, #0xe28]
0x0017D5E0 800000b4 cbz       x0, #0x17d5f0
0x0017D5E4 088c44f8 ldr       x8, [x0, #0x48]!
0x0017D5E8 080d40f9 ldr       x8, [x8, #0x18]
0x0017D5EC 00013fd6 blr       x8
0x0017D5F0 e00314aa mov       x0, x20
0x0017D5F4 e1031f2a mov       w1, wzr
```

## bin/pml/item — main+0x6979C

资源常量：\`bin/pml/item/item_hash_to_index.dat\`

原始指令: \`90002D20\`; 后续 ADD: \`9127E400\`

```asm
0x0006969C 00013fd6 blr       x8
0x000696A0 e01340f9 ldr       x0, [sp, #0x20]
0x000696A4 ff2700f9 str       xzr, [sp, #0x48]
0x000696A8 ff5300b9 str       wzr, [sp, #0x50]
0x000696AC 800000b4 cbz       x0, #0x696bc
0x000696B0 088c44f8 ldr       x8, [x0, #0x48]!
0x000696B4 080d40f9 ldr       x8, [x8, #0x18]
0x000696B8 00013fd6 blr       x8
0x000696BC 95030094 bl        #0x6a510
0x000696C0 e0830c39 strb      w0, [sp, #0x320]
0x000696C4 1b060094 bl        #0x6af30
0x000696C8 e0870c39 strb      w0, [sp, #0x321]
0x000696CC a83900f0 adrp      x8, #0x7a0000
0x000696D0 e1630191 add       x1, sp, #0x58
0x000696D4 082d42f9 ldr       x8, [x8, #0x458]
0x000696D8 e89701f9 str       x8, [sp, #0x328]
0x000696DC 1f2003d5 nop       
0x000696E0 0872ff10 adr       x8, #0x68520
0x000696E4 e89b01f9 str       x8, [sp, #0x330]
0x000696E8 c83b0090 adrp      x8, #0x7e1000
0x000696EC 08413591 add       x8, x8, #0xd50
0x000696F0 604e40f9 ldr       x0, [x19, #0x98]
0x000696F4 f3630191 add       x19, sp, #0x58
0x000696F8 080140f9 ldr       x8, [x8]
0x000696FC 081540f9 ldr       x8, [x8, #0x28]
0x00069700 e89f01f9 str       x8, [sp, #0x338]
0x00069704 2f631294 bl        #0x5023c0
0x00069708 16488052 mov       w22, #0x240
0x0006970C 05000014 b         #0x69720
0x00069710 d6c200f1 subs      x22, x22, #0x30
0x00069714 ff3a00f9 str       xzr, [x23, #0x70]
0x00069718 ff7a00b9 str       wzr, [x23, #0x78]
0x0006971C 20020054 b.eq      #0x69760
0x00069720 7702168b add       x23, x19, x22
0x00069724 e83640f9 ldr       x8, [x23, #0x68]
0x00069728 c80000b4 cbz       x8, #0x69740
0x0006972C e02a40f9 ldr       x0, [x23, #0x50]
0x00069730 800000b4 cbz       x0, #0x69740
0x00069734 088c44f8 ldr       x8, [x0, #0x48]!
0x00069738 080d40f9 ldr       x8, [x8, #0x18]
0x0006973C 00013fd6 blr       x8
0x00069740 e03a40f9 ldr       x0, [x23, #0x70]
0x00069744 ff5205a9 stp       xzr, x20, [x23, #0x50]
0x00069748 f57e06a9 stp       x21, xzr, [x23, #0x60]
0x0006974C 20feffb4 cbz       x0, #0x69710
0x00069750 088c44f8 ldr       x8, [x0, #0x48]!
0x00069754 080d40f9 ldr       x8, [x8, #0x18]
0x00069758 00013fd6 blr       x8
0x0006975C edffff17 b         #0x69710
0x00069760 ff030d91 add       sp, sp, #0x340
0x00069764 f44f43a9 ldp       x20, x19, [sp, #0x30]
0x00069768 f65742a9 ldp       x22, x21, [sp, #0x20]
0x0006976C fc5f41a9 ldp       x28, x23, [sp, #0x10]
0x00069770 fd7bc4a8 ldp       x29, x30, [sp], #0x40
0x00069774 c0035fd6 ret       
0x00069778 00000000 udf       #0
0x0006977C 00000000 udf       #0
0x00069780 ff8306d1 sub       sp, sp, #0x1a0
0x00069784 fd7b16a9 stp       x29, x30, [sp, #0x160]
0x00069788 fc5f17a9 stp       x28, x23, [sp, #0x170]
0x0006978C f65718a9 stp       x22, x21, [sp, #0x180]
0x00069790 f44f19a9 stp       x20, x19, [sp, #0x190]
0x00069794 fd830591 add       x29, sp, #0x160
0x00069798 f30300aa mov       x19, x0
0x0006979C 202d0090 adrp      x0, #0x60d000 << RESOURCE ADDRESS
0x000697A0 00e42791 add       x0, x0, #0x9f9 << RESOURCE ADDRESS
0x000697A4 a8e300d1 sub       x8, x29, #0x38
0x000697A8 f6430091 add       x22, sp, #0x10
0x000697AC 7d000094 bl        #0x699a0
0x000697B0 df7e0aa9 stp       xzr, xzr, [x22, #0xa0]
0x000697B4 a83900d0 adrp      x8, #0x79f000
0x000697B8 ff1f00f9 str       xzr, [sp, #0x38]
0x000697BC df7e09a9 stp       xzr, xzr, [x22, #0x90]
0x000697C0 ffff02a9 stp       xzr, xzr, [sp, #0x28]
0x000697C4 087143f9 ldr       x8, [x8, #0x6e0]
0x000697C8 08410091 add       x8, x8, #0x10
0x000697CC ff1300f9 str       xzr, [sp, #0x20]
0x000697D0 e80b00f9 str       x8, [sp, #0x10]
0x000697D4 5f641294 bl        #0x502950
0x000697D8 a83900d0 adrp      x8, #0x79f000
0x000697DC 047041f9 ldr       x4, [x0, #0x2e0]
0x000697E0 a2e300d1 sub       x2, x29, #0x38
0x000697E4 08a942f9 ldr       x8, [x8, #0x550]
0x000697E8 e1031f2a mov       w1, wzr
0x000697EC e3031f2a mov       w3, wzr
0x000697F0 e5031faa mov       x5, xzr
0x000697F4 000140f9 ldr       x0, [x8]
0x000697F8 a82300d1 sub       x8, x29, #8
0x000697FC eda8fe97 bl        #0x13bb0
0x00069800 d4a640f9 ldr       x20, [x22, #0x148]
0x00069804 f40f00f9 str       x20, [sp, #0x18]
0x00069808 140500b4 cbz       x20, #0x698a8
0x0006980C f50314aa mov       x21, x20
0x00069810 a88e44f8 ldr       x8, [x21, #0x48]!
0x00069814 e00315aa mov       x0, x21
0x00069818 080940f9 ldr       x8, [x8, #0x10]
0x0006981C 00013fd6 blr       x8
0x00069820 e00314aa mov       x0, x20
0x00069824 6fbd1194 bl        #0x4d8de0
0x00069828 a80240f9 ldr       x8, [x21]
0x0006982C e00315aa mov       x0, x21
0x00069830 080d40f9 ldr       x8, [x8, #0x18]
0x00069834 00013fd6 blr       x8
0x00069838 e00f40f9 ldr       x0, [sp, #0x18]
0x0006983C 14c840f9 ldr       x20, [x0, #0x190]
0x00069840 880240b9 ldr       w8, [x20]
0x00069844 a8030034 cbz       w8, #0x698b8
0x00069848 f5031faa mov       x21, xzr
0x0006984C 73a20291 add       x19, x19, #0xa8
0x00069850 97320091 add       x23, x20, #0xc
0x00069854 e8825ff8 ldur      x8, [x23, #-8]
0x00069858 a12300d1 sub       x1, x29, #8
0x0006985C a22300d1 sub       x2, x29, #8
0x00069860 e3330091 add       x3, sp, #0xc
0x00069864 e00313aa mov       x0, x19
0x00069868 c8a600f9 str       x8, [x22, #0x148]
0x0006986C e80641f8 ldr       x8, [x23], #0x10
0x00069870 e81b0079 strh      w8, [sp, #0xc]
0x00069874 87010094 bl        #0x69e90
0x00069878 880240b9 ldr       w8, [x20]
0x0006987C b5060091 add       x21, x21, #1
0x00069880 bf0208eb cmp       x21, x8
0x00069884 83feff54 b.lo      #0x69854
0x00069888 e83700d0 adrp      x8, #0x767000
0x0006988C 08212591 add       x8, x8, #0x948
0x00069890 e00f40f9 ldr       x0, [sp, #0x18]
0x00069894 08410091 add       x8, x8, #0x10
0x00069898 e80b00f9 str       x8, [sp, #0x10]
0x0006989C 600100b5 cbnz      x0, #0x698c8
0x000698A0 ff0f00f9 str       xzr, [sp, #0x18]
0x000698A4 11000014 b         #0x698e8
0x000698A8 e0031faa mov       x0, xzr
0x000698AC 14c840f9 ldr       x20, [x0, #0x190]
0x000698B0 880240b9 ldr       w8, [x20]
0x000698B4 a8fcff35 cbnz      w8, #0x69848
0x000698B8 e83700d0 adrp      x8, #0x767000
0x000698BC 08212591 add       x8, x8, #0x948
0x000698C0 08410091 add       x8, x8, #0x10
0x000698C4 e80b00f9 str       x8, [sp, #0x10]
0x000698C8 e1430091 add       x1, sp, #0x10
0x000698CC 71be1194 bl        #0x4d9290
0x000698D0 e00f40f9 ldr       x0, [sp, #0x18]
0x000698D4 ff0f00f9 str       xzr, [sp, #0x18]
0x000698D8 800000b4 cbz       x0, #0x698e8
0x000698DC 088c44f8 ldr       x8, [x0, #0x48]!
0x000698E0 080d40f9 ldr       x8, [x8, #0x18]
0x000698E4 00013fd6 blr       x8
0x000698E8 c84e40f9 ldr       x8, [x22, #0x98]
0x000698EC e80000b4 cbz       x8, #0x69908
0x000698F0 ea430091 add       x10, sp, #0x10
0x000698F4 c9420291 add       x9, x22, #0x90
0x000698F8 40c10291 add       x0, x10, #0xb0
0x000698FC 3f7d01a9 stp       xzr, xzr, [x9, #0x10]
0x00069900 3f7d00a9 stp       xzr, xzr, [x9]
0x00069904 00013fd6 blr       x8
0x00069908 e81740f9 ldr       x8, [sp, #0x28]
0x0006990C c80000b4 cbz       x8, #0x69924
0x00069910 e9430091 add       x9, sp, #0x10
0x00069914 ff7f03a9 stp       xzr, xzr, [sp, #0x30]
0x00069918 20c10091 add       x0, x9, #0x30
0x0006991C ff7f02a9 stp       xzr, xzr, [sp, #0x20]
0x00069920 00013fd6 blr       x8
0x00069924 e00f40f9 ldr       x0, [sp, #0x18]
0x00069928 800000b4 cbz       x0, #0x69938
0x0006992C 088c44f8 ldr       x8, [x0, #0x48]!
0x00069930 080d40f9 ldr       x8, [x8, #0x18]
0x00069934 00013fd6 blr       x8
0x00069938 c89a40f9 ldr       x8, [x22, #0x130]
0x0006993C c80000b4 cbz       x8, #0x69954
0x00069940 c08e40f9 ldr       x0, [x22, #0x118]
0x00069944 800000b4 cbz       x0, #0x69954
0x00069948 088c44f8 ldr       x8, [x0, #0x48]!
0x0006994C 080d40f9 ldr       x8, [x8, #0x18]
0x00069950 00013fd6 blr       x8
0x00069954 c09e40f9 ldr       x0, [x22, #0x138]
0x00069958 a8c884d2 mov       x8, #0x2645
0x0006995C 4884b0f2 movk      x8, #0x8422, lsl #16
0x00069960 889cd3f2 movk      x8, #0x9ce4, lsl #32
0x00069964 487ef9f2 movk      x8, #0xcbf2, lsl #48
0x00069968 dfa211a9 stp       xzr, x8, [x22, #0x118]
0x0006996C 282d00d0 adrp      x8, #0x60f000
0x00069970 080d1a91 add       x8, x8, #0x683
0x00069974 c8fe12a9 stp       x8, xzr, [x22, #0x128]
0x00069978 800000b4 cbz       x0, #0x69988
0x0006997C 088c44f8 ldr       x8, [x0, #0x48]!
0x00069980 080d40f9 ldr       x8, [x8, #0x18]
0x00069984 00013fd6 blr       x8
0x00069988 f44f59a9 ldp       x20, x19, [sp, #0x190]
0x0006998C f65758a9 ldp       x22, x21, [sp, #0x180]
0x00069990 fc5f57a9 ldp       x28, x23, [sp, #0x170]
0x00069994 fd7b56a9 ldp       x29, x30, [sp, #0x160]
0x00069998 ff830691 add       sp, sp, #0x1a0
0x0006999C c0035fd6 ret       
0x000699A0 fd7bbda9 stp       x29, x30, [sp, #-0x30]!
0x000699A4 f50b00f9 str       x21, [sp, #0x10]
0x000699A8 f44f02a9 stp       x20, x19, [sp, #0x20]
0x000699AC fd030091 mov       x29, sp
0x000699B0 b53900d0 adrp      x21, #0x79f000
0x000699B4 f40300aa mov       x20, x0
0x000699B8 b5e242f9 ldr       x21, [x21, #0x5c0]
0x000699BC f30308aa mov       x19, x8
0x000699C0 e00315aa mov       x0, x21
0x000699C4 2b321694 bl        #0x5f6270
0x000699C8 e20300aa mov       x2, x0
0x000699CC e00314aa mov       x0, x20
0x000699D0 e10315aa mov       x1, x21
0x000699D4 2b321694 bl        #0x5f6280
0x000699D8 60020034 cbz       w0, #0x69a24
```

## bin/pml/item — main+0x68C4C

资源常量：\`bin/pml/item\`

原始指令: \`90002D69\`; 后续 ADD: \`9112A129\`

```asm
0x00068B4C c80244f9 ldr       x8, [x22, #0x800]
0x00068B50 680100b4 cbz       x8, #0x68b7c
0x00068B54 a03900f0 adrp      x0, #0x79f000
0x00068B58 09f17dd3 lsl       x9, x8, #3
0x00068B5C 00e441f9 ldr       x0, [x0, #0x3c8]
0x00068B60 0a0040f9 ldr       x10, [x0]
0x00068B64 5f0114eb cmp       x10, x20
0x00068B68 c0000054 b.eq      #0x68b80
0x00068B6C 00200091 add       x0, x0, #8
0x00068B70 292100f1 subs      x9, x9, #8
0x00068B74 61ffff54 b.ne      #0x68b60
0x00068B78 0d000014 b         #0x68bac
0x00068B7C e00316aa mov       x0, x22
0x00068B80 c90e088b add       x9, x22, x8, lsl #3
0x00068B84 1f0009eb cmp       x0, x9
0x00068B88 20010054 b.eq      #0x68bac
0x00068B8C 01200091 add       x1, x0, #8
0x00068B90 3f0009eb cmp       x1, x9
0x00068B94 80000054 b.eq      #0x68ba4
0x00068B98 220101cb sub       x2, x9, x1
0x00068B9C 75351694 bl        #0x5f6170
0x00068BA0 c80244f9 ldr       x8, [x22, #0x800]
0x00068BA4 080500d1 sub       x8, x8, #1
0x00068BA8 c80204f9 str       x8, [x22, #0x800]
0x00068BAC e8098052 mov       w8, #0x4f
0x00068BB0 bf7e5f08 ldxrb     wzr, [x21]
0x00068BB4 a8fe0908 stlxrb    w9, w8, [x21]
0x00068BB8 c9ffff35 cbnz      w9, #0x68bb0
0x00068BBC bf3b03d5 dmb       ish
0x00068BC0 680e4039 ldrb      w8, [x19, #3]
0x00068BC4 e8000034 cbz       w8, #0x68be0
0x00068BC8 e00313aa mov       x0, x19
0x00068BCC f44f43a9 ldp       x20, x19, [sp, #0x30]
0x00068BD0 f65742a9 ldp       x22, x21, [sp, #0x20]
0x00068BD4 f70b40f9 ldr       x23, [sp, #0x10]
0x00068BD8 fd7bc4a8 ldp       x29, x30, [sp], #0x40
0x00068BDC 69351614 b         #0x5f6180
0x00068BE0 f44f43a9 ldp       x20, x19, [sp, #0x30]
0x00068BE4 f70b40f9 ldr       x23, [sp, #0x10]
0x00068BE8 f65742a9 ldp       x22, x21, [sp, #0x20]
0x00068BEC fd7bc4a8 ldp       x29, x30, [sp], #0x40
0x00068BF0 c0035fd6 ret       
0x00068BF4 53ffff17 b         #0x68940
0x00068BF8 fd7bbea9 stp       x29, x30, [sp, #-0x20]!
0x00068BFC f30b00f9 str       x19, [sp, #0x10]
0x00068C00 fd030091 mov       x29, sp
0x00068C04 f30300aa mov       x19, x0
0x00068C08 12671294 bl        #0x502850
0x00068C0C e00313aa mov       x0, x19
0x00068C10 08000094 bl        #0x68c30
0x00068C14 e00313aa mov       x0, x19
0x00068C18 f30b40f9 ldr       x19, [sp, #0x10]
0x00068C1C fd7bc2a8 ldp       x29, x30, [sp], #0x20
0x00068C20 d8020014 b         #0x69780
0x00068C24 00000000 udf       #0
0x00068C28 00000000 udf       #0
0x00068C2C 00000000 udf       #0
0x00068C30 fd7bbca9 stp       x29, x30, [sp, #-0x40]!
0x00068C34 fc5f01a9 stp       x28, x23, [sp, #0x10]
0x00068C38 fd030091 mov       x29, sp
0x00068C3C f65702a9 stp       x22, x21, [sp, #0x20]
0x00068C40 f44f03a9 stp       x20, x19, [sp, #0x30]
0x00068C44 ff030dd1 sub       sp, sp, #0x340
0x00068C48 c8008052 mov       w8, #6
0x00068C4C 692d0090 adrp      x9, #0x614000 << RESOURCE ADDRESS
0x00068C50 29a11291 add       x9, x9, #0x4a8 << RESOURCE ADDRESS
0x00068C54 e85b00b9 str       w8, [sp, #0x58]
0x00068C58 882d0090 adrp      x8, #0x618000
0x00068C5C 08111c91 add       x8, x8, #0x704
0x00068C60 e82706a9 stp       x8, x9, [sp, #0x60]
0x00068C64 882d00f0 adrp      x8, #0x61b000
0x00068C68 08311a91 add       x8, x8, #0x68c
0x00068C6C 692d00f0 adrp      x9, #0x617000
0x00068C70 29810b91 add       x9, x9, #0x2e0
0x00068C74 e82307a9 stp       x8, x8, [sp, #0x70]
0x00068C78 b4c884d2 mov       x20, #0x2645
0x00068C7C 5484b0f2 movk      x20, #0x8422, lsl #16
0x00068C80 e82308a9 stp       x8, x8, [sp, #0x80]
0x00068C84 b67c86d2 mov       x22, #0x33e5
0x00068C88 5697aaf2 movk      x22, #0x54ba, lsl #16
0x00068C8C f30300aa mov       x19, x0
0x00068C90 e82309a9 stp       x8, x8, [sp, #0x90]
0x00068C94 949cd3f2 movk      x20, #0x9ce4, lsl #32
0x00068C98 547ef9f2 movk      x20, #0xcbf2, lsl #48
0x00068C9C 352d00f0 adrp      x21, #0x60f000
0x00068CA0 b50e1a91 add       x21, x21, #0x683
0x00068CA4 e8270aa9 stp       x8, x9, [sp, #0xa0]
0x00068CA8 282d0090 adrp      x8, #0x60c000
0x00068CAC 08550b91 add       x8, x8, #0x2d5
0x00068CB0 692d00d0 adrp      x9, #0x616000
0x00068CB4 29fd1e91 add       x9, x9, #0x7bf
0x00068CB8 e8270ba9 stp       x8, x9, [sp, #0xb0]
0x00068CBC 282d00d0 adrp      x8, #0x60e000
0x00068CC0 088d0a91 add       x8, x8, #0x2a3
0x00068CC4 a92d0090 adrp      x9, #0x61c000
0x00068CC8 29d52f91 add       x9, x9, #0xbf5
0x00068CCC e8270ca9 stp       x8, x9, [sp, #0xc0]
0x00068CD0 482d00b0 adrp      x8, #0x611000
0x00068CD4 08212691 add       x8, x8, #0x988
0x00068CD8 16b3daf2 movk      x22, #0xd598, lsl #32
0x00068CDC 1630eef2 movk      x22, #0x7180, lsl #48
0x00068CE0 e87f0da9 stp       x8, xzr, [sp, #0xd0]
0x00068CE4 e8028052 mov       w8, #0x17
0x00068CE8 572d0090 adrp      x23, #0x610000
0x00068CEC f7b20d91 add       x23, x23, #0x36c
0x00068CF0 e0230091 add       x0, sp, #8
0x00068CF4 e8ff01a9 stp       x8, xzr, [sp, #0x18]
0x00068CF8 e8a30091 add       x8, sp, #0x28
0x00068CFC e1031f2a mov       w1, wzr
0x00068D00 ff0301b9 str       wzr, [sp, #0x100]
0x00068D04 ff9700f9 str       xzr, [sp, #0x128]
0x00068D08 ff3301b9 str       wzr, [sp, #0x130]
0x00068D0C ffaf00f9 str       xzr, [sp, #0x158]
0x00068D10 ff6301b9 str       wzr, [sp, #0x160]
0x00068D14 ff9301b9 str       wzr, [sp, #0x190]
0x00068D18 f5bf00f9 str       x21, [sp, #0x178]
0x00068D1C ffdf00f9 str       xzr, [sp, #0x1b8]
0x00068D20 ffc301b9 str       wzr, [sp, #0x1c0]
0x00068D24 fff700f9 str       xzr, [sp, #0x1e8]
0x00068D28 fff301b9 str       wzr, [sp, #0x1f0]
0x00068D2C ff2302b9 str       wzr, [sp, #0x220]
0x00068D30 ff0f01f9 str       xzr, [sp, #0x218]
0x00068D34 f50701f9 str       x21, [sp, #0x208]
0x00068D38 ff0b01f9 str       xzr, [sp, #0x210]
0x00068D3C ff1701f9 str       xzr, [sp, #0x228]
0x00068D40 f41b01f9 str       x20, [sp, #0x230]
0x00068D44 ff5302b9 str       wzr, [sp, #0x250]
0x00068D48 ff2701f9 str       xzr, [sp, #0x248]
0x00068D4C f51f01f9 str       x21, [sp, #0x238]
0x00068D50 ff2301f9 str       xzr, [sp, #0x240]
0x00068D54 ff2f01f9 str       xzr, [sp, #0x258]
0x00068D58 f43301f9 str       x20, [sp, #0x260]
0x00068D5C f53701f9 str       x21, [sp, #0x268]
0x00068D60 ff8302b9 str       wzr, [sp, #0x280]
0x00068D64 ff3f01f9 str       xzr, [sp, #0x278]
0x00068D68 ff3b01f9 str       xzr, [sp, #0x270]
0x00068D6C ff4701f9 str       xzr, [sp, #0x288]
0x00068D70 f44b01f9 str       x20, [sp, #0x290]
0x00068D74 f54f01f9 str       x21, [sp, #0x298]
0x00068D78 ffb302b9 str       wzr, [sp, #0x2b0]
0x00068D7C ff5701f9 str       xzr, [sp, #0x2a8]
0x00068D80 ff5301f9 str       xzr, [sp, #0x2a0]
0x00068D84 ff5f01f9 str       xzr, [sp, #0x2b8]
0x00068D88 f46301f9 str       x20, [sp, #0x2c0]
0x00068D8C f56701f9 str       x21, [sp, #0x2c8]
0x00068D90 ffe302b9 str       wzr, [sp, #0x2e0]
0x00068D94 ff6f01f9 str       xzr, [sp, #0x2d8]
0x00068D98 ff6b01f9 str       xzr, [sp, #0x2d0]
0x00068D9C ff7701f9 str       xzr, [sp, #0x2e8]
0x00068DA0 f47b01f9 str       x20, [sp, #0x2f0]
0x00068DA4 f57f01f9 str       x21, [sp, #0x2f8]
0x00068DA8 ff1303b9 str       wzr, [sp, #0x310]
0x00068DAC ff8701f9 str       xzr, [sp, #0x308]
0x00068DB0 ff8301f9 str       xzr, [sp, #0x300]
0x00068DB4 f4570ea9 stp       x20, x21, [sp, #0xe0]
0x00068DB8 ff7f0fa9 stp       xzr, xzr, [sp, #0xf0]
0x00068DBC ffd310a9 stp       xzr, x20, [sp, #0x108]
0x00068DC0 f5ff11a9 stp       x21, xzr, [sp, #0x118]
0x00068DC4 ffd313a9 stp       xzr, x20, [sp, #0x138]
0x00068DC8 f5ff14a9 stp       x21, xzr, [sp, #0x148]
0x00068DCC ffd316a9 stp       xzr, x20, [sp, #0x168]
0x00068DD0 ff7f18a9 stp       xzr, xzr, [sp, #0x180]
0x00068DD4 ffd319a9 stp       xzr, x20, [sp, #0x198]
0x00068DD8 f5ff1aa9 stp       x21, xzr, [sp, #0x1a8]
0x00068DDC ffd31ca9 stp       xzr, x20, [sp, #0x1c8]
0x00068DE0 f5ff1da9 stp       x21, xzr, [sp, #0x1d8]
0x00068DE4 ffd31fa9 stp       xzr, x20, [sp, #0x1f8]
0x00068DE8 f6df00a9 stp       x22, x23, [sp, #8]
0x00068DEC 91c8ff97 bl        #0x5b030
0x00068DF0 e87b40f9 ldr       x8, [sp, #0xf0]
0x00068DF4 c80000b4 cbz       x8, #0x68e0c
0x00068DF8 e06f40f9 ldr       x0, [sp, #0xd8]
0x00068DFC 800000b4 cbz       x0, #0x68e0c
0x00068E00 088c44f8 ldr       x8, [x0, #0x48]!
0x00068E04 080d40f9 ldr       x8, [x8, #0x18]
0x00068E08 00013fd6 blr       x8
0x00068E0C e07f40f9 ldr       x0, [sp, #0xf8]
0x00068E10 ffd30da9 stp       xzr, x20, [sp, #0xd8]
0x00068E14 f5ff0ea9 stp       x21, xzr, [sp, #0xe8]
0x00068E18 800000b4 cbz       x0, #0x68e28
0x00068E1C 088c44f8 ldr       x8, [x0, #0x48]!
0x00068E20 080d40f9 ldr       x8, [x8, #0x18]
0x00068E24 00013fd6 blr       x8
0x00068E28 e82744a9 ldp       x8, x9, [sp, #0x40]
0x00068E2C ff2700f9 str       xzr, [sp, #0x48]
0x00068E30 ea2f43a9 ldp       x10, x11, [sp, #0x30]
0x00068E34 e8270fa9 stp       x8, x9, [sp, #0xf0]
0x00068E38 e95340b9 ldr       w9, [sp, #0x50]
0x00068E3C ea2f0ea9 stp       x10, x11, [sp, #0xe0]
0x00068E40 e90301b9 str       w9, [sp, #0x100]
0x00068E44 c80000b4 cbz       x8, #0x68e5c
0x00068E48 e06f40f9 ldr       x0, [sp, #0xd8]
0x00068E4C 800000b4 cbz       x0, #0x68e5c
0x00068E50 088c44f8 ldr       x8, [x0, #0x48]!
0x00068E54 080d40f9 ldr       x8, [x8, #0x18]
0x00068E58 00013fd6 blr       x8
0x00068E5C e81740f9 ldr       x8, [sp, #0x28]
0x00068E60 ffd302a9 stp       xzr, x20, [sp, #0x28]
0x00068E64 e02740f9 ldr       x0, [sp, #0x48]
0x00068E68 e86f00f9 str       x8, [sp, #0xd8]
0x00068E6C f5ff03a9 stp       x21, xzr, [sp, #0x38]
0x00068E70 800000b4 cbz       x0, #0x68e80
0x00068E74 088c44f8 ldr       x8, [x0, #0x48]!
0x00068E78 080d40f9 ldr       x8, [x8, #0x18]
0x00068E7C 00013fd6 blr       x8
0x00068E80 e01340f9 ldr       x0, [sp, #0x20]
0x00068E84 ff2700f9 str       xzr, [sp, #0x48]
0x00068E88 ff5300b9 str       wzr, [sp, #0x50]
```

