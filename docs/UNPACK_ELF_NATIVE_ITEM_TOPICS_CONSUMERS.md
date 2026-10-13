# HOME 4.1.0 原生读取者和字节宽度 — 精确 ELF 证据

构建原始 ELF SHA256: \`bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a\`

**已证实的机器码事实**：在哈希索引迭代处，原生读取的记录
步长为 \`0x10\`（16 字节），并将一个值通过 \`STRH\`
写入栈上临时缓冲，因此仅使用其低 16 位。这里只证明访问
宽度，不擅自给哈希算法或 item.dat 的 48 字节字段命名。

topics 路径在 \`0x12B10\`，在 \`0x12B44\`
调用通用资源装载函数，并在 \`0x12B64\`
将所获对象赋给 "x19+0x508"。数据槽内各字段用途未证明。

**仍待追踪**：item.dat 的 48-byte record member Getter、
类别/效果/数值参数的 native accessor，以及 312-byte topic
记录消费者。因此本文不能把这些业务字段称为已恢复。

## PML hash index loader: main+0x69780

```asm
0x00069730 800000b4 cbz      x0, #0x69740
0x00069734 088c44f8 ldr      x8, [x0, #0x48]!
0x00069738 080d40f9 ldr      x8, [x8, #0x18]
0x0006973C 00013fd6 blr      x8
0x00069740 e03a40f9 ldr      x0, [x23, #0x70]
0x00069744 ff5205a9 stp      xzr, x20, [x23, #0x50]
0x00069748 f57e06a9 stp      x21, xzr, [x23, #0x60]
0x0006974C 20feffb4 cbz      x0, #0x69710
0x00069750 088c44f8 ldr      x8, [x0, #0x48]!
0x00069754 080d40f9 ldr      x8, [x8, #0x18]
0x00069758 00013fd6 blr      x8
0x0006975C edffff17 b        #0x69710
0x00069760 ff030d91 add      sp, sp, #0x340
0x00069764 f44f43a9 ldp      x20, x19, [sp, #0x30]
0x00069768 f65742a9 ldp      x22, x21, [sp, #0x20]
0x0006976C fc5f41a9 ldp      x28, x23, [sp, #0x10]
0x00069770 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0x00069774 c0035fd6 ret      
0x00069778 00000000 udf      #0
0x0006977C 00000000 udf      #0
0x00069780 ff8306d1 sub      sp, sp, #0x1a0
0x00069784 fd7b16a9 stp      x29, x30, [sp, #0x160]
0x00069788 fc5f17a9 stp      x28, x23, [sp, #0x170]
0x0006978C f65718a9 stp      x22, x21, [sp, #0x180]
0x00069790 f44f19a9 stp      x20, x19, [sp, #0x190]
0x00069794 fd830591 add      x29, sp, #0x160
0x00069798 f30300aa mov      x19, x0
0x0006979C 202d0090 adrp     x0, #0x60d000  <= EXACT OPCODE CHECK
0x000697A0 00e42791 add      x0, x0, #0x9f9  <= EXACT OPCODE CHECK
0x000697A4 a8e300d1 sub      x8, x29, #0x38
0x000697A8 f6430091 add      x22, sp, #0x10
0x000697AC 7d000094 bl       #0x699a0  <= EXACT OPCODE CHECK
0x000697B0 df7e0aa9 stp      xzr, xzr, [x22, #0xa0]
0x000697B4 a83900d0 adrp     x8, #0x79f000
0x000697B8 ff1f00f9 str      xzr, [sp, #0x38]
0x000697BC df7e09a9 stp      xzr, xzr, [x22, #0x90]
0x000697C0 ffff02a9 stp      xzr, xzr, [sp, #0x28]
0x000697C4 087143f9 ldr      x8, [x8, #0x6e0]
0x000697C8 08410091 add      x8, x8, #0x10
0x000697CC ff1300f9 str      xzr, [sp, #0x20]
0x000697D0 e80b00f9 str      x8, [sp, #0x10]
0x000697D4 5f641294 bl       #0x502950
0x000697D8 a83900d0 adrp     x8, #0x79f000
0x000697DC 047041f9 ldr      x4, [x0, #0x2e0]
0x000697E0 a2e300d1 sub      x2, x29, #0x38
0x000697E4 08a942f9 ldr      x8, [x8, #0x550]
0x000697E8 e1031f2a mov      w1, wzr
0x000697EC e3031f2a mov      w3, wzr
0x000697F0 e5031faa mov      x5, xzr
0x000697F4 000140f9 ldr      x0, [x8]
0x000697F8 a82300d1 sub      x8, x29, #8
0x000697FC eda8fe97 bl       #0x13bb0
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
0x00069840 880240b9 ldr      w8, [x20]  <= EXACT OPCODE CHECK
0x00069844 a8030034 cbz      w8, #0x698b8
0x00069848 f5031faa mov      x21, xzr
0x0006984C 73a20291 add      x19, x19, #0xa8
0x00069850 97320091 add      x23, x20, #0xc  <= EXACT OPCODE CHECK
0x00069854 e8825ff8 ldur     x8, [x23, #-8]  <= EXACT OPCODE CHECK
0x00069858 a12300d1 sub      x1, x29, #8
0x0006985C a22300d1 sub      x2, x29, #8
0x00069860 e3330091 add      x3, sp, #0xc
0x00069864 e00313aa mov      x0, x19
0x00069868 c8a600f9 str      x8, [x22, #0x148]
0x0006986C e80641f8 ldr      x8, [x23], #0x10  <= EXACT OPCODE CHECK
0x00069870 e81b0079 strh     w8, [sp, #0xc]  <= EXACT OPCODE CHECK
0x00069874 87010094 bl       #0x69e90  <= EXACT OPCODE CHECK
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
0x00069910 e9430091 add      x9, sp, #0x10
0x00069914 ff7f03a9 stp      xzr, xzr, [sp, #0x30]
0x00069918 20c10091 add      x0, x9, #0x30
0x0006991C ff7f02a9 stp      xzr, xzr, [sp, #0x20]
0x00069920 00013fd6 blr      x8
0x00069924 e00f40f9 ldr      x0, [sp, #0x18]
0x00069928 800000b4 cbz      x0, #0x69938
0x0006992C 088c44f8 ldr      x8, [x0, #0x48]!
0x00069930 080d40f9 ldr      x8, [x8, #0x18]
0x00069934 00013fd6 blr      x8
0x00069938 c89a40f9 ldr      x8, [x22, #0x130]
0x0006993C c80000b4 cbz      x8, #0x69954
0x00069940 c08e40f9 ldr      x0, [x22, #0x118]
0x00069944 800000b4 cbz      x0, #0x69954
0x00069948 088c44f8 ldr      x8, [x0, #0x48]!
0x0006994C 080d40f9 ldr      x8, [x8, #0x18]
0x00069950 00013fd6 blr      x8
0x00069954 c09e40f9 ldr      x0, [x22, #0x138]
0x00069958 a8c884d2 mov      x8, #0x2645
0x0006995C 4884b0f2 movk     x8, #0x8422, lsl #16
0x00069960 889cd3f2 movk     x8, #0x9ce4, lsl #32
0x00069964 487ef9f2 movk     x8, #0xcbf2, lsl #48
0x00069968 dfa211a9 stp      xzr, x8, [x22, #0x118]
0x0006996C 282d00d0 adrp     x8, #0x60f000
0x00069970 080d1a91 add      x8, x8, #0x683
0x00069974 c8fe12a9 stp      x8, xzr, [x22, #0x128]
0x00069978 800000b4 cbz      x0, #0x69988
0x0006997C 088c44f8 ldr      x8, [x0, #0x48]!
0x00069980 080d40f9 ldr      x8, [x8, #0x18]
0x00069984 00013fd6 blr      x8
0x00069988 f44f59a9 ldp      x20, x19, [sp, #0x190]
0x0006998C f65758a9 ldp      x22, x21, [sp, #0x180]
```

## PML hash index entry iteration: main+0x69838

```asm
0x000697E8 e1031f2a mov      w1, wzr
0x000697EC e3031f2a mov      w3, wzr
0x000697F0 e5031faa mov      x5, xzr
0x000697F4 000140f9 ldr      x0, [x8]
0x000697F8 a82300d1 sub      x8, x29, #8
0x000697FC eda8fe97 bl       #0x13bb0
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
0x00069840 880240b9 ldr      w8, [x20]  <= EXACT OPCODE CHECK
0x00069844 a8030034 cbz      w8, #0x698b8
0x00069848 f5031faa mov      x21, xzr
0x0006984C 73a20291 add      x19, x19, #0xa8
0x00069850 97320091 add      x23, x20, #0xc  <= EXACT OPCODE CHECK
0x00069854 e8825ff8 ldur     x8, [x23, #-8]  <= EXACT OPCODE CHECK
0x00069858 a12300d1 sub      x1, x29, #8
0x0006985C a22300d1 sub      x2, x29, #8
0x00069860 e3330091 add      x3, sp, #0xc
0x00069864 e00313aa mov      x0, x19
0x00069868 c8a600f9 str      x8, [x22, #0x148]
0x0006986C e80641f8 ldr      x8, [x23], #0x10  <= EXACT OPCODE CHECK
0x00069870 e81b0079 strh     w8, [sp, #0xc]  <= EXACT OPCODE CHECK
0x00069874 87010094 bl       #0x69e90  <= EXACT OPCODE CHECK
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
0x00069910 e9430091 add      x9, sp, #0x10
0x00069914 ff7f03a9 stp      xzr, xzr, [sp, #0x30]
0x00069918 20c10091 add      x0, x9, #0x30
0x0006991C ff7f02a9 stp      xzr, xzr, [sp, #0x20]
0x00069920 00013fd6 blr      x8
0x00069924 e00f40f9 ldr      x0, [sp, #0x18]
0x00069928 800000b4 cbz      x0, #0x69938
0x0006992C 088c44f8 ldr      x8, [x0, #0x48]!
0x00069930 080d40f9 ldr      x8, [x8, #0x18]
0x00069934 00013fd6 blr      x8
0x00069938 c89a40f9 ldr      x8, [x22, #0x130]
0x0006993C c80000b4 cbz      x8, #0x69954
0x00069940 c08e40f9 ldr      x0, [x22, #0x118]
0x00069944 800000b4 cbz      x0, #0x69954
0x00069948 088c44f8 ldr      x8, [x0, #0x48]!
0x0006994C 080d40f9 ldr      x8, [x8, #0x18]
0x00069950 00013fd6 blr      x8
0x00069954 c09e40f9 ldr      x0, [x22, #0x138]
0x00069958 a8c884d2 mov      x8, #0x2645
0x0006995C 4884b0f2 movk     x8, #0x8422, lsl #16
0x00069960 889cd3f2 movk     x8, #0x9ce4, lsl #32
0x00069964 487ef9f2 movk     x8, #0xcbf2, lsl #48
0x00069968 dfa211a9 stp      xzr, x8, [x22, #0x118]
0x0006996C 282d00d0 adrp     x8, #0x60f000
0x00069970 080d1a91 add      x8, x8, #0x683
0x00069974 c8fe12a9 stp      x8, xzr, [x22, #0x128]
0x00069978 800000b4 cbz      x0, #0x69988
0x0006997C 088c44f8 ldr      x8, [x0, #0x48]!
0x00069980 080d40f9 ldr      x8, [x8, #0x18]
0x00069984 00013fd6 blr      x8
0x00069988 f44f59a9 ldp      x20, x19, [sp, #0x190]
0x0006998C f65758a9 ldp      x22, x21, [sp, #0x180]
0x00069990 fc5f57a9 ldp      x28, x23, [sp, #0x170]
0x00069994 fd7b56a9 ldp      x29, x30, [sp, #0x160]
0x00069998 ff830691 add      sp, sp, #0x1a0
0x0006999C c0035fd6 ret      
0x000699A0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x000699A4 f50b00f9 str      x21, [sp, #0x10]
0x000699A8 f44f02a9 stp      x20, x19, [sp, #0x20]
0x000699AC fd030091 mov      x29, sp
0x000699B0 b53900d0 adrp     x21, #0x79f000
0x000699B4 f40300aa mov      x20, x0
0x000699B8 b5e242f9 ldr      x21, [x21, #0x5c0]
0x000699BC f30308aa mov      x19, x8
0x000699C0 e00315aa mov      x0, x21
0x000699C4 2b321694 bl       #0x5f6270
0x000699C8 e20300aa mov      x2, x0
0x000699CC e00314aa mov      x0, x20
0x000699D0 e10315aa mov      x1, x21
0x000699D4 2b321694 bl       #0x5f6280
0x000699D8 60020034 cbz      w0, #0x69a24
0x000699DC a03900d0 adrp     x0, #0x79f000
0x000699E0 a8630091 add      x8, x29, #0x18
0x000699E4 00e042f9 ldr      x0, [x0, #0x5c0]
0x000699E8 e10314aa mov      x1, x20
0x000699EC 08010094 bl       #0x69e0c
0x000699F0 a1630091 add      x1, x29, #0x18
0x000699F4 e00313aa mov      x0, x19
0x000699F8 e2031f2a mov      w2, wzr
0x000699FC e7cd1194 bl       #0x4dd198
0x00069A00 a00f40f9 ldr      x0, [x29, #0x18]
0x00069A04 800000b4 cbz      x0, #0x69a14
0x00069A08 088c44f8 ldr      x8, [x0, #0x48]!
0x00069A0C 080d40f9 ldr      x8, [x8, #0x18]
0x00069A10 00013fd6 blr      x8
0x00069A14 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00069A18 f50b40f9 ldr      x21, [sp, #0x10]
0x00069A1C fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00069A20 c0035fd6 ret      
0x00069A24 e00313aa mov      x0, x19
0x00069A28 e10314aa mov      x1, x20
0x00069A2C 6a81fe97 bl       #0x9fd4
0x00069A30 740240f9 ldr      x20, [x19]
0x00069A34 a83900d0 adrp     x8, #0x79f000
0x00069A38 89620191 add      x9, x20, #0x58
0x00069A3C 08e542f9 ldr      x8, [x8, #0x5c8]
0x00069A40 9f0200f1 cmp      x20, #0
0x00069A44 8a820191 add      x10, x20, #0x60
```

## PML hash index insertion callee: main+0x69E90

```asm
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
```

## PML item.dat formatting/load request: main+0x502104

```asm
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
0x00502104 c50800f0 adrp     x5, #0x61d000  <= EXACT OPCODE CHECK
0x00502108 a5d03a91 add      x5, x5, #0xeb4  <= EXACT OPCODE CHECK
0x0050210C e0030091 mov      x0, sp
0x00502110 e11f8052 mov      w1, #0xff
0x00502114 77d10394 bl       #0x5f66f0  <= EXACT OPCODE CHECK
0x00502118 e0030091 mov      x0, sp
0x0050211C e80313aa mov      x8, x19
0x00502120 ffff0339 strb     wzr, [sp, #0xff]
0x00502124 06000094 bl       #0x50213c  <= EXACT OPCODE CHECK
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
```

## PML item.dat dispatch: main+0x50213C

```asm
0x005020EC 02000014 b        #0x5020f4
0x005020F0 e40308aa mov      x4, x8
0x005020F4 9f0200f1 cmp      x20, #0
0x005020F8 c20800d0 adrp     x2, #0x61c000
0x005020FC 42a01391 add      x2, x2, #0x4e8
0x00502100 0301949a csel     x3, x8, x20, eq
0x00502104 c50800f0 adrp     x5, #0x61d000  <= EXACT OPCODE CHECK
0x00502108 a5d03a91 add      x5, x5, #0xeb4  <= EXACT OPCODE CHECK
0x0050210C e0030091 mov      x0, sp
0x00502110 e11f8052 mov      w1, #0xff
0x00502114 77d10394 bl       #0x5f66f0  <= EXACT OPCODE CHECK
0x00502118 e0030091 mov      x0, sp
0x0050211C e80313aa mov      x8, x19
0x00502120 ffff0339 strb     wzr, [sp, #0xff]
0x00502124 06000094 bl       #0x50213c  <= EXACT OPCODE CHECK
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
```

## PML item global context: main+0x502950

```asm
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
0x00502B10 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x00502B14 f30b00f9 str      x19, [sp, #0x10]
0x00502B18 fd030091 mov      x29, sp
0x00502B1C f303012a mov      w19, w1
0x00502B20 50ee0094 bl       #0x53e460
0x00502B24 084c4039 ldrb     w8, [x0, #0x13]
0x00502B28 1f1d00f1 cmp      x8, #7
0x00502B2C a9000054 b.ls     #0x502b40
0x00502B30 20008052 mov      w0, #1
0x00502B34 f30b40f9 ldr      x19, [sp, #0x10]
0x00502B38 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00502B3C c0035fd6 ret      
0x00502B40 89328052 mov      w9, #0x194
0x00502B44 aa0a00f0 adrp     x10, #0x659000
0x00502B48 4a810991 add      x10, x10, #0x260
0x00502B4C 0829a99b umaddl   x8, w8, w9, x10
0x00502B50 800c8052 mov      w0, #0x64
0x00502B54 09210091 add      x9, x8, #8
0x00502B58 48008052 mov      w8, #2
0x00502B5C 1f2003d5 nop      
```

## Pokédex topics load: main+0x12B10

```asm
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
0x00012B10 003000b0 adrp     x0, #0x613000  <= EXACT OPCODE CHECK
0x00012B14 00142791 add      x0, x0, #0x9c5  <= EXACT OPCODE CHECK
0x00012B18 e8230091 add      x8, sp, #8
0x00012B1C 84ceff97 bl       #0x652c  <= EXACT OPCODE CHECK
0x00012B20 773c00b0 adrp     x23, #0x79f000
0x00012B24 a82300d1 sub      x8, x29, #8
0x00012B28 f7aa42f9 ldr      x23, [x23, #0x550]
0x00012B2C e40340f9 ldr      x4, [sp]
0x00012B30 e2230091 add      x2, sp, #8
0x00012B34 21008052 mov      w1, #1
0x00012B38 e3031f2a mov      w3, wzr
0x00012B3C e5031faa mov      x5, xzr
0x00012B40 e00240f9 ldr      x0, [x23]
0x00012B44 1b040094 bl       #0x13bb0  <= EXACT OPCODE CHECK
0x00012B48 608642f9 ldr      x0, [x19, #0x508]
0x00012B4C 800000b4 cbz      x0, #0x12b5c
0x00012B50 088c44f8 ldr      x8, [x0, #0x48]!
0x00012B54 080d40f9 ldr      x8, [x8, #0x18]
0x00012B58 00013fd6 blr      x8
0x00012B5C b5835ff8 ldur     x21, [x29, #-8]
0x00012B60 783c00b0 adrp     x24, #0x79f000
0x00012B64 758602f9 str      x21, [x19, #0x508]  <= EXACT OPCODE CHECK
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
0x00012C70 61421891 add      x1, x19, #0x610
0x00012C74 e00315aa mov      x0, x21
0x00012C78 22008052 mov      w2, #1
0x00012C7C e5181394 bl       #0x4d9010
0x00012C80 880240f9 ldr      x8, [x20]
0x00012C84 e00314aa mov      x0, x20
0x00012C88 080d40f9 ldr      x8, [x8, #0x18]
0x00012C8C 00013fd6 blr      x8
0x00012C90 e81340f9 ldr      x8, [sp, #0x20]
0x00012C94 c80000b4 cbz      x8, #0x12cac
0x00012C98 e00740f9 ldr      x0, [sp, #8]
0x00012C9C 800000b4 cbz      x0, #0x12cac
0x00012CA0 088c44f8 ldr      x8, [x0, #0x48]!
0x00012CA4 080d40f9 ldr      x8, [x8, #0x18]
0x00012CA8 00013fd6 blr      x8
0x00012CAC e01740f9 ldr      x0, [sp, #0x28]
0x00012CB0 ffe700a9 stp      xzr, x25, [sp, #8]
0x00012CB4 f6ff01a9 stp      x22, xzr, [sp, #0x18]
0x00012CB8 800000b4 cbz      x0, #0x12cc8
0x00012CBC 088c44f8 ldr      x8, [x0, #0x48]!
0x00012CC0 080d40f9 ldr      x8, [x8, #0x18]
0x00012CC4 00013fd6 blr      x8
0x00012CC8 f44f49a9 ldp      x20, x19, [sp, #0x90]
0x00012CCC f65748a9 ldp      x22, x21, [sp, #0x80]
0x00012CD0 f85f47a9 ldp      x24, x23, [sp, #0x70]
0x00012CD4 fa6746a9 ldp      x26, x25, [sp, #0x60]
0x00012CD8 fc6f45a9 ldp      x28, x27, [sp, #0x50]
0x00012CDC fd7b44a9 ldp      x29, x30, [sp, #0x40]
0x00012CE0 ff830291 add      sp, sp, #0xa0
0x00012CE4 c0035fd6 ret      
0x00012CE8 cabfff97 bl       #0x2c10
0x00012CEC a80240f9 ldr      x8, [x21]
0x00012CF0 e00315aa mov      x0, x21
0x00012CF4 085d40f9 ldr      x8, [x8, #0xb8]
0x00012CF8 00013fd6 blr      x8
0x00012CFC e0031faa mov      x0, xzr
0x00012D00 e10315aa mov      x1, x21
0x00012D04 b5f70a94 bl       #0x2d0bd8
0x00012D08 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00012D0C f50b00f9 str      x21, [sp, #0x10]
0x00012D10 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00012D14 fd030091 mov      x29, sp
0x00012D18 753c00b0 adrp     x21, #0x79f000
0x00012D1C f40300aa mov      x20, x0
```

## Pokédex topics resource selector: main+0x652C

```asm
0x000064DC 601240f9 ldr      x0, [x19, #0x20]
0x000064E0 741200f9 str      x20, [x19, #0x20]
0x000064E4 800000b4 cbz      x0, #0x64f4
0x000064E8 088c44f8 ldr      x8, [x0, #0x48]!
0x000064EC 080d40f9 ldr      x8, [x8, #0x18]
0x000064F0 00013fd6 blr      x8
0x000064F4 7f2a00b9 str      wzr, [x19, #0x28]
0x000064F8 e00313aa mov      x0, x19
0x000064FC f50b40f9 ldr      x21, [sp, #0x10]
0x00006500 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00006504 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00006508 621b0014 b        #0xd290
0x0000650C 68a600a9 stp      x8, x9, [x19, #8]
0x00006510 7ffe01a9 stp      xzr, xzr, [x19, #0x18]
0x00006514 7f2a00b9 str      wzr, [x19, #0x28]
0x00006518 e00313aa mov      x0, x19
0x0000651C f50b40f9 ldr      x21, [sp, #0x10]
0x00006520 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00006524 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00006528 5a1b0014 b        #0xd290
0x0000652C fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00006530 f50b00f9 str      x21, [sp, #0x10]
0x00006534 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00006538 fd030091 mov      x29, sp
0x0000653C d53c00b0 adrp     x21, #0x79f000
0x00006540 f40300aa mov      x20, x0
0x00006544 b5e242f9 ldr      x21, [x21, #0x5c0]
0x00006548 f30308aa mov      x19, x8
0x0000654C e00315aa mov      x0, x21
0x00006550 48bf1794 bl       #0x5f6270
0x00006554 e20300aa mov      x2, x0
0x00006558 e00314aa mov      x0, x20
0x0000655C e10315aa mov      x1, x21
0x00006560 48bf1794 bl       #0x5f6280
0x00006564 60020034 cbz      w0, #0x65b0
0x00006568 c03c00b0 adrp     x0, #0x79f000
0x0000656C a8630091 add      x8, x29, #0x18
0x00006570 00e042f9 ldr      x0, [x0, #0x5c0]
0x00006574 e10314aa mov      x1, x20
0x00006578 e91b0094 bl       #0xd51c
0x0000657C a1630091 add      x1, x29, #0x18
0x00006580 e00313aa mov      x0, x19
0x00006584 e2031f2a mov      w2, wzr
0x00006588 045b1394 bl       #0x4dd198
0x0000658C a00f40f9 ldr      x0, [x29, #0x18]
0x00006590 800000b4 cbz      x0, #0x65a0
0x00006594 088c44f8 ldr      x8, [x0, #0x48]!
0x00006598 080d40f9 ldr      x8, [x8, #0x18]
0x0000659C 00013fd6 blr      x8
0x000065A0 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x000065A4 f50b40f9 ldr      x21, [sp, #0x10]
0x000065A8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x000065AC c0035fd6 ret      
0x000065B0 e00313aa mov      x0, x19
0x000065B4 e10314aa mov      x1, x20
0x000065B8 870e0094 bl       #0x9fd4
0x000065BC 740240f9 ldr      x20, [x19]
0x000065C0 c83c00b0 adrp     x8, #0x79f000
0x000065C4 89620191 add      x9, x20, #0x58
0x000065C8 08e542f9 ldr      x8, [x8, #0x5c8]
0x000065CC 9f0200f1 cmp      x20, #0
0x000065D0 8a820191 add      x10, x20, #0x60
0x000065D4 0801899a csel     x8, x8, x9, eq
0x000065D8 c93c00b0 adrp     x9, #0x79f000
0x000065DC 080140f9 ldr      x8, [x8]
0x000065E0 29e942f9 ldr      x9, [x9, #0x5d0]
0x000065E4 29018a9a csel     x9, x9, x10, eq
0x000065E8 290140f9 ldr      x9, [x9]
0x000065EC 940200b4 cbz      x20, #0x663c
0x000065F0 8a3640f9 ldr      x10, [x20, #0x68]
0x000065F4 68a600a9 stp      x8, x9, [x19, #8]
0x000065F8 e00314aa mov      x0, x20
0x000065FC 6afe01a9 stp      x10, xzr, [x19, #0x18]
0x00006600 088c44f8 ldr      x8, [x0, #0x48]!
0x00006604 080940f9 ldr      x8, [x8, #0x10]
0x00006608 00013fd6 blr      x8
0x0000660C 601240f9 ldr      x0, [x19, #0x20]
0x00006610 741200f9 str      x20, [x19, #0x20]
0x00006614 800000b4 cbz      x0, #0x6624
0x00006618 088c44f8 ldr      x8, [x0, #0x48]!
0x0000661C 080d40f9 ldr      x8, [x8, #0x18]
0x00006620 00013fd6 blr      x8
0x00006624 7f2a00b9 str      wzr, [x19, #0x28]
0x00006628 e00313aa mov      x0, x19
0x0000662C f50b40f9 ldr      x21, [sp, #0x10]
0x00006630 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00006634 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00006638 161b0014 b        #0xd290
0x0000663C 68a600a9 stp      x8, x9, [x19, #8]
0x00006640 7ffe01a9 stp      xzr, xzr, [x19, #0x18]
0x00006644 7f2a00b9 str      wzr, [x19, #0x28]
0x00006648 e00313aa mov      x0, x19
0x0000664C f50b40f9 ldr      x21, [sp, #0x10]
0x00006650 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00006654 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00006658 0e1b0014 b        #0xd290
0x0000665C 00b440f9 ldr      x0, [x0, #0x168]
0x00006660 21008052 mov      w1, #1
0x00006664 22008052 mov      w2, #1
0x00006668 080040f9 ldr      x8, [x0]
0x0000666C 030540f9 ldr      x3, [x8, #8]
0x00006670 60001fd6 br       x3
0x00006674 00b440f9 ldr      x0, [x0, #0x168]
0x00006678 e1031f2a mov      w1, wzr
0x0000667C 22008052 mov      w2, #1
0x00006680 080040f9 ldr      x8, [x0]
0x00006684 030540f9 ldr      x3, [x8, #8]
0x00006688 60001fd6 br       x3
0x0000668C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x00006690 f30b00f9 str      x19, [sp, #0x10]
0x00006694 fd030091 mov      x29, sp
0x00006698 08158252 mov      w8, #0x10a8
0x0000669C f30300aa mov      x19, x0
0x000066A0 08686838 ldrb     w8, [x0, x8]
0x000066A4 88000034 cbz      w8, #0x66b4
0x000066A8 08108252 mov      w8, #0x1080
0x000066AC 6002088b add      x0, x19, x8
0x000066B0 c4be1794 bl       #0x5f61c0
0x000066B4 60820691 add      x0, x19, #0x1a0
0x000066B8 17efff97 bl       #0x2314
0x000066BC 60ca40f9 ldr      x0, [x19, #0x190]
0x000066C0 a00000b4 cbz      x0, #0x66d4
0x000066C4 088c44f8 ldr      x8, [x0, #0x48]!
0x000066C8 080d40f9 ldr      x8, [x8, #0x18]
0x000066CC 00013fd6 blr      x8
0x000066D0 7fca00f9 str      xzr, [x19, #0x190]
0x000066D4 e00313aa mov      x0, x19
0x000066D8 f30b40f9 ldr      x19, [sp, #0x10]
0x000066DC fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x000066E0 dcc71314 b        #0x4f8650
0x000066E4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x000066E8 f30b00f9 str      x19, [sp, #0x10]
0x000066EC fd030091 mov      x29, sp
0x000066F0 08158252 mov      w8, #0x10a8
0x000066F4 f30300aa mov      x19, x0
0x000066F8 08686838 ldrb     w8, [x0, x8]
0x000066FC 88000034 cbz      w8, #0x670c
0x00006700 08108252 mov      w8, #0x1080
0x00006704 6002088b add      x0, x19, x8
0x00006708 aebe1794 bl       #0x5f61c0
0x0000670C 60820691 add      x0, x19, #0x1a0
0x00006710 01efff97 bl       #0x2314
0x00006714 60ca40f9 ldr      x0, [x19, #0x190]
0x00006718 a00000b4 cbz      x0, #0x672c
0x0000671C 088c44f8 ldr      x8, [x0, #0x48]!
0x00006720 080d40f9 ldr      x8, [x8, #0x18]
0x00006724 00013fd6 blr      x8
0x00006728 7fca00f9 str      xzr, [x19, #0x190]
0x0000672C e00313aa mov      x0, x19
0x00006730 c8c71394 bl       #0x4f8650
0x00006734 e00313aa mov      x0, x19
0x00006738 f30b40f9 ldr      x19, [sp, #0x10]
```

## shared asset loader: main+0x13BB0

```asm
0x00013B60 a00000b4 cbz      x0, #0x13b74
0x00013B64 088c44f8 ldr      x8, [x0, #0x48]!
0x00013B68 080d40f9 ldr      x8, [x8, #0x18]
0x00013B6C 00013fd6 blr      x8
0x00013B70 bf6a34f8 str      xzr, [x21, x20]
0x00013B74 7702148b add      x23, x19, x20
0x00013B78 e00e51f9 ldr      x0, [x23, #0x2218]
0x00013B7C a0feffb4 cbz      x0, #0x13b50
0x00013B80 088c44f8 ldr      x8, [x0, #0x48]!
0x00013B84 080d40f9 ldr      x8, [x8, #0x18]
0x00013B88 00013fd6 blr      x8
0x00013B8C ff0e11f9 str      xzr, [x23, #0x2218]
0x00013B90 f0ffff17 b        #0x13b50
0x00013B94 e00313aa mov      x0, x19
0x00013B98 f44f43a9 ldp      x20, x19, [sp, #0x30]
0x00013B9C f65742a9 ldp      x22, x21, [sp, #0x20]
0x00013BA0 f70b40f9 ldr      x23, [sp, #0x10]
0x00013BA4 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0x00013BA8 d6b2ff17 b        #0x700
0x00013BAC 00000000 udf      #0
0x00013BB0 ffc303d1 sub      sp, sp, #0xf0
0x00013BB4 fd7b09a9 stp      x29, x30, [sp, #0x90]
0x00013BB8 fc6f0aa9 stp      x28, x27, [sp, #0xa0]
0x00013BBC fa670ba9 stp      x26, x25, [sp, #0xb0]
0x00013BC0 f85f0ca9 stp      x24, x23, [sp, #0xc0]
0x00013BC4 f6570da9 stp      x22, x21, [sp, #0xd0]
0x00013BC8 f44f0ea9 stp      x20, x19, [sp, #0xe0]
0x00013BCC fd430291 add      x29, sp, #0x90
0x00013BD0 fb0308aa mov      x27, x8
0x00013BD4 080440f9 ldr      x8, [x0, #8]
0x00013BD8 e50f00f9 str      x5, [sp, #0x18]
0x00013BDC e12700b9 str      w1, [sp, #0x24]
0x00013BE0 53d03bd5 mrs      x19, tpidr_el0
0x00013BE4 9f0000f1 cmp      x4, #0
0x00013BE8 f803032a mov      w24, w3
0x00013BEC f50300aa mov      x21, x0
0x00013BF0 fa0302aa mov      x26, x2
0x00013BF4 1c800491 add      x28, x0, #0x120
0x00013BF8 14880491 add      x20, x0, #0x122
0x00013BFC 1901849a csel     x25, x8, x4, eq
0x00013C00 e8098052 mov      w8, #0x4f
0x00013C04 1635530a and      w22, w8, w19, lsr #13
0x00013C08 1f2003d5 nop      
0x00013C0C 1f2003d5 nop      
0x00013C10 88fe5f08 ldaxrb   w8, [x20]
0x00013C14 1f3d0171 cmp      w8, #0x4f
0x00013C18 81000054 b.ne     #0x13c28
0x00013C1C 967e0808 stxrb    w8, w22, [x20]
0x00013C20 88ffff35 cbnz     w8, #0x13c10
0x00013C24 1c000014 b        #0x13c94
0x00013C28 b78e0491 add      x23, x21, #0x123
0x00013C2C 5f3f03d5 clrex    
0x00013C30 e87e5f08 ldxrb    w8, [x23]
0x00013C34 08050011 add      w8, w8, #1
0x00013C38 e87e0908 stxrb    w9, w8, [x23]
0x00013C3C a9ffff35 cbnz     w9, #0x13c30
0x00013C40 bf3b03d5 dmb      ish
0x00013C44 88fe5f08 ldaxrb   w8, [x20]
0x00013C48 1f3d0171 cmp      w8, #0x4f
0x00013C4C a1000054 b.ne     #0x13c60
0x00013C50 967e0808 stxrb    w8, w22, [x20]
0x00013C54 88ffff35 cbnz     w8, #0x13c44
0x00013C58 0b000014 b        #0x13c84
0x00013C5C 1f2003d5 nop      
0x00013C60 e0031caa mov      x0, x28
0x00013C64 5f3f03d5 clrex    
0x00013C68 3e891794 bl       #0x5f6160
0x00013C6C 1f2003d5 nop      
0x00013C70 88fe5f08 ldaxrb   w8, [x20]
0x00013C74 1f3d0171 cmp      w8, #0x4f
0x00013C78 41ffff54 b.ne     #0x13c60
0x00013C7C 967e0808 stxrb    w8, w22, [x20]
0x00013C80 88ffff35 cbnz     w8, #0x13c70
0x00013C84 e87e5f08 ldxrb    w8, [x23]
0x00013C88 08050051 sub      w8, w8, #1
0x00013C8C e87e0908 stxrb    w9, w8, [x23]
0x00013C90 a9ffff35 cbnz     w9, #0x13c84
0x00013C94 aa3e40f9 ldr      x10, [x21, #0x78]
0x00013C98 fc0b00f9 str      x28, [sp, #0x10]
0x00013C9C bcc20191 add      x28, x21, #0x70
0x00013CA0 480f40f9 ldr      x8, [x26, #0x18]
0x00013CA4 4bfd41d3 lsr      x11, x10, #1
0x00013CA8 1f0100f1 cmp      x8, #0
0x00013CAC 4d2740a9 ldp      x13, x9, [x26]
0x00013CB0 6bf10092 and      x11, x11, #0x5555555555555555
0x00013CB4 a901899a csel     x9, x13, x9, eq
0x00013CB8 4b010bcb sub      x11, x10, x11
0x00013CBC 6ce50092 and      x12, x11, #0x3333333333333333
0x00013CC0 6bfd42d3 lsr      x11, x11, #2
0x00013CC4 6be50092 and      x11, x11, #0x3333333333333333
0x00013CC8 8b010b8b add      x11, x12, x11
0x00013CCC ecc300b2 mov      x12, #0x101010101010101
0x00013CD0 6b114b8b add      x11, x11, x11, lsr #4
0x00013CD4 6bcd0092 and      x11, x11, #0xf0f0f0f0f0f0f0f
0x00013CD8 6b7d0c9b mul      x11, x11, x12
0x00013CDC 6bfd78d3 lsr      x11, x11, #0x38
0x00013CE0 7f0500f1 cmp      x11, #1
0x00013CE4 88000054 b.hi     #0x13cf4
0x00013CE8 4c0500d1 sub      x12, x10, #1
0x00013CEC 9601098a and      x22, x12, x9
0x00013CF0 06000014 b        #0x13d08
0x00013CF4 3f010aeb cmp      x9, x10
0x00013CF8 f60309aa mov      x22, x9
0x00013CFC 63000054 b.lo     #0x13d08
0x00013D00 2c09ca9a udiv     x12, x9, x10
0x00013D04 96a50a9b msub     x22, x12, x10, x9
0x00013D08 8c0340f9 ldr      x12, [x28]
0x00013D0C fb1700f9 str      x27, [sp, #0x28]
0x00013D10 8c7976f8 ldr      x12, [x12, x22, lsl #3]
0x00013D14 4c0600b4 cbz      x12, #0x13ddc
0x00013D18 970140f9 ldr      x23, [x12]
0x00013D1C 170600b4 cbz      x23, #0x13ddc
0x00013D20 6c3c0090 adrp     x12, #0x79f000
0x00013D24 ae610191 add      x14, x13, #0x58
0x00013D28 8ce542f9 ldr      x12, [x12, #0x5c8]
0x00013D2C bf0100f1 cmp      x13, #0
0x00013D30 4d2b40b9 ldr      w13, [x26, #0x28]
0x00013D34 4f0500d1 sub      x15, x10, #1
0x00013D38 8e018e9a csel     x14, x12, x14, eq
0x00013D3C 04000014 b        #0x13d4c
0x00013D40 10020f8a and      x16, x16, x15
0x00013D44 1f0216eb cmp      x16, x22
0x00013D48 a1040054 b.ne     #0x13ddc
0x00013D4C f03a40b9 ldr      w16, [x23, #0x38]
0x00013D50 1f020d6b cmp      w16, w13
0x00013D54 01030054 b.ne     #0x13db4
0x00013D58 f21640f9 ldr      x18, [x23, #0x28]
0x00013D5C 5f0200f1 cmp      x18, #0
0x00013D60 f04641a9 ldp      x16, x17, [x23, #0x10]
0x00013D64 1102919a csel     x17, x16, x17, eq
0x00013D68 c80100b4 cbz      x8, #0x13da0
0x00013D6C b20100b4 cbz      x18, #0x13da0
0x00013D70 3f0209eb cmp      x17, x9
0x00013D74 61010054 b.ne     #0x13da0
0x00013D78 11620191 add      x17, x16, #0x58
0x00013D7C 1f0200f1 cmp      x16, #0
0x00013D80 9001919a csel     x16, x12, x17, eq
0x00013D84 d10140f9 ldr      x17, [x14]
0x00013D88 100240f9 ldr      x16, [x16]
0x00013D8C 1f0211eb cmp      x16, x17
0x00013D90 c0000054 b.eq     #0x13da8
0x00013D94 08000014 b        #0x13db4
0x00013D98 1f2003d5 nop      
0x00013D9C 1f2003d5 nop      
0x00013DA0 3f0209eb cmp      x17, x9
0x00013DA4 81000054 b.ne     #0x13db4
0x00013DA8 f02240f9 ldr      x16, [x23, #0x40]
0x00013DAC 1f0219eb cmp      x16, x25
0x00013DB0 00210054 b.eq     #0x141d0
0x00013DB4 f70240f9 ldr      x23, [x23]
0x00013DB8 370100b4 cbz      x23, #0x13ddc
0x00013DBC f00640f9 ldr      x16, [x23, #8]
```

