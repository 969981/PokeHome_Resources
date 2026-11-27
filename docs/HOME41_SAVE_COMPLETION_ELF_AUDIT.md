# HOME41 SaveTick completion and scene handoff
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
## SaveTick jump table
- state 0: raw offset 0x0
- state 1: raw offset 0x5
- state 2: raw offset 0xe6
- state 3: raw offset 0xeb
- state 4: raw offset 0xf3
- state 5: raw offset 0x142
- state 6: raw offset 0x148
- state 7: raw offset 0x196
- state 8: raw offset 0x1ad
- state 9: raw offset 0x1ca
- state 10: raw offset 0x1ce

## Direct callers
### caller 0x6c208
0006C478 b2010094 bl       #0x6cb40
### caller 0x10a130
0010A630 88a20494 bl       #0x233050
### caller 0x11890c
0011893C b9d00394 bl       #0x20cc20
### caller 0x118e10
00119188 82d21094 bl       #0x54db90
### caller 0x14adf8
0014AE04 87070394 bl       #0x20cc20
### caller 0x14b7b4
0014B7C0 18050394 bl       #0x20cc20
### caller 0x14bbac
0014BBB8 1a040394 bl       #0x20cc20
### caller 0x175ecc
00175F9C 215b0294 bl       #0x20cc20
### caller 0x213390
00214138 bae2ff97 bl       #0x20cc20
### caller 0x221dc0
00221F58 0eaf0c94 bl       #0x54db90
### caller 0x222230
002223CC f1ad0c94 bl       #0x54db90
### caller 0x222c70
00222E10 60ab0c94 bl       #0x54db90
### caller 0x224e80
002251CC 71a20c94 bl       #0x54db90
### caller 0x225490
00225880 c4a00c94 bl       #0x54db90
### caller 0x226420
00226460 f099ff97 bl       #0x20cc20
### caller 0x227260
00227424 db990c94 bl       #0x54db90
### caller 0x228edc
00228EDC 5d280014 b        #0x233050
### caller 0x229bd0
00229BD0 20250014 b        #0x233050
### caller 0x22a7dc
0022A7DC 1d220014 b        #0x233050
### caller 0x22b4d0
0022B4D0 e01e0014 b        #0x233050
### caller 0x22b4e0
0022B4E0 dc1e0014 b        #0x233050
### caller 0x22c1b0
0022C1B0 a81b0014 b        #0x233050
### caller 0x22c1cc
0022C248 7682ff97 bl       #0x20cc20
### caller 0x22cb94
0022CC14 0380ff97 bl       #0x20cc20
### caller 0x22e5a0
0022E738 167d0c94 bl       #0x54db90
### caller 0x22ea00
0022EB98 fe7b0c94 bl       #0x54db90
### caller 0x22ee60
0022EFF8 e67a0c94 bl       #0x54db90
### caller 0x22f2e0
0022F488 c2790c94 bl       #0x54db90
### caller 0x22f7b0
0022F9AC 79780c94 bl       #0x54db90
### caller 0x22fc50
0022FDE8 6a770c94 bl       #0x54db90
### caller 0x2300b0
0023025C 4d760c94 bl       #0x54db90
### caller 0x230520
002306CC 31750c94 bl       #0x54db90
### caller 0x230930
00230AC8 32740c94 bl       #0x54db90
### caller 0x230d30
00230EC8 32730c94 bl       #0x54db90
### caller 0x231130
002312C8 32720c94 bl       #0x54db90
### caller 0x231530
002316C8 32710c94 bl       #0x54db90
### caller 0x231930
00231AC8 32700c94 bl       #0x54db90
### caller 0x231d90
00231F28 1a6f0c94 bl       #0x54db90
### caller 0x232190
00232328 1a6e0c94 bl       #0x54db90
### caller 0x232590
00232728 1a6d0c94 bl       #0x54db90
### caller 0x232990
00232C1C dd6b0c94 bl       #0x54db90
### caller 0x246e40
00247344 3716ff97 bl       #0x20cc20
### caller 0x248bb0
002492CC 550eff97 bl       #0x20cc20
### caller 0x24b294
0024B44C f505ff97 bl       #0x20cc20
0024B658 7205ff97 bl       #0x20cc20
### caller 0x24c470
0024CB9C 2100ff97 bl       #0x20cc20
### caller 0x252cc4
002530BC d9e6fe97 bl       #0x20cc20
### caller 0x2542d0
00254640 78e1fe97 bl       #0x20cc20
0025465C 71e1fe97 bl       #0x20cc20
### caller 0x54c190
0054C1A8 ce080094 bl       #0x54e4e0
### caller 0x54e340
0054E3C4 47000094 bl       #0x54e4e0
### caller 0x54e6f0
0054E754 63ffff97 bl       #0x54e4e0

## Relocated references
- 0x768d18 -> 0x24c50
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
- 0x76c160 -> 0x24c50
- 0x76cb80 -> 0x24c50
- 0x76ce68 -> 0x24c50
- 0x76d3e8 -> 0x24c50
- 0x76f8a8 -> 0x24c50
- 0x76fe40 -> 0x24c50
- 0x770d20 -> 0x24c50
- 0x771158 -> 0x11a14c
- 0x771858 -> 0x24c50
- 0x771dd8 -> 0x24c50
- 0x772358 -> 0x24c50
- 0x773b90 -> 0x24c50
- 0x774128 -> 0x24c50
- 0x774d80 -> 0x24c50
- 0x775548 -> 0x24c50
- 0x775df0 -> 0x24c50
- 0x776428 -> 0x24c50
- 0x7768f0 -> 0x24c50
- 0x776e58 -> 0x24c50
- 0x7779e0 -> 0x24c50
- 0x77d900 -> 0x228388
- 0x77d998 -> 0x22867c
  0x77d968: unresolved
  0x77d970: 0x2285a8
  0x77d978: 0x2285ac
  0x77d980: 0x228614
  0x77d988: unresolved
  0x77d990: unresolved
  0x77d998: 0x22867c
  0x77d9a0: 0x2286a4
  0x77d9a8: 0x22874c
  0x77d9b0: unresolved
  0x77d9b8: unresolved
  0x77d9c0: 0x229004
  0x77d9c8: 0x22906c
- 0x77d9a0 -> 0x2286a4
  0x77d970: 0x2285a8
  0x77d978: 0x2285ac
  0x77d980: 0x228614
  0x77d988: unresolved
  0x77d990: unresolved
  0x77d998: 0x22867c
  0x77d9a0: 0x2286a4
  0x77d9a8: 0x22874c
  0x77d9b0: unresolved
  0x77d9b8: unresolved
  0x77d9c0: 0x229004
  0x77d9c8: 0x22906c
  0x77d9d0: 0x1029c
