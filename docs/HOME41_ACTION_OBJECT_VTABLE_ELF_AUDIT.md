# HOME41 action 4/7 and root exit objects

SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
Static evidence only. Table windows are constructor-derived; no UI semantics assumed.

## Constructor-derived VTable windows

### action4
| group | offset | slot | raw | relocation | executable target |
|---|---|---|---|---|---|
| primary | 0x0 | 0x76e658 | 0x256f4 | RELR | 0x256f4 |
| primary | 0x8 | 0x76e660 | 0xe18f4 | RELR | 0xe18f4 |
| primary | 0x10 | 0x76e668 | 0x1029c | RELR | 0x1029c |
| primary | 0x18 | 0x76e670 | 0x102b8 | RELR | 0x102b8 |
| primary | 0x20 | 0x76e678 | 0x10310 | RELR | 0x10310 |
| primary | 0x28 | 0x76e680 | 0x10360 | RELR | 0x10360 |
| primary | 0x30 | 0x76e688 | 0x25938 | RELR | 0x25938 |
| primary | 0x38 | 0x76e690 | 0xe1450 | RELR | 0xe1450 |
| primary | 0x40 | 0x76e698 | 0xe15c0 | RELR | 0xe15c0 |
| primary | 0x48 | 0x76e6a0 | 0xe1750 | RELR | 0xe1750 |
| primary | 0x50 | 0x76e6a8 | 0x2594c | RELR | 0x2594c |
| ref48 | 0x0 | 0x76e6c0 | 0xe18f8 | RELR | 0xe18f8 |
| ref48 | 0x8 | 0x76e6c8 | 0xe1900 | RELR | 0xe1900 |
| ref48 | 0x10 | 0x76e6d0 | 0x10440 | RELR | 0x10440 |
| ref48 | 0x18 | 0x76e6d8 | 0x10490 | RELR | 0x10490 |
| ref48 | 0x20 | 0x76e6e0 | 0x104c8 | RELR | 0x104c8 |
| ref48 | 0x28 | 0x76e6e8 | 0x25954 | RELR | 0x25954 |
| interface50 | 0x0 | 0x76e700 | 0x25958 | RELR | 0x25958 |
| interface50 | 0x8 | 0x76e708 | 0xe1908 | RELR | 0xe1908 |
| interface50 | 0x10 | 0x76e710 | 0xe1910 | RELR | 0xe1910 |

### action7
| group | offset | slot | raw | relocation | executable target |
|---|---|---|---|---|---|
| primary | 0x0 | 0x76e7f8 | 0x256f4 | RELR | 0x256f4 |
| primary | 0x8 | 0x76e800 | 0xe2320 | RELR | 0xe2320 |
| primary | 0x10 | 0x76e808 | 0x1029c | RELR | 0x1029c |
| primary | 0x18 | 0x76e810 | 0x102b8 | RELR | 0x102b8 |
| primary | 0x20 | 0x76e818 | 0x10310 | RELR | 0x10310 |
| primary | 0x28 | 0x76e820 | 0x10360 | RELR | 0x10360 |
| primary | 0x30 | 0x76e828 | 0x25938 | RELR | 0x25938 |
| primary | 0x38 | 0x76e830 | 0xe1f60 | RELR | 0xe1f60 |
| primary | 0x40 | 0x76e838 | 0xe20b0 | RELR | 0xe20b0 |
| primary | 0x48 | 0x76e840 | 0xe2260 | RELR | 0xe2260 |
| primary | 0x50 | 0x76e848 | 0x2594c | RELR | 0x2594c |
| ref48 | 0x0 | 0x76e860 | 0xe2324 | RELR | 0xe2324 |
| ref48 | 0x8 | 0x76e868 | 0xe232c | RELR | 0xe232c |
| ref48 | 0x10 | 0x76e870 | 0x10440 | RELR | 0x10440 |
| ref48 | 0x18 | 0x76e878 | 0x10490 | RELR | 0x10490 |
| ref48 | 0x20 | 0x76e880 | 0x104c8 | RELR | 0x104c8 |
| ref48 | 0x28 | 0x76e888 | 0x25954 | RELR | 0x25954 |
| interface50 | 0x0 | 0x76e8a0 | 0x25958 | RELR | 0x25958 |
| interface50 | 0x8 | 0x76e8a8 | 0xe2334 | RELR | 0xe2334 |
| interface50 | 0x10 | 0x76e8b0 | 0xe233c | RELR | 0xe233c |

## Bounded direct B/BL reachability
Depth 6; at most 600 visited FDEs per root. No indirect call resolution. Missing path is inconclusive.
### 0x1029c action4.primary+0x10, action7.primary+0x10
Visited 1; cap reached: False; sink hits: 0
### 0x102b8 action4.primary+0x18, action7.primary+0x18
Visited 1; cap reached: False; sink hits: 0
### 0x10310 action4.primary+0x20, action7.primary+0x20
Visited 1; cap reached: False; sink hits: 0
### 0x10360 action4.primary+0x28, action7.primary+0x28
Visited 1; cap reached: False; sink hits: 0
### 0x10440 action4.ref48+0x10, action7.ref48+0x10
Visited 1; cap reached: False; sink hits: 0
### 0x10490 action4.ref48+0x18, action7.ref48+0x18
Visited 1; cap reached: False; sink hits: 0
### 0x104c8 action4.ref48+0x20, action7.ref48+0x20
Visited 1; cap reached: False; sink hits: 0
### 0x256f4 action4.primary+0x0, action7.primary+0x0
Visited 1; cap reached: False; sink hits: 0
### 0x25938 action4.primary+0x30, action7.primary+0x30
Visited 2; cap reached: False; sink hits: 0
- direct 0x25938 -> 0x262b0
### 0x2594c action4.primary+0x50, action7.primary+0x50
Visited 1; cap reached: False; sink hits: 0
### 0x25954 action4.ref48+0x28, action7.ref48+0x28
Visited 2; cap reached: False; sink hits: 0
- direct 0x25954 -> 0x262b0
### 0x25958 action4.interface50+0x0, action7.interface50+0x0
Visited 2; cap reached: False; sink hits: 0
- direct 0x25958 -> 0x262b0
### 0x78f48 
path: 0x78f48 --0x79010--> 0x4d87d4
Visited 32; cap reached: False; sink hits: 1
- direct 0x78f6c -> 0x79048
- direct 0x78fec -> 0x6f970
- direct 0x79010 -> 0x4d87d4
### 0x79b08 
path: 0x79b08 --0x79bd0--> 0x4d87d4
Visited 32; cap reached: False; sink hits: 1
- direct 0x79b2c -> 0x79c08
- direct 0x79bac -> 0x6f970
- direct 0x79bd0 -> 0x4d87d4
### 0xe1450 action4.primary+0x38
Visited 42; cap reached: False; sink hits: 0
- direct 0xe1474 -> 0x9fd4
- direct 0xe14b0 -> 0x2615c
- direct 0xe14fc -> 0x8e980
- direct 0xe1534 -> 0x8d6a0
- direct 0xe156c -> 0xc41b8
- direct 0xe1588 -> 0xc4340
- direct 0xe15a4 -> 0xc4240
### 0xe15c0 action4.primary+0x40
Visited 19; cap reached: False; sink hits: 0
- direct 0xe15f4 -> 0x2615c
- direct 0xe163c -> 0x8e980
- direct 0xe167c -> 0x8d6a0
- direct 0xe16dc -> 0xc41c0
- direct 0xe16fc -> 0xc4278
- direct 0xe171c -> 0xc4348
### 0xe1750 action4.primary+0x48
Visited 30; cap reached: False; sink hits: 0
- direct 0xe1784 -> 0x2615c
- direct 0xe17cc -> 0x8e980
- direct 0xe17f4 -> 0x28db0
- direct 0xe181c -> 0x8d6a0
- direct 0xe18a0 -> 0x96fbc
### 0xe18f4 action4.primary+0x8
Visited 2; cap reached: False; sink hits: 0
- direct 0xe18f4 -> 0x256f4
### 0xe18f8 action4.ref48+0x0
Visited 2; cap reached: False; sink hits: 0
- direct 0xe18fc -> 0x256f4
### 0xe1900 action4.ref48+0x8
Visited 2; cap reached: False; sink hits: 0
- direct 0xe1904 -> 0x256f4
### 0xe1908 action4.interface50+0x8
Visited 2; cap reached: False; sink hits: 0
- direct 0xe190c -> 0x256f4
### 0xe1910 action4.interface50+0x10
Visited 2; cap reached: False; sink hits: 0
- direct 0xe1914 -> 0x256f4
### 0xe1f60 action7.primary+0x38
Visited 50; cap reached: False; sink hits: 0
- direct 0xe1f84 -> 0x9fd4
- direct 0xe1fc0 -> 0x2615c
- direct 0xe200c -> 0x8ebb0
- direct 0xe2034 -> 0x28ca0
- direct 0xe2054 -> 0x8d6a0
- direct 0xe2080 -> 0xd6c04
- direct 0xe2098 -> 0xd6d04
### 0xe20b0 action7.primary+0x40
Visited 18; cap reached: False; sink hits: 0
- direct 0xe20e4 -> 0x2615c
- direct 0xe212c -> 0x8ebb0
- direct 0xe216c -> 0x8d6a0
- direct 0xe21a8 -> 0xd6d0c
- direct 0xe21d8 -> 0x8d6a0
- direct 0xe2228 -> 0xd6c3c
### 0xe2260 action7.primary+0x48
Visited 29; cap reached: False; sink hits: 0
- direct 0xe228c -> 0x2615c
- direct 0xe22dc -> 0x8ebb0
- direct 0xe2304 -> 0x28db0
- direct 0xe230c -> 0xd6efc
### 0xe2320 action7.primary+0x8
Visited 2; cap reached: False; sink hits: 0
- direct 0xe2320 -> 0x256f4
### 0xe2324 action7.ref48+0x0
Visited 2; cap reached: False; sink hits: 0
- direct 0xe2328 -> 0x256f4
### 0xe232c action7.ref48+0x8
Visited 2; cap reached: False; sink hits: 0
- direct 0xe2330 -> 0x256f4
### 0xe2334 action7.interface50+0x8
Visited 2; cap reached: False; sink hits: 0
- direct 0xe2338 -> 0x256f4
### 0xe233c action7.interface50+0x10
Visited 2; cap reached: False; sink hits: 0
- direct 0xe2340 -> 0x256f4

