# HOME41 exit result producers and virtual adapters
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a

## Direct call and candidate field stores
### candidate 0x49da0
00049E5C 08930639 strb     w8, [x24, #0x1a4]
### candidate 0x8c130
0008C2C0 56020094 bl       #0x8cc18
0008CB44 09000094 bl       #0x8cb68
0008C2A8 a8a601b9 str      w8, [x21, #0x1a4]
0008CB30 a8a601b9 str      w8, [x21, #0x1a4]
0008CB38 bfa601b9 str      wzr, [x21, #0x1a4]
### candidate 0xa7660
000A7B5C faa701b9 str      w26, [sp, #0x1a4]
### candidate 0xc8098
000C8118 7fa601b9 str      wzr, [x19, #0x1a4]
### candidate 0xdf2f0
000DF8C8 28a701b9 str      w8, [x25, #0x1a4]
000DF8E0 20a701b9 str      w0, [x25, #0x1a4]
000DF8F0 3fa701b9 str      wzr, [x25, #0x1a4]
### candidate 0xe1a70
000E1DB4 a0a601b9 str      w0, [x21, #0x1a4]
000E1E30 a8a601b9 str      w8, [x21, #0x1a4]
### candidate 0xf1b70
000F1C14 1fa501b9 str      wzr, [x8, #0x1a4]
### candidate 0x2aff58
002B0034 00a501bd str      s0, [x8, #0x1a4]
### candidate 0x2b90e4
002B9124 80a601bd str      s0, [x20, #0x1a4]
### candidate 0x381180
003813D8 eea701bd str      s14, [sp, #0x1a4]
### candidate 0x462194
004621B4 08a401b9 str      w8, [x0, #0x1a4]
### candidate 0x477b90
00477DE0 60a601bd str      s0, [x19, #0x1a4]
### candidate 0x478830
00478A58 60a601bd str      s0, [x19, #0x1a4]
### candidate 0x4794a0
00479718 60a601bd str      s0, [x19, #0x1a4]
### candidate 0x47a3b0
0047A5A4 60a601bd str      s0, [x19, #0x1a4]
### candidate 0x47afb0
0047B1D4 60a601bd str      s0, [x19, #0x1a4]
### candidate 0x4d4c20
004D4E50 68a601b9 str      w8, [x19, #0x1a4]
### candidate 0x4d4e98
004D5038 68a601b9 str      w8, [x19, #0x1a4]
### candidate 0x5b0140
005B03BC 80a601bd str      s0, [x20, #0x1a4]
### candidate 0x5c3ed0
005C4180 09a401bd str      s9, [x0, #0x1a4]
### candidate 0x5c42a4
005C44D4 09a401bd str      s9, [x0, #0x1a4]
### candidate 0x5c4b10
005C4CB4 00a401bd str      s0, [x0, #0x1a4]
005C4D6C 00a401bd str      s0, [x0, #0x1a4]
### candidate 0x5c5130
005C53D0 00a401bd str      s0, [x0, #0x1a4]
005C5464 00a401bd str      s0, [x0, #0x1a4]
### candidate 0x5c55b0
005C5878 00a401bd str      s0, [x0, #0x1a4]
005C5904 00a401bd str      s0, [x0, #0x1a4]
### candidate 0x5c5b50
005C5E34 00a401bd str      s0, [x0, #0x1a4]
### candidate 0x5c5fa0
005C6204 00a401bd str      s0, [x0, #0x1a4]
005C6294 00a401bd str      s0, [x0, #0x1a4]
### candidate 0x5c6430
005C6714 00a401bd str      s0, [x0, #0x1a4]
### candidate 0x5c6880
005C6AE4 00a401bd str      s0, [x0, #0x1a4]
005C6B74 00a401bd str      s0, [x0, #0x1a4]

## Owner exit table
- state 0: 0x8cd84
- state 1: 0x8ce4c
- state 2: 0x8ceb4
- state 3: 0x8cf18

## Complete bodies
### 0x253f0 (86 slots)
~~~asm
000253F0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000253F4 f44f01a9 stp      x20, x19, [sp, #0x10]
000253F8 fd030091 mov      x29, sp
000253FC 08c045b9 ldr      w8, [x0, #0x5c0]
00025400 f30300aa mov      x19, x0
00025404 1f1d0071 cmp      w8, #7
00025408 a0010054 b.eq     #0x2543c
0002540C 1f190071 cmp      w8, #6
00025410 40020054 b.eq     #0x25458
00025414 1f150071 cmp      w8, #5
00025418 61070054 b.ne     #0x25504
0002541C 680240f9 ldr      x8, [x19]
00025420 e00313aa mov      x0, x19
00025424 086540f9 ldr      x8, [x8, #0xc8]
00025428 00013fd6 blr      x8
0002542C e8031f2a mov      w8, wzr
00025430 c0070036 tbz      w0, #0, #0x25528
00025434 c0008052 mov      w0, #6
00025438 3b000014 b        #0x25524
0002543C 604a40f9 ldr      x0, [x19, #0x90]
00025440 000700b4 cbz      x0, #0x25520
00025444 722a0094 bl       #0x2fe0c
00025448 60060036 tbz      w0, #0, #0x25514
0002544C e0031f2a mov      w0, wzr
00025450 7f4a00f9 str      xzr, [x19, #0x90]
00025454 33000014 b        #0x25520
00025458 60e642f9 ldr      x0, [x19, #0x5c8]
0002545C 600000b4 cbz      x0, #0x25468
00025460 540a0094 bl       #0x27db0
00025464 a0060036 tbz      w0, #0, #0x25538
00025468 60a641f9 ldr      x0, [x19, #0x348]
0002546C 7fa601f9 str      xzr, [x19, #0x348]
00025470 800000b4 cbz      x0, #0x25480
00025474 088c44f8 ldr      x8, [x0, #0x48]!
00025478 080d40f9 ldr      x8, [x8, #0x18]
0002547C 00013fd6 blr      x8
00025480 60e642f9 ldr      x0, [x19, #0x5c8]
00025484 7fe602f9 str      xzr, [x19, #0x5c8]
00025488 800000b4 cbz      x0, #0x25498
0002548C 088c44f8 ldr      x8, [x0, #0x48]!
00025490 080d40f9 ldr      x8, [x8, #0x18]
00025494 00013fd6 blr      x8
00025498 614e40f9 ldr      x1, [x19, #0x98]
0002549C 7f4e00f9 str      xzr, [x19, #0x98]
000254A0 610000b4 cbz      x1, #0x254ac
000254A4 60820291 add      x0, x19, #0xa0
000254A8 ca010094 bl       #0x25bd0
000254AC 745e40f9 ldr      x20, [x19, #0xb8]
000254B0 7f5e00f9 str      xzr, [x19, #0xb8]
000254B4 740100b4 cbz      x20, #0x254e0
000254B8 880240f9 ldr      x8, [x20]
000254BC e00314aa mov      x0, x20
000254C0 080140f9 ldr      x8, [x8]
000254C4 00013fd6 blr      x8
000254C8 600a4ca9 ldp      x0, x2, [x19, #0xc0]
000254CC e10314aa mov      x1, x20
000254D0 636a40f9 ldr      x3, [x19, #0xd0]
000254D4 080040f9 ldr      x8, [x0]
000254D8 080d40f9 ldr      x8, [x8, #0x18]
000254DC 00013fd6 blr      x8
000254E0 609e41f9 ldr      x0, [x19, #0x338]
000254E4 7f9e01f9 str      xzr, [x19, #0x338]
000254E8 800000b4 cbz      x0, #0x254f8
000254EC 088c44f8 ldr      x8, [x0, #0x48]!
000254F0 080d40f9 ldr      x8, [x8, #0x18]
000254F4 00013fd6 blr      x8
000254F8 e8031f2a mov      w8, wzr
000254FC e0008052 mov      w0, #7
00025500 09000014 b        #0x25524
00025504 e0031f2a mov      w0, wzr
00025508 f44f41a9 ldp      x20, x19, [sp, #0x10]
0002550C fd7bc2a8 ldp      x29, x30, [sp], #0x20
00025510 c0035fd6 ret      
00025514 684a40f9 ldr      x8, [x19, #0x90]
00025518 e0031f2a mov      w0, wzr
0002551C 68ffffb5 cbnz     x8, #0x25508
00025520 28008052 mov      w8, #1
00025524 60c205b9 str      w0, [x19, #0x5c0]
00025528 e003082a mov      w0, w8
0002552C f44f41a9 ldp      x20, x19, [sp, #0x10]
00025530 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00025534 c0035fd6 ret      
00025538 e0031f2a mov      w0, wzr
0002553C f44f41a9 ldp      x20, x19, [sp, #0x10]
00025540 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00025544 c0035fd6 ret      
~~~
### 0x258cc (1 slots)
~~~asm
000258CC c0035fd6 ret      
~~~
### 0x258d0 (1 slots)
~~~asm
000258D0 c0035fd6 ret      
~~~
### 0x258d4 (1 slots)
~~~asm
000258D4 c0035fd6 ret      
~~~
### 0x258d8 (1 slots)
~~~asm
000258D8 c0035fd6 ret      
~~~
### 0x258dc (1 slots)
~~~asm
000258DC c0035fd6 ret      
~~~
### 0x258e0 (2 slots)
~~~asm
000258E0 20008052 mov      w0, #1
000258E4 c0035fd6 ret      
~~~
### 0x26fdc (1 slots)
~~~asm
00026FDC c0035fd6 ret      
~~~
### 0x26fe0 (1 slots)
~~~asm
00026FE0 c0035fd6 ret      
~~~
### 0x6c208 (551 slots)
~~~asm
0006C208 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
0006C20C fc0b00f9 str      x28, [sp, #0x10]
0006C210 fd030091 mov      x29, sp
0006C214 f65702a9 stp      x22, x21, [sp, #0x20]
0006C218 f44f03a9 stp      x20, x19, [sp, #0x30]
0006C21C ff0322d1 sub      sp, sp, #0x880
0006C220 f50301aa mov      x21, x1
0006C224 f40300aa mov      x20, x0
0006C228 26d60694 bl       #0x221ac0
0006C22C 889a8652 mov      w8, #0x34d4
0006C230 2801a072 movk     w8, #9, lsl #16
0006C234 08686838 ldrb     w8, [x0, x8]
0006C238 08020034 cbz      w8, #0x6c278
0006C23C e00315aa mov      x0, x21
0006C240 998efe97 bl       #0xfca4
0006C244 a0010036 tbz      w0, #0, #0x6c278
0006C248 b33240f9 ldr      x19, [x21, #0x60]
0006C24C b30000b4 cbz      x19, #0x6c260
0006C250 e00313aa mov      x0, x19
0006C254 088c44f8 ldr      x8, [x0, #0x48]!
0006C258 080940f9 ldr      x8, [x8, #0x10]
0006C25C 00013fd6 blr      x8
0006C260 688e44f8 ldr      x8, [x19, #0x48]!
0006C264 29008052 mov      w9, #1
0006C268 696e0039 strb     w9, [x19, #0x1b]
0006C26C e00313aa mov      x0, x19
0006C270 080d40f9 ldr      x8, [x8, #0x18]
0006C274 00013fd6 blr      x8
0006C278 a83b00b0 adrp     x8, #0x7e1000
0006C27C 08613691 add      x8, x8, #0xd98
0006C280 080140f9 ldr      x8, [x8]
0006C284 132940f9 ldr      x19, [x8, #0x50]
0006C288 130100b4 cbz      x19, #0x6c2a8
0006C28C e00313aa mov      x0, x19
0006C290 088c44f8 ldr      x8, [x0, #0x48]!
0006C294 080940f9 ldr      x8, [x8, #0x10]
0006C298 00013fd6 blr      x8
0006C29C e00313aa mov      x0, x19
0006C2A0 34861394 bl       #0x54db70
0006C2A4 00030036 tbz      w0, #0, #0x6c304
0006C2A8 886a40b9 ldr      w8, [x20, #0x68]
0006C2AC 1fb90071 cmp      w8, #0x2e
0006C2B0 082f0054 b.hi     #0x6c890
0006C2B4 c92d00b0 adrp     x9, #0x625000
0006C2B8 29e11891 add      x9, x9, #0x638
0006C2BC 8a000010 adr      x10, #0x6c2cc
0006C2C0 2b796878 ldrh     w11, [x9, x8, lsl #1]
0006C2C4 4a090b8b add      x10, x10, x11, lsl #2
0006C2C8 40011fd6 br       x10
0006C2CC e00315aa mov      x0, x21
0006C2D0 758efe97 bl       #0xfca4
0006C2D4 e02d0037 tbnz     w0, #0, #0x6c890
0006C2D8 fad50694 bl       #0x221ac0
0006C2DC 889a8652 mov      w8, #0x34d4
0006C2E0 2801a072 movk     w8, #9, lsl #16
0006C2E4 08686838 ldrb     w8, [x0, x8]
0006C2E8 e82f0034 cbz      w8, #0x6c8e4
0006C2EC f5d50694 bl       #0x221ac0
0006C2F0 889a8652 mov      w8, #0x34d4
0006C2F4 2801a072 movk     w8, #9, lsl #16
0006C2F8 1f682838 strb     wzr, [x0, x8]
0006C2FC 88008052 mov      w8, #4
0006C300 7a010014 b        #0x6c8e8
0006C304 f5031f2a mov      w21, wzr
0006C308 dc010014 b        #0x6ca78
0006C30C a83b00b0 adrp     x8, #0x7e1000
0006C310 08811791 add      x8, x8, #0x5e0
0006C314 080140f9 ldr      x8, [x8]
0006C318 086142b9 ldr      w8, [x8, #0x260]
0006C31C 1f1d0071 cmp      w8, #7
0006C320 812b0054 b.ne     #0x6c890
0006C324 a83b00b0 adrp     x8, #0x7e1000
0006C328 08411791 add      x8, x8, #0x5d0
0006C32C 080140f9 ldr      x8, [x8]
0006C330 08d149b9 ldr      w8, [x8, #0x9d0]
0006C334 1f0d0071 cmp      w8, #3
0006C338 c12a0054 b.ne     #0x6c890
0006C33C 20008052 mov      w0, #1
0006C340 36008052 mov      w22, #1
0006C344 6b241294 bl       #0x4f54f0
0006C348 c9010014 b        #0x6ca6c
0006C34C 883900f0 adrp     x8, #0x79f000
0006C350 e1030091 mov      x1, sp
0006C354 082542f9 ldr      x8, [x8, #0x448]
0006C358 ff0300b9 str      wzr, [sp]
0006C35C 000140f9 ldr      x0, [x8]
0006C360 11160894 bl       #0x271ba4
0006C364 e8030091 mov      x8, sp
0006C368 5ad00694 bl       #0x2204d0
0006C36C e00340f9 ldr      x0, [sp]
0006C370 844f0694 bl       #0x200180
0006C374 e00340f9 ldr      x0, [sp]
0006C378 800000b4 cbz      x0, #0x6c388
0006C37C 088c44f8 ldr      x8, [x0, #0x48]!
0006C380 080d40f9 ldr      x8, [x8, #0x18]
0006C384 00013fd6 blr      x8
0006C388 e8030091 mov      x8, sp
0006C38C 11d90694 bl       #0x2227d0
0006C390 e00340f9 ldr      x0, [sp]
0006C394 7b4f0694 bl       #0x200180
0006C398 e00340f9 ldr      x0, [sp]
0006C39C 800000b4 cbz      x0, #0x6c3ac
0006C3A0 088c44f8 ldr      x8, [x0, #0x48]!
0006C3A4 080d40f9 ldr      x8, [x8, #0x18]
0006C3A8 00013fd6 blr      x8
0006C3AC e8030091 mov      x8, sp
0006C3B0 54d00694 bl       #0x220500
0006C3B4 e00340f9 ldr      x0, [sp]
0006C3B8 724f0694 bl       #0x200180
0006C3BC e00340f9 ldr      x0, [sp]
0006C3C0 800000b4 cbz      x0, #0x6c3d0
0006C3C4 088c44f8 ldr      x8, [x0, #0x48]!
0006C3C8 080d40f9 ldr      x8, [x8, #0x18]
0006C3CC 00013fd6 blr      x8
0006C3D0 080088d2 mov      x8, #0x4000
0006C3D4 a818a1f2 movk     x8, #0x8c5, lsl #16
0006C3D8 963900f0 adrp     x22, #0x79f000
0006C3DC 08bec2f2 movk     x8, #0x15f0, lsl #32
0006C3E0 0820e0f2 movk     x8, #0x100, lsl #48
0006C3E4 e80300f9 str      x8, [sp]
0006C3E8 d68642f9 ldr      x22, [x22, #0x508]
0006C3EC c00240f9 ldr      x0, [x22]
0006C3F0 5bbdfe97 bl       #0x1b95c
0006C3F4 e20300aa mov      x2, x0
0006C3F8 e30301aa mov      x3, x1
0006C3FC e0030091 mov      x0, sp
0006C400 e10302aa mov      x1, x2
0006C404 e20303aa mov      x2, x3
0006C408 46830694 bl       #0x20d120
0006C40C 21db0694 bl       #0x223090
0006C410 b54240f9 ldr      x21, [x21, #0x80]
0006C414 00270036 tbz      w0, #0, #0x6c8f4
0006C418 b50000b4 cbz      x21, #0x6c42c
0006C41C e00315aa mov      x0, x21
0006C420 088c44f8 ldr      x8, [x0, #0x48]!
0006C424 080940f9 ldr      x8, [x8, #0x10]
0006C428 00013fd6 blr      x8
0006C42C e00315aa mov      x0, x21
0006C430 3e98fe97 bl       #0x12528
0006C434 37010014 b        #0x6c910
0006C438 9b010094 bl       #0x6caa4
0006C43C 68008052 mov      w8, #3
0006C440 f5031f2a mov      w21, wzr
0006C444 886a00b9 str      w8, [x20, #0x68]
0006C448 8b010014 b        #0x6ca74
0006C44C e00315aa mov      x0, x21
0006C450 158efe97 bl       #0xfca4
0006C454 e0210037 tbnz     w0, #0, #0x6c890
0006C458 9ad50694 bl       #0x221ac0
0006C45C 889a8652 mov      w8, #0x34d4
0006C460 2801a072 movk     w8, #9, lsl #16
0006C464 08686838 ldrb     w8, [x0, x8]
0006C468 28f4ff35 cbnz     w8, #0x6c2ec
0006C46C 48008052 mov      w8, #2
0006C470 1e010014 b        #0x6c8e8
0006C474 e00314aa mov      x0, x20
0006C478 b2010094 bl       #0x6cb40
0006C47C a8008052 mov      w8, #5
0006C480 f5031f2a mov      w21, wzr
0006C484 886a00b9 str      w8, [x20, #0x68]
0006C488 7b010014 b        #0x6ca74
0006C48C e00315aa mov      x0, x21
0006C490 058efe97 bl       #0xfca4
0006C494 e01f0037 tbnz     w0, #0, #0x6c890
0006C498 feda0694 bl       #0x223090
0006C49C 1f000072 tst      w0, #1
0006C4A0 c8008052 mov      w8, #6
0006C4A4 89018052 mov      w9, #0xc
0006C4A8 3611881a csel     w22, w9, w8, ne
0006C4AC 66010014 b        #0x6ca44
0006C4B0 e00314aa mov      x0, x20
0006C4B4 ff010094 bl       #0x6ccb0
0006C4B8 e8008052 mov      w8, #7
0006C4BC f5031f2a mov      w21, wzr
0006C4C0 886a00b9 str      w8, [x20, #0x68]
0006C4C4 6c010014 b        #0x6ca74
0006C4C8 e00315aa mov      x0, x21
0006C4CC f68dfe97 bl       #0xfca4
0006C4D0 001e0037 tbnz     w0, #0, #0x6c890
0006C4D4 e00314aa mov      x0, x20
0006C4D8 52020094 bl       #0x6ce20
0006C4DC 79d50694 bl       #0x221ac0
0006C4E0 889a8652 mov      w8, #0x34d4
0006C4E4 2801a072 movk     w8, #9, lsl #16
0006C4E8 08686838 ldrb     w8, [x0, x8]
0006C4EC 08f0ff35 cbnz     w8, #0x6c2ec
0006C4F0 08018052 mov      w8, #8
0006C4F4 fd000014 b        #0x6c8e8
0006C4F8 e00314aa mov      x0, x20
0006C4FC 59020094 bl       #0x6ce60
0006C500 28018052 mov      w8, #9
0006C504 f5031f2a mov      w21, wzr
0006C508 886a00b9 str      w8, [x20, #0x68]
0006C50C 5a010014 b        #0x6ca74
0006C510 e00315aa mov      x0, x21
0006C514 e48dfe97 bl       #0xfca4
0006C518 c01b0037 tbnz     w0, #0, #0x6c890
0006C51C 883e44b9 ldr      w8, [x20, #0x43c]
0006C520 49018052 mov      w9, #0xa
0006C524 1f050071 cmp      w8, #1
0006C528 88008052 mov      w8, #4
0006C52C 3601881a csel     w22, w9, w8, eq
0006C530 45010014 b        #0x6ca44
0006C534 e00314aa mov      x0, x20
0006C538 aa020094 bl       #0x6cfe0
0006C53C 68018052 mov      w8, #0xb
0006C540 f5031f2a mov      w21, wzr
0006C544 886a00b9 str      w8, [x20, #0x68]
0006C548 4b010014 b        #0x6ca74
0006C54C e00315aa mov      x0, x21
0006C550 d58dfe97 bl       #0xfca4
0006C554 e0190037 tbnz     w0, #0, #0x6c890
0006C558 5ad50694 bl       #0x221ac0
0006C55C 889a8652 mov      w8, #0x34d4
0006C560 2801a072 movk     w8, #9, lsl #16
0006C564 08686838 ldrb     w8, [x0, x8]
0006C568 28ecff35 cbnz     w8, #0x6c2ec
0006C56C 88018052 mov      w8, #0xc
0006C570 de000014 b        #0x6c8e8
0006C574 e00314aa mov      x0, x20
0006C578 f6020094 bl       #0x6d150
0006C57C a8018052 mov      w8, #0xd
0006C580 f5031f2a mov      w21, wzr
0006C584 886a00b9 str      w8, [x20, #0x68]
0006C588 3b010014 b        #0x6ca74
0006C58C e00315aa mov      x0, x21
0006C590 c58dfe97 bl       #0xfca4
0006C594 e0170037 tbnz     w0, #0, #0x6c890
0006C598 e00314aa mov      x0, x20
0006C59C 46030094 bl       #0x6d2b4
0006C5A0 f603002a mov      w22, w0
0006C5A4 28010014 b        #0x6ca44
0006C5A8 e00314aa mov      x0, x20
0006C5AC 61030094 bl       #0x6d330
0006C5B0 e8018052 mov      w8, #0xf
0006C5B4 f5031f2a mov      w21, wzr
0006C5B8 886a00b9 str      w8, [x20, #0x68]
0006C5BC 2e010014 b        #0x6ca74
0006C5C0 e00315aa mov      x0, x21
0006C5C4 b88dfe97 bl       #0xfca4
0006C5C8 40160037 tbnz     w0, #0, #0x6c890
0006C5CC e00314aa mov      x0, x20
0006C5D0 b4030094 bl       #0x6d4a0
0006C5D4 f603002a mov      w22, w0
0006C5D8 1b010014 b        #0x6ca44
0006C5DC e00314aa mov      x0, x20
0006C5E0 dc030094 bl       #0x6d550
0006C5E4 28028052 mov      w8, #0x11
0006C5E8 f5031f2a mov      w21, wzr
0006C5EC 886a00b9 str      w8, [x20, #0x68]
0006C5F0 21010014 b        #0x6ca74
0006C5F4 e00315aa mov      x0, x21
0006C5F8 ab8dfe97 bl       #0xfca4
0006C5FC a0140037 tbnz     w0, #0, #0x6c890
0006C600 e00314aa mov      x0, x20
0006C604 2b040094 bl       #0x6d6b0
0006C608 f603002a mov      w22, w0
0006C60C 0e010014 b        #0x6ca44
0006C610 e00314aa mov      x0, x20
0006C614 4f040094 bl       #0x6d750
0006C618 68028052 mov      w8, #0x13
0006C61C f5031f2a mov      w21, wzr
0006C620 886a00b9 str      w8, [x20, #0x68]
0006C624 14010014 b        #0x6ca74
0006C628 e00315aa mov      x0, x21
0006C62C 9e8dfe97 bl       #0xfca4
0006C630 00130037 tbnz     w0, #0, #0x6c890
0006C634 882e41b9 ldr      w8, [x20, #0x12c]
0006C638 1f050071 cmp      w8, #1
0006C63C e01e0054 b.eq     #0x6ca18
0006C640 1f090071 cmp      w8, #2
0006C644 e11e0054 b.ne     #0x6ca20
0006C648 882601b9 str      w8, [x20, #0x124]
0006C64C 56028052 mov      w22, #0x12
0006C650 fd000014 b        #0x6ca44
0006C654 92040094 bl       #0x6d89c
0006C658 a8028052 mov      w8, #0x15
0006C65C f5031f2a mov      w21, wzr
0006C660 886a00b9 str      w8, [x20, #0x68]
0006C664 04010014 b        #0x6ca74
0006C668 e00314aa mov      x0, x20
0006C66C b1040094 bl       #0x6d930
0006C670 e8028052 mov      w8, #0x17
0006C674 f5031f2a mov      w21, wzr
0006C678 886a00b9 str      w8, [x20, #0x68]
0006C67C fe000014 b        #0x6ca74
0006C680 e00314aa mov      x0, x20
0006C684 07050094 bl       #0x6daa0
0006C688 28038052 mov      w8, #0x19
0006C68C f5031f2a mov      w21, wzr
0006C690 886a00b9 str      w8, [x20, #0x68]
0006C694 f8000014 b        #0x6ca74
0006C698 e00315aa mov      x0, x21
0006C69C 828dfe97 bl       #0xfca4
0006C6A0 800f0037 tbnz     w0, #0, #0x6c890
0006C6A4 880a41b9 ldr      w8, [x20, #0x108]
0006C6A8 89008052 mov      w9, #4
0006C6AC 1f050071 cmp      w8, #1
0006C6B0 08028052 mov      w8, #0x10
0006C6B4 3601881a csel     w22, w9, w8, eq
0006C6B8 e3000014 b        #0x6ca44
0006C6BC e00314aa mov      x0, x20
0006C6C0 74050094 bl       #0x6dc90
0006C6C4 a8038052 mov      w8, #0x1d
0006C6C8 f5031f2a mov      w21, wzr
0006C6CC 886a00b9 str      w8, [x20, #0x68]
0006C6D0 e9000014 b        #0x6ca74
0006C6D4 e00315aa mov      x0, x21
0006C6D8 738dfe97 bl       #0xfca4
0006C6DC a00d0037 tbnz     w0, #0, #0x6c890
0006C6E0 883244b9 ldr      w8, [x20, #0x430]
0006C6E4 1f050071 cmp      w8, #1
0006C6E8 01140054 b.ne     #0x6c968
0006C6EC a83b00b0 adrp     x8, #0x7e1000
0006C6F0 08611491 add      x8, x8, #0x518
0006C6F4 803644b9 ldr      w0, [x20, #0x434]
0006C6F8 080140f9 ldr      x8, [x8]
0006C6FC 015541f9 ldr      x1, [x8, #0x2a8]
0006C700 f0f7ff97 bl       #0x6a6c0
0006C704 96008052 mov      w22, #4
0006C708 cf000014 b        #0x6ca44
0006C70C e00314aa mov      x0, x20
0006C710 b4050094 bl       #0x6dde0
0006C714 e8038052 mov      w8, #0x1f
0006C718 f5031f2a mov      w21, wzr
0006C71C 886a00b9 str      w8, [x20, #0x68]
0006C720 d5000014 b        #0x6ca74
0006C724 e00315aa mov      x0, x21
0006C728 5f8dfe97 bl       #0xfca4
0006C72C 200b0037 tbnz     w0, #0, #0x6c890
0006C730 28008052 mov      w8, #1
0006C734 882601b9 str      w8, [x20, #0x124]
0006C738 e2d40694 bl       #0x221ac0
0006C73C 889a8652 mov      w8, #0x34d4
0006C740 2801a072 movk     w8, #9, lsl #16
0006C744 08686838 ldrb     w8, [x0, x8]
0006C748 28ddff35 cbnz     w8, #0x6c2ec
0006C74C 48028052 mov      w8, #0x12
0006C750 66000014 b        #0x6c8e8
0006C754 e00314aa mov      x0, x20
0006C758 0e060094 bl       #0x6df90
0006C75C 28048052 mov      w8, #0x21
0006C760 f5031f2a mov      w21, wzr
0006C764 886a00b9 str      w8, [x20, #0x68]
0006C768 c3000014 b        #0x6ca74
0006C76C e00315aa mov      x0, x21
0006C770 4d8dfe97 bl       #0xfca4
0006C774 e0080037 tbnz     w0, #0, #0x6c890
0006C778 881241b9 ldr      w8, [x20, #0x110]
0006C77C 1f050071 cmp      w8, #1
0006C780 c0150054 b.eq     #0x6ca38
0006C784 280f0035 cbnz     w8, #0x6c968
0006C788 96008052 mov      w22, #4
0006C78C ae000014 b        #0x6ca44
0006C790 e00314aa mov      x0, x20
0006C794 57060094 bl       #0x6e0f0
0006C798 68048052 mov      w8, #0x23
0006C79C f5031f2a mov      w21, wzr
0006C7A0 886a00b9 str      w8, [x20, #0x68]
0006C7A4 b4000014 b        #0x6ca74
0006C7A8 e00315aa mov      x0, x21
0006C7AC 3e8dfe97 bl       #0xfca4
0006C7B0 00070037 tbnz     w0, #0, #0x6c890
0006C7B4 88e240b9 ldr      w8, [x20, #0xe0]
0006C7B8 9f9200f9 str      xzr, [x20, #0x120]
0006C7BC 1f110071 cmp      w8, #4
0006C7C0 0419417a ccmp     w8, #1, #4, ne
0006C7C4 48028052 mov      w8, #0x12
0006C7C8 0d000014 b        #0x6c7fc
0006C7CC e00314aa mov      x0, x20
0006C7D0 a8060094 bl       #0x6e270
0006C7D4 a8048052 mov      w8, #0x25
0006C7D8 f5031f2a mov      w21, wzr
0006C7DC 886a00b9 str      w8, [x20, #0x68]
0006C7E0 a5000014 b        #0x6ca74
0006C7E4 e00315aa mov      x0, x21
0006C7E8 2f8dfe97 bl       #0xfca4
0006C7EC 20050037 tbnz     w0, #0, #0x6c890
0006C7F0 88e240b9 ldr      w8, [x20, #0xe0]
0006C7F4 1f050071 cmp      w8, #1
0006C7F8 48038052 mov      w8, #0x1a
0006C7FC 09028052 mov      w9, #0x10
0006C800 3601881a csel     w22, w9, w8, eq
0006C804 90000014 b        #0x6ca44
0006C808 e00315aa mov      x0, x21
0006C80C 268dfe97 bl       #0xfca4
0006C810 00040037 tbnz     w0, #0, #0x6c890
0006C814 88e240b9 ldr      w8, [x20, #0xe0]
0006C818 89058052 mov      w9, #0x2c
0006C81C 1f110071 cmp      w8, #4
0006C820 08028052 mov      w8, #0x10
0006C824 3601881a csel     w22, w9, w8, eq
0006C828 87000014 b        #0x6ca44
0006C82C e00314aa mov      x0, x20
0006C830 48070094 bl       #0x6e550
0006C834 28058052 mov      w8, #0x29
0006C838 f5031f2a mov      w21, wzr
0006C83C 886a00b9 str      w8, [x20, #0x68]
0006C840 8d000014 b        #0x6ca74
0006C844 e00315aa mov      x0, x21
0006C848 178dfe97 bl       #0xfca4
0006C84C 20020037 tbnz     w0, #0, #0x6c890
0006C850 884244b9 ldr      w8, [x20, #0x440]
0006C854 89008052 mov      w9, #4
0006C858 9f2202f9 str      xzr, [x20, #0x440]
0006C85C 1f050071 cmp      w8, #1
0006C860 08028052 mov      w8, #0x10
0006C864 3601881a csel     w22, w9, w8, eq
0006C868 77000014 b        #0x6ca44
0006C86C e00314aa mov      x0, x20
0006C870 8c070094 bl       #0x6e6a0
0006C874 68058052 mov      w8, #0x2b
0006C878 f5031f2a mov      w21, wzr
0006C87C 886a00b9 str      w8, [x20, #0x68]
0006C880 7d000014 b        #0x6ca74
0006C884 e00315aa mov      x0, x21
0006C888 078dfe97 bl       #0xfca4
0006C88C 40060036 tbz      w0, #0, #0x6c954
0006C890 f5031f2a mov      w21, wzr
0006C894 78000014 b        #0x6ca74
0006C898 e00314aa mov      x0, x20
0006C89C d5070094 bl       #0x6e7f0
0006C8A0 a8058052 mov      w8, #0x2d
0006C8A4 f5031f2a mov      w21, wzr
0006C8A8 886a00b9 str      w8, [x20, #0x68]
0006C8AC 72000014 b        #0x6ca74
0006C8B0 d3040094 bl       #0x6dbfc
0006C8B4 68038052 mov      w8, #0x1b
0006C8B8 f5031f2a mov      w21, wzr
0006C8BC 886a00b9 str      w8, [x20, #0x68]
0006C8C0 6d000014 b        #0x6ca74
0006C8C4 e00314aa mov      x0, x20
0006C8C8 c6060094 bl       #0x6e3e0
0006C8CC e8048052 mov      w8, #0x27
0006C8D0 f5031f2a mov      w21, wzr
0006C8D4 886a00b9 str      w8, [x20, #0x68]
0006C8D8 67000014 b        #0x6ca74
0006C8DC 35008052 mov      w21, #1
0006C8E0 65000014 b        #0x6ca74
0006C8E4 08028052 mov      w8, #0x10
0006C8E8 f5031f2a mov      w21, wzr
0006C8EC 886a00b9 str      w8, [x20, #0x68]
0006C8F0 61000014 b        #0x6ca74
0006C8F4 b50000b4 cbz      x21, #0x6c908
0006C8F8 e00315aa mov      x0, x21
0006C8FC 088c44f8 ldr      x8, [x0, #0x48]!
0006C900 080940f9 ldr      x8, [x8, #0x10]
0006C904 00013fd6 blr      x8
0006C908 e00315aa mov      x0, x21
0006C90C 1996fe97 bl       #0x12170
0006C910 a88e44f8 ldr      x8, [x21, #0x48]!
0006C914 e00315aa mov      x0, x21
0006C918 080d40f9 ldr      x8, [x8, #0x18]
0006C91C 00013fd6 blr      x8
0006C920 a0a301d1 sub      x0, x29, #0x68
0006C924 67271694 bl       #0x5f66c0
0006C928 c00240f9 ldr      x0, [x22]
0006C92C 0abcfe97 bl       #0x1b954
0006C930 08004039 ldrb     w8, [x0]
0006C934 e8010034 cbz      w8, #0x6c970
0006C938 c00240f9 ldr      x0, [x22]
0006C93C 06bcfe97 bl       #0x1b954
0006C940 08a440a9 ldp      x8, x9, [x0, #8]
0006C944 a82738a9 stp      x8, x9, [x29, #-0x80]
0006C948 080c40f9 ldr      x8, [x0, #0x18]
0006C94C a80319f8 stur     x8, [x29, #-0x70]
0006C950 0a000014 b        #0x6c978
0006C954 884a44b9 ldr      w8, [x20, #0x448]
0006C958 1f050071 cmp      w8, #1
0006C95C 61000054 b.ne     #0x6c968
0006C960 48008052 mov      w8, #2
0006C964 36000014 b        #0x6ca3c
0006C968 16028052 mov      w22, #0x10
0006C96C 36000014 b        #0x6ca44
0006C970 bfff38a9 stp      xzr, xzr, [x29, #-0x78]
0006C974 bf0318f8 stur     xzr, [x29, #-0x80]
0006C978 e0030091 mov      x0, sp
0006C97C e1031f2a mov      w1, wzr
0006C980 02008152 mov      w2, #0x800
0006C984 f3251694 bl       #0x5f6150
0006C988 a0a301d1 sub      x0, x29, #0x68
0006C98C a10302d1 sub      x1, x29, #0x80
0006C990 e2030091 mov      x2, sp
0006C994 03008152 mov      w3, #0x800
0006C998 4e271694 bl       #0x5f66d0
0006C99C e0020035 cbnz     w0, #0x6c9f8
0006C9A0 a0a301d1 sub      x0, x29, #0x68
0006C9A4 a1630091 add      x1, x29, #0x18
0006C9A8 bf0f00f9 str      xzr, [x29, #0x18]
0006C9AC 4d271694 bl       #0x5f66e0
0006C9B0 b50f40f9 ldr      x21, [x29, #0x18]
0006C9B4 612d0090 adrp     x1, #0x618000
0006C9B8 215c1c91 add      x1, x1, #0x717
0006C9BC f60300aa mov      x22, x0
0006C9C0 e20315aa mov      x2, x21
0006C9C4 2f261694 bl       #0x5f6280
0006C9C8 e0000034 cbz      w0, #0x6c9e4
0006C9CC 412d00f0 adrp     x1, #0x617000
0006C9D0 21d00b91 add      x1, x1, #0x2f4
0006C9D4 e00316aa mov      x0, x22
0006C9D8 e20315aa mov      x2, x21
0006C9DC 29261694 bl       #0x5f6280
0006C9E0 c0000035 cbnz     w0, #0x6c9f8
0006C9E4 37d40694 bl       #0x221ac0
0006C9E8 48db8652 mov      w8, #0x36da
0006C9EC 2803a072 movk     w8, #0x19, lsl #16
0006C9F0 29008052 mov      w9, #1
0006C9F4 09682838 strb     w9, [x0, x8]
0006C9F8 7ad80694 bl       #0x222be0
0006C9FC 1f000072 tst      w0, #1
0006CA00 88008052 mov      w8, #4
0006CA04 49008052 mov      w9, #2
0006CA08 2811881a csel     w8, w9, w8, ne
0006CA0C 886a00b9 str      w8, [x20, #0x68]
0006CA10 f5031f2a mov      w21, wzr
0006CA14 18000014 b        #0x6ca74
0006CA18 d6038052 mov      w22, #0x1e
0006CA1C 0a000014 b        #0x6ca44
0006CA20 882a41b9 ldr      w8, [x20, #0x128]
0006CA24 09048052 mov      w9, #0x20
0006CA28 1f050071 cmp      w8, #1
0006CA2C 08028052 mov      w8, #0x10
0006CA30 3601881a csel     w22, w9, w8, eq
0006CA34 04000014 b        #0x6ca44
0006CA38 28008052 mov      w8, #1
0006CA3C 889200f9 str      x8, [x20, #0x120]
0006CA40 56028052 mov      w22, #0x12
0006CA44 1fd40694 bl       #0x221ac0
0006CA48 889a8652 mov      w8, #0x34d4
0006CA4C 2801a072 movk     w8, #9, lsl #16
0006CA50 08686838 ldrb     w8, [x0, x8]
0006CA54 c8000034 cbz      w8, #0x6ca6c
0006CA58 1ad40694 bl       #0x221ac0
0006CA5C 889a8652 mov      w8, #0x34d4
0006CA60 2801a072 movk     w8, #9, lsl #16
0006CA64 96008052 mov      w22, #4
0006CA68 1f682838 strb     wzr, [x0, x8]
0006CA6C f5031f2a mov      w21, wzr
0006CA70 966a00b9 str      w22, [x20, #0x68]
0006CA74 b30000b4 cbz      x19, #0x6ca88
0006CA78 688e44f8 ldr      x8, [x19, #0x48]!
0006CA7C e00313aa mov      x0, x19
0006CA80 080d40f9 ldr      x8, [x8, #0x18]
0006CA84 00013fd6 blr      x8
0006CA88 e003152a mov      w0, w21
0006CA8C ff032291 add      sp, sp, #0x880
0006CA90 f44f43a9 ldp      x20, x19, [sp, #0x30]
0006CA94 fc0b40f9 ldr      x28, [sp, #0x10]
0006CA98 f65742a9 ldp      x22, x21, [sp, #0x20]
0006CA9C fd7bc4a8 ldp      x29, x30, [sp], #0x40
0006CAA0 c0035fd6 ret      
~~~
### 0x6d750 (83 slots)
~~~asm
0006D750 ff4301d1 sub      sp, sp, #0x50
0006D754 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006D758 f71300f9 str      x23, [sp, #0x20]
0006D75C f65703a9 stp      x22, x21, [sp, #0x30]
0006D760 f44f04a9 stp      x20, x19, [sp, #0x40]
0006D764 fd430091 add      x29, sp, #0x10
0006D768 883900d0 adrp     x8, #0x79f000
0006D76C 893900d0 adrp     x9, #0x79f000
0006D770 08ed41f9 ldr      x8, [x8, #0x3d8]
0006D774 f30300aa mov      x19, x0
0006D778 080140f9 ldr      x8, [x8]
0006D77C 153540f9 ldr      x21, [x8, #0x68]
0006D780 082540f9 ldr      x8, [x8, #0x48]
0006D784 297942f9 ldr      x9, [x9, #0x4f0]
0006D788 a80f00f9 str      x8, [x29, #0x18]
0006D78C 280140f9 ldr      x8, [x9]
0006D790 143140f9 ldr      x20, [x8, #0x60]
0006D794 b40000b4 cbz      x20, #0x6d7a8
0006D798 e00314aa mov      x0, x20
0006D79C 088c44f8 ldr      x8, [x0, #0x48]!
0006D7A0 080940f9 ldr      x8, [x8, #0x10]
0006D7A4 00013fd6 blr      x8
0006D7A8 e8230091 add      x8, sp, #8
0006D7AC a2630091 add      x2, x29, #0x18
0006D7B0 e00314aa mov      x0, x20
0006D7B4 e10315aa mov      x1, x21
0006D7B8 231c0094 bl       #0x74844
0006D7BC 888e44f8 ldr      x8, [x20, #0x48]!
0006D7C0 e00314aa mov      x0, x20
0006D7C4 080d40f9 ldr      x8, [x8, #0x18]
0006D7C8 00013fd6 blr      x8
0006D7CC f40740f9 ldr      x20, [sp, #8]
0006D7D0 540400b4 cbz      x20, #0x6d858
0006D7D4 965640b9 ldr      w22, [x20, #0x54]
0006D7D8 16040034 cbz      w22, #0x6d858
0006D7DC 95520191 add      x21, x20, #0x54
0006D7E0 06000014 b        #0x6d7f8
0006D7E4 5f3f03d5 clrex    
0006D7E8 e9031f2a mov      w9, wzr
0006D7EC df020037 tbnz     wzr, #0, #0x6d844
0006D7F0 f603082a mov      w22, w8
0006D7F4 28030034 cbz      w8, #0x6d858
0006D7F8 972e40f9 ldr      x23, [x20, #0x58]
0006D7FC 201f0094 bl       #0x7547c
0006D800 1f0017eb cmp      x0, x23
0006D804 00010054 b.eq     #0x6d824
0006D808 1f2003d5 nop      
0006D80C 1f2003d5 nop      
0006D810 f70240f9 ldr      x23, [x23]
0006D814 ff0200eb cmp      x23, x0
0006D818 e41a40fa ccmp     x23, #0, #4, ne
0006D81C a1ffff54 b.ne     #0x6d810
0006D820 d70100b4 cbz      x23, #0x6d858
0006D824 a87e5f88 ldxr     w8, [x21]
0006D828 1f01166b cmp      w8, w22
0006D82C c1fdff54 b.ne     #0x6d7e4
0006D830 c9060011 add      w9, w22, #1
0006D834 a97e0a88 stxr     w10, w9, [x21]
0006D838 8afdff35 cbnz     w10, #0x6d7e8
0006D83C 29008052 mov      w9, #1
0006D840 89fd0736 tbz      w9, #0, #0x6d7f0
0006D844 883240f9 ldr      x8, [x20, #0x60]
0006D848 094101d1 sub      x9, x8, #0x50
0006D84C 1f0100f1 cmp      x8, #0
0006D850 e003899a csel     x0, xzr, x9, eq
0006D854 02000014 b        #0x6d85c
0006D858 e0031faa mov      x0, xzr
0006D85C 088c44f8 ldr      x8, [x0, #0x48]!
0006D860 69620491 add      x9, x19, #0x118
0006D864 092c06f9 str      x9, [x0, #0xc58]
0006D868 080d40f9 ldr      x8, [x8, #0x18]
0006D86C 00013fd6 blr      x8
0006D870 e00740f9 ldr      x0, [sp, #8]
0006D874 800000b4 cbz      x0, #0x6d884
0006D878 088c44f8 ldr      x8, [x0, #0x48]!
0006D87C 080d40f9 ldr      x8, [x8, #0x18]
0006D880 00013fd6 blr      x8
0006D884 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006D888 f71340f9 ldr      x23, [sp, #0x20]
0006D88C f65743a9 ldp      x22, x21, [sp, #0x30]
0006D890 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006D894 ff430191 add      sp, sp, #0x50
0006D898 c0035fd6 ret      
~~~
### 0x89390 (59 slots)
~~~asm
00089390 ffc300d1 sub      sp, sp, #0x30
00089394 fd7b01a9 stp      x29, x30, [sp, #0x10]
00089398 f44f02a9 stp      x20, x19, [sp, #0x20]
0008939C fd430091 add      x29, sp, #0x10
000893A0 f30300aa mov      x19, x0
000893A4 7e70fe97 bl       #0x2559c
000893A8 e8230091 add      x8, sp, #8
000893AC e1030091 mov      x1, sp
000893B0 f30300f9 str      x19, [sp]
000893B4 74100094 bl       #0x8d584
000893B8 60a641f9 ldr      x0, [x19, #0x348]
000893BC 800000b4 cbz      x0, #0x893cc
000893C0 088c44f8 ldr      x8, [x0, #0x48]!
000893C4 080d40f9 ldr      x8, [x8, #0x18]
000893C8 00013fd6 blr      x8
000893CC e00740f9 ldr      x0, [sp, #8]
000893D0 60a601f9 str      x0, [x19, #0x348]
000893D4 080040f9 ldr      x8, [x0]
000893D8 090940f9 ldr      x9, [x8, #0x10]
000893DC e8230091 add      x8, sp, #8
000893E0 20013fd6 blr      x9
000893E4 e80740f9 ldr      x8, [sp, #8]
000893E8 680300b4 cbz      x8, #0x89454
000893EC 133140f9 ldr      x19, [x8, #0x60]
000893F0 f30100b4 cbz      x19, #0x8942c
000893F4 680240f9 ldr      x8, [x19]
000893F8 e00313aa mov      x0, x19
000893FC 080140f9 ldr      x8, [x8]
00089400 00013fd6 blr      x8
00089404 f40300aa mov      x20, x0
00089408 a6100094 bl       #0x8d6a0
0008940C 1f0014eb cmp      x0, x20
00089410 c0000054 b.eq     #0x89428
00089414 940240f9 ldr      x20, [x20]
00089418 9f0200eb cmp      x20, x0
0008941C 841a40fa ccmp     x20, #0, #4, ne
00089420 a1ffff54 b.ne     #0x89414
00089424 540200b4 cbz      x20, #0x8946c
00089428 734201d1 sub      x19, x19, #0x50
0008942C e00740f9 ldr      x0, [sp, #8]
00089430 800000b4 cbz      x0, #0x89440
00089434 088c44f8 ldr      x8, [x0, #0x48]!
00089438 080d40f9 ldr      x8, [x8, #0x18]
0008943C 00013fd6 blr      x8
00089440 e00313aa mov      x0, x19
00089444 f44f42a9 ldp      x20, x19, [sp, #0x20]
00089448 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0008944C ffc30091 add      sp, sp, #0x30
00089450 c0035fd6 ret      
00089454 f3031faa mov      x19, xzr
00089458 e00313aa mov      x0, x19
0008945C f44f42a9 ldp      x20, x19, [sp, #0x20]
00089460 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00089464 ffc30091 add      sp, sp, #0x30
00089468 c0035fd6 ret      
0008946C f3031faa mov      x19, xzr
00089470 e00740f9 ldr      x0, [sp, #8]
00089474 00feffb5 cbnz     x0, #0x89434
00089478 f2ffff17 b        #0x89440
~~~
### 0x8c130 (654 slots)
~~~asm
0008C130 ffc301d1 sub      sp, sp, #0x70
0008C134 fd7b03a9 stp      x29, x30, [sp, #0x30]
0008C138 f72300f9 str      x23, [sp, #0x40]
0008C13C f65705a9 stp      x22, x21, [sp, #0x50]
0008C140 f44f06a9 stp      x20, x19, [sp, #0x60]
0008C144 fdc30091 add      x29, sp, #0x30
0008C148 f40300aa mov      x20, x0
0008C14C 00a441f9 ldr      x0, [x0, #0x348]
0008C150 f30308aa mov      x19, x8
0008C154 080040f9 ldr      x8, [x0]
0008C158 090940f9 ldr      x9, [x8, #0x10]
0008C15C e8230091 add      x8, sp, #8
0008C160 20013fd6 blr      x9
0008C164 f60740f9 ldr      x22, [sp, #8]
0008C168 d60b00b4 cbz      x22, #0x8c2e0
0008C16C d53240f9 ldr      x21, [x22, #0x60]
0008C170 f50100b4 cbz      x21, #0x8c1ac
0008C174 a80240f9 ldr      x8, [x21]
0008C178 e00315aa mov      x0, x21
0008C17C 080140f9 ldr      x8, [x8]
0008C180 00013fd6 blr      x8
0008C184 f70300aa mov      x23, x0
0008C188 46050094 bl       #0x8d6a0
0008C18C 1f0017eb cmp      x0, x23
0008C190 c0000054 b.eq     #0x8c1a8
0008C194 f70240f9 ldr      x23, [x23]
0008C198 ff0200eb cmp      x23, x0
0008C19C e41a40fa ccmp     x23, #0, #4, ne
0008C1A0 a1ffff54 b.ne     #0x8c194
0008C1A4 370900b4 cbz      x23, #0x8c2c8
0008C1A8 b54201d1 sub      x21, x21, #0x50
0008C1AC c88e44f8 ldr      x8, [x22, #0x48]!
0008C1B0 e00316aa mov      x0, x22
0008C1B4 080d40f9 ldr      x8, [x8, #0x18]
0008C1B8 00013fd6 blr      x8
0008C1BC 350900b4 cbz      x21, #0x8c2e0
0008C1C0 b6a243b9 ldr      w22, [x21, #0x3a0]
0008C1C4 e00315aa mov      x0, x21
0008C1C8 f6ef0094 bl       #0xc81a0
0008C1CC c8060051 sub      w8, w22, #1
0008C1D0 1f650071 cmp      w8, #0x19
0008C1D4 282d0054 b.hi     #0x8c778
0008C1D8 c92c00b0 adrp     x9, #0x625000
0008C1DC 29e92391 add      x9, x9, #0x8fa
0008C1E0 8a000010 adr      x10, #0x8c1f0
0008C1E4 2b796878 ldrh     w11, [x9, x8, lsl #1]
0008C1E8 4a090b8b add      x10, x10, x11, lsl #2
0008C1EC 40011fd6 br       x10
0008C1F0 80e642f9 ldr      x0, [x20, #0x5c8]
0008C1F4 88539bd2 mov      x8, #0xda9c
0008C1F8 2869b1f2 movk     x8, #0x8b49, lsl #16
0008C1FC e886cef2 movk     x8, #0x7437, lsl #32
0008C200 e8a7eef2 movk     x8, #0x753f, lsl #48
0008C204 492c00d0 adrp     x9, #0x616000
0008C208 29511f91 add      x9, x9, #0x7d4
0008C20C e8a700a9 stp      x8, x9, [sp, #8]
0008C210 08018052 mov      w8, #8
0008C214 e1230091 add      x1, sp, #8
0008C218 e8ff01a9 stp      x8, xzr, [sp, #0x18]
0008C21C d9090094 bl       #0x8e980
0008C220 f60300aa mov      x22, x0
0008C224 e01340f9 ldr      x0, [sp, #0x20]
0008C228 800000b4 cbz      x0, #0x8c238
0008C22C 088c44f8 ldr      x8, [x0, #0x48]!
0008C230 080d40f9 ldr      x8, [x8, #0x18]
0008C234 00013fd6 blr      x8
0008C238 80e642f9 ldr      x0, [x20, #0x5c8]
0008C23C 286496d2 mov      x8, #0xb321
0008C240 888abef2 movk     x8, #0xf454, lsl #16
0008C244 48c3c2f2 movk     x8, #0x161a, lsl #32
0008C248 28e8ecf2 movk     x8, #0x6741, lsl #48
0008C24C 492c00b0 adrp     x9, #0x615000
0008C250 29093191 add      x9, x9, #0xc42
0008C254 e8a700a9 stp      x8, x9, [sp, #8]
0008C258 28018052 mov      w8, #9
0008C25C e1230091 add      x1, sp, #8
0008C260 e8ff01a9 stp      x8, xzr, [sp, #0x18]
0008C264 530a0094 bl       #0x8ebb0
0008C268 f70300aa mov      x23, x0
0008C26C e01340f9 ldr      x0, [sp, #0x20]
0008C270 800000b4 cbz      x0, #0x8c280
0008C274 088c44f8 ldr      x8, [x0, #0x48]!
0008C278 080d40f9 ldr      x8, [x8, #0x18]
0008C27C 00013fd6 blr      x8
0008C280 160300b4 cbz      x22, #0x8c2e0
0008C284 f70200b4 cbz      x23, #0x8c2e0
0008C288 e00316aa mov      x0, x22
0008C28C c2dc0094 bl       #0xc3594
0008C290 885246f9 ldr      x8, [x20, #0xca0]
0008C294 080d40b9 ldr      w8, [x8, #0xc]
0008C298 1f090071 cmp      w8, #2
0008C29C a0440054 b.eq     #0x8cb30
0008C2A0 1f050071 cmp      w8, #1
0008C2A4 a1440054 b.ne     #0x8cb38
0008C2A8 a8a601b9 str      w8, [x21, #0x1a4]
0008C2AC 885246f9 ldr      x8, [x20, #0xca0]
0008C2B0 081940b9 ldr      w8, [x8, #0x18]
0008C2B4 48440034 cbz      w8, #0x8cb3c
0008C2B8 e8230091 add      x8, sp, #8
0008C2BC e00314aa mov      x0, x20
0008C2C0 56020094 bl       #0x8cc18
0008C2C4 21020014 b        #0x8cb48
0008C2C8 f5031faa mov      x21, xzr
0008C2CC c88e44f8 ldr      x8, [x22, #0x48]!
0008C2D0 e00316aa mov      x0, x22
0008C2D4 080d40f9 ldr      x8, [x8, #0x18]
0008C2D8 00013fd6 blr      x8
0008C2DC 3ff7ffb5 cbnz     xzr, #0x8c1c0
0008C2E0 18a81594 bl       #0x5f6340
0008C2E4 e00314aa mov      x0, x20
0008C2E8 ad64fe97 bl       #0x2559c
0008C2EC 880240f9 ldr      x8, [x20]
0008C2F0 f50300aa mov      x21, x0
0008C2F4 e00314aa mov      x0, x20
0008C2F8 090940f9 ldr      x9, [x8, #0x10]
0008C2FC e8230091 add      x8, sp, #8
0008C300 20013fd6 blr      x9
0008C304 80a641f9 ldr      x0, [x20, #0x348]
0008C308 080040f9 ldr      x8, [x0]
0008C30C 090940f9 ldr      x9, [x8, #0x10]
0008C310 a82300d1 sub      x8, x29, #8
0008C314 20013fd6 blr      x9
0008C318 a07f0091 add      x0, x29, #0x1f
0008C31C e2230091 add      x2, sp, #8
0008C320 a32300d1 sub      x3, x29, #8
0008C324 e10315aa mov      x1, x21
0008C328 ad0a0094 bl       #0x8eddc
0008C32C f40300aa mov      x20, x0
0008C330 a00000b4 cbz      x0, #0x8c344
0008C334 e00314aa mov      x0, x20
0008C338 088c44f8 ldr      x8, [x0, #0x48]!
0008C33C 080940f9 ldr      x8, [x8, #0x10]
0008C340 00013fd6 blr      x8
0008C344 a0835ff8 ldur     x0, [x29, #-8]
0008C348 800000b4 cbz      x0, #0x8c358
0008C34C 088c44f8 ldr      x8, [x0, #0x48]!
0008C350 080d40f9 ldr      x8, [x8, #0x18]
0008C354 00013fd6 blr      x8
0008C358 e00740f9 ldr      x0, [sp, #8]
0008C35C 800000b4 cbz      x0, #0x8c36c
0008C360 088c44f8 ldr      x8, [x0, #0x48]!
0008C364 080d40f9 ldr      x8, [x8, #0x18]
0008C368 00013fd6 blr      x8
0008C36C 740200f9 str      x20, [x19]
0008C370 f44f46a9 ldp      x20, x19, [sp, #0x60]
0008C374 f72340f9 ldr      x23, [sp, #0x40]
0008C378 f65745a9 ldp      x22, x21, [sp, #0x50]
0008C37C fd7b43a9 ldp      x29, x30, [sp, #0x30]
0008C380 ffc30191 add      sp, sp, #0x70
0008C384 c0035fd6 ret      
0008C388 e00314aa mov      x0, x20
0008C38C 8464fe97 bl       #0x2559c
0008C390 880240f9 ldr      x8, [x20]
0008C394 f50300aa mov      x21, x0
0008C398 e00314aa mov      x0, x20
0008C39C 090940f9 ldr      x9, [x8, #0x10]
0008C3A0 e8230091 add      x8, sp, #8
0008C3A4 20013fd6 blr      x9
0008C3A8 80a641f9 ldr      x0, [x20, #0x348]
0008C3AC 080040f9 ldr      x8, [x0]
0008C3B0 090940f9 ldr      x9, [x8, #0x10]
0008C3B4 a82300d1 sub      x8, x29, #8
0008C3B8 20013fd6 blr      x9
0008C3BC a07f0091 add      x0, x29, #0x1f
0008C3C0 e2230091 add      x2, sp, #8
0008C3C4 a32300d1 sub      x3, x29, #8
0008C3C8 e10315aa mov      x1, x21
0008C3CC 180b0094 bl       #0x8f02c
0008C3D0 f40300aa mov      x20, x0
0008C3D4 00fbffb5 cbnz     x0, #0x8c334
0008C3D8 dbffff17 b        #0x8c344
0008C3DC e00314aa mov      x0, x20
0008C3E0 6f64fe97 bl       #0x2559c
0008C3E4 880240f9 ldr      x8, [x20]
0008C3E8 f50300aa mov      x21, x0
0008C3EC e00314aa mov      x0, x20
0008C3F0 090940f9 ldr      x9, [x8, #0x10]
0008C3F4 e8230091 add      x8, sp, #8
0008C3F8 20013fd6 blr      x9
0008C3FC 80a641f9 ldr      x0, [x20, #0x348]
0008C400 080040f9 ldr      x8, [x0]
0008C404 090940f9 ldr      x9, [x8, #0x10]
0008C408 a82300d1 sub      x8, x29, #8
0008C40C 20013fd6 blr      x9
0008C410 a07f0091 add      x0, x29, #0x1f
0008C414 e2230091 add      x2, sp, #8
0008C418 a32300d1 sub      x3, x29, #8
0008C41C e10315aa mov      x1, x21
0008C420 4d0b0094 bl       #0x8f154
0008C424 f40300aa mov      x20, x0
0008C428 60f8ffb5 cbnz     x0, #0x8c334
0008C42C c6ffff17 b        #0x8c344
0008C430 e00314aa mov      x0, x20
0008C434 5a64fe97 bl       #0x2559c
0008C438 880240f9 ldr      x8, [x20]
0008C43C f50300aa mov      x21, x0
0008C440 e00314aa mov      x0, x20
0008C444 090940f9 ldr      x9, [x8, #0x10]
0008C448 e8230091 add      x8, sp, #8
0008C44C 20013fd6 blr      x9
0008C450 80a641f9 ldr      x0, [x20, #0x348]
0008C454 080040f9 ldr      x8, [x0]
0008C458 090940f9 ldr      x9, [x8, #0x10]
0008C45C a82300d1 sub      x8, x29, #8
0008C460 20013fd6 blr      x9
0008C464 a07f0091 add      x0, x29, #0x1f
0008C468 e2230091 add      x2, sp, #8
0008C46C a32300d1 sub      x3, x29, #8
0008C470 e10315aa mov      x1, x21
0008C474 a40a0094 bl       #0x8ef04
0008C478 f40300aa mov      x20, x0
0008C47C c0f5ffb5 cbnz     x0, #0x8c334
0008C480 b1ffff17 b        #0x8c344
0008C484 e00314aa mov      x0, x20
0008C488 4564fe97 bl       #0x2559c
0008C48C 880240f9 ldr      x8, [x20]
0008C490 f50300aa mov      x21, x0
0008C494 e00314aa mov      x0, x20
0008C498 090940f9 ldr      x9, [x8, #0x10]
0008C49C e8230091 add      x8, sp, #8
0008C4A0 20013fd6 blr      x9
0008C4A4 80a641f9 ldr      x0, [x20, #0x348]
0008C4A8 080040f9 ldr      x8, [x0]
0008C4AC 090940f9 ldr      x9, [x8, #0x10]
0008C4B0 a82300d1 sub      x8, x29, #8
0008C4B4 20013fd6 blr      x9
0008C4B8 a07f0091 add      x0, x29, #0x1f
0008C4BC e2230091 add      x2, sp, #8
0008C4C0 a32300d1 sub      x3, x29, #8
0008C4C4 e10315aa mov      x1, x21
0008C4C8 6d0b0094 bl       #0x8f27c
0008C4CC f40300aa mov      x20, x0
0008C4D0 20f3ffb5 cbnz     x0, #0x8c334
0008C4D4 9cffff17 b        #0x8c344
0008C4D8 e00314aa mov      x0, x20
0008C4DC 3064fe97 bl       #0x2559c
0008C4E0 880240f9 ldr      x8, [x20]
0008C4E4 f50300aa mov      x21, x0
0008C4E8 e00314aa mov      x0, x20
0008C4EC 090940f9 ldr      x9, [x8, #0x10]
0008C4F0 e8230091 add      x8, sp, #8
0008C4F4 20013fd6 blr      x9
0008C4F8 80a641f9 ldr      x0, [x20, #0x348]
0008C4FC 080040f9 ldr      x8, [x0]
0008C500 090940f9 ldr      x9, [x8, #0x10]
0008C504 a82300d1 sub      x8, x29, #8
0008C508 20013fd6 blr      x9
0008C50C a07f0091 add      x0, x29, #0x1f
0008C510 e2230091 add      x2, sp, #8
0008C514 a32300d1 sub      x3, x29, #8
0008C518 e10315aa mov      x1, x21
0008C51C a20b0094 bl       #0x8f3a4
0008C520 f40300aa mov      x20, x0
0008C524 80f0ffb5 cbnz     x0, #0x8c334
0008C528 87ffff17 b        #0x8c344
0008C52C e00314aa mov      x0, x20
0008C530 1b64fe97 bl       #0x2559c
0008C534 880240f9 ldr      x8, [x20]
0008C538 f50300aa mov      x21, x0
0008C53C e00314aa mov      x0, x20
0008C540 090940f9 ldr      x9, [x8, #0x10]
0008C544 e8230091 add      x8, sp, #8
0008C548 20013fd6 blr      x9
0008C54C 80a641f9 ldr      x0, [x20, #0x348]
0008C550 080040f9 ldr      x8, [x0]
0008C554 090940f9 ldr      x9, [x8, #0x10]
0008C558 a82300d1 sub      x8, x29, #8
0008C55C 20013fd6 blr      x9
0008C560 a07f0091 add      x0, x29, #0x1f
0008C564 e2230091 add      x2, sp, #8
0008C568 a32300d1 sub      x3, x29, #8
0008C56C e10315aa mov      x1, x21
0008C570 d70b0094 bl       #0x8f4cc
0008C574 f40300aa mov      x20, x0
0008C578 e0edffb5 cbnz     x0, #0x8c334
0008C57C 72ffff17 b        #0x8c344
0008C580 e00314aa mov      x0, x20
0008C584 0664fe97 bl       #0x2559c
0008C588 880240f9 ldr      x8, [x20]
0008C58C f50300aa mov      x21, x0
0008C590 e00314aa mov      x0, x20
0008C594 090940f9 ldr      x9, [x8, #0x10]
0008C598 e8230091 add      x8, sp, #8
0008C59C 20013fd6 blr      x9
0008C5A0 80a641f9 ldr      x0, [x20, #0x348]
0008C5A4 080040f9 ldr      x8, [x0]
0008C5A8 090940f9 ldr      x9, [x8, #0x10]
0008C5AC a82300d1 sub      x8, x29, #8
0008C5B0 20013fd6 blr      x9
0008C5B4 a07f0091 add      x0, x29, #0x1f
0008C5B8 e2230091 add      x2, sp, #8
0008C5BC a32300d1 sub      x3, x29, #8
0008C5C0 e10315aa mov      x1, x21
0008C5C4 0c0c0094 bl       #0x8f5f4
0008C5C8 f40300aa mov      x20, x0
0008C5CC 40ebffb5 cbnz     x0, #0x8c334
0008C5D0 5dffff17 b        #0x8c344
0008C5D4 e00314aa mov      x0, x20
0008C5D8 f163fe97 bl       #0x2559c
0008C5DC 880240f9 ldr      x8, [x20]
0008C5E0 f50300aa mov      x21, x0
0008C5E4 e00314aa mov      x0, x20
0008C5E8 090940f9 ldr      x9, [x8, #0x10]
0008C5EC e8230091 add      x8, sp, #8
0008C5F0 20013fd6 blr      x9
0008C5F4 80a641f9 ldr      x0, [x20, #0x348]
0008C5F8 080040f9 ldr      x8, [x0]
0008C5FC 090940f9 ldr      x9, [x8, #0x10]
0008C600 a82300d1 sub      x8, x29, #8
0008C604 20013fd6 blr      x9
0008C608 a07f0091 add      x0, x29, #0x1f
0008C60C e2230091 add      x2, sp, #8
0008C610 a32300d1 sub      x3, x29, #8
0008C614 e10315aa mov      x1, x21
0008C618 410c0094 bl       #0x8f71c
0008C61C f40300aa mov      x20, x0
0008C620 a0e8ffb5 cbnz     x0, #0x8c334
0008C624 48ffff17 b        #0x8c344
0008C628 e00314aa mov      x0, x20
0008C62C dc63fe97 bl       #0x2559c
0008C630 880240f9 ldr      x8, [x20]
0008C634 f50300aa mov      x21, x0
0008C638 e00314aa mov      x0, x20
0008C63C 090940f9 ldr      x9, [x8, #0x10]
0008C640 e8230091 add      x8, sp, #8
0008C644 20013fd6 blr      x9
0008C648 80a641f9 ldr      x0, [x20, #0x348]
0008C64C 080040f9 ldr      x8, [x0]
0008C650 090940f9 ldr      x9, [x8, #0x10]
0008C654 a82300d1 sub      x8, x29, #8
0008C658 20013fd6 blr      x9
0008C65C a07f0091 add      x0, x29, #0x1f
0008C660 e2230091 add      x2, sp, #8
0008C664 a32300d1 sub      x3, x29, #8
0008C668 e10315aa mov      x1, x21
0008C66C 760c0094 bl       #0x8f844
0008C670 f40300aa mov      x20, x0
0008C674 00e6ffb5 cbnz     x0, #0x8c334
0008C678 33ffff17 b        #0x8c344
0008C67C e00314aa mov      x0, x20
0008C680 c763fe97 bl       #0x2559c
0008C684 880240f9 ldr      x8, [x20]
0008C688 f50300aa mov      x21, x0
0008C68C e00314aa mov      x0, x20
0008C690 090940f9 ldr      x9, [x8, #0x10]
0008C694 e8230091 add      x8, sp, #8
0008C698 20013fd6 blr      x9
0008C69C 80a641f9 ldr      x0, [x20, #0x348]
0008C6A0 080040f9 ldr      x8, [x0]
0008C6A4 090940f9 ldr      x9, [x8, #0x10]
0008C6A8 a82300d1 sub      x8, x29, #8
0008C6AC 20013fd6 blr      x9
0008C6B0 a07f0091 add      x0, x29, #0x1f
0008C6B4 e2230091 add      x2, sp, #8
0008C6B8 a32300d1 sub      x3, x29, #8
0008C6BC e10315aa mov      x1, x21
0008C6C0 ab0c0094 bl       #0x8f96c
0008C6C4 f40300aa mov      x20, x0
0008C6C8 60e3ffb5 cbnz     x0, #0x8c334
0008C6CC 1effff17 b        #0x8c344
0008C6D0 e00314aa mov      x0, x20
0008C6D4 b263fe97 bl       #0x2559c
0008C6D8 880240f9 ldr      x8, [x20]
0008C6DC f50300aa mov      x21, x0
0008C6E0 e00314aa mov      x0, x20
0008C6E4 090940f9 ldr      x9, [x8, #0x10]
0008C6E8 e8230091 add      x8, sp, #8
0008C6EC 20013fd6 blr      x9
0008C6F0 80a641f9 ldr      x0, [x20, #0x348]
0008C6F4 080040f9 ldr      x8, [x0]
0008C6F8 090940f9 ldr      x9, [x8, #0x10]
0008C6FC a82300d1 sub      x8, x29, #8
0008C700 20013fd6 blr      x9
0008C704 a07f0091 add      x0, x29, #0x1f
0008C708 e2230091 add      x2, sp, #8
0008C70C a32300d1 sub      x3, x29, #8
0008C710 e10315aa mov      x1, x21
0008C714 e00c0094 bl       #0x8fa94
0008C718 f40300aa mov      x20, x0
0008C71C c0e0ffb5 cbnz     x0, #0x8c334
0008C720 09ffff17 b        #0x8c344
0008C724 e00314aa mov      x0, x20
0008C728 9d63fe97 bl       #0x2559c
0008C72C 880240f9 ldr      x8, [x20]
0008C730 f50300aa mov      x21, x0
0008C734 e00314aa mov      x0, x20
0008C738 090940f9 ldr      x9, [x8, #0x10]
0008C73C e8230091 add      x8, sp, #8
0008C740 20013fd6 blr      x9
0008C744 80a641f9 ldr      x0, [x20, #0x348]
0008C748 080040f9 ldr      x8, [x0]
0008C74C 090940f9 ldr      x9, [x8, #0x10]
0008C750 a82300d1 sub      x8, x29, #8
0008C754 20013fd6 blr      x9
0008C758 a07f0091 add      x0, x29, #0x1f
0008C75C e2230091 add      x2, sp, #8
0008C760 a32300d1 sub      x3, x29, #8
0008C764 e10315aa mov      x1, x21
0008C768 150d0094 bl       #0x8fbbc
0008C76C f40300aa mov      x20, x0
0008C770 20deffb5 cbnz     x0, #0x8c334
0008C774 f4feff17 b        #0x8c344
0008C778 7f0200f9 str      xzr, [x19]
0008C77C f44f46a9 ldp      x20, x19, [sp, #0x60]
0008C780 f72340f9 ldr      x23, [sp, #0x40]
0008C784 f65745a9 ldp      x22, x21, [sp, #0x50]
0008C788 fd7b43a9 ldp      x29, x30, [sp, #0x30]
0008C78C ffc30191 add      sp, sp, #0x70
0008C790 c0035fd6 ret      
0008C794 e00314aa mov      x0, x20
0008C798 8163fe97 bl       #0x2559c
0008C79C 880240f9 ldr      x8, [x20]
0008C7A0 f50300aa mov      x21, x0
0008C7A4 e00314aa mov      x0, x20
0008C7A8 090940f9 ldr      x9, [x8, #0x10]
0008C7AC e8230091 add      x8, sp, #8
0008C7B0 20013fd6 blr      x9
0008C7B4 80a641f9 ldr      x0, [x20, #0x348]
0008C7B8 080040f9 ldr      x8, [x0]
0008C7BC 090940f9 ldr      x9, [x8, #0x10]
0008C7C0 a82300d1 sub      x8, x29, #8
0008C7C4 20013fd6 blr      x9
0008C7C8 a07f0091 add      x0, x29, #0x1f
0008C7CC e2230091 add      x2, sp, #8
0008C7D0 a32300d1 sub      x3, x29, #8
0008C7D4 e10315aa mov      x1, x21
0008C7D8 470d0094 bl       #0x8fcf4
0008C7DC f40300aa mov      x20, x0
0008C7E0 a0daffb5 cbnz     x0, #0x8c334
0008C7E4 d8feff17 b        #0x8c344
0008C7E8 e00314aa mov      x0, x20
0008C7EC 6c63fe97 bl       #0x2559c
0008C7F0 880240f9 ldr      x8, [x20]
0008C7F4 f50300aa mov      x21, x0
0008C7F8 e00314aa mov      x0, x20
0008C7FC 090940f9 ldr      x9, [x8, #0x10]
0008C800 e8230091 add      x8, sp, #8
0008C804 20013fd6 blr      x9
0008C808 80a641f9 ldr      x0, [x20, #0x348]
0008C80C 080040f9 ldr      x8, [x0]
0008C810 090940f9 ldr      x9, [x8, #0x10]
0008C814 a82300d1 sub      x8, x29, #8
0008C818 20013fd6 blr      x9
0008C81C a07f0091 add      x0, x29, #0x1f
0008C820 e2230091 add      x2, sp, #8
0008C824 a32300d1 sub      x3, x29, #8
0008C828 e10315aa mov      x1, x21
0008C82C 960d0094 bl       #0x8fe84
0008C830 f40300aa mov      x20, x0
0008C834 00d8ffb5 cbnz     x0, #0x8c334
0008C838 c3feff17 b        #0x8c344
0008C83C e00314aa mov      x0, x20
0008C840 5763fe97 bl       #0x2559c
0008C844 880240f9 ldr      x8, [x20]
0008C848 f50300aa mov      x21, x0
0008C84C e00314aa mov      x0, x20
0008C850 090940f9 ldr      x9, [x8, #0x10]
0008C854 e8230091 add      x8, sp, #8
0008C858 20013fd6 blr      x9
0008C85C 80a641f9 ldr      x0, [x20, #0x348]
0008C860 080040f9 ldr      x8, [x0]
0008C864 090940f9 ldr      x9, [x8, #0x10]
0008C868 a82300d1 sub      x8, x29, #8
0008C86C 20013fd6 blr      x9
0008C870 a07f0091 add      x0, x29, #0x1f
0008C874 e2230091 add      x2, sp, #8
0008C878 a32300d1 sub      x3, x29, #8
0008C87C e10315aa mov      x1, x21
0008C880 de0d0094 bl       #0x8fff8
0008C884 f40300aa mov      x20, x0
0008C888 60d5ffb5 cbnz     x0, #0x8c334
0008C88C aefeff17 b        #0x8c344
0008C890 e00314aa mov      x0, x20
0008C894 4263fe97 bl       #0x2559c
0008C898 880240f9 ldr      x8, [x20]
0008C89C f50300aa mov      x21, x0
0008C8A0 e00314aa mov      x0, x20
0008C8A4 090940f9 ldr      x9, [x8, #0x10]
0008C8A8 e8230091 add      x8, sp, #8
0008C8AC 20013fd6 blr      x9
0008C8B0 80a641f9 ldr      x0, [x20, #0x348]
0008C8B4 080040f9 ldr      x8, [x0]
0008C8B8 090940f9 ldr      x9, [x8, #0x10]
0008C8BC a82300d1 sub      x8, x29, #8
0008C8C0 20013fd6 blr      x9
0008C8C4 a07f0091 add      x0, x29, #0x1f
0008C8C8 e2230091 add      x2, sp, #8
0008C8CC a32300d1 sub      x3, x29, #8
0008C8D0 e10315aa mov      x1, x21
0008C8D4 170e0094 bl       #0x90130
0008C8D8 f40300aa mov      x20, x0
0008C8DC c0d2ffb5 cbnz     x0, #0x8c334
0008C8E0 99feff17 b        #0x8c344
0008C8E4 e00314aa mov      x0, x20
0008C8E8 2d63fe97 bl       #0x2559c
0008C8EC 880240f9 ldr      x8, [x20]
0008C8F0 f50300aa mov      x21, x0
0008C8F4 e00314aa mov      x0, x20
0008C8F8 090940f9 ldr      x9, [x8, #0x10]
0008C8FC e8230091 add      x8, sp, #8
0008C900 20013fd6 blr      x9
0008C904 80a641f9 ldr      x0, [x20, #0x348]
0008C908 080040f9 ldr      x8, [x0]
0008C90C 090940f9 ldr      x9, [x8, #0x10]
0008C910 a82300d1 sub      x8, x29, #8
0008C914 20013fd6 blr      x9
0008C918 a07f0091 add      x0, x29, #0x1f
0008C91C e2230091 add      x2, sp, #8
0008C920 a32300d1 sub      x3, x29, #8
0008C924 e10315aa mov      x1, x21
0008C928 5b0e0094 bl       #0x90294
0008C92C f40300aa mov      x20, x0
0008C930 20d0ffb5 cbnz     x0, #0x8c334
0008C934 84feff17 b        #0x8c344
0008C938 e00314aa mov      x0, x20
0008C93C 1863fe97 bl       #0x2559c
0008C940 880240f9 ldr      x8, [x20]
0008C944 f50300aa mov      x21, x0
0008C948 e00314aa mov      x0, x20
0008C94C 090940f9 ldr      x9, [x8, #0x10]
0008C950 e8230091 add      x8, sp, #8
0008C954 20013fd6 blr      x9
0008C958 80a641f9 ldr      x0, [x20, #0x348]
0008C95C 080040f9 ldr      x8, [x0]
0008C960 090940f9 ldr      x9, [x8, #0x10]
0008C964 a82300d1 sub      x8, x29, #8
0008C968 20013fd6 blr      x9
0008C96C a07f0091 add      x0, x29, #0x1f
0008C970 e2230091 add      x2, sp, #8
0008C974 a32300d1 sub      x3, x29, #8
0008C978 e10315aa mov      x1, x21
0008C97C 950e0094 bl       #0x903d0
0008C980 f40300aa mov      x20, x0
0008C984 80cdffb5 cbnz     x0, #0x8c334
0008C988 6ffeff17 b        #0x8c344
0008C98C e00314aa mov      x0, x20
0008C990 0363fe97 bl       #0x2559c
0008C994 880240f9 ldr      x8, [x20]
0008C998 f50300aa mov      x21, x0
0008C99C e00314aa mov      x0, x20
0008C9A0 090940f9 ldr      x9, [x8, #0x10]
0008C9A4 e8230091 add      x8, sp, #8
0008C9A8 20013fd6 blr      x9
0008C9AC 80a641f9 ldr      x0, [x20, #0x348]
0008C9B0 080040f9 ldr      x8, [x0]
0008C9B4 090940f9 ldr      x9, [x8, #0x10]
0008C9B8 a82300d1 sub      x8, x29, #8
0008C9BC 20013fd6 blr      x9
0008C9C0 a07f0091 add      x0, x29, #0x1f
0008C9C4 e2230091 add      x2, sp, #8
0008C9C8 a32300d1 sub      x3, x29, #8
0008C9CC e10315aa mov      x1, x21
0008C9D0 df0e0094 bl       #0x9054c
0008C9D4 f40300aa mov      x20, x0
0008C9D8 e0caffb5 cbnz     x0, #0x8c334
0008C9DC 5afeff17 b        #0x8c344
0008C9E0 e00314aa mov      x0, x20
0008C9E4 ee62fe97 bl       #0x2559c
0008C9E8 880240f9 ldr      x8, [x20]
0008C9EC f50300aa mov      x21, x0
0008C9F0 e00314aa mov      x0, x20
0008C9F4 090940f9 ldr      x9, [x8, #0x10]
0008C9F8 e8230091 add      x8, sp, #8
0008C9FC 20013fd6 blr      x9
0008CA00 80a641f9 ldr      x0, [x20, #0x348]
0008CA04 080040f9 ldr      x8, [x0]
0008CA08 090940f9 ldr      x9, [x8, #0x10]
0008CA0C a82300d1 sub      x8, x29, #8
0008CA10 20013fd6 blr      x9
0008CA14 a07f0091 add      x0, x29, #0x1f
0008CA18 e2230091 add      x2, sp, #8
0008CA1C a32300d1 sub      x3, x29, #8
0008CA20 e10315aa mov      x1, x21
0008CA24 180f0094 bl       #0x90684
0008CA28 f40300aa mov      x20, x0
0008CA2C 40c8ffb5 cbnz     x0, #0x8c334
0008CA30 45feff17 b        #0x8c344
0008CA34 e00314aa mov      x0, x20
0008CA38 d962fe97 bl       #0x2559c
0008CA3C 880240f9 ldr      x8, [x20]
0008CA40 f50300aa mov      x21, x0
0008CA44 e00314aa mov      x0, x20
0008CA48 090940f9 ldr      x9, [x8, #0x10]
0008CA4C e8230091 add      x8, sp, #8
0008CA50 20013fd6 blr      x9
0008CA54 80a641f9 ldr      x0, [x20, #0x348]
0008CA58 080040f9 ldr      x8, [x0]
0008CA5C 090940f9 ldr      x9, [x8, #0x10]
0008CA60 a82300d1 sub      x8, x29, #8
0008CA64 20013fd6 blr      x9
0008CA68 a07f0091 add      x0, x29, #0x1f
0008CA6C e2230091 add      x2, sp, #8
0008CA70 a32300d1 sub      x3, x29, #8
0008CA74 e10315aa mov      x1, x21
0008CA78 520f0094 bl       #0x907c0
0008CA7C f40300aa mov      x20, x0
0008CA80 a0c5ffb5 cbnz     x0, #0x8c334
0008CA84 30feff17 b        #0x8c344
0008CA88 e00314aa mov      x0, x20
0008CA8C c462fe97 bl       #0x2559c
0008CA90 880240f9 ldr      x8, [x20]
0008CA94 f50300aa mov      x21, x0
0008CA98 e00314aa mov      x0, x20
0008CA9C 090940f9 ldr      x9, [x8, #0x10]
0008CAA0 e8230091 add      x8, sp, #8
0008CAA4 20013fd6 blr      x9
0008CAA8 80a641f9 ldr      x0, [x20, #0x348]
0008CAAC 080040f9 ldr      x8, [x0]
0008CAB0 090940f9 ldr      x9, [x8, #0x10]
0008CAB4 a82300d1 sub      x8, x29, #8
0008CAB8 20013fd6 blr      x9
0008CABC a07f0091 add      x0, x29, #0x1f
0008CAC0 e2230091 add      x2, sp, #8
0008CAC4 a32300d1 sub      x3, x29, #8
0008CAC8 e10315aa mov      x1, x21
0008CACC da0f0094 bl       #0x90a34
0008CAD0 f40300aa mov      x20, x0
0008CAD4 00c3ffb5 cbnz     x0, #0x8c334
0008CAD8 1bfeff17 b        #0x8c344
0008CADC e00314aa mov      x0, x20
0008CAE0 af62fe97 bl       #0x2559c
0008CAE4 880240f9 ldr      x8, [x20]
0008CAE8 f50300aa mov      x21, x0
0008CAEC e00314aa mov      x0, x20
0008CAF0 090940f9 ldr      x9, [x8, #0x10]
0008CAF4 e8230091 add      x8, sp, #8
0008CAF8 20013fd6 blr      x9
0008CAFC 80a641f9 ldr      x0, [x20, #0x348]
0008CB00 080040f9 ldr      x8, [x0]
0008CB04 090940f9 ldr      x9, [x8, #0x10]
0008CB08 a82300d1 sub      x8, x29, #8
0008CB0C 20013fd6 blr      x9
0008CB10 a07f0091 add      x0, x29, #0x1f
0008CB14 e2230091 add      x2, sp, #8
0008CB18 a32300d1 sub      x3, x29, #8
0008CB1C e10315aa mov      x1, x21
0008CB20 65100094 bl       #0x90cb4
0008CB24 f40300aa mov      x20, x0
0008CB28 60c0ffb5 cbnz     x0, #0x8c334
0008CB2C 06feff17 b        #0x8c344
0008CB30 a8a601b9 str      w8, [x21, #0x1a4]
0008CB34 02000014 b        #0x8cb3c
0008CB38 bfa601b9 str      wzr, [x21, #0x1a4]
0008CB3C e8230091 add      x8, sp, #8
0008CB40 e00314aa mov      x0, x20
0008CB44 09000094 bl       #0x8cb68
0008CB48 e80740f9 ldr      x8, [sp, #8]
0008CB4C 680200f9 str      x8, [x19]
0008CB50 f44f46a9 ldp      x20, x19, [sp, #0x60]
0008CB54 f72340f9 ldr      x23, [sp, #0x40]
0008CB58 f65745a9 ldp      x22, x21, [sp, #0x50]
0008CB5C fd7b43a9 ldp      x29, x30, [sp, #0x30]
0008CB60 ffc30191 add      sp, sp, #0x70
0008CB64 c0035fd6 ret      
~~~
### 0x8cb68 (44 slots)
~~~asm
0008CB68 ff0301d1 sub      sp, sp, #0x40
0008CB6C fd7b01a9 stp      x29, x30, [sp, #0x10]
0008CB70 f51300f9 str      x21, [sp, #0x20]
0008CB74 f44f03a9 stp      x20, x19, [sp, #0x30]
0008CB78 fd430091 add      x29, sp, #0x10
0008CB7C f30300aa mov      x19, x0
0008CB80 f40308aa mov      x20, x8
0008CB84 8662fe97 bl       #0x2559c
0008CB88 680240f9 ldr      x8, [x19]
0008CB8C f50300aa mov      x21, x0
0008CB90 e00313aa mov      x0, x19
0008CB94 090940f9 ldr      x9, [x8, #0x10]
0008CB98 e8230091 add      x8, sp, #8
0008CB9C 20013fd6 blr      x9
0008CBA0 60a641f9 ldr      x0, [x19, #0x348]
0008CBA4 080040f9 ldr      x8, [x0]
0008CBA8 090940f9 ldr      x9, [x8, #0x10]
0008CBAC e8030091 mov      x8, sp
0008CBB0 20013fd6 blr      x9
0008CBB4 a07f0091 add      x0, x29, #0x1f
0008CBB8 e2230091 add      x2, sp, #8
0008CBBC e3030091 mov      x3, sp
0008CBC0 e10315aa mov      x1, x21
0008CBC4 86080094 bl       #0x8eddc
0008CBC8 800200f9 str      x0, [x20]
0008CBCC 800000b4 cbz      x0, #0x8cbdc
0008CBD0 088c44f8 ldr      x8, [x0, #0x48]!
0008CBD4 080940f9 ldr      x8, [x8, #0x10]
0008CBD8 00013fd6 blr      x8
0008CBDC e00340f9 ldr      x0, [sp]
0008CBE0 800000b4 cbz      x0, #0x8cbf0
0008CBE4 088c44f8 ldr      x8, [x0, #0x48]!
0008CBE8 080d40f9 ldr      x8, [x8, #0x18]
0008CBEC 00013fd6 blr      x8
0008CBF0 e00740f9 ldr      x0, [sp, #8]
0008CBF4 800000b4 cbz      x0, #0x8cc04
0008CBF8 088c44f8 ldr      x8, [x0, #0x48]!
0008CBFC 080d40f9 ldr      x8, [x8, #0x18]
0008CC00 00013fd6 blr      x8
0008CC04 f44f43a9 ldp      x20, x19, [sp, #0x30]
0008CC08 f51340f9 ldr      x21, [sp, #0x20]
0008CC0C fd7b41a9 ldp      x29, x30, [sp, #0x10]
0008CC10 ff030191 add      sp, sp, #0x40
0008CC14 c0035fd6 ret      
~~~
### 0x8cc18 (44 slots)
~~~asm
0008CC18 ff0301d1 sub      sp, sp, #0x40
0008CC1C fd7b01a9 stp      x29, x30, [sp, #0x10]
0008CC20 f51300f9 str      x21, [sp, #0x20]
0008CC24 f44f03a9 stp      x20, x19, [sp, #0x30]
0008CC28 fd430091 add      x29, sp, #0x10
0008CC2C f30300aa mov      x19, x0
0008CC30 f40308aa mov      x20, x8
0008CC34 5a62fe97 bl       #0x2559c
0008CC38 680240f9 ldr      x8, [x19]
0008CC3C f50300aa mov      x21, x0
0008CC40 e00313aa mov      x0, x19
0008CC44 090940f9 ldr      x9, [x8, #0x10]
0008CC48 e8230091 add      x8, sp, #8
0008CC4C 20013fd6 blr      x9
0008CC50 60a641f9 ldr      x0, [x19, #0x348]
0008CC54 080040f9 ldr      x8, [x0]
0008CC58 090940f9 ldr      x9, [x8, #0x10]
0008CC5C e8030091 mov      x8, sp
0008CC60 20013fd6 blr      x9
0008CC64 a07f0091 add      x0, x29, #0x1f
0008CC68 e2230091 add      x2, sp, #8
0008CC6C e3030091 mov      x3, sp
0008CC70 e10315aa mov      x1, x21
0008CC74 a4080094 bl       #0x8ef04
0008CC78 800200f9 str      x0, [x20]
0008CC7C 800000b4 cbz      x0, #0x8cc8c
0008CC80 088c44f8 ldr      x8, [x0, #0x48]!
0008CC84 080940f9 ldr      x8, [x8, #0x10]
0008CC88 00013fd6 blr      x8
0008CC8C e00340f9 ldr      x0, [sp]
0008CC90 800000b4 cbz      x0, #0x8cca0
0008CC94 088c44f8 ldr      x8, [x0, #0x48]!
0008CC98 080d40f9 ldr      x8, [x8, #0x18]
0008CC9C 00013fd6 blr      x8
0008CCA0 e00740f9 ldr      x0, [sp, #8]
0008CCA4 800000b4 cbz      x0, #0x8ccb4
0008CCA8 088c44f8 ldr      x8, [x0, #0x48]!
0008CCAC 080d40f9 ldr      x8, [x8, #0x18]
0008CCB0 00013fd6 blr      x8
0008CCB4 f44f43a9 ldp      x20, x19, [sp, #0x30]
0008CCB8 f51340f9 ldr      x21, [sp, #0x20]
0008CCBC fd7b41a9 ldp      x29, x30, [sp, #0x10]
0008CCC0 ff030191 add      sp, sp, #0x40
0008CCC4 c0035fd6 ret      
~~~
### 0x8ccd0 (284 slots)
~~~asm
0008CCD0 ff0301d1 sub      sp, sp, #0x40
0008CCD4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0008CCD8 f65702a9 stp      x22, x21, [sp, #0x20]
0008CCDC f44f03a9 stp      x20, x19, [sp, #0x30]
0008CCE0 fd430091 add      x29, sp, #0x10
0008CCE4 f30300aa mov      x19, x0
0008CCE8 e0031f2a mov      w0, wzr
0008CCEC 85a61594 bl       #0x5f6700
0008CCF0 60a641f9 ldr      x0, [x19, #0x348]
0008CCF4 080040f9 ldr      x8, [x0]
0008CCF8 090940f9 ldr      x9, [x8, #0x10]
0008CCFC e8230091 add      x8, sp, #8
0008CD00 20013fd6 blr      x9
0008CD04 f40740f9 ldr      x20, [sp, #8]
0008CD08 f40800b4 cbz      x20, #0x8ce24
0008CD0C 953240f9 ldr      x21, [x20, #0x60]
0008CD10 f50100b4 cbz      x21, #0x8cd4c
0008CD14 a80240f9 ldr      x8, [x21]
0008CD18 e00315aa mov      x0, x21
0008CD1C 080140f9 ldr      x8, [x8]
0008CD20 00013fd6 blr      x8
0008CD24 f60300aa mov      x22, x0
0008CD28 5e020094 bl       #0x8d6a0
0008CD2C 1f0016eb cmp      x0, x22
0008CD30 c0000054 b.eq     #0x8cd48
0008CD34 d60240f9 ldr      x22, [x22]
0008CD38 df0200eb cmp      x22, x0
0008CD3C c41a40fa ccmp     x22, #0, #4, ne
0008CD40 a1ffff54 b.ne     #0x8cd34
0008CD44 560600b4 cbz      x22, #0x8ce0c
0008CD48 b54201d1 sub      x21, x21, #0x50
0008CD4C 888e44f8 ldr      x8, [x20, #0x48]!
0008CD50 e00314aa mov      x0, x20
0008CD54 080d40f9 ldr      x8, [x8, #0x18]
0008CD58 00013fd6 blr      x8
0008CD5C 550600b4 cbz      x21, #0x8ce24
0008CD60 683a4db9 ldr      w8, [x19, #0xd38]
0008CD64 1f0d0071 cmp      w8, #3
0008CD68 e81b0054 b.hi     #0x8d0e4
0008CD6C c92c00b0 adrp     x9, #0x625000
0008CD70 29b92491 add      x9, x9, #0x92e
0008CD74 8a000010 adr      x10, #0x8cd84
0008CD78 2b696838 ldrb     w11, [x9, x8]
0008CD7C 4a090b8b add      x10, x10, x11, lsl #2
0008CD80 40011fd6 br       x10
0008CD84 682e4db9 ldr      w8, [x19, #0xd2c]
0008CD88 1f2003d5 nop      
0008CD8C 1f2003d5 nop      
0008CD90 1f0d0071 cmp      w8, #3
0008CD94 60010054 b.eq     #0x8cdc0
0008CD98 1f090071 cmp      w8, #2
0008CD9C 20020054 b.eq     #0x8cde0
0008CDA0 1f050071 cmp      w8, #1
0008CDA4 21040054 b.ne     #0x8ce28
0008CDA8 609a46f9 ldr      x0, [x19, #0xd30]
0008CDAC 2b3f0094 bl       #0x9ca58
0008CDB0 48008052 mov      w8, #2
0008CDB4 682e0db9 str      w8, [x19, #0xd2c]
0008CDB8 f6ffff17 b        #0x8cd90
0008CDBC 1f2003d5 nop      
0008CDC0 689a46f9 ldr      x8, [x19, #0xd30]
0008CDC4 08650991 add      x8, x8, #0x259
0008CDC8 08fddf08 ldarb    w8, [x8]
0008CDCC 88190036 tbz      w8, #0, #0x8d0fc
0008CDD0 88008052 mov      w8, #4
0008CDD4 682e0db9 str      w8, [x19, #0xd2c]
0008CDD8 eeffff17 b        #0x8cd90
0008CDDC 1f2003d5 nop      
0008CDE0 689a46f9 ldr      x8, [x19, #0xd30]
0008CDE4 08690991 add      x8, x8, #0x25a
0008CDE8 08fddf08 ldarb    w8, [x8]
0008CDEC 88180036 tbz      w8, #0, #0x8d0fc
0008CDF0 609a46f9 ldr      x0, [x19, #0xd30]
0008CDF4 080040f9 ldr      x8, [x0]
0008CDF8 082540f9 ldr      x8, [x8, #0x48]
0008CDFC 00013fd6 blr      x8
0008CE00 68008052 mov      w8, #3
0008CE04 682e0db9 str      w8, [x19, #0xd2c]
0008CE08 e2ffff17 b        #0x8cd90
0008CE0C f5031faa mov      x21, xzr
0008CE10 888e44f8 ldr      x8, [x20, #0x48]!
0008CE14 e00314aa mov      x0, x20
0008CE18 080d40f9 ldr      x8, [x8, #0x18]
0008CE1C 00013fd6 blr      x8
0008CE20 1ffaffb5 cbnz     xzr, #0x8cd60
0008CE24 47a51594 bl       #0x5f6340
0008CE28 609a46f9 ldr      x0, [x19, #0xd30]
0008CE2C 7f9a06f9 str      xzr, [x19, #0xd30]
0008CE30 800000b4 cbz      x0, #0x8ce40
0008CE34 088c44f8 ldr      x8, [x0, #0x48]!
0008CE38 080d40f9 ldr      x8, [x8, #0x18]
0008CE3C 00013fd6 blr      x8
0008CE40 683a4db9 ldr      w8, [x19, #0xd38]
0008CE44 08050011 add      w8, w8, #1
0008CE48 683a0db9 str      w8, [x19, #0xd38]
0008CE4C 685246f9 ldr      x8, [x19, #0xca0]
0008CE50 1f1100b9 str      wzr, [x8, #0x10]
0008CE54 685246f9 ldr      x8, [x19, #0xca0]
0008CE58 090940b9 ldr      w9, [x8, #8]
0008CE5C 3f050071 cmp      w9, #1
0008CE60 a1150054 b.ne     #0x8d114
0008CE64 091100b9 str      w9, [x8, #0x10]
0008CE68 685246f9 ldr      x8, [x19, #0xca0]
0008CE6C 1f1500b9 str      wzr, [x8, #0x14]
0008CE70 a8a641b9 ldr      w8, [x21, #0x1a4]
0008CE74 09050051 sub      w9, w8, #1
0008CE78 3f050071 cmp      w9, #1
0008CE7C 69150054 b.ls     #0x8d128
0008CE80 685246f9 ldr      x8, [x19, #0xca0]
0008CE84 098541f9 ldr      x9, [x8, #0x308]
0008CE88 890000b4 cbz      x9, #0x8ce98
0008CE8C 00210c91 add      x0, x8, #0x308
0008CE90 46280094 bl       #0x96fa8
0008CE94 685246f9 ldr      x8, [x19, #0xca0]
0008CE98 098941f9 ldr      x9, [x8, #0x310]
0008CE9C 690000b4 cbz      x9, #0x8cea8
0008CEA0 00410c91 add      x0, x8, #0x310
0008CEA4 41280094 bl       #0x96fa8
0008CEA8 683a4db9 ldr      w8, [x19, #0xd38]
0008CEAC 08050011 add      w8, w8, #1
0008CEB0 683a0db9 str      w8, [x19, #0xd38]
0008CEB4 606646f9 ldr      x0, [x19, #0xcc8]
0008CEB8 da0f0994 bl       #0x2d0e20
0008CEBC 606a46f9 ldr      x0, [x19, #0xcd0]
0008CEC0 d80f0994 bl       #0x2d0e20
0008CEC4 606e46f9 ldr      x0, [x19, #0xcd8]
0008CEC8 d60f0994 bl       #0x2d0e20
0008CECC 607246f9 ldr      x0, [x19, #0xce0]
0008CED0 d40f0994 bl       #0x2d0e20
0008CED4 607646f9 ldr      x0, [x19, #0xce8]
0008CED8 d20f0994 bl       #0x2d0e20
0008CEDC 607a46f9 ldr      x0, [x19, #0xcf0]
0008CEE0 861b0994 bl       #0x2d3cf8
0008CEE4 607e46f9 ldr      x0, [x19, #0xcf8]
0008CEE8 1be60894 bl       #0x2c6754
0008CEEC 608246f9 ldr      x0, [x19, #0xd00]
0008CEF0 cc0f0994 bl       #0x2d0e20
0008CEF4 608646f9 ldr      x0, [x19, #0xd08]
0008CEF8 b60c0994 bl       #0x2d01d0
0008CEFC 608a46f9 ldr      x0, [x19, #0xd10]
0008CF00 b40c0994 bl       #0x2d01d0
0008CF04 608e46f9 ldr      x0, [x19, #0xd18]
0008CF08 b20c0994 bl       #0x2d01d0
0008CF0C 683a4db9 ldr      w8, [x19, #0xd38]
0008CF10 08050011 add      w8, w8, #1
0008CF14 683a0db9 str      w8, [x19, #0xd38]
0008CF18 606646f9 ldr      x0, [x19, #0xcc8]
0008CF1C d50f0994 bl       #0x2d0e70
0008CF20 1f040071 cmp      w0, #1
0008CF24 c10e0054 b.ne     #0x8d0fc
0008CF28 606a46f9 ldr      x0, [x19, #0xcd0]
0008CF2C d10f0994 bl       #0x2d0e70
0008CF30 1f040071 cmp      w0, #1
0008CF34 410e0054 b.ne     #0x8d0fc
0008CF38 606e46f9 ldr      x0, [x19, #0xcd8]
0008CF3C cd0f0994 bl       #0x2d0e70
0008CF40 1f040071 cmp      w0, #1
0008CF44 c10d0054 b.ne     #0x8d0fc
0008CF48 607246f9 ldr      x0, [x19, #0xce0]
0008CF4C c90f0994 bl       #0x2d0e70
0008CF50 1f040071 cmp      w0, #1
0008CF54 410d0054 b.ne     #0x8d0fc
0008CF58 607646f9 ldr      x0, [x19, #0xce8]
0008CF5C c50f0994 bl       #0x2d0e70
0008CF60 1f040071 cmp      w0, #1
0008CF64 c10c0054 b.ne     #0x8d0fc
0008CF68 607a46f9 ldr      x0, [x19, #0xcf0]
0008CF6C 771b0994 bl       #0x2d3d48
0008CF70 600c0036 tbz      w0, #0, #0x8d0fc
0008CF74 607e46f9 ldr      x0, [x19, #0xcf8]
0008CF78 0be60894 bl       #0x2c67a4
0008CF7C 1f040071 cmp      w0, #1
0008CF80 e10b0054 b.ne     #0x8d0fc
0008CF84 608246f9 ldr      x0, [x19, #0xd00]
0008CF88 ba0f0994 bl       #0x2d0e70
0008CF8C 1f040071 cmp      w0, #1
0008CF90 610b0054 b.ne     #0x8d0fc
0008CF94 608646f9 ldr      x0, [x19, #0xd08]
0008CF98 bc0c0994 bl       #0x2d0288
0008CF9C 000b0036 tbz      w0, #0, #0x8d0fc
0008CFA0 608a46f9 ldr      x0, [x19, #0xd10]
0008CFA4 b90c0994 bl       #0x2d0288
0008CFA8 a00a0036 tbz      w0, #0, #0x8d0fc
0008CFAC 608e46f9 ldr      x0, [x19, #0xd18]
0008CFB0 b60c0994 bl       #0x2d0288
0008CFB4 400a0036 tbz      w0, #0, #0x8d0fc
0008CFB8 606646f9 ldr      x0, [x19, #0xcc8]
0008CFBC 7f6606f9 str      xzr, [x19, #0xcc8]
0008CFC0 800000b4 cbz      x0, #0x8cfd0
0008CFC4 088c44f8 ldr      x8, [x0, #0x48]!
0008CFC8 080d40f9 ldr      x8, [x8, #0x18]
0008CFCC 00013fd6 blr      x8
0008CFD0 606a46f9 ldr      x0, [x19, #0xcd0]
0008CFD4 7f6a06f9 str      xzr, [x19, #0xcd0]
0008CFD8 800000b4 cbz      x0, #0x8cfe8
0008CFDC 088c44f8 ldr      x8, [x0, #0x48]!
0008CFE0 080d40f9 ldr      x8, [x8, #0x18]
0008CFE4 00013fd6 blr      x8
0008CFE8 606e46f9 ldr      x0, [x19, #0xcd8]
0008CFEC 7f6e06f9 str      xzr, [x19, #0xcd8]
0008CFF0 800000b4 cbz      x0, #0x8d000
0008CFF4 088c44f8 ldr      x8, [x0, #0x48]!
0008CFF8 080d40f9 ldr      x8, [x8, #0x18]
0008CFFC 00013fd6 blr      x8
0008D000 607246f9 ldr      x0, [x19, #0xce0]
0008D004 7f7206f9 str      xzr, [x19, #0xce0]
0008D008 800000b4 cbz      x0, #0x8d018
0008D00C 088c44f8 ldr      x8, [x0, #0x48]!
0008D010 080d40f9 ldr      x8, [x8, #0x18]
0008D014 00013fd6 blr      x8
0008D018 607646f9 ldr      x0, [x19, #0xce8]
0008D01C 7f7606f9 str      xzr, [x19, #0xce8]
0008D020 800000b4 cbz      x0, #0x8d030
0008D024 088c44f8 ldr      x8, [x0, #0x48]!
0008D028 080d40f9 ldr      x8, [x8, #0x18]
0008D02C 00013fd6 blr      x8
0008D030 607a46f9 ldr      x0, [x19, #0xcf0]
0008D034 7f7a06f9 str      xzr, [x19, #0xcf0]
0008D038 800000b4 cbz      x0, #0x8d048
0008D03C 088c44f8 ldr      x8, [x0, #0x48]!
0008D040 080d40f9 ldr      x8, [x8, #0x18]
0008D044 00013fd6 blr      x8
0008D048 607e46f9 ldr      x0, [x19, #0xcf8]
0008D04C 7f7e06f9 str      xzr, [x19, #0xcf8]
0008D050 800000b4 cbz      x0, #0x8d060
0008D054 088c44f8 ldr      x8, [x0, #0x48]!
0008D058 080d40f9 ldr      x8, [x8, #0x18]
0008D05C 00013fd6 blr      x8
0008D060 608246f9 ldr      x0, [x19, #0xd00]
0008D064 7f8206f9 str      xzr, [x19, #0xd00]
0008D068 800000b4 cbz      x0, #0x8d078
0008D06C 088c44f8 ldr      x8, [x0, #0x48]!
0008D070 080d40f9 ldr      x8, [x8, #0x18]
0008D074 00013fd6 blr      x8
0008D078 688646f9 ldr      x8, [x19, #0xd08]
0008D07C 7f8606f9 str      xzr, [x19, #0xd08]
0008D080 a80000b4 cbz      x8, #0x8d094
0008D084 00e10e91 add      x0, x8, #0x3b8
0008D088 08dd41f9 ldr      x8, [x8, #0x3b8]
0008D08C 080d40f9 ldr      x8, [x8, #0x18]
0008D090 00013fd6 blr      x8
0008D094 688a46f9 ldr      x8, [x19, #0xd10]
0008D098 7f8a06f9 str      xzr, [x19, #0xd10]
0008D09C a80000b4 cbz      x8, #0x8d0b0
0008D0A0 00e10e91 add      x0, x8, #0x3b8
0008D0A4 08dd41f9 ldr      x8, [x8, #0x3b8]
0008D0A8 080d40f9 ldr      x8, [x8, #0x18]
0008D0AC 00013fd6 blr      x8
0008D0B0 688e46f9 ldr      x8, [x19, #0xd18]
0008D0B4 7f8e06f9 str      xzr, [x19, #0xd18]
0008D0B8 a80000b4 cbz      x8, #0x8d0cc
0008D0BC 00e10e91 add      x0, x8, #0x3b8
0008D0C0 08dd41f9 ldr      x8, [x8, #0x3b8]
0008D0C4 080d40f9 ldr      x8, [x8, #0x18]
0008D0C8 00013fd6 blr      x8
0008D0CC 60a23291 add      x0, x19, #0xca8
0008D0D0 e1031faa mov      x1, xzr
0008D0D4 1b000094 bl       #0x8d140
0008D0D8 683a4db9 ldr      w8, [x19, #0xd38]
0008D0DC 08050011 add      w8, w8, #1
0008D0E0 683a0db9 str      w8, [x19, #0xd38]
0008D0E4 20008052 mov      w0, #1
0008D0E8 f44f43a9 ldp      x20, x19, [sp, #0x30]
0008D0EC f65742a9 ldp      x22, x21, [sp, #0x20]
0008D0F0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0008D0F4 ff030191 add      sp, sp, #0x40
0008D0F8 c0035fd6 ret      
0008D0FC e0031f2a mov      w0, wzr
0008D100 f44f43a9 ldp      x20, x19, [sp, #0x30]
0008D104 f65742a9 ldp      x22, x21, [sp, #0x20]
0008D108 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0008D10C ff030191 add      sp, sp, #0x40
0008D110 c0035fd6 ret      
0008D114 1f1500b9 str      wzr, [x8, #0x14]
0008D118 a8a641b9 ldr      w8, [x21, #0x1a4]
0008D11C 09050051 sub      w9, w8, #1
0008D120 3f050071 cmp      w9, #1
0008D124 e8eaff54 b.hi     #0x8ce80
0008D128 695246f9 ldr      x9, [x19, #0xca0]
0008D12C 281500b9 str      w8, [x9, #0x14]
0008D130 685246f9 ldr      x8, [x19, #0xca0]
0008D134 098541f9 ldr      x9, [x8, #0x308]
0008D138 a9eaffb5 cbnz     x9, #0x8ce8c
0008D13C 57ffff17 b        #0x8ce98
~~~
### 0x8d140 (20 slots)
~~~asm
0008D140 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0008D144 f44f01a9 stp      x20, x19, [sp, #0x10]
0008D148 fd030091 mov      x29, sp
0008D14C 130040f9 ldr      x19, [x0]
0008D150 010000f9 str      x1, [x0]
0008D154 930100b4 cbz      x19, #0x8d184
0008D158 f40300aa mov      x20, x0
0008D15C e00313aa mov      x0, x19
0008D160 200f0094 bl       #0x90de0
0008D164 808a40a9 ldp      x0, x2, [x20, #8]
0008D168 e10313aa mov      x1, x19
0008D16C 830e40f9 ldr      x3, [x20, #0x18]
0008D170 f44f41a9 ldp      x20, x19, [sp, #0x10]
0008D174 080040f9 ldr      x8, [x0]
0008D178 040d40f9 ldr      x4, [x8, #0x18]
0008D17C fd7bc2a8 ldp      x29, x30, [sp], #0x20
0008D180 80001fd6 br       x4
0008D184 f44f41a9 ldp      x20, x19, [sp, #0x10]
0008D188 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0008D18C c0035fd6 ret      
~~~
### 0xa7660 (891 slots)
~~~asm
000A7660 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
000A7664 fc6f01a9 stp      x28, x27, [sp, #0x10]
000A7668 fd030091 mov      x29, sp
000A766C fa6702a9 stp      x26, x25, [sp, #0x20]
000A7670 f85f03a9 stp      x24, x23, [sp, #0x30]
000A7674 f65704a9 stp      x22, x21, [sp, #0x40]
000A7678 f44f05a9 stp      x20, x19, [sp, #0x50]
000A767C ffc30cd1 sub      sp, sp, #0x330
000A7680 170c40f9 ldr      x23, [x0, #0x18]
000A7684 376e00b4 cbz      x23, #0xa8448
000A7688 e80a40f9 ldr      x8, [x23, #0x10]
000A768C f40300aa mov      x20, x0
000A7690 e80700f9 str      x8, [sp, #8]
000A7694 f3aa40f9 ldr      x19, [x23, #0x150]
000A7698 b30000b4 cbz      x19, #0xa76ac
000A769C e00313aa mov      x0, x19
000A76A0 088c44f8 ldr      x8, [x0, #0x48]!
000A76A4 080940f9 ldr      x8, [x8, #0x10]
000A76A8 00013fd6 blr      x8
000A76AC f30300f9 str      x19, [sp]
000A76B0 fa930591 add      x26, sp, #0x164
000A76B4 13458052 mov      w19, #0x228
000A76B8 b6e303d1 sub      x22, x29, #0xf8
000A76BC bfff3ea9 stp      xzr, xzr, [x29, #-0x18]
000A76C0 bfff3da9 stp      xzr, xzr, [x29, #-0x28]
000A76C4 bfff3ca9 stp      xzr, xzr, [x29, #-0x38]
000A76C8 bfff3ba9 stp      xzr, xzr, [x29, #-0x48]
000A76CC bfff3aa9 stp      xzr, xzr, [x29, #-0x58]
000A76D0 bfff39a9 stp      xzr, xzr, [x29, #-0x68]
000A76D4 bfff38a9 stp      xzr, xzr, [x29, #-0x78]
000A76D8 bfff37a9 stp      xzr, xzr, [x29, #-0x88]
000A76DC bfff36a9 stp      xzr, xzr, [x29, #-0x98]
000A76E0 bfff35a9 stp      xzr, xzr, [x29, #-0xa8]
000A76E4 bfff34a9 stp      xzr, xzr, [x29, #-0xb8]
000A76E8 bfff33a9 stp      xzr, xzr, [x29, #-0xc8]
000A76EC bfff32a9 stp      xzr, xzr, [x29, #-0xd8]
000A76F0 bfff31a9 stp      xzr, xzr, [x29, #-0xe8]
000A76F4 bfff30a9 stp      xzr, xzr, [x29, #-0xf8]
000A76F8 05000014 b        #0xa770c
000A76FC 1f2003d5 nop      
000A7700 73220091 add      x19, x19, #8
000A7704 7f4209f1 cmp      x19, #0x250
000A7708 400a0054 b.eq     #0xa7850
000A770C f902138b add      x25, x23, x19
000A7710 358353f8 ldur     x21, [x25, #-0xc8]
000A7714 b50000b4 cbz      x21, #0xa7728
000A7718 e00315aa mov      x0, x21
000A771C 088c44f8 ldr      x8, [x0, #0x48]!
000A7720 080940f9 ldr      x8, [x8, #0x10]
000A7724 00013fd6 blr      x8
000A7728 d802138b add      x24, x22, x19
000A772C 08a308d1 sub      x8, x24, #0x228
000A7730 000140f9 ldr      x0, [x8]
000A7734 150100f9 str      x21, [x8]
000A7738 800000b4 cbz      x0, #0xa7748
000A773C 088c44f8 ldr      x8, [x0, #0x48]!
000A7740 080d40f9 ldr      x8, [x8, #0x18]
000A7744 00013fd6 blr      x8
000A7748 350356f8 ldur     x21, [x25, #-0xa0]
000A774C b50000b4 cbz      x21, #0xa7760
000A7750 e00315aa mov      x0, x21
000A7754 088c44f8 ldr      x8, [x0, #0x48]!
000A7758 080940f9 ldr      x8, [x8, #0x10]
000A775C 00013fd6 blr      x8
000A7760 080308d1 sub      x8, x24, #0x200
000A7764 000140f9 ldr      x0, [x8]
000A7768 150100f9 str      x21, [x8]
000A776C 800000b4 cbz      x0, #0xa777c
000A7770 088c44f8 ldr      x8, [x0, #0x48]!
000A7774 080d40f9 ldr      x8, [x8, #0x18]
000A7778 00013fd6 blr      x8
000A777C 358358f8 ldur     x21, [x25, #-0x78]
000A7780 b50000b4 cbz      x21, #0xa7794
000A7784 e00315aa mov      x0, x21
000A7788 088c44f8 ldr      x8, [x0, #0x48]!
000A778C 080940f9 ldr      x8, [x8, #0x10]
000A7790 00013fd6 blr      x8
000A7794 086307d1 sub      x8, x24, #0x1d8
000A7798 000140f9 ldr      x0, [x8]
000A779C 150100f9 str      x21, [x8]
000A77A0 800000b4 cbz      x0, #0xa77b0
000A77A4 088c44f8 ldr      x8, [x0, #0x48]!
000A77A8 080d40f9 ldr      x8, [x8, #0x18]
000A77AC 00013fd6 blr      x8
000A77B0 35035bf8 ldur     x21, [x25, #-0x50]
000A77B4 b50000b4 cbz      x21, #0xa77c8
000A77B8 e00315aa mov      x0, x21
000A77BC 088c44f8 ldr      x8, [x0, #0x48]!
000A77C0 080940f9 ldr      x8, [x8, #0x10]
000A77C4 00013fd6 blr      x8
000A77C8 08c306d1 sub      x8, x24, #0x1b0
000A77CC 000140f9 ldr      x0, [x8]
000A77D0 150100f9 str      x21, [x8]
000A77D4 800000b4 cbz      x0, #0xa77e4
000A77D8 088c44f8 ldr      x8, [x0, #0x48]!
000A77DC 080d40f9 ldr      x8, [x8, #0x18]
000A77E0 00013fd6 blr      x8
000A77E4 35835df8 ldur     x21, [x25, #-0x28]
000A77E8 b50000b4 cbz      x21, #0xa77fc
000A77EC e00315aa mov      x0, x21
000A77F0 088c44f8 ldr      x8, [x0, #0x48]!
000A77F4 080940f9 ldr      x8, [x8, #0x10]
000A77F8 00013fd6 blr      x8
000A77FC 082306d1 sub      x8, x24, #0x188
000A7800 000140f9 ldr      x0, [x8]
000A7804 150100f9 str      x21, [x8]
000A7808 800000b4 cbz      x0, #0xa7818
000A780C 088c44f8 ldr      x8, [x0, #0x48]!
000A7810 080d40f9 ldr      x8, [x8, #0x18]
000A7814 00013fd6 blr      x8
000A7818 f56a73f8 ldr      x21, [x23, x19]
000A781C b50000b4 cbz      x21, #0xa7830
000A7820 e00315aa mov      x0, x21
000A7824 088c44f8 ldr      x8, [x0, #0x48]!
000A7828 080940f9 ldr      x8, [x8, #0x10]
000A782C 00013fd6 blr      x8
000A7830 088305d1 sub      x8, x24, #0x160
000A7834 000140f9 ldr      x0, [x8]
000A7838 150100f9 str      x21, [x8]
000A783C 20f6ffb4 cbz      x0, #0xa7700
000A7840 088c44f8 ldr      x8, [x0, #0x48]!
000A7844 080d40f9 ldr      x8, [x8, #0x18]
000A7848 00013fd6 blr      x8
000A784C adffff17 b        #0xa7700
000A7850 880e40f9 ldr      x8, [x20, #0x18]
000A7854 93620691 add      x19, x20, #0x198
000A7858 5fa30cf8 stur     xzr, [x26, #0xca]
000A785C ff1701f9 str      xzr, [sp, #0x228]
000A7860 ff1301f9 str      xzr, [sp, #0x220]
000A7864 ff0f01f9 str      xzr, [sp, #0x218]
000A7868 7f4201f8 stur     xzr, [x19, #0x14]
000A786C 7fc201f8 stur     xzr, [x19, #0x1c]
000A7870 7f4202f8 stur     xzr, [x19, #0x24]
000A7874 7fa202f8 stur     xzr, [x19, #0x2a]
000A7878 885e00b4 cbz      x8, #0xa8448
000A787C 160940f9 ldr      x22, [x8, #0x10]
000A7880 e00316aa mov      x0, x22
000A7884 812640b9 ldr      w1, [x20, #0x24]
000A7888 efb7ff97 bl       #0x95844
000A788C 88424239 ldrb     w8, [x20, #0x90]
000A7890 89e20191 add      x9, x20, #0x78
000A7894 8a520291 add      x10, x20, #0x94
000A7898 f80300aa mov      x24, x0
000A789C e00316aa mov      x0, x22
000A78A0 1f010071 cmp      w8, #0
000A78A4 28018a9a csel     x8, x9, x10, eq
000A78A8 010140b9 ldr      w1, [x8]
000A78AC e6b7ff97 bl       #0x95844
000A78B0 090c40b9 ldr      w9, [x0, #0xc]
000A78B4 1f0018eb cmp      x0, x24
000A78B8 2019417a ccmp     w9, #1, #0, ne
000A78BC 080f40b9 ldr      w8, [x24, #0xc]
000A78C0 f50740f9 ldr      x21, [sp, #8]
000A78C4 0409417a ccmp     w8, #1, #4, eq
000A78C8 f9079f1a cset     w25, ne
000A78CC c0000054 b.eq     #0xa78e4
000A78D0 884247f8 ldur     x8, [x20, #0x74]
000A78D4 89c247f8 ldur     x9, [x20, #0x7c]
000A78D8 682600a9 stp      x8, x9, [x19]
000A78DC 888640b9 ldr      w8, [x20, #0x84]
000A78E0 681200b9 str      w8, [x19, #0x10]
000A78E4 9a4a40b9 ldr      w26, [x20, #0x48]
000A78E8 88820091 add      x8, x20, #0x20
000A78EC e80b00f9 str      x8, [sp, #0x10]
000A78F0 895240b9 ldr      w9, [x20, #0x50]
000A78F4 5f03096b cmp      w26, w9
000A78F8 28010054 b.hi     #0xa791c
000A78FC 8a4640b9 ldr      w10, [x20, #0x44]
000A7900 884e40b9 ldr      w8, [x20, #0x4c]
000A7904 5f01086b cmp      w10, w8
000A7908 49030054 b.ls     #0xa7970
000A790C 1f2003d5 nop      
000A7910 5a070011 add      w26, w26, #1
000A7914 5f03096b cmp      w26, w9
000A7918 c9ffff54 b.ls     #0xa7910
000A791C c83900d0 adrp     x8, #0x7e1000
000A7920 08611491 add      x8, x8, #0x518
000A7924 ffe700f9 str      xzr, [sp, #0x1c8]
000A7928 ffff1aa9 stp      xzr, xzr, [sp, #0x1a8]
000A792C 080140f9 ldr      x8, [x8]
000A7930 ffd301b9 str      wzr, [sp, #0x1d0]
000A7934 085541f9 ldr      x8, [x8, #0x2a8]
000A7938 ff5a02b9 str      wzr, [x23, #0x258]
000A793C 9a4a40b9 ldr      w26, [x20, #0x48]
000A7940 895240b9 ldr      w9, [x20, #0x50]
000A7944 5f03096b cmp      w26, w9
000A7948 ffa31ba9 stp      xzr, x8, [sp, #0x1b8]
000A794C 88280054 b.hi     #0xa7e5c
000A7950 8a4640b9 ldr      w10, [x20, #0x44]
000A7954 884e40b9 ldr      w8, [x20, #0x4c]
000A7958 5f01086b cmp      w10, w8
000A795C 890c0054 b.ls     #0xa7aec
000A7960 5a070011 add      w26, w26, #1
000A7964 5f03096b cmp      w26, w9
000A7968 c9ffff54 b.ls     #0xa7960
000A796C 3c010014 b        #0xa7e5c
000A7970 ea0340f9 ldr      x10, [sp]
000A7974 b3e303d1 sub      x19, x29, #0xf8
000A7978 58210191 add      x24, x10, #0x48
000A797C 06000014 b        #0xa7994
000A7980 895240b9 ldr      w9, [x20, #0x50]
000A7984 f50740f9 ldr      x21, [sp, #8]
000A7988 5a070011 add      w26, w26, #1
000A798C 5f03096b cmp      w26, w9
000A7990 68fcff54 b.hi     #0xa791c
000A7994 9b4640b9 ldr      w27, [x20, #0x44]
000A7998 7f03086b cmp      w27, w8
000A799C 68ffff54 b.hi     #0xa7988
000A79A0 f6031a2a mov      w22, w26
000A79A4 07000014 b        #0xa79c0
000A79A8 1f2003d5 nop      
000A79AC 1f2003d5 nop      
000A79B0 884e40b9 ldr      w8, [x20, #0x4c]
000A79B4 7b070011 add      w27, w27, #1
000A79B8 7f03086b cmp      w27, w8
000A79BC 28feff54 b.hi     #0xa7980
000A79C0 f5031b2a mov      w21, w27
000A79C4 8a02168b add      x10, x20, x22
000A79C8 a94a3b8b add      x9, x21, w27, uxtw #2
000A79CC 4901098b add      x9, x10, x9
000A79D0 29514139 ldrb     w9, [x9, #0x54]
000A79D4 09ffff34 cbz      w9, #0xa79b4
000A79D8 e00b40f9 ldr      x0, [sp, #0x10]
000A79DC e8630091 add      x8, sp, #0x18
000A79E0 e1230491 add      x1, sp, #0x108
000A79E4 fb0b01b9 str      w27, [sp, #0x108]
000A79E8 fa0f01b9 str      w26, [sp, #0x10c]
000A79EC 4fa6ff97 bl       #0x91328
000A79F0 39030034 cbz      w25, #0xa7a54
000A79F4 e8a741a9 ldp      x8, x9, [sp, #0x18]
000A79F8 e1030891 add      x1, sp, #0x200
000A79FC e00317aa mov      x0, x23
000A7A00 e80301f9 str      x8, [sp, #0x200]
000A7A04 e82b40b9 ldr      w8, [sp, #0x28]
000A7A08 e90701f9 str      x9, [sp, #0x208]
000A7A0C e81302b9 str      w8, [sp, #0x210]
000A7A10 640b0094 bl       #0xaa7a0
000A7A14 a80a158b add      x8, x21, x21, lsl #2
000A7A18 e9630891 add      x9, sp, #0x218
000A7A1C 2901168b add      x9, x9, x22
000A7A20 3c01088b add      x28, x9, x8
000A7A24 08000012 and      w8, w0, #1
000A7A28 88030039 strb     w8, [x28]
000A7A2C 40010037 tbnz     w0, #0, #0xa7a54
000A7A30 e8a741a9 ldp      x8, x9, [sp, #0x18]
000A7A34 e1a30791 add      x1, sp, #0x1e8
000A7A38 e00317aa mov      x0, x23
000A7A3C e8a71ea9 stp      x8, x9, [sp, #0x1e8]
000A7A40 e82b40b9 ldr      w8, [sp, #0x28]
000A7A44 e8fb01b9 str      w8, [sp, #0x1f8]
000A7A48 6f050094 bl       #0xa9004
000A7A4C 08000012 and      w8, w0, #1
000A7A50 88030039 strb     w8, [x28]
000A7A54 08058052 mov      w8, #0x28
000A7A58 a84ea89b umaddl   x8, w21, w8, x19
000A7A5C 007976f8 ldr      x0, [x8, x22, lsl #3]
000A7A60 e0f300f9 str      x0, [sp, #0x1e0]
000A7A64 800000b4 cbz      x0, #0xa7a74
000A7A68 088c44f8 ldr      x8, [x0, #0x48]!
000A7A6C 080940f9 ldr      x8, [x8, #0x10]
000A7A70 00013fd6 blr      x8
000A7A74 f50740f9 ldr      x21, [sp, #8]
000A7A78 e1830791 add      x1, sp, #0x1e0
000A7A7C e2630091 add      x2, sp, #0x18
000A7A80 e00315aa mov      x0, x21
000A7A84 76b3ff97 bl       #0x9485c
000A7A88 e0f340f9 ldr      x0, [sp, #0x1e0]
000A7A8C a00000b4 cbz      x0, #0xa7aa0
000A7A90 088c44f8 ldr      x8, [x0, #0x48]!
000A7A94 080d40f9 ldr      x8, [x8, #0x18]
000A7A98 00013fd6 blr      x8
000A7A9C fff300f9 str      xzr, [sp, #0x1e0]
000A7AA0 e80340f9 ldr      x8, [sp]
000A7AA4 e8ef00f9 str      x8, [sp, #0x1d8]
000A7AA8 a80000b4 cbz      x8, #0xa7abc
000A7AAC 080340f9 ldr      x8, [x24]
000A7AB0 e00318aa mov      x0, x24
000A7AB4 080940f9 ldr      x8, [x8, #0x10]
000A7AB8 00013fd6 blr      x8
000A7ABC e1630791 add      x1, sp, #0x1d8
000A7AC0 e2630091 add      x2, sp, #0x18
000A7AC4 e00315aa mov      x0, x21
000A7AC8 23008052 mov      w3, #1
000A7ACC c2b5ff97 bl       #0x951d4
000A7AD0 e0ef40f9 ldr      x0, [sp, #0x1d8]
000A7AD4 e0f6ffb4 cbz      x0, #0xa79b0
000A7AD8 088c44f8 ldr      x8, [x0, #0x48]!
000A7ADC 080d40f9 ldr      x8, [x8, #0x18]
000A7AE0 00013fd6 blr      x8
000A7AE4 ffef00f9 str      xzr, [sp, #0x1d8]
000A7AE8 b2ffff17 b        #0xa79b0
000A7AEC ea630091 add      x10, sp, #0x18
000A7AF0 96d20191 add      x22, x20, #0x74
000A7AF4 f3930591 add      x19, sp, #0x164
000A7AF8 5c510091 add      x28, x10, #0x14
000A7AFC 05000014 b        #0xa7b10
000A7B00 895240b9 ldr      w9, [x20, #0x50]
000A7B04 5a070011 add      w26, w26, #1
000A7B08 5f03096b cmp      w26, w9
000A7B0C c8150054 b.hi     #0xa7dc4
000A7B10 994640b9 ldr      w25, [x20, #0x44]
000A7B14 3f03086b cmp      w25, w8
000A7B18 68ffff54 b.hi     #0xa7b04
000A7B1C f8031a2a mov      w24, w26
000A7B20 07000014 b        #0xa7b3c
000A7B24 884e40b9 ldr      w8, [x20, #0x4c]
000A7B28 1f2003d5 nop      
000A7B2C 1f2003d5 nop      
000A7B30 39070011 add      w25, w25, #1
000A7B34 3f03086b cmp      w25, w8
000A7B38 48feff54 b.hi     #0xa7b00
000A7B3C fb03192a mov      w27, w25
000A7B40 8a02188b add      x10, x20, x24
000A7B44 694b398b add      x9, x27, w25, uxtw #2
000A7B48 4901098b add      x9, x10, x9
000A7B4C 29514139 ldrb     w9, [x9, #0x54]
000A7B50 09ffff34 cbz      w9, #0xa7b30
000A7B54 894640b9 ldr      w9, [x20, #0x44]
000A7B58 f9a301b9 str      w25, [sp, #0x1a0]
000A7B5C faa701b9 str      w26, [sp, #0x1a4]
000A7B60 3f01196b cmp      w9, w25
000A7B64 68feff54 b.hi     #0xa7b30
000A7B68 8a4a40b9 ldr      w10, [x20, #0x48]
000A7B6C 5f011a6b cmp      w10, w26
000A7B70 08feff54 b.hi     #0xa7b30
000A7B74 8b5240b9 ldr      w11, [x20, #0x50]
000A7B78 5f030b6b cmp      w26, w11
000A7B7C a8fdff54 b.hi     #0xa7b30
000A7B80 882e5129 ldp      w8, w11, [x20, #0x88]
000A7B84 e1630691 add      x1, sp, #0x198
000A7B88 e00316aa mov      x0, x22
000A7B8C 0c01190b add      w12, w8, w25
000A7B90 6b011a0b add      w11, w11, w26
000A7B94 3f010c6b cmp      w9, w12
000A7B98 29318c1a csel     w9, w9, w12, lo
000A7B9C 0801094b sub      w8, w8, w9
000A7BA0 69010a6b subs     w9, w11, w10
000A7BA4 2803080b add      w8, w25, w8
000A7BA8 e933891a csel     w9, wzr, w9, lo
000A7BAC 088109aa orr      x8, x8, x9, lsl #32
000A7BB0 e8cf00f9 str      x8, [sp, #0x198]
000A7BB4 e8030691 add      x8, sp, #0x180
000A7BB8 dca5ff97 bl       #0x91328
000A7BBC 08058052 mov      w8, #0x28
000A7BC0 a9e303d1 sub      x9, x29, #0xf8
000A7BC4 6827a89b umaddl   x8, w27, w8, x9
000A7BC8 007978f8 ldr      x0, [x8, x24, lsl #3]
000A7BCC e0bf00f9 str      x0, [sp, #0x178]
000A7BD0 800000b4 cbz      x0, #0xa7be0
000A7BD4 088c44f8 ldr      x8, [x0, #0x48]!
000A7BD8 080940f9 ldr      x8, [x8, #0x10]
000A7BDC 00013fd6 blr      x8
000A7BE0 e1e30591 add      x1, sp, #0x178
000A7BE4 e2030691 add      x2, sp, #0x180
000A7BE8 e00315aa mov      x0, x21
000A7BEC 23008052 mov      w3, #1
000A7BF0 79b5ff97 bl       #0x951d4
000A7BF4 e0bf40f9 ldr      x0, [sp, #0x178]
000A7BF8 a00000b4 cbz      x0, #0xa7c0c
000A7BFC 088c44f8 ldr      x8, [x0, #0x48]!
000A7C00 080d40f9 ldr      x8, [x8, #0x18]
000A7C04 00013fd6 blr      x8
000A7C08 ffbf00f9 str      xzr, [sp, #0x178]
000A7C0C e00b40f9 ldr      x0, [sp, #0x10]
000A7C10 e8930591 add      x8, sp, #0x164
000A7C14 e1830691 add      x1, sp, #0x1a0
000A7C18 c4a5ff97 bl       #0x91328
000A7C1C eb5a42b9 ldr      w11, [x23, #0x258]
000A7C20 0f058052 mov      w15, #0x28
000A7C24 e1930591 add      x1, sp, #0x164
000A7C28 e82758a9 ldp      x8, x9, [sp, #0x180]
000A7C2C e2330591 add      x2, sp, #0x14c
000A7C30 ee7741b9 ldr      w14, [sp, #0x174]
000A7C34 e3230591 add      x3, sp, #0x148
000A7C38 e00315aa mov      x0, x21
000A7C3C ea9341b9 ldr      w10, [sp, #0x190]
000A7C40 6c050011 add      w12, w11, #1
000A7C44 6b5daf9b umaddl   x11, w11, w15, x23
000A7C48 e82715a9 stp      x8, x9, [sp, #0x150]
000A7C4C ea6301b9 str      w10, [sp, #0x160]
000A7C50 ec5a02b9 str      w12, [x23, #0x258]
000A7C54 6d3240a9 ldp      x13, x12, [x19]
000A7C58 6e6d02b9 str      w14, [x11, #0x26c]
000A7C5C 6e710991 add      x14, x11, #0x25c
000A7C60 683901f9 str      x8, [x11, #0x270]
000A7C64 e8030591 add      x8, sp, #0x140
000A7C68 6a8102b9 str      w10, [x11, #0x280]
000A7C6C 693d01f9 str      x9, [x11, #0x278]
000A7C70 cd3100a9 stp      x13, x12, [x14]
000A7C74 e4adff97 bl       #0x93404
000A7C78 e0a340f9 ldr      x0, [sp, #0x140]
000A7C7C a00800b4 cbz      x0, #0xa7d90
000A7C80 e82758a9 ldp      x8, x9, [sp, #0x180]
000A7C84 9f3300b9 str      wzr, [x28, #0x30]
000A7C88 ea9341b9 ldr      w10, [sp, #0x190]
000A7C8C 9f7f02a9 stp      xzr, xzr, [x28, #0x20]
000A7C90 e14f41b9 ldr      w1, [sp, #0x14c]
000A7C94 e24b41b9 ldr      w2, [sp, #0x148]
000A7C98 ea2b00b9 str      w10, [sp, #0x28]
000A7C9C 9f7f01a9 stp      xzr, xzr, [x28, #0x10]
000A7CA0 9f7f00a9 stp      xzr, xzr, [x28]
000A7CA4 e8a701a9 stp      x8, x9, [sp, #0x18]
000A7CA8 836c0594 bl       #0x202eb4
000A7CAC 09a040a9 ldp      x9, x8, [x0, #8]
000A7CB0 0a0040f9 ldr      x10, [x0]
000A7CB4 8a2700a9 stp      x10, x9, [x28]
000A7CB8 880b00f9 str      x8, [x28, #0x10]
000A7CBC 0a2042a9 ldp      x10, x8, [x0, #0x20]
000A7CC0 093040b9 ldr      w9, [x0, #0x30]
000A7CC4 0b0c40f9 ldr      x11, [x0, #0x18]
000A7CC8 893300b9 str      w9, [x28, #0x30]
000A7CCC 8b0f00f9 str      x11, [x28, #0x18]
000A7CD0 8a2302a9 stp      x10, x8, [x28, #0x20]
000A7CD4 e8275ba9 ldp      x8, x9, [sp, #0x1b0]
000A7CD8 1f0109eb cmp      x8, x9
000A7CDC 80030054 b.eq     #0xa7d4c
000A7CE0 49d03bd5 mrs      x9, tpidr_el0
000A7CE4 29c97392 and      x9, x9, #0xffffffffffffe000
000A7CE8 2a4d40f9 ldr      x10, [x9, #0x98]
000A7CEC 5f4100f1 cmp      x10, #0x10
000A7CF0 a03a0054 b.eq     #0xa8444
000A7CF4 ebe340f9 ldr      x11, [sp, #0x1c0]
000A7CF8 2a0d0a8b add      x10, x9, x10, lsl #3
000A7CFC 4b0d00f9 str      x11, [x10, #0x18]
000A7D00 2a4d40f9 ldr      x10, [x9, #0x98]
000A7D04 4a050091 add      x10, x10, #1
000A7D08 2a4d00f9 str      x10, [x9, #0x98]
000A7D0C ea0f40f9 ldr      x10, [sp, #0x18]
000A7D10 0a0100f9 str      x10, [x8]
000A7D14 ea2f42a9 ldp      x10, x11, [sp, #0x20]
000A7D18 ec3743a9 ldp      x12, x13, [sp, #0x30]
000A7D1C 0cb501a9 stp      x12, x13, [x8, #0x18]
000A7D20 0aad00a9 stp      x10, x11, [x8, #8]
000A7D24 ea2f44a9 ldp      x10, x11, [sp, #0x40]
000A7D28 ec3745a9 ldp      x12, x13, [sp, #0x50]
000A7D2C 0cb503a9 stp      x12, x13, [x8, #0x38]
000A7D30 0aad02a9 stp      x10, x11, [x8, #0x28]
000A7D34 08210191 add      x8, x8, #0x48
000A7D38 2a4d40f9 ldr      x10, [x9, #0x98]
000A7D3C e8db00f9 str      x8, [sp, #0x1b0]
000A7D40 4a0500d1 sub      x10, x10, #1
000A7D44 2a4d00f9 str      x10, [x9, #0x98]
000A7D48 04000014 b        #0xa7d58
000A7D4C e0a30691 add      x0, sp, #0x1a8
000A7D50 e1630091 add      x1, sp, #0x18
000A7D54 23030094 bl       #0xa89e0
000A7D58 e0a340f9 ldr      x0, [sp, #0x140]
000A7D5C e3230491 add      x3, sp, #0x108
000A7D60 ff3b01b9 str      wzr, [sp, #0x138]
000A7D64 e14f41b9 ldr      w1, [sp, #0x14c]
000A7D68 ffff12a9 stp      xzr, xzr, [sp, #0x128]
000A7D6C e24b41b9 ldr      w2, [sp, #0x148]
000A7D70 ffff11a9 stp      xzr, xzr, [sp, #0x118]
000A7D74 ffff10a9 stp      xzr, xzr, [sp, #0x108]
000A7D78 7c6c0594 bl       #0x202f68
000A7D7C e0a340f9 ldr      x0, [sp, #0x140]
000A7D80 800000b4 cbz      x0, #0xa7d90
000A7D84 088c44f8 ldr      x8, [x0, #0x48]!
000A7D88 080d40f9 ldr      x8, [x8, #0x18]
000A7D8C 00013fd6 blr      x8
000A7D90 680b1b8b add      x8, x27, x27, lsl #2
000A7D94 e9630891 add      x9, sp, #0x218
000A7D98 2801088b add      x8, x9, x8
000A7D9C 08697838 ldrb     w8, [x8, x24]
000A7DA0 28ecff34 cbz      w8, #0xa7b24
000A7DA4 e88f41b9 ldr      w8, [sp, #0x18c]
000A7DA8 0809088b add      x8, x8, x8, lsl #2
000A7DAC e99341b9 ldr      w9, [sp, #0x190]
000A7DB0 8902098b add      x9, x20, x9
000A7DB4 2801088b add      x8, x9, x8
000A7DB8 29008052 mov      w9, #1
000A7DBC 09b10639 strb     w9, [x8, #0x1ac]
000A7DC0 59ffff17 b        #0xa7b24
000A7DC4 f3db5aa9 ldp      x19, x22, [sp, #0x1a8]
000A7DC8 7f0216eb cmp      x19, x22
000A7DCC 80040054 b.eq     #0xa7e5c
000A7DD0 e8630091 add      x8, sp, #0x18
000A7DD4 18510091 add      x24, x8, #0x14
000A7DD8 05000014 b        #0xa7dec
000A7DDC 1f2003d5 nop      
000A7DE0 73220191 add      x19, x19, #0x48
000A7DE4 7f0216eb cmp      x19, x22
000A7DE8 a0030054 b.eq     #0xa7e5c
000A7DEC 680240f9 ldr      x8, [x19]
000A7DF0 e1630091 add      x1, sp, #0x18
000A7DF4 e2030691 add      x2, sp, #0x180
000A7DF8 e3930591 add      x3, sp, #0x164
000A7DFC e00315aa mov      x0, x21
000A7E00 e80f00f9 str      x8, [sp, #0x18]
000A7E04 68a640a9 ldp      x8, x9, [x19, #8]
000A7E08 6aae41a9 ldp      x10, x11, [x19, #0x18]
000A7E0C ea2f03a9 stp      x10, x11, [sp, #0x30]
000A7E10 e82702a9 stp      x8, x9, [sp, #0x20]
000A7E14 68a642a9 ldp      x8, x9, [x19, #0x28]
000A7E18 6aae43a9 ldp      x10, x11, [x19, #0x38]
000A7E1C e82704a9 stp      x8, x9, [sp, #0x40]
000A7E20 e8230491 add      x8, sp, #0x108
000A7E24 ea2f05a9 stp      x10, x11, [sp, #0x50]
000A7E28 77adff97 bl       #0x93404
000A7E2C e08740f9 ldr      x0, [sp, #0x108]
000A7E30 80fdffb4 cbz      x0, #0xa7de0
000A7E34 e18341b9 ldr      w1, [sp, #0x180]
000A7E38 e30318aa mov      x3, x24
000A7E3C e26741b9 ldr      w2, [sp, #0x164]
000A7E40 4a6c0594 bl       #0x202f68
000A7E44 e08740f9 ldr      x0, [sp, #0x108]
000A7E48 c0fcffb4 cbz      x0, #0xa7de0
000A7E4C 088c44f8 ldr      x8, [x0, #0x48]!
000A7E50 080d40f9 ldr      x8, [x8, #0x18]
000A7E54 00013fd6 blr      x8
000A7E58 e2ffff17 b        #0xa7de0
000A7E5C e81e40f9 ldr      x8, [x23, #0x38]
000A7E60 080140b9 ldr      w8, [x8]
000A7E64 1f050071 cmp      w8, #1
000A7E68 a1150054 b.ne     #0xa811c
000A7E6C 994a40b9 ldr      w25, [x20, #0x48]
000A7E70 ffff0fa9 stp      xzr, xzr, [sp, #0xf8]
000A7E74 885240b9 ldr      w8, [x20, #0x50]
000A7E78 3f03086b cmp      w25, w8
000A7E7C ffff0ea9 stp      xzr, xzr, [sp, #0xe8]
000A7E80 ffff0da9 stp      xzr, xzr, [sp, #0xd8]
000A7E84 ffff0ca9 stp      xzr, xzr, [sp, #0xc8]
000A7E88 ffff0ba9 stp      xzr, xzr, [sp, #0xb8]
000A7E8C ffff0aa9 stp      xzr, xzr, [sp, #0xa8]
000A7E90 ffff09a9 stp      xzr, xzr, [sp, #0x98]
000A7E94 ffff08a9 stp      xzr, xzr, [sp, #0x88]
000A7E98 ffff07a9 stp      xzr, xzr, [sp, #0x78]
000A7E9C ffff06a9 stp      xzr, xzr, [sp, #0x68]
000A7EA0 ffff05a9 stp      xzr, xzr, [sp, #0x58]
000A7EA4 ffff04a9 stp      xzr, xzr, [sp, #0x48]
000A7EA8 ffff03a9 stp      xzr, xzr, [sp, #0x38]
000A7EAC ffff02a9 stp      xzr, xzr, [sp, #0x28]
000A7EB0 ffff01a9 stp      xzr, xzr, [sp, #0x18]
000A7EB4 48010054 b.hi     #0xa7edc
000A7EB8 8a4640b9 ldr      w10, [x20, #0x44]
000A7EBC 894e40b9 ldr      w9, [x20, #0x4c]
000A7EC0 5f01096b cmp      w10, w9
000A7EC4 09020054 b.ls     #0xa7f04
000A7EC8 e903192a mov      w9, w25
000A7ECC 1f2003d5 nop      
000A7ED0 29050011 add      w9, w9, #1
000A7ED4 3f01086b cmp      w9, w8
000A7ED8 c9ffff54 b.ls     #0xa7ed0
000A7EDC 3f03086b cmp      w25, w8
000A7EE0 e8110054 b.hi     #0xa811c
000A7EE4 8a4640b9 ldr      w10, [x20, #0x44]
000A7EE8 894e40b9 ldr      w9, [x20, #0x4c]
000A7EEC 5f01096b cmp      w10, w9
000A7EF0 69080054 b.ls     #0xa7ffc
000A7EF4 39070011 add      w25, w25, #1
000A7EF8 3f03086b cmp      w25, w8
000A7EFC c9ffff54 b.ls     #0xa7ef4
000A7F00 87000014 b        #0xa811c
000A7F04 ea230491 add      x10, sp, #0x108
000A7F08 13058052 mov      w19, #0x28
000A7F0C fa630091 add      x26, sp, #0x18
000A7F10 57310091 add      x23, x10, #0xc
000A7F14 07000014 b        #0xa7f30
000A7F18 1f2003d5 nop      
000A7F1C 1f2003d5 nop      
000A7F20 885240b9 ldr      w8, [x20, #0x50]
000A7F24 39070011 add      w25, w25, #1
000A7F28 3f03086b cmp      w25, w8
000A7F2C 280f0054 b.hi     #0xa8110
000A7F30 964640b9 ldr      w22, [x20, #0x44]
000A7F34 df02096b cmp      w22, w9
000A7F38 68ffff54 b.hi     #0xa7f24
000A7F3C fb03192a mov      w27, w25
000A7F40 0b000014 b        #0xa7f6c
000A7F44 e00318aa mov      x0, x24
000A7F48 e10317aa mov      x1, x23
000A7F4C c0a9ff97 bl       #0x9264c
000A7F50 894e40b9 ldr      w9, [x20, #0x4c]
000A7F54 886bb39b umaddl   x8, w28, w19, x26
000A7F58 00793bf8 str      x0, [x8, x27, lsl #3]
000A7F5C 1f2003d5 nop      
000A7F60 d6060011 add      w22, w22, #1
000A7F64 df02096b cmp      w22, w9
000A7F68 c8fdff54 b.hi     #0xa7f20
000A7F6C fc03162a mov      w28, w22
000A7F70 8a021b8b add      x10, x20, x27
000A7F74 884b368b add      x8, x28, w22, uxtw #2
000A7F78 4801088b add      x8, x10, x8
000A7F7C 08514139 ldrb     w8, [x8, #0x54]
000A7F80 08ffff34 cbz      w8, #0xa7f60
000A7F84 884640b9 ldr      w8, [x20, #0x44]
000A7F88 f66701b9 str      w22, [sp, #0x164]
000A7F8C f96b01b9 str      w25, [sp, #0x168]
000A7F90 1f01166b cmp      w8, w22
000A7F94 68feff54 b.hi     #0xa7f60
000A7F98 884a40b9 ldr      w8, [x20, #0x48]
000A7F9C 1f01196b cmp      w8, w25
000A7FA0 08feff54 b.hi     #0xa7f60
000A7FA4 885240b9 ldr      w8, [x20, #0x50]
000A7FA8 3f03086b cmp      w25, w8
000A7FAC a8fdff54 b.hi     #0xa7f60
000A7FB0 e00b40f9 ldr      x0, [sp, #0x10]
000A7FB4 e8230491 add      x8, sp, #0x108
000A7FB8 e1930591 add      x1, sp, #0x164
000A7FBC dba4ff97 bl       #0x91328
000A7FC0 e10f41b9 ldr      w1, [sp, #0x10c]
000A7FC4 e00315aa mov      x0, x21
000A7FC8 8eb8ff97 bl       #0x96200
000A7FCC f80300aa mov      x24, x0
000A7FD0 e1230491 add      x1, sp, #0x108
000A7FD4 e00315aa mov      x0, x21
000A7FD8 e0b4ff97 bl       #0x95358
000A7FDC 08a440a9 ldp      x8, x9, [x0, #8]
000A7FE0 e82718a9 stp      x8, x9, [sp, #0x180]
000A7FE4 e8234439 ldrb     w8, [sp, #0x108]
000A7FE8 e8faff35 cbnz     w8, #0xa7f44
000A7FEC e1030691 add      x1, sp, #0x180
000A7FF0 e00318aa mov      x0, x24
000A7FF4 a3a9ff97 bl       #0x92680
000A7FF8 d6ffff17 b        #0xa7f50
000A7FFC 97d20191 add      x23, x20, #0x74
000A8000 13058052 mov      w19, #0x28
000A8004 f8630091 add      x24, sp, #0x18
000A8008 06000014 b        #0xa8020
000A800C 1f2003d5 nop      
000A8010 885240b9 ldr      w8, [x20, #0x50]
000A8014 39070011 add      w25, w25, #1
000A8018 3f03086b cmp      w25, w8
000A801C 08080054 b.hi     #0xa811c
000A8020 964640b9 ldr      w22, [x20, #0x44]
000A8024 df02096b cmp      w22, w9
000A8028 68ffff54 b.hi     #0xa8014
000A802C fa03192a mov      w26, w25
000A8030 07000014 b        #0xa804c
000A8034 1f1900b9 str      wzr, [x8, #0x18]
000A8038 894e40b9 ldr      w9, [x20, #0x4c]
000A803C 1f2003d5 nop      
000A8040 d6060011 add      w22, w22, #1
000A8044 df02096b cmp      w22, w9
000A8048 48feff54 b.hi     #0xa8010
000A804C f503162a mov      w21, w22
000A8050 8a021a8b add      x10, x20, x26
000A8054 a84a368b add      x8, x21, w22, uxtw #2
000A8058 4801088b add      x8, x10, x8
000A805C 08514139 ldrb     w8, [x8, #0x54]
000A8060 08ffff34 cbz      w8, #0xa8040
000A8064 884640b9 ldr      w8, [x20, #0x44]
000A8068 f66701b9 str      w22, [sp, #0x164]
000A806C f96b01b9 str      w25, [sp, #0x168]
000A8070 1f01166b cmp      w8, w22
000A8074 68feff54 b.hi     #0xa8040
000A8078 8a4a40b9 ldr      w10, [x20, #0x48]
000A807C 5f01196b cmp      w10, w25
000A8080 08feff54 b.hi     #0xa8040
000A8084 8b5240b9 ldr      w11, [x20, #0x50]
000A8088 3f030b6b cmp      w25, w11
000A808C a8fdff54 b.hi     #0xa8040
000A8090 892e5129 ldp      w9, w11, [x20, #0x88]
000A8094 e1930591 add      x1, sp, #0x164
000A8098 e00b40f9 ldr      x0, [sp, #0x10]
000A809C 2c01160b add      w12, w9, w22
000A80A0 6b01190b add      w11, w11, w25
000A80A4 1f010c6b cmp      w8, w12
000A80A8 08318c1a csel     w8, w8, w12, lo
000A80AC 2801084b sub      w8, w9, w8
000A80B0 69010a6b subs     w9, w11, w10
000A80B4 c802080b add      w8, w22, w8
000A80B8 e933891a csel     w9, wzr, w9, lo
000A80BC 088109aa orr      x8, x8, x9, lsl #32
000A80C0 e8d300f9 str      x8, [sp, #0x1a0]
000A80C4 e8230491 add      x8, sp, #0x108
000A80C8 98a4ff97 bl       #0x91328
000A80CC e8030691 add      x8, sp, #0x180
000A80D0 e1830691 add      x1, sp, #0x1a0
000A80D4 e00317aa mov      x0, x23
000A80D8 94a4ff97 bl       #0x91328
000A80DC e00740f9 ldr      x0, [sp, #8]
000A80E0 e1030691 add      x1, sp, #0x180
000A80E4 9db4ff97 bl       #0x95358
000A80E8 a862b39b umaddl   x8, w21, w19, x24
000A80EC 08797af8 ldr      x8, [x8, x26, lsl #3]
000A80F0 48faffb4 cbz      x8, #0xa8038
000A80F4 e90f41b9 ldr      w9, [sp, #0x10c]
000A80F8 ea8741b9 ldr      w10, [sp, #0x184]
000A80FC 3f010a6b cmp      w9, w10
000A8100 a1f9ff54 b.ne     #0xa8034
000A8104 09a840a9 ldp      x9, x10, [x0, #8]
000A8108 09a900a9 stp      x9, x10, [x8, #8]
000A810C cbffff17 b        #0xa8038
000A8110 994a40b9 ldr      w25, [x20, #0x48]
000A8114 3f03086b cmp      w25, w8
000A8118 69eeff54 b.ls     #0xa7ee4
000A811C e1d740f9 ldr      x1, [sp, #0x1a8]
000A8120 f30340f9 ldr      x19, [sp]
000A8124 010100b4 cbz      x1, #0xa8144
000A8128 e8835ba9 ldp      x8, x0, [sp, #0x1b8]
000A812C e1db00f9 str      x1, [sp, #0x1b0]
000A8130 83008052 mov      w3, #4
000A8134 020101cb sub      x2, x8, x1
000A8138 080040f9 ldr      x8, [x0]
000A813C 080d40f9 ldr      x8, [x8, #0x18]
000A8140 00013fd6 blr      x8
000A8144 a0035ff8 ldur     x0, [x29, #-0x10]
000A8148 a00000b4 cbz      x0, #0xa815c
000A814C 088c44f8 ldr      x8, [x0, #0x48]!
000A8150 080d40f9 ldr      x8, [x8, #0x18]
000A8154 00013fd6 blr      x8
000A8158 bf031ff8 stur     xzr, [x29, #-0x10]
000A815C a0835ef8 ldur     x0, [x29, #-0x18]
000A8160 a00000b4 cbz      x0, #0xa8174
000A8164 088c44f8 ldr      x8, [x0, #0x48]!
000A8168 080d40f9 ldr      x8, [x8, #0x18]
000A816C 00013fd6 blr      x8
000A8170 bf831ef8 stur     xzr, [x29, #-0x18]
000A8174 a0035ef8 ldur     x0, [x29, #-0x20]
000A8178 a00000b4 cbz      x0, #0xa818c
000A817C 088c44f8 ldr      x8, [x0, #0x48]!
000A8180 080d40f9 ldr      x8, [x8, #0x18]
000A8184 00013fd6 blr      x8
000A8188 bf031ef8 stur     xzr, [x29, #-0x20]
000A818C a0835df8 ldur     x0, [x29, #-0x28]
000A8190 a00000b4 cbz      x0, #0xa81a4
000A8194 088c44f8 ldr      x8, [x0, #0x48]!
000A8198 080d40f9 ldr      x8, [x8, #0x18]
000A819C 00013fd6 blr      x8
000A81A0 bf831df8 stur     xzr, [x29, #-0x28]
000A81A4 a0035df8 ldur     x0, [x29, #-0x30]
000A81A8 a00000b4 cbz      x0, #0xa81bc
000A81AC 088c44f8 ldr      x8, [x0, #0x48]!
000A81B0 080d40f9 ldr      x8, [x8, #0x18]
000A81B4 00013fd6 blr      x8
000A81B8 bf031df8 stur     xzr, [x29, #-0x30]
000A81BC a0835cf8 ldur     x0, [x29, #-0x38]
000A81C0 a00000b4 cbz      x0, #0xa81d4
000A81C4 088c44f8 ldr      x8, [x0, #0x48]!
000A81C8 080d40f9 ldr      x8, [x8, #0x18]
000A81CC 00013fd6 blr      x8
000A81D0 bf831cf8 stur     xzr, [x29, #-0x38]
000A81D4 a0035cf8 ldur     x0, [x29, #-0x40]
000A81D8 a00000b4 cbz      x0, #0xa81ec
000A81DC 088c44f8 ldr      x8, [x0, #0x48]!
000A81E0 080d40f9 ldr      x8, [x8, #0x18]
000A81E4 00013fd6 blr      x8
000A81E8 bf031cf8 stur     xzr, [x29, #-0x40]
000A81EC a0835bf8 ldur     x0, [x29, #-0x48]
000A81F0 a00000b4 cbz      x0, #0xa8204
000A81F4 088c44f8 ldr      x8, [x0, #0x48]!
000A81F8 080d40f9 ldr      x8, [x8, #0x18]
000A81FC 00013fd6 blr      x8
000A8200 bf831bf8 stur     xzr, [x29, #-0x48]
000A8204 a0035bf8 ldur     x0, [x29, #-0x50]
000A8208 a00000b4 cbz      x0, #0xa821c
000A820C 088c44f8 ldr      x8, [x0, #0x48]!
000A8210 080d40f9 ldr      x8, [x8, #0x18]
000A8214 00013fd6 blr      x8
000A8218 bf031bf8 stur     xzr, [x29, #-0x50]
000A821C a0835af8 ldur     x0, [x29, #-0x58]
000A8220 a00000b4 cbz      x0, #0xa8234
000A8224 088c44f8 ldr      x8, [x0, #0x48]!
000A8228 080d40f9 ldr      x8, [x8, #0x18]
000A822C 00013fd6 blr      x8
000A8230 bf831af8 stur     xzr, [x29, #-0x58]
000A8234 a0035af8 ldur     x0, [x29, #-0x60]
000A8238 a00000b4 cbz      x0, #0xa824c
000A823C 088c44f8 ldr      x8, [x0, #0x48]!
000A8240 080d40f9 ldr      x8, [x8, #0x18]
000A8244 00013fd6 blr      x8
000A8248 bf031af8 stur     xzr, [x29, #-0x60]
000A824C a08359f8 ldur     x0, [x29, #-0x68]
000A8250 a00000b4 cbz      x0, #0xa8264
000A8254 088c44f8 ldr      x8, [x0, #0x48]!
000A8258 080d40f9 ldr      x8, [x8, #0x18]
000A825C 00013fd6 blr      x8
000A8260 bf8319f8 stur     xzr, [x29, #-0x68]
000A8264 a00359f8 ldur     x0, [x29, #-0x70]
000A8268 a00000b4 cbz      x0, #0xa827c
000A826C 088c44f8 ldr      x8, [x0, #0x48]!
000A8270 080d40f9 ldr      x8, [x8, #0x18]
000A8274 00013fd6 blr      x8
000A8278 bf0319f8 stur     xzr, [x29, #-0x70]
000A827C a08358f8 ldur     x0, [x29, #-0x78]
000A8280 a00000b4 cbz      x0, #0xa8294
000A8284 088c44f8 ldr      x8, [x0, #0x48]!
000A8288 080d40f9 ldr      x8, [x8, #0x18]
000A828C 00013fd6 blr      x8
000A8290 bf8318f8 stur     xzr, [x29, #-0x78]
000A8294 a00358f8 ldur     x0, [x29, #-0x80]
000A8298 a00000b4 cbz      x0, #0xa82ac
000A829C 088c44f8 ldr      x8, [x0, #0x48]!
000A82A0 080d40f9 ldr      x8, [x8, #0x18]
000A82A4 00013fd6 blr      x8
000A82A8 bf0318f8 stur     xzr, [x29, #-0x80]
000A82AC a08357f8 ldur     x0, [x29, #-0x88]
000A82B0 a00000b4 cbz      x0, #0xa82c4
000A82B4 088c44f8 ldr      x8, [x0, #0x48]!
000A82B8 080d40f9 ldr      x8, [x8, #0x18]
000A82BC 00013fd6 blr      x8
000A82C0 bf8317f8 stur     xzr, [x29, #-0x88]
000A82C4 a00357f8 ldur     x0, [x29, #-0x90]
000A82C8 a00000b4 cbz      x0, #0xa82dc
000A82CC 088c44f8 ldr      x8, [x0, #0x48]!
000A82D0 080d40f9 ldr      x8, [x8, #0x18]
000A82D4 00013fd6 blr      x8
000A82D8 bf0317f8 stur     xzr, [x29, #-0x90]
000A82DC a08356f8 ldur     x0, [x29, #-0x98]
000A82E0 a00000b4 cbz      x0, #0xa82f4
000A82E4 088c44f8 ldr      x8, [x0, #0x48]!
000A82E8 080d40f9 ldr      x8, [x8, #0x18]
000A82EC 00013fd6 blr      x8
000A82F0 bf8316f8 stur     xzr, [x29, #-0x98]
000A82F4 a00356f8 ldur     x0, [x29, #-0xa0]
000A82F8 a00000b4 cbz      x0, #0xa830c
000A82FC 088c44f8 ldr      x8, [x0, #0x48]!
000A8300 080d40f9 ldr      x8, [x8, #0x18]
000A8304 00013fd6 blr      x8
000A8308 bf0316f8 stur     xzr, [x29, #-0xa0]
000A830C a08355f8 ldur     x0, [x29, #-0xa8]
000A8310 a00000b4 cbz      x0, #0xa8324
000A8314 088c44f8 ldr      x8, [x0, #0x48]!
000A8318 080d40f9 ldr      x8, [x8, #0x18]
000A831C 00013fd6 blr      x8
000A8320 bf8315f8 stur     xzr, [x29, #-0xa8]
000A8324 a00355f8 ldur     x0, [x29, #-0xb0]
000A8328 a00000b4 cbz      x0, #0xa833c
000A832C 088c44f8 ldr      x8, [x0, #0x48]!
000A8330 080d40f9 ldr      x8, [x8, #0x18]
000A8334 00013fd6 blr      x8
000A8338 bf0315f8 stur     xzr, [x29, #-0xb0]
000A833C a08354f8 ldur     x0, [x29, #-0xb8]
000A8340 a00000b4 cbz      x0, #0xa8354
000A8344 088c44f8 ldr      x8, [x0, #0x48]!
000A8348 080d40f9 ldr      x8, [x8, #0x18]
000A834C 00013fd6 blr      x8
000A8350 bf8314f8 stur     xzr, [x29, #-0xb8]
000A8354 a00354f8 ldur     x0, [x29, #-0xc0]
000A8358 a00000b4 cbz      x0, #0xa836c
000A835C 088c44f8 ldr      x8, [x0, #0x48]!
000A8360 080d40f9 ldr      x8, [x8, #0x18]
000A8364 00013fd6 blr      x8
000A8368 bf0314f8 stur     xzr, [x29, #-0xc0]
000A836C a08353f8 ldur     x0, [x29, #-0xc8]
000A8370 a00000b4 cbz      x0, #0xa8384
000A8374 088c44f8 ldr      x8, [x0, #0x48]!
000A8378 080d40f9 ldr      x8, [x8, #0x18]
000A837C 00013fd6 blr      x8
000A8380 bf8313f8 stur     xzr, [x29, #-0xc8]
000A8384 a00353f8 ldur     x0, [x29, #-0xd0]
000A8388 a00000b4 cbz      x0, #0xa839c
000A838C 088c44f8 ldr      x8, [x0, #0x48]!
000A8390 080d40f9 ldr      x8, [x8, #0x18]
000A8394 00013fd6 blr      x8
000A8398 bf0313f8 stur     xzr, [x29, #-0xd0]
000A839C a08352f8 ldur     x0, [x29, #-0xd8]
000A83A0 a00000b4 cbz      x0, #0xa83b4
000A83A4 088c44f8 ldr      x8, [x0, #0x48]!
000A83A8 080d40f9 ldr      x8, [x8, #0x18]
000A83AC 00013fd6 blr      x8
000A83B0 bf8312f8 stur     xzr, [x29, #-0xd8]
000A83B4 a00352f8 ldur     x0, [x29, #-0xe0]
000A83B8 a00000b4 cbz      x0, #0xa83cc
000A83BC 088c44f8 ldr      x8, [x0, #0x48]!
000A83C0 080d40f9 ldr      x8, [x8, #0x18]
000A83C4 00013fd6 blr      x8
000A83C8 bf0312f8 stur     xzr, [x29, #-0xe0]
000A83CC a08351f8 ldur     x0, [x29, #-0xe8]
000A83D0 a00000b4 cbz      x0, #0xa83e4
000A83D4 088c44f8 ldr      x8, [x0, #0x48]!
000A83D8 080d40f9 ldr      x8, [x8, #0x18]
000A83DC 00013fd6 blr      x8
000A83E0 bf8311f8 stur     xzr, [x29, #-0xe8]
000A83E4 a00351f8 ldur     x0, [x29, #-0xf0]
000A83E8 a00000b4 cbz      x0, #0xa83fc
000A83EC 088c44f8 ldr      x8, [x0, #0x48]!
000A83F0 080d40f9 ldr      x8, [x8, #0x18]
000A83F4 00013fd6 blr      x8
000A83F8 bf0311f8 stur     xzr, [x29, #-0xf0]
000A83FC a08350f8 ldur     x0, [x29, #-0xf8]
000A8400 800000b4 cbz      x0, #0xa8410
000A8404 088c44f8 ldr      x8, [x0, #0x48]!
000A8408 080d40f9 ldr      x8, [x8, #0x18]
000A840C 00013fd6 blr      x8
000A8410 b30000b4 cbz      x19, #0xa8424
000A8414 688e44f8 ldr      x8, [x19, #0x48]!
000A8418 e00313aa mov      x0, x19
000A841C 080d40f9 ldr      x8, [x8, #0x18]
000A8420 00013fd6 blr      x8
000A8424 ffc30c91 add      sp, sp, #0x330
000A8428 f44f45a9 ldp      x20, x19, [sp, #0x50]
000A842C f65744a9 ldp      x22, x21, [sp, #0x40]
000A8430 f85f43a9 ldp      x24, x23, [sp, #0x30]
000A8434 fa6742a9 ldp      x26, x25, [sp, #0x20]
000A8438 fc6f41a9 ldp      x28, x27, [sp, #0x10]
000A843C fd7bc6a8 ldp      x29, x30, [sp], #0x60
000A8440 c0035fd6 ret      
000A8444 f369fd97 bl       #0x2c10
000A8448 be371594 bl       #0x5f6340
~~~
### 0xc8098 (66 slots)
~~~asm
000C8098 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000C809C f30b00f9 str      x19, [sp, #0x10]
000C80A0 fd030091 mov      x29, sp
000C80A4 f30300aa mov      x19, x0
000C80A8 4575fd97 bl       #0x255bc
000C80AC 7f620339 strb     wzr, [x19, #0xd8]
000C80B0 c83600b0 adrp     x8, #0x7a1000
000C80B4 60b20691 add      x0, x19, #0x1ac
000C80B8 088140f9 ldr      x8, [x8, #0x100]
000C80BC 7ffe0fa9 stp      xzr, xzr, [x19, #0xf8]
000C80C0 09410091 add      x9, x8, #0x10
000C80C4 0a610191 add      x10, x8, #0x58
000C80C8 08610291 add      x8, x8, #0x98
000C80CC 7f8a00f9 str      xzr, [x19, #0x110]
000C80D0 7f7e06a9 stp      xzr, xzr, [x19, #0x60]
000C80D4 7f420239 strb     wzr, [x19, #0x90]
000C80D8 7f4209f8 stur     xzr, [x19, #0x94]
000C80DC 7fc209f8 stur     xzr, [x19, #0x9c]
000C80E0 7f920239 strb     wzr, [x19, #0xa4]
000C80E4 7f220339 strb     wzr, [x19, #0xc8]
000C80E8 7f520339 strb     wzr, [x19, #0xd4]
000C80EC 690200f9 str      x9, [x19]
000C80F0 69320691 add      x9, x19, #0x18c
000C80F4 7fc20cf8 stur     xzr, [x19, #0xcc]
000C80F8 7f420ef8 stur     xzr, [x19, #0xe4]
000C80FC 7fc20df8 stur     xzr, [x19, #0xdc]
000C8100 7f7a00f9 str      xzr, [x19, #0xf0]
000C8104 7f7601b9 str      wzr, [x19, #0x174]
000C8108 7ff20279 strh     wzr, [x19, #0x178]
000C810C 7fc200f9 str      xzr, [x19, #0x180]
000C8110 7f220639 strb     wzr, [x19, #0x188]
000C8114 3fd100f8 stur     xzr, [x9, #0xd]
000C8118 7fa601b9 str      wzr, [x19, #0x1a4]
000C811C 6aa204a9 stp      x10, x8, [x19, #0x48]
000C8120 e80313aa mov      x8, x19
000C8124 6a920691 add      x10, x19, #0x1a4
000C8128 5f3100b8 stur     wzr, [x10, #3]
000C812C 1fcd0e38 strb     wzr, [x8, #0xec]!
000C8130 1f9101f8 stur     xzr, [x8, #0x19]
000C8134 08018052 mov      w8, #8
000C8138 681a01b9 str      w8, [x19, #0x118]
000C813C 68720491 add      x8, x19, #0x11c
000C8140 7f7e07a9 stp      xzr, xzr, [x19, #0x70]
000C8144 7f7e08a9 stp      xzr, xzr, [x19, #0x80]
000C8148 7ffe0aa9 stp      xzr, xzr, [x19, #0xa8]
000C814C 7ffe0ba9 stp      xzr, xzr, [x19, #0xb8]
000C8150 1f7d00a9 stp      xzr, xzr, [x8]
000C8154 1f7d01a9 stp      xzr, xzr, [x8, #0x10]
000C8158 1f7d02a9 stp      xzr, xzr, [x8, #0x20]
000C815C 1f7d03a9 stp      xzr, xzr, [x8, #0x30]
000C8160 1f7d04a9 stp      xzr, xzr, [x8, #0x40]
000C8164 1fd104f8 stur     xzr, [x8, #0x4d]
000C8168 3f7d00a9 stp      xzr, xzr, [x9]
000C816C 7c50ff97 bl       #0x9c35c
000C8170 60420891 add      x0, x19, #0x210
000C8174 02328052 mov      w2, #0x190
000C8178 e1031f2a mov      w1, wzr
000C817C f5b71494 bl       #0x5f6150
000C8180 28008052 mov      w8, #1
000C8184 68a203b9 str      w8, [x19, #0x3a0]
000C8188 c83800d0 adrp     x8, #0x7e2000
000C818C 08010291 add      x8, x8, #0x80
000C8190 130100f9 str      x19, [x8]
000C8194 f30b40f9 ldr      x19, [sp, #0x10]
000C8198 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000C819C c0035fd6 ret      
~~~
### 0xdf2f0 (636 slots)
~~~asm
000DF2F0 ff0302d1 sub      sp, sp, #0x80
000DF2F4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000DF2F8 fb1b00f9 str      x27, [sp, #0x30]
000DF2FC fa6704a9 stp      x26, x25, [sp, #0x40]
000DF300 f85f05a9 stp      x24, x23, [sp, #0x50]
000DF304 f65706a9 stp      x22, x21, [sp, #0x60]
000DF308 f44f07a9 stp      x20, x19, [sp, #0x70]
000DF30C fd830091 add      x29, sp, #0x20
000DF310 083440f9 ldr      x8, [x0, #0x68]
000DF314 f30300aa mov      x19, x0
000DF318 480200b4 cbz      x8, #0xdf360
000DF31C 143140f9 ldr      x20, [x8, #0x60]
000DF320 140200b4 cbz      x20, #0xdf360
000DF324 880240f9 ldr      x8, [x20]
000DF328 e00314aa mov      x0, x20
000DF32C 080140f9 ldr      x8, [x8]
000DF330 00013fd6 blr      x8
000DF334 f50300aa mov      x21, x0
000DF338 dab8fe97 bl       #0x8d6a0
000DF33C 1f0015eb cmp      x0, x21
000DF340 c0000054 b.eq     #0xdf358
000DF344 b50240f9 ldr      x21, [x21]
000DF348 bf0200eb cmp      x21, x0
000DF34C a41a40fa ccmp     x21, #0, #4, ne
000DF350 a1ffff54 b.ne     #0xdf344
000DF354 750000b4 cbz      x21, #0xdf360
000DF358 994201d1 sub      x25, x20, #0x50
000DF35C 02000014 b        #0xdf364
000DF360 f9031faa mov      x25, xzr
000DF364 683240f9 ldr      x8, [x19, #0x60]
000DF368 143140f9 ldr      x20, [x8, #0x60]
000DF36C 880240f9 ldr      x8, [x20]
000DF370 e00314aa mov      x0, x20
000DF374 080140f9 ldr      x8, [x8]
000DF378 00013fd6 blr      x8
000DF37C f50300aa mov      x21, x0
000DF380 771bfd97 bl       #0x2615c
000DF384 1f0015eb cmp      x0, x21
000DF388 c0000054 b.eq     #0xdf3a0
000DF38C 1f2003d5 nop      
000DF390 b50240f9 ldr      x21, [x21]
000DF394 bf0200eb cmp      x21, x0
000DF398 a41a40fa ccmp     x21, #0, #4, ne
000DF39C a1ffff54 b.ne     #0xdf390
000DF3A0 80be42f9 ldr      x0, [x20, #0x578]
000DF3A4 88539bd2 mov      x8, #0xda9c
000DF3A8 2869b1f2 movk     x8, #0x8b49, lsl #16
000DF3AC e886cef2 movk     x8, #0x7437, lsl #32
000DF3B0 e8a7eef2 movk     x8, #0x753f, lsl #48
000DF3B4 a92900f0 adrp     x9, #0x616000
000DF3B8 29511f91 add      x9, x9, #0x7d4
000DF3BC e82700a9 stp      x8, x9, [sp]
000DF3C0 08018052 mov      w8, #8
000DF3C4 e1030091 mov      x1, sp
000DF3C8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000DF3CC 6dbdfe97 bl       #0x8e980
000DF3D0 f40300aa mov      x20, x0
000DF3D4 e00f40f9 ldr      x0, [sp, #0x18]
000DF3D8 800000b4 cbz      x0, #0xdf3e8
000DF3DC 088c44f8 ldr      x8, [x0, #0x48]!
000DF3E0 080d40f9 ldr      x8, [x8, #0x18]
000DF3E4 00013fd6 blr      x8
000DF3E8 884e46b9 ldr      w8, [x20, #0x64c]
000DF3EC e0031f2a mov      w0, wzr
000DF3F0 9f4e06b9 str      wzr, [x20, #0x64c]
000DF3F4 08050051 sub      w8, w8, #1
000DF3F8 1f650071 cmp      w8, #0x19
000DF3FC a8300054 b.hi     #0xdfa10
000DF400 292a00d0 adrp     x9, #0x625000
000DF404 29a93f91 add      x9, x9, #0xfea
000DF408 8a000010 adr      x10, #0xdf418
000DF40C 2b796878 ldrh     w11, [x9, x8, lsl #1]
000DF410 4a090b8b add      x10, x10, x11, lsl #2
000DF414 40011fd6 br       x10
000DF418 48018052 mov      w8, #0xa
000DF41C 36010014 b        #0xdf8f4
000DF420 88018052 mov      w8, #0xc
000DF424 34010014 b        #0xdf8f4
000DF428 08018052 mov      w8, #8
000DF42C 32010014 b        #0xdf8f4
000DF430 a8018052 mov      w8, #0xd
000DF434 30010014 b        #0xdf8f4
000DF438 683640f9 ldr      x8, [x19, #0x68]
000DF43C 133140f9 ldr      x19, [x8, #0x60]
000DF440 680240f9 ldr      x8, [x19]
000DF444 e00313aa mov      x0, x19
000DF448 080140f9 ldr      x8, [x8]
000DF44C 00013fd6 blr      x8
000DF450 f40300aa mov      x20, x0
000DF454 93b8fe97 bl       #0x8d6a0
000DF458 1f0014eb cmp      x0, x20
000DF45C a0000054 b.eq     #0xdf470
000DF460 940240f9 ldr      x20, [x20]
000DF464 9f0200eb cmp      x20, x0
000DF468 841a40fa ccmp     x20, #0, #4, ne
000DF46C a1ffff54 b.ne     #0xdf460
000DF470 680080d2 mov      x8, #3
000DF474 20008052 mov      w0, #1
000DF478 8800c0f2 movk     x8, #4, lsl #32
000DF47C 68c206f8 stur     x8, [x19, #0x6c]
000DF480 68018052 mov      w8, #0xb
000DF484 28c700b9 str      w8, [x25, #0xc4]
000DF488 c8018052 mov      w8, #0xe
000DF48C 28a303b9 str      w8, [x25, #0x3a0]
000DF490 60010014 b        #0xdfa10
000DF494 683640f9 ldr      x8, [x19, #0x68]
000DF498 133140f9 ldr      x19, [x8, #0x60]
000DF49C 680240f9 ldr      x8, [x19]
000DF4A0 e00313aa mov      x0, x19
000DF4A4 080140f9 ldr      x8, [x8]
000DF4A8 00013fd6 blr      x8
000DF4AC f40300aa mov      x20, x0
000DF4B0 7cb8fe97 bl       #0x8d6a0
000DF4B4 1f0014eb cmp      x0, x20
000DF4B8 c0000054 b.eq     #0xdf4d0
000DF4BC 1f2003d5 nop      
000DF4C0 940240f9 ldr      x20, [x20]
000DF4C4 9f0200eb cmp      x20, x0
000DF4C8 841a40fa ccmp     x20, #0, #4, ne
000DF4CC a1ffff54 b.ne     #0xdf4c0
000DF4D0 680080d2 mov      x8, #3
000DF4D4 8800c0f2 movk     x8, #4, lsl #32
000DF4D8 68c206f8 stur     x8, [x19, #0x6c]
000DF4DC 68028052 mov      w8, #0x13
000DF4E0 28a303b9 str      w8, [x25, #0x3a0]
000DF4E4 c8008052 mov      w8, #6
000DF4E8 48010014 b        #0xdfa08
000DF4EC 683640f9 ldr      x8, [x19, #0x68]
000DF4F0 133140f9 ldr      x19, [x8, #0x60]
000DF4F4 680240f9 ldr      x8, [x19]
000DF4F8 e00313aa mov      x0, x19
000DF4FC 080140f9 ldr      x8, [x8]
000DF500 00013fd6 blr      x8
000DF504 f40300aa mov      x20, x0
000DF508 66b8fe97 bl       #0x8d6a0
000DF50C 1f0014eb cmp      x0, x20
000DF510 a0000054 b.eq     #0xdf524
000DF514 940240f9 ldr      x20, [x20]
000DF518 9f0200eb cmp      x20, x0
000DF51C 841a40fa ccmp     x20, #0, #4, ne
000DF520 a1ffff54 b.ne     #0xdf514
000DF524 680080d2 mov      x8, #3
000DF528 8800c0f2 movk     x8, #4, lsl #32
000DF52C 68c206f8 stur     x8, [x19, #0x6c]
000DF530 68028052 mov      w8, #0x13
000DF534 28a303b9 str      w8, [x25, #0x3a0]
000DF538 e8008052 mov      w8, #7
000DF53C 33010014 b        #0xdfa08
000DF540 e8028052 mov      w8, #0x17
000DF544 ec000014 b        #0xdf8f4
000DF548 683640f9 ldr      x8, [x19, #0x68]
000DF54C 133140f9 ldr      x19, [x8, #0x60]
000DF550 680240f9 ldr      x8, [x19]
000DF554 e00313aa mov      x0, x19
000DF558 080140f9 ldr      x8, [x8]
000DF55C 00013fd6 blr      x8
000DF560 f40300aa mov      x20, x0
000DF564 4fb8fe97 bl       #0x8d6a0
000DF568 1f0014eb cmp      x0, x20
000DF56C a0000054 b.eq     #0xdf580
000DF570 940240f9 ldr      x20, [x20]
000DF574 9f0200eb cmp      x20, x0
000DF578 841a40fa ccmp     x20, #0, #4, ne
000DF57C a1ffff54 b.ne     #0xdf570
000DF580 680080d2 mov      x8, #3
000DF584 8800c0f2 movk     x8, #4, lsl #32
000DF588 68c206f8 stur     x8, [x19, #0x6c]
000DF58C 68028052 mov      w8, #0x13
000DF590 28a303b9 str      w8, [x25, #0x3a0]
000DF594 08018052 mov      w8, #8
000DF598 1c010014 b        #0xdfa08
000DF59C 683640f9 ldr      x8, [x19, #0x68]
000DF5A0 133140f9 ldr      x19, [x8, #0x60]
000DF5A4 680240f9 ldr      x8, [x19]
000DF5A8 e00313aa mov      x0, x19
000DF5AC 080140f9 ldr      x8, [x8]
000DF5B0 00013fd6 blr      x8
000DF5B4 f40300aa mov      x20, x0
000DF5B8 3ab8fe97 bl       #0x8d6a0
000DF5BC 1f0014eb cmp      x0, x20
000DF5C0 a0000054 b.eq     #0xdf5d4
000DF5C4 940240f9 ldr      x20, [x20]
000DF5C8 9f0200eb cmp      x20, x0
000DF5CC 841a40fa ccmp     x20, #0, #4, ne
000DF5D0 a1ffff54 b.ne     #0xdf5c4
000DF5D4 680080d2 mov      x8, #3
000DF5D8 69028052 mov      w9, #0x13
000DF5DC 8800c0f2 movk     x8, #4, lsl #32
000DF5E0 68c206f8 stur     x8, [x19, #0x6c]
000DF5E4 68008052 mov      w8, #3
000DF5E8 29a303b9 str      w9, [x25, #0x3a0]
000DF5EC 28c700b9 str      w8, [x25, #0xc4]
000DF5F0 68018052 mov      w8, #0xb
000DF5F4 05010014 b        #0xdfa08
000DF5F8 683640f9 ldr      x8, [x19, #0x68]
000DF5FC 133140f9 ldr      x19, [x8, #0x60]
000DF600 680240f9 ldr      x8, [x19]
000DF604 e00313aa mov      x0, x19
000DF608 080140f9 ldr      x8, [x8]
000DF60C 00013fd6 blr      x8
000DF610 f40300aa mov      x20, x0
000DF614 23b8fe97 bl       #0x8d6a0
000DF618 1f0014eb cmp      x0, x20
000DF61C a0000054 b.eq     #0xdf630
000DF620 940240f9 ldr      x20, [x20]
000DF624 9f0200eb cmp      x20, x0
000DF628 841a40fa ccmp     x20, #0, #4, ne
000DF62C a1ffff54 b.ne     #0xdf620
000DF630 680080d2 mov      x8, #3
000DF634 69028052 mov      w9, #0x13
000DF638 8800c0f2 movk     x8, #4, lsl #32
000DF63C 68c206f8 stur     x8, [x19, #0x6c]
000DF640 88018052 mov      w8, #0xc
000DF644 29a303b9 str      w9, [x25, #0x3a0]
000DF648 28c700b9 str      w8, [x25, #0xc4]
000DF64C 48018052 mov      w8, #0xa
000DF650 ee000014 b        #0xdfa08
000DF654 683640f9 ldr      x8, [x19, #0x68]
000DF658 133140f9 ldr      x19, [x8, #0x60]
000DF65C 680240f9 ldr      x8, [x19]
000DF660 e00313aa mov      x0, x19
000DF664 080140f9 ldr      x8, [x8]
000DF668 00013fd6 blr      x8
000DF66C f40300aa mov      x20, x0
000DF670 0cb8fe97 bl       #0x8d6a0
000DF674 1f0014eb cmp      x0, x20
000DF678 c0000054 b.eq     #0xdf690
000DF67C 1f2003d5 nop      
000DF680 940240f9 ldr      x20, [x20]
000DF684 9f0200eb cmp      x20, x0
000DF688 841a40fa ccmp     x20, #0, #4, ne
000DF68C a1ffff54 b.ne     #0xdf680
000DF690 680080d2 mov      x8, #3
000DF694 8800c0f2 movk     x8, #4, lsl #32
000DF698 68c206f8 stur     x8, [x19, #0x6c]
000DF69C 68028052 mov      w8, #0x13
000DF6A0 28a303b9 str      w8, [x25, #0x3a0]
000DF6A4 88018052 mov      w8, #0xc
000DF6A8 d8000014 b        #0xdfa08
000DF6AC 683640f9 ldr      x8, [x19, #0x68]
000DF6B0 133140f9 ldr      x19, [x8, #0x60]
000DF6B4 680240f9 ldr      x8, [x19]
000DF6B8 e00313aa mov      x0, x19
000DF6BC 080140f9 ldr      x8, [x8]
000DF6C0 00013fd6 blr      x8
000DF6C4 f40300aa mov      x20, x0
000DF6C8 f6b7fe97 bl       #0x8d6a0
000DF6CC 1f0014eb cmp      x0, x20
000DF6D0 a0000054 b.eq     #0xdf6e4
000DF6D4 940240f9 ldr      x20, [x20]
000DF6D8 9f0200eb cmp      x20, x0
000DF6DC 841a40fa ccmp     x20, #0, #4, ne
000DF6E0 a1ffff54 b.ne     #0xdf6d4
000DF6E4 680080d2 mov      x8, #3
000DF6E8 69028052 mov      w9, #0x13
000DF6EC 8800c0f2 movk     x8, #4, lsl #32
000DF6F0 68c206f8 stur     x8, [x19, #0x6c]
000DF6F4 68018052 mov      w8, #0xb
000DF6F8 29a303b9 str      w9, [x25, #0x3a0]
000DF6FC 28c700b9 str      w8, [x25, #0xc4]
000DF700 68008052 mov      w8, #3
000DF704 c1000014 b        #0xdfa08
000DF708 683640f9 ldr      x8, [x19, #0x68]
000DF70C 133140f9 ldr      x19, [x8, #0x60]
000DF710 680240f9 ldr      x8, [x19]
000DF714 e00313aa mov      x0, x19
000DF718 080140f9 ldr      x8, [x8]
000DF71C 00013fd6 blr      x8
000DF720 f40300aa mov      x20, x0
000DF724 dfb7fe97 bl       #0x8d6a0
000DF728 1f0014eb cmp      x0, x20
000DF72C a0000054 b.eq     #0xdf740
000DF730 940240f9 ldr      x20, [x20]
000DF734 9f0200eb cmp      x20, x0
000DF738 841a40fa ccmp     x20, #0, #4, ne
000DF73C a1ffff54 b.ne     #0xdf730
000DF740 680080d2 mov      x8, #3
000DF744 8800c0f2 movk     x8, #4, lsl #32
000DF748 68c206f8 stur     x8, [x19, #0x6c]
000DF74C 68028052 mov      w8, #0x13
000DF750 28a303b9 str      w8, [x25, #0x3a0]
000DF754 a8008052 mov      w8, #5
000DF758 ac000014 b        #0xdfa08
000DF75C a8028052 mov      w8, #0x15
000DF760 28a303b9 str      w8, [x25, #0x3a0]
000DF764 283340f9 ldr      x8, [x25, #0x60]
000DF768 080140b9 ldr      w8, [x8]
000DF76C 1f090071 cmp      w8, #2
000DF770 811a0054 b.ne     #0xdfac0
000DF774 c8028052 mov      w8, #0x16
000DF778 3f830639 strb     wzr, [x25, #0x1a0]
000DF77C 20008052 mov      w0, #1
000DF780 28a303b9 str      w8, [x25, #0x3a0]
000DF784 a8008052 mov      w8, #5
000DF788 289f01b9 str      w8, [x25, #0x19c]
000DF78C a1000014 b        #0xdfa10
000DF790 683640f9 ldr      x8, [x19, #0x68]
000DF794 143140f9 ldr      x20, [x8, #0x60]
000DF798 880240f9 ldr      x8, [x20]
000DF79C e00314aa mov      x0, x20
000DF7A0 080140f9 ldr      x8, [x8]
000DF7A4 00013fd6 blr      x8
000DF7A8 f50300aa mov      x21, x0
000DF7AC bdb7fe97 bl       #0x8d6a0
000DF7B0 1f0015eb cmp      x0, x21
000DF7B4 e0000054 b.eq     #0xdf7d0
000DF7B8 1f2003d5 nop      
000DF7BC 1f2003d5 nop      
000DF7C0 b50240f9 ldr      x21, [x21]
000DF7C4 bf0200eb cmp      x21, x0
000DF7C8 a41a40fa ccmp     x21, #0, #4, ne
000DF7CC a1ffff54 b.ne     #0xdf7c0
000DF7D0 680080d2 mov      x8, #3
000DF7D4 bac884d2 mov      x26, #0x2645
000DF7D8 5a84b0f2 movk     x26, #0x8422, lsl #16
000DF7DC 8800c0f2 movk     x8, #4, lsl #32
000DF7E0 88c206f8 stur     x8, [x20, #0x6c]
000DF7E4 68028052 mov      w8, #0x13
000DF7E8 9a9cd3f2 movk     x26, #0x9ce4, lsl #32
000DF7EC 5a7ef9f2 movk     x26, #0xcbf2, lsl #48
000DF7F0 3f1f01b9 str      wzr, [x25, #0x11c]
000DF7F4 28a303b9 str      w8, [x25, #0x3a0]
000DF7F8 28028052 mov      w8, #0x11
000DF7FC 280b01b9 str      w8, [x25, #0x108]
000DF800 e00313aa mov      x0, x19
000DF804 3a6b12a9 stp      x26, x26, [x25, #0x120]
000DF808 3a6b13a9 stp      x26, x26, [x25, #0x130]
000DF80C 3a6b14a9 stp      x26, x26, [x25, #0x140]
000DF810 3a6b15a9 stp      x26, x26, [x25, #0x150]
000DF814 3a6b16a9 stp      x26, x26, [x25, #0x160]
000DF818 32010094 bl       #0xdfce0
000DF81C f503002a mov      w21, w0
000DF820 e00313aa mov      x0, x19
000DF824 43030094 bl       #0xe0530
000DF828 f403002a mov      w20, w0
000DF82C e1030091 mov      x1, sp
000DF830 ff0300b9 str      wzr, [sp]
000DF834 e00313aa mov      x0, x19
000DF838 66050094 bl       #0xe0dd0
000DF83C 683640f9 ldr      x8, [x19, #0x68]
000DF840 f603002a mov      w22, w0
000DF844 173140f9 ldr      x23, [x8, #0x60]
000DF848 e80240f9 ldr      x8, [x23]
000DF84C e00317aa mov      x0, x23
000DF850 080140f9 ldr      x8, [x8]
000DF854 00013fd6 blr      x8
000DF858 f80300aa mov      x24, x0
000DF85C 91b7fe97 bl       #0x8d6a0
000DF860 1f0018eb cmp      x0, x24
000DF864 e0000054 b.eq     #0xdf880
000DF868 1f2003d5 nop      
000DF86C 1f2003d5 nop      
000DF870 180340f9 ldr      x24, [x24]
000DF874 1f0300eb cmp      x24, x0
000DF878 041b40fa ccmp     x24, #0, #4, ne
000DF87C a1ffff54 b.ne     #0xdf870
000DF880 f81240f9 ldr      x24, [x23, #0x20]
000DF884 f72241f9 ldr      x23, [x23, #0x240]
000DF888 b70000b4 cbz      x23, #0xdf89c
000DF88C e00317aa mov      x0, x23
000DF890 088c44f8 ldr      x8, [x0, #0x48]!
000DF894 080940f9 ldr      x8, [x8, #0x10]
000DF898 00013fd6 blr      x8
000DF89C e00318aa mov      x0, x24
000DF8A0 70dafe97 bl       #0x96260
000DF8A4 600c00b4 cbz      x0, #0xdfa30
000DF8A8 080c40b9 ldr      w8, [x0, #0xc]
000DF8AC 1f210071 cmp      w8, #8
000DF8B0 010c0054 b.ne     #0xdfa30
000DF8B4 08834139 ldrb     w8, [x24, #0x60]
000DF8B8 1f010071 cmp      w8, #0
000DF8BC fb079f1a cset     w27, ne
000DF8C0 5d000014 b        #0xdfa34
000DF8C4 88008052 mov      w8, #4
000DF8C8 28a701b9 str      w8, [x25, #0x1a4]
000DF8CC 0a000014 b        #0xdf8f4
000DF8D0 88008052 mov      w8, #4
000DF8D4 20008052 mov      w0, #1
000DF8D8 28a303b9 str      w8, [x25, #0x3a0]
000DF8DC 283740f9 ldr      x8, [x25, #0x68]
000DF8E0 20a701b9 str      w0, [x25, #0x1a4]
000DF8E4 1f0100b9 str      wzr, [x8]
000DF8E8 4a000014 b        #0xdfa10
000DF8EC 88008052 mov      w8, #4
000DF8F0 3fa701b9 str      wzr, [x25, #0x1a4]
000DF8F4 28a303b9 str      w8, [x25, #0x3a0]
000DF8F8 20008052 mov      w0, #1
000DF8FC 45000014 b        #0xdfa10
000DF900 683640f9 ldr      x8, [x19, #0x68]
000DF904 133140f9 ldr      x19, [x8, #0x60]
000DF908 680240f9 ldr      x8, [x19]
000DF90C e00313aa mov      x0, x19
000DF910 080140f9 ldr      x8, [x8]
000DF914 00013fd6 blr      x8
000DF918 f40300aa mov      x20, x0
000DF91C 61b7fe97 bl       #0x8d6a0
000DF920 1f0014eb cmp      x0, x20
000DF924 e0000054 b.eq     #0xdf940
000DF928 1f2003d5 nop      
000DF92C 1f2003d5 nop      
000DF930 940240f9 ldr      x20, [x20]
000DF934 9f0200eb cmp      x20, x0
000DF938 841a40fa ccmp     x20, #0, #4, ne
000DF93C a1ffff54 b.ne     #0xdf930
000DF940 680080d2 mov      x8, #3
000DF944 8800c0f2 movk     x8, #4, lsl #32
000DF948 68c206f8 stur     x8, [x19, #0x6c]
000DF94C 68028052 mov      w8, #0x13
000DF950 28a303b9 str      w8, [x25, #0x3a0]
000DF954 88028052 mov      w8, #0x14
000DF958 2c000014 b        #0xdfa08
000DF95C 683640f9 ldr      x8, [x19, #0x68]
000DF960 133140f9 ldr      x19, [x8, #0x60]
000DF964 680240f9 ldr      x8, [x19]
000DF968 e00313aa mov      x0, x19
000DF96C 080140f9 ldr      x8, [x8]
000DF970 00013fd6 blr      x8
000DF974 f40300aa mov      x20, x0
000DF978 4ab7fe97 bl       #0x8d6a0
000DF97C 1f0014eb cmp      x0, x20
000DF980 a0000054 b.eq     #0xdf994
000DF984 940240f9 ldr      x20, [x20]
000DF988 9f0200eb cmp      x20, x0
000DF98C 841a40fa ccmp     x20, #0, #4, ne
000DF990 a1ffff54 b.ne     #0xdf984
000DF994 680080d2 mov      x8, #3
000DF998 8800c0f2 movk     x8, #4, lsl #32
000DF99C 68c206f8 stur     x8, [x19, #0x6c]
000DF9A0 68028052 mov      w8, #0x13
000DF9A4 28a303b9 str      w8, [x25, #0x3a0]
000DF9A8 e8028052 mov      w8, #0x17
000DF9AC 17000014 b        #0xdfa08
000DF9B0 683640f9 ldr      x8, [x19, #0x68]
000DF9B4 133140f9 ldr      x19, [x8, #0x60]
000DF9B8 680240f9 ldr      x8, [x19]
000DF9BC e00313aa mov      x0, x19
000DF9C0 080140f9 ldr      x8, [x8]
000DF9C4 00013fd6 blr      x8
000DF9C8 f40300aa mov      x20, x0
000DF9CC 35b7fe97 bl       #0x8d6a0
000DF9D0 1f0014eb cmp      x0, x20
000DF9D4 e0000054 b.eq     #0xdf9f0
000DF9D8 1f2003d5 nop      
000DF9DC 1f2003d5 nop      
000DF9E0 940240f9 ldr      x20, [x20]
000DF9E4 9f0200eb cmp      x20, x0
000DF9E8 841a40fa ccmp     x20, #0, #4, ne
000DF9EC a1ffff54 b.ne     #0xdf9e0
000DF9F0 680080d2 mov      x8, #3
000DF9F4 8800c0f2 movk     x8, #4, lsl #32
000DF9F8 68c206f8 stur     x8, [x19, #0x6c]
000DF9FC 68028052 mov      w8, #0x13
000DFA00 28a303b9 str      w8, [x25, #0x3a0]
000DFA04 48038052 mov      w8, #0x1a
000DFA08 20008052 mov      w0, #1
000DFA0C 280b01b9 str      w8, [x25, #0x108]
000DFA10 f44f47a9 ldp      x20, x19, [sp, #0x70]
000DFA14 fb1b40f9 ldr      x27, [sp, #0x30]
000DFA18 f65746a9 ldp      x22, x21, [sp, #0x60]
000DFA1C f85f45a9 ldp      x24, x23, [sp, #0x50]
000DFA20 fa6744a9 ldp      x26, x25, [sp, #0x40]
000DFA24 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000DFA28 ff030291 add      sp, sp, #0x80
000DFA2C c0035fd6 ret      
000DFA30 fb031f2a mov      w27, wzr
000DFA34 b70000b4 cbz      x23, #0xdfa48
000DFA38 e88e44f8 ldr      x8, [x23, #0x48]!
000DFA3C e00317aa mov      x0, x23
000DFA40 080d40f9 ldr      x8, [x8, #0x18]
000DFA44 00013fd6 blr      x8
000DFA48 683640f9 ldr      x8, [x19, #0x68]
000DFA4C 173140f9 ldr      x23, [x8, #0x60]
000DFA50 e80240f9 ldr      x8, [x23]
000DFA54 e00317aa mov      x0, x23
000DFA58 080140f9 ldr      x8, [x8]
000DFA5C 00013fd6 blr      x8
000DFA60 f80300aa mov      x24, x0
000DFA64 0fb7fe97 bl       #0x8d6a0
000DFA68 1f0018eb cmp      x0, x24
000DFA6C a0000054 b.eq     #0xdfa80
000DFA70 180340f9 ldr      x24, [x24]
000DFA74 1f0300eb cmp      x24, x0
000DFA78 041b40fa ccmp     x24, #0, #4, ne
000DFA7C a1ffff54 b.ne     #0xdfa70
000DFA80 f81240f9 ldr      x24, [x23, #0x20]
000DFA84 f72241f9 ldr      x23, [x23, #0x240]
000DFA88 b70000b4 cbz      x23, #0xdfa9c
000DFA8C e00317aa mov      x0, x23
000DFA90 088c44f8 ldr      x8, [x0, #0x48]!
000DFA94 080940f9 ldr      x8, [x8, #0x10]
000DFA98 00013fd6 blr      x8
000DFA9C e00318aa mov      x0, x24
000DFAA0 f0d9fe97 bl       #0x96260
000DFAA4 a00000b4 cbz      x0, #0xdfab8
000DFAA8 080c40b9 ldr      w8, [x0, #0xc]
000DFAAC 082d0051 sub      w8, w8, #0xb
000DFAB0 1f090031 cmn      w8, #2
000DFAB4 42010054 b.hs     #0xdfadc
000DFAB8 f8031f2a mov      w24, wzr
000DFABC 0b000014 b        #0xdfae8
000DFAC0 299740b9 ldr      w9, [x25, #0x94]
000DFAC4 890f0034 cbz      w9, #0xdfcb4
000DFAC8 1f050071 cmp      w8, #1
000DFACC 01100054 b.ne     #0xdfccc
000DFAD0 68008052 mov      w8, #3
000DFAD4 289f01b9 str      w8, [x25, #0x19c]
000DFAD8 88ffff17 b        #0xdf8f8
000DFADC 08874139 ldrb     w8, [x24, #0x61]
000DFAE0 1f010071 cmp      w8, #0
000DFAE4 f8079f1a cset     w24, ne
000DFAE8 b70000b4 cbz      x23, #0xdfafc
000DFAEC e88e44f8 ldr      x8, [x23, #0x48]!
000DFAF0 e00317aa mov      x0, x23
000DFAF4 080d40f9 ldr      x8, [x8, #0x18]
000DFAF8 00013fd6 blr      x8
000DFAFC 683640f9 ldr      x8, [x19, #0x68]
000DFB00 133140f9 ldr      x19, [x8, #0x60]
000DFB04 680240f9 ldr      x8, [x19]
000DFB08 e00313aa mov      x0, x19
000DFB0C 080140f9 ldr      x8, [x8]
000DFB10 00013fd6 blr      x8
000DFB14 f70300aa mov      x23, x0
000DFB18 e2b6fe97 bl       #0x8d6a0
000DFB1C 1f0017eb cmp      x0, x23
000DFB20 a0000054 b.eq     #0xdfb34
000DFB24 f70240f9 ldr      x23, [x23]
000DFB28 ff0200eb cmp      x23, x0
000DFB2C e41a40fa ccmp     x23, #0, #4, ne
000DFB30 a1ffff54 b.ne     #0xdfb24
000DFB34 771240f9 ldr      x23, [x19, #0x20]
000DFB38 732241f9 ldr      x19, [x19, #0x240]
000DFB3C b30000b4 cbz      x19, #0xdfb50
000DFB40 e00313aa mov      x0, x19
000DFB44 088c44f8 ldr      x8, [x0, #0x48]!
000DFB48 080940f9 ldr      x8, [x8, #0x10]
000DFB4C 00013fd6 blr      x8
000DFB50 e00317aa mov      x0, x23
000DFB54 c3d9fe97 bl       #0x96260
000DFB58 400100b4 cbz      x0, #0xdfb80
000DFB5C 080c40b9 ldr      w8, [x0, #0xc]
000DFB60 09110051 sub      w9, w8, #4
000DFB64 3f110071 cmp      w9, #4
000DFB68 04294c7a ccmp     w8, #0xc, #4, hs
000DFB6C a1000054 b.ne     #0xdfb80
000DFB70 e88a4139 ldrb     w8, [x23, #0x62]
000DFB74 1f010071 cmp      w8, #0
000DFB78 f7079f1a cset     w23, ne
000DFB7C 02000014 b        #0xdfb84
000DFB80 f7031f2a mov      w23, wzr
000DFB84 b30000b4 cbz      x19, #0xdfb98
000DFB88 688e44f8 ldr      x8, [x19, #0x48]!
000DFB8C e00313aa mov      x0, x19
000DFB90 080d40f9 ldr      x8, [x8, #0x18]
000DFB94 00013fd6 blr      x8
000DFB98 76030036 tbz      w22, #0, #0xdfc04
000DFB9C e80340b9 ldr      w8, [sp]
000DFBA0 1f310071 cmp      w8, #0xc
000DFBA4 88a58fd2 mov      x8, #0x7d2c
000DFBA8 2856acf2 movk     x8, #0x62b1, lsl #16
000DFBAC 88bfdaf2 movk     x8, #0xd5fc, lsl #32
000DFBB0 28b5f1f2 movk     x8, #0x8da9, lsl #48
000DFBB4 08019a9a csel     x8, x8, x26, eq
000DFBB8 291f41b9 ldr      w9, [x25, #0x11c]
000DFBBC 2a050011 add      w10, w9, #1
000DFBC0 290f098b add      x9, x25, x9, lsl #3
000DFBC4 2a1f01b9 str      w10, [x25, #0x11c]
000DFBC8 289100f9 str      x8, [x9, #0x120]
000DFBCC 74030037 tbnz     w20, #0, #0xdfc38
000DFBD0 9b040034 cbz      w27, #0xdfc60
000DFBD4 281f41b9 ldr      w8, [x25, #0x11c]
000DFBD8 09050011 add      w9, w8, #1
000DFBDC 280f088b add      x8, x25, x8, lsl #3
000DFBE0 291f01b9 str      w9, [x25, #0x11c]
000DFBE4 29f994d2 mov      x9, #0xa7c9
000DFBE8 09ababf2 movk     x9, #0x5d58, lsl #16
000DFBEC 89bfd5f2 movk     x9, #0xadfc, lsl #32
000DFBF0 698ff0f2 movk     x9, #0x847b, lsl #48
000DFBF4 099100f9 str      x9, [x8, #0x120]
000DFBF8 78030035 cbnz     w24, #0xdfc64
000DFBFC f7e7ff34 cbz      w23, #0xdf8f8
000DFC00 23000014 b        #0xdfc8c
000DFC04 95010036 tbz      w21, #0, #0xdfc34
000DFC08 a8c094d2 mov      x8, #0xa605
000DFC0C 08afabf2 movk     x8, #0x5d78, lsl #16
000DFC10 885fc6f2 movk     x8, #0x32fc, lsl #32
000DFC14 2894f0f2 movk     x8, #0x84a1, lsl #48
000DFC18 291f41b9 ldr      w9, [x25, #0x11c]
000DFC1C 2a050011 add      w10, w9, #1
000DFC20 290f098b add      x9, x25, x9, lsl #3
000DFC24 2a1f01b9 str      w10, [x25, #0x11c]
000DFC28 289100f9 str      x8, [x9, #0x120]
000DFC2C 34fd0736 tbz      w20, #0, #0xdfbd0
000DFC30 02000014 b        #0xdfc38
000DFC34 f4fc0736 tbz      w20, #0, #0xdfbd0
000DFC38 281f41b9 ldr      w8, [x25, #0x11c]
000DFC3C 09050011 add      w9, w8, #1
000DFC40 280f088b add      x8, x25, x8, lsl #3
000DFC44 291f01b9 str      w9, [x25, #0x11c]
000DFC48 499c95d2 mov      x9, #0xace2
000DFC4C 09ababf2 movk     x9, #0x5d58, lsl #16
000DFC50 891fd6f2 movk     x9, #0xb0fc, lsl #32
000DFC54 698ff0f2 movk     x9, #0x847b, lsl #48
000DFC58 099100f9 str      x9, [x8, #0x120]
000DFC5C dbfbff35 cbnz     w27, #0xdfbd4
000DFC60 f8fcff34 cbz      w24, #0xdfbfc
000DFC64 281f41b9 ldr      w8, [x25, #0x11c]
000DFC68 09050011 add      w9, w8, #1
000DFC6C 280f088b add      x8, x25, x8, lsl #3
000DFC70 291f01b9 str      w9, [x25, #0x11c]
000DFC74 a9d692d2 mov      x9, #0x96b5
000DFC78 8956acf2 movk     x9, #0x62b4, lsl #16
000DFC7C 897fcbf2 movk     x9, #0x5bfc, lsl #32
000DFC80 a9b5f1f2 movk     x9, #0x8dad, lsl #48
000DFC84 099100f9 str      x9, [x8, #0x120]
000DFC88 97e3ff34 cbz      w23, #0xdf8f8
000DFC8C 281f41b9 ldr      w8, [x25, #0x11c]
000DFC90 09050011 add      w9, w8, #1
000DFC94 280f088b add      x8, x25, x8, lsl #3
000DFC98 291f01b9 str      w9, [x25, #0x11c]
000DFC9C 89d29dd2 mov      x9, #0xee94
000DFCA0 2957acf2 movk     x9, #0x62b9, lsl #16
000DFCA4 89dfdcf2 movk     x9, #0xe6fc, lsl #32
000DFCA8 69b6f1f2 movk     x9, #0x8db3, lsl #48
000DFCAC 099100f9 str      x9, [x8, #0x120]
000DFCB0 12ffff17 b        #0xdf8f8
000DFCB4 f7030594 bl       #0x220c90
000DFCB8 1f7c0071 cmp      w0, #0x1f
000DFCBC c3000054 b.lo     #0xdfcd4
000DFCC0 20008052 mov      w0, #1
000DFCC4 209f01b9 str      w0, [x25, #0x19c]
000DFCC8 52ffff17 b        #0xdfa10
000DFCCC 3f9f01b9 str      wzr, [x25, #0x19c]
000DFCD0 0affff17 b        #0xdf8f8
000DFCD4 48008052 mov      w8, #2
000DFCD8 289f01b9 str      w8, [x25, #0x19c]
000DFCDC 07ffff17 b        #0xdf8f8
~~~
### 0xe1a70 (306 slots)
~~~asm
000E1A70 ff4301d1 sub      sp, sp, #0x50
000E1A74 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1A78 f65703a9 stp      x22, x21, [sp, #0x30]
000E1A7C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1A80 fd830091 add      x29, sp, #0x20
000E1A84 083040f9 ldr      x8, [x0, #0x60]
000E1A88 f30300aa mov      x19, x0
000E1A8C 143140f9 ldr      x20, [x8, #0x60]
000E1A90 880240f9 ldr      x8, [x20]
000E1A94 e00314aa mov      x0, x20
000E1A98 080140f9 ldr      x8, [x8]
000E1A9C 00013fd6 blr      x8
000E1AA0 f50300aa mov      x21, x0
000E1AA4 ae11fd97 bl       #0x2615c
000E1AA8 1f0015eb cmp      x0, x21
000E1AAC a0000054 b.eq     #0xe1ac0
000E1AB0 b50240f9 ldr      x21, [x21]
000E1AB4 bf0200eb cmp      x21, x0
000E1AB8 a41a40fa ccmp     x21, #0, #4, ne
000E1ABC a1ffff54 b.ne     #0xe1ab0
000E1AC0 80be42f9 ldr      x0, [x20, #0x578]
000E1AC4 286496d2 mov      x8, #0xb321
000E1AC8 888abef2 movk     x8, #0xf454, lsl #16
000E1ACC 48c3c2f2 movk     x8, #0x161a, lsl #32
000E1AD0 28e8ecf2 movk     x8, #0x6741, lsl #48
000E1AD4 a9290090 adrp     x9, #0x615000
000E1AD8 29093191 add      x9, x9, #0xc42
000E1ADC e82700a9 stp      x8, x9, [sp]
000E1AE0 28018052 mov      w8, #9
000E1AE4 e1030091 mov      x1, sp
000E1AE8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E1AEC 31b4fe97 bl       #0x8ebb0
000E1AF0 f40300aa mov      x20, x0
000E1AF4 e00f40f9 ldr      x0, [sp, #0x18]
000E1AF8 800000b4 cbz      x0, #0xe1b08
000E1AFC 088c44f8 ldr      x8, [x0, #0x48]!
000E1B00 080d40f9 ldr      x8, [x8, #0x18]
000E1B04 00013fd6 blr      x8
000E1B08 964a46b9 ldr      w22, [x20, #0x648]
000E1B0C 683640f9 ldr      x8, [x19, #0x68]
000E1B10 c80200b4 cbz      x8, #0xe1b68
000E1B14 143140f9 ldr      x20, [x8, #0x60]
000E1B18 140400b4 cbz      x20, #0xe1b98
000E1B1C 880240f9 ldr      x8, [x20]
000E1B20 e00314aa mov      x0, x20
000E1B24 080140f9 ldr      x8, [x8]
000E1B28 00013fd6 blr      x8
000E1B2C f50300aa mov      x21, x0
000E1B30 dcaefe97 bl       #0x8d6a0
000E1B34 1f0015eb cmp      x0, x21
000E1B38 e0000054 b.eq     #0xe1b54
000E1B3C 1f2003d5 nop      
000E1B40 b50240f9 ldr      x21, [x21]
000E1B44 bf0200eb cmp      x21, x0
000E1B48 a41a40fa ccmp     x21, #0, #4, ne
000E1B4C a1ffff54 b.ne     #0xe1b40
000E1B50 f50000b4 cbz      x21, #0xe1b6c
000E1B54 954201d1 sub      x21, x20, #0x50
000E1B58 c8060051 sub      w8, w22, #1
000E1B5C 1f2d0071 cmp      w8, #0xb
000E1B60 c9000054 b.ls     #0xe1b78
000E1B64 11000014 b        #0xe1ba8
000E1B68 f5031faa mov      x21, xzr
000E1B6C c8060051 sub      w8, w22, #1
000E1B70 1f2d0071 cmp      w8, #0xb
000E1B74 a8010054 b.hi     #0xe1ba8
000E1B78 292a00b0 adrp     x9, #0x626000
000E1B7C 29790091 add      x9, x9, #0x1e
000E1B80 8a000010 adr      x10, #0xe1b90
000E1B84 2b696838 ldrb     w11, [x9, x8]
000E1B88 4a090b8b add      x10, x10, x11, lsl #2
000E1B8C 40011fd6 br       x10
000E1B90 08028052 mov      w8, #0x10
000E1B94 a9000014 b        #0xe1e38
000E1B98 f5031faa mov      x21, xzr
000E1B9C c8060051 sub      w8, w22, #1
000E1BA0 1f2d0071 cmp      w8, #0xb
000E1BA4 a9feff54 b.ls     #0xe1b78
000E1BA8 e0031f2a mov      w0, wzr
000E1BAC f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1BB0 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1BB4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1BB8 ff430191 add      sp, sp, #0x50
000E1BBC c0035fd6 ret      
000E1BC0 28028052 mov      w8, #0x11
000E1BC4 9d000014 b        #0xe1e38
000E1BC8 683640f9 ldr      x8, [x19, #0x68]
000E1BCC 133140f9 ldr      x19, [x8, #0x60]
000E1BD0 680240f9 ldr      x8, [x19]
000E1BD4 e00313aa mov      x0, x19
000E1BD8 080140f9 ldr      x8, [x8]
000E1BDC 00013fd6 blr      x8
000E1BE0 f40300aa mov      x20, x0
000E1BE4 afaefe97 bl       #0x8d6a0
000E1BE8 1f0014eb cmp      x0, x20
000E1BEC a0000054 b.eq     #0xe1c00
000E1BF0 940240f9 ldr      x20, [x20]
000E1BF4 9f0200eb cmp      x20, x0
000E1BF8 841a40fa ccmp     x20, #0, #4, ne
000E1BFC a1ffff54 b.ne     #0xe1bf0
000E1C00 c80080d2 mov      x8, #6
000E1C04 20008052 mov      w0, #1
000E1C08 e800c0f2 movk     x8, #7, lsl #32
000E1C0C 68c206f8 stur     x8, [x19, #0x6c]
000E1C10 c8008052 mov      w8, #6
000E1C14 a8c600b9 str      w8, [x21, #0xc4]
000E1C18 48028052 mov      w8, #0x12
000E1C1C a8a203b9 str      w8, [x21, #0x3a0]
000E1C20 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1C24 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1C28 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1C2C ff430191 add      sp, sp, #0x50
000E1C30 c0035fd6 ret      
000E1C34 683640f9 ldr      x8, [x19, #0x68]
000E1C38 133140f9 ldr      x19, [x8, #0x60]
000E1C3C 680240f9 ldr      x8, [x19]
000E1C40 e00313aa mov      x0, x19
000E1C44 080140f9 ldr      x8, [x8]
000E1C48 00013fd6 blr      x8
000E1C4C f40300aa mov      x20, x0
000E1C50 94aefe97 bl       #0x8d6a0
000E1C54 1f0014eb cmp      x0, x20
000E1C58 c0000054 b.eq     #0xe1c70
000E1C5C 1f2003d5 nop      
000E1C60 940240f9 ldr      x20, [x20]
000E1C64 9f0200eb cmp      x20, x0
000E1C68 841a40fa ccmp     x20, #0, #4, ne
000E1C6C a1ffff54 b.ne     #0xe1c60
000E1C70 c80080d2 mov      x8, #6
000E1C74 e800c0f2 movk     x8, #7, lsl #32
000E1C78 68c206f8 stur     x8, [x19, #0x6c]
000E1C7C 68028052 mov      w8, #0x13
000E1C80 a8a203b9 str      w8, [x21, #0x3a0]
000E1C84 c8008052 mov      w8, #6
000E1C88 9d000014 b        #0xe1efc
000E1C8C 683640f9 ldr      x8, [x19, #0x68]
000E1C90 133140f9 ldr      x19, [x8, #0x60]
000E1C94 680240f9 ldr      x8, [x19]
000E1C98 e00313aa mov      x0, x19
000E1C9C 080140f9 ldr      x8, [x8]
000E1CA0 00013fd6 blr      x8
000E1CA4 f40300aa mov      x20, x0
000E1CA8 7eaefe97 bl       #0x8d6a0
000E1CAC 1f0014eb cmp      x0, x20
000E1CB0 a0000054 b.eq     #0xe1cc4
000E1CB4 940240f9 ldr      x20, [x20]
000E1CB8 9f0200eb cmp      x20, x0
000E1CBC 841a40fa ccmp     x20, #0, #4, ne
000E1CC0 a1ffff54 b.ne     #0xe1cb4
000E1CC4 c80080d2 mov      x8, #6
000E1CC8 e800c0f2 movk     x8, #7, lsl #32
000E1CCC 68c206f8 stur     x8, [x19, #0x6c]
000E1CD0 68028052 mov      w8, #0x13
000E1CD4 a8a203b9 str      w8, [x21, #0x3a0]
000E1CD8 e8008052 mov      w8, #7
000E1CDC 88000014 b        #0xe1efc
000E1CE0 a8028052 mov      w8, #0x15
000E1CE4 a8a203b9 str      w8, [x21, #0x3a0]
000E1CE8 a83240f9 ldr      x8, [x21, #0x60]
000E1CEC 080140b9 ldr      w8, [x8]
000E1CF0 1f090071 cmp      w8, #2
000E1CF4 21110054 b.ne     #0xe1f18
000E1CF8 c8008052 mov      w8, #6
000E1CFC 88000014 b        #0xe1f1c
000E1D00 683640f9 ldr      x8, [x19, #0x68]
000E1D04 133140f9 ldr      x19, [x8, #0x60]
000E1D08 680240f9 ldr      x8, [x19]
000E1D0C e00313aa mov      x0, x19
000E1D10 080140f9 ldr      x8, [x8]
000E1D14 00013fd6 blr      x8
000E1D18 f40300aa mov      x20, x0
000E1D1C 61aefe97 bl       #0x8d6a0
000E1D20 1f0014eb cmp      x0, x20
000E1D24 e0000054 b.eq     #0xe1d40
000E1D28 1f2003d5 nop      
000E1D2C 1f2003d5 nop      
000E1D30 940240f9 ldr      x20, [x20]
000E1D34 9f0200eb cmp      x20, x0
000E1D38 841a40fa ccmp     x20, #0, #4, ne
000E1D3C a1ffff54 b.ne     #0xe1d30
000E1D40 c80080d2 mov      x8, #6
000E1D44 69028052 mov      w9, #0x13
000E1D48 e800c0f2 movk     x8, #7, lsl #32
000E1D4C 68c206f8 stur     x8, [x19, #0x6c]
000E1D50 c8008052 mov      w8, #6
000E1D54 a9a203b9 str      w9, [x21, #0x3a0]
000E1D58 a8c600b9 str      w8, [x21, #0xc4]
000E1D5C 68008052 mov      w8, #3
000E1D60 67000014 b        #0xe1efc
000E1D64 683640f9 ldr      x8, [x19, #0x68]
000E1D68 133140f9 ldr      x19, [x8, #0x60]
000E1D6C 680240f9 ldr      x8, [x19]
000E1D70 e00313aa mov      x0, x19
000E1D74 080140f9 ldr      x8, [x8]
000E1D78 00013fd6 blr      x8
000E1D7C f40300aa mov      x20, x0
000E1D80 48aefe97 bl       #0x8d6a0
000E1D84 1f0014eb cmp      x0, x20
000E1D88 c0000054 b.eq     #0xe1da0
000E1D8C 1f2003d5 nop      
000E1D90 940240f9 ldr      x20, [x20]
000E1D94 9f0200eb cmp      x20, x0
000E1D98 841a40fa ccmp     x20, #0, #4, ne
000E1D9C a1ffff54 b.ne     #0xe1d90
000E1DA0 c80080d2 mov      x8, #6
000E1DA4 20008052 mov      w0, #1
000E1DA8 e800c0f2 movk     x8, #7, lsl #32
000E1DAC 68c206f8 stur     x8, [x19, #0x6c]
000E1DB0 e8008052 mov      w8, #7
000E1DB4 a0a601b9 str      w0, [x21, #0x1a4]
000E1DB8 a8a203b9 str      w8, [x21, #0x3a0]
000E1DBC a83640f9 ldr      x8, [x21, #0x68]
000E1DC0 000100b9 str      w0, [x8]
000E1DC4 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1DC8 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1DCC fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1DD0 ff430191 add      sp, sp, #0x50
000E1DD4 c0035fd6 ret      
000E1DD8 683640f9 ldr      x8, [x19, #0x68]
000E1DDC 133140f9 ldr      x19, [x8, #0x60]
000E1DE0 680240f9 ldr      x8, [x19]
000E1DE4 e00313aa mov      x0, x19
000E1DE8 080140f9 ldr      x8, [x8]
000E1DEC 00013fd6 blr      x8
000E1DF0 f40300aa mov      x20, x0
000E1DF4 2baefe97 bl       #0x8d6a0
000E1DF8 1f0014eb cmp      x0, x20
000E1DFC a0000054 b.eq     #0xe1e10
000E1E00 940240f9 ldr      x20, [x20]
000E1E04 9f0200eb cmp      x20, x0
000E1E08 841a40fa ccmp     x20, #0, #4, ne
000E1E0C a1ffff54 b.ne     #0xe1e00
000E1E10 c80080d2 mov      x8, #6
000E1E14 e800c0f2 movk     x8, #7, lsl #32
000E1E18 68c206f8 stur     x8, [x19, #0x6c]
000E1E1C 68028052 mov      w8, #0x13
000E1E20 a8a203b9 str      w8, [x21, #0x3a0]
000E1E24 48038052 mov      w8, #0x1a
000E1E28 35000014 b        #0xe1efc
000E1E2C 68008052 mov      w8, #3
000E1E30 a8a601b9 str      w8, [x21, #0x1a4]
000E1E34 e8008052 mov      w8, #7
000E1E38 a8a203b9 str      w8, [x21, #0x3a0]
000E1E3C 20008052 mov      w0, #1
000E1E40 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1E44 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1E48 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1E4C ff430191 add      sp, sp, #0x50
000E1E50 c0035fd6 ret      
000E1E54 683640f9 ldr      x8, [x19, #0x68]
000E1E58 133140f9 ldr      x19, [x8, #0x60]
000E1E5C 680240f9 ldr      x8, [x19]
000E1E60 e00313aa mov      x0, x19
000E1E64 080140f9 ldr      x8, [x8]
000E1E68 00013fd6 blr      x8
000E1E6C f40300aa mov      x20, x0
000E1E70 0caefe97 bl       #0x8d6a0
000E1E74 1f0014eb cmp      x0, x20
000E1E78 c0000054 b.eq     #0xe1e90
000E1E7C 1f2003d5 nop      
000E1E80 940240f9 ldr      x20, [x20]
000E1E84 9f0200eb cmp      x20, x0
000E1E88 841a40fa ccmp     x20, #0, #4, ne
000E1E8C a1ffff54 b.ne     #0xe1e80
000E1E90 c80080d2 mov      x8, #6
000E1E94 e800c0f2 movk     x8, #7, lsl #32
000E1E98 68c206f8 stur     x8, [x19, #0x6c]
000E1E9C 68028052 mov      w8, #0x13
000E1EA0 a8a203b9 str      w8, [x21, #0x3a0]
000E1EA4 a8008052 mov      w8, #5
000E1EA8 15000014 b        #0xe1efc
000E1EAC 683640f9 ldr      x8, [x19, #0x68]
000E1EB0 133140f9 ldr      x19, [x8, #0x60]
000E1EB4 680240f9 ldr      x8, [x19]
000E1EB8 e00313aa mov      x0, x19
000E1EBC 080140f9 ldr      x8, [x8]
000E1EC0 00013fd6 blr      x8
000E1EC4 f40300aa mov      x20, x0
000E1EC8 f6adfe97 bl       #0x8d6a0
000E1ECC 1f0014eb cmp      x0, x20
000E1ED0 a0000054 b.eq     #0xe1ee4
000E1ED4 940240f9 ldr      x20, [x20]
000E1ED8 9f0200eb cmp      x20, x0
000E1EDC 841a40fa ccmp     x20, #0, #4, ne
000E1EE0 a1ffff54 b.ne     #0xe1ed4
000E1EE4 c80080d2 mov      x8, #6
000E1EE8 e800c0f2 movk     x8, #7, lsl #32
000E1EEC 68c206f8 stur     x8, [x19, #0x6c]
000E1EF0 68028052 mov      w8, #0x13
000E1EF4 a8a203b9 str      w8, [x21, #0x3a0]
000E1EF8 88028052 mov      w8, #0x14
000E1EFC 20008052 mov      w0, #1
000E1F00 a80a01b9 str      w8, [x21, #0x108]
000E1F04 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1F08 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1F0C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1F10 ff430191 add      sp, sp, #0x50
000E1F14 c0035fd6 ret      
000E1F18 88008052 mov      w8, #4
000E1F1C a89e01b9 str      w8, [x21, #0x19c]
000E1F20 20008052 mov      w0, #1
000E1F24 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1F28 f65743a9 ldp      x22, x21, [sp, #0x30]
000E1F2C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1F30 ff430191 add      sp, sp, #0x50
000E1F34 c0035fd6 ret      
~~~
### 0xf1b70 (48 slots)
~~~asm
000F1B70 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000F1B74 f50b00f9 str      x21, [sp, #0x10]
000F1B78 f44f02a9 stp      x20, x19, [sp, #0x20]
000F1B7C fd030091 mov      x29, sp
000F1B80 083440f9 ldr      x8, [x0, #0x68]
000F1B84 f30300aa mov      x19, x0
000F1B88 a80200b4 cbz      x8, #0xf1bdc
000F1B8C 143140f9 ldr      x20, [x8, #0x60]
000F1B90 540200b4 cbz      x20, #0xf1bd8
000F1B94 880240f9 ldr      x8, [x20]
000F1B98 e00314aa mov      x0, x20
000F1B9C 080140f9 ldr      x8, [x8]
000F1BA0 00013fd6 blr      x8
000F1BA4 f50300aa mov      x21, x0
000F1BA8 be6efe97 bl       #0x8d6a0
000F1BAC 1f0015eb cmp      x0, x21
000F1BB0 c0000054 b.eq     #0xf1bc8
000F1BB4 b50240f9 ldr      x21, [x21]
000F1BB8 bf0200eb cmp      x21, x0
000F1BBC a41a40fa ccmp     x21, #0, #4, ne
000F1BC0 a1ffff54 b.ne     #0xf1bb4
000F1BC4 150200b4 cbz      x21, #0xf1c04
000F1BC8 884201d1 sub      x8, x20, #0x50
000F1BCC 09e54539 ldrb     w9, [x8, #0x179]
000F1BD0 a9000035 cbnz     w9, #0xf1be4
000F1BD4 0f000014 b        #0xf1c10
000F1BD8 e8031faa mov      x8, xzr
000F1BDC 09e54539 ldrb     w9, [x8, #0x179]
000F1BE0 89010034 cbz      w9, #0xf1c10
000F1BE4 69028052 mov      w9, #0x13
000F1BE8 69e600b9 str      w9, [x19, #0xe4]
000F1BEC 09028052 mov      w9, #0x10
000F1BF0 090901b9 str      w9, [x8, #0x108]
000F1BF4 f44f42a9 ldp      x20, x19, [sp, #0x20]
000F1BF8 f50b40f9 ldr      x21, [sp, #0x10]
000F1BFC fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F1C00 c0035fd6 ret      
000F1C04 e8031faa mov      x8, xzr
000F1C08 09e54539 ldrb     w9, [x8, #0x179]
000F1C0C c9feff35 cbnz     w9, #0xf1be4
000F1C10 09c140b9 ldr      w9, [x8, #0xc0]
000F1C14 1fa501b9 str      wzr, [x8, #0x1a4]
000F1C18 69e600b9 str      w9, [x19, #0xe4]
000F1C1C 1f310439 strb     wzr, [x8, #0x10c]
000F1C20 f44f42a9 ldp      x20, x19, [sp, #0x20]
000F1C24 f50b40f9 ldr      x21, [sp, #0x10]
000F1C28 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F1C2C c0035fd6 ret      
~~~
