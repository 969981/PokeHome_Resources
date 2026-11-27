# HOME41 Registry reload and scene lifecycle
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
## Direct callers
### caller 0x6c208
0006C360 11160894 bl       #0x271ba4
### caller 0xf15e0
000F16E4 b7c20494 bl       #0x2221c0
000F1918 2ac10494 bl       #0x221dc0
### caller 0xf1e7c
000F1EA8 c6c00494 bl       #0x2221c0
000F1EFC b1bf0494 bl       #0x221dc0
### caller 0x105340
00105340 7c810414 b        #0x225930
### caller 0x140000
001400BC f5940394 bl       #0x225490
### caller 0x1423e0
00142458 8a8a0394 bl       #0x224e80
### caller 0x16ee90
0016F718 5ed70294 bl       #0x225490
### caller 0x16fd20
0016FD40 20c80294 bl       #0x221dc0
0016FD44 1fc90294 bl       #0x2221c0
0016FD60 18c90294 bl       #0x2221c0
### caller 0x222230
00222244 8b000094 bl       #0x222470
### caller 0x2459c4
00245C38 8e73ff97 bl       #0x222a70
### caller 0x248bb0
002492AC f165ff97 bl       #0x222a70
002493CC a965ff97 bl       #0x222a70
00249A3C 0d64ff97 bl       #0x222a70
### caller 0x24c470
0024CC34 eb68ff97 bl       #0x226fe0
0024CC40 0c56ff97 bl       #0x222470
0024CC4C 8957ff97 bl       #0x222a70
0024D290 5467ff97 bl       #0x226fe0
0024D29C 7554ff97 bl       #0x222470
0024D2A8 f255ff97 bl       #0x222a70
0024E4F4 df4fff97 bl       #0x222470
0024E508 5a51ff97 bl       #0x222a70
### caller 0x250150
002503C8 aa49ff97 bl       #0x222a70
### caller 0x252cc4
00253144 a74fff97 bl       #0x226fe0
00253160 c43cff97 bl       #0x222470
002531C0 884fff97 bl       #0x226fe0
002531CC a93cff97 bl       #0x222470
### caller 0x271718
00271754 96220094 bl       #0x27a1ac
### caller 0x271ba4
00271BD0 900b0094 bl       #0x274a10
00271BF0 a80a0014 b        #0x274690
### caller 0x271c00
00271D00 86feff97 bl       #0x271718
### caller 0x274640
00274668 0a000094 bl       #0x274690
### caller 0x27a1ac
0027A1D8 1ae9ff97 bl       #0x274640
0027A1F0 14e9ff97 bl       #0x274640
### caller 0x27a2f0
0027A4F0 48e9ff97 bl       #0x274a10

## Relocated callback/vtable references
- 0x76b6d8 -> 0x6c208
  0x76b6a8: 0x102b8
  0x76b6b0: 0x10310
  0x76b6b8: 0x10360
  0x76b6c0: 0x16948
  0x76b6c8: 0x6bfa8
  0x76b6d0: 0x6bfb0
  0x76b6d8: 0x6c208
  0x76b6e0: 0x6c1f4
  0x76b6e8: unresolved
  0x76b6f0: unresolved
  0x76b6f8: 0x6bf84
  0x76b700: 0x6bf98
  0x76b708: 0x10440
- 0x77f920 -> 0x25afd0
  0x77f8f0: 0x1029c
  0x77f8f8: 0x102b8
  0x77f900: 0x10310
  0x77f908: 0x10360
  0x77f910: 0x257864
  0x77f918: 0x25aa70
  0x77f920: 0x25afd0
  0x77f928: 0x25b1f8
  0x77f930: unresolved
  0x77f938: unresolved
  0x77f940: 0x25bb48
  0x77f948: 0x25bb98
  0x77f950: 0x10440
- 0x780550 -> 0x27a2f0
  0x780520: 0x10750
  0x780528: 0x9ceb4
  0x780530: 0x9ceb8
  0x780538: 0x9cec8
  0x780540: 0x4e896c
  0x780548: 0x4e8af0
  0x780550: 0x27a2f0
  0x780558: 0x4e8c48
  0x780560: 0x4e88dc
  0x780568: unresolved
  0x780570: unresolved
  0x780578: 0x27a5c8
  0x780580: 0x27a608
- 0x7a0bc0 -> 0xf1e7c
  0x7a0b90: 0xf1570
  0x7a0b98: 0xf15e0
  0x7a0ba0: 0xf1980
  0x7a0ba8: 0xf1b70
  0x7a0bb0: 0xf1c30
  0x7a0bb8: 0xf1e10
  0x7a0bc0: 0xf1e7c
  0x7a0bc8: 0xf1f20
  0x7a0bd0: 0xf20f0
  0x7a0bd8: 0xf2160
  0x7a0be0: 0xf24d0
  0x7a0be8: 0xf62cc
  0x7a0bf0: 0xf62e8

## Scene state jump table
- state 0: 0x6c30c
- state 1: 0x6c34c
- state 2: 0x6c438
- state 3: 0x6c44c
- state 4: 0x6c474
- state 5: 0x6c48c
- state 6: 0x6c4b0
- state 7: 0x6c4c8
- state 8: 0x6c4f8
- state 9: 0x6c510
- state 10: 0x6c534
- state 11: 0x6c54c
- state 12: 0x6c574
- state 13: 0x6c58c
- state 14: 0x6c5a8
- state 15: 0x6c5c0
- state 16: 0x6c5dc
- state 17: 0x6c5f4
- state 18: 0x6c610
- state 19: 0x6c628
- state 20: 0x6c654
- state 21: 0x6c2cc
- state 22: 0x6c668
- state 23: 0x6c2cc
- state 24: 0x6c680
- state 25: 0x6c698
- state 26: 0x6c8b0
- state 27: 0x6c2cc
- state 28: 0x6c6bc
- state 29: 0x6c6d4
- state 30: 0x6c70c
- state 31: 0x6c724
- state 32: 0x6c754
- state 33: 0x6c76c
- state 34: 0x6c790
- state 35: 0x6c7a8
- state 36: 0x6c7cc
- state 37: 0x6c7e4
- state 38: 0x6c8c4
- state 39: 0x6c808
- state 40: 0x6c82c
- state 41: 0x6c844
- state 42: 0x6c86c
- state 43: 0x6c884
- state 44: 0x6c898
- state 45: 0x6c2cc
- state 46: 0x6c8dc

## Scene vtable address candidates
- 0x7a0b60: 0xf10e0
- 0x7a0b68: 0xf08c0
- 0x7a0b70: 0xf0ac8
- 0x7a0b78: 0xf1150
- 0x7a0b80: 0xf1320
- 0x7a0b88: 0xf1390
- 0x7a0b90: 0xf1570
- 0x7a0b98: 0xf15e0
- 0x7a0ba0: 0xf1980
- 0x7a0ba8: 0xf1b70
- 0x7a0bb0: 0xf1c30
- 0x7a0bb8: 0xf1e10
- 0x7a0bc0: 0xf1e7c
- 0x7a0bc8: 0xf1f20
- 0x7a0bd0: 0xf20f0
- 0x7a0bd8: 0xf2160
- 0x7a0be0: 0xf24d0

## Complete bodies
### 0x1029c (7 slots)
~~~asm
0001029C 002c40f9 ldr      x0, [x0, #0x58]
000102A0 000100f9 str      x0, [x8]
000102A4 800000b4 cbz      x0, #0x102b4
000102A8 088c44f8 ldr      x8, [x0, #0x48]!
000102AC 010940f9 ldr      x1, [x8, #0x10]
000102B0 20001fd6 br       x1
000102B4 c0035fd6 ret      
~~~
### 0x102b8 (19 slots)
~~~asm
000102B8 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000102BC f65701a9 stp      x22, x21, [sp, #0x10]
000102C0 f44f02a9 stp      x20, x19, [sp, #0x20]
000102C4 fd030091 mov      x29, sp
000102C8 085840a9 ldp      x8, x22, [x0]
000102CC 151040f9 ldr      x21, [x0, #0x20]
000102D0 135041a9 ldp      x19, x20, [x0, #0x10]
000102D4 080140f9 ldr      x8, [x8]
000102D8 00013fd6 blr      x8
000102DC c80240f9 ldr      x8, [x22]
000102E0 e00316aa mov      x0, x22
000102E4 e10313aa mov      x1, x19
000102E8 e20314aa mov      x2, x20
000102EC e30315aa mov      x3, x21
000102F0 040d40f9 ldr      x4, [x8, #0x18]
000102F4 f44f42a9 ldp      x20, x19, [sp, #0x20]
000102F8 f65741a9 ldp      x22, x21, [sp, #0x10]
000102FC fd7bc3a8 ldp      x29, x30, [sp], #0x30
00010300 80001fd6 br       x4
~~~
### 0x10310 (19 slots)
~~~asm
00010310 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00010314 f30b00f9 str      x19, [sp, #0x10]
00010318 fd030091 mov      x29, sp
0001031C 132c40f9 ldr      x19, [x0, #0x58]
00010320 682e40f9 ldr      x8, [x19, #0x58]
00010324 c80000b5 cbnz     x8, #0x1033c
00010328 603240f9 ldr      x0, [x19, #0x60]
0001032C 080040f9 ldr      x8, [x0]
00010330 080140f9 ldr      x8, [x8]
00010334 00013fd6 blr      x8
00010338 602e00f9 str      x0, [x19, #0x58]
0001033C 68520191 add      x8, x19, #0x54
00010340 09fd5f88 ldaxr    w9, [x8]
00010344 29050011 add      w9, w9, #1
00010348 09fd0a88 stlxr    w10, w9, [x8]
0001034C aaffff35 cbnz     w10, #0x10340
00010350 f30b40f9 ldr      x19, [sp, #0x10]
00010354 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00010358 c0035fd6 ret      
~~~
### 0x10360 (14 slots)
~~~asm
00010360 082c40f9 ldr      x8, [x0, #0x58]
00010364 09510191 add      x9, x8, #0x54
00010368 1f2003d5 nop      
0001036C 1f2003d5 nop      
00010370 2afd5f88 ldaxr    w10, [x9]
00010374 4a050071 subs     w10, w10, #1
00010378 2afd0b88 stlxr    w11, w10, [x9]
0001037C abffff35 cbnz     w11, #0x10370
00010380 a1000054 b.ne     #0x10394
00010384 1f3100f9 str      xzr, [x8, #0x60]
00010388 080040f9 ldr      x8, [x0]
0001038C 010d40f9 ldr      x1, [x8, #0x18]
00010390 20001fd6 br       x1
00010394 c0035fd6 ret      
~~~
### 0x10440 (19 slots)
~~~asm
00010440 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00010444 f30b00f9 str      x19, [sp, #0x10]
00010448 fd030091 mov      x29, sp
0001044C 130840f9 ldr      x19, [x0, #0x10]
00010450 682e40f9 ldr      x8, [x19, #0x58]
00010454 c80000b5 cbnz     x8, #0x1046c
00010458 603240f9 ldr      x0, [x19, #0x60]
0001045C 080040f9 ldr      x8, [x0]
00010460 080140f9 ldr      x8, [x8]
00010464 00013fd6 blr      x8
00010468 602e00f9 str      x0, [x19, #0x58]
0001046C 68520191 add      x8, x19, #0x54
00010470 09fd5f88 ldaxr    w9, [x8]
00010474 29050011 add      w9, w9, #1
00010478 09fd0a88 stlxr    w10, w9, [x8]
0001047C aaffff35 cbnz     w10, #0x10470
00010480 f30b40f9 ldr      x19, [sp, #0x10]
00010484 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00010488 c0035fd6 ret      
~~~
### 0x10750 (10 slots)
~~~asm
00010750 08400191 add      x8, x0, #0x50
00010754 09fd5f88 ldaxr    w9, [x8]
00010758 29050071 subs     w9, w9, #1
0001075C 09fd0a88 stlxr    w10, w9, [x8]
00010760 aaffff35 cbnz     w10, #0x10754
00010764 81000054 b.ne     #0x10774
00010768 080040f9 ldr      x8, [x0]
0001076C 010940f9 ldr      x1, [x8, #0x10]
00010770 20001fd6 br       x1
00010774 c0035fd6 ret      
~~~
### 0x16948 (1 slots)
~~~asm
00016948 03000014 b        #0x16954
~~~
### 0x6bf84 (2 slots)
~~~asm
0006BF84 002001d1 sub      x0, x0, #0x48
0006BF88 9effff17 b        #0x6be00
~~~
### 0x6bf98 (2 slots)
~~~asm
0006BF98 002001d1 sub      x0, x0, #0x48
0006BF9C 99ffff17 b        #0x6be00
~~~
### 0x6bfa8 (2 slots)
~~~asm
0006BFA8 20008052 mov      w0, #1
0006BFAC c0035fd6 ret      
~~~
### 0x6bfb0 (145 slots)
~~~asm
0006BFB0 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
0006BFB4 f90b00f9 str      x25, [sp, #0x10]
0006BFB8 f85f02a9 stp      x24, x23, [sp, #0x20]
0006BFBC f65703a9 stp      x22, x21, [sp, #0x30]
0006BFC0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006BFC4 fd030091 mov      x29, sp
0006BFC8 a8390090 adrp     x8, #0x79f000
0006BFCC f30300aa mov      x19, x0
0006BFD0 087542f9 ldr      x8, [x8, #0x4e8]
0006BFD4 000140f9 ldr      x0, [x8]
0006BFD8 87b4fe97 bl       #0x191f4
0006BFDC a83b00d0 adrp     x8, #0x7e1000
0006BFE0 08e11291 add      x8, x8, #0x4b8
0006BFE4 190140f9 ldr      x25, [x8]
0006BFE8 343341f9 ldr      x20, [x25, #0x260]
0006BFEC b40000b4 cbz      x20, #0x6c000
0006BFF0 e00314aa mov      x0, x20
0006BFF4 088c44f8 ldr      x8, [x0, #0x48]!
0006BFF8 080940f9 ldr      x8, [x8, #0x10]
0006BFFC 00013fd6 blr      x8
0006C000 e00314aa mov      x0, x20
0006C004 39da0794 bl       #0x2628e8
0006C008 888e44f8 ldr      x8, [x20, #0x48]!
0006C00C f503002a mov      w21, w0
0006C010 e00314aa mov      x0, x20
0006C014 080d40f9 ldr      x8, [x8, #0x18]
0006C018 00013fd6 blr      x8
0006C01C b83b00b0 adrp     x24, #0x7e1000
0006C020 18631491 add      x24, x24, #0x518
0006C024 55060037 tbnz     w21, #0, #0x6c0ec
0006C028 080340f9 ldr      x8, [x24]
0006C02C 363341f9 ldr      x22, [x25, #0x260]
0006C030 140540f9 ldr      x20, [x8, #8]
0006C034 b60000b4 cbz      x22, #0x6c048
0006C038 e00316aa mov      x0, x22
0006C03C 088c44f8 ldr      x8, [x0, #0x48]!
0006C040 080940f9 ldr      x8, [x8, #0x10]
0006C044 00013fd6 blr      x8
0006C048 e00316aa mov      x0, x22
0006C04C e10314aa mov      x1, x20
0006C050 15488852 mov      w21, #0x4240
0006C054 f501a072 movk     w21, #0xf, lsl #16
0006C058 90d70794 bl       #0x261e98
0006C05C c88e44f8 ldr      x8, [x22, #0x48]!
0006C060 e00316aa mov      x0, x22
0006C064 080d40f9 ldr      x8, [x8, #0x18]
0006C068 00013fd6 blr      x8
0006C06C 363341f9 ldr      x22, [x25, #0x260]
0006C070 b60000b4 cbz      x22, #0x6c084
0006C074 e00316aa mov      x0, x22
0006C078 088c44f8 ldr      x8, [x0, #0x48]!
0006C07C 080940f9 ldr      x8, [x8, #0x10]
0006C080 00013fd6 blr      x8
0006C084 e00316aa mov      x0, x22
0006C088 18da0794 bl       #0x2628e8
0006C08C c88e44f8 ldr      x8, [x22, #0x48]!
0006C090 f703002a mov      w23, w0
0006C094 e00316aa mov      x0, x22
0006C098 080d40f9 ldr      x8, [x8, #0x18]
0006C09C 00013fd6 blr      x8
0006C0A0 d7000037 tbnz     w23, #0, #0x6c0b8
0006C0A4 e00315aa mov      x0, x21
0006C0A8 aa281694 bl       #0x5f6350
0006C0AC 363341f9 ldr      x22, [x25, #0x260]
0006C0B0 36feffb5 cbnz     x22, #0x6c074
0006C0B4 f4ffff17 b        #0x6c084
0006C0B8 353341f9 ldr      x21, [x25, #0x260]
0006C0BC b50000b4 cbz      x21, #0x6c0d0
0006C0C0 e00315aa mov      x0, x21
0006C0C4 088c44f8 ldr      x8, [x0, #0x48]!
0006C0C8 080940f9 ldr      x8, [x8, #0x10]
0006C0CC 00013fd6 blr      x8
0006C0D0 e00315aa mov      x0, x21
0006C0D4 e10314aa mov      x1, x20
0006C0D8 2ada0794 bl       #0x262980
0006C0DC a88e44f8 ldr      x8, [x21, #0x48]!
0006C0E0 e00315aa mov      x0, x21
0006C0E4 080d40f9 ldr      x8, [x8, #0x18]
0006C0E8 00013fd6 blr      x8
0006C0EC a8630091 add      x8, x29, #0x18
0006C0F0 2c850694 bl       #0x20d5a0
0006C0F4 a80f40f9 ldr      x8, [x29, #0x18]
0006C0F8 144140f9 ldr      x20, [x8, #0x80]
0006C0FC b40000b4 cbz      x20, #0x6c110
0006C100 e00314aa mov      x0, x20
0006C104 088c44f8 ldr      x8, [x0, #0x48]!
0006C108 080940f9 ldr      x8, [x8, #0x10]
0006C10C 00013fd6 blr      x8
0006C110 080340f9 ldr      x8, [x24]
0006C114 e00314aa mov      x0, x20
0006C118 010540f9 ldr      x1, [x8, #8]
0006C11C b27b0694 bl       #0x20afe4
0006C120 888e44f8 ldr      x8, [x20, #0x48]!
0006C124 e00314aa mov      x0, x20
0006C128 080d40f9 ldr      x8, [x8, #0x18]
0006C12C 00013fd6 blr      x8
0006C130 a00f40f9 ldr      x0, [x29, #0x18]
0006C134 800000b4 cbz      x0, #0x6c144
0006C138 080c45f8 ldr      x8, [x0, #0x50]!
0006C13C 080d40f9 ldr      x8, [x8, #0x18]
0006C140 00013fd6 blr      x8
0006C144 a83b00b0 adrp     x8, #0x7e1000
0006C148 08411891 add      x8, x8, #0x610
0006C14C 000140f9 ldr      x0, [x8]
0006C150 a8630091 add      x8, x29, #0x18
0006C154 97170594 bl       #0x1b1fb0
0006C158 a00f40f9 ldr      x0, [x29, #0x18]
0006C15C 66f10494 bl       #0x1a86f4
0006C160 80020037 tbnz     w0, #0, #0x6c1b0
0006C164 080340f9 ldr      x8, [x24]
0006C168 a00f40f9 ldr      x0, [x29, #0x18]
0006C16C 140540f9 ldr      x20, [x8, #8]
0006C170 e10314aa mov      x1, x20
0006C174 4bef0494 bl       #0x1a7ea0
0006C178 a00f40f9 ldr      x0, [x29, #0x18]
0006C17C 5ef10494 bl       #0x1a86f4
0006C180 20010037 tbnz     w0, #0, #0x6c1a4
0006C184 15488852 mov      w21, #0x4240
0006C188 f501a072 movk     w21, #0xf, lsl #16
0006C18C 1f2003d5 nop      
0006C190 e00315aa mov      x0, x21
0006C194 6f281694 bl       #0x5f6350
0006C198 a00f40f9 ldr      x0, [x29, #0x18]
0006C19C 56f10494 bl       #0x1a86f4
0006C1A0 80ff0736 tbz      w0, #0, #0x6c190
0006C1A4 a00f40f9 ldr      x0, [x29, #0x18]
0006C1A8 e10314aa mov      x1, x20
0006C1AC 75f10494 bl       #0x1a8780
0006C1B0 a83900b0 adrp     x8, #0x7a1000
0006C1B4 69621191 add      x9, x19, #0x458
0006C1B8 083542f9 ldr      x8, [x8, #0x468]
0006C1BC 080140f9 ldr      x8, [x8]
0006C1C0 094900f9 str      x9, [x8, #0x90]
0006C1C4 0fd00694 bl       #0x220200
0006C1C8 a00f40f9 ldr      x0, [x29, #0x18]
0006C1CC 800000b4 cbz      x0, #0x6c1dc
0006C1D0 088c44f8 ldr      x8, [x0, #0x48]!
0006C1D4 080d40f9 ldr      x8, [x8, #0x18]
0006C1D8 00013fd6 blr      x8
0006C1DC f44f44a9 ldp      x20, x19, [sp, #0x40]
0006C1E0 f90b40f9 ldr      x25, [sp, #0x10]
0006C1E4 f65743a9 ldp      x22, x21, [sp, #0x30]
0006C1E8 f85f42a9 ldp      x24, x23, [sp, #0x20]
0006C1EC fd7bc5a8 ldp      x29, x30, [sp], #0x50
0006C1F0 c0035fd6 ret      
~~~
### 0x6c1f4 (5 slots)
~~~asm
0006C1F4 a83b00b0 adrp     x8, #0x7e1000
0006C1F8 08213691 add      x8, x8, #0xd88
0006C1FC 080140f9 ldr      x8, [x8]
0006C200 1f4900f9 str      xzr, [x8, #0x90]
0006C204 c0035fd6 ret      
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
### 0x9ceb4 (1 slots)
~~~asm
0009CEB4 07000014 b        #0x9ced0
~~~
### 0x9ceb8 (4 slots)
~~~asm
0009CEB8 08680991 add      x8, x0, #0x25a
0009CEBC 08fddf08 ldarb    w8, [x8]
0009CEC0 00010012 and      w0, w8, #1
0009CEC4 c0035fd6 ret      
~~~
### 0x9cec8 (1 slots)
~~~asm
0009CEC8 c0035fd6 ret      
~~~
### 0xf08c0 (130 slots)
~~~asm
000F08C0 ffc301d1 sub      sp, sp, #0x70
000F08C4 fd7b03a9 stp      x29, x30, [sp, #0x30]
000F08C8 f72300f9 str      x23, [sp, #0x40]
000F08CC f65705a9 stp      x22, x21, [sp, #0x50]
000F08D0 f44f06a9 stp      x20, x19, [sp, #0x60]
000F08D4 fdc30091 add      x29, sp, #0x30
000F08D8 083040f9 ldr      x8, [x0, #0x60]
000F08DC f30300aa mov      x19, x0
000F08E0 143140f9 ldr      x20, [x8, #0x60]
000F08E4 880240f9 ldr      x8, [x20]
000F08E8 e00314aa mov      x0, x20
000F08EC 080140f9 ldr      x8, [x8]
000F08F0 00013fd6 blr      x8
000F08F4 f50300aa mov      x21, x0
000F08F8 19d6fc97 bl       #0x2615c
000F08FC 1f0015eb cmp      x0, x21
000F0900 a0000054 b.eq     #0xf0914
000F0904 b50240f9 ldr      x21, [x21]
000F0908 bf0200eb cmp      x21, x0
000F090C a41a40fa ccmp     x21, #0, #4, ne
000F0910 a1ffff54 b.ne     #0xf0904
000F0914 803640f9 ldr      x0, [x20, #0x68]
000F0918 e8630091 add      x8, sp, #0x18
000F091C e1031f2a mov      w1, wzr
000F0920 6c93fc97 bl       #0x156d0
000F0924 e00f40f9 ldr      x0, [sp, #0x18]
000F0928 143040f9 ldr      x20, [x0, #0x60]
000F092C 740c00b4 cbz      x20, #0xf0ab8
000F0930 e00314aa mov      x0, x20
000F0934 088c44f8 ldr      x8, [x0, #0x48]!
000F0938 080940f9 ldr      x8, [x8, #0x10]
000F093C 00013fd6 blr      x8
000F0940 e00f40f9 ldr      x0, [sp, #0x18]
000F0944 a00000b4 cbz      x0, #0xf0958
000F0948 088c44f8 ldr      x8, [x0, #0x48]!
000F094C 080d40f9 ldr      x8, [x8, #0x18]
000F0950 00013fd6 blr      x8
000F0954 940b00b4 cbz      x20, #0xf0ac4
000F0958 28208052 mov      w8, #0x101
000F095C 0820a072 movk     w8, #0x100, lsl #16
000F0960 e82b00b9 str      w8, [sp, #0x28]
000F0964 28008052 mov      w8, #1
000F0968 ffff01a9 stp      xzr, xzr, [sp, #0x18]
000F096C e8b30039 strb     w8, [sp, #0x2c]
000F0970 883700d0 adrp     x8, #0x7e2000
000F0974 08010291 add      x8, x8, #0x80
000F0978 080140f9 ldr      x8, [x8]
000F097C 480a00b4 cbz      x8, #0xf0ac4
000F0980 083540f9 ldr      x8, [x8, #0x68]
000F0984 080a00b4 cbz      x8, #0xf0ac4
000F0988 08ad42b9 ldr      w8, [x8, #0x2ac]
000F098C 49b085d2 mov      x9, #0x2d82
000F0990 a969a8f2 movk     x9, #0x434d, lsl #16
000F0994 604640f9 ldr      x0, [x19, #0x88]
000F0998 69c6caf2 movk     x9, #0x5633, lsl #32
000F099C 4981f1f2 movk     x9, #0x8c0a, lsl #48
000F09A0 1f011e72 tst      w8, #4
000F09A4 68b18dd2 mov      x8, #0x6d8b
000F09A8 e869a8f2 movk     x8, #0x434f, lsl #16
000F09AC e00b00f9 str      x0, [sp, #0x10]
000F09B0 6886cbf2 movk     x8, #0x5c33, lsl #32
000F09B4 a881f1f2 movk     x8, #0x8c0d, lsl #48
000F09B8 2801889a csel     x8, x9, x8, eq
000F09BC a80f00f9 str      x8, [x29, #0x18]
000F09C0 800000b4 cbz      x0, #0xf09d0
000F09C4 088c44f8 ldr      x8, [x0, #0x48]!
000F09C8 080940f9 ldr      x8, [x8, #0x10]
000F09CC 00013fd6 blr      x8
000F09D0 f40700f9 str      x20, [sp, #8]
000F09D4 888e44f8 ldr      x8, [x20, #0x48]!
000F09D8 e00314aa mov      x0, x20
000F09DC 080940f9 ldr      x8, [x8, #0x10]
000F09E0 00013fd6 blr      x8
000F09E4 e0430091 add      x0, sp, #0x10
000F09E8 e1230091 add      x1, sp, #8
000F09EC a2630091 add      x2, x29, #0x18
000F09F0 35f1fe97 bl       #0xacec4
000F09F4 e00740f9 ldr      x0, [sp, #8]
000F09F8 a00000b4 cbz      x0, #0xf0a0c
000F09FC 088c44f8 ldr      x8, [x0, #0x48]!
000F0A00 080d40f9 ldr      x8, [x8, #0x18]
000F0A04 00013fd6 blr      x8
000F0A08 ff0700f9 str      xzr, [sp, #8]
000F0A0C e00b40f9 ldr      x0, [sp, #0x10]
000F0A10 a00000b4 cbz      x0, #0xf0a24
000F0A14 088c44f8 ldr      x8, [x0, #0x48]!
000F0A18 080d40f9 ldr      x8, [x8, #0x18]
000F0A1C 00013fd6 blr      x8
000F0A20 ff0b00f9 str      xzr, [sp, #0x10]
000F0A24 684640f9 ldr      x8, [x19, #0x88]
000F0A28 37008052 mov      w23, #1
000F0A2C f72300b9 str      w23, [sp, #0x20]
000F0A30 e80f00f9 str      x8, [sp, #0x18]
000F0A34 683640f9 ldr      x8, [x19, #0x68]
000F0A38 153140f9 ldr      x21, [x8, #0x60]
000F0A3C a80240f9 ldr      x8, [x21]
000F0A40 e00315aa mov      x0, x21
000F0A44 080140f9 ldr      x8, [x8]
000F0A48 00013fd6 blr      x8
000F0A4C f60300aa mov      x22, x0
000F0A50 1473fe97 bl       #0x8d6a0
000F0A54 1f0016eb cmp      x0, x22
000F0A58 c0000054 b.eq     #0xf0a70
000F0A5C 1f2003d5 nop      
000F0A60 d60240f9 ldr      x22, [x22]
000F0A64 df0200eb cmp      x22, x0
000F0A68 c41a40fa ccmp     x22, #0, #4, ne
000F0A6C a1ffff54 b.ne     #0xf0a60
000F0A70 a8f24239 ldrb     w8, [x21, #0xbc]
000F0A74 bff20239 strb     wzr, [x21, #0xbc]
000F0A78 e1630091 add      x1, sp, #0x18
000F0A7C 606640f9 ldr      x0, [x19, #0xc8]
000F0A80 f7a30039 strb     w23, [sp, #0x28]
000F0A84 08010052 eor      w8, w8, #1
000F0A88 e8a70039 strb     w8, [sp, #0x29]
000F0A8C c504fd97 bl       #0x31da0
000F0A90 880240f9 ldr      x8, [x20]
000F0A94 e00314aa mov      x0, x20
000F0A98 080d40f9 ldr      x8, [x8, #0x18]
000F0A9C 00013fd6 blr      x8
000F0AA0 f44f46a9 ldp      x20, x19, [sp, #0x60]
000F0AA4 f72340f9 ldr      x23, [sp, #0x40]
000F0AA8 f65745a9 ldp      x22, x21, [sp, #0x50]
000F0AAC fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F0AB0 ffc30191 add      sp, sp, #0x70
000F0AB4 c0035fd6 ret      
000F0AB8 088c44f8 ldr      x8, [x0, #0x48]!
000F0ABC 080d40f9 ldr      x8, [x8, #0x18]
000F0AC0 00013fd6 blr      x8
000F0AC4 1f161494 bl       #0x5f6340
~~~
### 0xf0ac8 (16 slots)
~~~asm
000F0AC8 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
000F0ACC fd030091 mov      x29, sp
000F0AD0 883700d0 adrp     x8, #0x7e2000
000F0AD4 08010291 add      x8, x8, #0x80
000F0AD8 080140f9 ldr      x8, [x8]
000F0ADC 480100b4 cbz      x8, #0xf0b04
000F0AE0 09c540b9 ldr      w9, [x8, #0xc4]
000F0AE4 09e400b9 str      w9, [x0, #0xe4]
000F0AE8 083540f9 ldr      x8, [x8, #0x68]
000F0AEC c80000b4 cbz      x8, #0xf0b04
000F0AF0 09ad42b9 ldr      w9, [x8, #0x2ac]
000F0AF4 29791e12 and      w9, w9, #0xfffffffd
000F0AF8 09ad02b9 str      w9, [x8, #0x2ac]
000F0AFC fd7bc1a8 ldp      x29, x30, [sp], #0x10
000F0B00 c0035fd6 ret      
000F0B04 0f161494 bl       #0x5f6340
~~~
### 0xf10e0 (26 slots)
~~~asm
000F10E0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000F10E4 f50b00f9 str      x21, [sp, #0x10]
000F10E8 f44f02a9 stp      x20, x19, [sp, #0x20]
000F10EC fd030091 mov      x29, sp
000F10F0 083440f9 ldr      x8, [x0, #0x68]
000F10F4 f30300aa mov      x19, x0
000F10F8 143140f9 ldr      x20, [x8, #0x60]
000F10FC 880240f9 ldr      x8, [x20]
000F1100 e00314aa mov      x0, x20
000F1104 080140f9 ldr      x8, [x8]
000F1108 00013fd6 blr      x8
000F110C f50300aa mov      x21, x0
000F1110 6471fe97 bl       #0x8d6a0
000F1114 1f0015eb cmp      x0, x21
000F1118 c0000054 b.eq     #0xf1130
000F111C 1f2003d5 nop      
000F1120 b50240f9 ldr      x21, [x21]
000F1124 bf0200eb cmp      x21, x0
000F1128 a41a40fa ccmp     x21, #0, #4, ne
000F112C a1ffff54 b.ne     #0xf1120
000F1130 886e40b9 ldr      w8, [x20, #0x6c]
000F1134 68e600b9 str      w8, [x19, #0xe4]
000F1138 f50b40f9 ldr      x21, [sp, #0x10]
000F113C f44f42a9 ldp      x20, x19, [sp, #0x20]
000F1140 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F1144 c0035fd6 ret      
~~~
### 0xf1150 (115 slots)
~~~asm
000F1150 ffc301d1 sub      sp, sp, #0x70
000F1154 fd7b03a9 stp      x29, x30, [sp, #0x30]
000F1158 f72300f9 str      x23, [sp, #0x40]
000F115C f65705a9 stp      x22, x21, [sp, #0x50]
000F1160 f44f06a9 stp      x20, x19, [sp, #0x60]
000F1164 fdc30091 add      x29, sp, #0x30
000F1168 083040f9 ldr      x8, [x0, #0x60]
000F116C f30300aa mov      x19, x0
000F1170 143140f9 ldr      x20, [x8, #0x60]
000F1174 880240f9 ldr      x8, [x20]
000F1178 e00314aa mov      x0, x20
000F117C 080140f9 ldr      x8, [x8]
000F1180 00013fd6 blr      x8
000F1184 f50300aa mov      x21, x0
000F1188 f5d3fc97 bl       #0x2615c
000F118C 1f0015eb cmp      x0, x21
000F1190 a0000054 b.eq     #0xf11a4
000F1194 b50240f9 ldr      x21, [x21]
000F1198 bf0200eb cmp      x21, x0
000F119C a41a40fa ccmp     x21, #0, #4, ne
000F11A0 a1ffff54 b.ne     #0xf1194
000F11A4 803640f9 ldr      x0, [x20, #0x68]
000F11A8 e8630091 add      x8, sp, #0x18
000F11AC e1031f2a mov      w1, wzr
000F11B0 4891fc97 bl       #0x156d0
000F11B4 e00f40f9 ldr      x0, [sp, #0x18]
000F11B8 143040f9 ldr      x20, [x0, #0x60]
000F11BC f40000b4 cbz      x20, #0xf11d8
000F11C0 e00314aa mov      x0, x20
000F11C4 088c44f8 ldr      x8, [x0, #0x48]!
000F11C8 080940f9 ldr      x8, [x8, #0x10]
000F11CC 00013fd6 blr      x8
000F11D0 e00f40f9 ldr      x0, [sp, #0x18]
000F11D4 800000b4 cbz      x0, #0xf11e4
000F11D8 088c44f8 ldr      x8, [x0, #0x48]!
000F11DC 080d40f9 ldr      x8, [x8, #0x18]
000F11E0 00013fd6 blr      x8
000F11E4 604640f9 ldr      x0, [x19, #0x88]
000F11E8 28208052 mov      w8, #0x101
000F11EC 0820a072 movk     w8, #0x100, lsl #16
000F11F0 e82b00b9 str      w8, [sp, #0x28]
000F11F4 28008052 mov      w8, #1
000F11F8 e8b30039 strb     w8, [sp, #0x2c]
000F11FC ffff01a9 stp      xzr, xzr, [sp, #0x18]
000F1200 a00f00f9 str      x0, [x29, #0x18]
000F1204 800000b4 cbz      x0, #0xf1214
000F1208 088c44f8 ldr      x8, [x0, #0x48]!
000F120C 080940f9 ldr      x8, [x8, #0x10]
000F1210 00013fd6 blr      x8
000F1214 f40b00f9 str      x20, [sp, #0x10]
000F1218 b40000b4 cbz      x20, #0xf122c
000F121C e00314aa mov      x0, x20
000F1220 088c44f8 ldr      x8, [x0, #0x48]!
000F1224 080940f9 ldr      x8, [x8, #0x10]
000F1228 00013fd6 blr      x8
000F122C 286984d2 mov      x8, #0x2349
000F1230 c8c1a7f2 movk     x8, #0x3e0e, lsl #16
000F1234 a0630091 add      x0, x29, #0x18
000F1238 68e6d4f2 movk     x8, #0xa733, lsl #32
000F123C 485ff0f2 movk     x8, #0x82fa, lsl #48
000F1240 e80700f9 str      x8, [sp, #8]
000F1244 e1430091 add      x1, sp, #0x10
000F1248 e2230091 add      x2, sp, #8
000F124C 1eeffe97 bl       #0xacec4
000F1250 e00b40f9 ldr      x0, [sp, #0x10]
000F1254 a00000b4 cbz      x0, #0xf1268
000F1258 088c44f8 ldr      x8, [x0, #0x48]!
000F125C 080d40f9 ldr      x8, [x8, #0x18]
000F1260 00013fd6 blr      x8
000F1264 ff0b00f9 str      xzr, [sp, #0x10]
000F1268 a00f40f9 ldr      x0, [x29, #0x18]
000F126C a00000b4 cbz      x0, #0xf1280
000F1270 088c44f8 ldr      x8, [x0, #0x48]!
000F1274 080d40f9 ldr      x8, [x8, #0x18]
000F1278 00013fd6 blr      x8
000F127C bf0f00f9 str      xzr, [x29, #0x18]
000F1280 684640f9 ldr      x8, [x19, #0x88]
000F1284 37008052 mov      w23, #1
000F1288 f72300b9 str      w23, [sp, #0x20]
000F128C e80f00f9 str      x8, [sp, #0x18]
000F1290 683640f9 ldr      x8, [x19, #0x68]
000F1294 153140f9 ldr      x21, [x8, #0x60]
000F1298 a80240f9 ldr      x8, [x21]
000F129C e00315aa mov      x0, x21
000F12A0 080140f9 ldr      x8, [x8]
000F12A4 00013fd6 blr      x8
000F12A8 f60300aa mov      x22, x0
000F12AC fd70fe97 bl       #0x8d6a0
000F12B0 1f0016eb cmp      x0, x22
000F12B4 e0000054 b.eq     #0xf12d0
000F12B8 1f2003d5 nop      
000F12BC 1f2003d5 nop      
000F12C0 d60240f9 ldr      x22, [x22]
000F12C4 df0200eb cmp      x22, x0
000F12C8 c41a40fa ccmp     x22, #0, #4, ne
000F12CC a1ffff54 b.ne     #0xf12c0
000F12D0 a8f24239 ldrb     w8, [x21, #0xbc]
000F12D4 bff20239 strb     wzr, [x21, #0xbc]
000F12D8 e1630091 add      x1, sp, #0x18
000F12DC 606640f9 ldr      x0, [x19, #0xc8]
000F12E0 f7a30039 strb     w23, [sp, #0x28]
000F12E4 08010052 eor      w8, w8, #1
000F12E8 e8a70039 strb     w8, [sp, #0x29]
000F12EC ad02fd97 bl       #0x31da0
000F12F0 b40000b4 cbz      x20, #0xf1304
000F12F4 888e44f8 ldr      x8, [x20, #0x48]!
000F12F8 e00314aa mov      x0, x20
000F12FC 080d40f9 ldr      x8, [x8, #0x18]
000F1300 00013fd6 blr      x8
000F1304 f44f46a9 ldp      x20, x19, [sp, #0x60]
000F1308 f72340f9 ldr      x23, [sp, #0x40]
000F130C f65745a9 ldp      x22, x21, [sp, #0x50]
000F1310 fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F1314 ffc30191 add      sp, sp, #0x70
000F1318 c0035fd6 ret      
~~~
### 0xf1320 (28 slots)
~~~asm
000F1320 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000F1324 f50b00f9 str      x21, [sp, #0x10]
000F1328 f44f02a9 stp      x20, x19, [sp, #0x20]
000F132C fd030091 mov      x29, sp
000F1330 083440f9 ldr      x8, [x0, #0x68]
000F1334 f40300aa mov      x20, x0
000F1338 133140f9 ldr      x19, [x8, #0x60]
000F133C 680240f9 ldr      x8, [x19]
000F1340 e00313aa mov      x0, x19
000F1344 080140f9 ldr      x8, [x8]
000F1348 00013fd6 blr      x8
000F134C f50300aa mov      x21, x0
000F1350 d470fe97 bl       #0x8d6a0
000F1354 1f0015eb cmp      x0, x21
000F1358 c0000054 b.eq     #0xf1370
000F135C 1f2003d5 nop      
000F1360 b50240f9 ldr      x21, [x21]
000F1364 bf0200eb cmp      x21, x0
000F1368 a41a40fa ccmp     x21, #0, #4, ne
000F136C a1ffff54 b.ne     #0xf1360
000F1370 686e40b9 ldr      w8, [x19, #0x6c]
000F1374 88e600b9 str      w8, [x20, #0xe4]
000F1378 c8008052 mov      w8, #6
000F137C f50b40f9 ldr      x21, [sp, #0x10]
000F1380 688200b9 str      w8, [x19, #0x80]
000F1384 f44f42a9 ldp      x20, x19, [sp, #0x20]
000F1388 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F138C c0035fd6 ret      
~~~
### 0xf1390 (117 slots)
~~~asm
000F1390 ff8301d1 sub      sp, sp, #0x60
000F1394 fd7b03a9 stp      x29, x30, [sp, #0x30]
000F1398 f65704a9 stp      x22, x21, [sp, #0x40]
000F139C f44f05a9 stp      x20, x19, [sp, #0x50]
000F13A0 fdc30091 add      x29, sp, #0x30
000F13A4 083040f9 ldr      x8, [x0, #0x60]
000F13A8 f30300aa mov      x19, x0
000F13AC 143140f9 ldr      x20, [x8, #0x60]
000F13B0 880240f9 ldr      x8, [x20]
000F13B4 e00314aa mov      x0, x20
000F13B8 080140f9 ldr      x8, [x8]
000F13BC 00013fd6 blr      x8
000F13C0 f50300aa mov      x21, x0
000F13C4 66d3fc97 bl       #0x2615c
000F13C8 1f0015eb cmp      x0, x21
000F13CC a0000054 b.eq     #0xf13e0
000F13D0 b50240f9 ldr      x21, [x21]
000F13D4 bf0200eb cmp      x21, x0
000F13D8 a41a40fa ccmp     x21, #0, #4, ne
000F13DC a1ffff54 b.ne     #0xf13d0
000F13E0 803640f9 ldr      x0, [x20, #0x68]
000F13E4 e8630091 add      x8, sp, #0x18
000F13E8 e1031f2a mov      w1, wzr
000F13EC b990fc97 bl       #0x156d0
000F13F0 e00f40f9 ldr      x0, [sp, #0x18]
000F13F4 143040f9 ldr      x20, [x0, #0x60]
000F13F8 f40000b4 cbz      x20, #0xf1414
000F13FC e00314aa mov      x0, x20
000F1400 088c44f8 ldr      x8, [x0, #0x48]!
000F1404 080940f9 ldr      x8, [x8, #0x10]
000F1408 00013fd6 blr      x8
000F140C e00f40f9 ldr      x0, [sp, #0x18]
000F1410 800000b4 cbz      x0, #0xf1420
000F1414 088c44f8 ldr      x8, [x0, #0x48]!
000F1418 080d40f9 ldr      x8, [x8, #0x18]
000F141C 00013fd6 blr      x8
000F1420 604640f9 ldr      x0, [x19, #0x88]
000F1424 28208052 mov      w8, #0x101
000F1428 0820a072 movk     w8, #0x100, lsl #16
000F142C e82b00b9 str      w8, [sp, #0x28]
000F1430 28008052 mov      w8, #1
000F1434 e8b30039 strb     w8, [sp, #0x2c]
000F1438 ffff01a9 stp      xzr, xzr, [sp, #0x18]
000F143C e00b00f9 str      x0, [sp, #0x10]
000F1440 800000b4 cbz      x0, #0xf1450
000F1444 088c44f8 ldr      x8, [x0, #0x48]!
000F1448 080940f9 ldr      x8, [x8, #0x10]
000F144C 00013fd6 blr      x8
000F1450 f40700f9 str      x20, [sp, #8]
000F1454 b40000b4 cbz      x20, #0xf1468
000F1458 e00314aa mov      x0, x20
000F145C 088c44f8 ldr      x8, [x0, #0x48]!
000F1460 080940f9 ldr      x8, [x8, #0x10]
000F1464 00013fd6 blr      x8
000F1468 08c786d2 mov      x8, #0x3638
000F146C 48adabf2 movk     x8, #0x5d6a, lsl #16
000F1470 e0430091 add      x0, sp, #0x10
000F1474 889fc6f2 movk     x8, #0x34fc, lsl #32
000F1478 0892f0f2 movk     x8, #0x8490, lsl #48
000F147C e80300f9 str      x8, [sp]
000F1480 e1230091 add      x1, sp, #8
000F1484 e2030091 mov      x2, sp
000F1488 8feefe97 bl       #0xacec4
000F148C e00740f9 ldr      x0, [sp, #8]
000F1490 a00000b4 cbz      x0, #0xf14a4
000F1494 088c44f8 ldr      x8, [x0, #0x48]!
000F1498 080d40f9 ldr      x8, [x8, #0x18]
000F149C 00013fd6 blr      x8
000F14A0 ff0700f9 str      xzr, [sp, #8]
000F14A4 e00b40f9 ldr      x0, [sp, #0x10]
000F14A8 a00000b4 cbz      x0, #0xf14bc
000F14AC 088c44f8 ldr      x8, [x0, #0x48]!
000F14B0 080d40f9 ldr      x8, [x8, #0x18]
000F14B4 00013fd6 blr      x8
000F14B8 ff0b00f9 str      xzr, [sp, #0x10]
000F14BC 684640f9 ldr      x8, [x19, #0x88]
000F14C0 e80f00f9 str      x8, [sp, #0x18]
000F14C4 683640f9 ldr      x8, [x19, #0x68]
000F14C8 153140f9 ldr      x21, [x8, #0x60]
000F14CC a80240f9 ldr      x8, [x21]
000F14D0 e00315aa mov      x0, x21
000F14D4 080140f9 ldr      x8, [x8]
000F14D8 00013fd6 blr      x8
000F14DC f60300aa mov      x22, x0
000F14E0 7070fe97 bl       #0x8d6a0
000F14E4 1f0016eb cmp      x0, x22
000F14E8 c0000054 b.eq     #0xf1500
000F14EC 1f2003d5 nop      
000F14F0 d60240f9 ldr      x22, [x22]
000F14F4 df0200eb cmp      x22, x0
000F14F8 c41a40fa ccmp     x22, #0, #4, ne
000F14FC a1ffff54 b.ne     #0xf14f0
000F1500 a8f24239 ldrb     w8, [x21, #0xbc]
000F1504 e1630091 add      x1, sp, #0x18
000F1508 ffa30039 strb     wzr, [sp, #0x28]
000F150C 08010052 eor      w8, w8, #1
000F1510 e8a70039 strb     w8, [sp, #0x29]
000F1514 28008052 mov      w8, #1
000F1518 a8f20239 strb     w8, [x21, #0xbc]
000F151C 606640f9 ldr      x0, [x19, #0xc8]
000F1520 2002fd97 bl       #0x31da0
000F1524 686640f9 ldr      x8, [x19, #0xc8]
000F1528 21008052 mov      w1, #1
000F152C 002143f9 ldr      x0, [x8, #0x640]
000F1530 080c46f8 ldr      x8, [x0, #0x60]!
000F1534 080540f9 ldr      x8, [x8, #8]
000F1538 00013fd6 blr      x8
000F153C b40000b4 cbz      x20, #0xf1550
000F1540 888e44f8 ldr      x8, [x20, #0x48]!
000F1544 e00314aa mov      x0, x20
000F1548 080d40f9 ldr      x8, [x8, #0x18]
000F154C 00013fd6 blr      x8
000F1550 f44f45a9 ldp      x20, x19, [sp, #0x50]
000F1554 f65744a9 ldp      x22, x21, [sp, #0x40]
000F1558 fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F155C ff830191 add      sp, sp, #0x60
000F1560 c0035fd6 ret      
~~~
### 0xf1570 (28 slots)
~~~asm
000F1570 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000F1574 f50b00f9 str      x21, [sp, #0x10]
000F1578 f44f02a9 stp      x20, x19, [sp, #0x20]
000F157C fd030091 mov      x29, sp
000F1580 083440f9 ldr      x8, [x0, #0x68]
000F1584 f40300aa mov      x20, x0
000F1588 133140f9 ldr      x19, [x8, #0x60]
000F158C 680240f9 ldr      x8, [x19]
000F1590 e00313aa mov      x0, x19
000F1594 080140f9 ldr      x8, [x8]
000F1598 00013fd6 blr      x8
000F159C f50300aa mov      x21, x0
000F15A0 4070fe97 bl       #0x8d6a0
000F15A4 1f0015eb cmp      x0, x21
000F15A8 c0000054 b.eq     #0xf15c0
000F15AC 1f2003d5 nop      
000F15B0 b50240f9 ldr      x21, [x21]
000F15B4 bf0200eb cmp      x21, x0
000F15B8 a41a40fa ccmp     x21, #0, #4, ne
000F15BC a1ffff54 b.ne     #0xf15b0
000F15C0 68028052 mov      w8, #0x13
000F15C4 f50b40f9 ldr      x21, [sp, #0x10]
000F15C8 88e600b9 str      w8, [x20, #0xe4]
000F15CC c8018052 mov      w8, #0xe
000F15D0 68ba00b9 str      w8, [x19, #0xb8]
000F15D4 f44f42a9 ldp      x20, x19, [sp, #0x20]
000F15D8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F15DC c0035fd6 ret      
~~~
### 0xf15e0 (230 slots)
~~~asm
000F15E0 ff0304d1 sub      sp, sp, #0x100
000F15E4 fd7b0da9 stp      x29, x30, [sp, #0xd0]
000F15E8 f6570ea9 stp      x22, x21, [sp, #0xe0]
000F15EC f44f0fa9 stp      x20, x19, [sp, #0xf0]
000F15F0 fd430391 add      x29, sp, #0xd0
000F15F4 083040f9 ldr      x8, [x0, #0x60]
000F15F8 f40300aa mov      x20, x0
000F15FC 133140f9 ldr      x19, [x8, #0x60]
000F1600 680240f9 ldr      x8, [x19]
000F1604 e00313aa mov      x0, x19
000F1608 080140f9 ldr      x8, [x8]
000F160C 00013fd6 blr      x8
000F1610 f50300aa mov      x21, x0
000F1614 d2d2fc97 bl       #0x2615c
000F1618 1f0015eb cmp      x0, x21
000F161C a0000054 b.eq     #0xf1630
000F1620 b50240f9 ldr      x21, [x21]
000F1624 bf0200eb cmp      x21, x0
000F1628 a41a40fa ccmp     x21, #0, #4, ne
000F162C a1ffff54 b.ne     #0xf1620
000F1630 603640f9 ldr      x0, [x19, #0x68]
000F1634 e8430191 add      x8, sp, #0x50
000F1638 21008052 mov      w1, #1
000F163C 2590fc97 bl       #0x156d0
000F1640 e02b40f9 ldr      x0, [sp, #0x50]
000F1644 133040f9 ldr      x19, [x0, #0x60]
000F1648 f30000b4 cbz      x19, #0xf1664
000F164C e00313aa mov      x0, x19
000F1650 088c44f8 ldr      x8, [x0, #0x48]!
000F1654 080940f9 ldr      x8, [x8, #0x10]
000F1658 00013fd6 blr      x8
000F165C e02b40f9 ldr      x0, [sp, #0x50]
000F1660 800000b4 cbz      x0, #0xf1670
000F1664 088c44f8 ldr      x8, [x0, #0x48]!
000F1668 080d40f9 ldr      x8, [x8, #0x18]
000F166C 00013fd6 blr      x8
000F1670 883640f9 ldr      x8, [x20, #0x68]
000F1674 880200b4 cbz      x8, #0xf16c4
000F1678 153140f9 ldr      x21, [x8, #0x60]
000F167C f50900b4 cbz      x21, #0xf17b8
000F1680 a80240f9 ldr      x8, [x21]
000F1684 e00315aa mov      x0, x21
000F1688 080140f9 ldr      x8, [x8]
000F168C 00013fd6 blr      x8
000F1690 f60300aa mov      x22, x0
000F1694 0370fe97 bl       #0x8d6a0
000F1698 1f0016eb cmp      x0, x22
000F169C c0000054 b.eq     #0xf16b4
000F16A0 d60240f9 ldr      x22, [x22]
000F16A4 df0200eb cmp      x22, x0
000F16A8 c41a40fa ccmp     x22, #0, #4, ne
000F16AC a1ffff54 b.ne     #0xf16a0
000F16B0 d60000b4 cbz      x22, #0xf16c8
000F16B4 b64201d1 sub      x22, x21, #0x50
000F16B8 887242b9 ldr      w8, [x20, #0x270]
000F16BC a8000035 cbnz     w8, #0xf16d0
000F16C0 41000014 b        #0xf17c4
000F16C4 f6031faa mov      x22, xzr
000F16C8 887242b9 ldr      w8, [x20, #0x270]
000F16CC c8070034 cbz      w8, #0xf17c4
000F16D0 887642b9 ldr      w8, [x20, #0x274]
000F16D4 c9038052 mov      w9, #0x1e
000F16D8 1f790071 cmp      w8, #0x1e
000F16DC 28a5881a csinc    w8, w9, w8, ge
000F16E0 887602b9 str      w8, [x20, #0x274]
000F16E4 b7c20494 bl       #0x2221c0
000F16E8 35008052 mov      w21, #1
000F16EC 80120036 tbz      w0, #0, #0xf193c
000F16F0 887642b9 ldr      w8, [x20, #0x274]
000F16F4 1f790071 cmp      w8, #0x1e
000F16F8 2b120054 b.lt     #0xf193c
000F16FC 683500d0 adrp     x8, #0x79f000
000F1700 603500f0 adrp     x0, #0x7a0000
000F1704 08cd42f9 ldr      x8, [x8, #0x598]
000F1708 140140f9 ldr      x20, [x8]
000F170C 00fc42f9 ldr      x0, [x0, #0x5f8]
000F1710 e8230091 add      x8, sp, #8
000F1714 dade0f94 bl       #0x4e927c
000F1718 e00314aa mov      x0, x20
000F171C 3ef50794 bl       #0x2eec14
000F1720 f50300aa mov      x21, x0
000F1724 e1230091 add      x1, sp, #8
000F1728 e00314aa mov      x0, x20
000F172C e20315aa mov      x2, x21
000F1730 ff7f0ca9 stp      xzr, xzr, [sp, #0xc0]
000F1734 e3031f2a mov      w3, wzr
000F1738 ff7f0ba9 stp      xzr, xzr, [sp, #0xb0]
000F173C ff7f0aa9 stp      xzr, xzr, [sp, #0xa0]
000F1740 ff7f09a9 stp      xzr, xzr, [sp, #0x90]
000F1744 ff7f08a9 stp      xzr, xzr, [sp, #0x80]
000F1748 ff7f07a9 stp      xzr, xzr, [sp, #0x70]
000F174C ff7f06a9 stp      xzr, xzr, [sp, #0x60]
000F1750 ff7f05a9 stp      xzr, xzr, [sp, #0x50]
000F1754 83f70794 bl       #0x2ef560
000F1758 00020034 cbz      w0, #0xf1798
000F175C e203002a mov      w2, w0
000F1760 800a41f9 ldr      x0, [x20, #0x210]
000F1764 e1230091 add      x1, sp, #8
000F1768 e5430191 add      x5, sp, #0x50
000F176C e30315aa mov      x3, x21
000F1770 e4031f2a mov      w4, wzr
000F1774 e6031faa mov      x6, xzr
000F1778 f4430191 add      x20, sp, #0x50
000F177C 90b3fd97 bl       #0x5e5bc
000F1780 e82f40f9 ldr      x8, [sp, #0x58]
000F1784 a80000b4 cbz      x8, #0xf1798
000F1788 80820091 add      x0, x20, #0x20
000F178C ff7f06a9 stp      xzr, xzr, [sp, #0x60]
000F1790 ff7f05a9 stp      xzr, xzr, [sp, #0x50]
000F1794 00013fd6 blr      x8
000F1798 e01340f9 ldr      x0, [sp, #0x20]
000F179C 800000b4 cbz      x0, #0xf17ac
000F17A0 088c44f8 ldr      x8, [x0, #0x48]!
000F17A4 080d40f9 ldr      x8, [x8, #0x18]
000F17A8 00013fd6 blr      x8
000F17AC f5031f2a mov      w21, wzr
000F17B0 930c00b5 cbnz     x19, #0xf1940
000F17B4 67000014 b        #0xf1950
000F17B8 f6031faa mov      x22, xzr
000F17BC 887242b9 ldr      w8, [x20, #0x270]
000F17C0 88f8ff35 cbnz     w8, #0xf16d0
000F17C4 806640f9 ldr      x0, [x20, #0xc8]
000F17C8 5b02fd97 bl       #0x32134
000F17CC e00c0036 tbz      w0, #0, #0xf1968
000F17D0 c03a41f9 ldr      x0, [x22, #0x270]
000F17D4 e02700f9 str      x0, [sp, #0x48]
000F17D8 800000b4 cbz      x0, #0xf17e8
000F17DC 088c44f8 ldr      x8, [x0, #0x48]!
000F17E0 080940f9 ldr      x8, [x8, #0x10]
000F17E4 00013fd6 blr      x8
000F17E8 c03e41f9 ldr      x0, [x22, #0x278]
000F17EC e02300f9 str      x0, [sp, #0x40]
000F17F0 800000b4 cbz      x0, #0xf1800
000F17F4 088c44f8 ldr      x8, [x0, #0x48]!
000F17F8 080940f9 ldr      x8, [x8, #0x10]
000F17FC 00013fd6 blr      x8
000F1800 c04241f9 ldr      x0, [x22, #0x280]
000F1804 e01f00f9 str      x0, [sp, #0x38]
000F1808 800000b4 cbz      x0, #0xf1818
000F180C 088c44f8 ldr      x8, [x0, #0x48]!
000F1810 080940f9 ldr      x8, [x8, #0x10]
000F1814 00013fd6 blr      x8
000F1818 f31b00f9 str      x19, [sp, #0x30]
000F181C b30000b4 cbz      x19, #0xf1830
000F1820 e00313aa mov      x0, x19
000F1824 088c44f8 ldr      x8, [x0, #0x48]!
000F1828 080940f9 ldr      x8, [x8, #0x10]
000F182C 00013fd6 blr      x8
000F1830 c43a40f9 ldr      x4, [x22, #0x70]
000F1834 e0230191 add      x0, sp, #0x48
000F1838 e1030191 add      x1, sp, #0x40
000F183C e2e30091 add      x2, sp, #0x38
000F1840 e3c30091 add      x3, sp, #0x30
000F1844 7b8eff97 bl       #0xd5230
000F1848 f503002a mov      w21, w0
000F184C e01b40f9 ldr      x0, [sp, #0x30]
000F1850 a00000b4 cbz      x0, #0xf1864
000F1854 088c44f8 ldr      x8, [x0, #0x48]!
000F1858 080d40f9 ldr      x8, [x8, #0x18]
000F185C 00013fd6 blr      x8
000F1860 ff1b00f9 str      xzr, [sp, #0x30]
000F1864 e01f40f9 ldr      x0, [sp, #0x38]
000F1868 a00000b4 cbz      x0, #0xf187c
000F186C 088c44f8 ldr      x8, [x0, #0x48]!
000F1870 080d40f9 ldr      x8, [x8, #0x18]
000F1874 00013fd6 blr      x8
000F1878 ff1f00f9 str      xzr, [sp, #0x38]
000F187C e02340f9 ldr      x0, [sp, #0x40]
000F1880 a00000b4 cbz      x0, #0xf1894
000F1884 088c44f8 ldr      x8, [x0, #0x48]!
000F1888 080d40f9 ldr      x8, [x8, #0x18]
000F188C 00013fd6 blr      x8
000F1890 ff2300f9 str      xzr, [sp, #0x40]
000F1894 e02740f9 ldr      x0, [sp, #0x48]
000F1898 a00000b4 cbz      x0, #0xf18ac
000F189C 088c44f8 ldr      x8, [x0, #0x48]!
000F18A0 080d40f9 ldr      x8, [x8, #0x18]
000F18A4 00013fd6 blr      x8
000F18A8 ff2700f9 str      xzr, [sp, #0x48]
000F18AC a8020012 and      w8, w21, #1
000F18B0 c8e60539 strb     w8, [x22, #0x179]
000F18B4 e8430191 add      x8, sp, #0x50
000F18B8 06bb0494 bl       #0x2204d0
000F18BC f52b40f9 ldr      x21, [sp, #0x50]
000F18C0 b50500b4 cbz      x21, #0xf1974
000F18C4 c8ca41f9 ldr      x8, [x22, #0x390]
000F18C8 680500b4 cbz      x8, #0xf1974
000F18CC 00ad40f9 ldr      x0, [x8, #0x158]
000F18D0 200500b4 cbz      x0, #0xf1974
000F18D4 e01700f9 str      x0, [sp, #0x28]
000F18D8 088c44f8 ldr      x8, [x0, #0x48]!
000F18DC 080940f9 ldr      x8, [x8, #0x10]
000F18E0 00013fd6 blr      x8
000F18E4 c03a40f9 ldr      x0, [x22, #0x70]
000F18E8 600400b4 cbz      x0, #0xf1974
000F18EC b786fe97 bl       #0x933c8
000F18F0 e203002a mov      w2, w0
000F18F4 e1a30091 add      x1, sp, #0x28
000F18F8 e00315aa mov      x0, x21
000F18FC 8d460494 bl       #0x203330
000F1900 e01740f9 ldr      x0, [sp, #0x28]
000F1904 a00000b4 cbz      x0, #0xf1918
000F1908 088c44f8 ldr      x8, [x0, #0x48]!
000F190C 080d40f9 ldr      x8, [x8, #0x18]
000F1910 00013fd6 blr      x8
000F1914 ff1700f9 str      xzr, [sp, #0x28]
000F1918 2ac10494 bl       #0x221dc0
000F191C e02b40f9 ldr      x0, [sp, #0x50]
000F1920 28008052 mov      w8, #1
000F1924 887202b9 str      w8, [x20, #0x270]
000F1928 800000b4 cbz      x0, #0xf1938
000F192C 088c44f8 ldr      x8, [x0, #0x48]!
000F1930 080d40f9 ldr      x8, [x8, #0x18]
000F1934 00013fd6 blr      x8
000F1938 35008052 mov      w21, #1
000F193C b30000b4 cbz      x19, #0xf1950
000F1940 688e44f8 ldr      x8, [x19, #0x48]!
000F1944 e00313aa mov      x0, x19
000F1948 080d40f9 ldr      x8, [x8, #0x18]
000F194C 00013fd6 blr      x8
000F1950 e003152a mov      w0, w21
000F1954 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
000F1958 f6574ea9 ldp      x22, x21, [sp, #0xe0]
000F195C fd7b4da9 ldp      x29, x30, [sp, #0xd0]
000F1960 ff030491 add      sp, sp, #0x100
000F1964 c0035fd6 ret      
000F1968 35008052 mov      w21, #1
000F196C b3feffb5 cbnz     x19, #0xf1940
000F1970 f8ffff17 b        #0xf1950
000F1974 73121494 bl       #0x5f6340
~~~
### 0xf1980 (121 slots)
~~~asm
000F1980 ffc301d1 sub      sp, sp, #0x70
000F1984 fd7b03a9 stp      x29, x30, [sp, #0x30]
000F1988 f72300f9 str      x23, [sp, #0x40]
000F198C f65705a9 stp      x22, x21, [sp, #0x50]
000F1990 f44f06a9 stp      x20, x19, [sp, #0x60]
000F1994 fdc30091 add      x29, sp, #0x30
000F1998 083040f9 ldr      x8, [x0, #0x60]
000F199C f30300aa mov      x19, x0
000F19A0 143140f9 ldr      x20, [x8, #0x60]
000F19A4 880240f9 ldr      x8, [x20]
000F19A8 e00314aa mov      x0, x20
000F19AC 080140f9 ldr      x8, [x8]
000F19B0 00013fd6 blr      x8
000F19B4 f50300aa mov      x21, x0
000F19B8 e9d1fc97 bl       #0x2615c
000F19BC 1f0015eb cmp      x0, x21
000F19C0 a0000054 b.eq     #0xf19d4
000F19C4 b50240f9 ldr      x21, [x21]
000F19C8 bf0200eb cmp      x21, x0
000F19CC a41a40fa ccmp     x21, #0, #4, ne
000F19D0 a1ffff54 b.ne     #0xf19c4
000F19D4 803640f9 ldr      x0, [x20, #0x68]
000F19D8 e8630091 add      x8, sp, #0x18
000F19DC e1031f2a mov      w1, wzr
000F19E0 3c8ffc97 bl       #0x156d0
000F19E4 e00f40f9 ldr      x0, [sp, #0x18]
000F19E8 143040f9 ldr      x20, [x0, #0x60]
000F19EC f40000b4 cbz      x20, #0xf1a08
000F19F0 e00314aa mov      x0, x20
000F19F4 088c44f8 ldr      x8, [x0, #0x48]!
000F19F8 080940f9 ldr      x8, [x8, #0x10]
000F19FC 00013fd6 blr      x8
000F1A00 e00f40f9 ldr      x0, [sp, #0x18]
000F1A04 800000b4 cbz      x0, #0xf1a14
000F1A08 088c44f8 ldr      x8, [x0, #0x48]!
000F1A0C 080d40f9 ldr      x8, [x8, #0x18]
000F1A10 00013fd6 blr      x8
000F1A14 604640f9 ldr      x0, [x19, #0x88]
000F1A18 28208052 mov      w8, #0x101
000F1A1C 0820a072 movk     w8, #0x100, lsl #16
000F1A20 e82b00b9 str      w8, [sp, #0x28]
000F1A24 28008052 mov      w8, #1
000F1A28 e8b30039 strb     w8, [sp, #0x2c]
000F1A2C ffff01a9 stp      xzr, xzr, [sp, #0x18]
000F1A30 a00f00f9 str      x0, [x29, #0x18]
000F1A34 800000b4 cbz      x0, #0xf1a44
000F1A38 088c44f8 ldr      x8, [x0, #0x48]!
000F1A3C 080940f9 ldr      x8, [x8, #0x10]
000F1A40 00013fd6 blr      x8
000F1A44 f40b00f9 str      x20, [sp, #0x10]
000F1A48 b40000b4 cbz      x20, #0xf1a5c
000F1A4C e00314aa mov      x0, x20
000F1A50 088c44f8 ldr      x8, [x0, #0x48]!
000F1A54 080940f9 ldr      x8, [x8, #0x10]
000F1A58 00013fd6 blr      x8
000F1A5C 28f889d2 mov      x8, #0x4fc1
000F1A60 a8adabf2 movk     x8, #0x5d6d, lsl #16
000F1A64 a0630091 add      x0, x29, #0x18
000F1A68 885fd7f2 movk     x8, #0xbafc, lsl #32
000F1A6C 6892f0f2 movk     x8, #0x8493, lsl #48
000F1A70 e80700f9 str      x8, [sp, #8]
000F1A74 e1430091 add      x1, sp, #0x10
000F1A78 e2230091 add      x2, sp, #8
000F1A7C 12edfe97 bl       #0xacec4
000F1A80 e00b40f9 ldr      x0, [sp, #0x10]
000F1A84 a00000b4 cbz      x0, #0xf1a98
000F1A88 088c44f8 ldr      x8, [x0, #0x48]!
000F1A8C 080d40f9 ldr      x8, [x8, #0x18]
000F1A90 00013fd6 blr      x8
000F1A94 ff0b00f9 str      xzr, [sp, #0x10]
000F1A98 a00f40f9 ldr      x0, [x29, #0x18]
000F1A9C a00000b4 cbz      x0, #0xf1ab0
000F1AA0 088c44f8 ldr      x8, [x0, #0x48]!
000F1AA4 080d40f9 ldr      x8, [x8, #0x18]
000F1AA8 00013fd6 blr      x8
000F1AAC bf0f00f9 str      xzr, [x29, #0x18]
000F1AB0 684640f9 ldr      x8, [x19, #0x88]
000F1AB4 37008052 mov      w23, #1
000F1AB8 f72300b9 str      w23, [sp, #0x20]
000F1ABC e80f00f9 str      x8, [sp, #0x18]
000F1AC0 683640f9 ldr      x8, [x19, #0x68]
000F1AC4 153140f9 ldr      x21, [x8, #0x60]
000F1AC8 a80240f9 ldr      x8, [x21]
000F1ACC e00315aa mov      x0, x21
000F1AD0 080140f9 ldr      x8, [x8]
000F1AD4 00013fd6 blr      x8
000F1AD8 f60300aa mov      x22, x0
000F1ADC f16efe97 bl       #0x8d6a0
000F1AE0 1f0016eb cmp      x0, x22
000F1AE4 e0000054 b.eq     #0xf1b00
000F1AE8 1f2003d5 nop      
000F1AEC 1f2003d5 nop      
000F1AF0 d60240f9 ldr      x22, [x22]
000F1AF4 df0200eb cmp      x22, x0
000F1AF8 c41a40fa ccmp     x22, #0, #4, ne
000F1AFC a1ffff54 b.ne     #0xf1af0
000F1B00 a8f24239 ldrb     w8, [x21, #0xbc]
000F1B04 b7f20239 strb     w23, [x21, #0xbc]
000F1B08 e1630091 add      x1, sp, #0x18
000F1B0C 606640f9 ldr      x0, [x19, #0xc8]
000F1B10 ffa30039 strb     wzr, [sp, #0x28]
000F1B14 08010052 eor      w8, w8, #1
000F1B18 e8a70039 strb     w8, [sp, #0x29]
000F1B1C a100fd97 bl       #0x31da0
000F1B20 686640f9 ldr      x8, [x19, #0xc8]
000F1B24 e1031f2a mov      w1, wzr
000F1B28 002143f9 ldr      x0, [x8, #0x640]
000F1B2C 080c46f8 ldr      x8, [x0, #0x60]!
000F1B30 080540f9 ldr      x8, [x8, #8]
000F1B34 00013fd6 blr      x8
000F1B38 b40000b4 cbz      x20, #0xf1b4c
000F1B3C 888e44f8 ldr      x8, [x20, #0x48]!
000F1B40 e00314aa mov      x0, x20
000F1B44 080d40f9 ldr      x8, [x8, #0x18]
000F1B48 00013fd6 blr      x8
000F1B4C f44f46a9 ldp      x20, x19, [sp, #0x60]
000F1B50 f72340f9 ldr      x23, [sp, #0x40]
000F1B54 f65745a9 ldp      x22, x21, [sp, #0x50]
000F1B58 fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F1B5C ffc30191 add      sp, sp, #0x70
000F1B60 c0035fd6 ret      
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
### 0xf1c30 (117 slots)
~~~asm
000F1C30 ff8301d1 sub      sp, sp, #0x60
000F1C34 fd7b03a9 stp      x29, x30, [sp, #0x30]
000F1C38 f65704a9 stp      x22, x21, [sp, #0x40]
000F1C3C f44f05a9 stp      x20, x19, [sp, #0x50]
000F1C40 fdc30091 add      x29, sp, #0x30
000F1C44 083040f9 ldr      x8, [x0, #0x60]
000F1C48 f30300aa mov      x19, x0
000F1C4C 143140f9 ldr      x20, [x8, #0x60]
000F1C50 880240f9 ldr      x8, [x20]
000F1C54 e00314aa mov      x0, x20
000F1C58 080140f9 ldr      x8, [x8]
000F1C5C 00013fd6 blr      x8
000F1C60 f50300aa mov      x21, x0
000F1C64 3ed1fc97 bl       #0x2615c
000F1C68 1f0015eb cmp      x0, x21
000F1C6C a0000054 b.eq     #0xf1c80
000F1C70 b50240f9 ldr      x21, [x21]
000F1C74 bf0200eb cmp      x21, x0
000F1C78 a41a40fa ccmp     x21, #0, #4, ne
000F1C7C a1ffff54 b.ne     #0xf1c70
000F1C80 803640f9 ldr      x0, [x20, #0x68]
000F1C84 e8630091 add      x8, sp, #0x18
000F1C88 e1031f2a mov      w1, wzr
000F1C8C 918efc97 bl       #0x156d0
000F1C90 e00f40f9 ldr      x0, [sp, #0x18]
000F1C94 143040f9 ldr      x20, [x0, #0x60]
000F1C98 f40000b4 cbz      x20, #0xf1cb4
000F1C9C e00314aa mov      x0, x20
000F1CA0 088c44f8 ldr      x8, [x0, #0x48]!
000F1CA4 080940f9 ldr      x8, [x8, #0x10]
000F1CA8 00013fd6 blr      x8
000F1CAC e00f40f9 ldr      x0, [sp, #0x18]
000F1CB0 800000b4 cbz      x0, #0xf1cc0
000F1CB4 088c44f8 ldr      x8, [x0, #0x48]!
000F1CB8 080d40f9 ldr      x8, [x8, #0x18]
000F1CBC 00013fd6 blr      x8
000F1CC0 604640f9 ldr      x0, [x19, #0x88]
000F1CC4 28208052 mov      w8, #0x101
000F1CC8 0820a072 movk     w8, #0x100, lsl #16
000F1CCC e82b00b9 str      w8, [sp, #0x28]
000F1CD0 28008052 mov      w8, #1
000F1CD4 e8b30039 strb     w8, [sp, #0x2c]
000F1CD8 ffff01a9 stp      xzr, xzr, [sp, #0x18]
000F1CDC e00b00f9 str      x0, [sp, #0x10]
000F1CE0 800000b4 cbz      x0, #0xf1cf0
000F1CE4 088c44f8 ldr      x8, [x0, #0x48]!
000F1CE8 080940f9 ldr      x8, [x8, #0x10]
000F1CEC 00013fd6 blr      x8
000F1CF0 f40700f9 str      x20, [sp, #8]
000F1CF4 b40000b4 cbz      x20, #0xf1d08
000F1CF8 e00314aa mov      x0, x20
000F1CFC 088c44f8 ldr      x8, [x0, #0x48]!
000F1D00 080940f9 ldr      x8, [x8, #0x10]
000F1D04 00013fd6 blr      x8
000F1D08 888f91d2 mov      x8, #0x8c7c
000F1D0C a8aeabf2 movk     x8, #0x5d75, lsl #16
000F1D10 e0430091 add      x0, sp, #0x10
000F1D14 889fd5f2 movk     x8, #0xacfc, lsl #32
000F1D18 a893f0f2 movk     x8, #0x849d, lsl #48
000F1D1C e80300f9 str      x8, [sp]
000F1D20 e1230091 add      x1, sp, #8
000F1D24 e2030091 mov      x2, sp
000F1D28 67ecfe97 bl       #0xacec4
000F1D2C e00740f9 ldr      x0, [sp, #8]
000F1D30 a00000b4 cbz      x0, #0xf1d44
000F1D34 088c44f8 ldr      x8, [x0, #0x48]!
000F1D38 080d40f9 ldr      x8, [x8, #0x18]
000F1D3C 00013fd6 blr      x8
000F1D40 ff0700f9 str      xzr, [sp, #8]
000F1D44 e00b40f9 ldr      x0, [sp, #0x10]
000F1D48 a00000b4 cbz      x0, #0xf1d5c
000F1D4C 088c44f8 ldr      x8, [x0, #0x48]!
000F1D50 080d40f9 ldr      x8, [x8, #0x18]
000F1D54 00013fd6 blr      x8
000F1D58 ff0b00f9 str      xzr, [sp, #0x10]
000F1D5C 684640f9 ldr      x8, [x19, #0x88]
000F1D60 e80f00f9 str      x8, [sp, #0x18]
000F1D64 683640f9 ldr      x8, [x19, #0x68]
000F1D68 153140f9 ldr      x21, [x8, #0x60]
000F1D6C a80240f9 ldr      x8, [x21]
000F1D70 e00315aa mov      x0, x21
000F1D74 080140f9 ldr      x8, [x8]
000F1D78 00013fd6 blr      x8
000F1D7C f60300aa mov      x22, x0
000F1D80 486efe97 bl       #0x8d6a0
000F1D84 1f0016eb cmp      x0, x22
000F1D88 c0000054 b.eq     #0xf1da0
000F1D8C 1f2003d5 nop      
000F1D90 d60240f9 ldr      x22, [x22]
000F1D94 df0200eb cmp      x22, x0
000F1D98 c41a40fa ccmp     x22, #0, #4, ne
000F1D9C a1ffff54 b.ne     #0xf1d90
000F1DA0 a8f24239 ldrb     w8, [x21, #0xbc]
000F1DA4 e1630091 add      x1, sp, #0x18
000F1DA8 ffa30039 strb     wzr, [sp, #0x28]
000F1DAC 08010052 eor      w8, w8, #1
000F1DB0 e8a70039 strb     w8, [sp, #0x29]
000F1DB4 28008052 mov      w8, #1
000F1DB8 a8f20239 strb     w8, [x21, #0xbc]
000F1DBC 606640f9 ldr      x0, [x19, #0xc8]
000F1DC0 f8fffc97 bl       #0x31da0
000F1DC4 686640f9 ldr      x8, [x19, #0xc8]
000F1DC8 21008052 mov      w1, #1
000F1DCC 002143f9 ldr      x0, [x8, #0x640]
000F1DD0 080c46f8 ldr      x8, [x0, #0x60]!
000F1DD4 080540f9 ldr      x8, [x8, #8]
000F1DD8 00013fd6 blr      x8
000F1DDC b40000b4 cbz      x20, #0xf1df0
000F1DE0 888e44f8 ldr      x8, [x20, #0x48]!
000F1DE4 e00314aa mov      x0, x20
000F1DE8 080d40f9 ldr      x8, [x8, #0x18]
000F1DEC 00013fd6 blr      x8
000F1DF0 f44f45a9 ldp      x20, x19, [sp, #0x50]
000F1DF4 f65744a9 ldp      x22, x21, [sp, #0x40]
000F1DF8 fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F1DFC ff830191 add      sp, sp, #0x60
000F1E00 c0035fd6 ret      
~~~
### 0xf1e10 (27 slots)
~~~asm
000F1E10 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000F1E14 f50b00f9 str      x21, [sp, #0x10]
000F1E18 f44f02a9 stp      x20, x19, [sp, #0x20]
000F1E1C fd030091 mov      x29, sp
000F1E20 083440f9 ldr      x8, [x0, #0x68]
000F1E24 f30300aa mov      x19, x0
000F1E28 143140f9 ldr      x20, [x8, #0x60]
000F1E2C 880240f9 ldr      x8, [x20]
000F1E30 e00314aa mov      x0, x20
000F1E34 080140f9 ldr      x8, [x8]
000F1E38 00013fd6 blr      x8
000F1E3C f50300aa mov      x21, x0
000F1E40 186efe97 bl       #0x8d6a0
000F1E44 1f0015eb cmp      x0, x21
000F1E48 c0000054 b.eq     #0xf1e60
000F1E4C 1f2003d5 nop      
000F1E50 b50240f9 ldr      x21, [x21]
000F1E54 bf0200eb cmp      x21, x0
000F1E58 a41a40fa ccmp     x21, #0, #4, ne
000F1E5C a1ffff54 b.ne     #0xf1e50
000F1E60 887240b9 ldr      w8, [x20, #0x70]
000F1E64 9f5601b9 str      wzr, [x20, #0x154]
000F1E68 68e600b9 str      w8, [x19, #0xe4]
000F1E6C f44f42a9 ldp      x20, x19, [sp, #0x20]
000F1E70 f50b40f9 ldr      x21, [sp, #0x10]
000F1E74 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F1E78 c0035fd6 ret      
~~~
### 0xf1e7c (38 slots)
~~~asm
000F1E7C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000F1E80 f44f01a9 stp      x20, x19, [sp, #0x10]
000F1E84 fd030091 mov      x29, sp
000F1E88 087042b9 ldr      w8, [x0, #0x270]
000F1E8C f30300aa mov      x19, x0
000F1E90 88020034 cbz      w8, #0xf1ee0
000F1E94 687642b9 ldr      w8, [x19, #0x274]
000F1E98 c9038052 mov      w9, #0x1e
000F1E9C 1f790071 cmp      w8, #0x1e
000F1EA0 28a5881a csinc    w8, w9, w8, ge
000F1EA4 687602b9 str      w8, [x19, #0x274]
000F1EA8 c6c00494 bl       #0x2221c0
000F1EAC 34008052 mov      w20, #1
000F1EB0 00010036 tbz      w0, #0, #0xf1ed0
000F1EB4 687642b9 ldr      w8, [x19, #0x274]
000F1EB8 1f790071 cmp      w8, #0x1e
000F1EBC ab000054 b.lt     #0xf1ed0
000F1EC0 00bf0494 bl       #0x221ac0
000F1EC4 f4031f2a mov      w20, wzr
000F1EC8 c8469352 mov      w8, #0x9a36
000F1ECC 1f682838 strb     wzr, [x0, x8]
000F1ED0 e003142a mov      w0, w20
000F1ED4 f44f41a9 ldp      x20, x19, [sp, #0x10]
000F1ED8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000F1EDC c0035fd6 ret      
000F1EE0 606640f9 ldr      x0, [x19, #0xc8]
000F1EE4 9400fd97 bl       #0x32134
000F1EE8 34008052 mov      w20, #1
000F1EEC 20ff0736 tbz      w0, #0, #0xf1ed0
000F1EF0 f4be0494 bl       #0x221ac0
000F1EF4 c8469352 mov      w8, #0x9a36
000F1EF8 14682838 strb     w20, [x0, x8]
000F1EFC b1bf0494 bl       #0x221dc0
000F1F00 747202b9 str      w20, [x19, #0x270]
000F1F04 e003142a mov      w0, w20
000F1F08 f44f41a9 ldp      x20, x19, [sp, #0x10]
000F1F0C fd7bc2a8 ldp      x29, x30, [sp], #0x20
000F1F10 c0035fd6 ret      
~~~
### 0xf1f20 (115 slots)
~~~asm
000F1F20 ffc301d1 sub      sp, sp, #0x70
000F1F24 fd7b03a9 stp      x29, x30, [sp, #0x30]
000F1F28 f72300f9 str      x23, [sp, #0x40]
000F1F2C f65705a9 stp      x22, x21, [sp, #0x50]
000F1F30 f44f06a9 stp      x20, x19, [sp, #0x60]
000F1F34 fdc30091 add      x29, sp, #0x30
000F1F38 083040f9 ldr      x8, [x0, #0x60]
000F1F3C f30300aa mov      x19, x0
000F1F40 143140f9 ldr      x20, [x8, #0x60]
000F1F44 880240f9 ldr      x8, [x20]
000F1F48 e00314aa mov      x0, x20
000F1F4C 080140f9 ldr      x8, [x8]
000F1F50 00013fd6 blr      x8
000F1F54 f50300aa mov      x21, x0
000F1F58 81d0fc97 bl       #0x2615c
000F1F5C 1f0015eb cmp      x0, x21
000F1F60 a0000054 b.eq     #0xf1f74
000F1F64 b50240f9 ldr      x21, [x21]
000F1F68 bf0200eb cmp      x21, x0
000F1F6C a41a40fa ccmp     x21, #0, #4, ne
000F1F70 a1ffff54 b.ne     #0xf1f64
000F1F74 803640f9 ldr      x0, [x20, #0x68]
000F1F78 e8630091 add      x8, sp, #0x18
000F1F7C e1031f2a mov      w1, wzr
000F1F80 d48dfc97 bl       #0x156d0
000F1F84 e00f40f9 ldr      x0, [sp, #0x18]
000F1F88 143040f9 ldr      x20, [x0, #0x60]
000F1F8C f40000b4 cbz      x20, #0xf1fa8
000F1F90 e00314aa mov      x0, x20
000F1F94 088c44f8 ldr      x8, [x0, #0x48]!
000F1F98 080940f9 ldr      x8, [x8, #0x10]
000F1F9C 00013fd6 blr      x8
000F1FA0 e00f40f9 ldr      x0, [sp, #0x18]
000F1FA4 800000b4 cbz      x0, #0xf1fb4
000F1FA8 088c44f8 ldr      x8, [x0, #0x48]!
000F1FAC 080d40f9 ldr      x8, [x8, #0x18]
000F1FB0 00013fd6 blr      x8
000F1FB4 604640f9 ldr      x0, [x19, #0x88]
000F1FB8 28208052 mov      w8, #0x101
000F1FBC 0820a072 movk     w8, #0x100, lsl #16
000F1FC0 e82b00b9 str      w8, [sp, #0x28]
000F1FC4 28008052 mov      w8, #1
000F1FC8 e8b30039 strb     w8, [sp, #0x2c]
000F1FCC ffff01a9 stp      xzr, xzr, [sp, #0x18]
000F1FD0 a00f00f9 str      x0, [x29, #0x18]
000F1FD4 800000b4 cbz      x0, #0xf1fe4
000F1FD8 088c44f8 ldr      x8, [x0, #0x48]!
000F1FDC 080940f9 ldr      x8, [x8, #0x10]
000F1FE0 00013fd6 blr      x8
000F1FE4 f40b00f9 str      x20, [sp, #0x10]
000F1FE8 b40000b4 cbz      x20, #0xf1ffc
000F1FEC e00314aa mov      x0, x20
000F1FF0 088c44f8 ldr      x8, [x0, #0x48]!
000F1FF4 080940f9 ldr      x8, [x8, #0x10]
000F1FF8 00013fd6 blr      x8
000F1FFC c8f197d2 mov      x8, #0xbf8e
000F2000 68afabf2 movk     x8, #0x5d7b, lsl #16
000F2004 a0630091 add      x0, x29, #0x18
000F2008 881fd7f2 movk     x8, #0xb8fc, lsl #32
000F200C 8894f0f2 movk     x8, #0x84a4, lsl #48
000F2010 e80700f9 str      x8, [sp, #8]
000F2014 e1430091 add      x1, sp, #0x10
000F2018 e2230091 add      x2, sp, #8
000F201C aaebfe97 bl       #0xacec4
000F2020 e00b40f9 ldr      x0, [sp, #0x10]
000F2024 a00000b4 cbz      x0, #0xf2038
000F2028 088c44f8 ldr      x8, [x0, #0x48]!
000F202C 080d40f9 ldr      x8, [x8, #0x18]
000F2030 00013fd6 blr      x8
000F2034 ff0b00f9 str      xzr, [sp, #0x10]
000F2038 a00f40f9 ldr      x0, [x29, #0x18]
000F203C a00000b4 cbz      x0, #0xf2050
000F2040 088c44f8 ldr      x8, [x0, #0x48]!
000F2044 080d40f9 ldr      x8, [x8, #0x18]
000F2048 00013fd6 blr      x8
000F204C bf0f00f9 str      xzr, [x29, #0x18]
000F2050 684640f9 ldr      x8, [x19, #0x88]
000F2054 37008052 mov      w23, #1
000F2058 f72300b9 str      w23, [sp, #0x20]
000F205C e80f00f9 str      x8, [sp, #0x18]
000F2060 683640f9 ldr      x8, [x19, #0x68]
000F2064 153140f9 ldr      x21, [x8, #0x60]
000F2068 a80240f9 ldr      x8, [x21]
000F206C e00315aa mov      x0, x21
000F2070 080140f9 ldr      x8, [x8]
000F2074 00013fd6 blr      x8
000F2078 f60300aa mov      x22, x0
000F207C 896dfe97 bl       #0x8d6a0
000F2080 1f0016eb cmp      x0, x22
000F2084 e0000054 b.eq     #0xf20a0
000F2088 1f2003d5 nop      
000F208C 1f2003d5 nop      
000F2090 d60240f9 ldr      x22, [x22]
000F2094 df0200eb cmp      x22, x0
000F2098 c41a40fa ccmp     x22, #0, #4, ne
000F209C a1ffff54 b.ne     #0xf2090
000F20A0 a8f24239 ldrb     w8, [x21, #0xbc]
000F20A4 bff20239 strb     wzr, [x21, #0xbc]
000F20A8 e1630091 add      x1, sp, #0x18
000F20AC 606640f9 ldr      x0, [x19, #0xc8]
000F20B0 f7a30039 strb     w23, [sp, #0x28]
000F20B4 08010052 eor      w8, w8, #1
000F20B8 e8a70039 strb     w8, [sp, #0x29]
000F20BC 39fffc97 bl       #0x31da0
000F20C0 b40000b4 cbz      x20, #0xf20d4
000F20C4 888e44f8 ldr      x8, [x20, #0x48]!
000F20C8 e00314aa mov      x0, x20
000F20CC 080d40f9 ldr      x8, [x8, #0x18]
000F20D0 00013fd6 blr      x8
000F20D4 f44f46a9 ldp      x20, x19, [sp, #0x60]
000F20D8 f72340f9 ldr      x23, [sp, #0x40]
000F20DC f65745a9 ldp      x22, x21, [sp, #0x50]
000F20E0 fd7b43a9 ldp      x29, x30, [sp, #0x30]
000F20E4 ffc30191 add      sp, sp, #0x70
000F20E8 c0035fd6 ret      
~~~
### 0xf20f0 (27 slots)
~~~asm
000F20F0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000F20F4 f50b00f9 str      x21, [sp, #0x10]
000F20F8 f44f02a9 stp      x20, x19, [sp, #0x20]
000F20FC fd030091 mov      x29, sp
000F2100 083440f9 ldr      x8, [x0, #0x68]
000F2104 f30300aa mov      x19, x0
000F2108 143140f9 ldr      x20, [x8, #0x60]
000F210C 880240f9 ldr      x8, [x20]
000F2110 e00314aa mov      x0, x20
000F2114 080140f9 ldr      x8, [x8]
000F2118 00013fd6 blr      x8
000F211C f50300aa mov      x21, x0
000F2120 606dfe97 bl       #0x8d6a0
000F2124 1f0015eb cmp      x0, x21
000F2128 c0000054 b.eq     #0xf2140
000F212C 1f2003d5 nop      
000F2130 b50240f9 ldr      x21, [x21]
000F2134 bf0200eb cmp      x21, x0
000F2138 a41a40fa ccmp     x21, #0, #4, ne
000F213C a1ffff54 b.ne     #0xf2130
000F2140 887240b9 ldr      w8, [x20, #0x70]
000F2144 9f5601b9 str      wzr, [x20, #0x154]
000F2148 68e600b9 str      w8, [x19, #0xe4]
000F214C f44f42a9 ldp      x20, x19, [sp, #0x20]
000F2150 f50b40f9 ldr      x21, [sp, #0x10]
000F2154 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F2158 c0035fd6 ret      
~~~
### 0xf2160 (217 slots)
~~~asm
000F2160 ff8303d1 sub      sp, sp, #0xe0
000F2164 fd7b0ba9 stp      x29, x30, [sp, #0xb0]
000F2168 f6570ca9 stp      x22, x21, [sp, #0xc0]
000F216C f44f0da9 stp      x20, x19, [sp, #0xd0]
000F2170 fdc30291 add      x29, sp, #0xb0
000F2174 f30300aa mov      x19, x0
000F2178 006840f9 ldr      x0, [x0, #0xd0]
000F217C 685e8ed2 mov      x8, #0x72f3
000F2180 48aeabf2 movk     x8, #0x5d72, lsl #16
000F2184 88dfc4f2 movk     x8, #0x26fc, lsl #32
000F2188 4893f0f2 movk     x8, #0x849a, lsl #48
000F218C a8831ff8 stur     x8, [x29, #-8]
000F2190 688dff97 bl       #0xd5730
000F2194 683240f9 ldr      x8, [x19, #0x60]
000F2198 143140f9 ldr      x20, [x8, #0x60]
000F219C 880240f9 ldr      x8, [x20]
000F21A0 e00314aa mov      x0, x20
000F21A4 080140f9 ldr      x8, [x8]
000F21A8 00013fd6 blr      x8
000F21AC f50300aa mov      x21, x0
000F21B0 ebcffc97 bl       #0x2615c
000F21B4 1f0015eb cmp      x0, x21
000F21B8 c0000054 b.eq     #0xf21d0
000F21BC 1f2003d5 nop      
000F21C0 b50240f9 ldr      x21, [x21]
000F21C4 bf0200eb cmp      x21, x0
000F21C8 a41a40fa ccmp     x21, #0, #4, ne
000F21CC a1ffff54 b.ne     #0xf21c0
000F21D0 803640f9 ldr      x0, [x20, #0x68]
000F21D4 e8430091 add      x8, sp, #0x10
000F21D8 e1031f2a mov      w1, wzr
000F21DC 3d8dfc97 bl       #0x156d0
000F21E0 e00b40f9 ldr      x0, [sp, #0x10]
000F21E4 163040f9 ldr      x22, [x0, #0x60]
000F21E8 f60000b4 cbz      x22, #0xf2204
000F21EC e00316aa mov      x0, x22
000F21F0 088c44f8 ldr      x8, [x0, #0x48]!
000F21F4 080940f9 ldr      x8, [x8, #0x10]
000F21F8 00013fd6 blr      x8
000F21FC e00b40f9 ldr      x0, [sp, #0x10]
000F2200 800000b4 cbz      x0, #0xf2210
000F2204 088c44f8 ldr      x8, [x0, #0x48]!
000F2208 080d40f9 ldr      x8, [x8, #0x18]
000F220C 00013fd6 blr      x8
000F2210 604640f9 ldr      x0, [x19, #0x88]
000F2214 28208052 mov      w8, #0x101
000F2218 0820a072 movk     w8, #0x100, lsl #16
000F221C bf7f3ea9 stp      xzr, xzr, [x29, #-0x20]
000F2220 a8031fb8 stur     w8, [x29, #-0x10]
000F2224 a0831df8 stur     x0, [x29, #-0x28]
000F2228 800000b4 cbz      x0, #0xf2238
000F222C 088c44f8 ldr      x8, [x0, #0x48]!
000F2230 080940f9 ldr      x8, [x8, #0x10]
000F2234 00013fd6 blr      x8
000F2238 b6031df8 stur     x22, [x29, #-0x30]
000F223C b60000b4 cbz      x22, #0xf2250
000F2240 e00316aa mov      x0, x22
000F2244 088c44f8 ldr      x8, [x0, #0x48]!
000F2248 080940f9 ldr      x8, [x8, #0x10]
000F224C 00013fd6 blr      x8
000F2250 a0a300d1 sub      x0, x29, #0x28
000F2254 a1c300d1 sub      x1, x29, #0x30
000F2258 a22300d1 sub      x2, x29, #8
000F225C 1aebfe97 bl       #0xacec4
000F2260 a0035df8 ldur     x0, [x29, #-0x30]
000F2264 a00000b4 cbz      x0, #0xf2278
000F2268 088c44f8 ldr      x8, [x0, #0x48]!
000F226C 080d40f9 ldr      x8, [x8, #0x18]
000F2270 00013fd6 blr      x8
000F2274 bf031df8 stur     xzr, [x29, #-0x30]
000F2278 a0835df8 ldur     x0, [x29, #-0x28]
000F227C a00000b4 cbz      x0, #0xf2290
000F2280 088c44f8 ldr      x8, [x0, #0x48]!
000F2284 080d40f9 ldr      x8, [x8, #0x18]
000F2288 00013fd6 blr      x8
000F228C bf831df8 stur     xzr, [x29, #-0x28]
000F2290 684640f9 ldr      x8, [x19, #0x88]
000F2294 bf331f78 sturh    wzr, [x29, #-0xd]
000F2298 a8031ef8 stur     x8, [x29, #-0x20]
000F229C 683640f9 ldr      x8, [x19, #0x68]
000F22A0 143140f9 ldr      x20, [x8, #0x60]
000F22A4 880240f9 ldr      x8, [x20]
000F22A8 e00314aa mov      x0, x20
000F22AC 080140f9 ldr      x8, [x8]
000F22B0 00013fd6 blr      x8
000F22B4 f50300aa mov      x21, x0
000F22B8 fa6cfe97 bl       #0x8d6a0
000F22BC 1f0015eb cmp      x0, x21
000F22C0 a0000054 b.eq     #0xf22d4
000F22C4 b50240f9 ldr      x21, [x21]
000F22C8 bf0200eb cmp      x21, x0
000F22CC a41a40fa ccmp     x21, #0, #4, ne
000F22D0 a1ffff54 b.ne     #0xf22c4
000F22D4 88f24239 ldrb     w8, [x20, #0xbc]
000F22D8 29008052 mov      w9, #1
000F22DC bf031f38 sturb    wzr, [x29, #-0x10]
000F22E0 89f20239 strb     w9, [x20, #0xbc]
000F22E4 604a40f9 ldr      x0, [x19, #0x90]
000F22E8 ff4b00b9 str      wzr, [sp, #0x48]
000F22EC 08010052 eor      w8, w8, #1
000F22F0 ffff03a9 stp      xzr, xzr, [sp, #0x38]
000F22F4 e9730139 strb     w9, [sp, #0x5c]
000F22F8 a8131f38 sturb    w8, [x29, #-0xf]
000F22FC 482a9dd2 mov      x8, #0xe952
000F2300 e868b4f2 movk     x8, #0xa347, lsl #16
000F2304 484edef2 movk     x8, #0xf272, lsl #32
000F2308 4857f1f2 movk     x8, #0x8aba, lsl #48
000F230C e82b00f9 str      x8, [sp, #0x50]
000F2310 88008052 mov      w8, #4
000F2314 e85b00b9 str      w8, [sp, #0x58]
000F2318 e8ff9f52 mov      w8, #0xffff
000F231C e8e305b8 stur     w8, [sp, #0x5e]
000F2320 ffff02a9 stp      xzr, xzr, [sp, #0x28]
000F2324 ffff01a9 stp      xzr, xzr, [sp, #0x18]
000F2328 ff7f07a9 stp      xzr, xzr, [sp, #0x70]
000F232C e0ff00a9 stp      x0, xzr, [sp, #8]
000F2330 800000b4 cbz      x0, #0xf2340
000F2334 088c44f8 ldr      x8, [x0, #0x48]!
000F2338 080940f9 ldr      x8, [x8, #0x10]
000F233C 00013fd6 blr      x8
000F2340 d4220191 add      x20, x22, #0x48
000F2344 f60300f9 str      x22, [sp]
000F2348 b60000b4 cbz      x22, #0xf235c
000F234C 880240f9 ldr      x8, [x20]
000F2350 e00314aa mov      x0, x20
000F2354 080940f9 ldr      x8, [x8, #0x10]
000F2358 00013fd6 blr      x8
000F235C a2290090 adrp     x2, #0x626000
000F2360 42e03991 add      x2, x2, #0xe78
000F2364 e0230091 add      x0, sp, #8
000F2368 e1030091 mov      x1, sp
000F236C d6eafe97 bl       #0xacec4
000F2370 e00340f9 ldr      x0, [sp]
000F2374 a00000b4 cbz      x0, #0xf2388
000F2378 088c44f8 ldr      x8, [x0, #0x48]!
000F237C 080d40f9 ldr      x8, [x8, #0x18]
000F2380 00013fd6 blr      x8
000F2384 ff0300f9 str      xzr, [sp]
000F2388 e00740f9 ldr      x0, [sp, #8]
000F238C 800000b4 cbz      x0, #0xf239c
000F2390 088c44f8 ldr      x8, [x0, #0x48]!
000F2394 080d40f9 ldr      x8, [x8, #0x18]
000F2398 00013fd6 blr      x8
000F239C 680249a9 ldp      x8, x0, [x19, #0x90]
000F23A0 e0a300a9 stp      x0, x8, [sp, #8]
000F23A4 800000b4 cbz      x0, #0xf23b4
000F23A8 088c44f8 ldr      x8, [x0, #0x48]!
000F23AC 080940f9 ldr      x8, [x8, #0x10]
000F23B0 00013fd6 blr      x8
000F23B4 f60300f9 str      x22, [sp]
000F23B8 b60000b4 cbz      x22, #0xf23cc
000F23BC 880240f9 ldr      x8, [x20]
000F23C0 e00314aa mov      x0, x20
000F23C4 080940f9 ldr      x8, [x8, #0x10]
000F23C8 00013fd6 blr      x8
000F23CC a2290090 adrp     x2, #0x626000
000F23D0 42003a91 add      x2, x2, #0xe80
000F23D4 e0230091 add      x0, sp, #8
000F23D8 e1030091 mov      x1, sp
000F23DC baeafe97 bl       #0xacec4
000F23E0 e00340f9 ldr      x0, [sp]
000F23E4 a00000b4 cbz      x0, #0xf23f8
000F23E8 088c44f8 ldr      x8, [x0, #0x48]!
000F23EC 080d40f9 ldr      x8, [x8, #0x18]
000F23F0 00013fd6 blr      x8
000F23F4 ff0300f9 str      xzr, [sp]
000F23F8 e00740f9 ldr      x0, [sp, #8]
000F23FC 800000b4 cbz      x0, #0xf240c
000F2400 088c44f8 ldr      x8, [x0, #0x48]!
000F2404 080d40f9 ldr      x8, [x8, #0x18]
000F2408 00013fd6 blr      x8
000F240C 688249a9 ldp      x8, x0, [x19, #0x98]
000F2410 e80f00f9 str      x8, [sp, #0x18]
000F2414 e00700f9 str      x0, [sp, #8]
000F2418 800000b4 cbz      x0, #0xf2428
000F241C 088c44f8 ldr      x8, [x0, #0x48]!
000F2420 080940f9 ldr      x8, [x8, #0x10]
000F2424 00013fd6 blr      x8
000F2428 f60300f9 str      x22, [sp]
000F242C b60000b4 cbz      x22, #0xf2440
000F2430 880240f9 ldr      x8, [x20]
000F2434 e00314aa mov      x0, x20
000F2438 080940f9 ldr      x8, [x8, #0x10]
000F243C 00013fd6 blr      x8
000F2440 a2290090 adrp     x2, #0x626000
000F2444 42203a91 add      x2, x2, #0xe88
000F2448 e0230091 add      x0, sp, #8
000F244C e1030091 mov      x1, sp
000F2450 9deafe97 bl       #0xacec4
000F2454 e00340f9 ldr      x0, [sp]
000F2458 a00000b4 cbz      x0, #0xf246c
000F245C 088c44f8 ldr      x8, [x0, #0x48]!
000F2460 080d40f9 ldr      x8, [x8, #0x18]
000F2464 00013fd6 blr      x8
000F2468 ff0300f9 str      xzr, [sp]
000F246C e00740f9 ldr      x0, [sp, #8]
000F2470 a00000b4 cbz      x0, #0xf2484
000F2474 088c44f8 ldr      x8, [x0, #0x48]!
000F2478 080d40f9 ldr      x8, [x8, #0x18]
000F247C 00013fd6 blr      x8
000F2480 ff0700f9 str      xzr, [sp, #8]
000F2484 685240f9 ldr      x8, [x19, #0xa0]
000F2488 a18300d1 sub      x1, x29, #0x20
000F248C e2430091 add      x2, sp, #0x10
000F2490 606640f9 ldr      x0, [x19, #0xc8]
000F2494 e81300f9 str      x8, [sp, #0x20]
000F2498 5bfefc97 bl       #0x31e04
000F249C b60000b4 cbz      x22, #0xf24b0
000F24A0 880240f9 ldr      x8, [x20]
000F24A4 e00314aa mov      x0, x20
000F24A8 080d40f9 ldr      x8, [x8, #0x18]
000F24AC 00013fd6 blr      x8
000F24B0 f44f4da9 ldp      x20, x19, [sp, #0xd0]
000F24B4 f6574ca9 ldp      x22, x21, [sp, #0xc0]
000F24B8 fd7b4ba9 ldp      x29, x30, [sp, #0xb0]
000F24BC ff830391 add      sp, sp, #0xe0
000F24C0 c0035fd6 ret      
~~~
### 0xf24d0 (50 slots)
~~~asm
000F24D0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000F24D4 f50b00f9 str      x21, [sp, #0x10]
000F24D8 f44f02a9 stp      x20, x19, [sp, #0x20]
000F24DC fd030091 mov      x29, sp
000F24E0 f30300aa mov      x19, x0
000F24E4 006440f9 ldr      x0, [x0, #0xc8]
000F24E8 13fffc97 bl       #0x32134
000F24EC a0040037 tbnz     w0, #0, #0xf2580
000F24F0 606640f9 ldr      x0, [x19, #0xc8]
000F24F4 fefffc97 bl       #0x324ec
000F24F8 40040037 tbnz     w0, #0, #0xf2580
000F24FC 683240f9 ldr      x8, [x19, #0x60]
000F2500 143140f9 ldr      x20, [x8, #0x60]
000F2504 880240f9 ldr      x8, [x20]
000F2508 e00314aa mov      x0, x20
000F250C 080140f9 ldr      x8, [x8]
000F2510 00013fd6 blr      x8
000F2514 f50300aa mov      x21, x0
000F2518 11cffc97 bl       #0x2615c
000F251C 1f0015eb cmp      x0, x21
000F2520 a0000054 b.eq     #0xf2534
000F2524 b50240f9 ldr      x21, [x21]
000F2528 bf0200eb cmp      x21, x0
000F252C a41a40fa ccmp     x21, #0, #4, ne
000F2530 a1ffff54 b.ne     #0xf2524
000F2534 81be42f9 ldr      x1, [x20, #0x578]
000F2538 e10200b4 cbz      x1, #0xf2594
000F253C 606640f9 ldr      x0, [x19, #0xc8]
000F2540 81f6fc97 bl       #0x2ff44
000F2544 e0010037 tbnz     w0, #0, #0xf2580
000F2548 606a40f9 ldr      x0, [x19, #0xd0]
000F254C 41008052 mov      w1, #2
000F2550 a40efd97 bl       #0x35fe0
000F2554 c0000036 tbz      w0, #0, #0xf256c
000F2558 20008052 mov      w0, #1
000F255C f44f42a9 ldp      x20, x19, [sp, #0x20]
000F2560 f50b40f9 ldr      x21, [sp, #0x10]
000F2564 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F2568 c0035fd6 ret      
000F256C 606640f9 ldr      x0, [x19, #0xc8]
000F2570 fafffc97 bl       #0x32558
000F2574 60000036 tbz      w0, #0, #0xf2580
000F2578 606640f9 ldr      x0, [x19, #0xc8]
000F257C 0f00fd97 bl       #0x325b8
000F2580 e0031f2a mov      w0, wzr
000F2584 f44f42a9 ldp      x20, x19, [sp, #0x20]
000F2588 f50b40f9 ldr      x21, [sp, #0x10]
000F258C fd7bc3a8 ldp      x29, x30, [sp], #0x30
000F2590 c0035fd6 ret      
000F2594 6b0f1494 bl       #0x5f6340
~~~
### 0xf62cc (7 slots)
~~~asm
000F62CC 080440a9 ldp      x8, x1, [x0]
000F62D0 090840f9 ldr      x9, [x0, #0x10]
000F62D4 0005898b add      x0, x8, x9, asr #1
000F62D8 69000036 tbz      w9, #0, #0xf62e4
000F62DC 080040f9 ldr      x8, [x0]
000F62E0 016961f8 ldr      x1, [x8, x1]
000F62E4 20001fd6 br       x1
~~~
### 0xf62e8 (1 slots)
~~~asm
000F62E8 c0035fd6 ret      
~~~
### 0x105340 (1 slots)
~~~asm
00105340 7c810414 b        #0x225930
~~~
### 0x140000 (644 slots)
~~~asm
00140000 ff0303d1 sub      sp, sp, #0xc0
00140004 fd7b09a9 stp      x29, x30, [sp, #0x90]
00140008 f55300f9 str      x21, [sp, #0xa0]
0014000C f44f0ba9 stp      x20, x19, [sp, #0xb0]
00140010 fd430291 add      x29, sp, #0x90
00140014 f30300aa mov      x19, x0
00140018 e0031f2a mov      w0, wzr
0014001C 687a40b9 ldr      w8, [x19, #0x78]
00140020 1f450071 cmp      w8, #0x11
00140024 a8010054 b.hi     #0x140058
00140028 492700f0 adrp     x9, #0x62b000
0014002C 29e12991 add      x9, x9, #0xa78
00140030 8a000010 adr      x10, #0x140040
00140034 2b796878 ldrh     w11, [x9, x8, lsl #1]
00140038 4a090b8b add      x10, x10, x11, lsl #2
0014003C 40011fd6 br       x10
00140040 684640f9 ldr      x8, [x19, #0x88]
00140044 09155c39 ldrb     w9, [x8, #0x705]
00140048 69440034 cbz      w9, #0x1408d4
0014004C e00313aa mov      x0, x19
00140050 70020094 bl       #0x140a10
00140054 e0031f2a mov      w0, wzr
00140058 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
0014005C f55340f9 ldr      x21, [sp, #0xa0]
00140060 fd7b49a9 ldp      x29, x30, [sp, #0x90]
00140064 ff030391 add      sp, sp, #0xc0
00140068 c0035fd6 ret      
0014006C 604240f9 ldr      x0, [x19, #0x80]
00140070 31c8fb97 bl       #0x32134
00140074 204b0036 tbz      w0, #0, #0x1409d8
00140078 604240f9 ldr      x0, [x19, #0x80]
0014007C 21008052 mov      w1, #1
00140080 9ec7fb97 bl       #0x31ef8
00140084 48008052 mov      w8, #2
00140088 5b020014 b        #0x1409f4
0014008C 604240f9 ldr      x0, [x19, #0x80]
00140090 28c9fb97 bl       #0x32530
00140094 e803002a mov      w8, w0
00140098 604640f9 ldr      x0, [x19, #0x88]
0014009C 1f050071 cmp      w8, #1
001400A0 c0290054 b.eq     #0x1405d8
001400A4 14f046b9 ldr      w20, [x0, #0x6f0]
001400A8 15ec46b9 ldr      w21, [x0, #0x6ec]
001400AC e00313aa mov      x0, x19
001400B0 d8020094 bl       #0x140c10
001400B4 9f02156b cmp      w20, w21
001400B8 a1410054 b.ne     #0x1408ec
001400BC f5940394 bl       #0x225490
001400C0 28018052 mov      w8, #9
001400C4 4c020014 b        #0x1409f4
001400C8 604240f9 ldr      x0, [x19, #0x80]
001400CC 1ac8fb97 bl       #0x32134
001400D0 40480036 tbz      w0, #0, #0x1409d8
001400D4 606240f9 ldr      x0, [x19, #0xc0]
001400D8 914f0694 bl       #0x2d3f1c
001400DC e0470036 tbz      w0, #0, #0x1409d8
001400E0 682a41f9 ldr      x8, [x19, #0x250]
001400E4 880100b4 cbz      x8, #0x140114
001400E8 08690991 add      x8, x8, #0x25a
001400EC 08fddf08 ldarb    w8, [x8]
001400F0 48470036 tbz      w8, #0, #0x1409d8
001400F4 602a41f9 ldr      x0, [x19, #0x250]
001400F8 7ea20e94 bl       #0x4e8af0
001400FC 602a41f9 ldr      x0, [x19, #0x250]
00140100 7f2a01f9 str      xzr, [x19, #0x250]
00140104 800000b4 cbz      x0, #0x140114
00140108 088c44f8 ldr      x8, [x0, #0x48]!
0014010C 080d40f9 ldr      x8, [x8, #0x18]
00140110 00013fd6 blr      x8
00140114 c7940394 bl       #0x225430
00140118 00460037 tbnz     w0, #0, #0x1409d8
0014011C e00313aa mov      x0, x19
00140120 70030094 bl       #0x140ee0
00140124 083040f9 ldr      x8, [x0, #0x60]
00140128 e00313aa mov      x0, x19
0014012C 080540b9 ldr      w8, [x8, #4]
00140130 1f010071 cmp      w8, #0
00140134 e8008052 mov      w8, #7
00140138 0805881a cinc     w8, w8, ne
0014013C 687a00b9 str      w8, [x19, #0x78]
00140140 88030094 bl       #0x140f60
00140144 25020014 b        #0x1409d8
00140148 604240f9 ldr      x0, [x19, #0x80]
0014014C fac7fb97 bl       #0x32134
00140150 40440036 tbz      w0, #0, #0x1409d8
00140154 604240f9 ldr      x0, [x19, #0x80]
00140158 f6c8fb97 bl       #0x32530
0014015C 1f040071 cmp      w0, #1
00140160 61410054 b.ne     #0x14098c
00140164 604640f9 ldr      x0, [x19, #0x88]
00140168 15120094 bl       #0x1449bc
0014016C e8031f2a mov      w8, wzr
00140170 0a020014 b        #0x140998
00140174 683640f9 ldr      x8, [x19, #0x68]
00140178 133140f9 ldr      x19, [x8, #0x60]
0014017C 680240f9 ldr      x8, [x19]
00140180 e00313aa mov      x0, x19
00140184 080140f9 ldr      x8, [x8]
00140188 00013fd6 blr      x8
0014018C f40300aa mov      x20, x0
00140190 6ef9ff97 bl       #0x13e748
00140194 1f0014eb cmp      x0, x20
00140198 c0000054 b.eq     #0x1401b0
0014019C 1f2003d5 nop      
001401A0 940240f9 ldr      x20, [x20]
001401A4 9f0200eb cmp      x20, x0
001401A8 841a40fa ccmp     x20, #0, #4, ne
001401AC a1ffff54 b.ne     #0x1401a0
001401B0 680a40f9 ldr      x8, [x19, #0x10]
001401B4 20008052 mov      w0, #1
001401B8 000100b9 str      w0, [x8]
001401BC f44f4ba9 ldp      x20, x19, [sp, #0xb0]
001401C0 f55340f9 ldr      x21, [sp, #0xa0]
001401C4 fd7b49a9 ldp      x29, x30, [sp, #0x90]
001401C8 ff030391 add      sp, sp, #0xc0
001401CC c0035fd6 ret      
001401D0 683640f9 ldr      x8, [x19, #0x68]
001401D4 143140f9 ldr      x20, [x8, #0x60]
001401D8 880240f9 ldr      x8, [x20]
001401DC e00314aa mov      x0, x20
001401E0 080140f9 ldr      x8, [x8]
001401E4 00013fd6 blr      x8
001401E8 f50300aa mov      x21, x0
001401EC 57f9ff97 bl       #0x13e748
001401F0 1f0015eb cmp      x0, x21
001401F4 e0000054 b.eq     #0x140210
001401F8 1f2003d5 nop      
001401FC 1f2003d5 nop      
00140200 b50240f9 ldr      x21, [x21]
00140204 bf0200eb cmp      x21, x0
00140208 a41a40fa ccmp     x21, #0, #4, ne
0014020C a1ffff54 b.ne     #0x140200
00140210 940a40f9 ldr      x20, [x20, #0x10]
00140214 9f0200b9 str      wzr, [x20]
00140218 12000014 b        #0x140260
0014021C 683640f9 ldr      x8, [x19, #0x68]
00140220 143140f9 ldr      x20, [x8, #0x60]
00140224 880240f9 ldr      x8, [x20]
00140228 e00314aa mov      x0, x20
0014022C 080140f9 ldr      x8, [x8]
00140230 00013fd6 blr      x8
00140234 f50300aa mov      x21, x0
00140238 44f9ff97 bl       #0x13e748
0014023C 1f0015eb cmp      x0, x21
00140240 a0000054 b.eq     #0x140254
00140244 b50240f9 ldr      x21, [x21]
00140248 bf0200eb cmp      x21, x0
0014024C a41a40fa ccmp     x21, #0, #4, ne
00140250 a1ffff54 b.ne     #0x140244
00140254 940a40f9 ldr      x20, [x20, #0x10]
00140258 48008052 mov      w8, #2
0014025C 880200b9 str      w8, [x20]
00140260 684640f9 ldr      x8, [x19, #0x88]
00140264 096d43f9 ldr      x9, [x8, #0x6d8]
00140268 087143f9 ldr      x8, [x8, #0x6e0]
0014026C 89a200a9 stp      x9, x8, [x20, #8]
00140270 604640f9 ldr      x0, [x19, #0x88]
00140274 01f046b9 ldr      w1, [x0, #0x6f0]
00140278 e5120094 bl       #0x144e0c
0014027C 801a00b9 str      w0, [x20, #0x18]
00140280 684640f9 ldr      x8, [x19, #0x88]
00140284 09f546b9 ldr      w9, [x8, #0x6f4]
00140288 891e00b9 str      w9, [x20, #0x1c]
0014028C 08f946b9 ldr      w8, [x8, #0x6f8]
00140290 882200b9 str      w8, [x20, #0x20]
00140294 20008052 mov      w0, #1
00140298 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
0014029C f55340f9 ldr      x21, [sp, #0xa0]
001402A0 fd7b49a9 ldp      x29, x30, [sp, #0x90]
001402A4 ff030391 add      sp, sp, #0xc0
001402A8 c0035fd6 ret      
001402AC 604240f9 ldr      x0, [x19, #0x80]
001402B0 a1c7fb97 bl       #0x32134
001402B4 20390036 tbz      w0, #0, #0x1409d8
001402B8 606240f9 ldr      x0, [x19, #0xc0]
001402BC 184f0694 bl       #0x2d3f1c
001402C0 c0380036 tbz      w0, #0, #0x1409d8
001402C4 5b940394 bl       #0x225430
001402C8 80380037 tbnz     w0, #0, #0x1409d8
001402CC e00313aa mov      x0, x19
001402D0 04030094 bl       #0x140ee0
001402D4 083040f9 ldr      x8, [x0, #0x60]
001402D8 69008052 mov      w9, #3
001402DC e00313aa mov      x0, x19
001402E0 090100b9 str      w9, [x8]
001402E4 1f030094 bl       #0x140f60
001402E8 20008052 mov      w0, #1
001402EC f44f4ba9 ldp      x20, x19, [sp, #0xb0]
001402F0 f55340f9 ldr      x21, [sp, #0xa0]
001402F4 fd7b49a9 ldp      x29, x30, [sp, #0x90]
001402F8 ff030391 add      sp, sp, #0xc0
001402FC c0035fd6 ret      
00140300 604240f9 ldr      x0, [x19, #0x80]
00140304 8cc7fb97 bl       #0x32134
00140308 80000037 tbnz     w0, #0, #0x140318
0014030C 604240f9 ldr      x0, [x19, #0x80]
00140310 77c8fb97 bl       #0x324ec
00140314 20360036 tbz      w0, #0, #0x1409d8
00140318 687e40b9 ldr      w8, [x19, #0x7c]
0014031C 1f190071 cmp      w8, #6
00140320 a0360054 b.eq     #0x1409f4
00140324 604640f9 ldr      x0, [x19, #0x88]
00140328 a5110094 bl       #0x1449bc
0014032C af000014 b        #0x1405e8
00140330 e4850394 bl       #0x221ac0
00140334 f40300aa mov      x20, x0
00140338 4ed91294 bl       #0x5f6870
0014033C 51d91294 bl       #0x5f6880
00140340 08468552 mov      w8, #0x2a30
00140344 0804a072 movk     w8, #0x20, lsl #16
00140348 886a68f8 ldr      x8, [x20, x8]
0014034C 1f0008eb cmp      x0, x8
00140350 6a290054 b.ge     #0x14087c
00140354 683240f9 ldr      x8, [x19, #0x60]
00140358 143140f9 ldr      x20, [x8, #0x60]
0014035C 880240f9 ldr      x8, [x20]
00140360 e00314aa mov      x0, x20
00140364 080140f9 ldr      x8, [x8]
00140368 00013fd6 blr      x8
0014036C f50300aa mov      x21, x0
00140370 7b97fb97 bl       #0x2615c
00140374 1f0015eb cmp      x0, x21
00140378 c0000054 b.eq     #0x140390
0014037C 1f2003d5 nop      
00140380 b50240f9 ldr      x21, [x21]
00140384 bf0200eb cmp      x21, x0
00140388 a41a40fa ccmp     x21, #0, #4, ne
0014038C a1ffff54 b.ne     #0x140380
00140390 88be42f9 ldr      x8, [x20, #0x578]
00140394 e1031f2a mov      w1, wzr
00140398 005940f9 ldr      x0, [x8, #0xb0]
0014039C e8030091 mov      x8, sp
001403A0 cc54fb97 bl       #0x156d0
001403A4 e00340f9 ldr      x0, [sp]
001403A8 143040f9 ldr      x20, [x0, #0x60]
001403AC f40000b4 cbz      x20, #0x1403c8
001403B0 e00314aa mov      x0, x20
001403B4 088c44f8 ldr      x8, [x0, #0x48]!
001403B8 080940f9 ldr      x8, [x8, #0x10]
001403BC 00013fd6 blr      x8
001403C0 e00340f9 ldr      x0, [sp]
001403C4 800000b4 cbz      x0, #0x1403d4
001403C8 088c44f8 ldr      x8, [x0, #0x48]!
001403CC 080d40f9 ldr      x8, [x8, #0x18]
001403D0 00013fd6 blr      x8
001403D4 625e40f9 ldr      x2, [x19, #0xb8]
001403D8 28008052 mov      w8, #1
001403DC 2820a072 movk     w8, #0x101, lsl #16
001403E0 e81301b8 stur     w8, [sp, #0x11]
001403E4 685b8ed2 mov      x8, #0x72db
001403E8 c85da2f2 movk     x8, #0x12ee, lsl #16
001403EC e8decef2 movk     x8, #0x76f7, lsl #32
001403F0 a88bf7f2 movk     x8, #0xbc5d, lsl #48
001403F4 ff0700f9 str      xzr, [sp, #8]
001403F8 a16300d1 sub      x1, x29, #0x18
001403FC e00314aa mov      x0, x20
00140400 a8831ef8 stur     x8, [x29, #-0x18]
00140404 65ca0e94 bl       #0x4f2d98
00140408 685e40f9 ldr      x8, [x19, #0xb8]
0014040C e1031f2a mov      w1, wzr
00140410 e80300f9 str      x8, [sp]
00140414 28008052 mov      w8, #1
00140418 e80b00b9 str      w8, [sp, #8]
0014041C e8430039 strb     w8, [sp, #0x10]
00140420 684240f9 ldr      x8, [x19, #0x80]
00140424 002143f9 ldr      x0, [x8, #0x640]
00140428 080c46f8 ldr      x8, [x0, #0x60]!
0014042C 080540f9 ldr      x8, [x8, #8]
00140430 00013fd6 blr      x8
00140434 604240f9 ldr      x0, [x19, #0x80]
00140438 e1030091 mov      x1, sp
0014043C 59c6fb97 bl       #0x31da0
00140440 604240f9 ldr      x0, [x19, #0x80]
00140444 e1031f2a mov      w1, wzr
00140448 9ea2fb97 bl       #0x28ec0
0014044C 48018052 mov      w8, #0xa
00140450 683e00f9 str      x8, [x19, #0x78]
00140454 4f000014 b        #0x140590
00140458 492a9dd2 mov      x9, #0xe952
0014045C e968b4f2 movk     x9, #0xa347, lsl #16
00140460 ff3b00b9 str      wzr, [sp, #0x38]
00140464 494edef2 movk     x9, #0xf272, lsl #32
00140468 4957f1f2 movk     x9, #0x8aba, lsl #48
0014046C ff0300f9 str      xzr, [sp]
00140470 e92300f9 str      x9, [sp, #0x40]
00140474 89008052 mov      w9, #4
00140478 28208052 mov      w8, #0x101
0014047C 0820a072 movk     w8, #0x100, lsl #16
00140480 e94b00b9 str      w9, [sp, #0x48]
00140484 693240f9 ldr      x9, [x19, #0x60]
00140488 ff7f06a9 stp      xzr, xzr, [sp, #0x60]
0014048C 343140f9 ldr      x20, [x9, #0x60]
00140490 a8831fb8 stur     w8, [x29, #-8]
00140494 28008052 mov      w8, #1
00140498 a8c31f38 sturb    w8, [x29, #-4]
0014049C e00314aa mov      x0, x20
001404A0 e8330139 strb     w8, [sp, #0x4c]
001404A4 e8ff9f52 mov      w8, #0xffff
001404A8 bfff3ea9 stp      xzr, xzr, [x29, #-0x18]
001404AC e8e304b8 stur     w8, [sp, #0x4e]
001404B0 ffff02a9 stp      xzr, xzr, [sp, #0x28]
001404B4 ffff01a9 stp      xzr, xzr, [sp, #0x18]
001404B8 ffff00a9 stp      xzr, xzr, [sp, #8]
001404BC 880240f9 ldr      x8, [x20]
001404C0 080140f9 ldr      x8, [x8]
001404C4 00013fd6 blr      x8
001404C8 f50300aa mov      x21, x0
001404CC 2497fb97 bl       #0x2615c
001404D0 1f0015eb cmp      x0, x21
001404D4 e0000054 b.eq     #0x1404f0
001404D8 1f2003d5 nop      
001404DC 1f2003d5 nop      
001404E0 b50240f9 ldr      x21, [x21]
001404E4 bf0200eb cmp      x21, x0
001404E8 a41a40fa ccmp     x21, #0, #4, ne
001404EC a1ffff54 b.ne     #0x1404e0
001404F0 88be42f9 ldr      x8, [x20, #0x578]
001404F4 e1031f2a mov      w1, wzr
001404F8 005940f9 ldr      x0, [x8, #0xb0]
001404FC a8630091 add      x8, x29, #0x18
00140500 7454fb97 bl       #0x156d0
00140504 a00f40f9 ldr      x0, [x29, #0x18]
00140508 143040f9 ldr      x20, [x0, #0x60]
0014050C f40000b4 cbz      x20, #0x140528
00140510 e00314aa mov      x0, x20
00140514 088c44f8 ldr      x8, [x0, #0x48]!
00140518 080940f9 ldr      x8, [x8, #0x10]
0014051C 00013fd6 blr      x8
00140520 a00f40f9 ldr      x0, [x29, #0x18]
00140524 800000b4 cbz      x0, #0x140534
00140528 088c44f8 ldr      x8, [x0, #0x48]!
0014052C 080d40f9 ldr      x8, [x8, #0x18]
00140530 00013fd6 blr      x8
00140534 624a40f9 ldr      x2, [x19, #0x90]
00140538 a8a18fd2 mov      x8, #0x7d0d
0014053C c85da2f2 movk     x8, #0x12ee, lsl #16
00140540 e89ecff2 movk     x8, #0x7cf7, lsl #32
00140544 a88bf7f2 movk     x8, #0xbc5d, lsl #48
00140548 a80f00f9 str      x8, [x29, #0x18]
0014054C a1630091 add      x1, x29, #0x18
00140550 e00314aa mov      x0, x20
00140554 11ca0e94 bl       #0x4f2d98
00140558 684a40f9 ldr      x8, [x19, #0x90]
0014055C a16300d1 sub      x1, x29, #0x18
00140560 e2030091 mov      x2, sp
00140564 69aa4aa9 ldp      x9, x10, [x19, #0xa8]
00140568 bf831f38 sturb    wzr, [x29, #-8]
0014056C 604240f9 ldr      x0, [x19, #0x80]
00140570 a8831ef8 stur     x8, [x29, #-0x18]
00140574 e92b00a9 stp      x9, x10, [sp]
00140578 23c6fb97 bl       #0x31e04
0014057C 604240f9 ldr      x0, [x19, #0x80]
00140580 e1031f2a mov      w1, wzr
00140584 4fa2fb97 bl       #0x28ec0
00140588 a8018052 mov      w8, #0xd
0014058C 687a00b9 str      w8, [x19, #0x78]
00140590 888e44f8 ldr      x8, [x20, #0x48]!
00140594 e00314aa mov      x0, x20
00140598 080d40f9 ldr      x8, [x8, #0x18]
0014059C 00013fd6 blr      x8
001405A0 e0031f2a mov      w0, wzr
001405A4 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
001405A8 f55340f9 ldr      x21, [sp, #0xa0]
001405AC fd7b49a9 ldp      x29, x30, [sp, #0x90]
001405B0 ff030391 add      sp, sp, #0xc0
001405B4 c0035fd6 ret      
001405B8 604240f9 ldr      x0, [x19, #0x80]
001405BC dec6fb97 bl       #0x32134
001405C0 c0200036 tbz      w0, #0, #0x1409d8
001405C4 604240f9 ldr      x0, [x19, #0x80]
001405C8 dac7fb97 bl       #0x32530
001405CC 1f040071 cmp      w0, #1
001405D0 811f0054 b.ne     #0x1409c0
001405D4 604640f9 ldr      x0, [x19, #0x88]
001405D8 f9100094 bl       #0x1449bc
001405DC 604240f9 ldr      x0, [x19, #0x80]
001405E0 21008052 mov      w1, #1
001405E4 45c6fb97 bl       #0x31ef8
001405E8 e0031f2a mov      w0, wzr
001405EC 7f7a00b9 str      wzr, [x19, #0x78]
001405F0 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
001405F4 f55340f9 ldr      x21, [sp, #0xa0]
001405F8 fd7b49a9 ldp      x29, x30, [sp, #0x90]
001405FC ff030391 add      sp, sp, #0xc0
00140600 c0035fd6 ret      
00140604 e00313aa mov      x0, x19
00140608 82010094 bl       #0x140c10
0014060C e8018052 mov      w8, #0xf
00140610 f9000014 b        #0x1409f4
00140614 604240f9 ldr      x0, [x19, #0x80]
00140618 c7c6fb97 bl       #0x32134
0014061C e01d0036 tbz      w0, #0, #0x1409d8
00140620 744640f9 ldr      x20, [x19, #0x88]
00140624 27850394 bl       #0x221ac0
00140628 896e43f9 ldr      x9, [x20, #0x6d8]
0014062C 08084891 add      x8, x0, #0x202, lsl #12
00140630 08612891 add      x8, x8, #0xa18
00140634 8a7243f9 ldr      x10, [x20, #0x6e0]
00140638 092900a9 stp      x9, x10, [x8]
0014063C 604640f9 ldr      x0, [x19, #0x88]
00140640 01f046b9 ldr      w1, [x0, #0x6f0]
00140644 f2110094 bl       #0x144e0c
00140648 f403002a mov      w20, w0
0014064C 1d850394 bl       #0x221ac0
00140650 08458552 mov      w8, #0x2a28
00140654 0804a072 movk     w8, #0x20, lsl #16
00140658 146828b8 str      w20, [x0, x8]
0014065C cdc50394 bl       #0x231d90
00140660 08028052 mov      w8, #0x10
00140664 e4000014 b        #0x1409f4
00140668 604240f9 ldr      x0, [x19, #0x80]
0014066C b2c6fb97 bl       #0x32134
00140670 401b0036 tbz      w0, #0, #0x1409d8
00140674 606240f9 ldr      x0, [x19, #0xc0]
00140678 294e0694 bl       #0x2d3f1c
0014067C e01a0036 tbz      w0, #0, #0x1409d8
00140680 b0b70394 bl       #0x22e540
00140684 a01a0037 tbnz     w0, #0, #0x1409d8
00140688 0e850394 bl       #0x221ac0
0014068C 08478552 mov      w8, #0x2a38
00140690 0804a072 movk     w8, #0x20, lsl #16
00140694 086868b8 ldr      w8, [x0, x8]
00140698 c81a0034 cbz      w8, #0x1409f0
0014069C 09850394 bl       #0x221ac0
001406A0 e00313aa mov      x0, x19
001406A4 c37cff97 bl       #0x11f9b0
001406A8 a00800b4 cbz      x0, #0x1407bc
001406AC e00313aa mov      x0, x19
001406B0 c07cff97 bl       #0x11f9b0
001406B4 08e442f9 ldr      x8, [x0, #0x5c8]
001406B8 280800b4 cbz      x8, #0x1407bc
001406BC e00313aa mov      x0, x19
001406C0 bc7cff97 bl       #0x11f9b0
001406C4 08e442f9 ldr      x8, [x0, #0x5c8]
001406C8 085940f9 ldr      x8, [x8, #0xb0]
001406CC 880700b4 cbz      x8, #0x1407bc
001406D0 e00313aa mov      x0, x19
001406D4 b77cff97 bl       #0x11f9b0
001406D8 08e442f9 ldr      x8, [x0, #0x5c8]
001406DC 0a3300b0 adrp     x10, #0x7a1000
001406E0 298d96d2 mov      x9, #0xb469
001406E4 09b9a4f2 movk     x9, #0x25c8, lsl #16
001406E8 4a7545f9 ldr      x10, [x10, #0xae8]
001406EC 89c2c3f2 movk     x9, #0x1e14, lsl #32
001406F0 c982f6f2 movk     x9, #0xb416, lsl #48
001406F4 62018052 mov      w2, #0xb
001406F8 005940f9 ldr      x0, [x8, #0xb0]
001406FC c8038052 mov      w8, #0x1e
00140700 e1030091 mov      x1, sp
00140704 e87f01a9 stp      x8, xzr, [sp, #0x10]
00140708 a86300d1 sub      x8, x29, #0x18
0014070C e92b00a9 stp      x9, x10, [sp]
00140710 d053fb97 bl       #0x15650
00140714 e00f40f9 ldr      x0, [sp, #0x18]
00140718 800000b4 cbz      x0, #0x140728
0014071C 088c44f8 ldr      x8, [x0, #0x48]!
00140720 080d40f9 ldr      x8, [x8, #0x18]
00140724 00013fd6 blr      x8
00140728 a0835ef8 ldur     x0, [x29, #-0x18]
0014072C 800400b4 cbz      x0, #0x1407bc
00140730 143040f9 ldr      x20, [x0, #0x60]
00140734 f40300b4 cbz      x20, #0x1407b0
00140738 888e44f8 ldr      x8, [x20, #0x48]!
0014073C e00314aa mov      x0, x20
00140740 080940f9 ldr      x8, [x8, #0x10]
00140744 00013fd6 blr      x8
00140748 880240f9 ldr      x8, [x20]
0014074C e00314aa mov      x0, x20
00140750 080d40f9 ldr      x8, [x8, #0x18]
00140754 00013fd6 blr      x8
00140758 a8835ef8 ldur     x8, [x29, #-0x18]
0014075C 143140f9 ldr      x20, [x8, #0x60]
00140760 b40000b4 cbz      x20, #0x140774
00140764 e00314aa mov      x0, x20
00140768 088c44f8 ldr      x8, [x0, #0x48]!
0014076C 080940f9 ldr      x8, [x8, #0x10]
00140770 00013fd6 blr      x8
00140774 625e40f9 ldr      x2, [x19, #0xb8]
00140778 c86999d2 mov      x8, #0xcb4e
0014077C 884da0f2 movk     x8, #0x26c, lsl #16
00140780 883bd1f2 movk     x8, #0x89dc, lsl #32
00140784 281ff8f2 movk     x8, #0xc0f9, lsl #48
00140788 e80300f9 str      x8, [sp]
0014078C e1030091 mov      x1, sp
00140790 e00314aa mov      x0, x20
00140794 81c90e94 bl       #0x4f2d98
00140798 888e44f8 ldr      x8, [x20, #0x48]!
0014079C e00314aa mov      x0, x20
001407A0 080d40f9 ldr      x8, [x8, #0x18]
001407A4 00013fd6 blr      x8
001407A8 a0835ef8 ldur     x0, [x29, #-0x18]
001407AC 800000b4 cbz      x0, #0x1407bc
001407B0 088c44f8 ldr      x8, [x0, #0x48]!
001407B4 080d40f9 ldr      x8, [x8, #0x18]
001407B8 00013fd6 blr      x8
001407BC 695e40f9 ldr      x9, [x19, #0xb8]
001407C0 28008052 mov      w8, #1
001407C4 e1031f2a mov      w1, wzr
001407C8 e8530039 strb     w8, [sp, #0x14]
001407CC e97f00a9 stp      x9, xzr, [sp]
001407D0 e80b00b9 str      w8, [sp, #8]
001407D4 684240f9 ldr      x8, [x19, #0x80]
001407D8 29208052 mov      w9, #0x101
001407DC 0920a072 movk     w9, #0x100, lsl #16
001407E0 e91300b9 str      w9, [sp, #0x10]
001407E4 002143f9 ldr      x0, [x8, #0x640]
001407E8 080c46f8 ldr      x8, [x0, #0x60]!
001407EC 080540f9 ldr      x8, [x8, #8]
001407F0 00013fd6 blr      x8
001407F4 604240f9 ldr      x0, [x19, #0x80]
001407F8 e1030091 mov      x1, sp
001407FC 69c5fb97 bl       #0x31da0
00140800 604240f9 ldr      x0, [x19, #0x80]
00140804 e1031f2a mov      w1, wzr
00140808 aea1fb97 bl       #0x28ec0
0014080C 480180d2 mov      x8, #0xa
00140810 e0031f2a mov      w0, wzr
00140814 c800c0f2 movk     x8, #6, lsl #32
00140818 683e00f9 str      x8, [x19, #0x78]
0014081C f44f4ba9 ldp      x20, x19, [sp, #0xb0]
00140820 f55340f9 ldr      x21, [sp, #0xa0]
00140824 fd7b49a9 ldp      x29, x30, [sp, #0x90]
00140828 ff030391 add      sp, sp, #0xc0
0014082C c0035fd6 ret      
00140830 683640f9 ldr      x8, [x19, #0x68]
00140834 880200b4 cbz      x8, #0x140884
00140838 143140f9 ldr      x20, [x8, #0x60]
0014083C 740200b4 cbz      x20, #0x140888
00140840 880240f9 ldr      x8, [x20]
00140844 e00314aa mov      x0, x20
00140848 080140f9 ldr      x8, [x8]
0014084C 00013fd6 blr      x8
00140850 f50300aa mov      x21, x0
00140854 bdf7ff97 bl       #0x13e748
00140858 1f0015eb cmp      x0, x21
0014085C c0000054 b.eq     #0x140874
00140860 b50240f9 ldr      x21, [x21]
00140864 bf0200eb cmp      x21, x0
00140868 a41a40fa ccmp     x21, #0, #4, ne
0014086C a1ffff54 b.ne     #0x140860
00140870 b50000b4 cbz      x21, #0x140884
00140874 944201d1 sub      x20, x20, #0x50
00140878 04000014 b        #0x140888
0014087C 88018052 mov      w8, #0xc
00140880 5d000014 b        #0x1409f4
00140884 f4031faa mov      x20, xzr
00140888 883240f9 ldr      x8, [x20, #0x60]
0014088C 89008052 mov      w9, #4
00140890 090100b9 str      w9, [x8]
00140894 684640f9 ldr      x8, [x19, #0x88]
00140898 893240f9 ldr      x9, [x20, #0x60]
0014089C 0a6d43f9 ldr      x10, [x8, #0x6d8]
001408A0 087143f9 ldr      x8, [x8, #0x6e0]
001408A4 2aa100a9 stp      x10, x8, [x9, #8]
001408A8 604640f9 ldr      x0, [x19, #0x88]
001408AC 01f046b9 ldr      w1, [x0, #0x6f0]
001408B0 57110094 bl       #0x144e0c
001408B4 883240f9 ldr      x8, [x20, #0x60]
001408B8 001900b9 str      w0, [x8, #0x18]
001408BC 20008052 mov      w0, #1
001408C0 f44f4ba9 ldp      x20, x19, [sp, #0xb0]
001408C4 f55340f9 ldr      x21, [sp, #0xa0]
001408C8 fd7b49a9 ldp      x29, x30, [sp, #0x90]
001408CC ff030391 add      sp, sp, #0xc0
001408D0 c0035fd6 ret      
001408D4 09195c39 ldrb     w9, [x8, #0x706]
001408D8 89070034 cbz      w9, #0x1409c8
001408DC e00313aa mov      x0, x19
001408E0 a2000094 bl       #0x140b68
001408E4 88008052 mov      w8, #4
001408E8 43000014 b        #0x1409f4
001408EC 5d2e1094 bl       #0x54c260
001408F0 412700f0 adrp     x1, #0x62b000
001408F4 21602b91 add      x1, x1, #0xad8
001408F8 e8030091 mov      x8, sp
001408FC 38010094 bl       #0x140ddc
00140900 602a41f9 ldr      x0, [x19, #0x250]
00140904 800000b4 cbz      x0, #0x140914
00140908 088c44f8 ldr      x8, [x0, #0x48]!
0014090C 080d40f9 ldr      x8, [x8, #0x18]
00140910 00013fd6 blr      x8
00140914 f40340f9 ldr      x20, [sp]
00140918 742a01f9 str      x20, [x19, #0x250]
0014091C 88be41f9 ldr      x8, [x20, #0x378]
00140920 c80000b4 cbz      x8, #0x140938
00140924 89c20d91 add      x9, x20, #0x370
00140928 80420e91 add      x0, x20, #0x390
0014092C 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00140930 3f7d00a9 stp      xzr, xzr, [x9]
00140934 00013fd6 blr      x8
00140938 1f2003d5 nop      
0014093C 28d50010 adr      x8, #0x1423e0
00140940 93ca01f9 str      x19, [x20, #0x390]
00140944 1f2003d5 nop      
00140948 49d90010 adr      x9, #0x142470
0014094C 88ba01f9 str      x8, [x20, #0x370]
00140950 1f2003d5 nop      
00140954 08d90010 adr      x8, #0x142474
00140958 89be01f9 str      x9, [x20, #0x378]
0014095C 1f2003d5 nop      
00140960 09d90010 adr      x9, #0x142480
00140964 88c201f9 str      x8, [x20, #0x380]
00140968 89c601f9 str      x9, [x20, #0x388]
0014096C 602a41f9 ldr      x0, [x19, #0x250]
00140970 81260090 adrp     x1, #0x610000
00140974 215c3a91 add      x1, x1, #0xe97
00140978 02008012 mov      w2, #-1
0014097C 03028052 mov      w3, #0x10
00140980 fb9f0e94 bl       #0x4e896c
00140984 68008052 mov      w8, #3
00140988 1b000014 b        #0x1409f4
0014098C e00313aa mov      x0, x19
00140990 ec010094 bl       #0x141140
00140994 a8008052 mov      w8, #5
00140998 604240f9 ldr      x0, [x19, #0x80]
0014099C 21008052 mov      w1, #1
001409A0 687a00b9 str      w8, [x19, #0x78]
001409A4 55c5fb97 bl       #0x31ef8
001409A8 e0031f2a mov      w0, wzr
001409AC f44f4ba9 ldp      x20, x19, [sp, #0xb0]
001409B0 f55340f9 ldr      x21, [sp, #0xa0]
001409B4 fd7b49a9 ldp      x29, x30, [sp, #0x90]
001409B8 ff030391 add      sp, sp, #0xc0
001409BC c0035fd6 ret      
001409C0 c8018052 mov      w8, #0xe
001409C4 0c000014 b        #0x1409f4
001409C8 08115c39 ldrb     w8, [x8, #0x704]
001409CC 68000034 cbz      w8, #0x1409d8
001409D0 c8008052 mov      w8, #6
001409D4 08000014 b        #0x1409f4
001409D8 e0031f2a mov      w0, wzr
001409DC f44f4ba9 ldp      x20, x19, [sp, #0xb0]
001409E0 f55340f9 ldr      x21, [sp, #0xa0]
001409E4 fd7b49a9 ldp      x29, x30, [sp, #0x90]
001409E8 ff030391 add      sp, sp, #0xc0
001409EC c0035fd6 ret      
001409F0 28028052 mov      w8, #0x11
001409F4 e0031f2a mov      w0, wzr
001409F8 687a00b9 str      w8, [x19, #0x78]
001409FC f44f4ba9 ldp      x20, x19, [sp, #0xb0]
00140A00 f55340f9 ldr      x21, [sp, #0xa0]
00140A04 fd7b49a9 ldp      x29, x30, [sp, #0x90]
00140A08 ff030391 add      sp, sp, #0xc0
00140A0C c0035fd6 ret      
~~~
### 0x1423e0 (36 slots)
~~~asm
001423E0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001423E4 f50b00f9 str      x21, [sp, #0x10]
001423E8 f44f02a9 stp      x20, x19, [sp, #0x20]
001423EC fd030091 mov      x29, sp
001423F0 150040f9 ldr      x21, [x0]
001423F4 a83640f9 ldr      x8, [x21, #0x68]
001423F8 133140f9 ldr      x19, [x8, #0x60]
001423FC 680240f9 ldr      x8, [x19]
00142400 e00313aa mov      x0, x19
00142404 080140f9 ldr      x8, [x8]
00142408 00013fd6 blr      x8
0014240C f40300aa mov      x20, x0
00142410 cef0ff97 bl       #0x13e748
00142414 1f0014eb cmp      x0, x20
00142418 c0000054 b.eq     #0x142430
0014241C 1f2003d5 nop      
00142420 940240f9 ldr      x20, [x20]
00142424 9f0200eb cmp      x20, x0
00142428 841a40fa ccmp     x20, #0, #4, ne
0014242C a1ffff54 b.ne     #0x142420
00142430 680a40f9 ldr      x8, [x19, #0x10]
00142434 a04640f9 ldr      x0, [x21, #0x88]
00142438 080540b9 ldr      w8, [x8, #4]
0014243C 01f046b9 ldr      w1, [x0, #0x6f0]
00142440 1f010071 cmp      w8, #0
00142444 f3179f1a cset     w19, eq
00142448 710a0094 bl       #0x144e0c
0014244C a84640f9 ldr      x8, [x21, #0x88]
00142450 e203132a mov      w2, w19
00142454 01611b91 add      x1, x8, #0x6d8
00142458 8a8a0394 bl       #0x224e80
0014245C f44f42a9 ldp      x20, x19, [sp, #0x20]
00142460 20008052 mov      w0, #1
00142464 f50b40f9 ldr      x21, [sp, #0x10]
00142468 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0014246C c0035fd6 ret      
~~~
### 0x16ee90 (555 slots)
~~~asm
0016EE90 ff0302d1 sub      sp, sp, #0x80
0016EE94 fd7b03a9 stp      x29, x30, [sp, #0x30]
0016EE98 fa6704a9 stp      x26, x25, [sp, #0x40]
0016EE9C f85f05a9 stp      x24, x23, [sp, #0x50]
0016EEA0 f65706a9 stp      x22, x21, [sp, #0x60]
0016EEA4 f44f07a9 stp      x20, x19, [sp, #0x70]
0016EEA8 fdc30091 add      x29, sp, #0x30
0016EEAC f30300aa mov      x19, x0
0016EEB0 612500d0 adrp     x1, #0x61c000
0016EEB4 21983191 add      x1, x1, #0xc66
0016EEB8 e0430091 add      x0, sp, #0x10
0016EEBC 466cfa97 bl       #0x9fd4
0016EEC0 603a40f9 ldr      x0, [x19, #0x70]
0016EEC4 800000b4 cbz      x0, #0x16eed4
0016EEC8 088c44f8 ldr      x8, [x0, #0x48]!
0016EECC 080d40f9 ldr      x8, [x8, #0x18]
0016EED0 00013fd6 blr      x8
0016EED4 e80b40f9 ldr      x8, [sp, #0x10]
0016EED8 683a00f9 str      x8, [x19, #0x70]
0016EEDC 683240f9 ldr      x8, [x19, #0x60]
0016EEE0 143140f9 ldr      x20, [x8, #0x60]
0016EEE4 880240f9 ldr      x8, [x20]
0016EEE8 e00314aa mov      x0, x20
0016EEEC 080140f9 ldr      x8, [x8]
0016EEF0 00013fd6 blr      x8
0016EEF4 f50300aa mov      x21, x0
0016EEF8 99dcfa97 bl       #0x2615c
0016EEFC 1f0015eb cmp      x0, x21
0016EF00 a0000054 b.eq     #0x16ef14
0016EF04 b50240f9 ldr      x21, [x21]
0016EF08 bf0200eb cmp      x21, x0
0016EF0C a41a40fa ccmp     x21, #0, #4, ne
0016EF10 a1ffff54 b.ne     #0x16ef04
0016EF14 80be42f9 ldr      x0, [x20, #0x578]
0016EF18 c8cd99d2 mov      x8, #0xce6e
0016EF1C e8b5bdf2 movk     x8, #0xedaf, lsl #16
0016EF20 28facdf2 movk     x8, #0x6fd1, lsl #32
0016EF24 68eee1f2 movk     x8, #0xf73, lsl #48
0016EF28 89250090 adrp     x9, #0x61e000
0016EF2C 297d0e91 add      x9, x9, #0x39f
0016EF30 e82701a9 stp      x8, x9, [sp, #0x10]
0016EF34 28028052 mov      w8, #0x11
0016EF38 e1430091 add      x1, sp, #0x10
0016EF3C e87f02a9 stp      x8, xzr, [sp, #0x20]
0016EF40 9050fc97 bl       #0x83180
0016EF44 f40300aa mov      x20, x0
0016EF48 e01740f9 ldr      x0, [sp, #0x28]
0016EF4C 800000b4 cbz      x0, #0x16ef5c
0016EF50 088c44f8 ldr      x8, [x0, #0x48]!
0016EF54 080d40f9 ldr      x8, [x8, #0x18]
0016EF58 00013fd6 blr      x8
0016EF5C 683240f9 ldr      x8, [x19, #0x60]
0016EF60 744200f9 str      x20, [x19, #0x80]
0016EF64 740640f9 ldr      x20, [x19, #8]
0016EF68 153140f9 ldr      x21, [x8, #0x60]
0016EF6C a80240f9 ldr      x8, [x21]
0016EF70 e00315aa mov      x0, x21
0016EF74 080140f9 ldr      x8, [x8]
0016EF78 00013fd6 blr      x8
0016EF7C f60300aa mov      x22, x0
0016EF80 77dcfa97 bl       #0x2615c
0016EF84 1f0016eb cmp      x0, x22
0016EF88 c0000054 b.eq     #0x16efa0
0016EF8C 1f2003d5 nop      
0016EF90 d60240f9 ldr      x22, [x22]
0016EF94 df0200eb cmp      x22, x0
0016EF98 c41a40fa ccmp     x22, #0, #4, ne
0016EF9C a1ffff54 b.ne     #0x16ef90
0016EFA0 a8be42f9 ldr      x8, [x21, #0x578]
0016EFA4 e1031f2a mov      w1, wzr
0016EFA8 005940f9 ldr      x0, [x8, #0xb0]
0016EFAC e8430091 add      x8, sp, #0x10
0016EFB0 c899fa97 bl       #0x156d0
0016EFB4 e00b40f9 ldr      x0, [sp, #0x10]
0016EFB8 153040f9 ldr      x21, [x0, #0x60]
0016EFBC f50000b4 cbz      x21, #0x16efd8
0016EFC0 e00315aa mov      x0, x21
0016EFC4 088c44f8 ldr      x8, [x0, #0x48]!
0016EFC8 080940f9 ldr      x8, [x8, #0x10]
0016EFCC 00013fd6 blr      x8
0016EFD0 e00b40f9 ldr      x0, [sp, #0x10]
0016EFD4 800000b4 cbz      x0, #0x16efe4
0016EFD8 088c44f8 ldr      x8, [x0, #0x48]!
0016EFDC 080d40f9 ldr      x8, [x8, #0x18]
0016EFE0 00013fd6 blr      x8
0016EFE4 08208052 mov      w8, #0x100
0016EFE8 e1330091 add      x1, sp, #0xc
0016EFEC e80f00b9 str      w8, [sp, #0xc]
0016EFF0 e8430091 add      x8, sp, #0x10
0016EFF4 e00314aa mov      x0, x20
0016EFF8 5e8afa97 bl       #0x11970
0016EFFC 604a40f9 ldr      x0, [x19, #0x90]
0016F000 800000b4 cbz      x0, #0x16f010
0016F004 088c44f8 ldr      x8, [x0, #0x48]!
0016F008 080d40f9 ldr      x8, [x8, #0x18]
0016F00C 00013fd6 blr      x8
0016F010 e80b40f9 ldr      x8, [sp, #0x10]
0016F014 684a00f9 str      x8, [x19, #0x90]
0016F018 684240f9 ldr      x8, [x19, #0x80]
0016F01C 166941f9 ldr      x22, [x8, #0x2d0]
0016F020 b60000b4 cbz      x22, #0x16f034
0016F024 e00316aa mov      x0, x22
0016F028 088c44f8 ldr      x8, [x0, #0x48]!
0016F02C 080940f9 ldr      x8, [x8, #0x10]
0016F030 00013fd6 blr      x8
0016F034 d77641f9 ldr      x23, [x22, #0x2e8]
0016F038 48ad83d2 mov      x8, #0x1d6a
0016F03C 88b0a9f2 movk     x8, #0x4d84, lsl #16
0016F040 a88dd4f2 movk     x8, #0xa46d, lsl #32
0016F044 a8eae3f2 movk     x8, #0x1f55, lsl #48
0016F048 e80b00f9 str      x8, [sp, #0x10]
0016F04C 371d00b4 cbz      x23, #0x16f3f0
0016F050 f80317aa mov      x24, x23
0016F054 088f44f8 ldr      x8, [x24, #0x48]!
0016F058 e00318aa mov      x0, x24
0016F05C 080940f9 ldr      x8, [x8, #0x10]
0016F060 00013fd6 blr      x8
0016F064 e1430091 add      x1, sp, #0x10
0016F068 e00315aa mov      x0, x21
0016F06C e20317aa mov      x2, x23
0016F070 4a0f0e94 bl       #0x4f2d98
0016F074 080340f9 ldr      x8, [x24]
0016F078 e00318aa mov      x0, x24
0016F07C 080d40f9 ldr      x8, [x8, #0x18]
0016F080 00013fd6 blr      x8
0016F084 78420491 add      x24, x19, #0x110
0016F088 e00318aa mov      x0, x24
0016F08C 61d00294 bl       #0x223210
0016F090 d77241f9 ldr      x23, [x22, #0x2e0]
0016F094 b70000b4 cbz      x23, #0x16f0a8
0016F098 e00317aa mov      x0, x23
0016F09C 088c44f8 ldr      x8, [x0, #0x48]!
0016F0A0 080940f9 ldr      x8, [x8, #0x10]
0016F0A4 00013fd6 blr      x8
0016F0A8 020340b9 ldr      w2, [x24]
0016F0AC e00317aa mov      x0, x23
0016F0B0 e1031f2a mov      w1, wzr
0016F0B4 83008052 mov      w3, #4
0016F0B8 e4031f2a mov      w4, wzr
0016F0BC 25008052 mov      w5, #1
0016F0C0 12ddfb97 bl       #0x66508
0016F0C4 e88e44f8 ldr      x8, [x23, #0x48]!
0016F0C8 e00317aa mov      x0, x23
0016F0CC 080d40f9 ldr      x8, [x8, #0x18]
0016F0D0 00013fd6 blr      x8
0016F0D4 d77241f9 ldr      x23, [x22, #0x2e0]
0016F0D8 b70000b4 cbz      x23, #0x16f0ec
0016F0DC e00317aa mov      x0, x23
0016F0E0 088c44f8 ldr      x8, [x0, #0x48]!
0016F0E4 080940f9 ldr      x8, [x8, #0x10]
0016F0E8 00013fd6 blr      x8
0016F0EC 794a40f9 ldr      x25, [x19, #0x90]
0016F0F0 d87641f9 ldr      x24, [x22, #0x2e8]
0016F0F4 b80000b4 cbz      x24, #0x16f108
0016F0F8 e00318aa mov      x0, x24
0016F0FC 088c44f8 ldr      x8, [x0, #0x48]!
0016F100 080940f9 ldr      x8, [x8, #0x10]
0016F104 00013fd6 blr      x8
0016F108 e00317aa mov      x0, x23
0016F10C e10319aa mov      x1, x25
0016F110 e20318aa mov      x2, x24
0016F114 a8d3fb97 bl       #0x63fb4
0016F118 088f44f8 ldr      x8, [x24, #0x48]!
0016F11C e00318aa mov      x0, x24
0016F120 080d40f9 ldr      x8, [x8, #0x18]
0016F124 00013fd6 blr      x8
0016F128 e88e44f8 ldr      x8, [x23, #0x48]!
0016F12C e00317aa mov      x0, x23
0016F130 080d40f9 ldr      x8, [x8, #0x18]
0016F134 00013fd6 blr      x8
0016F138 17208052 mov      w23, #0x100
0016F13C e8430091 add      x8, sp, #0x10
0016F140 f70f00b9 str      w23, [sp, #0xc]
0016F144 e1330091 add      x1, sp, #0xc
0016F148 e00314aa mov      x0, x20
0016F14C 098afa97 bl       #0x11970
0016F150 604e40f9 ldr      x0, [x19, #0x98]
0016F154 800000b4 cbz      x0, #0x16f164
0016F158 088c44f8 ldr      x8, [x0, #0x48]!
0016F15C 080d40f9 ldr      x8, [x8, #0x18]
0016F160 00013fd6 blr      x8
0016F164 e20b40f9 ldr      x2, [sp, #0x10]
0016F168 48ec83d2 mov      x8, #0x1f62
0016F16C 28cab7f2 movk     x8, #0xbe51, lsl #16
0016F170 a82ccbf2 movk     x8, #0x5965, lsl #32
0016F174 a866e1f2 movk     x8, #0xb35, lsl #48
0016F178 e80b00f9 str      x8, [sp, #0x10]
0016F17C e1430091 add      x1, sp, #0x10
0016F180 e00315aa mov      x0, x21
0016F184 624e00f9 str      x2, [x19, #0x98]
0016F188 040f0e94 bl       #0x4f2d98
0016F18C e8430091 add      x8, sp, #0x10
0016F190 e1330091 add      x1, sp, #0xc
0016F194 f70f00b9 str      w23, [sp, #0xc]
0016F198 e00314aa mov      x0, x20
0016F19C f589fa97 bl       #0x11970
0016F1A0 605240f9 ldr      x0, [x19, #0xa0]
0016F1A4 800000b4 cbz      x0, #0x16f1b4
0016F1A8 088c44f8 ldr      x8, [x0, #0x48]!
0016F1AC 080d40f9 ldr      x8, [x8, #0x18]
0016F1B0 00013fd6 blr      x8
0016F1B4 e20b40f9 ldr      x2, [sp, #0x10]
0016F1B8 a84f92d2 mov      x8, #0x927d
0016F1BC 28cbb7f2 movk     x8, #0xbe59, lsl #16
0016F1C0 a86ccdf2 movk     x8, #0x6b65, lsl #32
0016F1C4 e867e1f2 movk     x8, #0xb3f, lsl #48
0016F1C8 e80b00f9 str      x8, [sp, #0x10]
0016F1CC e1430091 add      x1, sp, #0x10
0016F1D0 e00315aa mov      x0, x21
0016F1D4 625200f9 str      x2, [x19, #0xa0]
0016F1D8 f00e0e94 bl       #0x4f2d98
0016F1DC e8430091 add      x8, sp, #0x10
0016F1E0 e1330091 add      x1, sp, #0xc
0016F1E4 f70f00b9 str      w23, [sp, #0xc]
0016F1E8 e00314aa mov      x0, x20
0016F1EC e189fa97 bl       #0x11970
0016F1F0 605640f9 ldr      x0, [x19, #0xa8]
0016F1F4 800000b4 cbz      x0, #0x16f204
0016F1F8 088c44f8 ldr      x8, [x0, #0x48]!
0016F1FC 080d40f9 ldr      x8, [x8, #0x18]
0016F200 00013fd6 blr      x8
0016F204 e20b40f9 ldr      x2, [sp, #0x10]
0016F208 c83f91d2 mov      x8, #0x89fe
0016F20C 28cbb7f2 movk     x8, #0xbe59, lsl #16
0016F210 a8ccccf2 movk     x8, #0x6665, lsl #32
0016F214 e867e1f2 movk     x8, #0xb3f, lsl #48
0016F218 e80b00f9 str      x8, [sp, #0x10]
0016F21C e1430091 add      x1, sp, #0x10
0016F220 e00315aa mov      x0, x21
0016F224 625600f9 str      x2, [x19, #0xa8]
0016F228 dc0e0e94 bl       #0x4f2d98
0016F22C e8430091 add      x8, sp, #0x10
0016F230 e1330091 add      x1, sp, #0xc
0016F234 f70f00b9 str      w23, [sp, #0xc]
0016F238 e00314aa mov      x0, x20
0016F23C cd89fa97 bl       #0x11970
0016F240 605a40f9 ldr      x0, [x19, #0xb0]
0016F244 800000b4 cbz      x0, #0x16f254
0016F248 088c44f8 ldr      x8, [x0, #0x48]!
0016F24C 080d40f9 ldr      x8, [x8, #0x18]
0016F250 00013fd6 blr      x8
0016F254 e20b40f9 ldr      x2, [sp, #0x10]
0016F258 884e8ad2 mov      x8, #0x5274
0016F25C e8cab7f2 movk     x8, #0xbe57, lsl #16
0016F260 a8acccf2 movk     x8, #0x6565, lsl #32
0016F264 8867e1f2 movk     x8, #0xb3c, lsl #48
0016F268 e80b00f9 str      x8, [sp, #0x10]
0016F26C e1430091 add      x1, sp, #0x10
0016F270 e00315aa mov      x0, x21
0016F274 625a00f9 str      x2, [x19, #0xb0]
0016F278 c80e0e94 bl       #0x4f2d98
0016F27C e8430091 add      x8, sp, #0x10
0016F280 e1330091 add      x1, sp, #0xc
0016F284 f70f00b9 str      w23, [sp, #0xc]
0016F288 e00314aa mov      x0, x20
0016F28C b989fa97 bl       #0x11970
0016F290 605e40f9 ldr      x0, [x19, #0xb8]
0016F294 800000b4 cbz      x0, #0x16f2a4
0016F298 088c44f8 ldr      x8, [x0, #0x48]!
0016F29C 080d40f9 ldr      x8, [x8, #0x18]
0016F2A0 00013fd6 blr      x8
0016F2A4 e20b40f9 ldr      x2, [sp, #0x10]
0016F2A8 287c80d2 mov      x8, #0x3e1
0016F2AC 28b0a9f2 movk     x8, #0x4d81, lsl #16
0016F2B0 a8cdc3f2 movk     x8, #0x1e6d, lsl #32
0016F2B4 48eae3f2 movk     x8, #0x1f52, lsl #48
0016F2B8 e80b00f9 str      x8, [sp, #0x10]
0016F2BC e1430091 add      x1, sp, #0x10
0016F2C0 e00315aa mov      x0, x21
0016F2C4 625e00f9 str      x2, [x19, #0xb8]
0016F2C8 b40e0e94 bl       #0x4f2d98
0016F2CC e8430091 add      x8, sp, #0x10
0016F2D0 e1330091 add      x1, sp, #0xc
0016F2D4 f70f00b9 str      w23, [sp, #0xc]
0016F2D8 e00314aa mov      x0, x20
0016F2DC a589fa97 bl       #0x11970
0016F2E0 606240f9 ldr      x0, [x19, #0xc0]
0016F2E4 800000b4 cbz      x0, #0x16f2f4
0016F2E8 088c44f8 ldr      x8, [x0, #0x48]!
0016F2EC 080d40f9 ldr      x8, [x8, #0x18]
0016F2F0 00013fd6 blr      x8
0016F2F4 e20b40f9 ldr      x2, [sp, #0x10]
0016F2F8 19ba98d2 mov      x25, #0xc5d0
0016F2FC 79c9b7f2 movk     x25, #0xbe4b, lsl #16
0016F300 b9acd9f2 movk     x25, #0xcd65, lsl #32
0016F304 d965e1f2 movk     x25, #0xb2e, lsl #48
0016F308 f90b00f9 str      x25, [sp, #0x10]
0016F30C e1430091 add      x1, sp, #0x10
0016F310 e00315aa mov      x0, x21
0016F314 626200f9 str      x2, [x19, #0xc0]
0016F318 a00e0e94 bl       #0x4f2d98
0016F31C e8430091 add      x8, sp, #0x10
0016F320 e1330091 add      x1, sp, #0xc
0016F324 f70f00b9 str      w23, [sp, #0xc]
0016F328 e00314aa mov      x0, x20
0016F32C 9189fa97 bl       #0x11970
0016F330 606640f9 ldr      x0, [x19, #0xc8]
0016F334 800000b4 cbz      x0, #0x16f344
0016F338 088c44f8 ldr      x8, [x0, #0x48]!
0016F33C 080d40f9 ldr      x8, [x8, #0x18]
0016F340 00013fd6 blr      x8
0016F344 e20b40f9 ldr      x2, [sp, #0x10]
0016F348 7a1d87d2 mov      x26, #0x38eb
0016F34C 9acab7f2 movk     x26, #0xbe54, lsl #16
0016F350 baecdbf2 movk     x26, #0xdf65, lsl #32
0016F354 1a67e1f2 movk     x26, #0xb38, lsl #48
0016F358 fa0b00f9 str      x26, [sp, #0x10]
0016F35C e1430091 add      x1, sp, #0x10
0016F360 e00315aa mov      x0, x21
0016F364 626600f9 str      x2, [x19, #0xc8]
0016F368 8c0e0e94 bl       #0x4f2d98
0016F36C e8430091 add      x8, sp, #0x10
0016F370 e1330091 add      x1, sp, #0xc
0016F374 f70f00b9 str      w23, [sp, #0xc]
0016F378 e00314aa mov      x0, x20
0016F37C 7d89fa97 bl       #0x11970
0016F380 606a40f9 ldr      x0, [x19, #0xd0]
0016F384 800000b4 cbz      x0, #0x16f394
0016F388 088c44f8 ldr      x8, [x0, #0x48]!
0016F38C 080d40f9 ldr      x8, [x8, #0x18]
0016F390 00013fd6 blr      x8
0016F394 e80b40f9 ldr      x8, [sp, #0x10]
0016F398 686a00f9 str      x8, [x19, #0xd0]
0016F39C c8758ed2 mov      x8, #0x73ae
0016F3A0 e8b1a9f2 movk     x8, #0x4d8f, lsl #16
0016F3A4 d77641f9 ldr      x23, [x22, #0x2e8]
0016F3A8 a88dc3f2 movk     x8, #0x1c6d, lsl #32
0016F3AC 68ece3f2 movk     x8, #0x1f63, lsl #48
0016F3B0 e80b00f9 str      x8, [sp, #0x10]
0016F3B4 370300b4 cbz      x23, #0x16f418
0016F3B8 f80317aa mov      x24, x23
0016F3BC 088f44f8 ldr      x8, [x24, #0x48]!
0016F3C0 e00318aa mov      x0, x24
0016F3C4 080940f9 ldr      x8, [x8, #0x10]
0016F3C8 00013fd6 blr      x8
0016F3CC e1430091 add      x1, sp, #0x10
0016F3D0 e00315aa mov      x0, x21
0016F3D4 e20317aa mov      x2, x23
0016F3D8 700e0e94 bl       #0x4f2d98
0016F3DC 080340f9 ldr      x8, [x24]
0016F3E0 e00318aa mov      x0, x24
0016F3E4 080d40f9 ldr      x8, [x8, #0x18]
0016F3E8 00013fd6 blr      x8
0016F3EC 0f000014 b        #0x16f428
0016F3F0 e1430091 add      x1, sp, #0x10
0016F3F4 e00315aa mov      x0, x21
0016F3F8 e2031faa mov      x2, xzr
0016F3FC 670e0e94 bl       #0x4f2d98
0016F400 78420491 add      x24, x19, #0x110
0016F404 e00318aa mov      x0, x24
0016F408 82cf0294 bl       #0x223210
0016F40C d77241f9 ldr      x23, [x22, #0x2e0]
0016F410 57e4ffb5 cbnz     x23, #0x16f098
0016F414 25ffff17 b        #0x16f0a8
0016F418 e1430091 add      x1, sp, #0x10
0016F41C e00315aa mov      x0, x21
0016F420 e2031faa mov      x2, xzr
0016F424 5d0e0e94 bl       #0x4f2d98
0016F428 17208052 mov      w23, #0x100
0016F42C e8430091 add      x8, sp, #0x10
0016F430 f70f00b9 str      w23, [sp, #0xc]
0016F434 e1330091 add      x1, sp, #0xc
0016F438 e00314aa mov      x0, x20
0016F43C 4d89fa97 bl       #0x11970
0016F440 606e40f9 ldr      x0, [x19, #0xd8]
0016F444 800000b4 cbz      x0, #0x16f454
0016F448 088c44f8 ldr      x8, [x0, #0x48]!
0016F44C 080d40f9 ldr      x8, [x8, #0x18]
0016F450 00013fd6 blr      x8
0016F454 e20b40f9 ldr      x2, [sp, #0x10]
0016F458 e1430091 add      x1, sp, #0x10
0016F45C e00315aa mov      x0, x21
0016F460 f90b00f9 str      x25, [sp, #0x10]
0016F464 626e00f9 str      x2, [x19, #0xd8]
0016F468 4c0e0e94 bl       #0x4f2d98
0016F46C e8430091 add      x8, sp, #0x10
0016F470 e1330091 add      x1, sp, #0xc
0016F474 f70f00b9 str      w23, [sp, #0xc]
0016F478 e00314aa mov      x0, x20
0016F47C 3d89fa97 bl       #0x11970
0016F480 607240f9 ldr      x0, [x19, #0xe0]
0016F484 800000b4 cbz      x0, #0x16f494
0016F488 088c44f8 ldr      x8, [x0, #0x48]!
0016F48C 080d40f9 ldr      x8, [x8, #0x18]
0016F490 00013fd6 blr      x8
0016F494 e20b40f9 ldr      x2, [sp, #0x10]
0016F498 e1430091 add      x1, sp, #0x10
0016F49C e00315aa mov      x0, x21
0016F4A0 fa0b00f9 str      x26, [sp, #0x10]
0016F4A4 627200f9 str      x2, [x19, #0xe0]
0016F4A8 3c0e0e94 bl       #0x4f2d98
0016F4AC e8430091 add      x8, sp, #0x10
0016F4B0 e1330091 add      x1, sp, #0xc
0016F4B4 f70f00b9 str      w23, [sp, #0xc]
0016F4B8 e00314aa mov      x0, x20
0016F4BC 2d89fa97 bl       #0x11970
0016F4C0 607640f9 ldr      x0, [x19, #0xe8]
0016F4C4 800000b4 cbz      x0, #0x16f4d4
0016F4C8 088c44f8 ldr      x8, [x0, #0x48]!
0016F4CC 080d40f9 ldr      x8, [x8, #0x18]
0016F4D0 00013fd6 blr      x8
0016F4D4 e20b40f9 ldr      x2, [sp, #0x10]
0016F4D8 481f81d2 mov      x8, #0x8fa
0016F4DC 28b0a9f2 movk     x8, #0x4d81, lsl #16
0016F4E0 a82dc4f2 movk     x8, #0x216d, lsl #32
0016F4E4 48eae3f2 movk     x8, #0x1f52, lsl #48
0016F4E8 e80b00f9 str      x8, [sp, #0x10]
0016F4EC e1430091 add      x1, sp, #0x10
0016F4F0 e00315aa mov      x0, x21
0016F4F4 627600f9 str      x2, [x19, #0xe8]
0016F4F8 280e0e94 bl       #0x4f2d98
0016F4FC e8430091 add      x8, sp, #0x10
0016F500 e1330091 add      x1, sp, #0xc
0016F504 f70f00b9 str      w23, [sp, #0xc]
0016F508 e00314aa mov      x0, x20
0016F50C 1989fa97 bl       #0x11970
0016F510 607a40f9 ldr      x0, [x19, #0xf0]
0016F514 800000b4 cbz      x0, #0x16f524
0016F518 088c44f8 ldr      x8, [x0, #0x48]!
0016F51C 080d40f9 ldr      x8, [x8, #0x18]
0016F520 00013fd6 blr      x8
0016F524 e20b40f9 ldr      x2, [sp, #0x10]
0016F528 e1430091 add      x1, sp, #0x10
0016F52C e00315aa mov      x0, x21
0016F530 f90b00f9 str      x25, [sp, #0x10]
0016F534 627a00f9 str      x2, [x19, #0xf0]
0016F538 180e0e94 bl       #0x4f2d98
0016F53C e8430091 add      x8, sp, #0x10
0016F540 e1330091 add      x1, sp, #0xc
0016F544 f70f00b9 str      w23, [sp, #0xc]
0016F548 e00314aa mov      x0, x20
0016F54C 0989fa97 bl       #0x11970
0016F550 607e40f9 ldr      x0, [x19, #0xf8]
0016F554 800000b4 cbz      x0, #0x16f564
0016F558 088c44f8 ldr      x8, [x0, #0x48]!
0016F55C 080d40f9 ldr      x8, [x8, #0x18]
0016F560 00013fd6 blr      x8
0016F564 e20b40f9 ldr      x2, [sp, #0x10]
0016F568 e1430091 add      x1, sp, #0x10
0016F56C e00315aa mov      x0, x21
0016F570 fa0b00f9 str      x26, [sp, #0x10]
0016F574 627e00f9 str      x2, [x19, #0xf8]
0016F578 080e0e94 bl       #0x4f2d98
0016F57C e8430091 add      x8, sp, #0x10
0016F580 e1330091 add      x1, sp, #0xc
0016F584 f70f00b9 str      w23, [sp, #0xc]
0016F588 e00314aa mov      x0, x20
0016F58C f988fa97 bl       #0x11970
0016F590 608240f9 ldr      x0, [x19, #0x100]
0016F594 800000b4 cbz      x0, #0x16f5a4
0016F598 088c44f8 ldr      x8, [x0, #0x48]!
0016F59C 080d40f9 ldr      x8, [x8, #0x18]
0016F5A0 00013fd6 blr      x8
0016F5A4 e20b40f9 ldr      x2, [sp, #0x10]
0016F5A8 084b9dd2 mov      x8, #0xea58
0016F5AC a8afa9f2 movk     x8, #0x4d7d, lsl #16
0016F5B0 a80dd3f2 movk     x8, #0x986d, lsl #32
0016F5B4 c8e9e3f2 movk     x8, #0x1f4e, lsl #48
0016F5B8 e80b00f9 str      x8, [sp, #0x10]
0016F5BC e1430091 add      x1, sp, #0x10
0016F5C0 e00315aa mov      x0, x21
0016F5C4 628200f9 str      x2, [x19, #0x100]
0016F5C8 f40d0e94 bl       #0x4f2d98
0016F5CC 08208052 mov      w8, #0x100
0016F5D0 e1330091 add      x1, sp, #0xc
0016F5D4 e80f00b9 str      w8, [sp, #0xc]
0016F5D8 e8430091 add      x8, sp, #0x10
0016F5DC e00314aa mov      x0, x20
0016F5E0 e488fa97 bl       #0x11970
0016F5E4 608640f9 ldr      x0, [x19, #0x108]
0016F5E8 800000b4 cbz      x0, #0x16f5f8
0016F5EC 088c44f8 ldr      x8, [x0, #0x48]!
0016F5F0 080d40f9 ldr      x8, [x8, #0x18]
0016F5F4 00013fd6 blr      x8
0016F5F8 e20b40f9 ldr      x2, [sp, #0x10]
0016F5FC e8a691d2 mov      x8, #0x8d37
0016F600 48b2a9f2 movk     x8, #0x4d92, lsl #16
0016F604 a84dd4f2 movk     x8, #0xa26d, lsl #32
0016F608 c8ece3f2 movk     x8, #0x1f66, lsl #48
0016F60C e80b00f9 str      x8, [sp, #0x10]
0016F610 e1430091 add      x1, sp, #0x10
0016F614 e00315aa mov      x0, x21
0016F618 628600f9 str      x2, [x19, #0x108]
0016F61C df0d0e94 bl       #0x4f2d98
0016F620 c88e44f8 ldr      x8, [x22, #0x48]!
0016F624 e00316aa mov      x0, x22
0016F628 080d40f9 ldr      x8, [x8, #0x18]
0016F62C 00013fd6 blr      x8
0016F630 a88e44f8 ldr      x8, [x21, #0x48]!
0016F634 e00315aa mov      x0, x21
0016F638 080d40f9 ldr      x8, [x8, #0x18]
0016F63C 00013fd6 blr      x8
0016F640 683240f9 ldr      x8, [x19, #0x60]
0016F644 143140f9 ldr      x20, [x8, #0x60]
0016F648 880240f9 ldr      x8, [x20]
0016F64C e00314aa mov      x0, x20
0016F650 080140f9 ldr      x8, [x8]
0016F654 00013fd6 blr      x8
0016F658 f50300aa mov      x21, x0
0016F65C c0dafa97 bl       #0x2615c
0016F660 1f0015eb cmp      x0, x21
0016F664 e0000054 b.eq     #0x16f680
0016F668 1f2003d5 nop      
0016F66C 1f2003d5 nop      
0016F670 b50240f9 ldr      x21, [x21]
0016F674 bf0200eb cmp      x21, x0
0016F678 a41a40fa ccmp     x21, #0, #4, ne
0016F67C a1ffff54 b.ne     #0x16f670
0016F680 88fa44f9 ldr      x8, [x20, #0x9f0]
0016F684 1f0100b9 str      wzr, [x8]
0016F688 683240f9 ldr      x8, [x19, #0x60]
0016F68C 143140f9 ldr      x20, [x8, #0x60]
0016F690 880240f9 ldr      x8, [x20]
0016F694 e00314aa mov      x0, x20
0016F698 080140f9 ldr      x8, [x8]
0016F69C 00013fd6 blr      x8
0016F6A0 f50300aa mov      x21, x0
0016F6A4 aedafa97 bl       #0x2615c
0016F6A8 1f0015eb cmp      x0, x21
0016F6AC a0000054 b.eq     #0x16f6c0
0016F6B0 b50240f9 ldr      x21, [x21]
0016F6B4 bf0200eb cmp      x21, x0
0016F6B8 a41a40fa ccmp     x21, #0, #4, ne
0016F6BC a1ffff54 b.ne     #0x16f6b0
0016F6C0 80be42f9 ldr      x0, [x20, #0x578]
0016F6C4 88539bd2 mov      x8, #0xda9c
0016F6C8 2869b1f2 movk     x8, #0x8b49, lsl #16
0016F6CC e886cef2 movk     x8, #0x7437, lsl #32
0016F6D0 e8a7eef2 movk     x8, #0x753f, lsl #48
0016F6D4 292500f0 adrp     x9, #0x616000
0016F6D8 29511f91 add      x9, x9, #0x7d4
0016F6DC e82701a9 stp      x8, x9, [sp, #0x10]
0016F6E0 08018052 mov      w8, #8
0016F6E4 e1430091 add      x1, sp, #0x10
0016F6E8 e87f02a9 stp      x8, xzr, [sp, #0x20]
0016F6EC 11fdff97 bl       #0x16eb30
0016F6F0 f40300aa mov      x20, x0
0016F6F4 e01740f9 ldr      x0, [sp, #0x28]
0016F6F8 800000b4 cbz      x0, #0x16f708
0016F6FC 088c44f8 ldr      x8, [x0, #0x48]!
0016F700 080d40f9 ldr      x8, [x8, #0x18]
0016F704 00013fd6 blr      x8
0016F708 744600f9 str      x20, [x19, #0x88]
0016F70C 740100b4 cbz      x20, #0x16f738
0016F710 e00314aa mov      x0, x20
0016F714 75040094 bl       #0x1708e8
0016F718 5ed70294 bl       #0x225490
0016F71C f44f47a9 ldp      x20, x19, [sp, #0x70]
0016F720 f65746a9 ldp      x22, x21, [sp, #0x60]
0016F724 f85f45a9 ldp      x24, x23, [sp, #0x50]
0016F728 fa6744a9 ldp      x26, x25, [sp, #0x40]
0016F72C fd7b43a9 ldp      x29, x30, [sp, #0x30]
0016F730 ff030291 add      sp, sp, #0x80
0016F734 c0035fd6 ret      
0016F738 021b1294 bl       #0x5f6340
~~~
### 0x16fd20 (68 slots)
~~~asm
0016FD20 ff8301d1 sub      sp, sp, #0x60
0016FD24 fd7b04a9 stp      x29, x30, [sp, #0x40]
0016FD28 f44f05a9 stp      x20, x19, [sp, #0x50]
0016FD2C fd030191 add      x29, sp, #0x40
0016FD30 f30300aa mov      x19, x0
0016FD34 004040f9 ldr      x0, [x0, #0x80]
0016FD38 ff08fb97 bl       #0x32134
0016FD3C 20070036 tbz      w0, #0, #0x16fe20
0016FD40 20c80294 bl       #0x221dc0
0016FD44 1fc90294 bl       #0x2221c0
0016FD48 00010037 tbnz     w0, #0, #0x16fd68
0016FD4C 14808452 mov      w20, #0x2400
0016FD50 941ea072 movk     w20, #0xf4, lsl #16
0016FD54 0f710f94 bl       #0x54c190
0016FD58 e00314aa mov      x0, x20
0016FD5C 7d191294 bl       #0x5f6350
0016FD60 18c90294 bl       #0x2221c0
0016FD64 80ff0736 tbz      w0, #0, #0x16fd54
0016FD68 698640f9 ldr      x9, [x19, #0x108]
0016FD6C 28008052 mov      w8, #1
0016FD70 ea830832 mov      w10, #0x1000100
0016FD74 604240f9 ldr      x0, [x19, #0x80]
0016FD78 a16300d1 sub      x1, x29, #0x18
0016FD7C a8c31f38 sturb    w8, [x29, #-4]
0016FD80 aa831fb8 stur     w10, [x29, #-8]
0016FD84 a9ff3ea9 stp      x9, xzr, [x29, #-0x18]
0016FD88 a8031fb8 stur     w8, [x29, #-0x10]
0016FD8C 0508fb97 bl       #0x31da0
0016FD90 604240f9 ldr      x0, [x19, #0x80]
0016FD94 e1031f2a mov      w1, wzr
0016FD98 4ae4fa97 bl       #0x28ec0
0016FD9C 684240f9 ldr      x8, [x19, #0x80]
0016FDA0 e1031f2a mov      w1, wzr
0016FDA4 002143f9 ldr      x0, [x8, #0x640]
0016FDA8 080c46f8 ldr      x8, [x0, #0x60]!
0016FDAC 080540f9 ldr      x8, [x8, #8]
0016FDB0 00013fd6 blr      x8
0016FDB4 e90c89d2 mov      x9, #0x4867
0016FDB8 096abbf2 movk     x9, #0xdb50, lsl #16
0016FDBC 082500d0 adrp     x8, #0x611000
0016FDC0 081d2791 add      x8, x8, #0x9c7
0016FDC4 c91bd0f2 movk     x9, #0x80de, lsl #32
0016FDC8 2969eaf2 movk     x9, #0x5349, lsl #48
0016FDCC e9a300a9 stp      x9, x8, [sp, #8]
0016FDD0 08038052 mov      w8, #0x18
0016FDD4 e0230091 add      x0, sp, #8
0016FDD8 e8ff01a9 stp      x8, xzr, [sp, #0x18]
0016FDDC 1c480594 bl       #0x2c1e4c
0016FDE0 e01340f9 ldr      x0, [sp, #0x20]
0016FDE4 800000b4 cbz      x0, #0x16fdf4
0016FDE8 088c44f8 ldr      x8, [x0, #0x48]!
0016FDEC 080d40f9 ldr      x8, [x8, #0x18]
0016FDF0 00013fd6 blr      x8
0016FDF4 e8230091 add      x8, sp, #8
0016FDF8 c2c10294 bl       #0x220500
0016FDFC e00740f9 ldr      x0, [sp, #8]
0016FE00 e0400294 bl       #0x200180
0016FE04 e00740f9 ldr      x0, [sp, #8]
0016FE08 800000b4 cbz      x0, #0x16fe18
0016FE0C 088c44f8 ldr      x8, [x0, #0x48]!
0016FE10 080d40f9 ldr      x8, [x8, #0x18]
0016FE14 00013fd6 blr      x8
0016FE18 c8008052 mov      w8, #6
0016FE1C 687a00b9 str      w8, [x19, #0x78]
0016FE20 f44f45a9 ldp      x20, x19, [sp, #0x50]
0016FE24 fd7b44a9 ldp      x29, x30, [sp, #0x40]
0016FE28 ff830191 add      sp, sp, #0x60
0016FE2C c0035fd6 ret      
~~~
### 0x221dc0 (142 slots)
~~~asm
00221DC0 ff0301d1 sub      sp, sp, #0x40
00221DC4 fd7b01a9 stp      x29, x30, [sp, #0x10]
00221DC8 f65702a9 stp      x22, x21, [sp, #0x20]
00221DCC f44f03a9 stp      x20, x19, [sp, #0x30]
00221DD0 fd430091 add      x29, sp, #0x10
00221DD4 23a90c94 bl       #0x54c260
00221DD8 48d03bd5 mrs      x8, tpidr_el0
00221DDC 16c97392 and      x22, x8, #0xffffffffffffe000
00221DE0 c84e40f9 ldr      x8, [x22, #0x98]
00221DE4 1f4100f1 cmp      x8, #0x10
00221DE8 60100054 b.eq     #0x221ff4
00221DEC c80e088b add      x8, x22, x8, lsl #3
00221DF0 01688052 mov      w1, #0x340
00221DF4 02028052 mov      w2, #0x10
00221DF8 f40300aa mov      x20, x0
00221DFC 000d00f9 str      x0, [x8, #0x18]
00221E00 c84e40f9 ldr      x8, [x22, #0x98]
00221E04 08050091 add      x8, x8, #1
00221E08 c84e00f9 str      x8, [x22, #0x98]
00221E0C 080040f9 ldr      x8, [x0]
00221E10 080940f9 ldr      x8, [x8, #0x10]
00221E14 00013fd6 blr      x8
00221E18 f50300aa mov      x21, x0
00221E1C a00000b5 cbnz     x0, #0x221e30
00221E20 880240f9 ldr      x8, [x20]
00221E24 e00314aa mov      x0, x20
00221E28 085d40f9 ldr      x8, [x8, #0xb8]
00221E2C 00013fd6 blr      x8
00221E30 e00315aa mov      x0, x21
00221E34 e10314aa mov      x1, x20
00221E38 e2031faa mov      x2, xzr
00221E3C c7ae0c94 bl       #0x54d958
00221E40 082c0090 adrp     x8, #0x7a1000
00221E44 f30315aa mov      x19, x21
00221E48 08dd43f9 ldr      x8, [x8, #0x7b8]
00221E4C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00221E50 09c10191 add      x9, x8, #0x70
00221E54 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00221E58 bf1201f9 str      xzr, [x21, #0x220]
00221E5C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00221E60 bf1601f9 str      xzr, [x21, #0x228]
00221E64 bf1a01f9 str      xzr, [x21, #0x230]
00221E68 bf1e01f9 str      xzr, [x21, #0x238]
00221E6C bf5201f9 str      xzr, [x21, #0x2a0]
00221E70 bf5601f9 str      xzr, [x21, #0x2a8]
00221E74 bf5a01f9 str      xzr, [x21, #0x2b0]
00221E78 bf5e01f9 str      xzr, [x21, #0x2b8]
00221E7C 698e04f8 str      x9, [x19, #0x48]!
00221E80 09c10291 add      x9, x8, #0xb0
00221E84 08410091 add      x8, x8, #0x10
00221E88 e00313aa mov      x0, x19
00221E8C a92a00f9 str      x9, [x21, #0x50]
00221E90 09028052 mov      w9, #0x10
00221E94 bf820c39 strb     wzr, [x21, #0x320]
00221E98 bfa20c39 strb     wzr, [x21, #0x328]
00221E9C bfc20c39 strb     wzr, [x21, #0x330]
00221EA0 a91200f9 str      x9, [x21, #0x20]
00221EA4 a85200a9 stp      x8, x20, [x21]
00221EA8 08688052 mov      w8, #0x340
00221EAC bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00221EB0 b52201a9 stp      x21, x8, [x21, #0x10]
00221EB4 c84e40f9 ldr      x8, [x22, #0x98]
00221EB8 080500d1 sub      x8, x8, #1
00221EBC c84e00f9 str      x8, [x22, #0x98]
00221EC0 680240f9 ldr      x8, [x19]
00221EC4 080940f9 ldr      x8, [x8, #0x10]
00221EC8 00013fd6 blr      x8
00221ECC e8030091 mov      x8, sp
00221ED0 e00315aa mov      x0, x21
00221ED4 dfdcfb97 bl       #0x119250
00221ED8 e00340f9 ldr      x0, [sp]
00221EDC e8230091 add      x8, sp, #8
00221EE0 46000094 bl       #0x221ff8
00221EE4 f40740f9 ldr      x20, [sp, #8]
00221EE8 e00314aa mov      x0, x20
00221EEC 99ae0c94 bl       #0x54d950
00221EF0 80020035 cbnz     w0, #0x221f40
00221EF4 881641f9 ldr      x8, [x20, #0x228]
00221EF8 c80000b4 cbz      x8, #0x221f10
00221EFC 89820891 add      x9, x20, #0x220
00221F00 80020991 add      x0, x20, #0x240
00221F04 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00221F08 3f7d00a9 stp      xzr, xzr, [x9]
00221F0C 00013fd6 blr      x8
00221F10 1f2003d5 nop      
00221F14 487e0310 adr      x8, #0x228edc
00221F18 881201f9 str      x8, [x20, #0x220]
00221F1C 1f2003d5 nop      
00221F20 097e0310 adr      x9, #0x228ee0
00221F24 891601f9 str      x9, [x20, #0x228]
00221F28 1f2003d5 nop      
00221F2C ca7d0310 adr      x10, #0x228ee4
00221F30 8a1a01f9 str      x10, [x20, #0x230]
00221F34 1f2003d5 nop      
00221F38 887d0310 adr      x8, #0x228ee8
00221F3C 881e01f9 str      x8, [x20, #0x238]
00221F40 f50314aa mov      x21, x20
00221F44 a88e44f8 ldr      x8, [x21, #0x48]!
00221F48 e00315aa mov      x0, x21
00221F4C 080940f9 ldr      x8, [x8, #0x10]
00221F50 00013fd6 blr      x8
00221F54 e00314aa mov      x0, x20
00221F58 0eaf0c94 bl       #0x54db90
00221F5C a80240f9 ldr      x8, [x21]
00221F60 e00315aa mov      x0, x21
00221F64 080940f9 ldr      x8, [x8, #0x10]
00221F68 00013fd6 blr      x8
00221F6C 082e0090 adrp     x8, #0x7e1000
00221F70 08613691 add      x8, x8, #0xd98
00221F74 160140f9 ldr      x22, [x8]
00221F78 c02a40f9 ldr      x0, [x22, #0x50]
00221F7C 800000b4 cbz      x0, #0x221f8c
00221F80 088c44f8 ldr      x8, [x0, #0x48]!
00221F84 080d40f9 ldr      x8, [x8, #0x18]
00221F88 00013fd6 blr      x8
00221F8C d42a00f9 str      x20, [x22, #0x50]
00221F90 e00315aa mov      x0, x21
00221F94 882640f9 ldr      x8, [x20, #0x48]
00221F98 080d40f9 ldr      x8, [x8, #0x18]
00221F9C 00013fd6 blr      x8
00221FA0 e00740f9 ldr      x0, [sp, #8]
00221FA4 a00000b4 cbz      x0, #0x221fb8
00221FA8 088c44f8 ldr      x8, [x0, #0x48]!
00221FAC 080d40f9 ldr      x8, [x8, #0x18]
00221FB0 00013fd6 blr      x8
00221FB4 ff0700f9 str      xzr, [sp, #8]
00221FB8 e00340f9 ldr      x0, [sp]
00221FBC a00000b4 cbz      x0, #0x221fd0
00221FC0 088c44f8 ldr      x8, [x0, #0x48]!
00221FC4 080d40f9 ldr      x8, [x8, #0x18]
00221FC8 00013fd6 blr      x8
00221FCC ff0300f9 str      xzr, [sp]
00221FD0 680240f9 ldr      x8, [x19]
00221FD4 e00313aa mov      x0, x19
00221FD8 080d40f9 ldr      x8, [x8, #0x18]
00221FDC 00013fd6 blr      x8
00221FE0 f44f43a9 ldp      x20, x19, [sp, #0x30]
00221FE4 f65742a9 ldp      x22, x21, [sp, #0x20]
00221FE8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00221FEC ff030191 add      sp, sp, #0x40
00221FF0 c0035fd6 ret      
00221FF4 0783f797 bl       #0x2c10
~~~
### 0x2221c0 (28 slots)
~~~asm
002221C0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
002221C4 f44f01a9 stp      x20, x19, [sp, #0x10]
002221C8 fd030091 mov      x29, sp
002221CC e82d00f0 adrp     x8, #0x7e1000
002221D0 08613691 add      x8, x8, #0xd98
002221D4 080140f9 ldr      x8, [x8]
002221D8 132940f9 ldr      x19, [x8, #0x50]
002221DC 330200b4 cbz      x19, #0x222220
002221E0 f40313aa mov      x20, x19
002221E4 888e44f8 ldr      x8, [x20, #0x48]!
002221E8 e00314aa mov      x0, x20
002221EC 080940f9 ldr      x8, [x8, #0x10]
002221F0 00013fd6 blr      x8
002221F4 e00313aa mov      x0, x19
002221F8 5eae0c94 bl       #0x54db70
002221FC 880240f9 ldr      x8, [x20]
00222200 f303002a mov      w19, w0
00222204 e00314aa mov      x0, x20
00222208 080d40f9 ldr      x8, [x8, #0x18]
0022220C 00013fd6 blr      x8
00222210 60020012 and      w0, w19, #1
00222214 f44f41a9 ldp      x20, x19, [sp, #0x10]
00222218 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022221C c0035fd6 ret      
00222220 20008052 mov      w0, #1
00222224 f44f41a9 ldp      x20, x19, [sp, #0x10]
00222228 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022222C c0035fd6 ret      
~~~
### 0x222230 (143 slots)
~~~asm
00222230 ff0301d1 sub      sp, sp, #0x40
00222234 fd7b01a9 stp      x29, x30, [sp, #0x10]
00222238 f65702a9 stp      x22, x21, [sp, #0x20]
0022223C f44f03a9 stp      x20, x19, [sp, #0x30]
00222240 fd430091 add      x29, sp, #0x10
00222244 8b000094 bl       #0x222470
00222248 06a80c94 bl       #0x54c260
0022224C 48d03bd5 mrs      x8, tpidr_el0
00222250 16c97392 and      x22, x8, #0xffffffffffffe000
00222254 c84e40f9 ldr      x8, [x22, #0x98]
00222258 1f4100f1 cmp      x8, #0x10
0022225C 60100054 b.eq     #0x222468
00222260 c80e088b add      x8, x22, x8, lsl #3
00222264 01688052 mov      w1, #0x340
00222268 02028052 mov      w2, #0x10
0022226C f40300aa mov      x20, x0
00222270 000d00f9 str      x0, [x8, #0x18]
00222274 c84e40f9 ldr      x8, [x22, #0x98]
00222278 08050091 add      x8, x8, #1
0022227C c84e00f9 str      x8, [x22, #0x98]
00222280 080040f9 ldr      x8, [x0]
00222284 080940f9 ldr      x8, [x8, #0x10]
00222288 00013fd6 blr      x8
0022228C f50300aa mov      x21, x0
00222290 a00000b5 cbnz     x0, #0x2222a4
00222294 880240f9 ldr      x8, [x20]
00222298 e00314aa mov      x0, x20
0022229C 085d40f9 ldr      x8, [x8, #0xb8]
002222A0 00013fd6 blr      x8
002222A4 e00315aa mov      x0, x21
002222A8 e10314aa mov      x1, x20
002222AC e2031faa mov      x2, xzr
002222B0 aaad0c94 bl       #0x54d958
002222B4 e82b00f0 adrp     x8, #0x7a1000
002222B8 f30315aa mov      x19, x21
002222BC 08dd43f9 ldr      x8, [x8, #0x7b8]
002222C0 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002222C4 09c10191 add      x9, x8, #0x70
002222C8 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002222CC bf1201f9 str      xzr, [x21, #0x220]
002222D0 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002222D4 bf1601f9 str      xzr, [x21, #0x228]
002222D8 bf1a01f9 str      xzr, [x21, #0x230]
002222DC bf1e01f9 str      xzr, [x21, #0x238]
002222E0 bf5201f9 str      xzr, [x21, #0x2a0]
002222E4 bf5601f9 str      xzr, [x21, #0x2a8]
002222E8 bf5a01f9 str      xzr, [x21, #0x2b0]
002222EC bf5e01f9 str      xzr, [x21, #0x2b8]
002222F0 698e04f8 str      x9, [x19, #0x48]!
002222F4 09c10291 add      x9, x8, #0xb0
002222F8 08410091 add      x8, x8, #0x10
002222FC e00313aa mov      x0, x19
00222300 a92a00f9 str      x9, [x21, #0x50]
00222304 09028052 mov      w9, #0x10
00222308 bf820c39 strb     wzr, [x21, #0x320]
0022230C bfa20c39 strb     wzr, [x21, #0x328]
00222310 bfc20c39 strb     wzr, [x21, #0x330]
00222314 a91200f9 str      x9, [x21, #0x20]
00222318 a85200a9 stp      x8, x20, [x21]
0022231C 08688052 mov      w8, #0x340
00222320 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00222324 b52201a9 stp      x21, x8, [x21, #0x10]
00222328 c84e40f9 ldr      x8, [x22, #0x98]
0022232C 080500d1 sub      x8, x8, #1
00222330 c84e00f9 str      x8, [x22, #0x98]
00222334 680240f9 ldr      x8, [x19]
00222338 080940f9 ldr      x8, [x8, #0x10]
0022233C 00013fd6 blr      x8
00222340 e8030091 mov      x8, sp
00222344 e00315aa mov      x0, x21
00222348 c2dbfb97 bl       #0x119250
0022234C e00340f9 ldr      x0, [sp]
00222350 e8230091 add      x8, sp, #8
00222354 ac000094 bl       #0x222604
00222358 f40740f9 ldr      x20, [sp, #8]
0022235C e00314aa mov      x0, x20
00222360 7cad0c94 bl       #0x54d950
00222364 80020035 cbnz     w0, #0x2223b4
00222368 881641f9 ldr      x8, [x20, #0x228]
0022236C c80000b4 cbz      x8, #0x222384
00222370 89820891 add      x9, x20, #0x220
00222374 80020991 add      x0, x20, #0x240
00222378 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0022237C 3f7d00a9 stp      xzr, xzr, [x9]
00222380 00013fd6 blr      x8
00222384 1f2003d5 nop      
00222388 48c20310 adr      x8, #0x229bd0
0022238C 881201f9 str      x8, [x20, #0x220]
00222390 1f2003d5 nop      
00222394 09c20310 adr      x9, #0x229bd4
00222398 891601f9 str      x9, [x20, #0x228]
0022239C 1f2003d5 nop      
002223A0 cac10310 adr      x10, #0x229bd8
002223A4 8a1a01f9 str      x10, [x20, #0x230]
002223A8 1f2003d5 nop      
002223AC 88c10310 adr      x8, #0x229bdc
002223B0 881e01f9 str      x8, [x20, #0x238]
002223B4 f50314aa mov      x21, x20
002223B8 a88e44f8 ldr      x8, [x21, #0x48]!
002223BC e00315aa mov      x0, x21
002223C0 080940f9 ldr      x8, [x8, #0x10]
002223C4 00013fd6 blr      x8
002223C8 e00314aa mov      x0, x20
002223CC f1ad0c94 bl       #0x54db90
002223D0 a80240f9 ldr      x8, [x21]
002223D4 e00315aa mov      x0, x21
002223D8 080940f9 ldr      x8, [x8, #0x10]
002223DC 00013fd6 blr      x8
002223E0 e82d00f0 adrp     x8, #0x7e1000
002223E4 08613691 add      x8, x8, #0xd98
002223E8 160140f9 ldr      x22, [x8]
002223EC c02a40f9 ldr      x0, [x22, #0x50]
002223F0 800000b4 cbz      x0, #0x222400
002223F4 088c44f8 ldr      x8, [x0, #0x48]!
002223F8 080d40f9 ldr      x8, [x8, #0x18]
002223FC 00013fd6 blr      x8
00222400 d42a00f9 str      x20, [x22, #0x50]
00222404 e00315aa mov      x0, x21
00222408 882640f9 ldr      x8, [x20, #0x48]
0022240C 080d40f9 ldr      x8, [x8, #0x18]
00222410 00013fd6 blr      x8
00222414 e00740f9 ldr      x0, [sp, #8]
00222418 a00000b4 cbz      x0, #0x22242c
0022241C 088c44f8 ldr      x8, [x0, #0x48]!
00222420 080d40f9 ldr      x8, [x8, #0x18]
00222424 00013fd6 blr      x8
00222428 ff0700f9 str      xzr, [sp, #8]
0022242C e00340f9 ldr      x0, [sp]
00222430 a00000b4 cbz      x0, #0x222444
00222434 088c44f8 ldr      x8, [x0, #0x48]!
00222438 080d40f9 ldr      x8, [x8, #0x18]
0022243C 00013fd6 blr      x8
00222440 ff0300f9 str      xzr, [sp]
00222444 680240f9 ldr      x8, [x19]
00222448 e00313aa mov      x0, x19
0022244C 080d40f9 ldr      x8, [x8, #0x18]
00222450 00013fd6 blr      x8
00222454 f44f43a9 ldp      x20, x19, [sp, #0x30]
00222458 f65742a9 ldp      x22, x21, [sp, #0x20]
0022245C fd7b41a9 ldp      x29, x30, [sp, #0x10]
00222460 ff030191 add      sp, sp, #0x40
00222464 c0035fd6 ret      
00222468 ea81f797 bl       #0x2c10
~~~
### 0x222470 (101 slots)
~~~asm
00222470 ff4301d1 sub      sp, sp, #0x50
00222474 fd7b01a9 stp      x29, x30, [sp, #0x10]
00222478 f71300f9 str      x23, [sp, #0x20]
0022247C f65703a9 stp      x22, x21, [sp, #0x30]
00222480 f44f04a9 stp      x20, x19, [sp, #0x40]
00222484 fd430091 add      x29, sp, #0x10
00222488 e82b00b0 adrp     x8, #0x79f000
0022248C 152c0090 adrp     x21, #0x7a2000
00222490 08ed41f9 ldr      x8, [x8, #0x3d8]
00222494 080140f9 ldr      x8, [x8]
00222498 b50245f9 ldr      x21, [x21, #0xa00]
0022249C 145541f9 ldr      x20, [x8, #0x2a8]
002224A0 a80240f9 ldr      x8, [x21]
002224A4 132940f9 ldr      x19, [x8, #0x50]
002224A8 d30000b4 cbz      x19, #0x2224c0
002224AC e00313aa mov      x0, x19
002224B0 088c44f8 ldr      x8, [x0, #0x48]!
002224B4 080940f9 ldr      x8, [x8, #0x10]
002224B8 00013fd6 blr      x8
002224BC a80240f9 ldr      x8, [x21]
002224C0 152d40f9 ldr      x21, [x8, #0x58]
002224C4 b50000b4 cbz      x21, #0x2224d8
002224C8 e00315aa mov      x0, x21
002224CC 088c44f8 ldr      x8, [x0, #0x48]!
002224D0 080940f9 ldr      x8, [x8, #0x10]
002224D4 00013fd6 blr      x8
002224D8 e00313aa mov      x0, x19
002224DC 2977ff97 bl       #0x200180
002224E0 f6031f2a mov      w22, wzr
002224E4 06000014 b        #0x2224fc
002224E8 1f2003d5 nop      
002224EC 1f2003d5 nop      
002224F0 d6060011 add      w22, w22, #1
002224F4 dfb20471 cmp      w22, #0x12c
002224F8 40060054 b.eq     #0x2225c0
002224FC f7031f2a mov      w23, wzr
00222500 04000014 b        #0x222510
00222504 f7060011 add      w23, w23, #1
00222508 ff7a0071 cmp      w23, #0x1e
0022250C 20ffff54 b.eq     #0x2224f0
00222510 a8630091 add      x8, x29, #0x18
00222514 e00315aa mov      x0, x21
00222518 e103162a mov      w1, w22
0022251C e203172a mov      w2, w23
00222520 e30314aa mov      x3, x20
00222524 c977ff97 bl       #0x200448
00222528 a00f40f9 ldr      x0, [x29, #0x18]
0022252C 1790ff97 bl       #0x206588
00222530 c0030037 tbnz     w0, #0, #0x2225a8
00222534 a00f40f9 ldr      x0, [x29, #0x18]
00222538 e00700f9 str      x0, [sp, #8]
0022253C 800000b4 cbz      x0, #0x22254c
00222540 088c44f8 ldr      x8, [x0, #0x48]!
00222544 080940f9 ldr      x8, [x8, #0x10]
00222548 00013fd6 blr      x8
0022254C e1230091 add      x1, sp, #8
00222550 e00313aa mov      x0, x19
00222554 e20314aa mov      x2, x20
00222558 e303162a mov      w3, w22
0022255C e403172a mov      w4, w23
00222560 1f7eff97 bl       #0x201ddc
00222564 e00740f9 ldr      x0, [sp, #8]
00222568 a00000b4 cbz      x0, #0x22257c
0022256C 088c44f8 ldr      x8, [x0, #0x48]!
00222570 080d40f9 ldr      x8, [x8, #0x18]
00222574 00013fd6 blr      x8
00222578 ff0700f9 str      xzr, [sp, #8]
0022257C e8030091 mov      x8, sp
00222580 e00313aa mov      x0, x19
00222584 e103162a mov      w1, w22
00222588 e203172a mov      w2, w23
0022258C e30314aa mov      x3, x20
00222590 ae77ff97 bl       #0x200448
00222594 e00340f9 ldr      x0, [sp]
00222598 800000b4 cbz      x0, #0x2225a8
0022259C 088c44f8 ldr      x8, [x0, #0x48]!
002225A0 080d40f9 ldr      x8, [x8, #0x18]
002225A4 00013fd6 blr      x8
002225A8 a00f40f9 ldr      x0, [x29, #0x18]
002225AC c0faffb4 cbz      x0, #0x222504
002225B0 088c44f8 ldr      x8, [x0, #0x48]!
002225B4 080d40f9 ldr      x8, [x8, #0x18]
002225B8 00013fd6 blr      x8
002225BC d2ffff17 b        #0x222504
002225C0 7489ff97 bl       #0x204b90
002225C4 858dff97 bl       #0x205bd8
002225C8 b50000b4 cbz      x21, #0x2225dc
002225CC a88e44f8 ldr      x8, [x21, #0x48]!
002225D0 e00315aa mov      x0, x21
002225D4 080d40f9 ldr      x8, [x8, #0x18]
002225D8 00013fd6 blr      x8
002225DC 688e44f8 ldr      x8, [x19, #0x48]!
002225E0 e00313aa mov      x0, x19
002225E4 080d40f9 ldr      x8, [x8, #0x18]
002225E8 00013fd6 blr      x8
002225EC f44f44a9 ldp      x20, x19, [sp, #0x40]
002225F0 f71340f9 ldr      x23, [sp, #0x20]
002225F4 f65743a9 ldp      x22, x21, [sp, #0x30]
002225F8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
002225FC ff430191 add      sp, sp, #0x50
00222600 c0035fd6 ret      
~~~
### 0x222a70 (90 slots)
~~~asm
00222A70 ff8301d1 sub      sp, sp, #0x60
00222A74 fd7b01a9 stp      x29, x30, [sp, #0x10]
00222A78 f91300f9 str      x25, [sp, #0x20]
00222A7C f85f03a9 stp      x24, x23, [sp, #0x30]
00222A80 f65704a9 stp      x22, x21, [sp, #0x40]
00222A84 f44f05a9 stp      x20, x19, [sp, #0x50]
00222A88 fd430091 add      x29, sp, #0x10
00222A8C f5a50c94 bl       #0x54c260
00222A90 182c0090 adrp     x24, #0x7a2000
00222A94 f40300aa mov      x20, x0
00222A98 180345f9 ldr      x24, [x24, #0xa00]
00222A9C 080340f9 ldr      x8, [x24]
00222AA0 132d40f9 ldr      x19, [x8, #0x58]
00222AA4 b30000b4 cbz      x19, #0x222ab8
00222AA8 e00313aa mov      x0, x19
00222AAC 088c44f8 ldr      x8, [x0, #0x48]!
00222AB0 080940f9 ldr      x8, [x8, #0x10]
00222AB4 00013fd6 blr      x8
00222AB8 e00313aa mov      x0, x19
00222ABC b175ff97 bl       #0x200180
00222AC0 f5031f2a mov      w21, wzr
00222AC4 792e00b0 adrp     x25, #0x7ef000
00222AC8 3f5f00b9 str      wzr, [x25, #0x5c]
00222ACC 04000014 b        #0x222adc
00222AD0 b5060011 add      w21, w21, #1
00222AD4 bfb20471 cmp      w21, #0x12c
00222AD8 a0060054 b.eq     #0x222bac
00222ADC f6031f2a mov      w22, wzr
00222AE0 04000014 b        #0x222af0
00222AE4 d6060011 add      w22, w22, #1
00222AE8 df7a0071 cmp      w22, #0x1e
00222AEC 20ffff54 b.eq     #0x222ad0
00222AF0 080340f9 ldr      x8, [x24]
00222AF4 172940f9 ldr      x23, [x8, #0x50]
00222AF8 b70000b4 cbz      x23, #0x222b0c
00222AFC e00317aa mov      x0, x23
00222B00 088c44f8 ldr      x8, [x0, #0x48]!
00222B04 080940f9 ldr      x8, [x8, #0x10]
00222B08 00013fd6 blr      x8
00222B0C a8630091 add      x8, x29, #0x18
00222B10 e00317aa mov      x0, x23
00222B14 e103152a mov      w1, w21
00222B18 e203162a mov      w2, w22
00222B1C e30314aa mov      x3, x20
00222B20 4a76ff97 bl       #0x200448
00222B24 e88e44f8 ldr      x8, [x23, #0x48]!
00222B28 e00317aa mov      x0, x23
00222B2C 080d40f9 ldr      x8, [x8, #0x18]
00222B30 00013fd6 blr      x8
00222B34 a00f40f9 ldr      x0, [x29, #0x18]
00222B38 948eff97 bl       #0x206588
00222B3C c0020037 tbnz     w0, #0, #0x222b94
00222B40 a00f40f9 ldr      x0, [x29, #0x18]
00222B44 e00700f9 str      x0, [sp, #8]
00222B48 800000b4 cbz      x0, #0x222b58
00222B4C 088c44f8 ldr      x8, [x0, #0x48]!
00222B50 080940f9 ldr      x8, [x8, #0x10]
00222B54 00013fd6 blr      x8
00222B58 e1230091 add      x1, sp, #8
00222B5C e00313aa mov      x0, x19
00222B60 e20314aa mov      x2, x20
00222B64 e303152a mov      w3, w21
00222B68 e403162a mov      w4, w22
00222B6C 9c7cff97 bl       #0x201ddc
00222B70 e00740f9 ldr      x0, [sp, #8]
00222B74 a00000b4 cbz      x0, #0x222b88
00222B78 088c44f8 ldr      x8, [x0, #0x48]!
00222B7C 080d40f9 ldr      x8, [x8, #0x18]
00222B80 00013fd6 blr      x8
00222B84 ff0700f9 str      xzr, [sp, #8]
00222B88 285f40b9 ldr      w8, [x25, #0x5c]
00222B8C 08050011 add      w8, w8, #1
00222B90 285f00b9 str      w8, [x25, #0x5c]
00222B94 a00f40f9 ldr      x0, [x29, #0x18]
00222B98 60faffb4 cbz      x0, #0x222ae4
00222B9C 088c44f8 ldr      x8, [x0, #0x48]!
00222BA0 080d40f9 ldr      x8, [x8, #0x18]
00222BA4 00013fd6 blr      x8
00222BA8 cfffff17 b        #0x222ae4
00222BAC 688e44f8 ldr      x8, [x19, #0x48]!
00222BB0 e00313aa mov      x0, x19
00222BB4 080d40f9 ldr      x8, [x8, #0x18]
00222BB8 00013fd6 blr      x8
00222BBC f44f45a9 ldp      x20, x19, [sp, #0x50]
00222BC0 f91340f9 ldr      x25, [sp, #0x20]
00222BC4 f65744a9 ldp      x22, x21, [sp, #0x40]
00222BC8 f85f43a9 ldp      x24, x23, [sp, #0x30]
00222BCC fd7b41a9 ldp      x29, x30, [sp, #0x10]
00222BD0 ff830191 add      sp, sp, #0x60
00222BD4 c0035fd6 ret      
~~~
### 0x224e80 (252 slots)
~~~asm
00224E80 ff4301d1 sub      sp, sp, #0x50
00224E84 fd7b01a9 stp      x29, x30, [sp, #0x10]
00224E88 f71300f9 str      x23, [sp, #0x20]
00224E8C f65703a9 stp      x22, x21, [sp, #0x30]
00224E90 f44f04a9 stp      x20, x19, [sp, #0x40]
00224E94 fd430091 add      x29, sp, #0x10
00224E98 f303022a mov      w19, w2
00224E9C f50301aa mov      x21, x1
00224EA0 f403002a mov      w20, w0
00224EA4 63fbff97 bl       #0x223c30
00224EA8 162c40b9 ldr      w22, [x0, #0x2c]
00224EAC 561d0034 cbz      w22, #0x225254
00224EB0 e8310090 adrp     x8, #0x860000
00224EB4 08212b91 add      x8, x8, #0xac8
00224EB8 1f0100f9 str      xzr, [x8]
00224EBC e92b00d0 adrp     x9, #0x7a2000
00224EC0 08614091 add      x8, x8, #0x18, lsl #12
00224EC4 290145f9 ldr      x9, [x9, #0xa00]
00224EC8 1f0100b9 str      wzr, [x8]
00224ECC 280140f9 ldr      x8, [x9]
00224ED0 172940f9 ldr      x23, [x8, #0x50]
00224ED4 b70000b4 cbz      x23, #0x224ee8
00224ED8 e00317aa mov      x0, x23
00224EDC 088c44f8 ldr      x8, [x0, #0x48]!
00224EE0 080940f9 ldr      x8, [x8, #0x10]
00224EE4 00013fd6 blr      x8
00224EE8 e00317aa mov      x0, x23
00224EEC 206dff97 bl       #0x20036c
00224EF0 e88e44f8 ldr      x8, [x23, #0x48]!
00224EF4 e00317aa mov      x0, x23
00224EF8 080d40f9 ldr      x8, [x8, #0x18]
00224EFC 00013fd6 blr      x8
00224F00 df0a0071 cmp      w22, #2
00224F04 c8000054 b.hi     #0x224f1c
00224F08 e003142a mov      w0, w20
00224F0C e10315aa mov      x1, x21
00224F10 e203162a mov      w2, w22
00224F14 efbd0094 bl       #0x2546d0
00224F18 25000014 b        #0x224fac
00224F1C c8160051 sub      w8, w22, #5
00224F20 1f050071 cmp      w8, #1
00224F24 08010054 b.hi     #0x224f44
00224F28 002e00b0 adrp     x0, #0x7e5000
00224F2C 00c01891 add      x0, x0, #0x630
00224F30 e103142a mov      w1, w20
00224F34 e20315aa mov      x2, x21
00224F38 e303162a mov      w3, w22
00224F3C adfefd97 bl       #0x1a49f0
00224F40 1b000014 b        #0x224fac
00224F44 df1e0071 cmp      w22, #7
00224F48 c1000054 b.ne     #0x224f60
00224F4C e003142a mov      w0, w20
00224F50 e10315aa mov      x1, x21
00224F54 e2008052 mov      w2, #7
00224F58 9a86fe97 bl       #0x1c69c0
00224F5C 14000014 b        #0x224fac
00224F60 c87a1f12 and      w8, w22, #0xfffffffe
00224F64 1f210071 cmp      w8, #8
00224F68 c1000054 b.ne     #0x224f80
00224F6C e003142a mov      w0, w20
00224F70 e10315aa mov      x1, x21
00224F74 e203162a mov      w2, w22
00224F78 06c10194 bl       #0x295390
00224F7C 0c000014 b        #0x224fac
00224F80 df2a0071 cmp      w22, #0xa
00224F84 c1000054 b.ne     #0x224f9c
00224F88 42018052 mov      w2, #0xa
00224F8C e003142a mov      w0, w20
00224F90 e10315aa mov      x1, x21
00224F94 8394fe97 bl       #0x1ca1a0
00224F98 05000014 b        #0x224fac
00224F9C e003142a mov      w0, w20
00224FA0 e10315aa mov      x1, x21
00224FA4 e203162a mov      w2, w22
00224FA8 36c30094 bl       #0x255c80
00224FAC e003142a mov      w0, w20
00224FB0 e10315aa mov      x1, x21
00224FB4 1ffbff97 bl       #0x223c30
00224FB8 552e00d0 adrp     x21, #0x7ee000
00224FBC b5c23c91 add      x21, x21, #0xf30
00224FC0 e10300aa mov      x1, x0
00224FC4 82138052 mov      w2, #0x9c
00224FC8 e00315aa mov      x0, x21
00224FCC 85450f94 bl       #0x5f65e0
00224FD0 a8d60491 add      x8, x21, #0x135
00224FD4 b46600b9 str      w20, [x21, #0x64]
00224FD8 1f010079 strh     wzr, [x8]
00224FDC ed7eff97 bl       #0x204b90
00224FE0 f182ff97 bl       #0x205ba4
00224FE4 a8c64191 add      x8, x21, #0x71, lsl #12
00224FE8 021e8052 mov      w2, #0xf0
00224FEC 00812991 add      x0, x8, #0xa60
00224FF0 a8c64191 add      x8, x21, #0x71, lsl #12
00224FF4 01c12191 add      x1, x8, #0x870
00224FF8 7a450f94 bl       #0x5f65e0
00224FFC 082c8352 mov      w8, #0x1960
00225000 e800a072 movk     w8, #7, lsl #16
00225004 096a8352 mov      w9, #0x1b50
00225008 e900a072 movk     w9, #7, lsl #16
0022500C a86a68b8 ldr      w8, [x21, x8]
00225010 aac64191 add      x10, x21, #0x71, lsl #12
00225014 40a12591 add      x0, x10, #0x968
00225018 021e8052 mov      w2, #0xf0
0022501C a86a29b8 str      w8, [x21, x9]
00225020 a8c64191 add      x8, x21, #0x71, lsl #12
00225024 01e11d91 add      x1, x8, #0x778
00225028 6e450f94 bl       #0x5f65e0
0022502C 080d8352 mov      w8, #0x1868
00225030 e800a072 movk     w8, #7, lsl #16
00225034 094b8352 mov      w9, #0x1a58
00225038 e900a072 movk     w9, #7, lsl #16
0022503C a86a68b8 ldr      w8, [x21, x8]
00225040 a86a29b8 str      w8, [x21, x9]
00225044 93100036 tbz      w19, #0, #0x225254
00225048 869c0c94 bl       #0x54c260
0022504C 48d03bd5 mrs      x8, tpidr_el0
00225050 16c97392 and      x22, x8, #0xffffffffffffe000
00225054 c84e40f9 ldr      x8, [x22, #0x98]
00225058 1f4100f1 cmp      x8, #0x10
0022505C 80100054 b.eq     #0x22526c
00225060 c80e088b add      x8, x22, x8, lsl #3
00225064 01688052 mov      w1, #0x340
00225068 02028052 mov      w2, #0x10
0022506C f40300aa mov      x20, x0
00225070 000d00f9 str      x0, [x8, #0x18]
00225074 c84e40f9 ldr      x8, [x22, #0x98]
00225078 08050091 add      x8, x8, #1
0022507C c84e00f9 str      x8, [x22, #0x98]
00225080 080040f9 ldr      x8, [x0]
00225084 080940f9 ldr      x8, [x8, #0x10]
00225088 00013fd6 blr      x8
0022508C f50300aa mov      x21, x0
00225090 a00000b5 cbnz     x0, #0x2250a4
00225094 880240f9 ldr      x8, [x20]
00225098 e00314aa mov      x0, x20
0022509C 085d40f9 ldr      x8, [x8, #0xb8]
002250A0 00013fd6 blr      x8
002250A4 e00315aa mov      x0, x21
002250A8 e10314aa mov      x1, x20
002250AC e2031faa mov      x2, xzr
002250B0 2aa20c94 bl       #0x54d958
002250B4 e82b0090 adrp     x8, #0x7a1000
002250B8 f30315aa mov      x19, x21
002250BC 08dd43f9 ldr      x8, [x8, #0x7b8]
002250C0 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002250C4 09c10191 add      x9, x8, #0x70
002250C8 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002250CC bf1201f9 str      xzr, [x21, #0x220]
002250D0 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002250D4 bf1601f9 str      xzr, [x21, #0x228]
002250D8 bf1a01f9 str      xzr, [x21, #0x230]
002250DC bf1e01f9 str      xzr, [x21, #0x238]
002250E0 bf5201f9 str      xzr, [x21, #0x2a0]
002250E4 bf5601f9 str      xzr, [x21, #0x2a8]
002250E8 bf5a01f9 str      xzr, [x21, #0x2b0]
002250EC bf5e01f9 str      xzr, [x21, #0x2b8]
002250F0 698e04f8 str      x9, [x19, #0x48]!
002250F4 09c10291 add      x9, x8, #0xb0
002250F8 08410091 add      x8, x8, #0x10
002250FC e00313aa mov      x0, x19
00225100 a92a00f9 str      x9, [x21, #0x50]
00225104 09028052 mov      w9, #0x10
00225108 bf820c39 strb     wzr, [x21, #0x320]
0022510C bfa20c39 strb     wzr, [x21, #0x328]
00225110 bfc20c39 strb     wzr, [x21, #0x330]
00225114 a91200f9 str      x9, [x21, #0x20]
00225118 a85200a9 stp      x8, x20, [x21]
0022511C 08688052 mov      w8, #0x340
00225120 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00225124 b52201a9 stp      x21, x8, [x21, #0x10]
00225128 c84e40f9 ldr      x8, [x22, #0x98]
0022512C 080500d1 sub      x8, x8, #1
00225130 c84e00f9 str      x8, [x22, #0x98]
00225134 680240f9 ldr      x8, [x19]
00225138 080940f9 ldr      x8, [x8, #0x10]
0022513C 00013fd6 blr      x8
00225140 e8230091 add      x8, sp, #8
00225144 e00315aa mov      x0, x21
00225148 42d0fb97 bl       #0x119250
0022514C e00740f9 ldr      x0, [sp, #8]
00225150 a8630091 add      x8, x29, #0x18
00225154 47000094 bl       #0x225270
00225158 b40f40f9 ldr      x20, [x29, #0x18]
0022515C e00314aa mov      x0, x20
00225160 fca10c94 bl       #0x54d950
00225164 80020035 cbnz     w0, #0x2251b4
00225168 881641f9 ldr      x8, [x20, #0x228]
0022516C c80000b4 cbz      x8, #0x225184
00225170 89820891 add      x9, x20, #0x220
00225174 80020991 add      x0, x20, #0x240
00225178 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0022517C 3f7d00a9 stp      xzr, xzr, [x9]
00225180 00013fd6 blr      x8
00225184 1f2003d5 nop      
00225188 481a0310 adr      x8, #0x22b4d0
0022518C 881201f9 str      x8, [x20, #0x220]
00225190 1f2003d5 nop      
00225194 091a0310 adr      x9, #0x22b4d4
00225198 891601f9 str      x9, [x20, #0x228]
0022519C 1f2003d5 nop      
002251A0 ca190310 adr      x10, #0x22b4d8
002251A4 8a1a01f9 str      x10, [x20, #0x230]
002251A8 1f2003d5 nop      
002251AC 88190310 adr      x8, #0x22b4dc
002251B0 881e01f9 str      x8, [x20, #0x238]
002251B4 f50314aa mov      x21, x20
002251B8 a88e44f8 ldr      x8, [x21, #0x48]!
002251BC e00315aa mov      x0, x21
002251C0 080940f9 ldr      x8, [x8, #0x10]
002251C4 00013fd6 blr      x8
002251C8 e00314aa mov      x0, x20
002251CC 71a20c94 bl       #0x54db90
002251D0 a80240f9 ldr      x8, [x21]
002251D4 e00315aa mov      x0, x21
002251D8 080940f9 ldr      x8, [x8, #0x10]
002251DC 00013fd6 blr      x8
002251E0 e82d0090 adrp     x8, #0x7e1000
002251E4 08613691 add      x8, x8, #0xd98
002251E8 160140f9 ldr      x22, [x8]
002251EC c02a40f9 ldr      x0, [x22, #0x50]
002251F0 800000b4 cbz      x0, #0x225200
002251F4 088c44f8 ldr      x8, [x0, #0x48]!
002251F8 080d40f9 ldr      x8, [x8, #0x18]
002251FC 00013fd6 blr      x8
00225200 d42a00f9 str      x20, [x22, #0x50]
00225204 e00315aa mov      x0, x21
00225208 882640f9 ldr      x8, [x20, #0x48]
0022520C 080d40f9 ldr      x8, [x8, #0x18]
00225210 00013fd6 blr      x8
00225214 a00f40f9 ldr      x0, [x29, #0x18]
00225218 a00000b4 cbz      x0, #0x22522c
0022521C 088c44f8 ldr      x8, [x0, #0x48]!
00225220 080d40f9 ldr      x8, [x8, #0x18]
00225224 00013fd6 blr      x8
00225228 bf0f00f9 str      xzr, [x29, #0x18]
0022522C e00740f9 ldr      x0, [sp, #8]
00225230 a00000b4 cbz      x0, #0x225244
00225234 088c44f8 ldr      x8, [x0, #0x48]!
00225238 080d40f9 ldr      x8, [x8, #0x18]
0022523C 00013fd6 blr      x8
00225240 ff0700f9 str      xzr, [sp, #8]
00225244 680240f9 ldr      x8, [x19]
00225248 e00313aa mov      x0, x19
0022524C 080d40f9 ldr      x8, [x8, #0x18]
00225250 00013fd6 blr      x8
00225254 f44f44a9 ldp      x20, x19, [sp, #0x40]
00225258 f71340f9 ldr      x23, [sp, #0x20]
0022525C f65743a9 ldp      x22, x21, [sp, #0x30]
00225260 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00225264 ff430191 add      sp, sp, #0x50
00225268 c0035fd6 ret      
0022526C 6976f797 bl       #0x2c10
~~~
### 0x225490 (295 slots)
~~~asm
00225490 ff4302d1 sub      sp, sp, #0x90
00225494 fd7b03a9 stp      x29, x30, [sp, #0x30]
00225498 fc6f04a9 stp      x28, x27, [sp, #0x40]
0022549C fa6705a9 stp      x26, x25, [sp, #0x50]
002254A0 f85f06a9 stp      x24, x23, [sp, #0x60]
002254A4 f65707a9 stp      x22, x21, [sp, #0x70]
002254A8 f44f08a9 stp      x20, x19, [sp, #0x80]
002254AC fdc30091 add      x29, sp, #0x30
002254B0 bf7f3fa9 stp      xzr, xzr, [x29, #-0x10]
002254B4 482e00b0 adrp     x8, #0x7ee000
002254B8 08c13c91 add      x8, x8, #0xf30
002254BC 29208052 mov      w9, #0x101
002254C0 ea031faa mov      x10, xzr
002254C4 096d0079 strh     w9, [x8, #0x36]
002254C8 a9235ff8 ldur     x9, [x29, #-0xe]
002254CC 1f2d00f9 str      xzr, [x8, #0x58]
002254D0 aaa35ef8 ldur     x10, [x29, #-0x16]
002254D4 1f0900f9 str      xzr, [x8, #0x10]
002254D8 1f310079 strh     wzr, [x8, #0x18]
002254DC 1f4500f9 str      xzr, [x8, #0x88]
002254E0 1f210179 strh     wzr, [x8, #0x90]
002254E4 1fa101b8 stur     wzr, [x8, #0x1a]
002254E8 092105f8 stur     x9, [x8, #0x52]
002254EC 094b8352 mov      w9, #0x1a58
002254F0 e900a072 movk     w9, #7, lsl #16
002254F4 1f6929b8 str      wzr, [x8, x9]
002254F8 096a8352 mov      w9, #0x1b50
002254FC e900a072 movk     w9, #7, lsl #16
00225500 1f010139 strb     wzr, [x8, #0x40]
00225504 1f1d00f9 str      xzr, [x8, #0x38]
00225508 1f4500b9 str      wzr, [x8, #0x44]
0022550C 1f910079 strh     wzr, [x8, #0x48]
00225510 0aa104f8 stur     x10, [x8, #0x4a]
00225514 1f6929b8 str      wzr, [x8, x9]
00225518 e92b00b0 adrp     x9, #0x7a2000
0022551C 1f7d00a9 stp      xzr, xzr, [x8]
00225520 1ffd07a9 stp      xzr, xzr, [x8, #0x78]
00225524 1f7d02a9 stp      xzr, xzr, [x8, #0x20]
00225528 1fe102f8 stur     xzr, [x8, #0x2e]
0022552C 290145f9 ldr      x9, [x9, #0xa00]
00225530 1f3100f9 str      xzr, [x8, #0x60]
00225534 1f4109f8 stur     xzr, [x8, #0x94]
00225538 1f2101b9 str      wzr, [x8, #0x120]
0022553C 1ffd06a9 stp      xzr, xzr, [x8, #0x68]
00225540 280140f9 ldr      x8, [x9]
00225544 133540f9 ldr      x19, [x8, #0x68]
00225548 b30000b4 cbz      x19, #0x22555c
0022554C e00313aa mov      x0, x19
00225550 088c44f8 ldr      x8, [x0, #0x48]!
00225554 080940f9 ldr      x8, [x8, #0x10]
00225558 00013fd6 blr      x8
0022555C f7031faa mov      x23, xzr
00225560 d43100f0 adrp     x20, #0x860000
00225564 94a21a91 add      x20, x20, #0x6a8
00225568 d83100f0 adrp     x24, #0x860000
0022556C 196b9652 mov      w25, #0xb358
00225570 f900a072 movk     w25, #7, lsl #16
00225574 db3100f0 adrp     x27, #0x860000
00225578 1c8a9652 mov      w28, #0xb450
0022557C fc00a072 movk     w28, #7, lsl #16
00225580 166c9652 mov      w22, #0xb360
00225584 f600a072 movk     w22, #7, lsl #16
00225588 1a2e0090 adrp     x26, #0x7e5000
0022558C 5ac31891 add      x26, x26, #0x630
00225590 05000014 b        #0x2255a4
00225594 f7060091 add      x23, x23, #1
00225598 94220091 add      x20, x20, #8
0022559C ff7a00f1 cmp      x23, #0x1e
002255A0 20040054 b.eq     #0x225624
002255A4 089b87b9 ldrsw    x8, [x24, #0x798]
002255A8 ff0208eb cmp      x23, x8
002255AC ca010054 b.ge     #0x2255e4
002255B0 e00313aa mov      x0, x19
002255B4 e10314aa mov      x1, x20
002255B8 f873ff97 bl       #0x202598
002255BC 40010037 tbnz     w0, #0, #0x2255e4
002255C0 496bb9b8 ldrsw    x9, [x26, x25]
002255C4 0a4d9652 mov      w10, #0xb268
002255C8 ea00a072 movk     w10, #7, lsl #16
002255CC 880240f9 ldr      x8, [x20]
002255D0 490f098b add      x9, x26, x9, lsl #3
002255D4 28692af8 str      x8, [x9, x10]
002255D8 486b79b8 ldr      w8, [x26, x25]
002255DC 08050011 add      w8, w8, #1
002255E0 486b39b8 str      w8, [x26, x25]
002255E4 689388b9 ldrsw    x8, [x27, #0x890]
002255E8 ff0208eb cmp      x23, x8
002255EC 4afdff54 b.ge     #0x225594
002255F0 95e20391 add      x21, x20, #0xf8
002255F4 e00313aa mov      x0, x19
002255F8 e10315aa mov      x1, x21
002255FC e773ff97 bl       #0x202598
00225600 a0fc0737 tbnz     w0, #0, #0x225594
00225604 496bbcb8 ldrsw    x9, [x26, x28]
00225608 490f098b add      x9, x26, x9, lsl #3
0022560C a80240f9 ldr      x8, [x21]
00225610 286936f8 str      x8, [x9, x22]
00225614 486b7cb8 ldr      w8, [x26, x28]
00225618 08050011 add      w8, w8, #1
0022561C 486b3cb8 str      w8, [x26, x28]
00225620 ddffff17 b        #0x225594
00225624 b30000b4 cbz      x19, #0x225638
00225628 688e44f8 ldr      x8, [x19, #0x48]!
0022562C e00313aa mov      x0, x19
00225630 080d40f9 ldr      x8, [x8, #0x18]
00225634 00013fd6 blr      x8
00225638 c83100f0 adrp     x8, #0x860000
0022563C 08212b91 add      x8, x8, #0xac8
00225640 1f0100f9 str      xzr, [x8]
00225644 08614091 add      x8, x8, #0x18, lsl #12
00225648 1f0100b9 str      wzr, [x8]
0022564C 517dff97 bl       #0x204b90
00225650 5581ff97 bl       #0x205ba4
00225654 143e00f0 adrp     x20, #0x9e8000
00225658 94c20191 add      x20, x20, #0x70
0022565C 880240f9 ldr      x8, [x20]
00225660 132940f9 ldr      x19, [x8, #0x50]
00225664 b30000b4 cbz      x19, #0x225678
00225668 e00313aa mov      x0, x19
0022566C 088c44f8 ldr      x8, [x0, #0x48]!
00225670 080940f9 ldr      x8, [x8, #0x10]
00225674 00013fd6 blr      x8
00225678 688e44f8 ldr      x8, [x19, #0x48]!
0022567C 09f28152 mov      w9, #0xf90
00225680 090ea072 movk     w9, #0x70, lsl #16
00225684 7f6a29b8 str      wzr, [x19, x9]
00225688 e00313aa mov      x0, x19
0022568C 080d40f9 ldr      x8, [x8, #0x18]
00225690 00013fd6 blr      x8
00225694 880240f9 ldr      x8, [x20]
00225698 132940f9 ldr      x19, [x8, #0x50]
0022569C b30000b4 cbz      x19, #0x2256b0
002256A0 e00313aa mov      x0, x19
002256A4 088c44f8 ldr      x8, [x0, #0x48]!
002256A8 080940f9 ldr      x8, [x8, #0x10]
002256AC 00013fd6 blr      x8
002256B0 e00313aa mov      x0, x19
002256B4 6f7cff97 bl       #0x204870
002256B8 688e44f8 ldr      x8, [x19, #0x48]!
002256BC e00313aa mov      x0, x19
002256C0 080d40f9 ldr      x8, [x8, #0x18]
002256C4 00013fd6 blr      x8
002256C8 880240f9 ldr      x8, [x20]
002256CC 133140f9 ldr      x19, [x8, #0x60]
002256D0 b30000b4 cbz      x19, #0x2256e4
002256D4 e00313aa mov      x0, x19
002256D8 088c44f8 ldr      x8, [x0, #0x48]!
002256DC 080940f9 ldr      x8, [x8, #0x10]
002256E0 00013fd6 blr      x8
002256E4 e00313aa mov      x0, x19
002256E8 a66aff97 bl       #0x200180
002256EC 688e44f8 ldr      x8, [x19, #0x48]!
002256F0 e00313aa mov      x0, x19
002256F4 080d40f9 ldr      x8, [x8, #0x18]
002256F8 00013fd6 blr      x8
002256FC d99a0c94 bl       #0x54c260
00225700 48d03bd5 mrs      x8, tpidr_el0
00225704 16c97392 and      x22, x8, #0xffffffffffffe000
00225708 c84e40f9 ldr      x8, [x22, #0x98]
0022570C 1f4100f1 cmp      x8, #0x10
00225710 c0100054 b.eq     #0x225928
00225714 c80e088b add      x8, x22, x8, lsl #3
00225718 01688052 mov      w1, #0x340
0022571C 02028052 mov      w2, #0x10
00225720 f40300aa mov      x20, x0
00225724 000d00f9 str      x0, [x8, #0x18]
00225728 c84e40f9 ldr      x8, [x22, #0x98]
0022572C 08050091 add      x8, x8, #1
00225730 c84e00f9 str      x8, [x22, #0x98]
00225734 080040f9 ldr      x8, [x0]
00225738 080940f9 ldr      x8, [x8, #0x10]
0022573C 00013fd6 blr      x8
00225740 f50300aa mov      x21, x0
00225744 a00000b5 cbnz     x0, #0x225758
00225748 880240f9 ldr      x8, [x20]
0022574C e00314aa mov      x0, x20
00225750 085d40f9 ldr      x8, [x8, #0xb8]
00225754 00013fd6 blr      x8
00225758 e00315aa mov      x0, x21
0022575C e10314aa mov      x1, x20
00225760 e2031faa mov      x2, xzr
00225764 7da00c94 bl       #0x54d958
00225768 e82b0090 adrp     x8, #0x7a1000
0022576C f30315aa mov      x19, x21
00225770 08dd43f9 ldr      x8, [x8, #0x7b8]
00225774 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00225778 09c10191 add      x9, x8, #0x70
0022577C bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00225780 bf1201f9 str      xzr, [x21, #0x220]
00225784 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00225788 bf1601f9 str      xzr, [x21, #0x228]
0022578C bf1a01f9 str      xzr, [x21, #0x230]
00225790 bf1e01f9 str      xzr, [x21, #0x238]
00225794 bf5201f9 str      xzr, [x21, #0x2a0]
00225798 bf5601f9 str      xzr, [x21, #0x2a8]
0022579C bf5a01f9 str      xzr, [x21, #0x2b0]
002257A0 bf5e01f9 str      xzr, [x21, #0x2b8]
002257A4 698e04f8 str      x9, [x19, #0x48]!
002257A8 09c10291 add      x9, x8, #0xb0
002257AC 08410091 add      x8, x8, #0x10
002257B0 e00313aa mov      x0, x19
002257B4 a92a00f9 str      x9, [x21, #0x50]
002257B8 09028052 mov      w9, #0x10
002257BC bf820c39 strb     wzr, [x21, #0x320]
002257C0 bfa20c39 strb     wzr, [x21, #0x328]
002257C4 bfc20c39 strb     wzr, [x21, #0x330]
002257C8 a91200f9 str      x9, [x21, #0x20]
002257CC a85200a9 stp      x8, x20, [x21]
002257D0 08688052 mov      w8, #0x340
002257D4 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
002257D8 b52201a9 stp      x21, x8, [x21, #0x10]
002257DC c84e40f9 ldr      x8, [x22, #0x98]
002257E0 080500d1 sub      x8, x8, #1
002257E4 c84e00f9 str      x8, [x22, #0x98]
002257E8 680240f9 ldr      x8, [x19]
002257EC 080940f9 ldr      x8, [x8, #0x10]
002257F0 00013fd6 blr      x8
002257F4 e8230091 add      x8, sp, #8
002257F8 e00315aa mov      x0, x21
002257FC 95cefb97 bl       #0x119250
00225800 e00740f9 ldr      x0, [sp, #8]
00225804 e8430091 add      x8, sp, #0x10
00225808 9afeff97 bl       #0x225270
0022580C f40b40f9 ldr      x20, [sp, #0x10]
00225810 e00314aa mov      x0, x20
00225814 4fa00c94 bl       #0x54d950
00225818 80020035 cbnz     w0, #0x225868
0022581C 881641f9 ldr      x8, [x20, #0x228]
00225820 c80000b4 cbz      x8, #0x225838
00225824 89820891 add      x9, x20, #0x220
00225828 80020991 add      x0, x20, #0x240
0022582C 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00225830 3f7d00a9 stp      xzr, xzr, [x9]
00225834 00013fd6 blr      x8
00225838 1f2003d5 nop      
0022583C 28e50210 adr      x8, #0x22b4e0
00225840 881201f9 str      x8, [x20, #0x220]
00225844 1f2003d5 nop      
00225848 e9e40210 adr      x9, #0x22b4e4
0022584C 891601f9 str      x9, [x20, #0x228]
00225850 1f2003d5 nop      
00225854 aae40210 adr      x10, #0x22b4e8
00225858 8a1a01f9 str      x10, [x20, #0x230]
0022585C 1f2003d5 nop      
00225860 68e40210 adr      x8, #0x22b4ec
00225864 881e01f9 str      x8, [x20, #0x238]
00225868 f50314aa mov      x21, x20
0022586C a88e44f8 ldr      x8, [x21, #0x48]!
00225870 e00315aa mov      x0, x21
00225874 080940f9 ldr      x8, [x8, #0x10]
00225878 00013fd6 blr      x8
0022587C e00314aa mov      x0, x20
00225880 c4a00c94 bl       #0x54db90
00225884 a80240f9 ldr      x8, [x21]
00225888 e00315aa mov      x0, x21
0022588C 080940f9 ldr      x8, [x8, #0x10]
00225890 00013fd6 blr      x8
00225894 e82d0090 adrp     x8, #0x7e1000
00225898 08613691 add      x8, x8, #0xd98
0022589C 160140f9 ldr      x22, [x8]
002258A0 c02a40f9 ldr      x0, [x22, #0x50]
002258A4 800000b4 cbz      x0, #0x2258b4
002258A8 088c44f8 ldr      x8, [x0, #0x48]!
002258AC 080d40f9 ldr      x8, [x8, #0x18]
002258B0 00013fd6 blr      x8
002258B4 d42a00f9 str      x20, [x22, #0x50]
002258B8 e00315aa mov      x0, x21
002258BC 882640f9 ldr      x8, [x20, #0x48]
002258C0 080d40f9 ldr      x8, [x8, #0x18]
002258C4 00013fd6 blr      x8
002258C8 e00b40f9 ldr      x0, [sp, #0x10]
002258CC a00000b4 cbz      x0, #0x2258e0
002258D0 088c44f8 ldr      x8, [x0, #0x48]!
002258D4 080d40f9 ldr      x8, [x8, #0x18]
002258D8 00013fd6 blr      x8
002258DC ff0b00f9 str      xzr, [sp, #0x10]
002258E0 e00740f9 ldr      x0, [sp, #8]
002258E4 a00000b4 cbz      x0, #0x2258f8
002258E8 088c44f8 ldr      x8, [x0, #0x48]!
002258EC 080d40f9 ldr      x8, [x8, #0x18]
002258F0 00013fd6 blr      x8
002258F4 ff0700f9 str      xzr, [sp, #8]
002258F8 680240f9 ldr      x8, [x19]
002258FC e00313aa mov      x0, x19
00225900 080d40f9 ldr      x8, [x8, #0x18]
00225904 00013fd6 blr      x8
00225908 f44f48a9 ldp      x20, x19, [sp, #0x80]
0022590C f65747a9 ldp      x22, x21, [sp, #0x70]
00225910 f85f46a9 ldp      x24, x23, [sp, #0x60]
00225914 fa6745a9 ldp      x26, x25, [sp, #0x50]
00225918 fc6f44a9 ldp      x28, x27, [sp, #0x40]
0022591C fd7b43a9 ldp      x29, x30, [sp, #0x30]
00225920 ff430291 add      sp, sp, #0x90
00225924 c0035fd6 ret      
00225928 ba74f797 bl       #0x2c10
~~~
### 0x225930 (163 slots)
~~~asm
00225930 ff0302d1 sub      sp, sp, #0x80
00225934 fd7b02a9 stp      x29, x30, [sp, #0x20]
00225938 fc6f03a9 stp      x28, x27, [sp, #0x30]
0022593C fa6704a9 stp      x26, x25, [sp, #0x40]
00225940 f85f05a9 stp      x24, x23, [sp, #0x50]
00225944 f65706a9 stp      x22, x21, [sp, #0x60]
00225948 f44f07a9 stp      x20, x19, [sp, #0x70]
0022594C fd830091 add      x29, sp, #0x20
00225950 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
00225954 482e00b0 adrp     x8, #0x7ee000
00225958 08c13c91 add      x8, x8, #0xf30
0022595C 29208052 mov      w9, #0x101
00225960 ea031faa mov      x10, xzr
00225964 096d0079 strh     w9, [x8, #0x36]
00225968 e92341f8 ldur     x9, [sp, #0x12]
0022596C 1f2d00f9 str      xzr, [x8, #0x58]
00225970 eaa340f8 ldur     x10, [sp, #0xa]
00225974 1f0900f9 str      xzr, [x8, #0x10]
00225978 1f310079 strh     wzr, [x8, #0x18]
0022597C 1f4500f9 str      xzr, [x8, #0x88]
00225980 1f210179 strh     wzr, [x8, #0x90]
00225984 1fa101b8 stur     wzr, [x8, #0x1a]
00225988 092105f8 stur     x9, [x8, #0x52]
0022598C 094b8352 mov      w9, #0x1a58
00225990 e900a072 movk     w9, #7, lsl #16
00225994 1f6929b8 str      wzr, [x8, x9]
00225998 096a8352 mov      w9, #0x1b50
0022599C e900a072 movk     w9, #7, lsl #16
002259A0 1f010139 strb     wzr, [x8, #0x40]
002259A4 1f1d00f9 str      xzr, [x8, #0x38]
002259A8 1f4500b9 str      wzr, [x8, #0x44]
002259AC 1f910079 strh     wzr, [x8, #0x48]
002259B0 0aa104f8 stur     x10, [x8, #0x4a]
002259B4 1f6929b8 str      wzr, [x8, x9]
002259B8 e92b00b0 adrp     x9, #0x7a2000
002259BC 1f7d00a9 stp      xzr, xzr, [x8]
002259C0 1ffd07a9 stp      xzr, xzr, [x8, #0x78]
002259C4 1f7d02a9 stp      xzr, xzr, [x8, #0x20]
002259C8 1fe102f8 stur     xzr, [x8, #0x2e]
002259CC 290145f9 ldr      x9, [x9, #0xa00]
002259D0 1f3100f9 str      xzr, [x8, #0x60]
002259D4 1f4109f8 stur     xzr, [x8, #0x94]
002259D8 1f2101b9 str      wzr, [x8, #0x120]
002259DC 1ffd06a9 stp      xzr, xzr, [x8, #0x68]
002259E0 280140f9 ldr      x8, [x9]
002259E4 133540f9 ldr      x19, [x8, #0x68]
002259E8 b30000b4 cbz      x19, #0x2259fc
002259EC e00313aa mov      x0, x19
002259F0 088c44f8 ldr      x8, [x0, #0x48]!
002259F4 080940f9 ldr      x8, [x8, #0x10]
002259F8 00013fd6 blr      x8
002259FC f7031faa mov      x23, xzr
00225A00 d43100f0 adrp     x20, #0x860000
00225A04 94a21a91 add      x20, x20, #0x6a8
00225A08 d83100f0 adrp     x24, #0x860000
00225A0C 196b9652 mov      w25, #0xb358
00225A10 f900a072 movk     w25, #7, lsl #16
00225A14 db3100f0 adrp     x27, #0x860000
00225A18 1c8a9652 mov      w28, #0xb450
00225A1C fc00a072 movk     w28, #7, lsl #16
00225A20 166c9652 mov      w22, #0xb360
00225A24 f600a072 movk     w22, #7, lsl #16
00225A28 1a2e0090 adrp     x26, #0x7e5000
00225A2C 5ac31891 add      x26, x26, #0x630
00225A30 05000014 b        #0x225a44
00225A34 f7060091 add      x23, x23, #1
00225A38 94220091 add      x20, x20, #8
00225A3C ff7a00f1 cmp      x23, #0x1e
00225A40 20040054 b.eq     #0x225ac4
00225A44 089b87b9 ldrsw    x8, [x24, #0x798]
00225A48 ff0208eb cmp      x23, x8
00225A4C ca010054 b.ge     #0x225a84
00225A50 e00313aa mov      x0, x19
00225A54 e10314aa mov      x1, x20
00225A58 d072ff97 bl       #0x202598
00225A5C 40010037 tbnz     w0, #0, #0x225a84
00225A60 496bb9b8 ldrsw    x9, [x26, x25]
00225A64 0a4d9652 mov      w10, #0xb268
00225A68 ea00a072 movk     w10, #7, lsl #16
00225A6C 880240f9 ldr      x8, [x20]
00225A70 490f098b add      x9, x26, x9, lsl #3
00225A74 28692af8 str      x8, [x9, x10]
00225A78 486b79b8 ldr      w8, [x26, x25]
00225A7C 08050011 add      w8, w8, #1
00225A80 486b39b8 str      w8, [x26, x25]
00225A84 689388b9 ldrsw    x8, [x27, #0x890]
00225A88 ff0208eb cmp      x23, x8
00225A8C 4afdff54 b.ge     #0x225a34
00225A90 95e20391 add      x21, x20, #0xf8
00225A94 e00313aa mov      x0, x19
00225A98 e10315aa mov      x1, x21
00225A9C bf72ff97 bl       #0x202598
00225AA0 a0fc0737 tbnz     w0, #0, #0x225a34
00225AA4 496bbcb8 ldrsw    x9, [x26, x28]
00225AA8 490f098b add      x9, x26, x9, lsl #3
00225AAC a80240f9 ldr      x8, [x21]
00225AB0 286936f8 str      x8, [x9, x22]
00225AB4 486b7cb8 ldr      w8, [x26, x28]
00225AB8 08050011 add      w8, w8, #1
00225ABC 486b3cb8 str      w8, [x26, x28]
00225AC0 ddffff17 b        #0x225a34
00225AC4 b30000b4 cbz      x19, #0x225ad8
00225AC8 688e44f8 ldr      x8, [x19, #0x48]!
00225ACC e00313aa mov      x0, x19
00225AD0 080d40f9 ldr      x8, [x8, #0x18]
00225AD4 00013fd6 blr      x8
00225AD8 c83100f0 adrp     x8, #0x860000
00225ADC 08212b91 add      x8, x8, #0xac8
00225AE0 1f0100f9 str      xzr, [x8]
00225AE4 08614091 add      x8, x8, #0x18, lsl #12
00225AE8 1f0100b9 str      wzr, [x8]
00225AEC 297cff97 bl       #0x204b90
00225AF0 2d80ff97 bl       #0x205ba4
00225AF4 143e00f0 adrp     x20, #0x9e8000
00225AF8 94c20191 add      x20, x20, #0x70
00225AFC 880240f9 ldr      x8, [x20]
00225B00 132940f9 ldr      x19, [x8, #0x50]
00225B04 b30000b4 cbz      x19, #0x225b18
00225B08 e00313aa mov      x0, x19
00225B0C 088c44f8 ldr      x8, [x0, #0x48]!
00225B10 080940f9 ldr      x8, [x8, #0x10]
00225B14 00013fd6 blr      x8
00225B18 688e44f8 ldr      x8, [x19, #0x48]!
00225B1C 09f28152 mov      w9, #0xf90
00225B20 090ea072 movk     w9, #0x70, lsl #16
00225B24 7f6a29b8 str      wzr, [x19, x9]
00225B28 e00313aa mov      x0, x19
00225B2C 080d40f9 ldr      x8, [x8, #0x18]
00225B30 00013fd6 blr      x8
00225B34 880240f9 ldr      x8, [x20]
00225B38 132940f9 ldr      x19, [x8, #0x50]
00225B3C b30000b4 cbz      x19, #0x225b50
00225B40 e00313aa mov      x0, x19
00225B44 088c44f8 ldr      x8, [x0, #0x48]!
00225B48 080940f9 ldr      x8, [x8, #0x10]
00225B4C 00013fd6 blr      x8
00225B50 e00313aa mov      x0, x19
00225B54 477bff97 bl       #0x204870
00225B58 688e44f8 ldr      x8, [x19, #0x48]!
00225B5C e00313aa mov      x0, x19
00225B60 080d40f9 ldr      x8, [x8, #0x18]
00225B64 00013fd6 blr      x8
00225B68 880240f9 ldr      x8, [x20]
00225B6C 133140f9 ldr      x19, [x8, #0x60]
00225B70 b30000b4 cbz      x19, #0x225b84
00225B74 e00313aa mov      x0, x19
00225B78 088c44f8 ldr      x8, [x0, #0x48]!
00225B7C 080940f9 ldr      x8, [x8, #0x10]
00225B80 00013fd6 blr      x8
00225B84 e00313aa mov      x0, x19
00225B88 7e69ff97 bl       #0x200180
00225B8C 688e44f8 ldr      x8, [x19, #0x48]!
00225B90 e00313aa mov      x0, x19
00225B94 080d40f9 ldr      x8, [x8, #0x18]
00225B98 00013fd6 blr      x8
00225B9C f44f47a9 ldp      x20, x19, [sp, #0x70]
00225BA0 f65746a9 ldp      x22, x21, [sp, #0x60]
00225BA4 f85f45a9 ldp      x24, x23, [sp, #0x50]
00225BA8 fa6744a9 ldp      x26, x25, [sp, #0x40]
00225BAC fc6f43a9 ldp      x28, x27, [sp, #0x30]
00225BB0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00225BB4 ff030291 add      sp, sp, #0x80
00225BB8 5e2d0014 b        #0x231130
~~~
### 0x226fe0 (88 slots)
~~~asm
00226FE0 ff8301d1 sub      sp, sp, #0x60
00226FE4 fd7b04a9 stp      x29, x30, [sp, #0x40]
00226FE8 f32b00f9 str      x19, [sp, #0x50]
00226FEC fd030191 add      x29, sp, #0x40
00226FF0 482e00b0 adrp     x8, #0x7ef000
00226FF4 085140b9 ldr      w8, [x8, #0x50]
00226FF8 08050051 sub      w8, w8, #1
00226FFC 1f150071 cmp      w8, #5
00227000 68090054 b.hi     #0x22712c
00227004 692000b0 adrp     x9, #0x634000
00227008 29713091 add      x9, x9, #0xc1c
0022700C 8a000010 adr      x10, #0x22701c
00227010 2b696838 ldrb     w11, [x9, x8]
00227014 4a090b8b add      x10, x10, x11, lsl #2
00227018 40011fd6 br       x10
0022701C f32b40f9 ldr      x19, [sp, #0x50]
00227020 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00227024 ff830191 add      sp, sp, #0x60
00227028 1298ff17 b        #0x20d070
0022702C c82b0090 adrp     x8, #0x79f000
00227030 81008052 mov      w1, #4
00227034 082542f9 ldr      x8, [x8, #0x448]
00227038 f32b40f9 ldr      x19, [sp, #0x50]
0022703C fd7b44a9 ldp      x29, x30, [sp, #0x40]
00227040 000140f9 ldr      x0, [x8]
00227044 ff830191 add      sp, sp, #0x60
00227048 b32a0114 b        #0x271b14
0022704C c82d00d0 adrp     x8, #0x7e1000
00227050 08011891 add      x8, x8, #0x600
00227054 f32b40f9 ldr      x19, [sp, #0x50]
00227058 fd7b44a9 ldp      x29, x30, [sp, #0x40]
0022705C 000140f9 ldr      x0, [x8]
00227060 ff830191 add      sp, sp, #0x60
00227064 afddfd17 b        #0x19e720
00227068 c82b0090 adrp     x8, #0x79f000
0022706C 61008052 mov      w1, #3
00227070 088942f9 ldr      x8, [x8, #0x510]
00227074 f32b40f9 ldr      x19, [sp, #0x50]
00227078 fd7b44a9 ldp      x29, x30, [sp, #0x40]
0022707C 000140f9 ldr      x0, [x8]
00227080 ff830191 add      sp, sp, #0x60
00227084 282bfe17 b        #0x1b1d24
00227088 c82d00d0 adrp     x8, #0x7e1000
0022708C 08811891 add      x8, x8, #0x620
00227090 130140f9 ldr      x19, [x8]
00227094 530500b4 cbz      x19, #0x22713c
00227098 c82b00f0 adrp     x8, #0x7a2000
0022709C a06300d1 sub      x0, x29, #0x18
002270A0 081d46f9 ldr      x8, [x8, #0xc38]
002270A4 092940a9 ldp      x9, x10, [x8]
002270A8 080940f9 ldr      x8, [x8, #0x10]
002270AC a8831ff8 stur     x8, [x29, #-8]
002270B0 e8230091 add      x8, sp, #8
002270B4 a9ab3ea9 stp      x9, x10, [x29, #-0x18]
002270B8 71080b94 bl       #0x4e927c
002270BC e1230091 add      x1, sp, #8
002270C0 e00313aa mov      x0, x19
002270C4 e5d50194 bl       #0x29c858
002270C8 e01340f9 ldr      x0, [sp, #0x20]
002270CC a00200b5 cbnz     x0, #0x227120
002270D0 17000014 b        #0x22712c
002270D4 a426ff97 bl       #0x1f0b64
002270D8 28c09bd2 mov      x8, #0xde01
002270DC 6877bef2 movk     x8, #0xf3bb, lsl #16
002270E0 691f00d0 adrp     x9, #0x615000
002270E4 29190491 add      x9, x9, #0x106
002270E8 885ac1f2 movk     x8, #0xad4, lsl #32
002270EC e8c2e5f2 movk     x8, #0x2e17, lsl #48
002270F0 a8a73ea9 stp      x8, x9, [x29, #-0x18]
002270F4 a8008052 mov      w8, #5
002270F8 f30300aa mov      x19, x0
002270FC a8831ff8 stur     x8, [x29, #-8]
00227100 e8230091 add      x8, sp, #8
00227104 a06300d1 sub      x0, x29, #0x18
00227108 5d080b94 bl       #0x4e927c
0022710C e1230091 add      x1, sp, #8
00227110 e00313aa mov      x0, x19
00227114 694dff97 bl       #0x1fa6b8
00227118 e01340f9 ldr      x0, [sp, #0x20]
0022711C 800000b4 cbz      x0, #0x22712c
00227120 088c44f8 ldr      x8, [x0, #0x48]!
00227124 080d40f9 ldr      x8, [x8, #0x18]
00227128 00013fd6 blr      x8
0022712C f32b40f9 ldr      x19, [sp, #0x50]
00227130 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00227134 ff830191 add      sp, sp, #0x60
00227138 c0035fd6 ret      
0022713C 813c0f94 bl       #0x5f6340
~~~
### 0x2459c4 (230 slots)
~~~asm
002459C4 081440b9 ldr      w8, [x0, #0x14]
002459C8 1f0d0071 cmp      w8, #3
002459CC 680b0054 b.hi     #0x245b38
002459D0 ff8306d1 sub      sp, sp, #0x1a0
002459D4 fd7b15a9 stp      x29, x30, [sp, #0x150]
002459D8 fc6716a9 stp      x28, x25, [sp, #0x160]
002459DC f85f17a9 stp      x24, x23, [sp, #0x170]
002459E0 f65718a9 stp      x22, x21, [sp, #0x180]
002459E4 f44f19a9 stp      x20, x19, [sp, #0x190]
002459E8 fd430591 add      x29, sp, #0x150
002459EC 098e8252 mov      w9, #0x1470
002459F0 8972a072 movk     w9, #0x394, lsl #16
002459F4 f30300aa mov      x19, x0
002459F8 1500098b add      x21, x0, x9
002459FC 09858452 mov      w9, #0x2428
00245A00 e95fa072 movk     w9, #0x2ff, lsl #16
00245A04 1900098b add      x25, x0, x9
00245A08 691f00f0 adrp     x9, #0x634000
00245A0C 29553291 add      x9, x9, #0xc95
00245A10 8a000010 adr      x10, #0x245a20
00245A14 2b696838 ldrb     w11, [x9, x8]
00245A18 4a090b8b add      x10, x10, x11, lsl #2
00245A1C 40011fd6 br       x10
00245A20 611e00d0 adrp     x1, #0x613000
00245A24 21b40d91 add      x1, x1, #0x36d
00245A28 e0230091 add      x0, sp, #8
00245A2C ec87ff97 bl       #0x2279dc
00245A30 e0230091 add      x0, sp, #8
00245A34 0188ff97 bl       #0x227a38
00245A38 f40300aa mov      x20, x0
00245A3C e00313aa mov      x0, x19
00245A40 c8000094 bl       #0x245d60
00245A44 1f70ff97 bl       #0x221ac0
00245A48 88b39552 mov      w8, #0xad9c
00245A4C 2803a072 movk     w8, #0x19, lsl #16
00245A50 09028052 mov      w9, #0x10
00245A54 096828b8 str      w9, [x0, x8]
00245A58 08908252 mov      w8, #0x1480
00245A5C 8872a072 movk     w8, #0x394, lsl #16
00245A60 7502088b add      x21, x19, x8
00245A64 16249452 mov      w22, #0xa120
00245A68 f600a072 movk     w22, #7, lsl #16
00245A6C e00313aa mov      x0, x19
00245A70 e10315aa mov      x1, x21
00245A74 e203162a mov      w2, w22
00245A78 8a3eff97 bl       #0x2154a0
00245A7C 08b49652 mov      w8, #0xb5a0
00245A80 6873a072 movk     w8, #0x39b, lsl #16
00245A84 7702088b add      x23, x19, x8
00245A88 0e70ff97 bl       #0x221ac0
00245A8C f80300aa mov      x24, x0
00245A90 d81eff97 bl       #0x20d5f0
00245A94 28548252 mov      w8, #0x12a1
00245A98 821e00d0 adrp     x2, #0x617000
00245A9C 42383891 add      x2, x2, #0xe0e
00245AA0 0400088b add      x4, x0, x8
00245AA4 e00317aa mov      x0, x23
00245AA8 e10316aa mov      x1, x22
00245AAC e30318aa mov      x3, x24
00245AB0 e50315aa mov      x5, x21
00245AB4 0fc30e94 bl       #0x5f66f0
00245AB8 a8008052 mov      w8, #5
00245ABC e00313aa mov      x0, x19
00245AC0 a8831bb8 stur     w8, [x29, #-0x48]
00245AC4 e82a00b0 adrp     x8, #0x7a2000
00245AC8 e10317aa mov      x1, x23
00245ACC 082145f9 ldr      x8, [x8, #0xa40]
00245AD0 bf7f3fa9 stp      xzr, xzr, [x29, #-0x10]
00245AD4 092940a9 ldp      x9, x10, [x8]
00245AD8 a92b3ca9 stp      x9, x10, [x29, #-0x40]
00245ADC 092941a9 ldp      x9, x10, [x8, #0x10]
00245AE0 081140f9 ldr      x8, [x8, #0x20]
00245AE4 a92b3da9 stp      x9, x10, [x29, #-0x30]
00245AE8 a87f3ea9 stp      x8, xzr, [x29, #-0x20]
00245AEC 6157ff97 bl       #0x21b870
00245AF0 f46fff97 bl       #0x221ac0
00245AF4 88a58652 mov      w8, #0x352c
00245AF8 2803a072 movk     w8, #0x19, lsl #16
00245AFC 0a848452 mov      w10, #0x2420
00245B00 ea5fa072 movk     w10, #0x2ff, lsl #16
00245B04 096868b8 ldr      w9, [x0, x8]
00245B08 75020a8b add      x21, x19, x10
00245B0C a32301d1 sub      x3, x29, #0x48
00245B10 e10314aa mov      x1, x20
00245B14 29050011 add      w9, w9, #1
00245B18 096828b8 str      w9, [x0, x8]
00245B1C 68326791 add      x8, x19, #0x9cc, lsl #12
00245B20 e00315aa mov      x0, x21
00245B24 02812891 add      x2, x8, #0xa20
00245B28 a2160c94 bl       #0x54b5b0
00245B2C c0040036 tbz      w0, #0, #0x245bc4
00245B30 28008052 mov      w8, #1
00245B34 2e000014 b        #0x245bec
00245B38 e0031f2a mov      w0, wzr
00245B3C c0035fd6 ret      
00245B40 08848452 mov      w8, #0x2420
00245B44 e85fa072 movk     w8, #0x2ff, lsl #16
00245B48 7402088b add      x20, x19, x8
00245B4C e00314aa mov      x0, x20
00245B50 bf170c94 bl       #0x54ba4c
00245B54 20050036 tbz      w0, #0, #0x245bf8
00245B58 e0031f2a mov      w0, wzr
00245B5C 72000014 b        #0x245d24
00245B60 a80240b9 ldr      w8, [x21]
00245B64 48070034 cbz      w8, #0x245c4c
00245B68 e003082a mov      w0, w8
00245B6C 45b5ff97 bl       #0x233080
00245B70 680e40f9 ldr      x8, [x19, #0x18]
00245B74 bf0a00b9 str      wzr, [x21, #8]
00245B78 480100b4 cbz      x8, #0x245ba0
00245B7C 08510191 add      x8, x8, #0x54
00245B80 1ffddf88 ldar     wzr, [x8]
00245B84 680e40f9 ldr      x8, [x19, #0x18]
00245B88 c80000b4 cbz      x8, #0x245ba0
00245B8C 08510191 add      x8, x8, #0x54
00245B90 08fddf88 ldar     w8, [x8]
00245B94 691240f9 ldr      x9, [x19, #0x20]
00245B98 1f010071 cmp      w8, #0
00245B9C e803899a csel     x8, xzr, x9, eq
00245BA0 69c20091 add      x9, x19, #0x30
00245BA4 1f0100f1 cmp      x8, #0
00245BA8 ff030039 strb     wzr, [sp]
00245BAC 2001889a csel     x0, x9, x8, eq
00245BB0 e1030091 mov      x1, sp
00245BB4 080040f9 ldr      x8, [x0]
00245BB8 080540f9 ldr      x8, [x8, #8]
00245BBC 00013fd6 blr      x8
00245BC0 58000014 b        #0x245d20
00245BC4 e00315aa mov      x0, x21
00245BC8 c7170c94 bl       #0x54bae4
00245BCC 080040b9 ldr      w8, [x0]
00245BD0 c01e0090 adrp     x0, #0x61d000
00245BD4 00a42b91 add      x0, x0, #0xae9
00245BD8 220340b9 ldr      w2, [x25]
00245BDC e3031faa mov      x3, xzr
00245BE0 01550012 and      w1, w8, #0x3fffff
00245BE4 2f69ff97 bl       #0x2200a0
00245BE8 68008052 mov      w8, #3
00245BEC e0031f2a mov      w0, wzr
00245BF0 681600b9 str      w8, [x19, #0x14]
00245BF4 4c000014 b        #0x245d24
00245BF8 e00314aa mov      x0, x20
00245BFC af170c94 bl       #0x54bab8
00245C00 c0030036 tbz      w0, #0, #0x245c78
00245C04 e00314aa mov      x0, x20
00245C08 b2170c94 bl       #0x54bad0
00245C0C 600300b4 cbz      x0, #0x245c78
00245C10 e00313aa mov      x0, x19
00245C14 9f000094 bl       #0x245e90
00245C18 a00a00b9 str      w0, [x21, #8]
00245C1C 00040035 cbnz     w0, #0x245c9c
00245C20 a80640b9 ldr      w8, [x21, #4]
00245C24 c8030035 cbnz     w8, #0x245c9c
00245C28 a90e40b9 ldr      w9, [x21, #0xc]
00245C2C 28050011 add      w8, w9, #1
00245C30 a80e00b9 str      w8, [x21, #0xc]
00245C34 c9fdff35 cbnz     w9, #0x245bec
00245C38 8e73ff97 bl       #0x222a70
00245C3C 48008052 mov      w8, #2
00245C40 e0031f2a mov      w0, wzr
00245C44 681600b9 str      w8, [x19, #0x14]
00245C48 37000014 b        #0x245d24
00245C4C a00a40b9 ldr      w0, [x21, #8]
00245C50 c0000034 cbz      w0, #0x245c68
00245C54 60f9ff97 bl       #0x2441d4
00245C58 1f400071 cmp      w0, #0x10
00245C5C 81020054 b.ne     #0x245cac
00245C60 a80240b9 ldr      w8, [x21]
00245C64 28f8ff35 cbnz     w8, #0x245b68
00245C68 a00640b9 ldr      w0, [x21, #4]
00245C6C a0060034 cbz      w0, #0x245d40
00245C70 d0b5ff97 bl       #0x2333b0
00245C74 bfffff17 b        #0x245b70
00245C78 e00314aa mov      x0, x20
00245C7C 9a170c94 bl       #0x54bae4
00245C80 080040b9 ldr      w8, [x0]
00245C84 601e00d0 adrp     x0, #0x613000
00245C88 00400d91 add      x0, x0, #0x350
00245C8C 220340b9 ldr      w2, [x25]
00245C90 e3031faa mov      x3, xzr
00245C94 01550012 and      w1, w8, #0x3fffff
00245C98 0269ff97 bl       #0x2200a0
00245C9C 68008052 mov      w8, #3
00245CA0 e0031f2a mov      w0, wzr
00245CA4 681600b9 str      w8, [x19, #0x14]
00245CA8 1f000014 b        #0x245d24
00245CAC f403002a mov      w20, w0
00245CB0 bf0a00b9 str      wzr, [x21, #8]
00245CB4 836fff97 bl       #0x221ac0
00245CB8 88b39552 mov      w8, #0xad9c
00245CBC 2803a072 movk     w8, #0x19, lsl #16
00245CC0 146828b8 str      w20, [x0, x8]
00245CC4 7f6fff97 bl       #0x221ac0
00245CC8 88a58652 mov      w8, #0x352c
00245CCC 2803a072 movk     w8, #0x19, lsl #16
00245CD0 096868b8 ldr      w9, [x0, x8]
00245CD4 29050051 sub      w9, w9, #1
00245CD8 096828b8 str      w9, [x0, x8]
00245CDC 680e40f9 ldr      x8, [x19, #0x18]
00245CE0 480100b4 cbz      x8, #0x245d08
00245CE4 08510191 add      x8, x8, #0x54
00245CE8 1ffddf88 ldar     wzr, [x8]
00245CEC 680e40f9 ldr      x8, [x19, #0x18]
00245CF0 c80000b4 cbz      x8, #0x245d08
00245CF4 08510191 add      x8, x8, #0x54
00245CF8 08fddf88 ldar     w8, [x8]
00245CFC 691240f9 ldr      x9, [x19, #0x20]
00245D00 1f010071 cmp      w8, #0
00245D04 e803899a csel     x8, xzr, x9, eq
00245D08 69c20091 add      x9, x19, #0x30
00245D0C 1f0100f1 cmp      x8, #0
00245D10 2001889a csel     x0, x9, x8, eq
00245D14 080040f9 ldr      x8, [x0]
00245D18 080140f9 ldr      x8, [x8]
00245D1C 00013fd6 blr      x8
00245D20 20008052 mov      w0, #1
00245D24 f44f59a9 ldp      x20, x19, [sp, #0x190]
00245D28 f65758a9 ldp      x22, x21, [sp, #0x180]
00245D2C f85f57a9 ldp      x24, x23, [sp, #0x170]
00245D30 fc6756a9 ldp      x28, x25, [sp, #0x160]
00245D34 fd7b55a9 ldp      x29, x30, [sp, #0x150]
00245D38 ff830691 add      sp, sp, #0x1a0
00245D3C c0035fd6 ret      
00245D40 08178e52 mov      w8, #0x70b8
00245D44 4862a072 movk     w8, #0x312, lsl #16
00245D48 a00a40b9 ldr      w0, [x21, #8]
00245D4C 6802088b add      x8, x19, x8
00245D50 010140b9 ldr      w1, [x8]
00245D54 e3b4ff97 bl       #0x2330e0
00245D58 86ffff17 b        #0x245b70
~~~
### 0x248bb0 (979 slots)
~~~asm
00248BB0 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
00248BB4 fc6f01a9 stp      x28, x27, [sp, #0x10]
00248BB8 fd030091 mov      x29, sp
00248BBC fa6702a9 stp      x26, x25, [sp, #0x20]
00248BC0 f85f03a9 stp      x24, x23, [sp, #0x30]
00248BC4 f65704a9 stp      x22, x21, [sp, #0x40]
00248BC8 f44f05a9 stp      x20, x19, [sp, #0x50]
00248BCC ff4330d1 sub      sp, sp, #0xc10
00248BD0 081440b9 ldr      w8, [x0, #0x14]
00248BD4 1f350071 cmp      w8, #0xd
00248BD8 08390054 b.hi     #0x2492f8
00248BDC 09a89f52 mov      w9, #0xfd40
00248BE0 498ca072 movk     w9, #0x462, lsl #16
00248BE4 0a858452 mov      w10, #0x2428
00248BE8 ea5fa072 movk     w10, #0x2ff, lsl #16
00248BEC 1500098b add      x21, x0, x9
00248BF0 098e8252 mov      w9, #0x1470
00248BF4 8972a072 movk     w9, #0x394, lsl #16
00248BF8 1a00098b add      x26, x0, x9
00248BFC 691f0090 adrp     x9, #0x634000
00248C00 29b93291 add      x9, x9, #0xcae
00248C04 cb000010 adr      x11, #0x248c1c
00248C08 2c796878 ldrh     w12, [x9, x8, lsl #1]
00248C0C 6b090c8b add      x11, x11, x12, lsl #2
00248C10 f30300aa mov      x19, x0
00248C14 19000a8b add      x25, x0, x10
00248C18 60011fd6 br       x11
00248C1C a963ff97 bl       #0x221ac0
00248C20 08478552 mov      w8, #0x2a38
00248C24 0804a072 movk     w8, #0x20, lsl #16
00248C28 1f6828b8 str      wzr, [x0, x8]
00248C2C a563ff97 bl       #0x221ac0
00248C30 08458552 mov      w8, #0x2a28
00248C34 0804a072 movk     w8, #0x20, lsl #16
00248C38 146868b8 ldr      w20, [x0, x8]
00248C3C a163ff97 bl       #0x221ac0
00248C40 16438552 mov      w22, #0x2a18
00248C44 1604a072 movk     w22, #0x20, lsl #16
00248C48 0100168b add      x1, x0, x22
00248C4C e003142a mov      w0, w20
00248C50 f86bff97 bl       #0x223c30
00248C54 08a99f52 mov      w8, #0xfd48
00248C58 488ca072 movk     w8, #0x462, lsl #16
00248C5C f40300aa mov      x20, x0
00248C60 7502088b add      x21, x19, x8
00248C64 9763ff97 bl       #0x221ac0
00248C68 822e40b9 ldr      w2, [x20, #0x2c]
00248C6C 0100168b add      x1, x0, x22
00248C70 e00315aa mov      x0, x21
00248C74 83264139 ldrb     w3, [x20, #0x49]
00248C78 c32cfb97 bl       #0x113f84
00248C7C a82a00f0 adrp     x8, #0x79f000
00248C80 e00315aa mov      x0, x21
00248C84 08ed41f9 ldr      x8, [x8, #0x3d8]
00248C88 61008052 mov      w1, #3
00248C8C 080140f9 ldr      x8, [x8]
00248C90 025541f9 ldr      x2, [x8, #0x2a8]
00248C94 c12cfb97 bl       #0x113f98
00248C98 80490034 cbz      w0, #0x2495c8
00248C9C 28c48952 mov      w8, #0x4e21
00248CA0 e0031f2a mov      w0, wzr
00248CA4 480700b9 str      w8, [x26, #4]
00248CA8 56030014 b        #0x249a00
00248CAC 08a99f52 mov      w8, #0xfd48
00248CB0 488ca072 movk     w8, #0x462, lsl #16
00248CB4 f53700f9 str      x21, [sp, #0x68]
00248CB8 7b02088b add      x27, x19, x8
00248CBC e0031baa mov      x0, x27
00248CC0 ff2cfb97 bl       #0x1140bc
00248CC4 a07100b4 cbz      x0, #0x249af8
00248CC8 e83740f9 ldr      x8, [sp, #0x68]
00248CCC 001142f9 ldr      x0, [x8, #0x420]
00248CD0 407100b4 cbz      x0, #0x249af8
00248CD4 f91b00f9 str      x25, [sp, #0x30]
00248CD8 3e32fb97 bl       #0x1155d0
00248CDC e07000b4 cbz      x0, #0x249af8
00248CE0 211e00f0 adrp     x1, #0x60f000
00248CE4 219c2891 add      x1, x1, #0xa27
00248CE8 e0232c91 add      x0, sp, #0xb08
00248CEC 1ce88252 mov      w28, #0x1740
00248CF0 9c00a072 movk     w28, #4, lsl #16
00248CF4 3a7bff97 bl       #0x2279dc
00248CF8 e0232c91 add      x0, sp, #0xb08
00248CFC 4f7bff97 bl       #0x227a38
00248D00 a82a00f0 adrp     x8, #0x79f000
00248D04 f70300aa mov      x23, x0
00248D08 08ed41f9 ldr      x8, [x8, #0x3d8]
00248D0C e1031caa mov      x1, x28
00248D10 02018052 mov      w2, #8
00248D14 080140f9 ldr      x8, [x8]
00248D18 145541f9 ldr      x20, [x8, #0x2a8]
00248D1C 880240f9 ldr      x8, [x20]
00248D20 e00314aa mov      x0, x20
00248D24 080940f9 ldr      x8, [x8, #0x10]
00248D28 00013fd6 blr      x8
00248D2C 880240f9 ldr      x8, [x20]
00248D30 f50300aa mov      x21, x0
00248D34 014c9d52 mov      w1, #0xea60
00248D38 e00314aa mov      x0, x20
00248D3C 02018052 mov      w2, #8
00248D40 080940f9 ldr      x8, [x8, #0x10]
00248D44 00013fd6 blr      x8
00248D48 162c8152 mov      w22, #0x960
00248D4C f90300aa mov      x25, x0
00248D50 ff4b00f9 str      xzr, [sp, #0x90]
00248D54 e0a30691 add      x0, sp, #0x1a8
00248D58 e1031f2a mov      w1, wzr
00248D5C ff1301b9 str      wzr, [sp, #0x110]
00248D60 e20316aa mov      x2, x22
00248D64 fbb40e94 bl       #0x5f6150
00248D68 e83740f9 ldr      x8, [sp, #0x68]
00248D6C 181142f9 ldr      x24, [x8, #0x420]
00248D70 5463ff97 bl       #0x221ac0
00248D74 88458552 mov      w8, #0x2a2c
00248D78 0804a072 movk     w8, #0x20, lsl #16
00248D7C e2a30691 add      x2, sp, #0x1a8
00248D80 016868b8 ldr      w1, [x0, x8]
00248D84 080340f9 ldr      x8, [x24]
00248D88 e4430491 add      x4, sp, #0x110
00248D8C e00318aa mov      x0, x24
00248D90 087d40f9 ldr      x8, [x8, #0xf8]
00248D94 e303162a mov      w3, w22
00248D98 00013fd6 blr      x8
00248D9C e06a0036 tbz      w0, #0, #0x249af8
00248DA0 024c9d52 mov      w2, #0xea60
00248DA4 042c8152 mov      w4, #0x960
00248DA8 e0430291 add      x0, sp, #0x90
00248DAC e3a30691 add      x3, sp, #0x1a8
00248DB0 e10319aa mov      x1, x25
00248DB4 e50315aa mov      x5, x21
00248DB8 e6031caa mov      x6, x28
00248DBC c5b70e94 bl       #0x5f6cd0
00248DC0 c0690036 tbz      w0, #0, #0x249af8
00248DC4 085c8252 mov      w8, #0x12e0
00248DC8 488ca072 movk     w8, #0x462, lsl #16
00248DCC fa2b00f9 str      x26, [sp, #0x50]
00248DD0 7802088b add      x24, x19, x8
00248DD4 08609552 mov      w8, #0xab00
00248DD8 8885a072 movk     w8, #0x42c, lsl #16
00248DDC fb5f04a9 stp      x27, x23, [sp, #0x40]
00248DE0 7702088b add      x23, x19, x8
00248DE4 16fc8c52 mov      w22, #0x67e0
00248DE8 b606a072 movk     w22, #0x35, lsl #16
00248DEC e00317aa mov      x0, x23
00248DF0 e1031f2a mov      w1, wzr
00248DF4 e20316aa mov      x2, x22
00248DF8 d6b40e94 bl       #0x5f6150
00248DFC e34b40f9 ldr      x3, [sp, #0x90]
00248E00 e00317aa mov      x0, x23
00248E04 e10316aa mov      x1, x22
00248E08 e20319aa mov      x2, x25
00248E0C e4031f2a mov      w4, wzr
00248E10 f71f00f9 str      x23, [sp, #0x38]
00248E14 e5031f2a mov      w5, wzr
00248E18 a4340294 bl       #0x2d60a8
00248E1C 880240f9 ldr      x8, [x20]
00248E20 e00314aa mov      x0, x20
00248E24 e10315aa mov      x1, x21
00248E28 e2031caa mov      x2, x28
00248E2C 03018052 mov      w3, #8
00248E30 080d40f9 ldr      x8, [x8, #0x18]
00248E34 00013fd6 blr      x8
00248E38 880240f9 ldr      x8, [x20]
00248E3C 024c9d52 mov      w2, #0xea60
00248E40 e00314aa mov      x0, x20
00248E44 e10319aa mov      x1, x25
00248E48 03018052 mov      w3, #8
00248E4C 080d40f9 ldr      x8, [x8, #0x18]
00248E50 00013fd6 blr      x8
00248E54 a82a00f0 adrp     x8, #0x79f000
00248E58 e1a30691 add      x1, sp, #0x1a8
00248E5C 08ed41f9 ldr      x8, [x8, #0x3d8]
00248E60 080140f9 ldr      x8, [x8]
00248E64 005541f9 ldr      x0, [x8, #0x2a8]
00248E68 e8830691 add      x8, sp, #0x1a0
00248E6C e0d700f9 str      x0, [sp, #0x1a8]
00248E70 2a0bfb97 bl       #0x10bb18
00248E74 f4c30591 add      x20, sp, #0x170
00248E78 ff330379 strh     wzr, [sp, #0x198]
00248E7C 80b20091 add      x0, x20, #0x2c
00248E80 ffff18a9 stp      xzr, xzr, [sp, #0x188]
00248E84 ffbb00f9 str      xzr, [sp, #0x170]
00248E88 ffff17a9 stp      xzr, xzr, [sp, #0x178]
00248E8C 66e90a94 bl       #0x503424
00248E90 fa3740f9 ldr      x26, [sp, #0x68]
00248E94 401342f9 ldr      x0, [x26, #0x420]
00248E98 ce31fb97 bl       #0x1155d0
00248E9C 4534fb97 bl       #0x115fb0
00248EA0 e06b01b9 str      w0, [sp, #0x168]
00248EA4 401342f9 ldr      x0, [x26, #0x420]
00248EA8 e8430491 add      x8, sp, #0x110
00248EAC e8b300f9 str      x8, [sp, #0x160]
00248EB0 080040f9 ldr      x8, [x0]
00248EB4 087940f9 ldr      x8, [x8, #0xf0]
00248EB8 00013fd6 blr      x8
00248EBC f903002a mov      w25, w0
00248EC0 e0a30691 add      x0, sp, #0x1a8
00248EC4 e1031f2a mov      w1, wzr
00248EC8 02408052 mov      w2, #0x200
00248ECC a1b40e94 bl       #0x5f6150
00248ED0 680f8052 mov      w8, #0x7b
00248ED4 f82f00f9 str      x24, [sp, #0x58]
00248ED8 08030039 strb     w8, [x24]
00248EDC 285c8252 mov      w8, #0x12e1
00248EE0 488ca072 movk     w8, #0x462, lsl #16
00248EE4 6802088b add      x8, x19, x8
00248EE8 e83b00f9 str      x8, [sp, #0x70]
00248EEC 993b0034 cbz      w25, #0x24965c
00248EF0 fb031f2a mov      w27, wzr
00248EF4 7c1e00d0 adrp     x28, #0x616000
00248EF8 9c230091 add      x28, x28, #8
00248EFC 18108052 mov      w24, #0x80
00248F00 ff3300f9 str      xzr, [sp, #0x60]
00248F04 f7430291 add      x23, sp, #0x90
00248F08 351e00d0 adrp     x21, #0x60e000
00248F0C b54e1591 add      x21, x21, #0x553
00248F10 24000014 b        #0x248fa0
00248F14 e8d30191 add      x8, sp, #0x74
00248F18 e4cb4539 ldrb     w4, [sp, #0x172]
00248F1C e0a30691 add      x0, sp, #0x1a8
00248F20 05f14f78 ldurh    w5, [x8, #0xff]
00248F24 01408052 mov      w1, #0x200
00248F28 a21e00f0 adrp     x2, #0x61f000
00248F2C 42f81491 add      x2, x2, #0x53e
00248F30 e6d74539 ldrb     w6, [sp, #0x175]
00248F34 e3031b2a mov      w3, w27
00248F38 e7ef4279 ldrh     w7, [sp, #0x176]
00248F3C f70300f9 str      x23, [sp]
00248F40 e8274379 ldrh     w8, [sp, #0x192]
00248F44 e80b00b9 str      w8, [sp, #8]
00248F48 e92b4379 ldrh     w9, [sp, #0x194]
00248F4C e91300b9 str      w9, [sp, #0x10]
00248F50 ea2f4379 ldrh     w10, [sp, #0x196]
00248F54 ea1b00b9 str      w10, [sp, #0x18]
00248F58 eb334379 ldrh     w11, [sp, #0x198]
00248F5C eb2300b9 str      w11, [sp, #0x20]
00248F60 e4b50e94 bl       #0x5f66f0
00248F64 f63b40f9 ldr      x22, [sp, #0x70]
00248F68 e1a30691 add      x1, sp, #0x1a8
00248F6C 02408052 mov      w2, #0x200
00248F70 e00316aa mov      x0, x22
00248F74 ebb40e94 bl       #0x5f6320
00248F78 e0a30691 add      x0, sp, #0x1a8
00248F7C bdb40e94 bl       #0x5f6270
00248F80 fa3740f9 ldr      x26, [sp, #0x68]
00248F84 d602008b add      x22, x22, x0
00248F88 28008052 mov      w8, #1
00248F8C f63b00f9 str      x22, [sp, #0x70]
00248F90 e83300f9 str      x8, [sp, #0x60]
00248F94 7b070011 add      w27, w27, #1
00248F98 7f03196b cmp      w27, w25
00248F9C 20360054 b.eq     #0x249660
00248FA0 561342f9 ldr      x22, [x26, #0x420]
00248FA4 c762ff97 bl       #0x221ac0
00248FA8 88458552 mov      w8, #0x2a2c
00248FAC 0804a072 movk     w8, #0x20, lsl #16
00248FB0 e1430491 add      x1, sp, #0x110
00248FB4 026868b8 ldr      w2, [x0, x8]
00248FB8 c80240f9 ldr      x8, [x22]
00248FBC e00316aa mov      x0, x22
00248FC0 e3031b2a mov      w3, w27
00248FC4 088140f9 ldr      x8, [x8, #0x100]
00248FC8 00013fd6 blr      x8
00248FCC 40fe0736 tbz      w0, #0, #0x248f94
00248FD0 e0d340f9 ldr      x0, [sp, #0x1a0]
00248FD4 e1c30591 add      x1, sp, #0x170
00248FD8 e2830591 add      x2, sp, #0x160
00248FDC 9139fb97 bl       #0x117620
00248FE0 a0fdff35 cbnz     w0, #0x248f94
00248FE4 e4f34279 ldrh     w4, [sp, #0x178]
00248FE8 e0430291 add      x0, sp, #0x90
00248FEC 01108052 mov      w1, #0x80
00248FF0 e2031caa mov      x2, x28
00248FF4 231e00f0 adrp     x3, #0x60f000
00248FF8 630c1a91 add      x3, x3, #0x683
00248FFC ff7f10a9 stp      xzr, xzr, [sp, #0x100]
00249000 ff7f0fa9 stp      xzr, xzr, [sp, #0xf0]
00249004 ff7f0ea9 stp      xzr, xzr, [sp, #0xe0]
00249008 ff7f0da9 stp      xzr, xzr, [sp, #0xd0]
0024900C ff7f0ca9 stp      xzr, xzr, [sp, #0xc0]
00249010 ff7f0ba9 stp      xzr, xzr, [sp, #0xb0]
00249014 ff7f0aa9 stp      xzr, xzr, [sp, #0xa0]
00249018 ff7f09a9 stp      xzr, xzr, [sp, #0x90]
0024901C b5b50e94 bl       #0x5f66f0
00249020 1ffc0171 cmp      w0, #0x7f
00249024 88f7ff54 b.hi     #0x248f14
00249028 f603002a mov      w22, w0
0024902C ba008052 mov      w26, #5
00249030 847a7a78 ldrh     w4, [x20, x26, lsl #1]
00249034 e042368b add      x0, x23, w22, uxtw
00249038 0103164b sub      w1, w24, w22
0024903C e2031caa mov      x2, x28
00249040 e30315aa mov      x3, x21
00249044 abb50e94 bl       #0x5f66f0
00249048 60f6ff37 tbnz     w0, #0x1f, #0x248f14
0024904C 1600160b add      w22, w0, w22
00249050 481300d1 sub      x8, x26, #4
00249054 5a070091 add      x26, x26, #1
00249058 dffe0171 cmp      w22, #0x7f
0024905C 02994cfa ccmp     x8, #0xc, #2, ls
00249060 83feff54 b.lo     #0x249030
00249064 acffff17 b        #0x248f14
00249068 08a99f52 mov      w8, #0xfd48
0024906C 488ca072 movk     w8, #0x462, lsl #16
00249070 7402088b add      x20, x19, x8
00249074 08ac9f52 mov      w8, #0xfd60
00249078 488ca072 movk     w8, #0x462, lsl #16
0024907C 7502088b add      x21, x19, x8
00249080 e00315aa mov      x0, x21
00249084 aa2bfb97 bl       #0x113f2c
00249088 4273ff97 bl       #0x225d90
0024908C e00315aa mov      x0, x21
00249090 a72bfb97 bl       #0x113f2c
00249094 a92a00d0 adrp     x9, #0x79f000
00249098 48008052 mov      w8, #2
0024909C 29ed41f9 ldr      x9, [x9, #0x3d8]
002490A0 08200239 strb     w8, [x0, #0x88]
002490A4 e00314aa mov      x0, x20
002490A8 21008052 mov      w1, #1
002490AC 280140f9 ldr      x8, [x9]
002490B0 025541f9 ldr      x2, [x8, #0x2a8]
002490B4 0b2cfb97 bl       #0x1140e0
002490B8 e00e0036 tbz      w0, #0, #0x249294
002490BC 68008052 mov      w8, #3
002490C0 e0031f2a mov      w0, wzr
002490C4 681600b9 str      w8, [x19, #0x14]
002490C8 84020014 b        #0x249ad8
002490CC 36008052 mov      w22, #1
002490D0 08a99f52 mov      w8, #0xfd48
002490D4 488ca072 movk     w8, #0x462, lsl #16
002490D8 b6060039 strb     w22, [x21, #1]
002490DC b51242f9 ldr      x21, [x21, #0x420]
002490E0 7402088b add      x20, x19, x8
002490E4 7762ff97 bl       #0x221ac0
002490E8 88458552 mov      w8, #0x2a2c
002490EC 0804a072 movk     w8, #0x20, lsl #16
002490F0 016868b8 ldr      w1, [x0, x8]
002490F4 e00315aa mov      x0, x21
002490F8 8231fb97 bl       #0x115700
002490FC 08ac9f52 mov      w8, #0xfd60
00249100 488ca072 movk     w8, #0x462, lsl #16
00249104 7502088b add      x21, x19, x8
00249108 e00315aa mov      x0, x21
0024910C 882bfb97 bl       #0x113f2c
00249110 2073ff97 bl       #0x225d90
00249114 e00315aa mov      x0, x21
00249118 852bfb97 bl       #0x113f2c
0024911C c82c0090 adrp     x8, #0x7e1000
00249120 08611491 add      x8, x8, #0x518
00249124 16200239 strb     w22, [x0, #0x88]
00249128 e00314aa mov      x0, x20
0024912C 080140f9 ldr      x8, [x8]
00249130 015541f9 ldr      x1, [x8, #0x2a8]
00249134 302cfb97 bl       #0x1141f4
00249138 e00a0036 tbz      w0, #0, #0x249294
0024913C 88008052 mov      w8, #4
00249140 e0031f2a mov      w0, wzr
00249144 681600b9 str      w8, [x19, #0x14]
00249148 64020014 b        #0x249ad8
0024914C c82c0090 adrp     x8, #0x7e1000
00249150 08011991 add      x8, x8, #0x640
00249154 000140f9 ldr      x0, [x8]
00249158 9302ff97 bl       #0x209ba4
0024915C c0090036 tbz      w0, #0, #0x249294
00249160 08a99f52 mov      w8, #0xfd48
00249164 488ca072 movk     w8, #0x462, lsl #16
00249168 6002088b add      x0, x19, x8
0024916C 7d2cfb97 bl       #0x114360
00249170 400c0036 tbz      w0, #0, #0x2492f8
00249174 a8008052 mov      w8, #5
00249178 e0031f2a mov      w0, wzr
0024917C 681600b9 str      w8, [x19, #0x14]
00249180 56020014 b        #0x249ad8
00249184 08a99f52 mov      w8, #0xfd48
00249188 488ca072 movk     w8, #0x462, lsl #16
0024918C 6002088b add      x0, x19, x8
00249190 782cfb97 bl       #0x114370
00249194 00080036 tbz      w0, #0, #0x249294
00249198 c8008052 mov      w8, #6
0024919C e0031f2a mov      w0, wzr
002491A0 bf020039 strb     wzr, [x21]
002491A4 681600b9 str      w8, [x19, #0x14]
002491A8 4c020014 b        #0x249ad8
002491AC 08a99f52 mov      w8, #0xfd48
002491B0 488ca072 movk     w8, #0x462, lsl #16
002491B4 7402088b add      x20, x19, x8
002491B8 e00314aa mov      x0, x20
002491BC 9b2cfb97 bl       #0x114428
002491C0 c0090036 tbz      w0, #0, #0x2492f8
002491C4 e00314aa mov      x0, x20
002491C8 7f2cfb97 bl       #0x1143c4
002491CC 40060036 tbz      w0, #0, #0x249294
002491D0 811e00b0 adrp     x1, #0x61a000
002491D4 21343391 add      x1, x1, #0xccd
002491D8 bf060039 strb     wzr, [x21, #1]
002491DC e0a30691 add      x0, sp, #0x1a8
002491E0 ff79ff97 bl       #0x2279dc
002491E4 e0a30691 add      x0, sp, #0x1a8
002491E8 147aff97 bl       #0x227a38
002491EC 08908252 mov      w8, #0x1480
002491F0 8872a072 movk     w8, #0x394, lsl #16
002491F4 f40300aa mov      x20, x0
002491F8 7502088b add      x21, x19, x8
002491FC 3162ff97 bl       #0x221ac0
00249200 16688952 mov      w22, #0x4b40
00249204 9609a072 movk     w22, #0x4c, lsl #16
00249208 03a00f91 add      x3, x0, #0x3e8
0024920C 221e00d0 adrp     x2, #0x60f000
00249210 420c2991 add      x2, x2, #0xa43
00249214 441e00f0 adrp     x4, #0x614000
00249218 84941c91 add      x4, x4, #0x725
0024921C e00315aa mov      x0, x21
00249220 e10316aa mov      x1, x22
00249224 33b50e94 bl       #0x5f66f0
00249228 e00313aa mov      x0, x19
0024922C e10315aa mov      x1, x21
00249230 e203162a mov      w2, w22
00249234 9b30ff97 bl       #0x2154a0
00249238 08f88b52 mov      w8, #0x5fc0
0024923C 087ca072 movk     w8, #0x3e0, lsl #16
00249240 7702088b add      x23, x19, x8
00249244 1f62ff97 bl       #0x221ac0
00249248 f80300aa mov      x24, x0
0024924C e910ff97 bl       #0x20d5f0
00249250 28548252 mov      w8, #0x12a1
00249254 621e00d0 adrp     x2, #0x617000
00249258 42383891 add      x2, x2, #0xe0e
0024925C 0400088b add      x4, x0, x8
00249260 e00317aa mov      x0, x23
00249264 e10316aa mov      x1, x22
00249268 e30318aa mov      x3, x24
0024926C e50315aa mov      x5, x21
00249270 20b50e94 bl       #0x5f66f0
00249274 e00313aa mov      x0, x19
00249278 e10314aa mov      x1, x20
0024927C e20317aa mov      x2, x23
00249280 1f020094 bl       #0x249afc
00249284 a0360036 tbz      w0, #0, #0x249958
00249288 c8008052 mov      w8, #6
0024928C 480f00b9 str      w8, [x26, #0xc]
00249290 a1010014 b        #0x249914
00249294 28c48952 mov      w8, #0x4e21
00249298 e0031f2a mov      w0, wzr
0024929C 480700b9 str      w8, [x26, #4]
002492A0 68018052 mov      w8, #0xb
002492A4 681600b9 str      w8, [x19, #0x14]
002492A8 0c020014 b        #0x249ad8
002492AC f165ff97 bl       #0x222a70
002492B0 e0031f2a mov      w0, wzr
002492B4 630dff97 bl       #0x20c840
002492B8 08018052 mov      w8, #8
002492BC e0031f2a mov      w0, wzr
002492C0 681600b9 str      w8, [x19, #0x14]
002492C4 05020014 b        #0x249ad8
002492C8 e0031faa mov      x0, xzr
002492CC 550eff97 bl       #0x20cc20
002492D0 40010037 tbnz     w0, #0, #0x2492f8
002492D4 680e40f9 ldr      x8, [x19, #0x18]
002492D8 a83b00b5 cbnz     x8, #0x249a4c
002492DC e5010014 b        #0x249a70
002492E0 08848452 mov      w8, #0x2420
002492E4 e85fa072 movk     w8, #0x2ff, lsl #16
002492E8 7402088b add      x20, x19, x8
002492EC e00314aa mov      x0, x20
002492F0 d7090c94 bl       #0x54ba4c
002492F4 a0130036 tbz      w0, #0, #0x249568
002492F8 e0031f2a mov      w0, wzr
002492FC f7010014 b        #0x249ad8
00249300 480340b9 ldr      w8, [x26]
00249304 88160034 cbz      w8, #0x2495d4
00249308 e003082a mov      w0, w8
0024930C 5da7ff97 bl       #0x233080
00249310 f6031f2a mov      w22, wzr
00249314 a8064039 ldrb     w8, [x21, #1]
00249318 5f0b00b9 str      wzr, [x26, #8]
0024931C c8380034 cbz      w8, #0x249a34
00249320 08a99f52 mov      w8, #0xfd48
00249324 488ca072 movk     w8, #0x462, lsl #16
00249328 7402088b add      x20, x19, x8
0024932C e00314aa mov      x0, x20
00249330 f92bfb97 bl       #0x114314
00249334 00380036 tbz      w0, #0, #0x249a34
00249338 e00314aa mov      x0, x20
0024933C 262cfb97 bl       #0x1143d4
00249340 e00314aa mov      x0, x20
00249344 392cfb97 bl       #0x114428
00249348 60370037 tbnz     w0, #0, #0x249a34
0024934C 15488852 mov      w21, #0x4240
00249350 f501a072 movk     w21, #0xf, lsl #16
00249354 e00315aa mov      x0, x21
00249358 feb30e94 bl       #0x5f6350
0024935C e00314aa mov      x0, x20
00249360 322cfb97 bl       #0x114428
00249364 80ff0736 tbz      w0, #0, #0x249354
00249368 b3010014 b        #0x249a34
0024936C a8064039 ldrb     w8, [x21, #1]
00249370 f60315aa mov      x22, x21
00249374 5f0b00b9 str      wzr, [x26, #8]
00249378 68020034 cbz      w8, #0x2493c4
0024937C 08a99f52 mov      w8, #0xfd48
00249380 488ca072 movk     w8, #0x462, lsl #16
00249384 7402088b add      x20, x19, x8
00249388 e00314aa mov      x0, x20
0024938C e22bfb97 bl       #0x114314
00249390 a0010036 tbz      w0, #0, #0x2493c4
00249394 e00314aa mov      x0, x20
00249398 0f2cfb97 bl       #0x1143d4
0024939C e00314aa mov      x0, x20
002493A0 222cfb97 bl       #0x114428
002493A4 00010037 tbnz     w0, #0, #0x2493c4
002493A8 15488852 mov      w21, #0x4240
002493AC f501a072 movk     w21, #0xf, lsl #16
002493B0 e00315aa mov      x0, x21
002493B4 e7b30e94 bl       #0x5f6350
002493B8 e00314aa mov      x0, x20
002493BC 1b2cfb97 bl       #0x114428
002493C0 80ff0736 tbz      w0, #0, #0x2493b0
002493C4 2b65ff97 bl       #0x222870
002493C8 40000036 tbz      w0, #0, #0x2493d0
002493CC a965ff97 bl       #0x222a70
002493D0 c8064039 ldrb     w8, [x22, #1]
002493D4 e8110034 cbz      w8, #0x249610
002493D8 88018052 mov      w8, #0xc
002493DC e0031f2a mov      w0, wzr
002493E0 681600b9 str      w8, [x19, #0x14]
002493E4 bd010014 b        #0x249ad8
002493E8 811e00b0 adrp     x1, #0x61a000
002493EC 21343391 add      x1, x1, #0xccd
002493F0 e0a30691 add      x0, sp, #0x1a8
002493F4 7a79ff97 bl       #0x2279dc
002493F8 e0a30691 add      x0, sp, #0x1a8
002493FC 8f79ff97 bl       #0x227a38
00249400 08908252 mov      w8, #0x1480
00249404 8872a072 movk     w8, #0x394, lsl #16
00249408 f40300aa mov      x20, x0
0024940C 7502088b add      x21, x19, x8
00249410 ac61ff97 bl       #0x221ac0
00249414 16688952 mov      w22, #0x4b40
00249418 9609a072 movk     w22, #0x4c, lsl #16
0024941C 03a00f91 add      x3, x0, #0x3e8
00249420 221e00d0 adrp     x2, #0x60f000
00249424 420c2991 add      x2, x2, #0xa43
00249428 041e00b0 adrp     x4, #0x60a000
0024942C 84403f91 add      x4, x4, #0xfd0
00249430 e00315aa mov      x0, x21
00249434 e10316aa mov      x1, x22
00249438 aeb40e94 bl       #0x5f66f0
0024943C e00313aa mov      x0, x19
00249440 e10315aa mov      x1, x21
00249444 e203162a mov      w2, w22
00249448 1630ff97 bl       #0x2154a0
0024944C 08f88b52 mov      w8, #0x5fc0
00249450 087ca072 movk     w8, #0x3e0, lsl #16
00249454 7702088b add      x23, x19, x8
00249458 9a61ff97 bl       #0x221ac0
0024945C f80300aa mov      x24, x0
00249460 6410ff97 bl       #0x20d5f0
00249464 28548252 mov      w8, #0x12a1
00249468 621e00d0 adrp     x2, #0x617000
0024946C 42383891 add      x2, x2, #0xe0e
00249470 0400088b add      x4, x0, x8
00249474 e00317aa mov      x0, x23
00249478 e10316aa mov      x1, x22
0024947C e30318aa mov      x3, x24
00249480 e50315aa mov      x5, x21
00249484 9bb40e94 bl       #0x5f66f0
00249488 a8008052 mov      w8, #5
0024948C e00313aa mov      x0, x19
00249490 e80b0bb9 str      w8, [sp, #0xb08]
00249494 c82a00b0 adrp     x8, #0x7a2000
00249498 e10317aa mov      x1, x23
0024949C 082145f9 ldr      x8, [x8, #0xa40]
002494A0 ff9f05f9 str      xzr, [sp, #0xb38]
002494A4 ffa305f9 str      xzr, [sp, #0xb40]
002494A8 ffa705f9 str      xzr, [sp, #0xb48]
002494AC 092940a9 ldp      x9, x10, [x8]
002494B0 e98b05f9 str      x9, [sp, #0xb10]
002494B4 ea8f05f9 str      x10, [sp, #0xb18]
002494B8 092941a9 ldp      x9, x10, [x8, #0x10]
002494BC 081140f9 ldr      x8, [x8, #0x20]
002494C0 e99305f9 str      x9, [sp, #0xb20]
002494C4 ea9705f9 str      x10, [sp, #0xb28]
002494C8 e89b05f9 str      x8, [sp, #0xb30]
002494CC e948ff97 bl       #0x21b870
002494D0 7c61ff97 bl       #0x221ac0
002494D4 88a58652 mov      w8, #0x352c
002494D8 2803a072 movk     w8, #0x19, lsl #16
002494DC 0a848452 mov      w10, #0x2420
002494E0 ea5fa072 movk     w10, #0x2ff, lsl #16
002494E4 096868b8 ldr      w9, [x0, x8]
002494E8 75020a8b add      x21, x19, x10
002494EC e3232c91 add      x3, sp, #0xb08
002494F0 e10314aa mov      x1, x20
002494F4 29050011 add      w9, w9, #1
002494F8 096828b8 str      w9, [x0, x8]
002494FC 68326791 add      x8, x19, #0x9cc, lsl #12
00249500 e00315aa mov      x0, x21
00249504 02812891 add      x2, x8, #0xa20
00249508 2a080c94 bl       #0x54b5b0
0024950C 20050036 tbz      w0, #0, #0x2495b0
00249510 88018052 mov      w8, #0xc
00249514 480f00b9 str      w8, [x26, #0xc]
00249518 ff000014 b        #0x249914
0024951C 20c48952 mov      w0, #0x4e21
00249520 a4a7ff97 bl       #0x2333b0
00249524 680e40f9 ldr      x8, [x19, #0x18]
00249528 480100b4 cbz      x8, #0x249550
0024952C 08510191 add      x8, x8, #0x54
00249530 1ffddf88 ldar     wzr, [x8]
00249534 680e40f9 ldr      x8, [x19, #0x18]
00249538 c80000b4 cbz      x8, #0x249550
0024953C 08510191 add      x8, x8, #0x54
00249540 08fddf88 ldar     w8, [x8]
00249544 691240f9 ldr      x9, [x19, #0x20]
00249548 1f010071 cmp      w8, #0
0024954C e803899a csel     x8, xzr, x9, eq
00249550 69c20091 add      x9, x19, #0x30
00249554 1f0100f1 cmp      x8, #0
00249558 ffe30139 strb     wzr, [sp, #0x78]
0024955C 2001889a csel     x0, x9, x8, eq
00249560 e1e30191 add      x1, sp, #0x78
00249564 59010014 b        #0x249ac8
00249568 e00314aa mov      x0, x20
0024956C 53090c94 bl       #0x54bab8
00249570 801e0036 tbz      w0, #0, #0x249940
00249574 e00314aa mov      x0, x20
00249578 56090c94 bl       #0x54bad0
0024957C e02200b4 cbz      x0, #0x2499d8
00249580 e00313aa mov      x0, x19
00249584 84010094 bl       #0x249b94
00249588 400b00b9 str      w0, [x26, #8]
0024958C 80230035 cbnz     w0, #0x2499fc
00249590 480740b9 ldr      w8, [x26, #4]
00249594 48230035 cbnz     w8, #0x2499fc
00249598 480f40b9 ldr      w8, [x26, #0xc]
0024959C 08050011 add      w8, w8, #1
002495A0 1f250071 cmp      w8, #9
002495A4 480f00b9 str      w8, [x26, #0xc]
002495A8 80eaff54 b.eq     #0x2492f8
002495AC f7000014 b        #0x249988
002495B0 e00315aa mov      x0, x21
002495B4 4c090c94 bl       #0x54bae4
002495B8 080040b9 ldr      w8, [x0]
002495BC a01e0090 adrp     x0, #0x61d000
002495C0 00840191 add      x0, x0, #0x61
002495C4 ec000014 b        #0x249974
002495C8 28008052 mov      w8, #1
002495CC 681600b9 str      w8, [x19, #0x14]
002495D0 42010014 b        #0x249ad8
002495D4 400b40b9 ldr      w0, [x26, #8]
002495D8 c0000034 cbz      w0, #0x2495f0
002495DC eefaff97 bl       #0x248194
002495E0 1f080071 cmp      w0, #2
002495E4 811d0054 b.ne     #0x249994
002495E8 480340b9 ldr      w8, [x26]
002495EC e8e8ff35 cbnz     w8, #0x249308
002495F0 400740b9 ldr      w0, [x26, #4]
002495F4 c0200034 cbz      w0, #0x249a0c
002495F8 6ea7ff97 bl       #0x2333b0
002495FC f6031f2a mov      w22, wzr
00249600 a8064039 ldrb     w8, [x21, #1]
00249604 5f0b00b9 str      wzr, [x26, #8]
00249608 c8e8ff35 cbnz     w8, #0x249320
0024960C 0a010014 b        #0x249a34
00249610 400740b9 ldr      w0, [x26, #4]
00249614 67a7ff97 bl       #0x2333b0
00249618 680e40f9 ldr      x8, [x19, #0x18]
0024961C 480100b4 cbz      x8, #0x249644
00249620 08510191 add      x8, x8, #0x54
00249624 1ffddf88 ldar     wzr, [x8]
00249628 680e40f9 ldr      x8, [x19, #0x18]
0024962C c80000b4 cbz      x8, #0x249644
00249630 08510191 add      x8, x8, #0x54
00249634 08fddf88 ldar     w8, [x8]
00249638 691240f9 ldr      x9, [x19, #0x20]
0024963C 1f010071 cmp      w8, #0
00249640 e803899a csel     x8, xzr, x9, eq
00249644 69c20091 add      x9, x19, #0x30
00249648 1f0100f1 cmp      x8, #0
0024964C ff030239 strb     wzr, [sp, #0x80]
00249650 2001889a csel     x0, x9, x8, eq
00249654 e1030291 add      x1, sp, #0x80
00249658 1c010014 b        #0x249ac8
0024965C ff3300f9 str      xzr, [sp, #0x60]
00249660 fba345a9 ldp      x27, x8, [sp, #0x58]
00249664 17e88252 mov      w23, #0x1740
00249668 9700a072 movk     w23, #4, lsl #16
0024966C e93b40f9 ldr      x9, [sp, #0x70]
00249670 e10317aa mov      x1, x23
00249674 02018052 mov      w2, #8
00249678 08014092 and      x8, x8, #1
0024967C 280108cb sub      x8, x9, x8
00249680 a90f8052 mov      w9, #0x7d
00249684 09010039 strb     w9, [x8]
00249688 08011b4b sub      w8, w8, w27
0024968C 16050011 add      w22, w8, #1
00249690 c82c0090 adrp     x8, #0x7e1000
00249694 08611491 add      x8, x8, #0x518
00249698 080140f9 ldr      x8, [x8]
0024969C 155541f9 ldr      x21, [x8, #0x2a8]
002496A0 a80240f9 ldr      x8, [x21]
002496A4 e00315aa mov      x0, x21
002496A8 080940f9 ldr      x8, [x8, #0x10]
002496AC 00013fd6 blr      x8
002496B0 a80240f9 ldr      x8, [x21]
002496B4 144c9d52 mov      w20, #0xea60
002496B8 f80300aa mov      x24, x0
002496BC e00315aa mov      x0, x21
002496C0 e10314aa mov      x1, x20
002496C4 080940f9 ldr      x8, [x8, #0x10]
002496C8 02018052 mov      w2, #8
002496CC 00013fd6 blr      x8
002496D0 f90300aa mov      x25, x0
002496D4 c47e4093 sxtw     x4, w22
002496D8 ff4b00f9 str      xzr, [sp, #0x90]
002496DC e0430291 add      x0, sp, #0x90
002496E0 e10319aa mov      x1, x25
002496E4 e20314aa mov      x2, x20
002496E8 e3031baa mov      x3, x27
002496EC e50318aa mov      x5, x24
002496F0 e60317aa mov      x6, x23
002496F4 77b50e94 bl       #0x5f6cd0
002496F8 00200036 tbz      w0, #0, #0x249af8
002496FC 08029152 mov      w8, #0x8810
00249700 488ca072 movk     w8, #0x462, lsl #16
00249704 16a68e52 mov      w22, #0x7530
00249708 7402088b add      x20, x19, x8
0024970C e1031f2a mov      w1, wzr
00249710 e20316aa mov      x2, x22
00249714 e00314aa mov      x0, x20
00249718 8eb20e94 bl       #0x5f6150
0024971C e34b40f9 ldr      x3, [sp, #0x90]
00249720 e00314aa mov      x0, x20
00249724 e10316aa mov      x1, x22
00249728 e20319aa mov      x2, x25
0024972C e4031f2a mov      w4, wzr
00249730 e5031f2a mov      w5, wzr
00249734 5d320294 bl       #0x2d60a8
00249738 a80240f9 ldr      x8, [x21]
0024973C e00315aa mov      x0, x21
00249740 e10318aa mov      x1, x24
00249744 e20317aa mov      x2, x23
00249748 03018052 mov      w3, #8
0024974C 080d40f9 ldr      x8, [x8, #0x18]
00249750 00013fd6 blr      x8
00249754 a80240f9 ldr      x8, [x21]
00249758 024c9d52 mov      w2, #0xea60
0024975C e00315aa mov      x0, x21
00249760 e10319aa mov      x1, x25
00249764 03018052 mov      w3, #8
00249768 080d40f9 ldr      x8, [x8, #0x18]
0024976C 00013fd6 blr      x8
00249770 e0d340f9 ldr      x0, [sp, #0x1a0]
00249774 f92b40f9 ldr      x25, [sp, #0x50]
00249778 f72340f9 ldr      x23, [sp, #0x40]
0024977C 800000b4 cbz      x0, #0x24978c
00249780 088c44f8 ldr      x8, [x0, #0x48]!
00249784 080d40f9 ldr      x8, [x8, #0x18]
00249788 00013fd6 blr      x8
0024978C 401342f9 ldr      x0, [x26, #0x420]
00249790 ff0b02b9 str      wzr, [sp, #0x208]
00249794 08ac9f52 mov      w8, #0xfd60
00249798 488ca072 movk     w8, #0x462, lsl #16
0024979C ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
002497A0 7502088b add      x21, x19, x8
002497A4 ffff1ea9 stp      xzr, xzr, [sp, #0x1e8]
002497A8 ffff1da9 stp      xzr, xzr, [sp, #0x1d8]
002497AC ffff1ca9 stp      xzr, xzr, [sp, #0x1c8]
002497B0 ffff1ba9 stp      xzr, xzr, [sp, #0x1b8]
002497B4 ffff1aa9 stp      xzr, xzr, [sp, #0x1a8]
002497B8 080040f9 ldr      x8, [x0]
002497BC 082d40f9 ldr      x8, [x8, #0x58]
002497C0 00013fd6 blr      x8
002497C4 e103002a mov      w1, w0
002497C8 e00315aa mov      x0, x21
002497CC d929fb97 bl       #0x113f30
002497D0 e04b00f9 str      x0, [sp, #0x90]
002497D4 810c8052 mov      w1, #0x64
002497D8 e0a30691 add      x0, sp, #0x1a8
002497DC e2430291 add      x2, sp, #0x90
002497E0 03018052 mov      w3, #8
002497E4 e4031f2a mov      w4, wzr
002497E8 25008052 mov      w5, #1
002497EC 38008052 mov      w24, #1
002497F0 2e320294 bl       #0x2d60a8
002497F4 08908252 mov      w8, #0x1480
002497F8 8872a072 movk     w8, #0x394, lsl #16
002497FC e00317aa mov      x0, x23
00249800 7502088b add      x21, x19, x8
00249804 2e2afb97 bl       #0x1140bc
00249808 000040b9 ldr      w0, [x0]
0024980C dd85f897 bl       #0x6af80
00249810 161c0012 and      w22, w0, #0xff
00249814 e00317aa mov      x0, x23
00249818 292afb97 bl       #0x1140bc
0024981C 06104039 ldrb     w6, [x0, #4]
00249820 17688952 mov      w23, #0x4b40
00249824 9709a072 movk     w23, #0x4c, lsl #16
00249828 e31f40f9 ldr      x3, [sp, #0x38]
0024982C a21e0090 adrp     x2, #0x61d000
00249830 42b82c91 add      x2, x2, #0xb2e
00249834 e7a30691 add      x7, sp, #0x1a8
00249838 e00315aa mov      x0, x21
0024983C e10317aa mov      x1, x23
00249840 e40314aa mov      x4, x20
00249844 e503162a mov      w5, w22
00249848 aab30e94 bl       #0x5f66f0
0024984C e00313aa mov      x0, x19
00249850 e10315aa mov      x1, x21
00249854 e203172a mov      w2, w23
00249858 122fff97 bl       #0x2154a0
0024985C 08f88b52 mov      w8, #0x5fc0
00249860 087ca072 movk     w8, #0x3e0, lsl #16
00249864 7402088b add      x20, x19, x8
00249868 9660ff97 bl       #0x221ac0
0024986C f60300aa mov      x22, x0
00249870 600fff97 bl       #0x20d5f0
00249874 28548252 mov      w8, #0x12a1
00249878 621e00d0 adrp     x2, #0x617000
0024987C 42383891 add      x2, x2, #0xe0e
00249880 0400088b add      x4, x0, x8
00249884 e00314aa mov      x0, x20
00249888 e10317aa mov      x1, x23
0024988C e30316aa mov      x3, x22
00249890 e50315aa mov      x5, x21
00249894 97b30e94 bl       #0x5f66f0
00249898 a8008052 mov      w8, #5
0024989C e00313aa mov      x0, x19
002498A0 e89300b9 str      w8, [sp, #0x90]
002498A4 c82a00b0 adrp     x8, #0x7a2000
002498A8 e10314aa mov      x1, x20
002498AC 082145f9 ldr      x8, [x8, #0xa40]
002498B0 ffff0ca9 stp      xzr, xzr, [sp, #0xc8]
002498B4 092940a9 ldp      x9, x10, [x8]
002498B8 e9ab09a9 stp      x9, x10, [sp, #0x98]
002498BC 092941a9 ldp      x9, x10, [x8, #0x10]
002498C0 081140f9 ldr      x8, [x8, #0x20]
002498C4 e9ab0aa9 stp      x9, x10, [sp, #0xa8]
002498C8 e8ff0ba9 stp      x8, xzr, [sp, #0xb8]
002498CC e947ff97 bl       #0x21b870
002498D0 7c60ff97 bl       #0x221ac0
002498D4 88a58652 mov      w8, #0x352c
002498D8 2803a072 movk     w8, #0x19, lsl #16
002498DC e12740f9 ldr      x1, [sp, #0x48]
002498E0 096868b8 ldr      w9, [x0, x8]
002498E4 0a848452 mov      w10, #0x2420
002498E8 ea5fa072 movk     w10, #0x2ff, lsl #16
002498EC 74020a8b add      x20, x19, x10
002498F0 e3430291 add      x3, sp, #0x90
002498F4 29050011 add      w9, w9, #1
002498F8 096828b8 str      w9, [x0, x8]
002498FC 68326791 add      x8, x19, #0x9cc, lsl #12
00249900 e00314aa mov      x0, x20
00249904 02812891 add      x2, x8, #0xa20
00249908 2a070c94 bl       #0x54b5b0
0024990C 80000036 tbz      w0, #0, #0x24991c
00249910 380f00b9 str      w24, [x25, #0xc]
00249914 28018052 mov      w8, #9
00249918 1c000014 b        #0x249988
0024991C e00314aa mov      x0, x20
00249920 71080c94 bl       #0x54bae4
00249924 080040b9 ldr      w8, [x0]
00249928 601e00d0 adrp     x0, #0x617000
0024992C 00003b91 add      x0, x0, #0xec0
00249930 01550012 and      w1, w8, #0x3fffff
00249934 e81b40f9 ldr      x8, [sp, #0x30]
00249938 020140b9 ldr      w2, [x8]
0024993C 10000014 b        #0x24997c
00249940 e00314aa mov      x0, x20
00249944 68080c94 bl       #0x54bae4
00249948 080040b9 ldr      w8, [x0]
0024994C 601e00b0 adrp     x0, #0x616000
00249950 00340091 add      x0, x0, #0xd
00249954 26000014 b        #0x2499ec
00249958 08848452 mov      w8, #0x2420
0024995C e85fa072 movk     w8, #0x2ff, lsl #16
00249960 6002088b add      x0, x19, x8
00249964 60080c94 bl       #0x54bae4
00249968 080040b9 ldr      w8, [x0]
0024996C 601e0090 adrp     x0, #0x615000
00249970 00380691 add      x0, x0, #0x18e
00249974 220340b9 ldr      w2, [x25]
00249978 01550012 and      w1, w8, #0x3fffff
0024997C e3031faa mov      x3, xzr
00249980 c859ff97 bl       #0x2200a0
00249984 48018052 mov      w8, #0xa
00249988 e0031f2a mov      w0, wzr
0024998C 681600b9 str      w8, [x19, #0x14]
00249990 52000014 b        #0x249ad8
00249994 f403002a mov      w20, w0
00249998 5f0b00b9 str      wzr, [x26, #8]
0024999C 4960ff97 bl       #0x221ac0
002499A0 08478552 mov      w8, #0x2a38
002499A4 0804a072 movk     w8, #0x20, lsl #16
002499A8 146828b8 str      w20, [x0, x8]
002499AC 4560ff97 bl       #0x221ac0
002499B0 88a58652 mov      w8, #0x352c
002499B4 2803a072 movk     w8, #0x19, lsl #16
002499B8 36008052 mov      w22, #1
002499BC 096868b8 ldr      w9, [x0, x8]
002499C0 29050051 sub      w9, w9, #1
002499C4 096828b8 str      w9, [x0, x8]
002499C8 a8064039 ldrb     w8, [x21, #1]
002499CC 5f0b00b9 str      wzr, [x26, #8]
002499D0 88caff35 cbnz     w8, #0x249320
002499D4 18000014 b        #0x249a34
002499D8 e00314aa mov      x0, x20
002499DC 42080c94 bl       #0x54bae4
002499E0 080040b9 ldr      w8, [x0]
002499E4 801e00f0 adrp     x0, #0x61c000
002499E8 005c0d91 add      x0, x0, #0x357
002499EC 220340b9 ldr      w2, [x25]
002499F0 01550012 and      w1, w8, #0x3fffff
002499F4 e3031faa mov      x3, xzr
002499F8 aa59ff97 bl       #0x2200a0
002499FC e0031f2a mov      w0, wzr
00249A00 48018052 mov      w8, #0xa
00249A04 681600b9 str      w8, [x19, #0x14]
00249A08 34000014 b        #0x249ad8
00249A0C 08178e52 mov      w8, #0x70b8
00249A10 4862a072 movk     w8, #0x312, lsl #16
00249A14 400b40b9 ldr      w0, [x26, #8]
00249A18 6802088b add      x8, x19, x8
00249A1C 010140b9 ldr      w1, [x8]
00249A20 b0a5ff97 bl       #0x2330e0
00249A24 f6031f2a mov      w22, wzr
00249A28 a8064039 ldrb     w8, [x21, #1]
00249A2C 5f0b00b9 str      wzr, [x26, #8]
00249A30 88c7ff35 cbnz     w8, #0x249320
00249A34 8f63ff97 bl       #0x222870
00249A38 40000036 tbz      w0, #0, #0x249a40
00249A3C 0d64ff97 bl       #0x222a70
00249A40 680e40f9 ldr      x8, [x19, #0x18]
00249A44 56020034 cbz      w22, #0x249a8c
00249A48 480100b4 cbz      x8, #0x249a70
00249A4C 08510191 add      x8, x8, #0x54
00249A50 1ffddf88 ldar     wzr, [x8]
00249A54 680e40f9 ldr      x8, [x19, #0x18]
00249A58 c80000b4 cbz      x8, #0x249a70
00249A5C 08510191 add      x8, x8, #0x54
00249A60 08fddf88 ldar     w8, [x8]
00249A64 691240f9 ldr      x9, [x19, #0x20]
00249A68 1f010071 cmp      w8, #0
00249A6C e803899a csel     x8, xzr, x9, eq
00249A70 69c20091 add      x9, x19, #0x30
00249A74 1f0100f1 cmp      x8, #0
00249A78 2001889a csel     x0, x9, x8, eq
00249A7C 080040f9 ldr      x8, [x0]
00249A80 080140f9 ldr      x8, [x8]
00249A84 00013fd6 blr      x8
00249A88 13000014 b        #0x249ad4
00249A8C 480100b4 cbz      x8, #0x249ab4
00249A90 08510191 add      x8, x8, #0x54
00249A94 1ffddf88 ldar     wzr, [x8]
00249A98 680e40f9 ldr      x8, [x19, #0x18]
00249A9C c80000b4 cbz      x8, #0x249ab4
00249AA0 08510191 add      x8, x8, #0x54
00249AA4 08fddf88 ldar     w8, [x8]
00249AA8 691240f9 ldr      x9, [x19, #0x20]
00249AAC 1f010071 cmp      w8, #0
00249AB0 e803899a csel     x8, xzr, x9, eq
00249AB4 69c20091 add      x9, x19, #0x30
00249AB8 1f0100f1 cmp      x8, #0
00249ABC ff230239 strb     wzr, [sp, #0x88]
00249AC0 2001889a csel     x0, x9, x8, eq
00249AC4 e1230291 add      x1, sp, #0x88
00249AC8 080040f9 ldr      x8, [x0]
00249ACC 080540f9 ldr      x8, [x8, #8]
00249AD0 00013fd6 blr      x8
00249AD4 20008052 mov      w0, #1
00249AD8 ff433091 add      sp, sp, #0xc10
00249ADC f44f45a9 ldp      x20, x19, [sp, #0x50]
00249AE0 f65744a9 ldp      x22, x21, [sp, #0x40]
00249AE4 f85f43a9 ldp      x24, x23, [sp, #0x30]
00249AE8 fa6742a9 ldp      x26, x25, [sp, #0x20]
00249AEC fc6f41a9 ldp      x28, x27, [sp, #0x10]
00249AF0 fd7bc6a8 ldp      x29, x30, [sp], #0x60
00249AF4 c0035fd6 ret      
00249AF8 12b20e94 bl       #0x5f6340
~~~
### 0x24c470 (2093 slots)
~~~asm
0024C470 081440b9 ldr      w8, [x0, #0x14]
0024C474 1f290071 cmp      w8, #0xa
0024C478 c8030054 b.hi     #0x24c4f0
0024C47C fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
0024C480 fc6f01a9 stp      x28, x27, [sp, #0x10]
0024C484 fd030091 mov      x29, sp
0024C488 fa6702a9 stp      x26, x25, [sp, #0x20]
0024C48C f85f03a9 stp      x24, x23, [sp, #0x30]
0024C490 f65704a9 stp      x22, x21, [sp, #0x40]
0024C494 f44f05a9 stp      x20, x19, [sp, #0x50]
0024C498 ff1b40d1 sub      sp, sp, #6, lsl #12
0024C49C ff030ed1 sub      sp, sp, #0x380
0024C4A0 09ba8452 mov      w9, #0x25d0
0024C4A4 09a3a072 movk     w9, #0x518, lsl #16
0024C4A8 0a858452 mov      w10, #0x2428
0024C4AC ea5fa072 movk     w10, #0x2ff, lsl #16
0024C4B0 1300098b add      x19, x0, x9
0024C4B4 098e8252 mov      w9, #0x1470
0024C4B8 8972a072 movk     w9, #0x394, lsl #16
0024C4BC 1900098b add      x25, x0, x9
0024C4C0 491f0090 adrp     x9, #0x634000
0024C4C4 29813391 add      x9, x9, #0xce0
0024C4C8 eb000010 adr      x11, #0x24c4e4
0024C4CC 2c796878 ldrh     w12, [x9, x8, lsl #1]
0024C4D0 6b090c8b add      x11, x11, x12, lsl #2
0024C4D4 e08b00f9 str      x0, [sp, #0x110]
0024C4D8 f40300aa mov      x20, x0
0024C4DC 1a000a8b add      x26, x0, x10
0024C4E0 60011fd6 br       x11
0024C4E4 e0031f2a mov      w0, wzr
0024C4E8 28008052 mov      w8, #1
0024C4EC 52030014 b        #0x24d234
0024C4F0 e0031f2a mov      w0, wzr
0024C4F4 c0035fd6 ret      
0024C4F8 88888452 mov      w8, #0x2444
0024C4FC 08a3a072 movk     w8, #0x518, lsl #16
0024C500 09b89c52 mov      w9, #0xe5c0
0024C504 e9a2a072 movk     w9, #0x517, lsl #16
0024C508 8802088b add      x8, x20, x8
0024C50C e82f00f9 str      x8, [sp, #0x58]
0024C510 8802098b add      x8, x20, x9
0024C514 f32310a9 stp      x19, x8, [sp, #0x100]
0024C518 08e89452 mov      w8, #0xa740
0024C51C e8a2a072 movk     w8, #0x517, lsl #16
0024C520 e01b4091 add      x0, sp, #6, lsl #12
0024C524 8802088b add      x8, x20, x8
0024C528 fa6709a9 stp      x26, x25, [sp, #0x90]
0024C52C e86b00f9 str      x8, [sp, #0xd0]
0024C530 08409352 mov      w8, #0x9a00
0024C534 88a2a072 movk     w8, #0x514, lsl #16
0024C538 8802088b add      x8, x20, x8
0024C53C f31b4091 add      x19, sp, #6, lsl #12
0024C540 e83b00f9 str      x8, [sp, #0x70]
0024C544 08989152 mov      w8, #0x8cc0
0024C548 28a2a072 movk     w8, #0x511, lsl #16
0024C54C 611e00b0 adrp     x1, #0x619000
0024C550 21781591 add      x1, x1, #0x55e
0024C554 8802088b add      x8, x20, x8
0024C558 e85b00f9 str      x8, [sp, #0xb0]
0024C55C 08508952 mov      w8, #0x4a80
0024C560 48a0a072 movk     w8, #0x502, lsl #16
0024C564 00e00991 add      x0, x0, #0x278
0024C568 8802088b add      x8, x20, x8
0024C56C e85300f9 str      x8, [sp, #0xa0]
0024C570 08549c52 mov      w8, #0xe2a0
0024C574 8899a072 movk     w8, #0x4cc, lsl #16
0024C578 73220991 add      x19, x19, #0x248
0024C57C 8802088b add      x8, x20, x8
0024C580 e86300f9 str      x8, [sp, #0xc0]
0024C584 080c9452 mov      w8, #0xa060
0024C588 a897a072 movk     w8, #0x4bd, lsl #16
0024C58C 8802088b add      x8, x20, x8
0024C590 e87b00f9 str      x8, [sp, #0xf0]
0024C594 08c48b52 mov      w8, #0x5e20
0024C598 c895a072 movk     w8, #0x4ae, lsl #16
0024C59C 8802088b add      x8, x20, x8
0024C5A0 e86700f9 str      x8, [sp, #0xc8]
0024C5A4 087c8352 mov      w8, #0x1be0
0024C5A8 e893a072 movk     w8, #0x49f, lsl #16
0024C5AC 8802088b add      x8, x20, x8
0024C5B0 e87300f9 str      x8, [sp, #0xe0]
0024C5B4 08349b52 mov      w8, #0xd9a0
0024C5B8 e891a072 movk     w8, #0x48f, lsl #16
0024C5BC 8802088b add      x8, x20, x8
0024C5C0 e87700f9 str      x8, [sp, #0xe8]
0024C5C4 08ec9252 mov      w8, #0x9760
0024C5C8 0890a072 movk     w8, #0x480, lsl #16
0024C5CC 8802088b add      x8, x20, x8
0024C5D0 e86f00f9 str      x8, [sp, #0xd8]
0024C5D4 08a48a52 mov      w8, #0x5520
0024C5D8 288ea072 movk     w8, #0x471, lsl #16
0024C5DC 8802088b add      x8, x20, x8
0024C5E0 e85700f9 str      x8, [sp, #0xa8]
0024C5E4 085c8252 mov      w8, #0x12e0
0024C5E8 488ca072 movk     w8, #0x462, lsl #16
0024C5EC 8802088b add      x8, x20, x8
0024C5F0 e87f00f9 str      x8, [sp, #0xf8]
0024C5F4 fa6cff97 bl       #0x2279dc
0024C5F8 e01b4091 add      x0, sp, #6, lsl #12
0024C5FC 00e00991 add      x0, x0, #0x278
0024C600 0e6dff97 bl       #0x227a38
0024C604 e05f00f9 str      x0, [sp, #0xb8]
0024C608 16ff0b94 bl       #0x54c260
0024C60C fb0300aa mov      x27, x0
0024C610 6c65ff97 bl       #0x225bc0
0024C614 082441a9 ldp      x8, x9, [x0, #0x10]
0024C618 e82f31f9 str      x8, [sp, #0x6258]
0024C61C e93331f9 str      x9, [sp, #0x6260]
0024C620 082440a9 ldp      x8, x9, [x0]
0024C624 0a1040f9 ldr      x10, [x0, #0x20]
0024C628 0b304529 ldp      w11, w12, [x0, #0x28]
0024C62C ea3731f9 str      x10, [sp, #0x6268]
0024C630 0a6040b9 ldr      w10, [x0, #0x60]
0024C634 8c7d4093 sxtw     x12, w12
0024C638 ec9300f9 str      x12, [sp, #0x120]
0024C63C 6b2a00b9 str      w11, [x19, #0x28]
0024C640 e82731f9 str      x8, [sp, #0x6248]
0024C644 084440b9 ldr      w8, [x0, #0x44]
0024C648 e92b31f9 str      x9, [sp, #0x6250]
0024C64C 09fa8052 mov      w9, #0x7d0
0024C650 ea6f00b9 str      w10, [sp, #0x6c]
0024C654 e84300f9 str      x8, [sp, #0x80]
0024C658 08204139 ldrb     w8, [x0, #0x48]
0024C65C e88f00b9 str      w8, [sp, #0x8c]
0024C660 08244139 ldrb     w8, [x0, #0x49]
0024C664 e87f00b9 str      w8, [sp, #0x7c]
0024C668 e8231291 add      x8, sp, #0x488
0024C66C 08310091 add      x8, x8, #0xc
0024C670 1f411fb8 stur     wzr, [x8, #-0xc]
0024C674 290900f1 subs     x9, x9, #2
0024C678 1f811f78 sturh    wzr, [x8, #-8]
0024C67C 1fc11ff8 stur     xzr, [x8, #-4]
0024C680 1f090079 strh     wzr, [x8, #4]
0024C684 1f0900b9 str      wzr, [x8, #8]
0024C688 08610091 add      x8, x8, #0x18
0024C68C 21ffff54 b.ne     #0x24c670
0024C690 a82c00b0 adrp     x8, #0x7e1000
0024C694 08411891 add      x8, x8, #0x610
0024C698 000140f9 ldr      x0, [x8]
0024C69C e8030591 add      x8, sp, #0x140
0024C6A0 6796fd97 bl       #0x1b203c
0024C6A4 f9031f2a mov      w25, wzr
0024C6A8 13e89452 mov      w19, #0xa740
0024C6AC f3a2a072 movk     w19, #0x517, lsl #16
0024C6B0 1cb89c52 mov      w28, #0xe5c0
0024C6B4 fca2a072 movk     w28, #0x517, lsl #16
0024C6B8 ff9700f9 str      xzr, [sp, #0x128]
0024C6BC 1aa08052 mov      w26, #0x500
0024C6C0 1aa3a072 movk     w26, #0x518, lsl #16
0024C6C4 ff1f01b9 str      wzr, [sp, #0x11c]
0024C6C8 05000014 b        #0x24c6dc
0024C6CC 1f2003d5 nop      
0024C6D0 39070011 add      w25, w25, #1
0024C6D4 3fb30471 cmp      w25, #0x12c
0024C6D8 e02d0054 b.eq     #0x24cc94
0024C6DC f6031f2a mov      w22, wzr
0024C6E0 04000014 b        #0x24c6f0
0024C6E4 d6060011 add      w22, w22, #1
0024C6E8 df7a0071 cmp      w22, #0x1e
0024C6EC 20ffff54 b.eq     #0x24c6d0
0024C6F0 e8c30791 add      x8, sp, #0x1f0
0024C6F4 774fff97 bl       #0x2204d0
0024C6F8 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C6FC e8a30691 add      x8, sp, #0x1a8
0024C700 e103192a mov      w1, w25
0024C704 e203162a mov      w2, w22
0024C708 e3031baa mov      x3, x27
0024C70C 4fcffe97 bl       #0x200448
0024C710 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C714 800000b4 cbz      x0, #0x24c724
0024C718 088c44f8 ldr      x8, [x0, #0x48]!
0024C71C 080d40f9 ldr      x8, [x8, #0x18]
0024C720 00013fd6 blr      x8
0024C724 e0d740f9 ldr      x0, [sp, #0x1a8]
0024C728 98e7fe97 bl       #0x206588
0024C72C c0090037 tbnz     w0, #0, #0x24c864
0024C730 e8d740f9 ldr      x8, [sp, #0x1a8]
0024C734 002d40f9 ldr      x0, [x8, #0x58]
0024C738 33ab0b94 bl       #0x537404
0024C73C 600300b4 cbz      x0, #0x24c7a8
0024C740 e8d740f9 ldr      x8, [sp, #0x1a8]
0024C744 15810191 add      x21, x8, #0x60
0024C748 e8c30791 add      x8, sp, #0x1f0
0024C74C 2158ff97 bl       #0x2227d0
0024C750 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C754 e10315aa mov      x1, x21
0024C758 5bd8fe97 bl       #0x2028c4
0024C75C f703002a mov      w23, w0
0024C760 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C764 800000b4 cbz      x0, #0x24c774
0024C768 088c44f8 ldr      x8, [x0, #0x48]!
0024C76C 080d40f9 ldr      x8, [x8, #0x18]
0024C770 00013fd6 blr      x8
0024C774 97070037 tbnz     w23, #0, #0x24c864
0024C778 e8c30791 add      x8, sp, #0x1f0
0024C77C 614fff97 bl       #0x220500
0024C780 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C784 e10315aa mov      x1, x21
0024C788 4fd8fe97 bl       #0x2028c4
0024C78C f503002a mov      w21, w0
0024C790 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024C794 800000b4 cbz      x0, #0x24c7a4
0024C798 088c44f8 ldr      x8, [x0, #0x48]!
0024C79C 080d40f9 ldr      x8, [x8, #0x18]
0024C7A0 00013fd6 blr      x8
0024C7A4 15060037 tbnz     w21, #0, #0x24c864
0024C7A8 f5d740f9 ldr      x21, [sp, #0x1a8]
0024C7AC b50000b4 cbz      x21, #0x24c7c0
0024C7B0 e00315aa mov      x0, x21
0024C7B4 088c44f8 ldr      x8, [x0, #0x48]!
0024C7B8 080940f9 ldr      x8, [x8, #0x10]
0024C7BC 00013fd6 blr      x8
0024C7C0 e89740f9 ldr      x8, [sp, #0x128]
0024C7C4 882e288b add      x8, x20, w8, uxth #3
0024C7C8 0801138b add      x8, x8, x19
0024C7CC 000140f9 ldr      x0, [x8]
0024C7D0 150100f9 str      x21, [x8]
0024C7D4 800000b4 cbz      x0, #0x24c7e4
0024C7D8 088c44f8 ldr      x8, [x0, #0x48]!
0024C7DC 080d40f9 ldr      x8, [x8, #0x18]
0024C7E0 00013fd6 blr      x8
0024C7E4 e99740f9 ldr      x9, [sp, #0x128]
0024C7E8 283d4092 and      x8, x9, #0xffff
0024C7EC 29050011 add      w9, w9, #1
0024C7F0 880a088b add      x8, x20, x8, lsl #2
0024C7F4 e99700f9 str      x9, [sp, #0x128]
0024C7F8 19693cb8 str      w25, [x8, x28]
0024C7FC 16693ab8 str      w22, [x8, x26]
0024C800 e89340f9 ldr      x8, [sp, #0x120]
0024C804 1f1d0071 cmp      w8, #7
0024C808 e1020054 b.ne     #0x24c864
0024C80C e0d740f9 ldr      x0, [sp, #0x1a8]
0024C810 7ae7fe97 bl       #0x2065f8
0024C814 f503002a mov      w21, w0
0024C818 e0a340f9 ldr      x0, [sp, #0x140]
0024C81C e103152a mov      w1, w21
0024C820 16d2fd97 bl       #0x1c1078
0024C824 f81f41b9 ldr      w24, [sp, #0x11c]
0024C828 173c0012 and      w23, w0, #0xffff
0024C82C 88018052 mov      w8, #0xc
0024C830 e9231291 add      x9, sp, #0x488
0024C834 e0d740f9 ldr      x0, [sp, #0x1a8]
0024C838 1427289b smaddl   x20, w24, w8, x9
0024C83C 950200b9 str      w21, [x20]
0024C840 70e7fe97 bl       #0x206600
0024C844 ff8e0171 cmp      w23, #0x63
0024C848 28008052 mov      w8, #1
0024C84C 800a0079 strh     w0, [x20, #4]
0024C850 0895881a cinc     w8, w8, hi
0024C854 18070011 add      w24, w24, #1
0024C858 f81f01b9 str      w24, [sp, #0x11c]
0024C85C 880a00b9 str      w8, [x20, #8]
0024C860 f48b40f9 ldr      x20, [sp, #0x110]
0024C864 e0d740f9 ldr      x0, [sp, #0x1a8]
0024C868 e0f3ffb4 cbz      x0, #0x24c6e4
0024C86C 088c44f8 ldr      x8, [x0, #0x48]!
0024C870 080d40f9 ldr      x8, [x8, #0x18]
0024C874 00013fd6 blr      x8
0024C878 9bffff17 b        #0x24c6e4
0024C87C e0031f2a mov      w0, wzr
0024C880 8065ff97 bl       #0x225e80
0024C884 e0031f2a mov      w0, wzr
0024C888 68008052 mov      w8, #3
0024C88C 6a020014 b        #0x24d234
0024C890 e466ff97 bl       #0x226420
0024C894 c0e00034 cbz      w0, #0x24e4ac
0024C898 1f080071 cmp      w0, #2
0024C89C 41490054 b.ne     #0x24d1c4
0024C8A0 28008052 mov      w8, #1
0024C8A4 e0031f2a mov      w0, wzr
0024C8A8 68ca1279 strh     w8, [x19, #0x964]
0024C8AC 5f020014 b        #0x24d228
0024C8B0 3c68ff97 bl       #0x2269a0
0024C8B4 801a0037 tbnz     w0, #0, #0x24cc04
0024C8B8 a668ff97 bl       #0x226b50
0024C8BC 28008052 mov      w8, #1
0024C8C0 68962539 strb     w8, [x19, #0x965]
0024C8C4 e04a0036 tbz      w0, #0, #0x24d220
0024C8C8 611e00d0 adrp     x1, #0x61a000
0024C8CC 21cc3391 add      x1, x1, #0xcf3
0024C8D0 e0231291 add      x0, sp, #0x488
0024C8D4 426cff97 bl       #0x2279dc
0024C8D8 e0231291 add      x0, sp, #0x488
0024C8DC 576cff97 bl       #0x227a38
0024C8E0 f30314aa mov      x19, x20
0024C8E4 08908252 mov      w8, #0x1480
0024C8E8 8872a072 movk     w8, #0x394, lsl #16
0024C8EC 9502088b add      x21, x20, x8
0024C8F0 881e00b0 adrp     x8, #0x61d000
0024C8F4 08812f91 add      x8, x8, #0xbe0
0024C8F8 090140f9 ldr      x9, [x8]
0024C8FC 086140f8 ldur     x8, [x8, #6]
0024C900 a90200f9 str      x9, [x21]
0024C904 16688952 mov      w22, #0x4b40
0024C908 9609a072 movk     w22, #0x4c, lsl #16
0024C90C f40300aa mov      x20, x0
0024C910 e00313aa mov      x0, x19
0024C914 e10315aa mov      x1, x21
0024C918 e203162a mov      w2, w22
0024C91C a86200f8 stur     x8, [x21, #6]
0024C920 e022ff97 bl       #0x2154a0
0024C924 08f88b52 mov      w8, #0x5fc0
0024C928 087ca072 movk     w8, #0x3e0, lsl #16
0024C92C 7702088b add      x23, x19, x8
0024C930 6454ff97 bl       #0x221ac0
0024C934 f80300aa mov      x24, x0
0024C938 2e03ff97 bl       #0x20d5f0
0024C93C 28548252 mov      w8, #0x12a1
0024C940 421e00f0 adrp     x2, #0x617000
0024C944 42383891 add      x2, x2, #0xe0e
0024C948 0400088b add      x4, x0, x8
0024C94C e00317aa mov      x0, x23
0024C950 e10316aa mov      x1, x22
0024C954 e30318aa mov      x3, x24
0024C958 e50315aa mov      x5, x21
0024C95C 65a70e94 bl       #0x5f66f0
0024C960 a8008052 mov      w8, #5
0024C964 e00313aa mov      x0, x19
0024C968 e8f301b9 str      w8, [sp, #0x1f0]
0024C96C a82a00d0 adrp     x8, #0x7a2000
0024C970 e10317aa mov      x1, x23
0024C974 082145f9 ldr      x8, [x8, #0xa40]
0024C978 ff1301f9 str      xzr, [sp, #0x220]
0024C97C ff1701f9 str      xzr, [sp, #0x228]
0024C980 ff1b01f9 str      xzr, [sp, #0x230]
0024C984 092940a9 ldp      x9, x10, [x8]
0024C988 e9ab1fa9 stp      x9, x10, [sp, #0x1f8]
0024C98C 092941a9 ldp      x9, x10, [x8, #0x10]
0024C990 081140f9 ldr      x8, [x8, #0x20]
0024C994 e90701f9 str      x9, [sp, #0x208]
0024C998 ea0b01f9 str      x10, [sp, #0x210]
0024C99C e80f01f9 str      x8, [sp, #0x218]
0024C9A0 b43bff97 bl       #0x21b870
0024C9A4 4754ff97 bl       #0x221ac0
0024C9A8 88a58652 mov      w8, #0x352c
0024C9AC 2803a072 movk     w8, #0x19, lsl #16
0024C9B0 0a848452 mov      w10, #0x2420
0024C9B4 ea5fa072 movk     w10, #0x2ff, lsl #16
0024C9B8 096868b8 ldr      w9, [x0, x8]
0024C9BC 75020a8b add      x21, x19, x10
0024C9C0 e3c30791 add      x3, sp, #0x1f0
0024C9C4 e10314aa mov      x1, x20
0024C9C8 29050011 add      w9, w9, #1
0024C9CC 096828b8 str      w9, [x0, x8]
0024C9D0 68326791 add      x8, x19, #0x9cc, lsl #12
0024C9D4 e00315aa mov      x0, x21
0024C9D8 02812891 add      x2, x8, #0xa20
0024C9DC f5fa0b94 bl       #0x54b5b0
0024C9E0 00490036 tbz      w0, #0, #0x24d300
0024C9E4 88008052 mov      w8, #4
0024C9E8 52000014 b        #0x24cb30
0024C9EC 7f962539 strb     wzr, [x19, #0x965]
0024C9F0 cc68ff97 bl       #0x226d20
0024C9F4 e0031f2a mov      w0, wzr
0024C9F8 7f922539 strb     wzr, [x19, #0x964]
0024C9FC c8008052 mov      w8, #6
0024CA00 0d020014 b        #0x24d234
0024CA04 6369ff97 bl       #0x226f90
0024CA08 e00f0037 tbnz     w0, #0, #0x24cc04
0024CA0C 411e00d0 adrp     x1, #0x616000
0024CA10 218c0091 add      x1, x1, #0x23
0024CA14 e0231291 add      x0, sp, #0x488
0024CA18 f16bff97 bl       #0x2279dc
0024CA1C e0231291 add      x0, sp, #0x488
0024CA20 066cff97 bl       #0x227a38
0024CA24 f30314aa mov      x19, x20
0024CA28 08908252 mov      w8, #0x1480
0024CA2C 8872a072 movk     w8, #0x394, lsl #16
0024CA30 f40300aa mov      x20, x0
0024CA34 7502088b add      x21, x19, x8
0024CA38 2254ff97 bl       #0x221ac0
0024CA3C 16688952 mov      w22, #0x4b40
0024CA40 9609a072 movk     w22, #0x4c, lsl #16
0024CA44 03a00f91 add      x3, x0, #0x3e8
0024CA48 221e0090 adrp     x2, #0x610000
0024CA4C 42e41791 add      x2, x2, #0x5f9
0024CA50 e00315aa mov      x0, x21
0024CA54 e10316aa mov      x1, x22
0024CA58 26a70e94 bl       #0x5f66f0
0024CA5C e00313aa mov      x0, x19
0024CA60 e10315aa mov      x1, x21
0024CA64 e203162a mov      w2, w22
0024CA68 8e22ff97 bl       #0x2154a0
0024CA6C 08f88b52 mov      w8, #0x5fc0
0024CA70 087ca072 movk     w8, #0x3e0, lsl #16
0024CA74 7702088b add      x23, x19, x8
0024CA78 1254ff97 bl       #0x221ac0
0024CA7C f80300aa mov      x24, x0
0024CA80 dc02ff97 bl       #0x20d5f0
0024CA84 28548252 mov      w8, #0x12a1
0024CA88 421e00f0 adrp     x2, #0x617000
0024CA8C 42383891 add      x2, x2, #0xe0e
0024CA90 0400088b add      x4, x0, x8
0024CA94 e00317aa mov      x0, x23
0024CA98 e10316aa mov      x1, x22
0024CA9C e30318aa mov      x3, x24
0024CAA0 e50315aa mov      x5, x21
0024CAA4 13a70e94 bl       #0x5f66f0
0024CAA8 a8008052 mov      w8, #5
0024CAAC e00313aa mov      x0, x19
0024CAB0 e8f301b9 str      w8, [sp, #0x1f0]
0024CAB4 a82a00d0 adrp     x8, #0x7a2000
0024CAB8 e10317aa mov      x1, x23
0024CABC 082145f9 ldr      x8, [x8, #0xa40]
0024CAC0 ff1301f9 str      xzr, [sp, #0x220]
0024CAC4 ff1701f9 str      xzr, [sp, #0x228]
0024CAC8 ff1b01f9 str      xzr, [sp, #0x230]
0024CACC 092940a9 ldp      x9, x10, [x8]
0024CAD0 e9ab1fa9 stp      x9, x10, [sp, #0x1f8]
0024CAD4 092941a9 ldp      x9, x10, [x8, #0x10]
0024CAD8 081140f9 ldr      x8, [x8, #0x20]
0024CADC e90701f9 str      x9, [sp, #0x208]
0024CAE0 ea0b01f9 str      x10, [sp, #0x210]
0024CAE4 e80f01f9 str      x8, [sp, #0x218]
0024CAE8 623bff97 bl       #0x21b870
0024CAEC f553ff97 bl       #0x221ac0
0024CAF0 88a58652 mov      w8, #0x352c
0024CAF4 2803a072 movk     w8, #0x19, lsl #16
0024CAF8 0a848452 mov      w10, #0x2420
0024CAFC ea5fa072 movk     w10, #0x2ff, lsl #16
0024CB00 096868b8 ldr      w9, [x0, x8]
0024CB04 75020a8b add      x21, x19, x10
0024CB08 e3c30791 add      x3, sp, #0x1f0
0024CB0C e10314aa mov      x1, x20
0024CB10 29050011 add      w9, w9, #1
0024CB14 096828b8 str      w9, [x0, x8]
0024CB18 68326791 add      x8, x19, #0x9cc, lsl #12
0024CB1C e00315aa mov      x0, x21
0024CB20 02812891 add      x2, x8, #0xa20
0024CB24 a3fa0b94 bl       #0x54b5b0
0024CB28 a0380036 tbz      w0, #0, #0x24d23c
0024CB2C c8008052 mov      w8, #6
0024CB30 280f00b9 str      w8, [x25, #0xc]
0024CB34 e8008052 mov      w8, #7
0024CB38 fc010014 b        #0x24d328
0024CB3C 08848452 mov      w8, #0x2420
0024CB40 e85fa072 movk     w8, #0x2ff, lsl #16
0024CB44 9402088b add      x20, x20, x8
0024CB48 e00314aa mov      x0, x20
0024CB4C c0fb0b94 bl       #0x54ba4c
0024CB50 a0050037 tbnz     w0, #0, #0x24cc04
0024CB54 e00314aa mov      x0, x20
0024CB58 d8fb0b94 bl       #0x54bab8
0024CB5C c0370036 tbz      w0, #0, #0x24d254
0024CB60 e00314aa mov      x0, x20
0024CB64 dbfb0b94 bl       #0x54bad0
0024CB68 80c800b4 cbz      x0, #0x24e478
0024CB6C f38b40f9 ldr      x19, [sp, #0x110]
0024CB70 e00313aa mov      x0, x19
0024CB74 b1060094 bl       #0x24e638
0024CB78 200b00b9 str      w0, [x25, #8]
0024CB7C 60000035 cbnz     w0, #0x24cb88
0024CB80 280740b9 ldr      w8, [x25, #4]
0024CB84 68ca0034 cbz      w8, #0x24e4d0
0024CB88 28018052 mov      w8, #9
0024CB8C e0031f2a mov      w0, wzr
0024CB90 681600b9 str      w8, [x19, #0x14]
0024CB94 46060014 b        #0x24e4ac
0024CB98 e0031faa mov      x0, xzr
0024CB9C 2100ff97 bl       #0x20cc20
0024CBA0 20030037 tbnz     w0, #0, #0x24cc04
0024CBA4 a82c00b0 adrp     x8, #0x7e1000
0024CBA8 08011891 add      x8, x8, #0x600
0024CBAC 000140f9 ldr      x0, [x8]
0024CBB0 7a46fd97 bl       #0x19e598
0024CBB4 80020036 tbz      w0, #0, #0x24cc04
0024CBB8 880e40f9 ldr      x8, [x20, #0x18]
0024CBBC 480100b4 cbz      x8, #0x24cbe4
0024CBC0 08510191 add      x8, x8, #0x54
0024CBC4 1ffddf88 ldar     wzr, [x8]
0024CBC8 880e40f9 ldr      x8, [x20, #0x18]
0024CBCC c80000b4 cbz      x8, #0x24cbe4
0024CBD0 08510191 add      x8, x8, #0x54
0024CBD4 08fddf88 ldar     w8, [x8]
0024CBD8 891240f9 ldr      x9, [x20, #0x20]
0024CBDC 1f010071 cmp      w8, #0
0024CBE0 e803899a csel     x8, xzr, x9, eq
0024CBE4 89c20091 add      x9, x20, #0x30
0024CBE8 1f0100f1 cmp      x8, #0
0024CBEC 2001889a csel     x0, x9, x8, eq
0024CBF0 080040f9 ldr      x8, [x0]
0024CBF4 080140f9 ldr      x8, [x8]
0024CBF8 00013fd6 blr      x8
0024CBFC 20008052 mov      w0, #1
0024CC00 2b060014 b        #0x24e4ac
0024CC04 e0031f2a mov      w0, wzr
0024CC08 29060014 b        #0x24e4ac
0024CC0C 200340b9 ldr      w0, [x25]
0024CC10 601e0034 cbz      w0, #0x24cfdc
0024CC14 1b99ff97 bl       #0x233080
0024CC18 9b010014 b        #0x24d284
0024CC1C 200b40b9 ldr      w0, [x25, #8]
0024CC20 e1031f2a mov      w1, wzr
0024CC24 2f99ff97 bl       #0x2330e0
0024CC28 68966539 ldrb     w8, [x19, #0x965]
0024CC2C 3f0b00b9 str      wzr, [x25, #8]
0024CC30 48000034 cbz      w8, #0x24cc38
0024CC34 eb68ff97 bl       #0x226fe0
0024CC38 68926539 ldrb     w8, [x19, #0x964]
0024CC3C 48000034 cbz      w8, #0x24cc44
0024CC40 0c56ff97 bl       #0x222470
0024CC44 0b57ff97 bl       #0x222870
0024CC48 40000036 tbz      w0, #0, #0x24cc50
0024CC4C 8957ff97 bl       #0x222a70
0024CC50 880e40f9 ldr      x8, [x20, #0x18]
0024CC54 480100b4 cbz      x8, #0x24cc7c
0024CC58 08510191 add      x8, x8, #0x54
0024CC5C 1ffddf88 ldar     wzr, [x8]
0024CC60 880e40f9 ldr      x8, [x20, #0x18]
0024CC64 c80000b4 cbz      x8, #0x24cc7c
0024CC68 08510191 add      x8, x8, #0x54
0024CC6C 08fddf88 ldar     w8, [x8]
0024CC70 891240f9 ldr      x9, [x20, #0x20]
0024CC74 1f010071 cmp      w8, #0
0024CC78 e803899a csel     x8, xzr, x9, eq
0024CC7C 89c20091 add      x9, x20, #0x30
0024CC80 1f0100f1 cmp      x8, #0
0024CC84 ffc30439 strb     wzr, [sp, #0x130]
0024CC88 2001889a csel     x0, x9, x8, eq
0024CC8C e1c30491 add      x1, sp, #0x130
0024CC90 97010014 b        #0x24d2ec
0024CC94 fc2352a9 ldp      x28, x8, [sp, #0x120]
0024CC98 1f3d0072 tst      w8, #0xffff
0024CC9C a0090054 b.eq     #0x24cdd0
0024CCA0 e99740f9 ldr      x9, [sp, #0x128]
0024CCA4 d5528052 mov      w21, #0x296
0024CCA8 e803092a mov      w8, w9
0024CCAC f37f40f9 ldr      x19, [sp, #0xf8]
0024CCB0 1a3d4092 and      x26, x8, #0xffff
0024CCB4 e86b40f9 ldr      x8, [sp, #0xd0]
0024CCB8 69260078 strh     w9, [x19], #2
0024CCBC 24000014 b        #0x24cd4c
0024CCC0 f88740f9 ldr      x24, [sp, #0x108]
0024CCC4 e0c30791 add      x0, sp, #0x1f0
0024CCC8 e1031f2a mov      w1, wzr
0024CCCC e20315aa mov      x2, x21
0024CCD0 08034079 ldrh     w8, [x24]
0024CCD4 14050011 add      w20, w8, #1
0024CCD8 08837e79 ldrh     w8, [x24, #0x1f40]
0024CCDC 17050011 add      w23, w8, #1
0024CCE0 1ca50e94 bl       #0x5f6150
0024CCE4 c12e40f9 ldr      x1, [x22, #0x58]
0024CCE8 e0c30791 add      x0, sp, #0x1f0
0024CCEC dfbc0a94 bl       #0x4fc068
0024CCF0 77320078 sturh    w23, [x19, #3]
0024CCF4 77220091 add      x23, x19, #8
0024CCF8 193c4092 and      x25, x0, #0xffff
0024CCFC 600e0079 strh     w0, [x19, #6]
0024CD00 e1c30791 add      x1, sp, #0x1f0
0024CD04 e00317aa mov      x0, x23
0024CD08 e20319aa mov      x2, x25
0024CD0C 7f020039 strb     wzr, [x19]
0024CD10 74120078 sturh    w20, [x19, #1]
0024CD14 7f160039 strb     wzr, [x19, #5]
0024CD18 32a60e94 bl       #0x5f65e0
0024CD1C f302198b add      x19, x23, x25
0024CD20 7f260078 strh     wzr, [x19], #2
0024CD24 c88e44f8 ldr      x8, [x22, #0x48]!
0024CD28 e00316aa mov      x0, x22
0024CD2C 080d40f9 ldr      x8, [x8, #0x18]
0024CD30 00013fd6 blr      x8
0024CD34 e8031caa mov      x8, x28
0024CD38 88230091 add      x8, x28, #8
0024CD3C 18130091 add      x24, x24, #4
0024CD40 5a0700f1 subs     x26, x26, #1
0024CD44 f88700f9 str      x24, [sp, #0x108]
0024CD48 20010054 b.eq     #0x24cd6c
0024CD4C 160140f9 ldr      x22, [x8]
0024CD50 fc0308aa mov      x28, x8
0024CD54 76fbffb4 cbz      x22, #0x24ccc0
0024CD58 e00316aa mov      x0, x22
0024CD5C 088c44f8 ldr      x8, [x0, #0x48]!
0024CD60 080940f9 ldr      x8, [x8, #0x10]
0024CD64 00013fd6 blr      x8
0024CD68 d6ffff17 b        #0x24ccc0
0024CD6C f48b40f9 ldr      x20, [sp, #0x110]
0024CD70 08609552 mov      w8, #0xab00
0024CD74 8885a072 movk     w8, #0x42c, lsl #16
0024CD78 f67f40f9 ldr      x22, [sp, #0xf8]
0024CD7C 02fc8c52 mov      w2, #0x67e0
0024CD80 a206a072 movk     w2, #0x35, lsl #16
0024CD84 e1031f2a mov      w1, wzr
0024CD88 9502088b add      x21, x20, x8
0024CD8C 7302164b sub      w19, w19, w22
0024CD90 e00315aa mov      x0, x21
0024CD94 efa40e94 bl       #0x5f6150
0024CD98 637e4093 sxtw     x3, w19
0024CD9C e00315aa mov      x0, x21
0024CDA0 01fc8c52 mov      w1, #0x67e0
0024CDA4 a106a072 movk     w1, #0x35, lsl #16
0024CDA8 e20316aa mov      x2, x22
0024CDAC e4031f2a mov      w4, wzr
0024CDB0 e5031f2a mov      w5, wzr
0024CDB4 bd240294 bl       #0x2d60a8
0024CDB8 02488852 mov      w2, #0x4240
0024CDBC e201a072 movk     w2, #0xf, lsl #16
0024CDC0 e00316aa mov      x0, x22
0024CDC4 e10315aa mov      x1, x21
0024CDC8 06a60e94 bl       #0x5f65e0
0024CDCC fc9340f9 ldr      x28, [sp, #0x120]
0024CDD0 e0a340f9 ldr      x0, [sp, #0x140]
0024CDD4 800000b4 cbz      x0, #0x24cde4
0024CDD8 088c44f8 ldr      x8, [x0, #0x48]!
0024CDDC 080d40f9 ldr      x8, [x8, #0x18]
0024CDE0 00013fd6 blr      x8
0024CDE4 f96f40f9 ldr      x25, [sp, #0xd8]
0024CDE8 fa031f2a mov      w26, wzr
0024CDEC f6031f2a mov      w22, wzr
0024CDF0 f88340f9 ldr      x24, [sp, #0x100]
0024CDF4 13ba8452 mov      w19, #0x25d0
0024CDF8 13a3a072 movk     w19, #0x518, lsl #16
0024CDFC 151e00b0 adrp     x21, #0x60d000
0024CE00 b5063191 add      x21, x21, #0xc41
0024CE04 06000014 b        #0x24ce1c
0024CE08 1f2003d5 nop      
0024CE0C 1f2003d5 nop      
0024CE10 d6060011 add      w22, w22, #1
0024CE14 dfb20471 cmp      w22, #0x12c
0024CE18 c00c0054 b.eq     #0x24cfb0
0024CE1C f7031f2a mov      w23, wzr
0024CE20 14000014 b        #0x24ce70
0024CE24 e8a340f9 ldr      x8, [sp, #0x140]
0024CE28 002d40f9 ldr      x0, [x8, #0x58]
0024CE2C 76a90b94 bl       #0x537404
0024CE30 086389b9 ldrsw    x8, [x24, #0x960]
0024CE34 880e088b add      x8, x20, x8, lsl #3
0024CE38 006933f8 str      x0, [x8, x19]
0024CE3C 086349b9 ldr      w8, [x24, #0x960]
0024CE40 08050011 add      w8, w8, #1
0024CE44 086309b9 str      w8, [x24, #0x960]
0024CE48 1f2003d5 nop      
0024CE4C 1f2003d5 nop      
0024CE50 e0a340f9 ldr      x0, [sp, #0x140]
0024CE54 800000b4 cbz      x0, #0x24ce64
0024CE58 088c44f8 ldr      x8, [x0, #0x48]!
0024CE5C 080d40f9 ldr      x8, [x8, #0x18]
0024CE60 00013fd6 blr      x8
0024CE64 f7060011 add      w23, w23, #1
0024CE68 ff7a0071 cmp      w23, #0x1e
0024CE6C 20fdff54 b.eq     #0x24ce10
0024CE70 e8c30791 add      x8, sp, #0x1f0
0024CE74 5756ff97 bl       #0x2227d0
0024CE78 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024CE7C e8030591 add      x8, sp, #0x140
0024CE80 e103162a mov      w1, w22
0024CE84 e203172a mov      w2, w23
0024CE88 e3031baa mov      x3, x27
0024CE8C 6fcdfe97 bl       #0x200448
0024CE90 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024CE94 800000b4 cbz      x0, #0x24cea4
0024CE98 088c44f8 ldr      x8, [x0, #0x48]!
0024CE9C 080d40f9 ldr      x8, [x8, #0x18]
0024CEA0 00013fd6 blr      x8
0024CEA4 e0a340f9 ldr      x0, [sp, #0x140]
0024CEA8 b8e5fe97 bl       #0x206588
0024CEAC 20fd0737 tbnz     w0, #0, #0x24ce50
0024CEB0 e8a340f9 ldr      x8, [sp, #0x140]
0024CEB4 01810191 add      x1, x8, #0x60
0024CEB8 9b050094 bl       #0x24e524
0024CEBC 1f080071 cmp      w0, #2
0024CEC0 20fbff54 b.eq     #0x24ce24
0024CEC4 1f040071 cmp      w0, #1
0024CEC8 41fcff54 b.ne     #0x24ce50
0024CECC ff7701f9 str      xzr, [sp, #0x2e8]
0024CED0 ff7301f9 str      xzr, [sp, #0x2e0]
0024CED4 ff6f01f9 str      xzr, [sp, #0x2d8]
0024CED8 ff6b01f9 str      xzr, [sp, #0x2d0]
0024CEDC ff6701f9 str      xzr, [sp, #0x2c8]
0024CEE0 ff6301f9 str      xzr, [sp, #0x2c0]
0024CEE4 ff5f01f9 str      xzr, [sp, #0x2b8]
0024CEE8 ff5b01f9 str      xzr, [sp, #0x2b0]
0024CEEC ff5701f9 str      xzr, [sp, #0x2a8]
0024CEF0 ff5301f9 str      xzr, [sp, #0x2a0]
0024CEF4 ff4f01f9 str      xzr, [sp, #0x298]
0024CEF8 ff4b01f9 str      xzr, [sp, #0x290]
0024CEFC ff4701f9 str      xzr, [sp, #0x288]
0024CF00 ff4301f9 str      xzr, [sp, #0x280]
0024CF04 ff3f01f9 str      xzr, [sp, #0x278]
0024CF08 ff3b01f9 str      xzr, [sp, #0x270]
0024CF0C ff3701f9 str      xzr, [sp, #0x268]
0024CF10 ff3301f9 str      xzr, [sp, #0x260]
0024CF14 ff2f01f9 str      xzr, [sp, #0x258]
0024CF18 ff2b01f9 str      xzr, [sp, #0x250]
0024CF1C ff2701f9 str      xzr, [sp, #0x248]
0024CF20 ff2301f9 str      xzr, [sp, #0x240]
0024CF24 ff1f01f9 str      xzr, [sp, #0x238]
0024CF28 ff1b01f9 str      xzr, [sp, #0x230]
0024CF2C ff1701f9 str      xzr, [sp, #0x228]
0024CF30 ff1301f9 str      xzr, [sp, #0x220]
0024CF34 ff0f01f9 str      xzr, [sp, #0x218]
0024CF38 ff0b01f9 str      xzr, [sp, #0x210]
0024CF3C ff0701f9 str      xzr, [sp, #0x208]
0024CF40 fffb00f9 str      xzr, [sp, #0x1f0]
0024CF44 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024CF48 7a000035 cbnz     w26, #0x24cf54
0024CF4C 680f8052 mov      w8, #0x7b
0024CF50 28170038 strb     w8, [x25], #1
0024CF54 e8a340f9 ldr      x8, [sp, #0x140]
0024CF58 002d40f9 ldr      x0, [x8, #0x58]
0024CF5C 2aa90b94 bl       #0x537404
0024CF60 e30300aa mov      x3, x0
0024CF64 e0c30791 add      x0, sp, #0x1f0
0024CF68 01208052 mov      w1, #0x100
0024CF6C e20315aa mov      x2, x21
0024CF70 e0a50e94 bl       #0x5f66f0
0024CF74 e1c30791 add      x1, sp, #0x1f0
0024CF78 e00319aa mov      x0, x25
0024CF7C 02208052 mov      w2, #0x100
0024CF80 e8a40e94 bl       #0x5f6320
0024CF84 e0c30791 add      x0, sp, #0x1f0
0024CF88 baa40e94 bl       #0x5f6270
0024CF8C e8a340f9 ldr      x8, [sp, #0x140]
0024CF90 3903008b add      x25, x25, x0
0024CF94 e1031faa mov      x1, xzr
0024CF98 5a070011 add      w26, w26, #1
0024CF9C 002d40f9 ldr      x0, [x8, #0x58]
0024CFA0 17a90b94 bl       #0x5373fc
0024CFA4 e0a340f9 ldr      x0, [sp, #0x140]
0024CFA8 1f5000f9 str      xzr, [x0, #0xa0]
0024CFAC abffff17 b        #0x24ce58
0024CFB0 8a4b8452 mov      w10, #0x225c
0024CFB4 8a4ba472 movk     w10, #0x225c, lsl #16
0024CFB8 a80f8052 mov      w8, #0x7d
0024CFBC 9a010034 cbz      w26, #0x24cfec
0024CFC0 28f31f38 sturb    w8, [x25, #-1]
0024CFC4 e97740f9 ldr      x9, [sp, #0xe8]
0024CFC8 f50309aa mov      x21, x9
0024CFCC 086349b9 ldr      w8, [x24, #0x960]
0024CFD0 1f050071 cmp      w8, #1
0024CFD4 8a010054 b.ge     #0x24d004
0024CFD8 d8000014 b        #0x24d338
0024CFDC 200740b9 ldr      w0, [x25, #4]
0024CFE0 60140034 cbz      w0, #0x24d26c
0024CFE4 f398ff97 bl       #0x2333b0
0024CFE8 a7000014 b        #0x24d284
0024CFEC 2a0300b9 str      w10, [x25]
0024CFF0 e97740f9 ldr      x9, [sp, #0xe8]
0024CFF4 f50309aa mov      x21, x9
0024CFF8 086349b9 ldr      w8, [x24, #0x960]
0024CFFC 1f050071 cmp      w8, #1
0024D000 cb190054 b.lt     #0x24d338
0024D004 030340f9 ldr      x3, [x24]
0024D008 28349b52 mov      w8, #0xd9a1
0024D00C e891a072 movk     w8, #0x48f, lsl #16
0024D010 9502088b add      x21, x20, x8
0024D014 680f8052 mov      w8, #0x7b
0024D018 ff7701f9 str      xzr, [sp, #0x2e8]
0024D01C 021e0090 adrp     x2, #0x60d000
0024D020 42043191 add      x2, x2, #0xc41
0024D024 ff7301f9 str      xzr, [sp, #0x2e0]
0024D028 e0c30791 add      x0, sp, #0x1f0
0024D02C 01208052 mov      w1, #0x100
0024D030 ff6f01f9 str      xzr, [sp, #0x2d8]
0024D034 ff6b01f9 str      xzr, [sp, #0x2d0]
0024D038 ff6701f9 str      xzr, [sp, #0x2c8]
0024D03C ff6301f9 str      xzr, [sp, #0x2c0]
0024D040 ff5f01f9 str      xzr, [sp, #0x2b8]
0024D044 ff5b01f9 str      xzr, [sp, #0x2b0]
0024D048 ff5701f9 str      xzr, [sp, #0x2a8]
0024D04C ff5301f9 str      xzr, [sp, #0x2a0]
0024D050 ff4f01f9 str      xzr, [sp, #0x298]
0024D054 ff4b01f9 str      xzr, [sp, #0x290]
0024D058 ff4701f9 str      xzr, [sp, #0x288]
0024D05C ff4301f9 str      xzr, [sp, #0x280]
0024D060 ff3f01f9 str      xzr, [sp, #0x278]
0024D064 ff3b01f9 str      xzr, [sp, #0x270]
0024D068 ff3701f9 str      xzr, [sp, #0x268]
0024D06C ff3301f9 str      xzr, [sp, #0x260]
0024D070 ff2f01f9 str      xzr, [sp, #0x258]
0024D074 ff2b01f9 str      xzr, [sp, #0x250]
0024D078 ff2701f9 str      xzr, [sp, #0x248]
0024D07C ff2301f9 str      xzr, [sp, #0x240]
0024D080 ff1f01f9 str      xzr, [sp, #0x238]
0024D084 ff1b01f9 str      xzr, [sp, #0x230]
0024D088 ff1701f9 str      xzr, [sp, #0x228]
0024D08C ff1301f9 str      xzr, [sp, #0x220]
0024D090 ff0f01f9 str      xzr, [sp, #0x218]
0024D094 ff0b01f9 str      xzr, [sp, #0x210]
0024D098 ff0701f9 str      xzr, [sp, #0x208]
0024D09C fffb00f9 str      xzr, [sp, #0x1f0]
0024D0A0 28010039 strb     w8, [x9]
0024D0A4 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D0A8 92a50e94 bl       #0x5f66f0
0024D0AC e1c30791 add      x1, sp, #0x1f0
0024D0B0 e00315aa mov      x0, x21
0024D0B4 02208052 mov      w2, #0x100
0024D0B8 9aa40e94 bl       #0x5f6320
0024D0BC e0c30791 add      x0, sp, #0x1f0
0024D0C0 6ca40e94 bl       #0x5f6270
0024D0C4 086349b9 ldr      w8, [x24, #0x960]
0024D0C8 b502008b add      x21, x21, x0
0024D0CC 1f090071 cmp      w8, #2
0024D0D0 0b0a0054 b.lt     #0x24d210
0024D0D4 09bb8452 mov      w9, #0x25d8
0024D0D8 09a3a072 movk     w9, #0x518, lsl #16
0024D0DC e8031faa mov      x8, xzr
0024D0E0 9302098b add      x19, x20, x9
0024D0E4 161e0090 adrp     x22, #0x60d000
0024D0E8 d6063191 add      x22, x22, #0xc41
0024D0EC 1f2003d5 nop      
0024D0F0 637a68f8 ldr      x3, [x19, x8, lsl #3]
0024D0F4 e0c30791 add      x0, sp, #0x1f0
0024D0F8 01208052 mov      w1, #0x100
0024D0FC e20316aa mov      x2, x22
0024D100 ff7701f9 str      xzr, [sp, #0x2e8]
0024D104 f40308aa mov      x20, x8
0024D108 ff7301f9 str      xzr, [sp, #0x2e0]
0024D10C ff6f01f9 str      xzr, [sp, #0x2d8]
0024D110 ff6b01f9 str      xzr, [sp, #0x2d0]
0024D114 ff6701f9 str      xzr, [sp, #0x2c8]
0024D118 ff6301f9 str      xzr, [sp, #0x2c0]
0024D11C ff5f01f9 str      xzr, [sp, #0x2b8]
0024D120 ff5b01f9 str      xzr, [sp, #0x2b0]
0024D124 ff5701f9 str      xzr, [sp, #0x2a8]
0024D128 ff5301f9 str      xzr, [sp, #0x2a0]
0024D12C ff4f01f9 str      xzr, [sp, #0x298]
0024D130 ff4b01f9 str      xzr, [sp, #0x290]
0024D134 ff4701f9 str      xzr, [sp, #0x288]
0024D138 ff4301f9 str      xzr, [sp, #0x280]
0024D13C ff3f01f9 str      xzr, [sp, #0x278]
0024D140 ff3b01f9 str      xzr, [sp, #0x270]
0024D144 ff3701f9 str      xzr, [sp, #0x268]
0024D148 ff3301f9 str      xzr, [sp, #0x260]
0024D14C ff2f01f9 str      xzr, [sp, #0x258]
0024D150 ff2b01f9 str      xzr, [sp, #0x250]
0024D154 ff2701f9 str      xzr, [sp, #0x248]
0024D158 ff2301f9 str      xzr, [sp, #0x240]
0024D15C ff1f01f9 str      xzr, [sp, #0x238]
0024D160 ff1b01f9 str      xzr, [sp, #0x230]
0024D164 ff1701f9 str      xzr, [sp, #0x228]
0024D168 ff1301f9 str      xzr, [sp, #0x220]
0024D16C ff0f01f9 str      xzr, [sp, #0x218]
0024D170 ff0b01f9 str      xzr, [sp, #0x210]
0024D174 ff0701f9 str      xzr, [sp, #0x208]
0024D178 fffb00f9 str      xzr, [sp, #0x1f0]
0024D17C ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D180 5ca50e94 bl       #0x5f66f0
0024D184 e1c30791 add      x1, sp, #0x1f0
0024D188 e00315aa mov      x0, x21
0024D18C 02208052 mov      w2, #0x100
0024D190 64a40e94 bl       #0x5f6320
0024D194 e0c30791 add      x0, sp, #0x1f0
0024D198 36a40e94 bl       #0x5f6270
0024D19C 096389b9 ldrsw    x9, [x24, #0x960]
0024D1A0 8a0a0091 add      x10, x20, #2
0024D1A4 b502008b add      x21, x21, x0
0024D1A8 88060091 add      x8, x20, #1
0024D1AC 5f0109eb cmp      x10, x9
0024D1B0 0bfaff54 b.lt     #0x24d0f0
0024D1B4 1f050031 cmn      w8, #1
0024D1B8 c00b0054 b.eq     #0x24d330
0024D1BC 16050091 add      x22, x8, #1
0024D1C0 15000014 b        #0x24d214
0024D1C4 e0031f2a mov      w0, wzr
0024D1C8 7a65ff97 bl       #0x2267b0
0024D1CC 3d52ff97 bl       #0x221ac0
0024D1D0 882c9352 mov      w8, #0x9964
0024D1D4 f30314aa mov      x19, x20
0024D1D8 146868b8 ldr      w20, [x0, x8]
0024D1DC 3952ff97 bl       #0x221ac0
0024D1E0 08209352 mov      w8, #0x9900
0024D1E4 e1231291 add      x1, sp, #0x488
0024D1E8 0800088b add      x8, x0, x8
0024D1EC e003142a mov      w0, w20
0024D1F0 092145a9 ldp      x9, x8, [x8, #0x50]
0024D1F4 e94702f9 str      x9, [sp, #0x488]
0024D1F8 e84b02f9 str      x8, [sp, #0x490]
0024D1FC 715dff97 bl       #0x2247c0
0024D200 88008052 mov      w8, #4
0024D204 e0031f2a mov      w0, wzr
0024D208 681600b9 str      w8, [x19, #0x14]
0024D20C a8040014 b        #0x24e4ac
0024D210 36008052 mov      w22, #1
0024D214 a80f8052 mov      w8, #0x7d
0024D218 a8f21f38 sturb    w8, [x21, #-1]
0024D21C 49000014 b        #0x24d340
0024D220 e0031f2a mov      w0, wzr
0024D224 68922539 strb     w8, [x19, #0x964]
0024D228 08c48952 mov      w8, #0x4e20
0024D22C 280b00b9 str      w8, [x25, #8]
0024D230 48018052 mov      w8, #0xa
0024D234 881600b9 str      w8, [x20, #0x14]
0024D238 9d040014 b        #0x24e4ac
0024D23C e00315aa mov      x0, x21
0024D240 29fa0b94 bl       #0x54bae4
0024D244 080040b9 ldr      w8, [x0]
0024D248 401e00d0 adrp     x0, #0x617000
0024D24C 00803b91 add      x0, x0, #0xee0
0024D250 31000014 b        #0x24d314
0024D254 e00314aa mov      x0, x20
0024D258 23fa0b94 bl       #0x54bae4
0024D25C 080040b9 ldr      w8, [x0]
0024D260 601e00b0 adrp     x0, #0x61a000
0024D264 008c3391 add      x0, x0, #0xce3
0024D268 89040014 b        #0x24e48c
0024D26C 08178e52 mov      w8, #0x70b8
0024D270 4862a072 movk     w8, #0x312, lsl #16
0024D274 200b40b9 ldr      w0, [x25, #8]
0024D278 8802088b add      x8, x20, x8
0024D27C 010140b9 ldr      w1, [x8]
0024D280 9897ff97 bl       #0x2330e0
0024D284 68966539 ldrb     w8, [x19, #0x965]
0024D288 3f0b00b9 str      wzr, [x25, #8]
0024D28C 48000034 cbz      w8, #0x24d294
0024D290 5467ff97 bl       #0x226fe0
0024D294 68926539 ldrb     w8, [x19, #0x964]
0024D298 48000034 cbz      w8, #0x24d2a0
0024D29C 7554ff97 bl       #0x222470
0024D2A0 7455ff97 bl       #0x222870
0024D2A4 40000036 tbz      w0, #0, #0x24d2ac
0024D2A8 f255ff97 bl       #0x222a70
0024D2AC 880e40f9 ldr      x8, [x20, #0x18]
0024D2B0 480100b4 cbz      x8, #0x24d2d8
0024D2B4 08510191 add      x8, x8, #0x54
0024D2B8 1ffddf88 ldar     wzr, [x8]
0024D2BC 880e40f9 ldr      x8, [x20, #0x18]
0024D2C0 c80000b4 cbz      x8, #0x24d2d8
0024D2C4 08510191 add      x8, x8, #0x54
0024D2C8 08fddf88 ldar     w8, [x8]
0024D2CC 891240f9 ldr      x9, [x20, #0x20]
0024D2D0 1f010071 cmp      w8, #0
0024D2D4 e803899a csel     x8, xzr, x9, eq
0024D2D8 89c20091 add      x9, x20, #0x30
0024D2DC 1f0100f1 cmp      x8, #0
0024D2E0 ffe30439 strb     wzr, [sp, #0x138]
0024D2E4 2001889a csel     x0, x9, x8, eq
0024D2E8 e1e30491 add      x1, sp, #0x138
0024D2EC 080040f9 ldr      x8, [x0]
0024D2F0 080540f9 ldr      x8, [x8, #8]
0024D2F4 00013fd6 blr      x8
0024D2F8 20008052 mov      w0, #1
0024D2FC 6c040014 b        #0x24e4ac
0024D300 e00315aa mov      x0, x21
0024D304 f8f90b94 bl       #0x54bae4
0024D308 080040b9 ldr      w8, [x0]
0024D30C 001e00b0 adrp     x0, #0x60e000
0024D310 00581591 add      x0, x0, #0x556
0024D314 420340b9 ldr      w2, [x26]
0024D318 01550012 and      w1, w8, #0x3fffff
0024D31C e3031faa mov      x3, xzr
0024D320 604bff97 bl       #0x2200a0
0024D324 28018052 mov      w8, #9
0024D328 e0031f2a mov      w0, wzr
0024D32C 5e040014 b        #0x24e4a4
0024D330 8a4b8452 mov      w10, #0x225c
0024D334 8a4ba472 movk     w10, #0x225c, lsl #16
0024D338 f6031f2a mov      w22, wzr
0024D33C aa0200b9 str      w10, [x21]
0024D340 e051ff97 bl       #0x221ac0
0024D344 08939652 mov      w8, #0xb498
0024D348 e800a072 movk     w8, #7, lsl #16
0024D34C fa0b01b9 str      w26, [sp, #0x108]
0024D350 086868f8 ldr      x8, [x0, x8]
0024D354 093d0072 ands     w9, w8, #0xffff
0024D358 e9d300b9 str      w9, [sp, #0xd0]
0024D35C e0120054 b.eq     #0x24d5b8
0024D360 f56740f9 ldr      x21, [sp, #0xc8]
0024D364 9f2b0071 cmp      w28, #0xa
0024D368 f63300f9 str      x22, [sp, #0x60]
0024D36C a8260078 strh     w8, [x21], #2
0024D370 a8000054 b.hi     #0x24d384
0024D374 291f00f0 adrp     x9, #0x634000
0024D378 29e13391 add      x9, x9, #0xcf8
0024D37C 37797c78 ldrh     w23, [x9, x28, lsl #1]
0024D380 02000014 b        #0x24d388
0024D384 97058052 mov      w23, #0x2c
0024D388 f3031f2a mov      w19, wzr
0024D38C 183d4092 and      x24, x8, #0xffff
0024D390 5600c0d2 mov      x22, #0x200000000
0024D394 19f89652 mov      w25, #0xb7c0
0024D398 f900a072 movk     w25, #7, lsl #16
0024D39C 5a068052 mov      w26, #0x32
0024D3A0 1c888452 mov      w28, #0x2440
0024D3A4 1ca3a072 movk     w28, #0x518, lsl #16
0024D3A8 9406c0d2 mov      x20, #0x3400000000
0024D3AC 0e000014 b        #0x24d3e4
0024D3B0 e98b40f9 ldr      x9, [sp, #0x110]
0024D3B4 2929338b add      x9, x9, w19, uxth #2
0024D3B8 083140b9 ldr      w8, [x8, #0x30]
0024D3BC 28693cb8 str      w8, [x9, x28]
0024D3C0 69060011 add      w9, w19, #1
0024D3C4 e803132a mov      w8, w19
0024D3C8 f303092a mov      w19, w9
0024D3CC a8660079 strh     w8, [x21, #0x32]
0024D3D0 b5d20091 add      x21, x21, #0x34
0024D3D4 180700f1 subs     x24, x24, #1
0024D3D8 d602148b add      x22, x22, x20
0024D3DC 39e30091 add      x25, x25, #0x38
0024D3E0 00050054 b.eq     #0x24d480
0024D3E4 b751ff97 bl       #0x221ac0
0024D3E8 0800198b add      x8, x0, x25
0024D3EC ba020079 strh     w26, [x21]
0024D3F0 090140f9 ldr      x9, [x8]
0024D3F4 b7160079 strh     w23, [x21, #0xa]
0024D3F8 a92200f8 stur     x9, [x21, #2]
0024D3FC 09154079 ldrh     w9, [x8, #0xa]
0024D400 a91a0079 strh     w9, [x21, #0xc]
0024D404 09194079 ldrh     w9, [x8, #0xc]
0024D408 a91e0079 strh     w9, [x21, #0xe]
0024D40C 09394039 ldrb     w9, [x8, #0xe]
0024D410 a9420039 strb     w9, [x21, #0x10]
0024D414 09214079 ldrh     w9, [x8, #0x10]
0024D418 a9120178 sturh    w9, [x21, #0x11]
0024D41C 09494039 ldrb     w9, [x8, #0x12]
0024D420 a94e0039 strb     w9, [x21, #0x13]
0024D424 094d4039 ldrb     w9, [x8, #0x13]
0024D428 a9520039 strb     w9, [x21, #0x14]
0024D42C 09c141f8 ldur     x9, [x8, #0x1c]
0024D430 0a4142f8 ldur     x10, [x8, #0x24]
0024D434 0b594079 ldrh     w11, [x8, #0x2c]
0024D438 0c4141f8 ldur     x12, [x8, #0x14]
0024D43C bff20278 sturh    wzr, [x21, #0x2f]
0024D440 ac5201f8 stur     x12, [x21, #0x15]
0024D444 abd20278 sturh    w11, [x21, #0x2d]
0024D448 aa5202f8 stur     x10, [x21, #0x25]
0024D44C a9d201f8 stur     x9, [x21, #0x1d]
0024D450 09b94039 ldrb     w9, [x8, #0x2e]
0024D454 a9c60039 strb     w9, [x21, #0x31]
0024D458 09154079 ldrh     w9, [x8, #0xa]
0024D45C 3f950d71 cmp      w9, #0x365
0024D460 80faff54 b.eq     #0x24d3b0
0024D464 e8ff9f52 mov      w8, #0xffff
0024D468 a8660079 strh     w8, [x21, #0x32]
0024D46C b5d20091 add      x21, x21, #0x34
0024D470 180700f1 subs     x24, x24, #1
0024D474 d602148b add      x22, x22, x20
0024D478 39e30091 add      x25, x25, #0x38
0024D47C 41fbff54 b.ne     #0x24d3e4
0024D480 f48b40f9 ldr      x20, [sp, #0x110]
0024D484 08609552 mov      w8, #0xab00
0024D488 8885a072 movk     w8, #0x42c, lsl #16
0024D48C 02fc8c52 mov      w2, #0x67e0
0024D490 a206a072 movk     w2, #0x35, lsl #16
0024D494 e1031f2a mov      w1, wzr
0024D498 9502088b add      x21, x20, x8
0024D49C e00315aa mov      x0, x21
0024D4A0 2ca30e94 bl       #0x5f6150
0024D4A4 c3fe6093 asr      x3, x22, #0x20
0024D4A8 f66740f9 ldr      x22, [sp, #0xc8]
0024D4AC e00315aa mov      x0, x21
0024D4B0 01fc8c52 mov      w1, #0x67e0
0024D4B4 a106a072 movk     w1, #0x35, lsl #16
0024D4B8 e4031f2a mov      w4, wzr
0024D4BC e5031f2a mov      w5, wzr
0024D4C0 e20316aa mov      x2, x22
0024D4C4 f9220294 bl       #0x2d60a8
0024D4C8 02488852 mov      w2, #0x4240
0024D4CC e201a072 movk     w2, #0xf, lsl #16
0024D4D0 e00316aa mov      x0, x22
0024D4D4 e10315aa mov      x1, x21
0024D4D8 42a40e94 bl       #0x5f65e0
0024D4DC 7951ff97 bl       #0x221ac0
0024D4E0 fa0b41b9 ldr      w26, [sp, #0x108]
0024D4E4 08939652 mov      w8, #0xb498
0024D4E8 e800a072 movk     w8, #7, lsl #16
0024D4EC fc9340f9 ldr      x28, [sp, #0x120]
0024D4F0 7f3e0072 tst      w19, #0xffff
0024D4F4 f63340f9 ldr      x22, [sp, #0x60]
0024D4F8 1f6828f8 str      xzr, [x0, x8]
0024D4FC e0050054 b.eq     #0x24d5b8
0024D500 e85340f9 ldr      x8, [sp, #0xa0]
0024D504 693e0012 and      w9, w19, #0xffff
0024D508 ea03132a mov      w10, w19
0024D50C 4a3d4092 and      x10, x10, #0xffff
0024D510 3f050071 cmp      w9, #1
0024D514 c9008052 mov      w9, #6
0024D518 2980a072 movk     w9, #0x401, lsl #16
0024D51C eb031faa mov      x11, xzr
0024D520 13250078 strh     w19, [x8], #2
0024D524 60010054 b.eq     #0x24d550
0024D528 ee2f40f9 ldr      x14, [sp, #0x58]
0024D52C 4c397f92 and      x12, x10, #0xfffe
0024D530 cdc15fb8 ldur     w13, [x14, #-4]
0024D534 6b090091 add      x11, x11, #2
0024D538 9f010beb cmp      x12, x11
0024D53C 09350029 stp      w9, w13, [x8]
0024D540 cd8540b8 ldr      w13, [x14], #8
0024D544 09350129 stp      w9, w13, [x8, #8]
0024D548 08410091 add      x8, x8, #0x10
0024D54C 21ffff54 b.ne     #0x24d530
0024D550 ca000036 tbz      w10, #0, #0x24d568
0024D554 8a0a0b8b add      x10, x20, x11, lsl #2
0024D558 0b888452 mov      w11, #0x2440
0024D55C 0ba3a072 movk     w11, #0x518, lsl #16
0024D560 4a696bb8 ldr      w10, [x10, x11]
0024D564 09298128 stp      w9, w10, [x8], #8
0024D568 f45340f9 ldr      x20, [sp, #0xa0]
0024D56C 02fc8c52 mov      w2, #0x67e0
0024D570 a206a072 movk     w2, #0x35, lsl #16
0024D574 e00315aa mov      x0, x21
0024D578 e1031f2a mov      w1, wzr
0024D57C 1301144b sub      w19, w8, w20
0024D580 f4a20e94 bl       #0x5f6150
0024D584 637e4093 sxtw     x3, w19
0024D588 e00315aa mov      x0, x21
0024D58C 01fc8c52 mov      w1, #0x67e0
0024D590 a106a072 movk     w1, #0x35, lsl #16
0024D594 e20314aa mov      x2, x20
0024D598 e4031f2a mov      w4, wzr
0024D59C e5031f2a mov      w5, wzr
0024D5A0 c2220294 bl       #0x2d60a8
0024D5A4 02488852 mov      w2, #0x4240
0024D5A8 e201a072 movk     w2, #0xf, lsl #16
0024D5AC e00314aa mov      x0, x20
0024D5B0 e10315aa mov      x1, x21
0024D5B4 0ba40e94 bl       #0x5f65e0
0024D5B8 e89740f9 ldr      x8, [sp, #0x128]
0024D5BC 1f3d0072 tst      w8, #0xffff
0024D5C0 c1000054 b.ne     #0x24d5d8
0024D5C4 5f030071 cmp      w26, #0
0024D5C8 8c000054 b.gt     #0x24d5d8
0024D5CC e8d340b9 ldr      w8, [sp, #0xd0]
0024D5D0 0801162a orr      w8, w8, w22
0024D5D4 c8080034 cbz      w8, #0x24d6ec
0024D5D8 e95740f9 ldr      x9, [sp, #0xa8]
0024D5DC 28008052 mov      w8, #1
0024D5E0 9f2b0071 cmp      w28, #0xa
0024D5E4 f48b40f9 ldr      x20, [sp, #0x110]
0024D5E8 28010079 strh     w8, [x9]
0024D5EC a8000054 b.hi     #0x24d600
0024D5F0 281f00f0 adrp     x8, #0x634000
0024D5F4 08e13391 add      x8, x8, #0xcf8
0024D5F8 08797c78 ldrh     w8, [x8, x28, lsl #1]
0024D5FC 02000014 b        #0x24d604
0024D600 88058052 mov      w8, #0x2c
0024D604 f55740f9 ldr      x21, [sp, #0xa8]
0024D608 e0030591 add      x0, sp, #0x140
0024D60C ff430839 strb     wzr, [sp, #0x210]
0024D610 e92771f9 ldr      x9, [sp, #0x6248]
0024D614 ff0701f9 str      xzr, [sp, #0x208]
0024D618 fffb00f9 str      xzr, [sp, #0x1f0]
0024D61C ea2b71f9 ldr      x10, [sp, #0x6250]
0024D620 a8060079 strh     w8, [x21, #2]
0024D624 e87f40b9 ldr      w8, [sp, #0x7c]
0024D628 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D62C a8120039 strb     w8, [x21, #4]
0024D630 e84340f9 ldr      x8, [sp, #0x80]
0024D634 a85200f8 stur     x8, [x21, #5]
0024D638 08a48a52 mov      w8, #0x5520
0024D63C 288ea072 movk     w8, #0x471, lsl #16
0024D640 9302088b add      x19, x20, x8
0024D644 e82f71f9 ldr      x8, [sp, #0x6258]
0024D648 69d200f8 stur     x9, [x19, #0xd]
0024D64C 6a5201f8 stur     x10, [x19, #0x15]
0024D650 68d201f8 stur     x8, [x19, #0x1d]
0024D654 e81b4091 add      x8, sp, #6, lsl #12
0024D658 08210991 add      x8, x8, #0x248
0024D65C 08314079 ldrh     w8, [x8, #0x18]
0024D660 68520278 sturh    w8, [x19, #0x25]
0024D664 e88f40b9 ldr      w8, [sp, #0x8c]
0024D668 a89e0039 strb     w8, [x21, #0x27]
0024D66C e5a30e94 bl       #0x5f6600
0024D670 e0c30791 add      x0, sp, #0x1f0
0024D674 e1030591 add      x1, sp, #0x140
0024D678 bea30e94 bl       #0x5f6570
0024D67C e80341f9 ldr      x8, [sp, #0x200]
0024D680 02fc8c52 mov      w2, #0x67e0
0024D684 a206a072 movk     w2, #0x35, lsl #16
0024D688 e90741f9 ldr      x9, [sp, #0x208]
0024D68C e1031f2a mov      w1, wzr
0024D690 ea434839 ldrb     w10, [sp, #0x210]
0024D694 68a603a9 stp      x8, x9, [x19, #0x38]
0024D698 6a220139 strb     w10, [x19, #0x48]
0024D69C e9235fa9 ldp      x9, x8, [sp, #0x1f0]
0024D6A0 69a202a9 stp      x9, x8, [x19, #0x28]
0024D6A4 08609552 mov      w8, #0xab00
0024D6A8 8885a072 movk     w8, #0x42c, lsl #16
0024D6AC 9402088b add      x20, x20, x8
0024D6B0 e00314aa mov      x0, x20
0024D6B4 a7a20e94 bl       #0x5f6150
0024D6B8 23098052 mov      w3, #0x49
0024D6BC e00314aa mov      x0, x20
0024D6C0 01fc8c52 mov      w1, #0x67e0
0024D6C4 a106a072 movk     w1, #0x35, lsl #16
0024D6C8 e20315aa mov      x2, x21
0024D6CC e4031f2a mov      w4, wzr
0024D6D0 e5031f2a mov      w5, wzr
0024D6D4 75220294 bl       #0x2d60a8
0024D6D8 02488852 mov      w2, #0x4240
0024D6DC e201a072 movk     w2, #0xf, lsl #16
0024D6E0 e00315aa mov      x0, x21
0024D6E4 e10314aa mov      x1, x20
0024D6E8 bea30e94 bl       #0x5f65e0
0024D6EC f47340f9 ldr      x20, [sp, #0xe0]
0024D6F0 f3031f2a mov      w19, wzr
0024D6F4 f8031f2a mov      w24, wzr
0024D6F8 7c1e00f0 adrp     x28, #0x61c000
0024D6FC 9cbb0d91 add      x28, x28, #0x36e
0024D700 04000014 b        #0x24d710
0024D704 3fb30471 cmp      w25, #0x12c
0024D708 f803192a mov      w24, w25
0024D70C c00e0054 b.eq     #0x24d8e4
0024D710 19070011 add      w25, w24, #1
0024D714 36008052 mov      w22, #1
0024D718 05000014 b        #0x24d72c
0024D71C 1f2003d5 nop      
0024D720 d6060011 add      w22, w22, #1
0024D724 df7e0071 cmp      w22, #0x1f
0024D728 e0feff54 b.eq     #0x24d704
0024D72C e8c30791 add      x8, sp, #0x1f0
0024D730 d5060051 sub      w21, w22, #1
0024D734 674bff97 bl       #0x2204d0
0024D738 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D73C e8030591 add      x8, sp, #0x140
0024D740 e103182a mov      w1, w24
0024D744 e203152a mov      w2, w21
0024D748 e3031baa mov      x3, x27
0024D74C 3fcbfe97 bl       #0x200448
0024D750 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D754 800000b4 cbz      x0, #0x24d764
0024D758 088c44f8 ldr      x8, [x0, #0x48]!
0024D75C 080d40f9 ldr      x8, [x8, #0x18]
0024D760 00013fd6 blr      x8
0024D764 e0a340f9 ldr      x0, [sp, #0x140]
0024D768 88e3fe97 bl       #0x206588
0024D76C 000b0037 tbnz     w0, #0, #0x24d8cc
0024D770 e8a340f9 ldr      x8, [sp, #0x140]
0024D774 17810191 add      x23, x8, #0x60
0024D778 e8c30791 add      x8, sp, #0x1f0
0024D77C 1554ff97 bl       #0x2227d0
0024D780 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D784 e10317aa mov      x1, x23
0024D788 4fd4fe97 bl       #0x2028c4
0024D78C fa03002a mov      w26, w0
0024D790 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D794 800000b4 cbz      x0, #0x24d7a4
0024D798 088c44f8 ldr      x8, [x0, #0x48]!
0024D79C 080d40f9 ldr      x8, [x8, #0x18]
0024D7A0 00013fd6 blr      x8
0024D7A4 ba010037 tbnz     w26, #0, #0x24d7d8
0024D7A8 e8c30791 add      x8, sp, #0x1f0
0024D7AC 554bff97 bl       #0x220500
0024D7B0 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D7B4 e10317aa mov      x1, x23
0024D7B8 43d4fe97 bl       #0x2028c4
0024D7BC f703002a mov      w23, w0
0024D7C0 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024D7C4 800000b4 cbz      x0, #0x24d7d4
0024D7C8 088c44f8 ldr      x8, [x0, #0x48]!
0024D7CC 080d40f9 ldr      x8, [x8, #0x18]
0024D7D0 00013fd6 blr      x8
0024D7D4 d7070036 tbz      w23, #0, #0x24d8cc
0024D7D8 e8a340f9 ldr      x8, [sp, #0x140]
0024D7DC 096940b9 ldr      w9, [x8, #0x68]
0024D7E0 29050051 sub      w9, w9, #1
0024D7E4 3f01186b cmp      w9, w24
0024D7E8 a1000054 b.ne     #0x24d7fc
0024D7EC 096d40b9 ldr      w9, [x8, #0x6c]
0024D7F0 29050051 sub      w9, w9, #1
0024D7F4 bf02096b cmp      w21, w9
0024D7F8 a0060054 b.eq     #0x24d8cc
0024D7FC ff7701f9 str      xzr, [sp, #0x2e8]
0024D800 ff7301f9 str      xzr, [sp, #0x2e0]
0024D804 ff6f01f9 str      xzr, [sp, #0x2d8]
0024D808 ff6b01f9 str      xzr, [sp, #0x2d0]
0024D80C ff6701f9 str      xzr, [sp, #0x2c8]
0024D810 ff6301f9 str      xzr, [sp, #0x2c0]
0024D814 ff5f01f9 str      xzr, [sp, #0x2b8]
0024D818 ff5b01f9 str      xzr, [sp, #0x2b0]
0024D81C ff5701f9 str      xzr, [sp, #0x2a8]
0024D820 ff5301f9 str      xzr, [sp, #0x2a0]
0024D824 ff4f01f9 str      xzr, [sp, #0x298]
0024D828 ff4b01f9 str      xzr, [sp, #0x290]
0024D82C ff4701f9 str      xzr, [sp, #0x288]
0024D830 ff4301f9 str      xzr, [sp, #0x280]
0024D834 ff3f01f9 str      xzr, [sp, #0x278]
0024D838 ff3b01f9 str      xzr, [sp, #0x270]
0024D83C ff3701f9 str      xzr, [sp, #0x268]
0024D840 ff3301f9 str      xzr, [sp, #0x260]
0024D844 ff2f01f9 str      xzr, [sp, #0x258]
0024D848 ff2b01f9 str      xzr, [sp, #0x250]
0024D84C ff2701f9 str      xzr, [sp, #0x248]
0024D850 ff2301f9 str      xzr, [sp, #0x240]
0024D854 ff1f01f9 str      xzr, [sp, #0x238]
0024D858 ff1b01f9 str      xzr, [sp, #0x230]
0024D85C ff1701f9 str      xzr, [sp, #0x228]
0024D860 ff1301f9 str      xzr, [sp, #0x220]
0024D864 ff0f01f9 str      xzr, [sp, #0x218]
0024D868 ff0b01f9 str      xzr, [sp, #0x210]
0024D86C ff0701f9 str      xzr, [sp, #0x208]
0024D870 fffb00f9 str      xzr, [sp, #0x1f0]
0024D874 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D878 93000035 cbnz     w19, #0x24d888
0024D87C 680f8052 mov      w8, #0x7b
0024D880 88160038 strb     w8, [x20], #1
0024D884 e8a340f9 ldr      x8, [sp, #0x140]
0024D888 002d40f9 ldr      x0, [x8, #0x58]
0024D88C dea60b94 bl       #0x537404
0024D890 e30300aa mov      x3, x0
0024D894 e0c30791 add      x0, sp, #0x1f0
0024D898 01208052 mov      w1, #0x100
0024D89C e2031caa mov      x2, x28
0024D8A0 e403192a mov      w4, w25
0024D8A4 e503162a mov      w5, w22
0024D8A8 92a30e94 bl       #0x5f66f0
0024D8AC e1c30791 add      x1, sp, #0x1f0
0024D8B0 e00314aa mov      x0, x20
0024D8B4 02208052 mov      w2, #0x100
0024D8B8 9aa20e94 bl       #0x5f6320
0024D8BC e0c30791 add      x0, sp, #0x1f0
0024D8C0 6ca20e94 bl       #0x5f6270
0024D8C4 9402008b add      x20, x20, x0
0024D8C8 73060011 add      w19, w19, #1
0024D8CC e0a340f9 ldr      x0, [sp, #0x140]
0024D8D0 80f2ffb4 cbz      x0, #0x24d720
0024D8D4 088c44f8 ldr      x8, [x0, #0x48]!
0024D8D8 080d40f9 ldr      x8, [x8, #0x18]
0024D8DC 00013fd6 blr      x8
0024D8E0 90ffff17 b        #0x24d720
0024D8E4 93000034 cbz      w19, #0x24d8f4
0024D8E8 a80f8052 mov      w8, #0x7d
0024D8EC 88f21f38 sturb    w8, [x20, #-1]
0024D8F0 04000014 b        #0x24d900
0024D8F4 884b8452 mov      w8, #0x225c
0024D8F8 884ba472 movk     w8, #0x225c, lsl #16
0024D8FC 880200b9 str      w8, [x20]
0024D900 e98b40f9 ldr      x9, [sp, #0x110]
0024D904 280c9452 mov      w8, #0xa061
0024D908 a897a072 movk     w8, #0x4bd, lsl #16
0024D90C ff7701f9 str      xzr, [sp, #0x2e8]
0024D910 ff7301f9 str      xzr, [sp, #0x2e0]
0024D914 3401088b add      x20, x9, x8
0024D918 e87b40f9 ldr      x8, [sp, #0xf0]
0024D91C 690f8052 mov      w9, #0x7b
0024D920 ff6f01f9 str      xzr, [sp, #0x2d8]
0024D924 ff6b01f9 str      xzr, [sp, #0x2d0]
0024D928 ff6701f9 str      xzr, [sp, #0x2c8]
0024D92C ff6301f9 str      xzr, [sp, #0x2c0]
0024D930 ff5f01f9 str      xzr, [sp, #0x2b8]
0024D934 ff5b01f9 str      xzr, [sp, #0x2b0]
0024D938 ff5701f9 str      xzr, [sp, #0x2a8]
0024D93C ff5301f9 str      xzr, [sp, #0x2a0]
0024D940 ff4f01f9 str      xzr, [sp, #0x298]
0024D944 ff4b01f9 str      xzr, [sp, #0x290]
0024D948 ff4701f9 str      xzr, [sp, #0x288]
0024D94C ff4301f9 str      xzr, [sp, #0x280]
0024D950 ff3f01f9 str      xzr, [sp, #0x278]
0024D954 ff3b01f9 str      xzr, [sp, #0x270]
0024D958 ff3701f9 str      xzr, [sp, #0x268]
0024D95C ff3301f9 str      xzr, [sp, #0x260]
0024D960 ff2f01f9 str      xzr, [sp, #0x258]
0024D964 ff2b01f9 str      xzr, [sp, #0x250]
0024D968 ff2701f9 str      xzr, [sp, #0x248]
0024D96C ff2301f9 str      xzr, [sp, #0x240]
0024D970 ff1f01f9 str      xzr, [sp, #0x238]
0024D974 ff1b01f9 str      xzr, [sp, #0x230]
0024D978 ff1701f9 str      xzr, [sp, #0x228]
0024D97C ff1301f9 str      xzr, [sp, #0x220]
0024D980 ff0f01f9 str      xzr, [sp, #0x218]
0024D984 ff0b01f9 str      xzr, [sp, #0x210]
0024D988 ff0701f9 str      xzr, [sp, #0x208]
0024D98C fffb00f9 str      xzr, [sp, #0x1f0]
0024D990 09010039 strb     w9, [x8]
0024D994 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024D998 7edcfe97 bl       #0x204b90
0024D99C 08fc6491 add      x8, x0, #0x93f, lsl #12
0024D9A0 16c10c91 add      x22, x8, #0x330
0024D9A4 c8024039 ldrb     w8, [x22]
0024D9A8 1f050071 cmp      w8, #1
0024D9AC 81030054 b.ne     #0x24da1c
0024D9B0 08fc6491 add      x8, x0, #0x93f, lsl #12
0024D9B4 e0030591 add      x0, sp, #0x140
0024D9B8 e1078052 mov      w1, #0x3f
0024D9BC 02c90c91 add      x2, x8, #0x332
0024D9C0 ff7f17a9 stp      xzr, xzr, [sp, #0x170]
0024D9C4 03028052 mov      w3, #0x10
0024D9C8 ff7f16a9 stp      xzr, xzr, [sp, #0x160]
0024D9CC ff7f15a9 stp      xzr, xzr, [sp, #0x150]
0024D9D0 ff7f14a9 stp      xzr, xzr, [sp, #0x140]
0024D9D4 43980a94 bl       #0x4f3ae0
0024D9D8 c5064039 ldrb     w5, [x22, #1]
0024D9DC 821e00f0 adrp     x2, #0x620000
0024D9E0 427c0a91 add      x2, x2, #0x29f
0024D9E4 e0c30791 add      x0, sp, #0x1f0
0024D9E8 e4030591 add      x4, sp, #0x140
0024D9EC 01208052 mov      w1, #0x100
0024D9F0 23008052 mov      w3, #1
0024D9F4 33008052 mov      w19, #1
0024D9F8 3ea30e94 bl       #0x5f66f0
0024D9FC e1c30791 add      x1, sp, #0x1f0
0024DA00 e00314aa mov      x0, x20
0024DA04 02208052 mov      w2, #0x100
0024DA08 46a20e94 bl       #0x5f6320
0024DA0C e0c30791 add      x0, sp, #0x1f0
0024DA10 18a20e94 bl       #0x5f6270
0024DA14 9402008b add      x20, x20, x0
0024DA18 02000014 b        #0x24da20
0024DA1C f3031f2a mov      w19, wzr
0024DA20 57008052 mov      w23, #2
0024DA24 35008052 mov      w21, #1
0024DA28 d7020039 strb     w23, [x22]
0024DA2C 98048052 mov      w24, #0x24
0024DA30 19669e52 mov      w25, #0xf330
0024DA34 7912a072 movk     w25, #0x93, lsl #16
0024DA38 3b669e52 mov      w27, #0xf331
0024DA3C 7b12a072 movk     w27, #0x93, lsl #16
0024DA40 961e00f0 adrp     x22, #0x620000
0024DA44 d67e0a91 add      x22, x22, #0x29f
0024DA48 21000014 b        #0x24dacc
0024DA4C 1f2003d5 nop      
0024DA50 ba02189b madd     x26, x21, x24, x0
0024DA54 48669e52 mov      w8, #0xf332
0024DA58 6812a072 movk     w8, #0x93, lsl #16
0024DA5C e0030591 add      x0, sp, #0x140
0024DA60 e1078052 mov      w1, #0x3f
0024DA64 03028052 mov      w3, #0x10
0024DA68 73060011 add      w19, w19, #1
0024DA6C ff7f17a9 stp      xzr, xzr, [sp, #0x170]
0024DA70 ff7f16a9 stp      xzr, xzr, [sp, #0x160]
0024DA74 4203088b add      x2, x26, x8
0024DA78 ff7f15a9 stp      xzr, xzr, [sp, #0x150]
0024DA7C ff7f14a9 stp      xzr, xzr, [sp, #0x140]
0024DA80 18980a94 bl       #0x4f3ae0
0024DA84 456b7b38 ldrb     w5, [x26, x27]
0024DA88 b5060091 add      x21, x21, #1
0024DA8C e0c30791 add      x0, sp, #0x1f0
0024DA90 e4030591 add      x4, sp, #0x140
0024DA94 01208052 mov      w1, #0x100
0024DA98 e20316aa mov      x2, x22
0024DA9C e303152a mov      w3, w21
0024DAA0 14a30e94 bl       #0x5f66f0
0024DAA4 e1c30791 add      x1, sp, #0x1f0
0024DAA8 e00314aa mov      x0, x20
0024DAAC 02208052 mov      w2, #0x100
0024DAB0 1ca20e94 bl       #0x5f6320
0024DAB4 e0c30791 add      x0, sp, #0x1f0
0024DAB8 eea10e94 bl       #0x5f6270
0024DABC 9402008b add      x20, x20, x0
0024DAC0 bfb204f1 cmp      x21, #0x12c
0024DAC4 97030039 strb     w23, [x28]
0024DAC8 40050054 b.eq     #0x24db70
0024DACC ff7701f9 str      xzr, [sp, #0x2e8]
0024DAD0 ff7301f9 str      xzr, [sp, #0x2e0]
0024DAD4 ff6f01f9 str      xzr, [sp, #0x2d8]
0024DAD8 ff6b01f9 str      xzr, [sp, #0x2d0]
0024DADC ff6701f9 str      xzr, [sp, #0x2c8]
0024DAE0 ff6301f9 str      xzr, [sp, #0x2c0]
0024DAE4 ff5f01f9 str      xzr, [sp, #0x2b8]
0024DAE8 ff5b01f9 str      xzr, [sp, #0x2b0]
0024DAEC ff5701f9 str      xzr, [sp, #0x2a8]
0024DAF0 ff5301f9 str      xzr, [sp, #0x2a0]
0024DAF4 ff4f01f9 str      xzr, [sp, #0x298]
0024DAF8 ff4b01f9 str      xzr, [sp, #0x290]
0024DAFC ff4701f9 str      xzr, [sp, #0x288]
0024DB00 ff4301f9 str      xzr, [sp, #0x280]
0024DB04 ff3f01f9 str      xzr, [sp, #0x278]
0024DB08 ff3b01f9 str      xzr, [sp, #0x270]
0024DB0C ff3701f9 str      xzr, [sp, #0x268]
0024DB10 ff3301f9 str      xzr, [sp, #0x260]
0024DB14 ff2f01f9 str      xzr, [sp, #0x258]
0024DB18 ff2b01f9 str      xzr, [sp, #0x250]
0024DB1C ff2701f9 str      xzr, [sp, #0x248]
0024DB20 ff2301f9 str      xzr, [sp, #0x240]
0024DB24 ff1f01f9 str      xzr, [sp, #0x238]
0024DB28 ff1b01f9 str      xzr, [sp, #0x230]
0024DB2C ff1701f9 str      xzr, [sp, #0x228]
0024DB30 ff1301f9 str      xzr, [sp, #0x220]
0024DB34 ff0f01f9 str      xzr, [sp, #0x218]
0024DB38 ff0b01f9 str      xzr, [sp, #0x210]
0024DB3C ff0701f9 str      xzr, [sp, #0x208]
0024DB40 fffb00f9 str      xzr, [sp, #0x1f0]
0024DB44 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024DB48 12dcfe97 bl       #0x204b90
0024DB4C a802189b madd     x8, x21, x24, x0
0024DB50 1c01198b add      x28, x8, x25
0024DB54 88034039 ldrb     w8, [x28]
0024DB58 1f050071 cmp      w8, #1
0024DB5C a0f7ff54 b.eq     #0x24da50
0024DB60 b5060091 add      x21, x21, #1
0024DB64 bfb204f1 cmp      x21, #0x12c
0024DB68 97030039 strb     w23, [x28]
0024DB6C 01fbff54 b.ne     #0x24dacc
0024DB70 93000034 cbz      w19, #0x24db80
0024DB74 a80f8052 mov      w8, #0x7d
0024DB78 88f21f38 sturb    w8, [x20, #-1]
0024DB7C 04000014 b        #0x24db8c
0024DB80 884b8452 mov      w8, #0x225c
0024DB84 884ba472 movk     w8, #0x225c, lsl #16
0024DB88 88f21fb8 stur     w8, [x20, #-1]
0024DB8C fb0b41b9 ldr      w27, [sp, #0x108]
0024DB90 fa9340f9 ldr      x26, [sp, #0x120]
0024DB94 fc1f41b9 ldr      w28, [sp, #0x11c]
0024DB98 ca4fff97 bl       #0x221ac0
0024DB9C 08938652 mov      w8, #0x3498
0024DBA0 2801a072 movk     w8, #9, lsl #16
0024DBA4 13686878 ldrh     w19, [x0, x8]
0024DBA8 930e0034 cbz      w19, #0x24dd78
0024DBAC e86340f9 ldr      x8, [sp, #0xc0]
0024DBB0 f7031f2a mov      w23, wzr
0024DBB4 19839f52 mov      w25, #0xfc18
0024DBB8 f900a072 movk     w25, #7, lsl #16
0024DBBC d4528052 mov      w20, #0x296
0024DBC0 18090091 add      x24, x8, #2
0024DBC4 06000014 b        #0x24dbdc
0024DBC8 1f2003d5 nop      
0024DBCC 1f2003d5 nop      
0024DBD0 730600f1 subs     x19, x19, #1
0024DBD4 39230091 add      x25, x25, #8
0024DBD8 20090054 b.eq     #0x24dcfc
0024DBDC b94fff97 bl       #0x221ac0
0024DBE0 086879f8 ldr      x8, [x0, x25]
0024DBE4 e0c30791 add      x0, sp, #0x1f0
0024DBE8 e1031f2a mov      w1, wzr
0024DBEC e20314aa mov      x2, x20
0024DBF0 e8d700f9 str      x8, [sp, #0x1a8]
0024DBF4 57a10e94 bl       #0x5f6150
0024DBF8 e8a30791 add      x8, sp, #0x1e8
0024DBFC 354aff97 bl       #0x2204d0
0024DC00 e0f740f9 ldr      x0, [sp, #0x1e8]
0024DC04 e8830791 add      x8, sp, #0x1e0
0024DC08 e1a30691 add      x1, sp, #0x1a8
0024DC0C f9d9fe97 bl       #0x2043f0
0024DC10 e0f340f9 ldr      x0, [sp, #0x1e0]
0024DC14 5de2fe97 bl       #0x206588
0024DC18 c0050037 tbnz     w0, #0, #0x24dcd0
0024DC1C e8f340f9 ldr      x8, [sp, #0x1e0]
0024DC20 15810191 add      x21, x8, #0x60
0024DC24 e8030591 add      x8, sp, #0x140
0024DC28 ea52ff97 bl       #0x2227d0
0024DC2C e0a340f9 ldr      x0, [sp, #0x140]
0024DC30 e10315aa mov      x1, x21
0024DC34 24d3fe97 bl       #0x2028c4
0024DC38 f603002a mov      w22, w0
0024DC3C e0a340f9 ldr      x0, [sp, #0x140]
0024DC40 800000b4 cbz      x0, #0x24dc50
0024DC44 088c44f8 ldr      x8, [x0, #0x48]!
0024DC48 080d40f9 ldr      x8, [x8, #0x18]
0024DC4C 00013fd6 blr      x8
0024DC50 b6010037 tbnz     w22, #0, #0x24dc84
0024DC54 e8030591 add      x8, sp, #0x140
0024DC58 2a4aff97 bl       #0x220500
0024DC5C e0a340f9 ldr      x0, [sp, #0x140]
0024DC60 e10315aa mov      x1, x21
0024DC64 18d3fe97 bl       #0x2028c4
0024DC68 f503002a mov      w21, w0
0024DC6C e0a340f9 ldr      x0, [sp, #0x140]
0024DC70 800000b4 cbz      x0, #0x24dc80
0024DC74 088c44f8 ldr      x8, [x0, #0x48]!
0024DC78 080d40f9 ldr      x8, [x8, #0x18]
0024DC7C 00013fd6 blr      x8
0024DC80 95020036 tbz      w21, #0, #0x24dcd0
0024DC84 e8f340f9 ldr      x8, [sp, #0x1e0]
0024DC88 e0c30791 add      x0, sp, #0x1f0
0024DC8C f7060011 add      w23, w23, #1
0024DC90 012d40f9 ldr      x1, [x8, #0x58]
0024DC94 f5b80a94 bl       #0x4fc068
0024DC98 1f030039 strb     wzr, [x24]
0024DC9C f503002a mov      w21, w0
0024DCA0 e8f340f9 ldr      x8, [sp, #0x1e0]
0024DCA4 002d40f9 ldr      x0, [x8, #0x58]
0024DCA8 d7a50b94 bl       #0x537404
0024DCAC 15930078 sturh    w21, [x24, #9]
0024DCB0 162f0091 add      x22, x24, #0xb
0024DCB4 b53e0012 and      w21, w21, #0xffff
0024DCB8 001300f8 stur     x0, [x24, #1]
0024DCBC e1c30791 add      x1, sp, #0x1f0
0024DCC0 e00316aa mov      x0, x22
0024DCC4 e20315aa mov      x2, x21
0024DCC8 46a20e94 bl       #0x5f65e0
0024DCCC d802158b add      x24, x22, x21
0024DCD0 e0f340f9 ldr      x0, [sp, #0x1e0]
0024DCD4 800000b4 cbz      x0, #0x24dce4
0024DCD8 088c44f8 ldr      x8, [x0, #0x48]!
0024DCDC 080d40f9 ldr      x8, [x8, #0x18]
0024DCE0 00013fd6 blr      x8
0024DCE4 e0f740f9 ldr      x0, [sp, #0x1e8]
0024DCE8 40f7ffb4 cbz      x0, #0x24dbd0
0024DCEC 088c44f8 ldr      x8, [x0, #0x48]!
0024DCF0 080d40f9 ldr      x8, [x8, #0x18]
0024DCF4 00013fd6 blr      x8
0024DCF8 b6ffff17 b        #0x24dbd0
0024DCFC ff3e0072 tst      w23, #0xffff
0024DD00 40030054 b.eq     #0x24dd68
0024DD04 e98b40f9 ldr      x9, [sp, #0x110]
0024DD08 08609552 mov      w8, #0xab00
0024DD0C 8885a072 movk     w8, #0x42c, lsl #16
0024DD10 f66340f9 ldr      x22, [sp, #0xc0]
0024DD14 15fc8c52 mov      w21, #0x67e0
0024DD18 b506a072 movk     w21, #0x35, lsl #16
0024DD1C e1031f2a mov      w1, wzr
0024DD20 e20315aa mov      x2, x21
0024DD24 d7020079 strh     w23, [x22]
0024DD28 3401088b add      x20, x9, x8
0024DD2C 1303164b sub      w19, w24, w22
0024DD30 e00314aa mov      x0, x20
0024DD34 07a10e94 bl       #0x5f6150
0024DD38 637e4093 sxtw     x3, w19
0024DD3C e00314aa mov      x0, x20
0024DD40 01fc8c52 mov      w1, #0x67e0
0024DD44 a106a072 movk     w1, #0x35, lsl #16
0024DD48 e20316aa mov      x2, x22
0024DD4C e4031f2a mov      w4, wzr
0024DD50 e5031f2a mov      w5, wzr
0024DD54 d5200294 bl       #0x2d60a8
0024DD58 e00316aa mov      x0, x22
0024DD5C e10314aa mov      x1, x20
0024DD60 e20315aa mov      x2, x21
0024DD64 1fa20e94 bl       #0x5f65e0
0024DD68 564fff97 bl       #0x221ac0
0024DD6C 08938652 mov      w8, #0x3498
0024DD70 2801a072 movk     w8, #9, lsl #16
0024DD74 1f6828b8 str      wzr, [x0, x8]
0024DD78 5f1f0071 cmp      w26, #7
0024DD7C 81050054 b.ne     #0x24de2c
0024DD80 a82c0090 adrp     x8, #0x7e1000
0024DD84 08411891 add      x8, x8, #0x610
0024DD88 000140f9 ldr      x0, [x8]
0024DD8C e8c30791 add      x8, sp, #0x1f0
0024DD90 ab90fd97 bl       #0x1b203c
0024DD94 34008052 mov      w20, #1
0024DD98 93018052 mov      w19, #0xc
0024DD9C f7231291 add      x23, sp, #0x488
0024DDA0 58008052 mov      w24, #2
0024DDA4 06000014 b        #0x24ddbc
0024DDA8 1f2003d5 nop      
0024DDAC 1f2003d5 nop      
0024DDB0 94060011 add      w20, w20, #1
0024DDB4 9f0e1071 cmp      w20, #0x403
0024DDB8 e0030054 b.eq     #0x24de34
0024DDBC f5031f2a mov      w21, wzr
0024DDC0 04000014 b        #0x24ddd0
0024DDC4 b5060011 add      w21, w21, #1
0024DDC8 bf720071 cmp      w21, #0x1c
0024DDCC 20ffff54 b.eq     #0x24ddb0
0024DDD0 e003142a mov      w0, w20
0024DDD4 e103152a mov      w1, w21
0024DDD8 8e5fff97 bl       #0x225c10
0024DDDC f60300aa mov      x22, x0
0024DDE0 e003142a mov      w0, w20
0024DDE4 e103152a mov      w1, w21
0024DDE8 925fff97 bl       #0x225c30
0024DDEC d6fe0736 tbz      w22, #0, #0x24ddc4
0024DDF0 a0fe2737 tbnz     w0, #4, #0x24ddc4
0024DDF4 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024DDF8 e103142a mov      w1, w20
0024DDFC 9fccfd97 bl       #0x1c1078
0024DE00 083c0012 and      w8, w0, #0xffff
0024DE04 1f910171 cmp      w8, #0x64
0024DE08 e3fdff54 b.lo     #0x24ddc4
0024DE0C 9f3f1f71 cmp      w28, #0x7cf
0024DE10 a8fdff54 b.hi     #0x24ddc4
0024DE14 885fb39b umaddl   x8, w28, w19, x23
0024DE18 9c070011 add      w28, w28, #1
0024DE1C 140100b9 str      w20, [x8]
0024DE20 15090079 strh     w21, [x8, #4]
0024DE24 180900b9 str      w24, [x8, #8]
0024DE28 e7ffff17 b        #0x24ddc4
0024DE2C f48b40f9 ldr      x20, [sp, #0x110]
0024DE30 07000014 b        #0x24de4c
0024DE34 e0fb40f9 ldr      x0, [sp, #0x1f0]
0024DE38 f48b40f9 ldr      x20, [sp, #0x110]
0024DE3C 800000b4 cbz      x0, #0x24de4c
0024DE40 088c44f8 ldr      x8, [x0, #0x48]!
0024DE44 080d40f9 ldr      x8, [x8, #0x18]
0024DE48 00013fd6 blr      x8
0024DE4C e95b40f9 ldr      x9, [sp, #0xb0]
0024DE50 9f070071 cmp      w28, #1
0024DE54 8b050054 b.lt     #0x24df04
0024DE58 6a0f8052 mov      w10, #0x7b
0024DE5C 28989152 mov      w8, #0x8cc1
0024DE60 28a2a072 movk     w8, #0x511, lsl #16
0024DE64 2a010039 strb     w10, [x9]
0024DE68 e9231291 add      x9, sp, #0x488
0024DE6C f3031c2a mov      w19, w28
0024DE70 9402088b add      x20, x20, x8
0024DE74 37210091 add      x23, x9, #8
0024DE78 950c8052 mov      w21, #0x64
0024DE7C 161e00d0 adrp     x22, #0x60f000
0024DE80 d68a2991 add      x22, x22, #0xa62
0024DE84 e3825fb8 ldur     w3, [x23, #-8]
0024DE88 e0c30791 add      x0, sp, #0x1f0
0024DE8C e10315aa mov      x1, x21
0024DE90 e4c25f78 ldurh    w4, [x23, #-4]
0024DE94 e20316aa mov      x2, x22
0024DE98 ff5302b9 str      wzr, [sp, #0x250]
0024DE9C e5c640b8 ldr      w5, [x23], #0xc
0024DEA0 ff2701f9 str      xzr, [sp, #0x248]
0024DEA4 ff2301f9 str      xzr, [sp, #0x240]
0024DEA8 ff1f01f9 str      xzr, [sp, #0x238]
0024DEAC ff1b01f9 str      xzr, [sp, #0x230]
0024DEB0 ff1701f9 str      xzr, [sp, #0x228]
0024DEB4 ff1301f9 str      xzr, [sp, #0x220]
0024DEB8 ff0f01f9 str      xzr, [sp, #0x218]
0024DEBC ff0b01f9 str      xzr, [sp, #0x210]
0024DEC0 ff0701f9 str      xzr, [sp, #0x208]
0024DEC4 fffb00f9 str      xzr, [sp, #0x1f0]
0024DEC8 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024DECC 09a20e94 bl       #0x5f66f0
0024DED0 e1c30791 add      x1, sp, #0x1f0
0024DED4 e00314aa mov      x0, x20
0024DED8 e20315aa mov      x2, x21
0024DEDC 11a10e94 bl       #0x5f6320
0024DEE0 e0c30791 add      x0, sp, #0x1f0
0024DEE4 e3a00e94 bl       #0x5f6270
0024DEE8 9402008b add      x20, x20, x0
0024DEEC 730600f1 subs     x19, x19, #1
0024DEF0 a1fcff54 b.ne     #0x24de84
0024DEF4 a80f8052 mov      w8, #0x7d
0024DEF8 88f21f38 sturb    w8, [x20, #-1]
0024DEFC f48b40f9 ldr      x20, [sp, #0x110]
0024DF00 03000014 b        #0x24df0c
0024DF04 68af8f52 mov      w8, #0x7d7b
0024DF08 28010079 strh     w8, [x9]
0024DF0C 48170051 sub      w8, w26, #5
0024DF10 ff5302b9 str      wzr, [sp, #0x250]
0024DF14 1f050071 cmp      w8, #1
0024DF18 ff2701f9 str      xzr, [sp, #0x248]
0024DF1C ff2301f9 str      xzr, [sp, #0x240]
0024DF20 ff1f01f9 str      xzr, [sp, #0x238]
0024DF24 ff1b01f9 str      xzr, [sp, #0x230]
0024DF28 ff1701f9 str      xzr, [sp, #0x228]
0024DF2C ff1301f9 str      xzr, [sp, #0x220]
0024DF30 ff0f01f9 str      xzr, [sp, #0x218]
0024DF34 ff0b01f9 str      xzr, [sp, #0x210]
0024DF38 ff0701f9 str      xzr, [sp, #0x208]
0024DF3C fffb00f9 str      xzr, [sp, #0x1f0]
0024DF40 ffff1fa9 stp      xzr, xzr, [sp, #0x1f8]
0024DF44 28030054 b.hi     #0x24dfa8
0024DF48 5f170071 cmp      w26, #5
0024DF4C 08068052 mov      w8, #0x30
0024DF50 1805881a cinc     w24, w8, ne
0024DF54 a82c0090 adrp     x8, #0x7e1000
0024DF58 08011891 add      x8, x8, #0x600
0024DF5C 000140f9 ldr      x0, [x8]
0024DF60 e8030591 add      x8, sp, #0x140
0024DF64 5842fd97 bl       #0x19e8c4
0024DF68 f3a340f9 ldr      x19, [sp, #0x140]
0024DF6C b30000b4 cbz      x19, #0x24df80
0024DF70 e00313aa mov      x0, x19
0024DF74 088c44f8 ldr      x8, [x0, #0x48]!
0024DF78 080d40f9 ldr      x8, [x8, #0x18]
0024DF7C 00013fd6 blr      x8
0024DF80 687640f9 ldr      x8, [x19, #0xe8]
0024DF84 810c8052 mov      w1, #0x64
0024DF88 e0c30791 add      x0, sp, #0x1f0
0024DF8C e2030591 add      x2, sp, #0x140
0024DF90 03018052 mov      w3, #8
0024DF94 e8a300f9 str      x8, [sp, #0x140]
0024DF98 e4031f2a mov      w4, wzr
0024DF9C 25008052 mov      w5, #1
0024DFA0 42200294 bl       #0x2d60a8
0024DFA4 9f000014 b        #0x24e220
0024DFA8 5f2b0071 cmp      w26, #0xa
0024DFAC 81130054 b.ne     #0x24e21c
0024DFB0 e93b40f9 ldr      x9, [sp, #0x70]
0024DFB4 28409352 mov      w8, #0x9a01
0024DFB8 88a2a072 movk     w8, #0x514, lsl #16
0024DFBC f3031f2a mov      w19, wzr
0024DFC0 6a0f8052 mov      w10, #0x7b
0024DFC4 2a010039 strb     w10, [x9]
0024DFC8 9402088b add      x20, x20, x8
0024DFCC 151e00d0 adrp     x21, #0x60f000
0024DFD0 b5ea2991 add      x21, x21, #0xa7a
0024DFD4 36008052 mov      w22, #1
0024DFD8 371e0090 adrp     x23, #0x611000
0024DFDC f7fe3191 add      x23, x23, #0xc7f
0024DFE0 980c8052 mov      w24, #0x64
0024DFE4 f91d00b0 adrp     x25, #0x60a000
0024DFE8 395b3f91 add      x25, x25, #0xfd6
0024DFEC 14000014 b        #0x24e03c
0024DFF0 e4534379 ldrh     w4, [sp, #0x1a8]
0024DFF4 e0030591 add      x0, sp, #0x140
0024DFF8 e10318aa mov      x1, x24
0024DFFC e5574379 ldrh     w5, [sp, #0x1aa]
0024E000 e20315aa mov      x2, x21
0024E004 e303162a mov      w3, w22
0024E008 e65b4379 ldrh     w6, [sp, #0x1ac]
0024E00C b9a10e94 bl       #0x5f66f0
0024E010 e1030591 add      x1, sp, #0x140
0024E014 e00314aa mov      x0, x20
0024E018 e20318aa mov      x2, x24
0024E01C c1a00e94 bl       #0x5f6320
0024E020 e0030591 add      x0, sp, #0x140
0024E024 93a00e94 bl       #0x5f6270
0024E028 9402008b add      x20, x20, x0
0024E02C 33008052 mov      w19, #1
0024E030 d6060011 add      w22, w22, #1
0024E034 df0e1071 cmp      w22, #0x403
0024E038 20050054 b.eq     #0x24e0dc
0024E03C ff7f1da9 stp      xzr, xzr, [sp, #0x1d0]
0024E040 ffd700f9 str      xzr, [sp, #0x1a8]
0024E044 ffeb01b9 str      wzr, [sp, #0x1e8]
0024E048 ff7f1ca9 stp      xzr, xzr, [sp, #0x1c0]
0024E04C ff7f1ba9 stp      xzr, xzr, [sp, #0x1b0]
0024E050 b08bfe97 bl       #0x1f0f10
0024E054 e2a30691 add      x2, sp, #0x1a8
0024E058 e3a30791 add      x3, sp, #0x1e8
0024E05C e103162a mov      w1, w22
0024E060 5410fe97 bl       #0x1d21b0
0024E064 e8eb41b9 ldr      w8, [sp, #0x1e8]
0024E068 48feff34 cbz      w8, #0x24e030
0024E06C 1f0d0071 cmp      w8, #3
0024E070 ffa301b9 str      wzr, [sp, #0x1a0]
0024E074 ff7f19a9 stp      xzr, xzr, [sp, #0x190]
0024E078 ff7f18a9 stp      xzr, xzr, [sp, #0x180]
0024E07C ff7f17a9 stp      xzr, xzr, [sp, #0x170]
0024E080 ff7f16a9 stp      xzr, xzr, [sp, #0x160]
0024E084 ff7f15a9 stp      xzr, xzr, [sp, #0x150]
0024E088 ff7f14a9 stp      xzr, xzr, [sp, #0x140]
0024E08C 20fbff54 b.eq     #0x24dff0
0024E090 1f090071 cmp      w8, #2
0024E094 40010054 b.eq     #0x24e0bc
0024E098 1f050071 cmp      w8, #1
0024E09C a1fcff54 b.ne     #0x24e030
0024E0A0 e4534379 ldrh     w4, [sp, #0x1a8]
0024E0A4 e0030591 add      x0, sp, #0x140
0024E0A8 e10318aa mov      x1, x24
0024E0AC e20319aa mov      x2, x25
0024E0B0 e303162a mov      w3, w22
0024E0B4 8fa10e94 bl       #0x5f66f0
0024E0B8 d6ffff17 b        #0x24e010
0024E0BC e4534379 ldrh     w4, [sp, #0x1a8]
0024E0C0 e0030591 add      x0, sp, #0x140
0024E0C4 e10318aa mov      x1, x24
0024E0C8 e5574379 ldrh     w5, [sp, #0x1aa]
0024E0CC e20317aa mov      x2, x23
0024E0D0 e303162a mov      w3, w22
0024E0D4 87a10e94 bl       #0x5f66f0
0024E0D8 ceffff17 b        #0x24e010
0024E0DC a80f8052 mov      w8, #0x7d
0024E0E0 53090036 tbz      w19, #0, #0x24e208
0024E0E4 88f21f38 sturb    w8, [x20, #-1]
0024E0E8 882a00b0 adrp     x8, #0x79f000
0024E0EC f93b40f9 ldr      x25, [sp, #0x70]
0024E0F0 08ed41f9 ldr      x8, [x8, #0x3d8]
0024E0F4 16e88252 mov      w22, #0x1740
0024E0F8 9600a072 movk     w22, #4, lsl #16
0024E0FC e10316aa mov      x1, x22
0024E100 02018052 mov      w2, #8
0024E104 15a88152 mov      w21, #0xd40
0024E108 7500a072 movk     w21, #3, lsl #16
0024E10C 9302194b sub      w19, w20, w25
0024E110 080140f9 ldr      x8, [x8]
0024E114 145541f9 ldr      x20, [x8, #0x2a8]
0024E118 880240f9 ldr      x8, [x20]
0024E11C e00314aa mov      x0, x20
0024E120 080940f9 ldr      x8, [x8, #0x10]
0024E124 00013fd6 blr      x8
0024E128 880240f9 ldr      x8, [x20]
0024E12C f70300aa mov      x23, x0
0024E130 e00314aa mov      x0, x20
0024E134 e10315aa mov      x1, x21
0024E138 02018052 mov      w2, #8
0024E13C 080940f9 ldr      x8, [x8, #0x10]
0024E140 00013fd6 blr      x8
0024E144 f80300aa mov      x24, x0
0024E148 647e4093 sxtw     x4, w19
0024E14C ffa300f9 str      xzr, [sp, #0x140]
0024E150 e0030591 add      x0, sp, #0x140
0024E154 e10318aa mov      x1, x24
0024E158 e20315aa mov      x2, x21
0024E15C e30319aa mov      x3, x25
0024E160 e50317aa mov      x5, x23
0024E164 e60316aa mov      x6, x22
0024E168 f30319aa mov      x19, x25
0024E16C d9a20e94 bl       #0x5f6cd0
0024E170 e0020036 tbz      w0, #0, #0x24e1cc
0024E174 e98b40f9 ldr      x9, [sp, #0x110]
0024E178 08609552 mov      w8, #0xab00
0024E17C 8885a072 movk     w8, #0x42c, lsl #16
0024E180 02fc8c52 mov      w2, #0x67e0
0024E184 a206a072 movk     w2, #0x35, lsl #16
0024E188 e1031f2a mov      w1, wzr
0024E18C 3901088b add      x25, x9, x8
0024E190 e00319aa mov      x0, x25
0024E194 ef9f0e94 bl       #0x5f6150
0024E198 e3a340f9 ldr      x3, [sp, #0x140]
0024E19C e00319aa mov      x0, x25
0024E1A0 01fc8c52 mov      w1, #0x67e0
0024E1A4 a106a072 movk     w1, #0x35, lsl #16
0024E1A8 e20318aa mov      x2, x24
0024E1AC e4031f2a mov      w4, wzr
0024E1B0 e5031f2a mov      w5, wzr
0024E1B4 bd1f0294 bl       #0x2d60a8
0024E1B8 02a88152 mov      w2, #0xd40
0024E1BC 6200a072 movk     w2, #3, lsl #16
0024E1C0 e00313aa mov      x0, x19
0024E1C4 e10319aa mov      x1, x25
0024E1C8 06a10e94 bl       #0x5f65e0
0024E1CC 880240f9 ldr      x8, [x20]
0024E1D0 e00314aa mov      x0, x20
0024E1D4 e10317aa mov      x1, x23
0024E1D8 e20316aa mov      x2, x22
0024E1DC 03018052 mov      w3, #8
0024E1E0 080d40f9 ldr      x8, [x8, #0x18]
0024E1E4 00013fd6 blr      x8
0024E1E8 880240f9 ldr      x8, [x20]
0024E1EC e00314aa mov      x0, x20
0024E1F0 e10318aa mov      x1, x24
0024E1F4 e20315aa mov      x2, x21
0024E1F8 03018052 mov      w3, #8
0024E1FC 080d40f9 ldr      x8, [x8, #0x18]
0024E200 00013fd6 blr      x8
0024E204 06000014 b        #0x24e21c
0024E208 e03b40f9 ldr      x0, [sp, #0x70]
0024E20C 02a88152 mov      w2, #0xd40
0024E210 6200a072 movk     w2, #3, lsl #16
0024E214 e1031f2a mov      w1, wzr
0024E218 ce9f0e94 bl       #0x5f6150
0024E21C f8031f2a mov      w24, wzr
0024E220 14688952 mov      w20, #0x4b40
0024E224 9409a072 movk     w20, #0x4c, lsl #16
0024E228 7665ff97 bl       #0x227800
0024E22C 254eff97 bl       #0x221ac0
0024E230 c8469352 mov      w8, #0x9a36
0024E234 fa8b40f9 ldr      x26, [sp, #0x110]
0024E238 13686838 ldrb     w19, [x0, x8]
0024E23C 08908252 mov      w8, #0x1480
0024E240 8872a072 movk     w8, #0x394, lsl #16
0024E244 5503088b add      x21, x26, x8
0024E248 f3000034 cbz      w19, #0x24e264
0024E24C e11d00f0 adrp     x1, #0x60d000
0024E250 21603191 add      x1, x1, #0xc58
0024E254 e00315aa mov      x0, x21
0024E258 e20314aa mov      x2, x20
0024E25C 31a00e94 bl       #0x5f6320
0024E260 28000014 b        #0x24e300
0024E264 08c48b52 mov      w8, #0x5e20
0024E268 c895a072 movk     w8, #0x4ae, lsl #16
0024E26C 09508952 mov      w9, #0x4a80
0024E270 49a0a072 movk     w9, #0x502, lsl #16
0024E274 5603088b add      x22, x26, x8
0024E278 08a48a52 mov      w8, #0x5520
0024E27C 288ea072 movk     w8, #0x471, lsl #16
0024E280 5703098b add      x23, x26, x9
0024E284 5903088b add      x25, x26, x8
0024E288 a270f897 bl       #0x6a510
0024E28C 0b409352 mov      w11, #0x9a00
0024E290 8ba2a072 movk     w11, #0x514, lsl #16
0024E294 e57740f9 ldr      x5, [sp, #0xe8]
0024E298 4b030b8b add      x11, x26, x11
0024E29C 0a989152 mov      w10, #0x8cc0
0024E2A0 2aa2a072 movk     w10, #0x511, lsl #16
0024E2A4 eb2700f9 str      x11, [sp, #0x48]
0024E2A8 eb6f40b9 ldr      w11, [sp, #0x6c]
0024E2AC 4a030a8b add      x10, x26, x10
0024E2B0 08549c52 mov      w8, #0xe2a0
0024E2B4 8899a072 movk     w8, #0x4cc, lsl #16
0024E2B8 f83b00b9 str      w24, [sp, #0x38]
0024E2BC 4803088b add      x8, x26, x8
0024E2C0 091c0012 and      w9, w0, #0xff
0024E2C4 e91300b9 str      w9, [sp, #0x10]
0024E2C8 e21d00d0 adrp     x2, #0x60c000
0024E2CC 42601891 add      x2, x2, #0x618
0024E2D0 eb4300b9 str      w11, [sp, #0x40]
0024E2D4 ebc30791 add      x11, sp, #0x1f0
0024E2D8 e00315aa mov      x0, x21
0024E2DC e10314aa mov      x1, x20
0024E2E0 eaaf02a9 stp      x10, x11, [sp, #0x28]
0024E2E4 e60316aa mov      x6, x22
0024E2E8 e4ab4da9 ldp      x4, x10, [sp, #0xd8]
0024E2EC e70317aa mov      x7, x23
0024E2F0 e8ab01a9 stp      x8, x10, [sp, #0x18]
0024E2F4 e80f4fa9 ldp      x8, x3, [sp, #0xf0]
0024E2F8 f92300a9 stp      x25, x8, [sp]
0024E2FC fda00e94 bl       #0x5f66f0
0024E300 f88340f9 ldr      x24, [sp, #0x100]
0024E304 08908252 mov      w8, #0x1480
0024E308 8872a072 movk     w8, #0x394, lsl #16
0024E30C 5503088b add      x21, x26, x8
0024E310 02688952 mov      w2, #0x4b40
0024E314 8209a072 movk     w2, #0x4c, lsl #16
0024E318 e0031aaa mov      x0, x26
0024E31C e10315aa mov      x1, x21
0024E320 601cff97 bl       #0x2154a0
0024E324 08f88b52 mov      w8, #0x5fc0
0024E328 087ca072 movk     w8, #0x3e0, lsl #16
0024E32C 5603088b add      x22, x26, x8
0024E330 e44dff97 bl       #0x221ac0
0024E334 f70300aa mov      x23, x0
0024E338 aefcfe97 bl       #0x20d5f0
0024E33C 28548252 mov      w8, #0x12a1
0024E340 421e00b0 adrp     x2, #0x617000
0024E344 42383891 add      x2, x2, #0xe0e
0024E348 0400088b add      x4, x0, x8
0024E34C e00316aa mov      x0, x22
0024E350 e10314aa mov      x1, x20
0024E354 e30317aa mov      x3, x23
0024E358 e50315aa mov      x5, x21
0024E35C e5a00e94 bl       #0x5f66f0
0024E360 a8008052 mov      w8, #5
0024E364 e0031aaa mov      x0, x26
0024E368 e84301b9 str      w8, [sp, #0x140]
0024E36C a82a0090 adrp     x8, #0x7a2000
0024E370 e10316aa mov      x1, x22
0024E374 082145f9 ldr      x8, [x8, #0xa40]
0024E378 ffff17a9 stp      xzr, xzr, [sp, #0x178]
0024E37C 092940a9 ldp      x9, x10, [x8]
0024E380 e9ab14a9 stp      x9, x10, [sp, #0x148]
0024E384 092941a9 ldp      x9, x10, [x8, #0x10]
0024E388 081140f9 ldr      x8, [x8, #0x20]
0024E38C e9ab15a9 stp      x9, x10, [sp, #0x158]
0024E390 e8ff16a9 stp      x8, xzr, [sp, #0x168]
0024E394 3735ff97 bl       #0x21b870
0024E398 ca4dff97 bl       #0x221ac0
0024E39C 88a58652 mov      w8, #0x352c
0024E3A0 2803a072 movk     w8, #0x19, lsl #16
0024E3A4 e15f40f9 ldr      x1, [sp, #0xb8]
0024E3A8 096868b8 ldr      w9, [x0, x8]
0024E3AC 0a848452 mov      w10, #0x2420
0024E3B0 ea5fa072 movk     w10, #0x2ff, lsl #16
0024E3B4 54030a8b add      x20, x26, x10
0024E3B8 e3030591 add      x3, sp, #0x140
0024E3BC 29050011 add      w9, w9, #1
0024E3C0 096828b8 str      w9, [x0, x8]
0024E3C4 48336791 add      x8, x26, #0x9cc, lsl #12
0024E3C8 e00314aa mov      x0, x20
0024E3CC 02812891 add      x2, x8, #0xa20
0024E3D0 78f40b94 bl       #0x54b5b0
0024E3D4 c0010036 tbz      w0, #0, #0x24e40c
0024E3D8 e89740f9 ldr      x8, [sp, #0x128]
0024E3DC 083d0012 and      w8, w8, #0xffff
0024E3E0 e9d340b9 ldr      w9, [sp, #0xd0]
0024E3E4 f44f40f9 ldr      x20, [sp, #0x98]
0024E3E8 29011b2a orr      w9, w9, w27
0024E3EC 0801092a orr      w8, w8, w9
0024E3F0 29008052 mov      w9, #1
0024E3F4 890e00b9 str      w9, [x20, #0xc]
0024E3F8 68020034 cbz      w8, #0x24e444
0024E3FC 53020035 cbnz     w19, #0x24e444
0024E400 e98b40f9 ldr      x9, [sp, #0x110]
0024E404 e8008052 mov      w8, #7
0024E408 0d000014 b        #0x24e43c
0024E40C e00314aa mov      x0, x20
0024E410 b5f50b94 bl       #0x54bae4
0024E414 080040b9 ldr      w8, [x0]
0024E418 201e00f0 adrp     x0, #0x615000
0024E41C 006c0791 add      x0, x0, #0x1db
0024E420 e3031faa mov      x3, xzr
0024E424 01550012 and      w1, w8, #0x3fffff
0024E428 e84b40f9 ldr      x8, [sp, #0x90]
0024E42C 020140b9 ldr      w2, [x8]
0024E430 1c47ff97 bl       #0x2200a0
0024E434 e98b40f9 ldr      x9, [sp, #0x110]
0024E438 28018052 mov      w8, #9
0024E43C e0031f2a mov      w0, wzr
0024E440 1a000014 b        #0x24e4a8
0024E444 335eff97 bl       #0x225d10
0024E448 e98b40f9 ldr      x9, [sp, #0x110]
0024E44C a0000036 tbz      w0, #0, #0x24e460
0024E450 c8008052 mov      w8, #6
0024E454 880e00b9 str      w8, [x20, #0xc]
0024E458 e8008052 mov      w8, #7
0024E45C f8ffff17 b        #0x24e43c
0024E460 28008052 mov      w8, #1
0024E464 08cb1279 strh     w8, [x24, #0x964]
0024E468 08c48952 mov      w8, #0x4e20
0024E46C 880a00b9 str      w8, [x20, #8]
0024E470 48018052 mov      w8, #0xa
0024E474 f2ffff17 b        #0x24e43c
0024E478 e00314aa mov      x0, x20
0024E47C 9af50b94 bl       #0x54bae4
0024E480 080040b9 ldr      w8, [x0]
0024E484 201e0090 adrp     x0, #0x612000
0024E488 00942891 add      x0, x0, #0xa25
0024E48C 420340b9 ldr      w2, [x26]
0024E490 01550012 and      w1, w8, #0x3fffff
0024E494 e3031faa mov      x3, xzr
0024E498 0247ff97 bl       #0x2200a0
0024E49C e0031f2a mov      w0, wzr
0024E4A0 28018052 mov      w8, #9
0024E4A4 e98b40f9 ldr      x9, [sp, #0x110]
0024E4A8 281500b9 str      w8, [x9, #0x14]
0024E4AC ff1b4091 add      sp, sp, #6, lsl #12
0024E4B0 ff030e91 add      sp, sp, #0x380
0024E4B4 f44f45a9 ldp      x20, x19, [sp, #0x50]
0024E4B8 f65744a9 ldp      x22, x21, [sp, #0x40]
0024E4BC f85f43a9 ldp      x24, x23, [sp, #0x30]
0024E4C0 fa6742a9 ldp      x26, x25, [sp, #0x20]
0024E4C4 fc6f41a9 ldp      x28, x27, [sp, #0x10]
0024E4C8 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0024E4CC c0035fd6 ret      
0024E4D0 280f40b9 ldr      w8, [x25, #0xc]
0024E4D4 08050011 add      w8, w8, #1
0024E4D8 1f1d0071 cmp      w8, #7
0024E4DC 280f00b9 str      w8, [x25, #0xc]
0024E4E0 e1000054 b.ne     #0x24e4fc
0024E4E4 774dff97 bl       #0x221ac0
0024E4E8 c8469352 mov      w8, #0x9a36
0024E4EC 08686838 ldrb     w8, [x0, x8]
0024E4F0 c8000034 cbz      w8, #0x24e508
0024E4F4 df4fff97 bl       #0x222470
0024E4F8 05000014 b        #0x24e50c
0024E4FC e0031f2a mov      w0, wzr
0024E500 681600b9 str      w8, [x19, #0x14]
0024E504 eaffff17 b        #0x24e4ac
0024E508 5a51ff97 bl       #0x222a70
0024E50C 20008052 mov      w0, #1
0024E510 ccf8fe97 bl       #0x20c840
0024E514 08018052 mov      w8, #8
0024E518 e0031f2a mov      w0, wzr
0024E51C 681600b9 str      w8, [x19, #0x14]
0024E520 e3ffff17 b        #0x24e4ac
~~~
### 0x250150 (234 slots)
~~~asm
00250150 081440b9 ldr      w8, [x0, #0x14]
00250154 1f0d0071 cmp      w8, #3
00250158 880b0054 b.hi     #0x2502c8
0025015C ff8306d1 sub      sp, sp, #0x1a0
00250160 fd7b15a9 stp      x29, x30, [sp, #0x150]
00250164 fc6716a9 stp      x28, x25, [sp, #0x160]
00250168 f85f17a9 stp      x24, x23, [sp, #0x170]
0025016C f65718a9 stp      x22, x21, [sp, #0x180]
00250170 f44f19a9 stp      x20, x19, [sp, #0x190]
00250174 fd430591 add      x29, sp, #0x150
00250178 098e8252 mov      w9, #0x1470
0025017C 8972a072 movk     w9, #0x394, lsl #16
00250180 f30300aa mov      x19, x0
00250184 1500098b add      x21, x0, x9
00250188 09858452 mov      w9, #0x2428
0025018C e95fa072 movk     w9, #0x2ff, lsl #16
00250190 1900098b add      x25, x0, x9
00250194 291f0090 adrp     x9, #0x634000
00250198 29393491 add      x9, x9, #0xd0e
0025019C 8a000010 adr      x10, #0x2501ac
002501A0 2b696838 ldrb     w11, [x9, x8]
002501A4 4a090b8b add      x10, x10, x11, lsl #2
002501A8 40011fd6 br       x10
002501AC 4546ff97 bl       #0x221ac0
002501B0 88b39552 mov      w8, #0xad9c
002501B4 2803a072 movk     w8, #0x19, lsl #16
002501B8 09028052 mov      w9, #0x10
002501BC 096828b8 str      w9, [x0, x8]
002501C0 e11d00b0 adrp     x1, #0x60d000
002501C4 216c3191 add      x1, x1, #0xc5b
002501C8 e0230091 add      x0, sp, #8
002501CC 045eff97 bl       #0x2279dc
002501D0 e0230091 add      x0, sp, #8
002501D4 195eff97 bl       #0x227a38
002501D8 08908252 mov      w8, #0x1480
002501DC 8872a072 movk     w8, #0x394, lsl #16
002501E0 16249452 mov      w22, #0xa120
002501E4 f600a072 movk     w22, #7, lsl #16
002501E8 7502088b add      x21, x19, x8
002501EC bf0a0039 strb     wzr, [x21, #2]
002501F0 f40300aa mov      x20, x0
002501F4 68af8f52 mov      w8, #0x7d7b
002501F8 a8020079 strh     w8, [x21]
002501FC e00313aa mov      x0, x19
00250200 e10315aa mov      x1, x21
00250204 e203162a mov      w2, w22
00250208 a614ff97 bl       #0x2154a0
0025020C 08b49652 mov      w8, #0xb5a0
00250210 6873a072 movk     w8, #0x39b, lsl #16
00250214 7702088b add      x23, x19, x8
00250218 2a46ff97 bl       #0x221ac0
0025021C f80300aa mov      x24, x0
00250220 f4f4fe97 bl       #0x20d5f0
00250224 28548252 mov      w8, #0x12a1
00250228 221e00f0 adrp     x2, #0x617000
0025022C 42383891 add      x2, x2, #0xe0e
00250230 0400088b add      x4, x0, x8
00250234 e00317aa mov      x0, x23
00250238 e10316aa mov      x1, x22
0025023C e30318aa mov      x3, x24
00250240 e50315aa mov      x5, x21
00250244 2b990e94 bl       #0x5f66f0
00250248 a8008052 mov      w8, #5
0025024C e00313aa mov      x0, x19
00250250 a8831bb8 stur     w8, [x29, #-0x48]
00250254 882a00d0 adrp     x8, #0x7a2000
00250258 e10317aa mov      x1, x23
0025025C 082145f9 ldr      x8, [x8, #0xa40]
00250260 bf7f3fa9 stp      xzr, xzr, [x29, #-0x10]
00250264 092940a9 ldp      x9, x10, [x8]
00250268 a92b3ca9 stp      x9, x10, [x29, #-0x40]
0025026C 092941a9 ldp      x9, x10, [x8, #0x10]
00250270 081140f9 ldr      x8, [x8, #0x20]
00250274 a92b3da9 stp      x9, x10, [x29, #-0x30]
00250278 a87f3ea9 stp      x8, xzr, [x29, #-0x20]
0025027C 7d2dff97 bl       #0x21b870
00250280 1046ff97 bl       #0x221ac0
00250284 88a58652 mov      w8, #0x352c
00250288 2803a072 movk     w8, #0x19, lsl #16
0025028C 0a848452 mov      w10, #0x2420
00250290 ea5fa072 movk     w10, #0x2ff, lsl #16
00250294 096868b8 ldr      w9, [x0, x8]
00250298 75020a8b add      x21, x19, x10
0025029C a32301d1 sub      x3, x29, #0x48
002502A0 e10314aa mov      x1, x20
002502A4 29050011 add      w9, w9, #1
002502A8 096828b8 str      w9, [x0, x8]
002502AC 68326791 add      x8, x19, #0x9cc, lsl #12
002502B0 e00315aa mov      x0, x21
002502B4 02812891 add      x2, x8, #0xa20
002502B8 beec0b94 bl       #0x54b5b0
002502BC c0040036 tbz      w0, #0, #0x250354
002502C0 28008052 mov      w8, #1
002502C4 2e000014 b        #0x25037c
002502C8 e0031f2a mov      w0, wzr
002502CC c0035fd6 ret      
002502D0 08848452 mov      w8, #0x2420
002502D4 e85fa072 movk     w8, #0x2ff, lsl #16
002502D8 7402088b add      x20, x19, x8
002502DC e00314aa mov      x0, x20
002502E0 dbed0b94 bl       #0x54ba4c
002502E4 20050036 tbz      w0, #0, #0x250388
002502E8 e0031f2a mov      w0, wzr
002502EC 68000014 b        #0x25048c
002502F0 a80240b9 ldr      w8, [x21]
002502F4 e8060034 cbz      w8, #0x2503d0
002502F8 e003082a mov      w0, w8
002502FC 618bff97 bl       #0x233080
00250300 680e40f9 ldr      x8, [x19, #0x18]
00250304 bf0a00b9 str      wzr, [x21, #8]
00250308 480100b4 cbz      x8, #0x250330
0025030C 08510191 add      x8, x8, #0x54
00250310 1ffddf88 ldar     wzr, [x8]
00250314 680e40f9 ldr      x8, [x19, #0x18]
00250318 c80000b4 cbz      x8, #0x250330
0025031C 08510191 add      x8, x8, #0x54
00250320 08fddf88 ldar     w8, [x8]
00250324 691240f9 ldr      x9, [x19, #0x20]
00250328 1f010071 cmp      w8, #0
0025032C e803899a csel     x8, xzr, x9, eq
00250330 69c20091 add      x9, x19, #0x30
00250334 1f0100f1 cmp      x8, #0
00250338 ff030039 strb     wzr, [sp]
0025033C 2001889a csel     x0, x9, x8, eq
00250340 e1030091 mov      x1, sp
00250344 080040f9 ldr      x8, [x0]
00250348 080540f9 ldr      x8, [x8, #8]
0025034C 00013fd6 blr      x8
00250350 4e000014 b        #0x250488
00250354 e00315aa mov      x0, x21
00250358 e3ed0b94 bl       #0x54bae4
0025035C 080040b9 ldr      w8, [x0]
00250360 201e00f0 adrp     x0, #0x617000
00250364 00a41291 add      x0, x0, #0x4a9
00250368 220340b9 ldr      w2, [x25]
0025036C e3031faa mov      x3, xzr
00250370 01550012 and      w1, w8, #0x3fffff
00250374 4b3fff97 bl       #0x2200a0
00250378 68008052 mov      w8, #3
0025037C e0031f2a mov      w0, wzr
00250380 681600b9 str      w8, [x19, #0x14]
00250384 42000014 b        #0x25048c
00250388 e00314aa mov      x0, x20
0025038C cbed0b94 bl       #0x54bab8
00250390 60030036 tbz      w0, #0, #0x2503fc
00250394 e00314aa mov      x0, x20
00250398 ceed0b94 bl       #0x54bad0
0025039C 600800b4 cbz      x0, #0x2504a8
002503A0 e00313aa mov      x0, x19
002503A4 55000094 bl       #0x2504f8
002503A8 a00a00b9 str      w0, [x21, #8]
002503AC 00090035 cbnz     w0, #0x2504cc
002503B0 a80640b9 ldr      w8, [x21, #4]
002503B4 c8080035 cbnz     w8, #0x2504cc
002503B8 a90e40b9 ldr      w9, [x21, #0xc]
002503BC 28050011 add      w8, w9, #1
002503C0 a80e00b9 str      w8, [x21, #0xc]
002503C4 c9fdff35 cbnz     w9, #0x25037c
002503C8 aa49ff97 bl       #0x222a70
002503CC 1e000014 b        #0x250444
002503D0 a00a40b9 ldr      w0, [x21, #8]
002503D4 c0000034 cbz      w0, #0x2503ec
002503D8 7fcfff97 bl       #0x2441d4
002503DC 1f400071 cmp      w0, #0x10
002503E0 a1010054 b.ne     #0x250414
002503E4 a80240b9 ldr      w8, [x21]
002503E8 88f8ff35 cbnz     w8, #0x2502f8
002503EC a00640b9 ldr      w0, [x21, #4]
002503F0 60070034 cbz      w0, #0x2504dc
002503F4 ef8bff97 bl       #0x2333b0
002503F8 c2ffff17 b        #0x250300
002503FC e00314aa mov      x0, x20
00250400 b9ed0b94 bl       #0x54bae4
00250404 080040b9 ldr      w8, [x0]
00250408 c01d00f0 adrp     x0, #0x60b000
0025040C 00ec2a91 add      x0, x0, #0xabb
00250410 2b000014 b        #0x2504bc
00250414 f403002a mov      w20, w0
00250418 bf0a00b9 str      wzr, [x21, #8]
0025041C a945ff97 bl       #0x221ac0
00250420 88b39552 mov      w8, #0xad9c
00250424 2803a072 movk     w8, #0x19, lsl #16
00250428 146828b8 str      w20, [x0, x8]
0025042C a545ff97 bl       #0x221ac0
00250430 88a58652 mov      w8, #0x352c
00250434 2803a072 movk     w8, #0x19, lsl #16
00250438 096868b8 ldr      w9, [x0, x8]
0025043C 29050051 sub      w9, w9, #1
00250440 096828b8 str      w9, [x0, x8]
00250444 680e40f9 ldr      x8, [x19, #0x18]
00250448 480100b4 cbz      x8, #0x250470
0025044C 08510191 add      x8, x8, #0x54
00250450 1ffddf88 ldar     wzr, [x8]
00250454 680e40f9 ldr      x8, [x19, #0x18]
00250458 c80000b4 cbz      x8, #0x250470
0025045C 08510191 add      x8, x8, #0x54
00250460 08fddf88 ldar     w8, [x8]
00250464 691240f9 ldr      x9, [x19, #0x20]
00250468 1f010071 cmp      w8, #0
0025046C e803899a csel     x8, xzr, x9, eq
00250470 69c20091 add      x9, x19, #0x30
00250474 1f0100f1 cmp      x8, #0
00250478 2001889a csel     x0, x9, x8, eq
0025047C 080040f9 ldr      x8, [x0]
00250480 080140f9 ldr      x8, [x8]
00250484 00013fd6 blr      x8
00250488 20008052 mov      w0, #1
0025048C f44f59a9 ldp      x20, x19, [sp, #0x190]
00250490 f65758a9 ldp      x22, x21, [sp, #0x180]
00250494 f85f57a9 ldp      x24, x23, [sp, #0x170]
00250498 fc6756a9 ldp      x28, x25, [sp, #0x160]
0025049C fd7b55a9 ldp      x29, x30, [sp, #0x150]
002504A0 ff830691 add      sp, sp, #0x1a0
002504A4 c0035fd6 ret      
002504A8 e00314aa mov      x0, x20
002504AC 8eed0b94 bl       #0x54bae4
002504B0 080040b9 ldr      w8, [x0]
002504B4 201e00d0 adrp     x0, #0x616000
002504B8 00442d91 add      x0, x0, #0xb51
002504BC 220340b9 ldr      w2, [x25]
002504C0 01550012 and      w1, w8, #0x3fffff
002504C4 e3031faa mov      x3, xzr
002504C8 f63eff97 bl       #0x2200a0
002504CC 68008052 mov      w8, #3
002504D0 e0031f2a mov      w0, wzr
002504D4 681600b9 str      w8, [x19, #0x14]
002504D8 edffff17 b        #0x25048c
002504DC 08178e52 mov      w8, #0x70b8
002504E0 4862a072 movk     w8, #0x312, lsl #16
002504E4 a00a40b9 ldr      w0, [x21, #8]
002504E8 6802088b add      x8, x19, x8
002504EC 010140b9 ldr      w1, [x8]
002504F0 fc8aff97 bl       #0x2330e0
002504F4 83ffff17 b        #0x250300
~~~
### 0x252cc4 (684 slots)
~~~asm
00252CC4 081440b9 ldr      w8, [x0, #0x14]
00252CC8 1f290071 cmp      w8, #0xa
00252CCC a8030054 b.hi     #0x252d40
00252CD0 e923b96d stp      d9, d8, [sp, #-0x70]!
00252CD4 fd7b01a9 stp      x29, x30, [sp, #0x10]
00252CD8 fd430091 add      x29, sp, #0x10
00252CDC fc1300f9 str      x28, [sp, #0x20]
00252CE0 fa6703a9 stp      x26, x25, [sp, #0x30]
00252CE4 f85f04a9 stp      x24, x23, [sp, #0x40]
00252CE8 f65705a9 stp      x22, x21, [sp, #0x50]
00252CEC f44f06a9 stp      x20, x19, [sp, #0x60]
00252CF0 ff4306d1 sub      sp, sp, #0x190
00252CF4 891f9352 mov      w9, #0x98fc
00252CF8 4976a072 movk     w9, #0x3b2, lsl #16
00252CFC 0a858452 mov      w10, #0x2428
00252D00 ea5fa072 movk     w10, #0x2ff, lsl #16
00252D04 1700098b add      x23, x0, x9
00252D08 098e8252 mov      w9, #0x1470
00252D0C 8972a072 movk     w9, #0x394, lsl #16
00252D10 1900098b add      x25, x0, x9
00252D14 091f00d0 adrp     x9, #0x634000
00252D18 29513691 add      x9, x9, #0xd94
00252D1C cb000010 adr      x11, #0x252d34
00252D20 2c796878 ldrh     w12, [x9, x8, lsl #1]
00252D24 6b090c8b add      x11, x11, x12, lsl #2
00252D28 f30300aa mov      x19, x0
00252D2C 1a000a8b add      x26, x0, x10
00252D30 60011fd6 br       x11
00252D34 e0031f2a mov      w0, wzr
00252D38 28008052 mov      w8, #1
00252D3C 84020014 b        #0x25374c
00252D40 e0031f2a mov      w0, wzr
00252D44 c0035fd6 ret      
00252D48 88fb9e52 mov      w8, #0xf7dc
00252D4C 4875a072 movk     w8, #0x3aa, lsl #16
00252D50 411e0090 adrp     x1, #0x61a000
00252D54 21403491 add      x1, x1, #0xd10
00252D58 e0230191 add      x0, sp, #0x48
00252D5C 7502088b add      x21, x19, x8
00252D60 1f53ff97 bl       #0x2279dc
00252D64 e0230191 add      x0, sp, #0x48
00252D68 3453ff97 bl       #0x227a38
00252D6C f40300aa mov      x20, x0
00252D70 944bff97 bl       #0x225bc0
00252D74 172c40b9 ldr      w23, [x0, #0x2c]
00252D78 523bff97 bl       #0x221ac0
00252D7C 88099652 mov      w8, #0xb04c
00252D80 e800a072 movk     w8, #7, lsl #16
00252D84 006868bc ldr      s0, [x0, x8]
00252D88 e003172a mov      w0, w23
00252D8C 08d8215e scvtf    s8, s0
00252D90 944bff97 bl       #0x225be0
00252D94 0008281e fmul     s0, s0, s8
00252D98 ff260071 cmp      w23, #9
00252D9C 1600381e fcvtzs   w22, s0
00252DA0 28240054 b.hi     #0x253224
00252DA4 081f00d0 adrp     x8, #0x634000
00252DA8 08d13691 add      x8, x8, #0xdb4
00252DAC e97e4093 sxtw     x9, w23
00252DB0 17796978 ldrh     w23, [x8, x9, lsl #1]
00252DB4 1d010014 b        #0x253228
00252DB8 20008052 mov      w0, #1
00252DBC 314cff97 bl       #0x225e80
00252DC0 e0031f2a mov      w0, wzr
00252DC4 68008052 mov      w8, #3
00252DC8 61020014 b        #0x25374c
00252DCC 954dff97 bl       #0x226420
00252DD0 004c0034 cbz      w0, #0x253750
00252DD4 1f080071 cmp      w0, #2
00252DD8 61340054 b.ne     #0x253464
00252DDC 28008052 mov      w8, #1
00252DE0 e0031f2a mov      w0, wzr
00252DE4 e8020079 strh     w8, [x23]
00252DE8 cd010014 b        #0x25351c
00252DEC ed4eff97 bl       #0x2269a0
00252DF0 a0190037 tbnz     w0, #0, #0x253124
00252DF4 574fff97 bl       #0x226b50
00252DF8 28008052 mov      w8, #1
00252DFC e8060039 strb     w8, [x23, #1]
00252E00 a0380036 tbz      w0, #0, #0x253514
00252E04 211e0090 adrp     x1, #0x616000
00252E08 21f40091 add      x1, x1, #0x3d
00252E0C e0230191 add      x0, sp, #0x48
00252E10 f352ff97 bl       #0x2279dc
00252E14 e0230191 add      x0, sp, #0x48
00252E18 0853ff97 bl       #0x227a38
00252E1C 888f8252 mov      w8, #0x147c
00252E20 8872a072 movk     w8, #0x394, lsl #16
00252E24 16249452 mov      w22, #0xa120
00252E28 f600a072 movk     w22, #7, lsl #16
00252E2C 7502088b add      x21, x19, x8
00252E30 481e00f0 adrp     x8, #0x61d000
00252E34 08812f91 add      x8, x8, #0xbe0
00252E38 090140f9 ldr      x9, [x8]
00252E3C 086140f8 ldur     x8, [x8, #6]
00252E40 f40300aa mov      x20, x0
00252E44 a90200f9 str      x9, [x21]
00252E48 e00313aa mov      x0, x19
00252E4C e10315aa mov      x1, x21
00252E50 e203162a mov      w2, w22
00252E54 a86200f8 stur     x8, [x21, #6]
00252E58 9209ff97 bl       #0x2154a0
00252E5C 88b39652 mov      w8, #0xb59c
00252E60 6873a072 movk     w8, #0x39b, lsl #16
00252E64 7702088b add      x23, x19, x8
00252E68 163bff97 bl       #0x221ac0
00252E6C f80300aa mov      x24, x0
00252E70 e0e9fe97 bl       #0x20d5f0
00252E74 28548252 mov      w8, #0x12a1
00252E78 221e00b0 adrp     x2, #0x617000
00252E7C 42383891 add      x2, x2, #0xe0e
00252E80 0400088b add      x4, x0, x8
00252E84 e00317aa mov      x0, x23
00252E88 e10316aa mov      x1, x22
00252E8C e30318aa mov      x3, x24
00252E90 e50315aa mov      x5, x21
00252E94 178e0e94 bl       #0x5f66f0
00252E98 a8008052 mov      w8, #5
00252E9C e00313aa mov      x0, x19
00252EA0 a8831ab8 stur     w8, [x29, #-0x58]
00252EA4 882a0090 adrp     x8, #0x7a2000
00252EA8 e10317aa mov      x1, x23
00252EAC 082145f9 ldr      x8, [x8, #0xa40]
00252EB0 bf7f3ea9 stp      xzr, xzr, [x29, #-0x20]
00252EB4 092940a9 ldp      x9, x10, [x8]
00252EB8 a92b3ba9 stp      x9, x10, [x29, #-0x50]
00252EBC 092941a9 ldp      x9, x10, [x8, #0x10]
00252EC0 081140f9 ldr      x8, [x8, #0x20]
00252EC4 a92b3ca9 stp      x9, x10, [x29, #-0x40]
00252EC8 a87f3da9 stp      x8, xzr, [x29, #-0x30]
00252ECC 6922ff97 bl       #0x21b870
00252ED0 fc3aff97 bl       #0x221ac0
00252ED4 88a58652 mov      w8, #0x352c
00252ED8 2803a072 movk     w8, #0x19, lsl #16
00252EDC 0a848452 mov      w10, #0x2420
00252EE0 ea5fa072 movk     w10, #0x2ff, lsl #16
00252EE4 096868b8 ldr      w9, [x0, x8]
00252EE8 75020a8b add      x21, x19, x10
00252EEC a36301d1 sub      x3, x29, #0x58
00252EF0 e10314aa mov      x1, x20
00252EF4 29050011 add      w9, w9, #1
00252EF8 096828b8 str      w9, [x0, x8]
00252EFC 68326791 add      x8, x19, #0x9cc, lsl #12
00252F00 e00315aa mov      x0, x21
00252F04 02812891 add      x2, x8, #0xa20
00252F08 aae10b94 bl       #0x54b5b0
00252F0C 80320036 tbz      w0, #0, #0x25355c
00252F10 88008052 mov      w8, #4
00252F14 40010014 b        #0x253414
00252F18 ff060039 strb     wzr, [x23, #1]
00252F1C 814fff97 bl       #0x226d20
00252F20 e0031f2a mov      w0, wzr
00252F24 ff020039 strb     wzr, [x23]
00252F28 c8008052 mov      w8, #6
00252F2C 08020014 b        #0x25374c
00252F30 1850ff97 bl       #0x226f90
00252F34 800f0037 tbnz     w0, #0, #0x253124
00252F38 211e00d0 adrp     x1, #0x618000
00252F3C 21cc2c91 add      x1, x1, #0xb33
00252F40 e0230191 add      x0, sp, #0x48
00252F44 a652ff97 bl       #0x2279dc
00252F48 e0230191 add      x0, sp, #0x48
00252F4C bb52ff97 bl       #0x227a38
00252F50 888f8252 mov      w8, #0x147c
00252F54 8872a072 movk     w8, #0x394, lsl #16
00252F58 f40300aa mov      x20, x0
00252F5C 7502088b add      x21, x19, x8
00252F60 d83aff97 bl       #0x221ac0
00252F64 16249452 mov      w22, #0xa120
00252F68 f600a072 movk     w22, #7, lsl #16
00252F6C 03a00f91 add      x3, x0, #0x3e8
00252F70 e21d00d0 adrp     x2, #0x610000
00252F74 42e41791 add      x2, x2, #0x5f9
00252F78 e00315aa mov      x0, x21
00252F7C e10316aa mov      x1, x22
00252F80 dc8d0e94 bl       #0x5f66f0
00252F84 e00313aa mov      x0, x19
00252F88 e10315aa mov      x1, x21
00252F8C e203162a mov      w2, w22
00252F90 4409ff97 bl       #0x2154a0
00252F94 88b39652 mov      w8, #0xb59c
00252F98 6873a072 movk     w8, #0x39b, lsl #16
00252F9C 7702088b add      x23, x19, x8
00252FA0 c83aff97 bl       #0x221ac0
00252FA4 f80300aa mov      x24, x0
00252FA8 92e9fe97 bl       #0x20d5f0
00252FAC 28548252 mov      w8, #0x12a1
00252FB0 221e00b0 adrp     x2, #0x617000
00252FB4 42383891 add      x2, x2, #0xe0e
00252FB8 0400088b add      x4, x0, x8
00252FBC e00317aa mov      x0, x23
00252FC0 e10316aa mov      x1, x22
00252FC4 e30318aa mov      x3, x24
00252FC8 e50315aa mov      x5, x21
00252FCC c98d0e94 bl       #0x5f66f0
00252FD0 a8008052 mov      w8, #5
00252FD4 e00313aa mov      x0, x19
00252FD8 a8831ab8 stur     w8, [x29, #-0x58]
00252FDC 882a0090 adrp     x8, #0x7a2000
00252FE0 e10317aa mov      x1, x23
00252FE4 082145f9 ldr      x8, [x8, #0xa40]
00252FE8 bf7f3ea9 stp      xzr, xzr, [x29, #-0x20]
00252FEC 092940a9 ldp      x9, x10, [x8]
00252FF0 a92b3ba9 stp      x9, x10, [x29, #-0x50]
00252FF4 092941a9 ldp      x9, x10, [x8, #0x10]
00252FF8 081140f9 ldr      x8, [x8, #0x20]
00252FFC a92b3ca9 stp      x9, x10, [x29, #-0x40]
00253000 a87f3da9 stp      x8, xzr, [x29, #-0x30]
00253004 1b22ff97 bl       #0x21b870
00253008 ae3aff97 bl       #0x221ac0
0025300C 88a58652 mov      w8, #0x352c
00253010 2803a072 movk     w8, #0x19, lsl #16
00253014 0a848452 mov      w10, #0x2420
00253018 ea5fa072 movk     w10, #0x2ff, lsl #16
0025301C 096868b8 ldr      w9, [x0, x8]
00253020 75020a8b add      x21, x19, x10
00253024 a36301d1 sub      x3, x29, #0x58
00253028 e10314aa mov      x1, x20
0025302C 29050011 add      w9, w9, #1
00253030 096828b8 str      w9, [x0, x8]
00253034 68326791 add      x8, x19, #0x9cc, lsl #12
00253038 e00315aa mov      x0, x21
0025303C 02812891 add      x2, x8, #0xa20
00253040 5ce10b94 bl       #0x54b5b0
00253044 40270036 tbz      w0, #0, #0x25352c
00253048 c8008052 mov      w8, #6
0025304C f2000014 b        #0x253414
00253050 08848452 mov      w8, #0x2420
00253054 e85fa072 movk     w8, #0x2ff, lsl #16
00253058 7402088b add      x20, x19, x8
0025305C e00314aa mov      x0, x20
00253060 7be20b94 bl       #0x54ba4c
00253064 00060037 tbnz     w0, #0, #0x253124
00253068 e00314aa mov      x0, x20
0025306C 93e20b94 bl       #0x54bab8
00253070 a0260036 tbz      w0, #0, #0x253544
00253074 e00314aa mov      x0, x20
00253078 96e20b94 bl       #0x54bad0
0025307C 802800b4 cbz      x0, #0x25358c
00253080 e00313aa mov      x0, x19
00253084 bc010094 bl       #0x253774
00253088 200700b9 str      w0, [x25, #4]
0025308C 20290035 cbnz     w0, #0x2535b0
00253090 280b40b9 ldr      w8, [x25, #8]
00253094 08050011 add      w8, w8, #1
00253098 1f1d0071 cmp      w8, #7
0025309C 280b00b9 str      w8, [x25, #8]
002530A0 e11b0054 b.ne     #0x25341c
002530A4 20008052 mov      w0, #1
002530A8 e6e5fe97 bl       #0x20c840
002530AC e0031f2a mov      w0, wzr
002530B0 08018052 mov      w8, #8
002530B4 a6010014 b        #0x25374c
002530B8 e0031faa mov      x0, xzr
002530BC d9e6fe97 bl       #0x20cc20
002530C0 20030037 tbnz     w0, #0, #0x253124
002530C4 682c00d0 adrp     x8, #0x7e1000
002530C8 08011891 add      x8, x8, #0x600
002530CC 000140f9 ldr      x0, [x8]
002530D0 322dfd97 bl       #0x19e598
002530D4 80020036 tbz      w0, #0, #0x253124
002530D8 680e40f9 ldr      x8, [x19, #0x18]
002530DC 480100b4 cbz      x8, #0x253104
002530E0 08510191 add      x8, x8, #0x54
002530E4 1ffddf88 ldar     wzr, [x8]
002530E8 680e40f9 ldr      x8, [x19, #0x18]
002530EC c80000b4 cbz      x8, #0x253104
002530F0 08510191 add      x8, x8, #0x54
002530F4 08fddf88 ldar     w8, [x8]
002530F8 691240f9 ldr      x9, [x19, #0x20]
002530FC 1f010071 cmp      w8, #0
00253100 e803899a csel     x8, xzr, x9, eq
00253104 69c20091 add      x9, x19, #0x30
00253108 1f0100f1 cmp      x8, #0
0025310C 2001889a csel     x0, x9, x8, eq
00253110 080040f9 ldr      x8, [x0]
00253114 080140f9 ldr      x8, [x8]
00253118 00013fd6 blr      x8
0025311C 20008052 mov      w0, #1
00253120 8c010014 b        #0x253750
00253124 e0031f2a mov      w0, wzr
00253128 8a010014 b        #0x253750
0025312C 200340b9 ldr      w0, [x25]
00253130 60180034 cbz      w0, #0x25343c
00253134 d37fff97 bl       #0x233080
00253138 e8064039 ldrb     w8, [x23, #1]
0025313C 3f0700b9 str      wzr, [x25, #4]
00253140 48000034 cbz      w8, #0x253148
00253144 a74fff97 bl       #0x226fe0
00253148 e8024039 ldrb     w8, [x23]
0025314C c8000034 cbz      w8, #0x253164
00253150 f40a4039 ldrb     w20, [x23, #2]
00253154 5b3aff97 bl       #0x221ac0
00253158 08469352 mov      w8, #0x9a30
0025315C 146828b8 str      w20, [x0, x8]
00253160 c43cff97 bl       #0x222470
00253164 680e40f9 ldr      x8, [x19, #0x18]
00253168 480100b4 cbz      x8, #0x253190
0025316C 08510191 add      x8, x8, #0x54
00253170 1ffddf88 ldar     wzr, [x8]
00253174 680e40f9 ldr      x8, [x19, #0x18]
00253178 c80000b4 cbz      x8, #0x253190
0025317C 08510191 add      x8, x8, #0x54
00253180 08fddf88 ldar     w8, [x8]
00253184 691240f9 ldr      x9, [x19, #0x20]
00253188 1f010071 cmp      w8, #0
0025318C e803899a csel     x8, xzr, x9, eq
00253190 69c20091 add      x9, x19, #0x30
00253194 1f0100f1 cmp      x8, #0
00253198 bf630039 strb     wzr, [x29, #0x18]
0025319C 2001889a csel     x0, x9, x8, eq
002531A0 a1630091 add      x1, x29, #0x18
002531A4 1b000014 b        #0x253210
002531A8 200740b9 ldr      w0, [x25, #4]
002531AC e1031f2a mov      w1, wzr
002531B0 cc7fff97 bl       #0x2330e0
002531B4 e8064039 ldrb     w8, [x23, #1]
002531B8 3f0700b9 str      wzr, [x25, #4]
002531BC 48000034 cbz      w8, #0x2531c4
002531C0 884fff97 bl       #0x226fe0
002531C4 e8024039 ldrb     w8, [x23]
002531C8 48000034 cbz      w8, #0x2531d0
002531CC a93cff97 bl       #0x222470
002531D0 680e40f9 ldr      x8, [x19, #0x18]
002531D4 480100b4 cbz      x8, #0x2531fc
002531D8 08510191 add      x8, x8, #0x54
002531DC 1ffddf88 ldar     wzr, [x8]
002531E0 680e40f9 ldr      x8, [x19, #0x18]
002531E4 c80000b4 cbz      x8, #0x2531fc
002531E8 08510191 add      x8, x8, #0x54
002531EC 08fddf88 ldar     w8, [x8]
002531F0 691240f9 ldr      x9, [x19, #0x20]
002531F4 1f010071 cmp      w8, #0
002531F8 e803899a csel     x8, xzr, x9, eq
002531FC 69c20091 add      x9, x19, #0x30
00253200 1f0100f1 cmp      x8, #0
00253204 ff230039 strb     wzr, [sp, #8]
00253208 2001889a csel     x0, x9, x8, eq
0025320C e1230091 add      x1, sp, #8
00253210 080040f9 ldr      x8, [x0]
00253214 080540f9 ldr      x8, [x8, #8]
00253218 00013fd6 blr      x8
0025321C 20008052 mov      w0, #1
00253220 4c010014 b        #0x253750
00253224 97058052 mov      w23, #0x2c
00253228 664aff97 bl       #0x225bc0
0025322C 082443a9 ldp      x8, x9, [x0, #0x30]
00253230 ffc30039 strb     wzr, [sp, #0x30]
00253234 0b244139 ldrb     w11, [x0, #0x49]
00253238 ff7f02a9 stp      xzr, xzr, [sp, #0x20]
0025323C ff7f01a9 stp      xzr, xzr, [sp, #0x10]
00253240 a8a73da9 stp      x8, x9, [x29, #-0x28]
00253244 08244829 ldp      w8, w9, [x0, #0x40]
00253248 a8831eb8 stur     w8, [x29, #-0x18]
0025324C 082841a9 ldp      x8, x10, [x0, #0x10]
00253250 a8ab3ba9 stp      x8, x10, [x29, #-0x48]
00253254 0a2042a9 ldp      x10, x8, [x0, #0x20]
00253258 aaa33ca9 stp      x10, x8, [x29, #-0x38]
0025325C 0a2040a9 ldp      x10, x8, [x0]
00253260 aaa33aa9 stp      x10, x8, [x29, #-0x58]
00253264 0a204139 ldrb     w10, [x0, #0x48]
00253268 a93200f8 stur     x9, [x21, #3]
0025326C 89fb9e52 mov      w9, #0xf7dc
00253270 4975a072 movk     w9, #0x3aa, lsl #16
00253274 b7020079 strh     w23, [x21]
00253278 ab0a0039 strb     w11, [x21, #2]
0025327C ab835bf8 ldur     x11, [x29, #-0x48]
00253280 e0e30091 add      x0, sp, #0x38
00253284 7702098b add      x23, x19, x9
00253288 a9835af8 ldur     x9, [x29, #-0x58]
0025328C e83201f8 stur     x8, [x23, #0x13]
00253290 a8035c78 ldurh    w8, [x29, #-0x40]
00253294 ebb201f8 stur     x11, [x23, #0x1b]
00253298 aa960039 strb     w10, [x21, #0x25]
0025329C e9b200f8 stur     x9, [x23, #0xb]
002532A0 e8320278 sturh    w8, [x23, #0x23]
002532A4 d78c0e94 bl       #0x5f6600
002532A8 e0430091 add      x0, sp, #0x10
002532AC e1e30091 add      x1, sp, #0x38
002532B0 b08c0e94 bl       #0x5f6570
002532B4 e82742a9 ldp      x8, x9, [sp, #0x20]
002532B8 18249452 mov      w24, #0xa120
002532BC f800a072 movk     w24, #7, lsl #16
002532C0 eb2b41a9 ldp      x11, x10, [sp, #0x10]
002532C4 e1031f2a mov      w1, wzr
002532C8 e20318aa mov      x2, x24
002532CC e86203f8 stur     x8, [x23, #0x36]
002532D0 e8c34039 ldrb     w8, [sp, #0x30]
002532D4 eae202f8 stur     x10, [x23, #0x2e]
002532D8 e9e203f8 stur     x9, [x23, #0x3e]
002532DC eb6202f8 stur     x11, [x23, #0x26]
002532E0 e81a0139 strb     w8, [x23, #0x46]
002532E4 88d78a52 mov      w8, #0x56bc
002532E8 6874a072 movk     w8, #0x3a3, lsl #16
002532EC 7702088b add      x23, x19, x8
002532F0 e00317aa mov      x0, x23
002532F4 978b0e94 bl       #0x5f6150
002532F8 e3088052 mov      w3, #0x47
002532FC e00317aa mov      x0, x23
00253300 e10318aa mov      x1, x24
00253304 e20315aa mov      x2, x21
00253308 e4031f2a mov      w4, wzr
0025330C e5031f2a mov      w5, wzr
00253310 660b0294 bl       #0x2d60a8
00253314 e00315aa mov      x0, x21
00253318 e10317aa mov      x1, x23
0025331C e20318aa mov      x2, x24
00253320 b08c0e94 bl       #0x5f65e0
00253324 888f8252 mov      w8, #0x147c
00253328 8872a072 movk     w8, #0x394, lsl #16
0025332C c21d00d0 adrp     x2, #0x60d000
00253330 42480691 add      x2, x2, #0x192
00253334 7702088b add      x23, x19, x8
00253338 e10318aa mov      x1, x24
0025333C e00317aa mov      x0, x23
00253340 e30315aa mov      x3, x21
00253344 e403162a mov      w4, w22
00253348 ea8c0e94 bl       #0x5f66f0
0025334C e00313aa mov      x0, x19
00253350 e10317aa mov      x1, x23
00253354 e203182a mov      w2, w24
00253358 5208ff97 bl       #0x2154a0
0025335C 88b39652 mov      w8, #0xb59c
00253360 6873a072 movk     w8, #0x39b, lsl #16
00253364 7502088b add      x21, x19, x8
00253368 d639ff97 bl       #0x221ac0
0025336C f60300aa mov      x22, x0
00253370 a0e8fe97 bl       #0x20d5f0
00253374 28548252 mov      w8, #0x12a1
00253378 221e0090 adrp     x2, #0x617000
0025337C 42383891 add      x2, x2, #0xe0e
00253380 0400088b add      x4, x0, x8
00253384 e00315aa mov      x0, x21
00253388 e10318aa mov      x1, x24
0025338C e30316aa mov      x3, x22
00253390 e50317aa mov      x5, x23
00253394 d78c0e94 bl       #0x5f66f0
00253398 a8008052 mov      w8, #5
0025339C e00313aa mov      x0, x19
002533A0 a8831ab8 stur     w8, [x29, #-0x58]
002533A4 682a00f0 adrp     x8, #0x7a2000
002533A8 e10315aa mov      x1, x21
002533AC 082145f9 ldr      x8, [x8, #0xa40]
002533B0 bf7f3ea9 stp      xzr, xzr, [x29, #-0x20]
002533B4 092940a9 ldp      x9, x10, [x8]
002533B8 a92b3ba9 stp      x9, x10, [x29, #-0x50]
002533BC 092941a9 ldp      x9, x10, [x8, #0x10]
002533C0 081140f9 ldr      x8, [x8, #0x20]
002533C4 a92b3ca9 stp      x9, x10, [x29, #-0x40]
002533C8 a87f3da9 stp      x8, xzr, [x29, #-0x30]
002533CC 2921ff97 bl       #0x21b870
002533D0 bc39ff97 bl       #0x221ac0
002533D4 88a58652 mov      w8, #0x352c
002533D8 2803a072 movk     w8, #0x19, lsl #16
002533DC 0a848452 mov      w10, #0x2420
002533E0 ea5fa072 movk     w10, #0x2ff, lsl #16
002533E4 096868b8 ldr      w9, [x0, x8]
002533E8 75020a8b add      x21, x19, x10
002533EC a36301d1 sub      x3, x29, #0x58
002533F0 e10314aa mov      x1, x20
002533F4 29050011 add      w9, w9, #1
002533F8 096828b8 str      w9, [x0, x8]
002533FC 68326791 add      x8, x19, #0x9cc, lsl #12
00253400 e00315aa mov      x0, x21
00253404 02812891 add      x2, x8, #0xa20
00253408 6ae00b94 bl       #0x54b5b0
0025340C c0000036 tbz      w0, #0, #0x253424
00253410 28008052 mov      w8, #1
00253414 280b00b9 str      w8, [x25, #8]
00253418 e8008052 mov      w8, #7
0025341C e0031f2a mov      w0, wzr
00253420 cb000014 b        #0x25374c
00253424 e00315aa mov      x0, x21
00253428 afe10b94 bl       #0x54bae4
0025342C 080040b9 ldr      w8, [x0]
00253430 e01d0090 adrp     x0, #0x60f000
00253434 009c2a91 add      x0, x0, #0xaa7
00253438 4e000014 b        #0x253570
0025343C 08178e52 mov      w8, #0x70b8
00253440 4862a072 movk     w8, #0x312, lsl #16
00253444 200740b9 ldr      w0, [x25, #4]
00253448 6802088b add      x8, x19, x8
0025344C 010140b9 ldr      w1, [x8]
00253450 247fff97 bl       #0x2330e0
00253454 e8064039 ldrb     w8, [x23, #1]
00253458 3f0700b9 str      wzr, [x25, #4]
0025345C 48e7ff35 cbnz     w8, #0x253144
00253460 3affff17 b        #0x253148
00253464 d749ff97 bl       #0x225bc0
00253468 142c40b9 ldr      w20, [x0, #0x2c]
0025346C 880e0051 sub      w8, w20, #3
00253470 1f190071 cmp      w8, #6
00253474 68120054 b.hi     #0x2536c0
00253478 091f00b0 adrp     x9, #0x634000
0025347C 29a93691 add      x9, x9, #0xdaa
00253480 8a000010 adr      x10, #0x253490
00253484 2b696838 ldrb     w11, [x9, x8]
00253488 4a090b8b add      x10, x10, x11, lsl #2
0025348C 40011fd6 br       x10
00253490 682c00d0 adrp     x8, #0x7e1000
00253494 08e11291 add      x8, x8, #0x4b8
00253498 180140f9 ldr      x24, [x8]
0025349C 151741f9 ldr      x21, [x24, #0x228]
002534A0 b50000b4 cbz      x21, #0x2534b4
002534A4 e00315aa mov      x0, x21
002534A8 088c44f8 ldr      x8, [x0, #0x48]!
002534AC 080940f9 ldr      x8, [x8, #0x10]
002534B0 00013fd6 blr      x8
002534B4 e00315aa mov      x0, x21
002534B8 46490094 bl       #0x2659d0
002534BC a88e44f8 ldr      x8, [x21, #0x48]!
002534C0 f603002a mov      w22, w0
002534C4 e00315aa mov      x0, x21
002534C8 080d40f9 ldr      x8, [x8, #0x18]
002534CC 00013fd6 blr      x8
002534D0 7c39ff97 bl       #0x221ac0
002534D4 88099652 mov      w8, #0xb04c
002534D8 e800a072 movk     w8, #7, lsl #16
002534DC 151741f9 ldr      x21, [x24, #0x228]
002534E0 086868b8 ldr      w8, [x0, x8]
002534E4 1601160b add      w22, w8, w22
002534E8 b50000b4 cbz      x21, #0x2534fc
002534EC e00315aa mov      x0, x21
002534F0 088c44f8 ldr      x8, [x0, #0x48]!
002534F4 080940f9 ldr      x8, [x8, #0x10]
002534F8 00013fd6 blr      x8
002534FC e00315aa mov      x0, x21
00253500 e103162a mov      w1, w22
00253504 35490094 bl       #0x2659d8
00253508 a88e44f8 ldr      x8, [x21, #0x48]!
0025350C e00315aa mov      x0, x21
00253510 6a000014 b        #0x2536b8
00253514 e0031f2a mov      w0, wzr
00253518 e8020039 strb     w8, [x23]
0025351C 08c48952 mov      w8, #0x4e20
00253520 280700b9 str      w8, [x25, #4]
00253524 48018052 mov      w8, #0xa
00253528 89000014 b        #0x25374c
0025352C e00315aa mov      x0, x21
00253530 6de10b94 bl       #0x54bae4
00253534 080040b9 ldr      w8, [x0]
00253538 401e00f0 adrp     x0, #0x61e000
0025353C 00581f91 add      x0, x0, #0x7d6
00253540 0c000014 b        #0x253570
00253544 e00314aa mov      x0, x20
00253548 67e10b94 bl       #0x54bae4
0025354C 080040b9 ldr      w8, [x0]
00253550 601e00b0 adrp     x0, #0x620000
00253554 00bc3d91 add      x0, x0, #0xf6f
00253558 12000014 b        #0x2535a0
0025355C e00315aa mov      x0, x21
00253560 61e10b94 bl       #0x54bae4
00253564 080040b9 ldr      w8, [x0]
00253568 401e00d0 adrp     x0, #0x61d000
0025356C 00b82f91 add      x0, x0, #0xbee
00253570 420340b9 ldr      w2, [x26]
00253574 01550012 and      w1, w8, #0x3fffff
00253578 e3031faa mov      x3, xzr
0025357C c932ff97 bl       #0x2200a0
00253580 28018052 mov      w8, #9
00253584 e0031f2a mov      w0, wzr
00253588 71000014 b        #0x25374c
0025358C e00314aa mov      x0, x20
00253590 55e10b94 bl       #0x54bae4
00253594 080040b9 ldr      w8, [x0]
00253598 e01d00b0 adrp     x0, #0x610000
0025359C 00541891 add      x0, x0, #0x615
002535A0 420340b9 ldr      w2, [x26]
002535A4 01550012 and      w1, w8, #0x3fffff
002535A8 e3031faa mov      x3, xzr
002535AC bd32ff97 bl       #0x2200a0
002535B0 e0031f2a mov      w0, wzr
002535B4 28018052 mov      w8, #9
002535B8 65000014 b        #0x25374c
002535BC 682c00d0 adrp     x8, #0x7e1000
002535C0 08011891 add      x8, x8, #0x600
002535C4 150140f9 ldr      x21, [x8]
002535C8 e8230191 add      x8, sp, #0x48
002535CC e00315aa mov      x0, x21
002535D0 a52cfd97 bl       #0x19e864
002535D4 e02740f9 ldr      x0, [sp, #0x48]
002535D8 4b42fd97 bl       #0x1a3f04
002535DC f603002a mov      w22, w0
002535E0 e02740f9 ldr      x0, [sp, #0x48]
002535E4 800000b4 cbz      x0, #0x2535f4
002535E8 088c44f8 ldr      x8, [x0, #0x48]!
002535EC 080d40f9 ldr      x8, [x8, #0x18]
002535F0 00013fd6 blr      x8
002535F4 3339ff97 bl       #0x221ac0
002535F8 88099652 mov      w8, #0xb04c
002535FC e800a072 movk     w8, #7, lsl #16
00253600 086868b8 ldr      w8, [x0, x8]
00253604 e00315aa mov      x0, x21
00253608 1601160b add      w22, w8, w22
0025360C e8230191 add      x8, sp, #0x48
00253610 952cfd97 bl       #0x19e864
00253614 e02740f9 ldr      x0, [sp, #0x48]
00253618 e103162a mov      w1, w22
0025361C 3c42fd97 bl       #0x1a3f0c
00253620 23000014 b        #0x2536ac
00253624 9fe60094 bl       #0x28d0a0
00253628 f503002a mov      w21, w0
0025362C 2539ff97 bl       #0x221ac0
00253630 88099652 mov      w8, #0xb04c
00253634 e800a072 movk     w8, #7, lsl #16
00253638 086868b8 ldr      w8, [x0, x8]
0025363C 0001150b add      w0, w8, w21
00253640 bfe60094 bl       #0x28d13c
00253644 1f000014 b        #0x2536c0
00253648 682c00d0 adrp     x8, #0x7e1000
0025364C 08411891 add      x8, x8, #0x610
00253650 150140f9 ldr      x21, [x8]
00253654 e8230191 add      x8, sp, #0x48
00253658 e00315aa mov      x0, x21
0025365C 7f7afd97 bl       #0x1b2058
00253660 e02740f9 ldr      x0, [sp, #0x48]
00253664 babdfd97 bl       #0x1c2d4c
00253668 f603002a mov      w22, w0
0025366C e02740f9 ldr      x0, [sp, #0x48]
00253670 800000b4 cbz      x0, #0x253680
00253674 088c44f8 ldr      x8, [x0, #0x48]!
00253678 080d40f9 ldr      x8, [x8, #0x18]
0025367C 00013fd6 blr      x8
00253680 1039ff97 bl       #0x221ac0
00253684 88099652 mov      w8, #0xb04c
00253688 e800a072 movk     w8, #7, lsl #16
0025368C 086868b8 ldr      w8, [x0, x8]
00253690 e00315aa mov      x0, x21
00253694 1601160b add      w22, w8, w22
00253698 e8230191 add      x8, sp, #0x48
0025369C 6f7afd97 bl       #0x1b2058
002536A0 e02740f9 ldr      x0, [sp, #0x48]
002536A4 e103162a mov      w1, w22
002536A8 abbdfd97 bl       #0x1c2d54
002536AC e02740f9 ldr      x0, [sp, #0x48]
002536B0 800000b4 cbz      x0, #0x2536c0
002536B4 088c44f8 ldr      x8, [x0, #0x48]!
002536B8 080d40f9 ldr      x8, [x8, #0x18]
002536BC 00013fd6 blr      x8
002536C0 0039ff97 bl       #0x221ac0
002536C4 15469352 mov      w21, #0x9a30
002536C8 086875b8 ldr      w8, [x0, x21]
002536CC 1f010071 cmp      w8, #0
002536D0 e8079f1a cset     w8, ne
002536D4 e80a0039 strb     w8, [x23, #2]
002536D8 fa38ff97 bl       #0x221ac0
002536DC 88099652 mov      w8, #0xb04c
002536E0 e800a072 movk     w8, #7, lsl #16
002536E4 006868bc ldr      s0, [x0, x8]
002536E8 e003142a mov      w0, w20
002536EC 09d8215e scvtf    s9, s0
002536F0 3c49ff97 bl       #0x225be0
002536F4 0840201e fmov     s8, s0
002536F8 f238ff97 bl       #0x221ac0
002536FC 006875bc ldr      s0, [x0, x21]
00253700 00d8215e scvtf    s0, s0
00253704 2081081f fmsub    s0, s9, s8, s0
00253708 0800381e fcvtzs   w8, s0
0025370C 086835b8 str      w8, [x0, x21]
00253710 ec38ff97 bl       #0x221ac0
00253714 882c9352 mov      w8, #0x9964
00253718 146868b8 ldr      w20, [x0, x8]
0025371C e938ff97 bl       #0x221ac0
00253720 08209352 mov      w8, #0x9900
00253724 e1230191 add      x1, sp, #0x48
00253728 0800088b add      x8, x0, x8
0025372C e003142a mov      w0, w20
00253730 092145a9 ldp      x9, x8, [x8, #0x50]
00253734 e9a304a9 stp      x9, x8, [sp, #0x48]
00253738 aa42ff97 bl       #0x2241e0
0025373C 20008052 mov      w0, #1
00253740 1c4cff97 bl       #0x2267b0
00253744 e0031f2a mov      w0, wzr
00253748 88008052 mov      w8, #4
0025374C 681600b9 str      w8, [x19, #0x14]
00253750 ff430691 add      sp, sp, #0x190
00253754 f44f46a9 ldp      x20, x19, [sp, #0x60]
00253758 fc1340f9 ldr      x28, [sp, #0x20]
0025375C f65745a9 ldp      x22, x21, [sp, #0x50]
00253760 f85f44a9 ldp      x24, x23, [sp, #0x40]
00253764 fa6743a9 ldp      x26, x25, [sp, #0x30]
00253768 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0025376C e923c76c ldp      d9, d8, [sp], #0x70
00253770 c0035fd6 ret      
~~~
### 0x257864 (1 slots)
~~~asm
00257864 53000014 b        #0x2579b0
~~~
### 0x25aa70 (200 slots)
~~~asm
0025AA70 ff0302d1 sub      sp, sp, #0x80
0025AA74 fd7b02a9 stp      x29, x30, [sp, #0x20]
0025AA78 fc6f03a9 stp      x28, x27, [sp, #0x30]
0025AA7C fa6704a9 stp      x26, x25, [sp, #0x40]
0025AA80 f85f05a9 stp      x24, x23, [sp, #0x50]
0025AA84 f65706a9 stp      x22, x21, [sp, #0x60]
0025AA88 f44f07a9 stp      x20, x19, [sp, #0x70]
0025AA8C fd830091 add      x29, sp, #0x20
0025AA90 48d03bd5 mrs      x8, tpidr_el0
0025AA94 13c97392 and      x19, x8, #0xffffffffffffe000
0025AA98 684e40f9 ldr      x8, [x19, #0x98]
0025AA9C 1f4100f1 cmp      x8, #0x10
0025AAA0 60170054 b.eq     #0x25ad8c
0025AAA4 150440f9 ldr      x21, [x0, #8]
0025AAA8 680e088b add      x8, x19, x8, lsl #3
0025AAAC f60300aa mov      x22, x0
0025AAB0 01628052 mov      w1, #0x310
0025AAB4 02018052 mov      w2, #8
0025AAB8 150d00f9 str      x21, [x8, #0x18]
0025AABC e00315aa mov      x0, x21
0025AAC0 684e40f9 ldr      x8, [x19, #0x98]
0025AAC4 08050091 add      x8, x8, #1
0025AAC8 684e00f9 str      x8, [x19, #0x98]
0025AACC a80240f9 ldr      x8, [x21]
0025AAD0 080940f9 ldr      x8, [x8, #0x10]
0025AAD4 00013fd6 blr      x8
0025AAD8 f40300aa mov      x20, x0
0025AADC a00000b5 cbnz     x0, #0x25aaf0
0025AAE0 a80240f9 ldr      x8, [x21]
0025AAE4 e00315aa mov      x0, x21
0025AAE8 085d40f9 ldr      x8, [x8, #0xb8]
0025AAEC 00013fd6 blr      x8
0025AAF0 e00314aa mov      x0, x20
0025AAF4 e10315aa mov      x1, x21
0025AAF8 e2031f2a mov      w2, wzr
0025AAFC e3031f2a mov      w3, wzr
0025AB00 e4031faa mov      x4, xzr
0025AB04 55720b94 bl       #0x537458
0025AB08 08628052 mov      w8, #0x310
0025AB0C 09018052 mov      w9, #8
0025AB10 e00314aa mov      x0, x20
0025AB14 95d200a9 stp      x21, x20, [x20, #8]
0025AB18 88a601a9 stp      x8, x9, [x20, #0x18]
0025AB1C 684e40f9 ldr      x8, [x19, #0x98]
0025AB20 080500d1 sub      x8, x8, #1
0025AB24 684e00f9 str      x8, [x19, #0x98]
0025AB28 088c44f8 ldr      x8, [x0, #0x48]!
0025AB2C e00300f9 str      x0, [sp]
0025AB30 080940f9 ldr      x8, [x8, #0x10]
0025AB34 00013fd6 blr      x8
0025AB38 c89e5791 add      x8, x22, #0x5e7, lsl #12
0025AB3C 02d09d52 mov      w2, #0xee80
0025AB40 c206a072 movk     w2, #0x36, lsl #16
0025AB44 00812f91 add      x0, x8, #0xbe0
0025AB48 e1031f2a mov      w1, wzr
0025AB4C 816d0e94 bl       #0x5f6150
0025AB50 97258052 mov      w23, #0x12c
0025AB54 153f8452 mov      w21, #0x21f8
0025AB58 f60700f9 str      x22, [sp, #8]
0025AB5C 186a8452 mov      w24, #0x2350
0025AB60 19958452 mov      w25, #0x24a8
0025AB64 1ac08452 mov      w26, #0x2600
0025AB68 1beb8452 mov      w27, #0x2758
0025AB6C 1c0a8552 mov      w28, #0x2850
0025AB70 f30316aa mov      x19, x22
0025AB74 61820191 add      x1, x19, #0x60
0025AB78 e00314aa mov      x0, x20
0025AB7C 83720b94 bl       #0x537588
0025AB80 61e20691 add      x1, x19, #0x1b8
0025AB84 e00314aa mov      x0, x20
0025AB88 80720b94 bl       #0x537588
0025AB8C 61420c91 add      x1, x19, #0x310
0025AB90 e00314aa mov      x0, x20
0025AB94 7d720b94 bl       #0x537588
0025AB98 61a21191 add      x1, x19, #0x468
0025AB9C e00314aa mov      x0, x20
0025ABA0 7a720b94 bl       #0x537588
0025ABA4 61021791 add      x1, x19, #0x5c0
0025ABA8 e00314aa mov      x0, x20
0025ABAC 77720b94 bl       #0x537588
0025ABB0 61621c91 add      x1, x19, #0x718
0025ABB4 e00314aa mov      x0, x20
0025ABB8 74720b94 bl       #0x537588
0025ABBC 61c22191 add      x1, x19, #0x870
0025ABC0 e00314aa mov      x0, x20
0025ABC4 71720b94 bl       #0x537588
0025ABC8 61222791 add      x1, x19, #0x9c8
0025ABCC e00314aa mov      x0, x20
0025ABD0 6e720b94 bl       #0x537588
0025ABD4 61822c91 add      x1, x19, #0xb20
0025ABD8 e00314aa mov      x0, x20
0025ABDC 6b720b94 bl       #0x537588
0025ABE0 61e23191 add      x1, x19, #0xc78
0025ABE4 e00314aa mov      x0, x20
0025ABE8 68720b94 bl       #0x537588
0025ABEC 61423791 add      x1, x19, #0xdd0
0025ABF0 e00314aa mov      x0, x20
0025ABF4 65720b94 bl       #0x537588
0025ABF8 61a23c91 add      x1, x19, #0xf28
0025ABFC e00314aa mov      x0, x20
0025AC00 62720b94 bl       #0x537588
0025AC04 08938352 mov      w8, #0x1c98
0025AC08 e00314aa mov      x0, x20
0025AC0C 7602088b add      x22, x19, x8
0025AC10 08108252 mov      w8, #0x1080
0025AC14 6102088b add      x1, x19, x8
0025AC18 5c720b94 bl       #0x537588
0025AC1C 083b8252 mov      w8, #0x11d8
0025AC20 e00314aa mov      x0, x20
0025AC24 6102088b add      x1, x19, x8
0025AC28 58720b94 bl       #0x537588
0025AC2C 08668252 mov      w8, #0x1330
0025AC30 e00314aa mov      x0, x20
0025AC34 6102088b add      x1, x19, x8
0025AC38 54720b94 bl       #0x537588
0025AC3C 08918252 mov      w8, #0x1488
0025AC40 e00314aa mov      x0, x20
0025AC44 6102088b add      x1, x19, x8
0025AC48 50720b94 bl       #0x537588
0025AC4C 08bc8252 mov      w8, #0x15e0
0025AC50 e00314aa mov      x0, x20
0025AC54 6102088b add      x1, x19, x8
0025AC58 4c720b94 bl       #0x537588
0025AC5C 08e78252 mov      w8, #0x1738
0025AC60 e00314aa mov      x0, x20
0025AC64 6102088b add      x1, x19, x8
0025AC68 48720b94 bl       #0x537588
0025AC6C 08128352 mov      w8, #0x1890
0025AC70 e00314aa mov      x0, x20
0025AC74 6102088b add      x1, x19, x8
0025AC78 44720b94 bl       #0x537588
0025AC7C 083d8352 mov      w8, #0x19e8
0025AC80 e00314aa mov      x0, x20
0025AC84 6102088b add      x1, x19, x8
0025AC88 40720b94 bl       #0x537588
0025AC8C 08688352 mov      w8, #0x1b40
0025AC90 e00314aa mov      x0, x20
0025AC94 6102088b add      x1, x19, x8
0025AC98 3c720b94 bl       #0x537588
0025AC9C e00314aa mov      x0, x20
0025ACA0 e10316aa mov      x1, x22
0025ACA4 39720b94 bl       #0x537588
0025ACA8 08be8352 mov      w8, #0x1df0
0025ACAC e00314aa mov      x0, x20
0025ACB0 6102088b add      x1, x19, x8
0025ACB4 35720b94 bl       #0x537588
0025ACB8 08e98352 mov      w8, #0x1f48
0025ACBC e00314aa mov      x0, x20
0025ACC0 6102088b add      x1, x19, x8
0025ACC4 31720b94 bl       #0x537588
0025ACC8 08148452 mov      w8, #0x20a0
0025ACCC e00314aa mov      x0, x20
0025ACD0 6102088b add      x1, x19, x8
0025ACD4 2d720b94 bl       #0x537588
0025ACD8 6102158b add      x1, x19, x21
0025ACDC e00314aa mov      x0, x20
0025ACE0 2a720b94 bl       #0x537588
0025ACE4 6102188b add      x1, x19, x24
0025ACE8 e00314aa mov      x0, x20
0025ACEC 27720b94 bl       #0x537588
0025ACF0 6102198b add      x1, x19, x25
0025ACF4 e00314aa mov      x0, x20
0025ACF8 24720b94 bl       #0x537588
0025ACFC 61021a8b add      x1, x19, x26
0025AD00 e00314aa mov      x0, x20
0025AD04 21720b94 bl       #0x537588
0025AD08 61021b8b add      x1, x19, x27
0025AD0C e00314aa mov      x0, x20
0025AD10 1e720b94 bl       #0x537588
0025AD14 73021c8b add      x19, x19, x28
0025AD18 f70600f1 subs     x23, x23, #1
0025AD1C c1f2ff54 b.ne     #0x25ab74
0025AD20 e00340f9 ldr      x0, [sp]
0025AD24 080040f9 ldr      x8, [x0]
0025AD28 080d40f9 ldr      x8, [x8, #0x18]
0025AD2C 00013fd6 blr      x8
0025AD30 282a00b0 adrp     x8, #0x79f000
0025AD34 a11300d1 sub      x1, x29, #4
0025AD38 082542f9 ldr      x8, [x8, #0x448]
0025AD3C bfc31fb8 stur     wzr, [x29, #-4]
0025AD40 000140f9 ldr      x0, [x8]
0025AD44 47590094 bl       #0x271260
0025AD48 e80740f9 ldr      x8, [sp, #8]
0025AD4C 412a0090 adrp     x1, #0x7a2000
0025AD50 e3430091 add      x3, sp, #0x10
0025AD54 02810191 add      x2, x8, #0x60
0025AD58 08408152 mov      w8, #0xa00
0025AD5C a800a072 movk     w8, #5, lsl #16
0025AD60 e80b00f9 str      x8, [sp, #0x10]
0025AD64 219847f9 ldr      x1, [x1, #0xf30]
0025AD68 0a000094 bl       #0x25ad90
0025AD6C f44f47a9 ldp      x20, x19, [sp, #0x70]
0025AD70 f65746a9 ldp      x22, x21, [sp, #0x60]
0025AD74 f85f45a9 ldp      x24, x23, [sp, #0x50]
0025AD78 fa6744a9 ldp      x26, x25, [sp, #0x40]
0025AD7C fc6f43a9 ldp      x28, x27, [sp, #0x30]
0025AD80 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0025AD84 ff030291 add      sp, sp, #0x80
0025AD88 c0035fd6 ret      
0025AD8C a19ff697 bl       #0x2c10
~~~
### 0x25afd0 (138 slots)
~~~asm
0025AFD0 ff4302d1 sub      sp, sp, #0x90
0025AFD4 fd7b03a9 stp      x29, x30, [sp, #0x30]
0025AFD8 fc6f04a9 stp      x28, x27, [sp, #0x40]
0025AFDC fa6705a9 stp      x26, x25, [sp, #0x50]
0025AFE0 f85f06a9 stp      x24, x23, [sp, #0x60]
0025AFE4 f65707a9 stp      x22, x21, [sp, #0x70]
0025AFE8 f44f08a9 stp      x20, x19, [sp, #0x80]
0025AFEC fdc30091 add      x29, sp, #0x30
0025AFF0 282a00b0 adrp     x8, #0x79f000
0025AFF4 f40300aa mov      x20, x0
0025AFF8 082542f9 ldr      x8, [x8, #0x448]
0025AFFC a11300d1 sub      x1, x29, #4
0025B000 bfc31fb8 stur     wzr, [x29, #-4]
0025B004 000140f9 ldr      x0, [x8]
0025B008 96580094 bl       #0x271260
0025B00C 08408152 mov      w8, #0xa00
0025B010 a800a072 movk     w8, #5, lsl #16
0025B014 a8031ff8 stur     x8, [x29, #-0x10]
0025B018 212a00f0 adrp     x1, #0x7a2000
0025B01C 96820191 add      x22, x20, #0x60
0025B020 219847f9 ldr      x1, [x1, #0xf30]
0025B024 a34300d1 sub      x3, x29, #0x10
0025B028 e20316aa mov      x2, x22
0025B02C f50300aa mov      x21, x0
0025B030 14040094 bl       #0x25c080
0025B034 1f1c40f2 tst      x0, #0xff
0025B038 01010054 b.ne     #0x25b058
0025B03C a02e40f9 ldr      x0, [x21, #0x58]
0025B040 c00000b4 cbz      x0, #0x25b058
0025B044 080040f9 ldr      x8, [x0]
0025B048 212a00f0 adrp     x1, #0x7a2000
0025B04C 082940f9 ldr      x8, [x8, #0x50]
0025B050 219847f9 ldr      x1, [x1, #0xf30]
0025B054 00013fd6 blr      x8
0025B058 48d03bd5 mrs      x8, tpidr_el0
0025B05C 13c97392 and      x19, x8, #0xffffffffffffe000
0025B060 684e40f9 ldr      x8, [x19, #0x98]
0025B064 1f4100f1 cmp      x8, #0x10
0025B068 600c0054 b.eq     #0x25b1f4
0025B06C f60b00f9 str      x22, [sp, #0x10]
0025B070 960640f9 ldr      x22, [x20, #8]
0025B074 680e088b add      x8, x19, x8, lsl #3
0025B078 01628052 mov      w1, #0x310
0025B07C 02018052 mov      w2, #8
0025B080 160d00f9 str      x22, [x8, #0x18]
0025B084 e00316aa mov      x0, x22
0025B088 684e40f9 ldr      x8, [x19, #0x98]
0025B08C 08050091 add      x8, x8, #1
0025B090 684e00f9 str      x8, [x19, #0x98]
0025B094 c80240f9 ldr      x8, [x22]
0025B098 080940f9 ldr      x8, [x8, #0x10]
0025B09C 00013fd6 blr      x8
0025B0A0 f50300aa mov      x21, x0
0025B0A4 a00000b5 cbnz     x0, #0x25b0b8
0025B0A8 c80240f9 ldr      x8, [x22]
0025B0AC e00316aa mov      x0, x22
0025B0B0 085d40f9 ldr      x8, [x8, #0xb8]
0025B0B4 00013fd6 blr      x8
0025B0B8 e00315aa mov      x0, x21
0025B0BC e10316aa mov      x1, x22
0025B0C0 e2031f2a mov      w2, wzr
0025B0C4 e3031f2a mov      w3, wzr
0025B0C8 e4031faa mov      x4, xzr
0025B0CC e3700b94 bl       #0x537458
0025B0D0 08628052 mov      w8, #0x310
0025B0D4 09018052 mov      w9, #8
0025B0D8 e00315aa mov      x0, x21
0025B0DC b6d600a9 stp      x22, x21, [x21, #8]
0025B0E0 a8a601a9 stp      x8, x9, [x21, #0x18]
0025B0E4 684e40f9 ldr      x8, [x19, #0x98]
0025B0E8 080500d1 sub      x8, x8, #1
0025B0EC 684e00f9 str      x8, [x19, #0x98]
0025B0F0 088c44f8 ldr      x8, [x0, #0x48]!
0025B0F4 e00700f9 str      x0, [sp, #8]
0025B0F8 080940f9 ldr      x8, [x8, #0x10]
0025B0FC 00013fd6 blr      x8
0025B100 889e5791 add      x8, x20, #0x5e7, lsl #12
0025B104 02d09d52 mov      w2, #0xee80
0025B108 c206a072 movk     w2, #0x36, lsl #16
0025B10C 00812f91 add      x0, x8, #0xbe0
0025B110 e1031f2a mov      w1, wzr
0025B114 0f6c0e94 bl       #0x5f6150
0025B118 aa2aff97 bl       #0x225bc0
0025B11C 192c40b9 ldr      w25, [x0, #0x2c]
0025B120 889e5791 add      x8, x20, #0x5e7, lsl #12
0025B124 f8031faa mov      x24, xzr
0025B128 9a820191 add      x26, x20, #0x60
0025B12C 13713491 add      x19, x8, #0xd1c
0025B130 f40f00f9 str      x20, [sp, #0x18]
0025B134 3c008052 mov      w28, #1
0025B138 76008052 mov      w22, #3
0025B13C 08000014 b        #0x25b15c
0025B140 080a8552 mov      w8, #0x2850
0025B144 18070091 add      x24, x24, #1
0025B148 5a03088b add      x26, x26, x8
0025B14C 08dc8552 mov      w8, #0x2ee0
0025B150 1fb304f1 cmp      x24, #0x12c
0025B154 7302088b add      x19, x19, x8
0025B158 a0020054 b.eq     #0x25b1ac
0025B15C d4038052 mov      w20, #0x1e
0025B160 fb0313aa mov      x27, x19
0025B164 f7031aaa mov      x23, x26
0025B168 06000014 b        #0x25b180
0025B16C 1f2003d5 nop      
0025B170 f7620591 add      x23, x23, #0x158
0025B174 7b430691 add      x27, x27, #0x190
0025B178 940600f1 subs     x20, x20, #1
0025B17C 20feff54 b.eq     #0x25b140
0025B180 e00315aa mov      x0, x21
0025B184 e10317aa mov      x1, x23
0025B188 41710b94 bl       #0x53768c
0025B18C e00315aa mov      x0, x21
0025B190 f9570b94 bl       #0x531174
0025B194 e0fe0737 tbnz     w0, #0, #0x25b170
0025B198 7c831cf8 stur     x28, [x27, #-0x38]
0025B19C 9c070091 add      x28, x28, #1
0025B1A0 76831fb8 stur     w22, [x27, #-8]
0025B1A4 790300b9 str      w25, [x27]
0025B1A8 f2ffff17 b        #0x25b170
0025B1AC e12341a9 ldp      x1, x8, [sp, #0x10]
0025B1B0 02b88752 mov      w2, #0x3dc0
0025B1B4 e205a072 movk     w2, #0x2f, lsl #16
0025B1B8 08cd4b91 add      x8, x8, #0x2f3, lsl #12
0025B1BC 00813891 add      x0, x8, #0xe20
0025B1C0 086d0e94 bl       #0x5f65e0
0025B1C4 e00740f9 ldr      x0, [sp, #8]
0025B1C8 080040f9 ldr      x8, [x0]
0025B1CC 080d40f9 ldr      x8, [x8, #0x18]
0025B1D0 00013fd6 blr      x8
0025B1D4 f44f48a9 ldp      x20, x19, [sp, #0x80]
0025B1D8 f65747a9 ldp      x22, x21, [sp, #0x70]
0025B1DC f85f46a9 ldp      x24, x23, [sp, #0x60]
0025B1E0 fa6745a9 ldp      x26, x25, [sp, #0x50]
0025B1E4 fc6f44a9 ldp      x28, x27, [sp, #0x40]
0025B1E8 fd7b43a9 ldp      x29, x30, [sp, #0x30]
0025B1EC ff430291 add      sp, sp, #0x90
0025B1F0 c0035fd6 ret      
0025B1F4 879ef697 bl       #0x2c10
~~~
### 0x25b1f8 (34 slots)
~~~asm
0025B1F8 ffc300d1 sub      sp, sp, #0x30
0025B1FC fd7b01a9 stp      x29, x30, [sp, #0x10]
0025B200 f44f02a9 stp      x20, x19, [sp, #0x20]
0025B204 fd430091 add      x29, sp, #0x10
0025B208 f30300aa mov      x19, x0
0025B20C 14408152 mov      w20, #0xa00
0025B210 b400a072 movk     w20, #5, lsl #16
0025B214 2b1aff97 bl       #0x221ac0
0025B218 a8938652 mov      w8, #0x349d
0025B21C 2801a072 movk     w8, #9, lsl #16
0025B220 292a0090 adrp     x9, #0x79f000
0025B224 08686838 ldrb     w8, [x0, x8]
0025B228 292542f9 ldr      x9, [x9, #0x448]
0025B22C 200140f9 ldr      x0, [x9]
0025B230 e8000034 cbz      w8, #0x25b24c
0025B234 a11300d1 sub      x1, x29, #4
0025B238 bfc31fb8 stur     wzr, [x29, #-4]
0025B23C 09580094 bl       #0x271260
0025B240 68ce4b91 add      x8, x19, #0x2f3, lsl #12
0025B244 02813891 add      x2, x8, #0xe20
0025B248 05000014 b        #0x25b25c
0025B24C a11300d1 sub      x1, x29, #4
0025B250 bfc31fb8 stur     wzr, [x29, #-4]
0025B254 03580094 bl       #0x271260
0025B258 62820191 add      x2, x19, #0x60
0025B25C f40300f9 str      x20, [sp]
0025B260 212a00f0 adrp     x1, #0x7a2000
0025B264 e3030091 mov      x3, sp
0025B268 219847f9 ldr      x1, [x1, #0xf30]
0025B26C c9feff97 bl       #0x25ad90
0025B270 f44f42a9 ldp      x20, x19, [sp, #0x20]
0025B274 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0025B278 ffc30091 add      sp, sp, #0x30
0025B27C c0035fd6 ret      
~~~
### 0x25bb48 (20 slots)
~~~asm
0025BB48 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0025BB4C f30b00f9 str      x19, [sp, #0x10]
0025BB50 fd030091 mov      x29, sp
0025BB54 282a0090 adrp     x8, #0x79f000
0025BB58 f30300aa mov      x19, x0
0025BB5C 08d943f9 ldr      x8, [x8, #0x7b0]
0025BB60 09410091 add      x9, x8, #0x10
0025BB64 0a410191 add      x10, x8, #0x50
0025BB68 08410291 add      x8, x8, #0x90
0025BB6C 09801bf8 stur     x9, [x0, #-0x48]
0025BB70 0a2000a9 stp      x10, x8, [x0]
0025BB74 000840f9 ldr      x0, [x0, #0x10]
0025BB78 a00000b4 cbz      x0, #0x25bb8c
0025BB7C 088c44f8 ldr      x8, [x0, #0x48]!
0025BB80 080d40f9 ldr      x8, [x8, #0x18]
0025BB84 00013fd6 blr      x8
0025BB88 7f0a00f9 str      xzr, [x19, #0x10]
0025BB8C f30b40f9 ldr      x19, [sp, #0x10]
0025BB90 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0025BB94 c0035fd6 ret      
~~~
### 0x25bb98 (20 slots)
~~~asm
0025BB98 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0025BB9C f30b00f9 str      x19, [sp, #0x10]
0025BBA0 fd030091 mov      x29, sp
0025BBA4 282a0090 adrp     x8, #0x79f000
0025BBA8 f30300aa mov      x19, x0
0025BBAC 08d943f9 ldr      x8, [x8, #0x7b0]
0025BBB0 09410091 add      x9, x8, #0x10
0025BBB4 0a410191 add      x10, x8, #0x50
0025BBB8 08410291 add      x8, x8, #0x90
0025BBBC 09801bf8 stur     x9, [x0, #-0x48]
0025BBC0 0a2000a9 stp      x10, x8, [x0]
0025BBC4 000840f9 ldr      x0, [x0, #0x10]
0025BBC8 a00000b4 cbz      x0, #0x25bbdc
0025BBCC 088c44f8 ldr      x8, [x0, #0x48]!
0025BBD0 080d40f9 ldr      x8, [x8, #0x18]
0025BBD4 00013fd6 blr      x8
0025BBD8 7f0a00f9 str      xzr, [x19, #0x10]
0025BBDC f30b40f9 ldr      x19, [sp, #0x10]
0025BBE0 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0025BBE4 c0035fd6 ret      
~~~
### 0x271718 (41 slots)
~~~asm
00271718 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0027171C f50b00f9 str      x21, [sp, #0x10]
00271720 f44f02a9 stp      x20, x19, [sp, #0x20]
00271724 fd030091 mov      x29, sp
00271728 13600591 add      x19, x0, #0x158
0027172C f40300aa mov      x20, x0
00271730 f503012a mov      w21, w1
00271734 e00313aa mov      x0, x19
00271738 c6130e94 bl       #0x5f6650
0027173C 809e40f9 ldr      x0, [x20, #0x138]
00271740 a00200b4 cbz      x0, #0x271794
00271744 79220094 bl       #0x27a128
00271748 1f00156b cmp      w0, w21
0027174C 41020054 b.ne     #0x271794
00271750 809e40f9 ldr      x0, [x20, #0x138]
00271754 96220094 bl       #0x27a1ac
00271758 959e40f9 ldr      x21, [x20, #0x138]
0027175C 9f9e00f9 str      xzr, [x20, #0x138]
00271760 b50100b4 cbz      x21, #0x271794
00271764 a00640f9 ldr      x0, [x21, #8]
00271768 a00000b4 cbz      x0, #0x27177c
0027176C 088c44f8 ldr      x8, [x0, #0x48]!
00271770 080d40f9 ldr      x8, [x8, #0x18]
00271774 00013fd6 blr      x8
00271778 bf0600f9 str      xzr, [x21, #8]
0027177C 800a54a9 ldp      x0, x2, [x20, #0x140]
00271780 e10315aa mov      x1, x21
00271784 83aa40f9 ldr      x3, [x20, #0x150]
00271788 080040f9 ldr      x8, [x0]
0027178C 080d40f9 ldr      x8, [x8, #0x18]
00271790 00013fd6 blr      x8
00271794 682900d0 adrp     x8, #0x79f000
00271798 81a20291 add      x1, x20, #0xa8
0027179C 08a942f9 ldr      x8, [x8, #0x550]
002717A0 000140f9 ldr      x0, [x8]
002717A4 bda40994 bl       #0x4daa98
002717A8 e00313aa mov      x0, x19
002717AC f44f42a9 ldp      x20, x19, [sp, #0x20]
002717B0 f50b40f9 ldr      x21, [sp, #0x10]
002717B4 fd7bc3a8 ldp      x29, x30, [sp], #0x30
002717B8 aa130e14 b        #0x5f6660
~~~
### 0x271ba4 (20 slots)
~~~asm
00271BA4 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00271BA8 f50b00f9 str      x21, [sp, #0x10]
00271BAC f44f02a9 stp      x20, x19, [sp, #0x20]
00271BB0 fd030091 mov      x29, sp
00271BB4 280040b9 ldr      w8, [x1]
00271BB8 14e00391 add      x20, x0, #0xf8
00271BBC 15600491 add      x21, x0, #0x118
00271BC0 f30301aa mov      x19, x1
00271BC4 1f010071 cmp      w8, #0
00271BC8 8802959a csel     x8, x20, x21, eq
00271BCC 000140f9 ldr      x0, [x8]
00271BD0 900b0094 bl       #0x274a10
00271BD4 680240b9 ldr      w8, [x19]
00271BD8 1f010071 cmp      w8, #0
00271BDC 8802959a csel     x8, x20, x21, eq
00271BE0 f44f42a9 ldp      x20, x19, [sp, #0x20]
00271BE4 f50b40f9 ldr      x21, [sp, #0x10]
00271BE8 000140f9 ldr      x0, [x8]
00271BEC fd7bc3a8 ldp      x29, x30, [sp], #0x30
00271BF0 a80a0014 b        #0x274690
~~~
### 0x271c00 (71 slots)
~~~asm
00271C00 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00271C04 f70b00f9 str      x23, [sp, #0x10]
00271C08 f65702a9 stp      x22, x21, [sp, #0x20]
00271C0C f44f03a9 stp      x20, x19, [sp, #0x30]
00271C10 fd030091 mov      x29, sp
00271C14 f303012a mov      w19, w1
00271C18 f40300aa mov      x20, x0
00271C1C 4bfeff97 bl       #0x271548
00271C20 80050036 tbz      w0, #0, #0x271cd0
00271C24 95620591 add      x21, x20, #0x158
00271C28 e00315aa mov      x0, x21
00271C2C 89120e94 bl       #0x5f6650
00271C30 809e40f9 ldr      x0, [x20, #0x138]
00271C34 c00000b4 cbz      x0, #0x271c4c
00271C38 3c210094 bl       #0x27a128
00271C3C 1f00136b cmp      w0, w19
00271C40 61000054 b.ne     #0x271c4c
00271C44 809e40f9 ldr      x0, [x20, #0x138]
00271C48 3a210094 bl       #0x27a130
00271C4C e00315aa mov      x0, x21
00271C50 84120e94 bl       #0x5f6660
00271C54 16d09252 mov      w22, #0x9680
00271C58 1613a072 movk     w22, #0x98, lsl #16
00271C5C 05000014 b        #0x271c70
00271C60 e00315aa mov      x0, x21
00271C64 7f120e94 bl       #0x5f6660
00271C68 e00316aa mov      x0, x22
00271C6C b9110e94 bl       #0x5f6350
00271C70 e00315aa mov      x0, x21
00271C74 77120e94 bl       #0x5f6650
00271C78 809e40f9 ldr      x0, [x20, #0x138]
00271C7C 20ffffb4 cbz      x0, #0x271c60
00271C80 2a210094 bl       #0x27a128
00271C84 1f00136b cmp      w0, w19
00271C88 c1feff54 b.ne     #0x271c60
00271C8C 809e40f9 ldr      x0, [x20, #0x138]
00271C90 30210094 bl       #0x27a150
00271C94 f703002a mov      w23, w0
00271C98 e00315aa mov      x0, x21
00271C9C 71120e94 bl       #0x5f6660
00271CA0 57fe0736 tbz      w23, #0, #0x271c68
00271CA4 e00315aa mov      x0, x21
00271CA8 6a120e94 bl       #0x5f6650
00271CAC 809e40f9 ldr      x0, [x20, #0x138]
00271CB0 e00100b4 cbz      x0, #0x271cec
00271CB4 1d210094 bl       #0x27a128
00271CB8 1f00136b cmp      w0, w19
00271CBC 81010054 b.ne     #0x271cec
00271CC0 809e40f9 ldr      x0, [x20, #0x138]
00271CC4 2b210094 bl       #0x27a170
00271CC8 f603002a mov      w22, w0
00271CCC 09000014 b        #0x271cf0
00271CD0 f6031f2a mov      w22, wzr
00271CD4 e003162a mov      w0, w22
00271CD8 f44f43a9 ldp      x20, x19, [sp, #0x30]
00271CDC f65742a9 ldp      x22, x21, [sp, #0x20]
00271CE0 f70b40f9 ldr      x23, [sp, #0x10]
00271CE4 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00271CE8 c0035fd6 ret      
00271CEC f6031f2a mov      w22, wzr
00271CF0 e00315aa mov      x0, x21
00271CF4 5b120e94 bl       #0x5f6660
00271CF8 e00314aa mov      x0, x20
00271CFC e103132a mov      w1, w19
00271D00 86feff97 bl       #0x271718
00271D04 e003162a mov      w0, w22
00271D08 f44f43a9 ldp      x20, x19, [sp, #0x30]
00271D0C f65742a9 ldp      x22, x21, [sp, #0x20]
00271D10 f70b40f9 ldr      x23, [sp, #0x10]
00271D14 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00271D18 c0035fd6 ret      
~~~
### 0x274640 (20 slots)
~~~asm
00274640 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00274644 f30b00f9 str      x19, [sp, #0x10]
00274648 fd030091 mov      x29, sp
0027464C f30300aa mov      x19, x0
00274650 005040f9 ldr      x0, [x0, #0xa0]
00274654 800100b4 cbz      x0, #0x274684
00274658 7e180094 bl       #0x27a850
0027465C 1f080071 cmp      w0, #2
00274660 61000054 b.ne     #0x27466c
00274664 e00313aa mov      x0, x19
00274668 0a000094 bl       #0x274690
0027466C 605240f9 ldr      x0, [x19, #0xa0]
00274670 a00000b4 cbz      x0, #0x274684
00274674 088c44f8 ldr      x8, [x0, #0x48]!
00274678 080d40f9 ldr      x8, [x8, #0x18]
0027467C 00013fd6 blr      x8
00274680 7f5200f9 str      xzr, [x19, #0xa0]
00274684 f30b40f9 ldr      x19, [sp, #0x10]
00274688 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0027468C c0035fd6 ret      
~~~
### 0x274690 (124 slots)
~~~asm
00274690 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
00274694 fc6f01a9 stp      x28, x27, [sp, #0x10]
00274698 fa6702a9 stp      x26, x25, [sp, #0x20]
0027469C f85f03a9 stp      x24, x23, [sp, #0x30]
002746A0 f65704a9 stp      x22, x21, [sp, #0x40]
002746A4 f44f05a9 stp      x20, x19, [sp, #0x50]
002746A8 fd030091 mov      x29, sp
002746AC 18644ba9 ldp      x24, x25, [x0, #0xb0]
002746B0 f30300aa mov      x19, x0
002746B4 1f0319eb cmp      x24, x25
002746B8 400c0054 b.eq     #0x274840
002746BC 742900d0 adrp     x20, #0x7a2000
002746C0 562900f0 adrp     x22, #0x79f000
002746C4 948247f9 ldr      x20, [x20, #0xf00]
002746C8 7c2900d0 adrp     x28, #0x7a2000
002746CC d64e42f9 ldr      x22, [x22, #0x498]
002746D0 9c8747f9 ldr      x28, [x28, #0xf08]
002746D4 0d000014 b        #0x274708
002746D8 f7031faa mov      x23, xzr
002746DC e80240f9 ldr      x8, [x23]
002746E0 e00317aa mov      x0, x23
002746E4 082140f9 ldr      x8, [x8, #0x40]
002746E8 00013fd6 blr      x8
002746EC e88e44f8 ldr      x8, [x23, #0x48]!
002746F0 e00317aa mov      x0, x23
002746F4 080d40f9 ldr      x8, [x8, #0x18]
002746F8 00013fd6 blr      x8
002746FC 18230091 add      x24, x24, #8
00274700 1f0319eb cmp      x24, x25
00274704 e0090054 b.eq     #0x274840
00274708 080340f9 ldr      x8, [x24]
0027470C 88ffffb4 cbz      x8, #0x2746fc
00274710 08510191 add      x8, x8, #0x54
00274714 08fddf88 ldar     w8, [x8]
00274718 28ffff34 cbz      w8, #0x2746fc
0027471C 170340f9 ldr      x23, [x24]
00274720 f7fdffb4 cbz      x23, #0x2746dc
00274724 f55640b9 ldr      w21, [x23, #0x54]
00274728 95fdff34 cbz      w21, #0x2746d8
0027472C fa520191 add      x26, x23, #0x54
00274730 06000014 b        #0x274748
00274734 5f3f03d5 clrex    
00274738 e9031f2a mov      w9, wzr
0027473C 9f070037 tbnz     wzr, #0, #0x27482c
00274740 f503082a mov      w21, w8
00274744 a8fcff34 cbz      w8, #0x2746d8
00274748 fb2e40f9 ldr      x27, [x23, #0x58]
0027474C 88fedf08 ldarb    w8, [x20]
00274750 48020036 tbz      w8, #0, #0x274798
00274754 7f031ceb cmp      x27, x28
00274758 e0000054 b.eq     #0x274774
0027475C 1f2003d5 nop      
00274760 7b0340f9 ldr      x27, [x27]
00274764 7f031ceb cmp      x27, x28
00274768 641b40fa ccmp     x27, #0, #4, ne
0027476C a1ffff54 b.ne     #0x274760
00274770 5bfbffb4 cbz      x27, #0x2746d8
00274774 487f5f88 ldxr     w8, [x26]
00274778 1f01156b cmp      w8, w21
0027477C c1fdff54 b.ne     #0x274734
00274780 a9060011 add      w9, w21, #1
00274784 497f0a88 stxr     w10, w9, [x26]
00274788 8afdff35 cbnz     w10, #0x274738
0027478C 29008052 mov      w9, #1
00274790 89fd0736 tbz      w9, #0, #0x274740
00274794 26000014 b        #0x27482c
00274798 e00314aa mov      x0, x20
0027479C 8d060e94 bl       #0x5f61d0
002747A0 a0fdff34 cbz      w0, #0x274754
002747A4 482900f0 adrp     x8, #0x79f000
002747A8 08c943f9 ldr      x8, [x8, #0x790]
002747AC 08fddf08 ldarb    w8, [x8]
002747B0 e8000036 tbz      w8, #0, #0x2747cc
002747B4 482900f0 adrp     x8, #0x79f000
002747B8 e00314aa mov      x0, x20
002747BC 08cd43f9 ldr      x8, [x8, #0x798]
002747C0 880300f9 str      x8, [x28]
002747C4 87060e94 bl       #0x5f61e0
002747C8 e3ffff17 b        #0x274754
002747CC 402900f0 adrp     x0, #0x79f000
002747D0 00c843f9 ldr      x0, [x0, #0x790]
002747D4 7f060e94 bl       #0x5f61d0
002747D8 e0feff34 cbz      w0, #0x2747b4
002747DC c8fedf08 ldarb    w8, [x22]
002747E0 48010036 tbz      w8, #0, #0x274808
002747E4 482900f0 adrp     x8, #0x79f000
002747E8 492900f0 adrp     x9, #0x79f000
002747EC 085142f9 ldr      x8, [x8, #0x4a0]
002747F0 29cd43f9 ldr      x9, [x9, #0x798]
002747F4 402900f0 adrp     x0, #0x79f000
002747F8 280100f9 str      x8, [x9]
002747FC 00c843f9 ldr      x0, [x0, #0x790]
00274800 78060e94 bl       #0x5f61e0
00274804 ecffff17 b        #0x2747b4
00274808 e00316aa mov      x0, x22
0027480C 71060e94 bl       #0x5f61d0
00274810 a0feff34 cbz      w0, #0x2747e4
00274814 482900f0 adrp     x8, #0x79f000
00274818 e00316aa mov      x0, x22
0027481C 085142f9 ldr      x8, [x8, #0x4a0]
00274820 1f0100f9 str      xzr, [x8]
00274824 6f060e94 bl       #0x5f61e0
00274828 efffff17 b        #0x2747e4
0027482C e83240f9 ldr      x8, [x23, #0x60]
00274830 094101d1 sub      x9, x8, #0x50
00274834 1f0100f1 cmp      x8, #0
00274838 f703899a csel     x23, xzr, x9, eq
0027483C a8ffff17 b        #0x2746dc
00274840 744e51a9 ldp      x20, x19, [x19, #0x110]
00274844 9f0213eb cmp      x20, x19
00274848 e0000054 b.eq     #0x274864
0027484C 1f2003d5 nop      
00274850 80820091 add      x0, x20, #0x20
00274854 880648f8 ldr      x8, [x20], #0x80
00274858 00013fd6 blr      x8
0027485C 9f0213eb cmp      x20, x19
00274860 81ffff54 b.ne     #0x274850
00274864 f44f45a9 ldp      x20, x19, [sp, #0x50]
00274868 f65744a9 ldp      x22, x21, [sp, #0x40]
0027486C f85f43a9 ldp      x24, x23, [sp, #0x30]
00274870 fa6742a9 ldp      x26, x25, [sp, #0x20]
00274874 fc6f41a9 ldp      x28, x27, [sp, #0x10]
00274878 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0027487C c0035fd6 ret      
~~~
### 0x2749d0 (13 slots)
~~~asm
002749D0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
002749D4 f30b00f9 str      x19, [sp, #0x10]
002749D8 fd030091 mov      x29, sp
002749DC f30300aa mov      x19, x0
002749E0 005440f9 ldr      x0, [x0, #0xa8]
002749E4 a00000b4 cbz      x0, #0x2749f8
002749E8 088c44f8 ldr      x8, [x0, #0x48]!
002749EC 080d40f9 ldr      x8, [x8, #0x18]
002749F0 00013fd6 blr      x8
002749F4 7f5600f9 str      xzr, [x19, #0xa8]
002749F8 f30b40f9 ldr      x19, [sp, #0x10]
002749FC fd7bc2a8 ldp      x29, x30, [sp], #0x20
00274A00 c0035fd6 ret      
~~~
### 0x274a10 (124 slots)
~~~asm
00274A10 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
00274A14 fc6f01a9 stp      x28, x27, [sp, #0x10]
00274A18 fa6702a9 stp      x26, x25, [sp, #0x20]
00274A1C f85f03a9 stp      x24, x23, [sp, #0x30]
00274A20 f65704a9 stp      x22, x21, [sp, #0x40]
00274A24 f44f05a9 stp      x20, x19, [sp, #0x50]
00274A28 fd030091 mov      x29, sp
00274A2C 18644ba9 ldp      x24, x25, [x0, #0xb0]
00274A30 f30300aa mov      x19, x0
00274A34 1f0319eb cmp      x24, x25
00274A38 400c0054 b.eq     #0x274bc0
00274A3C 742900d0 adrp     x20, #0x7a2000
00274A40 562900f0 adrp     x22, #0x79f000
00274A44 948247f9 ldr      x20, [x20, #0xf00]
00274A48 7c2900d0 adrp     x28, #0x7a2000
00274A4C d64e42f9 ldr      x22, [x22, #0x498]
00274A50 9c8747f9 ldr      x28, [x28, #0xf08]
00274A54 0d000014 b        #0x274a88
00274A58 f7031faa mov      x23, xzr
00274A5C e80240f9 ldr      x8, [x23]
00274A60 e00317aa mov      x0, x23
00274A64 081d40f9 ldr      x8, [x8, #0x38]
00274A68 00013fd6 blr      x8
00274A6C e88e44f8 ldr      x8, [x23, #0x48]!
00274A70 e00317aa mov      x0, x23
00274A74 080d40f9 ldr      x8, [x8, #0x18]
00274A78 00013fd6 blr      x8
00274A7C 18230091 add      x24, x24, #8
00274A80 1f0319eb cmp      x24, x25
00274A84 e0090054 b.eq     #0x274bc0
00274A88 080340f9 ldr      x8, [x24]
00274A8C 88ffffb4 cbz      x8, #0x274a7c
00274A90 08510191 add      x8, x8, #0x54
00274A94 08fddf88 ldar     w8, [x8]
00274A98 28ffff34 cbz      w8, #0x274a7c
00274A9C 170340f9 ldr      x23, [x24]
00274AA0 f7fdffb4 cbz      x23, #0x274a5c
00274AA4 f55640b9 ldr      w21, [x23, #0x54]
00274AA8 95fdff34 cbz      w21, #0x274a58
00274AAC fa520191 add      x26, x23, #0x54
00274AB0 06000014 b        #0x274ac8
00274AB4 5f3f03d5 clrex    
00274AB8 e9031f2a mov      w9, wzr
00274ABC 9f070037 tbnz     wzr, #0, #0x274bac
00274AC0 f503082a mov      w21, w8
00274AC4 a8fcff34 cbz      w8, #0x274a58
00274AC8 fb2e40f9 ldr      x27, [x23, #0x58]
00274ACC 88fedf08 ldarb    w8, [x20]
00274AD0 48020036 tbz      w8, #0, #0x274b18
00274AD4 7f031ceb cmp      x27, x28
00274AD8 e0000054 b.eq     #0x274af4
00274ADC 1f2003d5 nop      
00274AE0 7b0340f9 ldr      x27, [x27]
00274AE4 7f031ceb cmp      x27, x28
00274AE8 641b40fa ccmp     x27, #0, #4, ne
00274AEC a1ffff54 b.ne     #0x274ae0
00274AF0 5bfbffb4 cbz      x27, #0x274a58
00274AF4 487f5f88 ldxr     w8, [x26]
00274AF8 1f01156b cmp      w8, w21
00274AFC c1fdff54 b.ne     #0x274ab4
00274B00 a9060011 add      w9, w21, #1
00274B04 497f0a88 stxr     w10, w9, [x26]
00274B08 8afdff35 cbnz     w10, #0x274ab8
00274B0C 29008052 mov      w9, #1
00274B10 89fd0736 tbz      w9, #0, #0x274ac0
00274B14 26000014 b        #0x274bac
00274B18 e00314aa mov      x0, x20
00274B1C ad050e94 bl       #0x5f61d0
00274B20 a0fdff34 cbz      w0, #0x274ad4
00274B24 482900f0 adrp     x8, #0x79f000
00274B28 08c943f9 ldr      x8, [x8, #0x790]
00274B2C 08fddf08 ldarb    w8, [x8]
00274B30 e8000036 tbz      w8, #0, #0x274b4c
00274B34 482900f0 adrp     x8, #0x79f000
00274B38 e00314aa mov      x0, x20
00274B3C 08cd43f9 ldr      x8, [x8, #0x798]
00274B40 880300f9 str      x8, [x28]
00274B44 a7050e94 bl       #0x5f61e0
00274B48 e3ffff17 b        #0x274ad4
00274B4C 402900f0 adrp     x0, #0x79f000
00274B50 00c843f9 ldr      x0, [x0, #0x790]
00274B54 9f050e94 bl       #0x5f61d0
00274B58 e0feff34 cbz      w0, #0x274b34
00274B5C c8fedf08 ldarb    w8, [x22]
00274B60 48010036 tbz      w8, #0, #0x274b88
00274B64 482900f0 adrp     x8, #0x79f000
00274B68 492900f0 adrp     x9, #0x79f000
00274B6C 085142f9 ldr      x8, [x8, #0x4a0]
00274B70 29cd43f9 ldr      x9, [x9, #0x798]
00274B74 402900f0 adrp     x0, #0x79f000
00274B78 280100f9 str      x8, [x9]
00274B7C 00c843f9 ldr      x0, [x0, #0x790]
00274B80 98050e94 bl       #0x5f61e0
00274B84 ecffff17 b        #0x274b34
00274B88 e00316aa mov      x0, x22
00274B8C 91050e94 bl       #0x5f61d0
00274B90 a0feff34 cbz      w0, #0x274b64
00274B94 482900f0 adrp     x8, #0x79f000
00274B98 e00316aa mov      x0, x22
00274B9C 085142f9 ldr      x8, [x8, #0x4a0]
00274BA0 1f0100f9 str      xzr, [x8]
00274BA4 8f050e94 bl       #0x5f61e0
00274BA8 efffff17 b        #0x274b64
00274BAC e83240f9 ldr      x8, [x23, #0x60]
00274BB0 094101d1 sub      x9, x8, #0x50
00274BB4 1f0100f1 cmp      x8, #0
00274BB8 f703899a csel     x23, xzr, x9, eq
00274BBC a8ffff17 b        #0x274a5c
00274BC0 744e4ea9 ldp      x20, x19, [x19, #0xe0]
00274BC4 9f0213eb cmp      x20, x19
00274BC8 e0000054 b.eq     #0x274be4
00274BCC 1f2003d5 nop      
00274BD0 80820091 add      x0, x20, #0x20
00274BD4 880648f8 ldr      x8, [x20], #0x80
00274BD8 00013fd6 blr      x8
00274BDC 9f0213eb cmp      x20, x19
00274BE0 81ffff54 b.ne     #0x274bd0
00274BE4 f44f45a9 ldp      x20, x19, [sp, #0x50]
00274BE8 f65744a9 ldp      x22, x21, [sp, #0x40]
00274BEC f85f43a9 ldp      x24, x23, [sp, #0x30]
00274BF0 fa6742a9 ldp      x26, x25, [sp, #0x20]
00274BF4 fc6f41a9 ldp      x28, x27, [sp, #0x10]
00274BF8 fd7bc6a8 ldp      x29, x30, [sp], #0x60
00274BFC c0035fd6 ret      
~~~
### 0x27a1ac (28 slots)
~~~asm
0027A1AC ffc300d1 sub      sp, sp, #0x30
0027A1B0 fd7b01a9 stp      x29, x30, [sp, #0x10]
0027A1B4 f44f02a9 stp      x20, x19, [sp, #0x20]
0027A1B8 fd430091 add      x29, sp, #0x10
0027A1BC 342900b0 adrp     x20, #0x79f000
0027A1C0 f30300aa mov      x19, x0
0027A1C4 942642f9 ldr      x20, [x20, #0x448]
0027A1C8 a11300d1 sub      x1, x29, #4
0027A1CC bfc31fb8 stur     wzr, [x29, #-4]
0027A1D0 800240f9 ldr      x0, [x20]
0027A1D4 23dcff97 bl       #0x271260
0027A1D8 1ae9ff97 bl       #0x274640
0027A1DC 800240f9 ldr      x0, [x20]
0027A1E0 28008052 mov      w8, #1
0027A1E4 e1230091 add      x1, sp, #8
0027A1E8 e80b00b9 str      w8, [sp, #8]
0027A1EC 1ddcff97 bl       #0x271260
0027A1F0 14e9ff97 bl       #0x274640
0027A1F4 600640f9 ldr      x0, [x19, #8]
0027A1F8 a00000b4 cbz      x0, #0x27a20c
0027A1FC 088c44f8 ldr      x8, [x0, #0x48]!
0027A200 080d40f9 ldr      x8, [x8, #0x18]
0027A204 00013fd6 blr      x8
0027A208 7f0600f9 str      xzr, [x19, #8]
0027A20C f44f42a9 ldp      x20, x19, [sp, #0x20]
0027A210 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0027A214 ffc30091 add      sp, sp, #0x30
0027A218 c0035fd6 ret      
~~~
### 0x27a2f0 (150 slots)
~~~asm
0027A2F0 ff4302d1 sub      sp, sp, #0x90
0027A2F4 fd7b04a9 stp      x29, x30, [sp, #0x40]
0027A2F8 fa6705a9 stp      x26, x25, [sp, #0x50]
0027A2FC f85f06a9 stp      x24, x23, [sp, #0x60]
0027A300 f65707a9 stp      x22, x21, [sp, #0x70]
0027A304 f44f08a9 stp      x20, x19, [sp, #0x80]
0027A308 fd030191 add      x29, sp, #0x40
0027A30C 282900b0 adrp     x8, #0x79f000
0027A310 f30300aa mov      x19, x0
0027A314 082542f9 ldr      x8, [x8, #0x448]
0027A318 a11300d1 sub      x1, x29, #4
0027A31C bfc31fb8 stur     wzr, [x29, #-4]
0027A320 140140f9 ldr      x20, [x8]
0027A324 e00314aa mov      x0, x20
0027A328 cedbff97 bl       #0x271260
0027A32C 687243b9 ldr      w8, [x19, #0x370]
0027A330 76e20d91 add      x22, x19, #0x378
0027A334 f50300aa mov      x21, x0
0027A338 770640f9 ldr      x23, [x19, #8]
0027A33C e00316aa mov      x0, x22
0027A340 e1031f2a mov      w1, wzr
0027A344 1f090071 cmp      w8, #2
0027A348 e8230091 add      x8, sp, #8
0027A34C e2179f1a cset     w2, eq
0027A350 e0000094 bl       #0x27a6d0
0027A354 e2230091 add      x2, sp, #8
0027A358 e00315aa mov      x0, x21
0027A35C e10317aa mov      x1, x23
0027A360 64e8ff97 bl       #0x2744f0
0027A364 e81340f9 ldr      x8, [sp, #0x20]
0027A368 c80000b4 cbz      x8, #0x27a380
0027A36C e00740f9 ldr      x0, [sp, #8]
0027A370 800000b4 cbz      x0, #0x27a380
0027A374 088c44f8 ldr      x8, [x0, #0x48]!
0027A378 080d40f9 ldr      x8, [x8, #0x18]
0027A37C 00013fd6 blr      x8
0027A380 e01740f9 ldr      x0, [sp, #0x28]
0027A384 b9c884d2 mov      x25, #0x2645
0027A388 5984b0f2 movk     x25, #0x8422, lsl #16
0027A38C 999cd3f2 movk     x25, #0x9ce4, lsl #32
0027A390 597ef9f2 movk     x25, #0xcbf2, lsl #48
0027A394 ba1c00b0 adrp     x26, #0x60f000
0027A398 5a0f1a91 add      x26, x26, #0x683
0027A39C ffe700a9 stp      xzr, x25, [sp, #8]
0027A3A0 faff01a9 stp      x26, xzr, [sp, #0x18]
0027A3A4 800000b4 cbz      x0, #0x27a3b4
0027A3A8 088c44f8 ldr      x8, [x0, #0x48]!
0027A3AC 080d40f9 ldr      x8, [x8, #0x18]
0027A3B0 00013fd6 blr      x8
0027A3B4 15d09252 mov      w21, #0x9680
0027A3B8 1513a072 movk     w21, #0x98, lsl #16
0027A3BC a11300d1 sub      x1, x29, #4
0027A3C0 e00314aa mov      x0, x20
0027A3C4 a7dbff97 bl       #0x271260
0027A3C8 92e8ff97 bl       #0x274610
0027A3CC 00010037 tbnz     w0, #0, #0x27a3ec
0027A3D0 e00315aa mov      x0, x21
0027A3D4 dfef0d94 bl       #0x5f6350
0027A3D8 a11300d1 sub      x1, x29, #4
0027A3DC e00314aa mov      x0, x20
0027A3E0 a0dbff97 bl       #0x271260
0027A3E4 8be8ff97 bl       #0x274610
0027A3E8 40ff0736 tbz      w0, #0, #0x27a3d0
0027A3EC a11300d1 sub      x1, x29, #4
0027A3F0 e00314aa mov      x0, x20
0027A3F4 9bdbff97 bl       #0x271260
0027A3F8 8ee8ff97 bl       #0x274630
0027A3FC 1f080071 cmp      w0, #2
0027A400 e1000054 b.ne     #0x27a41c
0027A404 4ec7ff97 bl       #0x26c13c
0027A408 171c0012 and      w23, w0, #0xff
0027A40C 4ac7ff97 bl       #0x26c134
0027A410 ff02206b cmp      w23, w0, uxtb
0027A414 48008052 mov      w8, #2
0027A418 0025881a cinc     w0, w8, lo
0027A41C 68f243b9 ldr      w8, [x19, #0x3f0]
0027A420 a11300d1 sub      x1, x29, #4
0027A424 1f00086b cmp      w0, w8
0027A428 08c0881a csel     w8, w0, w8, gt
0027A42C e00314aa mov      x0, x20
0027A430 68f203b9 str      w8, [x19, #0x3f0]
0027A434 28008052 mov      w8, #1
0027A438 a8c31fb8 stur     w8, [x29, #-4]
0027A43C 89dbff97 bl       #0x271260
0027A440 780640f9 ldr      x24, [x19, #8]
0027A444 f70300aa mov      x23, x0
0027A448 e8230091 add      x8, sp, #8
0027A44C e00316aa mov      x0, x22
0027A450 21008052 mov      w1, #1
0027A454 e2031f2a mov      w2, wzr
0027A458 9e000094 bl       #0x27a6d0
0027A45C e2230091 add      x2, sp, #8
0027A460 e00317aa mov      x0, x23
0027A464 e10318aa mov      x1, x24
0027A468 22e8ff97 bl       #0x2744f0
0027A46C e81340f9 ldr      x8, [sp, #0x20]
0027A470 c80000b4 cbz      x8, #0x27a488
0027A474 e00740f9 ldr      x0, [sp, #8]
0027A478 800000b4 cbz      x0, #0x27a488
0027A47C 088c44f8 ldr      x8, [x0, #0x48]!
0027A480 080d40f9 ldr      x8, [x8, #0x18]
0027A484 00013fd6 blr      x8
0027A488 e01740f9 ldr      x0, [sp, #0x28]
0027A48C ffe700a9 stp      xzr, x25, [sp, #8]
0027A490 faff01a9 stp      x26, xzr, [sp, #0x18]
0027A494 200100b4 cbz      x0, #0x27a4b8
0027A498 088c44f8 ldr      x8, [x0, #0x48]!
0027A49C 080d40f9 ldr      x8, [x8, #0x18]
0027A4A0 00013fd6 blr      x8
0027A4A4 05000014 b        #0x27a4b8
0027A4A8 1f2003d5 nop      
0027A4AC 1f2003d5 nop      
0027A4B0 e00315aa mov      x0, x21
0027A4B4 a7ef0d94 bl       #0x5f6350
0027A4B8 a11300d1 sub      x1, x29, #4
0027A4BC e00314aa mov      x0, x20
0027A4C0 68dbff97 bl       #0x271260
0027A4C4 53e8ff97 bl       #0x274610
0027A4C8 40ff0736 tbz      w0, #0, #0x27a4b0
0027A4CC a11300d1 sub      x1, x29, #4
0027A4D0 e00314aa mov      x0, x20
0027A4D4 63dbff97 bl       #0x271260
0027A4D8 56e8ff97 bl       #0x274630
0027A4DC 1f100071 cmp      w0, #4
0027A4E0 c1000054 b.ne     #0x27a4f8
0027A4E4 a11300d1 sub      x1, x29, #4
0027A4E8 e00314aa mov      x0, x20
0027A4EC 5ddbff97 bl       #0x271260
0027A4F0 48e9ff97 bl       #0x274a10
0027A4F4 40008052 mov      w0, #2
0027A4F8 68f243b9 ldr      w8, [x19, #0x3f0]
0027A4FC 74420f91 add      x20, x19, #0x3d0
0027A500 1f00086b cmp      w0, w8
0027A504 08c0881a csel     w8, w0, w8, gt
0027A508 e00314aa mov      x0, x20
0027A50C 68f203b9 str      w8, [x19, #0x3f0]
0027A510 50f00d94 bl       #0x5f6650
0027A514 68f243b9 ldr      w8, [x19, #0x3f0]
0027A518 e00314aa mov      x0, x20
0027A51C 68ca03b9 str      w8, [x19, #0x3c8]
0027A520 50f00d94 bl       #0x5f6660
0027A524 e00313aa mov      x0, x19
0027A528 c8b90994 bl       #0x4e8c48
0027A52C f44f48a9 ldp      x20, x19, [sp, #0x80]
0027A530 f65747a9 ldp      x22, x21, [sp, #0x70]
0027A534 f85f46a9 ldp      x24, x23, [sp, #0x60]
0027A538 fa6745a9 ldp      x26, x25, [sp, #0x50]
0027A53C fd7b44a9 ldp      x29, x30, [sp, #0x40]
0027A540 ff430291 add      sp, sp, #0x90
0027A544 c0035fd6 ret      
~~~
### 0x27a5c8 (16 slots)
~~~asm
0027A5C8 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0027A5CC f30b00f9 str      x19, [sp, #0x10]
0027A5D0 fd030091 mov      x29, sp
0027A5D4 f30300aa mov      x19, x0
0027A5D8 00200e91 add      x0, x0, #0x388
0027A5DC 69ef0d94 bl       #0x5f6380
0027A5E0 60b241f9 ldr      x0, [x19, #0x360]
0027A5E4 a00000b4 cbz      x0, #0x27a5f8
0027A5E8 088c44f8 ldr      x8, [x0, #0x48]!
0027A5EC 080d40f9 ldr      x8, [x8, #0x18]
0027A5F0 00013fd6 blr      x8
0027A5F4 7fb201f9 str      xzr, [x19, #0x360]
0027A5F8 602201d1 sub      x0, x19, #0x48
0027A5FC f30b40f9 ldr      x19, [sp, #0x10]
0027A600 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0027A604 65b80914 b        #0x4e8798
~~~
### 0x27a608 (16 slots)
~~~asm
0027A608 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0027A60C f30b00f9 str      x19, [sp, #0x10]
0027A610 fd030091 mov      x29, sp
0027A614 f30300aa mov      x19, x0
0027A618 00200e91 add      x0, x0, #0x388
0027A61C 59ef0d94 bl       #0x5f6380
0027A620 60b241f9 ldr      x0, [x19, #0x360]
0027A624 a00000b4 cbz      x0, #0x27a638
0027A628 088c44f8 ldr      x8, [x0, #0x48]!
0027A62C 080d40f9 ldr      x8, [x8, #0x18]
0027A630 00013fd6 blr      x8
0027A634 7fb201f9 str      xzr, [x19, #0x360]
0027A638 602201d1 sub      x0, x19, #0x48
0027A63C f30b40f9 ldr      x19, [sp, #0x10]
0027A640 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0027A644 55b80914 b        #0x4e8798
~~~
### 0x27ae98 (54 slots)
~~~asm
0027AE98 080440f9 ldr      x8, [x0, #8]
0027AE9C 880600b4 cbz      x8, #0x27af6c
0027AEA0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0027AEA4 f50b00f9 str      x21, [sp, #0x10]
0027AEA8 f44f02a9 stp      x20, x19, [sp, #0x20]
0027AEAC fd030091 mov      x29, sp
0027AEB0 080040b9 ldr      w8, [x0]
0027AEB4 342900b0 adrp     x20, #0x79f000
0027AEB8 29008052 mov      w9, #1
0027AEBC 942642f9 ldr      x20, [x20, #0x448]
0027AEC0 ca028052 mov      w10, #0x16
0027AEC4 f30300aa mov      x19, x0
0027AEC8 2921c81a lsl      w9, w9, w8
0027AECC 1f110071 cmp      w8, #4
0027AED0 29010a0a and      w9, w9, w10
0027AED4 2499407a ccmp     w9, #0, #4, ls
0027AED8 a0010054 b.eq     #0x27af0c
0027AEDC 800240f9 ldr      x0, [x20]
0027AEE0 a1730091 add      x1, x29, #0x1c
0027AEE4 bf1f00b9 str      wzr, [x29, #0x1c]
0027AEE8 ded8ff97 bl       #0x271260
0027AEEC b9e6ff97 bl       #0x2749d0
0027AEF0 800240f9 ldr      x0, [x20]
0027AEF4 a1730091 add      x1, x29, #0x1c
0027AEF8 bf1f00b9 str      wzr, [x29, #0x1c]
0027AEFC d9d8ff97 bl       #0x271260
0027AF00 08600291 add      x8, x0, #0x98
0027AF04 1ffd9f08 stlrb    wzr, [x8]
0027AF08 680240b9 ldr      w8, [x19]
0027AF0C 080d0051 sub      w8, w8, #3
0027AF10 1f050071 cmp      w8, #1
0027AF14 a8010054 b.hi     #0x27af48
0027AF18 800240f9 ldr      x0, [x20]
0027AF1C 35008052 mov      w21, #1
0027AF20 a1730091 add      x1, x29, #0x1c
0027AF24 b51f00b9 str      w21, [x29, #0x1c]
0027AF28 ced8ff97 bl       #0x271260
0027AF2C a9e6ff97 bl       #0x2749d0
0027AF30 800240f9 ldr      x0, [x20]
0027AF34 a1730091 add      x1, x29, #0x1c
0027AF38 b51f00b9 str      w21, [x29, #0x1c]
0027AF3C c9d8ff97 bl       #0x271260
0027AF40 08600291 add      x8, x0, #0x98
0027AF44 1ffd9f08 stlrb    wzr, [x8]
0027AF48 600640f9 ldr      x0, [x19, #8]
0027AF4C a00000b4 cbz      x0, #0x27af60
0027AF50 088c44f8 ldr      x8, [x0, #0x48]!
0027AF54 080d40f9 ldr      x8, [x8, #0x18]
0027AF58 00013fd6 blr      x8
0027AF5C 7f0600f9 str      xzr, [x19, #8]
0027AF60 f44f42a9 ldp      x20, x19, [sp, #0x20]
0027AF64 f50b40f9 ldr      x21, [sp, #0x10]
0027AF68 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0027AF6C c0035fd6 ret      
~~~
### 0x4e88dc (29 slots)
~~~asm
004E88DC 08700991 add      x8, x0, #0x25c
004E88E0 08fddf88 ldar     w8, [x8]
004E88E4 1f050071 cmp      w8, #1
004E88E8 21030054 b.ne     #0x4e894c
004E88EC ffc300d1 sub      sp, sp, #0x30
004E88F0 fd7b01a9 stp      x29, x30, [sp, #0x10]
004E88F4 f44f02a9 stp      x20, x19, [sp, #0x20]
004E88F8 fd430091 add      x29, sp, #0x10
004E88FC 083841f9 ldr      x8, [x0, #0x270]
004E8900 14400a91 add      x20, x0, #0x290
004E8904 f30300aa mov      x19, x0
004E8908 e00700f9 str      x0, [sp, #8]
004E890C e1230091 add      x1, sp, #8
004E8910 e00314aa mov      x0, x20
004E8914 00013fd6 blr      x8
004E8918 683e41f9 ldr      x8, [x19, #0x278]
004E891C c80000b4 cbz      x8, #0x4e8934
004E8920 69c20991 add      x9, x19, #0x270
004E8924 e00314aa mov      x0, x20
004E8928 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
004E892C 3f7d00a9 stp      xzr, xzr, [x9]
004E8930 00013fd6 blr      x8
004E8934 68720991 add      x8, x19, #0x25c
004E8938 49008052 mov      w9, #2
004E893C 09fd9f88 stlr     w9, [x8]
004E8940 f44f42a9 ldp      x20, x19, [sp, #0x20]
004E8944 fd7b41a9 ldp      x29, x30, [sp, #0x10]
004E8948 ffc30091 add      sp, sp, #0x30
004E894C c0035fd6 ret      
~~~
### 0x4e896c (10 slots)
~~~asm
004E896C 08600991 add      x8, x0, #0x258
004E8970 e41500b0 adrp     x4, #0x7a5000
004E8974 1ffd9f08 stlrb    wzr, [x8]
004E8978 08640991 add      x8, x0, #0x259
004E897C 1ffd9f08 stlrb    wzr, [x8]
004E8980 08680991 add      x8, x0, #0x25a
004E8984 00800191 add      x0, x0, #0x60
004E8988 1ffd9f08 stlrb    wzr, [x8]
004E898C 84a445f9 ldr      x4, [x4, #0xb48]
004E8990 01000014 b        #0x4e8994
~~~
### 0x4e8af0 (86 slots)
~~~asm
004E8AF0 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
004E8AF4 f85f01a9 stp      x24, x23, [sp, #0x10]
004E8AF8 f65702a9 stp      x22, x21, [sp, #0x20]
004E8AFC f44f03a9 stp      x20, x19, [sp, #0x30]
004E8B00 fd030091 mov      x29, sp
004E8B04 08600991 add      x8, x0, #0x258
004E8B08 f30300aa mov      x19, x0
004E8B0C 08fddf08 ldarb    w8, [x8]
004E8B10 a8000037 tbnz     w8, #0, #0x4e8b24
004E8B14 680240f9 ldr      x8, [x19]
004E8B18 e00313aa mov      x0, x19
004E8B1C 082d40f9 ldr      x8, [x8, #0x58]
004E8B20 00013fd6 blr      x8
004E8B24 55d03bd5 mrs      x21, tpidr_el0
004E8B28 e8098052 mov      w8, #0x4f
004E8B2C 74420991 add      x20, x19, #0x250
004E8B30 1735550a and      w23, w8, w21, lsr #13
004E8B34 764a0991 add      x22, x19, #0x252
004E8B38 1f2003d5 nop      
004E8B3C 1f2003d5 nop      
004E8B40 c8fe5f08 ldaxrb   w8, [x22]
004E8B44 1f3d0171 cmp      w8, #0x4f
004E8B48 81000054 b.ne     #0x4e8b58
004E8B4C d77e0808 stxrb    w8, w23, [x22]
004E8B50 88ffff35 cbnz     w8, #0x4e8b40
004E8B54 1c000014 b        #0x4e8bc4
004E8B58 784e0991 add      x24, x19, #0x253
004E8B5C 5f3f03d5 clrex    
004E8B60 087f5f08 ldxrb    w8, [x24]
004E8B64 08050011 add      w8, w8, #1
004E8B68 087f0908 stxrb    w9, w8, [x24]
004E8B6C a9ffff35 cbnz     w9, #0x4e8b60
004E8B70 bf3b03d5 dmb      ish
004E8B74 c8fe5f08 ldaxrb   w8, [x22]
004E8B78 1f3d0171 cmp      w8, #0x4f
004E8B7C a1000054 b.ne     #0x4e8b90
004E8B80 d77e0808 stxrb    w8, w23, [x22]
004E8B84 88ffff35 cbnz     w8, #0x4e8b74
004E8B88 0b000014 b        #0x4e8bb4
004E8B8C 1f2003d5 nop      
004E8B90 e00314aa mov      x0, x20
004E8B94 5f3f03d5 clrex    
004E8B98 72350494 bl       #0x5f6160
004E8B9C 1f2003d5 nop      
004E8BA0 c8fe5f08 ldaxrb   w8, [x22]
004E8BA4 1f3d0171 cmp      w8, #0x4f
004E8BA8 41ffff54 b.ne     #0x4e8b90
004E8BAC d77e0808 stxrb    w8, w23, [x22]
004E8BB0 88ffff35 cbnz     w8, #0x4e8ba0
004E8BB4 087f5f08 ldxrb    w8, [x24]
004E8BB8 08050051 sub      w8, w8, #1
004E8BBC 087f0908 stxrb    w9, w8, [x24]
004E8BC0 a9ffff35 cbnz     w9, #0x4e8bb4
004E8BC4 a8ca73f2 ands     x8, x21, #-0x2000
004E8BC8 80000054 b.eq     #0x4e8bd8
004E8BCC 085540f9 ldr      x8, [x8, #0xa8]
004E8BD0 1f0113eb cmp      x8, x19
004E8BD4 60010054 b.eq     #0x4e8c00
004E8BD8 77660991 add      x23, x19, #0x259
004E8BDC e8fedf08 ldarb    w8, [x23]
004E8BE0 08010037 tbnz     w8, #0, #0x4e8c00
004E8BE4 75820191 add      x21, x19, #0x60
004E8BE8 e00315aa mov      x0, x21
004E8BEC 49390494 bl       #0x5f7110
004E8BF0 e00315aa mov      x0, x21
004E8BF4 4b390494 bl       #0x5f7120
004E8BF8 28008052 mov      w8, #1
004E8BFC e8fe9f08 stlrb    w8, [x23]
004E8C00 e8098052 mov      w8, #0x4f
004E8C04 df7e5f08 ldxrb    wzr, [x22]
004E8C08 c8fe0908 stlxrb   w9, w8, [x22]
004E8C0C c9ffff35 cbnz     w9, #0x4e8c04
004E8C10 bf3b03d5 dmb      ish
004E8C14 684e4939 ldrb     w8, [x19, #0x253]
004E8C18 e8000034 cbz      w8, #0x4e8c34
004E8C1C e00314aa mov      x0, x20
004E8C20 f44f43a9 ldp      x20, x19, [sp, #0x30]
004E8C24 f65742a9 ldp      x22, x21, [sp, #0x20]
004E8C28 f85f41a9 ldp      x24, x23, [sp, #0x10]
004E8C2C fd7bc4a8 ldp      x29, x30, [sp], #0x40
004E8C30 54350414 b        #0x5f6180
004E8C34 f44f43a9 ldp      x20, x19, [sp, #0x30]
004E8C38 f65742a9 ldp      x22, x21, [sp, #0x20]
004E8C3C f85f41a9 ldp      x24, x23, [sp, #0x10]
004E8C40 fd7bc4a8 ldp      x29, x30, [sp], #0x40
004E8C44 c0035fd6 ret      
~~~
### 0x4e8c48 (4 slots)
~~~asm
004E8C48 08600991 add      x8, x0, #0x258
004E8C4C 29008052 mov      w9, #1
004E8C50 09fd9f08 stlrb    w9, [x8]
004E8C54 c0035fd6 ret      
~~~