- 0x77f4d0 -> 0x24c470
  0x77f4a0: 0x11b530
  0x77f4a8: 0x11b538
  0x77f4b0: unresolved
  0x77f4b8: unresolved
  0x77f4c0: 0x24ed80
  0x77f4c8: 0x24eeb0
  0x77f4d0: 0x24c470
  0x77f4d8: 0x24ed78
  0x77f4e0: 0x11b4cc
  0x77f4e8: 0x11b500
  0x77f4f0: 0x11b510
  0x77f4f8: 0x11b518
  0x77f500: 0x11b520

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
### 0x16948 (1 slots)
~~~asm
00016948 03000014 b        #0x16954
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
### 0x6cb40 (92 slots)
~~~asm
0006CB40 ff4301d1 sub      sp, sp, #0x50
0006CB44 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006CB48 f71300f9 str      x23, [sp, #0x20]
0006CB4C f65703a9 stp      x22, x21, [sp, #0x30]
0006CB50 f44f04a9 stp      x20, x19, [sp, #0x40]
0006CB54 fd430091 add      x29, sp, #0x10
0006CB58 f30300aa mov      x19, x0
0006CB5C d9d30694 bl       #0x221ac0
0006CB60 889a8652 mov      w8, #0x34d4
0006CB64 2801a072 movk     w8, #9, lsl #16
0006CB68 1f682838 strb     wzr, [x0, x8]
0006CB6C a83b00b0 adrp     x8, #0x7e1000
0006CB70 08811791 add      x8, x8, #0x5e0
0006CB74 000140f9 ldr      x0, [x8]
0006CB78 299fff97 bl       #0x5481c
0006CB7C 893900f0 adrp     x9, #0x79f000
0006CB80 28008052 mov      w8, #1
0006CB84 29ed41f9 ldr      x9, [x9, #0x3d8]
0006CB88 68aa00b9 str      w8, [x19, #0xa8]
0006CB8C 280140f9 ldr      x8, [x9]
0006CB90 893900f0 adrp     x9, #0x79f000
0006CB94 153540f9 ldr      x21, [x8, #0x68]
0006CB98 082540f9 ldr      x8, [x8, #0x48]
0006CB9C 297942f9 ldr      x9, [x9, #0x4f0]
0006CBA0 a80f00f9 str      x8, [x29, #0x18]
0006CBA4 280140f9 ldr      x8, [x9]
0006CBA8 143140f9 ldr      x20, [x8, #0x60]
0006CBAC b40000b4 cbz      x20, #0x6cbc0
0006CBB0 e00314aa mov      x0, x20
0006CBB4 088c44f8 ldr      x8, [x0, #0x48]!
0006CBB8 080940f9 ldr      x8, [x8, #0x10]
0006CBBC 00013fd6 blr      x8
0006CBC0 e8230091 add      x8, sp, #8
0006CBC4 a2630091 add      x2, x29, #0x18
0006CBC8 e00314aa mov      x0, x20
0006CBCC e10315aa mov      x1, x21
0006CBD0 200e0094 bl       #0x70450
0006CBD4 888e44f8 ldr      x8, [x20, #0x48]!
0006CBD8 e00314aa mov      x0, x20
0006CBDC 080d40f9 ldr      x8, [x8, #0x18]
0006CBE0 00013fd6 blr      x8
0006CBE4 f40740f9 ldr      x20, [sp, #8]
0006CBE8 340400b4 cbz      x20, #0x6cc6c
0006CBEC 965640b9 ldr      w22, [x20, #0x54]
0006CBF0 f6030034 cbz      w22, #0x6cc6c
0006CBF4 95520191 add      x21, x20, #0x54
0006CBF8 07000014 b        #0x6cc14
0006CBFC 1f2003d5 nop      
0006CC00 5f3f03d5 clrex    
0006CC04 e9031f2a mov      w9, wzr
0006CC08 9f020037 tbnz     wzr, #0, #0x6cc58
0006CC0C f603082a mov      w22, w8
0006CC10 e8020034 cbz      w8, #0x6cc6c
0006CC14 972e40f9 ldr      x23, [x20, #0x58]
0006CC18 78100094 bl       #0x70df8
0006CC1C 1f0017eb cmp      x0, x23
0006CC20 c0000054 b.eq     #0x6cc38
0006CC24 f70240f9 ldr      x23, [x23]
0006CC28 ff0200eb cmp      x23, x0
0006CC2C e41a40fa ccmp     x23, #0, #4, ne
0006CC30 a1ffff54 b.ne     #0x6cc24
0006CC34 d70100b4 cbz      x23, #0x6cc6c
0006CC38 a87e5f88 ldxr     w8, [x21]
0006CC3C 1f01166b cmp      w8, w22
0006CC40 01feff54 b.ne     #0x6cc00
0006CC44 c9060011 add      w9, w22, #1
0006CC48 a97e0a88 stxr     w10, w9, [x21]
0006CC4C cafdff35 cbnz     w10, #0x6cc04
0006CC50 29008052 mov      w9, #1
0006CC54 c9fd0736 tbz      w9, #0, #0x6cc0c
0006CC58 883240f9 ldr      x8, [x20, #0x60]
0006CC5C 094101d1 sub      x9, x8, #0x50
0006CC60 1f0100f1 cmp      x8, #0
0006CC64 e003899a csel     x0, xzr, x9, eq
0006CC68 02000014 b        #0x6cc70
0006CC6C e0031faa mov      x0, xzr
0006CC70 088c44f8 ldr      x8, [x0, #0x48]!
0006CC74 69220291 add      x9, x19, #0x88
0006CC78 09fc04f9 str      x9, [x0, #0x9f8]
0006CC7C 080d40f9 ldr      x8, [x8, #0x18]
0006CC80 00013fd6 blr      x8
0006CC84 e00740f9 ldr      x0, [sp, #8]
0006CC88 800000b4 cbz      x0, #0x6cc98
0006CC8C 088c44f8 ldr      x8, [x0, #0x48]!
0006CC90 080d40f9 ldr      x8, [x8, #0x18]
0006CC94 00013fd6 blr      x8
0006CC98 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006CC9C f71340f9 ldr      x23, [sp, #0x20]
0006CCA0 f65743a9 ldp      x22, x21, [sp, #0x30]
0006CCA4 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006CCA8 ff430191 add      sp, sp, #0x50
0006CCAC c0035fd6 ret      
~~~
### 0x10a130 (369 slots)
~~~asm
0010A130 ffc301d1 sub      sp, sp, #0x70
0010A134 fd7b02a9 stp      x29, x30, [sp, #0x20]
0010A138 fa6703a9 stp      x26, x25, [sp, #0x30]
0010A13C f85f04a9 stp      x24, x23, [sp, #0x40]
0010A140 f65705a9 stp      x22, x21, [sp, #0x50]
0010A144 f44f06a9 stp      x20, x19, [sp, #0x60]
0010A148 fd830091 add      x29, sp, #0x20
0010A14C f40300aa mov      x20, x0
0010A150 f30308aa mov      x19, x8
0010A154 410400b4 cbz      x1, #0x10a1dc
0010A158 283840f9 ldr      x8, [x1, #0x70]
0010A15C ba3400b0 adrp     x26, #0x79f000
0010A160 19ab8dd2 mov      x25, #0x6d58
0010A164 39a3bef2 movk     x25, #0xf519, lsl #16
0010A168 5ae742f9 ldr      x26, [x26, #0x5c8]
0010A16C f9a8c0f2 movk     x25, #0x547, lsl #32
0010A170 993df8f2 movk     x25, #0xc1ec, lsl #48
0010A174 f50301aa mov      x21, x1
0010A178 09610191 add      x9, x8, #0x58
0010A17C 1f0100f1 cmp      x8, #0
0010A180 4903899a csel     x9, x26, x9, eq
0010A184 290140f9 ldr      x9, [x9]
0010A188 3f0119eb cmp      x9, x25
0010A18C 21050054 b.ne     #0x10a230
0010A190 09610191 add      x9, x8, #0x58
0010A194 1f0100f1 cmp      x8, #0
0010A198 4803899a csel     x8, x26, x9, eq
0010A19C 29389dd2 mov      x9, #0xe9c1
0010A1A0 898cacf2 movk     x9, #0x6464, lsl #16
0010A1A4 080140f9 ldr      x8, [x8]
0010A1A8 e99bd2f2 movk     x9, #0x94df, lsl #32
0010A1AC a950e4f2 movk     x9, #0x2285, lsl #48
0010A1B0 1f0109eb cmp      x8, x9
0010A1B4 0c090054 b.gt     #0x10a2d4
0010A1B8 e9cf9bd2 mov      x9, #0xde7f
0010A1BC c970b3f2 movk     x9, #0x9b86, lsl #16
0010A1C0 894fd5f2 movk     x9, #0xaa7c, lsl #32
0010A1C4 09acf1f2 movk     x9, #0x8d60, lsl #48
0010A1C8 1f0109eb cmp      x8, x9
0010A1CC 80100054 b.eq     #0x10a3dc
0010A1D0 1f0119eb cmp      x8, x25
0010A1D4 00230054 b.eq     #0x10a634
0010A1D8 46010014 b        #0x10a6f0
0010A1DC e00314aa mov      x0, x20
0010A1E0 ef6cfc97 bl       #0x2559c
0010A1E4 880240f9 ldr      x8, [x20]
0010A1E8 f50300aa mov      x21, x0
0010A1EC e00314aa mov      x0, x20
0010A1F0 090940f9 ldr      x9, [x8, #0x10]
0010A1F4 e8430091 add      x8, sp, #0x10
0010A1F8 20013fd6 blr      x9
0010A1FC 80a641f9 ldr      x0, [x20, #0x348]
0010A200 080040f9 ldr      x8, [x0]
0010A204 090940f9 ldr      x9, [x8, #0x10]
0010A208 e8230091 add      x8, sp, #8
0010A20C 20013fd6 blr      x9
0010A210 a00700d1 sub      x0, x29, #1
0010A214 e2430091 add      x2, sp, #0x10
0010A218 e3230091 add      x3, sp, #8
0010A21C e10315aa mov      x1, x21
0010A220 09030094 bl       #0x10ae44
0010A224 f40300aa mov      x20, x0
0010A228 601e00b5 cbnz     x0, #0x10a5f4
0010A22C f6000014 b        #0x10a604
0010A230 80a641f9 ldr      x0, [x20, #0x348]
0010A234 080040f9 ldr      x8, [x0]
0010A238 090940f9 ldr      x9, [x8, #0x10]
0010A23C e8430091 add      x8, sp, #0x10
0010A240 20013fd6 blr      x9
0010A244 f60b40f9 ldr      x22, [sp, #0x10]
0010A248 562500b4 cbz      x22, #0x10a6f0
0010A24C d73240f9 ldr      x23, [x22, #0x60]
0010A250 f70100b4 cbz      x23, #0x10a28c
0010A254 e80240f9 ldr      x8, [x23]
0010A258 e00317aa mov      x0, x23
0010A25C 080140f9 ldr      x8, [x8]
0010A260 00013fd6 blr      x8
0010A264 f80300aa mov      x24, x0
0010A268 d5010094 bl       #0x10a9bc
0010A26C 1f0018eb cmp      x0, x24
0010A270 c0000054 b.eq     #0x10a288
0010A274 180340f9 ldr      x24, [x24]
0010A278 1f0300eb cmp      x24, x0
0010A27C 041b40fa ccmp     x24, #0, #4, ne
0010A280 a1ffff54 b.ne     #0x10a274
0010A284 b81e00b4 cbz      x24, #0x10a658
0010A288 f74201d1 sub      x23, x23, #0x50
0010A28C c88e44f8 ldr      x8, [x22, #0x48]!
0010A290 e00316aa mov      x0, x22
0010A294 080d40f9 ldr      x8, [x8, #0x18]
0010A298 00013fd6 blr      x8
0010A29C b72200b4 cbz      x23, #0x10a6f0
0010A2A0 e86a40b9 ldr      w8, [x23, #0x68]
0010A2A4 1f210071 cmp      w8, #8
0010A2A8 08150054 b.hi     #0x10a548
0010A2AC e92800d0 adrp     x9, #0x628000
0010A2B0 29613e91 add      x9, x9, #0xf98
0010A2B4 8a000010 adr      x10, #0x10a2c4
0010A2B8 2b696838 ldrb     w11, [x9, x8]
0010A2BC 4a090b8b add      x10, x10, x11, lsl #2
0010A2C0 40011fd6 br       x10
0010A2C4 e00314aa mov      x0, x20
0010A2C8 b56cfc97 bl       #0x2559c
0010A2CC f50300aa mov      x21, x0
0010A2D0 8c000014 b        #0x10a500
0010A2D4 49389dd2 mov      x9, #0xe9c2
0010A2D8 898cacf2 movk     x9, #0x6464, lsl #16
0010A2DC e99bd2f2 movk     x9, #0x94df, lsl #32
0010A2E0 a950e4f2 movk     x9, #0x2285, lsl #48
0010A2E4 1f0109eb cmp      x8, x9
0010A2E8 400a0054 b.eq     #0x10a430
0010A2EC c92986d2 mov      x9, #0x314e
0010A2F0 093fa4f2 movk     x9, #0x21f8, lsl #16
0010A2F4 29e6ddf2 movk     x9, #0xef31, lsl #32
0010A2F8 894ee9f2 movk     x9, #0x4a74, lsl #48
0010A2FC 1f0109eb cmp      x8, x9
0010A300 811f0054 b.ne     #0x10a6f0
0010A304 80a641f9 ldr      x0, [x20, #0x348]
0010A308 080040f9 ldr      x8, [x0]
0010A30C 090940f9 ldr      x9, [x8, #0x10]
0010A310 e8430091 add      x8, sp, #0x10
0010A314 20013fd6 blr      x9
0010A318 f50b40f9 ldr      x21, [sp, #0x10]
0010A31C b51e00b4 cbz      x21, #0x10a6f0
0010A320 b63240f9 ldr      x22, [x21, #0x60]
0010A324 360200b4 cbz      x22, #0x10a368
0010A328 c80240f9 ldr      x8, [x22]
0010A32C e00316aa mov      x0, x22
0010A330 080140f9 ldr      x8, [x8]
0010A334 00013fd6 blr      x8
0010A338 f70300aa mov      x23, x0
0010A33C a0010094 bl       #0x10a9bc
0010A340 1f0017eb cmp      x0, x23
0010A344 00010054 b.eq     #0x10a364
0010A348 1f2003d5 nop      
0010A34C 1f2003d5 nop      
0010A350 f70240f9 ldr      x23, [x23]
0010A354 ff0200eb cmp      x23, x0
0010A358 e41a40fa ccmp     x23, #0, #4, ne
0010A35C a1ffff54 b.ne     #0x10a350
0010A360 f71a00b4 cbz      x23, #0x10a6bc
0010A364 d64201d1 sub      x22, x22, #0x50
0010A368 a88e44f8 ldr      x8, [x21, #0x48]!
0010A36C e00315aa mov      x0, x21
0010A370 080d40f9 ldr      x8, [x8, #0x18]
0010A374 00013fd6 blr      x8
0010A378 d61b00b4 cbz      x22, #0x10a6f0
0010A37C d66a40b9 ldr      w22, [x22, #0x68]
0010A380 e00314aa mov      x0, x20
0010A384 866cfc97 bl       #0x2559c
0010A388 f50300aa mov      x21, x0
0010A38C df120071 cmp      w22, #4
0010A390 21170054 b.ne     #0x10a674
0010A394 880240f9 ldr      x8, [x20]
0010A398 e00314aa mov      x0, x20
0010A39C 090940f9 ldr      x9, [x8, #0x10]
0010A3A0 e8430091 add      x8, sp, #0x10
0010A3A4 20013fd6 blr      x9
0010A3A8 80a641f9 ldr      x0, [x20, #0x348]
0010A3AC 080040f9 ldr      x8, [x0]
0010A3B0 090940f9 ldr      x9, [x8, #0x10]
0010A3B4 e8230091 add      x8, sp, #8
0010A3B8 20013fd6 blr      x9
0010A3BC a00700d1 sub      x0, x29, #1
0010A3C0 e2430091 add      x2, sp, #0x10
0010A3C4 e3230091 add      x3, sp, #8
0010A3C8 e10315aa mov      x1, x21
0010A3CC 1a040094 bl       #0x10b434
0010A3D0 f40300aa mov      x20, x0
0010A3D4 001100b5 cbnz     x0, #0x10a5f4
0010A3D8 8b000014 b        #0x10a604
0010A3DC e00314aa mov      x0, x20
0010A3E0 6f6cfc97 bl       #0x2559c
0010A3E4 880240f9 ldr      x8, [x20]
0010A3E8 f50300aa mov      x21, x0
0010A3EC e00314aa mov      x0, x20
0010A3F0 090940f9 ldr      x9, [x8, #0x10]
0010A3F4 e8430091 add      x8, sp, #0x10
0010A3F8 20013fd6 blr      x9
0010A3FC 80a641f9 ldr      x0, [x20, #0x348]
0010A400 080040f9 ldr      x8, [x0]
0010A404 090940f9 ldr      x9, [x8, #0x10]
0010A408 e8230091 add      x8, sp, #8
0010A40C 20013fd6 blr      x9
0010A410 a00700d1 sub      x0, x29, #1
0010A414 e2430091 add      x2, sp, #0x10
0010A418 e3230091 add      x3, sp, #8
0010A41C e10315aa mov      x1, x21
0010A420 6c030094 bl       #0x10b1d0
0010A424 f40300aa mov      x20, x0
0010A428 600e00b5 cbnz     x0, #0x10a5f4
0010A42C 76000014 b        #0x10a604
0010A430 80a641f9 ldr      x0, [x20, #0x348]
0010A434 080040f9 ldr      x8, [x0]
0010A438 090940f9 ldr      x9, [x8, #0x10]
0010A43C e8430091 add      x8, sp, #0x10
0010A440 20013fd6 blr      x9
0010A444 f50b40f9 ldr      x21, [sp, #0x10]
0010A448 551500b4 cbz      x21, #0x10a6f0
0010A44C b63240f9 ldr      x22, [x21, #0x60]
0010A450 f60100b4 cbz      x22, #0x10a48c
0010A454 c80240f9 ldr      x8, [x22]
0010A458 e00316aa mov      x0, x22
0010A45C 080140f9 ldr      x8, [x8]
0010A460 00013fd6 blr      x8
0010A464 f70300aa mov      x23, x0
0010A468 55010094 bl       #0x10a9bc
0010A46C 1f0017eb cmp      x0, x23
0010A470 c0000054 b.eq     #0x10a488
0010A474 f70240f9 ldr      x23, [x23]
0010A478 ff0200eb cmp      x23, x0
0010A47C e41a40fa ccmp     x23, #0, #4, ne
0010A480 a1ffff54 b.ne     #0x10a474
0010A484 b71200b4 cbz      x23, #0x10a6d8
0010A488 d64201d1 sub      x22, x22, #0x50
0010A48C a88e44f8 ldr      x8, [x21, #0x48]!
0010A490 e00315aa mov      x0, x21
0010A494 080d40f9 ldr      x8, [x8, #0x18]
0010A498 00013fd6 blr      x8
0010A49C b61200b4 cbz      x22, #0x10a6f0
0010A4A0 d66a40b9 ldr      w22, [x22, #0x68]
0010A4A4 e00314aa mov      x0, x20
0010A4A8 3d6cfc97 bl       #0x2559c
0010A4AC f50300aa mov      x21, x0
0010A4B0 df060071 cmp      w22, #1
0010A4B4 61020054 b.ne     #0x10a500
0010A4B8 880240f9 ldr      x8, [x20]
0010A4BC e00314aa mov      x0, x20
0010A4C0 090940f9 ldr      x9, [x8, #0x10]
0010A4C4 e8430091 add      x8, sp, #0x10
0010A4C8 20013fd6 blr      x9
0010A4CC 80a641f9 ldr      x0, [x20, #0x348]
0010A4D0 080040f9 ldr      x8, [x0]
0010A4D4 090940f9 ldr      x9, [x8, #0x10]
0010A4D8 e8230091 add      x8, sp, #8
0010A4DC 20013fd6 blr      x9
0010A4E0 a00700d1 sub      x0, x29, #1
0010A4E4 e2430091 add      x2, sp, #0x10
0010A4E8 e3230091 add      x3, sp, #8
0010A4EC e10315aa mov      x1, x21
0010A4F0 76040094 bl       #0x10b6c8
0010A4F4 f40300aa mov      x20, x0
0010A4F8 e00700b5 cbnz     x0, #0x10a5f4
0010A4FC 42000014 b        #0x10a604
0010A500 880240f9 ldr      x8, [x20]
0010A504 e00314aa mov      x0, x20
0010A508 090940f9 ldr      x9, [x8, #0x10]
0010A50C e8430091 add      x8, sp, #0x10
0010A510 20013fd6 blr      x9
0010A514 80a641f9 ldr      x0, [x20, #0x348]
0010A518 080040f9 ldr      x8, [x0]
0010A51C 090940f9 ldr      x9, [x8, #0x10]
0010A520 e8230091 add      x8, sp, #8
0010A524 20013fd6 blr      x9
0010A528 a00700d1 sub      x0, x29, #1
0010A52C e2430091 add      x2, sp, #0x10
0010A530 e3230091 add      x3, sp, #8
0010A534 e10315aa mov      x1, x21
0010A538 db020094 bl       #0x10b0a4
0010A53C f40300aa mov      x20, x0
0010A540 a00500b5 cbnz     x0, #0x10a5f4
0010A544 30000014 b        #0x10a604
0010A548 a83a40f9 ldr      x8, [x21, #0x70]
0010A54C 11ffff17 b        #0x10a190
0010A550 e00314aa mov      x0, x20
0010A554 126cfc97 bl       #0x2559c
0010A558 880240f9 ldr      x8, [x20]
0010A55C f50300aa mov      x21, x0
0010A560 e00314aa mov      x0, x20
0010A564 090940f9 ldr      x9, [x8, #0x10]
0010A568 e8430091 add      x8, sp, #0x10
0010A56C 20013fd6 blr      x9
0010A570 80a641f9 ldr      x0, [x20, #0x348]
0010A574 080040f9 ldr      x8, [x0]
0010A578 090940f9 ldr      x9, [x8, #0x10]
0010A57C e8230091 add      x8, sp, #8
0010A580 20013fd6 blr      x9
0010A584 a00700d1 sub      x0, x29, #1
0010A588 e2430091 add      x2, sp, #0x10
0010A58C e3230091 add      x3, sp, #8
0010A590 e10315aa mov      x1, x21
0010A594 77020094 bl       #0x10af70
0010A598 f40300aa mov      x20, x0
0010A59C c00200b5 cbnz     x0, #0x10a5f4
0010A5A0 19000014 b        #0x10a604
0010A5A4 e00314aa mov      x0, x20
0010A5A8 fd6bfc97 bl       #0x2559c
0010A5AC 880240f9 ldr      x8, [x20]
0010A5B0 f50300aa mov      x21, x0
0010A5B4 e00314aa mov      x0, x20
0010A5B8 090940f9 ldr      x9, [x8, #0x10]
0010A5BC e8430091 add      x8, sp, #0x10
0010A5C0 20013fd6 blr      x9
0010A5C4 80a641f9 ldr      x0, [x20, #0x348]
0010A5C8 080040f9 ldr      x8, [x0]
0010A5CC 090940f9 ldr      x9, [x8, #0x10]
0010A5D0 e8230091 add      x8, sp, #8
0010A5D4 20013fd6 blr      x9
0010A5D8 a00700d1 sub      x0, x29, #1
0010A5DC e2430091 add      x2, sp, #0x10
0010A5E0 e3230091 add      x3, sp, #8
0010A5E4 e10315aa mov      x1, x21
0010A5E8 45030094 bl       #0x10b2fc
0010A5EC f40300aa mov      x20, x0
0010A5F0 a00000b4 cbz      x0, #0x10a604
0010A5F4 e00314aa mov      x0, x20
0010A5F8 088c44f8 ldr      x8, [x0, #0x48]!
0010A5FC 080940f9 ldr      x8, [x8, #0x10]
0010A600 00013fd6 blr      x8
0010A604 e00740f9 ldr      x0, [sp, #8]
0010A608 800000b4 cbz      x0, #0x10a618
0010A60C 088c44f8 ldr      x8, [x0, #0x48]!
0010A610 080d40f9 ldr      x8, [x8, #0x18]
0010A614 00013fd6 blr      x8
0010A618 e00b40f9 ldr      x0, [sp, #0x10]
0010A61C e00000b4 cbz      x0, #0x10a638
0010A620 088c44f8 ldr      x8, [x0, #0x48]!
0010A624 080d40f9 ldr      x8, [x8, #0x18]
0010A628 00013fd6 blr      x8
0010A62C 03000014 b        #0x10a638
0010A630 88a20494 bl       #0x233050
0010A634 f4031faa mov      x20, xzr
0010A638 740200f9 str      x20, [x19]
0010A63C f44f46a9 ldp      x20, x19, [sp, #0x60]
0010A640 f65745a9 ldp      x22, x21, [sp, #0x50]
0010A644 f85f44a9 ldp      x24, x23, [sp, #0x40]
0010A648 fa6743a9 ldp      x26, x25, [sp, #0x30]
0010A64C fd7b42a9 ldp      x29, x30, [sp, #0x20]
0010A650 ffc30191 add      sp, sp, #0x70
0010A654 c0035fd6 ret      
0010A658 f7031faa mov      x23, xzr
0010A65C c88e44f8 ldr      x8, [x22, #0x48]!
0010A660 e00316aa mov      x0, x22
0010A664 080d40f9 ldr      x8, [x8, #0x18]
0010A668 00013fd6 blr      x8
0010A66C bfe1ffb5 cbnz     xzr, #0x10a2a0
0010A670 20000014 b        #0x10a6f0
0010A674 880240f9 ldr      x8, [x20]
0010A678 e00314aa mov      x0, x20
0010A67C 090940f9 ldr      x9, [x8, #0x10]
0010A680 e8430091 add      x8, sp, #0x10
0010A684 20013fd6 blr      x9
0010A688 80a641f9 ldr      x0, [x20, #0x348]
0010A68C 080040f9 ldr      x8, [x0]
0010A690 090940f9 ldr      x9, [x8, #0x10]
0010A694 e8230091 add      x8, sp, #8
0010A698 20013fd6 blr      x9
0010A69C a00700d1 sub      x0, x29, #1
0010A6A0 e2430091 add      x2, sp, #0x10
0010A6A4 e3230091 add      x3, sp, #8
0010A6A8 e10315aa mov      x1, x21
0010A6AC ba030094 bl       #0x10b594
0010A6B0 f40300aa mov      x20, x0
0010A6B4 00faffb5 cbnz     x0, #0x10a5f4
0010A6B8 d3ffff17 b        #0x10a604
0010A6BC f6031faa mov      x22, xzr
0010A6C0 a88e44f8 ldr      x8, [x21, #0x48]!
0010A6C4 e00315aa mov      x0, x21
0010A6C8 080d40f9 ldr      x8, [x8, #0x18]
0010A6CC 00013fd6 blr      x8
0010A6D0 7fe5ffb5 cbnz     xzr, #0x10a37c
0010A6D4 07000014 b        #0x10a6f0
0010A6D8 f6031faa mov      x22, xzr
0010A6DC a88e44f8 ldr      x8, [x21, #0x48]!
0010A6E0 e00315aa mov      x0, x21
0010A6E4 080d40f9 ldr      x8, [x8, #0x18]
0010A6E8 00013fd6 blr      x8
0010A6EC bfedffb5 cbnz     xzr, #0x10a4a0
0010A6F0 14af1394 bl       #0x5f6340
~~~
### 0x11a14c (50 slots)
~~~asm
0011A14C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0011A150 f30b00f9 str      x19, [sp, #0x10]
0011A154 fd030091 mov      x29, sp
0011A158 08c04c39 ldrb     w8, [x0, #0x330]
0011A15C f30300aa mov      x19, x0
0011A160 1f010071 cmp      w8, #0
0011A164 097c40f9 ldr      x9, [x0, #0xf8]
0011A168 241940fa ccmp     x9, #0, #4, ne
0011A16C e0000054 b.eq     #0x11a188
0011A170 687a40f9 ldr      x8, [x19, #0xf0]
0011A174 000140f9 ldr      x0, [x8]
0011A178 800000b4 cbz      x0, #0x11a188
0011A17C 080040f9 ldr      x8, [x0]
0011A180 082140f9 ldr      x8, [x8, #0x40]
0011A184 00013fd6 blr      x8
0011A188 68a24c39 ldrb     w8, [x19, #0x328]
0011A18C 48000034 cbz      w8, #0x11a194
0011A190 7fa20c39 strb     wzr, [x19, #0x328]
0011A194 685641f9 ldr      x8, [x19, #0x2a8]
0011A198 e80000b4 cbz      x8, #0x11a1b4
0011A19C 60020b91 add      x0, x19, #0x2c0
0011A1A0 7f5e01f9 str      xzr, [x19, #0x2b8]
0011A1A4 7f5a01f9 str      xzr, [x19, #0x2b0]
0011A1A8 7f5601f9 str      xzr, [x19, #0x2a8]
0011A1AC 7f5201f9 str      xzr, [x19, #0x2a0]
0011A1B0 00013fd6 blr      x8
0011A1B4 681641f9 ldr      x8, [x19, #0x228]
0011A1B8 e80000b4 cbz      x8, #0x11a1d4
0011A1BC 60020991 add      x0, x19, #0x240
0011A1C0 7f1e01f9 str      xzr, [x19, #0x238]
0011A1C4 7f1a01f9 str      xzr, [x19, #0x230]
0011A1C8 7f1601f9 str      xzr, [x19, #0x228]
0011A1CC 7f1201f9 str      xzr, [x19, #0x220]
0011A1D0 00013fd6 blr      x8
0011A1D4 68d640f9 ldr      x8, [x19, #0x1a8]
0011A1D8 a80000b4 cbz      x8, #0x11a1ec
0011A1DC 60020791 add      x0, x19, #0x1c0
0011A1E0 7f7e1ba9 stp      xzr, xzr, [x19, #0x1b0]
0011A1E4 7f7e1aa9 stp      xzr, xzr, [x19, #0x1a0]
0011A1E8 00013fd6 blr      x8
0011A1EC 689640f9 ldr      x8, [x19, #0x128]
0011A1F0 a80000b4 cbz      x8, #0x11a204
0011A1F4 60020591 add      x0, x19, #0x140
0011A1F8 7f7e13a9 stp      xzr, xzr, [x19, #0x130]
0011A1FC 7f7e12a9 stp      xzr, xzr, [x19, #0x120]
0011A200 00013fd6 blr      x8
0011A204 e00313aa mov      x0, x19
0011A208 f30b40f9 ldr      x19, [sp, #0x10]
0011A20C fd7bc2a8 ldp      x29, x30, [sp], #0x20
0011A210 70010014 b        #0x11a7d0
~~~
### 0x11b4cc (13 slots)
~~~asm
0011B4CC fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0011B4D0 f30b00f9 str      x19, [sp, #0x10]
0011B4D4 fd030091 mov      x29, sp
0011B4D8 f30300aa mov      x19, x0
0011B4DC 608e41f8 ldr      x0, [x19, #0x18]!
0011B4E0 800000b4 cbz      x0, #0x11b4f0
0011B4E4 088c44f8 ldr      x8, [x0, #0x48]!
0011B4E8 080d40f9 ldr      x8, [x8, #0x18]
0011B4EC 00013fd6 blr      x8
0011B4F0 7f7e00a9 stp      xzr, xzr, [x19]
0011B4F4 f30b40f9 ldr      x19, [sp, #0x10]
0011B4F8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0011B4FC c0035fd6 ret      
~~~
### 0x11b500 (4 slots)
~~~asm
0011B500 28008052 mov      w8, #1
0011B504 1f1400b9 str      wzr, [x0, #0x14]
0011B508 08400039 strb     w8, [x0, #0x10]
0011B50C c0035fd6 ret      
~~~
### 0x11b510 (2 slots)
~~~asm
0011B510 010400f9 str      x1, [x0, #8]
0011B514 c0035fd6 ret      
~~~
### 0x11b518 (2 slots)
~~~asm
0011B518 000440f9 ldr      x0, [x0, #8]
0011B51C c0035fd6 ret      
~~~
### 0x11b520 (2 slots)
~~~asm
0011B520 00404039 ldrb     w0, [x0, #0x10]
0011B524 c0035fd6 ret      
~~~
### 0x11b530 (2 slots)
~~~asm
0011B530 001440b9 ldr      w0, [x0, #0x14]
0011B534 c0035fd6 ret      
~~~
### 0x11b538 (11 slots)
~~~asm
0011B538 080c40f9 ldr      x8, [x0, #0x18]
0011B53C c80000b4 cbz      x8, #0x11b554
0011B540 08510191 add      x8, x8, #0x54
0011B544 08fddf88 ldar     w8, [x8]
0011B548 091040f9 ldr      x9, [x0, #0x20]
0011B54C 1f010071 cmp      w8, #0
0011B550 e803899a csel     x8, xzr, x9, eq
0011B554 09c00091 add      x9, x0, #0x30
0011B558 1f0100f1 cmp      x8, #0
0011B55C 2001889a csel     x0, x9, x8, eq
0011B560 c0035fd6 ret      
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
### 0x20cc20 (49 slots)
~~~asm
0020CC20 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0020CC24 f44f01a9 stp      x20, x19, [sp, #0x10]
0020CC28 fd030091 mov      x29, sp
0020CC2C c82e00b0 adrp     x8, #0x7e5000
0020CC30 08e11791 add      x8, x8, #0x5f8
0020CC34 140140f9 ldr      x20, [x8]
0020CC38 882e40f9 ldr      x8, [x20, #0x58]
0020CC3C 880200b4 cbz      x8, #0x20cc8c
0020CC40 08690991 add      x8, x8, #0x25a
0020CC44 08fddf08 ldarb    w8, [x8]
0020CC48 a8000037 tbnz     w8, #0, #0x20cc5c
0020CC4C 20008052 mov      w0, #1
0020CC50 f44f41a9 ldp      x20, x19, [sp, #0x10]
0020CC54 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0020CC58 c0035fd6 ret      
0020CC5C f30300aa mov      x19, x0
0020CC60 802e40f9 ldr      x0, [x20, #0x58]
0020CC64 a36f0b94 bl       #0x4e8af0
0020CC68 802e40f9 ldr      x0, [x20, #0x58]
0020CC6C 9f2e00f9 str      xzr, [x20, #0x58]
0020CC70 800000b4 cbz      x0, #0x20cc80
0020CC74 088c44f8 ldr      x8, [x0, #0x48]!
0020CC78 080d40f9 ldr      x8, [x8, #0x18]
0020CC7C 00013fd6 blr      x8
0020CC80 730000b4 cbz      x19, #0x20cc8c
0020CC84 886240b9 ldr      w8, [x20, #0x60]
0020CC88 680200b9 str      w8, [x19]
0020CC8C c82e00b0 adrp     x8, #0x7e5000
0020CC90 08211891 add      x8, x8, #0x608
0020CC94 080140f9 ldr      x8, [x8]
0020CC98 132940f9 ldr      x19, [x8, #0x50]
0020CC9C b30000b4 cbz      x19, #0x20ccb0
0020CCA0 e00313aa mov      x0, x19
0020CCA4 080c45f8 ldr      x8, [x0, #0x50]!
0020CCA8 080940f9 ldr      x8, [x8, #0x10]
0020CCAC 00013fd6 blr      x8
0020CCB0 680240f9 ldr      x8, [x19]
0020CCB4 e00313aa mov      x0, x19
0020CCB8 e1031faa mov      x1, xzr
0020CCBC 081940f9 ldr      x8, [x8, #0x30]
0020CCC0 00013fd6 blr      x8
0020CCC4 680e45f8 ldr      x8, [x19, #0x50]!
0020CCC8 e00313aa mov      x0, x19
0020CCCC 080d40f9 ldr      x8, [x8, #0x18]
0020CCD0 00013fd6 blr      x8
0020CCD4 e0031f2a mov      w0, wzr
0020CCD8 f44f41a9 ldp      x20, x19, [sp, #0x10]
0020CCDC fd7bc2a8 ldp      x29, x30, [sp], #0x20
0020CCE0 c0035fd6 ret      
~~~
### 0x228388 (2 slots)
~~~asm
00228388 003c40f9 ldr      x0, [x0, #0x78]
0022838C b1980c14 b        #0x54e650
~~~
### 0x2285a8 (1 slots)
~~~asm
002285A8 86000014 b        #0x2287c0
~~~
### 0x2285ac (26 slots)
~~~asm
002285AC fd7bbea9 stp      x29, x30, [sp, #-0x20]!
002285B0 f30b00f9 str      x19, [sp, #0x10]
002285B4 fd030091 mov      x29, sp
002285B8 f30300aa mov      x19, x0
002285BC 000c40f9 ldr      x0, [x0, #0x18]
002285C0 a00000b4 cbz      x0, #0x2285d4
002285C4 088c44f8 ldr      x8, [x0, #0x48]!
002285C8 080d40f9 ldr      x8, [x8, #0x18]
002285CC 00013fd6 blr      x8
002285D0 7f0e00f9 str      xzr, [x19, #0x18]
002285D4 e82900f0 adrp     x8, #0x767000
002285D8 08012e91 add      x8, x8, #0xb80
002285DC 600640f9 ldr      x0, [x19, #8]
002285E0 09410091 add      x9, x8, #0x10
002285E4 0a410191 add      x10, x8, #0x50
002285E8 08410291 add      x8, x8, #0x90
002285EC 69021bf8 stur     x9, [x19, #-0x50]
002285F0 6aa23fa9 stp      x10, x8, [x19, #-8]
002285F4 a00000b4 cbz      x0, #0x228608
002285F8 088c44f8 ldr      x8, [x0, #0x48]!
002285FC 080d40f9 ldr      x8, [x8, #0x18]
00228600 00013fd6 blr      x8
00228604 7f0600f9 str      xzr, [x19, #8]
00228608 f30b40f9 ldr      x19, [sp, #0x10]
0022860C fd7bc2a8 ldp      x29, x30, [sp], #0x20
00228610 c0035fd6 ret      
~~~
### 0x228614 (26 slots)
~~~asm
00228614 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00228618 f30b00f9 str      x19, [sp, #0x10]
0022861C fd030091 mov      x29, sp
00228620 f30300aa mov      x19, x0
00228624 000c40f9 ldr      x0, [x0, #0x18]
00228628 a00000b4 cbz      x0, #0x22863c
0022862C 088c44f8 ldr      x8, [x0, #0x48]!
00228630 080d40f9 ldr      x8, [x8, #0x18]
00228634 00013fd6 blr      x8
00228638 7f0e00f9 str      xzr, [x19, #0x18]
0022863C e82900f0 adrp     x8, #0x767000
00228640 08012e91 add      x8, x8, #0xb80
00228644 600640f9 ldr      x0, [x19, #8]
00228648 09410091 add      x9, x8, #0x10
0022864C 0a410191 add      x10, x8, #0x50
00228650 08410291 add      x8, x8, #0x90
00228654 69021bf8 stur     x9, [x19, #-0x50]
00228658 6aa23fa9 stp      x10, x8, [x19, #-8]
0022865C a00000b4 cbz      x0, #0x228670
00228660 088c44f8 ldr      x8, [x0, #0x48]!
00228664 080d40f9 ldr      x8, [x8, #0x18]
00228668 00013fd6 blr      x8
0022866C 7f0600f9 str      xzr, [x19, #8]
00228670 f30b40f9 ldr      x19, [sp, #0x10]
00228674 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00228678 c0035fd6 ret      
~~~
### 0x22867c (10 slots)
~~~asm
0022867C 080440f9 ldr      x8, [x0, #8]
00228680 e80000b4 cbz      x8, #0x22869c
00228684 08510191 add      x8, x8, #0x54
00228688 08fddf88 ldar     w8, [x8]
0022868C 000840f9 ldr      x0, [x0, #0x10]
00228690 1f010071 cmp      w8, #0
00228694 041840fa ccmp     x0, #0, #4, ne
00228698 41000054 b.ne     #0x2286a0
0022869C c0035fd6 ret      
002286A0 10c7fb17 b        #0x11a2e0
~~~
### 0x2286a4 (42 slots)
~~~asm
002286A4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
002286A8 f30b00f9 str      x19, [sp, #0x10]
002286AC fd030091 mov      x29, sp
002286B0 080440f9 ldr      x8, [x0, #8]
002286B4 680400b4 cbz      x8, #0x228740
002286B8 08510191 add      x8, x8, #0x54
002286BC 08fddf88 ldar     w8, [x8]
002286C0 130840f9 ldr      x19, [x0, #0x10]
002286C4 1f010071 cmp      w8, #0
002286C8 641a40fa ccmp     x19, #0, #4, ne
002286CC a0030054 b.eq     #0x228740
002286D0 28004039 ldrb     w8, [x1]
002286D4 08010034 cbz      w8, #0x2286f4
002286D8 280440b9 ldr      w8, [x1, #4]
002286DC 682e03b9 str      w8, [x19, #0x32c]
002286E0 69a24c39 ldrb     w9, [x19, #0x328]
002286E4 e9000035 cbnz     w9, #0x228700
002286E8 28008052 mov      w8, #1
002286EC 68a20c39 strb     w8, [x19, #0x328]
002286F0 04000014 b        #0x228700
002286F4 68a24c39 ldrb     w8, [x19, #0x328]
002286F8 48000034 cbz      w8, #0x228700
002286FC 7fa20c39 strb     wzr, [x19, #0x328]
00228700 e00313aa mov      x0, x19
00228704 8f950c94 bl       #0x54dd40
00228708 e00313aa mov      x0, x19
0022870C 81008052 mov      w1, #4
00228710 1e950c94 bl       #0x54db88
00228714 681241f9 ldr      x8, [x19, #0x220]
00228718 880000b4 cbz      x8, #0x228728
0022871C 61820c91 add      x1, x19, #0x320
00228720 60020991 add      x0, x19, #0x240
00228724 00013fd6 blr      x8
00228728 61d240f9 ldr      x1, [x19, #0x1a0]
0022872C a10000b4 cbz      x1, #0x228740
00228730 60020791 add      x0, x19, #0x1c0
00228734 f30b40f9 ldr      x19, [sp, #0x10]
00228738 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022873C 20001fd6 br       x1
00228740 f30b40f9 ldr      x19, [sp, #0x10]
00228744 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00228748 c0035fd6 ret      
~~~
### 0x22874c (29 slots)
~~~asm
0022874C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00228750 f30b00f9 str      x19, [sp, #0x10]
00228754 fd030091 mov      x29, sp
00228758 080440f9 ldr      x8, [x0, #8]
0022875C c80200b4 cbz      x8, #0x2287b4
00228760 08510191 add      x8, x8, #0x54
00228764 08fddf88 ldar     w8, [x8]
00228768 130840f9 ldr      x19, [x0, #0x10]
0022876C 1f010071 cmp      w8, #0
00228770 641a40fa ccmp     x19, #0, #4, ne
00228774 00020054 b.eq     #0x2287b4
00228778 e00313aa mov      x0, x19
0022877C 71950c94 bl       #0x54dd40
00228780 e00313aa mov      x0, x19
00228784 c1008052 mov      w1, #6
00228788 00950c94 bl       #0x54db88
0022878C 685241f9 ldr      x8, [x19, #0x2a0]
00228790 680000b4 cbz      x8, #0x22879c
00228794 60020b91 add      x0, x19, #0x2c0
00228798 00013fd6 blr      x8
0022879C 61d240f9 ldr      x1, [x19, #0x1a0]
002287A0 a10000b4 cbz      x1, #0x2287b4
002287A4 60020791 add      x0, x19, #0x1c0
002287A8 f30b40f9 ldr      x19, [sp, #0x10]
002287AC fd7bc2a8 ldp      x29, x30, [sp], #0x20
002287B0 20001fd6 br       x1
002287B4 f30b40f9 ldr      x19, [sp, #0x10]
002287B8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
002287BC c0035fd6 ret      
~~~
### 0x228a90 (190 slots)
~~~asm
00228A90 ff0302d1 sub      sp, sp, #0x80
00228A94 fd7b02a9 stp      x29, x30, [sp, #0x20]
00228A98 fc6f03a9 stp      x28, x27, [sp, #0x30]
00228A9C fa6704a9 stp      x26, x25, [sp, #0x40]
00228AA0 f85f05a9 stp      x24, x23, [sp, #0x50]
00228AA4 f65706a9 stp      x22, x21, [sp, #0x60]
00228AA8 f44f07a9 stp      x20, x19, [sp, #0x70]
00228AAC fd830091 add      x29, sp, #0x20
00228AB0 f30308aa mov      x19, x8
00228AB4 080040f9 ldr      x8, [x0]
00228AB8 01e78552 mov      w1, #0x2f38
00228ABC 01a3a072 movk     w1, #0x518, lsl #16
00228AC0 02018052 mov      w2, #8
00228AC4 080940f9 ldr      x8, [x8, #0x10]
00228AC8 f50300aa mov      x21, x0
00228ACC 00013fd6 blr      x8
00228AD0 48d03bd5 mrs      x8, tpidr_el0
00228AD4 18c97392 and      x24, x8, #0xffffffffffffe000
00228AD8 084f40f9 ldr      x8, [x24, #0x98]
00228ADC 1f4100f1 cmp      x8, #0x10
00228AE0 20150054 b.eq     #0x228d84
00228AE4 080f088b add      x8, x24, x8, lsl #3
00228AE8 89e68552 mov      w9, #0x2f34
00228AEC 09a3a072 movk     w9, #0x518, lsl #16
00228AF0 0900098b add      x9, x0, x9
00228AF4 b3831ff8 stur     x19, [x29, #-8]
00228AF8 f60300aa mov      x22, x0
00228AFC 150d00f9 str      x21, [x8, #0x18]
00228B00 e90b00f9 str      x9, [sp, #0x10]
00228B04 09898252 mov      w9, #0x1448
00228B08 8972a072 movk     w9, #0x394, lsl #16
00228B0C 084f40f9 ldr      x8, [x24, #0x98]
00228B10 0900098b add      x9, x0, x9
00228B14 e90700f9 str      x9, [sp, #8]
00228B18 09409152 mov      w9, #0x8a00
00228B1C 6962a072 movk     w9, #0x313, lsl #16
00228B20 1300098b add      x19, x0, x9
00228B24 09158e52 mov      w9, #0x70a8
00228B28 4962a072 movk     w9, #0x312, lsl #16
00228B2C 1900098b add      x25, x0, x9
00228B30 00200091 add      x0, x0, #8
00228B34 02e68552 mov      w2, #0x2f30
00228B38 02a3a072 movk     w2, #0x518, lsl #16
00228B3C 08050091 add      x8, x8, #1
00228B40 084f00f9 str      x8, [x24, #0x98]
00228B44 e1031f2a mov      w1, wzr
00228B48 1b699452 mov      w27, #0xa348
00228B4C 9b62a072 movk     w27, #0x314, lsl #16
00228B50 80350f94 bl       #0x5f6150
00228B54 c82b00b0 adrp     x8, #0x7a1000
00228B58 c92b00b0 adrp     x9, #0x7a1000
00228B5C 080944f9 ldr      x8, [x8, #0x810]
00228B60 294544f9 ldr      x9, [x9, #0x888]
00228B64 6a1f00f0 adrp     x10, #0x617000
00228B68 4a711091 add      x10, x10, #0x41c
00228B6C 0b1f00d0 adrp     x11, #0x60a000
00228B70 6b253791 add      x11, x11, #0xdc9
00228B74 8c1f0090 adrp     x12, #0x618000
00228B78 8c5d2091 add      x12, x12, #0x817
00228B7C cb3204a9 stp      x11, x12, [x22, #0x40]
00228B80 6b1f00b0 adrp     x11, #0x615000
00228B84 6b753391 add      x11, x11, #0xcdd
00228B88 2c1f0090 adrp     x12, #0x60c000
00228B8C 8c290f91 add      x12, x12, #0x3ca
00228B90 cb3205a9 stp      x11, x12, [x22, #0x50]
00228B94 08410091 add      x8, x8, #0x10
00228B98 c82a03a9 stp      x8, x10, [x22, #0x30]
00228B9C 881f0090 adrp     x8, #0x618000
00228BA0 088d2091 add      x8, x8, #0x823
00228BA4 29410091 add      x9, x9, #0x10
00228BA8 c83200f9 str      x8, [x22, #0x60]
00228BAC c0a20191 add      x0, x22, #0x68
00228BB0 08848452 mov      w8, #0x2420
00228BB4 e85fa072 movk     w8, #0x2ff, lsl #16
00228BB8 02778452 mov      w2, #0x23b8
00228BBC e25fa072 movk     w2, #0x2ff, lsl #16
00228BC0 e1031f2a mov      w1, wzr
00228BC4 c90200f9 str      x9, [x22]
00228BC8 d702088b add      x23, x22, x8
00228BCC 61350f94 bl       #0x5f6150
00228BD0 a82b00f0 adrp     x8, #0x79f000
00228BD4 e00317aa mov      x0, x23
00228BD8 08ed41f9 ldr      x8, [x8, #0x3d8]
00228BDC 080140f9 ldr      x8, [x8]
00228BE0 016540f9 ldr      x1, [x8, #0xc8]
00228BE4 d9890c94 bl       #0x54b348
00228BE8 089d8452 mov      w8, #0x24e8
00228BEC e85fa072 movk     w8, #0x2ff, lsl #16
00228BF0 02788952 mov      w2, #0x4bc0
00228BF4 6202a072 movk     w2, #0x13, lsl #16
00228BF8 c002088b add      x0, x22, x8
00228BFC e1031f2a mov      w1, wzr
00228C00 54350f94 bl       #0x5f6150
00228C04 08008092 mov      x8, #-1
00228C08 7c230091 add      x28, x27, #8
00228C0C 3f1300b9 str      wzr, [x25, #0x10]
00228C10 74a30391 add      x20, x27, #0xe8
00228C14 287f00a9 stp      x8, xzr, [x25]
00228C18 79231291 add      x25, x27, #0x488
00228C1C 1a658452 mov      w26, #0x2328
00228C20 57568052 mov      w23, #0x2b2
00228C24 7f0200f9 str      xzr, [x19]
00228C28 1f2003d5 nop      
00228C2C 1f2003d5 nop      
00228C30 d3021b8b add      x19, x22, x27
00228C34 c8021c8b add      x8, x22, x28
00228C38 7f020039 strb     wzr, [x19]
00228C3C c002148b add      x0, x22, x20
00228C40 e1031f2a mov      w1, wzr
00228C44 1fb10179 strh     wzr, [x8, #0xd8]
00228C48 e20317aa mov      x2, x23
00228C4C 1ffd0ca9 stp      xzr, xzr, [x8, #0xc8]
00228C50 1f0100f9 str      xzr, [x8]
00228C54 1ffd0ba9 stp      xzr, xzr, [x8, #0xb8]
00228C58 1ffd0aa9 stp      xzr, xzr, [x8, #0xa8]
00228C5C 1ffd09a9 stp      xzr, xzr, [x8, #0x98]
00228C60 1ffd08a9 stp      xzr, xzr, [x8, #0x88]
00228C64 1ffd07a9 stp      xzr, xzr, [x8, #0x78]
00228C68 1ffd06a9 stp      xzr, xzr, [x8, #0x68]
00228C6C 1ffd05a9 stp      xzr, xzr, [x8, #0x58]
00228C70 1ffd04a9 stp      xzr, xzr, [x8, #0x48]
00228C74 1ffd03a9 stp      xzr, xzr, [x8, #0x38]
00228C78 1ffd02a9 stp      xzr, xzr, [x8, #0x28]
00228C7C 1ffd01a9 stp      xzr, xzr, [x8, #0x18]
00228C80 1ffd00a9 stp      xzr, xzr, [x8, #8]
00228C84 33350f94 bl       #0x5f6150
00228C88 c002198b add      x0, x22, x25
00228C8C e1031f2a mov      w1, wzr
00228C90 7f820e39 strb     wzr, [x19, #0x3a0]
00228C94 e20317aa mov      x2, x23
00228C98 1f7c32a9 stp      xzr, xzr, [x0, #-0xe0]
00228C9C 1f001ff8 stur     xzr, [x0, #-0x10]
00228CA0 1f801f78 sturh    wzr, [x0, #-8]
00228CA4 1f7c33a9 stp      xzr, xzr, [x0, #-0xd0]
00228CA8 1f7c34a9 stp      xzr, xzr, [x0, #-0xc0]
00228CAC 1f7c35a9 stp      xzr, xzr, [x0, #-0xb0]
00228CB0 1f7c36a9 stp      xzr, xzr, [x0, #-0xa0]
00228CB4 1f7c37a9 stp      xzr, xzr, [x0, #-0x90]
00228CB8 1f7c38a9 stp      xzr, xzr, [x0, #-0x80]
00228CBC 1f7c39a9 stp      xzr, xzr, [x0, #-0x70]
00228CC0 1f7c3aa9 stp      xzr, xzr, [x0, #-0x60]
00228CC4 1f7c3ba9 stp      xzr, xzr, [x0, #-0x50]
00228CC8 1f7c3ca9 stp      xzr, xzr, [x0, #-0x40]
00228CCC 1f7c3da9 stp      xzr, xzr, [x0, #-0x30]
00228CD0 1f7c3ea9 stp      xzr, xzr, [x0, #-0x20]
00228CD4 1f350f94 bl       #0x5f6150
00228CD8 7b031d91 add      x27, x27, #0x740
00228CDC 39031d91 add      x25, x25, #0x740
00228CE0 5a0b00f1 subs     x26, x26, #2
00228CE4 94021d91 add      x20, x20, #0x740
00228CE8 9c031d91 add      x28, x28, #0x740
00228CEC 21faff54 b.ne     #0x228c30
00228CF0 e80740f9 ldr      x8, [sp, #8]
00228CF4 1f010039 strb     wzr, [x8]
00228CF8 c82b00d0 adrp     x8, #0x7a2000
00228CFC 083d46f9 ldr      x8, [x8, #0xc78]
00228D00 08410091 add      x8, x8, #0x10
00228D04 c80200f9 str      x8, [x22]
00228D08 088a8252 mov      w8, #0x1450
00228D0C 8872a072 movk     w8, #0x394, lsl #16
00228D10 c002088b add      x0, x22, x8
00228D14 cb360f94 bl       #0x5f6840
00228D18 088e8252 mov      w8, #0x1470
00228D1C 8872a072 movk     w8, #0x394, lsl #16
00228D20 82588352 mov      w2, #0x1ac4
00228D24 8230a072 movk     w2, #0x184, lsl #16
00228D28 c002088b add      x0, x22, x8
00228D2C e1031f2a mov      w1, wzr
00228D30 08350f94 bl       #0x5f6150
00228D34 e90b40f9 ldr      x9, [sp, #0x10]
00228D38 28008052 mov      w8, #1
00228D3C 0ae78552 mov      w10, #0x2f38
00228D40 0aa3a072 movk     w10, #0x518, lsl #16
00228D44 f44f47a9 ldp      x20, x19, [sp, #0x70]
00228D48 fa6744a9 ldp      x26, x25, [sp, #0x40]
00228D4C 28010079 strh     w8, [x9]
00228D50 a9835ff8 ldur     x9, [x29, #-8]
00228D54 08018052 mov      w8, #8
00228D58 fc6f43a9 ldp      x28, x27, [sp, #0x30]
00228D5C fd7b42a9 ldp      x29, x30, [sp, #0x20]
00228D60 2a2101a9 stp      x10, x8, [x9, #0x10]
00228D64 084f40f9 ldr      x8, [x24, #0x98]
00228D68 365500a9 stp      x22, x21, [x9]
00228D6C 080500d1 sub      x8, x8, #1
00228D70 f65746a9 ldp      x22, x21, [sp, #0x60]
00228D74 084f00f9 str      x8, [x24, #0x98]
00228D78 f85f45a9 ldp      x24, x23, [sp, #0x50]
00228D7C ff030291 add      sp, sp, #0x80
00228D80 c0035fd6 ret      
00228D84 a367f797 bl       #0x2c10
~~~
### 0x228edc (1 slots)
~~~asm
00228EDC 5d280014 b        #0x233050
~~~
### 0x229004 (26 slots)
~~~asm
00229004 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00229008 f30b00f9 str      x19, [sp, #0x10]
0022900C fd030091 mov      x29, sp
00229010 f30300aa mov      x19, x0
00229014 003440f9 ldr      x0, [x0, #0x68]
00229018 a00000b4 cbz      x0, #0x22902c
0022901C 088c44f8 ldr      x8, [x0, #0x48]!
00229020 080d40f9 ldr      x8, [x8, #0x18]
00229024 00013fd6 blr      x8
00229028 7f3600f9 str      xzr, [x19, #0x68]
0022902C e82900d0 adrp     x8, #0x767000
00229030 08012e91 add      x8, x8, #0xb80
00229034 602e40f9 ldr      x0, [x19, #0x58]
00229038 09410091 add      x9, x8, #0x10
0022903C 0a410191 add      x10, x8, #0x50
00229040 08410291 add      x8, x8, #0x90
00229044 690200f9 str      x9, [x19]
00229048 6aa204a9 stp      x10, x8, [x19, #0x48]
0022904C a00000b4 cbz      x0, #0x229060
00229050 088c44f8 ldr      x8, [x0, #0x48]!
00229054 080d40f9 ldr      x8, [x8, #0x18]
00229058 00013fd6 blr      x8
0022905C 7f2e00f9 str      xzr, [x19, #0x58]
00229060 f30b40f9 ldr      x19, [sp, #0x10]
00229064 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00229068 c0035fd6 ret      
~~~
### 0x22906c (26 slots)
~~~asm
0022906C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00229070 f30b00f9 str      x19, [sp, #0x10]
00229074 fd030091 mov      x29, sp
00229078 f30300aa mov      x19, x0
0022907C 003440f9 ldr      x0, [x0, #0x68]
00229080 a00000b4 cbz      x0, #0x229094
00229084 088c44f8 ldr      x8, [x0, #0x48]!
00229088 080d40f9 ldr      x8, [x8, #0x18]
0022908C 00013fd6 blr      x8
00229090 7f3600f9 str      xzr, [x19, #0x68]
00229094 e82900d0 adrp     x8, #0x767000
00229098 08012e91 add      x8, x8, #0xb80
0022909C 602e40f9 ldr      x0, [x19, #0x58]
002290A0 09410091 add      x9, x8, #0x10
002290A4 0a410191 add      x10, x8, #0x50
002290A8 08410291 add      x8, x8, #0x90
002290AC 690200f9 str      x9, [x19]
002290B0 6aa204a9 stp      x10, x8, [x19, #0x48]
002290B4 a00000b4 cbz      x0, #0x2290c8
002290B8 088c44f8 ldr      x8, [x0, #0x48]!
002290BC 080d40f9 ldr      x8, [x8, #0x18]
002290C0 00013fd6 blr      x8
002290C4 7f2e00f9 str      xzr, [x19, #0x58]
002290C8 f30b40f9 ldr      x19, [sp, #0x10]
002290CC fd7bc2a8 ldp      x29, x30, [sp], #0x20
002290D0 c0035fd6 ret      
~~~
### 0x229bd0 (1 slots)
~~~asm
00229BD0 20250014 b        #0x233050
~~~
### 0x22a7dc (1 slots)
~~~asm
0022A7DC 1d220014 b        #0x233050
~~~
### 0x22b4d0 (1 slots)
~~~asm
0022B4D0 e01e0014 b        #0x233050
~~~
### 0x22b4e0 (1 slots)
~~~asm
0022B4E0 dc1e0014 b        #0x233050
~~~
### 0x22c1b0 (1 slots)
~~~asm
0022C1B0 a81b0014 b        #0x233050
~~~
### 0x233050 (9 slots)
~~~asm
00233050 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
00233054 fd030091 mov      x29, sp
00233058 9abaff97 bl       #0x221ac0
0023305C 889a8652 mov      w8, #0x34d4
00233060 2801a072 movk     w8, #9, lsl #16
00233064 29008052 mov      w9, #1
00233068 09682838 strb     w9, [x0, x8]
0023306C fd7bc1a8 ldp      x29, x30, [sp], #0x10
00233070 c0035fd6 ret      
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
### 0x24e524 (69 slots)
~~~asm
0024E524 ffc300d1 sub      sp, sp, #0x30
0024E528 fd7b01a9 stp      x29, x30, [sp, #0x10]
0024E52C f44f02a9 stp      x20, x19, [sp, #0x20]
0024E530 fd430091 add      x29, sp, #0x10
0024E534 e8230091 add      x8, sp, #8
0024E538 f30301aa mov      x19, x1
0024E53C e547ff97 bl       #0x2204d0
0024E540 e00740f9 ldr      x0, [sp, #8]
0024E544 e10313aa mov      x1, x19
0024E548 dfd0fe97 bl       #0x2028c4
0024E54C f403002a mov      w20, w0
0024E550 e00740f9 ldr      x0, [sp, #8]
0024E554 800000b4 cbz      x0, #0x24e564
0024E558 088c44f8 ldr      x8, [x0, #0x48]!
0024E55C 080d40f9 ldr      x8, [x8, #0x18]
0024E560 00013fd6 blr      x8
0024E564 d4000036 tbz      w20, #0, #0x24e57c
0024E568 e0031f2a mov      w0, wzr
0024E56C f44f42a9 ldp      x20, x19, [sp, #0x20]
0024E570 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0024E574 ffc30091 add      sp, sp, #0x30
0024E578 c0035fd6 ret      
0024E57C e8230091 add      x8, sp, #8
0024E580 c847ff97 bl       #0x2204a0
0024E584 e00740f9 ldr      x0, [sp, #8]
0024E588 e10313aa mov      x1, x19
0024E58C ced0fe97 bl       #0x2028c4
0024E590 f403002a mov      w20, w0
0024E594 e00740f9 ldr      x0, [sp, #8]
0024E598 800000b4 cbz      x0, #0x24e5a8
0024E59C 088c44f8 ldr      x8, [x0, #0x48]!
0024E5A0 080d40f9 ldr      x8, [x8, #0x18]
0024E5A4 00013fd6 blr      x8
0024E5A8 f4030036 tbz      w20, #0, #0x24e624
0024E5AC 08008012 mov      w8, #-1
0024E5B0 e8230029 stp      w8, w8, [sp]
0024E5B4 e8230091 add      x8, sp, #8
0024E5B8 ba47ff97 bl       #0x2204a0
0024E5BC e00740f9 ldr      x0, [sp, #8]
0024E5C0 e2130091 add      x2, sp, #4
0024E5C4 e3030091 mov      x3, sp
0024E5C8 e10313aa mov      x1, x19
0024E5CC c3d5fe97 bl       #0x203cd8
0024E5D0 e00740f9 ldr      x0, [sp, #8]
0024E5D4 800000b4 cbz      x0, #0x24e5e4
0024E5D8 088c44f8 ldr      x8, [x0, #0x48]!
0024E5DC 080d40f9 ldr      x8, [x8, #0x18]
0024E5E0 00013fd6 blr      x8
0024E5E4 e8230091 add      x8, sp, #8
0024E5E8 ae47ff97 bl       #0x2204a0
0024E5EC e00740f9 ldr      x0, [sp, #8]
0024E5F0 23008052 mov      w3, #1
0024E5F4 e2074029 ldp      w2, w1, [sp]
0024E5F8 99d5fe97 bl       #0x203c5c
0024E5FC e00740f9 ldr      x0, [sp, #8]
0024E600 800000b4 cbz      x0, #0x24e610
0024E604 088c44f8 ldr      x8, [x0, #0x48]!
0024E608 080d40f9 ldr      x8, [x8, #0x18]
0024E60C 00013fd6 blr      x8
0024E610 20008052 mov      w0, #1
0024E614 f44f42a9 ldp      x20, x19, [sp, #0x20]
0024E618 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0024E61C ffc30091 add      sp, sp, #0x30
0024E620 c0035fd6 ret      
0024E624 40008052 mov      w0, #2
0024E628 f44f42a9 ldp      x20, x19, [sp, #0x20]
0024E62C fd7b41a9 ldp      x29, x30, [sp, #0x10]
0024E630 ffc30091 add      sp, sp, #0x30
0024E634 c0035fd6 ret      
~~~
### 0x24ed78 (2 slots)
~~~asm
0024ED78 20008052 mov      w0, #1
0024ED7C c0035fd6 ret      
~~~
### 0x24ed80 (76 slots)
~~~asm
0024ED80 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0024ED84 f65701a9 stp      x22, x21, [sp, #0x10]
0024ED88 f44f02a9 stp      x20, x19, [sp, #0x20]
0024ED8C fd030091 mov      x29, sp
0024ED90 f30300aa mov      x19, x0
0024ED94 f4cf8792 mov      x20, #-0x3e80
0024ED98 15b79c52 mov      w21, #0xe5b8
0024ED9C f5a2a072 movk     w21, #0x517, lsl #16
0024EDA0 04000014 b        #0x24edb0
0024EDA4 b52200d1 sub      x21, x21, #8
0024EDA8 942200b1 adds     x20, x20, #8
0024EDAC 00010054 b.eq     #0x24edcc
0024EDB0 606a75f8 ldr      x0, [x19, x21]
0024EDB4 80ffffb4 cbz      x0, #0x24eda4
0024EDB8 088c44f8 ldr      x8, [x0, #0x48]!
0024EDBC 080d40f9 ldr      x8, [x8, #0x18]
0024EDC0 00013fd6 blr      x8
0024EDC4 7f6a35f8 str      xzr, [x19, x21]
0024EDC8 f7ffff17 b        #0x24eda4
0024EDCC 088a8252 mov      w8, #0x1450
0024EDD0 8872a072 movk     w8, #0x394, lsl #16
0024EDD4 f4278392 mov      x20, #-0x1940
0024EDD8 6002088b add      x0, x19, x8
0024EDDC d4ffbff2 movk     x20, #0xfffe, lsl #16
0024EDE0 809f0e94 bl       #0x5f6be0
0024EDE4 882a00f0 adrp     x8, #0x7a1000
0024EDE8 15ec8a52 mov      w21, #0x5760
0024EDEC 3562a072 movk     w21, #0x311, lsl #16
0024EDF0 084544f9 ldr      x8, [x8, #0x888]
0024EDF4 f60314aa mov      x22, x20
0024EDF8 08410091 add      x8, x8, #0x10
0024EDFC 680200f9 str      x8, [x19]
0024EE00 04000014 b        #0x24ee10
0024EE04 d6220091 add      x22, x22, #8
0024EE08 b52200d1 sub      x21, x21, #8
0024EE0C 160100b4 cbz      x22, #0x24ee2c
0024EE10 606a75f8 ldr      x0, [x19, x21]
0024EE14 80ffffb4 cbz      x0, #0x24ee04
0024EE18 088c44f8 ldr      x8, [x0, #0x48]!
0024EE1C 080d40f9 ldr      x8, [x8, #0x18]
0024EE20 00013fd6 blr      x8
0024EE24 7f6a35f8 str      xzr, [x19, x21]
0024EE28 f7ffff17 b        #0x24ee04
0024EE2C 15c48752 mov      w21, #0x3e20
0024EE30 1562a072 movk     w21, #0x310, lsl #16
0024EE34 06000014 b        #0x24ee4c
0024EE38 1f2003d5 nop      
0024EE3C 1f2003d5 nop      
0024EE40 94220091 add      x20, x20, #8
0024EE44 b52200d1 sub      x21, x21, #8
0024EE48 140100b4 cbz      x20, #0x24ee68
0024EE4C 606a75f8 ldr      x0, [x19, x21]
0024EE50 80ffffb4 cbz      x0, #0x24ee40
0024EE54 088c44f8 ldr      x8, [x0, #0x48]!
0024EE58 080d40f9 ldr      x8, [x8, #0x18]
0024EE5C 00013fd6 blr      x8
0024EE60 7f6a35f8 str      xzr, [x19, x21]
0024EE64 f7ffff17 b        #0x24ee40
0024EE68 08848452 mov      w8, #0x2420
0024EE6C e85fa072 movk     w8, #0x2ff, lsl #16
0024EE70 6002088b add      x0, x19, x8
0024EE74 9df10b94 bl       #0x54b4e8
0024EE78 082900f0 adrp     x8, #0x771000
0024EE7C 08610f91 add      x8, x8, #0x3d8
0024EE80 600e40f9 ldr      x0, [x19, #0x18]
0024EE84 08410091 add      x8, x8, #0x10
0024EE88 680200f9 str      x8, [x19]
0024EE8C a00000b4 cbz      x0, #0x24eea0
0024EE90 088c44f8 ldr      x8, [x0, #0x48]!
0024EE94 080d40f9 ldr      x8, [x8, #0x18]
0024EE98 00013fd6 blr      x8
0024EE9C 7f0e00f9 str      xzr, [x19, #0x18]
0024EEA0 f44f42a9 ldp      x20, x19, [sp, #0x20]
0024EEA4 f65741a9 ldp      x22, x21, [sp, #0x10]
0024EEA8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0024EEAC c0035fd6 ret      
~~~
### 0x24eeb0 (76 slots)
~~~asm
0024EEB0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0024EEB4 f65701a9 stp      x22, x21, [sp, #0x10]
0024EEB8 f44f02a9 stp      x20, x19, [sp, #0x20]
0024EEBC fd030091 mov      x29, sp
0024EEC0 f30300aa mov      x19, x0
0024EEC4 f4cf8792 mov      x20, #-0x3e80
0024EEC8 15b79c52 mov      w21, #0xe5b8
0024EECC f5a2a072 movk     w21, #0x517, lsl #16
0024EED0 04000014 b        #0x24eee0
0024EED4 94220091 add      x20, x20, #8
0024EED8 b52200d1 sub      x21, x21, #8
0024EEDC 140100b4 cbz      x20, #0x24eefc
0024EEE0 606a75f8 ldr      x0, [x19, x21]
0024EEE4 80ffffb4 cbz      x0, #0x24eed4
0024EEE8 088c44f8 ldr      x8, [x0, #0x48]!
0024EEEC 080d40f9 ldr      x8, [x8, #0x18]
0024EEF0 00013fd6 blr      x8
0024EEF4 7f6a35f8 str      xzr, [x19, x21]
0024EEF8 f7ffff17 b        #0x24eed4
0024EEFC 088a8252 mov      w8, #0x1450
0024EF00 8872a072 movk     w8, #0x394, lsl #16
0024EF04 f4278392 mov      x20, #-0x1940
0024EF08 6002088b add      x0, x19, x8
0024EF0C d4ffbff2 movk     x20, #0xfffe, lsl #16
0024EF10 349f0e94 bl       #0x5f6be0
0024EF14 882a00f0 adrp     x8, #0x7a1000
0024EF18 15ec8a52 mov      w21, #0x5760
0024EF1C 3562a072 movk     w21, #0x311, lsl #16
0024EF20 084544f9 ldr      x8, [x8, #0x888]
0024EF24 f60314aa mov      x22, x20
0024EF28 08410091 add      x8, x8, #0x10
0024EF2C 680200f9 str      x8, [x19]
0024EF30 04000014 b        #0x24ef40
0024EF34 d6220091 add      x22, x22, #8
0024EF38 b52200d1 sub      x21, x21, #8
0024EF3C 160100b4 cbz      x22, #0x24ef5c
0024EF40 606a75f8 ldr      x0, [x19, x21]
0024EF44 80ffffb4 cbz      x0, #0x24ef34
0024EF48 088c44f8 ldr      x8, [x0, #0x48]!
0024EF4C 080d40f9 ldr      x8, [x8, #0x18]
0024EF50 00013fd6 blr      x8
0024EF54 7f6a35f8 str      xzr, [x19, x21]
0024EF58 f7ffff17 b        #0x24ef34
0024EF5C 15c48752 mov      w21, #0x3e20
0024EF60 1562a072 movk     w21, #0x310, lsl #16
0024EF64 06000014 b        #0x24ef7c
0024EF68 1f2003d5 nop      
0024EF6C 1f2003d5 nop      
0024EF70 94220091 add      x20, x20, #8
0024EF74 b52200d1 sub      x21, x21, #8
0024EF78 140100b4 cbz      x20, #0x24ef98
0024EF7C 606a75f8 ldr      x0, [x19, x21]
0024EF80 80ffffb4 cbz      x0, #0x24ef70
0024EF84 088c44f8 ldr      x8, [x0, #0x48]!
0024EF88 080d40f9 ldr      x8, [x8, #0x18]
0024EF8C 00013fd6 blr      x8
0024EF90 7f6a35f8 str      xzr, [x19, x21]
0024EF94 f7ffff17 b        #0x24ef70
0024EF98 08848452 mov      w8, #0x2420
0024EF9C e85fa072 movk     w8, #0x2ff, lsl #16
0024EFA0 6002088b add      x0, x19, x8
0024EFA4 51f10b94 bl       #0x54b4e8
0024EFA8 082900f0 adrp     x8, #0x771000
0024EFAC 08610f91 add      x8, x8, #0x3d8
0024EFB0 600e40f9 ldr      x0, [x19, #0x18]
0024EFB4 08410091 add      x8, x8, #0x10
0024EFB8 680200f9 str      x8, [x19]
0024EFBC 800000b4 cbz      x0, #0x24efcc
0024EFC0 088c44f8 ldr      x8, [x0, #0x48]!
0024EFC4 080d40f9 ldr      x8, [x8, #0x18]
0024EFC8 00013fd6 blr      x8
0024EFCC e00313aa mov      x0, x19
0024EFD0 f44f42a9 ldp      x20, x19, [sp, #0x20]
0024EFD4 f65741a9 ldp      x22, x21, [sp, #0x10]
0024EFD8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0024EFDC c9c5f617 b        #0x700
~~~
### 0x54c190 (10 slots)
~~~asm
0054C190 a81400b0 adrp     x8, #0x7e1000
0054C194 08c11891 add      x8, x8, #0x630
0054C198 000140f9 ldr      x0, [x8]
0054C19C c00000b4 cbz      x0, #0x54c1b4
0054C1A0 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
0054C1A4 fd030091 mov      x29, sp
0054C1A8 ce080094 bl       #0x54e4e0
0054C1AC fd7bc1a8 ldp      x29, x30, [sp], #0x10
0054C1B0 44050014 b        #0x54d6c0
0054C1B4 c0035fd6 ret      
~~~
### 0x54db90 (105 slots)
~~~asm
0054DB90 ff0301d1 sub      sp, sp, #0x40
0054DB94 fd7b01a9 stp      x29, x30, [sp, #0x10]
0054DB98 f51300f9 str      x21, [sp, #0x20]
0054DB9C f44f03a9 stp      x20, x19, [sp, #0x30]
0054DBA0 fd430091 add      x29, sp, #0x10
0054DBA4 081041b9 ldr      w8, [x0, #0x110]
0054DBA8 c8000034 cbz      w8, #0x54dbc0
0054DBAC f44f43a9 ldp      x20, x19, [sp, #0x30]
0054DBB0 f51340f9 ldr      x21, [sp, #0x20]
0054DBB4 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0054DBB8 ff030191 add      sp, sp, #0x40
0054DBBC c0035fd6 ret      
0054DBC0 953000d0 adrp     x21, #0xb5f000
0054DBC4 f30300aa mov      x19, x0
0054DBC8 b4e242f9 ldr      x20, [x21, #0x5c0]
0054DBCC 540100b4 cbz      x20, #0x54dbf4
0054DBD0 882640a9 ldp      x8, x9, [x20]
0054DBD4 1f0109eb cmp      x8, x9
0054DBD8 20020054 b.eq     #0x54dc1c
0054DBDC 280108cb sub      x8, x9, x8
0054DBE0 1ffd00f1 cmp      x8, #0x3f
0054DBE4 88000054 b.hi     #0x54dbf4
0054DBE8 28008052 mov      w8, #1
0054DBEC 681201b9 str      w8, [x19, #0x110]
0054DBF0 1d000014 b        #0x54dc64
0054DBF4 88008052 mov      w8, #4
0054DBF8 e00313aa mov      x0, x19
0054DBFC f51340f9 ldr      x21, [sp, #0x20]
0054DC00 681201b9 str      w8, [x19, #0x110]
0054DC04 680240f9 ldr      x8, [x19]
0054DC08 012140f9 ldr      x1, [x8, #0x40]
0054DC0C f44f43a9 ldp      x20, x19, [sp, #0x30]
0054DC10 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0054DC14 ff030191 add      sp, sp, #0x40
0054DC18 20001fd6 br       x1
0054DC1C 687e40f9 ldr      x8, [x19, #0xf8]
0054DC20 480100b4 cbz      x8, #0x54dc48
0054DC24 687a40f9 ldr      x8, [x19, #0xf0]
0054DC28 000140f9 ldr      x0, [x8]
0054DC2C a00100b4 cbz      x0, #0x54dc60
0054DC30 080040f9 ldr      x8, [x0]
0054DC34 081d40f9 ldr      x8, [x8, #0x38]
0054DC38 00013fd6 blr      x8
0054DC3C 48008052 mov      w8, #2
0054DC40 681201b9 str      w8, [x19, #0x110]
0054DC44 07000014 b        #0x54dc60
0054DC48 48008052 mov      w8, #2
0054DC4C e00313aa mov      x0, x19
0054DC50 681201b9 str      w8, [x19, #0x110]
0054DC54 680240f9 ldr      x8, [x19]
0054DC58 081d40f9 ldr      x8, [x8, #0x38]
0054DC5C 00013fd6 blr      x8
0054DC60 b4e242f9 ldr      x20, [x21, #0x5c0]
0054DC64 680240f9 ldr      x8, [x19]
0054DC68 e00313aa mov      x0, x19
0054DC6C 090940f9 ldr      x9, [x8, #0x10]
0054DC70 e8230091 add      x8, sp, #8
0054DC74 20013fd6 blr      x9
0054DC78 e80740f9 ldr      x8, [sp, #8]
0054DC7C ff0700f9 str      xzr, [sp, #8]
0054DC80 a80f00f9 str      x8, [x29, #0x18]
0054DC84 88a640a9 ldp      x8, x9, [x20, #8]
0054DC88 1f0109eb cmp      x8, x9
0054DC8C c2020054 b.hs     #0x54dce4
0054DC90 49d03bd5 mrs      x9, tpidr_el0
0054DC94 29c97392 and      x9, x9, #0xffffffffffffe000
0054DC98 2a4d40f9 ldr      x10, [x9, #0x98]
0054DC9C 5f4100f1 cmp      x10, #0x10
0054DCA0 80040054 b.eq     #0x54dd30
0054DCA4 8b0e40f9 ldr      x11, [x20, #0x18]
0054DCA8 2a0d0a8b add      x10, x9, x10, lsl #3
0054DCAC 4b0d00f9 str      x11, [x10, #0x18]
0054DCB0 2a4d40f9 ldr      x10, [x9, #0x98]
0054DCB4 4a050091 add      x10, x10, #1
0054DCB8 2a4d00f9 str      x10, [x9, #0x98]
0054DCBC aa0f40f9 ldr      x10, [x29, #0x18]
0054DCC0 bf0f00f9 str      xzr, [x29, #0x18]
0054DCC4 0a8500f8 str      x10, [x8], #8
0054DCC8 2a4d40f9 ldr      x10, [x9, #0x98]
0054DCCC 4a0500d1 sub      x10, x10, #1
0054DCD0 2a4d00f9 str      x10, [x9, #0x98]
0054DCD4 880600f9 str      x8, [x20, #8]
0054DCD8 a00f40f9 ldr      x0, [x29, #0x18]
0054DCDC e00000b5 cbnz     x0, #0x54dcf8
0054DCE0 0a000014 b        #0x54dd08
0054DCE4 a1630091 add      x1, x29, #0x18
0054DCE8 e00314aa mov      x0, x20
0054DCEC 35000094 bl       #0x54ddc0
0054DCF0 a00f40f9 ldr      x0, [x29, #0x18]
0054DCF4 a00000b4 cbz      x0, #0x54dd08
0054DCF8 088c44f8 ldr      x8, [x0, #0x48]!
0054DCFC 080d40f9 ldr      x8, [x8, #0x18]
0054DD00 00013fd6 blr      x8
0054DD04 bf0f00f9 str      xzr, [x29, #0x18]
0054DD08 e00740f9 ldr      x0, [sp, #8]
0054DD0C 00f5ffb4 cbz      x0, #0x54dbac
0054DD10 088c44f8 ldr      x8, [x0, #0x48]!
0054DD14 080d40f9 ldr      x8, [x8, #0x18]
0054DD18 00013fd6 blr      x8
0054DD1C f44f43a9 ldp      x20, x19, [sp, #0x30]
0054DD20 f51340f9 ldr      x21, [sp, #0x20]
0054DD24 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0054DD28 ff030191 add      sp, sp, #0x40
0054DD2C c0035fd6 ret      
0054DD30 b8d3ea97 bl       #0x2c10
~~~
### 0x54e340 (92 slots)
~~~asm
0054E340 082c40f9 ldr      x8, [x0, #0x58]
0054E344 480b00b4 cbz      x8, #0x54e4ac
0054E348 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0054E34C f65701a9 stp      x22, x21, [sp, #0x10]
0054E350 f44f02a9 stp      x20, x19, [sp, #0x20]
0054E354 fd030091 mov      x29, sp
0054E358 951200b0 adrp     x21, #0x79f000
0054E35C f30300aa mov      x19, x0
0054E360 b59242f9 ldr      x21, [x21, #0x520]
0054E364 a80240f9 ldr      x8, [x21]
0054E368 080400b4 cbz      x8, #0x54e3e8
0054E36C 097d40f9 ldr      x9, [x8, #0xf8]
0054E370 c90300b4 cbz      x9, #0x54e3e8
0054E374 147940f9 ldr      x20, [x8, #0xf0]
0054E378 36e97bd3 lsl      x22, x9, #5
0054E37C 1f2003d5 nop      
0054E380 800642f8 ldr      x0, [x20], #0x20
0054E384 080040f9 ldr      x8, [x0]
0054E388 081540f9 ldr      x8, [x8, #0x28]
0054E38C 00013fd6 blr      x8
0054E390 d68200f1 subs     x22, x22, #0x20
0054E394 61ffff54 b.ne     #0x54e380
0054E398 14209c52 mov      w20, #0xe100
0054E39C b4bea072 movk     w20, #0x5f5, lsl #16
0054E3A0 7f6200b9 str      wzr, [x19, #0x60]
0054E3A4 16538752 mov      w22, #0x3a98
0054E3A8 1f2003d5 nop      
0054E3AC 1f2003d5 nop      
0054E3B0 a80240f9 ldr      x8, [x21]
0054E3B4 a80100b4 cbz      x8, #0x54e3e8
0054E3B8 087d40f9 ldr      x8, [x8, #0xf8]
0054E3BC 680100b4 cbz      x8, #0x54e3e8
0054E3C0 e00313aa mov      x0, x19
0054E3C4 47000094 bl       #0x54e4e0
0054E3C8 e00314aa mov      x0, x20
0054E3CC e19f0294 bl       #0x5f6350
0054E3D0 686240b9 ldr      w8, [x19, #0x60]
0054E3D4 08050011 add      w8, w8, #1
0054E3D8 1f01166b cmp      w8, w22
0054E3DC 686200b9 str      w8, [x19, #0x60]
0054E3E0 89feff54 b.ls     #0x54e3b0
0054E3E4 2f000014 b        #0x54e4a0
0054E3E8 687e40f9 ldr      x8, [x19, #0xf8]
0054E3EC 680500b4 cbz      x8, #0x54e498
0054E3F0 757a40f9 ldr      x21, [x19, #0xf0]
0054E3F4 16e97bd3 lsl      x22, x8, #5
0054E3F8 05000014 b        #0x54e40c
0054E3FC 1f2003d5 nop      
0054E400 b5820091 add      x21, x21, #0x20
0054E404 d68200f1 subs     x22, x22, #0x20
0054E408 e0010054 b.eq     #0x54e444
0054E40C b40240f9 ldr      x20, [x21]
0054E410 bf0200f9 str      xzr, [x21]
0054E414 74ffffb4 cbz      x20, #0x54e400
0054E418 880240f9 ldr      x8, [x20]
0054E41C e00314aa mov      x0, x20
0054E420 080140f9 ldr      x8, [x8]
0054E424 00013fd6 blr      x8
0054E428 a08a40a9 ldp      x0, x2, [x21, #8]
0054E42C e10314aa mov      x1, x20
0054E430 a30e40f9 ldr      x3, [x21, #0x18]
0054E434 080040f9 ldr      x8, [x0]
0054E438 080d40f9 ldr      x8, [x8, #0x18]
0054E43C 00013fd6 blr      x8
0054E440 f0ffff17 b        #0x54e400
0054E444 757e40f9 ldr      x21, [x19, #0xf8]
0054E448 950200b4 cbz      x21, #0x54e498
0054E44C 767a40f9 ldr      x22, [x19, #0xf0]
0054E450 04000014 b        #0x54e460
0054E454 b50600d1 sub      x21, x21, #1
0054E458 d6820091 add      x22, x22, #0x20
0054E45C f50100b4 cbz      x21, #0x54e498
0054E460 d40240f9 ldr      x20, [x22]
0054E464 df0200f9 str      xzr, [x22]
0054E468 74ffffb4 cbz      x20, #0x54e454
0054E46C 880240f9 ldr      x8, [x20]
0054E470 e00314aa mov      x0, x20
0054E474 080140f9 ldr      x8, [x8]
0054E478 00013fd6 blr      x8
0054E47C c08a40a9 ldp      x0, x2, [x22, #8]
0054E480 e10314aa mov      x1, x20
0054E484 c30e40f9 ldr      x3, [x22, #0x18]
0054E488 080040f9 ldr      x8, [x0]
0054E48C 080d40f9 ldr      x8, [x8, #0x18]
0054E490 00013fd6 blr      x8
0054E494 f0ffff17 b        #0x54e454
0054E498 7f7e00f9 str      xzr, [x19, #0xf8]
0054E49C 7f2e00f9 str      xzr, [x19, #0x58]
0054E4A0 f44f42a9 ldp      x20, x19, [sp, #0x20]
0054E4A4 f65741a9 ldp      x22, x21, [sp, #0x10]
0054E4A8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0054E4AC c0035fd6 ret      
~~~
### 0x54e4e0 (89 slots)
~~~asm
0054E4E0 087c40f9 ldr      x8, [x0, #0xf8]
0054E4E4 e80a00b4 cbz      x8, #0x54e640
0054E4E8 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0054E4EC f65701a9 stp      x22, x21, [sp, #0x10]
0054E4F0 f44f02a9 stp      x20, x19, [sp, #0x20]
0054E4F4 fd030091 mov      x29, sp
0054E4F8 167840f9 ldr      x22, [x0, #0xf0]
0054E4FC f30300aa mov      x19, x0
0054E500 c00240f9 ldr      x0, [x22]
0054E504 080040f9 ldr      x8, [x0]
0054E508 082140f9 ldr      x8, [x8, #0x40]
0054E50C 00013fd6 blr      x8
0054E510 c80240f9 ldr      x8, [x22]
0054E514 1f000072 tst      w0, #1
0054E518 0a028052 mov      w10, #0x10
0054E51C 0b038052 mov      w11, #0x18
0054E520 6a118a9a csel     x10, x11, x10, ne
0054E524 090140f9 ldr      x9, [x8]
0054E528 e00308aa mov      x0, x8
0054E52C 29696af8 ldr      x9, [x9, x10]
0054E530 20013fd6 blr      x9
0054E534 1f040071 cmp      w0, #1
0054E538 e1070054 b.ne     #0x54e634
0054E53C d40240f9 ldr      x20, [x22]
0054E540 df0200f9 str      xzr, [x22]
0054E544 740100b4 cbz      x20, #0x54e570
0054E548 880240f9 ldr      x8, [x20]
0054E54C e00314aa mov      x0, x20
0054E550 080140f9 ldr      x8, [x8]
0054E554 00013fd6 blr      x8
0054E558 c08a40a9 ldp      x0, x2, [x22, #8]
0054E55C e10314aa mov      x1, x20
0054E560 c30e40f9 ldr      x3, [x22, #0x18]
0054E564 080040f9 ldr      x8, [x0]
0054E568 080d40f9 ldr      x8, [x8, #0x18]
0054E56C 00013fd6 blr      x8
0054E570 68264fa9 ldp      x8, x9, [x19, #0xf0]
0054E574 1515098b add      x21, x8, x9, lsl #5
0054E578 c8820091 add      x8, x22, #0x20
0054E57C 1f0115eb cmp      x8, x21
0054E580 a0030054 b.eq     #0x54e5f4
0054E584 d6620091 add      x22, x22, #0x18
0054E588 0b000014 b        #0x54e5b4
0054E58C 1f2003d5 nop      
0054E590 e80316aa mov      x8, x22
0054E594 c92a41a9 ldp      x9, x10, [x22, #0x10]
0054E598 0b0d42f8 ldr      x11, [x8, #0x20]!
0054E59C cb0200f9 str      x11, [x22]
0054E5A0 c92a3fa9 stp      x9, x10, [x22, #-0x10]
0054E5A4 c9a20091 add      x9, x22, #0x28
0054E5A8 3f0115eb cmp      x9, x21
0054E5AC f60308aa mov      x22, x8
0054E5B0 20020054 b.eq     #0x54e5f4
0054E5B4 c80640f9 ldr      x8, [x22, #8]
0054E5B8 df0600f9 str      xzr, [x22, #8]
0054E5BC d4825ef8 ldur     x20, [x22, #-0x18]
0054E5C0 c8821ef8 stur     x8, [x22, #-0x18]
0054E5C4 74feffb4 cbz      x20, #0x54e590
0054E5C8 880240f9 ldr      x8, [x20]
0054E5CC e00314aa mov      x0, x20
0054E5D0 080140f9 ldr      x8, [x8]
0054E5D4 00013fd6 blr      x8
0054E5D8 c00a7fa9 ldp      x0, x2, [x22, #-0x10]
0054E5DC e10314aa mov      x1, x20
0054E5E0 c30240f9 ldr      x3, [x22]
0054E5E4 080040f9 ldr      x8, [x0]
0054E5E8 080d40f9 ldr      x8, [x8, #0x18]
0054E5EC 00013fd6 blr      x8
0054E5F0 e8ffff17 b        #0x54e590
0054E5F4 b4025ef8 ldur     x20, [x21, #-0x20]
0054E5F8 bf021ef8 stur     xzr, [x21, #-0x20]
0054E5FC 740100b4 cbz      x20, #0x54e628
0054E600 880240f9 ldr      x8, [x20]
0054E604 e00314aa mov      x0, x20
0054E608 080140f9 ldr      x8, [x8]
0054E60C 00013fd6 blr      x8
0054E610 a08a7ea9 ldp      x0, x2, [x21, #-0x18]
0054E614 e10314aa mov      x1, x20
0054E618 a3825ff8 ldur     x3, [x21, #-8]
0054E61C 080040f9 ldr      x8, [x0]
0054E620 080d40f9 ldr      x8, [x8, #0x18]
0054E624 00013fd6 blr      x8
0054E628 687e40f9 ldr      x8, [x19, #0xf8]
0054E62C 080500d1 sub      x8, x8, #1
0054E630 687e00f9 str      x8, [x19, #0xf8]
0054E634 f44f42a9 ldp      x20, x19, [sp, #0x20]
0054E638 f65741a9 ldp      x22, x21, [sp, #0x10]
0054E63C fd7bc3a8 ldp      x29, x30, [sp], #0x30
0054E640 c0035fd6 ret      
~~~
### 0x54e6f0 (112 slots)
~~~asm
0054E6F0 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
0054E6F4 f70b00f9 str      x23, [sp, #0x10]
0054E6F8 f65702a9 stp      x22, x21, [sp, #0x20]
0054E6FC f44f03a9 stp      x20, x19, [sp, #0x30]
0054E700 fd030091 mov      x29, sp
0054E704 280040f9 ldr      x8, [x1]
0054E708 080b00b4 cbz      x8, #0x54e868
0054E70C 087c40f9 ldr      x8, [x0, #0xf8]
0054E710 f30301aa mov      x19, x1
0054E714 f40300aa mov      x20, x0
0054E718 1f1500f1 cmp      x8, #5
0054E71C 23050054 b.lo     #0x54e7c0
0054E720 961200b0 adrp     x22, #0x79f000
0054E724 15209c52 mov      w21, #0xe100
0054E728 b5bea072 movk     w21, #0x5f5, lsl #16
0054E72C d69242f9 ldr      x22, [x22, #0x520]
0054E730 37538752 mov      w23, #0x3a99
0054E734 9f6200b9 str      wzr, [x20, #0x60]
0054E738 1f2003d5 nop      
0054E73C 1f2003d5 nop      
0054E740 c80240f9 ldr      x8, [x22]
0054E744 e80300b4 cbz      x8, #0x54e7c0
0054E748 087d40f9 ldr      x8, [x8, #0xf8]
0054E74C a80300b4 cbz      x8, #0x54e7c0
0054E750 e00314aa mov      x0, x20
0054E754 63ffff97 bl       #0x54e4e0
0054E758 e00315aa mov      x0, x21
0054E75C fd9e0294 bl       #0x5f6350
0054E760 886240b9 ldr      w8, [x20, #0x60]
0054E764 08050011 add      w8, w8, #1
0054E768 1f01176b cmp      w8, w23
0054E76C 886200b9 str      w8, [x20, #0x60]
0054E770 83feff54 b.lo     #0x54e740
0054E774 740240f9 ldr      x20, [x19]
0054E778 7f0200f9 str      xzr, [x19]
0054E77C 740700b4 cbz      x20, #0x54e868
0054E780 880240f9 ldr      x8, [x20]
0054E784 e00314aa mov      x0, x20
0054E788 080140f9 ldr      x8, [x8]
0054E78C 00013fd6 blr      x8
0054E790 608a40a9 ldp      x0, x2, [x19, #8]
0054E794 e10314aa mov      x1, x20
0054E798 630e40f9 ldr      x3, [x19, #0x18]
0054E79C 080040f9 ldr      x8, [x0]
0054E7A0 080d40f9 ldr      x8, [x8, #0x18]
0054E7A4 00013fd6 blr      x8
0054E7A8 e0031faa mov      x0, xzr
0054E7AC f44f43a9 ldp      x20, x19, [sp, #0x30]
0054E7B0 f70b40f9 ldr      x23, [sp, #0x10]
0054E7B4 f65742a9 ldp      x22, x21, [sp, #0x20]
0054E7B8 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0054E7BC c0035fd6 ret      
0054E7C0 882a40f9 ldr      x8, [x20, #0x50]
0054E7C4 01050091 add      x1, x8, #1
0054E7C8 812a00f9 str      x1, [x20, #0x50]
0054E7CC 600240f9 ldr      x0, [x19]
0054E7D0 080040f9 ldr      x8, [x0]
0054E7D4 081940f9 ldr      x8, [x8, #0x30]
0054E7D8 00013fd6 blr      x8
0054E7DC 88264fa9 ldp      x8, x9, [x20, #0xf0]
0054E7E0 0115098b add      x1, x8, x9, lsl #5
0054E7E4 888240f9 ldr      x8, [x20, #0x100]
0054E7E8 3f0108eb cmp      x9, x8
0054E7EC a0040054 b.eq     #0x54e880
0054E7F0 48d03bd5 mrs      x8, tpidr_el0
0054E7F4 08c97392 and      x8, x8, #0xffffffffffffe000
0054E7F8 094d40f9 ldr      x9, [x8, #0x98]
0054E7FC 3f4100f1 cmp      x9, #0x10
0054E800 60050054 b.eq     #0x54e8ac
0054E804 8a5a40f9 ldr      x10, [x20, #0xb0]
0054E808 090d098b add      x9, x8, x9, lsl #3
0054E80C 2a0d00f9 str      x10, [x9, #0x18]
0054E810 094d40f9 ldr      x9, [x8, #0x98]
0054E814 29050091 add      x9, x9, #1
0054E818 094d00f9 str      x9, [x8, #0x98]
0054E81C 690240f9 ldr      x9, [x19]
0054E820 7f0200f9 str      xzr, [x19]
0054E824 290000f9 str      x9, [x1]
0054E828 69aa40a9 ldp      x9, x10, [x19, #8]
0054E82C 6b0e40f9 ldr      x11, [x19, #0x18]
0054E830 2a2c01a9 stp      x10, x11, [x1, #0x10]
0054E834 290400f9 str      x9, [x1, #8]
0054E838 094d40f9 ldr      x9, [x8, #0x98]
0054E83C 290500d1 sub      x9, x9, #1
0054E840 094d00f9 str      x9, [x8, #0x98]
0054E844 887e40f9 ldr      x8, [x20, #0xf8]
0054E848 08050091 add      x8, x8, #1
0054E84C 887e00f9 str      x8, [x20, #0xf8]
0054E850 802a40f9 ldr      x0, [x20, #0x50]
0054E854 f44f43a9 ldp      x20, x19, [sp, #0x30]
0054E858 f70b40f9 ldr      x23, [sp, #0x10]
0054E85C f65742a9 ldp      x22, x21, [sp, #0x20]
0054E860 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0054E864 c0035fd6 ret      
0054E868 e0031faa mov      x0, xzr
0054E86C f44f43a9 ldp      x20, x19, [sp, #0x30]
0054E870 f70b40f9 ldr      x23, [sp, #0x10]
0054E874 f65742a9 ldp      x22, x21, [sp, #0x20]
0054E878 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0054E87C c0035fd6 ret      
0054E880 80c20291 add      x0, x20, #0xb0
0054E884 a8630091 add      x8, x29, #0x18
0054E888 22008052 mov      w2, #1
0054E88C e30313aa mov      x3, x19
0054E890 3c000094 bl       #0x54e980
0054E894 802a40f9 ldr      x0, [x20, #0x50]
0054E898 f44f43a9 ldp      x20, x19, [sp, #0x30]
0054E89C f70b40f9 ldr      x23, [sp, #0x10]
0054E8A0 f65742a9 ldp      x22, x21, [sp, #0x20]
0054E8A4 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0054E8A8 c0035fd6 ret      
0054E8AC d9d0ea97 bl       #0x2c10
~~~
