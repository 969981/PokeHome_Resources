# HOME41 linked editor child ownership and Model root
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a

## Relocations to Model root and lifecycle targets
- 0x768158 -> 0x160b0
- 0x76d3a8 -> 0x8d190
- 0x76d440 -> 0x87f60
- 0x76d468 -> 0x8c130
- 0x76def0 -> 0xc81b8
- 0x7a1108 -> 0x7e2080

## Direct callers and Model root references
### caller 0x160b0
000160B4 fffdff17 b        #0x158b0
### caller 0x6bb1c
0006BC5C dfa6fe97 bl       #0x157d8
### caller 0x6c208
0006C614 4f040094 bl       #0x6d750
0006C654 92040094 bl       #0x6d89c
0006C66C b1040094 bl       #0x6d930
### caller 0x6d750
0006D7B8 231c0094 bl       #0x74844
### caller 0x6f86c
0006F910 18000094 bl       #0x6f970
0006F934 a8a31194 bl       #0x4d87d4
### caller 0x70450
000704F4 1ffdff97 bl       #0x6f970
00070518 afa01194 bl       #0x4d87d4
### caller 0x70f84
00071028 52faff97 bl       #0x6f970
0007104C e29d1194 bl       #0x4d87d4
### caller 0x71ac4
00071B68 82f7ff97 bl       #0x6f970
00071B8C 129b1194 bl       #0x4d87d4
### caller 0x72688
0007272C 91f4ff97 bl       #0x6f970
00072750 21981194 bl       #0x4d87d4
### caller 0x731c4
00073268 c2f1ff97 bl       #0x6f970
0007328C 52951194 bl       #0x4d87d4
### caller 0x73d04
00073DA8 f2eeff97 bl       #0x6f970
00073DCC 82921194 bl       #0x4d87d4
### caller 0x74844
00074868 37000094 bl       #0x74944
000748E8 22ecff97 bl       #0x6f970
0007490C b28f1194 bl       #0x4d87d4
### caller 0x75608
000756AC b1e8ff97 bl       #0x6f970
000756D0 418c1194 bl       #0x4d87d4
### caller 0x7614c
000761F0 e0e5ff97 bl       #0x6f970
00076214 70891194 bl       #0x4d87d4
### caller 0x76ea4
00076F48 8ae2ff97 bl       #0x6f970
00076F6C 1a861194 bl       #0x4d87d4
### caller 0x779e4
00077A88 badfff97 bl       #0x6f970
00077AAC 4a831194 bl       #0x4d87d4
### caller 0x78388
0007842C 51ddff97 bl       #0x6f970
00078450 e1801194 bl       #0x4d87d4
### caller 0x78f48
00078FEC 61daff97 bl       #0x6f970
00079010 f17d1194 bl       #0x4d87d4
### caller 0x79b08
00079BAC 71d7ff97 bl       #0x6f970
00079BD0 017b1194 bl       #0x4d87d4
### caller 0x7a644
0007A6E8 a2d4ff97 bl       #0x6f970
0007A70C 32781194 bl       #0x4d87d4
### caller 0x7b208
0007B2AC b1d1ff97 bl       #0x6f970
0007B2D0 41751194 bl       #0x4d87d4
### caller 0x7bd44
0007BDE8 e2ceff97 bl       #0x6f970
0007BE0C 72721194 bl       #0x4d87d4
### caller 0x7c884
0007C928 12ccff97 bl       #0x6f970
0007C94C a26f1194 bl       #0x4d87d4
### caller 0x8ccd0
0008D0D4 1b000094 bl       #0x8d140
### caller 0x8d340
0008D340 94ffff17 b        #0x8d190
### caller 0x8d348
0008D34C 91ffff17 b        #0x8d190
### caller 0x8d350
0008D354 8fffff17 b        #0x8d190
### caller 0x8d360
0008D364 8bffff17 b        #0x8d190
### caller 0x8d368
0008D36C 89ffff17 b        #0x8d190
### caller 0x8d584
0008D5F0 aaea0094 bl       #0xc8098
0008D650 92ea0094 bl       #0xc8098
### caller 0xbe9b0
ROOT 000BEA14 7b8740f9 ldr      x27, [x27, #0x108]
### caller 0xc38ec
ROOT 000C3F04 08010291 add      x8, x8, #0x80
### caller 0xc8098
ROOT 000C818C 08010291 add      x8, x8, #0x80
### caller 0xc81b8
ROOT 000C81D4 298540f9 ldr      x9, [x9, #0x108]
### caller 0xc868c
000C868C cbfeff17 b        #0xc81b8
### caller 0xc8694
000C8698 c8feff17 b        #0xc81b8
### caller 0xc869c
000C86A0 c6feff17 b        #0xc81b8
### caller 0xc86ac
000C86B0 c2feff17 b        #0xc81b8
### caller 0xc86b4
000C86B8 c0feff17 b        #0xc81b8
### caller 0xe30c0
ROOT 000E30E4 08010291 add      x8, x8, #0x80
### caller 0xf08c0
ROOT 000F0974 08010291 add      x8, x8, #0x80
### caller 0xf0ac8
ROOT 000F0AD4 08010291 add      x8, x8, #0x80
### caller 0xfa6c0
ROOT 000FA7D8 088540f9 ldr      x8, [x8, #0x108]
### caller 0xfaa7c
ROOT 000FAAC8 08010291 add      x8, x8, #0x80
### caller 0xfaba8
ROOT 000FABCC 08010291 add      x8, x8, #0x80
### caller 0xfb43c
ROOT 000FB4D0 08010291 add      x8, x8, #0x80
### caller 0xfb528
ROOT 000FB540 08010291 add      x8, x8, #0x80
### caller 0xfb6f0
ROOT 000FB718 08010291 add      x8, x8, #0x80

## Owner and Model vtables
- GOT 0x7a0528 -> 0x76d398
  0x76d3a8 (+0x0): 0x8d190
  0x76d3b0 (+0x8): 0x8d340
  0x76d3b8 (+0x10): 0x1029c
  0x76d3c0 (+0x18): 0x102b8
  0x76d3c8 (+0x20): 0x10310
  0x76d3d0 (+0x28): 0x10360
  0x76d3d8 (+0x30): 0x8d344
  0x76d3e0 (+0x38): 0x24b48
  0x76d3e8 (+0x40): 0x24c50
  0x76d3f0 (+0x48): 0x258cc
  0x76d3f8 (+0x50): 0x258d0
  0x76d400 (+0x58): 0x253f0
  0x76d408 (+0x60): 0x258d4
  0x76d410 (+0x68): 0x258d8
  0x76d418 (+0x70): 0x258dc
  0x76d420 (+0x78): 0x253bc
  0x76d428 (+0x80): 0x26fdc
  0x76d430 (+0x88): 0x258e0
  0x76d438 (+0x90): 0x26fe0
  0x76d440 (+0x98): 0x87f60
  0x76d448 (+0xa0): 0x896cc
  0x76d450 (+0xa8): 0x897a0
  0x76d458 (+0xb0): 0x8b700
  0x76d460 (+0xb8): 0x258fc
  0x76d468 (+0xc0): 0x8c130
  0x76d470 (+0xc8): 0x8ccd0
  0x76d478 (+0xd0): unresolved
  0x76d480 (+0xd8): unresolved
- GOT 0x7a1100 -> 0x76dee0
  0x76def0 (+0x0): 0xc81b8
  0x76def8 (+0x8): 0xc868c
  0x76df00 (+0x10): 0x1029c
  0x76df08 (+0x18): 0x102b8
  0x76df10 (+0x20): 0x10310
  0x76df18 (+0x28): 0x10360
  0x76df20 (+0x30): 0xc8690
  0x76df28 (+0x38): unresolved
  0x76df30 (+0x40): unresolved
  0x76df38 (+0x48): 0xc8694
  0x76df40 (+0x50): 0xc869c
  0x76df48 (+0x58): 0x10440
  0x76df50 (+0x60): 0x10490
  0x76df58 (+0x68): 0x104c8
  0x76df60 (+0x70): 0xc86a4
  0x76df68 (+0x78): unresolved
  0x76df70 (+0x80): unresolved
  0x76df78 (+0x88): 0xc86a8
  0x76df80 (+0x90): 0xc86ac
  0x76df88 (+0x98): 0xc86b4
  0x76df90 (+0xa0): unresolved
  0x76df98 (+0xa8): 0x60ac9c
  0x76dfa0 (+0xb0): unresolved
  0x76dfa8 (+0xb8): unresolved
  0x76dfb0 (+0xc0): 0x61cb95
  0x76dfb8 (+0xc8): unresolved
  0x76dfc0 (+0xd0): unresolved
  0x76dfc8 (+0xd8): 0x61f07b

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
### 0x10490 (14 slots)
~~~asm
00010490 080840f9 ldr      x8, [x0, #0x10]
00010494 09510191 add      x9, x8, #0x54
00010498 1f2003d5 nop      
0001049C 1f2003d5 nop      
000104A0 2afd5f88 ldaxr    w10, [x9]
000104A4 4a050071 subs     w10, w10, #1
000104A8 2afd0b88 stlxr    w11, w10, [x9]
000104AC abffff35 cbnz     w11, #0x104a0
000104B0 a1000054 b.ne     #0x104c4
000104B4 1f3100f9 str      xzr, [x8, #0x60]
000104B8 088c5bf8 ldr      x8, [x0, #-0x48]!
000104BC 010d40f9 ldr      x1, [x8, #0x18]
000104C0 20001fd6 br       x1
000104C4 c0035fd6 ret      
~~~
### 0x104c8 (7 slots)
~~~asm
000104C8 000840f9 ldr      x0, [x0, #0x10]
000104CC 000100f9 str      x0, [x8]
000104D0 800000b4 cbz      x0, #0x104e0
000104D4 088c44f8 ldr      x8, [x0, #0x48]!
000104D8 010940f9 ldr      x1, [x8, #0x10]
000104DC 20001fd6 br       x1
000104E0 c0035fd6 ret      
~~~
### 0x157d8 (51 slots)
~~~asm
000157D8 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
000157DC f70b00f9 str      x23, [sp, #0x10]
000157E0 f65702a9 stp      x22, x21, [sp, #0x20]
000157E4 f44f03a9 stp      x20, x19, [sp, #0x30]
000157E8 fd030091 mov      x29, sp
000157EC 370040f9 ldr      x23, [x1]
000157F0 f40301aa mov      x20, x1
000157F4 f30300aa mov      x19, x0
000157F8 153c40f9 ldr      x21, [x0, #0x78]
000157FC 550100b4 cbz      x21, #0x15824
00015800 f60315aa mov      x22, x21
00015804 c88e44f8 ldr      x8, [x22, #0x48]!
00015808 e00316aa mov      x0, x22
0001580C 080940f9 ldr      x8, [x8, #0x10]
00015810 00013fd6 blr      x8
00015814 c80240f9 ldr      x8, [x22]
00015818 e00316aa mov      x0, x22
0001581C 080940f9 ldr      x8, [x8, #0x10]
00015820 00013fd6 blr      x8
00015824 e03240f9 ldr      x0, [x23, #0x60]
00015828 f53200f9 str      x21, [x23, #0x60]
0001582C 800000b4 cbz      x0, #0x1583c
00015830 088c44f8 ldr      x8, [x0, #0x48]!
00015834 080d40f9 ldr      x8, [x8, #0x18]
00015838 00013fd6 blr      x8
0001583C b50000b4 cbz      x21, #0x15850
00015840 a88e44f8 ldr      x8, [x21, #0x48]!
00015844 e00315aa mov      x0, x21
00015848 080d40f9 ldr      x8, [x8, #0x18]
0001584C 00013fd6 blr      x8
00015850 940240f9 ldr      x20, [x20]
00015854 b40000b4 cbz      x20, #0x15868
00015858 e00314aa mov      x0, x20
0001585C 088c44f8 ldr      x8, [x0, #0x48]!
00015860 080940f9 ldr      x8, [x8, #0x10]
00015864 00013fd6 blr      x8
00015868 603e40f9 ldr      x0, [x19, #0x78]
0001586C 743e00f9 str      x20, [x19, #0x78]
00015870 000100b4 cbz      x0, #0x15890
00015874 088c44f8 ldr      x8, [x0, #0x48]!
00015878 f70b40f9 ldr      x23, [sp, #0x10]
0001587C f44f43a9 ldp      x20, x19, [sp, #0x30]
00015880 010d40f9 ldr      x1, [x8, #0x18]
00015884 f65742a9 ldp      x22, x21, [sp, #0x20]
00015888 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0001588C 20001fd6 br       x1
00015890 f44f43a9 ldp      x20, x19, [sp, #0x30]
00015894 f70b40f9 ldr      x23, [sp, #0x10]
00015898 f65742a9 ldp      x22, x21, [sp, #0x20]
0001589C fd7bc4a8 ldp      x29, x30, [sp], #0x40
000158A0 c0035fd6 ret      
~~~
### 0x158b0 (100 slots)
~~~asm
000158B0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000158B4 f44f01a9 stp      x20, x19, [sp, #0x10]
000158B8 fd030091 mov      x29, sp
000158BC 083c40f9 ldr      x8, [x0, #0x78]
000158C0 f30300aa mov      x19, x0
000158C4 1f240239 strb     wzr, [x0, #0x89]
000158C8 1f0100f1 cmp      x8, #0
000158CC e8079f1a cset     w8, ne
000158D0 08200239 strb     w8, [x0, #0x88]
000158D4 603e40f9 ldr      x0, [x19, #0x78]
000158D8 800200b4 cbz      x0, #0x15928
000158DC 613240f9 ldr      x1, [x19, #0x60]
000158E0 ea030094 bl       #0x16888
000158E4 1f0c0071 cmp      w0, #3
000158E8 60ffff54 b.eq     #0x158d4
000158EC 1f040071 cmp      w0, #1
000158F0 41020054 b.ne     #0x15938
000158F4 60a247a9 ldp      x0, x8, [x19, #0x78]
000158F8 880200b4 cbz      x8, #0x15948
000158FC 7f3e00f9 str      xzr, [x19, #0x78]
00015900 400700b4 cbz      x0, #0x159e8
00015904 088c44f8 ldr      x8, [x0, #0x48]!
00015908 080d40f9 ldr      x8, [x8, #0x18]
0001590C 00013fd6 blr      x8
00015910 69a247a9 ldp      x9, x8, [x19, #0x78]
00015914 e0031f2a mov      w0, wzr
00015918 68a607a9 stp      x8, x9, [x19, #0x78]
0001591C f44f41a9 ldp      x20, x19, [sp, #0x10]
00015920 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00015924 c0035fd6 ret      
00015928 40008052 mov      w0, #2
0001592C f44f41a9 ldp      x20, x19, [sp, #0x10]
00015930 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00015934 c0035fd6 ret      
00015938 e0031f2a mov      w0, wzr
0001593C f44f41a9 ldp      x20, x19, [sp, #0x10]
00015940 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00015944 c0035fd6 ret      
00015948 143040f9 ldr      x20, [x0, #0x60]
0001594C 940500b4 cbz      x20, #0x159fc
00015950 888e44f8 ldr      x8, [x20, #0x48]!
00015954 e00314aa mov      x0, x20
00015958 080940f9 ldr      x8, [x8, #0x10]
0001595C 00013fd6 blr      x8
00015960 880240f9 ldr      x8, [x20]
00015964 e00314aa mov      x0, x20
00015968 080d40f9 ldr      x8, [x8, #0x18]
0001596C 00013fd6 blr      x8
00015970 683e40f9 ldr      x8, [x19, #0x78]
00015974 143140f9 ldr      x20, [x8, #0x60]
00015978 540500b4 cbz      x20, #0x15a20
0001597C e00314aa mov      x0, x20
00015980 088c44f8 ldr      x8, [x0, #0x48]!
00015984 080940f9 ldr      x8, [x8, #0x10]
00015988 00013fd6 blr      x8
0001598C 683e40f9 ldr      x8, [x19, #0x78]
00015990 003140f9 ldr      x0, [x8, #0x60]
00015994 1f3100f9 str      xzr, [x8, #0x60]
00015998 800000b4 cbz      x0, #0x159a8
0001599C 088c44f8 ldr      x8, [x0, #0x48]!
000159A0 080d40f9 ldr      x8, [x8, #0x18]
000159A4 00013fd6 blr      x8
000159A8 603e40f9 ldr      x0, [x19, #0x78]
000159AC 7f3e00f9 str      xzr, [x19, #0x78]
000159B0 000400b4 cbz      x0, #0x15a30
000159B4 088c44f8 ldr      x8, [x0, #0x48]!
000159B8 080d40f9 ldr      x8, [x8, #0x18]
000159BC 00013fd6 blr      x8
000159C0 603e40f9 ldr      x0, [x19, #0x78]
000159C4 743e00f9 str      x20, [x19, #0x78]
000159C8 20fbffb4 cbz      x0, #0x1592c
000159CC 088c44f8 ldr      x8, [x0, #0x48]!
000159D0 080d40f9 ldr      x8, [x8, #0x18]
000159D4 00013fd6 blr      x8
000159D8 e0031f2a mov      w0, wzr
000159DC f44f41a9 ldp      x20, x19, [sp, #0x10]
000159E0 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000159E4 c0035fd6 ret      
000159E8 e0031f2a mov      w0, wzr
000159EC 68fe07a9 stp      x8, xzr, [x19, #0x78]
000159F0 f44f41a9 ldp      x20, x19, [sp, #0x10]
000159F4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000159F8 c0035fd6 ret      
000159FC 7f3e00f9 str      xzr, [x19, #0x78]
00015A00 088c44f8 ldr      x8, [x0, #0x48]!
00015A04 080d40f9 ldr      x8, [x8, #0x18]
00015A08 00013fd6 blr      x8
00015A0C 20008052 mov      w0, #1
00015A10 60260239 strb     w0, [x19, #0x89]
00015A14 f44f41a9 ldp      x20, x19, [sp, #0x10]
00015A18 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00015A1C c0035fd6 ret      
00015A20 1f3100f9 str      xzr, [x8, #0x60]
00015A24 603e40f9 ldr      x0, [x19, #0x78]
00015A28 7f3e00f9 str      xzr, [x19, #0x78]
00015A2C 40fcffb5 cbnz     x0, #0x159b4
00015A30 743e00f9 str      x20, [x19, #0x78]
00015A34 f44f41a9 ldp      x20, x19, [sp, #0x10]
00015A38 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00015A3C c0035fd6 ret      
~~~
### 0x160b0 (2 slots)
~~~asm
000160B0 003841f9 ldr      x0, [x0, #0x270]
000160B4 fffdff17 b        #0x158b0
~~~
### 0x248f0 (150 slots)
~~~asm
000248F0 ffc300d1 sub      sp, sp, #0x30
000248F4 fd7b01a9 stp      x29, x30, [sp, #0x10]
000248F8 f44f02a9 stp      x20, x19, [sp, #0x20]
000248FC fd430091 add      x29, sp, #0x10
00024900 f40301aa mov      x20, x1
00024904 f30300aa mov      x19, x0
00024908 4a090094 bl       #0x26e30
0002490C c83b00f0 adrp     x8, #0x79f000
00024910 60a20391 add      x0, x19, #0xe8
00024914 08bd44f9 ldr      x8, [x8, #0x978]
00024918 7f8600b9 str      wzr, [x19, #0x84]
0002491C 74fe08a9 stp      x20, xzr, [x19, #0x88]
00024920 09410091 add      x9, x8, #0x10
00024924 0ac10391 add      x10, x8, #0xf0
00024928 08c10491 add      x8, x8, #0x130
0002492C 7ffe09a9 stp      xzr, xzr, [x19, #0x98]
00024930 690200f9 str      x9, [x19]
00024934 6aa204a9 stp      x10, x8, [x19, #0x48]
00024938 c83b00f0 adrp     x8, #0x79f000
0002493C 7ffe0aa9 stp      xzr, xzr, [x19, #0xa8]
00024940 7ffe0ba9 stp      xzr, xzr, [x19, #0xb8]
00024944 08c144f9 ldr      x8, [x8, #0x980]
00024948 08410091 add      x8, x8, #0x10
0002494C 686e00f9 str      x8, [x19, #0xd8]
00024950 28008052 mov      w8, #1
00024954 68e200b9 str      w8, [x19, #0xe0]
00024958 7ffe0ca9 stp      xzr, xzr, [x19, #0xc8]
0002495C 15d4ff97 bl       #0x199b0
00024960 60420891 add      x0, x19, #0x210
00024964 13d4ff97 bl       #0x199b0
00024968 283a0090 adrp     x8, #0x768000
0002496C 08c13e91 add      x8, x8, #0xfb0
00024970 7f9e01f9 str      xzr, [x19, #0x338]
00024974 7f820679 strh     wzr, [x19, #0x340]
00024978 08410091 add      x8, x8, #0x10
0002497C 7fba01f9 str      xzr, [x19, #0x370]
00024980 7fa601f9 str      xzr, [x19, #0x348]
00024984 7faa01f9 str      xzr, [x19, #0x350]
00024988 7fae01f9 str      xzr, [x19, #0x358]
0002498C 7fb201f9 str      xzr, [x19, #0x360]
00024990 680a01f9 str      x8, [x19, #0x210]
00024994 47421394 bl       #0x4f52b0
00024998 1400fc92 mov      x20, #0x1fffffffffffffff
0002499C 60c201f9 str      x0, [x19, #0x380]
000249A0 7fda01f9 str      xzr, [x19, #0x3b0]
000249A4 74c601f9 str      x20, [x19, #0x388]
000249A8 7fe201f9 str      xzr, [x19, #0x3c0]
000249AC 7fea01f9 str      xzr, [x19, #0x3d0]
000249B0 40421394 bl       #0x4f52b0
000249B4 69b241f9 ldr      x9, [x19, #0x360]
000249B8 60f201f9 str      x0, [x19, #0x3e0]
000249BC 74f601f9 str      x20, [x19, #0x3e8]
000249C0 68ae41f9 ldr      x8, [x19, #0x358]
000249C4 2a0108cb sub      x10, x9, x8
000249C8 7f0a02f9 str      xzr, [x19, #0x410]
000249CC 49e57ad3 lsl      x9, x10, #6
000249D0 090100b4 cbz      x9, #0x249f0
000249D4 5f0940f2 tst      x10, #7
000249D8 c0000054 b.eq     #0x249f0
000249DC 29fd49d3 lsr      x9, x9, #9
000249E0 090d098b add      x9, x8, x9, lsl #3
000249E4 08210091 add      x8, x8, #8
000249E8 1f0109eb cmp      x8, x9
000249EC c9ffff54 b.ls     #0x249e4
000249F0 7f2202f9 str      xzr, [x19, #0x440]
000249F4 7f1202f9 str      xzr, [x19, #0x420]
000249F8 7f1602f9 str      xzr, [x19, #0x428]
000249FC 7f1a02f9 str      xzr, [x19, #0x430]
00024A00 2c421394 bl       #0x4f52b0
00024A04 742e02f9 str      x20, [x19, #0x458]
00024A08 602a02f9 str      x0, [x19, #0x450]
00024A0C 7f4202f9 str      xzr, [x19, #0x480]
00024A10 7f4a02f9 str      xzr, [x19, #0x490]
00024A14 7f5202f9 str      xzr, [x19, #0x4a0]
00024A18 26421394 bl       #0x4f52b0
00024A1C 691a42f9 ldr      x9, [x19, #0x430]
00024A20 605a02f9 str      x0, [x19, #0x4b0]
00024A24 745e02f9 str      x20, [x19, #0x4b8]
00024A28 681642f9 ldr      x8, [x19, #0x428]
00024A2C 2a0108cb sub      x10, x9, x8
00024A30 7f7202f9 str      xzr, [x19, #0x4e0]
00024A34 49e57ad3 lsl      x9, x10, #6
00024A38 290100b4 cbz      x9, #0x24a5c
00024A3C 5f0940f2 tst      x10, #7
00024A40 e0000054 b.eq     #0x24a5c
00024A44 29fd49d3 lsr      x9, x9, #9
00024A48 090d098b add      x9, x8, x9, lsl #3
00024A4C 1f2003d5 nop      
00024A50 08210091 add      x8, x8, #8
00024A54 1f0109eb cmp      x8, x9
00024A58 c9ffff54 b.ls     #0x24a50
00024A5C 7f8a02f9 str      xzr, [x19, #0x510]
00024A60 7f7a02f9 str      xzr, [x19, #0x4f0]
00024A64 7f7e02f9 str      xzr, [x19, #0x4f8]
00024A68 7f8202f9 str      xzr, [x19, #0x500]
00024A6C 11421394 bl       #0x4f52b0
00024A70 1400fc92 mov      x20, #0x1fffffffffffffff
00024A74 609202f9 str      x0, [x19, #0x520]
00024A78 7faa02f9 str      xzr, [x19, #0x550]
00024A7C 749602f9 str      x20, [x19, #0x528]
00024A80 7fb202f9 str      xzr, [x19, #0x560]
00024A84 7fba02f9 str      xzr, [x19, #0x570]
00024A88 0a421394 bl       #0x4f52b0
00024A8C 698242f9 ldr      x9, [x19, #0x500]
00024A90 60c202f9 str      x0, [x19, #0x580]
00024A94 74c602f9 str      x20, [x19, #0x588]
00024A98 687e42f9 ldr      x8, [x19, #0x4f8]
00024A9C 2a0108cb sub      x10, x9, x8
00024AA0 7fda02f9 str      xzr, [x19, #0x5b0]
00024AA4 49e57ad3 lsl      x9, x10, #6
00024AA8 290100b4 cbz      x9, #0x24acc
00024AAC 5f0940f2 tst      x10, #7
00024AB0 e0000054 b.eq     #0x24acc
00024AB4 29fd49d3 lsr      x9, x9, #9
00024AB8 090d098b add      x9, x8, x9, lsl #3
00024ABC 1f2003d5 nop      
00024AC0 08210091 add      x8, x8, #8
00024AC4 1f0109eb cmp      x8, x9
00024AC8 c9ffff54 b.ls     #0x24ac0
00024ACC 7fc205b9 str      wzr, [x19, #0x5c0]
00024AD0 c83b00f0 adrp     x8, #0x79f000
00024AD4 7f121739 strb     wzr, [x19, #0x5c4]
00024AD8 087942f9 ldr      x8, [x8, #0x4f0]
00024ADC 080140f9 ldr      x8, [x8]
00024AE0 7fe602f9 str      xzr, [x19, #0x5c8]
00024AE4 143d40f9 ldr      x20, [x8, #0x78]
00024AE8 b40000b4 cbz      x20, #0x24afc
00024AEC e00314aa mov      x0, x20
00024AF0 088c44f8 ldr      x8, [x0, #0x48]!
00024AF4 080940f9 ldr      x8, [x8, #0x10]
00024AF8 00013fd6 blr      x8
00024AFC e8230091 add      x8, sp, #8
00024B00 e00314aa mov      x0, x20
00024B04 51850094 bl       #0x46048
00024B08 609e41f9 ldr      x0, [x19, #0x338]
00024B0C 800000b4 cbz      x0, #0x24b1c
00024B10 088c44f8 ldr      x8, [x0, #0x48]!
00024B14 080d40f9 ldr      x8, [x8, #0x18]
00024B18 00013fd6 blr      x8
00024B1C e80740f9 ldr      x8, [sp, #8]
00024B20 ff0700f9 str      xzr, [sp, #8]
00024B24 689e01f9 str      x8, [x19, #0x338]
00024B28 888e44f8 ldr      x8, [x20, #0x48]!
00024B2C e00314aa mov      x0, x20
00024B30 080d40f9 ldr      x8, [x8, #0x18]
00024B34 00013fd6 blr      x8
00024B38 f44f42a9 ldp      x20, x19, [sp, #0x20]
00024B3C fd7b41a9 ldp      x29, x30, [sp, #0x10]
00024B40 ffc30091 add      sp, sp, #0x30
00024B44 c0035fd6 ret      
~~~
### 0x24b48 (64 slots)
~~~asm
00024B48 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00024B4C f44f01a9 stp      x20, x19, [sp, #0x10]
00024B50 fd030091 mov      x29, sp
00024B54 08c045b9 ldr      w8, [x0, #0x5c0]
00024B58 f30300aa mov      x19, x0
00024B5C 1f090071 cmp      w8, #2
00024B60 80020054 b.eq     #0x24bb0
00024B64 1f050071 cmp      w8, #1
00024B68 00010054 b.eq     #0x24b88
00024B6C 68060035 cbnz     w8, #0x24c38
00024B70 28008052 mov      w8, #1
00024B74 e00313aa mov      x0, x19
00024B78 68c205b9 str      w8, [x19, #0x5c0]
00024B7C 680240f9 ldr      x8, [x19]
00024B80 084d40f9 ldr      x8, [x8, #0x98]
00024B84 00013fd6 blr      x8
00024B88 604e40f9 ldr      x0, [x19, #0x98]
00024B8C e00100b4 cbz      x0, #0x24bc8
00024B90 000a0094 bl       #0x27390
00024B94 f403002a mov      w20, w0
00024B98 605e40f9 ldr      x0, [x19, #0xb8]
00024B9C c00100b4 cbz      x0, #0x24bd4
00024BA0 84c2ff97 bl       #0x155b0
00024BA4 8802000a and      w8, w20, w0
00024BA8 88040036 tbz      w8, #0, #0x24c38
00024BAC 0d000014 b        #0x24be0
00024BB0 20008052 mov      w0, #1
00024BB4 68008052 mov      w8, #3
00024BB8 68c205b9 str      w8, [x19, #0x5c0]
00024BBC f44f41a9 ldp      x20, x19, [sp, #0x10]
00024BC0 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00024BC4 c0035fd6 ret      
00024BC8 34008052 mov      w20, #1
00024BCC 605e40f9 ldr      x0, [x19, #0xb8]
00024BD0 80feffb5 cbnz     x0, #0x24ba0
00024BD4 20008052 mov      w0, #1
00024BD8 8802000a and      w8, w20, w0
00024BDC e8020036 tbz      w8, #0, #0x24c38
00024BE0 60e642f9 ldr      x0, [x19, #0x5c8]
00024BE4 600000b4 cbz      x0, #0x24bf0
00024BE8 4e0c0094 bl       #0x27d20
00024BEC 60020036 tbz      w0, #0, #0x24c38
00024BF0 680240f9 ldr      x8, [x19]
00024BF4 e00313aa mov      x0, x19
00024BF8 085140f9 ldr      x8, [x8, #0xa0]
00024BFC 00013fd6 blr      x8
00024C00 c0010036 tbz      w0, #0, #0x24c38
00024C04 60e642f9 ldr      x0, [x19, #0x5c8]
00024C08 400000b4 cbz      x0, #0x24c10
00024C0C 590c0094 bl       #0x27d70
00024C10 680240f9 ldr      x8, [x19]
00024C14 e00313aa mov      x0, x19
00024C18 085540f9 ldr      x8, [x8, #0xa8]
00024C1C 00013fd6 blr      x8
00024C20 e0031f2a mov      w0, wzr
00024C24 48008052 mov      w8, #2
00024C28 68c205b9 str      w8, [x19, #0x5c0]
00024C2C f44f41a9 ldp      x20, x19, [sp, #0x10]
00024C30 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00024C34 c0035fd6 ret      
00024C38 e0031f2a mov      w0, wzr
00024C3C f44f41a9 ldp      x20, x19, [sp, #0x10]
00024C40 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00024C44 c0035fd6 ret      
~~~
### 0x253bc (13 slots)
~~~asm
000253BC 08044d39 ldrb     w8, [x0, #0x341]
000253C0 68010034 cbz      w8, #0x253ec
000253C4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000253C8 f30b00f9 str      x19, [sp, #0x10]
000253CC fd030091 mov      x29, sp
000253D0 080040f9 ldr      x8, [x0]
000253D4 f30300aa mov      x19, x0
000253D8 085d40f9 ldr      x8, [x8, #0xb8]
000253DC 00013fd6 blr      x8
000253E0 7f060d39 strb     wzr, [x19, #0x341]
000253E4 f30b40f9 ldr      x19, [sp, #0x10]
000253E8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000253EC c0035fd6 ret      
~~~
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
### 0x258fc (1 slots)
~~~asm
000258FC c0035fd6 ret      
~~~
### 0x26fdc (1 slots)
~~~asm
00026FDC c0035fd6 ret      
~~~
### 0x26fe0 (1 slots)
~~~asm
00026FE0 c0035fd6 ret      
~~~
### 0x6bb1c (116 slots)
~~~asm
0006BB1C ff8301d1 sub      sp, sp, #0x60
0006BB20 fd7b02a9 stp      x29, x30, [sp, #0x20]
0006BB24 f85f03a9 stp      x24, x23, [sp, #0x30]
0006BB28 f65704a9 stp      x22, x21, [sp, #0x40]
0006BB2C f44f05a9 stp      x20, x19, [sp, #0x50]
0006BB30 fd830091 add      x29, sp, #0x20
0006BB34 f30308aa mov      x19, x8
0006BB38 48d03bd5 mrs      x8, tpidr_el0
0006BB3C 18c97392 and      x24, x8, #0xffffffffffffe000
0006BB40 084f40f9 ldr      x8, [x24, #0x98]
0006BB44 1f4100f1 cmp      x8, #0x10
0006BB48 000d0054 b.eq     #0x6bce8
0006BB4C a9390090 adrp     x9, #0x79f000
0006BB50 080f088b add      x8, x24, x8, lsl #3
0006BB54 f70301aa mov      x23, x1
0006BB58 29ed41f9 ldr      x9, [x9, #0x3d8]
0006BB5C f40300aa mov      x20, x0
0006BB60 01978052 mov      w1, #0x4b8
0006BB64 02018052 mov      w2, #8
0006BB68 290140f9 ldr      x9, [x9]
0006BB6C 364540f9 ldr      x22, [x9, #0x88]
0006BB70 160d00f9 str      x22, [x8, #0x18]
0006BB74 e00316aa mov      x0, x22
0006BB78 084f40f9 ldr      x8, [x24, #0x98]
0006BB7C 08050091 add      x8, x8, #1
0006BB80 084f00f9 str      x8, [x24, #0x98]
0006BB84 c80240f9 ldr      x8, [x22]
0006BB88 080940f9 ldr      x8, [x8, #0x10]
0006BB8C 00013fd6 blr      x8
0006BB90 f50300aa mov      x21, x0
0006BB94 e00700b4 cbz      x0, #0x6bc90
0006BB98 e10240f9 ldr      x1, [x23]
0006BB9C e00315aa mov      x0, x21
0006BBA0 53000094 bl       #0x6bcec
0006BBA4 08978052 mov      w8, #0x4b8
0006BBA8 09018052 mov      w9, #8
0006BBAC e00315aa mov      x0, x21
0006BBB0 b6d600a9 stp      x22, x21, [x21, #8]
0006BBB4 a8a601a9 stp      x8, x9, [x21, #0x18]
0006BBB8 084f40f9 ldr      x8, [x24, #0x98]
0006BBBC 080500d1 sub      x8, x8, #1
0006BBC0 084f00f9 str      x8, [x24, #0x98]
0006BBC4 088c44f8 ldr      x8, [x0, #0x48]!
0006BBC8 080940f9 ldr      x8, [x8, #0x10]
0006BBCC 00013fd6 blr      x8
0006BBD0 b73a40f9 ldr      x23, [x21, #0x70]
0006BBD4 b70000b4 cbz      x23, #0x6bbe8
0006BBD8 e00317aa mov      x0, x23
0006BBDC 088c44f8 ldr      x8, [x0, #0x48]!
0006BBE0 080940f9 ldr      x8, [x8, #0x10]
0006BBE4 00013fd6 blr      x8
0006BBE8 b83e40f9 ldr      x24, [x21, #0x78]
0006BBEC 580100b4 cbz      x24, #0x6bc14
0006BBF0 f60318aa mov      x22, x24
0006BBF4 c88e44f8 ldr      x8, [x22, #0x48]!
0006BBF8 e00316aa mov      x0, x22
0006BBFC 080940f9 ldr      x8, [x8, #0x10]
0006BC00 00013fd6 blr      x8
0006BC04 c80240f9 ldr      x8, [x22]
0006BC08 e00316aa mov      x0, x22
0006BC0C 080d40f9 ldr      x8, [x8, #0x18]
0006BC10 00013fd6 blr      x8
0006BC14 b70000b4 cbz      x23, #0x6bc28
0006BC18 e00317aa mov      x0, x23
0006BC1C 088c44f8 ldr      x8, [x0, #0x48]!
0006BC20 080d40f9 ldr      x8, [x8, #0x18]
0006BC24 00013fd6 blr      x8
0006BC28 e1430091 add      x1, sp, #0x10
0006BC2C e00314aa mov      x0, x20
0006BC30 f76301a9 stp      x23, x24, [sp, #0x10]
0006BC34 870e0094 bl       #0x6f650
0006BC38 b62e40f9 ldr      x22, [x21, #0x58]
0006BC3C b60000b4 cbz      x22, #0x6bc50
0006BC40 e00316aa mov      x0, x22
0006BC44 088c44f8 ldr      x8, [x0, #0x48]!
0006BC48 080940f9 ldr      x8, [x8, #0x10]
0006BC4C 00013fd6 blr      x8
0006BC50 e1230091 add      x1, sp, #8
0006BC54 e00314aa mov      x0, x20
0006BC58 f50700f9 str      x21, [sp, #8]
0006BC5C dfa6fe97 bl       #0x157d8
0006BC60 e00740f9 ldr      x0, [sp, #8]
0006BC64 800000b4 cbz      x0, #0x6bc74
0006BC68 088c44f8 ldr      x8, [x0, #0x48]!
0006BC6C 080d40f9 ldr      x8, [x8, #0x18]
0006BC70 00013fd6 blr      x8
0006BC74 760200f9 str      x22, [x19]
0006BC78 f44f45a9 ldp      x20, x19, [sp, #0x50]
0006BC7C f65744a9 ldp      x22, x21, [sp, #0x40]
0006BC80 f85f43a9 ldp      x24, x23, [sp, #0x30]
0006BC84 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0006BC88 ff830191 add      sp, sp, #0x60
0006BC8C c0035fd6 ret      
0006BC90 c80240f9 ldr      x8, [x22]
0006BC94 e00316aa mov      x0, x22
0006BC98 085d40f9 ldr      x8, [x8, #0xb8]
0006BC9C 00013fd6 blr      x8
0006BCA0 e10240f9 ldr      x1, [x23]
0006BCA4 e0031faa mov      x0, xzr
0006BCA8 11000094 bl       #0x6bcec
0006BCAC 08018052 mov      w8, #8
0006BCB0 09028052 mov      w9, #0x10
0006BCB4 160100f9 str      x22, [x8]
0006BCB8 3f0100f9 str      xzr, [x9]
0006BCBC 09038052 mov      w9, #0x18
0006BCC0 0a978052 mov      w10, #0x4b8
0006BCC4 2a0100f9 str      x10, [x9]
0006BCC8 09048052 mov      w9, #0x20
0006BCCC 280100f9 str      x8, [x9]
0006BCD0 084f40f9 ldr      x8, [x24, #0x98]
0006BCD4 080500d1 sub      x8, x8, #1
0006BCD8 084f00f9 str      x8, [x24, #0x98]
0006BCDC b73a40f9 ldr      x23, [x21, #0x70]
0006BCE0 d7f7ffb5 cbnz     x23, #0x6bbd8
0006BCE4 c1ffff17 b        #0x6bbe8
0006BCE8 ca5bfe97 bl       #0x2c10
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
### 0x6d89c (37 slots)
~~~asm
0006D89C ffc300d1 sub      sp, sp, #0x30
0006D8A0 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006D8A4 f44f02a9 stp      x20, x19, [sp, #0x20]
0006D8A8 fd430091 add      x29, sp, #0x10
0006D8AC 883900d0 adrp     x8, #0x79f000
0006D8B0 893900d0 adrp     x9, #0x79f000
0006D8B4 08ed41f9 ldr      x8, [x8, #0x3d8]
0006D8B8 080140f9 ldr      x8, [x8]
0006D8BC 143540f9 ldr      x20, [x8, #0x68]
0006D8C0 082540f9 ldr      x8, [x8, #0x48]
0006D8C4 297942f9 ldr      x9, [x9, #0x4f0]
0006D8C8 e80700f9 str      x8, [sp, #8]
0006D8CC 280140f9 ldr      x8, [x9]
0006D8D0 133140f9 ldr      x19, [x8, #0x60]
0006D8D4 b30000b4 cbz      x19, #0x6d8e8
0006D8D8 e00313aa mov      x0, x19
0006D8DC 088c44f8 ldr      x8, [x0, #0x48]!
0006D8E0 080940f9 ldr      x8, [x8, #0x10]
0006D8E4 00013fd6 blr      x8
0006D8E8 e8030091 mov      x8, sp
0006D8EC e2230091 add      x2, sp, #8
0006D8F0 e00313aa mov      x0, x19
0006D8F4 e10314aa mov      x1, x20
0006D8F8 441f0094 bl       #0x75608
0006D8FC 688e44f8 ldr      x8, [x19, #0x48]!
0006D900 e00313aa mov      x0, x19
0006D904 080d40f9 ldr      x8, [x8, #0x18]
0006D908 00013fd6 blr      x8
0006D90C e00340f9 ldr      x0, [sp]
0006D910 800000b4 cbz      x0, #0x6d920
0006D914 088c44f8 ldr      x8, [x0, #0x48]!
0006D918 080d40f9 ldr      x8, [x8, #0x18]
0006D91C 00013fd6 blr      x8
0006D920 f44f42a9 ldp      x20, x19, [sp, #0x20]
0006D924 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006D928 ffc30091 add      sp, sp, #0x30
0006D92C c0035fd6 ret      
~~~
### 0x6d930 (89 slots)
~~~asm
0006D930 ff4301d1 sub      sp, sp, #0x50
0006D934 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006D938 f71300f9 str      x23, [sp, #0x20]
0006D93C f65703a9 stp      x22, x21, [sp, #0x30]
0006D940 f44f04a9 stp      x20, x19, [sp, #0x40]
0006D944 fd430091 add      x29, sp, #0x10
0006D948 13c00291 add      x19, x0, #0xb0
0006D94C e00313aa mov      x0, x19
0006D950 94e80294 bl       #0x127ba0
0006D954 883900d0 adrp     x8, #0x79f000
0006D958 893900d0 adrp     x9, #0x79f000
0006D95C 08ed41f9 ldr      x8, [x8, #0x3d8]
0006D960 080140f9 ldr      x8, [x8]
0006D964 153540f9 ldr      x21, [x8, #0x68]
0006D968 082540f9 ldr      x8, [x8, #0x48]
0006D96C 297942f9 ldr      x9, [x9, #0x4f0]
0006D970 a80f00f9 str      x8, [x29, #0x18]
0006D974 280140f9 ldr      x8, [x9]
0006D978 143140f9 ldr      x20, [x8, #0x60]
0006D97C b40000b4 cbz      x20, #0x6d990
0006D980 e00314aa mov      x0, x20
0006D984 088c44f8 ldr      x8, [x0, #0x48]!
0006D988 080940f9 ldr      x8, [x8, #0x10]
0006D98C 00013fd6 blr      x8
0006D990 e8230091 add      x8, sp, #8
0006D994 a2630091 add      x2, x29, #0x18
0006D998 e00314aa mov      x0, x20
0006D99C e10315aa mov      x1, x21
0006D9A0 eb210094 bl       #0x7614c
0006D9A4 888e44f8 ldr      x8, [x20, #0x48]!
0006D9A8 e00314aa mov      x0, x20
0006D9AC 080d40f9 ldr      x8, [x8, #0x18]
0006D9B0 00013fd6 blr      x8
0006D9B4 f40740f9 ldr      x20, [sp, #8]
0006D9B8 f40400b4 cbz      x20, #0x6da54
0006D9BC 965640b9 ldr      w22, [x20, #0x54]
0006D9C0 b6040034 cbz      w22, #0x6da54
0006D9C4 95520191 add      x21, x20, #0x54
0006D9C8 07000014 b        #0x6d9e4
0006D9CC 1f2003d5 nop      
0006D9D0 5f3f03d5 clrex    
0006D9D4 e9031f2a mov      w9, wzr
0006D9D8 9f020037 tbnz     wzr, #0, #0x6da28
0006D9DC f603082a mov      w22, w8
0006D9E0 a8030034 cbz      w8, #0x6da54
0006D9E4 972e40f9 ldr      x23, [x20, #0x58]
0006D9E8 cc240094 bl       #0x76d18
0006D9EC 1f0017eb cmp      x0, x23
0006D9F0 c0000054 b.eq     #0x6da08
0006D9F4 f70240f9 ldr      x23, [x23]
0006D9F8 ff0200eb cmp      x23, x0
0006D9FC e41a40fa ccmp     x23, #0, #4, ne
0006DA00 a1ffff54 b.ne     #0x6d9f4
0006DA04 970200b4 cbz      x23, #0x6da54
0006DA08 a87e5f88 ldxr     w8, [x21]
0006DA0C 1f01166b cmp      w8, w22
0006DA10 01feff54 b.ne     #0x6d9d0
0006DA14 c9060011 add      w9, w22, #1
0006DA18 a97e0a88 stxr     w10, w9, [x21]
0006DA1C cafdff35 cbnz     w10, #0x6d9d4
0006DA20 29008052 mov      w9, #1
0006DA24 c9fd0736 tbz      w9, #0, #0x6d9dc
0006DA28 883240f9 ldr      x8, [x20, #0x60]
0006DA2C 094101d1 sub      x9, x8, #0x50
0006DA30 1f0100f1 cmp      x8, #0
0006DA34 e003899a csel     x0, xzr, x9, eq
0006DA38 088c44f8 ldr      x8, [x0, #0x48]!
0006DA3C 13fc04f9 str      x19, [x0, #0x9f8]
0006DA40 080d40f9 ldr      x8, [x8, #0x18]
0006DA44 00013fd6 blr      x8
0006DA48 e00740f9 ldr      x0, [sp, #8]
0006DA4C 200100b5 cbnz     x0, #0x6da70
0006DA50 0b000014 b        #0x6da7c
0006DA54 e0031faa mov      x0, xzr
0006DA58 088c44f8 ldr      x8, [x0, #0x48]!
0006DA5C 13fc04f9 str      x19, [x0, #0x9f8]
0006DA60 080d40f9 ldr      x8, [x8, #0x18]
0006DA64 00013fd6 blr      x8
0006DA68 e00740f9 ldr      x0, [sp, #8]
0006DA6C 800000b4 cbz      x0, #0x6da7c
0006DA70 088c44f8 ldr      x8, [x0, #0x48]!
0006DA74 080d40f9 ldr      x8, [x8, #0x18]
0006DA78 00013fd6 blr      x8
0006DA7C f44f44a9 ldp      x20, x19, [sp, #0x40]
0006DA80 f71340f9 ldr      x23, [sp, #0x20]
0006DA84 f65743a9 ldp      x22, x21, [sp, #0x30]
0006DA88 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006DA8C ff430191 add      sp, sp, #0x50
0006DA90 c0035fd6 ret      
~~~
### 0x6f86c (64 slots)
~~~asm
0006F86C ff8301d1 sub      sp, sp, #0x60
0006F870 fd7b02a9 stp      x29, x30, [sp, #0x20]
0006F874 f85f03a9 stp      x24, x23, [sp, #0x30]
0006F878 f65704a9 stp      x22, x21, [sp, #0x40]
0006F87C f44f05a9 stp      x20, x19, [sp, #0x50]
0006F880 fd830091 add      x29, sp, #0x20
0006F884 f40300aa mov      x20, x0
0006F888 e0430091 add      x0, sp, #0x10
0006F88C f30308aa mov      x19, x8
0006F890 bf000094 bl       #0x6fb8c
0006F894 f50300aa mov      x21, x0
0006F898 a00000b4 cbz      x0, #0x6f8ac
0006F89C e00315aa mov      x0, x21
0006F8A0 088c44f8 ldr      x8, [x0, #0x48]!
0006F8A4 080940f9 ldr      x8, [x8, #0x10]
0006F8A8 00013fd6 blr      x8
0006F8AC b73a40f9 ldr      x23, [x21, #0x70]
0006F8B0 b70000b4 cbz      x23, #0x6f8c4
0006F8B4 e00317aa mov      x0, x23
0006F8B8 088c44f8 ldr      x8, [x0, #0x48]!
0006F8BC 080940f9 ldr      x8, [x8, #0x10]
0006F8C0 00013fd6 blr      x8
0006F8C4 b83e40f9 ldr      x24, [x21, #0x78]
0006F8C8 580100b4 cbz      x24, #0x6f8f0
0006F8CC f60318aa mov      x22, x24
0006F8D0 c88e44f8 ldr      x8, [x22, #0x48]!
0006F8D4 e00316aa mov      x0, x22
0006F8D8 080940f9 ldr      x8, [x8, #0x10]
0006F8DC 00013fd6 blr      x8
0006F8E0 c80240f9 ldr      x8, [x22]
0006F8E4 e00316aa mov      x0, x22
0006F8E8 080d40f9 ldr      x8, [x8, #0x18]
0006F8EC 00013fd6 blr      x8
0006F8F0 b70000b4 cbz      x23, #0x6f904
0006F8F4 e00317aa mov      x0, x23
0006F8F8 088c44f8 ldr      x8, [x0, #0x48]!
0006F8FC 080d40f9 ldr      x8, [x8, #0x18]
0006F900 00013fd6 blr      x8
0006F904 e1430091 add      x1, sp, #0x10
0006F908 e00314aa mov      x0, x20
0006F90C f76301a9 stp      x23, x24, [sp, #0x10]
0006F910 18000094 bl       #0x6f970
0006F914 a80240f9 ldr      x8, [x21]
0006F918 e00315aa mov      x0, x21
0006F91C 090940f9 ldr      x9, [x8, #0x10]
0006F920 e8430091 add      x8, sp, #0x10
0006F924 20013fd6 blr      x9
0006F928 e1230091 add      x1, sp, #8
0006F92C e00314aa mov      x0, x20
0006F930 f50700f9 str      x21, [sp, #8]
0006F934 a8a31194 bl       #0x4d87d4
0006F938 e00740f9 ldr      x0, [sp, #8]
0006F93C 800000b4 cbz      x0, #0x6f94c
0006F940 088c44f8 ldr      x8, [x0, #0x48]!
0006F944 080d40f9 ldr      x8, [x8, #0x18]
0006F948 00013fd6 blr      x8
0006F94C e80b40f9 ldr      x8, [sp, #0x10]
0006F950 680200f9 str      x8, [x19]
0006F954 f44f45a9 ldp      x20, x19, [sp, #0x50]
0006F958 f65744a9 ldp      x22, x21, [sp, #0x40]
0006F95C f85f43a9 ldp      x24, x23, [sp, #0x30]
0006F960 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0006F964 ff830191 add      sp, sp, #0x60
0006F968 c0035fd6 ret      
~~~
### 0x6f970 (135 slots)
~~~asm
0006F970 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
0006F974 f90b00f9 str      x25, [sp, #0x10]
0006F978 f85f02a9 stp      x24, x23, [sp, #0x20]
0006F97C f65703a9 stp      x22, x21, [sp, #0x30]
0006F980 f44f04a9 stp      x20, x19, [sp, #0x40]
0006F984 fd030091 mov      x29, sp
0006F988 360040f9 ldr      x22, [x1]
0006F98C 48d03bd5 mrs      x8, tpidr_el0
0006F990 e9098052 mov      w9, #0x4f
0006F994 3735480a and      w23, w9, w8, lsr #13
0006F998 f40301aa mov      x20, x1
0006F99C f30300aa mov      x19, x0
0006F9A0 d5120591 add      x21, x22, #0x144
0006F9A4 d81a0591 add      x24, x22, #0x146
0006F9A8 1f2003d5 nop      
0006F9AC 1f2003d5 nop      
0006F9B0 08ff5f08 ldaxrb   w8, [x24]
0006F9B4 1f3d0171 cmp      w8, #0x4f
0006F9B8 81000054 b.ne     #0x6f9c8
0006F9BC 177f0808 stxrb    w8, w23, [x24]
0006F9C0 88ffff35 cbnz     w8, #0x6f9b0
0006F9C4 1c000014 b        #0x6fa34
0006F9C8 d91e0591 add      x25, x22, #0x147
0006F9CC 5f3f03d5 clrex    
0006F9D0 287f5f08 ldxrb    w8, [x25]
0006F9D4 08050011 add      w8, w8, #1
0006F9D8 287f0908 stxrb    w9, w8, [x25]
0006F9DC a9ffff35 cbnz     w9, #0x6f9d0
0006F9E0 bf3b03d5 dmb      ish
0006F9E4 08ff5f08 ldaxrb   w8, [x24]
0006F9E8 1f3d0171 cmp      w8, #0x4f
0006F9EC a1000054 b.ne     #0x6fa00
0006F9F0 177f0808 stxrb    w8, w23, [x24]
0006F9F4 88ffff35 cbnz     w8, #0x6f9e4
0006F9F8 0b000014 b        #0x6fa24
0006F9FC 1f2003d5 nop      
0006FA00 e00315aa mov      x0, x21
0006FA04 5f3f03d5 clrex    
0006FA08 d6191694 bl       #0x5f6160
0006FA0C 1f2003d5 nop      
0006FA10 08ff5f08 ldaxrb   w8, [x24]
0006FA14 1f3d0171 cmp      w8, #0x4f
0006FA18 41ffff54 b.ne     #0x6fa00
0006FA1C 177f0808 stxrb    w8, w23, [x24]
0006FA20 88ffff35 cbnz     w8, #0x6fa10
0006FA24 287f5f08 ldxrb    w8, [x25]
0006FA28 08050051 sub      w8, w8, #1
0006FA2C 287f0908 stxrb    w9, w8, [x25]
0006FA30 a9ffff35 cbnz     w9, #0x6fa24
0006FA34 689640f9 ldr      x8, [x19, #0x128]
0006FA38 e00316aa mov      x0, x22
0006FA3C 092952a9 ldp      x9, x10, [x8, #0x120]
0006FA40 3f0100f1 cmp      x9, #0
0006FA44 0101899a csel     x1, x8, x9, eq
0006FA48 5f0100f1 cmp      x10, #0
0006FA4C 02018a9a csel     x2, x8, x10, eq
0006FA50 d5de1194 bl       #0x4e75a4
0006FA54 e8098052 mov      w8, #0x4f
0006FA58 1f2003d5 nop      
0006FA5C 1f2003d5 nop      
0006FA60 1f7f5f08 ldxrb    wzr, [x24]
0006FA64 08ff0908 stlxrb   w9, w8, [x24]
0006FA68 c9ffff35 cbnz     w9, #0x6fa60
0006FA6C bf3b03d5 dmb      ish
0006FA70 c81e4539 ldrb     w8, [x22, #0x147]
0006FA74 68000034 cbz      w8, #0x6fa80
0006FA78 e00315aa mov      x0, x21
0006FA7C c1191694 bl       #0x5f6180
0006FA80 950640f9 ldr      x21, [x20, #8]
0006FA84 b4120591 add      x20, x21, #0x144
0006FA88 b61a0591 add      x22, x21, #0x146
0006FA8C 1f2003d5 nop      
0006FA90 c8fe5f08 ldaxrb   w8, [x22]
0006FA94 1f3d0171 cmp      w8, #0x4f
0006FA98 81000054 b.ne     #0x6faa8
0006FA9C d77e0808 stxrb    w8, w23, [x22]
0006FAA0 88ffff35 cbnz     w8, #0x6fa90
0006FAA4 1c000014 b        #0x6fb14
0006FAA8 b81e0591 add      x24, x21, #0x147
0006FAAC 5f3f03d5 clrex    
0006FAB0 087f5f08 ldxrb    w8, [x24]
0006FAB4 08050011 add      w8, w8, #1
0006FAB8 087f0908 stxrb    w9, w8, [x24]
0006FABC a9ffff35 cbnz     w9, #0x6fab0
0006FAC0 bf3b03d5 dmb      ish
0006FAC4 c8fe5f08 ldaxrb   w8, [x22]
0006FAC8 1f3d0171 cmp      w8, #0x4f
0006FACC a1000054 b.ne     #0x6fae0
0006FAD0 d77e0808 stxrb    w8, w23, [x22]
0006FAD4 88ffff35 cbnz     w8, #0x6fac4
0006FAD8 0b000014 b        #0x6fb04
0006FADC 1f2003d5 nop      
0006FAE0 e00314aa mov      x0, x20
0006FAE4 5f3f03d5 clrex    
0006FAE8 9e191694 bl       #0x5f6160
0006FAEC 1f2003d5 nop      
0006FAF0 c8fe5f08 ldaxrb   w8, [x22]
0006FAF4 1f3d0171 cmp      w8, #0x4f
0006FAF8 41ffff54 b.ne     #0x6fae0
0006FAFC d77e0808 stxrb    w8, w23, [x22]
0006FB00 88ffff35 cbnz     w8, #0x6faf0
0006FB04 087f5f08 ldxrb    w8, [x24]
0006FB08 08050051 sub      w8, w8, #1
0006FB0C 087f0908 stxrb    w9, w8, [x24]
0006FB10 a9ffff35 cbnz     w9, #0x6fb04
0006FB14 689a40f9 ldr      x8, [x19, #0x130]
0006FB18 e00315aa mov      x0, x21
0006FB1C 092952a9 ldp      x9, x10, [x8, #0x120]
0006FB20 3f0100f1 cmp      x9, #0
0006FB24 0101899a csel     x1, x8, x9, eq
0006FB28 5f0100f1 cmp      x10, #0
0006FB2C 02018a9a csel     x2, x8, x10, eq
0006FB30 9dde1194 bl       #0x4e75a4
0006FB34 e8098052 mov      w8, #0x4f
0006FB38 1f2003d5 nop      
0006FB3C 1f2003d5 nop      
0006FB40 df7e5f08 ldxrb    wzr, [x22]
0006FB44 c8fe0908 stlxrb   w9, w8, [x22]
0006FB48 c9ffff35 cbnz     w9, #0x6fb40
0006FB4C bf3b03d5 dmb      ish
0006FB50 a81e4539 ldrb     w8, [x21, #0x147]
0006FB54 08010034 cbz      w8, #0x6fb74
0006FB58 e00314aa mov      x0, x20
0006FB5C f44f44a9 ldp      x20, x19, [sp, #0x40]
0006FB60 f65743a9 ldp      x22, x21, [sp, #0x30]
0006FB64 f90b40f9 ldr      x25, [sp, #0x10]
0006FB68 f85f42a9 ldp      x24, x23, [sp, #0x20]
0006FB6C fd7bc5a8 ldp      x29, x30, [sp], #0x50
0006FB70 84191614 b        #0x5f6180
0006FB74 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006FB78 f90b40f9 ldr      x25, [sp, #0x10]
0006FB7C f65743a9 ldp      x22, x21, [sp, #0x30]
0006FB80 f85f42a9 ldp      x24, x23, [sp, #0x20]
0006FB84 fd7bc5a8 ldp      x29, x30, [sp], #0x50
0006FB88 c0035fd6 ret      
~~~
### 0x70450 (64 slots)
~~~asm
00070450 ff8301d1 sub      sp, sp, #0x60
00070454 fd7b02a9 stp      x29, x30, [sp, #0x20]
00070458 f85f03a9 stp      x24, x23, [sp, #0x30]
0007045C f65704a9 stp      x22, x21, [sp, #0x40]
00070460 f44f05a9 stp      x20, x19, [sp, #0x50]
00070464 fd830091 add      x29, sp, #0x20
00070468 f40300aa mov      x20, x0
0007046C e0430091 add      x0, sp, #0x10
00070470 f30308aa mov      x19, x8
00070474 37000094 bl       #0x70550
00070478 f50300aa mov      x21, x0
0007047C a00000b4 cbz      x0, #0x70490
00070480 e00315aa mov      x0, x21
00070484 088c44f8 ldr      x8, [x0, #0x48]!
00070488 080940f9 ldr      x8, [x8, #0x10]
0007048C 00013fd6 blr      x8
00070490 b73a40f9 ldr      x23, [x21, #0x70]
00070494 b70000b4 cbz      x23, #0x704a8
00070498 e00317aa mov      x0, x23
0007049C 088c44f8 ldr      x8, [x0, #0x48]!
000704A0 080940f9 ldr      x8, [x8, #0x10]
000704A4 00013fd6 blr      x8
000704A8 b83e40f9 ldr      x24, [x21, #0x78]
000704AC 580100b4 cbz      x24, #0x704d4
000704B0 f60318aa mov      x22, x24
000704B4 c88e44f8 ldr      x8, [x22, #0x48]!
000704B8 e00316aa mov      x0, x22
000704BC 080940f9 ldr      x8, [x8, #0x10]
000704C0 00013fd6 blr      x8
000704C4 c80240f9 ldr      x8, [x22]
000704C8 e00316aa mov      x0, x22
000704CC 080d40f9 ldr      x8, [x8, #0x18]
000704D0 00013fd6 blr      x8
000704D4 b70000b4 cbz      x23, #0x704e8
000704D8 e00317aa mov      x0, x23
000704DC 088c44f8 ldr      x8, [x0, #0x48]!
000704E0 080d40f9 ldr      x8, [x8, #0x18]
000704E4 00013fd6 blr      x8
000704E8 e1430091 add      x1, sp, #0x10
000704EC e00314aa mov      x0, x20
000704F0 f76301a9 stp      x23, x24, [sp, #0x10]
000704F4 1ffdff97 bl       #0x6f970
000704F8 a80240f9 ldr      x8, [x21]
000704FC e00315aa mov      x0, x21
00070500 090940f9 ldr      x9, [x8, #0x10]
00070504 e8430091 add      x8, sp, #0x10
00070508 20013fd6 blr      x9
0007050C e1230091 add      x1, sp, #8
00070510 e00314aa mov      x0, x20
00070514 f50700f9 str      x21, [sp, #8]
00070518 afa01194 bl       #0x4d87d4
0007051C e00740f9 ldr      x0, [sp, #8]
00070520 800000b4 cbz      x0, #0x70530
00070524 088c44f8 ldr      x8, [x0, #0x48]!
00070528 080d40f9 ldr      x8, [x8, #0x18]
0007052C 00013fd6 blr      x8
00070530 e80b40f9 ldr      x8, [sp, #0x10]
00070534 680200f9 str      x8, [x19]
00070538 f44f45a9 ldp      x20, x19, [sp, #0x50]
0007053C f65744a9 ldp      x22, x21, [sp, #0x40]
00070540 f85f43a9 ldp      x24, x23, [sp, #0x30]
00070544 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00070548 ff830191 add      sp, sp, #0x60
0007054C c0035fd6 ret      
~~~
### 0x70f84 (64 slots)
~~~asm
00070F84 ff8301d1 sub      sp, sp, #0x60
00070F88 fd7b02a9 stp      x29, x30, [sp, #0x20]
00070F8C f85f03a9 stp      x24, x23, [sp, #0x30]
00070F90 f65704a9 stp      x22, x21, [sp, #0x40]
00070F94 f44f05a9 stp      x20, x19, [sp, #0x50]
00070F98 fd830091 add      x29, sp, #0x20
00070F9C f40300aa mov      x20, x0
00070FA0 e0430091 add      x0, sp, #0x10
00070FA4 f30308aa mov      x19, x8
00070FA8 37000094 bl       #0x71084
00070FAC f50300aa mov      x21, x0
00070FB0 a00000b4 cbz      x0, #0x70fc4
00070FB4 e00315aa mov      x0, x21
00070FB8 088c44f8 ldr      x8, [x0, #0x48]!
00070FBC 080940f9 ldr      x8, [x8, #0x10]
00070FC0 00013fd6 blr      x8
00070FC4 b73a40f9 ldr      x23, [x21, #0x70]
00070FC8 b70000b4 cbz      x23, #0x70fdc
00070FCC e00317aa mov      x0, x23
00070FD0 088c44f8 ldr      x8, [x0, #0x48]!
00070FD4 080940f9 ldr      x8, [x8, #0x10]
00070FD8 00013fd6 blr      x8
00070FDC b83e40f9 ldr      x24, [x21, #0x78]
00070FE0 580100b4 cbz      x24, #0x71008
00070FE4 f60318aa mov      x22, x24
00070FE8 c88e44f8 ldr      x8, [x22, #0x48]!
00070FEC e00316aa mov      x0, x22
00070FF0 080940f9 ldr      x8, [x8, #0x10]
00070FF4 00013fd6 blr      x8
00070FF8 c80240f9 ldr      x8, [x22]
00070FFC e00316aa mov      x0, x22
00071000 080d40f9 ldr      x8, [x8, #0x18]
00071004 00013fd6 blr      x8
00071008 b70000b4 cbz      x23, #0x7101c
0007100C e00317aa mov      x0, x23
00071010 088c44f8 ldr      x8, [x0, #0x48]!
00071014 080d40f9 ldr      x8, [x8, #0x18]
00071018 00013fd6 blr      x8
0007101C e1430091 add      x1, sp, #0x10
00071020 e00314aa mov      x0, x20
00071024 f76301a9 stp      x23, x24, [sp, #0x10]
00071028 52faff97 bl       #0x6f970
0007102C a80240f9 ldr      x8, [x21]
00071030 e00315aa mov      x0, x21
00071034 090940f9 ldr      x9, [x8, #0x10]
00071038 e8430091 add      x8, sp, #0x10
0007103C 20013fd6 blr      x9
00071040 e1230091 add      x1, sp, #8
00071044 e00314aa mov      x0, x20
00071048 f50700f9 str      x21, [sp, #8]
0007104C e29d1194 bl       #0x4d87d4
00071050 e00740f9 ldr      x0, [sp, #8]
00071054 800000b4 cbz      x0, #0x71064
00071058 088c44f8 ldr      x8, [x0, #0x48]!
0007105C 080d40f9 ldr      x8, [x8, #0x18]
00071060 00013fd6 blr      x8
00071064 e80b40f9 ldr      x8, [sp, #0x10]
00071068 680200f9 str      x8, [x19]
0007106C f44f45a9 ldp      x20, x19, [sp, #0x50]
00071070 f65744a9 ldp      x22, x21, [sp, #0x40]
00071074 f85f43a9 ldp      x24, x23, [sp, #0x30]
00071078 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0007107C ff830191 add      sp, sp, #0x60
00071080 c0035fd6 ret      
~~~
### 0x71ac4 (64 slots)
~~~asm
00071AC4 ff8301d1 sub      sp, sp, #0x60
00071AC8 fd7b02a9 stp      x29, x30, [sp, #0x20]
00071ACC f85f03a9 stp      x24, x23, [sp, #0x30]
00071AD0 f65704a9 stp      x22, x21, [sp, #0x40]
00071AD4 f44f05a9 stp      x20, x19, [sp, #0x50]
00071AD8 fd830091 add      x29, sp, #0x20
00071ADC f40300aa mov      x20, x0
00071AE0 e0430091 add      x0, sp, #0x10
00071AE4 f30308aa mov      x19, x8
00071AE8 37000094 bl       #0x71bc4
00071AEC f50300aa mov      x21, x0
00071AF0 a00000b4 cbz      x0, #0x71b04
00071AF4 e00315aa mov      x0, x21
00071AF8 088c44f8 ldr      x8, [x0, #0x48]!
00071AFC 080940f9 ldr      x8, [x8, #0x10]
00071B00 00013fd6 blr      x8
00071B04 b73a40f9 ldr      x23, [x21, #0x70]
00071B08 b70000b4 cbz      x23, #0x71b1c
00071B0C e00317aa mov      x0, x23
00071B10 088c44f8 ldr      x8, [x0, #0x48]!
00071B14 080940f9 ldr      x8, [x8, #0x10]
00071B18 00013fd6 blr      x8
00071B1C b83e40f9 ldr      x24, [x21, #0x78]
00071B20 580100b4 cbz      x24, #0x71b48
00071B24 f60318aa mov      x22, x24
00071B28 c88e44f8 ldr      x8, [x22, #0x48]!
00071B2C e00316aa mov      x0, x22
00071B30 080940f9 ldr      x8, [x8, #0x10]
00071B34 00013fd6 blr      x8
00071B38 c80240f9 ldr      x8, [x22]
00071B3C e00316aa mov      x0, x22
00071B40 080d40f9 ldr      x8, [x8, #0x18]
00071B44 00013fd6 blr      x8
00071B48 b70000b4 cbz      x23, #0x71b5c
00071B4C e00317aa mov      x0, x23
00071B50 088c44f8 ldr      x8, [x0, #0x48]!
00071B54 080d40f9 ldr      x8, [x8, #0x18]
00071B58 00013fd6 blr      x8
00071B5C e1430091 add      x1, sp, #0x10
00071B60 e00314aa mov      x0, x20
00071B64 f76301a9 stp      x23, x24, [sp, #0x10]
00071B68 82f7ff97 bl       #0x6f970
00071B6C a80240f9 ldr      x8, [x21]
00071B70 e00315aa mov      x0, x21
00071B74 090940f9 ldr      x9, [x8, #0x10]
00071B78 e8430091 add      x8, sp, #0x10
00071B7C 20013fd6 blr      x9
00071B80 e1230091 add      x1, sp, #8
00071B84 e00314aa mov      x0, x20
00071B88 f50700f9 str      x21, [sp, #8]
00071B8C 129b1194 bl       #0x4d87d4
00071B90 e00740f9 ldr      x0, [sp, #8]
00071B94 800000b4 cbz      x0, #0x71ba4
00071B98 088c44f8 ldr      x8, [x0, #0x48]!
00071B9C 080d40f9 ldr      x8, [x8, #0x18]
00071BA0 00013fd6 blr      x8
00071BA4 e80b40f9 ldr      x8, [sp, #0x10]
00071BA8 680200f9 str      x8, [x19]
00071BAC f44f45a9 ldp      x20, x19, [sp, #0x50]
00071BB0 f65744a9 ldp      x22, x21, [sp, #0x40]
00071BB4 f85f43a9 ldp      x24, x23, [sp, #0x30]
00071BB8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00071BBC ff830191 add      sp, sp, #0x60
00071BC0 c0035fd6 ret      
~~~
### 0x72688 (64 slots)
~~~asm
00072688 ff8301d1 sub      sp, sp, #0x60
0007268C fd7b02a9 stp      x29, x30, [sp, #0x20]
00072690 f85f03a9 stp      x24, x23, [sp, #0x30]
00072694 f65704a9 stp      x22, x21, [sp, #0x40]
00072698 f44f05a9 stp      x20, x19, [sp, #0x50]
0007269C fd830091 add      x29, sp, #0x20
000726A0 f40300aa mov      x20, x0
000726A4 e0430091 add      x0, sp, #0x10
000726A8 f30308aa mov      x19, x8
000726AC 37000094 bl       #0x72788
000726B0 f50300aa mov      x21, x0
000726B4 a00000b4 cbz      x0, #0x726c8
000726B8 e00315aa mov      x0, x21
000726BC 088c44f8 ldr      x8, [x0, #0x48]!
000726C0 080940f9 ldr      x8, [x8, #0x10]
000726C4 00013fd6 blr      x8
000726C8 b73a40f9 ldr      x23, [x21, #0x70]
000726CC b70000b4 cbz      x23, #0x726e0
000726D0 e00317aa mov      x0, x23
000726D4 088c44f8 ldr      x8, [x0, #0x48]!
000726D8 080940f9 ldr      x8, [x8, #0x10]
000726DC 00013fd6 blr      x8
000726E0 b83e40f9 ldr      x24, [x21, #0x78]
000726E4 580100b4 cbz      x24, #0x7270c
000726E8 f60318aa mov      x22, x24
000726EC c88e44f8 ldr      x8, [x22, #0x48]!
000726F0 e00316aa mov      x0, x22
000726F4 080940f9 ldr      x8, [x8, #0x10]
000726F8 00013fd6 blr      x8
000726FC c80240f9 ldr      x8, [x22]
00072700 e00316aa mov      x0, x22
00072704 080d40f9 ldr      x8, [x8, #0x18]
00072708 00013fd6 blr      x8
0007270C b70000b4 cbz      x23, #0x72720
00072710 e00317aa mov      x0, x23
00072714 088c44f8 ldr      x8, [x0, #0x48]!
00072718 080d40f9 ldr      x8, [x8, #0x18]
0007271C 00013fd6 blr      x8
00072720 e1430091 add      x1, sp, #0x10
00072724 e00314aa mov      x0, x20
00072728 f76301a9 stp      x23, x24, [sp, #0x10]
0007272C 91f4ff97 bl       #0x6f970
00072730 a80240f9 ldr      x8, [x21]
00072734 e00315aa mov      x0, x21
00072738 090940f9 ldr      x9, [x8, #0x10]
0007273C e8430091 add      x8, sp, #0x10
00072740 20013fd6 blr      x9
00072744 e1230091 add      x1, sp, #8
00072748 e00314aa mov      x0, x20
0007274C f50700f9 str      x21, [sp, #8]
00072750 21981194 bl       #0x4d87d4
00072754 e00740f9 ldr      x0, [sp, #8]
00072758 800000b4 cbz      x0, #0x72768
0007275C 088c44f8 ldr      x8, [x0, #0x48]!
00072760 080d40f9 ldr      x8, [x8, #0x18]
00072764 00013fd6 blr      x8
00072768 e80b40f9 ldr      x8, [sp, #0x10]
0007276C 680200f9 str      x8, [x19]
00072770 f44f45a9 ldp      x20, x19, [sp, #0x50]
00072774 f65744a9 ldp      x22, x21, [sp, #0x40]
00072778 f85f43a9 ldp      x24, x23, [sp, #0x30]
0007277C fd7b42a9 ldp      x29, x30, [sp, #0x20]
00072780 ff830191 add      sp, sp, #0x60
00072784 c0035fd6 ret      
~~~
### 0x731c4 (64 slots)
~~~asm
000731C4 ff8301d1 sub      sp, sp, #0x60
000731C8 fd7b02a9 stp      x29, x30, [sp, #0x20]
000731CC f85f03a9 stp      x24, x23, [sp, #0x30]
000731D0 f65704a9 stp      x22, x21, [sp, #0x40]
000731D4 f44f05a9 stp      x20, x19, [sp, #0x50]
000731D8 fd830091 add      x29, sp, #0x20
000731DC f40300aa mov      x20, x0
000731E0 e0430091 add      x0, sp, #0x10
000731E4 f30308aa mov      x19, x8
000731E8 37000094 bl       #0x732c4
000731EC f50300aa mov      x21, x0
000731F0 a00000b4 cbz      x0, #0x73204
000731F4 e00315aa mov      x0, x21
000731F8 088c44f8 ldr      x8, [x0, #0x48]!
000731FC 080940f9 ldr      x8, [x8, #0x10]
00073200 00013fd6 blr      x8
00073204 b73a40f9 ldr      x23, [x21, #0x70]
00073208 b70000b4 cbz      x23, #0x7321c
0007320C e00317aa mov      x0, x23
00073210 088c44f8 ldr      x8, [x0, #0x48]!
00073214 080940f9 ldr      x8, [x8, #0x10]
00073218 00013fd6 blr      x8
0007321C b83e40f9 ldr      x24, [x21, #0x78]
00073220 580100b4 cbz      x24, #0x73248
00073224 f60318aa mov      x22, x24
00073228 c88e44f8 ldr      x8, [x22, #0x48]!
0007322C e00316aa mov      x0, x22
00073230 080940f9 ldr      x8, [x8, #0x10]
00073234 00013fd6 blr      x8
00073238 c80240f9 ldr      x8, [x22]
0007323C e00316aa mov      x0, x22
00073240 080d40f9 ldr      x8, [x8, #0x18]
00073244 00013fd6 blr      x8
00073248 b70000b4 cbz      x23, #0x7325c
0007324C e00317aa mov      x0, x23
00073250 088c44f8 ldr      x8, [x0, #0x48]!
00073254 080d40f9 ldr      x8, [x8, #0x18]
00073258 00013fd6 blr      x8
0007325C e1430091 add      x1, sp, #0x10
00073260 e00314aa mov      x0, x20
00073264 f76301a9 stp      x23, x24, [sp, #0x10]
00073268 c2f1ff97 bl       #0x6f970
0007326C a80240f9 ldr      x8, [x21]
00073270 e00315aa mov      x0, x21
00073274 090940f9 ldr      x9, [x8, #0x10]
00073278 e8430091 add      x8, sp, #0x10
0007327C 20013fd6 blr      x9
00073280 e1230091 add      x1, sp, #8
00073284 e00314aa mov      x0, x20
00073288 f50700f9 str      x21, [sp, #8]
0007328C 52951194 bl       #0x4d87d4
00073290 e00740f9 ldr      x0, [sp, #8]
00073294 800000b4 cbz      x0, #0x732a4
00073298 088c44f8 ldr      x8, [x0, #0x48]!
0007329C 080d40f9 ldr      x8, [x8, #0x18]
000732A0 00013fd6 blr      x8
000732A4 e80b40f9 ldr      x8, [sp, #0x10]
000732A8 680200f9 str      x8, [x19]
000732AC f44f45a9 ldp      x20, x19, [sp, #0x50]
000732B0 f65744a9 ldp      x22, x21, [sp, #0x40]
000732B4 f85f43a9 ldp      x24, x23, [sp, #0x30]
000732B8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000732BC ff830191 add      sp, sp, #0x60
000732C0 c0035fd6 ret      
~~~
### 0x73d04 (64 slots)
~~~asm
00073D04 ff8301d1 sub      sp, sp, #0x60
00073D08 fd7b02a9 stp      x29, x30, [sp, #0x20]
00073D0C f85f03a9 stp      x24, x23, [sp, #0x30]
00073D10 f65704a9 stp      x22, x21, [sp, #0x40]
00073D14 f44f05a9 stp      x20, x19, [sp, #0x50]
00073D18 fd830091 add      x29, sp, #0x20
00073D1C f40300aa mov      x20, x0
00073D20 e0430091 add      x0, sp, #0x10
00073D24 f30308aa mov      x19, x8
00073D28 37000094 bl       #0x73e04
00073D2C f50300aa mov      x21, x0
00073D30 a00000b4 cbz      x0, #0x73d44
00073D34 e00315aa mov      x0, x21
00073D38 088c44f8 ldr      x8, [x0, #0x48]!
00073D3C 080940f9 ldr      x8, [x8, #0x10]
00073D40 00013fd6 blr      x8
00073D44 b73a40f9 ldr      x23, [x21, #0x70]
00073D48 b70000b4 cbz      x23, #0x73d5c
00073D4C e00317aa mov      x0, x23
00073D50 088c44f8 ldr      x8, [x0, #0x48]!
00073D54 080940f9 ldr      x8, [x8, #0x10]
00073D58 00013fd6 blr      x8
00073D5C b83e40f9 ldr      x24, [x21, #0x78]
00073D60 580100b4 cbz      x24, #0x73d88
00073D64 f60318aa mov      x22, x24
00073D68 c88e44f8 ldr      x8, [x22, #0x48]!
00073D6C e00316aa mov      x0, x22
00073D70 080940f9 ldr      x8, [x8, #0x10]
00073D74 00013fd6 blr      x8
00073D78 c80240f9 ldr      x8, [x22]
00073D7C e00316aa mov      x0, x22
00073D80 080d40f9 ldr      x8, [x8, #0x18]
00073D84 00013fd6 blr      x8
00073D88 b70000b4 cbz      x23, #0x73d9c
00073D8C e00317aa mov      x0, x23
00073D90 088c44f8 ldr      x8, [x0, #0x48]!
00073D94 080d40f9 ldr      x8, [x8, #0x18]
00073D98 00013fd6 blr      x8
00073D9C e1430091 add      x1, sp, #0x10
00073DA0 e00314aa mov      x0, x20
00073DA4 f76301a9 stp      x23, x24, [sp, #0x10]
00073DA8 f2eeff97 bl       #0x6f970
00073DAC a80240f9 ldr      x8, [x21]
00073DB0 e00315aa mov      x0, x21
00073DB4 090940f9 ldr      x9, [x8, #0x10]
00073DB8 e8430091 add      x8, sp, #0x10
00073DBC 20013fd6 blr      x9
00073DC0 e1230091 add      x1, sp, #8
00073DC4 e00314aa mov      x0, x20
00073DC8 f50700f9 str      x21, [sp, #8]
00073DCC 82921194 bl       #0x4d87d4
00073DD0 e00740f9 ldr      x0, [sp, #8]
00073DD4 800000b4 cbz      x0, #0x73de4
00073DD8 088c44f8 ldr      x8, [x0, #0x48]!
00073DDC 080d40f9 ldr      x8, [x8, #0x18]
00073DE0 00013fd6 blr      x8
00073DE4 e80b40f9 ldr      x8, [sp, #0x10]
00073DE8 680200f9 str      x8, [x19]
00073DEC f44f45a9 ldp      x20, x19, [sp, #0x50]
00073DF0 f65744a9 ldp      x22, x21, [sp, #0x40]
00073DF4 f85f43a9 ldp      x24, x23, [sp, #0x30]
00073DF8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00073DFC ff830191 add      sp, sp, #0x60
00073E00 c0035fd6 ret      
~~~
### 0x74844 (64 slots)
~~~asm
00074844 ff8301d1 sub      sp, sp, #0x60
00074848 fd7b02a9 stp      x29, x30, [sp, #0x20]
0007484C f85f03a9 stp      x24, x23, [sp, #0x30]
00074850 f65704a9 stp      x22, x21, [sp, #0x40]
00074854 f44f05a9 stp      x20, x19, [sp, #0x50]
00074858 fd830091 add      x29, sp, #0x20
0007485C f40300aa mov      x20, x0
00074860 e0430091 add      x0, sp, #0x10
00074864 f30308aa mov      x19, x8
00074868 37000094 bl       #0x74944
0007486C f50300aa mov      x21, x0
00074870 a00000b4 cbz      x0, #0x74884
00074874 e00315aa mov      x0, x21
00074878 088c44f8 ldr      x8, [x0, #0x48]!
0007487C 080940f9 ldr      x8, [x8, #0x10]
00074880 00013fd6 blr      x8
00074884 b73a40f9 ldr      x23, [x21, #0x70]
00074888 b70000b4 cbz      x23, #0x7489c
0007488C e00317aa mov      x0, x23
00074890 088c44f8 ldr      x8, [x0, #0x48]!
00074894 080940f9 ldr      x8, [x8, #0x10]
00074898 00013fd6 blr      x8
0007489C b83e40f9 ldr      x24, [x21, #0x78]
000748A0 580100b4 cbz      x24, #0x748c8
000748A4 f60318aa mov      x22, x24
000748A8 c88e44f8 ldr      x8, [x22, #0x48]!
000748AC e00316aa mov      x0, x22
000748B0 080940f9 ldr      x8, [x8, #0x10]
000748B4 00013fd6 blr      x8
000748B8 c80240f9 ldr      x8, [x22]
000748BC e00316aa mov      x0, x22
000748C0 080d40f9 ldr      x8, [x8, #0x18]
000748C4 00013fd6 blr      x8
000748C8 b70000b4 cbz      x23, #0x748dc
000748CC e00317aa mov      x0, x23
000748D0 088c44f8 ldr      x8, [x0, #0x48]!
000748D4 080d40f9 ldr      x8, [x8, #0x18]
000748D8 00013fd6 blr      x8
000748DC e1430091 add      x1, sp, #0x10
000748E0 e00314aa mov      x0, x20
000748E4 f76301a9 stp      x23, x24, [sp, #0x10]
000748E8 22ecff97 bl       #0x6f970
000748EC a80240f9 ldr      x8, [x21]
000748F0 e00315aa mov      x0, x21
000748F4 090940f9 ldr      x9, [x8, #0x10]
000748F8 e8430091 add      x8, sp, #0x10
000748FC 20013fd6 blr      x9
00074900 e1230091 add      x1, sp, #8
00074904 e00314aa mov      x0, x20
00074908 f50700f9 str      x21, [sp, #8]
0007490C b28f1194 bl       #0x4d87d4
00074910 e00740f9 ldr      x0, [sp, #8]
00074914 800000b4 cbz      x0, #0x74924
00074918 088c44f8 ldr      x8, [x0, #0x48]!
0007491C 080d40f9 ldr      x8, [x8, #0x18]
00074920 00013fd6 blr      x8
00074924 e80b40f9 ldr      x8, [sp, #0x10]
00074928 680200f9 str      x8, [x19]
0007492C f44f45a9 ldp      x20, x19, [sp, #0x50]
00074930 f65744a9 ldp      x22, x21, [sp, #0x40]
00074934 f85f43a9 ldp      x24, x23, [sp, #0x30]
00074938 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0007493C ff830191 add      sp, sp, #0x60
00074940 c0035fd6 ret      
~~~
### 0x74944 (77 slots)
~~~asm
00074944 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00074948 f65701a9 stp      x22, x21, [sp, #0x10]
0007494C f44f02a9 stp      x20, x19, [sp, #0x20]
00074950 fd030091 mov      x29, sp
00074954 48d03bd5 mrs      x8, tpidr_el0
00074958 16c97392 and      x22, x8, #0xffffffffffffe000
0007495C c84e40f9 ldr      x8, [x22, #0x98]
00074960 1f4100f1 cmp      x8, #0x10
00074964 a0070054 b.eq     #0x74a58
00074968 c80e088b add      x8, x22, x8, lsl #3
0007496C f30301aa mov      x19, x1
00074970 f50302aa mov      x21, x2
00074974 e00313aa mov      x0, x19
00074978 02028052 mov      w2, #0x10
0007497C 010d00f9 str      x1, [x8, #0x18]
00074980 c84e40f9 ldr      x8, [x22, #0x98]
00074984 08050091 add      x8, x8, #1
00074988 c84e00f9 str      x8, [x22, #0x98]
0007498C 280040f9 ldr      x8, [x1]
00074990 01a88152 mov      w1, #0xd40
00074994 080940f9 ldr      x8, [x8, #0x10]
00074998 00013fd6 blr      x8
0007499C 000600b4 cbz      x0, #0x74a5c
000749A0 a10240f9 ldr      x1, [x21]
000749A4 f40300aa mov      x20, x0
000749A8 d2bffe97 bl       #0x248f0
000749AC 68390090 adrp     x8, #0x7a0000
000749B0 80421791 add      x0, x20, #0x5d0
000749B4 089542f9 ldr      x8, [x8, #0x528]
000749B8 09410091 add      x9, x8, #0x10
000749BC 890200f9 str      x9, [x20]
000749C0 09c10391 add      x9, x8, #0xf0
000749C4 08c10491 add      x8, x8, #0x130
000749C8 89a204a9 stp      x9, x8, [x20, #0x48]
000749CC 2d000094 bl       #0x74a80
000749D0 68018052 mov      w8, #0xb
000749D4 09028052 mov      w9, #0x10
000749D8 9f3a0db9 str      wzr, [x20, #0xd38]
000749DC 883e0db9 str      w8, [x20, #0xd3c]
000749E0 08a88152 mov      w8, #0xd40
000749E4 e00314aa mov      x0, x20
000749E8 9f9a06f9 str      xzr, [x20, #0xd30]
000749EC 9f9606f9 str      xzr, [x20, #0xd28]
000749F0 9f9206f9 str      xzr, [x20, #0xd20]
000749F4 9f8e06f9 str      xzr, [x20, #0xd18]
000749F8 9f8a06f9 str      xzr, [x20, #0xd10]
000749FC 9f8606f9 str      xzr, [x20, #0xd08]
00074A00 9f8206f9 str      xzr, [x20, #0xd00]
00074A04 9f7e06f9 str      xzr, [x20, #0xcf8]
00074A08 9f7a06f9 str      xzr, [x20, #0xcf0]
00074A0C 9f7606f9 str      xzr, [x20, #0xce8]
00074A10 9f7206f9 str      xzr, [x20, #0xce0]
00074A14 9f6e06f9 str      xzr, [x20, #0xcd8]
00074A18 9f6a06f9 str      xzr, [x20, #0xcd0]
00074A1C 9f6606f9 str      xzr, [x20, #0xcc8]
00074A20 9f6206f9 str      xzr, [x20, #0xcc0]
00074A24 9f5e06f9 str      xzr, [x20, #0xcb8]
00074A28 9f5a06f9 str      xzr, [x20, #0xcb0]
00074A2C 9f5606f9 str      xzr, [x20, #0xca8]
00074A30 9f5206f9 str      xzr, [x20, #0xca0]
00074A34 93d200a9 stp      x19, x20, [x20, #8]
00074A38 88a601a9 stp      x8, x9, [x20, #0x18]
00074A3C c84e40f9 ldr      x8, [x22, #0x98]
00074A40 080500d1 sub      x8, x8, #1
00074A44 f44f42a9 ldp      x20, x19, [sp, #0x20]
00074A48 c84e00f9 str      x8, [x22, #0x98]
00074A4C f65741a9 ldp      x22, x21, [sp, #0x10]
00074A50 fd7bc3a8 ldp      x29, x30, [sp], #0x30
00074A54 c0035fd6 ret      
00074A58 6e38fe97 bl       #0x2c10
00074A5C 680240f9 ldr      x8, [x19]
00074A60 e00313aa mov      x0, x19
00074A64 085d40f9 ldr      x8, [x8, #0xb8]
00074A68 00013fd6 blr      x8
00074A6C a10240f9 ldr      x1, [x21]
00074A70 e0031faa mov      x0, xzr
00074A74 9fbffe97 bl       #0x248f0
~~~
### 0x74a80 (199 slots)
~~~asm
00074A80 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00074A84 f85f01a9 stp      x24, x23, [sp, #0x10]
00074A88 f65702a9 stp      x22, x21, [sp, #0x20]
00074A8C f44f03a9 stp      x20, x19, [sp, #0x30]
00074A90 fd030091 mov      x29, sp
00074A94 68390090 adrp     x8, #0x7a0000
00074A98 f30300aa mov      x19, x0
00074A9C 087d42f9 ldr      x8, [x8, #0x4f8]
00074AA0 1f0800f9 str      xzr, [x0, #0x10]
00074AA4 08410091 add      x8, x8, #0x10
00074AA8 08fc81a8 stp      x8, xzr, [x0], #0x18
00074AAC 3fd9ff97 bl       #0x6afa8
00074AB0 e00313aa mov      x0, x19
00074AB4 e1031faa mov      x1, xzr
00074AB8 ccecfe97 bl       #0x2fde8
00074ABC 68390090 adrp     x8, #0x7a0000
00074AC0 493900f0 adrp     x9, #0x79f000
00074AC4 088142f9 ldr      x8, [x8, #0x500]
00074AC8 29e141f9 ldr      x9, [x9, #0x3c0]
00074ACC f50313aa mov      x21, x19
00074AD0 08410091 add      x8, x8, #0x10
00074AD4 29410091 add      x9, x9, #0x10
00074AD8 680200f9 str      x8, [x19]
00074ADC a98e02f8 str      x9, [x21, #0x28]!
00074AE0 05081294 bl       #0x4f6af4
00074AE4 48d03bd5 mrs      x8, tpidr_el0
00074AE8 e9098052 mov      w9, #0x4f
00074AEC f40300aa mov      x20, x0
00074AF0 3735480a and      w23, w9, w8, lsr #13
00074AF4 16080091 add      x22, x0, #2
00074AF8 1f2003d5 nop      
00074AFC 1f2003d5 nop      
00074B00 c8fe5f08 ldaxrb   w8, [x22]
00074B04 1f3d0171 cmp      w8, #0x4f
00074B08 81000054 b.ne     #0x74b18
00074B0C d77e0808 stxrb    w8, w23, [x22]
00074B10 88ffff35 cbnz     w8, #0x74b00
00074B14 1c000014 b        #0x74b84
00074B18 980e0091 add      x24, x20, #3
00074B1C 5f3f03d5 clrex    
00074B20 087f5f08 ldxrb    w8, [x24]
00074B24 08050011 add      w8, w8, #1
00074B28 087f0908 stxrb    w9, w8, [x24]
00074B2C a9ffff35 cbnz     w9, #0x74b20
00074B30 bf3b03d5 dmb      ish
00074B34 c8fe5f08 ldaxrb   w8, [x22]
00074B38 1f3d0171 cmp      w8, #0x4f
00074B3C a1000054 b.ne     #0x74b50
00074B40 d77e0808 stxrb    w8, w23, [x22]
00074B44 88ffff35 cbnz     w8, #0x74b34
00074B48 0b000014 b        #0x74b74
00074B4C 1f2003d5 nop      
00074B50 e00314aa mov      x0, x20
00074B54 5f3f03d5 clrex    
00074B58 82051694 bl       #0x5f6160
00074B5C 1f2003d5 nop      
00074B60 c8fe5f08 ldaxrb   w8, [x22]
00074B64 1f3d0171 cmp      w8, #0x4f
00074B68 41ffff54 b.ne     #0x74b50
00074B6C d77e0808 stxrb    w8, w23, [x22]
00074B70 88ffff35 cbnz     w8, #0x74b60
00074B74 087f5f08 ldxrb    w8, [x24]
00074B78 08050051 sub      w8, w8, #1
00074B7C 087f0908 stxrb    w9, w8, [x24]
00074B80 a9ffff35 cbnz     w9, #0x74b74
00074B84 483900f0 adrp     x8, #0x79f000
00074B88 08e541f9 ldr      x8, [x8, #0x3c8]
00074B8C 090144f9 ldr      x9, [x8, #0x800]
00074B90 3f0104f1 cmp      x9, #0x100
00074B94 20100054 b.eq     #0x74d98
00074B98 157929f8 str      x21, [x8, x9, lsl #3]
00074B9C 090144f9 ldr      x9, [x8, #0x800]
00074BA0 29050091 add      x9, x9, #1
00074BA4 090104f9 str      x9, [x8, #0x800]
00074BA8 e8098052 mov      w8, #0x4f
00074BAC 1f2003d5 nop      
00074BB0 df7e5f08 ldxrb    wzr, [x22]
00074BB4 c8fe0908 stlxrb   w9, w8, [x22]
00074BB8 c9ffff35 cbnz     w9, #0x74bb0
00074BBC bf3b03d5 dmb      ish
00074BC0 880e4039 ldrb     w8, [x20, #3]
00074BC4 68000034 cbz      w8, #0x74bd0
00074BC8 e00314aa mov      x0, x20
00074BCC 6d051694 bl       #0x5f6180
00074BD0 68390090 adrp     x8, #0x7a0000
00074BD4 60c20091 add      x0, x19, #0x30
00074BD8 088542f9 ldr      x8, [x8, #0x508]
00074BDC 02508052 mov      w2, #0x280
00074BE0 e1031f2a mov      w1, wzr
00074BE4 08410091 add      x8, x8, #0x10
00074BE8 681600f9 str      x8, [x19, #0x28]
00074BEC 59051694 bl       #0x5f6150
00074BF0 68390090 adrp     x8, #0x7a0000
00074BF4 60020b91 add      x0, x19, #0x2c0
00074BF8 088942f9 ldr      x8, [x8, #0x510]
00074BFC 7f5e01f9 str      xzr, [x19, #0x2b8]
00074C00 150100f9 str      x21, [x8]
00074C04 e9d8ff97 bl       #0x6afa8
00074C08 60820b91 add      x0, x19, #0x2e0
00074C0C 7f6e01f9 str      xzr, [x19, #0x2d8]
00074C10 e6d8ff97 bl       #0x6afa8
00074C14 60020c91 add      x0, x19, #0x300
00074C18 7f7e01f9 str      xzr, [x19, #0x2f8]
00074C1C e3d8ff97 bl       #0x6afa8
00074C20 60820c91 add      x0, x19, #0x320
00074C24 7f8e01f9 str      xzr, [x19, #0x318]
00074C28 e0d8ff97 bl       #0x6afa8
00074C2C 60020d91 add      x0, x19, #0x340
00074C30 7f9e01f9 str      xzr, [x19, #0x338]
00074C34 ddd8ff97 bl       #0x6afa8
00074C38 60820d91 add      x0, x19, #0x360
00074C3C 7fae01f9 str      xzr, [x19, #0x358]
00074C40 dad8ff97 bl       #0x6afa8
00074C44 60020e91 add      x0, x19, #0x380
00074C48 7fbe01f9 str      xzr, [x19, #0x378]
00074C4C d7d8ff97 bl       #0x6afa8
00074C50 60820e91 add      x0, x19, #0x3a0
00074C54 7fce01f9 str      xzr, [x19, #0x398]
00074C58 d4d8ff97 bl       #0x6afa8
00074C5C 60020f91 add      x0, x19, #0x3c0
00074C60 7fde01f9 str      xzr, [x19, #0x3b8]
00074C64 d1d8ff97 bl       #0x6afa8
00074C68 60820f91 add      x0, x19, #0x3e0
00074C6C 7fee01f9 str      xzr, [x19, #0x3d8]
00074C70 ced8ff97 bl       #0x6afa8
00074C74 60021091 add      x0, x19, #0x400
00074C78 7ffe01f9 str      xzr, [x19, #0x3f8]
00074C7C cbd8ff97 bl       #0x6afa8
00074C80 60821091 add      x0, x19, #0x420
00074C84 7f0e02f9 str      xzr, [x19, #0x418]
00074C88 c8d8ff97 bl       #0x6afa8
00074C8C 60021191 add      x0, x19, #0x440
00074C90 7f1e02f9 str      xzr, [x19, #0x438]
00074C94 c5d8ff97 bl       #0x6afa8
00074C98 60821191 add      x0, x19, #0x460
00074C9C 7f2e02f9 str      xzr, [x19, #0x458]
00074CA0 c2d8ff97 bl       #0x6afa8
00074CA4 60021291 add      x0, x19, #0x480
00074CA8 7f3e02f9 str      xzr, [x19, #0x478]
00074CAC bfd8ff97 bl       #0x6afa8
00074CB0 60821291 add      x0, x19, #0x4a0
00074CB4 7f4e02f9 str      xzr, [x19, #0x498]
00074CB8 bcd8ff97 bl       #0x6afa8
00074CBC 60021391 add      x0, x19, #0x4c0
00074CC0 7f5e02f9 str      xzr, [x19, #0x4b8]
00074CC4 b9d8ff97 bl       #0x6afa8
00074CC8 60821391 add      x0, x19, #0x4e0
00074CCC 7f6e02f9 str      xzr, [x19, #0x4d8]
00074CD0 b6d8ff97 bl       #0x6afa8
00074CD4 60021491 add      x0, x19, #0x500
00074CD8 7f7e02f9 str      xzr, [x19, #0x4f8]
00074CDC b3d8ff97 bl       #0x6afa8
00074CE0 60821491 add      x0, x19, #0x520
00074CE4 7f8e02f9 str      xzr, [x19, #0x518]
00074CE8 b0d8ff97 bl       #0x6afa8
00074CEC 60021591 add      x0, x19, #0x540
00074CF0 7f9e02f9 str      xzr, [x19, #0x538]
00074CF4 add8ff97 bl       #0x6afa8
00074CF8 60821591 add      x0, x19, #0x560
00074CFC 7fae02f9 str      xzr, [x19, #0x558]
00074D00 aad8ff97 bl       #0x6afa8
00074D04 60021691 add      x0, x19, #0x580
00074D08 7fbe02f9 str      xzr, [x19, #0x578]
00074D0C a7d8ff97 bl       #0x6afa8
00074D10 60821691 add      x0, x19, #0x5a0
00074D14 7fce02f9 str      xzr, [x19, #0x598]
00074D18 a4d8ff97 bl       #0x6afa8
00074D1C 60021791 add      x0, x19, #0x5c0
00074D20 7fde02f9 str      xzr, [x19, #0x5b8]
00074D24 a1d8ff97 bl       #0x6afa8
00074D28 60821791 add      x0, x19, #0x5e0
00074D2C 7fee02f9 str      xzr, [x19, #0x5d8]
00074D30 9ed8ff97 bl       #0x6afa8
00074D34 60021891 add      x0, x19, #0x600
00074D38 7ffe02f9 str      xzr, [x19, #0x5f8]
00074D3C 9bd8ff97 bl       #0x6afa8
00074D40 60821891 add      x0, x19, #0x620
00074D44 7f0e03f9 str      xzr, [x19, #0x618]
00074D48 98d8ff97 bl       #0x6afa8
00074D4C 60021991 add      x0, x19, #0x640
00074D50 7f1e03f9 str      xzr, [x19, #0x638]
00074D54 95d8ff97 bl       #0x6afa8
00074D58 60821991 add      x0, x19, #0x660
00074D5C 7f2e03f9 str      xzr, [x19, #0x658]
00074D60 92d8ff97 bl       #0x6afa8
00074D64 60021a91 add      x0, x19, #0x680
00074D68 7f3e03f9 str      xzr, [x19, #0x678]
00074D6C 8fd8ff97 bl       #0x6afa8
00074D70 60821a91 add      x0, x19, #0x6a0
00074D74 7f4e03f9 str      xzr, [x19, #0x698]
00074D78 8cd8ff97 bl       #0x6afa8
00074D7C 7f5e03f9 str      xzr, [x19, #0x6b8]
00074D80 60021b91 add      x0, x19, #0x6c0
00074D84 f44f43a9 ldp      x20, x19, [sp, #0x30]
00074D88 f65742a9 ldp      x22, x21, [sp, #0x20]
00074D8C f85f41a9 ldp      x24, x23, [sp, #0x10]
00074D90 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00074D94 85d8ff17 b        #0x6afa8
00074D98 9e37fe97 bl       #0x2c10
~~~
### 0x75608 (64 slots)
~~~asm
00075608 ff8301d1 sub      sp, sp, #0x60
0007560C fd7b02a9 stp      x29, x30, [sp, #0x20]
00075610 f85f03a9 stp      x24, x23, [sp, #0x30]
00075614 f65704a9 stp      x22, x21, [sp, #0x40]
00075618 f44f05a9 stp      x20, x19, [sp, #0x50]
0007561C fd830091 add      x29, sp, #0x20
00075620 f40300aa mov      x20, x0
00075624 e0430091 add      x0, sp, #0x10
00075628 f30308aa mov      x19, x8
0007562C 37000094 bl       #0x75708
00075630 f50300aa mov      x21, x0
00075634 a00000b4 cbz      x0, #0x75648
00075638 e00315aa mov      x0, x21
0007563C 088c44f8 ldr      x8, [x0, #0x48]!
00075640 080940f9 ldr      x8, [x8, #0x10]
00075644 00013fd6 blr      x8
00075648 b73a40f9 ldr      x23, [x21, #0x70]
0007564C b70000b4 cbz      x23, #0x75660
00075650 e00317aa mov      x0, x23
00075654 088c44f8 ldr      x8, [x0, #0x48]!
00075658 080940f9 ldr      x8, [x8, #0x10]
0007565C 00013fd6 blr      x8
00075660 b83e40f9 ldr      x24, [x21, #0x78]
00075664 580100b4 cbz      x24, #0x7568c
00075668 f60318aa mov      x22, x24
0007566C c88e44f8 ldr      x8, [x22, #0x48]!
00075670 e00316aa mov      x0, x22
00075674 080940f9 ldr      x8, [x8, #0x10]
00075678 00013fd6 blr      x8
0007567C c80240f9 ldr      x8, [x22]
00075680 e00316aa mov      x0, x22
00075684 080d40f9 ldr      x8, [x8, #0x18]
00075688 00013fd6 blr      x8
0007568C b70000b4 cbz      x23, #0x756a0
00075690 e00317aa mov      x0, x23
00075694 088c44f8 ldr      x8, [x0, #0x48]!
00075698 080d40f9 ldr      x8, [x8, #0x18]
0007569C 00013fd6 blr      x8
000756A0 e1430091 add      x1, sp, #0x10
000756A4 e00314aa mov      x0, x20
000756A8 f76301a9 stp      x23, x24, [sp, #0x10]
000756AC b1e8ff97 bl       #0x6f970
000756B0 a80240f9 ldr      x8, [x21]
000756B4 e00315aa mov      x0, x21
000756B8 090940f9 ldr      x9, [x8, #0x10]
000756BC e8430091 add      x8, sp, #0x10
000756C0 20013fd6 blr      x9
000756C4 e1230091 add      x1, sp, #8
000756C8 e00314aa mov      x0, x20
000756CC f50700f9 str      x21, [sp, #8]
000756D0 418c1194 bl       #0x4d87d4
000756D4 e00740f9 ldr      x0, [sp, #8]
000756D8 800000b4 cbz      x0, #0x756e8
000756DC 088c44f8 ldr      x8, [x0, #0x48]!
000756E0 080d40f9 ldr      x8, [x8, #0x18]
000756E4 00013fd6 blr      x8
000756E8 e80b40f9 ldr      x8, [sp, #0x10]
000756EC 680200f9 str      x8, [x19]
000756F0 f44f45a9 ldp      x20, x19, [sp, #0x50]
000756F4 f65744a9 ldp      x22, x21, [sp, #0x40]
000756F8 f85f43a9 ldp      x24, x23, [sp, #0x30]
000756FC fd7b42a9 ldp      x29, x30, [sp, #0x20]
00075700 ff830191 add      sp, sp, #0x60
00075704 c0035fd6 ret      
~~~
### 0x7614c (64 slots)
~~~asm
0007614C ff8301d1 sub      sp, sp, #0x60
00076150 fd7b02a9 stp      x29, x30, [sp, #0x20]
00076154 f85f03a9 stp      x24, x23, [sp, #0x30]
00076158 f65704a9 stp      x22, x21, [sp, #0x40]
0007615C f44f05a9 stp      x20, x19, [sp, #0x50]
00076160 fd830091 add      x29, sp, #0x20
00076164 f40300aa mov      x20, x0
00076168 e0430091 add      x0, sp, #0x10
0007616C f30308aa mov      x19, x8
00076170 37000094 bl       #0x7624c
00076174 f50300aa mov      x21, x0
00076178 a00000b4 cbz      x0, #0x7618c
0007617C e00315aa mov      x0, x21
00076180 088c44f8 ldr      x8, [x0, #0x48]!
00076184 080940f9 ldr      x8, [x8, #0x10]
00076188 00013fd6 blr      x8
0007618C b73a40f9 ldr      x23, [x21, #0x70]
00076190 b70000b4 cbz      x23, #0x761a4
00076194 e00317aa mov      x0, x23
00076198 088c44f8 ldr      x8, [x0, #0x48]!
0007619C 080940f9 ldr      x8, [x8, #0x10]
000761A0 00013fd6 blr      x8
000761A4 b83e40f9 ldr      x24, [x21, #0x78]
000761A8 580100b4 cbz      x24, #0x761d0
000761AC f60318aa mov      x22, x24
000761B0 c88e44f8 ldr      x8, [x22, #0x48]!
000761B4 e00316aa mov      x0, x22
000761B8 080940f9 ldr      x8, [x8, #0x10]
000761BC 00013fd6 blr      x8
000761C0 c80240f9 ldr      x8, [x22]
000761C4 e00316aa mov      x0, x22
000761C8 080d40f9 ldr      x8, [x8, #0x18]
000761CC 00013fd6 blr      x8
000761D0 b70000b4 cbz      x23, #0x761e4
000761D4 e00317aa mov      x0, x23
000761D8 088c44f8 ldr      x8, [x0, #0x48]!
000761DC 080d40f9 ldr      x8, [x8, #0x18]
000761E0 00013fd6 blr      x8
000761E4 e1430091 add      x1, sp, #0x10
000761E8 e00314aa mov      x0, x20
000761EC f76301a9 stp      x23, x24, [sp, #0x10]
000761F0 e0e5ff97 bl       #0x6f970
000761F4 a80240f9 ldr      x8, [x21]
000761F8 e00315aa mov      x0, x21
000761FC 090940f9 ldr      x9, [x8, #0x10]
00076200 e8430091 add      x8, sp, #0x10
00076204 20013fd6 blr      x9
00076208 e1230091 add      x1, sp, #8
0007620C e00314aa mov      x0, x20
00076210 f50700f9 str      x21, [sp, #8]
00076214 70891194 bl       #0x4d87d4
00076218 e00740f9 ldr      x0, [sp, #8]
0007621C 800000b4 cbz      x0, #0x7622c
00076220 088c44f8 ldr      x8, [x0, #0x48]!
00076224 080d40f9 ldr      x8, [x8, #0x18]
00076228 00013fd6 blr      x8
0007622C e80b40f9 ldr      x8, [sp, #0x10]
00076230 680200f9 str      x8, [x19]
00076234 f44f45a9 ldp      x20, x19, [sp, #0x50]
00076238 f65744a9 ldp      x22, x21, [sp, #0x40]
0007623C f85f43a9 ldp      x24, x23, [sp, #0x30]
00076240 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00076244 ff830191 add      sp, sp, #0x60
00076248 c0035fd6 ret      
~~~
### 0x76ea4 (64 slots)
~~~asm
00076EA4 ff8301d1 sub      sp, sp, #0x60
00076EA8 fd7b02a9 stp      x29, x30, [sp, #0x20]
00076EAC f85f03a9 stp      x24, x23, [sp, #0x30]
00076EB0 f65704a9 stp      x22, x21, [sp, #0x40]
00076EB4 f44f05a9 stp      x20, x19, [sp, #0x50]
00076EB8 fd830091 add      x29, sp, #0x20
00076EBC f40300aa mov      x20, x0
00076EC0 e0430091 add      x0, sp, #0x10
00076EC4 f30308aa mov      x19, x8
00076EC8 37000094 bl       #0x76fa4
00076ECC f50300aa mov      x21, x0
00076ED0 a00000b4 cbz      x0, #0x76ee4
00076ED4 e00315aa mov      x0, x21
00076ED8 088c44f8 ldr      x8, [x0, #0x48]!
00076EDC 080940f9 ldr      x8, [x8, #0x10]
00076EE0 00013fd6 blr      x8
00076EE4 b73a40f9 ldr      x23, [x21, #0x70]
00076EE8 b70000b4 cbz      x23, #0x76efc
00076EEC e00317aa mov      x0, x23
00076EF0 088c44f8 ldr      x8, [x0, #0x48]!
00076EF4 080940f9 ldr      x8, [x8, #0x10]
00076EF8 00013fd6 blr      x8
00076EFC b83e40f9 ldr      x24, [x21, #0x78]
00076F00 580100b4 cbz      x24, #0x76f28
00076F04 f60318aa mov      x22, x24
00076F08 c88e44f8 ldr      x8, [x22, #0x48]!
00076F0C e00316aa mov      x0, x22
00076F10 080940f9 ldr      x8, [x8, #0x10]
00076F14 00013fd6 blr      x8
00076F18 c80240f9 ldr      x8, [x22]
00076F1C e00316aa mov      x0, x22
00076F20 080d40f9 ldr      x8, [x8, #0x18]
00076F24 00013fd6 blr      x8
00076F28 b70000b4 cbz      x23, #0x76f3c
00076F2C e00317aa mov      x0, x23
00076F30 088c44f8 ldr      x8, [x0, #0x48]!
00076F34 080d40f9 ldr      x8, [x8, #0x18]
00076F38 00013fd6 blr      x8
00076F3C e1430091 add      x1, sp, #0x10
00076F40 e00314aa mov      x0, x20
00076F44 f76301a9 stp      x23, x24, [sp, #0x10]
00076F48 8ae2ff97 bl       #0x6f970
00076F4C a80240f9 ldr      x8, [x21]
00076F50 e00315aa mov      x0, x21
00076F54 090940f9 ldr      x9, [x8, #0x10]
00076F58 e8430091 add      x8, sp, #0x10
00076F5C 20013fd6 blr      x9
00076F60 e1230091 add      x1, sp, #8
00076F64 e00314aa mov      x0, x20
00076F68 f50700f9 str      x21, [sp, #8]
00076F6C 1a861194 bl       #0x4d87d4
00076F70 e00740f9 ldr      x0, [sp, #8]
00076F74 800000b4 cbz      x0, #0x76f84
00076F78 088c44f8 ldr      x8, [x0, #0x48]!
00076F7C 080d40f9 ldr      x8, [x8, #0x18]
00076F80 00013fd6 blr      x8
00076F84 e80b40f9 ldr      x8, [sp, #0x10]
00076F88 680200f9 str      x8, [x19]
00076F8C f44f45a9 ldp      x20, x19, [sp, #0x50]
00076F90 f65744a9 ldp      x22, x21, [sp, #0x40]
00076F94 f85f43a9 ldp      x24, x23, [sp, #0x30]
00076F98 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00076F9C ff830191 add      sp, sp, #0x60
00076FA0 c0035fd6 ret      
~~~
### 0x779e4 (64 slots)
~~~asm
000779E4 ff8301d1 sub      sp, sp, #0x60
000779E8 fd7b02a9 stp      x29, x30, [sp, #0x20]
000779EC f85f03a9 stp      x24, x23, [sp, #0x30]
000779F0 f65704a9 stp      x22, x21, [sp, #0x40]
000779F4 f44f05a9 stp      x20, x19, [sp, #0x50]
000779F8 fd830091 add      x29, sp, #0x20
000779FC f40300aa mov      x20, x0
00077A00 e0430091 add      x0, sp, #0x10
00077A04 f30308aa mov      x19, x8
00077A08 37000094 bl       #0x77ae4
00077A0C f50300aa mov      x21, x0
00077A10 a00000b4 cbz      x0, #0x77a24
00077A14 e00315aa mov      x0, x21
00077A18 088c44f8 ldr      x8, [x0, #0x48]!
00077A1C 080940f9 ldr      x8, [x8, #0x10]
00077A20 00013fd6 blr      x8
00077A24 b73a40f9 ldr      x23, [x21, #0x70]
00077A28 b70000b4 cbz      x23, #0x77a3c
00077A2C e00317aa mov      x0, x23
00077A30 088c44f8 ldr      x8, [x0, #0x48]!
00077A34 080940f9 ldr      x8, [x8, #0x10]
00077A38 00013fd6 blr      x8
00077A3C b83e40f9 ldr      x24, [x21, #0x78]
00077A40 580100b4 cbz      x24, #0x77a68
00077A44 f60318aa mov      x22, x24
00077A48 c88e44f8 ldr      x8, [x22, #0x48]!
00077A4C e00316aa mov      x0, x22
00077A50 080940f9 ldr      x8, [x8, #0x10]
00077A54 00013fd6 blr      x8
00077A58 c80240f9 ldr      x8, [x22]
00077A5C e00316aa mov      x0, x22
00077A60 080d40f9 ldr      x8, [x8, #0x18]
00077A64 00013fd6 blr      x8
00077A68 b70000b4 cbz      x23, #0x77a7c
00077A6C e00317aa mov      x0, x23
00077A70 088c44f8 ldr      x8, [x0, #0x48]!
00077A74 080d40f9 ldr      x8, [x8, #0x18]
00077A78 00013fd6 blr      x8
00077A7C e1430091 add      x1, sp, #0x10
00077A80 e00314aa mov      x0, x20
00077A84 f76301a9 stp      x23, x24, [sp, #0x10]
00077A88 badfff97 bl       #0x6f970
00077A8C a80240f9 ldr      x8, [x21]
00077A90 e00315aa mov      x0, x21
00077A94 090940f9 ldr      x9, [x8, #0x10]
00077A98 e8430091 add      x8, sp, #0x10
00077A9C 20013fd6 blr      x9
00077AA0 e1230091 add      x1, sp, #8
00077AA4 e00314aa mov      x0, x20
00077AA8 f50700f9 str      x21, [sp, #8]
00077AAC 4a831194 bl       #0x4d87d4
00077AB0 e00740f9 ldr      x0, [sp, #8]
00077AB4 800000b4 cbz      x0, #0x77ac4
00077AB8 088c44f8 ldr      x8, [x0, #0x48]!
00077ABC 080d40f9 ldr      x8, [x8, #0x18]
00077AC0 00013fd6 blr      x8
00077AC4 e80b40f9 ldr      x8, [sp, #0x10]
00077AC8 680200f9 str      x8, [x19]
00077ACC f44f45a9 ldp      x20, x19, [sp, #0x50]
00077AD0 f65744a9 ldp      x22, x21, [sp, #0x40]
00077AD4 f85f43a9 ldp      x24, x23, [sp, #0x30]
00077AD8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00077ADC ff830191 add      sp, sp, #0x60
00077AE0 c0035fd6 ret      
~~~
### 0x78388 (64 slots)
~~~asm
00078388 ff8301d1 sub      sp, sp, #0x60
0007838C fd7b02a9 stp      x29, x30, [sp, #0x20]
00078390 f85f03a9 stp      x24, x23, [sp, #0x30]
00078394 f65704a9 stp      x22, x21, [sp, #0x40]
00078398 f44f05a9 stp      x20, x19, [sp, #0x50]
0007839C fd830091 add      x29, sp, #0x20
000783A0 f40300aa mov      x20, x0
000783A4 e0430091 add      x0, sp, #0x10
000783A8 f30308aa mov      x19, x8
000783AC 37000094 bl       #0x78488
000783B0 f50300aa mov      x21, x0
000783B4 a00000b4 cbz      x0, #0x783c8
000783B8 e00315aa mov      x0, x21
000783BC 088c44f8 ldr      x8, [x0, #0x48]!
000783C0 080940f9 ldr      x8, [x8, #0x10]
000783C4 00013fd6 blr      x8
000783C8 b73a40f9 ldr      x23, [x21, #0x70]
000783CC b70000b4 cbz      x23, #0x783e0
000783D0 e00317aa mov      x0, x23
000783D4 088c44f8 ldr      x8, [x0, #0x48]!
000783D8 080940f9 ldr      x8, [x8, #0x10]
000783DC 00013fd6 blr      x8
000783E0 b83e40f9 ldr      x24, [x21, #0x78]
000783E4 580100b4 cbz      x24, #0x7840c
000783E8 f60318aa mov      x22, x24
000783EC c88e44f8 ldr      x8, [x22, #0x48]!
000783F0 e00316aa mov      x0, x22
000783F4 080940f9 ldr      x8, [x8, #0x10]
000783F8 00013fd6 blr      x8
000783FC c80240f9 ldr      x8, [x22]
00078400 e00316aa mov      x0, x22
00078404 080d40f9 ldr      x8, [x8, #0x18]
00078408 00013fd6 blr      x8
0007840C b70000b4 cbz      x23, #0x78420
00078410 e00317aa mov      x0, x23
00078414 088c44f8 ldr      x8, [x0, #0x48]!
00078418 080d40f9 ldr      x8, [x8, #0x18]
0007841C 00013fd6 blr      x8
00078420 e1430091 add      x1, sp, #0x10
00078424 e00314aa mov      x0, x20
00078428 f76301a9 stp      x23, x24, [sp, #0x10]
0007842C 51ddff97 bl       #0x6f970
00078430 a80240f9 ldr      x8, [x21]
00078434 e00315aa mov      x0, x21
00078438 090940f9 ldr      x9, [x8, #0x10]
0007843C e8430091 add      x8, sp, #0x10
00078440 20013fd6 blr      x9
00078444 e1230091 add      x1, sp, #8
00078448 e00314aa mov      x0, x20
0007844C f50700f9 str      x21, [sp, #8]
00078450 e1801194 bl       #0x4d87d4
00078454 e00740f9 ldr      x0, [sp, #8]
00078458 800000b4 cbz      x0, #0x78468
0007845C 088c44f8 ldr      x8, [x0, #0x48]!
00078460 080d40f9 ldr      x8, [x8, #0x18]
00078464 00013fd6 blr      x8
00078468 e80b40f9 ldr      x8, [sp, #0x10]
0007846C 680200f9 str      x8, [x19]
00078470 f44f45a9 ldp      x20, x19, [sp, #0x50]
00078474 f65744a9 ldp      x22, x21, [sp, #0x40]
00078478 f85f43a9 ldp      x24, x23, [sp, #0x30]
0007847C fd7b42a9 ldp      x29, x30, [sp, #0x20]
00078480 ff830191 add      sp, sp, #0x60
00078484 c0035fd6 ret      
~~~
### 0x78f48 (64 slots)
~~~asm
00078F48 ff8301d1 sub      sp, sp, #0x60
00078F4C fd7b02a9 stp      x29, x30, [sp, #0x20]
00078F50 f85f03a9 stp      x24, x23, [sp, #0x30]
00078F54 f65704a9 stp      x22, x21, [sp, #0x40]
00078F58 f44f05a9 stp      x20, x19, [sp, #0x50]
00078F5C fd830091 add      x29, sp, #0x20
00078F60 f40300aa mov      x20, x0
00078F64 e0430091 add      x0, sp, #0x10
00078F68 f30308aa mov      x19, x8
00078F6C 37000094 bl       #0x79048
00078F70 f50300aa mov      x21, x0
00078F74 a00000b4 cbz      x0, #0x78f88
00078F78 e00315aa mov      x0, x21
00078F7C 088c44f8 ldr      x8, [x0, #0x48]!
00078F80 080940f9 ldr      x8, [x8, #0x10]
00078F84 00013fd6 blr      x8
00078F88 b73a40f9 ldr      x23, [x21, #0x70]
00078F8C b70000b4 cbz      x23, #0x78fa0
00078F90 e00317aa mov      x0, x23
00078F94 088c44f8 ldr      x8, [x0, #0x48]!
00078F98 080940f9 ldr      x8, [x8, #0x10]
00078F9C 00013fd6 blr      x8
00078FA0 b83e40f9 ldr      x24, [x21, #0x78]
00078FA4 580100b4 cbz      x24, #0x78fcc
00078FA8 f60318aa mov      x22, x24
00078FAC c88e44f8 ldr      x8, [x22, #0x48]!
00078FB0 e00316aa mov      x0, x22
00078FB4 080940f9 ldr      x8, [x8, #0x10]
00078FB8 00013fd6 blr      x8
00078FBC c80240f9 ldr      x8, [x22]
00078FC0 e00316aa mov      x0, x22
00078FC4 080d40f9 ldr      x8, [x8, #0x18]
00078FC8 00013fd6 blr      x8
00078FCC b70000b4 cbz      x23, #0x78fe0
00078FD0 e00317aa mov      x0, x23
00078FD4 088c44f8 ldr      x8, [x0, #0x48]!
00078FD8 080d40f9 ldr      x8, [x8, #0x18]
00078FDC 00013fd6 blr      x8
00078FE0 e1430091 add      x1, sp, #0x10
00078FE4 e00314aa mov      x0, x20
00078FE8 f76301a9 stp      x23, x24, [sp, #0x10]
00078FEC 61daff97 bl       #0x6f970
00078FF0 a80240f9 ldr      x8, [x21]
00078FF4 e00315aa mov      x0, x21
00078FF8 090940f9 ldr      x9, [x8, #0x10]
00078FFC e8430091 add      x8, sp, #0x10
00079000 20013fd6 blr      x9
00079004 e1230091 add      x1, sp, #8
00079008 e00314aa mov      x0, x20
0007900C f50700f9 str      x21, [sp, #8]
00079010 f17d1194 bl       #0x4d87d4
00079014 e00740f9 ldr      x0, [sp, #8]
00079018 800000b4 cbz      x0, #0x79028
0007901C 088c44f8 ldr      x8, [x0, #0x48]!
00079020 080d40f9 ldr      x8, [x8, #0x18]
00079024 00013fd6 blr      x8
00079028 e80b40f9 ldr      x8, [sp, #0x10]
0007902C 680200f9 str      x8, [x19]
00079030 f44f45a9 ldp      x20, x19, [sp, #0x50]
00079034 f65744a9 ldp      x22, x21, [sp, #0x40]
00079038 f85f43a9 ldp      x24, x23, [sp, #0x30]
0007903C fd7b42a9 ldp      x29, x30, [sp, #0x20]
00079040 ff830191 add      sp, sp, #0x60
00079044 c0035fd6 ret      
~~~
### 0x79b08 (64 slots)
~~~asm
00079B08 ff8301d1 sub      sp, sp, #0x60
00079B0C fd7b02a9 stp      x29, x30, [sp, #0x20]
00079B10 f85f03a9 stp      x24, x23, [sp, #0x30]
00079B14 f65704a9 stp      x22, x21, [sp, #0x40]
00079B18 f44f05a9 stp      x20, x19, [sp, #0x50]
00079B1C fd830091 add      x29, sp, #0x20
00079B20 f40300aa mov      x20, x0
00079B24 e0430091 add      x0, sp, #0x10
00079B28 f30308aa mov      x19, x8
00079B2C 37000094 bl       #0x79c08
00079B30 f50300aa mov      x21, x0
00079B34 a00000b4 cbz      x0, #0x79b48
00079B38 e00315aa mov      x0, x21
00079B3C 088c44f8 ldr      x8, [x0, #0x48]!
00079B40 080940f9 ldr      x8, [x8, #0x10]
00079B44 00013fd6 blr      x8
00079B48 b73a40f9 ldr      x23, [x21, #0x70]
00079B4C b70000b4 cbz      x23, #0x79b60
00079B50 e00317aa mov      x0, x23
00079B54 088c44f8 ldr      x8, [x0, #0x48]!
00079B58 080940f9 ldr      x8, [x8, #0x10]
00079B5C 00013fd6 blr      x8
00079B60 b83e40f9 ldr      x24, [x21, #0x78]
00079B64 580100b4 cbz      x24, #0x79b8c
00079B68 f60318aa mov      x22, x24
00079B6C c88e44f8 ldr      x8, [x22, #0x48]!
00079B70 e00316aa mov      x0, x22
00079B74 080940f9 ldr      x8, [x8, #0x10]
00079B78 00013fd6 blr      x8
00079B7C c80240f9 ldr      x8, [x22]
00079B80 e00316aa mov      x0, x22
00079B84 080d40f9 ldr      x8, [x8, #0x18]
00079B88 00013fd6 blr      x8
00079B8C b70000b4 cbz      x23, #0x79ba0
00079B90 e00317aa mov      x0, x23
00079B94 088c44f8 ldr      x8, [x0, #0x48]!
00079B98 080d40f9 ldr      x8, [x8, #0x18]
00079B9C 00013fd6 blr      x8
00079BA0 e1430091 add      x1, sp, #0x10
00079BA4 e00314aa mov      x0, x20
00079BA8 f76301a9 stp      x23, x24, [sp, #0x10]
00079BAC 71d7ff97 bl       #0x6f970
00079BB0 a80240f9 ldr      x8, [x21]
00079BB4 e00315aa mov      x0, x21
00079BB8 090940f9 ldr      x9, [x8, #0x10]
00079BBC e8430091 add      x8, sp, #0x10
00079BC0 20013fd6 blr      x9
00079BC4 e1230091 add      x1, sp, #8
00079BC8 e00314aa mov      x0, x20
00079BCC f50700f9 str      x21, [sp, #8]
00079BD0 017b1194 bl       #0x4d87d4
00079BD4 e00740f9 ldr      x0, [sp, #8]
00079BD8 800000b4 cbz      x0, #0x79be8
00079BDC 088c44f8 ldr      x8, [x0, #0x48]!
00079BE0 080d40f9 ldr      x8, [x8, #0x18]
00079BE4 00013fd6 blr      x8
00079BE8 e80b40f9 ldr      x8, [sp, #0x10]
00079BEC 680200f9 str      x8, [x19]
00079BF0 f44f45a9 ldp      x20, x19, [sp, #0x50]
00079BF4 f65744a9 ldp      x22, x21, [sp, #0x40]
00079BF8 f85f43a9 ldp      x24, x23, [sp, #0x30]
00079BFC fd7b42a9 ldp      x29, x30, [sp, #0x20]
00079C00 ff830191 add      sp, sp, #0x60
00079C04 c0035fd6 ret      
~~~
### 0x7a644 (64 slots)
~~~asm
0007A644 ff8301d1 sub      sp, sp, #0x60
0007A648 fd7b02a9 stp      x29, x30, [sp, #0x20]
0007A64C f85f03a9 stp      x24, x23, [sp, #0x30]
0007A650 f65704a9 stp      x22, x21, [sp, #0x40]
0007A654 f44f05a9 stp      x20, x19, [sp, #0x50]
0007A658 fd830091 add      x29, sp, #0x20
0007A65C f40300aa mov      x20, x0
0007A660 e0430091 add      x0, sp, #0x10
0007A664 f30308aa mov      x19, x8
0007A668 37000094 bl       #0x7a744
0007A66C f50300aa mov      x21, x0
0007A670 a00000b4 cbz      x0, #0x7a684
0007A674 e00315aa mov      x0, x21
0007A678 088c44f8 ldr      x8, [x0, #0x48]!
0007A67C 080940f9 ldr      x8, [x8, #0x10]
0007A680 00013fd6 blr      x8
0007A684 b73a40f9 ldr      x23, [x21, #0x70]
0007A688 b70000b4 cbz      x23, #0x7a69c
0007A68C e00317aa mov      x0, x23
0007A690 088c44f8 ldr      x8, [x0, #0x48]!
0007A694 080940f9 ldr      x8, [x8, #0x10]
0007A698 00013fd6 blr      x8
0007A69C b83e40f9 ldr      x24, [x21, #0x78]
0007A6A0 580100b4 cbz      x24, #0x7a6c8
0007A6A4 f60318aa mov      x22, x24
0007A6A8 c88e44f8 ldr      x8, [x22, #0x48]!
0007A6AC e00316aa mov      x0, x22
0007A6B0 080940f9 ldr      x8, [x8, #0x10]
0007A6B4 00013fd6 blr      x8
0007A6B8 c80240f9 ldr      x8, [x22]
0007A6BC e00316aa mov      x0, x22
0007A6C0 080d40f9 ldr      x8, [x8, #0x18]
0007A6C4 00013fd6 blr      x8
0007A6C8 b70000b4 cbz      x23, #0x7a6dc
0007A6CC e00317aa mov      x0, x23
0007A6D0 088c44f8 ldr      x8, [x0, #0x48]!
0007A6D4 080d40f9 ldr      x8, [x8, #0x18]
0007A6D8 00013fd6 blr      x8
0007A6DC e1430091 add      x1, sp, #0x10
0007A6E0 e00314aa mov      x0, x20
0007A6E4 f76301a9 stp      x23, x24, [sp, #0x10]
0007A6E8 a2d4ff97 bl       #0x6f970
0007A6EC a80240f9 ldr      x8, [x21]
0007A6F0 e00315aa mov      x0, x21
0007A6F4 090940f9 ldr      x9, [x8, #0x10]
0007A6F8 e8430091 add      x8, sp, #0x10
0007A6FC 20013fd6 blr      x9
0007A700 e1230091 add      x1, sp, #8
0007A704 e00314aa mov      x0, x20
0007A708 f50700f9 str      x21, [sp, #8]
0007A70C 32781194 bl       #0x4d87d4
0007A710 e00740f9 ldr      x0, [sp, #8]
0007A714 800000b4 cbz      x0, #0x7a724
0007A718 088c44f8 ldr      x8, [x0, #0x48]!
0007A71C 080d40f9 ldr      x8, [x8, #0x18]
0007A720 00013fd6 blr      x8
0007A724 e80b40f9 ldr      x8, [sp, #0x10]
0007A728 680200f9 str      x8, [x19]
0007A72C f44f45a9 ldp      x20, x19, [sp, #0x50]
0007A730 f65744a9 ldp      x22, x21, [sp, #0x40]
0007A734 f85f43a9 ldp      x24, x23, [sp, #0x30]
0007A738 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0007A73C ff830191 add      sp, sp, #0x60
0007A740 c0035fd6 ret      
~~~
### 0x7b208 (64 slots)
~~~asm
0007B208 ff8301d1 sub      sp, sp, #0x60
0007B20C fd7b02a9 stp      x29, x30, [sp, #0x20]
0007B210 f85f03a9 stp      x24, x23, [sp, #0x30]
0007B214 f65704a9 stp      x22, x21, [sp, #0x40]
0007B218 f44f05a9 stp      x20, x19, [sp, #0x50]
0007B21C fd830091 add      x29, sp, #0x20
0007B220 f40300aa mov      x20, x0
0007B224 e0430091 add      x0, sp, #0x10
0007B228 f30308aa mov      x19, x8
0007B22C 37000094 bl       #0x7b308
0007B230 f50300aa mov      x21, x0
0007B234 a00000b4 cbz      x0, #0x7b248
0007B238 e00315aa mov      x0, x21
0007B23C 088c44f8 ldr      x8, [x0, #0x48]!
0007B240 080940f9 ldr      x8, [x8, #0x10]
0007B244 00013fd6 blr      x8
0007B248 b73a40f9 ldr      x23, [x21, #0x70]
0007B24C b70000b4 cbz      x23, #0x7b260
0007B250 e00317aa mov      x0, x23
0007B254 088c44f8 ldr      x8, [x0, #0x48]!
0007B258 080940f9 ldr      x8, [x8, #0x10]
0007B25C 00013fd6 blr      x8
0007B260 b83e40f9 ldr      x24, [x21, #0x78]
0007B264 580100b4 cbz      x24, #0x7b28c
0007B268 f60318aa mov      x22, x24
0007B26C c88e44f8 ldr      x8, [x22, #0x48]!
0007B270 e00316aa mov      x0, x22
0007B274 080940f9 ldr      x8, [x8, #0x10]
0007B278 00013fd6 blr      x8
0007B27C c80240f9 ldr      x8, [x22]
0007B280 e00316aa mov      x0, x22
0007B284 080d40f9 ldr      x8, [x8, #0x18]
0007B288 00013fd6 blr      x8
0007B28C b70000b4 cbz      x23, #0x7b2a0
0007B290 e00317aa mov      x0, x23
0007B294 088c44f8 ldr      x8, [x0, #0x48]!
0007B298 080d40f9 ldr      x8, [x8, #0x18]
0007B29C 00013fd6 blr      x8
0007B2A0 e1430091 add      x1, sp, #0x10
0007B2A4 e00314aa mov      x0, x20
0007B2A8 f76301a9 stp      x23, x24, [sp, #0x10]
0007B2AC b1d1ff97 bl       #0x6f970
0007B2B0 a80240f9 ldr      x8, [x21]
0007B2B4 e00315aa mov      x0, x21
0007B2B8 090940f9 ldr      x9, [x8, #0x10]
0007B2BC e8430091 add      x8, sp, #0x10
0007B2C0 20013fd6 blr      x9
0007B2C4 e1230091 add      x1, sp, #8
0007B2C8 e00314aa mov      x0, x20
0007B2CC f50700f9 str      x21, [sp, #8]
0007B2D0 41751194 bl       #0x4d87d4
0007B2D4 e00740f9 ldr      x0, [sp, #8]
0007B2D8 800000b4 cbz      x0, #0x7b2e8
0007B2DC 088c44f8 ldr      x8, [x0, #0x48]!
0007B2E0 080d40f9 ldr      x8, [x8, #0x18]
0007B2E4 00013fd6 blr      x8
0007B2E8 e80b40f9 ldr      x8, [sp, #0x10]
0007B2EC 680200f9 str      x8, [x19]
0007B2F0 f44f45a9 ldp      x20, x19, [sp, #0x50]
0007B2F4 f65744a9 ldp      x22, x21, [sp, #0x40]
0007B2F8 f85f43a9 ldp      x24, x23, [sp, #0x30]
0007B2FC fd7b42a9 ldp      x29, x30, [sp, #0x20]
0007B300 ff830191 add      sp, sp, #0x60
0007B304 c0035fd6 ret      
~~~
### 0x7bd44 (64 slots)
~~~asm
0007BD44 ff8301d1 sub      sp, sp, #0x60
0007BD48 fd7b02a9 stp      x29, x30, [sp, #0x20]
0007BD4C f85f03a9 stp      x24, x23, [sp, #0x30]
0007BD50 f65704a9 stp      x22, x21, [sp, #0x40]
0007BD54 f44f05a9 stp      x20, x19, [sp, #0x50]
0007BD58 fd830091 add      x29, sp, #0x20
0007BD5C f40300aa mov      x20, x0
0007BD60 e0430091 add      x0, sp, #0x10
0007BD64 f30308aa mov      x19, x8
0007BD68 37000094 bl       #0x7be44
0007BD6C f50300aa mov      x21, x0
0007BD70 a00000b4 cbz      x0, #0x7bd84
0007BD74 e00315aa mov      x0, x21
0007BD78 088c44f8 ldr      x8, [x0, #0x48]!
0007BD7C 080940f9 ldr      x8, [x8, #0x10]
0007BD80 00013fd6 blr      x8
0007BD84 b73a40f9 ldr      x23, [x21, #0x70]
0007BD88 b70000b4 cbz      x23, #0x7bd9c
0007BD8C e00317aa mov      x0, x23
0007BD90 088c44f8 ldr      x8, [x0, #0x48]!
0007BD94 080940f9 ldr      x8, [x8, #0x10]
0007BD98 00013fd6 blr      x8
0007BD9C b83e40f9 ldr      x24, [x21, #0x78]
0007BDA0 580100b4 cbz      x24, #0x7bdc8
0007BDA4 f60318aa mov      x22, x24
0007BDA8 c88e44f8 ldr      x8, [x22, #0x48]!
0007BDAC e00316aa mov      x0, x22
0007BDB0 080940f9 ldr      x8, [x8, #0x10]
0007BDB4 00013fd6 blr      x8
0007BDB8 c80240f9 ldr      x8, [x22]
0007BDBC e00316aa mov      x0, x22
0007BDC0 080d40f9 ldr      x8, [x8, #0x18]
0007BDC4 00013fd6 blr      x8
0007BDC8 b70000b4 cbz      x23, #0x7bddc
0007BDCC e00317aa mov      x0, x23
0007BDD0 088c44f8 ldr      x8, [x0, #0x48]!
0007BDD4 080d40f9 ldr      x8, [x8, #0x18]
0007BDD8 00013fd6 blr      x8
0007BDDC e1430091 add      x1, sp, #0x10
0007BDE0 e00314aa mov      x0, x20
0007BDE4 f76301a9 stp      x23, x24, [sp, #0x10]
0007BDE8 e2ceff97 bl       #0x6f970
0007BDEC a80240f9 ldr      x8, [x21]
0007BDF0 e00315aa mov      x0, x21
0007BDF4 090940f9 ldr      x9, [x8, #0x10]
0007BDF8 e8430091 add      x8, sp, #0x10
0007BDFC 20013fd6 blr      x9
0007BE00 e1230091 add      x1, sp, #8
0007BE04 e00314aa mov      x0, x20
0007BE08 f50700f9 str      x21, [sp, #8]
0007BE0C 72721194 bl       #0x4d87d4
0007BE10 e00740f9 ldr      x0, [sp, #8]
0007BE14 800000b4 cbz      x0, #0x7be24
0007BE18 088c44f8 ldr      x8, [x0, #0x48]!
0007BE1C 080d40f9 ldr      x8, [x8, #0x18]
0007BE20 00013fd6 blr      x8
0007BE24 e80b40f9 ldr      x8, [sp, #0x10]
0007BE28 680200f9 str      x8, [x19]
0007BE2C f44f45a9 ldp      x20, x19, [sp, #0x50]
0007BE30 f65744a9 ldp      x22, x21, [sp, #0x40]
0007BE34 f85f43a9 ldp      x24, x23, [sp, #0x30]
0007BE38 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0007BE3C ff830191 add      sp, sp, #0x60
0007BE40 c0035fd6 ret      
~~~
### 0x7c884 (64 slots)
~~~asm
0007C884 ff8301d1 sub      sp, sp, #0x60
0007C888 fd7b02a9 stp      x29, x30, [sp, #0x20]
0007C88C f85f03a9 stp      x24, x23, [sp, #0x30]
0007C890 f65704a9 stp      x22, x21, [sp, #0x40]
0007C894 f44f05a9 stp      x20, x19, [sp, #0x50]
0007C898 fd830091 add      x29, sp, #0x20
0007C89C f40300aa mov      x20, x0
0007C8A0 e0430091 add      x0, sp, #0x10
0007C8A4 f30308aa mov      x19, x8
0007C8A8 37000094 bl       #0x7c984
0007C8AC f50300aa mov      x21, x0
0007C8B0 a00000b4 cbz      x0, #0x7c8c4
0007C8B4 e00315aa mov      x0, x21
0007C8B8 088c44f8 ldr      x8, [x0, #0x48]!
0007C8BC 080940f9 ldr      x8, [x8, #0x10]
0007C8C0 00013fd6 blr      x8
0007C8C4 b73a40f9 ldr      x23, [x21, #0x70]
0007C8C8 b70000b4 cbz      x23, #0x7c8dc
0007C8CC e00317aa mov      x0, x23
0007C8D0 088c44f8 ldr      x8, [x0, #0x48]!
0007C8D4 080940f9 ldr      x8, [x8, #0x10]
0007C8D8 00013fd6 blr      x8
0007C8DC b83e40f9 ldr      x24, [x21, #0x78]
0007C8E0 580100b4 cbz      x24, #0x7c908
0007C8E4 f60318aa mov      x22, x24
0007C8E8 c88e44f8 ldr      x8, [x22, #0x48]!
0007C8EC e00316aa mov      x0, x22
0007C8F0 080940f9 ldr      x8, [x8, #0x10]
0007C8F4 00013fd6 blr      x8
0007C8F8 c80240f9 ldr      x8, [x22]
0007C8FC e00316aa mov      x0, x22
0007C900 080d40f9 ldr      x8, [x8, #0x18]
0007C904 00013fd6 blr      x8
0007C908 b70000b4 cbz      x23, #0x7c91c
0007C90C e00317aa mov      x0, x23
0007C910 088c44f8 ldr      x8, [x0, #0x48]!
0007C914 080d40f9 ldr      x8, [x8, #0x18]
0007C918 00013fd6 blr      x8
0007C91C e1430091 add      x1, sp, #0x10
0007C920 e00314aa mov      x0, x20
0007C924 f76301a9 stp      x23, x24, [sp, #0x10]
0007C928 12ccff97 bl       #0x6f970
0007C92C a80240f9 ldr      x8, [x21]
0007C930 e00315aa mov      x0, x21
0007C934 090940f9 ldr      x9, [x8, #0x10]
0007C938 e8430091 add      x8, sp, #0x10
0007C93C 20013fd6 blr      x9
0007C940 e1230091 add      x1, sp, #8
0007C944 e00314aa mov      x0, x20
0007C948 f50700f9 str      x21, [sp, #8]
0007C94C a26f1194 bl       #0x4d87d4
0007C950 e00740f9 ldr      x0, [sp, #8]
0007C954 800000b4 cbz      x0, #0x7c964
0007C958 088c44f8 ldr      x8, [x0, #0x48]!
0007C95C 080d40f9 ldr      x8, [x8, #0x18]
0007C960 00013fd6 blr      x8
0007C964 e80b40f9 ldr      x8, [sp, #0x10]
0007C968 680200f9 str      x8, [x19]
0007C96C f44f45a9 ldp      x20, x19, [sp, #0x50]
0007C970 f65744a9 ldp      x22, x21, [sp, #0x40]
0007C974 f85f43a9 ldp      x24, x23, [sp, #0x30]
0007C978 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0007C97C ff830191 add      sp, sp, #0x60
0007C980 c0035fd6 ret      
~~~
### 0x87f60 (1142 slots)
~~~asm
00087F60 ff8302d1 sub      sp, sp, #0xa0
00087F64 fd7b04a9 stp      x29, x30, [sp, #0x40]
00087F68 fb2b00f9 str      x27, [sp, #0x50]
00087F6C fa6706a9 stp      x26, x25, [sp, #0x60]
00087F70 f85f07a9 stp      x24, x23, [sp, #0x70]
00087F74 f65708a9 stp      x22, x21, [sp, #0x80]
00087F78 f44f09a9 stp      x20, x19, [sp, #0x90]
00087F7C fd030191 add      x29, sp, #0x40
00087F80 14401791 add      x20, x0, #0x5d0
00087F84 0290a052 mov      w2, #0x4800000
00087F88 f30300aa mov      x19, x0
00087F8C e10314aa mov      x1, x20
00087F90 6e75fe97 bl       #0x25548
00087F94 20008052 mov      w0, #1
00087F98 35008052 mov      w21, #1
00087F9C d9b91594 bl       #0x5f6700
00087FA0 812c00d0 adrp     x1, #0x619000
00087FA4 21580991 add      x1, x1, #0x256
00087FA8 f52300b9 str      w21, [sp, #0x20]
00087FAC 0316a052 mov      w3, #0xb00000
00087FB0 e2830091 add      x2, sp, #0x20
00087FB4 e00314aa mov      x0, x20
00087FB8 60040094 bl       #0x89138
00087FBC 48008052 mov      w8, #2
00087FC0 412c00b0 adrp     x1, #0x610000
00087FC4 219c3791 add      x1, x1, #0xde7
00087FC8 e2830091 add      x2, sp, #0x20
00087FCC e82300b9 str      w8, [sp, #0x20]
00087FD0 e00314aa mov      x0, x20
00087FD4 0304a052 mov      w3, #0x200000
00087FD8 58040094 bl       #0x89138
00087FDC 68008052 mov      w8, #3
00087FE0 212c00f0 adrp     x1, #0x60e000
00087FE4 21ac3591 add      x1, x1, #0xd6b
00087FE8 e2830091 add      x2, sp, #0x20
00087FEC e82300b9 str      w8, [sp, #0x20]
00087FF0 e00314aa mov      x0, x20
00087FF4 0308a052 mov      w3, #0x400000
00087FF8 50040094 bl       #0x89138
00087FFC 88008052 mov      w8, #4
00088000 412c00f0 adrp     x1, #0x613000
00088004 21b00191 add      x1, x1, #0x6c
00088008 e2830091 add      x2, sp, #0x20
0008800C e82300b9 str      w8, [sp, #0x20]
00088010 e00314aa mov      x0, x20
00088014 0306a052 mov      w3, #0x300000
00088018 48040094 bl       #0x89138
0008801C a8008052 mov      w8, #5
00088020 812c0090 adrp     x1, #0x618000
00088024 21681c91 add      x1, x1, #0x71a
00088028 e2830091 add      x2, sp, #0x20
0008802C e82300b9 str      w8, [sp, #0x20]
00088030 e00314aa mov      x0, x20
00088034 0310a052 mov      w3, #0x800000
00088038 40040094 bl       #0x89138
0008803C c8008052 mov      w8, #6
00088040 812c00b0 adrp     x1, #0x619000
00088044 21840991 add      x1, x1, #0x261
00088048 e2830091 add      x2, sp, #0x20
0008804C e82300b9 str      w8, [sp, #0x20]
00088050 e00314aa mov      x0, x20
00088054 0310a052 mov      w3, #0x800000
00088058 38040094 bl       #0x89138
0008805C e8008052 mov      w8, #7
00088060 012c00f0 adrp     x1, #0x60b000
00088064 21b01d91 add      x1, x1, #0x76c
00088068 e2830091 add      x2, sp, #0x20
0008806C e82300b9 str      w8, [sp, #0x20]
00088070 e00314aa mov      x0, x20
00088074 0304a052 mov      w3, #0x200000
00088078 30040094 bl       #0x89138
0008807C 08018052 mov      w8, #8
00088080 412c00f0 adrp     x1, #0x613000
00088084 21982b91 add      x1, x1, #0xae6
00088088 e2830091 add      x2, sp, #0x20
0008808C e82300b9 str      w8, [sp, #0x20]
00088090 e00314aa mov      x0, x20
00088094 0302a052 mov      w3, #0x100000
00088098 28040094 bl       #0x89138
0008809C 28018052 mov      w8, #9
000880A0 c12c0090 adrp     x1, #0x620000
000880A4 21803291 add      x1, x1, #0xca0
000880A8 e2830091 add      x2, sp, #0x20
000880AC e82300b9 str      w8, [sp, #0x20]
000880B0 e00314aa mov      x0, x20
000880B4 0302a052 mov      w3, #0x100000
000880B8 20040094 bl       #0x89138
000880BC 48018052 mov      w8, #0xa
000880C0 812c00b0 adrp     x1, #0x619000
000880C4 21a40991 add      x1, x1, #0x269
000880C8 e2830091 add      x2, sp, #0x20
000880CC e82300b9 str      w8, [sp, #0x20]
000880D0 e00314aa mov      x0, x20
000880D4 0302a052 mov      w3, #0x100000
000880D8 18040094 bl       #0x89138
000880DC 79018052 mov      w25, #0xb
000880E0 212c00f0 adrp     x1, #0x60f000
000880E4 21e81f91 add      x1, x1, #0x7fa
000880E8 e2830091 add      x2, sp, #0x20
000880EC f92300b9 str      w25, [sp, #0x20]
000880F0 e00314aa mov      x0, x20
000880F4 0304a052 mov      w3, #0x200000
000880F8 10040094 bl       #0x89138
000880FC 88018052 mov      w8, #0xc
00088100 412c00f0 adrp     x1, #0x613000
00088104 21e00191 add      x1, x1, #0x78
00088108 e2830091 add      x2, sp, #0x20
0008810C e82300b9 str      w8, [sp, #0x20]
00088110 e00314aa mov      x0, x20
00088114 0302a052 mov      w3, #0x100000
00088118 08040094 bl       #0x89138
0008811C a8018052 mov      w8, #0xd
00088120 a12c00d0 adrp     x1, #0x61e000
00088124 21e80e91 add      x1, x1, #0x3ba
00088128 e2830091 add      x2, sp, #0x20
0008812C e82300b9 str      w8, [sp, #0x20]
00088130 e00314aa mov      x0, x20
00088134 0302a052 mov      w3, #0x100000
00088138 00040094 bl       #0x89138
0008813C c8018052 mov      w8, #0xe
00088140 612c00d0 adrp     x1, #0x616000
00088144 21741f91 add      x1, x1, #0x7dd
00088148 e2830091 add      x2, sp, #0x20
0008814C e82300b9 str      w8, [sp, #0x20]
00088150 e00314aa mov      x0, x20
00088154 0318a052 mov      w3, #0xc00000
00088158 f8030094 bl       #0x89138
0008815C e8018052 mov      w8, #0xf
00088160 012c00d0 adrp     x1, #0x60a000
00088164 21943491 add      x1, x1, #0xd25
00088168 e2830091 add      x2, sp, #0x20
0008816C e82300b9 str      w8, [sp, #0x20]
00088170 e00314aa mov      x0, x20
00088174 0302a052 mov      w3, #0x100000
00088178 f0030094 bl       #0x89138
0008817C 08028052 mov      w8, #0x10
00088180 412c00d0 adrp     x1, #0x612000
00088184 21841a91 add      x1, x1, #0x6a1
00088188 e2830091 add      x2, sp, #0x20
0008818C e82300b9 str      w8, [sp, #0x20]
00088190 e00314aa mov      x0, x20
00088194 0302a052 mov      w3, #0x100000
00088198 e8030094 bl       #0x89138
0008819C 28028052 mov      w8, #0x11
000881A0 612c00d0 adrp     x1, #0x616000
000881A4 21a01f91 add      x1, x1, #0x7e8
000881A8 e2830091 add      x2, sp, #0x20
000881AC e82300b9 str      w8, [sp, #0x20]
000881B0 e00314aa mov      x0, x20
000881B4 0302a052 mov      w3, #0x100000
000881B8 e0030094 bl       #0x89138
000881BC 48028052 mov      w8, #0x12
000881C0 412c0090 adrp     x1, #0x610000
000881C4 21e03791 add      x1, x1, #0xdf8
000881C8 e2830091 add      x2, sp, #0x20
000881CC e82300b9 str      w8, [sp, #0x20]
000881D0 e00314aa mov      x0, x20
000881D4 0302a052 mov      w3, #0x100000
000881D8 d8030094 bl       #0x89138
000881DC 68028052 mov      w8, #0x13
000881E0 212c00b0 adrp     x1, #0x60d000
000881E4 21c42891 add      x1, x1, #0xa31
000881E8 e2830091 add      x2, sp, #0x20
000881EC e82300b9 str      w8, [sp, #0x20]
000881F0 e00314aa mov      x0, x20
000881F4 0302a052 mov      w3, #0x100000
000881F8 d0030094 bl       #0x89138
000881FC e00313aa mov      x0, x19
00088200 e774fe97 bl       #0x2559c
00088204 e8830091 add      x8, sp, #0x20
00088208 b2e7ff97 bl       #0x820d0
0008820C 60e642f9 ldr      x0, [x19, #0x5c8]
00088210 800000b4 cbz      x0, #0x88220
00088214 088c44f8 ldr      x8, [x0, #0x48]!
00088218 080d40f9 ldr      x8, [x8, #0x18]
0008821C 00013fd6 blr      x8
00088220 f61340f9 ldr      x22, [sp, #0x20]
00088224 76e602f9 str      x22, [x19, #0x5c8]
00088228 749e41f9 ldr      x20, [x19, #0x338]
0008822C 540100b4 cbz      x20, #0x88254
00088230 f50314aa mov      x21, x20
00088234 a88e44f8 ldr      x8, [x21, #0x48]!
00088238 e00315aa mov      x0, x21
0008823C 080940f9 ldr      x8, [x8, #0x10]
00088240 00013fd6 blr      x8
00088244 a80240f9 ldr      x8, [x21]
00088248 e00315aa mov      x0, x21
0008824C 080940f9 ldr      x8, [x8, #0x10]
00088250 00013fd6 blr      x8
00088254 c02e40f9 ldr      x0, [x22, #0x58]
00088258 d42e00f9 str      x20, [x22, #0x58]
0008825C 800000b4 cbz      x0, #0x8826c
00088260 088c44f8 ldr      x8, [x0, #0x48]!
00088264 080d40f9 ldr      x8, [x8, #0x18]
00088268 00013fd6 blr      x8
0008826C b40000b4 cbz      x20, #0x88280
00088270 888e44f8 ldr      x8, [x20, #0x48]!
00088274 e00314aa mov      x0, x20
00088278 080d40f9 ldr      x8, [x8, #0x18]
0008827C 00013fd6 blr      x8
00088280 74e642f9 ldr      x20, [x19, #0x5c8]
00088284 340100b4 cbz      x20, #0x882a8
00088288 888e44f8 ldr      x8, [x20, #0x48]!
0008828C e00314aa mov      x0, x20
00088290 080940f9 ldr      x8, [x8, #0x10]
00088294 00013fd6 blr      x8
00088298 880240f9 ldr      x8, [x20]
0008829C e00314aa mov      x0, x20
000882A0 080d40f9 ldr      x8, [x8, #0x18]
000882A4 00013fd6 blr      x8
000882A8 e00313aa mov      x0, x19
000882AC 39040094 bl       #0x89390
000882B0 60a641f9 ldr      x0, [x19, #0x348]
000882B4 080040f9 ldr      x8, [x0]
000882B8 090940f9 ldr      x9, [x8, #0x10]
000882BC e8830091 add      x8, sp, #0x20
000882C0 20013fd6 blr      x9
000882C4 f41340f9 ldr      x20, [sp, #0x20]
000882C8 d40200b4 cbz      x20, #0x88320
000882CC 953240f9 ldr      x21, [x20, #0x60]
000882D0 b50200b4 cbz      x21, #0x88324
000882D4 a80240f9 ldr      x8, [x21]
000882D8 e00315aa mov      x0, x21
000882DC 080140f9 ldr      x8, [x8]
000882E0 00013fd6 blr      x8
000882E4 f60300aa mov      x22, x0
000882E8 ee140094 bl       #0x8d6a0
000882EC 1f0016eb cmp      x0, x22
000882F0 c0000054 b.eq     #0x88308
000882F4 d60240f9 ldr      x22, [x22]
000882F8 df0200eb cmp      x22, x0
000882FC c41a40fa ccmp     x22, #0, #4, ne
00088300 a1ffff54 b.ne     #0x882f4
00088304 160100b4 cbz      x22, #0x88324
00088308 b74201d1 sub      x23, x21, #0x50
0008830C 888e44f8 ldr      x8, [x20, #0x48]!
00088310 e00314aa mov      x0, x20
00088314 080d40f9 ldr      x8, [x8, #0x18]
00088318 00013fd6 blr      x8
0008831C 170100b5 cbnz     x23, #0x8833c
00088320 08b81594 bl       #0x5f6340
00088324 f7031faa mov      x23, xzr
00088328 888e44f8 ldr      x8, [x20, #0x48]!
0008832C e00314aa mov      x0, x20
00088330 080d40f9 ldr      x8, [x8, #0x18]
00088334 00013fd6 blr      x8
00088338 5fffffb4 cbz      xzr, #0x88320
0008833C da380090 adrp     x26, #0x7a0000
00088340 01e58052 mov      w1, #0x728
00088344 5a8b42f9 ldr      x26, [x26, #0x510]
00088348 02018052 mov      w2, #8
0008834C 480340f9 ldr      x8, [x26]
00088350 141540f9 ldr      x20, [x8, #0x28]
00088354 880240f9 ldr      x8, [x20]
00088358 e00314aa mov      x0, x20
0008835C 080940f9 ldr      x8, [x8, #0x10]
00088360 00013fd6 blr      x8
00088364 48d03bd5 mrs      x8, tpidr_el0
00088368 18c97392 and      x24, x8, #0xffffffffffffe000
0008836C 084f40f9 ldr      x8, [x24, #0x98]
00088370 1f4100f1 cmp      x8, #0x10
00088374 406c0054 b.eq     #0x890fc
00088378 1b630091 add      x27, x24, #0x18
0008837C 02e58052 mov      w2, #0x728
00088380 e1031f2a mov      w1, wzr
00088384 747b28f8 str      x20, [x27, x8, lsl #3]
00088388 084f40f9 ldr      x8, [x24, #0x98]
0008838C f50300aa mov      x21, x0
00088390 08050091 add      x8, x8, #1
00088394 084f00f9 str      x8, [x24, #0x98]
00088398 6eb71594 bl       #0x5f6150
0008839C 084f40f9 ldr      x8, [x24, #0x98]
000883A0 080500d1 sub      x8, x8, #1
000883A4 084f00f9 str      x8, [x24, #0x98]
000883A8 765646f9 ldr      x22, [x19, #0xca8]
000883AC 755606f9 str      x21, [x19, #0xca8]
000883B0 560100b4 cbz      x22, #0x883d8
000883B4 e00316aa mov      x0, x22
000883B8 8a220094 bl       #0x90de0
000883BC 605a46f9 ldr      x0, [x19, #0xcb0]
000883C0 e10316aa mov      x1, x22
000883C4 625e46f9 ldr      x2, [x19, #0xcb8]
000883C8 636246f9 ldr      x3, [x19, #0xcc0]
000883CC 080040f9 ldr      x8, [x0]
000883D0 080d40f9 ldr      x8, [x8, #0x18]
000883D4 00013fd6 blr      x8
000883D8 08e58052 mov      w8, #0x728
000883DC e00313aa mov      x0, x19
000883E0 745a06f9 str      x20, [x19, #0xcb0]
000883E4 685e06f9 str      x8, [x19, #0xcb8]
000883E8 08018052 mov      w8, #8
000883EC 686206f9 str      x8, [x19, #0xcc0]
000883F0 abe5ff97 bl       #0x81a9c
000883F4 e00313aa mov      x0, x19
000883F8 36e6ff97 bl       #0x81cd0
000883FC 793e0db9 str      w25, [x19, #0xd3c]
00088400 f0750694 bl       #0x225bc0
00088404 082c40b9 ldr      w8, [x0, #0x2c]
00088408 09050051 sub      w9, w8, #1
0008840C 3f090071 cmp      w9, #2
00088410 c2000054 b.hs     #0x88428
00088414 c83a00b0 adrp     x8, #0x7e1000
00088418 08811591 add      x8, x8, #0x560
0008841C 000140f9 ldr      x0, [x8]
00088420 7a8aff97 bl       #0x6ae08
00088424 05000014 b        #0x88438
00088428 a8000034 cbz      w8, #0x8843c
0008842C 00244139 ldrb     w0, [x0, #0x49]
00088430 e1031f2a mov      w1, wzr
00088434 588aff97 bl       #0x6ad94
00088438 603e0db9 str      w0, [x19, #0xd3c]
0008843C 605e40f9 ldr      x0, [x19, #0xb8]
00088440 c8648fd2 mov      x8, #0x7b26
00088444 4885adf2 movk     x8, #0x6c2a, lsl #16
00088448 080bd3f2 movk     x8, #0x9858, lsl #32
0008844C 48ebfdf2 movk     x8, #0xef5a, lsl #48
00088450 292c0090 adrp     x9, #0x60c000
00088454 299d3a91 add      x9, x9, #0xea7
00088458 e82702a9 stp      x8, x9, [sp, #0x20]
0008845C 28038052 mov      w8, #0x19
00088460 e87f03a9 stp      x8, xzr, [sp, #0x30]
00088464 800300b4 cbz      x0, #0x884d4
00088468 62018052 mov      w2, #0xb
0008846C e1830091 add      x1, sp, #0x20
00088470 f933fe97 bl       #0x15454
00088474 e01f40f9 ldr      x0, [sp, #0x38]
00088478 800000b4 cbz      x0, #0x88488
0008847C 088c44f8 ldr      x8, [x0, #0x48]!
00088480 080d40f9 ldr      x8, [x8, #0x18]
00088484 00013fd6 blr      x8
00088488 605e40f9 ldr      x0, [x19, #0xb8]
0008848C 28408ed2 mov      x8, #0x7201
00088490 c8a4bff2 movk     x8, #0xfd26, lsl #16
00088494 a8b0d7f2 movk     x8, #0xbd85, lsl #32
00088498 28dee6f2 movk     x8, #0x36f1, lsl #48
0008849C 292c0090 adrp     x9, #0x60c000
000884A0 290d0c91 add      x9, x9, #0x303
000884A4 e82702a9 stp      x8, x9, [sp, #0x20]
000884A8 c8038052 mov      w8, #0x1e
000884AC e87f03a9 stp      x8, xzr, [sp, #0x30]
000884B0 200100b4 cbz      x0, #0x884d4
000884B4 623e4db9 ldr      w2, [x19, #0xd3c]
000884B8 e1830091 add      x1, sp, #0x20
000884BC e633fe97 bl       #0x15454
000884C0 e01f40f9 ldr      x0, [sp, #0x38]
000884C4 800000b4 cbz      x0, #0x884d4
000884C8 088c44f8 ldr      x8, [x0, #0x48]!
000884CC 080d40f9 ldr      x8, [x8, #0x18]
000884D0 00013fd6 blr      x8
000884D4 605e40f9 ldr      x0, [x19, #0xb8]
000884D8 289c8dd2 mov      x8, #0x6ce1
000884DC 0818a8f2 movk     x8, #0x40c0, lsl #16
000884E0 a856d2f2 movk     x8, #0x92b5, lsl #32
000884E4 c8a7e2f2 movk     x8, #0x153e, lsl #48
000884E8 a92c0090 adrp     x9, #0x61c000
000884EC 29fd3291 add      x9, x9, #0xcbf
000884F0 e82702a9 stp      x8, x9, [sp, #0x20]
000884F4 c8028052 mov      w8, #0x16
000884F8 e87f03a9 stp      x8, xzr, [sp, #0x30]
000884FC 800300b4 cbz      x0, #0x8856c
00088500 62018052 mov      w2, #0xb
00088504 e1830091 add      x1, sp, #0x20
00088508 d333fe97 bl       #0x15454
0008850C e01f40f9 ldr      x0, [sp, #0x38]
00088510 800000b4 cbz      x0, #0x88520
00088514 088c44f8 ldr      x8, [x0, #0x48]!
00088518 080d40f9 ldr      x8, [x8, #0x18]
0008851C 00013fd6 blr      x8
00088520 605e40f9 ldr      x0, [x19, #0xb8]
00088524 280687d2 mov      x8, #0x3831
00088528 08d0a4f2 movk     x8, #0x2680, lsl #16
0008852C e8a1d2f2 movk     x8, #0x950f, lsl #32
00088530 889ce6f2 movk     x8, #0x34e4, lsl #48
00088534 692c0090 adrp     x9, #0x614000
00088538 29011391 add      x9, x9, #0x4c0
0008853C e82702a9 stp      x8, x9, [sp, #0x20]
00088540 48038052 mov      w8, #0x1a
00088544 e87f03a9 stp      x8, xzr, [sp, #0x30]
00088548 200100b4 cbz      x0, #0x8856c
0008854C 62018052 mov      w2, #0xb
00088550 e1830091 add      x1, sp, #0x20
00088554 c033fe97 bl       #0x15454
00088558 e01f40f9 ldr      x0, [sp, #0x38]
0008855C 800000b4 cbz      x0, #0x8856c
00088560 088c44f8 ldr      x8, [x0, #0x48]!
00088564 080d40f9 ldr      x8, [x8, #0x18]
00088568 00013fd6 blr      x8
0008856C 480340f9 ldr      x8, [x26]
00088570 75e642f9 ldr      x21, [x19, #0x5c8]
00088574 145540f9 ldr      x20, [x8, #0xa8]
00088578 a02e40f9 ldr      x0, [x21, #0x58]
0008857C e01300f9 str      x0, [sp, #0x20]
00088580 800000b4 cbz      x0, #0x88590
00088584 088c44f8 ldr      x8, [x0, #0x48]!
00088588 080940f9 ldr      x8, [x8, #0x10]
0008858C 00013fd6 blr      x8
00088590 632c00d0 adrp     x3, #0x616000
00088594 63501f91 add      x3, x3, #0x7d4
00088598 a8630091 add      x8, x29, #0x18
0008859C e1830091 add      x1, sp, #0x20
000885A0 e00315aa mov      x0, x21
000885A4 e2031faa mov      x2, xzr
000885A8 e40314aa mov      x4, x20
000885AC 87140094 bl       #0x8d7c8
000885B0 e01340f9 ldr      x0, [sp, #0x20]
000885B4 800000b4 cbz      x0, #0x885c4
000885B8 088c44f8 ldr      x8, [x0, #0x48]!
000885BC 080d40f9 ldr      x8, [x8, #0x18]
000885C0 00013fd6 blr      x8
000885C4 a80f40f9 ldr      x8, [x29, #0x18]
000885C8 695646f9 ldr      x9, [x19, #0xca8]
000885CC 092103f9 str      x9, [x8, #0x640]
000885D0 695246f9 ldr      x9, [x19, #0xca0]
000885D4 290940b9 ldr      w9, [x9, #8]
000885D8 094906b9 str      w9, [x8, #0x648]
000885DC 480340f9 ldr      x8, [x26]
000885E0 75e642f9 ldr      x21, [x19, #0x5c8]
000885E4 146540f9 ldr      x20, [x8, #0xc8]
000885E8 a02e40f9 ldr      x0, [x21, #0x58]
000885EC e01300f9 str      x0, [sp, #0x20]
000885F0 800000b4 cbz      x0, #0x88600
000885F4 088c44f8 ldr      x8, [x0, #0x48]!
000885F8 080940f9 ldr      x8, [x8, #0x10]
000885FC 00013fd6 blr      x8
00088600 632c00b0 adrp     x3, #0x615000
00088604 63083191 add      x3, x3, #0xc42
00088608 e8630091 add      x8, sp, #0x18
0008860C e1830091 add      x1, sp, #0x20
00088610 e00315aa mov      x0, x21
00088614 e2031faa mov      x2, xzr
00088618 e40314aa mov      x4, x20
0008861C 48150094 bl       #0x8db3c
00088620 e01340f9 ldr      x0, [sp, #0x20]
00088624 800000b4 cbz      x0, #0x88634
00088628 088c44f8 ldr      x8, [x0, #0x48]!
0008862C 080d40f9 ldr      x8, [x8, #0x18]
00088630 00013fd6 blr      x8
00088634 e80f40f9 ldr      x8, [sp, #0x18]
00088638 602c00f0 adrp     x0, #0x617000
0008863C 00482f91 add      x0, x0, #0xbd2
00088640 695646f9 ldr      x9, [x19, #0xca8]
00088644 23008052 mov      w3, #1
00088648 092103f9 str      x9, [x8, #0x640]
0008864C 480340f9 ldr      x8, [x26]
00088650 61e642f9 ldr      x1, [x19, #0x5c8]
00088654 027540f9 ldr      x2, [x8, #0xe8]
00088658 c8bcfe97 bl       #0x37978
0008865C 480340f9 ldr      x8, [x26]
00088660 202c0090 adrp     x0, #0x60c000
00088664 00a00b91 add      x0, x0, #0x2e8
00088668 61e642f9 ldr      x1, [x19, #0x5c8]
0008866C e3031f2a mov      w3, wzr
00088670 028540f9 ldr      x2, [x8, #0x108]
00088674 c1bcfe97 bl       #0x37978
00088678 480340f9 ldr      x8, [x26]
0008867C 602c00b0 adrp     x0, #0x615000
00088680 00303191 add      x0, x0, #0xc4c
00088684 61e642f9 ldr      x1, [x19, #0x5c8]
00088688 e3031f2a mov      w3, wzr
0008868C 029540f9 ldr      x2, [x8, #0x128]
00088690 babcfe97 bl       #0x37978
00088694 480340f9 ldr      x8, [x26]
00088698 002c00d0 adrp     x0, #0x60a000
0008869C 00d43491 add      x0, x0, #0xd35
000886A0 61e642f9 ldr      x1, [x19, #0x5c8]
000886A4 e3031f2a mov      w3, wzr
000886A8 02a540f9 ldr      x2, [x8, #0x148]
000886AC b3bcfe97 bl       #0x37978
000886B0 480340f9 ldr      x8, [x26]
000886B4 002c00d0 adrp     x0, #0x60a000
000886B8 00943491 add      x0, x0, #0xd25
000886BC 61e642f9 ldr      x1, [x19, #0x5c8]
000886C0 23008052 mov      w3, #1
000886C4 02f540f9 ldr      x2, [x8, #0x1e8]
000886C8 8dccfe97 bl       #0x3b8fc
000886CC 480340f9 ldr      x8, [x26]
000886D0 402c00d0 adrp     x0, #0x612000
000886D4 00841a91 add      x0, x0, #0x6a1
000886D8 61e642f9 ldr      x1, [x19, #0x5c8]
000886DC e3031f2a mov      w3, wzr
000886E0 020541f9 ldr      x2, [x8, #0x208]
000886E4 86ccfe97 bl       #0x3b8fc
000886E8 480340f9 ldr      x8, [x26]
000886EC a02c00f0 adrp     x0, #0x61f000
000886F0 00843f91 add      x0, x0, #0xfe1
000886F4 61e642f9 ldr      x1, [x19, #0x5c8]
000886F8 e3031f2a mov      w3, wzr
000886FC 021541f9 ldr      x2, [x8, #0x228]
00088700 7fccfe97 bl       #0x3b8fc
00088704 480340f9 ldr      x8, [x26]
00088708 602c00d0 adrp     x0, #0x616000
0008870C 00a01f91 add      x0, x0, #0x7e8
00088710 61e642f9 ldr      x1, [x19, #0x5c8]
00088714 e3031f2a mov      w3, wzr
00088718 021541f9 ldr      x2, [x8, #0x228]
0008871C 78ccfe97 bl       #0x3b8fc
00088720 480340f9 ldr      x8, [x26]
00088724 402c0090 adrp     x0, #0x610000
00088728 00e03791 add      x0, x0, #0xdf8
0008872C 61e642f9 ldr      x1, [x19, #0x5c8]
00088730 e3031faa mov      x3, xzr
00088734 022541f9 ldr      x2, [x8, #0x248]
00088738 00dbfe97 bl       #0x3f338
0008873C 74e642f9 ldr      x20, [x19, #0x5c8]
00088740 802e40f9 ldr      x0, [x20, #0x58]
00088744 e01300f9 str      x0, [sp, #0x20]
00088748 800000b4 cbz      x0, #0x88758
0008874C 088c44f8 ldr      x8, [x0, #0x48]!
00088750 080940f9 ldr      x8, [x8, #0x10]
00088754 00013fd6 blr      x8
00088758 432c00f0 adrp     x3, #0x613000
0008875C 63002c91 add      x3, x3, #0xb00
00088760 e8430091 add      x8, sp, #0x10
00088764 e1830091 add      x1, sp, #0x20
00088768 e00314aa mov      x0, x20
0008876C e2031faa mov      x2, xzr
00088770 cb150094 bl       #0x8de9c
00088774 e01340f9 ldr      x0, [sp, #0x20]
00088778 800000b4 cbz      x0, #0x88788
0008877C 088c44f8 ldr      x8, [x0, #0x48]!
00088780 080d40f9 ldr      x8, [x8, #0x18]
00088784 00013fd6 blr      x8
00088788 e80b40f9 ldr      x8, [sp, #0x10]
0008878C 172103f9 str      x23, [x8, #0x640]
00088790 74e642f9 ldr      x20, [x19, #0x5c8]
00088794 802e40f9 ldr      x0, [x20, #0x58]
00088798 e01300f9 str      x0, [sp, #0x20]
0008879C 800000b4 cbz      x0, #0x887ac
000887A0 088c44f8 ldr      x8, [x0, #0x48]!
000887A4 080940f9 ldr      x8, [x8, #0x10]
000887A8 00013fd6 blr      x8
000887AC 232c00d0 adrp     x3, #0x60e000
000887B0 63e40a91 add      x3, x3, #0x2b9
000887B4 e8230091 add      x8, sp, #8
000887B8 e1830091 add      x1, sp, #0x20
000887BC e00314aa mov      x0, x20
000887C0 e2031faa mov      x2, xzr
000887C4 81160094 bl       #0x8e1c8
000887C8 e01340f9 ldr      x0, [sp, #0x20]
000887CC 800000b4 cbz      x0, #0x887dc
000887D0 088c44f8 ldr      x8, [x0, #0x48]!
000887D4 080d40f9 ldr      x8, [x8, #0x18]
000887D8 00013fd6 blr      x8
000887DC e00740f9 ldr      x0, [sp, #8]
000887E0 a00000b4 cbz      x0, #0x887f4
000887E4 088c44f8 ldr      x8, [x0, #0x48]!
000887E8 080d40f9 ldr      x8, [x8, #0x18]
000887EC 00013fd6 blr      x8
000887F0 ff0700f9 str      xzr, [sp, #8]
000887F4 480340f9 ldr      x8, [x26]
000887F8 202c00f0 adrp     x0, #0x60f000
000887FC 00e81f91 add      x0, x0, #0x7fa
00088800 62e642f9 ldr      x2, [x19, #0x5c8]
00088804 612c00f0 adrp     x1, #0x617000
00088808 21b00c91 add      x1, x1, #0x32c
0008880C 03b540f9 ldr      x3, [x8, #0x168]
00088810 789efe97 bl       #0x301f0
00088814 480340f9 ldr      x8, [x26]
00088818 402c00f0 adrp     x0, #0x613000
0008881C 00e00191 add      x0, x0, #0x78
00088820 61e642f9 ldr      x1, [x19, #0x5c8]
00088824 02c540f9 ldr      x2, [x8, #0x188]
00088828 94adfe97 bl       #0x33e78
0008882C 480340f9 ldr      x8, [x26]
00088830 a02c00d0 adrp     x0, #0x61e000
00088834 00e80e91 add      x0, x0, #0x3ba
00088838 61e642f9 ldr      x1, [x19, #0x5c8]
0008883C 02d540f9 ldr      x2, [x8, #0x1a8]
00088840 42e1fe97 bl       #0x40d48
00088844 480340f9 ldr      x8, [x26]
00088848 602c00d0 adrp     x0, #0x616000
0008884C 00741f91 add      x0, x0, #0x7dd
00088850 61e642f9 ldr      x1, [x19, #0x5c8]
00088854 832c00b0 adrp     x3, #0x619000
00088858 63000a91 add      x3, x3, #0x280
0008885C 02e540f9 ldr      x2, [x8, #0x1c8]
00088860 e7b6fe97 bl       #0x363fc
00088864 480340f9 ldr      x8, [x26]
00088868 202c00f0 adrp     x0, #0x60f000
0008886C 00202091 add      x0, x0, #0x808
00088870 61e642f9 ldr      x1, [x19, #0x5c8]
00088874 e3031f2a mov      w3, wzr
00088878 023541f9 ldr      x2, [x8, #0x268]
0008887C 3fbcfe97 bl       #0x37978
00088880 e00b40f9 ldr      x0, [sp, #0x10]
00088884 800000b4 cbz      x0, #0x88894
00088888 088c44f8 ldr      x8, [x0, #0x48]!
0008888C 080d40f9 ldr      x8, [x8, #0x18]
00088890 00013fd6 blr      x8
00088894 e00f40f9 ldr      x0, [sp, #0x18]
00088898 800000b4 cbz      x0, #0x888a8
0008889C 088c44f8 ldr      x8, [x0, #0x48]!
000888A0 080d40f9 ldr      x8, [x8, #0x18]
000888A4 00013fd6 blr      x8
000888A8 a00f40f9 ldr      x0, [x29, #0x18]
000888AC 800000b4 cbz      x0, #0x888bc
000888B0 088c44f8 ldr      x8, [x0, #0x48]!
000888B4 080d40f9 ldr      x8, [x8, #0x18]
000888B8 00013fd6 blr      x8
000888BC 480340f9 ldr      x8, [x26]
000888C0 151540f9 ldr      x21, [x8, #0x28]
000888C4 084f40f9 ldr      x8, [x24, #0x98]
000888C8 1f4100f1 cmp      x8, #0x10
000888CC f51300f9 str      x21, [sp, #0x20]
000888D0 60410054 b.eq     #0x890fc
000888D4 757b28f8 str      x21, [x27, x8, lsl #3]
000888D8 e00315aa mov      x0, x21
000888DC 084f40f9 ldr      x8, [x24, #0x98]
000888E0 01308052 mov      w1, #0x180
000888E4 02028052 mov      w2, #0x10
000888E8 08050091 add      x8, x8, #1
000888EC 084f00f9 str      x8, [x24, #0x98]
000888F0 a80240f9 ldr      x8, [x21]
000888F4 080940f9 ldr      x8, [x8, #0x10]
000888F8 00013fd6 blr      x8
000888FC 204000b4 cbz      x0, #0x89100
00088900 e11340f9 ldr      x1, [sp, #0x20]
00088904 f40300aa mov      x20, x0
00088908 b4200994 bl       #0x2d0bd8
0008890C c83800b0 adrp     x8, #0x7a1000
00088910 e00314aa mov      x0, x20
00088914 089d43f9 ldr      x8, [x8, #0x738]
00088918 09410191 add      x9, x8, #0x50
0008891C 08410091 add      x8, x8, #0x10
00088920 885600a9 stp      x8, x21, [x20]
00088924 08308052 mov      w8, #0x180
00088928 098c04f8 str      x9, [x0, #0x48]!
0008892C 942201a9 stp      x20, x8, [x20, #0x10]
00088930 08028052 mov      w8, #0x10
00088934 881200f9 str      x8, [x20, #0x20]
00088938 084f40f9 ldr      x8, [x24, #0x98]
0008893C 080500d1 sub      x8, x8, #1
00088940 084f00f9 str      x8, [x24, #0x98]
00088944 080040f9 ldr      x8, [x0]
00088948 080940f9 ldr      x8, [x8, #0x10]
0008894C 00013fd6 blr      x8
00088950 606646f9 ldr      x0, [x19, #0xcc8]
00088954 800000b4 cbz      x0, #0x88964
00088958 088c44f8 ldr      x8, [x0, #0x48]!
0008895C 080d40f9 ldr      x8, [x8, #0x18]
00088960 00013fd6 blr      x8
00088964 e00314aa mov      x0, x20
00088968 e1031f2a mov      w1, wzr
0008896C 746606f9 str      x20, [x19, #0xcc8]
00088970 be200994 bl       #0x2d0c68
00088974 084f40f9 ldr      x8, [x24, #0x98]
00088978 1f4100f1 cmp      x8, #0x10
0008897C 003c0054 b.eq     #0x890fc
00088980 f51340f9 ldr      x21, [sp, #0x20]
00088984 01308052 mov      w1, #0x180
00088988 02028052 mov      w2, #0x10
0008898C 757b28f8 str      x21, [x27, x8, lsl #3]
00088990 e00315aa mov      x0, x21
00088994 084f40f9 ldr      x8, [x24, #0x98]
00088998 08050091 add      x8, x8, #1
0008899C 084f00f9 str      x8, [x24, #0x98]
000889A0 a80240f9 ldr      x8, [x21]
000889A4 080940f9 ldr      x8, [x8, #0x10]
000889A8 00013fd6 blr      x8
000889AC a03a00b4 cbz      x0, #0x89100
000889B0 e11340f9 ldr      x1, [sp, #0x20]
000889B4 f40300aa mov      x20, x0
000889B8 88200994 bl       #0x2d0bd8
000889BC c83800b0 adrp     x8, #0x7a1000
000889C0 e00314aa mov      x0, x20
000889C4 08b543f9 ldr      x8, [x8, #0x768]
000889C8 09410191 add      x9, x8, #0x50
000889CC 08410091 add      x8, x8, #0x10
000889D0 885600a9 stp      x8, x21, [x20]
000889D4 08308052 mov      w8, #0x180
000889D8 098c04f8 str      x9, [x0, #0x48]!
000889DC 942201a9 stp      x20, x8, [x20, #0x10]
000889E0 08028052 mov      w8, #0x10
000889E4 881200f9 str      x8, [x20, #0x20]
000889E8 084f40f9 ldr      x8, [x24, #0x98]
000889EC 080500d1 sub      x8, x8, #1
000889F0 084f00f9 str      x8, [x24, #0x98]
000889F4 080040f9 ldr      x8, [x0]
000889F8 080940f9 ldr      x8, [x8, #0x10]
000889FC 00013fd6 blr      x8
00088A00 606a46f9 ldr      x0, [x19, #0xcd0]
00088A04 800000b4 cbz      x0, #0x88a14
00088A08 088c44f8 ldr      x8, [x0, #0x48]!
00088A0C 080d40f9 ldr      x8, [x8, #0x18]
00088A10 00013fd6 blr      x8
00088A14 e00314aa mov      x0, x20
00088A18 e1031f2a mov      w1, wzr
00088A1C 746a06f9 str      x20, [x19, #0xcd0]
00088A20 92200994 bl       #0x2d0c68
00088A24 084f40f9 ldr      x8, [x24, #0x98]
00088A28 1f4100f1 cmp      x8, #0x10
00088A2C 80360054 b.eq     #0x890fc
00088A30 f51340f9 ldr      x21, [sp, #0x20]
00088A34 01308052 mov      w1, #0x180
00088A38 02028052 mov      w2, #0x10
00088A3C 757b28f8 str      x21, [x27, x8, lsl #3]
00088A40 e00315aa mov      x0, x21
00088A44 084f40f9 ldr      x8, [x24, #0x98]
00088A48 08050091 add      x8, x8, #1
00088A4C 084f00f9 str      x8, [x24, #0x98]
00088A50 a80240f9 ldr      x8, [x21]
00088A54 080940f9 ldr      x8, [x8, #0x10]
00088A58 00013fd6 blr      x8
00088A5C 203500b4 cbz      x0, #0x89100
00088A60 e11340f9 ldr      x1, [sp, #0x20]
00088A64 f40300aa mov      x20, x0
00088A68 5c200994 bl       #0x2d0bd8
00088A6C c83800b0 adrp     x8, #0x7a1000
00088A70 e00314aa mov      x0, x20
00088A74 089943f9 ldr      x8, [x8, #0x730]
00088A78 09410191 add      x9, x8, #0x50
00088A7C 08410091 add      x8, x8, #0x10
00088A80 885600a9 stp      x8, x21, [x20]
00088A84 08308052 mov      w8, #0x180
00088A88 098c04f8 str      x9, [x0, #0x48]!
00088A8C 942201a9 stp      x20, x8, [x20, #0x10]
00088A90 08028052 mov      w8, #0x10
00088A94 881200f9 str      x8, [x20, #0x20]
00088A98 084f40f9 ldr      x8, [x24, #0x98]
00088A9C 080500d1 sub      x8, x8, #1
00088AA0 084f00f9 str      x8, [x24, #0x98]
00088AA4 080040f9 ldr      x8, [x0]
00088AA8 080940f9 ldr      x8, [x8, #0x10]
00088AAC 00013fd6 blr      x8
00088AB0 606e46f9 ldr      x0, [x19, #0xcd8]
00088AB4 800000b4 cbz      x0, #0x88ac4
00088AB8 088c44f8 ldr      x8, [x0, #0x48]!
00088ABC 080d40f9 ldr      x8, [x8, #0x18]
00088AC0 00013fd6 blr      x8
00088AC4 e00314aa mov      x0, x20
00088AC8 e1031f2a mov      w1, wzr
00088ACC 746e06f9 str      x20, [x19, #0xcd8]
00088AD0 66200994 bl       #0x2d0c68
00088AD4 084f40f9 ldr      x8, [x24, #0x98]
00088AD8 1f4100f1 cmp      x8, #0x10
00088ADC 00310054 b.eq     #0x890fc
00088AE0 f51340f9 ldr      x21, [sp, #0x20]
00088AE4 01308052 mov      w1, #0x180
00088AE8 02028052 mov      w2, #0x10
00088AEC 757b28f8 str      x21, [x27, x8, lsl #3]
00088AF0 e00315aa mov      x0, x21
00088AF4 084f40f9 ldr      x8, [x24, #0x98]
00088AF8 08050091 add      x8, x8, #1
00088AFC 084f00f9 str      x8, [x24, #0x98]
00088B00 a80240f9 ldr      x8, [x21]
00088B04 080940f9 ldr      x8, [x8, #0x10]
00088B08 00013fd6 blr      x8
00088B0C a02f00b4 cbz      x0, #0x89100
00088B10 e11340f9 ldr      x1, [sp, #0x20]
00088B14 f40300aa mov      x20, x0
00088B18 30200994 bl       #0x2d0bd8
00088B1C c83800b0 adrp     x8, #0x7a1000
00088B20 e00314aa mov      x0, x20
00088B24 08b943f9 ldr      x8, [x8, #0x770]
00088B28 09410191 add      x9, x8, #0x50
00088B2C 08410091 add      x8, x8, #0x10
00088B30 885600a9 stp      x8, x21, [x20]
00088B34 08308052 mov      w8, #0x180
00088B38 098c04f8 str      x9, [x0, #0x48]!
00088B3C 942201a9 stp      x20, x8, [x20, #0x10]
00088B40 08028052 mov      w8, #0x10
00088B44 881200f9 str      x8, [x20, #0x20]
00088B48 084f40f9 ldr      x8, [x24, #0x98]
00088B4C 080500d1 sub      x8, x8, #1
00088B50 084f00f9 str      x8, [x24, #0x98]
00088B54 080040f9 ldr      x8, [x0]
00088B58 080940f9 ldr      x8, [x8, #0x10]
00088B5C 00013fd6 blr      x8
00088B60 607246f9 ldr      x0, [x19, #0xce0]
00088B64 800000b4 cbz      x0, #0x88b74
00088B68 088c44f8 ldr      x8, [x0, #0x48]!
00088B6C 080d40f9 ldr      x8, [x8, #0x18]
00088B70 00013fd6 blr      x8
00088B74 e00314aa mov      x0, x20
00088B78 e1031f2a mov      w1, wzr
00088B7C 747206f9 str      x20, [x19, #0xce0]
00088B80 3a200994 bl       #0x2d0c68
00088B84 084f40f9 ldr      x8, [x24, #0x98]
00088B88 1f4100f1 cmp      x8, #0x10
00088B8C 802b0054 b.eq     #0x890fc
00088B90 f51340f9 ldr      x21, [sp, #0x20]
00088B94 01308052 mov      w1, #0x180
00088B98 02028052 mov      w2, #0x10
00088B9C 757b28f8 str      x21, [x27, x8, lsl #3]
00088BA0 e00315aa mov      x0, x21
00088BA4 084f40f9 ldr      x8, [x24, #0x98]
00088BA8 08050091 add      x8, x8, #1
00088BAC 084f00f9 str      x8, [x24, #0x98]
00088BB0 a80240f9 ldr      x8, [x21]
00088BB4 080940f9 ldr      x8, [x8, #0x10]
00088BB8 00013fd6 blr      x8
00088BBC 202a00b4 cbz      x0, #0x89100
00088BC0 e11340f9 ldr      x1, [sp, #0x20]
00088BC4 f40300aa mov      x20, x0
00088BC8 04200994 bl       #0x2d0bd8
00088BCC c83800b0 adrp     x8, #0x7a1000
00088BD0 e00314aa mov      x0, x20
00088BD4 08a943f9 ldr      x8, [x8, #0x750]
00088BD8 09410191 add      x9, x8, #0x50
00088BDC 08410091 add      x8, x8, #0x10
00088BE0 885600a9 stp      x8, x21, [x20]
00088BE4 08308052 mov      w8, #0x180
00088BE8 098c04f8 str      x9, [x0, #0x48]!
00088BEC 942201a9 stp      x20, x8, [x20, #0x10]
00088BF0 08028052 mov      w8, #0x10
00088BF4 881200f9 str      x8, [x20, #0x20]
00088BF8 084f40f9 ldr      x8, [x24, #0x98]
00088BFC 080500d1 sub      x8, x8, #1
00088C00 084f00f9 str      x8, [x24, #0x98]
00088C04 080040f9 ldr      x8, [x0]
00088C08 080940f9 ldr      x8, [x8, #0x10]
00088C0C 00013fd6 blr      x8
00088C10 607646f9 ldr      x0, [x19, #0xce8]
00088C14 800000b4 cbz      x0, #0x88c24
00088C18 088c44f8 ldr      x8, [x0, #0x48]!
00088C1C 080d40f9 ldr      x8, [x8, #0x18]
00088C20 00013fd6 blr      x8
00088C24 e00314aa mov      x0, x20
00088C28 e1031f2a mov      w1, wzr
00088C2C 747606f9 str      x20, [x19, #0xce8]
00088C30 0e200994 bl       #0x2d0c68
00088C34 e01340f9 ldr      x0, [sp, #0x20]
00088C38 a8630091 add      x8, x29, #0x18
00088C3C e1830091 add      x1, sp, #0x20
00088C40 d588fe97 bl       #0x2af94
00088C44 607a46f9 ldr      x0, [x19, #0xcf0]
00088C48 800000b4 cbz      x0, #0x88c58
00088C4C 088c44f8 ldr      x8, [x0, #0x48]!
00088C50 080d40f9 ldr      x8, [x8, #0x18]
00088C54 00013fd6 blr      x8
00088C58 a00f40f9 ldr      x0, [x29, #0x18]
00088C5C e1031f2a mov      w1, wzr
00088C60 607a06f9 str      x0, [x19, #0xcf0]
00088C64 a62b0994 bl       #0x2d3afc
00088C68 e01340f9 ldr      x0, [sp, #0x20]
00088C6C a8630091 add      x8, x29, #0x18
00088C70 e1830091 add      x1, sp, #0x20
00088C74 5689fe97 bl       #0x2b1cc
00088C78 607e46f9 ldr      x0, [x19, #0xcf8]
00088C7C 800000b4 cbz      x0, #0x88c8c
00088C80 088c44f8 ldr      x8, [x0, #0x48]!
00088C84 080d40f9 ldr      x8, [x8, #0x18]
00088C88 00013fd6 blr      x8
00088C8C a00f40f9 ldr      x0, [x29, #0x18]
00088C90 e1031f2a mov      w1, wzr
00088C94 607e06f9 str      x0, [x19, #0xcf8]
00088C98 40f60894 bl       #0x2c6598
00088C9C 084f40f9 ldr      x8, [x24, #0x98]
00088CA0 1f4100f1 cmp      x8, #0x10
00088CA4 c0220054 b.eq     #0x890fc
00088CA8 f51340f9 ldr      x21, [sp, #0x20]
00088CAC 01308052 mov      w1, #0x180
00088CB0 02028052 mov      w2, #0x10
00088CB4 757b28f8 str      x21, [x27, x8, lsl #3]
00088CB8 e00315aa mov      x0, x21
00088CBC 084f40f9 ldr      x8, [x24, #0x98]
00088CC0 08050091 add      x8, x8, #1
00088CC4 084f00f9 str      x8, [x24, #0x98]
00088CC8 a80240f9 ldr      x8, [x21]
00088CCC 080940f9 ldr      x8, [x8, #0x10]
00088CD0 00013fd6 blr      x8
00088CD4 602100b4 cbz      x0, #0x89100
00088CD8 e11340f9 ldr      x1, [sp, #0x20]
00088CDC f40300aa mov      x20, x0
00088CE0 be1f0994 bl       #0x2d0bd8
00088CE4 c83800b0 adrp     x8, #0x7a1000
00088CE8 e00314aa mov      x0, x20
00088CEC 08a143f9 ldr      x8, [x8, #0x740]
00088CF0 997a01b9 str      w25, [x20, #0x178]
00088CF4 09410191 add      x9, x8, #0x50
00088CF8 08410091 add      x8, x8, #0x10
00088CFC 885600a9 stp      x8, x21, [x20]
00088D00 08308052 mov      w8, #0x180
00088D04 098c04f8 str      x9, [x0, #0x48]!
00088D08 942201a9 stp      x20, x8, [x20, #0x10]
00088D0C 08028052 mov      w8, #0x10
00088D10 881200f9 str      x8, [x20, #0x20]
00088D14 084f40f9 ldr      x8, [x24, #0x98]
00088D18 080500d1 sub      x8, x8, #1
00088D1C 084f00f9 str      x8, [x24, #0x98]
00088D20 080040f9 ldr      x8, [x0]
00088D24 080940f9 ldr      x8, [x8, #0x10]
00088D28 00013fd6 blr      x8
00088D2C 608246f9 ldr      x0, [x19, #0xd00]
00088D30 800000b4 cbz      x0, #0x88d40
00088D34 088c44f8 ldr      x8, [x0, #0x48]!
00088D38 080d40f9 ldr      x8, [x8, #0x18]
00088D3C 00013fd6 blr      x8
00088D40 e00314aa mov      x0, x20
00088D44 e1031f2a mov      w1, wzr
00088D48 748206f9 str      x20, [x19, #0xd00]
00088D4C c71f0994 bl       #0x2d0c68
00088D50 746646f9 ldr      x20, [x19, #0xcc8]
00088D54 b40000b4 cbz      x20, #0x88d68
00088D58 e00314aa mov      x0, x20
00088D5C 088c44f8 ldr      x8, [x0, #0x48]!
00088D60 080940f9 ldr      x8, [x8, #0x10]
00088D64 00013fd6 blr      x8
00088D68 e00a41f9 ldr      x0, [x23, #0x210]
00088D6C f40a01f9 str      x20, [x23, #0x210]
00088D70 800000b4 cbz      x0, #0x88d80
00088D74 088c44f8 ldr      x8, [x0, #0x48]!
00088D78 080d40f9 ldr      x8, [x8, #0x18]
00088D7C 00013fd6 blr      x8
00088D80 746a46f9 ldr      x20, [x19, #0xcd0]
00088D84 b40000b4 cbz      x20, #0x88d98
00088D88 e00314aa mov      x0, x20
00088D8C 088c44f8 ldr      x8, [x0, #0x48]!
00088D90 080940f9 ldr      x8, [x8, #0x10]
00088D94 00013fd6 blr      x8
00088D98 e00e41f9 ldr      x0, [x23, #0x218]
00088D9C f40e01f9 str      x20, [x23, #0x218]
00088DA0 800000b4 cbz      x0, #0x88db0
00088DA4 088c44f8 ldr      x8, [x0, #0x48]!
00088DA8 080d40f9 ldr      x8, [x8, #0x18]
00088DAC 00013fd6 blr      x8
00088DB0 746e46f9 ldr      x20, [x19, #0xcd8]
00088DB4 b40000b4 cbz      x20, #0x88dc8
00088DB8 e00314aa mov      x0, x20
00088DBC 088c44f8 ldr      x8, [x0, #0x48]!
00088DC0 080940f9 ldr      x8, [x8, #0x10]
00088DC4 00013fd6 blr      x8
00088DC8 e01241f9 ldr      x0, [x23, #0x220]
00088DCC f41201f9 str      x20, [x23, #0x220]
00088DD0 800000b4 cbz      x0, #0x88de0
00088DD4 088c44f8 ldr      x8, [x0, #0x48]!
00088DD8 080d40f9 ldr      x8, [x8, #0x18]
00088DDC 00013fd6 blr      x8
00088DE0 747246f9 ldr      x20, [x19, #0xce0]
00088DE4 b40000b4 cbz      x20, #0x88df8
00088DE8 e00314aa mov      x0, x20
00088DEC 088c44f8 ldr      x8, [x0, #0x48]!
00088DF0 080940f9 ldr      x8, [x8, #0x10]
00088DF4 00013fd6 blr      x8
00088DF8 e01641f9 ldr      x0, [x23, #0x228]
00088DFC f41601f9 str      x20, [x23, #0x228]
00088E00 800000b4 cbz      x0, #0x88e10
00088E04 088c44f8 ldr      x8, [x0, #0x48]!
00088E08 080d40f9 ldr      x8, [x8, #0x18]
00088E0C 00013fd6 blr      x8
00088E10 747646f9 ldr      x20, [x19, #0xce8]
00088E14 b40000b4 cbz      x20, #0x88e28
00088E18 e00314aa mov      x0, x20
00088E1C 088c44f8 ldr      x8, [x0, #0x48]!
00088E20 080940f9 ldr      x8, [x8, #0x10]
00088E24 00013fd6 blr      x8
00088E28 e01a41f9 ldr      x0, [x23, #0x230]
00088E2C f41a01f9 str      x20, [x23, #0x230]
00088E30 800000b4 cbz      x0, #0x88e40
00088E34 088c44f8 ldr      x8, [x0, #0x48]!
00088E38 080d40f9 ldr      x8, [x8, #0x18]
00088E3C 00013fd6 blr      x8
00088E40 747a46f9 ldr      x20, [x19, #0xcf0]
00088E44 b40000b4 cbz      x20, #0x88e58
00088E48 e00314aa mov      x0, x20
00088E4C 088c44f8 ldr      x8, [x0, #0x48]!
00088E50 080940f9 ldr      x8, [x8, #0x10]
00088E54 00013fd6 blr      x8
00088E58 e01e41f9 ldr      x0, [x23, #0x238]
00088E5C f41e01f9 str      x20, [x23, #0x238]
00088E60 800000b4 cbz      x0, #0x88e70
00088E64 088c44f8 ldr      x8, [x0, #0x48]!
00088E68 080d40f9 ldr      x8, [x8, #0x18]
00088E6C 00013fd6 blr      x8
00088E70 747e46f9 ldr      x20, [x19, #0xcf8]
00088E74 b40000b4 cbz      x20, #0x88e88
00088E78 e00314aa mov      x0, x20
00088E7C 088c44f8 ldr      x8, [x0, #0x48]!
00088E80 080940f9 ldr      x8, [x8, #0x10]
00088E84 00013fd6 blr      x8
00088E88 e02241f9 ldr      x0, [x23, #0x240]
00088E8C f42201f9 str      x20, [x23, #0x240]
00088E90 800000b4 cbz      x0, #0x88ea0
00088E94 088c44f8 ldr      x8, [x0, #0x48]!
00088E98 080d40f9 ldr      x8, [x8, #0x18]
00088E9C 00013fd6 blr      x8
00088EA0 748246f9 ldr      x20, [x19, #0xd00]
00088EA4 b40000b4 cbz      x20, #0x88eb8
00088EA8 e00314aa mov      x0, x20
00088EAC 088c44f8 ldr      x8, [x0, #0x48]!
00088EB0 080940f9 ldr      x8, [x8, #0x10]
00088EB4 00013fd6 blr      x8
00088EB8 e02641f9 ldr      x0, [x23, #0x248]
00088EBC f42601f9 str      x20, [x23, #0x248]
00088EC0 800000b4 cbz      x0, #0x88ed0
00088EC4 088c44f8 ldr      x8, [x0, #0x48]!
00088EC8 080d40f9 ldr      x8, [x8, #0x18]
00088ECC 00013fd6 blr      x8
00088ED0 480340f9 ldr      x8, [x26]
00088ED4 151540f9 ldr      x21, [x8, #0x28]
00088ED8 084f40f9 ldr      x8, [x24, #0x98]
00088EDC 1f4100f1 cmp      x8, #0x10
00088EE0 f51300f9 str      x21, [sp, #0x20]
00088EE4 c0100054 b.eq     #0x890fc
00088EE8 757b28f8 str      x21, [x27, x8, lsl #3]
00088EEC 017a8052 mov      w1, #0x3d0
00088EF0 084f40f9 ldr      x8, [x24, #0x98]
00088EF4 e00315aa mov      x0, x21
00088EF8 02028052 mov      w2, #0x10
00088EFC 08050091 add      x8, x8, #1
00088F00 084f00f9 str      x8, [x24, #0x98]
00088F04 a80240f9 ldr      x8, [x21]
00088F08 080940f9 ldr      x8, [x8, #0x10]
00088F0C 00013fd6 blr      x8
00088F10 601000b4 cbz      x0, #0x8911c
00088F14 e11340f9 ldr      x1, [sp, #0x20]
00088F18 f40300aa mov      x20, x0
00088F1C b3190994 bl       #0x2cf5e8
00088F20 9fd601f9 str      xzr, [x20, #0x3a8]
00088F24 c8380090 adrp     x8, #0x7a0000
00088F28 80e20e91 add      x0, x20, #0x3b8
00088F2C 9fb203b9 str      wzr, [x20, #0x3b0]
00088F30 9fce01f9 str      xzr, [x20, #0x398]
00088F34 9fa203b9 str      wzr, [x20, #0x3a0]
00088F38 088d42f9 ldr      x8, [x8, #0x518]
00088F3C 09410091 add      x9, x8, #0x10
00088F40 9fc203b9 str      wzr, [x20, #0x3c0]
00088F44 95be01f9 str      x21, [x20, #0x378]
00088F48 94c201f9 str      x20, [x20, #0x380]
00088F4C 890200f9 str      x9, [x20]
00088F50 09c10091 add      x9, x8, #0x30
00088F54 08a10191 add      x8, x8, #0x68
00088F58 88de01f9 str      x8, [x20, #0x3b8]
00088F5C 087a8052 mov      w8, #0x3d0
00088F60 89ba01f9 str      x9, [x20, #0x370]
00088F64 88c601f9 str      x8, [x20, #0x388]
00088F68 08028052 mov      w8, #0x10
00088F6C 88ca01f9 str      x8, [x20, #0x390]
00088F70 084f40f9 ldr      x8, [x24, #0x98]
00088F74 080500d1 sub      x8, x8, #1
00088F78 084f00f9 str      x8, [x24, #0x98]
00088F7C 88de41f9 ldr      x8, [x20, #0x3b8]
00088F80 080940f9 ldr      x8, [x8, #0x10]
00088F84 00013fd6 blr      x8
00088F88 688646f9 ldr      x8, [x19, #0xd08]
00088F8C a80000b4 cbz      x8, #0x88fa0
00088F90 00e10e91 add      x0, x8, #0x3b8
00088F94 08dd41f9 ldr      x8, [x8, #0x3b8]
00088F98 080d40f9 ldr      x8, [x8, #0x18]
00088F9C 00013fd6 blr      x8
00088FA0 e01340f9 ldr      x0, [sp, #0x20]
00088FA4 a8630091 add      x8, x29, #0x18
00088FA8 e1830091 add      x1, sp, #0x20
00088FAC 748606f9 str      x20, [x19, #0xd08]
00088FB0 33010094 bl       #0x8947c
00088FB4 688a46f9 ldr      x8, [x19, #0xd10]
00088FB8 a80000b4 cbz      x8, #0x88fcc
00088FBC 00e10e91 add      x0, x8, #0x3b8
00088FC0 08dd41f9 ldr      x8, [x8, #0x3b8]
00088FC4 080d40f9 ldr      x8, [x8, #0x18]
00088FC8 00013fd6 blr      x8
00088FCC a80f40f9 ldr      x8, [x29, #0x18]
00088FD0 e1830091 add      x1, sp, #0x20
00088FD4 688a06f9 str      x8, [x19, #0xd10]
00088FD8 e01340f9 ldr      x0, [sp, #0x20]
00088FDC a8630091 add      x8, x29, #0x18
00088FE0 71010094 bl       #0x895a4
00088FE4 688e46f9 ldr      x8, [x19, #0xd18]
00088FE8 a80000b4 cbz      x8, #0x88ffc
00088FEC 00e10e91 add      x0, x8, #0x3b8
00088FF0 08dd41f9 ldr      x8, [x8, #0x3b8]
00088FF4 080d40f9 ldr      x8, [x8, #0x18]
00088FF8 00013fd6 blr      x8
00088FFC a80f40f9 ldr      x8, [x29, #0x18]
00089000 e1031f2a mov      w1, wzr
00089004 688e06f9 str      x8, [x19, #0xd18]
00089008 608646f9 ldr      x0, [x19, #0xd08]
0008900C 101d0994 bl       #0x2d044c
00089010 608a46f9 ldr      x0, [x19, #0xd10]
00089014 e1031f2a mov      w1, wzr
00089018 6f1e0994 bl       #0x2d09d4
0008901C 608e46f9 ldr      x0, [x19, #0xd18]
00089020 e1031f2a mov      w1, wzr
00089024 bb1d0994 bl       #0x2d0710
00089028 748646f9 ldr      x20, [x19, #0xd08]
0008902C b40000b4 cbz      x20, #0x89040
00089030 88de41f9 ldr      x8, [x20, #0x3b8]
00089034 80e20e91 add      x0, x20, #0x3b8
00089038 080940f9 ldr      x8, [x8, #0x10]
0008903C 00013fd6 blr      x8
00089040 e82a41f9 ldr      x8, [x23, #0x250]
00089044 f42a01f9 str      x20, [x23, #0x250]
00089048 a80000b4 cbz      x8, #0x8905c
0008904C 00e10e91 add      x0, x8, #0x3b8
00089050 08dd41f9 ldr      x8, [x8, #0x3b8]
00089054 080d40f9 ldr      x8, [x8, #0x18]
00089058 00013fd6 blr      x8
0008905C 748a46f9 ldr      x20, [x19, #0xd10]
00089060 b40000b4 cbz      x20, #0x89074
00089064 88de41f9 ldr      x8, [x20, #0x3b8]
00089068 80e20e91 add      x0, x20, #0x3b8
0008906C 080940f9 ldr      x8, [x8, #0x10]
00089070 00013fd6 blr      x8
00089074 e82e41f9 ldr      x8, [x23, #0x258]
00089078 f42e01f9 str      x20, [x23, #0x258]
0008907C a80000b4 cbz      x8, #0x89090
00089080 00e10e91 add      x0, x8, #0x3b8
00089084 08dd41f9 ldr      x8, [x8, #0x3b8]
00089088 080d40f9 ldr      x8, [x8, #0x18]
0008908C 00013fd6 blr      x8
00089090 738e46f9 ldr      x19, [x19, #0xd18]
00089094 b30000b4 cbz      x19, #0x890a8
00089098 68de41f9 ldr      x8, [x19, #0x3b8]
0008909C 60e20e91 add      x0, x19, #0x3b8
000890A0 080940f9 ldr      x8, [x8, #0x10]
000890A4 00013fd6 blr      x8
000890A8 e83241f9 ldr      x8, [x23, #0x260]
000890AC f33201f9 str      x19, [x23, #0x260]
000890B0 a80000b4 cbz      x8, #0x890c4
000890B4 00e10e91 add      x0, x8, #0x3b8
000890B8 08dd41f9 ldr      x8, [x8, #0x3b8]
000890BC 080d40f9 ldr      x8, [x8, #0x18]
000890C0 00013fd6 blr      x8
000890C4 a83800d0 adrp     x8, #0x79f000
000890C8 a1008052 mov      w1, #5
000890CC 08d142f9 ldr      x8, [x8, #0x5a0]
000890D0 e2031f2a mov      w2, wzr
000890D4 000140f9 ldr      x0, [x8]
000890D8 6d14fe97 bl       #0xe28c
000890DC f44f49a9 ldp      x20, x19, [sp, #0x90]
000890E0 fb2b40f9 ldr      x27, [sp, #0x50]
000890E4 f65748a9 ldp      x22, x21, [sp, #0x80]
000890E8 f85f47a9 ldp      x24, x23, [sp, #0x70]
000890EC fa6746a9 ldp      x26, x25, [sp, #0x60]
000890F0 fd7b44a9 ldp      x29, x30, [sp, #0x40]
000890F4 ff830291 add      sp, sp, #0xa0
000890F8 c0035fd6 ret      
000890FC c5e6fd97 bl       #0x2c10
00089100 a80240f9 ldr      x8, [x21]
00089104 e00315aa mov      x0, x21
00089108 085d40f9 ldr      x8, [x8, #0xb8]
0008910C 00013fd6 blr      x8
00089110 e11340f9 ldr      x1, [sp, #0x20]
00089114 e0031faa mov      x0, xzr
00089118 b01e0994 bl       #0x2d0bd8
0008911C a80240f9 ldr      x8, [x21]
00089120 e00315aa mov      x0, x21
00089124 085d40f9 ldr      x8, [x8, #0xb8]
00089128 00013fd6 blr      x8
0008912C e11340f9 ldr      x1, [sp, #0x20]
00089130 e0031faa mov      x0, xzr
00089134 2d190994 bl       #0x2cf5e8
~~~
### 0x896cc (52 slots)
~~~asm
000896CC fd7bbca9 stp      x29, x30, [sp, #-0x40]!
000896D0 f70b00f9 str      x23, [sp, #0x10]
000896D4 f65702a9 stp      x22, x21, [sp, #0x20]
000896D8 f44f03a9 stp      x20, x19, [sp, #0x30]
000896DC fd030091 mov      x29, sp
000896E0 f30300aa mov      x19, x0
000896E4 006446f9 ldr      x0, [x0, #0xcc8]
000896E8 c81d0994 bl       #0x2d0e08
000896EC f403002a mov      w20, w0
000896F0 606a46f9 ldr      x0, [x19, #0xcd0]
000896F4 c51d0994 bl       #0x2d0e08
000896F8 f503002a mov      w21, w0
000896FC 606e46f9 ldr      x0, [x19, #0xcd8]
00089700 c21d0994 bl       #0x2d0e08
00089704 f603002a mov      w22, w0
00089708 607246f9 ldr      x0, [x19, #0xce0]
0008970C bf1d0994 bl       #0x2d0e08
00089710 f703002a mov      w23, w0
00089714 607646f9 ldr      x0, [x19, #0xce8]
00089718 bc1d0994 bl       #0x2d0e08
0008971C 9f060071 cmp      w20, #1
00089720 a00a417a ccmp     w21, #1, #0, eq
00089724 c00a417a ccmp     w22, #1, #0, eq
00089728 e00a417a ccmp     w23, #1, #0, eq
0008972C 0008417a ccmp     w0, #1, #0, eq
00089730 607a46f9 ldr      x0, [x19, #0xcf0]
00089734 f4179f1a cset     w20, eq
00089738 68290994 bl       #0x2d3cd8
0008973C 1400140a and      w20, w0, w20
00089740 607e46f9 ldr      x0, [x19, #0xcf8]
00089744 fef30894 bl       #0x2c673c
00089748 1f040071 cmp      w0, #1
0008974C 608246f9 ldr      x0, [x19, #0xd00]
00089750 f413941a csel     w20, wzr, w20, ne
00089754 ad1d0994 bl       #0x2d0e08
00089758 1f040071 cmp      w0, #1
0008975C 608646f9 ldr      x0, [x19, #0xd08]
00089760 f513941a csel     w21, wzr, w20, ne
00089764 721a0994 bl       #0x2d012c
00089768 f403002a mov      w20, w0
0008976C 608a46f9 ldr      x0, [x19, #0xd10]
00089770 6f1a0994 bl       #0x2d012c
00089774 9402000a and      w20, w20, w0
00089778 608e46f9 ldr      x0, [x19, #0xd18]
0008977C 6c1a0994 bl       #0x2d012c
00089780 8802000a and      w8, w20, w0
00089784 f44f43a9 ldp      x20, x19, [sp, #0x30]
00089788 0001150a and      w0, w8, w21
0008978C f65742a9 ldp      x22, x21, [sp, #0x20]
00089790 f70b40f9 ldr      x23, [sp, #0x10]
00089794 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00089798 c0035fd6 ret      
~~~
### 0x8b700 (61 slots)
~~~asm
0008B700 ff0301d1 sub      sp, sp, #0x40
0008B704 fd7b01a9 stp      x29, x30, [sp, #0x10]
0008B708 f65702a9 stp      x22, x21, [sp, #0x20]
0008B70C f44f03a9 stp      x20, x19, [sp, #0x30]
0008B710 fd430091 add      x29, sp, #0x10
0008B714 f30300aa mov      x19, x0
0008B718 00a441f9 ldr      x0, [x0, #0x348]
0008B71C 080040f9 ldr      x8, [x0]
0008B720 090940f9 ldr      x9, [x8, #0x10]
0008B724 e8230091 add      x8, sp, #8
0008B728 20013fd6 blr      x9
0008B72C f40740f9 ldr      x20, [sp, #8]
0008B730 140600b4 cbz      x20, #0x8b7f0
0008B734 953240f9 ldr      x21, [x20, #0x60]
0008B738 150200b4 cbz      x21, #0x8b778
0008B73C a80240f9 ldr      x8, [x21]
0008B740 e00315aa mov      x0, x21
0008B744 080140f9 ldr      x8, [x8]
0008B748 00013fd6 blr      x8
0008B74C f60300aa mov      x22, x0
0008B750 d4070094 bl       #0x8d6a0
0008B754 1f0016eb cmp      x0, x22
0008B758 e0000054 b.eq     #0x8b774
0008B75C 1f2003d5 nop      
0008B760 d60240f9 ldr      x22, [x22]
0008B764 df0200eb cmp      x22, x0
0008B768 c41a40fa ccmp     x22, #0, #4, ne
0008B76C a1ffff54 b.ne     #0x8b760
0008B770 560300b4 cbz      x22, #0x8b7d8
0008B774 b54201d1 sub      x21, x21, #0x50
0008B778 888e44f8 ldr      x8, [x20, #0x48]!
0008B77C e00314aa mov      x0, x20
0008B780 080d40f9 ldr      x8, [x8, #0x18]
0008B784 00013fd6 blr      x8
0008B788 550300b4 cbz      x21, #0x8b7f0
0008B78C e00313aa mov      x0, x19
0008B790 1c000094 bl       #0x8b800
0008B794 a8424239 ldrb     w8, [x21, #0x90]
0008B798 68010034 cbz      w8, #0x8b7c4
0008B79C 682a4db9 ldr      w8, [x19, #0xd28]
0008B7A0 a8000035 cbnz     w8, #0x8b7b4
0008B7A4 00488852 mov      w0, #0x4240
0008B7A8 e001a072 movk     w0, #0xf, lsl #16
0008B7AC e9aa1594 bl       #0x5f6350
0008B7B0 682a4db9 ldr      w8, [x19, #0xd28]
0008B7B4 09050011 add      w9, w8, #1
0008B7B8 3f750071 cmp      w9, #0x1d
0008B7BC e887881a csinc    w8, wzr, w8, hi
0008B7C0 682a0db9 str      w8, [x19, #0xd28]
0008B7C4 f44f43a9 ldp      x20, x19, [sp, #0x30]
0008B7C8 f65742a9 ldp      x22, x21, [sp, #0x20]
0008B7CC fd7b41a9 ldp      x29, x30, [sp, #0x10]
0008B7D0 ff030191 add      sp, sp, #0x40
0008B7D4 c0035fd6 ret      
0008B7D8 f5031faa mov      x21, xzr
0008B7DC 888e44f8 ldr      x8, [x20, #0x48]!
0008B7E0 e00314aa mov      x0, x20
0008B7E4 080d40f9 ldr      x8, [x8, #0x18]
0008B7E8 00013fd6 blr      x8
0008B7EC 1ffdffb5 cbnz     xzr, #0x8b78c
0008B7F0 d4aa1594 bl       #0x5f6340
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
### 0x8d190 (108 slots)
~~~asm
0008D190 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0008D194 f44f01a9 stp      x20, x19, [sp, #0x10]
0008D198 fd030091 mov      x29, sp
0008D19C 883800f0 adrp     x8, #0x7a0000
0008D1A0 f30300aa mov      x19, x0
0008D1A4 089542f9 ldr      x8, [x8, #0x528]
0008D1A8 09410091 add      x9, x8, #0x10
0008D1AC 0ac10391 add      x10, x8, #0xf0
0008D1B0 08c10491 add      x8, x8, #0x130
0008D1B4 090000f9 str      x9, [x0]
0008D1B8 0aa004a9 stp      x10, x8, [x0, #0x48]
0008D1BC 009846f9 ldr      x0, [x0, #0xd30]
0008D1C0 a00000b4 cbz      x0, #0x8d1d4
0008D1C4 088c44f8 ldr      x8, [x0, #0x48]!
0008D1C8 080d40f9 ldr      x8, [x8, #0x18]
0008D1CC 00013fd6 blr      x8
0008D1D0 7f9a06f9 str      xzr, [x19, #0xd30]
0008D1D4 688e46f9 ldr      x8, [x19, #0xd18]
0008D1D8 c80000b4 cbz      x8, #0x8d1f0
0008D1DC 00e10e91 add      x0, x8, #0x3b8
0008D1E0 08dd41f9 ldr      x8, [x8, #0x3b8]
0008D1E4 080d40f9 ldr      x8, [x8, #0x18]
0008D1E8 00013fd6 blr      x8
0008D1EC 7f8e06f9 str      xzr, [x19, #0xd18]
0008D1F0 688a46f9 ldr      x8, [x19, #0xd10]
0008D1F4 c80000b4 cbz      x8, #0x8d20c
0008D1F8 00e10e91 add      x0, x8, #0x3b8
0008D1FC 08dd41f9 ldr      x8, [x8, #0x3b8]
0008D200 080d40f9 ldr      x8, [x8, #0x18]
0008D204 00013fd6 blr      x8
0008D208 7f8a06f9 str      xzr, [x19, #0xd10]
0008D20C 688646f9 ldr      x8, [x19, #0xd08]
0008D210 c80000b4 cbz      x8, #0x8d228
0008D214 00e10e91 add      x0, x8, #0x3b8
0008D218 08dd41f9 ldr      x8, [x8, #0x3b8]
0008D21C 080d40f9 ldr      x8, [x8, #0x18]
0008D220 00013fd6 blr      x8
0008D224 7f8606f9 str      xzr, [x19, #0xd08]
0008D228 608246f9 ldr      x0, [x19, #0xd00]
0008D22C a00000b4 cbz      x0, #0x8d240
0008D230 088c44f8 ldr      x8, [x0, #0x48]!
0008D234 080d40f9 ldr      x8, [x8, #0x18]
0008D238 00013fd6 blr      x8
0008D23C 7f8206f9 str      xzr, [x19, #0xd00]
0008D240 607e46f9 ldr      x0, [x19, #0xcf8]
0008D244 a00000b4 cbz      x0, #0x8d258
0008D248 088c44f8 ldr      x8, [x0, #0x48]!
0008D24C 080d40f9 ldr      x8, [x8, #0x18]
0008D250 00013fd6 blr      x8
0008D254 7f7e06f9 str      xzr, [x19, #0xcf8]
0008D258 607a46f9 ldr      x0, [x19, #0xcf0]
0008D25C a00000b4 cbz      x0, #0x8d270
0008D260 088c44f8 ldr      x8, [x0, #0x48]!
0008D264 080d40f9 ldr      x8, [x8, #0x18]
0008D268 00013fd6 blr      x8
0008D26C 7f7a06f9 str      xzr, [x19, #0xcf0]
0008D270 607646f9 ldr      x0, [x19, #0xce8]
0008D274 a00000b4 cbz      x0, #0x8d288
0008D278 088c44f8 ldr      x8, [x0, #0x48]!
0008D27C 080d40f9 ldr      x8, [x8, #0x18]
0008D280 00013fd6 blr      x8
0008D284 7f7606f9 str      xzr, [x19, #0xce8]
0008D288 607246f9 ldr      x0, [x19, #0xce0]
0008D28C a00000b4 cbz      x0, #0x8d2a0
0008D290 088c44f8 ldr      x8, [x0, #0x48]!
0008D294 080d40f9 ldr      x8, [x8, #0x18]
0008D298 00013fd6 blr      x8
0008D29C 7f7206f9 str      xzr, [x19, #0xce0]
0008D2A0 606e46f9 ldr      x0, [x19, #0xcd8]
0008D2A4 a00000b4 cbz      x0, #0x8d2b8
0008D2A8 088c44f8 ldr      x8, [x0, #0x48]!
0008D2AC 080d40f9 ldr      x8, [x8, #0x18]
0008D2B0 00013fd6 blr      x8
0008D2B4 7f6e06f9 str      xzr, [x19, #0xcd8]
0008D2B8 606a46f9 ldr      x0, [x19, #0xcd0]
0008D2BC a00000b4 cbz      x0, #0x8d2d0
0008D2C0 088c44f8 ldr      x8, [x0, #0x48]!
0008D2C4 080d40f9 ldr      x8, [x8, #0x18]
0008D2C8 00013fd6 blr      x8
0008D2CC 7f6a06f9 str      xzr, [x19, #0xcd0]
0008D2D0 606646f9 ldr      x0, [x19, #0xcc8]
0008D2D4 a00000b4 cbz      x0, #0x8d2e8
0008D2D8 088c44f8 ldr      x8, [x0, #0x48]!
0008D2DC 080d40f9 ldr      x8, [x8, #0x18]
0008D2E0 00013fd6 blr      x8
0008D2E4 7f6606f9 str      xzr, [x19, #0xcc8]
0008D2E8 745646f9 ldr      x20, [x19, #0xca8]
0008D2EC 7f5606f9 str      xzr, [x19, #0xca8]
0008D2F0 540100b4 cbz      x20, #0x8d318
0008D2F4 e00314aa mov      x0, x20
0008D2F8 ba0e0094 bl       #0x90de0
0008D2FC 605a46f9 ldr      x0, [x19, #0xcb0]
0008D300 e10314aa mov      x1, x20
0008D304 625e46f9 ldr      x2, [x19, #0xcb8]
0008D308 636246f9 ldr      x3, [x19, #0xcc0]
0008D30C 080040f9 ldr      x8, [x0]
0008D310 080d40f9 ldr      x8, [x8, #0x18]
0008D314 00013fd6 blr      x8
0008D318 60e21791 add      x0, x19, #0x5f8
0008D31C 419fff97 bl       #0x75020
0008D320 883800f0 adrp     x8, #0x7a0000
0008D324 e00313aa mov      x0, x19
0008D328 087d42f9 ldr      x8, [x8, #0x4f8]
0008D32C 08410091 add      x8, x8, #0x10
0008D330 68ea02f9 str      x8, [x19, #0x5d0]
0008D334 f44f41a9 ldp      x20, x19, [sp, #0x10]
0008D338 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0008D33C 2761fe17 b        #0x257d8
~~~
### 0x8d340 (1 slots)
~~~asm
0008D340 94ffff17 b        #0x8d190
~~~
### 0x8d344 (1 slots)
~~~asm
0008D344 4ea0ff17 b        #0x7547c
~~~
### 0x8d348 (2 slots)
~~~asm
0008D348 002001d1 sub      x0, x0, #0x48
0008D34C 91ffff17 b        #0x8d190
~~~
### 0x8d350 (2 slots)
~~~asm
0008D350 002001d1 sub      x0, x0, #0x48
0008D354 8fffff17 b        #0x8d190
~~~
### 0x8d360 (2 slots)
~~~asm
0008D360 004001d1 sub      x0, x0, #0x50
0008D364 8bffff17 b        #0x8d190
~~~
### 0x8d584 (71 slots)
~~~asm
0008D584 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
0008D588 f70b00f9 str      x23, [sp, #0x10]
0008D58C f65702a9 stp      x22, x21, [sp, #0x20]
0008D590 f44f03a9 stp      x20, x19, [sp, #0x30]
0008D594 fd030091 mov      x29, sp
0008D598 f30308aa mov      x19, x8
0008D59C 48d03bd5 mrs      x8, tpidr_el0
0008D5A0 17c97392 and      x23, x8, #0xffffffffffffe000
0008D5A4 e84e40f9 ldr      x8, [x23, #0x98]
0008D5A8 1f4100f1 cmp      x8, #0x10
0008D5AC 80070054 b.eq     #0x8d69c
0008D5B0 e80e088b add      x8, x23, x8, lsl #3
0008D5B4 f60301aa mov      x22, x1
0008D5B8 01758052 mov      w1, #0x3a8
0008D5BC 02018052 mov      w2, #8
0008D5C0 f50300aa mov      x21, x0
0008D5C4 000d00f9 str      x0, [x8, #0x18]
0008D5C8 e84e40f9 ldr      x8, [x23, #0x98]
0008D5CC 08050091 add      x8, x8, #1
0008D5D0 e84e00f9 str      x8, [x23, #0x98]
0008D5D4 080040f9 ldr      x8, [x0]
0008D5D8 080940f9 ldr      x8, [x8, #0x10]
0008D5DC 00013fd6 blr      x8
0008D5E0 f40300aa mov      x20, x0
0008D5E4 a00200b4 cbz      x0, #0x8d638
0008D5E8 c10240f9 ldr      x1, [x22]
0008D5EC e00314aa mov      x0, x20
0008D5F0 aaea0094 bl       #0xc8098
0008D5F4 08758052 mov      w8, #0x3a8
0008D5F8 09018052 mov      w9, #8
0008D5FC e00314aa mov      x0, x20
0008D600 95d200a9 stp      x21, x20, [x20, #8]
0008D604 88a601a9 stp      x8, x9, [x20, #0x18]
0008D608 e84e40f9 ldr      x8, [x23, #0x98]
0008D60C 080500d1 sub      x8, x8, #1
0008D610 e84e00f9 str      x8, [x23, #0x98]
0008D614 088c44f8 ldr      x8, [x0, #0x48]!
0008D618 080940f9 ldr      x8, [x8, #0x10]
0008D61C 00013fd6 blr      x8
0008D620 740200f9 str      x20, [x19]
0008D624 f44f43a9 ldp      x20, x19, [sp, #0x30]
0008D628 f65742a9 ldp      x22, x21, [sp, #0x20]
0008D62C f70b40f9 ldr      x23, [sp, #0x10]
0008D630 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0008D634 c0035fd6 ret      
0008D638 a80240f9 ldr      x8, [x21]
0008D63C e00315aa mov      x0, x21
0008D640 085d40f9 ldr      x8, [x8, #0xb8]
0008D644 00013fd6 blr      x8
0008D648 c10240f9 ldr      x1, [x22]
0008D64C e0031faa mov      x0, xzr
0008D650 92ea0094 bl       #0xc8098
0008D654 08018052 mov      w8, #8
0008D658 09028052 mov      w9, #0x10
0008D65C 150100f9 str      x21, [x8]
0008D660 3f0100f9 str      xzr, [x9]
0008D664 09038052 mov      w9, #0x18
0008D668 0a758052 mov      w10, #0x3a8
0008D66C 2a0100f9 str      x10, [x9]
0008D670 09048052 mov      w9, #0x20
0008D674 280100f9 str      x8, [x9]
0008D678 e84e40f9 ldr      x8, [x23, #0x98]
0008D67C 080500d1 sub      x8, x8, #1
0008D680 e84e00f9 str      x8, [x23, #0x98]
0008D684 740200f9 str      x20, [x19]
0008D688 f44f43a9 ldp      x20, x19, [sp, #0x30]
0008D68C f65742a9 ldp      x22, x21, [sp, #0x20]
0008D690 f70b40f9 ldr      x23, [sp, #0x10]
0008D694 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0008D698 c0035fd6 ret      
0008D69C 5dd5fd97 bl       #0x2c10
~~~
### 0x90de0 (292 slots)
~~~asm
00090DE0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00090DE4 f30b00f9 str      x19, [sp, #0x10]
00090DE8 fd030091 mov      x29, sp
00090DEC f30300aa mov      x19, x0
00090DF0 002841f9 ldr      x0, [x0, #0x250]
00090DF4 a00000b4 cbz      x0, #0x90e08
00090DF8 088c44f8 ldr      x8, [x0, #0x48]!
00090DFC 080d40f9 ldr      x8, [x8, #0x18]
00090E00 00013fd6 blr      x8
00090E04 7f2a01f9 str      xzr, [x19, #0x250]
00090E08 602641f9 ldr      x0, [x19, #0x248]
00090E0C a00000b4 cbz      x0, #0x90e20
00090E10 088c44f8 ldr      x8, [x0, #0x48]!
00090E14 080d40f9 ldr      x8, [x8, #0x18]
00090E18 00013fd6 blr      x8
00090E1C 7f2601f9 str      xzr, [x19, #0x248]
00090E20 602241f9 ldr      x0, [x19, #0x240]
00090E24 a00000b4 cbz      x0, #0x90e38
00090E28 088c44f8 ldr      x8, [x0, #0x48]!
00090E2C 080d40f9 ldr      x8, [x8, #0x18]
00090E30 00013fd6 blr      x8
00090E34 7f2201f9 str      xzr, [x19, #0x240]
00090E38 601e41f9 ldr      x0, [x19, #0x238]
00090E3C a00000b4 cbz      x0, #0x90e50
00090E40 088c44f8 ldr      x8, [x0, #0x48]!
00090E44 080d40f9 ldr      x8, [x8, #0x18]
00090E48 00013fd6 blr      x8
00090E4C 7f1e01f9 str      xzr, [x19, #0x238]
00090E50 601a41f9 ldr      x0, [x19, #0x230]
00090E54 a00000b4 cbz      x0, #0x90e68
00090E58 088c44f8 ldr      x8, [x0, #0x48]!
00090E5C 080d40f9 ldr      x8, [x8, #0x18]
00090E60 00013fd6 blr      x8
00090E64 7f1a01f9 str      xzr, [x19, #0x230]
00090E68 601641f9 ldr      x0, [x19, #0x228]
00090E6C a00000b4 cbz      x0, #0x90e80
00090E70 088c44f8 ldr      x8, [x0, #0x48]!
00090E74 080d40f9 ldr      x8, [x8, #0x18]
00090E78 00013fd6 blr      x8
00090E7C 7f1601f9 str      xzr, [x19, #0x228]
00090E80 601241f9 ldr      x0, [x19, #0x220]
00090E84 a00000b4 cbz      x0, #0x90e98
00090E88 088c44f8 ldr      x8, [x0, #0x48]!
00090E8C 080d40f9 ldr      x8, [x8, #0x18]
00090E90 00013fd6 blr      x8
00090E94 7f1201f9 str      xzr, [x19, #0x220]
00090E98 600e41f9 ldr      x0, [x19, #0x218]
00090E9C a00000b4 cbz      x0, #0x90eb0
00090EA0 088c44f8 ldr      x8, [x0, #0x48]!
00090EA4 080d40f9 ldr      x8, [x8, #0x18]
00090EA8 00013fd6 blr      x8
00090EAC 7f0e01f9 str      xzr, [x19, #0x218]
00090EB0 600a41f9 ldr      x0, [x19, #0x210]
00090EB4 a00000b4 cbz      x0, #0x90ec8
00090EB8 088c44f8 ldr      x8, [x0, #0x48]!
00090EBC 080d40f9 ldr      x8, [x8, #0x18]
00090EC0 00013fd6 blr      x8
00090EC4 7f0a01f9 str      xzr, [x19, #0x210]
00090EC8 600641f9 ldr      x0, [x19, #0x208]
00090ECC a00000b4 cbz      x0, #0x90ee0
00090ED0 088c44f8 ldr      x8, [x0, #0x48]!
00090ED4 080d40f9 ldr      x8, [x8, #0x18]
00090ED8 00013fd6 blr      x8
00090EDC 7f0601f9 str      xzr, [x19, #0x208]
00090EE0 600241f9 ldr      x0, [x19, #0x200]
00090EE4 a00000b4 cbz      x0, #0x90ef8
00090EE8 088c44f8 ldr      x8, [x0, #0x48]!
00090EEC 080d40f9 ldr      x8, [x8, #0x18]
00090EF0 00013fd6 blr      x8
00090EF4 7f0201f9 str      xzr, [x19, #0x200]
00090EF8 60fe40f9 ldr      x0, [x19, #0x1f8]
00090EFC a00000b4 cbz      x0, #0x90f10
00090F00 088c44f8 ldr      x8, [x0, #0x48]!
00090F04 080d40f9 ldr      x8, [x8, #0x18]
00090F08 00013fd6 blr      x8
00090F0C 7ffe00f9 str      xzr, [x19, #0x1f8]
00090F10 60fa40f9 ldr      x0, [x19, #0x1f0]
00090F14 a00000b4 cbz      x0, #0x90f28
00090F18 088c44f8 ldr      x8, [x0, #0x48]!
00090F1C 080d40f9 ldr      x8, [x8, #0x18]
00090F20 00013fd6 blr      x8
00090F24 7ffa00f9 str      xzr, [x19, #0x1f0]
00090F28 60f640f9 ldr      x0, [x19, #0x1e8]
00090F2C a00000b4 cbz      x0, #0x90f40
00090F30 088c44f8 ldr      x8, [x0, #0x48]!
00090F34 080d40f9 ldr      x8, [x8, #0x18]
00090F38 00013fd6 blr      x8
00090F3C 7ff600f9 str      xzr, [x19, #0x1e8]
00090F40 60f240f9 ldr      x0, [x19, #0x1e0]
00090F44 a00000b4 cbz      x0, #0x90f58
00090F48 088c44f8 ldr      x8, [x0, #0x48]!
00090F4C 080d40f9 ldr      x8, [x8, #0x18]
00090F50 00013fd6 blr      x8
00090F54 7ff200f9 str      xzr, [x19, #0x1e0]
00090F58 60ee40f9 ldr      x0, [x19, #0x1d8]
00090F5C a00000b4 cbz      x0, #0x90f70
00090F60 088c44f8 ldr      x8, [x0, #0x48]!
00090F64 080d40f9 ldr      x8, [x8, #0x18]
00090F68 00013fd6 blr      x8
00090F6C 7fee00f9 str      xzr, [x19, #0x1d8]
00090F70 60ea40f9 ldr      x0, [x19, #0x1d0]
00090F74 a00000b4 cbz      x0, #0x90f88
00090F78 088c44f8 ldr      x8, [x0, #0x48]!
00090F7C 080d40f9 ldr      x8, [x8, #0x18]
00090F80 00013fd6 blr      x8
00090F84 7fea00f9 str      xzr, [x19, #0x1d0]
00090F88 60e640f9 ldr      x0, [x19, #0x1c8]
00090F8C a00000b4 cbz      x0, #0x90fa0
00090F90 088c44f8 ldr      x8, [x0, #0x48]!
00090F94 080d40f9 ldr      x8, [x8, #0x18]
00090F98 00013fd6 blr      x8
00090F9C 7fe600f9 str      xzr, [x19, #0x1c8]
00090FA0 60e240f9 ldr      x0, [x19, #0x1c0]
00090FA4 a00000b4 cbz      x0, #0x90fb8
00090FA8 088c44f8 ldr      x8, [x0, #0x48]!
00090FAC 080d40f9 ldr      x8, [x8, #0x18]
00090FB0 00013fd6 blr      x8
00090FB4 7fe200f9 str      xzr, [x19, #0x1c0]
00090FB8 60de40f9 ldr      x0, [x19, #0x1b8]
00090FBC a00000b4 cbz      x0, #0x90fd0
00090FC0 088c44f8 ldr      x8, [x0, #0x48]!
00090FC4 080d40f9 ldr      x8, [x8, #0x18]
00090FC8 00013fd6 blr      x8
00090FCC 7fde00f9 str      xzr, [x19, #0x1b8]
00090FD0 60da40f9 ldr      x0, [x19, #0x1b0]
00090FD4 a00000b4 cbz      x0, #0x90fe8
00090FD8 088c44f8 ldr      x8, [x0, #0x48]!
00090FDC 080d40f9 ldr      x8, [x8, #0x18]
00090FE0 00013fd6 blr      x8
00090FE4 7fda00f9 str      xzr, [x19, #0x1b0]
00090FE8 60d640f9 ldr      x0, [x19, #0x1a8]
00090FEC a00000b4 cbz      x0, #0x91000
00090FF0 088c44f8 ldr      x8, [x0, #0x48]!
00090FF4 080d40f9 ldr      x8, [x8, #0x18]
00090FF8 00013fd6 blr      x8
00090FFC 7fd600f9 str      xzr, [x19, #0x1a8]
00091000 60d240f9 ldr      x0, [x19, #0x1a0]
00091004 a00000b4 cbz      x0, #0x91018
00091008 088c44f8 ldr      x8, [x0, #0x48]!
0009100C 080d40f9 ldr      x8, [x8, #0x18]
00091010 00013fd6 blr      x8
00091014 7fd200f9 str      xzr, [x19, #0x1a0]
00091018 60ce40f9 ldr      x0, [x19, #0x198]
0009101C a00000b4 cbz      x0, #0x91030
00091020 088c44f8 ldr      x8, [x0, #0x48]!
00091024 080d40f9 ldr      x8, [x8, #0x18]
00091028 00013fd6 blr      x8
0009102C 7fce00f9 str      xzr, [x19, #0x198]
00091030 60ca40f9 ldr      x0, [x19, #0x190]
00091034 a00000b4 cbz      x0, #0x91048
00091038 088c44f8 ldr      x8, [x0, #0x48]!
0009103C 080d40f9 ldr      x8, [x8, #0x18]
00091040 00013fd6 blr      x8
00091044 7fca00f9 str      xzr, [x19, #0x190]
00091048 60c640f9 ldr      x0, [x19, #0x188]
0009104C a00000b4 cbz      x0, #0x91060
00091050 088c44f8 ldr      x8, [x0, #0x48]!
00091054 080d40f9 ldr      x8, [x8, #0x18]
00091058 00013fd6 blr      x8
0009105C 7fc600f9 str      xzr, [x19, #0x188]
00091060 60c240f9 ldr      x0, [x19, #0x180]
00091064 a00000b4 cbz      x0, #0x91078
00091068 088c44f8 ldr      x8, [x0, #0x48]!
0009106C 080d40f9 ldr      x8, [x8, #0x18]
00091070 00013fd6 blr      x8
00091074 7fc200f9 str      xzr, [x19, #0x180]
00091078 60be40f9 ldr      x0, [x19, #0x178]
0009107C a00000b4 cbz      x0, #0x91090
00091080 088c44f8 ldr      x8, [x0, #0x48]!
00091084 080d40f9 ldr      x8, [x8, #0x18]
00091088 00013fd6 blr      x8
0009108C 7fbe00f9 str      xzr, [x19, #0x178]
00091090 60ba40f9 ldr      x0, [x19, #0x170]
00091094 a00000b4 cbz      x0, #0x910a8
00091098 088c44f8 ldr      x8, [x0, #0x48]!
0009109C 080d40f9 ldr      x8, [x8, #0x18]
000910A0 00013fd6 blr      x8
000910A4 7fba00f9 str      xzr, [x19, #0x170]
000910A8 60b640f9 ldr      x0, [x19, #0x168]
000910AC a00000b4 cbz      x0, #0x910c0
000910B0 088c44f8 ldr      x8, [x0, #0x48]!
000910B4 080d40f9 ldr      x8, [x8, #0x18]
000910B8 00013fd6 blr      x8
000910BC 7fb600f9 str      xzr, [x19, #0x168]
000910C0 60b240f9 ldr      x0, [x19, #0x160]
000910C4 a00000b4 cbz      x0, #0x910d8
000910C8 088c44f8 ldr      x8, [x0, #0x48]!
000910CC 080d40f9 ldr      x8, [x8, #0x18]
000910D0 00013fd6 blr      x8
000910D4 7fb200f9 str      xzr, [x19, #0x160]
000910D8 60ae40f9 ldr      x0, [x19, #0x158]
000910DC a00000b4 cbz      x0, #0x910f0
000910E0 088c44f8 ldr      x8, [x0, #0x48]!
000910E4 080d40f9 ldr      x8, [x8, #0x18]
000910E8 00013fd6 blr      x8
000910EC 7fae00f9 str      xzr, [x19, #0x158]
000910F0 60aa40f9 ldr      x0, [x19, #0x150]
000910F4 a00000b4 cbz      x0, #0x91108
000910F8 088c44f8 ldr      x8, [x0, #0x48]!
000910FC 080d40f9 ldr      x8, [x8, #0x18]
00091100 00013fd6 blr      x8
00091104 7faa00f9 str      xzr, [x19, #0x150]
00091108 60a640f9 ldr      x0, [x19, #0x148]
0009110C a00000b4 cbz      x0, #0x91120
00091110 088c44f8 ldr      x8, [x0, #0x48]!
00091114 080d40f9 ldr      x8, [x8, #0x18]
00091118 00013fd6 blr      x8
0009111C 7fa600f9 str      xzr, [x19, #0x148]
00091120 60a240f9 ldr      x0, [x19, #0x140]
00091124 a00000b4 cbz      x0, #0x91138
00091128 088c44f8 ldr      x8, [x0, #0x48]!
0009112C 080d40f9 ldr      x8, [x8, #0x18]
00091130 00013fd6 blr      x8
00091134 7fa200f9 str      xzr, [x19, #0x140]
00091138 609e40f9 ldr      x0, [x19, #0x138]
0009113C a00000b4 cbz      x0, #0x91150
00091140 088c44f8 ldr      x8, [x0, #0x48]!
00091144 080d40f9 ldr      x8, [x8, #0x18]
00091148 00013fd6 blr      x8
0009114C 7f9e00f9 str      xzr, [x19, #0x138]
00091150 689a40f9 ldr      x8, [x19, #0x130]
00091154 c80000b4 cbz      x8, #0x9116c
00091158 00e10e91 add      x0, x8, #0x3b8
0009115C 08dd41f9 ldr      x8, [x8, #0x3b8]
00091160 080d40f9 ldr      x8, [x8, #0x18]
00091164 00013fd6 blr      x8
00091168 7f9a00f9 str      xzr, [x19, #0x130]
0009116C 689640f9 ldr      x8, [x19, #0x128]
00091170 c80000b4 cbz      x8, #0x91188
00091174 00e10e91 add      x0, x8, #0x3b8
00091178 08dd41f9 ldr      x8, [x8, #0x3b8]
0009117C 080d40f9 ldr      x8, [x8, #0x18]
00091180 00013fd6 blr      x8
00091184 7f9600f9 str      xzr, [x19, #0x128]
00091188 689240f9 ldr      x8, [x19, #0x120]
0009118C c80000b4 cbz      x8, #0x911a4
00091190 00e10e91 add      x0, x8, #0x3b8
00091194 08dd41f9 ldr      x8, [x8, #0x3b8]
00091198 080d40f9 ldr      x8, [x8, #0x18]
0009119C 00013fd6 blr      x8
000911A0 7f9200f9 str      xzr, [x19, #0x120]
000911A4 608e40f9 ldr      x0, [x19, #0x118]
000911A8 a00000b4 cbz      x0, #0x911bc
000911AC 088c44f8 ldr      x8, [x0, #0x48]!
000911B0 080d40f9 ldr      x8, [x8, #0x18]
000911B4 00013fd6 blr      x8
000911B8 7f8e00f9 str      xzr, [x19, #0x118]
000911BC 608a40f9 ldr      x0, [x19, #0x110]
000911C0 a00000b4 cbz      x0, #0x911d4
000911C4 088c44f8 ldr      x8, [x0, #0x48]!
000911C8 080d40f9 ldr      x8, [x8, #0x18]
000911CC 00013fd6 blr      x8
000911D0 7f8a00f9 str      xzr, [x19, #0x110]
000911D4 608640f9 ldr      x0, [x19, #0x108]
000911D8 a00000b4 cbz      x0, #0x911ec
000911DC 088c44f8 ldr      x8, [x0, #0x48]!
000911E0 080d40f9 ldr      x8, [x8, #0x18]
000911E4 00013fd6 blr      x8
000911E8 7f8600f9 str      xzr, [x19, #0x108]
000911EC 608240f9 ldr      x0, [x19, #0x100]
000911F0 a00000b4 cbz      x0, #0x91204
000911F4 088c44f8 ldr      x8, [x0, #0x48]!
000911F8 080d40f9 ldr      x8, [x8, #0x18]
000911FC 00013fd6 blr      x8
00091200 7f8200f9 str      xzr, [x19, #0x100]
00091204 607e40f9 ldr      x0, [x19, #0xf8]
00091208 a00000b4 cbz      x0, #0x9121c
0009120C 088c44f8 ldr      x8, [x0, #0x48]!
00091210 080d40f9 ldr      x8, [x8, #0x18]
00091214 00013fd6 blr      x8
00091218 7f7e00f9 str      xzr, [x19, #0xf8]
0009121C 607a40f9 ldr      x0, [x19, #0xf0]
00091220 a00000b4 cbz      x0, #0x91234
00091224 088c44f8 ldr      x8, [x0, #0x48]!
00091228 080d40f9 ldr      x8, [x8, #0x18]
0009122C 00013fd6 blr      x8
00091230 7f7a00f9 str      xzr, [x19, #0xf0]
00091234 607640f9 ldr      x0, [x19, #0xe8]
00091238 a00000b4 cbz      x0, #0x9124c
0009123C 088c44f8 ldr      x8, [x0, #0x48]!
00091240 080d40f9 ldr      x8, [x8, #0x18]
00091244 00013fd6 blr      x8
00091248 7f7600f9 str      xzr, [x19, #0xe8]
0009124C 607240f9 ldr      x0, [x19, #0xe0]
00091250 a00000b4 cbz      x0, #0x91264
00091254 088c44f8 ldr      x8, [x0, #0x48]!
00091258 080d40f9 ldr      x8, [x8, #0x18]
0009125C 00013fd6 blr      x8
00091260 7f7200f9 str      xzr, [x19, #0xe0]
00091264 f30b40f9 ldr      x19, [sp, #0x10]
00091268 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0009126C c0035fd6 ret      
~~~
### 0xbe9b0 (69 slots)
~~~asm
000BE9B0 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
000BE9B4 fb0b00f9 str      x27, [sp, #0x10]
000BE9B8 fa6702a9 stp      x26, x25, [sp, #0x20]
000BE9BC f85f03a9 stp      x24, x23, [sp, #0x30]
000BE9C0 f65704a9 stp      x22, x21, [sp, #0x40]
000BE9C4 f44f05a9 stp      x20, x19, [sp, #0x50]
000BE9C8 fd030091 mov      x29, sp
000BE9CC 080440f9 ldr      x8, [x0, #8]
000BE9D0 880700b4 cbz      x8, #0xbeac0
000BE9D4 136941f9 ldr      x19, [x8, #0x2d0]
000BE9D8 530700b4 cbz      x19, #0xbeac0
000BE9DC 688e44f8 ldr      x8, [x19, #0x48]!
000BE9E0 f40300aa mov      x20, x0
000BE9E4 e00313aa mov      x0, x19
000BE9E8 080940f9 ldr      x8, [x8, #0x10]
000BE9EC 00013fd6 blr      x8
000BE9F0 960e40f9 ldr      x22, [x20, #0x18]
000BE9F4 760600b4 cbz      x22, #0xbeac0
000BE9F8 883240b9 ldr      w8, [x20, #0x30]
000BE9FC c8040035 cbnz     w8, #0xbea94
000BEA00 c85a42b9 ldr      w8, [x22, #0x258]
000BEA04 88040034 cbz      w8, #0xbea94
000BEA08 1b3700f0 adrp     x27, #0x7a1000
000BEA0C 1f050071 cmp      w8, #1
000BEA10 0809088b add      x8, x8, x8, lsl #2
000BEA14 7b8740f9 ldr      x27, [x27, #0x108]
000BEA18 69008052 mov      w9, #3
000BEA1C ea008052 mov      w10, #7
000BEA20 f7031faa mov      x23, xzr
000BEA24 5881891a csel     w24, w10, w9, hi
000BEA28 d9c20991 add      x25, x22, #0x270
000BEA2C 1af17dd3 lsl      x26, x8, #3
000BEA30 04000014 b        #0xbea40
000BEA34 f7a20091 add      x23, x23, #0x28
000BEA38 5f0317eb cmp      x26, x23
000BEA3C c0020054 b.eq     #0xbea94
000BEA40 ffc212f1 cmp      x23, #0x4b0
000BEA44 e0030054 b.eq     #0xbeac0
000BEA48 d40a40f9 ldr      x20, [x22, #0x10]
000BEA4C b40300b4 cbz      x20, #0xbeac0
000BEA50 3503178b add      x21, x25, x23
000BEA54 e00314aa mov      x0, x20
000BEA58 e10315aa mov      x1, x21
000BEA5C 0854ff97 bl       #0x93a7c
000BEA60 a0fe0736 tbz      w0, #0, #0xbea34
000BEA64 e00314aa mov      x0, x20
000BEA68 e10315aa mov      x1, x21
000BEA6C 5f54ff97 bl       #0x93be8
000BEA70 20fe0736 tbz      w0, #0, #0xbea34
000BEA74 680340f9 ldr      x8, [x27]
000BEA78 480200b4 cbz      x8, #0xbeac0
000BEA7C 083540f9 ldr      x8, [x8, #0x68]
000BEA80 080200b4 cbz      x8, #0xbeac0
000BEA84 09b14a39 ldrb     w9, [x8, #0x2ac]
000BEA88 69fd0737 tbnz     w9, #0, #0xbea34
000BEA8C 18ad02b9 str      w24, [x8, #0x2ac]
000BEA90 e9ffff17 b        #0xbea34
000BEA94 df5a02b9 str      wzr, [x22, #0x258]
000BEA98 e00313aa mov      x0, x19
000BEA9C fb0b40f9 ldr      x27, [sp, #0x10]
000BEAA0 680240f9 ldr      x8, [x19]
000BEAA4 f44f45a9 ldp      x20, x19, [sp, #0x50]
000BEAA8 f65744a9 ldp      x22, x21, [sp, #0x40]
000BEAAC 010d40f9 ldr      x1, [x8, #0x18]
000BEAB0 f85f43a9 ldp      x24, x23, [sp, #0x30]
000BEAB4 fa6742a9 ldp      x26, x25, [sp, #0x20]
000BEAB8 fd7bc6a8 ldp      x29, x30, [sp], #0x60
000BEABC 20001fd6 br       x1
000BEAC0 20de1494 bl       #0x5f6340
~~~
### 0xc38ec (415 slots)
~~~asm
000C38EC ff0302d1 sub      sp, sp, #0x80
000C38F0 fd7b04a9 stp      x29, x30, [sp, #0x40]
000C38F4 f72b00f9 str      x23, [sp, #0x50]
000C38F8 f65706a9 stp      x22, x21, [sp, #0x60]
000C38FC f44f07a9 stp      x20, x19, [sp, #0x70]
000C3900 fd030191 add      x29, sp, #0x40
000C3904 359040f9 ldr      x21, [x1, #0x120]
000C3908 f30300aa mov      x19, x0
000C390C e00315aa mov      x0, x21
000C3910 f25efd97 bl       #0x1b4d8
000C3914 f403002a mov      w20, w0
000C3918 08000012 and      w8, w0, #1
000C391C a8431e38 sturb    w8, [x29, #-0x1c]
000C3920 e00315aa mov      x0, x21
000C3924 ef5efd97 bl       #0x1b4e0
000C3928 08000012 and      w8, w0, #1
000C392C e00315aa mov      x0, x21
000C3930 a8531e38 sturb    w8, [x29, #-0x1b]
000C3934 f15efd97 bl       #0x1b4f8
000C3938 08000012 and      w8, w0, #1
000C393C e00315aa mov      x0, x21
000C3940 a8631e38 sturb    w8, [x29, #-0x1a]
000C3944 f35efd97 bl       #0x1b510
000C3948 08000012 and      w8, w0, #1
000C394C e00315aa mov      x0, x21
000C3950 a8731e38 sturb    w8, [x29, #-0x19]
000C3954 f55efd97 bl       #0x1b528
000C3958 f603002a mov      w22, w0
000C395C e00315aa mov      x0, x21
000C3960 f45efd97 bl       #0x1b530
000C3964 172d8052 mov      w23, #0x168
000C3968 c8020a51 sub      w8, w22, #0x280
000C396C e902004b sub      w9, w23, w0
000C3970 e00315aa mov      x0, x21
000C3974 a8273d29 stp      w8, w9, [x29, #-0x18]
000C3978 f45efd97 bl       #0x1b548
000C397C f603002a mov      w22, w0
000C3980 e00315aa mov      x0, x21
000C3984 f35efd97 bl       #0x1b550
000C3988 c8020a51 sub      w8, w22, #0x280
000C398C e902004b sub      w9, w23, w0
000C3990 a8273e29 stp      w8, w9, [x29, #-0x10]
000C3994 e00315aa mov      x0, x21
000C3998 e85efd97 bl       #0x1b538
000C399C f603002a mov      w22, w0
000C39A0 e00315aa mov      x0, x21
000C39A4 e75efd97 bl       #0x1b540
000C39A8 c8020a51 sub      w8, w22, #0x280
000C39AC e902004b sub      w9, w23, w0
000C39B0 a8273f29 stp      w8, w9, [x29, #-8]
000C39B4 682243f9 ldr      x8, [x19, #0x640]
000C39B8 096140f9 ldr      x9, [x8, #0xc0]
000C39BC 29014039 ldrb     w9, [x9]
000C39C0 e9040034 cbz      w9, #0xc3a5c
000C39C4 94000037 tbnz     w20, #0, #0xc39d4
000C39C8 086540f9 ldr      x8, [x8, #0xc8]
000C39CC 29008052 mov      w9, #1
000C39D0 09010039 strb     w9, [x8]
000C39D4 607e43f9 ldr      x0, [x19, #0x6f8]
000C39D8 cd6fff97 bl       #0x9f90c
000C39DC c0010037 tbnz     w0, #0, #0xc3a14
000C39E0 607e43f9 ldr      x0, [x19, #0x6f8]
000C39E4 3778ff97 bl       #0xa1ac0
000C39E8 60010037 tbnz     w0, #0, #0xc3a14
000C39EC 607e43f9 ldr      x0, [x19, #0x6f8]
000C39F0 416fff97 bl       #0x9f6f4
000C39F4 00010037 tbnz     w0, #0, #0xc3a14
000C39F8 607e43f9 ldr      x0, [x19, #0x6f8]
000C39FC 616fff97 bl       #0x9f780
000C3A00 a0000037 tbnz     w0, #0, #0xc3a14
000C3A04 607242f9 ldr      x0, [x19, #0x4e0]
000C3A08 000500b4 cbz      x0, #0xc3aa8
000C3A0C 24f30794 bl       #0x2c069c
000C3A10 c0040036 tbz      w0, #0, #0xc3aa8
000C3A14 f5031f2a mov      w21, wzr
000C3A18 682243f9 ldr      x8, [x19, #0x640]
000C3A1C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A20 086940f9 ldr      x8, [x8, #0xd0]
000C3A24 14014039 ldrb     w20, [x8]
000C3A28 b96fff97 bl       #0x9f90c
000C3A2C d4040034 cbz      w20, #0xc3ac4
000C3A30 a0050037 tbnz     w0, #0, #0xc3ae4
000C3A34 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A38 2278ff97 bl       #0xa1ac0
000C3A3C 40050037 tbnz     w0, #0, #0xc3ae4
000C3A40 682243f9 ldr      x8, [x19, #0x640]
000C3A44 a17300d1 sub      x1, x29, #0x1c
000C3A48 086940f9 ldr      x8, [x8, #0xd0]
000C3A4C 1f010039 strb     wzr, [x8]
000C3A50 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A54 2d78ff97 bl       #0xa1b08
000C3A58 23000014 b        #0xc3ae4
000C3A5C 607242f9 ldr      x0, [x19, #0x4e0]
000C3A60 600000b4 cbz      x0, #0xc3a6c
000C3A64 0ef30794 bl       #0x2c069c
000C3A68 c0010037 tbnz     w0, #0, #0xc3aa0
000C3A6C 60420491 add      x0, x19, #0x110
000C3A70 15a2fd97 bl       #0x2c2c4
000C3A74 0800140a and      w8, w0, w20
000C3A78 48010036 tbz      w8, #0, #0xc3aa0
000C3A7C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A80 b96eff97 bl       #0x9f564
000C3A84 e0000036 tbz      w0, #0, #0xc3aa0
000C3A88 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A8C d26eff97 bl       #0x9f5d4
000C3A90 80000037 tbnz     w0, #0, #0xc3aa0
000C3A94 607e43f9 ldr      x0, [x19, #0x6f8]
000C3A98 726fff97 bl       #0x9f860
000C3A9C e01a0036 tbz      w0, #0, #0xc3df8
000C3AA0 f4031f2a mov      w20, wzr
000C3AA4 70000014 b        #0xc3c64
000C3AA8 35008052 mov      w21, #1
000C3AAC 682243f9 ldr      x8, [x19, #0x640]
000C3AB0 607e43f9 ldr      x0, [x19, #0x6f8]
000C3AB4 086940f9 ldr      x8, [x8, #0xd0]
000C3AB8 14014039 ldrb     w20, [x8]
000C3ABC 946fff97 bl       #0x9f90c
000C3AC0 94fbff35 cbnz     w20, #0xc3a30
000C3AC4 80000037 tbnz     w0, #0, #0xc3ad4
000C3AC8 607e43f9 ldr      x0, [x19, #0x6f8]
000C3ACC fd77ff97 bl       #0xa1ac0
000C3AD0 a0000036 tbz      w0, #0, #0xc3ae4
000C3AD4 682243f9 ldr      x8, [x19, #0x640]
000C3AD8 29008052 mov      w9, #1
000C3ADC 086940f9 ldr      x8, [x8, #0xd0]
000C3AE0 09010039 strb     w9, [x8]
000C3AE4 607e43f9 ldr      x0, [x19, #0x6f8]
000C3AE8 a17300d1 sub      x1, x29, #0x1c
000C3AEC 1978ff97 bl       #0xa1b50
000C3AF0 607e43f9 ldr      x0, [x19, #0x6f8]
000C3AF4 a1020052 eor      w1, w21, #1
000C3AF8 a27300d1 sub      x2, x29, #0x1c
000C3AFC 2778ff97 bl       #0xa1b98
000C3B00 f403002a mov      w20, w0
000C3B04 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B08 816fff97 bl       #0x9f90c
000C3B0C 00020037 tbnz     w0, #0, #0xc3b4c
000C3B10 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B14 eb77ff97 bl       #0xa1ac0
000C3B18 a0010037 tbnz     w0, #0, #0xc3b4c
000C3B1C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B20 f56eff97 bl       #0x9f6f4
000C3B24 40010037 tbnz     w0, #0, #0xc3b4c
000C3B28 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B2C 156fff97 bl       #0x9f780
000C3B30 e0000037 tbnz     w0, #0, #0xc3b4c
000C3B34 607242f9 ldr      x0, [x19, #0x4e0]
000C3B38 88020052 eor      w8, w20, #1
000C3B3C b402080a and      w20, w21, w8
000C3B40 800000b4 cbz      x0, #0xc3b50
000C3B44 d6f20794 bl       #0x2c069c
000C3B48 40000036 tbz      w0, #0, #0xc3b50
000C3B4C f4031f2a mov      w20, wzr
000C3B50 682243f9 ldr      x8, [x19, #0x640]
000C3B54 096140f9 ldr      x9, [x8, #0xc0]
000C3B58 29014039 ldrb     w9, [x9]
000C3B5C 89000034 cbz      w9, #0xc3b6c
000C3B60 096540f9 ldr      x9, [x8, #0xc8]
000C3B64 29014039 ldrb     w9, [x9]
000C3B68 c9020034 cbz      w9, #0xc3bc0
000C3B6C 086540f9 ldr      x8, [x8, #0xc8]
000C3B70 08014039 ldrb     w8, [x8]
000C3B74 1f010071 cmp      w8, #0
000C3B78 88020052 eor      w8, w20, #1
000C3B7C 08159f1a csinc    w8, w8, wzr, ne
000C3B80 08070037 tbnz     w8, #0, #0xc3c60
000C3B84 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B88 8a6eff97 bl       #0x9f5b0
000C3B8C e803002a mov      w8, w0
000C3B90 607e43f9 ldr      x0, [x19, #0x6f8]
000C3B94 88000036 tbz      w8, #0, #0xc3ba4
000C3B98 1572ff97 bl       #0xa03ec
000C3B9C 88008052 mov      w8, #4
000C3BA0 29000014 b        #0xc3c44
000C3BA4 896eff97 bl       #0x9f5c8
000C3BA8 e803002a mov      w8, w0
000C3BAC 607e43f9 ldr      x0, [x19, #0x6f8]
000C3BB0 e8030036 tbz      w8, #0, #0xc3c2c
000C3BB4 3d73ff97 bl       #0xa08a8
000C3BB8 88008052 mov      w8, #4
000C3BBC 22000014 b        #0xc3c44
000C3BC0 a0077d2d ldp      s0, s1, [x29, #-0x18]
000C3BC4 089ea852 mov      w8, #0x44f00000
000C3BC8 0201271e fmov     s2, w8
000C3BCC 0894a852 mov      w8, #0x44a00000
000C3BD0 e1030091 mov      x1, sp
000C3BD4 607e43f9 ldr      x0, [x19, #0x6f8]
000C3BD8 21d8215e scvtf    s1, s1
000C3BDC 00d8215e scvtf    s0, s0
000C3BE0 0008221e fmul     s0, s0, s2
000C3BE4 0201271e fmov     s2, w8
000C3BE8 e890a852 mov      w8, #0x44870000
000C3BEC 0018221e fdiv     s0, s0, s2
000C3BF0 0201271e fmov     s2, w8
000C3BF4 8886a852 mov      w8, #0x44340000
000C3BF8 2108221e fmul     s1, s1, s2
000C3BFC 0201271e fmov     s2, w8
000C3C00 2118221e fdiv     s1, s1, s2
000C3C04 e007002d stp      s0, s1, [sp]
000C3C08 4371ff97 bl       #0xa0114
000C3C0C 682243f9 ldr      x8, [x19, #0x640]
000C3C10 086540f9 ldr      x8, [x8, #0xc8]
000C3C14 08014039 ldrb     w8, [x8]
000C3C18 1f010071 cmp      w8, #0
000C3C1C 88020052 eor      w8, w20, #1
000C3C20 08159f1a csinc    w8, w8, wzr, ne
000C3C24 08fb0736 tbz      w8, #0, #0xc3b84
000C3C28 0e000014 b        #0xc3c60
000C3C2C 646eff97 bl       #0x9f5bc
000C3C30 e803002a mov      w8, w0
000C3C34 607e43f9 ldr      x0, [x19, #0x6f8]
000C3C38 480a0036 tbz      w8, #0, #0xc3d80
000C3C3C 6776ff97 bl       #0xa15d8
000C3C40 a8008052 mov      w8, #5
000C3C44 684e06b9 str      w8, [x19, #0x64c]
000C3C48 682243f9 ldr      x8, [x19, #0x640]
000C3C4C 086140f9 ldr      x8, [x8, #0xc0]
000C3C50 1f010039 strb     wzr, [x8]
000C3C54 682243f9 ldr      x8, [x19, #0x640]
000C3C58 086540f9 ldr      x8, [x8, #0xc8]
000C3C5C 1f010039 strb     wzr, [x8]
000C3C60 34008052 mov      w20, #1
000C3C64 682243f9 ldr      x8, [x19, #0x640]
000C3C68 607e43f9 ldr      x0, [x19, #0x6f8]
000C3C6C 086140f9 ldr      x8, [x8, #0xc0]
000C3C70 08014039 ldrb     w8, [x8]
000C3C74 1f010071 cmp      w8, #0
000C3C78 e1179f1a cset     w1, eq
000C3C7C 2c77ff97 bl       #0xa192c
000C3C80 e00313aa mov      x0, x19
000C3C84 e2fdff97 bl       #0xc340c
000C3C88 607e43f9 ldr      x0, [x19, #0x6f8]
000C3C8C d46bff97 bl       #0x9ebdc
000C3C90 682243f9 ldr      x8, [x19, #0x640]
000C3C94 096140f9 ldr      x9, [x8, #0xc0]
000C3C98 29014039 ldrb     w9, [x9]
000C3C9C 89000034 cbz      w9, #0xc3cac
000C3CA0 086540f9 ldr      x8, [x8, #0xc8]
000C3CA4 08014039 ldrb     w8, [x8]
000C3CA8 c8000034 cbz      w8, #0xc3cc0
000C3CAC 607e43f9 ldr      x0, [x19, #0x6f8]
000C3CB0 176fff97 bl       #0x9f90c
000C3CB4 20030036 tbz      w0, #0, #0xc3d18
000C3CB8 28008052 mov      w8, #1
000C3CBC 1e000014 b        #0xc3d34
000C3CC0 a0077d2d ldp      s0, s1, [x29, #-0x18]
000C3CC4 089ea852 mov      w8, #0x44f00000
000C3CC8 0201271e fmov     s2, w8
000C3CCC 0894a852 mov      w8, #0x44a00000
000C3CD0 e1030091 mov      x1, sp
000C3CD4 607e43f9 ldr      x0, [x19, #0x6f8]
000C3CD8 21d8215e scvtf    s1, s1
000C3CDC 00d8215e scvtf    s0, s0
000C3CE0 0008221e fmul     s0, s0, s2
000C3CE4 0201271e fmov     s2, w8
000C3CE8 e890a852 mov      w8, #0x44870000
000C3CEC 0018221e fdiv     s0, s0, s2
000C3CF0 0201271e fmov     s2, w8
000C3CF4 8886a852 mov      w8, #0x44340000
000C3CF8 2108221e fmul     s1, s1, s2
000C3CFC 0201271e fmov     s2, w8
000C3D00 2118221e fdiv     s1, s1, s2
000C3D04 e007002d stp      s0, s1, [sp]
000C3D08 0371ff97 bl       #0xa0114
000C3D0C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D10 ff6eff97 bl       #0x9f90c
000C3D14 20fd0737 tbnz     w0, #0, #0xc3cb8
000C3D18 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D1C 766eff97 bl       #0x9f6f4
000C3D20 80000037 tbnz     w0, #0, #0xc3d30
000C3D24 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D28 ab6eff97 bl       #0x9f7d4
000C3D2C 60010036 tbz      w0, #0, #0xc3d58
000C3D30 48008052 mov      w8, #2
000C3D34 34008052 mov      w20, #1
000C3D38 684e06b9 str      w8, [x19, #0x64c]
000C3D3C e003142a mov      w0, w20
000C3D40 f44f47a9 ldp      x20, x19, [sp, #0x70]
000C3D44 f65746a9 ldp      x22, x21, [sp, #0x60]
000C3D48 f72b40f9 ldr      x23, [sp, #0x50]
000C3D4C fd7b44a9 ldp      x29, x30, [sp, #0x40]
000C3D50 ff030291 add      sp, sp, #0x80
000C3D54 c0035fd6 ret      
000C3D58 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D5C 896eff97 bl       #0x9f780
000C3D60 60000036 tbz      w0, #0, #0xc3d6c
000C3D64 68008052 mov      w8, #3
000C3D68 f3ffff17 b        #0xc3d34
000C3D6C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D70 5477ff97 bl       #0xa1ac0
000C3D74 e0020036 tbz      w0, #0, #0xc3dd0
000C3D78 c8008052 mov      w8, #6
000C3D7C eeffff17 b        #0xc3d34
000C3D80 006eff97 bl       #0x9f580
000C3D84 20f60736 tbz      w0, #0, #0xc3c48
000C3D88 607e43f9 ldr      x0, [x19, #0x6f8]
000C3D8C 0f72ff97 bl       #0xa05c8
000C3D90 682243f9 ldr      x8, [x19, #0x640]
000C3D94 086140f9 ldr      x8, [x8, #0xc0]
000C3D98 1f010039 strb     wzr, [x8]
000C3D9C 682243f9 ldr      x8, [x19, #0x640]
000C3DA0 086540f9 ldr      x8, [x8, #0xc8]
000C3DA4 1f010039 strb     wzr, [x8]
000C3DA8 682243f9 ldr      x8, [x19, #0x640]
000C3DAC 086140f9 ldr      x8, [x8, #0xc0]
000C3DB0 08014039 ldrb     w8, [x8]
000C3DB4 68f5ff35 cbnz     w8, #0xc3c60
000C3DB8 e00313aa mov      x0, x19
000C3DBC 21008052 mov      w1, #1
000C3DC0 22008052 mov      w2, #1
000C3DC4 34008052 mov      w20, #1
000C3DC8 b693fd97 bl       #0x28ca0
000C3DCC a6ffff17 b        #0xc3c64
000C3DD0 607e43f9 ldr      x0, [x19, #0x6f8]
000C3DD4 ed6eff97 bl       #0x9f988
000C3DD8 e803002a mov      w8, w0
000C3DDC 607e43f9 ldr      x0, [x19, #0x6f8]
000C3DE0 08060036 tbz      w8, #0, #0xc3ea0
000C3DE4 826cff97 bl       #0x9efec
000C3DE8 607e43f9 ldr      x0, [x19, #0x6f8]
000C3DEC f16cff97 bl       #0x9f1b0
000C3DF0 e8008052 mov      w8, #7
000C3DF4 d0ffff17 b        #0xc3d34
000C3DF8 682243f9 ldr      x8, [x19, #0x640]
000C3DFC 29008052 mov      w9, #1
000C3E00 e00313aa mov      x0, x19
000C3E04 e1031f2a mov      w1, wzr
000C3E08 22008052 mov      w2, #1
000C3E0C 086140f9 ldr      x8, [x8, #0xc0]
000C3E10 09010039 strb     w9, [x8]
000C3E14 682243f9 ldr      x8, [x19, #0x640]
000C3E18 086540f9 ldr      x8, [x8, #0xc8]
000C3E1C 1f010039 strb     wzr, [x8]
000C3E20 a093fd97 bl       #0x28ca0
000C3E24 a0077d2d ldp      s0, s1, [x29, #-0x18]
000C3E28 089ea852 mov      w8, #0x44f00000
000C3E2C 0201271e fmov     s2, w8
000C3E30 0894a852 mov      w8, #0x44a00000
000C3E34 e1030091 mov      x1, sp
000C3E38 607e43f9 ldr      x0, [x19, #0x6f8]
000C3E3C 21d8215e scvtf    s1, s1
000C3E40 00d8215e scvtf    s0, s0
000C3E44 0008221e fmul     s0, s0, s2
000C3E48 0201271e fmov     s2, w8
000C3E4C e890a852 mov      w8, #0x44870000
000C3E50 0018221e fdiv     s0, s0, s2
000C3E54 0201271e fmov     s2, w8
000C3E58 8886a852 mov      w8, #0x44340000
000C3E5C 2108221e fmul     s1, s1, s2
000C3E60 0201271e fmov     s2, w8
000C3E64 2118221e fdiv     s1, s1, s2
000C3E68 e007002d stp      s0, s1, [sp]
000C3E6C aa70ff97 bl       #0xa0114
000C3E70 403500d0 adrp     x0, #0x76d000
000C3E74 00603791 add      x0, x0, #0xdd8
000C3E78 e8030091 mov      x8, sp
000C3E7C 00951094 bl       #0x4e927c
000C3E80 e0030091 mov      x0, sp
000C3E84 f2f70794 bl       #0x2c1e4c
000C3E88 e00f40f9 ldr      x0, [sp, #0x18]
000C3E8C a0eeffb4 cbz      x0, #0xc3c60
000C3E90 088c44f8 ldr      x8, [x0, #0x48]!
000C3E94 080d40f9 ldr      x8, [x8, #0x18]
000C3E98 00013fd6 blr      x8
000C3E9C 71ffff17 b        #0xc3c60
000C3EA0 cf6eff97 bl       #0x9f9dc
000C3EA4 60000036 tbz      w0, #0, #0xc3eb0
000C3EA8 08018052 mov      w8, #8
000C3EAC a2ffff17 b        #0xc3d34
000C3EB0 607e43f9 ldr      x0, [x19, #0x6f8]
000C3EB4 df6eff97 bl       #0x9fa30
000C3EB8 60000036 tbz      w0, #0, #0xc3ec4
000C3EBC 28018052 mov      w8, #9
000C3EC0 9dffff17 b        #0xc3d34
000C3EC4 607e43f9 ldr      x0, [x19, #0x6f8]
000C3EC8 ef6eff97 bl       #0x9fa84
000C3ECC 60000036 tbz      w0, #0, #0xc3ed8
000C3ED0 48018052 mov      w8, #0xa
000C3ED4 98ffff17 b        #0xc3d34
000C3ED8 607e43f9 ldr      x0, [x19, #0x6f8]
000C3EDC ff6eff97 bl       #0x9fad8
000C3EE0 60000036 tbz      w0, #0, #0xc3eec
000C3EE4 68018052 mov      w8, #0xb
000C3EE8 93ffff17 b        #0xc3d34
000C3EEC 607e43f9 ldr      x0, [x19, #0x6f8]
000C3EF0 1d6fff97 bl       #0x9fb64
000C3EF4 60000036 tbz      w0, #0, #0xc3f00
000C3EF8 88018052 mov      w8, #0xc
000C3EFC 8effff17 b        #0xc3d34
000C3F00 e83800f0 adrp     x8, #0x7e2000
000C3F04 08010291 add      x8, x8, #0x80
000C3F08 080140f9 ldr      x8, [x8]
000C3F0C c80200b4 cbz      x8, #0xc3f64
000C3F10 083540f9 ldr      x8, [x8, #0x68]
000C3F14 880200b4 cbz      x8, #0xc3f64
000C3F18 08b14a39 ldrb     w8, [x8, #0x2ac]
000C3F1C c8000837 tbnz     w8, #1, #0xc3f34
000C3F20 607e43f9 ldr      x0, [x19, #0x6f8]
000C3F24 336fff97 bl       #0x9fbf0
000C3F28 a0000036 tbz      w0, #0, #0xc3f3c
000C3F2C c8018052 mov      w8, #0xe
000C3F30 81ffff17 b        #0xc3d34
000C3F34 a8018052 mov      w8, #0xd
000C3F38 7fffff17 b        #0xc3d34
000C3F3C 607e43f9 ldr      x0, [x19, #0x6f8]
000C3F40 4f6fff97 bl       #0x9fc7c
000C3F44 60000036 tbz      w0, #0, #0xc3f50
000C3F48 e8018052 mov      w8, #0xf
000C3F4C 7affff17 b        #0xc3d34
000C3F50 607e43f9 ldr      x0, [x19, #0x6f8]
000C3F54 6d6fff97 bl       #0x9fd08
000C3F58 20ef0736 tbz      w0, #0, #0xc3d3c
000C3F5C 48038052 mov      w8, #0x1a
000C3F60 75ffff17 b        #0xc3d34
000C3F64 f7c81494 bl       #0x5f6340
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
### 0xc81b8 (309 slots)
~~~asm
000C81B8 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000C81BC f30b00f9 str      x19, [sp, #0x10]
000C81C0 fd030091 mov      x29, sp
000C81C4 c83600b0 adrp     x8, #0x7a1000
000C81C8 c93600b0 adrp     x9, #0x7a1000
000C81CC 088140f9 ldr      x8, [x8, #0x100]
000C81D0 f30300aa mov      x19, x0
000C81D4 298540f9 ldr      x9, [x9, #0x108]
000C81D8 0a410091 add      x10, x8, #0x10
000C81DC 0b610191 add      x11, x8, #0x58
000C81E0 08610291 add      x8, x8, #0x98
000C81E4 3f0100f9 str      xzr, [x9]
000C81E8 0a0000f9 str      x10, [x0]
000C81EC 0ba004a9 stp      x11, x8, [x0, #0x48]
000C81F0 00c441f9 ldr      x0, [x0, #0x388]
000C81F4 a00000b4 cbz      x0, #0xc8208
000C81F8 088c44f8 ldr      x8, [x0, #0x48]!
000C81FC 080d40f9 ldr      x8, [x8, #0x18]
000C8200 00013fd6 blr      x8
000C8204 7fc601f9 str      xzr, [x19, #0x388]
000C8208 60c241f9 ldr      x0, [x19, #0x380]
000C820C a00000b4 cbz      x0, #0xc8220
000C8210 088c44f8 ldr      x8, [x0, #0x48]!
000C8214 080d40f9 ldr      x8, [x8, #0x18]
000C8218 00013fd6 blr      x8
000C821C 7fc201f9 str      xzr, [x19, #0x380]
000C8220 60be41f9 ldr      x0, [x19, #0x378]
000C8224 a00000b4 cbz      x0, #0xc8238
000C8228 088c44f8 ldr      x8, [x0, #0x48]!
000C822C 080d40f9 ldr      x8, [x8, #0x18]
000C8230 00013fd6 blr      x8
000C8234 7fbe01f9 str      xzr, [x19, #0x378]
000C8238 60ba41f9 ldr      x0, [x19, #0x370]
000C823C a00000b4 cbz      x0, #0xc8250
000C8240 088c44f8 ldr      x8, [x0, #0x48]!
000C8244 080d40f9 ldr      x8, [x8, #0x18]
000C8248 00013fd6 blr      x8
000C824C 7fba01f9 str      xzr, [x19, #0x370]
000C8250 60b641f9 ldr      x0, [x19, #0x368]
000C8254 a00000b4 cbz      x0, #0xc8268
000C8258 088c44f8 ldr      x8, [x0, #0x48]!
000C825C 080d40f9 ldr      x8, [x8, #0x18]
000C8260 00013fd6 blr      x8
000C8264 7fb601f9 str      xzr, [x19, #0x368]
000C8268 60b241f9 ldr      x0, [x19, #0x360]
000C826C a00000b4 cbz      x0, #0xc8280
000C8270 088c44f8 ldr      x8, [x0, #0x48]!
000C8274 080d40f9 ldr      x8, [x8, #0x18]
000C8278 00013fd6 blr      x8
000C827C 7fb201f9 str      xzr, [x19, #0x360]
000C8280 60ae41f9 ldr      x0, [x19, #0x358]
000C8284 a00000b4 cbz      x0, #0xc8298
000C8288 088c44f8 ldr      x8, [x0, #0x48]!
000C828C 080d40f9 ldr      x8, [x8, #0x18]
000C8290 00013fd6 blr      x8
000C8294 7fae01f9 str      xzr, [x19, #0x358]
000C8298 60aa41f9 ldr      x0, [x19, #0x350]
000C829C a00000b4 cbz      x0, #0xc82b0
000C82A0 088c44f8 ldr      x8, [x0, #0x48]!
000C82A4 080d40f9 ldr      x8, [x8, #0x18]
000C82A8 00013fd6 blr      x8
000C82AC 7faa01f9 str      xzr, [x19, #0x350]
000C82B0 60a641f9 ldr      x0, [x19, #0x348]
000C82B4 a00000b4 cbz      x0, #0xc82c8
000C82B8 088c44f8 ldr      x8, [x0, #0x48]!
000C82BC 080d40f9 ldr      x8, [x8, #0x18]
000C82C0 00013fd6 blr      x8
000C82C4 7fa601f9 str      xzr, [x19, #0x348]
000C82C8 60a241f9 ldr      x0, [x19, #0x340]
000C82CC a00000b4 cbz      x0, #0xc82e0
000C82D0 088c44f8 ldr      x8, [x0, #0x48]!
000C82D4 080d40f9 ldr      x8, [x8, #0x18]
000C82D8 00013fd6 blr      x8
000C82DC 7fa201f9 str      xzr, [x19, #0x340]
000C82E0 609e41f9 ldr      x0, [x19, #0x338]
000C82E4 a00000b4 cbz      x0, #0xc82f8
000C82E8 088c44f8 ldr      x8, [x0, #0x48]!
000C82EC 080d40f9 ldr      x8, [x8, #0x18]
000C82F0 00013fd6 blr      x8
000C82F4 7f9e01f9 str      xzr, [x19, #0x338]
000C82F8 609a41f9 ldr      x0, [x19, #0x330]
000C82FC a00000b4 cbz      x0, #0xc8310
000C8300 088c44f8 ldr      x8, [x0, #0x48]!
000C8304 080d40f9 ldr      x8, [x8, #0x18]
000C8308 00013fd6 blr      x8
000C830C 7f9a01f9 str      xzr, [x19, #0x330]
000C8310 609641f9 ldr      x0, [x19, #0x328]
000C8314 a00000b4 cbz      x0, #0xc8328
000C8318 088c44f8 ldr      x8, [x0, #0x48]!
000C831C 080d40f9 ldr      x8, [x8, #0x18]
000C8320 00013fd6 blr      x8
000C8324 7f9601f9 str      xzr, [x19, #0x328]
000C8328 609241f9 ldr      x0, [x19, #0x320]
000C832C a00000b4 cbz      x0, #0xc8340
000C8330 088c44f8 ldr      x8, [x0, #0x48]!
000C8334 080d40f9 ldr      x8, [x8, #0x18]
000C8338 00013fd6 blr      x8
000C833C 7f9201f9 str      xzr, [x19, #0x320]
000C8340 608e41f9 ldr      x0, [x19, #0x318]
000C8344 a00000b4 cbz      x0, #0xc8358
000C8348 088c44f8 ldr      x8, [x0, #0x48]!
000C834C 080d40f9 ldr      x8, [x8, #0x18]
000C8350 00013fd6 blr      x8
000C8354 7f8e01f9 str      xzr, [x19, #0x318]
000C8358 608a41f9 ldr      x0, [x19, #0x310]
000C835C a00000b4 cbz      x0, #0xc8370
000C8360 088c44f8 ldr      x8, [x0, #0x48]!
000C8364 080d40f9 ldr      x8, [x8, #0x18]
000C8368 00013fd6 blr      x8
000C836C 7f8a01f9 str      xzr, [x19, #0x310]
000C8370 608641f9 ldr      x0, [x19, #0x308]
000C8374 a00000b4 cbz      x0, #0xc8388
000C8378 088c44f8 ldr      x8, [x0, #0x48]!
000C837C 080d40f9 ldr      x8, [x8, #0x18]
000C8380 00013fd6 blr      x8
000C8384 7f8601f9 str      xzr, [x19, #0x308]
000C8388 608241f9 ldr      x0, [x19, #0x300]
000C838C a00000b4 cbz      x0, #0xc83a0
000C8390 088c44f8 ldr      x8, [x0, #0x48]!
000C8394 080d40f9 ldr      x8, [x8, #0x18]
000C8398 00013fd6 blr      x8
000C839C 7f8201f9 str      xzr, [x19, #0x300]
000C83A0 607e41f9 ldr      x0, [x19, #0x2f8]
000C83A4 a00000b4 cbz      x0, #0xc83b8
000C83A8 088c44f8 ldr      x8, [x0, #0x48]!
000C83AC 080d40f9 ldr      x8, [x8, #0x18]
000C83B0 00013fd6 blr      x8
000C83B4 7f7e01f9 str      xzr, [x19, #0x2f8]
000C83B8 607a41f9 ldr      x0, [x19, #0x2f0]
000C83BC a00000b4 cbz      x0, #0xc83d0
000C83C0 088c44f8 ldr      x8, [x0, #0x48]!
000C83C4 080d40f9 ldr      x8, [x8, #0x18]
000C83C8 00013fd6 blr      x8
000C83CC 7f7a01f9 str      xzr, [x19, #0x2f0]
000C83D0 607641f9 ldr      x0, [x19, #0x2e8]
000C83D4 a00000b4 cbz      x0, #0xc83e8
000C83D8 088c44f8 ldr      x8, [x0, #0x48]!
000C83DC 080d40f9 ldr      x8, [x8, #0x18]
000C83E0 00013fd6 blr      x8
000C83E4 7f7601f9 str      xzr, [x19, #0x2e8]
000C83E8 607241f9 ldr      x0, [x19, #0x2e0]
000C83EC a00000b4 cbz      x0, #0xc8400
000C83F0 088c44f8 ldr      x8, [x0, #0x48]!
000C83F4 080d40f9 ldr      x8, [x8, #0x18]
000C83F8 00013fd6 blr      x8
000C83FC 7f7201f9 str      xzr, [x19, #0x2e0]
000C8400 606e41f9 ldr      x0, [x19, #0x2d8]
000C8404 a00000b4 cbz      x0, #0xc8418
000C8408 088c44f8 ldr      x8, [x0, #0x48]!
000C840C 080d40f9 ldr      x8, [x8, #0x18]
000C8410 00013fd6 blr      x8
000C8414 7f6e01f9 str      xzr, [x19, #0x2d8]
000C8418 606a41f9 ldr      x0, [x19, #0x2d0]
000C841C a00000b4 cbz      x0, #0xc8430
000C8420 088c44f8 ldr      x8, [x0, #0x48]!
000C8424 080d40f9 ldr      x8, [x8, #0x18]
000C8428 00013fd6 blr      x8
000C842C 7f6a01f9 str      xzr, [x19, #0x2d0]
000C8430 606641f9 ldr      x0, [x19, #0x2c8]
000C8434 a00000b4 cbz      x0, #0xc8448
000C8438 088c44f8 ldr      x8, [x0, #0x48]!
000C843C 080d40f9 ldr      x8, [x8, #0x18]
000C8440 00013fd6 blr      x8
000C8444 7f6601f9 str      xzr, [x19, #0x2c8]
000C8448 606241f9 ldr      x0, [x19, #0x2c0]
000C844C a00000b4 cbz      x0, #0xc8460
000C8450 088c44f8 ldr      x8, [x0, #0x48]!
000C8454 080d40f9 ldr      x8, [x8, #0x18]
000C8458 00013fd6 blr      x8
000C845C 7f6201f9 str      xzr, [x19, #0x2c0]
000C8460 605e41f9 ldr      x0, [x19, #0x2b8]
000C8464 a00000b4 cbz      x0, #0xc8478
000C8468 088c44f8 ldr      x8, [x0, #0x48]!
000C846C 080d40f9 ldr      x8, [x8, #0x18]
000C8470 00013fd6 blr      x8
000C8474 7f5e01f9 str      xzr, [x19, #0x2b8]
000C8478 605a41f9 ldr      x0, [x19, #0x2b0]
000C847C a00000b4 cbz      x0, #0xc8490
000C8480 088c44f8 ldr      x8, [x0, #0x48]!
000C8484 080d40f9 ldr      x8, [x8, #0x18]
000C8488 00013fd6 blr      x8
000C848C 7f5a01f9 str      xzr, [x19, #0x2b0]
000C8490 605641f9 ldr      x0, [x19, #0x2a8]
000C8494 a00000b4 cbz      x0, #0xc84a8
000C8498 088c44f8 ldr      x8, [x0, #0x48]!
000C849C 080d40f9 ldr      x8, [x8, #0x18]
000C84A0 00013fd6 blr      x8
000C84A4 7f5601f9 str      xzr, [x19, #0x2a8]
000C84A8 605241f9 ldr      x0, [x19, #0x2a0]
000C84AC a00000b4 cbz      x0, #0xc84c0
000C84B0 088c44f8 ldr      x8, [x0, #0x48]!
000C84B4 080d40f9 ldr      x8, [x8, #0x18]
000C84B8 00013fd6 blr      x8
000C84BC 7f5201f9 str      xzr, [x19, #0x2a0]
000C84C0 604e41f9 ldr      x0, [x19, #0x298]
000C84C4 a00000b4 cbz      x0, #0xc84d8
000C84C8 088c44f8 ldr      x8, [x0, #0x48]!
000C84CC 080d40f9 ldr      x8, [x8, #0x18]
000C84D0 00013fd6 blr      x8
000C84D4 7f4e01f9 str      xzr, [x19, #0x298]
000C84D8 604a41f9 ldr      x0, [x19, #0x290]
000C84DC a00000b4 cbz      x0, #0xc84f0
000C84E0 088c44f8 ldr      x8, [x0, #0x48]!
000C84E4 080d40f9 ldr      x8, [x8, #0x18]
000C84E8 00013fd6 blr      x8
000C84EC 7f4a01f9 str      xzr, [x19, #0x290]
000C84F0 604641f9 ldr      x0, [x19, #0x288]
000C84F4 a00000b4 cbz      x0, #0xc8508
000C84F8 088c44f8 ldr      x8, [x0, #0x48]!
000C84FC 080d40f9 ldr      x8, [x8, #0x18]
000C8500 00013fd6 blr      x8
000C8504 7f4601f9 str      xzr, [x19, #0x288]
000C8508 604241f9 ldr      x0, [x19, #0x280]
000C850C a00000b4 cbz      x0, #0xc8520
000C8510 088c44f8 ldr      x8, [x0, #0x48]!
000C8514 080d40f9 ldr      x8, [x8, #0x18]
000C8518 00013fd6 blr      x8
000C851C 7f4201f9 str      xzr, [x19, #0x280]
000C8520 603e41f9 ldr      x0, [x19, #0x278]
000C8524 a00000b4 cbz      x0, #0xc8538
000C8528 088c44f8 ldr      x8, [x0, #0x48]!
000C852C 080d40f9 ldr      x8, [x8, #0x18]
000C8530 00013fd6 blr      x8
000C8534 7f3e01f9 str      xzr, [x19, #0x278]
000C8538 603a41f9 ldr      x0, [x19, #0x270]
000C853C a00000b4 cbz      x0, #0xc8550
000C8540 088c44f8 ldr      x8, [x0, #0x48]!
000C8544 080d40f9 ldr      x8, [x8, #0x18]
000C8548 00013fd6 blr      x8
000C854C 7f3a01f9 str      xzr, [x19, #0x270]
000C8550 603641f9 ldr      x0, [x19, #0x268]
000C8554 a00000b4 cbz      x0, #0xc8568
000C8558 088c44f8 ldr      x8, [x0, #0x48]!
000C855C 080d40f9 ldr      x8, [x8, #0x18]
000C8560 00013fd6 blr      x8
000C8564 7f3601f9 str      xzr, [x19, #0x268]
000C8568 683241f9 ldr      x8, [x19, #0x260]
000C856C c80000b4 cbz      x8, #0xc8584
000C8570 00e10e91 add      x0, x8, #0x3b8
000C8574 08dd41f9 ldr      x8, [x8, #0x3b8]
000C8578 080d40f9 ldr      x8, [x8, #0x18]
000C857C 00013fd6 blr      x8
000C8580 7f3201f9 str      xzr, [x19, #0x260]
000C8584 682e41f9 ldr      x8, [x19, #0x258]
000C8588 c80000b4 cbz      x8, #0xc85a0
000C858C 00e10e91 add      x0, x8, #0x3b8
000C8590 08dd41f9 ldr      x8, [x8, #0x3b8]
000C8594 080d40f9 ldr      x8, [x8, #0x18]
000C8598 00013fd6 blr      x8
000C859C 7f2e01f9 str      xzr, [x19, #0x258]
000C85A0 682a41f9 ldr      x8, [x19, #0x250]
000C85A4 c80000b4 cbz      x8, #0xc85bc
000C85A8 00e10e91 add      x0, x8, #0x3b8
000C85AC 08dd41f9 ldr      x8, [x8, #0x3b8]
000C85B0 080d40f9 ldr      x8, [x8, #0x18]
000C85B4 00013fd6 blr      x8
000C85B8 7f2a01f9 str      xzr, [x19, #0x250]
000C85BC 602641f9 ldr      x0, [x19, #0x248]
000C85C0 a00000b4 cbz      x0, #0xc85d4
000C85C4 088c44f8 ldr      x8, [x0, #0x48]!
000C85C8 080d40f9 ldr      x8, [x8, #0x18]
000C85CC 00013fd6 blr      x8
000C85D0 7f2601f9 str      xzr, [x19, #0x248]
000C85D4 602241f9 ldr      x0, [x19, #0x240]
000C85D8 a00000b4 cbz      x0, #0xc85ec
000C85DC 088c44f8 ldr      x8, [x0, #0x48]!
000C85E0 080d40f9 ldr      x8, [x8, #0x18]
000C85E4 00013fd6 blr      x8
000C85E8 7f2201f9 str      xzr, [x19, #0x240]
000C85EC 601e41f9 ldr      x0, [x19, #0x238]
000C85F0 a00000b4 cbz      x0, #0xc8604
000C85F4 088c44f8 ldr      x8, [x0, #0x48]!
000C85F8 080d40f9 ldr      x8, [x8, #0x18]
000C85FC 00013fd6 blr      x8
000C8600 7f1e01f9 str      xzr, [x19, #0x238]
000C8604 601a41f9 ldr      x0, [x19, #0x230]
000C8608 a00000b4 cbz      x0, #0xc861c
000C860C 088c44f8 ldr      x8, [x0, #0x48]!
000C8610 080d40f9 ldr      x8, [x8, #0x18]
000C8614 00013fd6 blr      x8
000C8618 7f1a01f9 str      xzr, [x19, #0x230]
000C861C 601641f9 ldr      x0, [x19, #0x228]
000C8620 a00000b4 cbz      x0, #0xc8634
000C8624 088c44f8 ldr      x8, [x0, #0x48]!
000C8628 080d40f9 ldr      x8, [x8, #0x18]
000C862C 00013fd6 blr      x8
000C8630 7f1601f9 str      xzr, [x19, #0x228]
000C8634 601241f9 ldr      x0, [x19, #0x220]
000C8638 a00000b4 cbz      x0, #0xc864c
000C863C 088c44f8 ldr      x8, [x0, #0x48]!
000C8640 080d40f9 ldr      x8, [x8, #0x18]
000C8644 00013fd6 blr      x8
000C8648 7f1201f9 str      xzr, [x19, #0x220]
000C864C 600e41f9 ldr      x0, [x19, #0x218]
000C8650 a00000b4 cbz      x0, #0xc8664
000C8654 088c44f8 ldr      x8, [x0, #0x48]!
000C8658 080d40f9 ldr      x8, [x8, #0x18]
000C865C 00013fd6 blr      x8
000C8660 7f0e01f9 str      xzr, [x19, #0x218]
000C8664 600a41f9 ldr      x0, [x19, #0x210]
000C8668 a00000b4 cbz      x0, #0xc867c
000C866C 088c44f8 ldr      x8, [x0, #0x48]!
000C8670 080d40f9 ldr      x8, [x8, #0x18]
000C8674 00013fd6 blr      x8
000C8678 7f0a01f9 str      xzr, [x19, #0x210]
000C867C e00313aa mov      x0, x19
000C8680 f30b40f9 ldr      x19, [sp, #0x10]
000C8684 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000C8688 dc73fd17 b        #0x255f8
~~~
### 0xc868c (1 slots)
~~~asm
000C868C cbfeff17 b        #0xc81b8
~~~
### 0xc8690 (1 slots)
~~~asm
000C8690 0414ff17 b        #0x8d6a0
~~~
### 0xc8694 (2 slots)
~~~asm
000C8694 002001d1 sub      x0, x0, #0x48
000C8698 c8feff17 b        #0xc81b8
~~~
### 0xc869c (2 slots)
~~~asm
000C869C 002001d1 sub      x0, x0, #0x48
000C86A0 c6feff17 b        #0xc81b8
~~~
### 0xc86a4 (1 slots)
~~~asm
000C86A4 ff13ff17 b        #0x8d6a0
~~~
### 0xc86a8 (1 slots)
~~~asm
000C86A8 fe13ff17 b        #0x8d6a0
~~~
### 0xc86ac (2 slots)
~~~asm
000C86AC 004001d1 sub      x0, x0, #0x50
000C86B0 c2feff17 b        #0xc81b8
~~~
### 0xc86b4 (2 slots)
~~~asm
000C86B4 004001d1 sub      x0, x0, #0x50
000C86B8 c0feff17 b        #0xc81b8
~~~
### 0xe30c0 (234 slots)
~~~asm
000E30C0 ff4305d1 sub      sp, sp, #0x150
000E30C4 fd7b0fa9 stp      x29, x30, [sp, #0xf0]
000E30C8 fc6f10a9 stp      x28, x27, [sp, #0x100]
000E30CC fa6711a9 stp      x26, x25, [sp, #0x110]
000E30D0 f85f12a9 stp      x24, x23, [sp, #0x120]
000E30D4 f65713a9 stp      x22, x21, [sp, #0x130]
000E30D8 f44f14a9 stp      x20, x19, [sp, #0x140]
000E30DC fdc30391 add      x29, sp, #0xf0
000E30E0 e83700f0 adrp     x8, #0x7e2000
000E30E4 08010291 add      x8, x8, #0x80
000E30E8 160140f9 ldr      x22, [x8]
000E30EC d61b00b4 cbz      x22, #0xe3464
000E30F0 e87f60b2 mov      x8, #-0x100000000
000E30F4 1f2003d5 nop      
000E30F8 693d0010 adr      x9, #0xe38a4
000E30FC e86b00f9 str      x8, [sp, #0xd0]
000E3100 08008012 mov      w8, #-1
000E3104 143c40f9 ldr      x20, [x0, #0x78]
000E3108 e8db00b9 str      w8, [sp, #0xd8]
000E310C 28008052 mov      w8, #1
000E3110 f30300aa mov      x19, x0
000E3114 e87b0339 strb     w8, [sp, #0xde]
000E3118 1f2003d5 nop      
000E311C 883a0010 adr      x8, #0xe386c
000E3120 e82703a9 stp      x8, x9, [sp, #0x30]
000E3124 1f2003d5 nop      
000E3128 083c0010 adr      x8, #0xe38a8
000E312C 1f2003d5 nop      
000E3130 293c0010 adr      x9, #0xe38b4
000E3134 e82704a9 stp      x8, x9, [sp, #0x40]
000E3138 c88240f9 ldr      x8, [x22, #0x100]
000E313C ff7f0ca9 stp      xzr, xzr, [sp, #0xc0]
000E3140 e02b00f9 str      x0, [sp, #0x50]
000E3144 ffbb0179 strh     wzr, [sp, #0xdc]
000E3148 e85b00f9 str      x8, [sp, #0xb0]
000E314C b40000b4 cbz      x20, #0xe3160
000E3150 e00314aa mov      x0, x20
000E3154 088c44f8 ldr      x8, [x0, #0x48]!
000E3158 080940f9 ldr      x8, [x8, #0x10]
000E315C 00013fd6 blr      x8
000E3160 c8aa40b9 ldr      w8, [x22, #0xa8]
000E3164 f45f00f9 str      x20, [sp, #0xb8]
000E3168 08020034 cbz      w8, #0xe31a8
000E316C c8ca41f9 ldr      x8, [x22, #0x390]
000E3170 a81700b4 cbz      x8, #0xe3464
000E3174 081147b9 ldr      w8, [x8, #0x710]
000E3178 1f050071 cmp      w8, #1
000E317C a1020054 b.ne     #0xe31d0
000E3180 082a00f0 adrp     x8, #0x626000
000E3184 08c10291 add      x8, x8, #0xb0
000E3188 e86300f9 str      x8, [sp, #0xc0]
000E318C e9008052 mov      w9, #7
000E3190 082a00f0 adrp     x8, #0x626000
000E3194 08310191 add      x8, x8, #0x4c
000E3198 e9d300b9 str      w9, [sp, #0xd0]
000E319C 684600f9 str      x8, [x19, #0x88]
000E31A0 c8008052 mov      w8, #6
000E31A4 14000014 b        #0xe31f4
000E31A8 082a00f0 adrp     x8, #0x626000
000E31AC 08010291 add      x8, x8, #0x80
000E31B0 e86300f9 str      x8, [sp, #0xc0]
000E31B4 c9008052 mov      w9, #6
000E31B8 082a00f0 adrp     x8, #0x626000
000E31BC 08d10091 add      x8, x8, #0x34
000E31C0 e9d300b9 str      w9, [sp, #0xd0]
000E31C4 684600f9 str      x8, [x19, #0x88]
000E31C8 a8008052 mov      w8, #5
000E31CC 0a000014 b        #0xe31f4
000E31D0 082a00f0 adrp     x8, #0x626000
000E31D4 08a10391 add      x8, x8, #0xe8
000E31D8 e86300f9 str      x8, [sp, #0xc0]
000E31DC 082a00f0 adrp     x8, #0x626000
000E31E0 08a10191 add      x8, x8, #0x68
000E31E4 684600f9 str      x8, [x19, #0x88]
000E31E8 a9008052 mov      w9, #5
000E31EC 88008052 mov      w8, #4
000E31F0 e9d300b9 str      w9, [sp, #0xd0]
000E31F4 ffa31a29 stp      wzr, w8, [sp, #0xd4]
000E31F8 683240f9 ldr      x8, [x19, #0x60]
000E31FC 699200b9 str      w9, [x19, #0x90]
000E3200 143140f9 ldr      x20, [x8, #0x60]
000E3204 880240f9 ldr      x8, [x20]
000E3208 e00314aa mov      x0, x20
000E320C 080140f9 ldr      x8, [x8]
000E3210 00013fd6 blr      x8
000E3214 f50300aa mov      x21, x0
000E3218 d10bfd97 bl       #0x2615c
000E321C 1f0015eb cmp      x0, x21
000E3220 a0000054 b.eq     #0xe3234
000E3224 b50240f9 ldr      x21, [x21]
000E3228 bf0200eb cmp      x21, x0
000E322C a41a40fa ccmp     x21, #0, #4, ne
000E3230 a1ffff54 b.ne     #0xe3224
000E3234 81be42f9 ldr      x1, [x20, #0x578]
000E3238 94290090 adrp     x20, #0x613000
000E323C 94e20191 add      x20, x20, #0x78
000E3240 e2c30091 add      x2, sp, #0x30
000E3244 e00314aa mov      x0, x20
000E3248 3243fd97 bl       #0x33f10
000E324C d53a40f9 ldr      x21, [x22, #0x70]
000E3250 b51000b4 cbz      x21, #0xe3464
000E3254 d74a41f9 ldr      x23, [x22, #0x290]
000E3258 f71700f9 str      x23, [sp, #0x28]
000E325C 571000b4 cbz      x23, #0xe3464
000E3260 f80317aa mov      x24, x23
000E3264 d6920291 add      x22, x22, #0xa4
000E3268 088f44f8 ldr      x8, [x24, #0x48]!
000E326C e00318aa mov      x0, x24
000E3270 080940f9 ldr      x8, [x8, #0x10]
000E3274 00013fd6 blr      x8
000E3278 080340f9 ldr      x8, [x24]
000E327C e00318aa mov      x0, x24
000E3280 f71300f9 str      x23, [sp, #0x20]
000E3284 080940f9 ldr      x8, [x8, #0x10]
000E3288 00013fd6 blr      x8
000E328C e1830091 add      x1, sp, #0x20
000E3290 e00315aa mov      x0, x21
000E3294 e20316aa mov      x2, x22
000E3298 e3031f2a mov      w3, wzr
000E329C 05b9fe97 bl       #0x916b0
000E32A0 e01340f9 ldr      x0, [sp, #0x20]
000E32A4 a00000b4 cbz      x0, #0xe32b8
000E32A8 088c44f8 ldr      x8, [x0, #0x48]!
000E32AC 080d40f9 ldr      x8, [x8, #0x18]
000E32B0 00013fd6 blr      x8
000E32B4 ff1300f9 str      xzr, [sp, #0x20]
000E32B8 e00317aa mov      x0, x23
000E32BC 21008052 mov      w1, #1
000E32C0 38008052 mov      w24, #1
000E32C4 d18d0494 bl       #0x206a08
000E32C8 689240b9 ldr      w8, [x19, #0x90]
000E32CC c80b0034 cbz      w8, #0xe3444
000E32D0 7b4e8fd2 mov      x27, #0x7a73
000E32D4 7b61b8f2 movk     x27, #0xc30b, lsl #16
000E32D8 f603002a mov      w22, w0
000E32DC f7031faa mov      x23, xzr
000E32E0 3b4ad3f2 movk     x27, #0x9a51, lsl #32
000E32E4 bb1becf2 movk     x27, #0x60dd, lsl #48
000E32E8 7c018052 mov      w28, #0xb
000E32EC 05000014 b        #0xe3300
000E32F0 689240b9 ldr      w8, [x19, #0x90]
000E32F4 f7060091 add      x23, x23, #1
000E32F8 ff0208eb cmp      x23, x8
000E32FC 22070054 b.hs     #0xe33e0
000E3300 684640f9 ldr      x8, [x19, #0x88]
000E3304 087977b8 ldr      w8, [x8, x23, lsl #2]
000E3308 1f190071 cmp      w8, #6
000E330C 20010054 b.eq     #0xe3330
000E3310 1f150071 cmp      w8, #5
000E3314 60010054 b.eq     #0xe3340
000E3318 1f090071 cmp      w8, #2
000E331C a1010054 b.ne     #0xe3350
000E3320 36010037 tbnz     w22, #0, #0xe3344
000E3324 e01740f9 ldr      x0, [sp, #0x28]
000E3328 32940494 bl       #0x2083f0
000E332C 0e000014 b        #0xe3364
000E3330 e01740f9 ldr      x0, [sp, #0x28]
000E3334 1c920494 bl       #0x207ba4
000E3338 18000052 eor      w24, w0, #1
000E333C 0b000014 b        #0xe3368
000E3340 d6000036 tbz      w22, #0, #0xe3358
000E3344 f8031f2a mov      w24, wzr
000E3348 08000014 b        #0xe3368
000E334C 1f2003d5 nop      
000E3350 38008052 mov      w24, #1
000E3354 05000014 b        #0xe3368
000E3358 e1a30091 add      x1, sp, #0x28
000E335C e00315aa mov      x0, x21
000E3360 01c3fe97 bl       #0x93f64
000E3364 f803002a mov      w24, w0
000E3368 683240f9 ldr      x8, [x19, #0x60]
000E336C fb5300a9 stp      x27, x20, [sp]
000E3370 193140f9 ldr      x25, [x8, #0x60]
000E3374 fc7f01a9 stp      x28, xzr, [sp, #0x10]
000E3378 280340f9 ldr      x8, [x25]
000E337C e00319aa mov      x0, x25
000E3380 080140f9 ldr      x8, [x8]
000E3384 00013fd6 blr      x8
000E3388 fa0300aa mov      x26, x0
000E338C 740bfd97 bl       #0x2615c
000E3390 1f001aeb cmp      x0, x26
000E3394 e0000054 b.eq     #0xe33b0
000E3398 1f2003d5 nop      
000E339C 1f2003d5 nop      
000E33A0 5a0340f9 ldr      x26, [x26]
000E33A4 5f0300eb cmp      x26, x0
000E33A8 441b40fa ccmp     x26, #0, #4, ne
000E33AC a1ffff54 b.ne     #0xe33a0
000E33B0 21bf42f9 ldr      x1, [x25, #0x578]
000E33B4 e0030091 mov      x0, sp
000E33B8 e203172a mov      w2, w23
000E33BC 6e43fd97 bl       #0x34174
000E33C0 01030012 and      w1, w24, #1
000E33C4 40f80694 bl       #0x2a14c4
000E33C8 e00f40f9 ldr      x0, [sp, #0x18]
000E33CC 20f9ffb4 cbz      x0, #0xe32f0
000E33D0 088c44f8 ldr      x8, [x0, #0x48]!
000E33D4 080d40f9 ldr      x8, [x8, #0x18]
000E33D8 00013fd6 blr      x8
000E33DC c5ffff17 b        #0xe32f0
000E33E0 f71740f9 ldr      x23, [sp, #0x28]
000E33E4 28008052 mov      w8, #1
000E33E8 688200b9 str      w8, [x19, #0x80]
000E33EC f70200b5 cbnz     x23, #0xe3448
000E33F0 e05f40f9 ldr      x0, [sp, #0xb8]
000E33F4 a00000b4 cbz      x0, #0xe3408
000E33F8 088c44f8 ldr      x8, [x0, #0x48]!
000E33FC 080d40f9 ldr      x8, [x8, #0x18]
000E3400 00013fd6 blr      x8
000E3404 ff5f00f9 str      xzr, [sp, #0xb8]
000E3408 e81f40f9 ldr      x8, [sp, #0x38]
000E340C c80000b4 cbz      x8, #0xe3424
000E3410 e9c30091 add      x9, sp, #0x30
000E3414 ff7f04a9 stp      xzr, xzr, [sp, #0x40]
000E3418 20810091 add      x0, x9, #0x20
000E341C ff7f03a9 stp      xzr, xzr, [sp, #0x30]
000E3420 00013fd6 blr      x8
000E3424 f44f54a9 ldp      x20, x19, [sp, #0x140]
000E3428 f65753a9 ldp      x22, x21, [sp, #0x130]
000E342C f85f52a9 ldp      x24, x23, [sp, #0x120]
000E3430 fa6751a9 ldp      x26, x25, [sp, #0x110]
000E3434 fc6f50a9 ldp      x28, x27, [sp, #0x100]
000E3438 fd7b4fa9 ldp      x29, x30, [sp, #0xf0]
000E343C ff430591 add      sp, sp, #0x150
000E3440 c0035fd6 ret      
000E3444 788200b9 str      w24, [x19, #0x80]
000E3448 e88e44f8 ldr      x8, [x23, #0x48]!
000E344C e00317aa mov      x0, x23
000E3450 080d40f9 ldr      x8, [x8, #0x18]
000E3454 00013fd6 blr      x8
000E3458 e05f40f9 ldr      x0, [sp, #0xb8]
000E345C e0fcffb5 cbnz     x0, #0xe33f8
000E3460 eaffff17 b        #0xe3408
000E3464 b74b1494 bl       #0x5f6340
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
### 0xfa6c0 (239 slots)
~~~asm
000FA6C0 ff4303d1 sub      sp, sp, #0xd0
000FA6C4 fd7b07a9 stp      x29, x30, [sp, #0x70]
000FA6C8 fc6f08a9 stp      x28, x27, [sp, #0x80]
000FA6CC fa6709a9 stp      x26, x25, [sp, #0x90]
000FA6D0 f85f0aa9 stp      x24, x23, [sp, #0xa0]
000FA6D4 f6570ba9 stp      x22, x21, [sp, #0xb0]
000FA6D8 f44f0ca9 stp      x20, x19, [sp, #0xc0]
000FA6DC fdc30191 add      x29, sp, #0x70
000FA6E0 3f100071 cmp      w1, #4
000FA6E4 a21c0054 b.hs     #0xfaa78
000FA6E8 f40303aa mov      x20, x3
000FA6EC ff3300b9 str      wzr, [sp, #0x30]
000FA6F0 ff2700f9 str      xzr, [sp, #0x48]
000FA6F4 ff7f02a9 stp      xzr, xzr, [sp, #0x20]
000FA6F8 ffff03a9 stp      xzr, xzr, [sp, #0x38]
000FA6FC e31b00b4 cbz      x3, #0xfaa78
000FA700 083040f9 ldr      x8, [x0, #0x60]
000FA704 f50300aa mov      x21, x0
000FA708 f303022a mov      w19, w2
000FA70C f903012a mov      w25, w1
000FA710 173140f9 ldr      x23, [x8, #0x60]
000FA714 e80240f9 ldr      x8, [x23]
000FA718 e00317aa mov      x0, x23
000FA71C 080140f9 ldr      x8, [x8]
000FA720 00013fd6 blr      x8
000FA724 f80300aa mov      x24, x0
000FA728 8daefc97 bl       #0x2615c
000FA72C 1f0018eb cmp      x0, x24
000FA730 a0000054 b.eq     #0xfa744
000FA734 180340f9 ldr      x24, [x24]
000FA738 1f0300eb cmp      x24, x0
000FA73C 041b40fa ccmp     x24, #0, #4, ne
000FA740 a1ffff54 b.ne     #0xfa734
000FA744 e0be42f9 ldr      x0, [x23, #0x578]
000FA748 48d199d2 mov      x8, #0xce8a
000FA74C 6807b4f2 movk     x8, #0xa03b, lsl #16
000FA750 a844c9f2 movk     x8, #0x4a25, lsl #32
000FA754 2860eff2 movk     x8, #0x7b01, lsl #48
000FA758 89280090 adrp     x9, #0x60a000
000FA75C 29953491 add      x9, x9, #0xd25
000FA760 a8273ea9 stp      x8, x9, [x29, #-0x20]
000FA764 e8018052 mov      w8, #0xf
000FA768 a18300d1 sub      x1, x29, #0x20
000FA76C a87f3fa9 stp      x8, xzr, [x29, #-0x10]
000FA770 0805fd97 bl       #0x3bb90
000FA774 f70300aa mov      x23, x0
000FA778 a0835ff8 ldur     x0, [x29, #-8]
000FA77C 800000b4 cbz      x0, #0xfa78c
000FA780 088c44f8 ldr      x8, [x0, #0x48]!
000FA784 080d40f9 ldr      x8, [x8, #0x18]
000FA788 00013fd6 blr      x8
000FA78C 28008052 mov      w8, #1
000FA790 96420491 add      x22, x20, #0x110
000FA794 f71300f9 str      x23, [sp, #0x20]
000FA798 e00314aa mov      x0, x20
000FA79C e1031f2a mov      w1, wzr
000FA7A0 e8670529 stp      w8, w25, [sp, #0x28]
000FA7A4 e203132a mov      w2, w19
000FA7A8 f33300b9 str      w19, [sp, #0x30]
000FA7AC f61f00f9 str      x22, [sp, #0x38]
000FA7B0 820dfd97 bl       #0x3ddb8
000FA7B4 e02300f9 str      x0, [sp, #0x40]
000FA7B8 e00314aa mov      x0, x20
000FA7BC c1008052 mov      w1, #6
000FA7C0 e203132a mov      w2, w19
000FA7C4 7d0dfd97 bl       #0x3ddb8
000FA7C8 a94240f9 ldr      x9, [x21, #0x80]
000FA7CC e02700f9 str      x0, [sp, #0x48]
000FA7D0 283500f0 adrp     x8, #0x7a1000
000FA7D4 360500f9 str      x22, [x9, #8]
000FA7D8 088540f9 ldr      x8, [x8, #0x108]
000FA7DC 1c0140f9 ldr      x28, [x8]
000FA7E0 dc1400b4 cbz      x28, #0xfaa78
000FA7E4 983b40f9 ldr      x24, [x28, #0x70]
000FA7E8 981400b4 cbz      x24, #0xfaa78
000FA7EC 964b41f9 ldr      x22, [x28, #0x290]
000FA7F0 e90300f9 str      x9, [sp]
000FA7F4 361400b4 cbz      x22, #0xfaa78
000FA7F8 fb0316aa mov      x27, x22
000FA7FC f903192a mov      w25, w25
000FA800 fa830091 add      x26, sp, #0x20
000FA804 688f44f8 ldr      x8, [x27, #0x48]!
000FA808 080940f9 ldr      x8, [x8, #0x10]
000FA80C e0031baa mov      x0, x27
000FA810 00013fd6 blr      x8
000FA814 680340f9 ldr      x8, [x27]
000FA818 e0031baa mov      x0, x27
000FA81C f60f00f9 str      x22, [sp, #0x18]
000FA820 080940f9 ldr      x8, [x8, #0x10]
000FA824 00013fd6 blr      x8
000FA828 82930291 add      x2, x28, #0xa4
000FA82C e1630091 add      x1, sp, #0x18
000FA830 e00318aa mov      x0, x24
000FA834 e3031f2a mov      w3, wzr
000FA838 9e5bfe97 bl       #0x916b0
000FA83C e00f40f9 ldr      x0, [sp, #0x18]
000FA840 a00000b4 cbz      x0, #0xfa854
000FA844 088c44f8 ldr      x8, [x0, #0x48]!
000FA848 080d40f9 ldr      x8, [x8, #0x18]
000FA84C 00013fd6 blr      x8
000FA850 ff0f00f9 str      xzr, [sp, #0x18]
000FA854 bc0a198b add      x28, x21, x25, lsl #2
000FA858 58830091 add      x24, x26, #0x20
000FA85C fa3340b9 ldr      w26, [sp, #0x30]
000FA860 e00317aa mov      x0, x23
000FA864 888f4ab8 ldr      w8, [x28, #0xa8]!
000FA868 e1031a2a mov      w1, w26
000FA86C 1f010071 cmp      w8, #0
000FA870 19119f5a csinv    w25, w8, wzr, ne
000FA874 5d0dfd97 bl       #0x3dde8
000FA878 e82b40b9 ldr      w8, [sp, #0x28]
000FA87C 68030034 cbz      w8, #0xfa8e8
000FA880 e00317aa mov      x0, x23
000FA884 e1031f2a mov      w1, wzr
000FA888 e2031a2a mov      w2, w26
000FA88C 340efd97 bl       #0x3e15c
000FA890 a85240f9 ldr      x8, [x21, #0xa0]
000FA894 173140f9 ldr      x23, [x8, #0x60]
000FA898 770300b4 cbz      x23, #0xfa904
000FA89C fa0317aa mov      x26, x23
000FA8A0 488f44f8 ldr      x8, [x26, #0x48]!
000FA8A4 e0031aaa mov      x0, x26
000FA8A8 080940f9 ldr      x8, [x8, #0x10]
000FA8AC 00013fd6 blr      x8
000FA8B0 3f070031 cmn      w25, #1
000FA8B4 60050054 b.eq     #0xfa960
000FA8B8 a8a88fd2 mov      x8, #0x7d45
000FA8BC 687fb0f2 movk     x8, #0x83fb, lsl #16
000FA8C0 ba4240f9 ldr      x26, [x21, #0x80]
000FA8C4 88e8c8f2 movk     x8, #0x4744, lsl #32
000FA8C8 68f8eff2 movk     x8, #0x7fc3, lsl #48
000FA8CC f70700f9 str      x23, [sp, #8]
000FA8D0 e00317aa mov      x0, x23
000FA8D4 a8031ef8 stur     x8, [x29, #-0x20]
000FA8D8 088c44f8 ldr      x8, [x0, #0x48]!
000FA8DC 080940f9 ldr      x8, [x8, #0x10]
000FA8E0 00013fd6 blr      x8
000FA8E4 11000014 b        #0xfa928
000FA8E8 e00317aa mov      x0, x23
000FA8EC e1031f2a mov      w1, wzr
000FA8F0 e2031a2a mov      w2, w26
000FA8F4 de0dfd97 bl       #0x3e06c
000FA8F8 a85240f9 ldr      x8, [x21, #0xa0]
000FA8FC 173140f9 ldr      x23, [x8, #0x60]
000FA900 f7fcffb5 cbnz     x23, #0xfa89c
000FA904 3f070031 cmn      w25, #1
000FA908 40040054 b.eq     #0xfa990
000FA90C ba4240f9 ldr      x26, [x21, #0x80]
000FA910 a8a88fd2 mov      x8, #0x7d45
000FA914 687fb0f2 movk     x8, #0x83fb, lsl #16
000FA918 88e8c8f2 movk     x8, #0x4744, lsl #32
000FA91C 68f8eff2 movk     x8, #0x7fc3, lsl #48
000FA920 f70700f9 str      x23, [sp, #8]
000FA924 a8031ef8 stur     x8, [x29, #-0x20]
000FA928 e2230091 add      x2, sp, #8
000FA92C a38300d1 sub      x3, x29, #0x20
000FA930 e0031aaa mov      x0, x26
000FA934 e10318aa mov      x1, x24
000FA938 e4031f2a mov      w4, wzr
000FA93C e503192a mov      w5, w25
000FA940 e1c7fe97 bl       #0xac8c4
000FA944 f60340a9 ldp      x22, x0, [sp]
000FA948 a00400b4 cbz      x0, #0xfa9dc
000FA94C 088c44f8 ldr      x8, [x0, #0x48]!
000FA950 080d40f9 ldr      x8, [x8, #0x18]
000FA954 00013fd6 blr      x8
000FA958 ff0700f9 str      xzr, [sp, #8]
000FA95C 20000014 b        #0xfa9dc
000FA960 a8a19dd2 mov      x8, #0xed0d
000FA964 c8a7a7f2 movk     x8, #0x3d3e, lsl #16
000FA968 b94240f9 ldr      x25, [x21, #0x80]
000FA96C 680ccdf2 movk     x8, #0x6863, lsl #32
000FA970 4824faf2 movk     x8, #0xd122, lsl #48
000FA974 f70b00f9 str      x23, [sp, #0x10]
000FA978 a8031ef8 stur     x8, [x29, #-0x20]
000FA97C e82640f9 ldr      x8, [x23, #0x48]
000FA980 e0031aaa mov      x0, x26
000FA984 080940f9 ldr      x8, [x8, #0x10]
000FA988 00013fd6 blr      x8
000FA98C 08000014 b        #0xfa9ac
000FA990 b94240f9 ldr      x25, [x21, #0x80]
000FA994 a8a19dd2 mov      x8, #0xed0d
000FA998 c8a7a7f2 movk     x8, #0x3d3e, lsl #16
000FA99C 680ccdf2 movk     x8, #0x6863, lsl #32
000FA9A0 4824faf2 movk     x8, #0xd122, lsl #48
000FA9A4 ff0b00f9 str      xzr, [sp, #0x10]
000FA9A8 a8031ef8 stur     x8, [x29, #-0x20]
000FA9AC e2430091 add      x2, sp, #0x10
000FA9B0 a38300d1 sub      x3, x29, #0x20
000FA9B4 e00319aa mov      x0, x25
000FA9B8 e10318aa mov      x1, x24
000FA9BC 10c6fe97 bl       #0xac1fc
000FA9C0 e00b40f9 ldr      x0, [sp, #0x10]
000FA9C4 f60340f9 ldr      x22, [sp]
000FA9C8 a00000b4 cbz      x0, #0xfa9dc
000FA9CC 088c44f8 ldr      x8, [x0, #0x48]!
000FA9D0 080d40f9 ldr      x8, [x8, #0x18]
000FA9D4 00013fd6 blr      x8
000FA9D8 ff0b00f9 str      xzr, [sp, #0x10]
000FA9DC a87a40b9 ldr      w8, [x21, #0x78]
000FA9E0 88010035 cbnz     w8, #0xfaa10
000FA9E4 a8e240b9 ldr      w8, [x21, #0xe0]
000FA9E8 1f050031 cmn      w8, #1
000FA9EC 21010054 b.ne     #0xfaa10
000FA9F0 35008052 mov      w21, #1
000FA9F4 e00314aa mov      x0, x20
000FA9F8 e103132a mov      w1, w19
000FA9FC fd0dfd97 bl       #0x3e1f0
000FAA00 e103152a mov      w1, w21
000FAA04 b09a0694 bl       #0x2a14c4
000FAA08 770100b5 cbnz     x23, #0xfaa34
000FAA0C 0e000014 b        #0xfaa44
000FAA10 880340b9 ldr      w8, [x28]
000FAA14 1f010071 cmp      w8, #0
000FAA18 f5079f1a cset     w21, ne
000FAA1C e00314aa mov      x0, x20
000FAA20 e103132a mov      w1, w19
000FAA24 f30dfd97 bl       #0x3e1f0
000FAA28 e103152a mov      w1, w21
000FAA2C a69a0694 bl       #0x2a14c4
000FAA30 b70000b4 cbz      x23, #0xfaa44
000FAA34 e88e44f8 ldr      x8, [x23, #0x48]!
000FAA38 e00317aa mov      x0, x23
000FAA3C 080d40f9 ldr      x8, [x8, #0x18]
000FAA40 00013fd6 blr      x8
000FAA44 680340f9 ldr      x8, [x27]
000FAA48 e0031baa mov      x0, x27
000FAA4C 080d40f9 ldr      x8, [x8, #0x18]
000FAA50 00013fd6 blr      x8
000FAA54 df0600f9 str      xzr, [x22, #8]
000FAA58 f44f4ca9 ldp      x20, x19, [sp, #0xc0]
000FAA5C f6574ba9 ldp      x22, x21, [sp, #0xb0]
000FAA60 f85f4aa9 ldp      x24, x23, [sp, #0xa0]
000FAA64 fa6749a9 ldp      x26, x25, [sp, #0x90]
000FAA68 fc6f48a9 ldp      x28, x27, [sp, #0x80]
000FAA6C fd7b47a9 ldp      x29, x30, [sp, #0x70]
000FAA70 ff430391 add      sp, sp, #0xd0
000FAA74 c0035fd6 ret      
000FAA78 32ee1394 bl       #0x5f6340
~~~
### 0xfaa7c (44 slots)
~~~asm
000FAA7C ff0301d1 sub      sp, sp, #0x40
000FAA80 fd7b02a9 stp      x29, x30, [sp, #0x20]
000FAA84 f44f03a9 stp      x20, x19, [sp, #0x30]
000FAA88 fd830091 add      x29, sp, #0x20
000FAA8C 3f100071 cmp      w1, #4
000FAA90 c2040054 b.hs     #0xfab28
000FAA94 0848218b add      x8, x0, w1, uxtw #2
000FAA98 f30300aa mov      x19, x0
000FAA9C 08a940b9 ldr      w8, [x8, #0xa8]
000FAAA0 a8030034 cbz      w8, #0xfab14
000FAAA4 745240f9 ldr      x20, [x19, #0xa0]
000FAAA8 e80300b9 str      w8, [sp]
000FAAAC b40000b4 cbz      x20, #0xfaac0
000FAAB0 e00314aa mov      x0, x20
000FAAB4 088c44f8 ldr      x8, [x0, #0x48]!
000FAAB8 080940f9 ldr      x8, [x8, #0x10]
000FAABC 00013fd6 blr      x8
000FAAC0 f40700f9 str      x20, [sp, #8]
000FAAC4 48370090 adrp     x8, #0x7e2000
000FAAC8 08010291 add      x8, x8, #0x80
000FAACC 080140f9 ldr      x8, [x8]
000FAAD0 c80200b4 cbz      x8, #0xfab28
000FAAD4 e80b00f9 str      x8, [sp, #0x10]
000FAAD8 08c941f9 ldr      x8, [x8, #0x390]
000FAADC 680200b4 cbz      x8, #0xfab28
000FAAE0 606e40f9 ldr      x0, [x19, #0xd8]
000FAAE4 e1030091 mov      x1, sp
000FAAE8 e80f00f9 str      x8, [sp, #0x18]
000FAAEC 7812fd97 bl       #0x3f4cc
000FAAF0 e00740f9 ldr      x0, [sp, #8]
000FAAF4 800000b4 cbz      x0, #0xfab04
000FAAF8 088c44f8 ldr      x8, [x0, #0x48]!
000FAAFC 080d40f9 ldr      x8, [x8, #0x18]
000FAB00 00013fd6 blr      x8
000FAB04 f44f43a9 ldp      x20, x19, [sp, #0x30]
000FAB08 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000FAB0C ff030191 add      sp, sp, #0x40
000FAB10 c0035fd6 ret      
000FAB14 606e40f9 ldr      x0, [x19, #0xd8]
000FAB18 f44f43a9 ldp      x20, x19, [sp, #0x30]
000FAB1C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000FAB20 ff030191 add      sp, sp, #0x40
000FAB24 4612fd17 b        #0x3f43c
000FAB28 06ee1394 bl       #0x5f6340
~~~
### 0xfaba8 (390 slots)
~~~asm
000FABA8 ffc302d1 sub      sp, sp, #0xb0
000FABAC fd7b05a9 stp      x29, x30, [sp, #0x50]
000FABB0 fb3300f9 str      x27, [sp, #0x60]
000FABB4 fa6707a9 stp      x26, x25, [sp, #0x70]
000FABB8 f85f08a9 stp      x24, x23, [sp, #0x80]
000FABBC f65709a9 stp      x22, x21, [sp, #0x90]
000FABC0 f44f0aa9 stp      x20, x19, [sp, #0xa0]
000FABC4 fd430191 add      x29, sp, #0x50
000FABC8 48370090 adrp     x8, #0x7e2000
000FABCC 08010291 add      x8, x8, #0x80
000FABD0 1b0140f9 ldr      x27, [x8]
000FABD4 5b2f00b4 cbz      x27, #0xfb1bc
000FABD8 763b40f9 ldr      x22, [x27, #0x70]
000FABDC 162f00b4 cbz      x22, #0xfb1bc
000FABE0 754b41f9 ldr      x21, [x27, #0x290]
000FABE4 d52e00b4 cbz      x21, #0xfb1bc
000FABE8 f30315aa mov      x19, x21
000FABEC f70300aa mov      x23, x0
000FABF0 688e44f8 ldr      x8, [x19, #0x48]!
000FABF4 e00313aa mov      x0, x19
000FABF8 080940f9 ldr      x8, [x8, #0x10]
000FABFC 00013fd6 blr      x8
000FAC00 680240f9 ldr      x8, [x19]
000FAC04 e00313aa mov      x0, x19
000FAC08 b50f00f9 str      x21, [x29, #0x18]
000FAC0C 080940f9 ldr      x8, [x8, #0x10]
000FAC10 00013fd6 blr      x8
000FAC14 74930291 add      x20, x27, #0xa4
000FAC18 a1630091 add      x1, x29, #0x18
000FAC1C e00316aa mov      x0, x22
000FAC20 e20314aa mov      x2, x20
000FAC24 e3031f2a mov      w3, wzr
000FAC28 a25afe97 bl       #0x916b0
000FAC2C a00f40f9 ldr      x0, [x29, #0x18]
000FAC30 a00000b4 cbz      x0, #0xfac44
000FAC34 088c44f8 ldr      x8, [x0, #0x48]!
000FAC38 080d40f9 ldr      x8, [x8, #0x18]
000FAC3C 00013fd6 blr      x8
000FAC40 bf0f00f9 str      xzr, [x29, #0x18]
000FAC44 e00315aa mov      x0, x21
000FAC48 b92e0494 bl       #0x20672c
000FAC4C fa03002a mov      w26, w0
000FAC50 191c0012 and      w25, w0, #0xff
000FAC54 e00315aa mov      x0, x21
000FAC58 db2f0494 bl       #0x206bc4
000FAC5C 59020034 cbz      w25, #0xfaca4
000FAC60 e1031f2a mov      w1, wzr
000FAC64 f80300aa mov      x24, x0
000FAC68 1be01094 bl       #0x532cd4
000FAC6C f90317aa mov      x25, x23
000FAC70 288f4ab8 ldr      w8, [x25, #0xa8]!
000FAC74 1f00086b cmp      w0, w8
000FAC78 41060054 b.ne     #0xfad40
000FAC7C 481f0012 and      w8, w26, #0xff
000FAC80 1f090071 cmp      w8, #2
000FAC84 83020054 b.lo     #0xfacd4
000FAC88 e00318aa mov      x0, x24
000FAC8C 21008052 mov      w1, #1
000FAC90 11e01094 bl       #0x532cd4
000FAC94 e8ae40b9 ldr      w8, [x23, #0xac]
000FAC98 1f00086b cmp      w0, w8
000FAC9C 40020054 b.eq     #0xface4
000FACA0 28000014 b        #0xfad40
000FACA4 f90317aa mov      x25, x23
000FACA8 288f4ab8 ldr      w8, [x25, #0xa8]!
000FACAC a8040035 cbnz     w8, #0xfad40
000FACB0 280740b9 ldr      w8, [x25, #4]
000FACB4 68040035 cbnz     w8, #0xfad40
000FACB8 280b40b9 ldr      w8, [x25, #8]
000FACBC 28040035 cbnz     w8, #0xfad40
000FACC0 e0031f2a mov      w0, wzr
000FACC4 e8b640b9 ldr      w8, [x23, #0xb4]
000FACC8 ff03086b cmp      wzr, w8
000FACCC a1030054 b.ne     #0xfad40
000FACD0 2f010014 b        #0xfb18c
000FACD4 e0031f2a mov      w0, wzr
000FACD8 e8ae40b9 ldr      w8, [x23, #0xac]
000FACDC ff03086b cmp      wzr, w8
000FACE0 01030054 b.ne     #0xfad40
000FACE4 481f0012 and      w8, w26, #0xff
000FACE8 1f0d0071 cmp      w8, #3
000FACEC 03010054 b.lo     #0xfad0c
000FACF0 e00318aa mov      x0, x24
000FACF4 41008052 mov      w1, #2
000FACF8 f7df1094 bl       #0x532cd4
000FACFC e8b240b9 ldr      w8, [x23, #0xb0]
000FAD00 1f00086b cmp      w0, w8
000FAD04 c0000054 b.eq     #0xfad1c
000FAD08 0e000014 b        #0xfad40
000FAD0C e0031f2a mov      w0, wzr
000FAD10 e8b240b9 ldr      w8, [x23, #0xb0]
000FAD14 ff03086b cmp      wzr, w8
000FAD18 41010054 b.ne     #0xfad40
000FAD1C 481f0012 and      w8, w26, #0xff
000FAD20 1f110071 cmp      w8, #4
000FAD24 e3fcff54 b.lo     #0xfacc0
000FAD28 e00318aa mov      x0, x24
000FAD2C 61008052 mov      w1, #3
000FAD30 e9df1094 bl       #0x532cd4
000FAD34 e8b640b9 ldr      w8, [x23, #0xb4]
000FAD38 1f00086b cmp      w0, w8
000FAD3C 80220054 b.eq     #0xfb18c
000FAD40 e00316aa mov      x0, x22
000FAD44 e10314aa mov      x1, x20
000FAD48 e20319aa mov      x2, x25
000FAD4C 9762fe97 bl       #0x937a8
000FAD50 02000012 and      w2, w0, #1
000FAD54 e00316aa mov      x0, x22
000FAD58 e10314aa mov      x1, x20
000FAD5C d063fe97 bl       #0x93c9c
000FAD60 a82640f9 ldr      x8, [x21, #0x48]
000FAD64 e00313aa mov      x0, x19
000FAD68 b5831ff8 stur     x21, [x29, #-8]
000FAD6C 080940f9 ldr      x8, [x8, #0x10]
000FAD70 00013fd6 blr      x8
000FAD74 a12300d1 sub      x1, x29, #8
000FAD78 e20314aa mov      x2, x20
000FAD7C eb010094 bl       #0xfb528
000FAD80 a82640f9 ldr      x8, [x21, #0x48]
000FAD84 fa03002a mov      w26, w0
000FAD88 e00313aa mov      x0, x19
000FAD8C 080d40f9 ldr      x8, [x8, #0x18]
000FAD90 00013fd6 blr      x8
000FAD94 e00315aa mov      x0, x21
000FAD98 bf831ff8 stur     xzr, [x29, #-8]
000FAD9C 8a2f0494 bl       #0x206bc4
000FADA0 f80300aa mov      x24, x0
000FADA4 ba000036 tbz      w26, #0, #0xfadb8
000FADA8 e00316aa mov      x0, x22
000FADAC e10314aa mov      x1, x20
000FADB0 22008052 mov      w2, #1
000FADB4 1564fe97 bl       #0x93e08
000FADB8 e2630091 add      x2, sp, #0x18
000FADBC e00316aa mov      x0, x22
000FADC0 e10314aa mov      x1, x20
000FADC4 ffff03a9 stp      xzr, xzr, [sp, #0x38]
000FADC8 ffff02a9 stp      xzr, xzr, [sp, #0x28]
000FADCC ffff01a9 stp      xzr, xzr, [sp, #0x18]
000FADD0 ba62fe97 bl       #0x938b8
000FADD4 220340b9 ldr      w2, [x25]
000FADD8 e81b40b9 ldr      w8, [sp, #0x18]
000FADDC 5f00086b cmp      w2, w8
000FADE0 61000054 b.ne     #0xfadec
000FADE4 f9031f2a mov      w25, wzr
000FADE8 0f000014 b        #0xfae24
000FADEC e82740b9 ldr      w8, [sp, #0x24]
000FADF0 5f00086b cmp      w2, w8
000FADF4 61000054 b.ne     #0xfae00
000FADF8 39008052 mov      w25, #1
000FADFC 0a000014 b        #0xfae24
000FAE00 e83340b9 ldr      w8, [sp, #0x30]
000FAE04 5f00086b cmp      w2, w8
000FAE08 61000054 b.ne     #0xfae14
000FAE0C 59008052 mov      w25, #2
000FAE10 05000014 b        #0xfae24
000FAE14 e83f40b9 ldr      w8, [sp, #0x3c]
000FAE18 5f00086b cmp      w2, w8
000FAE1C 21030054 b.ne     #0xfae80
000FAE20 79008052 mov      w25, #3
000FAE24 a82640f9 ldr      x8, [x21, #0x48]
000FAE28 e00313aa mov      x0, x19
000FAE2C f50b00f9 str      x21, [sp, #0x10]
000FAE30 080940f9 ldr      x8, [x8, #0x10]
000FAE34 00013fd6 blr      x8
000FAE38 e1430091 add      x1, sp, #0x10
000FAE3C e00316aa mov      x0, x22
000FAE40 e20314aa mov      x2, x20
000FAE44 e3031f2a mov      w3, wzr
000FAE48 e403192a mov      w4, w25
000FAE4C c962fe97 bl       #0x93970
000FAE50 e00b40f9 ldr      x0, [sp, #0x10]
000FAE54 a00000b4 cbz      x0, #0xfae68
000FAE58 088c44f8 ldr      x8, [x0, #0x48]!
000FAE5C 080d40f9 ldr      x8, [x8, #0x18]
000FAE60 00013fd6 blr      x8
000FAE64 ff0b00f9 str      xzr, [sp, #0x10]
000FAE68 e2ae40b9 ldr      w2, [x23, #0xac]
000FAE6C e81b40b9 ldr      w8, [sp, #0x18]
000FAE70 5f00086b cmp      w2, w8
000FAE74 41010054 b.ne     #0xfae9c
000FAE78 f9031f2a mov      w25, wzr
000FAE7C 16000014 b        #0xfaed4
000FAE80 e00318aa mov      x0, x24
000FAE84 e1031f2a mov      w1, wzr
000FAE88 1fe11094 bl       #0x533304
000FAE8C e2ae40b9 ldr      w2, [x23, #0xac]
000FAE90 e81b40b9 ldr      w8, [sp, #0x18]
000FAE94 5f00086b cmp      w2, w8
000FAE98 00ffff54 b.eq     #0xfae78
000FAE9C e82740b9 ldr      w8, [sp, #0x24]
000FAEA0 5f00086b cmp      w2, w8
000FAEA4 61000054 b.ne     #0xfaeb0
000FAEA8 39008052 mov      w25, #1
000FAEAC 0a000014 b        #0xfaed4
000FAEB0 e83340b9 ldr      w8, [sp, #0x30]
000FAEB4 5f00086b cmp      w2, w8
000FAEB8 61000054 b.ne     #0xfaec4
000FAEBC 59008052 mov      w25, #2
000FAEC0 05000014 b        #0xfaed4
000FAEC4 e83f40b9 ldr      w8, [sp, #0x3c]
000FAEC8 5f00086b cmp      w2, w8
000FAECC 21030054 b.ne     #0xfaf30
000FAED0 79008052 mov      w25, #3
000FAED4 a82640f9 ldr      x8, [x21, #0x48]
000FAED8 e00313aa mov      x0, x19
000FAEDC f50b00f9 str      x21, [sp, #0x10]
000FAEE0 080940f9 ldr      x8, [x8, #0x10]
000FAEE4 00013fd6 blr      x8
000FAEE8 e1430091 add      x1, sp, #0x10
000FAEEC e00316aa mov      x0, x22
000FAEF0 e20314aa mov      x2, x20
000FAEF4 23008052 mov      w3, #1
000FAEF8 e403192a mov      w4, w25
000FAEFC 9d62fe97 bl       #0x93970
000FAF00 e00b40f9 ldr      x0, [sp, #0x10]
000FAF04 a00000b4 cbz      x0, #0xfaf18
000FAF08 088c44f8 ldr      x8, [x0, #0x48]!
000FAF0C 080d40f9 ldr      x8, [x8, #0x18]
000FAF10 00013fd6 blr      x8
000FAF14 ff0b00f9 str      xzr, [sp, #0x10]
000FAF18 e2b240b9 ldr      w2, [x23, #0xb0]
000FAF1C e81b40b9 ldr      w8, [sp, #0x18]
000FAF20 5f00086b cmp      w2, w8
000FAF24 41010054 b.ne     #0xfaf4c
000FAF28 f9031f2a mov      w25, wzr
000FAF2C 16000014 b        #0xfaf84
000FAF30 e00318aa mov      x0, x24
000FAF34 21008052 mov      w1, #1
000FAF38 f3e01094 bl       #0x533304
000FAF3C e2b240b9 ldr      w2, [x23, #0xb0]
000FAF40 e81b40b9 ldr      w8, [sp, #0x18]
000FAF44 5f00086b cmp      w2, w8
000FAF48 00ffff54 b.eq     #0xfaf28
000FAF4C e82740b9 ldr      w8, [sp, #0x24]
000FAF50 5f00086b cmp      w2, w8
000FAF54 61000054 b.ne     #0xfaf60
000FAF58 39008052 mov      w25, #1
000FAF5C 0a000014 b        #0xfaf84
000FAF60 e83340b9 ldr      w8, [sp, #0x30]
000FAF64 5f00086b cmp      w2, w8
000FAF68 61000054 b.ne     #0xfaf74
000FAF6C 59008052 mov      w25, #2
000FAF70 05000014 b        #0xfaf84
000FAF74 e83f40b9 ldr      w8, [sp, #0x3c]
000FAF78 5f00086b cmp      w2, w8
000FAF7C 21030054 b.ne     #0xfafe0
000FAF80 79008052 mov      w25, #3
000FAF84 a82640f9 ldr      x8, [x21, #0x48]
000FAF88 e00313aa mov      x0, x19
000FAF8C f50b00f9 str      x21, [sp, #0x10]
000FAF90 080940f9 ldr      x8, [x8, #0x10]
000FAF94 00013fd6 blr      x8
000FAF98 e1430091 add      x1, sp, #0x10
000FAF9C e00316aa mov      x0, x22
000FAFA0 e20314aa mov      x2, x20
000FAFA4 43008052 mov      w3, #2
000FAFA8 e403192a mov      w4, w25
000FAFAC 7162fe97 bl       #0x93970
000FAFB0 e00b40f9 ldr      x0, [sp, #0x10]
000FAFB4 a00000b4 cbz      x0, #0xfafc8
000FAFB8 088c44f8 ldr      x8, [x0, #0x48]!
000FAFBC 080d40f9 ldr      x8, [x8, #0x18]
000FAFC0 00013fd6 blr      x8
000FAFC4 ff0b00f9 str      xzr, [sp, #0x10]
000FAFC8 e2b640b9 ldr      w2, [x23, #0xb4]
000FAFCC e81b40b9 ldr      w8, [sp, #0x18]
000FAFD0 5f00086b cmp      w2, w8
000FAFD4 41010054 b.ne     #0xfaffc
000FAFD8 f7031f2a mov      w23, wzr
000FAFDC 16000014 b        #0xfb034
000FAFE0 e00318aa mov      x0, x24
000FAFE4 41008052 mov      w1, #2
000FAFE8 c7e01094 bl       #0x533304
000FAFEC e2b640b9 ldr      w2, [x23, #0xb4]
000FAFF0 e81b40b9 ldr      w8, [sp, #0x18]
000FAFF4 5f00086b cmp      w2, w8
000FAFF8 00ffff54 b.eq     #0xfafd8
000FAFFC e82740b9 ldr      w8, [sp, #0x24]
000FB000 5f00086b cmp      w2, w8
000FB004 61000054 b.ne     #0xfb010
000FB008 37008052 mov      w23, #1
000FB00C 0a000014 b        #0xfb034
000FB010 e83340b9 ldr      w8, [sp, #0x30]
000FB014 5f00086b cmp      w2, w8
000FB018 61000054 b.ne     #0xfb024
000FB01C 57008052 mov      w23, #2
000FB020 05000014 b        #0xfb034
000FB024 e83f40b9 ldr      w8, [sp, #0x3c]
000FB028 5f00086b cmp      w2, w8
000FB02C a1040054 b.ne     #0xfb0c0
000FB030 77008052 mov      w23, #3
000FB034 a82640f9 ldr      x8, [x21, #0x48]
000FB038 e00313aa mov      x0, x19
000FB03C f50b00f9 str      x21, [sp, #0x10]
000FB040 080940f9 ldr      x8, [x8, #0x10]
000FB044 00013fd6 blr      x8
000FB048 e1430091 add      x1, sp, #0x10
000FB04C e00316aa mov      x0, x22
000FB050 e20314aa mov      x2, x20
000FB054 63008052 mov      w3, #3
000FB058 e403172a mov      w4, w23
000FB05C 4562fe97 bl       #0x93970
000FB060 e00b40f9 ldr      x0, [sp, #0x10]
000FB064 a00000b4 cbz      x0, #0xfb078
000FB068 088c44f8 ldr      x8, [x0, #0x48]!
000FB06C 080d40f9 ldr      x8, [x8, #0x18]
000FB070 00013fd6 blr      x8
000FB074 ff0b00f9 str      xzr, [sp, #0x10]
000FB078 283700d0 adrp     x8, #0x7e1000
000FB07C 08811691 add      x8, x8, #0x5a0
000FB080 080140f9 ldr      x8, [x8]
000FB084 174140f9 ldr      x23, [x8, #0x80]
000FB088 d70200b4 cbz      x23, #0xfb0e0
000FB08C f90317aa mov      x25, x23
000FB090 288f44f8 ldr      x8, [x25, #0x48]!
000FB094 e00319aa mov      x0, x25
000FB098 080940f9 ldr      x8, [x8, #0x10]
000FB09C 00013fd6 blr      x8
000FB0A0 e00317aa mov      x0, x23
000FB0A4 e10318aa mov      x1, x24
000FB0A8 fa290094 bl       #0x105890
000FB0AC 280340f9 ldr      x8, [x25]
000FB0B0 e00319aa mov      x0, x25
000FB0B4 080d40f9 ldr      x8, [x8, #0x18]
000FB0B8 00013fd6 blr      x8
000FB0BC 0c000014 b        #0xfb0ec
000FB0C0 e00318aa mov      x0, x24
000FB0C4 61008052 mov      w1, #3
000FB0C8 8fe01094 bl       #0x533304
000FB0CC 283700d0 adrp     x8, #0x7e1000
000FB0D0 08811691 add      x8, x8, #0x5a0
000FB0D4 080140f9 ldr      x8, [x8]
000FB0D8 174140f9 ldr      x23, [x8, #0x80]
000FB0DC 97fdffb5 cbnz     x23, #0xfb08c
000FB0E0 e0031faa mov      x0, xzr
000FB0E4 e10318aa mov      x1, x24
000FB0E8 ea290094 bl       #0x105890
000FB0EC a82640f9 ldr      x8, [x21, #0x48]
000FB0F0 e00313aa mov      x0, x19
000FB0F4 f50700f9 str      x21, [sp, #8]
000FB0F8 080940f9 ldr      x8, [x8, #0x10]
000FB0FC 00013fd6 blr      x8
000FB100 e1230091 add      x1, sp, #8
000FB104 e00316aa mov      x0, x22
000FB108 e20314aa mov      x2, x20
000FB10C 23008052 mov      w3, #1
000FB110 3168fe97 bl       #0x951d4
000FB114 e00740f9 ldr      x0, [sp, #8]
000FB118 a00000b4 cbz      x0, #0xfb12c
000FB11C 088c44f8 ldr      x8, [x0, #0x48]!
000FB120 080d40f9 ldr      x8, [x8, #0x18]
000FB124 00013fd6 blr      x8
000FB128 ff0700f9 str      xzr, [sp, #8]
000FB12C 68cb41f9 ldr      x8, [x27, #0x390]
000FB130 680400b4 cbz      x8, #0xfb1bc
000FB134 168d43f9 ldr      x22, [x8, #0x718]
000FB138 360400b4 cbz      x22, #0xfb1bc
000FB13C e00315aa mov      x0, x21
000FB140 94340494 bl       #0x208390
000FB144 1f080071 cmp      w0, #2
000FB148 a2030054 b.hs     #0xfb1bc
000FB14C 1f040071 cmp      w0, #1
000FB150 e8079f1a cset     w8, ne
000FB154 c816088b add      x8, x22, x8, lsl #5
000FB158 003540f9 ldr      x0, [x8, #0x68]
000FB15C 000300b4 cbz      x0, #0xfb1bc
000FB160 620f5629 ldp      w2, w3, [x27, #0xb0]
000FB164 21008052 mov      w1, #1
000FB168 ce04ff97 bl       #0xbc4a0
000FB16C 68cb41f9 ldr      x8, [x27, #0x390]
000FB170 680200b4 cbz      x8, #0xfb1bc
000FB174 088d43f9 ldr      x8, [x8, #0x718]
000FB178 280200b4 cbz      x8, #0xfb1bc
000FB17C 002540f9 ldr      x0, [x8, #0x48]
000FB180 e00100b4 cbz      x0, #0xfb1bc
000FB184 e10314aa mov      x1, x20
000FB188 c0c8fe97 bl       #0xad488
000FB18C 680240f9 ldr      x8, [x19]
000FB190 e00313aa mov      x0, x19
000FB194 080d40f9 ldr      x8, [x8, #0x18]
000FB198 00013fd6 blr      x8
000FB19C f44f4aa9 ldp      x20, x19, [sp, #0xa0]
000FB1A0 fb3340f9 ldr      x27, [sp, #0x60]
000FB1A4 f65749a9 ldp      x22, x21, [sp, #0x90]
000FB1A8 f85f48a9 ldp      x24, x23, [sp, #0x80]
000FB1AC fa6747a9 ldp      x26, x25, [sp, #0x70]
000FB1B0 fd7b45a9 ldp      x29, x30, [sp, #0x50]
000FB1B4 ffc30291 add      sp, sp, #0xb0
000FB1B8 c0035fd6 ret      
000FB1BC 61ec1394 bl       #0x5f6340
~~~
### 0xfb43c (59 slots)
~~~asm
000FB43C ff0301d1 sub      sp, sp, #0x40
000FB440 fd7b02a9 stp      x29, x30, [sp, #0x20]
000FB444 f44f03a9 stp      x20, x19, [sp, #0x30]
000FB448 fd830091 add      x29, sp, #0x20
000FB44C 3f100071 cmp      w1, #4
000FB450 a2060054 b.hs     #0xfb524
000FB454 08e040b9 ldr      w8, [x0, #0xe0]
000FB458 f30300aa mov      x19, x0
000FB45C 1f110071 cmp      w8, #4
000FB460 22060054 b.hs     #0xfb524
000FB464 69a20291 add      x9, x19, #0xa8
000FB468 08f57ed3 lsl      x8, x8, #2
000FB46C 3449218b add      x20, x9, w1, uxtw #2
000FB470 2a6968b8 ldr      w10, [x9, x8]
000FB474 8b0240b9 ldr      w11, [x20]
000FB478 2b6928b8 str      w11, [x9, x8]
000FB47C 8a0200b9 str      w10, [x20]
000FB480 61e240b9 ldr      w1, [x19, #0xe0]
000FB484 3f040031 cmn      w1, #1
000FB488 80000054 b.eq     #0xfb498
000FB48C 606a40f9 ldr      x0, [x19, #0xd0]
000FB490 e2031f2a mov      w2, wzr
000FB494 7d0bfd97 bl       #0x3e288
000FB498 606a40f9 ldr      x0, [x19, #0xd0]
000FB49C 08008012 mov      w8, #-1
000FB4A0 68e200b9 str      w8, [x19, #0xe0]
000FB4A4 d509fd97 bl       #0x3dbf8
000FB4A8 880240b9 ldr      w8, [x20]
000FB4AC e80300b9 str      w8, [sp]
000FB4B0 745240f9 ldr      x20, [x19, #0xa0]
000FB4B4 b40000b4 cbz      x20, #0xfb4c8
000FB4B8 e00314aa mov      x0, x20
000FB4BC 088c44f8 ldr      x8, [x0, #0x48]!
000FB4C0 080940f9 ldr      x8, [x8, #0x10]
000FB4C4 00013fd6 blr      x8
000FB4C8 f40700f9 str      x20, [sp, #8]
000FB4CC 283700f0 adrp     x8, #0x7e2000
000FB4D0 08010291 add      x8, x8, #0x80
000FB4D4 080140f9 ldr      x8, [x8]
000FB4D8 680200b4 cbz      x8, #0xfb524
000FB4DC e80b00f9 str      x8, [sp, #0x10]
000FB4E0 08c941f9 ldr      x8, [x8, #0x390]
000FB4E4 080200b4 cbz      x8, #0xfb524
000FB4E8 606e40f9 ldr      x0, [x19, #0xd8]
000FB4EC e1030091 mov      x1, sp
000FB4F0 e80f00f9 str      x8, [sp, #0x18]
000FB4F4 f60ffd97 bl       #0x3f4cc
000FB4F8 e00740f9 ldr      x0, [sp, #8]
000FB4FC 800000b4 cbz      x0, #0xfb50c
000FB500 088c44f8 ldr      x8, [x0, #0x48]!
000FB504 080d40f9 ldr      x8, [x8, #0x18]
000FB508 00013fd6 blr      x8
000FB50C 606a40f9 ldr      x0, [x19, #0xd0]
000FB510 ba09fd97 bl       #0x3dbf8
000FB514 f44f43a9 ldp      x20, x19, [sp, #0x30]
000FB518 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000FB51C ff030191 add      sp, sp, #0x40
000FB520 c0035fd6 ret      
000FB524 87eb1394 bl       #0x5f6340
~~~
### 0xfb528 (61 slots)
~~~asm
000FB528 ff0301d1 sub      sp, sp, #0x40
000FB52C fd7b01a9 stp      x29, x30, [sp, #0x10]
000FB530 f65702a9 stp      x22, x21, [sp, #0x20]
000FB534 f44f03a9 stp      x20, x19, [sp, #0x30]
000FB538 fd430091 add      x29, sp, #0x10
000FB53C 283700f0 adrp     x8, #0x7e2000
000FB540 08010291 add      x8, x8, #0x80
000FB544 080140f9 ldr      x8, [x8]
000FB548 880600b4 cbz      x8, #0xfb618
000FB54C 163940f9 ldr      x22, [x8, #0x70]
000FB550 560600b4 cbz      x22, #0xfb618
000FB554 e00316aa mov      x0, x22
000FB558 f50302aa mov      x21, x2
000FB55C f40301aa mov      x20, x1
000FB560 9a5ffe97 bl       #0x933c8
000FB564 f303002a mov      w19, w0
000FB568 800240f9 ldr      x0, [x20]
000FB56C e00700f9 str      x0, [sp, #8]
000FB570 800000b4 cbz      x0, #0xfb580
000FB574 088c44f8 ldr      x8, [x0, #0x48]!
000FB578 080940f9 ldr      x8, [x8, #0x10]
000FB57C 00013fd6 blr      x8
000FB580 e1230091 add      x1, sp, #8
000FB584 e00316aa mov      x0, x22
000FB588 e20315aa mov      x2, x21
000FB58C b464fe97 bl       #0x9485c
000FB590 e00740f9 ldr      x0, [sp, #8]
000FB594 a00000b4 cbz      x0, #0xfb5a8
000FB598 088c44f8 ldr      x8, [x0, #0x48]!
000FB59C 080d40f9 ldr      x8, [x8, #0x18]
000FB5A0 00013fd6 blr      x8
000FB5A4 ff0700f9 str      xzr, [sp, #8]
000FB5A8 800240f9 ldr      x0, [x20]
000FB5AC 862d0494 bl       #0x206bc4
000FB5B0 f50300aa mov      x21, x0
000FB5B4 800240f9 ldr      x0, [x20]
000FB5B8 e103132a mov      w1, w19
000FB5BC 0b2d0494 bl       #0x2069e8
000FB5C0 f403002a mov      w20, w0
000FB5C4 f50300f9 str      x21, [sp]
000FB5C8 b50000b4 cbz      x21, #0xfb5dc
000FB5CC a88e44f8 ldr      x8, [x21, #0x48]!
000FB5D0 e00315aa mov      x0, x21
000FB5D4 080940f9 ldr      x8, [x8, #0x10]
000FB5D8 00013fd6 blr      x8
000FB5DC e0030091 mov      x0, sp
000FB5E0 e103132a mov      w1, w19
000FB5E4 82041094 bl       #0x4fc7ec
000FB5E8 e00340f9 ldr      x0, [sp]
000FB5EC 800000b4 cbz      x0, #0xfb5fc
000FB5F0 088c44f8 ldr      x8, [x0, #0x48]!
000FB5F4 080d40f9 ldr      x8, [x8, #0x18]
000FB5F8 00013fd6 blr      x8
000FB5FC 28008052 mov      w8, #1
000FB600 f65742a9 ldp      x22, x21, [sp, #0x20]
000FB604 0001340a bic      w0, w8, w20
000FB608 f44f43a9 ldp      x20, x19, [sp, #0x30]
000FB60C fd7b41a9 ldp      x29, x30, [sp, #0x10]
000FB610 ff030191 add      sp, sp, #0x40
000FB614 c0035fd6 ret      
000FB618 4aeb1394 bl       #0x5f6340
~~~
### 0xfb6f0 (229 slots)
~~~asm
000FB6F0 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
000FB6F4 fc6f01a9 stp      x28, x27, [sp, #0x10]
000FB6F8 fd030091 mov      x29, sp
000FB6FC fa6702a9 stp      x26, x25, [sp, #0x20]
000FB700 f85f03a9 stp      x24, x23, [sp, #0x30]
000FB704 f65704a9 stp      x22, x21, [sp, #0x40]
000FB708 f44f05a9 stp      x20, x19, [sp, #0x50]
000FB70C ff0740d1 sub      sp, sp, #1, lsl #12
000FB710 ff0334d1 sub      sp, sp, #0xd00
000FB714 283700f0 adrp     x8, #0x7e2000
000FB718 08010291 add      x8, x8, #0x80
000FB71C 080140f9 ldr      x8, [x8]
000FB720 081b00b4 cbz      x8, #0xfba80
000FB724 093940f9 ldr      x9, [x8, #0x70]
000FB728 c91a00b4 cbz      x9, #0xfba80
000FB72C 164941f9 ldr      x22, [x8, #0x290]
000FB730 e9a301a9 stp      x9, x8, [sp, #0x18]
000FB734 761a00b4 cbz      x22, #0xfba80
000FB738 08a04091 add      x8, x0, #0x28, lsl #12
000FB73C f50316aa mov      x21, x22
000FB740 f30300aa mov      x19, x0
000FB744 18d12491 add      x24, x8, #0x934
000FB748 08904091 add      x8, x0, #0x24, lsl #12
000FB74C 09b10491 add      x9, x8, #0x12c
000FB750 087c4091 add      x8, x0, #0x1f, lsl #12
000FB754 08912491 add      x8, x8, #0x924
000FB758 e8a700a9 stp      x8, x9, [sp, #8]
000FB75C 086c4091 add      x8, x0, #0x1b, lsl #12
000FB760 891e8952 mov      w9, #0x48f4
000FB764 1c710491 add      x28, x8, #0x11c
000FB768 08584091 add      x8, x0, #0x16, lsl #12
000FB76C 1b00098b add      x27, x0, x9
000FB770 14512491 add      x20, x8, #0x914
000FB774 08484091 add      x8, x0, #0x12, lsl #12
000FB778 17310491 add      x23, x8, #0x10c
000FB77C 88209b52 mov      w8, #0xd904
000FB780 1900088b add      x25, x0, x8
000FB784 881f9252 mov      w8, #0x90fc
000FB788 1a00088b add      x26, x0, x8
000FB78C a88e44f8 ldr      x8, [x21, #0x48]!
000FB790 080940f9 ldr      x8, [x8, #0x10]
000FB794 e00315aa mov      x0, x21
000FB798 00013fd6 blr      x8
000FB79C e00f40f9 ldr      x0, [sp, #0x18]
000FB7A0 0a5ffe97 bl       #0x933c8
000FB7A4 a80240f9 ldr      x8, [x21]
000FB7A8 e00700b9 str      w0, [sp, #4]
000FB7AC e00315aa mov      x0, x21
000FB7B0 b6031ff8 stur     x22, [x29, #-0x10]
000FB7B4 080940f9 ldr      x8, [x8, #0x10]
000FB7B8 00013fd6 blr      x8
000FB7BC e81340f9 ldr      x8, [sp, #0x20]
000FB7C0 a14300d1 sub      x1, x29, #0x10
000FB7C4 02910291 add      x2, x8, #0xa4
000FB7C8 58ffff97 bl       #0xfb528
000FB7CC a80240f9 ldr      x8, [x21]
000FB7D0 e00315aa mov      x0, x21
000FB7D4 f50f00f9 str      x21, [sp, #0x18]
000FB7D8 080d40f9 ldr      x8, [x8, #0x18]
000FB7DC 00013fd6 blr      x8
000FB7E0 e00316aa mov      x0, x22
000FB7E4 f82c0494 bl       #0x206bc4
000FB7E8 e20740b9 ldr      w2, [sp, #4]
000FB7EC 76c20391 add      x22, x19, #0xf0
000FB7F0 e10300aa mov      x1, x0
000FB7F4 e00316aa mov      x0, x22
000FB7F8 1e041094 bl       #0x4fc870
000FB7FC e80740f9 ldr      x8, [sp, #8]
000FB800 7fbe1db9 str      wzr, [x19, #0x1dbc]
000FB804 7f262cb9 str      wzr, [x19, #0x2c24]
000FB808 7f8e3ab9 str      wzr, [x19, #0x3a8c]
000FB80C 7f0300b9 str      wzr, [x27]
000FB810 7f6b0eb9 str      wzr, [x27, #0xe68]
000FB814 7fd31cb9 str      wzr, [x27, #0x1cd0]
000FB818 7f3b2bb9 str      wzr, [x27, #0x2b38]
000FB81C 7fa339b9 str      wzr, [x27, #0x39a0]
000FB820 5f0300b9 str      wzr, [x26]
000FB824 5f6b0eb9 str      wzr, [x26, #0xe68]
000FB828 5fd31cb9 str      wzr, [x26, #0x1cd0]
000FB82C 1f0100b9 str      wzr, [x8]
000FB830 1f690eb9 str      wzr, [x8, #0xe68]
000FB834 1fd11cb9 str      wzr, [x8, #0x1cd0]
000FB838 1f392bb9 str      wzr, [x8, #0x2b38]
000FB83C 1fa139b9 str      wzr, [x8, #0x39a0]
000FB840 e80b40f9 ldr      x8, [sp, #0x10]
000FB844 5f3b2bb9 str      wzr, [x26, #0x2b38]
000FB848 5fa339b9 str      wzr, [x26, #0x39a0]
000FB84C 3f0300b9 str      wzr, [x25]
000FB850 3f6b0eb9 str      wzr, [x25, #0xe68]
000FB854 3fd31cb9 str      wzr, [x25, #0x1cd0]
000FB858 3f3b2bb9 str      wzr, [x25, #0x2b38]
000FB85C 1f0100b9 str      wzr, [x8]
000FB860 1f690eb9 str      wzr, [x8, #0xe68]
000FB864 1fd11cb9 str      wzr, [x8, #0x1cd0]
000FB868 1f392bb9 str      wzr, [x8, #0x2b38]
000FB86C 1fa139b9 str      wzr, [x8, #0x39a0]
000FB870 e81340f9 ldr      x8, [sp, #0x20]
000FB874 3fa339b9 str      wzr, [x25, #0x39a0]
000FB878 ff0200b9 str      wzr, [x23]
000FB87C ff6a0eb9 str      wzr, [x23, #0xe68]
000FB880 ffd21cb9 str      wzr, [x23, #0x1cd0]
000FB884 ff3a2bb9 str      wzr, [x23, #0x2b38]
000FB888 ffa239b9 str      wzr, [x23, #0x39a0]
000FB88C 9f0200b9 str      wzr, [x20]
000FB890 9f6a0eb9 str      wzr, [x20, #0xe68]
000FB894 9fd21cb9 str      wzr, [x20, #0x1cd0]
000FB898 9f3a2bb9 str      wzr, [x20, #0x2b38]
000FB89C 9fa239b9 str      wzr, [x20, #0x39a0]
000FB8A0 9f0300b9 str      wzr, [x28]
000FB8A4 9f6b0eb9 str      wzr, [x28, #0xe68]
000FB8A8 9fd31cb9 str      wzr, [x28, #0x1cd0]
000FB8AC 9f3b2bb9 str      wzr, [x28, #0x2b38]
000FB8B0 9fa339b9 str      wzr, [x28, #0x39a0]
000FB8B4 1f0300b9 str      wzr, [x24]
000FB8B8 1f6b0eb9 str      wzr, [x24, #0xe68]
000FB8BC 1fd31cb9 str      wzr, [x24, #0x1cd0]
000FB8C0 1f3b2bb9 str      wzr, [x24, #0x2b38]
000FB8C4 1fa339b9 str      wzr, [x24, #0x39a0]
000FB8C8 152d41f9 ldr      x21, [x8, #0x258]
000FB8CC b50000b4 cbz      x21, #0xfb8e0
000FB8D0 a8de41f9 ldr      x8, [x21, #0x3b8]
000FB8D4 a0e20e91 add      x0, x21, #0x3b8
000FB8D8 080940f9 ldr      x8, [x8, #0x10]
000FB8DC 00013fd6 blr      x8
000FB8E0 74564fb9 ldr      w20, [x19, #0xf54]
000FB8E4 d4050034 cbz      w20, #0xfb99c
000FB8E8 68ae4091 add      x8, x19, #0x2b, lsl #12
000FB8EC f9031faa mov      x25, xzr
000FB8F0 1bcd8152 mov      w27, #0xe68
000FB8F4 1ac11191 add      x26, x8, #0x470
000FB8F8 05000014 b        #0xfb90c
000FB8FC 1f2003d5 nop      
000FB900 39070091 add      x25, x25, #1
000FB904 9f0219eb cmp      x20, x25
000FB908 a0040054 b.eq     #0xfb99c
000FB90C 3f630ef1 cmp      x25, #0x398
000FB910 08010054 b.hi     #0xfb930
000FB914 d77a79b8 ldr      w23, [x22, x25, lsl #2]
000FB918 68aa40b9 ldr      w8, [x19, #0xa8]
000FB91C ff02086b cmp      w23, w8
000FB920 01010054 b.ne     #0xfb940
000FB924 f7ffff17 b        #0xfb900
000FB928 1f2003d5 nop      
000FB92C 1f2003d5 nop      
000FB930 f7031f2a mov      w23, wzr
000FB934 68aa40b9 ldr      w8, [x19, #0xa8]
000FB938 ff03086b cmp      wzr, w8
000FB93C 20feff54 b.eq     #0xfb900
000FB940 68ae40b9 ldr      w8, [x19, #0xac]
000FB944 ff02086b cmp      w23, w8
000FB948 c0fdff54 b.eq     #0xfb900
000FB94C 68b240b9 ldr      w8, [x19, #0xb0]
000FB950 ff02086b cmp      w23, w8
000FB954 60fdff54 b.eq     #0xfb900
000FB958 68b640b9 ldr      w8, [x19, #0xb4]
000FB95C ff02086b cmp      w23, w8
000FB960 00fdff54 b.eq     #0xfb900
000FB964 e00315aa mov      x0, x21
000FB968 e103172a mov      w1, w23
000FB96C 5c520794 bl       #0x2d02dc
000FB970 084cbb9b umaddl   x8, w0, w27, x19
000FB974 09bd5db9 ldr      w9, [x8, #0x1dbc]
000FB978 0a09098b add      x10, x8, x9, lsl #2
000FB97C 29050011 add      w9, w9, #1
000FB980 09bd1db9 str      w9, [x8, #0x1dbc]
000FB984 57590fb9 str      w23, [x10, #0xf58]
000FB988 08a379b9 ldr      w8, [x24, #0x39a0]
000FB98C 09050011 add      w9, w8, #1
000FB990 09a339b9 str      w9, [x24, #0x39a0]
000FB994 577b28b8 str      w23, [x26, x8, lsl #2]
000FB998 daffff17 b        #0xfb900
000FB99C 82cc8152 mov      w2, #0xe64
000FB9A0 e0333a91 add      x0, sp, #0xe8c
000FB9A4 e1031f2a mov      w1, wzr
000FB9A8 f4333a91 add      x20, sp, #0xe8c
000FB9AC e9e91394 bl       #0x5f6150
000FB9B0 e00315aa mov      x0, x21
000FB9B4 47520794 bl       #0x2d02d0
000FB9B8 40010034 cbz      w0, #0xfb9e0
000FB9BC f603002a mov      w22, w0
000FB9C0 f7031f2a mov      w23, wzr
000FB9C4 e00315aa mov      x0, x21
000FB9C8 e103172a mov      w1, w23
000FB9CC 39520794 bl       #0x2d02b0
000FB9D0 975a20b8 str      w23, [x20, w0, uxtw #2]
000FB9D4 f7060011 add      w23, w23, #1
000FB9D8 df02176b cmp      w22, w23
000FB9DC 41ffff54 b.ne     #0xfb9c4
000FB9E0 76623d91 add      x22, x19, #0xf58
000FB9E4 f4058052 mov      w20, #0x2f
000FB9E8 97cc8152 mov      w23, #0xe64
000FB9EC d80f8052 mov      w24, #0x7e
000FB9F0 d9664eb9 ldr      w25, [x22, #0xe64]
000FB9F4 e0a30091 add      x0, sp, #0x28
000FB9F8 e1333a91 add      x1, sp, #0xe8c
000FB9FC e20317aa mov      x2, x23
000FBA00 f8ea1394 bl       #0x5f65e0
000FBA04 2813c0da clz      x8, x25
000FBA08 c10a198b add      x1, x22, x25, lsl #2
000FBA0C 3f030071 cmp      w25, #0
000FBA10 080708cb sub      x8, x24, x8, lsl #1
000FBA14 e2a30091 add      x2, sp, #0x28
000FBA18 e00316aa mov      x0, x22
000FBA1C 24008052 mov      w4, #1
000FBA20 e303889a csel     x3, xzr, x8, eq
000FBA24 db0e0094 bl       #0xff590
000FBA28 d6a23991 add      x22, x22, #0xe68
000FBA2C 940600f1 subs     x20, x20, #1
000FBA30 01feff54 b.ne     #0xfb9f0
000FBA34 e00313aa mov      x0, x19
000FBA38 62020094 bl       #0xfc3c0
000FBA3C a8de41f9 ldr      x8, [x21, #0x3b8]
000FBA40 a0e20e91 add      x0, x21, #0x3b8
000FBA44 080d40f9 ldr      x8, [x8, #0x18]
000FBA48 00013fd6 blr      x8
000FBA4C e00f40f9 ldr      x0, [sp, #0x18]
000FBA50 080040f9 ldr      x8, [x0]
000FBA54 080d40f9 ldr      x8, [x8, #0x18]
000FBA58 00013fd6 blr      x8
000FBA5C ff074091 add      sp, sp, #1, lsl #12
000FBA60 ff033491 add      sp, sp, #0xd00
000FBA64 f44f45a9 ldp      x20, x19, [sp, #0x50]
000FBA68 f65744a9 ldp      x22, x21, [sp, #0x40]
000FBA6C f85f43a9 ldp      x24, x23, [sp, #0x30]
000FBA70 fa6742a9 ldp      x26, x25, [sp, #0x20]
000FBA74 fc6f41a9 ldp      x28, x27, [sp, #0x10]
000FBA78 fd7bc6a8 ldp      x29, x30, [sp], #0x60
000FBA7C c0035fd6 ret      
000FBA80 30ea1394 bl       #0x5f6340
~~~
### 0x4d87d4 (20 slots)
~~~asm
004D87D4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
004D87D8 f44f01a9 stp      x20, x19, [sp, #0x10]
004D87DC fd030091 mov      x29, sp
004D87E0 28008052 mov      w8, #1
004D87E4 f30300aa mov      x19, x0
004D87E8 08800139 strb     w8, [x0, #0x60]
004D87EC 003440f9 ldr      x0, [x0, #0x68]
004D87F0 f40301aa mov      x20, x1
004D87F4 a00000b4 cbz      x0, #0x4d8808
004D87F8 088c44f8 ldr      x8, [x0, #0x48]!
004D87FC 080d40f9 ldr      x8, [x8, #0x18]
004D8800 00013fd6 blr      x8
004D8804 7f3600f9 str      xzr, [x19, #0x68]
004D8808 880240f9 ldr      x8, [x20]
004D880C 9f0200f9 str      xzr, [x20]
004D8810 7f8a0139 strb     wzr, [x19, #0x62]
004D8814 683600f9 str      x8, [x19, #0x68]
004D8818 f44f41a9 ldp      x20, x19, [sp, #0x10]
004D881C fd7bc2a8 ldp      x29, x30, [sp], #0x20
004D8820 c0035fd6 ret      
~~~