## Function bodies
### 0x9fd4 (98 slots)
~~~asm
00009FD4 ffc300d1 sub      sp, sp, #0x30
00009FD8 fd7b01a9 stp      x29, x30, [sp, #0x10]
00009FDC f44f02a9 stp      x20, x19, [sp, #0x20]
00009FE0 fd430091 add      x29, sp, #0x10
00009FE4 1f0000f9 str      xzr, [x0]
00009FE8 f30300aa mov      x19, x0
00009FEC 28004039 ldrb     w8, [x1]
00009FF0 28020034 cbz      w8, #0xa034
00009FF4 a83c00d0 adrp     x8, #0x79f000
00009FF8 08f141f9 ldr      x8, [x8, #0x3e0]
00009FFC 000140f9 ldr      x0, [x8]
0000A000 e8230091 add      x8, sp, #8
0000A004 437d1394 bl       #0x4e9510
0000A008 600240f9 ldr      x0, [x19]
0000A00C 800000b4 cbz      x0, #0xa01c
0000A010 088c44f8 ldr      x8, [x0, #0x48]!
0000A014 080d40f9 ldr      x8, [x8, #0x18]
0000A018 00013fd6 blr      x8
0000A01C e80740f9 ldr      x8, [sp, #8]
0000A020 680200f9 str      x8, [x19]
0000A024 f44f42a9 ldp      x20, x19, [sp, #0x20]
0000A028 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0000A02C ffc30091 add      sp, sp, #0x30
0000A030 c0035fd6 ret      
0000A034 a83c00b0 adrp     x8, #0x79f000
0000A038 b43c00b0 adrp     x20, #0x79f000
0000A03C 08a943f9 ldr      x8, [x8, #0x750]
0000A040 08fddf08 ldarb    w8, [x8]
0000A044 94ae43f9 ldr      x20, [x20, #0x758]
0000A048 c8010036 tbz      w8, #0, #0xa080
0000A04C e00314aa mov      x0, x20
0000A050 088c44f8 ldr      x8, [x0, #0x48]!
0000A054 080940f9 ldr      x8, [x8, #0x10]
0000A058 00013fd6 blr      x8
0000A05C 600240f9 ldr      x0, [x19]
0000A060 740200f9 str      x20, [x19]
0000A064 00feffb4 cbz      x0, #0xa024
0000A068 088c44f8 ldr      x8, [x0, #0x48]!
0000A06C 010d40f9 ldr      x1, [x8, #0x18]
0000A070 f44f42a9 ldp      x20, x19, [sp, #0x20]
0000A074 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0000A078 ffc30091 add      sp, sp, #0x30
0000A07C 20001fd6 br       x1
0000A080 a03c00b0 adrp     x0, #0x79f000
0000A084 00a843f9 ldr      x0, [x0, #0x750]
0000A088 52b01794 bl       #0x5f61d0
0000A08C 00feff34 cbz      w0, #0xa04c
0000A090 9f1e00f9 str      xzr, [x20, #0x38]
0000A094 a93c00b0 adrp     x9, #0x79f000
0000A098 294943f9 ldr      x9, [x9, #0x690]
0000A09C 9f4200b9 str      wzr, [x20, #0x40]
0000A0A0 48d03bd5 mrs      x8, tpidr_el0
0000A0A4 08c973f2 ands     x8, x8, #-0x2000
0000A0A8 9f7e01a9 stp      xzr, xzr, [x20, #0x10]
0000A0AC 29410091 add      x9, x9, #0x10
0000A0B0 9f7e02a9 stp      xzr, xzr, [x20, #0x20]
0000A0B4 9f3200b9 str      wzr, [x20, #0x30]
0000A0B8 890200f9 str      x9, [x20]
0000A0BC c0000054 b.eq     #0xa0d4
0000A0C0 094d40f9 ldr      x9, [x8, #0x98]
0000A0C4 a90000b4 cbz      x9, #0xa0d8
0000A0C8 080d098b add      x8, x8, x9, lsl #3
0000A0CC 090940f9 ldr      x9, [x8, #0x10]
0000A0D0 02000014 b        #0xa0d8
0000A0D4 e9031faa mov      x9, xzr
0000A0D8 9f5200b9 str      wzr, [x20, #0x50]
0000A0DC aa3c00b0 adrp     x10, #0x79f000
0000A0E0 a8c884d2 mov      x8, #0x2645
0000A0E4 4884b0f2 movk     x8, #0x8422, lsl #16
0000A0E8 4ab143f9 ldr      x10, [x10, #0x760]
0000A0EC 9f3600f9 str      xzr, [x20, #0x68]
0000A0F0 889cd3f2 movk     x8, #0x9ce4, lsl #32
0000A0F4 487ef9f2 movk     x8, #0xcbf2, lsl #48
0000A0F8 4b410091 add      x11, x10, #0x10
0000A0FC 8b2600a9 stp      x11, x9, [x20]
0000A100 49210191 add      x9, x10, #0x48
0000A104 892600f9 str      x9, [x20, #0x48]
0000A108 a93c00b0 adrp     x9, #0x79f000
0000A10C 29b543f9 ldr      x9, [x9, #0x768]
0000A110 290140f9 ldr      x9, [x9]
0000A114 88a605a9 stp      x8, x9, [x20, #0x58]
0000A118 2b014039 ldrb     w11, [x9]
0000A11C 2b010034 cbz      w11, #0xa140
0000A120 6a3680d2 mov      x10, #0x1b3
0000A124 29050091 add      x9, x9, #1
0000A128 0a20c0f2 movk     x10, #0x100, lsl #32
0000A12C eb030b2a mov      w11, w11
0000A130 08010bca eor      x8, x8, x11
0000A134 087d0a9b mul      x8, x8, x10
0000A138 2b154038 ldrb     w11, [x9], #1
0000A13C 8bffff35 cbnz     w11, #0xa12c
0000A140 882e00f9 str      x8, [x20, #0x58]
0000A144 a03c00b0 adrp     x0, #0x79f000
0000A148 9f3600f9 str      xzr, [x20, #0x68]
0000A14C 9fd200a9 stp      xzr, x20, [x20, #8]
0000A150 00a843f9 ldr      x0, [x0, #0x750]
0000A154 23b01794 bl       #0x5f61e0
0000A158 bdffff17 b        #0xa04c
~~~
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
### 0x24c50 (402 slots)
~~~asm
00024C50 ff4301d1 sub      sp, sp, #0x50
00024C54 fd7b01a9 stp      x29, x30, [sp, #0x10]
00024C58 f85f02a9 stp      x24, x23, [sp, #0x20]
00024C5C f65703a9 stp      x22, x21, [sp, #0x30]
00024C60 f44f04a9 stp      x20, x19, [sp, #0x40]
00024C64 fd430091 add      x29, sp, #0x10
00024C68 f30300aa mov      x19, x0
00024C6C 95f30794 bl       #0x221ac0
00024C70 889a8652 mov      w8, #0x34d4
00024C74 2801a072 movk     w8, #9, lsl #16
00024C78 08686838 ldrb     w8, [x0, x8]
00024C7C 68000034 cbz      w8, #0x24c88
00024C80 28008052 mov      w8, #1
00024C84 68020d39 strb     w8, [x19, #0x340]
00024C88 68c245b9 ldr      w8, [x19, #0x5c0]
00024C8C 7f060d39 strb     wzr, [x19, #0x341]
00024C90 1f110071 cmp      w8, #4
00024C94 20030054 b.eq     #0x24cf8
00024C98 e0031f2a mov      w0, wzr
00024C9C 1f0d0071 cmp      w8, #3
00024CA0 21110054 b.ne     #0x24ec4
00024CA4 680240f9 ldr      x8, [x19]
00024CA8 e00313aa mov      x0, x19
00024CAC e1031faa mov      x1, xzr
00024CB0 096140f9 ldr      x9, [x8, #0xc0]
00024CB4 e8230091 add      x8, sp, #8
00024CB8 20013fd6 blr      x9
00024CBC e00740f9 ldr      x0, [sp, #8]
00024CC0 800000b4 cbz      x0, #0x24cd0
00024CC4 080040f9 ldr      x8, [x0]
00024CC8 081d40f9 ldr      x8, [x8, #0x38]
00024CCC 00013fd6 blr      x8
00024CD0 60c21391 add      x0, x19, #0x4f0
00024CD4 e1230091 add      x1, sp, #8
00024CD8 72010094 bl       #0x252a0
00024CDC e00740f9 ldr      x0, [sp, #8]
00024CE0 88008052 mov      w8, #4
00024CE4 68c205b9 str      w8, [x19, #0x5c0]
00024CE8 800000b4 cbz      x0, #0x24cf8
00024CEC 088c44f8 ldr      x8, [x0, #0x48]!
00024CF0 080d40f9 ldr      x8, [x8, #0x18]
00024CF4 00013fd6 blr      x8
00024CF8 68ea41f9 ldr      x8, [x19, #0x3d0]
00024CFC c80400b4 cbz      x8, #0x24d94
00024D00 69e241f9 ldr      x9, [x19, #0x3c0]
00024D04 2afd46d3 lsr      x10, x9, #6
00024D08 68ae41f9 ldr      x8, [x19, #0x358]
00024D0C 29214092 and      x9, x9, #0x1ff
00024D10 4ad97d92 and      x10, x10, #0x3fffffffffffff8
00024D14 08696af8 ldr      x8, [x8, x10]
00024D18 147969f8 ldr      x20, [x8, x9, lsl #3]
00024D1C 880240f9 ldr      x8, [x20]
00024D20 e00314aa mov      x0, x20
00024D24 082140f9 ldr      x8, [x8, #0x40]
00024D28 00013fd6 blr      x8
00024D2C 802a0036 tbz      w0, #0, #0x2527c
00024D30 880240f9 ldr      x8, [x20]
00024D34 e00314aa mov      x0, x20
00024D38 082540f9 ldr      x8, [x8, #0x48]
00024D3C 00013fd6 blr      x8
00024D40 75e241f9 ldr      x21, [x19, #0x3c0]
00024D44 b4fe49d3 lsr      x20, x21, #9
00024D48 68ae41f9 ldr      x8, [x19, #0x358]
00024D4C b8224092 and      x24, x21, #0x1ff
00024D50 76ea41f9 ldr      x22, [x19, #0x3d0]
00024D54 177974f8 ldr      x23, [x8, x20, lsl #3]
00024D58 e07a78f8 ldr      x0, [x23, x24, lsl #3]
00024D5C a00600b4 cbz      x0, #0x24e30
00024D60 088c44f8 ldr      x8, [x0, #0x48]!
00024D64 080d40f9 ldr      x8, [x8, #0x18]
00024D68 00013fd6 blr      x8
00024D6C ff7a38f8 str      xzr, [x23, x24, lsl #3]
00024D70 69ea41f9 ldr      x9, [x19, #0x3d0]
00024D74 68e241f9 ldr      x8, [x19, #0x3c0]
00024D78 290500d1 sub      x9, x9, #1
00024D7C 08050091 add      x8, x8, #1
00024D80 69ea01f9 str      x9, [x19, #0x3d0]
00024D84 c90209eb subs     x9, x22, x9
00024D88 68e201f9 str      x8, [x19, #0x3c0]
00024D8C 21060054 b.ne     #0x24e50
00024D90 3c000014 b        #0x24e80
00024D94 685242f9 ldr      x8, [x19, #0x4a0]
00024D98 a80e00b4 cbz      x8, #0x24f6c
00024D9C 694a42f9 ldr      x9, [x19, #0x490]
00024DA0 2afd46d3 lsr      x10, x9, #6
00024DA4 681642f9 ldr      x8, [x19, #0x428]
00024DA8 29214092 and      x9, x9, #0x1ff
00024DAC 4ad97d92 and      x10, x10, #0x3fffffffffffff8
00024DB0 08696af8 ldr      x8, [x8, x10]
00024DB4 147969f8 ldr      x20, [x8, x9, lsl #3]
00024DB8 880240f9 ldr      x8, [x20]
00024DBC e00314aa mov      x0, x20
00024DC0 082140f9 ldr      x8, [x8, #0x40]
00024DC4 00013fd6 blr      x8
00024DC8 200d0036 tbz      w0, #0, #0x24f6c
00024DCC 880240f9 ldr      x8, [x20]
00024DD0 e00314aa mov      x0, x20
00024DD4 082540f9 ldr      x8, [x8, #0x48]
00024DD8 00013fd6 blr      x8
00024DDC 754a42f9 ldr      x21, [x19, #0x490]
00024DE0 b4fe49d3 lsr      x20, x21, #9
00024DE4 681642f9 ldr      x8, [x19, #0x428]
00024DE8 b8224092 and      x24, x21, #0x1ff
00024DEC 765242f9 ldr      x22, [x19, #0x4a0]
00024DF0 177974f8 ldr      x23, [x8, x20, lsl #3]
00024DF4 e07a78f8 ldr      x0, [x23, x24, lsl #3]
00024DF8 200700b4 cbz      x0, #0x24edc
00024DFC 088c44f8 ldr      x8, [x0, #0x48]!
00024E00 080d40f9 ldr      x8, [x8, #0x18]
00024E04 00013fd6 blr      x8
00024E08 ff7a38f8 str      xzr, [x23, x24, lsl #3]
00024E0C 695242f9 ldr      x9, [x19, #0x4a0]
00024E10 684a42f9 ldr      x8, [x19, #0x490]
00024E14 290500d1 sub      x9, x9, #1
00024E18 08050091 add      x8, x8, #1
00024E1C 695202f9 str      x9, [x19, #0x4a0]
00024E20 c90209eb subs     x9, x22, x9
00024E24 684a02f9 str      x8, [x19, #0x490]
00024E28 a1060054 b.ne     #0x24efc
00024E2C 40000014 b        #0x24f2c
00024E30 e80315aa mov      x8, x21
00024E34 e90316aa mov      x9, x22
00024E38 c90600d1 sub      x9, x22, #1
00024E3C a8060091 add      x8, x21, #1
00024E40 69ea01f9 str      x9, [x19, #0x3d0]
00024E44 c90209eb subs     x9, x22, x9
00024E48 68e201f9 str      x8, [x19, #0x3c0]
00024E4C a0010054 b.eq     #0x24e80
00024E50 2a01158b add      x10, x9, x21
00024E54 49fd49d3 lsr      x9, x10, #9
00024E58 9f0209eb cmp      x20, x9
00024E5C 28010054 b.hi     #0x24e80
00024E60 4a214092 and      x10, x10, #0x1ff
00024E64 ea0000b4 cbz      x10, #0x24e80
00024E68 6aae41f9 ldr      x10, [x19, #0x358]
00024E6C 490d098b add      x9, x10, x9, lsl #3
00024E70 4a0d148b add      x10, x10, x20, lsl #3
00024E74 4a210091 add      x10, x10, #8
00024E78 5f0109eb cmp      x10, x9
00024E7C c9ffff54 b.ls     #0x24e74
00024E80 1f0110f1 cmp      x8, #0x400
00024E84 c31f0054 b.lo     #0x2527c
00024E88 68ae41f9 ldr      x8, [x19, #0x358]
00024E8C 02008252 mov      w2, #0x1000
00024E90 03018052 mov      w3, #8
00024E94 60f241f9 ldr      x0, [x19, #0x3e0]
00024E98 010140f9 ldr      x1, [x8]
00024E9C 080040f9 ldr      x8, [x0]
00024EA0 080d40f9 ldr      x8, [x8, #0x18]
00024EA4 00013fd6 blr      x8
00024EA8 68ae41f9 ldr      x8, [x19, #0x358]
00024EAC e0031f2a mov      w0, wzr
00024EB0 08210091 add      x8, x8, #8
00024EB4 68ae01f9 str      x8, [x19, #0x358]
00024EB8 68e241f9 ldr      x8, [x19, #0x3c0]
00024EBC 080108d1 sub      x8, x8, #0x200
00024EC0 68e201f9 str      x8, [x19, #0x3c0]
00024EC4 f44f44a9 ldp      x20, x19, [sp, #0x40]
00024EC8 f65743a9 ldp      x22, x21, [sp, #0x30]
00024ECC f85f42a9 ldp      x24, x23, [sp, #0x20]
00024ED0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00024ED4 ff430191 add      sp, sp, #0x50
00024ED8 c0035fd6 ret      
00024EDC e80315aa mov      x8, x21
00024EE0 e90316aa mov      x9, x22
00024EE4 c90600d1 sub      x9, x22, #1
00024EE8 a8060091 add      x8, x21, #1
00024EEC 695202f9 str      x9, [x19, #0x4a0]
00024EF0 c90209eb subs     x9, x22, x9
00024EF4 684a02f9 str      x8, [x19, #0x490]
00024EF8 a0010054 b.eq     #0x24f2c
00024EFC 2a01158b add      x10, x9, x21
00024F00 49fd49d3 lsr      x9, x10, #9
00024F04 9f0209eb cmp      x20, x9
00024F08 28010054 b.hi     #0x24f2c
00024F0C 4a214092 and      x10, x10, #0x1ff
00024F10 ea0000b4 cbz      x10, #0x24f2c
00024F14 6a1642f9 ldr      x10, [x19, #0x428]
00024F18 490d098b add      x9, x10, x9, lsl #3
00024F1C 4a0d148b add      x10, x10, x20, lsl #3
00024F20 4a210091 add      x10, x10, #8
00024F24 5f0109eb cmp      x10, x9
00024F28 c9ffff54 b.ls     #0x24f20
00024F2C 1f0110f1 cmp      x8, #0x400
00024F30 e3010054 b.lo     #0x24f6c
00024F34 681642f9 ldr      x8, [x19, #0x428]
00024F38 02008252 mov      w2, #0x1000
00024F3C 03018052 mov      w3, #8
00024F40 605a42f9 ldr      x0, [x19, #0x4b0]
00024F44 010140f9 ldr      x1, [x8]
00024F48 080040f9 ldr      x8, [x0]
00024F4C 080d40f9 ldr      x8, [x8, #0x18]
00024F50 00013fd6 blr      x8
00024F54 681642f9 ldr      x8, [x19, #0x428]
00024F58 08210091 add      x8, x8, #8
00024F5C 681602f9 str      x8, [x19, #0x428]
00024F60 684a42f9 ldr      x8, [x19, #0x490]
00024F64 080108d1 sub      x8, x8, #0x200
00024F68 684a02f9 str      x8, [x19, #0x490]
00024F6C 68ba42f9 ldr      x8, [x19, #0x570]
00024F70 a80c00b4 cbz      x8, #0x25104
00024F74 69b242f9 ldr      x9, [x19, #0x560]
00024F78 e00313aa mov      x0, x19
00024F7C 2afd46d3 lsr      x10, x9, #6
00024F80 687e42f9 ldr      x8, [x19, #0x4f8]
00024F84 29214092 and      x9, x9, #0x1ff
00024F88 4ad97d92 and      x10, x10, #0x3fffffffffffff8
00024F8C 08696af8 ldr      x8, [x8, x10]
00024F90 147969f8 ldr      x20, [x8, x9, lsl #3]
00024F94 680240f9 ldr      x8, [x19]
00024F98 085940f9 ldr      x8, [x8, #0xb0]
00024F9C 00013fd6 blr      x8
00024FA0 28008052 mov      w8, #1
00024FA4 e00314aa mov      x0, x20
00024FA8 68060d39 strb     w8, [x19, #0x341]
00024FAC 880240f9 ldr      x8, [x20]
00024FB0 082140f9 ldr      x8, [x8, #0x40]
00024FB4 00013fd6 blr      x8
00024FB8 600a0036 tbz      w0, #0, #0x25104
00024FBC 680240f9 ldr      x8, [x19]
00024FC0 e00313aa mov      x0, x19
00024FC4 e10314aa mov      x1, x20
00024FC8 096140f9 ldr      x9, [x8, #0xc0]
00024FCC e8230091 add      x8, sp, #8
00024FD0 20013fd6 blr      x9
00024FD4 880240f9 ldr      x8, [x20]
00024FD8 e00314aa mov      x0, x20
00024FDC 082540f9 ldr      x8, [x8, #0x48]
00024FE0 00013fd6 blr      x8
00024FE4 75b242f9 ldr      x21, [x19, #0x560]
00024FE8 b4fe49d3 lsr      x20, x21, #9
00024FEC 687e42f9 ldr      x8, [x19, #0x4f8]
00024FF0 b8224092 and      x24, x21, #0x1ff
00024FF4 76ba42f9 ldr      x22, [x19, #0x570]
00024FF8 177974f8 ldr      x23, [x8, x20, lsl #3]
00024FFC e07a78f8 ldr      x0, [x23, x24, lsl #3]
00025000 c00100b4 cbz      x0, #0x25038
00025004 088c44f8 ldr      x8, [x0, #0x48]!
00025008 080d40f9 ldr      x8, [x8, #0x18]
0002500C 00013fd6 blr      x8
00025010 ff7a38f8 str      xzr, [x23, x24, lsl #3]
00025014 69ba42f9 ldr      x9, [x19, #0x570]
00025018 68b242f9 ldr      x8, [x19, #0x560]
0002501C 290500d1 sub      x9, x9, #1
00025020 08050091 add      x8, x8, #1
00025024 69ba02f9 str      x9, [x19, #0x570]
00025028 c90209eb subs     x9, x22, x9
0002502C 68b202f9 str      x8, [x19, #0x560]
00025030 41010054 b.ne     #0x25058
00025034 16000014 b        #0x2508c
00025038 e80315aa mov      x8, x21
0002503C e90316aa mov      x9, x22
00025040 c90600d1 sub      x9, x22, #1
00025044 a8060091 add      x8, x21, #1
00025048 69ba02f9 str      x9, [x19, #0x570]
0002504C c90209eb subs     x9, x22, x9
00025050 68b202f9 str      x8, [x19, #0x560]
00025054 c0010054 b.eq     #0x2508c
00025058 2a01158b add      x10, x9, x21
0002505C 49fd49d3 lsr      x9, x10, #9
00025060 9f0209eb cmp      x20, x9
00025064 48010054 b.hi     #0x2508c
00025068 4a214092 and      x10, x10, #0x1ff
0002506C 0a0100b4 cbz      x10, #0x2508c
00025070 6a7e42f9 ldr      x10, [x19, #0x4f8]
00025074 490d098b add      x9, x10, x9, lsl #3
00025078 4a0d148b add      x10, x10, x20, lsl #3
0002507C 1f2003d5 nop      
00025080 4a210091 add      x10, x10, #8
00025084 5f0109eb cmp      x10, x9
00025088 c9ffff54 b.ls     #0x25080
0002508C 1f0110f1 cmp      x8, #0x400
00025090 e3010054 b.lo     #0x250cc
00025094 687e42f9 ldr      x8, [x19, #0x4f8]
00025098 02008252 mov      w2, #0x1000
0002509C 03018052 mov      w3, #8
000250A0 60c242f9 ldr      x0, [x19, #0x580]
000250A4 010140f9 ldr      x1, [x8]
000250A8 080040f9 ldr      x8, [x0]
000250AC 080d40f9 ldr      x8, [x8, #0x18]
000250B0 00013fd6 blr      x8
000250B4 687e42f9 ldr      x8, [x19, #0x4f8]
000250B8 08210091 add      x8, x8, #8
000250BC 687e02f9 str      x8, [x19, #0x4f8]
000250C0 68b242f9 ldr      x8, [x19, #0x560]
000250C4 080108d1 sub      x8, x8, #0x200
000250C8 68b202f9 str      x8, [x19, #0x560]
000250CC e00740f9 ldr      x0, [sp, #8]
000250D0 a00100b4 cbz      x0, #0x25104
000250D4 080040f9 ldr      x8, [x0]
000250D8 74c21391 add      x20, x19, #0x4f0
000250DC 081d40f9 ldr      x8, [x8, #0x38]
000250E0 00013fd6 blr      x8
000250E4 e1230091 add      x1, sp, #8
000250E8 e00314aa mov      x0, x20
000250EC 6d000094 bl       #0x252a0
000250F0 e00740f9 ldr      x0, [sp, #8]
000250F4 800000b4 cbz      x0, #0x25104
000250F8 088c44f8 ldr      x8, [x0, #0x48]!
000250FC 080d40f9 ldr      x8, [x8, #0x18]
00025100 00013fd6 blr      x8
00025104 68ea41f9 ldr      x8, [x19, #0x3d0]
00025108 480100b4 cbz      x8, #0x25130
0002510C 68e642f9 ldr      x8, [x19, #0x5c8]
00025110 680b00b4 cbz      x8, #0x2527c
00025114 688640b9 ldr      w8, [x19, #0x84]
00025118 74620391 add      x20, x19, #0xd8
0002511C e8090034 cbz      w8, #0x25258
00025120 e00314aa mov      x0, x20
00025124 e1031f2a mov      w1, wzr
00025128 002b0094 bl       #0x2fd28
0002512C 4d000014 b        #0x25260
00025130 74ba42f9 ldr      x20, [x19, #0x570]
00025134 9f0200f1 cmp      x20, #0
00025138 68024d39 ldrb     w8, [x19, #0x340]
0002513C 695242f9 ldr      x9, [x19, #0x4a0]
00025140 0019407a ccmp     w8, #0, #0, ne
00025144 e8079f1a cset     w8, ne
00025148 29feffb5 cbnz     x9, #0x2510c
0002514C 08feff34 cbz      w8, #0x2510c
00025150 340700b4 cbz      x20, #0x25234
00025154 75b242f9 ldr      x21, [x19, #0x560]
00025158 12000014 b        #0x251a0
0002515C 1f2003d5 nop      
00025160 687e42f9 ldr      x8, [x19, #0x4f8]
00025164 02008252 mov      w2, #0x1000
00025168 03018052 mov      w3, #8
0002516C 60c242f9 ldr      x0, [x19, #0x580]
00025170 010140f9 ldr      x1, [x8]
00025174 080040f9 ldr      x8, [x0]
00025178 080d40f9 ldr      x8, [x8, #0x18]
0002517C 00013fd6 blr      x8
00025180 687e42f9 ldr      x8, [x19, #0x4f8]
00025184 08210091 add      x8, x8, #8
00025188 69b242f9 ldr      x9, [x19, #0x560]
0002518C 74ba42f9 ldr      x20, [x19, #0x570]
00025190 350108d1 sub      x21, x9, #0x200
00025194 687e02f9 str      x8, [x19, #0x4f8]
00025198 75b202f9 str      x21, [x19, #0x560]
0002519C d40400b4 cbz      x20, #0x25234
000251A0 687e42f9 ldr      x8, [x19, #0x4f8]
000251A4 b6fe49d3 lsr      x22, x21, #9
000251A8 b8224092 and      x24, x21, #0x1ff
000251AC e90315aa mov      x9, x21
000251B0 177976f8 ldr      x23, [x8, x22, lsl #3]
000251B4 e80314aa mov      x8, x20
000251B8 e07a78f8 ldr      x0, [x23, x24, lsl #3]
000251BC e00000b4 cbz      x0, #0x251d8
000251C0 088c44f8 ldr      x8, [x0, #0x48]!
000251C4 080d40f9 ldr      x8, [x8, #0x18]
000251C8 00013fd6 blr      x8
000251CC ff7a38f8 str      xzr, [x23, x24, lsl #3]
000251D0 68ba42f9 ldr      x8, [x19, #0x570]
000251D4 69b242f9 ldr      x9, [x19, #0x560]
000251D8 080500d1 sub      x8, x8, #1
000251DC 29050091 add      x9, x9, #1
000251E0 68ba02f9 str      x8, [x19, #0x570]
000251E4 8a0208eb subs     x10, x20, x8
000251E8 69b202f9 str      x9, [x19, #0x560]
000251EC a0010054 b.eq     #0x25220
000251F0 4b01158b add      x11, x10, x21
000251F4 6afd49d3 lsr      x10, x11, #9
000251F8 df020aeb cmp      x22, x10
000251FC 28010054 b.hi     #0x25220
00025200 6b214092 and      x11, x11, #0x1ff
00025204 eb0000b4 cbz      x11, #0x25220
00025208 6b7e42f9 ldr      x11, [x19, #0x4f8]
0002520C 6a0d0a8b add      x10, x11, x10, lsl #3
00025210 6b0d168b add      x11, x11, x22, lsl #3
00025214 6b210091 add      x11, x11, #8
00025218 7f010aeb cmp      x11, x10
0002521C c9ffff54 b.ls     #0x25214
00025220 3f0110f1 cmp      x9, #0x400
00025224 e2f9ff54 b.hs     #0x25160
00025228 f40308aa mov      x20, x8
0002522C f50309aa mov      x21, x9
00025230 88fbffb5 cbnz     x8, #0x251a0
00025234 a8008052 mov      w8, #5
00025238 20008052 mov      w0, #1
0002523C 68c205b9 str      w8, [x19, #0x5c0]
00025240 f44f44a9 ldp      x20, x19, [sp, #0x40]
00025244 f65743a9 ldp      x22, x21, [sp, #0x30]
00025248 f85f42a9 ldp      x24, x23, [sp, #0x20]
0002524C fd7b41a9 ldp      x29, x30, [sp, #0x10]
00025250 ff430191 add      sp, sp, #0x50
00025254 c0035fd6 ret      
00025258 e00314aa mov      x0, x20
0002525C c82a0094 bl       #0x2fd7c
00025260 e10300aa mov      x1, x0
00025264 60e642f9 ldr      x0, [x19, #0x5c8]
00025268 e60a0094 bl       #0x27e00
0002526C 60e642f9 ldr      x0, [x19, #0x5c8]
00025270 2c0b0094 bl       #0x27f20
00025274 e00314aa mov      x0, x20
00025278 d62a0094 bl       #0x2fdd0
0002527C e0031f2a mov      w0, wzr
00025280 f44f44a9 ldp      x20, x19, [sp, #0x40]
00025284 f65743a9 ldp      x22, x21, [sp, #0x30]
00025288 f85f42a9 ldp      x24, x23, [sp, #0x20]
0002528C fd7b41a9 ldp      x29, x30, [sp, #0x10]
00025290 ff430191 add      sp, sp, #0x50
00025294 c0035fd6 ret      
~~~
### 0x2566c (34 slots)
~~~asm
0002566C fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00025670 f50b00f9 str      x21, [sp, #0x10]
00025674 f44f02a9 stp      x20, x19, [sp, #0x20]
00025678 fd030091 mov      x29, sp
0002567C f40302aa mov      x20, x2
00025680 f50301aa mov      x21, x1
00025684 f30300aa mov      x19, x0
00025688 82aaff97 bl       #0x10090
0002568C 083a00f0 adrp     x8, #0x768000
00025690 08013b91 add      x8, x8, #0xec0
00025694 09410091 add      x9, x8, #0x10
00025698 690200f9 str      x9, [x19]
0002569C 09e10191 add      x9, x8, #0x78
000256A0 08e10291 add      x8, x8, #0xb8
000256A4 69a204a9 stp      x9, x8, [x19, #0x48]
000256A8 a00240f9 ldr      x0, [x21]
000256AC 603200f9 str      x0, [x19, #0x60]
000256B0 800000b4 cbz      x0, #0x256c0
000256B4 088c44f8 ldr      x8, [x0, #0x48]!
000256B8 080940f9 ldr      x8, [x8, #0x10]
000256BC 00013fd6 blr      x8
000256C0 800240f9 ldr      x0, [x20]
000256C4 603600f9 str      x0, [x19, #0x68]
000256C8 800000b4 cbz      x0, #0x256d8
000256CC 088c44f8 ldr      x8, [x0, #0x48]!
000256D0 080940f9 ldr      x8, [x8, #0x10]
000256D4 00013fd6 blr      x8
000256D8 60c20191 add      x0, x19, #0x70
000256DC f44f42a9 ldp      x20, x19, [sp, #0x20]
000256E0 f50b40f9 ldr      x21, [sp, #0x10]
000256E4 812f0090 adrp     x1, #0x615000
000256E8 21242f91 add      x1, x1, #0xbc9
000256EC fd7bc3a8 ldp      x29, x30, [sp], #0x30
000256F0 3992ff17 b        #0x9fd4
~~~
### 0x256f4 (45 slots)
~~~asm
000256F4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000256F8 f30b00f9 str      x19, [sp, #0x10]
000256FC fd030091 mov      x29, sp
00025700 c83b00d0 adrp     x8, #0x79f000
00025704 f30300aa mov      x19, x0
00025708 08cd44f9 ldr      x8, [x8, #0x998]
0002570C 09410091 add      x9, x8, #0x10
00025710 0ae10191 add      x10, x8, #0x78
00025714 08e10291 add      x8, x8, #0xb8
00025718 090000f9 str      x9, [x0]
0002571C 0aa004a9 stp      x10, x8, [x0, #0x48]
00025720 003840f9 ldr      x0, [x0, #0x70]
00025724 a00000b4 cbz      x0, #0x25738
00025728 088c44f8 ldr      x8, [x0, #0x48]!
0002572C 080d40f9 ldr      x8, [x8, #0x18]
00025730 00013fd6 blr      x8
00025734 7f3a00f9 str      xzr, [x19, #0x70]
00025738 603640f9 ldr      x0, [x19, #0x68]
0002573C a00000b4 cbz      x0, #0x25750
00025740 088c44f8 ldr      x8, [x0, #0x48]!
00025744 080d40f9 ldr      x8, [x8, #0x18]
00025748 00013fd6 blr      x8
0002574C 7f3600f9 str      xzr, [x19, #0x68]
00025750 603240f9 ldr      x0, [x19, #0x60]
00025754 a00000b4 cbz      x0, #0x25768
00025758 088c44f8 ldr      x8, [x0, #0x48]!
0002575C 080d40f9 ldr      x8, [x8, #0x18]
00025760 00013fd6 blr      x8
00025764 7f3200f9 str      xzr, [x19, #0x60]
00025768 083a00d0 adrp     x8, #0x767000
0002576C 08012e91 add      x8, x8, #0xb80
00025770 602e40f9 ldr      x0, [x19, #0x58]
00025774 09410091 add      x9, x8, #0x10
00025778 0a410191 add      x10, x8, #0x50
0002577C 08410291 add      x8, x8, #0x90
00025780 690200f9 str      x9, [x19]
00025784 6aa204a9 stp      x10, x8, [x19, #0x48]
00025788 a00000b4 cbz      x0, #0x2579c
0002578C 088c44f8 ldr      x8, [x0, #0x48]!
00025790 080d40f9 ldr      x8, [x8, #0x18]
00025794 00013fd6 blr      x8
00025798 7f2e00f9 str      xzr, [x19, #0x58]
0002579C f30b40f9 ldr      x19, [sp, #0x10]
000257A0 fd7bc2a8 ldp      x29, x30, [sp], #0x20
000257A4 c0035fd6 ret      
~~~
### 0x25938 (1 slots)
~~~asm
00025938 5e020014 b        #0x262b0
~~~
### 0x2594c (2 slots)
~~~asm
0002594C 00008012 mov      w0, #-1
00025950 c0035fd6 ret      
~~~
### 0x25954 (1 slots)
~~~asm
00025954 57020014 b        #0x262b0
~~~
### 0x25958 (1 slots)
~~~asm
00025958 56020014 b        #0x262b0
~~~
### 0x2615c (85 slots)
~~~asm
0002615C fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00026160 f70b00f9 str      x23, [sp, #0x10]
00026164 f65702a9 stp      x22, x21, [sp, #0x20]
00026168 f44f03a9 stp      x20, x19, [sp, #0x30]
0002616C fd030091 mov      x29, sp
00026170 c83b00b0 adrp     x8, #0x79f000
00026174 08d944f9 ldr      x8, [x8, #0x9b0]
00026178 08fddf08 ldarb    w8, [x8]
0002617C 08010036 tbz      w8, #0, #0x2619c
00026180 c03b00b0 adrp     x0, #0x79f000
00026184 00dc44f9 ldr      x0, [x0, #0x9b8]
00026188 f70b40f9 ldr      x23, [sp, #0x10]
0002618C f44f43a9 ldp      x20, x19, [sp, #0x30]
00026190 f65742a9 ldp      x22, x21, [sp, #0x20]
00026194 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00026198 c0035fd6 ret      
0002619C c03b00b0 adrp     x0, #0x79f000
000261A0 00d844f9 ldr      x0, [x0, #0x9b0]
000261A4 0b401794 bl       #0x5f61d0
000261A8 c0feff34 cbz      w0, #0x26180
000261AC d33b00b0 adrp     x19, #0x79f000
000261B0 c83b00b0 adrp     x8, #0x79f000
000261B4 73de44f9 ldr      x19, [x19, #0x9b8]
000261B8 08e144f9 ldr      x8, [x8, #0x9c0]
000261BC d43b00b0 adrp     x20, #0x79f000
000261C0 08fddf08 ldarb    w8, [x8]
000261C4 94e644f9 ldr      x20, [x20, #0x9c8]
000261C8 c8000036 tbz      w8, #0, #0x261e0
000261CC 740200f9 str      x20, [x19]
000261D0 c03b00b0 adrp     x0, #0x79f000
000261D4 00d844f9 ldr      x0, [x0, #0x9b0]
000261D8 02401794 bl       #0x5f61e0
000261DC e9ffff17 b        #0x26180
000261E0 c03b00b0 adrp     x0, #0x79f000
000261E4 00e044f9 ldr      x0, [x0, #0x9c0]
000261E8 fa3f1794 bl       #0x5f61d0
000261EC 00ffff34 cbz      w0, #0x261cc
000261F0 c83b00b0 adrp     x8, #0x79f000
000261F4 d53b00b0 adrp     x21, #0x79f000
000261F8 08e944f9 ldr      x8, [x8, #0x9d0]
000261FC 08fddf08 ldarb    w8, [x8]
00026200 b5ee44f9 ldr      x21, [x21, #0x9d8]
00026204 c8000036 tbz      w8, #0, #0x2621c
00026208 950200f9 str      x21, [x20]
0002620C c03b00b0 adrp     x0, #0x79f000
00026210 00e044f9 ldr      x0, [x0, #0x9c0]
00026214 f33f1794 bl       #0x5f61e0
00026218 edffff17 b        #0x261cc
0002621C c03b00b0 adrp     x0, #0x79f000
00026220 00e844f9 ldr      x0, [x0, #0x9d0]
00026224 eb3f1794 bl       #0x5f61d0
00026228 00ffff34 cbz      w0, #0x26208
0002622C c83b00b0 adrp     x8, #0x79f000
00026230 d63b00b0 adrp     x22, #0x79f000
00026234 08c943f9 ldr      x8, [x8, #0x790]
00026238 08fddf08 ldarb    w8, [x8]
0002623C d6ce43f9 ldr      x22, [x22, #0x798]
00026240 e8020037 tbnz     w8, #0, #0x2629c
00026244 c03b00b0 adrp     x0, #0x79f000
00026248 00c843f9 ldr      x0, [x0, #0x790]
0002624C e13f1794 bl       #0x5f61d0
00026250 60020034 cbz      w0, #0x2629c
00026254 c83b00b0 adrp     x8, #0x79f000
00026258 d73b00b0 adrp     x23, #0x79f000
0002625C 084d42f9 ldr      x8, [x8, #0x498]
00026260 08fddf08 ldarb    w8, [x8]
00026264 f75242f9 ldr      x23, [x23, #0x4a0]
00026268 28010037 tbnz     w8, #0, #0x2628c
0002626C c03b00b0 adrp     x0, #0x79f000
00026270 004c42f9 ldr      x0, [x0, #0x498]
00026274 d73f1794 bl       #0x5f61d0
00026278 a0000034 cbz      w0, #0x2628c
0002627C ff0200f9 str      xzr, [x23]
00026280 c03b00b0 adrp     x0, #0x79f000
00026284 004c42f9 ldr      x0, [x0, #0x498]
00026288 d63f1794 bl       #0x5f61e0
0002628C d70200f9 str      x23, [x22]
00026290 c03b00b0 adrp     x0, #0x79f000
00026294 00c843f9 ldr      x0, [x0, #0x790]
00026298 d23f1794 bl       #0x5f61e0
0002629C b60200f9 str      x22, [x21]
000262A0 c03b00b0 adrp     x0, #0x79f000
000262A4 00e844f9 ldr      x0, [x0, #0x9d0]
000262A8 ce3f1794 bl       #0x5f61e0
000262AC d7ffff17 b        #0x26208
~~~
### 0x262b0 (60 slots)
~~~asm
000262B0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
000262B4 f50b00f9 str      x21, [sp, #0x10]
000262B8 f44f02a9 stp      x20, x19, [sp, #0x20]
000262BC fd030091 mov      x29, sp
000262C0 c83b00b0 adrp     x8, #0x79f000
000262C4 08f144f9 ldr      x8, [x8, #0x9e0]
000262C8 08fddf08 ldarb    w8, [x8]
000262CC e8000036 tbz      w8, #0, #0x262e8
000262D0 c03b00b0 adrp     x0, #0x79f000
000262D4 00f444f9 ldr      x0, [x0, #0x9e8]
000262D8 f50b40f9 ldr      x21, [sp, #0x10]
000262DC f44f42a9 ldp      x20, x19, [sp, #0x20]
000262E0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
000262E4 c0035fd6 ret      
000262E8 c03b00b0 adrp     x0, #0x79f000
000262EC 00f044f9 ldr      x0, [x0, #0x9e0]
000262F0 b83f1794 bl       #0x5f61d0
000262F4 e0feff34 cbz      w0, #0x262d0
000262F8 d33b00b0 adrp     x19, #0x79f000
000262FC c83b00b0 adrp     x8, #0x79f000
00026300 73f644f9 ldr      x19, [x19, #0x9e8]
00026304 08c943f9 ldr      x8, [x8, #0x790]
00026308 d43b00b0 adrp     x20, #0x79f000
0002630C 08fddf08 ldarb    w8, [x8]
00026310 94ce43f9 ldr      x20, [x20, #0x798]
00026314 68010036 tbz      w8, #0, #0x26340
00026318 740200f9 str      x20, [x19]
0002631C c03b00b0 adrp     x0, #0x79f000
00026320 00f044f9 ldr      x0, [x0, #0x9e0]
00026324 af3f1794 bl       #0x5f61e0
00026328 c03b00b0 adrp     x0, #0x79f000
0002632C 00f444f9 ldr      x0, [x0, #0x9e8]
00026330 f50b40f9 ldr      x21, [sp, #0x10]
00026334 f44f42a9 ldp      x20, x19, [sp, #0x20]
00026338 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0002633C c0035fd6 ret      
00026340 c03b00b0 adrp     x0, #0x79f000
00026344 00c843f9 ldr      x0, [x0, #0x790]
00026348 a23f1794 bl       #0x5f61d0
0002634C 60feff34 cbz      w0, #0x26318
00026350 c83b00b0 adrp     x8, #0x79f000
00026354 d53b00b0 adrp     x21, #0x79f000
00026358 084d42f9 ldr      x8, [x8, #0x498]
0002635C 08fddf08 ldarb    w8, [x8]
00026360 b55242f9 ldr      x21, [x21, #0x4a0]
00026364 c8000036 tbz      w8, #0, #0x2637c
00026368 950200f9 str      x21, [x20]
0002636C c03b00b0 adrp     x0, #0x79f000
00026370 00c843f9 ldr      x0, [x0, #0x790]
00026374 9b3f1794 bl       #0x5f61e0
00026378 e8ffff17 b        #0x26318
0002637C c03b00b0 adrp     x0, #0x79f000
00026380 004c42f9 ldr      x0, [x0, #0x498]
00026384 933f1794 bl       #0x5f61d0
00026388 00ffff34 cbz      w0, #0x26368
0002638C bf0200f9 str      xzr, [x21]
00026390 c03b00b0 adrp     x0, #0x79f000
00026394 004c42f9 ldr      x0, [x0, #0x498]
00026398 923f1794 bl       #0x5f61e0
0002639C f3ffff17 b        #0x26368
~~~
### 0x28ca0 (64 slots)
~~~asm
00028CA0 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00028CA4 f85f01a9 stp      x24, x23, [sp, #0x10]
00028CA8 f65702a9 stp      x22, x21, [sp, #0x20]
00028CAC f44f03a9 stp      x20, x19, [sp, #0x30]
00028CB0 fd030091 mov      x29, sp
00028CB4 f40300aa mov      x20, x0
00028CB8 00400491 add      x0, x0, #0x110
00028CBC f503022a mov      w21, w2
00028CC0 f303012a mov      w19, w1
00028CC4 f70b0094 bl       #0x2bca0
00028CC8 35060036 tbz      w21, #0, #0x28d8c
00028CCC 800a43f9 ldr      x0, [x20, #0x610]
00028CD0 080040f9 ldr      x8, [x0]
00028CD4 080940f9 ldr      x8, [x8, #0x10]
00028CD8 00013fd6 blr      x8
00028CDC 176040a9 ldp      x23, x24, [x0]
00028CE0 ff0218eb cmp      x23, x24
00028CE4 41010054 b.ne     #0x28d0c
00028CE8 29000014 b        #0x28d8c
00028CEC 1f2003d5 nop      
00028CF0 61020012 and      w1, w19, #1
00028CF4 e0031faa mov      x0, xzr
00028CF8 22008052 mov      w2, #1
00028CFC e9ffff97 bl       #0x28ca0
00028D00 f7220091 add      x23, x23, #8
00028D04 ff0218eb cmp      x23, x24
00028D08 20040054 b.eq     #0x28d8c
00028D0C f40240f9 ldr      x20, [x23]
00028D10 14ffffb4 cbz      x20, #0x28cf0
00028D14 888e44f8 ldr      x8, [x20, #0x48]!
00028D18 e00314aa mov      x0, x20
00028D1C 080940f9 ldr      x8, [x8, #0x10]
00028D20 00013fd6 blr      x8
00028D24 950e40f9 ldr      x21, [x20, #0x18]
00028D28 e00315aa mov      x0, x21
00028D2C a80240f9 ldr      x8, [x21]
00028D30 080140f9 ldr      x8, [x8]
00028D34 00013fd6 blr      x8
00028D38 f60300aa mov      x22, x0
00028D3C eafcff97 bl       #0x280e4
00028D40 1f0016eb cmp      x0, x22
00028D44 e0000054 b.eq     #0x28d60
00028D48 1f2003d5 nop      
00028D4C 1f2003d5 nop      
00028D50 d60240f9 ldr      x22, [x22]
00028D54 df0200eb cmp      x22, x0
00028D58 c41a40fa ccmp     x22, #0, #4, ne
00028D5C a1ffff54 b.ne     #0x28d50
00028D60 a04201d1 sub      x0, x21, #0x50
00028D64 61020012 and      w1, w19, #1
00028D68 22008052 mov      w2, #1
00028D6C cdffff97 bl       #0x28ca0
00028D70 880240f9 ldr      x8, [x20]
00028D74 e00314aa mov      x0, x20
00028D78 080d40f9 ldr      x8, [x8, #0x18]
00028D7C 00013fd6 blr      x8
00028D80 f7220091 add      x23, x23, #8
00028D84 ff0218eb cmp      x23, x24
00028D88 21fcff54 b.ne     #0x28d0c
00028D8C f44f43a9 ldp      x20, x19, [sp, #0x30]
00028D90 f65742a9 ldp      x22, x21, [sp, #0x20]
00028D94 f85f41a9 ldp      x24, x23, [sp, #0x10]
00028D98 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00028D9C c0035fd6 ret      
~~~
### 0x28db0 (64 slots)
~~~asm
00028DB0 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00028DB4 f85f01a9 stp      x24, x23, [sp, #0x10]
00028DB8 f65702a9 stp      x22, x21, [sp, #0x20]
00028DBC f44f03a9 stp      x20, x19, [sp, #0x30]
00028DC0 fd030091 mov      x29, sp
00028DC4 f40300aa mov      x20, x0
00028DC8 00400491 add      x0, x0, #0x110
00028DCC f503022a mov      w21, w2
00028DD0 f303012a mov      w19, w1
00028DD4 ba0b0094 bl       #0x2bcbc
00028DD8 35060036 tbz      w21, #0, #0x28e9c
00028DDC 800a43f9 ldr      x0, [x20, #0x610]
00028DE0 080040f9 ldr      x8, [x0]
00028DE4 080940f9 ldr      x8, [x8, #0x10]
00028DE8 00013fd6 blr      x8
00028DEC 176040a9 ldp      x23, x24, [x0]
00028DF0 ff0218eb cmp      x23, x24
00028DF4 41010054 b.ne     #0x28e1c
00028DF8 29000014 b        #0x28e9c
00028DFC 1f2003d5 nop      
00028E00 61020012 and      w1, w19, #1
00028E04 e0031faa mov      x0, xzr
00028E08 22008052 mov      w2, #1
00028E0C e9ffff97 bl       #0x28db0
00028E10 f7220091 add      x23, x23, #8
00028E14 ff0218eb cmp      x23, x24
00028E18 20040054 b.eq     #0x28e9c
00028E1C f40240f9 ldr      x20, [x23]
00028E20 14ffffb4 cbz      x20, #0x28e00
00028E24 888e44f8 ldr      x8, [x20, #0x48]!
00028E28 e00314aa mov      x0, x20
00028E2C 080940f9 ldr      x8, [x8, #0x10]
00028E30 00013fd6 blr      x8
00028E34 950e40f9 ldr      x21, [x20, #0x18]
00028E38 e00315aa mov      x0, x21
00028E3C a80240f9 ldr      x8, [x21]
00028E40 080140f9 ldr      x8, [x8]
00028E44 00013fd6 blr      x8
00028E48 f60300aa mov      x22, x0
00028E4C a6fcff97 bl       #0x280e4
00028E50 1f0016eb cmp      x0, x22
00028E54 e0000054 b.eq     #0x28e70
00028E58 1f2003d5 nop      
00028E5C 1f2003d5 nop      
00028E60 d60240f9 ldr      x22, [x22]
00028E64 df0200eb cmp      x22, x0
00028E68 c41a40fa ccmp     x22, #0, #4, ne
00028E6C a1ffff54 b.ne     #0x28e60
00028E70 a04201d1 sub      x0, x21, #0x50
00028E74 61020012 and      w1, w19, #1
00028E78 22008052 mov      w2, #1
00028E7C cdffff97 bl       #0x28db0
00028E80 880240f9 ldr      x8, [x20]
00028E84 e00314aa mov      x0, x20
00028E88 080d40f9 ldr      x8, [x8, #0x18]
00028E8C 00013fd6 blr      x8
00028E90 f7220091 add      x23, x23, #8
00028E94 ff0218eb cmp      x23, x24
00028E98 21fcff54 b.ne     #0x28e1c
00028E9C f44f43a9 ldp      x20, x19, [sp, #0x30]
00028EA0 f65742a9 ldp      x22, x21, [sp, #0x20]
00028EA4 f85f41a9 ldp      x24, x23, [sp, #0x10]
00028EA8 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00028EAC c0035fd6 ret      
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
### 0x79048 (57 slots)
~~~asm
00079048 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0007904C f65701a9 stp      x22, x21, [sp, #0x10]
00079050 f44f02a9 stp      x20, x19, [sp, #0x20]
00079054 fd030091 mov      x29, sp
00079058 48d03bd5 mrs      x8, tpidr_el0
0007905C 16c97392 and      x22, x8, #0xffffffffffffe000
00079060 c84e40f9 ldr      x8, [x22, #0x98]
00079064 1f4100f1 cmp      x8, #0x10
00079068 20050054 b.eq     #0x7910c
0007906C c80e088b add      x8, x22, x8, lsl #3
00079070 f30301aa mov      x19, x1
00079074 f40302aa mov      x20, x2
00079078 e00313aa mov      x0, x19
0007907C 02028052 mov      w2, #0x10
00079080 010d00f9 str      x1, [x8, #0x18]
00079084 c84e40f9 ldr      x8, [x22, #0x98]
00079088 08050091 add      x8, x8, #1
0007908C c84e00f9 str      x8, [x22, #0x98]
00079090 280040f9 ldr      x8, [x1]
00079094 014e8152 mov      w1, #0xa70
00079098 080940f9 ldr      x8, [x8, #0x10]
0007909C 00013fd6 blr      x8
000790A0 800300b4 cbz      x0, #0x79110
000790A4 810240f9 ldr      x1, [x20]
000790A8 f50300aa mov      x21, x0
000790AC 11aefe97 bl       #0x248f0
000790B0 48390090 adrp     x8, #0x7a1000
000790B4 a0421791 add      x0, x21, #0x5d0
000790B8 082d43f9 ldr      x8, [x8, #0x658]
000790BC 09410091 add      x9, x8, #0x10
000790C0 a90200f9 str      x9, [x21]
000790C4 09c10391 add      x9, x8, #0xf0
000790C8 08c10491 add      x8, x8, #0x130
000790CC a9a204a9 stp      x9, x8, [x21, #0x48]
000790D0 18000094 bl       #0x79130
000790D4 084e8152 mov      w8, #0xa70
000790D8 09028052 mov      w9, #0x10
000790DC bf3205f9 str      xzr, [x21, #0xa60]
000790E0 bf6a0ab9 str      wzr, [x21, #0xa68]
000790E4 e00315aa mov      x0, x21
000790E8 b3d600a9 stp      x19, x21, [x21, #8]
000790EC f44f42a9 ldp      x20, x19, [sp, #0x20]
000790F0 a8a601a9 stp      x8, x9, [x21, #0x18]
000790F4 c84e40f9 ldr      x8, [x22, #0x98]
000790F8 080500d1 sub      x8, x8, #1
000790FC c84e00f9 str      x8, [x22, #0x98]
00079100 f65741a9 ldp      x22, x21, [sp, #0x10]
00079104 fd7bc3a8 ldp      x29, x30, [sp], #0x30
00079108 c0035fd6 ret      
0007910C c126fe97 bl       #0x2c10
00079110 680240f9 ldr      x8, [x19]
00079114 e00313aa mov      x0, x19
00079118 085d40f9 ldr      x8, [x8, #0xb8]
0007911C 00013fd6 blr      x8
00079120 810240f9 ldr      x1, [x20]
00079124 e0031faa mov      x0, xzr
00079128 f2adfe97 bl       #0x248f0
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
### 0x79c08 (56 slots)
~~~asm
00079C08 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00079C0C f65701a9 stp      x22, x21, [sp, #0x10]
00079C10 f44f02a9 stp      x20, x19, [sp, #0x20]
00079C14 fd030091 mov      x29, sp
00079C18 48d03bd5 mrs      x8, tpidr_el0
00079C1C 16c97392 and      x22, x8, #0xffffffffffffe000
00079C20 c84e40f9 ldr      x8, [x22, #0x98]
00079C24 1f4100f1 cmp      x8, #0x10
00079C28 00050054 b.eq     #0x79cc8
00079C2C c80e088b add      x8, x22, x8, lsl #3
00079C30 f30301aa mov      x19, x1
00079C34 f40302aa mov      x20, x2
00079C38 e00313aa mov      x0, x19
00079C3C 02028052 mov      w2, #0x10
00079C40 010d00f9 str      x1, [x8, #0x18]
00079C44 c84e40f9 ldr      x8, [x22, #0x98]
00079C48 08050091 add      x8, x8, #1
00079C4C c84e00f9 str      x8, [x22, #0x98]
00079C50 280040f9 ldr      x8, [x1]
00079C54 014a8152 mov      w1, #0xa50
00079C58 080940f9 ldr      x8, [x8, #0x10]
00079C5C 00013fd6 blr      x8
00079C60 600300b4 cbz      x0, #0x79ccc
00079C64 810240f9 ldr      x1, [x20]
00079C68 f50300aa mov      x21, x0
00079C6C 21abfe97 bl       #0x248f0
00079C70 48390090 adrp     x8, #0x7a1000
00079C74 a0421791 add      x0, x21, #0x5d0
00079C78 084543f9 ldr      x8, [x8, #0x688]
00079C7C 09410091 add      x9, x8, #0x10
00079C80 a90200f9 str      x9, [x21]
00079C84 09c10391 add      x9, x8, #0xf0
00079C88 08c10491 add      x8, x8, #0x130
00079C8C a9a204a9 stp      x9, x8, [x21, #0x48]
00079C90 18000094 bl       #0x79cf0
00079C94 084a8152 mov      w8, #0xa50
00079C98 09028052 mov      w9, #0x10
00079C9C bf2205f9 str      xzr, [x21, #0xa40]
00079CA0 b3d600a9 stp      x19, x21, [x21, #8]
00079CA4 e00315aa mov      x0, x21
00079CA8 f44f42a9 ldp      x20, x19, [sp, #0x20]
00079CAC a8a601a9 stp      x8, x9, [x21, #0x18]
00079CB0 c84e40f9 ldr      x8, [x22, #0x98]
00079CB4 080500d1 sub      x8, x8, #1
00079CB8 c84e00f9 str      x8, [x22, #0x98]
00079CBC f65741a9 ldp      x22, x21, [sp, #0x10]
00079CC0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
00079CC4 c0035fd6 ret      
00079CC8 d223fe97 bl       #0x2c10
00079CCC 680240f9 ldr      x8, [x19]
00079CD0 e00313aa mov      x0, x19
00079CD4 085d40f9 ldr      x8, [x8, #0xb8]
00079CD8 00013fd6 blr      x8
00079CDC 810240f9 ldr      x1, [x20]
00079CE0 e0031faa mov      x0, xzr
00079CE4 03abfe97 bl       #0x248f0
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
### 0x8d6a0 (74 slots)
~~~asm
0008D6A0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0008D6A4 f65701a9 stp      x22, x21, [sp, #0x10]
0008D6A8 f44f02a9 stp      x20, x19, [sp, #0x20]
0008D6AC fd030091 mov      x29, sp
0008D6B0 883800f0 adrp     x8, #0x7a0000
0008D6B4 08a142f9 ldr      x8, [x8, #0x540]
0008D6B8 08fddf08 ldarb    w8, [x8]
0008D6BC e8000036 tbz      w8, #0, #0x8d6d8
0008D6C0 803800f0 adrp     x0, #0x7a0000
0008D6C4 00a442f9 ldr      x0, [x0, #0x548]
0008D6C8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0008D6CC f65741a9 ldp      x22, x21, [sp, #0x10]
0008D6D0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0008D6D4 c0035fd6 ret      
0008D6D8 803800f0 adrp     x0, #0x7a0000
0008D6DC 00a042f9 ldr      x0, [x0, #0x540]
0008D6E0 bca21594 bl       #0x5f61d0
0008D6E4 e0feff34 cbz      w0, #0x8d6c0
0008D6E8 933800f0 adrp     x19, #0x7a0000
0008D6EC 883800d0 adrp     x8, #0x79f000
0008D6F0 73a642f9 ldr      x19, [x19, #0x548]
0008D6F4 08d144f9 ldr      x8, [x8, #0x9a0]
0008D6F8 943800d0 adrp     x20, #0x79f000
0008D6FC 08fddf08 ldarb    w8, [x8]
0008D700 94d644f9 ldr      x20, [x20, #0x9a8]
0008D704 68010036 tbz      w8, #0, #0x8d730
0008D708 740200f9 str      x20, [x19]
0008D70C 803800f0 adrp     x0, #0x7a0000
0008D710 00a042f9 ldr      x0, [x0, #0x540]
0008D714 b3a21594 bl       #0x5f61e0
0008D718 803800f0 adrp     x0, #0x7a0000
0008D71C 00a442f9 ldr      x0, [x0, #0x548]
0008D720 f44f42a9 ldp      x20, x19, [sp, #0x20]
0008D724 f65741a9 ldp      x22, x21, [sp, #0x10]
0008D728 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0008D72C c0035fd6 ret      
0008D730 803800d0 adrp     x0, #0x79f000
0008D734 00d044f9 ldr      x0, [x0, #0x9a0]
0008D738 a6a21594 bl       #0x5f61d0
0008D73C 60feff34 cbz      w0, #0x8d708
0008D740 883800d0 adrp     x8, #0x79f000
0008D744 953800d0 adrp     x21, #0x79f000
0008D748 08c943f9 ldr      x8, [x8, #0x790]
0008D74C 08fddf08 ldarb    w8, [x8]
0008D750 b5ce43f9 ldr      x21, [x21, #0x798]
0008D754 c8000036 tbz      w8, #0, #0x8d76c
0008D758 950200f9 str      x21, [x20]
0008D75C 803800d0 adrp     x0, #0x79f000
0008D760 00d044f9 ldr      x0, [x0, #0x9a0]
0008D764 9fa21594 bl       #0x5f61e0
0008D768 e8ffff17 b        #0x8d708
0008D76C 803800d0 adrp     x0, #0x79f000
0008D770 00c843f9 ldr      x0, [x0, #0x790]
0008D774 97a21594 bl       #0x5f61d0
0008D778 00ffff34 cbz      w0, #0x8d758
0008D77C 883800d0 adrp     x8, #0x79f000
0008D780 963800d0 adrp     x22, #0x79f000
0008D784 084d42f9 ldr      x8, [x8, #0x498]
0008D788 08fddf08 ldarb    w8, [x8]
0008D78C d65242f9 ldr      x22, [x22, #0x4a0]
0008D790 28010037 tbnz     w8, #0, #0x8d7b4
0008D794 803800d0 adrp     x0, #0x79f000
0008D798 004c42f9 ldr      x0, [x0, #0x498]
0008D79C 8da21594 bl       #0x5f61d0
0008D7A0 a0000034 cbz      w0, #0x8d7b4
0008D7A4 df0200f9 str      xzr, [x22]
0008D7A8 803800d0 adrp     x0, #0x79f000
0008D7AC 004c42f9 ldr      x0, [x0, #0x498]
0008D7B0 8ca21594 bl       #0x5f61e0
0008D7B4 b60200f9 str      x22, [x21]
0008D7B8 803800d0 adrp     x0, #0x79f000
0008D7BC 00c843f9 ldr      x0, [x0, #0x790]
0008D7C0 88a21594 bl       #0x5f61e0
0008D7C4 e5ffff17 b        #0x8d758
~~~
### 0x8e980 (65 slots)
~~~asm
0008E980 ff8301d1 sub      sp, sp, #0x60
0008E984 fd7b02a9 stp      x29, x30, [sp, #0x20]
0008E988 f85f03a9 stp      x24, x23, [sp, #0x30]
0008E98C f65704a9 stp      x22, x21, [sp, #0x40]
0008E990 f44f05a9 stp      x20, x19, [sp, #0x50]
0008E994 fd830091 add      x29, sp, #0x20
0008E998 15d847a9 ldp      x21, x22, [x0, #0x78]
0008E99C f30300aa mov      x19, x0
0008E9A0 370040f9 ldr      x23, [x1]
0008E9A4 340c40f9 ldr      x20, [x1, #0x18]
0008E9A8 b40000b4 cbz      x20, #0x8e9bc
0008E9AC e00314aa mov      x0, x20
0008E9B0 088c44f8 ldr      x8, [x0, #0x48]!
0008E9B4 080940f9 ldr      x8, [x8, #0x10]
0008E9B8 00013fd6 blr      x8
0008E9BC bf0216eb cmp      x21, x22
0008E9C0 20020054 b.eq     #0x8ea04
0008E9C4 a80240f9 ldr      x8, [x21]
0008E9C8 00c11891 add      x0, x8, #0x630
0008E9CC e8030091 mov      x8, sp
0008E9D0 306a1194 bl       #0x4e9290
0008E9D4 f80340f9 ldr      x24, [sp]
0008E9D8 e00f40f9 ldr      x0, [sp, #0x18]
0008E9DC 800000b4 cbz      x0, #0x8e9ec
0008E9E0 088c44f8 ldr      x8, [x0, #0x48]!
0008E9E4 080d40f9 ldr      x8, [x8, #0x18]
0008E9E8 00013fd6 blr      x8
0008E9EC 1f0317eb cmp      x24, x23
0008E9F0 a0000054 b.eq     #0x8ea04
0008E9F4 b5220091 add      x21, x21, #8
0008E9F8 bf0216eb cmp      x21, x22
0008E9FC 41feff54 b.ne     #0x8e9c4
0008EA00 f50316aa mov      x21, x22
0008EA04 b40000b4 cbz      x20, #0x8ea18
0008EA08 888e44f8 ldr      x8, [x20, #0x48]!
0008EA0C e00314aa mov      x0, x20
0008EA10 080d40f9 ldr      x8, [x8, #0x18]
0008EA14 00013fd6 blr      x8
0008EA18 684240f9 ldr      x8, [x19, #0x80]
0008EA1C bf0208eb cmp      x21, x8
0008EA20 20020054 b.eq     #0x8ea64
0008EA24 b30240f9 ldr      x19, [x21]
0008EA28 130200b4 cbz      x19, #0x8ea68
0008EA2C e00313aa mov      x0, x19
0008EA30 080c45f8 ldr      x8, [x0, #0x50]!
0008EA34 080140f9 ldr      x8, [x8]
0008EA38 00013fd6 blr      x8
0008EA3C f40300aa mov      x20, x0
0008EA40 11000094 bl       #0x8ea84
0008EA44 1f0014eb cmp      x0, x20
0008EA48 00010054 b.eq     #0x8ea68
0008EA4C 1f2003d5 nop      
0008EA50 940240f9 ldr      x20, [x20]
0008EA54 9f0200eb cmp      x20, x0
0008EA58 841a40fa ccmp     x20, #0, #4, ne
0008EA5C a1ffff54 b.ne     #0x8ea50
0008EA60 540000b5 cbnz     x20, #0x8ea68
0008EA64 f3031faa mov      x19, xzr
0008EA68 e00313aa mov      x0, x19
0008EA6C f44f45a9 ldp      x20, x19, [sp, #0x50]
0008EA70 f65744a9 ldp      x22, x21, [sp, #0x40]
0008EA74 f85f43a9 ldp      x24, x23, [sp, #0x30]
0008EA78 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0008EA7C ff830191 add      sp, sp, #0x60
0008EA80 c0035fd6 ret      
~~~
### 0x8ebb0 (65 slots)
~~~asm
0008EBB0 ff8301d1 sub      sp, sp, #0x60
0008EBB4 fd7b02a9 stp      x29, x30, [sp, #0x20]
0008EBB8 f85f03a9 stp      x24, x23, [sp, #0x30]
0008EBBC f65704a9 stp      x22, x21, [sp, #0x40]
0008EBC0 f44f05a9 stp      x20, x19, [sp, #0x50]
0008EBC4 fd830091 add      x29, sp, #0x20
0008EBC8 15d847a9 ldp      x21, x22, [x0, #0x78]
0008EBCC f30300aa mov      x19, x0
0008EBD0 370040f9 ldr      x23, [x1]
0008EBD4 340c40f9 ldr      x20, [x1, #0x18]
0008EBD8 b40000b4 cbz      x20, #0x8ebec
0008EBDC e00314aa mov      x0, x20
0008EBE0 088c44f8 ldr      x8, [x0, #0x48]!
0008EBE4 080940f9 ldr      x8, [x8, #0x10]
0008EBE8 00013fd6 blr      x8
0008EBEC bf0216eb cmp      x21, x22
0008EBF0 20020054 b.eq     #0x8ec34
0008EBF4 a80240f9 ldr      x8, [x21]
0008EBF8 00c11891 add      x0, x8, #0x630
0008EBFC e8030091 mov      x8, sp
0008EC00 a4691194 bl       #0x4e9290
0008EC04 f80340f9 ldr      x24, [sp]
0008EC08 e00f40f9 ldr      x0, [sp, #0x18]
0008EC0C 800000b4 cbz      x0, #0x8ec1c
0008EC10 088c44f8 ldr      x8, [x0, #0x48]!
0008EC14 080d40f9 ldr      x8, [x8, #0x18]
0008EC18 00013fd6 blr      x8
0008EC1C 1f0317eb cmp      x24, x23
0008EC20 a0000054 b.eq     #0x8ec34
0008EC24 b5220091 add      x21, x21, #8
0008EC28 bf0216eb cmp      x21, x22
0008EC2C 41feff54 b.ne     #0x8ebf4
0008EC30 f50316aa mov      x21, x22
0008EC34 b40000b4 cbz      x20, #0x8ec48
0008EC38 888e44f8 ldr      x8, [x20, #0x48]!
0008EC3C e00314aa mov      x0, x20
0008EC40 080d40f9 ldr      x8, [x8, #0x18]
0008EC44 00013fd6 blr      x8
0008EC48 684240f9 ldr      x8, [x19, #0x80]
0008EC4C bf0208eb cmp      x21, x8
0008EC50 20020054 b.eq     #0x8ec94
0008EC54 b30240f9 ldr      x19, [x21]
0008EC58 130200b4 cbz      x19, #0x8ec98
0008EC5C e00313aa mov      x0, x19
0008EC60 080c45f8 ldr      x8, [x0, #0x50]!
0008EC64 080140f9 ldr      x8, [x8]
0008EC68 00013fd6 blr      x8
0008EC6C f40300aa mov      x20, x0
0008EC70 11000094 bl       #0x8ecb4
0008EC74 1f0014eb cmp      x0, x20
0008EC78 00010054 b.eq     #0x8ec98
0008EC7C 1f2003d5 nop      
0008EC80 940240f9 ldr      x20, [x20]
0008EC84 9f0200eb cmp      x20, x0
0008EC88 841a40fa ccmp     x20, #0, #4, ne
0008EC8C a1ffff54 b.ne     #0x8ec80
0008EC90 540000b5 cbnz     x20, #0x8ec98
0008EC94 f3031faa mov      x19, xzr
0008EC98 e00313aa mov      x0, x19
0008EC9C f44f45a9 ldp      x20, x19, [sp, #0x50]
0008ECA0 f65744a9 ldp      x22, x21, [sp, #0x40]
0008ECA4 f85f43a9 ldp      x24, x23, [sp, #0x30]
0008ECA8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0008ECAC ff830191 add      sp, sp, #0x60
0008ECB0 c0035fd6 ret      
~~~
### 0x8f154 (74 slots)
~~~asm
0008F154 ff4301d1 sub      sp, sp, #0x50
0008F158 fd7b01a9 stp      x29, x30, [sp, #0x10]
0008F15C f71300f9 str      x23, [sp, #0x20]
0008F160 f65703a9 stp      x22, x21, [sp, #0x30]
0008F164 f44f04a9 stp      x20, x19, [sp, #0x40]
0008F168 fd430091 add      x29, sp, #0x10
0008F16C 48d03bd5 mrs      x8, tpidr_el0
0008F170 17c97392 and      x23, x8, #0xffffffffffffe000
0008F174 e84e40f9 ldr      x8, [x23, #0x98]
0008F178 1f4100f1 cmp      x8, #0x10
0008F17C e0070054 b.eq     #0x8f278
0008F180 e80e088b add      x8, x23, x8, lsl #3
0008F184 f60302aa mov      x22, x2
0008F188 f30301aa mov      x19, x1
0008F18C e00301aa mov      x0, x1
0008F190 02018052 mov      w2, #8
0008F194 010d00f9 str      x1, [x8, #0x18]
0008F198 f50303aa mov      x21, x3
0008F19C e84e40f9 ldr      x8, [x23, #0x98]
0008F1A0 08050091 add      x8, x8, #1
0008F1A4 e84e00f9 str      x8, [x23, #0x98]
0008F1A8 280040f9 ldr      x8, [x1]
0008F1AC 010f8052 mov      w1, #0x78
0008F1B0 080940f9 ldr      x8, [x8, #0x10]
0008F1B4 00013fd6 blr      x8
0008F1B8 f40300aa mov      x20, x0
0008F1BC a00000b5 cbnz     x0, #0x8f1d0
0008F1C0 680240f9 ldr      x8, [x19]
0008F1C4 e00313aa mov      x0, x19
0008F1C8 085d40f9 ldr      x8, [x8, #0xb8]
0008F1CC 00013fd6 blr      x8
0008F1D0 c80240f9 ldr      x8, [x22]
0008F1D4 df0200f9 str      xzr, [x22]
0008F1D8 a1630091 add      x1, x29, #0x18
0008F1DC e2230091 add      x2, sp, #8
0008F1E0 e00314aa mov      x0, x20
0008F1E4 a80f00f9 str      x8, [x29, #0x18]
0008F1E8 a80240f9 ldr      x8, [x21]
0008F1EC bf0200f9 str      xzr, [x21]
0008F1F0 e80700f9 str      x8, [sp, #8]
0008F1F4 1e59fe97 bl       #0x2566c
0008F1F8 e83600f0 adrp     x8, #0x76e000
0008F1FC 08211991 add      x8, x8, #0x648
0008F200 09410091 add      x9, x8, #0x10
0008F204 890200f9 str      x9, [x20]
0008F208 09e10191 add      x9, x8, #0x78
0008F20C 08e10291 add      x8, x8, #0xb8
0008F210 e00740f9 ldr      x0, [sp, #8]
0008F214 89a204a9 stp      x9, x8, [x20, #0x48]
0008F218 a00000b4 cbz      x0, #0x8f22c
0008F21C 088c44f8 ldr      x8, [x0, #0x48]!
0008F220 080d40f9 ldr      x8, [x8, #0x18]
0008F224 00013fd6 blr      x8
0008F228 ff0700f9 str      xzr, [sp, #8]
0008F22C a00f40f9 ldr      x0, [x29, #0x18]
0008F230 800000b4 cbz      x0, #0x8f240
0008F234 088c44f8 ldr      x8, [x0, #0x48]!
0008F238 080d40f9 ldr      x8, [x8, #0x18]
0008F23C 00013fd6 blr      x8
0008F240 080f8052 mov      w8, #0x78
0008F244 09018052 mov      w9, #8
0008F248 e00314aa mov      x0, x20
0008F24C 93d200a9 stp      x19, x20, [x20, #8]
0008F250 88a601a9 stp      x8, x9, [x20, #0x18]
0008F254 e84e40f9 ldr      x8, [x23, #0x98]
0008F258 f44f44a9 ldp      x20, x19, [sp, #0x40]
0008F25C 080500d1 sub      x8, x8, #1
0008F260 f65743a9 ldp      x22, x21, [sp, #0x30]
0008F264 e84e00f9 str      x8, [x23, #0x98]
0008F268 f71340f9 ldr      x23, [sp, #0x20]
0008F26C fd7b41a9 ldp      x29, x30, [sp, #0x10]
0008F270 ff430191 add      sp, sp, #0x50
0008F274 c0035fd6 ret      
0008F278 66cefd97 bl       #0x2c10
~~~
### 0x8f3a4 (74 slots)
~~~asm
0008F3A4 ff4301d1 sub      sp, sp, #0x50
0008F3A8 fd7b01a9 stp      x29, x30, [sp, #0x10]
0008F3AC f71300f9 str      x23, [sp, #0x20]
0008F3B0 f65703a9 stp      x22, x21, [sp, #0x30]
0008F3B4 f44f04a9 stp      x20, x19, [sp, #0x40]
0008F3B8 fd430091 add      x29, sp, #0x10
0008F3BC 48d03bd5 mrs      x8, tpidr_el0
0008F3C0 17c97392 and      x23, x8, #0xffffffffffffe000
0008F3C4 e84e40f9 ldr      x8, [x23, #0x98]
0008F3C8 1f4100f1 cmp      x8, #0x10
0008F3CC e0070054 b.eq     #0x8f4c8
0008F3D0 e80e088b add      x8, x23, x8, lsl #3
0008F3D4 f60302aa mov      x22, x2
0008F3D8 f30301aa mov      x19, x1
0008F3DC e00301aa mov      x0, x1
0008F3E0 02018052 mov      w2, #8
0008F3E4 010d00f9 str      x1, [x8, #0x18]
0008F3E8 f50303aa mov      x21, x3
0008F3EC e84e40f9 ldr      x8, [x23, #0x98]
0008F3F0 08050091 add      x8, x8, #1
0008F3F4 e84e00f9 str      x8, [x23, #0x98]
0008F3F8 280040f9 ldr      x8, [x1]
0008F3FC 010f8052 mov      w1, #0x78
0008F400 080940f9 ldr      x8, [x8, #0x10]
0008F404 00013fd6 blr      x8
0008F408 f40300aa mov      x20, x0
0008F40C a00000b5 cbnz     x0, #0x8f420
0008F410 680240f9 ldr      x8, [x19]
0008F414 e00313aa mov      x0, x19
0008F418 085d40f9 ldr      x8, [x8, #0xb8]
0008F41C 00013fd6 blr      x8
0008F420 c80240f9 ldr      x8, [x22]
0008F424 df0200f9 str      xzr, [x22]
0008F428 a1630091 add      x1, x29, #0x18
0008F42C e2230091 add      x2, sp, #8
0008F430 e00314aa mov      x0, x20
0008F434 a80f00f9 str      x8, [x29, #0x18]
0008F438 a80240f9 ldr      x8, [x21]
0008F43C bf0200f9 str      xzr, [x21]
0008F440 e80700f9 str      x8, [sp, #8]
0008F444 8a58fe97 bl       #0x2566c
0008F448 e83600f0 adrp     x8, #0x76e000
0008F44C 08a11f91 add      x8, x8, #0x7e8
0008F450 09410091 add      x9, x8, #0x10
0008F454 890200f9 str      x9, [x20]
0008F458 09e10191 add      x9, x8, #0x78
0008F45C 08e10291 add      x8, x8, #0xb8
0008F460 e00740f9 ldr      x0, [sp, #8]
0008F464 89a204a9 stp      x9, x8, [x20, #0x48]
0008F468 a00000b4 cbz      x0, #0x8f47c
0008F46C 088c44f8 ldr      x8, [x0, #0x48]!
0008F470 080d40f9 ldr      x8, [x8, #0x18]
0008F474 00013fd6 blr      x8
0008F478 ff0700f9 str      xzr, [sp, #8]
0008F47C a00f40f9 ldr      x0, [x29, #0x18]
0008F480 800000b4 cbz      x0, #0x8f490
0008F484 088c44f8 ldr      x8, [x0, #0x48]!
0008F488 080d40f9 ldr      x8, [x8, #0x18]
0008F48C 00013fd6 blr      x8
0008F490 080f8052 mov      w8, #0x78
0008F494 09018052 mov      w9, #8
0008F498 e00314aa mov      x0, x20
0008F49C 93d200a9 stp      x19, x20, [x20, #8]
0008F4A0 88a601a9 stp      x8, x9, [x20, #0x18]
0008F4A4 e84e40f9 ldr      x8, [x23, #0x98]
0008F4A8 f44f44a9 ldp      x20, x19, [sp, #0x40]
0008F4AC 080500d1 sub      x8, x8, #1
0008F4B0 f65743a9 ldp      x22, x21, [sp, #0x30]
0008F4B4 e84e00f9 str      x8, [x23, #0x98]
0008F4B8 f71340f9 ldr      x23, [sp, #0x20]
0008F4BC fd7b41a9 ldp      x29, x30, [sp, #0x10]
0008F4C0 ff430191 add      sp, sp, #0x50
0008F4C4 c0035fd6 ret      
0008F4C8 d2cdfd97 bl       #0x2c10
~~~
### 0x96fbc (33 slots)
~~~asm
00096FBC ffc300d1 sub      sp, sp, #0x30
00096FC0 fd7b01a9 stp      x29, x30, [sp, #0x10]
00096FC4 f44f02a9 stp      x20, x19, [sp, #0x20]
00096FC8 fd430091 add      x29, sp, #0x10
00096FCC 140040f9 ldr      x20, [x0]
00096FD0 f30301aa mov      x19, x1
00096FD4 f40700f9 str      x20, [sp, #8]
00096FD8 b40100b4 cbz      x20, #0x9700c
00096FDC 888e44f8 ldr      x8, [x20, #0x48]!
00096FE0 e00314aa mov      x0, x20
00096FE4 080940f9 ldr      x8, [x8, #0x10]
00096FE8 00013fd6 blr      x8
00096FEC e0230091 add      x0, sp, #8
00096FF0 e10313aa mov      x1, x19
00096FF4 13000094 bl       #0x97040
00096FF8 880240f9 ldr      x8, [x20]
00096FFC e00314aa mov      x0, x20
00097000 080d40f9 ldr      x8, [x8, #0x18]
00097004 00013fd6 blr      x8
00097008 04000014 b        #0x97018
0009700C e0230091 add      x0, sp, #8
00097010 e10313aa mov      x1, x19
00097014 0b000094 bl       #0x97040
00097018 680240f9 ldr      x8, [x19]
0009701C 083140f9 ldr      x8, [x8, #0x60]
00097020 00210091 add      x0, x8, #8
00097024 f0140094 bl       #0x9c3e4
00097028 600240f9 ldr      x0, [x19]
0009702C e1031f2a mov      w1, wzr
00097030 f44f42a9 ldp      x20, x19, [sp, #0x20]
00097034 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00097038 ffc30091 add      sp, sp, #0x30
0009703C c2120014 b        #0x9bb44
~~~
### 0xc41b8 (2 slots)
~~~asm
000C41B8 21008052 mov      w1, #1
000C41BC a2c6fd17 b        #0x35c44
~~~
### 0xc41c0 (7 slots)
~~~asm
000C41C0 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
000C41C4 fd030091 mov      x29, sp
000C41C8 52c7fd97 bl       #0x35f10
000C41CC 28008052 mov      w8, #1
000C41D0 0001200a bic      w0, w8, w0
000C41D4 fd7bc1a8 ldp      x29, x30, [sp], #0x10
000C41D8 c0035fd6 ret      
~~~
### 0xc4240 (14 slots)
~~~asm
000C4240 ff8300d1 sub      sp, sp, #0x20
000C4244 fd7b01a9 stp      x29, x30, [sp, #0x10]
000C4248 fd430091 add      x29, sp, #0x10
000C424C c8f09ad2 mov      x8, #0xd786
000C4250 688cb5f2 movk     x8, #0xac63, lsl #16
000C4254 00400491 add      x0, x0, #0x110
000C4258 c87ac8f2 movk     x8, #0x43d6, lsl #32
000C425C e8aae5f2 movk     x8, #0x2d57, lsl #48
000C4260 e80700f9 str      x8, [sp, #8]
000C4264 e1230091 add      x1, sp, #8
000C4268 44a0fd97 bl       #0x2c378
000C426C fd7b41a9 ldp      x29, x30, [sp, #0x10]
000C4270 ff830091 add      sp, sp, #0x20
000C4274 c0035fd6 ret      
~~~
### 0xc4278 (40 slots)
~~~asm
000C4278 ffc300d1 sub      sp, sp, #0x30
000C427C fd7b01a9 stp      x29, x30, [sp, #0x10]
000C4280 f31300f9 str      x19, [sp, #0x20]
000C4284 fd430091 add      x29, sp, #0x10
000C4288 f30300aa mov      x19, x0
000C428C 006841f9 ldr      x0, [x0, #0x2d0]
000C4290 a80382d2 mov      x8, #0x101d
000C4294 28a5b4f2 movk     x8, #0xa529, lsl #16
000C4298 4809d1f2 movk     x8, #0x884a, lsl #32
000C429C 282aedf2 movk     x8, #0x6951, lsl #48
000C42A0 a80f00f9 str      x8, [x29, #0x18]
000C42A4 400200b4 cbz      x0, #0xc42ec
000C42A8 a1630091 add      x1, x29, #0x18
000C42AC 050f0894 bl       #0x2c7ec0
000C42B0 a0020036 tbz      w0, #0, #0xc4304
000C42B4 606a41f9 ldr      x0, [x19, #0x2d0]
000C42B8 c8f09ad2 mov      x8, #0xd786
000C42BC 688cb5f2 movk     x8, #0xac63, lsl #16
000C42C0 c87ac8f2 movk     x8, #0x43d6, lsl #32
000C42C4 e8aae5f2 movk     x8, #0x2d57, lsl #48
000C42C8 e80700f9 str      x8, [sp, #8]
000C42CC 000100b4 cbz      x0, #0xc42ec
000C42D0 e1230091 add      x1, sp, #8
000C42D4 fb0e0894 bl       #0x2c7ec0
000C42D8 f31340f9 ldr      x19, [sp, #0x20]
000C42DC 00000012 and      w0, w0, #1
000C42E0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
000C42E4 ffc30091 add      sp, sp, #0x30
000C42E8 c0035fd6 ret      
000C42EC 20008052 mov      w0, #1
000C42F0 f31340f9 ldr      x19, [sp, #0x20]
000C42F4 00000012 and      w0, w0, #1
000C42F8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
000C42FC ffc30091 add      sp, sp, #0x30
000C4300 c0035fd6 ret      
000C4304 f31340f9 ldr      x19, [sp, #0x20]
000C4308 e0030012 and      w0, wzr, #1
000C430C fd7b41a9 ldp      x29, x30, [sp, #0x10]
000C4310 ffc30091 add      sp, sp, #0x30
000C4314 c0035fd6 ret      
~~~
### 0xc4340 (2 slots)
~~~asm
000C4340 61008052 mov      w1, #3
000C4344 40c6fd17 b        #0x35c44
~~~
### 0xc4348 (7 slots)
~~~asm
000C4348 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
000C434C fd030091 mov      x29, sp
000C4350 f0c6fd97 bl       #0x35f10
000C4354 28008052 mov      w8, #1
000C4358 0001200a bic      w0, w8, w0
000C435C fd7bc1a8 ldp      x29, x30, [sp], #0x10
000C4360 c0035fd6 ret      
~~~
### 0xd6c04 (14 slots)
~~~asm
000D6C04 ff8300d1 sub      sp, sp, #0x20
000D6C08 fd7b01a9 stp      x29, x30, [sp, #0x10]
000D6C0C fd430091 add      x29, sp, #0x10
000D6C10 c8f09ad2 mov      x8, #0xd786
000D6C14 688cb5f2 movk     x8, #0xac63, lsl #16
000D6C18 00400491 add      x0, x0, #0x110
000D6C1C c87ac8f2 movk     x8, #0x43d6, lsl #32
000D6C20 e8aae5f2 movk     x8, #0x2d57, lsl #48
000D6C24 e80700f9 str      x8, [sp, #8]
000D6C28 e1230091 add      x1, sp, #8
000D6C2C d355fd97 bl       #0x2c378
000D6C30 fd7b41a9 ldp      x29, x30, [sp, #0x10]
000D6C34 ff830091 add      sp, sp, #0x20
000D6C38 c0035fd6 ret      
~~~
### 0xd6c3c (40 slots)
~~~asm
000D6C3C ffc300d1 sub      sp, sp, #0x30
000D6C40 fd7b01a9 stp      x29, x30, [sp, #0x10]
000D6C44 f31300f9 str      x19, [sp, #0x20]
000D6C48 fd430091 add      x29, sp, #0x10
000D6C4C f30300aa mov      x19, x0
000D6C50 006841f9 ldr      x0, [x0, #0x2d0]
000D6C54 a80382d2 mov      x8, #0x101d
000D6C58 28a5b4f2 movk     x8, #0xa529, lsl #16
000D6C5C 4809d1f2 movk     x8, #0x884a, lsl #32
000D6C60 282aedf2 movk     x8, #0x6951, lsl #48
000D6C64 a80f00f9 str      x8, [x29, #0x18]
000D6C68 400200b4 cbz      x0, #0xd6cb0
000D6C6C a1630091 add      x1, x29, #0x18
000D6C70 94c40794 bl       #0x2c7ec0
000D6C74 a0020036 tbz      w0, #0, #0xd6cc8
000D6C78 606a41f9 ldr      x0, [x19, #0x2d0]
000D6C7C c8f09ad2 mov      x8, #0xd786
000D6C80 688cb5f2 movk     x8, #0xac63, lsl #16
000D6C84 c87ac8f2 movk     x8, #0x43d6, lsl #32
000D6C88 e8aae5f2 movk     x8, #0x2d57, lsl #48
000D6C8C e80700f9 str      x8, [sp, #8]
000D6C90 000100b4 cbz      x0, #0xd6cb0
000D6C94 e1230091 add      x1, sp, #8
000D6C98 8ac40794 bl       #0x2c7ec0
000D6C9C f31340f9 ldr      x19, [sp, #0x20]
000D6CA0 00000012 and      w0, w0, #1
000D6CA4 fd7b41a9 ldp      x29, x30, [sp, #0x10]
000D6CA8 ffc30091 add      sp, sp, #0x30
000D6CAC c0035fd6 ret      
000D6CB0 20008052 mov      w0, #1
000D6CB4 f31340f9 ldr      x19, [sp, #0x20]
000D6CB8 00000012 and      w0, w0, #1
000D6CBC fd7b41a9 ldp      x29, x30, [sp, #0x10]
000D6CC0 ffc30091 add      sp, sp, #0x30
000D6CC4 c0035fd6 ret      
000D6CC8 f31340f9 ldr      x19, [sp, #0x20]
000D6CCC e0030012 and      w0, wzr, #1
000D6CD0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
000D6CD4 ffc30091 add      sp, sp, #0x30
000D6CD8 c0035fd6 ret      
~~~
### 0xd6d04 (2 slots)
~~~asm
000D6D04 61008052 mov      w1, #3
000D6D08 cf7bfd17 b        #0x35c44
~~~
### 0xd6d0c (7 slots)
~~~asm
000D6D0C fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
000D6D10 fd030091 mov      x29, sp
000D6D14 7f7cfd97 bl       #0x35f10
000D6D18 28008052 mov      w8, #1
000D6D1C 0001200a bic      w0, w8, w0
000D6D20 fd7bc1a8 ldp      x29, x30, [sp], #0x10
000D6D24 c0035fd6 ret      
~~~
### 0xd6efc (2 slots)
~~~asm
000D6EFC 006843f9 ldr      x0, [x0, #0x6d0]
000D6F00 d7130014 b        #0xdbe5c
~~~
### 0xe1450 (91 slots)
~~~asm
000E1450 ff4301d1 sub      sp, sp, #0x50
000E1454 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1458 f51b00f9 str      x21, [sp, #0x30]
000E145C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1460 fd830091 add      x29, sp, #0x20
000E1464 f30300aa mov      x19, x0
000E1468 c1290090 adrp     x1, #0x619000
000E146C 21900e91 add      x1, x1, #0x3a4
000E1470 e0030091 mov      x0, sp
000E1474 d8a2fc97 bl       #0x9fd4
000E1478 603a40f9 ldr      x0, [x19, #0x70]
000E147C 800000b4 cbz      x0, #0xe148c
000E1480 088c44f8 ldr      x8, [x0, #0x48]!
000E1484 080d40f9 ldr      x8, [x8, #0x18]
000E1488 00013fd6 blr      x8
000E148C e80340f9 ldr      x8, [sp]
000E1490 683a00f9 str      x8, [x19, #0x70]
000E1494 683240f9 ldr      x8, [x19, #0x60]
000E1498 143140f9 ldr      x20, [x8, #0x60]
000E149C 880240f9 ldr      x8, [x20]
000E14A0 e00314aa mov      x0, x20
000E14A4 080140f9 ldr      x8, [x8]
000E14A8 00013fd6 blr      x8
000E14AC f50300aa mov      x21, x0
000E14B0 2b13fd97 bl       #0x2615c
000E14B4 1f0015eb cmp      x0, x21
000E14B8 c0000054 b.eq     #0xe14d0
000E14BC 1f2003d5 nop      
000E14C0 b50240f9 ldr      x21, [x21]
000E14C4 bf0200eb cmp      x21, x0
000E14C8 a41a40fa ccmp     x21, #0, #4, ne
000E14CC a1ffff54 b.ne     #0xe14c0
000E14D0 80be42f9 ldr      x0, [x20, #0x578]
000E14D4 88539bd2 mov      x8, #0xda9c
000E14D8 2869b1f2 movk     x8, #0x8b49, lsl #16
000E14DC e886cef2 movk     x8, #0x7437, lsl #32
000E14E0 e8a7eef2 movk     x8, #0x753f, lsl #48
000E14E4 a92900b0 adrp     x9, #0x616000
000E14E8 29511f91 add      x9, x9, #0x7d4
000E14EC e82700a9 stp      x8, x9, [sp]
000E14F0 08018052 mov      w8, #8
000E14F4 e1030091 mov      x1, sp
000E14F8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E14FC 21b5fe97 bl       #0x8e980
000E1500 f40300aa mov      x20, x0
000E1504 e00f40f9 ldr      x0, [sp, #0x18]
000E1508 800000b4 cbz      x0, #0xe1518
000E150C 088c44f8 ldr      x8, [x0, #0x48]!
000E1510 080d40f9 ldr      x8, [x8, #0x18]
000E1514 00013fd6 blr      x8
000E1518 683640f9 ldr      x8, [x19, #0x68]
000E151C 133140f9 ldr      x19, [x8, #0x60]
000E1520 680240f9 ldr      x8, [x19]
000E1524 e00313aa mov      x0, x19
000E1528 080140f9 ldr      x8, [x8]
000E152C 00013fd6 blr      x8
000E1530 f50300aa mov      x21, x0
000E1534 5bb0fe97 bl       #0x8d6a0
000E1538 1f0015eb cmp      x0, x21
000E153C a0000054 b.eq     #0xe1550
000E1540 b50240f9 ldr      x21, [x21]
000E1544 bf0200eb cmp      x21, x0
000E1548 a41a40fa ccmp     x21, #0, #4, ne
000E154C a1ffff54 b.ne     #0xe1540
000E1550 685641b9 ldr      w8, [x19, #0x154]
000E1554 1f090071 cmp      w8, #2
000E1558 60010054 b.eq     #0xe1584
000E155C 1f050071 cmp      w8, #1
000E1560 00020054 b.eq     #0xe15a0
000E1564 08010035 cbnz     w8, #0xe1584
000E1568 e00314aa mov      x0, x20
000E156C 138bff97 bl       #0xc41b8
000E1570 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1574 f51b40f9 ldr      x21, [sp, #0x30]
000E1578 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E157C ff430191 add      sp, sp, #0x50
000E1580 c0035fd6 ret      
000E1584 e00314aa mov      x0, x20
000E1588 6e8bff97 bl       #0xc4340
000E158C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1590 f51b40f9 ldr      x21, [sp, #0x30]
000E1594 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1598 ff430191 add      sp, sp, #0x50
000E159C c0035fd6 ret      
000E15A0 e00314aa mov      x0, x20
000E15A4 278bff97 bl       #0xc4240
000E15A8 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E15AC f51b40f9 ldr      x21, [sp, #0x30]
000E15B0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E15B4 ff430191 add      sp, sp, #0x50
000E15B8 c0035fd6 ret      
~~~
### 0xe15c0 (100 slots)
~~~asm
000E15C0 ff4301d1 sub      sp, sp, #0x50
000E15C4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E15C8 f51b00f9 str      x21, [sp, #0x30]
000E15CC f44f04a9 stp      x20, x19, [sp, #0x40]
000E15D0 fd830091 add      x29, sp, #0x20
000E15D4 083040f9 ldr      x8, [x0, #0x60]
000E15D8 f40300aa mov      x20, x0
000E15DC 133140f9 ldr      x19, [x8, #0x60]
000E15E0 680240f9 ldr      x8, [x19]
000E15E4 e00313aa mov      x0, x19
000E15E8 080140f9 ldr      x8, [x8]
000E15EC 00013fd6 blr      x8
000E15F0 f50300aa mov      x21, x0
000E15F4 da12fd97 bl       #0x2615c
000E15F8 1f0015eb cmp      x0, x21
000E15FC a0000054 b.eq     #0xe1610
000E1600 b50240f9 ldr      x21, [x21]
000E1604 bf0200eb cmp      x21, x0
000E1608 a41a40fa ccmp     x21, #0, #4, ne
000E160C a1ffff54 b.ne     #0xe1600
000E1610 60be42f9 ldr      x0, [x19, #0x578]
000E1614 88539bd2 mov      x8, #0xda9c
000E1618 2869b1f2 movk     x8, #0x8b49, lsl #16
000E161C e886cef2 movk     x8, #0x7437, lsl #32
000E1620 e8a7eef2 movk     x8, #0x753f, lsl #48
000E1624 a92900b0 adrp     x9, #0x616000
000E1628 29511f91 add      x9, x9, #0x7d4
000E162C e82700a9 stp      x8, x9, [sp]
000E1630 08018052 mov      w8, #8
000E1634 e1030091 mov      x1, sp
000E1638 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E163C d1b4fe97 bl       #0x8e980
000E1640 f30300aa mov      x19, x0
000E1644 e00f40f9 ldr      x0, [sp, #0x18]
000E1648 800000b4 cbz      x0, #0xe1658
000E164C 088c44f8 ldr      x8, [x0, #0x48]!
000E1650 080d40f9 ldr      x8, [x8, #0x18]
000E1654 00013fd6 blr      x8
000E1658 883640f9 ldr      x8, [x20, #0x68]
000E165C 080300b4 cbz      x8, #0xe16bc
000E1660 143140f9 ldr      x20, [x8, #0x60]
000E1664 f40200b4 cbz      x20, #0xe16c0
000E1668 880240f9 ldr      x8, [x20]
000E166C e00314aa mov      x0, x20
000E1670 080140f9 ldr      x8, [x8]
000E1674 00013fd6 blr      x8
000E1678 f50300aa mov      x21, x0
000E167C 09b0fe97 bl       #0x8d6a0
000E1680 1f0015eb cmp      x0, x21
000E1684 00010054 b.eq     #0xe16a4
000E1688 1f2003d5 nop      
000E168C 1f2003d5 nop      
000E1690 b50240f9 ldr      x21, [x21]
000E1694 bf0200eb cmp      x21, x0
000E1698 a41a40fa ccmp     x21, #0, #4, ne
000E169C a1ffff54 b.ne     #0xe1690
000E16A0 550300b4 cbz      x21, #0xe1708
000E16A4 944201d1 sub      x20, x20, #0x50
000E16A8 88a641b9 ldr      w8, [x20, #0x1a4]
000E16AC e00313aa mov      x0, x19
000E16B0 1f090071 cmp      w8, #2
000E16B4 e1000054 b.ne     #0xe16d0
000E16B8 19000014 b        #0xe171c
000E16BC f4031faa mov      x20, xzr
000E16C0 88a641b9 ldr      w8, [x20, #0x1a4]
000E16C4 e00313aa mov      x0, x19
000E16C8 1f090071 cmp      w8, #2
000E16CC 80020054 b.eq     #0xe171c
000E16D0 1f050071 cmp      w8, #1
000E16D4 40010054 b.eq     #0xe16fc
000E16D8 28020035 cbnz     w8, #0xe171c
000E16DC b98aff97 bl       #0xc41c0
000E16E0 20020037 tbnz     w0, #0, #0xe1724
000E16E4 e0031f2a mov      w0, wzr
000E16E8 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E16EC f51b40f9 ldr      x21, [sp, #0x30]
000E16F0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E16F4 ff430191 add      sp, sp, #0x50
000E16F8 c0035fd6 ret      
000E16FC df8aff97 bl       #0xc4278
000E1700 20ff0736 tbz      w0, #0, #0xe16e4
000E1704 08000014 b        #0xe1724
000E1708 f4031faa mov      x20, xzr
000E170C 88a641b9 ldr      w8, [x20, #0x1a4]
000E1710 e00313aa mov      x0, x19
000E1714 1f090071 cmp      w8, #2
000E1718 c1fdff54 b.ne     #0xe16d0
000E171C 0b8bff97 bl       #0xc4348
000E1720 20fe0736 tbz      w0, #0, #0xe16e4
000E1724 88a641b9 ldr      w8, [x20, #0x1a4]
000E1728 1f0d0071 cmp      w8, #3
000E172C 63000054 b.lo     #0xe1738
000E1730 a8008052 mov      w8, #5
000E1734 88a203b9 str      w8, [x20, #0x3a0]
000E1738 20008052 mov      w0, #1
000E173C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E1740 f51b40f9 ldr      x21, [sp, #0x30]
000E1744 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E1748 ff430191 add      sp, sp, #0x50
000E174C c0035fd6 ret      
~~~
### 0xe1750 (105 slots)
~~~asm
000E1750 ff4301d1 sub      sp, sp, #0x50
000E1754 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1758 f51b00f9 str      x21, [sp, #0x30]
000E175C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1760 fd830091 add      x29, sp, #0x20
000E1764 083040f9 ldr      x8, [x0, #0x60]
000E1768 f30300aa mov      x19, x0
000E176C 143140f9 ldr      x20, [x8, #0x60]
000E1770 880240f9 ldr      x8, [x20]
000E1774 e00314aa mov      x0, x20
000E1778 080140f9 ldr      x8, [x8]
000E177C 00013fd6 blr      x8
000E1780 f50300aa mov      x21, x0
000E1784 7612fd97 bl       #0x2615c
000E1788 1f0015eb cmp      x0, x21
000E178C a0000054 b.eq     #0xe17a0
000E1790 b50240f9 ldr      x21, [x21]
000E1794 bf0200eb cmp      x21, x0
000E1798 a41a40fa ccmp     x21, #0, #4, ne
000E179C a1ffff54 b.ne     #0xe1790
000E17A0 80be42f9 ldr      x0, [x20, #0x578]
000E17A4 88539bd2 mov      x8, #0xda9c
000E17A8 2869b1f2 movk     x8, #0x8b49, lsl #16
000E17AC e886cef2 movk     x8, #0x7437, lsl #32
000E17B0 e8a7eef2 movk     x8, #0x753f, lsl #48
000E17B4 a92900b0 adrp     x9, #0x616000
000E17B8 29511f91 add      x9, x9, #0x7d4
000E17BC e82700a9 stp      x8, x9, [sp]
000E17C0 08018052 mov      w8, #8
000E17C4 e1030091 mov      x1, sp
000E17C8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E17CC 6db4fe97 bl       #0x8e980
000E17D0 f40300aa mov      x20, x0
000E17D4 e00f40f9 ldr      x0, [sp, #0x18]
000E17D8 800000b4 cbz      x0, #0xe17e8
000E17DC 088c44f8 ldr      x8, [x0, #0x48]!
000E17E0 080d40f9 ldr      x8, [x8, #0x18]
000E17E4 00013fd6 blr      x8
000E17E8 e00314aa mov      x0, x20
000E17EC e1031f2a mov      w1, wzr
000E17F0 22008052 mov      w2, #1
000E17F4 6f1dfd97 bl       #0x28db0
000E17F8 683640f9 ldr      x8, [x19, #0x68]
000E17FC e80200b4 cbz      x8, #0xe1858
000E1800 133140f9 ldr      x19, [x8, #0x60]
000E1804 d30200b4 cbz      x19, #0xe185c
000E1808 680240f9 ldr      x8, [x19]
000E180C e00313aa mov      x0, x19
000E1810 080140f9 ldr      x8, [x8]
000E1814 00013fd6 blr      x8
000E1818 f40300aa mov      x20, x0
000E181C a1affe97 bl       #0x8d6a0
000E1820 1f0014eb cmp      x0, x20
000E1824 00010054 b.eq     #0xe1844
000E1828 1f2003d5 nop      
000E182C 1f2003d5 nop      
000E1830 940240f9 ldr      x20, [x20]
000E1834 9f0200eb cmp      x20, x0
000E1838 841a40fa ccmp     x20, #0, #4, ne
000E183C a1ffff54 b.ne     #0xe1830
000E1840 140500b4 cbz      x20, #0xe18e0
000E1844 734201d1 sub      x19, x19, #0x50
000E1848 68a641b9 ldr      w8, [x19, #0x1a4]
000E184C 1f110071 cmp      w8, #4
000E1850 c0000054 b.eq     #0xe1868
000E1854 1e000014 b        #0xe18cc
000E1858 f3031faa mov      x19, xzr
000E185C 68a641b9 ldr      w8, [x19, #0x1a4]
000E1860 1f110071 cmp      w8, #4
000E1864 41030054 b.ne     #0xe18cc
000E1868 604a41f9 ldr      x0, [x19, #0x290]
000E186C a00f00f9 str      x0, [x29, #0x18]
000E1870 800000b4 cbz      x0, #0xe1880
000E1874 088c44f8 ldr      x8, [x0, #0x48]!
000E1878 080940f9 ldr      x8, [x8, #0x10]
000E187C 00013fd6 blr      x8
000E1880 604640f9 ldr      x0, [x19, #0x88]
000E1884 e00300f9 str      x0, [sp]
000E1888 800000b4 cbz      x0, #0xe1898
000E188C 088c44f8 ldr      x8, [x0, #0x48]!
000E1890 080940f9 ldr      x8, [x8, #0x10]
000E1894 00013fd6 blr      x8
000E1898 a0630091 add      x0, x29, #0x18
000E189C e1030091 mov      x1, sp
000E18A0 c7d5fe97 bl       #0x96fbc
000E18A4 e00340f9 ldr      x0, [sp]
000E18A8 800000b4 cbz      x0, #0xe18b8
000E18AC 088c44f8 ldr      x8, [x0, #0x48]!
000E18B0 080d40f9 ldr      x8, [x8, #0x18]
000E18B4 00013fd6 blr      x8
000E18B8 a00f40f9 ldr      x0, [x29, #0x18]
000E18BC 800000b4 cbz      x0, #0xe18cc
000E18C0 088c44f8 ldr      x8, [x0, #0x48]!
000E18C4 080d40f9 ldr      x8, [x8, #0x18]
000E18C8 00013fd6 blr      x8
000E18CC f44f44a9 ldp      x20, x19, [sp, #0x40]
000E18D0 f51b40f9 ldr      x21, [sp, #0x30]
000E18D4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E18D8 ff430191 add      sp, sp, #0x50
000E18DC c0035fd6 ret      
000E18E0 f3031faa mov      x19, xzr
000E18E4 68a641b9 ldr      w8, [x19, #0x1a4]
000E18E8 1f110071 cmp      w8, #4
000E18EC e0fbff54 b.eq     #0xe1868
000E18F0 f7ffff17 b        #0xe18cc
~~~
### 0xe18f4 (1 slots)
~~~asm
000E18F4 800ffd17 b        #0x256f4
~~~
### 0xe18f8 (2 slots)
~~~asm
000E18F8 002001d1 sub      x0, x0, #0x48
000E18FC 7e0ffd17 b        #0x256f4
~~~
### 0xe1900 (2 slots)
~~~asm
000E1900 002001d1 sub      x0, x0, #0x48
000E1904 7c0ffd17 b        #0x256f4
~~~
### 0xe1908 (2 slots)
~~~asm
000E1908 004001d1 sub      x0, x0, #0x50
000E190C 7a0ffd17 b        #0x256f4
~~~
### 0xe1910 (2 slots)
~~~asm
000E1910 004001d1 sub      x0, x0, #0x50
000E1914 780ffd17 b        #0x256f4
~~~
### 0xe1f60 (84 slots)
~~~asm
000E1F60 ff4301d1 sub      sp, sp, #0x50
000E1F64 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E1F68 f51b00f9 str      x21, [sp, #0x30]
000E1F6C f44f04a9 stp      x20, x19, [sp, #0x40]
000E1F70 fd830091 add      x29, sp, #0x20
000E1F74 f30300aa mov      x19, x0
000E1F78 412900f0 adrp     x1, #0x60c000
000E1F7C 21203d91 add      x1, x1, #0xf48
000E1F80 e0030091 mov      x0, sp
000E1F84 14a0fc97 bl       #0x9fd4
000E1F88 603a40f9 ldr      x0, [x19, #0x70]
000E1F8C 800000b4 cbz      x0, #0xe1f9c
000E1F90 088c44f8 ldr      x8, [x0, #0x48]!
000E1F94 080d40f9 ldr      x8, [x8, #0x18]
000E1F98 00013fd6 blr      x8
000E1F9C e80340f9 ldr      x8, [sp]
000E1FA0 683a00f9 str      x8, [x19, #0x70]
000E1FA4 683240f9 ldr      x8, [x19, #0x60]
000E1FA8 143140f9 ldr      x20, [x8, #0x60]
000E1FAC 880240f9 ldr      x8, [x20]
000E1FB0 e00314aa mov      x0, x20
000E1FB4 080140f9 ldr      x8, [x8]
000E1FB8 00013fd6 blr      x8
000E1FBC f50300aa mov      x21, x0
000E1FC0 6710fd97 bl       #0x2615c
000E1FC4 1f0015eb cmp      x0, x21
000E1FC8 c0000054 b.eq     #0xe1fe0
000E1FCC 1f2003d5 nop      
000E1FD0 b50240f9 ldr      x21, [x21]
000E1FD4 bf0200eb cmp      x21, x0
000E1FD8 a41a40fa ccmp     x21, #0, #4, ne
000E1FDC a1ffff54 b.ne     #0xe1fd0
000E1FE0 80be42f9 ldr      x0, [x20, #0x578]
000E1FE4 286496d2 mov      x8, #0xb321
000E1FE8 888abef2 movk     x8, #0xf454, lsl #16
000E1FEC 48c3c2f2 movk     x8, #0x161a, lsl #32
000E1FF0 28e8ecf2 movk     x8, #0x6741, lsl #48
000E1FF4 a9290090 adrp     x9, #0x615000
000E1FF8 29093191 add      x9, x9, #0xc42
000E1FFC e82700a9 stp      x8, x9, [sp]
000E2000 28018052 mov      w8, #9
000E2004 e1030091 mov      x1, sp
000E2008 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E200C e9b2fe97 bl       #0x8ebb0
000E2010 f40300aa mov      x20, x0
000E2014 e00f40f9 ldr      x0, [sp, #0x18]
000E2018 800000b4 cbz      x0, #0xe2028
000E201C 088c44f8 ldr      x8, [x0, #0x48]!
000E2020 080d40f9 ldr      x8, [x8, #0x18]
000E2024 00013fd6 blr      x8
000E2028 e00314aa mov      x0, x20
000E202C e1031f2a mov      w1, wzr
000E2030 22008052 mov      w2, #1
000E2034 1b1bfd97 bl       #0x28ca0
000E2038 683640f9 ldr      x8, [x19, #0x68]
000E203C 133140f9 ldr      x19, [x8, #0x60]
000E2040 680240f9 ldr      x8, [x19]
000E2044 e00313aa mov      x0, x19
000E2048 080140f9 ldr      x8, [x8]
000E204C 00013fd6 blr      x8
000E2050 f50300aa mov      x21, x0
000E2054 93adfe97 bl       #0x8d6a0
000E2058 1f0015eb cmp      x0, x21
000E205C a0000054 b.eq     #0xe2070
000E2060 b50240f9 ldr      x21, [x21]
000E2064 bf0200eb cmp      x21, x0
000E2068 a41a40fa ccmp     x21, #0, #4, ne
000E206C a1ffff54 b.ne     #0xe2060
000E2070 685641b9 ldr      w8, [x19, #0x154]
000E2074 e00314aa mov      x0, x20
000E2078 1f050071 cmp      w8, #1
000E207C e1000054 b.ne     #0xe2098
000E2080 e1d2ff97 bl       #0xd6c04
000E2084 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2088 f51b40f9 ldr      x21, [sp, #0x30]
000E208C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2090 ff430191 add      sp, sp, #0x50
000E2094 c0035fd6 ret      
000E2098 1bd3ff97 bl       #0xd6d04
000E209C f44f44a9 ldp      x20, x19, [sp, #0x40]
000E20A0 f51b40f9 ldr      x21, [sp, #0x30]
000E20A4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E20A8 ff430191 add      sp, sp, #0x50
000E20AC c0035fd6 ret      
~~~
### 0xe20b0 (108 slots)
~~~asm
000E20B0 ff4301d1 sub      sp, sp, #0x50
000E20B4 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E20B8 f65703a9 stp      x22, x21, [sp, #0x30]
000E20BC f44f04a9 stp      x20, x19, [sp, #0x40]
000E20C0 fd830091 add      x29, sp, #0x20
000E20C4 083040f9 ldr      x8, [x0, #0x60]
000E20C8 f30300aa mov      x19, x0
000E20CC 143140f9 ldr      x20, [x8, #0x60]
000E20D0 880240f9 ldr      x8, [x20]
000E20D4 e00314aa mov      x0, x20
000E20D8 080140f9 ldr      x8, [x8]
000E20DC 00013fd6 blr      x8
000E20E0 f50300aa mov      x21, x0
000E20E4 1e10fd97 bl       #0x2615c
000E20E8 1f0015eb cmp      x0, x21
000E20EC a0000054 b.eq     #0xe2100
000E20F0 b50240f9 ldr      x21, [x21]
000E20F4 bf0200eb cmp      x21, x0
000E20F8 a41a40fa ccmp     x21, #0, #4, ne
000E20FC a1ffff54 b.ne     #0xe20f0
000E2100 80be42f9 ldr      x0, [x20, #0x578]
000E2104 286496d2 mov      x8, #0xb321
000E2108 888abef2 movk     x8, #0xf454, lsl #16
000E210C 48c3c2f2 movk     x8, #0x161a, lsl #32
000E2110 28e8ecf2 movk     x8, #0x6741, lsl #48
000E2114 892900f0 adrp     x9, #0x615000
000E2118 29093191 add      x9, x9, #0xc42
000E211C e82700a9 stp      x8, x9, [sp]
000E2120 28018052 mov      w8, #9
000E2124 e1030091 mov      x1, sp
000E2128 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E212C a1b2fe97 bl       #0x8ebb0
000E2130 f40300aa mov      x20, x0
000E2134 e00f40f9 ldr      x0, [sp, #0x18]
000E2138 800000b4 cbz      x0, #0xe2148
000E213C 088c44f8 ldr      x8, [x0, #0x48]!
000E2140 080d40f9 ldr      x8, [x8, #0x18]
000E2144 00013fd6 blr      x8
000E2148 683640f9 ldr      x8, [x19, #0x68]
000E214C 480600b4 cbz      x8, #0xe2214
000E2150 153140f9 ldr      x21, [x8, #0x60]
000E2154 350600b4 cbz      x21, #0xe2218
000E2158 a80240f9 ldr      x8, [x21]
000E215C e00315aa mov      x0, x21
000E2160 080140f9 ldr      x8, [x8]
000E2164 00013fd6 blr      x8
000E2168 f60300aa mov      x22, x0
000E216C 4dadfe97 bl       #0x8d6a0
000E2170 1f0016eb cmp      x0, x22
000E2174 00010054 b.eq     #0xe2194
000E2178 1f2003d5 nop      
000E217C 1f2003d5 nop      
000E2180 d60240f9 ldr      x22, [x22]
000E2184 df0200eb cmp      x22, x0
000E2188 c41a40fa ccmp     x22, #0, #4, ne
000E218C a1ffff54 b.ne     #0xe2180
000E2190 d60500b4 cbz      x22, #0xe2248
000E2194 b54201d1 sub      x21, x21, #0x50
000E2198 a8a641b9 ldr      w8, [x21, #0x1a4]
000E219C e00314aa mov      x0, x20
000E21A0 1f050071 cmp      w8, #1
000E21A4 20040054 b.eq     #0xe2228
000E21A8 d9d2ff97 bl       #0xd6d0c
000E21AC 20040036 tbz      w0, #0, #0xe2230
000E21B0 a8a641b9 ldr      w8, [x21, #0x1a4]
000E21B4 1f090071 cmp      w8, #2
000E21B8 23020054 b.lo     #0xe21fc
000E21BC 683640f9 ldr      x8, [x19, #0x68]
000E21C0 133140f9 ldr      x19, [x8, #0x60]
000E21C4 680240f9 ldr      x8, [x19]
000E21C8 e00313aa mov      x0, x19
000E21CC 080140f9 ldr      x8, [x8]
000E21D0 00013fd6 blr      x8
000E21D4 f40300aa mov      x20, x0
000E21D8 32adfe97 bl       #0x8d6a0
000E21DC 1f0014eb cmp      x0, x20
000E21E0 a0000054 b.eq     #0xe21f4
000E21E4 940240f9 ldr      x20, [x20]
000E21E8 9f0200eb cmp      x20, x0
000E21EC 841a40fa ccmp     x20, #0, #4, ne
000E21F0 a1ffff54 b.ne     #0xe21e4
000E21F4 48008052 mov      w8, #2
000E21F8 685203b9 str      w8, [x19, #0x350]
000E21FC 20008052 mov      w0, #1
000E2200 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2204 f65743a9 ldp      x22, x21, [sp, #0x30]
000E2208 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E220C ff430191 add      sp, sp, #0x50
000E2210 c0035fd6 ret      
000E2214 f5031faa mov      x21, xzr
000E2218 a8a641b9 ldr      w8, [x21, #0x1a4]
000E221C e00314aa mov      x0, x20
000E2220 1f050071 cmp      w8, #1
000E2224 21fcff54 b.ne     #0xe21a8
000E2228 85d2ff97 bl       #0xd6c3c
000E222C 20fc0737 tbnz     w0, #0, #0xe21b0
000E2230 e0031f2a mov      w0, wzr
000E2234 f44f44a9 ldp      x20, x19, [sp, #0x40]
000E2238 f65743a9 ldp      x22, x21, [sp, #0x30]
000E223C fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2240 ff430191 add      sp, sp, #0x50
000E2244 c0035fd6 ret      
000E2248 f5031faa mov      x21, xzr
000E224C a8a641b9 ldr      w8, [x21, #0x1a4]
000E2250 e00314aa mov      x0, x20
000E2254 1f050071 cmp      w8, #1
000E2258 80feff54 b.eq     #0xe2228
000E225C d3ffff17 b        #0xe21a8
~~~
### 0xe2260 (48 slots)
~~~asm
000E2260 ff0301d1 sub      sp, sp, #0x40
000E2264 fd7b02a9 stp      x29, x30, [sp, #0x20]
000E2268 f44f03a9 stp      x20, x19, [sp, #0x30]
000E226C fd830091 add      x29, sp, #0x20
000E2270 083040f9 ldr      x8, [x0, #0x60]
000E2274 133140f9 ldr      x19, [x8, #0x60]
000E2278 680240f9 ldr      x8, [x19]
000E227C e00313aa mov      x0, x19
000E2280 080140f9 ldr      x8, [x8]
000E2284 00013fd6 blr      x8
000E2288 f40300aa mov      x20, x0
000E228C b40ffd97 bl       #0x2615c
000E2290 1f0014eb cmp      x0, x20
000E2294 e0000054 b.eq     #0xe22b0
000E2298 1f2003d5 nop      
000E229C 1f2003d5 nop      
000E22A0 940240f9 ldr      x20, [x20]
000E22A4 9f0200eb cmp      x20, x0
000E22A8 841a40fa ccmp     x20, #0, #4, ne
000E22AC a1ffff54 b.ne     #0xe22a0
000E22B0 60be42f9 ldr      x0, [x19, #0x578]
000E22B4 286496d2 mov      x8, #0xb321
000E22B8 888abef2 movk     x8, #0xf454, lsl #16
000E22BC 48c3c2f2 movk     x8, #0x161a, lsl #32
000E22C0 28e8ecf2 movk     x8, #0x6741, lsl #48
000E22C4 892900f0 adrp     x9, #0x615000
000E22C8 29093191 add      x9, x9, #0xc42
000E22CC e82700a9 stp      x8, x9, [sp]
000E22D0 28018052 mov      w8, #9
000E22D4 e1030091 mov      x1, sp
000E22D8 e87f01a9 stp      x8, xzr, [sp, #0x10]
000E22DC 35b2fe97 bl       #0x8ebb0
000E22E0 f30300aa mov      x19, x0
000E22E4 e00f40f9 ldr      x0, [sp, #0x18]
000E22E8 800000b4 cbz      x0, #0xe22f8
000E22EC 088c44f8 ldr      x8, [x0, #0x48]!
000E22F0 080d40f9 ldr      x8, [x8, #0x18]
000E22F4 00013fd6 blr      x8
000E22F8 e00313aa mov      x0, x19
000E22FC e1031f2a mov      w1, wzr
000E2300 22008052 mov      w2, #1
000E2304 ab1afd97 bl       #0x28db0
000E2308 e00313aa mov      x0, x19
000E230C fcd2ff97 bl       #0xd6efc
000E2310 f44f43a9 ldp      x20, x19, [sp, #0x30]
000E2314 fd7b42a9 ldp      x29, x30, [sp, #0x20]
000E2318 ff030191 add      sp, sp, #0x40
000E231C c0035fd6 ret      
~~~
### 0xe2320 (1 slots)
~~~asm
000E2320 f50cfd17 b        #0x256f4
~~~
### 0xe2324 (2 slots)
~~~asm
000E2324 002001d1 sub      x0, x0, #0x48
000E2328 f30cfd17 b        #0x256f4
~~~
### 0xe232c (2 slots)
~~~asm
000E232C 002001d1 sub      x0, x0, #0x48
000E2330 f10cfd17 b        #0x256f4
~~~
### 0xe2334 (2 slots)
~~~asm
000E2334 004001d1 sub      x0, x0, #0x50
000E2338 ef0cfd17 b        #0x256f4
~~~
### 0xe233c (2 slots)
~~~asm
000E233C 004001d1 sub      x0, x0, #0x50
000E2340 ed0cfd17 b        #0x256f4
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
