# HOME 4.1.0 original ELF serializer evidence

SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
RELR decoded offsets: 27112; RELA: 526.

## BDSP 31 segment getters

| index | source | vptr candidate | buffer getter | size getter | constant size | conditional prefix |
|---:|---|---|---|---|---|---|
| 0 | 0x7a22a8 RELR | 0x778fd0 | 0x1a1eb8 | 0x1a1ec0 | 0x4 | 0x0 |
| 1 | 0x7a22b0 RELR | 0x779050 | 0x1a1edc | 0x1a1ee4 | 0x7d0 | 0x4 |
| 2 | 0x7a22b8 RELR | 0x7790d0 | 0x1a1f08 | 0x1a1f10 | 0x3e80 | 0x7d4 |
| 3 | 0x7a22c0 RELR | 0x779150 | 0x1a1f34 | 0x1a1f3c | 0xfa0 | 0x4654 |
| 4 | 0x7a22c8 RELR | 0x7791d0 | 0x1a1f60 | 0x1a1f68 | 0x40 | 0x55f4 |
| 5 | 0x7a22a8 RELR (candidate) | 0x778fd0 | 0x1a1eb8 | 0x1a1ec0 | 0x4 | 0x5634 |
| 6 | 0x7a22d0 RELR | 0x779250 | 0x1a1fa0 | 0x1a1fa8 | 0x4 | 0x5638 |
| 7 | 0x7a2268 RELR | 0x7799d0 | 0x1a2a28 | 0x1a2a68 | 0xbb80 | 0x563c |
| 8 | 0x7a22d8 RELR | 0x7792d0 | 0x1a1fc4 | 0x1a1fcc | 0x2ed4 | 0x111bc |
| 9 | 0x7a22e0 RELR | 0x779350 | 0x1a1ff0 | 0x1a1ff8 | 0x8 | 0x14090 |
| 10 | 0x7a2270 RELR | 0x779a50 | 0x1a2b08 | 0x1a2b10 | 0x812 | 0x14098 |
| 11 | 0x7a2260 RELR | 0x779ad0 | 0x1a2bac | 0x1a2bb4 | 0x64a | 0x148aa |
| 12 | 0x7a2258 RELR | 0x779b50 | 0x1a2ea0 | 0x1a2ea8 | 0x64c80 | 0x14ef4 |
| 13 | 0x7a2278 RELR | 0x778e98 | 0x19de78 | 0x19de80 | 0x7b4 | 0x79b74 |
| 14 | 0x7a2290 RELR | 0x7798d0 | 0x1a28e4 | 0x1a28ec | 0x30b8 | 0x7a328 |
| 15 | 0x7a22e8 RELR | 0x7793d0 | 0x1a2014 | 0x1a201c | 0x18814 | 0x7d3e0 |
| 16 | 0x7a2250 RELR | 0x779c50 | 0x1a3f14 | 0x1a3f1c | 0x1b8 | 0x95bf4 |
| 17 | 0x7a2288 RELR | 0x779cd0 | 0x1a3fe4 | 0x1a3fec | 0x134 | 0x95dac |
| 18 | 0x7a2280 RELR | 0x779bd0 | 0x1a3e60 | 0x1a3e68 | 0x1a0 | 0x95ee0 |
| 19 | 0x7a2240 RELR | 0x779d50 | 0x1a4088 | 0x1a4090 | 0x2c0 | 0x96080 |
| 20 | 0x7a22f0 RELR | 0x779450 | 0x1a2048 | 0x1a2050 | 0x386f4 | 0x96340 |
| 21 | 0x7a2298 RELR | 0x779950 | 0x1a2904 | 0x1a290c | 0x64 | 0xcea34 |
| 22 | 0x7a22f8 RELR | 0x7794d0 | 0x1a207c | 0x1a2084 | 0x1ad80 | 0xcea98 |
| 23 | ? ctor immediate | 0x779550 | 0x1a20b0 | 0x1a20b8 | 0x10 | 0xe9818 |
| 24 | 0x7a2308 RELR | 0x7795d0 | 0x1a20d8 | 0x1a20e0 | 0x3c0 | 0xe9828 |
| 25 | 0x7a2310 RELR | 0x779650 | 0x1a2104 | 0x1a210c | 0x3570 | 0xe9be8 |
| 26 | 0x7a2318 RELR | 0x7796d0 | 0x1a2130 | 0x1a2138 | 0x30 | 0xed158 |
| 27 | 0x7a2320 RELR | 0x779750 | 0x1a2168 | 0x1a2170 | 0xf8 | 0xed188 |
| 28 | 0x7a2328 RELR | 0x7797d0 | 0x1a21c8 | 0x1a21d0 | 0x400 | 0xed280 |
| 29 | 0x7a2330 RELR | 0x779850 | 0x1a21f4 | 0x1a21fc | 0x170c | 0xed680 |
| 30 | 0x7a2248 RELR | 0x779dd0 | 0x1a41b8 | 0x1a41c0 | 0x318 | 0xeed8c |

Conditional box prefix (only if all previous getter identities verified): 0x14ef4
Conditional total: 0xef0a4
Segment 5 constructor register provenance is a candidate. Do not treat prefix as verified until checked.

Size table (0x632828): 0xe9828, 0xe9be8, 0xed158, 0xed188, 0xed188, 0xed680, 0xedc20, 0xedc20, 0xedc20, 0xedc20, 0xedc20, 0xedc20, 0xedc20, 0xeed8c, 0xeed8c, 0xef0a4

## Getter disassembly
### Segment 0
~~~asm
001A1EB8  00500191  add      x0, x0, #0x54
001A1EBC  c0035fd6  ret      
001A1EC0  80008052  mov      w0, #4
001A1EC4  c0035fd6  ret      
~~~
### Segment 1
~~~asm
001A1EDC  00500191  add      x0, x0, #0x54
001A1EE0  c0035fd6  ret      
001A1EE4  00fa8052  mov      w0, #0x7d0
001A1EE8  c0035fd6  ret      
~~~
### Segment 2
~~~asm
001A1F08  00500191  add      x0, x0, #0x54
001A1F0C  c0035fd6  ret      
001A1F10  00d08752  mov      w0, #0x3e80
001A1F14  c0035fd6  ret      
~~~
### Segment 3
~~~asm
001A1F34  00500191  add      x0, x0, #0x54
001A1F38  c0035fd6  ret      
001A1F3C  00f48152  mov      w0, #0xfa0
001A1F40  c0035fd6  ret      
~~~
### Segment 4
~~~asm
001A1F60  00500191  add      x0, x0, #0x54
001A1F64  c0035fd6  ret      
001A1F68  00088052  mov      w0, #0x40
001A1F6C  c0035fd6  ret      
~~~
### Segment 5
~~~asm
001A1EB8  00500191  add      x0, x0, #0x54
001A1EBC  c0035fd6  ret      
001A1EC0  80008052  mov      w0, #4
001A1EC4  c0035fd6  ret      
~~~
### Segment 6
~~~asm
001A1FA0  00500191  add      x0, x0, #0x54
001A1FA4  c0035fd6  ret      
001A1FA8  80008052  mov      w0, #4
001A1FAC  c0035fd6  ret      
~~~
### Segment 7
~~~asm
001A2A28  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001A2A2C  f30b00f9  str      x19, [sp, #0x10]
001A2A30  fd030091  mov      x29, sp
001A2A34  f30300aa  mov      x19, x0
001A2A38  22fc0194  bl       #0x221ac0
001A2A3C  a8938652  mov      w8, #0x349d
001A2A40  2801a072  movk     w8, #9, lsl #16
001A2A44  897a9752  mov      w9, #0xbbd4
001A2A48  08686838  ldrb     w8, [x0, x8]
001A2A4C  6902098b  add      x9, x19, x9
001A2A50  6a520191  add      x10, x19, #0x54
001A2A54  f30b40f9  ldr      x19, [sp, #0x10]
001A2A58  1f010071  cmp      w8, #0
001A2A5C  4001899a  csel     x0, x10, x9, eq
001A2A60  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001A2A64  c0035fd6  ret      
001A2A68  00709752  mov      w0, #0xbb80
001A2A6C  c0035fd6  ret      
~~~
### Segment 8
~~~asm
001A1FC4  00500191  add      x0, x0, #0x54
001A1FC8  c0035fd6  ret      
001A1FCC  80da8552  mov      w0, #0x2ed4
001A1FD0  c0035fd6  ret      
~~~
### Segment 9
~~~asm
001A1FF0  00500191  add      x0, x0, #0x54
001A1FF4  c0035fd6  ret      
001A1FF8  00018052  mov      w0, #8
001A1FFC  c0035fd6  ret      
~~~
### Segment 10
~~~asm
001A2B08  00500191  add      x0, x0, #0x54
001A2B0C  c0035fd6  ret      
001A2B10  40028152  mov      w0, #0x812
001A2B14  c0035fd6  ret      
~~~
### Segment 11
~~~asm
001A2BAC  00500191  add      x0, x0, #0x54
001A2BB0  c0035fd6  ret      
001A2BB4  40c98052  mov      w0, #0x64a
001A2BB8  c0035fd6  ret      
~~~
### Segment 12
~~~asm
001A2EA0  00500191  add      x0, x0, #0x54
001A2EA4  c0035fd6  ret      
001A2EA8  00908952  mov      w0, #0x4c80
001A2EAC  c000a072  movk     w0, #6, lsl #16
001A2EB0  c0035fd6  ret      
~~~
### Segment 13
~~~asm
0019DE78  00500191  add      x0, x0, #0x54
0019DE7C  c0035fd6  ret      
0019DE80  80f68052  mov      w0, #0x7b4
0019DE84  c0035fd6  ret      
~~~
### Segment 14
~~~asm
001A28E4  00500191  add      x0, x0, #0x54
001A28E8  c0035fd6  ret      
001A28EC  00178652  mov      w0, #0x30b8
001A28F0  c0035fd6  ret      
~~~
### Segment 15
~~~asm
001A2014  00500191  add      x0, x0, #0x54
001A2018  c0035fd6  ret      
001A201C  80029152  mov      w0, #0x8814
001A2020  2000a072  movk     w0, #1, lsl #16
001A2024  c0035fd6  ret      
~~~
### Segment 16
~~~asm
001A3F14  00500191  add      x0, x0, #0x54
001A3F18  c0035fd6  ret      
001A3F1C  00378052  mov      w0, #0x1b8
001A3F20  c0035fd6  ret      
~~~
### Segment 17
~~~asm
001A3FE4  00500191  add      x0, x0, #0x54
001A3FE8  c0035fd6  ret      
001A3FEC  80268052  mov      w0, #0x134
001A3FF0  c0035fd6  ret      
~~~
### Segment 18
~~~asm
001A3E60  00500191  add      x0, x0, #0x54
001A3E64  c0035fd6  ret      
001A3E68  00348052  mov      w0, #0x1a0
001A3E6C  c0035fd6  ret      
~~~
### Segment 19
~~~asm
001A4088  00500191  add      x0, x0, #0x54
001A408C  c0035fd6  ret      
001A4090  00588052  mov      w0, #0x2c0
001A4094  c0035fd6  ret      
~~~
### Segment 20
~~~asm
001A2048  00500191  add      x0, x0, #0x54
001A204C  c0035fd6  ret      
001A2050  80de9052  mov      w0, #0x86f4
001A2054  6000a072  movk     w0, #3, lsl #16
001A2058  c0035fd6  ret      
~~~
### Segment 21
~~~asm
001A2904  00500191  add      x0, x0, #0x54
001A2908  c0035fd6  ret      
001A290C  800c8052  mov      w0, #0x64
001A2910  c0035fd6  ret      
~~~
### Segment 22
~~~asm
001A207C  00500191  add      x0, x0, #0x54
001A2080  c0035fd6  ret      
001A2084  00b09552  mov      w0, #0xad80
001A2088  2000a072  movk     w0, #1, lsl #16
001A208C  c0035fd6  ret      
~~~
### Segment 23
~~~asm
001A20B0  00500191  add      x0, x0, #0x54
001A20B4  c0035fd6  ret      
001A20B8  00028052  mov      w0, #0x10
001A20BC  c0035fd6  ret      
~~~
### Segment 24
~~~asm
001A20D8  00500191  add      x0, x0, #0x54
001A20DC  c0035fd6  ret      
001A20E0  00788052  mov      w0, #0x3c0
001A20E4  c0035fd6  ret      
~~~
### Segment 25
~~~asm
001A2104  00500191  add      x0, x0, #0x54
001A2108  c0035fd6  ret      
001A210C  00ae8652  mov      w0, #0x3570
001A2110  c0035fd6  ret      
~~~
### Segment 26
~~~asm
001A2130  00500191  add      x0, x0, #0x54
001A2134  c0035fd6  ret      
001A2138  00068052  mov      w0, #0x30
001A213C  c0035fd6  ret      
~~~
### Segment 27
~~~asm
001A2168  00500191  add      x0, x0, #0x54
001A216C  c0035fd6  ret      
001A2170  001f8052  mov      w0, #0xf8
001A2174  c0035fd6  ret      
~~~
### Segment 28
~~~asm
001A21C8  00600191  add      x0, x0, #0x58
001A21CC  c0035fd6  ret      
001A21D0  00808052  mov      w0, #0x400
001A21D4  c0035fd6  ret      
~~~
### Segment 29
~~~asm
001A21F4  00500191  add      x0, x0, #0x54
001A21F8  c0035fd6  ret      
001A21FC  80e18252  mov      w0, #0x170c
001A2200  c0035fd6  ret      
~~~
### Segment 30
~~~asm
001A41B8  00500191  add      x0, x0, #0x54
001A41BC  c0035fd6  ret      
001A41C0  00638052  mov      w0, #0x318
001A41C4  c0035fd6  ret      
~~~

## SV and ZA child vtable windows
### sv_primary
| slot | relocation | target | FDE bytes |
|---|---|---|---|
| 0x7815b8 | RELR | 0x2a0b38 | 120 |
| 0x7815c0 | RELR | 0x2a0bb0 | 120 |
| 0x7815c8 | RELR | 0x4e8864 | 120 |
| 0x7815d0 | RELR | 0x10730 | 24 |
| 0x7815d8 | RELR | 0x10750 | 40 |
| 0x7815e0 | RELR | 0x9ceb4 | 4 |
| 0x7815e8 | RELR | 0x9ceb8 | 16 |
| 0x7815f0 | RELR | 0x9cec8 | 4 |
| 0x7815f8 | RELR | 0x4e896c | 40 |
| 0x781600 | RELR | 0x4e8af0 | 344 |
| 0x781608 | RELR | 0x2a0ae8 | 80 |
| 0x781610 | RELR | 0x4e8c48 | 16 |
| 0x781618 | RELR | 0x4e88dc | 116 |
| 0x781620 | unresolved raw=0xffffffffffffffb8 | ? | ? |
| 0x781628 | unresolved raw=0x0 | ? | ? |
### sv_ref
| slot | relocation | target | FDE bytes |
|---|---|---|---|
| 0x781630 | RELR | 0x2a0c28 | 120 |
| 0x781638 | RELR | 0x2a0ca0 | 120 |
| 0x781640 | RELR | 0x10780 | 24 |
| 0x781648 | RELR | 0x107a0 | 40 |
| 0x781650 | unresolved raw=0xffffffffffffffa8 | ? | ? |
| 0x781658 | unresolved raw=0x0 | ? | ? |
### sv_third_window
| slot | relocation | target | FDE bytes |
|---|---|---|---|
| 0x781660 | RELR | 0x9cecc | 4 |
| 0x781668 | RELR | 0x2a0d18 | 120 |
| 0x781670 | RELR | 0x2a0d90 | 120 |
| 0x781678 | unresolved raw=0x0 | ? | ? |
| 0x781680 | unresolved raw=0x0 | ? | ? |
| 0x781688 | RELR | 0x2a0fe4 | 136 |
### za_primary
| slot | relocation | target | FDE bytes |
|---|---|---|---|
| 0x77c738 | RELR | 0x1ff418 | 120 |
| 0x77c740 | RELR | 0x1ff490 | 120 |
| 0x77c748 | RELR | 0x4e8864 | 120 |
| 0x77c750 | RELR | 0x10730 | 24 |
| 0x77c758 | RELR | 0x10750 | 40 |
| 0x77c760 | RELR | 0x9ceb4 | 4 |
| 0x77c768 | RELR | 0x9ceb8 | 16 |
| 0x77c770 | RELR | 0x9cec8 | 4 |
| 0x77c778 | RELR | 0x4e896c | 40 |
| 0x77c780 | RELR | 0x4e8af0 | 344 |
| 0x77c788 | RELR | 0x1ff3c8 | 80 |
| 0x77c790 | RELR | 0x4e8c48 | 16 |
| 0x77c798 | RELR | 0x4e88dc | 116 |
| 0x77c7a0 | unresolved raw=0xffffffffffffffb8 | ? | ? |
| 0x77c7a8 | unresolved raw=0x0 | ? | ? |
### za_ref
| slot | relocation | target | FDE bytes |
|---|---|---|---|
| 0x77c7b0 | RELR | 0x1ff508 | 120 |
| 0x77c7b8 | RELR | 0x1ff580 | 120 |
| 0x77c7c0 | RELR | 0x10780 | 24 |
| 0x77c7c8 | RELR | 0x107a0 | 40 |
| 0x77c7d0 | unresolved raw=0xffffffffffffffa8 | ? | ? |
| 0x77c7d8 | unresolved raw=0x0 | ? | ? |
### za_third_window
| slot | relocation | target | FDE bytes |
|---|---|---|---|
| 0x77c7e0 | RELR | 0x9cecc | 4 |
| 0x77c7e8 | RELR | 0x1ff5f8 | 120 |
| 0x77c7f0 | RELR | 0x1ff670 | 120 |
| 0x77c7f8 | unresolved raw=0x0 | ? | ? |
| 0x77c800 | unresolved raw=0x0 | ? | ? |
| 0x77c808 | RELR | 0x1ffaf0 | 160 |

## B/BL paths from vtable targets to file API wrappers
Depth limit 6, at most 1500 visited FDEs per root. Missing path is not proof of absence; indirect calls not resolved.

## Complete FDE disassembly
### swsh_rebuild 0x255970..0x255c74 (193 instructions)
~~~asm
00255970  ff0302d1  sub      sp, sp, #0x80
00255974  fd7b02a9  stp      x29, x30, [sp, #0x20]
00255978  fb1b00f9  str      x27, [sp, #0x30]
0025597C  fa6704a9  stp      x26, x25, [sp, #0x40]
00255980  f85f05a9  stp      x24, x23, [sp, #0x50]
00255984  f65706a9  stp      x22, x21, [sp, #0x60]
00255988  f44f07a9  stp      x20, x19, [sp, #0x70]
0025598C  fd830091  add      x29, sp, #0x20
00255990  582a00d0  adrp     x24, #0x79f000
00255994  a8630091  add      x8, x29, #0x18
00255998  182742f9  ldr      x24, [x24, #0x448]
0025599C  f40300aa  mov      x20, x0
002559A0  190340f9  ldr      x25, [x24]
002559A4  bf2aff97  bl       #0x2204a0
002559A8  331b41f9  ldr      x19, [x25, #0x230]
002559AC  b30000b4  cbz      x19, #0x2559c0
002559B0  e00313aa  mov      x0, x19
002559B4  088c44f8  ldr      x8, [x0, #0x48]!
002559B8  080940f9  ldr      x8, [x8, #0x10]
002559BC  00013fd6  blr      x8
002559C0  482a00d0  adrp     x8, #0x79f000
002559C4  e00313aa  mov      x0, x19
002559C8  08ed41f9  ldr      x8, [x8, #0x3d8]
002559CC  080140f9  ldr      x8, [x8]
002559D0  155541f9  ldr      x21, [x8, #0x2a8]
002559D4  680240f9  ldr      x8, [x19]
002559D8  081d40f9  ldr      x8, [x8, #0x38]
002559DC  00013fd6  blr      x8
002559E0  f6031f2a  mov      w22, wzr
002559E4  06000014  b        #0x2559fc
002559E8  1f2003d5  nop      
002559EC  1f2003d5  nop      
002559F0  d6060011  add      w22, w22, #1
002559F4  df820071  cmp      w22, #0x20
002559F8  e0040054  b.eq     #0x255a94
002559FC  f7031f2a  mov      w23, wzr
00255A00  04000014  b        #0x255a10
00255A04  f7060011  add      w23, w23, #1
00255A08  ff7a0071  cmp      w23, #0x1e
00255A0C  20ffff54  b.eq     #0x2559f0
00255A10  a00f40f9  ldr      x0, [x29, #0x18]
00255A14  a82300d1  sub      x8, x29, #8
00255A18  e103162a  mov      w1, w22
00255A1C  e203172a  mov      w2, w23
00255A20  e30315aa  mov      x3, x21
00255A24  89aafe97  bl       #0x200448
00255A28  a0835ff8  ldur     x0, [x29, #-8]
00255A2C  d7c2fe97  bl       #0x206588
00255A30  60020037  tbnz     w0, #0, #0x255a7c
00255A34  a0835ff8  ldur     x0, [x29, #-8]
00255A38  e00b00f9  str      x0, [sp, #0x10]
00255A3C  800000b4  cbz      x0, #0x255a4c
00255A40  088c44f8  ldr      x8, [x0, #0x48]!
00255A44  080940f9  ldr      x8, [x8, #0x10]
00255A48  00013fd6  blr      x8
00255A4C  e1430091  add      x1, sp, #0x10
00255A50  e00313aa  mov      x0, x19
00255A54  e20315aa  mov      x2, x21
00255A58  e303162a  mov      w3, w22
00255A5C  e403172a  mov      w4, w23
00255A60  d8160094  bl       #0x25b5c0
00255A64  e00b40f9  ldr      x0, [sp, #0x10]
00255A68  a00000b4  cbz      x0, #0x255a7c
00255A6C  088c44f8  ldr      x8, [x0, #0x48]!
00255A70  080d40f9  ldr      x8, [x8, #0x18]
00255A74  00013fd6  blr      x8
00255A78  ff0b00f9  str      xzr, [sp, #0x10]
00255A7C  a0835ff8  ldur     x0, [x29, #-8]
00255A80  20fcffb4  cbz      x0, #0x255a04
00255A84  088c44f8  ldr      x8, [x0, #0x48]!
00255A88  080d40f9  ldr      x8, [x8, #0x18]
00255A8C  00013fd6  blr      x8
00255A90  ddffff17  b        #0x255a04
00255A94  352341f9  ldr      x21, [x25, #0x240]
00255A98  b50000b4  cbz      x21, #0x255aac
00255A9C  e00315aa  mov      x0, x21
00255AA0  088c44f8  ldr      x8, [x0, #0x48]!
00255AA4  080940f9  ldr      x8, [x8, #0x10]
00255AA8  00013fd6  blr      x8
00255AAC  e00315aa  mov      x0, x21
00255AB0  01048052  mov      w1, #0x20
00255AB4  ef1e0094  bl       #0x25d670
00255AB8  a88e44f8  ldr      x8, [x21, #0x48]!
00255ABC  e00315aa  mov      x0, x21
00255AC0  080d40f9  ldr      x8, [x8, #0x18]
00255AC4  00013fd6  blr      x8
00255AC8  f5031faa  mov      x21, xzr
00255ACC  1ab49952  mov      w26, #0xcda0
00255AD0  fa00a072  movk     w26, #7, lsl #16
00255AD4  07000014  b        #0x255af0
00255AD8  1f2003d5  nop      
00255ADC  1f2003d5  nop      
00255AE0  b5060091  add      x21, x21, #1
00255AE4  5ac30091  add      x26, x26, #0x30
00255AE8  bf1a00f1  cmp      x21, #6
00255AEC  40060054  b.eq     #0x255bb4
00255AF0  362341f9  ldr      x22, [x25, #0x240]
00255AF4  b60000b4  cbz      x22, #0x255b08
00255AF8  e00316aa  mov      x0, x22
00255AFC  088c44f8  ldr      x8, [x0, #0x48]!
00255B00  080940f9  ldr      x8, [x8, #0x10]
00255B04  00013fd6  blr      x8
00255B08  e00316aa  mov      x0, x22
00255B0C  e103152a  mov      w1, w21
00255B10  2d1e0094  bl       #0x25d3c4
00255B14  c88e44f8  ldr      x8, [x22, #0x48]!
00255B18  f703002a  mov      w23, w0
00255B1C  e00316aa  mov      x0, x22
00255B20  080d40f9  ldr      x8, [x8, #0x18]
00255B24  00013fd6  blr      x8
00255B28  d7fdff34  cbz      w23, #0x255ae0
00255B2C  f6031faa  mov      x22, xzr
00255B30  fb03172a  mov      w27, w23
00255B34  0f000014  b        #0x255b70
00255B38  1f2003d5  nop      
00255B3C  1f2003d5  nop      
00255B40  e40f4129  ldp      w4, w3, [sp, #8]
00255B44  e00317aa  mov      x0, x23
00255B48  e103152a  mov      w1, w21
00255B4C  e203162a  mov      w2, w22
00255B50  761e0094  bl       #0x25d528
00255B54  e88e44f8  ldr      x8, [x23, #0x48]!
00255B58  e00317aa  mov      x0, x23
00255B5C  080d40f9  ldr      x8, [x8, #0x18]
00255B60  00013fd6  blr      x8
00255B64  d6060091  add      x22, x22, #1
00255B68  7f0316eb  cmp      x27, x22
00255B6C  a0fbff54  b.eq     #0x255ae0
00255B70  d42fff97  bl       #0x221ac0
00255B74  08001a8b  add      x8, x0, x26
00255B78  a00f40f9  ldr      x0, [x29, #0x18]
00255B7C  a12300d1  sub      x1, x29, #8
00255B80  087976f8  ldr      x8, [x8, x22, lsl #3]
00255B84  e2330091  add      x2, sp, #0xc
00255B88  e3230091  add      x3, sp, #8
00255B8C  ff0700f9  str      xzr, [sp, #8]
00255B90  a8831ff8  stur     x8, [x29, #-8]
00255B94  51b8fe97  bl       #0x203cd8
00255B98  372341f9  ldr      x23, [x25, #0x240]
00255B9C  37fdffb4  cbz      x23, #0x255b40
00255BA0  e00317aa  mov      x0, x23
00255BA4  088c44f8  ldr      x8, [x0, #0x48]!
00255BA8  080940f9  ldr      x8, [x8, #0x10]
00255BAC  00013fd6  blr      x8
00255BB0  e4ffff17  b        #0x255b40
00255BB4  88f24191  add      x8, x20, #0x7c, lsl #12
00255BB8  01013b91  add      x1, x8, #0xec0
00255BBC  280040f9  ldr      x8, [x1]
00255BC0  c80200b4  cbz      x8, #0x255c18
00255BC4  a00f40f9  ldr      x0, [x29, #0x18]
00255BC8  a22300d1  sub      x2, x29, #8
00255BCC  e3330091  add      x3, sp, #0xc
00255BD0  bf831fb8  stur     wzr, [x29, #-8]
00255BD4  ff0f00b9  str      wzr, [sp, #0xc]
00255BD8  40b8fe97  bl       #0x203cd8
00255BDC  080340f9  ldr      x8, [x24]
00255BE0  143541f9  ldr      x20, [x8, #0x268]
00255BE4  b40000b4  cbz      x20, #0x255bf8
00255BE8  e00314aa  mov      x0, x20
00255BEC  088c44f8  ldr      x8, [x0, #0x48]!
00255BF0  080940f9  ldr      x8, [x8, #0x10]
00255BF4  00013fd6  blr      x8
00255BF8  a8835fb8  ldur     w8, [x29, #-8]
00255BFC  e90f40b9  ldr      w9, [sp, #0xc]
00255C00  8a8e44f8  ldr      x10, [x20, #0x48]!
00255C04  e00314aa  mov      x0, x20
00255C08  88ca02b9  str      w8, [x20, #0x2c8]
00255C0C  89ce02b9  str      w9, [x20, #0x2cc]
00255C10  480d40f9  ldr      x8, [x10, #0x18]
00255C14  00013fd6  blr      x8
00255C18  000340f9  ldr      x0, [x24]
00255C1C  81008052  mov      w1, #4
00255C20  40700094  bl       #0x271d20
00255C24  688e44f8  ldr      x8, [x19, #0x48]!
00255C28  f403002a  mov      w20, w0
00255C2C  e00313aa  mov      x0, x19
00255C30  080d40f9  ldr      x8, [x8, #0x18]
00255C34  00013fd6  blr      x8
00255C38  a00f40f9  ldr      x0, [x29, #0x18]
00255C3C  800000b4  cbz      x0, #0x255c4c
00255C40  088c44f8  ldr      x8, [x0, #0x48]!
00255C44  080d40f9  ldr      x8, [x8, #0x18]
00255C48  00013fd6  blr      x8
00255C4C  9f0e0071  cmp      w20, #3
00255C50  f44f47a9  ldp      x20, x19, [sp, #0x70]
00255C54  f65746a9  ldp      x22, x21, [sp, #0x60]
00255C58  e0079f1a  cset     w0, ne
00255C5C  f85f45a9  ldp      x24, x23, [sp, #0x50]
00255C60  fb1b40f9  ldr      x27, [sp, #0x30]
00255C64  fa6744a9  ldp      x26, x25, [sp, #0x40]
00255C68  fd7b42a9  ldp      x29, x30, [sp, #0x20]
00255C6C  ff030291  add      sp, sp, #0x80
00255C70  c0035fd6  ret      
~~~
### pla_rebuild 0x1c6790..0x1c69bc (139 instructions)
~~~asm
001C6790  ff8301d1  sub      sp, sp, #0x60
001C6794  fd7b02a9  stp      x29, x30, [sp, #0x20]
001C6798  f85f03a9  stp      x24, x23, [sp, #0x30]
001C679C  f65704a9  stp      x22, x21, [sp, #0x40]
001C67A0  f44f05a9  stp      x20, x19, [sp, #0x50]
001C67A4  fd830091  add      x29, sp, #0x20
001C67A8  c83000f0  adrp     x8, #0x7e1000
001C67AC  08411891  add      x8, x8, #0x610
001C67B0  130140f9  ldr      x19, [x8]
001C67B4  a82300d1  sub      x8, x29, #8
001C67B8  3a670194  bl       #0x2204a0
001C67BC  e8430091  add      x8, sp, #0x10
001C67C0  e00313aa  mov      x0, x19
001C67C4  02aeff97  bl       #0x1b1fcc
001C67C8  a8835ff8  ldur     x8, [x29, #-8]
001C67CC  89fb8152  mov      w9, #0xfdc
001C67D0  090ea072  movk     w9, #0x70, lsl #16
001C67D4  186969b8  ldr      w24, [x8, x9]
001C67D8  1f070071  cmp      w24, #1
001C67DC  0b070054  b.lt     #0x1c68bc
001C67E0  c82e00b0  adrp     x8, #0x79f000
001C67E4  f4031f2a  mov      w20, wzr
001C67E8  08ed41f9  ldr      x8, [x8, #0x3d8]
001C67EC  080140f9  ldr      x8, [x8]
001C67F0  155541f9  ldr      x21, [x8, #0x2a8]
001C67F4  06000014  b        #0x1c680c
001C67F8  1f2003d5  nop      
001C67FC  1f2003d5  nop      
001C6800  94060011  add      w20, w20, #1
001C6804  9f02186b  cmp      w20, w24
001C6808  a0050054  b.eq     #0x1c68bc
001C680C  f6031f2a  mov      w22, wzr
001C6810  04000014  b        #0x1c6820
001C6814  d6060011  add      w22, w22, #1
001C6818  df7a0071  cmp      w22, #0x1e
001C681C  20ffff54  b.eq     #0x1c6800
001C6820  e00b40f9  ldr      x0, [sp, #0x10]
001C6824  e103142a  mov      w1, w20
001C6828  e203162a  mov      w2, w22
001C682C  e30315aa  mov      x3, x21
001C6830  fcd3ff97  bl       #0x1bb820
001C6834  a0835ff8  ldur     x0, [x29, #-8]
001C6838  e8230091  add      x8, sp, #8
001C683C  e103142a  mov      w1, w20
001C6840  e203162a  mov      w2, w22
001C6844  e30315aa  mov      x3, x21
001C6848  00e70094  bl       #0x200448
001C684C  e00740f9  ldr      x0, [sp, #8]
001C6850  4eff0094  bl       #0x206588
001C6854  80020037  tbnz     w0, #0, #0x1c68a4
001C6858  e0df40a9  ldp      x0, x23, [sp, #8]
001C685C  da000194  bl       #0x206bc4
001C6860  e00300f9  str      x0, [sp]
001C6864  800000b4  cbz      x0, #0x1c6874
001C6868  088c44f8  ldr      x8, [x0, #0x48]!
001C686C  080940f9  ldr      x8, [x8, #0x10]
001C6870  00013fd6  blr      x8
001C6874  e1030091  mov      x1, sp
001C6878  e00317aa  mov      x0, x23
001C687C  e20315aa  mov      x2, x21
001C6880  e303142a  mov      w3, w20
001C6884  e403162a  mov      w4, w22
001C6888  15d3ff97  bl       #0x1bb4dc
001C688C  e00340f9  ldr      x0, [sp]
001C6890  a00000b4  cbz      x0, #0x1c68a4
001C6894  088c44f8  ldr      x8, [x0, #0x48]!
001C6898  080d40f9  ldr      x8, [x8, #0x18]
001C689C  00013fd6  blr      x8
001C68A0  ff0300f9  str      xzr, [sp]
001C68A4  e00740f9  ldr      x0, [sp, #8]
001C68A8  60fbffb4  cbz      x0, #0x1c6814
001C68AC  088c44f8  ldr      x8, [x0, #0x48]!
001C68B0  080d40f9  ldr      x8, [x8, #0x18]
001C68B4  00013fd6  blr      x8
001C68B8  d7ffff17  b        #0x1c6814
001C68BC  e8230091  add      x8, sp, #8
001C68C0  e00313aa  mov      x0, x19
001C68C4  c9adff97  bl       #0x1b1fe8
001C68C8  e00740f9  ldr      x0, [sp, #8]
001C68CC  01048052  mov      w1, #0x20
001C68D0  67ddff97  bl       #0x1bde6c
001C68D4  e00740f9  ldr      x0, [sp, #8]
001C68D8  800000b4  cbz      x0, #0x1c68e8
001C68DC  088c44f8  ldr      x8, [x0, #0x48]!
001C68E0  080d40f9  ldr      x8, [x8, #0x18]
001C68E4  00013fd6  blr      x8
001C68E8  e00313aa  mov      x0, x19
001C68EC  61008052  mov      w1, #3
001C68F0  2facff97  bl       #0x1b19ac
001C68F4  00040036  tbz      w0, #0, #0x1c6974
001C68F8  e00313aa  mov      x0, x19
001C68FC  61008052  mov      w1, #3
001C6900  a1acff97  bl       #0x1b1b84
001C6904  e00313aa  mov      x0, x19
001C6908  61008052  mov      w1, #3
001C690C  b8acff97  bl       #0x1b1bec
001C6910  40010037  tbnz     w0, #0, #0x1c6938
001C6914  14d09252  mov      w20, #0x9680
001C6918  1413a072  movk     w20, #0x98, lsl #16
001C691C  1f2003d5  nop      
001C6920  e00314aa  mov      x0, x20
001C6924  8bbe1094  bl       #0x5f6350
001C6928  e00313aa  mov      x0, x19
001C692C  61008052  mov      w1, #3
001C6930  afacff97  bl       #0x1b1bec
001C6934  60ff0736  tbz      w0, #0, #0x1c6920
001C6938  e00313aa  mov      x0, x19
001C693C  61008052  mov      w1, #3
001C6940  c5acff97  bl       #0x1b1c54
001C6944  1f080071  cmp      w0, #2
001C6948  f4179f1a  cset     w20, eq
001C694C  81000054  b.ne     #0x1c695c
001C6950  e00313aa  mov      x0, x19
001C6954  61008052  mov      w1, #3
001C6958  d9acff97  bl       #0x1b1cbc
001C695C  e00313aa  mov      x0, x19
001C6960  61008052  mov      w1, #3
001C6964  f0acff97  bl       #0x1b1d24
001C6968  e00b40f9  ldr      x0, [sp, #0x10]
001C696C  a00000b5  cbnz     x0, #0x1c6980
001C6970  07000014  b        #0x1c698c
001C6974  34008052  mov      w20, #1
001C6978  e00b40f9  ldr      x0, [sp, #0x10]
001C697C  800000b4  cbz      x0, #0x1c698c
001C6980  088c44f8  ldr      x8, [x0, #0x48]!
001C6984  080d40f9  ldr      x8, [x8, #0x18]
001C6988  00013fd6  blr      x8
001C698C  a0835ff8  ldur     x0, [x29, #-8]
001C6990  800000b4  cbz      x0, #0x1c69a0
001C6994  088c44f8  ldr      x8, [x0, #0x48]!
001C6998  080d40f9  ldr      x8, [x8, #0x18]
001C699C  00013fd6  blr      x8
001C69A0  e003142a  mov      w0, w20
001C69A4  f44f45a9  ldp      x20, x19, [sp, #0x50]
001C69A8  f65744a9  ldp      x22, x21, [sp, #0x40]
001C69AC  f85f43a9  ldp      x24, x23, [sp, #0x30]
001C69B0  fd7b42a9  ldp      x29, x30, [sp, #0x20]
001C69B4  ff830191  add      sp, sp, #0x60
001C69B8  c0035fd6  ret      
~~~
### sv_rebuild 0x294bb0..0x295384 (501 instructions)
~~~asm
00294BB0  ff8302d1  sub      sp, sp, #0xa0
00294BB4  fd7b05a9  stp      x29, x30, [sp, #0x50]
00294BB8  fa6706a9  stp      x26, x25, [sp, #0x60]
00294BBC  f85f07a9  stp      x24, x23, [sp, #0x70]
00294BC0  f65708a9  stp      x22, x21, [sp, #0x80]
00294BC4  f44f09a9  stp      x20, x19, [sp, #0x90]
00294BC8  fd430191  add      x29, sp, #0x50
00294BCC  592800f0  adrp     x25, #0x79f000
00294BD0  a82300d1  sub      x8, x29, #8
00294BD4  398f42f9  ldr      x25, [x25, #0x518]
00294BD8  f40300aa  mov      x20, x0
00294BDC  330340f9  ldr      x19, [x25]
00294BE0  302efe97  bl       #0x2204a0
00294BE4  77625da9  ldp      x23, x24, [x19, #0x1d0]
00294BE8  ff0218eb  cmp      x23, x24
00294BEC  e0090054  b.eq     #0x294d28
00294BF0  f50240f9  ldr      x21, [x23]
00294BF4  e00315aa  mov      x0, x21
00294BF8  080c45f8  ldr      x8, [x0, #0x50]!
00294BFC  080140f9  ldr      x8, [x8]
00294C00  00013fd6  blr      x8
00294C04  f60300aa  mov      x22, x0
00294C08  6cc3ff97  bl       #0x2859b8
00294C0C  1f0016eb  cmp      x0, x22
00294C10  60010054  b.eq     #0x294c3c
00294C14  d60240f9  ldr      x22, [x22]
00294C18  df0200eb  cmp      x22, x0
00294C1C  c41a40fa  ccmp     x22, #0, #4, ne
00294C20  a1ffff54  b.ne     #0x294c14
00294C24  b60000b5  cbnz     x22, #0x294c38
00294C28  f7220091  add      x23, x23, #8
00294C2C  ff0218eb  cmp      x23, x24
00294C30  01feff54  b.ne     #0x294bf0
00294C34  3d000014  b        #0x294d28
00294C38  950700b4  cbz      x21, #0x294d28
00294C3C  a8835ff8  ldur     x8, [x29, #-8]
00294C40  89fb8152  mov      w9, #0xfdc
00294C44  090ea072  movk     w9, #0x70, lsl #16
00294C48  1a6969b8  ldr      w26, [x8, x9]
00294C4C  5f070071  cmp      w26, #1
00294C50  cb060054  b.lt     #0x294d28
00294C54  482800f0  adrp     x8, #0x79f000
00294C58  f6031f2a  mov      w22, wzr
00294C5C  08ed41f9  ldr      x8, [x8, #0x3d8]
00294C60  080140f9  ldr      x8, [x8]
00294C64  175541f9  ldr      x23, [x8, #0x2a8]
00294C68  05000014  b        #0x294c7c
00294C6C  1f2003d5  nop      
00294C70  d6060011  add      w22, w22, #1
00294C74  df021a6b  cmp      w22, w26
00294C78  80050054  b.eq     #0x294d28
00294C7C  f8031f2a  mov      w24, wzr
00294C80  04000014  b        #0x294c90
00294C84  18070011  add      w24, w24, #1
00294C88  1f7b0071  cmp      w24, #0x1e
00294C8C  20ffff54  b.eq     #0x294c70
00294C90  e00315aa  mov      x0, x21
00294C94  e103162a  mov      w1, w22
00294C98  e203182a  mov      w2, w24
00294C9C  e30317aa  mov      x3, x23
00294CA0  3cbfff97  bl       #0x284990
00294CA4  a0835ff8  ldur     x0, [x29, #-8]
00294CA8  e8030091  mov      x8, sp
00294CAC  e103162a  mov      w1, w22
00294CB0  e203182a  mov      w2, w24
00294CB4  e30317aa  mov      x3, x23
00294CB8  e4adfd97  bl       #0x200448
00294CBC  e00340f9  ldr      x0, [sp]
00294CC0  32c6fd97  bl       #0x206588
00294CC4  60020037  tbnz     w0, #0, #0x294d10
00294CC8  e00340f9  ldr      x0, [sp]
00294CCC  bec7fd97  bl       #0x206bc4
00294CD0  a0031ff8  stur     x0, [x29, #-0x10]
00294CD4  800000b4  cbz      x0, #0x294ce4
00294CD8  088c44f8  ldr      x8, [x0, #0x48]!
00294CDC  080940f9  ldr      x8, [x8, #0x10]
00294CE0  00013fd6  blr      x8
00294CE4  a14300d1  sub      x1, x29, #0x10
00294CE8  e00315aa  mov      x0, x21
00294CEC  e203162a  mov      w2, w22
00294CF0  e303182a  mov      w3, w24
00294CF4  58bfff97  bl       #0x284a54
00294CF8  a0035ff8  ldur     x0, [x29, #-0x10]
00294CFC  a00000b4  cbz      x0, #0x294d10
00294D00  088c44f8  ldr      x8, [x0, #0x48]!
00294D04  080d40f9  ldr      x8, [x8, #0x18]
00294D08  00013fd6  blr      x8
00294D0C  bf031ff8  stur     xzr, [x29, #-0x10]
00294D10  e00340f9  ldr      x0, [sp]
00294D14  80fbffb4  cbz      x0, #0x294c84
00294D18  088c44f8  ldr      x8, [x0, #0x48]!
00294D1C  080d40f9  ldr      x8, [x8, #0x18]
00294D20  00013fd6  blr      x8
00294D24  d8ffff17  b        #0x294c84
00294D28  77625da9  ldp      x23, x24, [x19, #0x1d0]
00294D2C  ff0218eb  cmp      x23, x24
00294D30  80020054  b.eq     #0x294d80
00294D34  f50240f9  ldr      x21, [x23]
00294D38  e00315aa  mov      x0, x21
00294D3C  080c45f8  ldr      x8, [x0, #0x50]!
00294D40  080140f9  ldr      x8, [x8]
00294D44  00013fd6  blr      x8
00294D48  f60300aa  mov      x22, x0
00294D4C  704cfe97  bl       #0x227f0c
00294D50  1f0016eb  cmp      x0, x22
00294D54  a0010054  b.eq     #0x294d88
00294D58  1f2003d5  nop      
00294D5C  1f2003d5  nop      
00294D60  d60240f9  ldr      x22, [x22]
00294D64  df0200eb  cmp      x22, x0
00294D68  c41a40fa  ccmp     x22, #0, #4, ne
00294D6C  a1ffff54  b.ne     #0x294d60
00294D70  b60000b5  cbnz     x22, #0x294d84
00294D74  f7220091  add      x23, x23, #8
00294D78  ff0218eb  cmp      x23, x24
00294D7C  c1fdff54  b.ne     #0x294d34
00294D80  70850d94  bl       #0x5f6340
00294D84  f5ffffb4  cbz      x21, #0x294d80
00294D88  e00315aa  mov      x0, x21
00294D8C  e1031f2a  mov      w1, wzr
00294D90  71c5ff97  bl       #0x286354
00294D94  80040034  cbz      w0, #0x294e24
00294D98  f6031faa  mov      x22, xzr
00294D9C  f703002a  mov      w23, w0
00294DA0  18b49952  mov      w24, #0xcda0
00294DA4  f800a072  movk     w24, #7, lsl #16
00294DA8  0f000014  b        #0x294de4
00294DAC  1f2003d5  nop      
00294DB0  e1030091  mov      x1, sp
00294DB4  e2830091  add      x2, sp, #0x20
00294DB8  a35300d1  sub      x3, x29, #0x14
00294DBC  c7bbfd97  bl       #0x203cd8
00294DC0  e32340b9  ldr      w3, [sp, #0x20]
00294DC4  e00315aa  mov      x0, x21
00294DC8  e1031f2a  mov      w1, wzr
00294DCC  a4c35eb8  ldur     w4, [x29, #-0x14]
00294DD0  e203162a  mov      w2, w22
00294DD4  25cbff97  bl       #0x287a68
00294DD8  d6060091  add      x22, x22, #1
00294DDC  ff0216eb  cmp      x23, x22
00294DE0  20020054  b.eq     #0x294e24
00294DE4  3733fe97  bl       #0x221ac0
00294DE8  080c168b  add      x8, x0, x22, lsl #3
00294DEC  a0835ff8  ldur     x0, [x29, #-8]
00294DF0  e1030091  mov      x1, sp
00294DF4  bfc31eb8  stur     wzr, [x29, #-0x14]
00294DF8  086978f8  ldr      x8, [x8, x24]
00294DFC  ff2300b9  str      wzr, [sp, #0x20]
00294E00  e80300f9  str      x8, [sp]
00294E04  e3befd97  bl       #0x204990
00294E08  e803002a  mov      w8, w0
00294E0C  a0835ff8  ldur     x0, [x29, #-8]
00294E10  08fd0736  tbz      w8, #0, #0x294db0
00294E14  e1830091  add      x1, sp, #0x20
00294E18  a25300d1  sub      x2, x29, #0x14
00294E1C  e4befd97  bl       #0x2049ac
00294E20  e8ffff17  b        #0x294dc0
00294E24  e00315aa  mov      x0, x21
00294E28  21008052  mov      w1, #1
00294E2C  4ac5ff97  bl       #0x286354
00294E30  a0040034  cbz      w0, #0x294ec4
00294E34  f6031faa  mov      x22, xzr
00294E38  f703002a  mov      w23, w0
00294E3C  18ba9952  mov      w24, #0xcdd0
00294E40  f800a072  movk     w24, #7, lsl #16
00294E44  0f000014  b        #0x294e80
00294E48  1f2003d5  nop      
00294E4C  1f2003d5  nop      
00294E50  e1830091  add      x1, sp, #0x20
00294E54  a25300d1  sub      x2, x29, #0x14
00294E58  d5befd97  bl       #0x2049ac
00294E5C  e32340b9  ldr      w3, [sp, #0x20]
00294E60  e00315aa  mov      x0, x21
00294E64  21008052  mov      w1, #1
00294E68  a4c35eb8  ldur     w4, [x29, #-0x14]
00294E6C  e203162a  mov      w2, w22
00294E70  fecaff97  bl       #0x287a68
00294E74  d6060091  add      x22, x22, #1
00294E78  ff0216eb  cmp      x23, x22
00294E7C  40020054  b.eq     #0x294ec4
00294E80  1033fe97  bl       #0x221ac0
00294E84  080c168b  add      x8, x0, x22, lsl #3
00294E88  a0835ff8  ldur     x0, [x29, #-8]
00294E8C  e1030091  mov      x1, sp
00294E90  bfc31eb8  stur     wzr, [x29, #-0x14]
00294E94  086978f8  ldr      x8, [x8, x24]
00294E98  ff2300b9  str      wzr, [sp, #0x20]
00294E9C  e80300f9  str      x8, [sp]
00294EA0  bcbefd97  bl       #0x204990
00294EA4  e803002a  mov      w8, w0
00294EA8  a0835ff8  ldur     x0, [x29, #-8]
00294EAC  28fd0737  tbnz     w8, #0, #0x294e50
00294EB0  e1030091  mov      x1, sp
00294EB4  e2830091  add      x2, sp, #0x20
00294EB8  a35300d1  sub      x3, x29, #0x14
00294EBC  87bbfd97  bl       #0x203cd8
00294EC0  e7ffff17  b        #0x294e5c
00294EC4  e00315aa  mov      x0, x21
00294EC8  41008052  mov      w1, #2
00294ECC  22c5ff97  bl       #0x286354
00294ED0  a0040034  cbz      w0, #0x294f64
00294ED4  f6031faa  mov      x22, xzr
00294ED8  f703002a  mov      w23, w0
00294EDC  18c09952  mov      w24, #0xce00
00294EE0  f800a072  movk     w24, #7, lsl #16
00294EE4  0f000014  b        #0x294f20
00294EE8  1f2003d5  nop      
00294EEC  1f2003d5  nop      
00294EF0  e1830091  add      x1, sp, #0x20
00294EF4  a25300d1  sub      x2, x29, #0x14
00294EF8  adbefd97  bl       #0x2049ac
00294EFC  e32340b9  ldr      w3, [sp, #0x20]
00294F00  e00315aa  mov      x0, x21
00294F04  41008052  mov      w1, #2
00294F08  a4c35eb8  ldur     w4, [x29, #-0x14]
00294F0C  e203162a  mov      w2, w22
00294F10  d6caff97  bl       #0x287a68
00294F14  d6060091  add      x22, x22, #1
00294F18  ff0216eb  cmp      x23, x22
00294F1C  40020054  b.eq     #0x294f64
00294F20  e832fe97  bl       #0x221ac0
00294F24  080c168b  add      x8, x0, x22, lsl #3
00294F28  a0835ff8  ldur     x0, [x29, #-8]
00294F2C  e1030091  mov      x1, sp
00294F30  bfc31eb8  stur     wzr, [x29, #-0x14]
00294F34  086978f8  ldr      x8, [x8, x24]
00294F38  ff2300b9  str      wzr, [sp, #0x20]
00294F3C  e80300f9  str      x8, [sp]
00294F40  94befd97  bl       #0x204990
00294F44  e803002a  mov      w8, w0
00294F48  a0835ff8  ldur     x0, [x29, #-8]
00294F4C  28fd0737  tbnz     w8, #0, #0x294ef0
00294F50  e1030091  mov      x1, sp
00294F54  e2830091  add      x2, sp, #0x20
00294F58  a35300d1  sub      x3, x29, #0x14
00294F5C  5fbbfd97  bl       #0x203cd8
00294F60  e7ffff17  b        #0x294efc
00294F64  e00315aa  mov      x0, x21
00294F68  61008052  mov      w1, #3
00294F6C  fac4ff97  bl       #0x286354
00294F70  a0040034  cbz      w0, #0x295004
00294F74  f6031faa  mov      x22, xzr
00294F78  f703002a  mov      w23, w0
00294F7C  18c69952  mov      w24, #0xce30
00294F80  f800a072  movk     w24, #7, lsl #16
00294F84  0f000014  b        #0x294fc0
00294F88  1f2003d5  nop      
00294F8C  1f2003d5  nop      
00294F90  e1830091  add      x1, sp, #0x20
00294F94  a25300d1  sub      x2, x29, #0x14
00294F98  85befd97  bl       #0x2049ac
00294F9C  e32340b9  ldr      w3, [sp, #0x20]
00294FA0  e00315aa  mov      x0, x21
00294FA4  61008052  mov      w1, #3
00294FA8  a4c35eb8  ldur     w4, [x29, #-0x14]
00294FAC  e203162a  mov      w2, w22
00294FB0  aecaff97  bl       #0x287a68
00294FB4  d6060091  add      x22, x22, #1
00294FB8  ff0216eb  cmp      x23, x22
00294FBC  40020054  b.eq     #0x295004
00294FC0  c032fe97  bl       #0x221ac0
00294FC4  080c168b  add      x8, x0, x22, lsl #3
00294FC8  a0835ff8  ldur     x0, [x29, #-8]
00294FCC  e1030091  mov      x1, sp
00294FD0  bfc31eb8  stur     wzr, [x29, #-0x14]
00294FD4  086978f8  ldr      x8, [x8, x24]
00294FD8  ff2300b9  str      wzr, [sp, #0x20]
00294FDC  e80300f9  str      x8, [sp]
00294FE0  6cbefd97  bl       #0x204990
00294FE4  e803002a  mov      w8, w0
00294FE8  a0835ff8  ldur     x0, [x29, #-8]
00294FEC  28fd0737  tbnz     w8, #0, #0x294f90
00294FF0  e1030091  mov      x1, sp
00294FF4  e2830091  add      x2, sp, #0x20
00294FF8  a35300d1  sub      x3, x29, #0x14
00294FFC  37bbfd97  bl       #0x203cd8
00295000  e7ffff17  b        #0x294f9c
00295004  e00315aa  mov      x0, x21
00295008  81008052  mov      w1, #4
0029500C  d2c4ff97  bl       #0x286354
00295010  a0040034  cbz      w0, #0x2950a4
00295014  f6031faa  mov      x22, xzr
00295018  f703002a  mov      w23, w0
0029501C  18cc9952  mov      w24, #0xce60
00295020  f800a072  movk     w24, #7, lsl #16
00295024  0f000014  b        #0x295060
00295028  1f2003d5  nop      
0029502C  1f2003d5  nop      
00295030  e1830091  add      x1, sp, #0x20
00295034  a25300d1  sub      x2, x29, #0x14
00295038  5dbefd97  bl       #0x2049ac
0029503C  e32340b9  ldr      w3, [sp, #0x20]
00295040  e00315aa  mov      x0, x21
00295044  81008052  mov      w1, #4
00295048  a4c35eb8  ldur     w4, [x29, #-0x14]
0029504C  e203162a  mov      w2, w22
00295050  86caff97  bl       #0x287a68
00295054  d6060091  add      x22, x22, #1
00295058  ff0216eb  cmp      x23, x22
0029505C  40020054  b.eq     #0x2950a4
00295060  9832fe97  bl       #0x221ac0
00295064  080c168b  add      x8, x0, x22, lsl #3
00295068  a0835ff8  ldur     x0, [x29, #-8]
0029506C  e1030091  mov      x1, sp
00295070  bfc31eb8  stur     wzr, [x29, #-0x14]
00295074  086978f8  ldr      x8, [x8, x24]
00295078  ff2300b9  str      wzr, [sp, #0x20]
0029507C  e80300f9  str      x8, [sp]
00295080  44befd97  bl       #0x204990
00295084  e803002a  mov      w8, w0
00295088  a0835ff8  ldur     x0, [x29, #-8]
0029508C  28fd0737  tbnz     w8, #0, #0x295030
00295090  e1030091  mov      x1, sp
00295094  e2830091  add      x2, sp, #0x20
00295098  a35300d1  sub      x3, x29, #0x14
0029509C  0fbbfd97  bl       #0x203cd8
002950A0  e7ffff17  b        #0x29503c
002950A4  a1008052  mov      w1, #5
002950A8  e00315aa  mov      x0, x21
002950AC  aac4ff97  bl       #0x286354
002950B0  a0040034  cbz      w0, #0x295144
002950B4  f6031faa  mov      x22, xzr
002950B8  f803002a  mov      w24, w0
002950BC  1ad29952  mov      w26, #0xce90
002950C0  fa00a072  movk     w26, #7, lsl #16
002950C4  b7008052  mov      w23, #5
002950C8  0e000014  b        #0x295100
002950CC  1f2003d5  nop      
002950D0  e1830091  add      x1, sp, #0x20
002950D4  a25300d1  sub      x2, x29, #0x14
002950D8  35befd97  bl       #0x2049ac
002950DC  e32340b9  ldr      w3, [sp, #0x20]
002950E0  e00315aa  mov      x0, x21
002950E4  e103172a  mov      w1, w23
002950E8  a4c35eb8  ldur     w4, [x29, #-0x14]
002950EC  e203162a  mov      w2, w22
002950F0  5ecaff97  bl       #0x287a68
002950F4  d6060091  add      x22, x22, #1
002950F8  1f0316eb  cmp      x24, x22
002950FC  40020054  b.eq     #0x295144
00295100  7032fe97  bl       #0x221ac0
00295104  080c168b  add      x8, x0, x22, lsl #3
00295108  a0835ff8  ldur     x0, [x29, #-8]
0029510C  e1030091  mov      x1, sp
00295110  bfc31eb8  stur     wzr, [x29, #-0x14]
00295114  08697af8  ldr      x8, [x8, x26]
00295118  ff2300b9  str      wzr, [sp, #0x20]
0029511C  e80300f9  str      x8, [sp]
00295120  1cbefd97  bl       #0x204990
00295124  e803002a  mov      w8, w0
00295128  a0835ff8  ldur     x0, [x29, #-8]
0029512C  28fd0737  tbnz     w8, #0, #0x2950d0
00295130  e1030091  mov      x1, sp
00295134  e2830091  add      x2, sp, #0x20
00295138  a35300d1  sub      x3, x29, #0x14
0029513C  e7bafd97  bl       #0x203cd8
00295140  e7ffff17  b        #0x2950dc
00295144  88f24191  add      x8, x20, #0x7c, lsl #12
00295148  01013b91  add      x1, x8, #0xec0
0029514C  280040f9  ldr      x8, [x1]
00295150  a80400b4  cbz      x8, #0x2951e4
00295154  a0835ff8  ldur     x0, [x29, #-8]
00295158  e2030091  mov      x2, sp
0029515C  e3830091  add      x3, sp, #0x20
00295160  ff0300b9  str      wzr, [sp]
00295164  ff2300b9  str      wzr, [sp, #0x20]
00295168  dcbafd97  bl       #0x203cd8
0029516C  280340f9  ldr      x8, [x25]
00295170  17615da9  ldp      x23, x24, [x8, #0x1d0]
00295174  ff0218eb  cmp      x23, x24
00295178  60030054  b.eq     #0x2951e4
0029517C  1f2003d5  nop      
00295180  f40240f9  ldr      x20, [x23]
00295184  e00314aa  mov      x0, x20
00295188  080c45f8  ldr      x8, [x0, #0x50]!
0029518C  080140f9  ldr      x8, [x8]
00295190  00013fd6  blr      x8
00295194  f60300aa  mov      x22, x0
00295198  0ddbff97  bl       #0x28bdcc
0029519C  1f0016eb  cmp      x0, x22
002951A0  60010054  b.eq     #0x2951cc
002951A4  d60240f9  ldr      x22, [x22]
002951A8  df0200eb  cmp      x22, x0
002951AC  c41a40fa  ccmp     x22, #0, #4, ne
002951B0  a1ffff54  b.ne     #0x2951a4
002951B4  b60000b5  cbnz     x22, #0x2951c8
002951B8  f7220091  add      x23, x23, #8
002951BC  ff0218eb  cmp      x23, x24
002951C0  01feff54  b.ne     #0x295180
002951C4  08000014  b        #0x2951e4
002951C8  f40000b4  cbz      x20, #0x2951e4
002951CC  e10340b9  ldr      w1, [sp]
002951D0  e00314aa  mov      x0, x20
002951D4  93daff97  bl       #0x28bc20
002951D8  e12340b9  ldr      w1, [sp, #0x20]
002951DC  e00314aa  mov      x0, x20
002951E0  92daff97  bl       #0x28bc28
002951E4  e00315aa  mov      x0, x21
002951E8  01048052  mov      w1, #0x20
002951EC  71caff97  bl       #0x287bb0
002951F0  682800b0  adrp     x8, #0x7a2000
002951F4  e0830091  add      x0, sp, #0x20
002951F8  081d46f9  ldr      x8, [x8, #0xc38]
002951FC  092940a9  ldp      x9, x10, [x8]
00295200  080940f9  ldr      x8, [x8, #0x10]
00295204  e81b00f9  str      x8, [sp, #0x30]
00295208  e8030091  mov      x8, sp
0029520C  e92b02a9  stp      x9, x10, [sp, #0x20]
00295210  1b500994  bl       #0x4e927c
00295214  e1030091  mov      x1, sp
00295218  e00313aa  mov      x0, x19
0029521C  741c0094  bl       #0x29c3ec
00295220  f403002a  mov      w20, w0
00295224  e00f40f9  ldr      x0, [sp, #0x18]
00295228  800000b4  cbz      x0, #0x295238
0029522C  088c44f8  ldr      x8, [x0, #0x48]!
00295230  080d40f9  ldr      x8, [x8, #0x18]
00295234  00013fd6  blr      x8
00295238  f4030036  tbz      w20, #0, #0x2952b4
0029523C  e8030091  mov      x8, sp
00295240  e0830091  add      x0, sp, #0x20
00295244  0e500994  bl       #0x4e927c
00295248  e1030091  mov      x1, sp
0029524C  e00313aa  mov      x0, x19
00295250  e2031f2a  mov      w2, wzr
00295254  c91c0094  bl       #0x29c578
00295258  e00f40f9  ldr      x0, [sp, #0x18]
0029525C  800000b4  cbz      x0, #0x29526c
00295260  088c44f8  ldr      x8, [x0, #0x48]!
00295264  080d40f9  ldr      x8, [x8, #0x18]
00295268  00013fd6  blr      x8
0029526C  14d09252  mov      w20, #0x9680
00295270  1413a072  movk     w20, #0x98, lsl #16
00295274  e8030091  mov      x8, sp
00295278  e0830091  add      x0, sp, #0x20
0029527C  00500994  bl       #0x4e927c
00295280  e1030091  mov      x1, sp
00295284  e00313aa  mov      x0, x19
00295288  201d0094  bl       #0x29c708
0029528C  f503002a  mov      w21, w0
00295290  e00f40f9  ldr      x0, [sp, #0x18]
00295294  800000b4  cbz      x0, #0x2952a4
00295298  088c44f8  ldr      x8, [x0, #0x48]!
0029529C  080d40f9  ldr      x8, [x8, #0x18]
002952A0  00013fd6  blr      x8
002952A4  d5000037  tbnz     w21, #0, #0x2952bc
002952A8  e00314aa  mov      x0, x20
002952AC  29840d94  bl       #0x5f6350
002952B0  f1ffff17  b        #0x295274
002952B4  34008052  mov      w20, #1
002952B8  26000014  b        #0x295350
002952BC  e8030091  mov      x8, sp
002952C0  e0830091  add      x0, sp, #0x20
002952C4  ee4f0994  bl       #0x4e927c
002952C8  e1030091  mov      x1, sp
002952CC  e00313aa  mov      x0, x19
002952D0  2a1d0094  bl       #0x29c778
002952D4  f403002a  mov      w20, w0
002952D8  e00f40f9  ldr      x0, [sp, #0x18]
002952DC  800000b4  cbz      x0, #0x2952ec
002952E0  088c44f8  ldr      x8, [x0, #0x48]!
002952E4  080d40f9  ldr      x8, [x8, #0x18]
002952E8  00013fd6  blr      x8
002952EC  9f0a0071  cmp      w20, #2
002952F0  f4179f1a  cset     w20, eq
002952F4  81010054  b.ne     #0x295324
002952F8  e8030091  mov      x8, sp
002952FC  e0830091  add      x0, sp, #0x20
00295300  df4f0994  bl       #0x4e927c
00295304  e1030091  mov      x1, sp
00295308  e00313aa  mov      x0, x19
0029530C  371d0094  bl       #0x29c7e8
00295310  e00f40f9  ldr      x0, [sp, #0x18]
00295314  800000b4  cbz      x0, #0x295324
00295318  088c44f8  ldr      x8, [x0, #0x48]!
0029531C  080d40f9  ldr      x8, [x8, #0x18]
00295320  00013fd6  blr      x8
00295324  e8030091  mov      x8, sp
00295328  e0830091  add      x0, sp, #0x20
0029532C  d44f0994  bl       #0x4e927c
00295330  e1030091  mov      x1, sp
00295334  e00313aa  mov      x0, x19
00295338  481d0094  bl       #0x29c858
0029533C  e00f40f9  ldr      x0, [sp, #0x18]
00295340  800000b4  cbz      x0, #0x295350
00295344  088c44f8  ldr      x8, [x0, #0x48]!
00295348  080d40f9  ldr      x8, [x8, #0x18]
0029534C  00013fd6  blr      x8
00295350  a0835ff8  ldur     x0, [x29, #-8]
00295354  800000b4  cbz      x0, #0x295364
00295358  088c44f8  ldr      x8, [x0, #0x48]!
0029535C  080d40f9  ldr      x8, [x8, #0x18]
00295360  00013fd6  blr      x8
00295364  e003142a  mov      w0, w20
00295368  f44f49a9  ldp      x20, x19, [sp, #0x90]
0029536C  f65748a9  ldp      x22, x21, [sp, #0x80]
00295370  f85f47a9  ldp      x24, x23, [sp, #0x70]
00295374  fa6746a9  ldp      x26, x25, [sp, #0x60]
00295378  fd7b45a9  ldp      x29, x30, [sp, #0x50]
0029537C  ff830291  add      sp, sp, #0xa0
00295380  c0035fd6  ret      
~~~
### bdsp_segments 0x1a1700..0x1a17a8 (42 instructions)
~~~asm
001A1700  fd7bbca9  stp      x29, x30, [sp, #-0x40]!
001A1704  f70b00f9  str      x23, [sp, #0x10]
001A1708  f65702a9  stp      x22, x21, [sp, #0x20]
001A170C  f44f03a9  stp      x20, x19, [sp, #0x30]
001A1710  fd030091  mov      x29, sp
001A1714  f30301aa  mov      x19, x1
001A1718  f6031faa  mov      x22, xzr
001A171C  17400591  add      x23, x0, #0x150
001A1720  16000014  b        #0x1a1778
001A1724  880240f9  ldr      x8, [x20]
001A1728  e00314aa  mov      x0, x20
001A172C  081940f9  ldr      x8, [x8, #0x30]
001A1730  00013fd6  blr      x8
001A1734  880240f9  ldr      x8, [x20]
001A1738  f50300aa  mov      x21, x0
001A173C  e00314aa  mov      x0, x20
001A1740  081540f9  ldr      x8, [x8, #0x28]
001A1744  00013fd6  blr      x8
001A1748  e10300aa  mov      x1, x0
001A174C  e00313aa  mov      x0, x19
001A1750  e20315aa  mov      x2, x21
001A1754  a3531194  bl       #0x5f65e0
001A1758  888e44f8  ldr      x8, [x20, #0x48]!
001A175C  7302158b  add      x19, x19, x21
001A1760  e00314aa  mov      x0, x20
001A1764  080d40f9  ldr      x8, [x8, #0x18]
001A1768  00013fd6  blr      x8
001A176C  d6220091  add      x22, x22, #8
001A1770  dfe203f1  cmp      x22, #0xf8
001A1774  00010054  b.eq     #0x1a1794
001A1778  f46a76f8  ldr      x20, [x23, x22]
001A177C  54fdffb4  cbz      x20, #0x1a1724
001A1780  e00314aa  mov      x0, x20
001A1784  088c44f8  ldr      x8, [x0, #0x48]!
001A1788  080940f9  ldr      x8, [x8, #0x10]
001A178C  00013fd6  blr      x8
001A1790  e5ffff17  b        #0x1a1724
001A1794  f44f43a9  ldp      x20, x19, [sp, #0x30]
001A1798  f70b40f9  ldr      x23, [sp, #0x10]
001A179C  f65742a9  ldp      x22, x21, [sp, #0x20]
001A17A0  fd7bc4a8  ldp      x29, x30, [sp], #0x40
001A17A4  c0035fd6  ret      
~~~
### bdsp_rebuild 0x1a4630..0x1a49ec (239 instructions)
~~~asm
001A4630  ff4302d1  sub      sp, sp, #0x90
001A4634  fd7b03a9  stp      x29, x30, [sp, #0x30]
001A4638  fb2300f9  str      x27, [sp, #0x40]
001A463C  fa6705a9  stp      x26, x25, [sp, #0x50]
001A4640  f85f06a9  stp      x24, x23, [sp, #0x60]
001A4644  f65707a9  stp      x22, x21, [sp, #0x70]
001A4648  f44f08a9  stp      x20, x19, [sp, #0x80]
001A464C  fdc30091  add      x29, sp, #0x30
001A4650  e83100b0  adrp     x8, #0x7e1000
001A4654  08011891  add      x8, x8, #0x600
001A4658  130140f9  ldr      x19, [x8]
001A465C  c8469352  mov      w8, #0x9a36
001A4660  08686838  ldrb     w8, [x0, x8]
001A4664  28190035  cbnz     w8, #0x1a4988
001A4668  743240f9  ldr      x20, [x19, #0x60]
001A466C  b40000b4  cbz      x20, #0x1a4680
001A4670  e00314aa  mov      x0, x20
001A4674  088c44f8  ldr      x8, [x0, #0x48]!
001A4678  080940f9  ldr      x8, [x8, #0x10]
001A467C  00013fd6  blr      x8
001A4680  a8630091  add      x8, x29, #0x18
001A4684  87ef0194  bl       #0x2204a0
001A4688  955e40f9  ldr      x21, [x20, #0xb8]
001A468C  b50000b4  cbz      x21, #0x1a46a0
001A4690  e00315aa  mov      x0, x21
001A4694  088c44f8  ldr      x8, [x0, #0x48]!
001A4698  080940f9  ldr      x8, [x8, #0x10]
001A469C  00013fd6  blr      x8
001A46A0  965a40f9  ldr      x22, [x20, #0xb0]
001A46A4  b60000b4  cbz      x22, #0x1a46b8
001A46A8  e00316aa  mov      x0, x22
001A46AC  088c44f8  ldr      x8, [x0, #0x48]!
001A46B0  080940f9  ldr      x8, [x8, #0x10]
001A46B4  00013fd6  blr      x8
001A46B8  c82f00f0  adrp     x8, #0x79f000
001A46BC  e00315aa  mov      x0, x21
001A46C0  08ed41f9  ldr      x8, [x8, #0x3d8]
001A46C4  080140f9  ldr      x8, [x8]
001A46C8  175541f9  ldr      x23, [x8, #0x2a8]
001A46CC  01faff97  bl       #0x1a2ed0
001A46D0  a80f40f9  ldr      x8, [x29, #0x18]
001A46D4  89fb8152  mov      w9, #0xfdc
001A46D8  090ea072  movk     w9, #0x70, lsl #16
001A46DC  1a6969b8  ldr      w26, [x8, x9]
001A46E0  5f070071  cmp      w26, #1
001A46E4  8b060054  b.lt     #0x1a47b4
001A46E8  f8031f2a  mov      w24, wzr
001A46EC  04000014  b        #0x1a46fc
001A46F0  18070011  add      w24, w24, #1
001A46F4  1f031a6b  cmp      w24, w26
001A46F8  e0050054  b.eq     #0x1a47b4
001A46FC  f9031f2a  mov      w25, wzr
001A4700  04000014  b        #0x1a4710
001A4704  39070011  add      w25, w25, #1
001A4708  3f7b0071  cmp      w25, #0x1e
001A470C  20ffff54  b.eq     #0x1a46f0
001A4710  a00f40f9  ldr      x0, [x29, #0x18]
001A4714  a82300d1  sub      x8, x29, #8
001A4718  e103182a  mov      w1, w24
001A471C  e203192a  mov      w2, w25
001A4720  e30317aa  mov      x3, x23
001A4724  496f0194  bl       #0x200448
001A4728  a0835ff8  ldur     x0, [x29, #-8]
001A472C  97870194  bl       #0x206588
001A4730  60030037  tbnz     w0, #0, #0x1a479c
001A4734  a0835ff8  ldur     x0, [x29, #-8]
001A4738  a0031ff8  stur     x0, [x29, #-0x10]
001A473C  800000b4  cbz      x0, #0x1a474c
001A4740  088c44f8  ldr      x8, [x0, #0x48]!
001A4744  080940f9  ldr      x8, [x8, #0x10]
001A4748  00013fd6  blr      x8
001A474C  a14300d1  sub      x1, x29, #0x10
001A4750  e00315aa  mov      x0, x21
001A4754  e20317aa  mov      x2, x23
001A4758  e303182a  mov      w3, w24
001A475C  e403192a  mov      w4, w25
001A4760  57fbff97  bl       #0x1a34bc
001A4764  a0035ff8  ldur     x0, [x29, #-0x10]
001A4768  a00000b4  cbz      x0, #0x1a477c
001A476C  088c44f8  ldr      x8, [x0, #0x48]!
001A4770  080d40f9  ldr      x8, [x8, #0x18]
001A4774  00013fd6  blr      x8
001A4778  bf031ff8  stur     xzr, [x29, #-0x10]
001A477C  a0835ff8  ldur     x0, [x29, #-8]
001A4780  028f0194  bl       #0x208388
001A4784  c0000036  tbz      w0, #0, #0x1a479c
001A4788  e00315aa  mov      x0, x21
001A478C  e103182a  mov      w1, w24
001A4790  e203192a  mov      w2, w25
001A4794  23008052  mov      w3, #1
001A4798  0cfdff97  bl       #0x1a3bc8
001A479C  a0835ff8  ldur     x0, [x29, #-8]
001A47A0  20fbffb4  cbz      x0, #0x1a4704
001A47A4  088c44f8  ldr      x8, [x0, #0x48]!
001A47A8  080d40f9  ldr      x8, [x8, #0x18]
001A47AC  00013fd6  blr      x8
001A47B0  d5ffff17  b        #0x1a4704
001A47B4  01058052  mov      w1, #0x28
001A47B8  e00316aa  mov      x0, x22
001A47BC  1ab49952  mov      w26, #0xcda0
001A47C0  fa00a072  movk     w26, #7, lsl #16
001A47C4  8ef9ff97  bl       #0x1a2dfc
001A47C8  a82300d1  sub      x8, x29, #8
001A47CC  35ef0194  bl       #0x2204a0
001A47D0  f7031faa  mov      x23, xzr
001A47D4  fb031aaa  mov      x27, x26
001A47D8  06000014  b        #0x1a47f0
001A47DC  1f2003d5  nop      
001A47E0  f7060091  add      x23, x23, #1
001A47E4  7bc30091  add      x27, x27, #0x30
001A47E8  ff1a00f1  cmp      x23, #6
001A47EC  60050054  b.eq     #0x1a4898
001A47F0  e8630091  add      x8, sp, #0x18
001A47F4  e00313aa  mov      x0, x19
001A47F8  fbe7ff97  bl       #0x19e7e4
001A47FC  e00f40f9  ldr      x0, [sp, #0x18]
001A4800  e103172a  mov      w1, w23
001A4804  17f9ff97  bl       #0x1a2c60
001A4808  f903002a  mov      w25, w0
001A480C  e00f40f9  ldr      x0, [sp, #0x18]
001A4810  800000b4  cbz      x0, #0x1a4820
001A4814  088c44f8  ldr      x8, [x0, #0x48]!
001A4818  080d40f9  ldr      x8, [x8, #0x18]
001A481C  00013fd6  blr      x8
001A4820  19feff34  cbz      w25, #0x1a47e0
001A4824  f8031faa  mov      x24, xzr
001A4828  f903192a  mov      w25, w25
001A482C  04000014  b        #0x1a483c
001A4830  18070091  add      x24, x24, #1
001A4834  3f0318eb  cmp      x25, x24
001A4838  40fdff54  b.eq     #0x1a47e0
001A483C  a1f40194  bl       #0x221ac0
001A4840  08001b8b  add      x8, x0, x27
001A4844  a0835ff8  ldur     x0, [x29, #-8]
001A4848  e1630091  add      x1, sp, #0x18
001A484C  087978f8  ldr      x8, [x8, x24, lsl #3]
001A4850  e2530091  add      x2, sp, #0x14
001A4854  e3430091  add      x3, sp, #0x10
001A4858  ff2301a9  stp      xzr, x8, [sp, #0x10]
001A485C  1f7d0194  bl       #0x203cd8
001A4860  e8230091  add      x8, sp, #8
001A4864  e00313aa  mov      x0, x19
001A4868  dfe7ff97  bl       #0x19e7e4
001A486C  e00740f9  ldr      x0, [sp, #8]
001A4870  e103172a  mov      w1, w23
001A4874  e203182a  mov      w2, w24
001A4878  e40f4229  ldp      w4, w3, [sp, #0x10]
001A487C  0ef9ff97  bl       #0x1a2cb4
001A4880  e00740f9  ldr      x0, [sp, #8]
001A4884  60fdffb4  cbz      x0, #0x1a4830
001A4888  088c44f8  ldr      x8, [x0, #0x48]!
001A488C  080d40f9  ldr      x8, [x8, #0x18]
001A4890  00013fd6  blr      x8
001A4894  e7ffff17  b        #0x1a4830
001A4898  e8630091  add      x8, sp, #0x18
001A489C  e00313aa  mov      x0, x19
001A48A0  01e8ff97  bl       #0x19e8a4
001A48A4  e00f40f9  ldr      x0, [sp, #0x18]
001A48A8  27feff97  bl       #0x1a4144
001A48AC  f7031faa  mov      x23, xzr
001A48B0  58a30491  add      x24, x26, #0x128
001A48B4  19008012  mov      w25, #-1
001A48B8  06000014  b        #0x1a48d0
001A48BC  1f2003d5  nop      
001A48C0  f7060091  add      x23, x23, #1
001A48C4  18230091  add      x24, x24, #8
001A48C8  ff8e01f1  cmp      x23, #0x63
001A48CC  60020054  b.eq     #0x1a4918
001A48D0  7cf40194  bl       #0x221ac0
001A48D4  0100188b  add      x1, x0, x24
001A48D8  280040f9  ldr      x8, [x1]
001A48DC  28ffffb4  cbz      x8, #0x1a48c0
001A48E0  a0835ff8  ldur     x0, [x29, #-8]
001A48E4  e2230091  add      x2, sp, #8
001A48E8  e3530091  add      x3, sp, #0x14
001A48EC  f90b00b9  str      w25, [sp, #8]
001A48F0  f91700b9  str      w25, [sp, #0x14]
001A48F4  f97c0194  bl       #0x203cd8
001A48F8  e20b40b9  ldr      w2, [sp, #8]
001A48FC  22feff37  tbnz     w2, #0x1f, #0x1a48c0
001A4900  e31740b9  ldr      w3, [sp, #0x14]
001A4904  e3fdff37  tbnz     w3, #0x1f, #0x1a48c0
001A4908  e00f40f9  ldr      x0, [sp, #0x18]
001A490C  e103172a  mov      w1, w23
001A4910  07feff97  bl       #0x1a412c
001A4914  ebffff17  b        #0x1a48c0
001A4918  e00f40f9  ldr      x0, [sp, #0x18]
001A491C  800000b4  cbz      x0, #0x1a492c
001A4920  088c44f8  ldr      x8, [x0, #0x48]!
001A4924  080d40f9  ldr      x8, [x8, #0x18]
001A4928  00013fd6  blr      x8
001A492C  a0835ff8  ldur     x0, [x29, #-8]
001A4930  800000b4  cbz      x0, #0x1a4940
001A4934  088c44f8  ldr      x8, [x0, #0x48]!
001A4938  080d40f9  ldr      x8, [x8, #0x18]
001A493C  00013fd6  blr      x8
001A4940  c88e44f8  ldr      x8, [x22, #0x48]!
001A4944  e00316aa  mov      x0, x22
001A4948  080d40f9  ldr      x8, [x8, #0x18]
001A494C  00013fd6  blr      x8
001A4950  a88e44f8  ldr      x8, [x21, #0x48]!
001A4954  e00315aa  mov      x0, x21
001A4958  080d40f9  ldr      x8, [x8, #0x18]
001A495C  00013fd6  blr      x8
001A4960  a00f40f9  ldr      x0, [x29, #0x18]
001A4964  800000b4  cbz      x0, #0x1a4974
001A4968  088c44f8  ldr      x8, [x0, #0x48]!
001A496C  080d40f9  ldr      x8, [x8, #0x18]
001A4970  00013fd6  blr      x8
001A4974  b40000b4  cbz      x20, #0x1a4988
001A4978  888e44f8  ldr      x8, [x20, #0x48]!
001A497C  e00314aa  mov      x0, x20
001A4980  080d40f9  ldr      x8, [x8, #0x18]
001A4984  00013fd6  blr      x8
001A4988  e00313aa  mov      x0, x19
001A498C  90e6ff97  bl       #0x19e3cc
001A4990  e00313aa  mov      x0, x19
001A4994  01e7ff97  bl       #0x19e598
001A4998  00010037  tbnz     w0, #0, #0x1a49b8
001A499C  14488852  mov      w20, #0x4240
001A49A0  f401a072  movk     w20, #0xf, lsl #16
001A49A4  e00314aa  mov      x0, x20
001A49A8  6a461194  bl       #0x5f6350
001A49AC  e00313aa  mov      x0, x19
001A49B0  fae6ff97  bl       #0x19e598
001A49B4  80ff0736  tbz      w0, #0, #0x1a49a4
001A49B8  08118052  mov      w8, #0x88
001A49BC  0808a072  movk     w8, #0x40, lsl #16
001A49C0  fb2340f9  ldr      x27, [sp, #0x40]
001A49C4  686a68b8  ldr      w8, [x19, x8]
001A49C8  1f010071  cmp      w8, #0
001A49CC  f44f48a9  ldp      x20, x19, [sp, #0x80]
001A49D0  e0179f1a  cset     w0, eq
001A49D4  f65747a9  ldp      x22, x21, [sp, #0x70]
001A49D8  f85f46a9  ldp      x24, x23, [sp, #0x60]
001A49DC  fa6745a9  ldp      x26, x25, [sp, #0x50]
001A49E0  fd7b43a9  ldp      x29, x30, [sp, #0x30]
001A49E4  ff430291  add      sp, sp, #0x90
001A49E8  c0035fd6  ret      
~~~
### sv_child_ctor 0x2a09e0..0x2a0ae8 (66 instructions)
~~~asm
002A09E0  fd7bbda9  stp      x29, x30, [sp, #-0x30]!
002A09E4  f50b00f9  str      x21, [sp, #0x10]
002A09E8  f44f02a9  stp      x20, x19, [sp, #0x20]
002A09EC  fd030091  mov      x29, sp
002A09F0  f50301aa  mov      x21, x1
002A09F4  2100a052  mov      w1, #0x10000
002A09F8  f40302aa  mov      x20, x2
002A09FC  f30300aa  mov      x19, x0
002A0A00  0d1f0994  bl       #0x4e8634
002A0A04  082700b0  adrp     x8, #0x781000
002A0A08  08a11691  add      x8, x8, #0x5a8
002A0A0C  09410091  add      x9, x8, #0x10
002A0A10  690200f9  str      x9, [x19]
002A0A14  09210291  add      x9, x8, #0x88
002A0A18  08e10291  add      x8, x8, #0xb8
002A0A1C  692600f9  str      x9, [x19, #0x48]
002A0A20  682e00f9  str      x8, [x19, #0x58]
002A0A24  a80240f9  ldr      x8, [x21]
002A0A28  68ba01f9  str      x8, [x19, #0x370]
002A0A2C  a80640f9  ldr      x8, [x21, #8]
002A0A30  68be01f9  str      x8, [x19, #0x378]
002A0A34  a80a40f9  ldr      x8, [x21, #0x10]
002A0A38  68c201f9  str      x8, [x19, #0x380]
002A0A3C  a00e40f9  ldr      x0, [x21, #0x18]
002A0A40  60c601f9  str      x0, [x19, #0x388]
002A0A44  800000b4  cbz      x0, #0x2a0a54
002A0A48  088c44f8  ldr      x8, [x0, #0x48]!
002A0A4C  080940f9  ldr      x8, [x8, #0x10]
002A0A50  00013fd6  blr      x8
002A0A54  882640a9  ldp      x8, x9, [x20]
002A0A58  8a1240b9  ldr      w10, [x20, #0x10]
002A0A5C  6aa203b9  str      w10, [x19, #0x3a0]
002A0A60  69ce01f9  str      x9, [x19, #0x398]
002A0A64  68ca01f9  str      x8, [x19, #0x390]
002A0A68  880e40f9  ldr      x8, [x20, #0x18]
002A0A6C  68d601f9  str      x8, [x19, #0x3a8]
002A0A70  881240f9  ldr      x8, [x20, #0x20]
002A0A74  68da01f9  str      x8, [x19, #0x3b0]
002A0A78  881640f9  ldr      x8, [x20, #0x28]
002A0A7C  68de01f9  str      x8, [x19, #0x3b8]
002A0A80  801a40f9  ldr      x0, [x20, #0x30]
002A0A84  60e201f9  str      x0, [x19, #0x3c0]
002A0A88  800000b4  cbz      x0, #0x2a0a98
002A0A8C  088c44f8  ldr      x8, [x0, #0x48]!
002A0A90  080940f9  ldr      x8, [x8, #0x10]
002A0A94  00013fd6  blr      x8
002A0A98  88a643a9  ldp      x8, x9, [x20, #0x38]
002A0A9C  60a20f91  add      x0, x19, #0x3e8
002A0AA0  8a2640f9  ldr      x10, [x20, #0x48]
002A0AA4  e1031f2a  mov      w1, wzr
002A0AA8  e2031f2a  mov      w2, wzr
002A0AAC  68e601f9  str      x8, [x19, #0x3c8]
002A0AB0  28008052  mov      w8, #1
002A0AB4  6aee01f9  str      x10, [x19, #0x3d8]
002A0AB8  69ea01f9  str      x9, [x19, #0x3d0]
002A0ABC  68e203b9  str      w8, [x19, #0x3e0]
002A0AC0  f8550d94  bl       #0x5f62a0
002A0AC4  7f0a04b9  str      wzr, [x19, #0x408]
002A0AC8  f50b40f9  ldr      x21, [sp, #0x10]
002A0ACC  7f0a02f9  str      xzr, [x19, #0x410]
002A0AD0  7f0e02f9  str      xzr, [x19, #0x418]
002A0AD4  7f1202f9  str      xzr, [x19, #0x420]
002A0AD8  7f1602f9  str      xzr, [x19, #0x428]
002A0ADC  f44f42a9  ldp      x20, x19, [sp, #0x20]
002A0AE0  fd7bc3a8  ldp      x29, x30, [sp], #0x30
002A0AE4  c0035fd6  ret      
~~~
### za_child_ctor 0x1ff2c0..0x1ff3c8 (66 instructions)
~~~asm
001FF2C0  fd7bbda9  stp      x29, x30, [sp, #-0x30]!
001FF2C4  f50b00f9  str      x21, [sp, #0x10]
001FF2C8  f44f02a9  stp      x20, x19, [sp, #0x20]
001FF2CC  fd030091  mov      x29, sp
001FF2D0  f50301aa  mov      x21, x1
001FF2D4  4100a052  mov      w1, #0x20000
001FF2D8  f40302aa  mov      x20, x2
001FF2DC  f30300aa  mov      x19, x0
001FF2E0  d5a40b94  bl       #0x4e8634
001FF2E4  e82b00b0  adrp     x8, #0x77c000
001FF2E8  08a11c91  add      x8, x8, #0x728
001FF2EC  09410091  add      x9, x8, #0x10
001FF2F0  690200f9  str      x9, [x19]
001FF2F4  09210291  add      x9, x8, #0x88
001FF2F8  08e10291  add      x8, x8, #0xb8
001FF2FC  692600f9  str      x9, [x19, #0x48]
001FF300  682e00f9  str      x8, [x19, #0x58]
001FF304  a80240f9  ldr      x8, [x21]
001FF308  68ba01f9  str      x8, [x19, #0x370]
001FF30C  a80640f9  ldr      x8, [x21, #8]
001FF310  68be01f9  str      x8, [x19, #0x378]
001FF314  a80a40f9  ldr      x8, [x21, #0x10]
001FF318  68c201f9  str      x8, [x19, #0x380]
001FF31C  a00e40f9  ldr      x0, [x21, #0x18]
001FF320  60c601f9  str      x0, [x19, #0x388]
001FF324  800000b4  cbz      x0, #0x1ff334
001FF328  088c44f8  ldr      x8, [x0, #0x48]!
001FF32C  080940f9  ldr      x8, [x8, #0x10]
001FF330  00013fd6  blr      x8
001FF334  882640a9  ldp      x8, x9, [x20]
001FF338  8a1240b9  ldr      w10, [x20, #0x10]
001FF33C  6aa203b9  str      w10, [x19, #0x3a0]
001FF340  69ce01f9  str      x9, [x19, #0x398]
001FF344  68ca01f9  str      x8, [x19, #0x390]
001FF348  880e40f9  ldr      x8, [x20, #0x18]
001FF34C  68d601f9  str      x8, [x19, #0x3a8]
001FF350  881240f9  ldr      x8, [x20, #0x20]
001FF354  68da01f9  str      x8, [x19, #0x3b0]
001FF358  881640f9  ldr      x8, [x20, #0x28]
001FF35C  68de01f9  str      x8, [x19, #0x3b8]
001FF360  801a40f9  ldr      x0, [x20, #0x30]
001FF364  60e201f9  str      x0, [x19, #0x3c0]
001FF368  800000b4  cbz      x0, #0x1ff378
001FF36C  088c44f8  ldr      x8, [x0, #0x48]!
001FF370  080940f9  ldr      x8, [x8, #0x10]
001FF374  00013fd6  blr      x8
001FF378  88a643a9  ldp      x8, x9, [x20, #0x38]
001FF37C  60a20f91  add      x0, x19, #0x3e8
001FF380  8a2640f9  ldr      x10, [x20, #0x48]
001FF384  e1031f2a  mov      w1, wzr
001FF388  e2031f2a  mov      w2, wzr
001FF38C  68e601f9  str      x8, [x19, #0x3c8]
001FF390  28008052  mov      w8, #1
001FF394  6aee01f9  str      x10, [x19, #0x3d8]
001FF398  69ea01f9  str      x9, [x19, #0x3d0]
001FF39C  68e203b9  str      w8, [x19, #0x3e0]
001FF3A0  c0db0f94  bl       #0x5f62a0
001FF3A4  7f0a04b9  str      wzr, [x19, #0x408]
001FF3A8  f50b40f9  ldr      x21, [sp, #0x10]
001FF3AC  7f0a02f9  str      xzr, [x19, #0x410]
001FF3B0  7f0e02f9  str      xzr, [x19, #0x418]
001FF3B4  7f1202f9  str      xzr, [x19, #0x420]
001FF3B8  7f1602f9  str      xzr, [x19, #0x428]
001FF3BC  f44f42a9  ldp      x20, x19, [sp, #0x20]
001FF3C0  fd7bc3a8  ldp      x29, x30, [sp], #0x30
001FF3C4  c0035fd6  ret      
~~~
### bdsp_registry_ctor 0x19f4cc..0x1a0bb8 (1467 instructions)
~~~asm
0019F4CC  fd7bbba9  stp      x29, x30, [sp, #-0x50]!
0019F4D0  f90b00f9  str      x25, [sp, #0x10]
0019F4D4  f85f02a9  stp      x24, x23, [sp, #0x20]
0019F4D8  f65703a9  stp      x22, x21, [sp, #0x30]
0019F4DC  f44f04a9  stp      x20, x19, [sp, #0x40]
0019F4E0  fd030091  mov      x29, sp
0019F4E4  1f1c00f9  str      xzr, [x0, #0x38]
0019F4E8  08300090  adrp     x8, #0x79f000
0019F4EC  f40301aa  mov      x20, x1
0019F4F0  1f4000b9  str      wzr, [x0, #0x40]
0019F4F4  084943f9  ldr      x8, [x8, #0x690]
0019F4F8  49d03bd5  mrs      x9, tpidr_el0
0019F4FC  f30300aa  mov      x19, x0
0019F500  38c973f2  ands     x24, x9, #-0x2000
0019F504  1f3000b9  str      wzr, [x0, #0x30]
0019F508  1f7c01a9  stp      xzr, xzr, [x0, #0x10]
0019F50C  08410091  add      x8, x8, #0x10
0019F510  1f7c02a9  stp      xzr, xzr, [x0, #0x20]
0019F514  080000f9  str      x8, [x0]
0019F518  c0000054  b.eq     #0x19f530
0019F51C  084f40f9  ldr      x8, [x24, #0x98]
0019F520  a80000b4  cbz      x8, #0x19f534
0019F524  080f088b  add      x8, x24, x8, lsl #3
0019F528  080940f9  ldr      x8, [x8, #0x10]
0019F52C  02000014  b        #0x19f534
0019F530  e8031faa  mov      x8, xzr
0019F534  7f5200b9  str      wzr, [x19, #0x50]
0019F538  093000f0  adrp     x9, #0x7a2000
0019F53C  75620191  add      x21, x19, #0x58
0019F540  295141f9  ldr      x9, [x9, #0x2a0]
0019F544  e00315aa  mov      x0, x21
0019F548  e1031f2a  mov      w1, wzr
0019F54C  023e8052  mov      w2, #0x1f0
0019F550  2a410091  add      x10, x9, #0x10
0019F554  6a2200a9  stp      x10, x8, [x19]
0019F558  28210191  add      x8, x9, #0x48
0019F55C  682600f9  str      x8, [x19, #0x48]
0019F560  fc5a1194  bl       #0x5f6150
0019F564  084f40f9  ldr      x8, [x24, #0x98]
0019F568  1f4100f1  cmp      x8, #0x10
0019F56C  c0b10054  b.eq     #0x1a0ba4
0019F570  19630091  add      x25, x24, #0x18
0019F574  010b8052  mov      w1, #0x58
0019F578  e00314aa  mov      x0, x20
0019F57C  347b28f8  str      x20, [x25, x8, lsl #3]
0019F580  084f40f9  ldr      x8, [x24, #0x98]
0019F584  02018052  mov      w2, #8
0019F588  08050091  add      x8, x8, #1
0019F58C  084f00f9  str      x8, [x24, #0x98]
0019F590  880240f9  ldr      x8, [x20]
0019F594  080940f9  ldr      x8, [x8, #0x10]
0019F598  00013fd6  blr      x8
0019F59C  60b000b4  cbz      x0, #0x1a0ba8
0019F5A0  1f2800f9  str      xzr, [x0, #0x50]
0019F5A4  173000f0  adrp     x23, #0x7a2000
0019F5A8  f60300aa  mov      x22, x0
0019F5AC  f75641f9  ldr      x23, [x23, #0x2a8]
0019F5B0  1f7c03a9  stp      xzr, xzr, [x0, #0x30]
0019F5B4  e8820191  add      x8, x23, #0x60
0019F5B8  1f2000f9  str      xzr, [x0, #0x40]
0019F5BC  088c04f8  str      x8, [x0, #0x48]!
0019F5C0  e8420091  add      x8, x23, #0x10
0019F5C4  c85200a9  stp      x8, x20, [x22]
0019F5C8  080b8052  mov      w8, #0x58
0019F5CC  d62201a9  stp      x22, x8, [x22, #0x10]
0019F5D0  08018052  mov      w8, #8
0019F5D4  c87e02a9  stp      x8, xzr, [x22, #0x20]
0019F5D8  084f40f9  ldr      x8, [x24, #0x98]
0019F5DC  080500d1  sub      x8, x8, #1
0019F5E0  084f00f9  str      x8, [x24, #0x98]
0019F5E4  080040f9  ldr      x8, [x0]
0019F5E8  080940f9  ldr      x8, [x8, #0x10]
0019F5EC  00013fd6  blr      x8
0019F5F0  a00240f9  ldr      x0, [x21]
0019F5F4  800000b4  cbz      x0, #0x19f604
0019F5F8  088c44f8  ldr      x8, [x0, #0x48]!
0019F5FC  080d40f9  ldr      x8, [x8, #0x18]
0019F600  00013fd6  blr      x8
0019F604  b60200f9  str      x22, [x21]
0019F608  084f40f9  ldr      x8, [x24, #0x98]
0019F60C  1f4100f1  cmp      x8, #0x10
0019F610  a0ac0054  b.eq     #0x1a0ba4
0019F614  347b28f8  str      x20, [x25, x8, lsl #3]
0019F618  01058152  mov      w1, #0x828
0019F61C  084f40f9  ldr      x8, [x24, #0x98]
0019F620  e00314aa  mov      x0, x20
0019F624  02018052  mov      w2, #8
0019F628  08050091  add      x8, x8, #1
0019F62C  084f00f9  str      x8, [x24, #0x98]
0019F630  880240f9  ldr      x8, [x20]
0019F634  080940f9  ldr      x8, [x8, #0x10]
0019F638  00013fd6  blr      x8
0019F63C  60ab00b4  cbz      x0, #0x1a0ba8
0019F640  f50300aa  mov      x21, x0
0019F644  00a00091  add      x0, x0, #0x28
0019F648  e1031f2a  mov      w1, wzr
0019F64C  02008152  mov      w2, #0x800
0019F650  c05a1194  bl       #0x5f6150
0019F654  083000f0  adrp     x8, #0x7a2000
0019F658  f60315aa  mov      x22, x21
0019F65C  085941f9  ldr      x8, [x8, #0x2b0]
0019F660  a0520191  add      x0, x21, #0x54
0019F664  02fa8052  mov      w2, #0x7d0
0019F668  e1031f2a  mov      w1, wzr
0019F66C  09810191  add      x9, x8, #0x60
0019F670  08410091  add      x8, x8, #0x10
0019F674  a80200f9  str      x8, [x21]
0019F678  c98e04f8  str      x9, [x22, #0x48]!
0019F67C  b55a1194  bl       #0x5f6150
0019F680  08058152  mov      w8, #0x828
0019F684  09018052  mov      w9, #8
0019F688  e00316aa  mov      x0, x22
0019F68C  b4d600a9  stp      x20, x21, [x21, #8]
0019F690  a8a601a9  stp      x8, x9, [x21, #0x18]
0019F694  084f40f9  ldr      x8, [x24, #0x98]
0019F698  080500d1  sub      x8, x8, #1
0019F69C  084f00f9  str      x8, [x24, #0x98]
0019F6A0  c80240f9  ldr      x8, [x22]
0019F6A4  080940f9  ldr      x8, [x8, #0x10]
0019F6A8  00013fd6  blr      x8
0019F6AC  603240f9  ldr      x0, [x19, #0x60]
0019F6B0  800000b4  cbz      x0, #0x19f6c0
0019F6B4  088c44f8  ldr      x8, [x0, #0x48]!
0019F6B8  080d40f9  ldr      x8, [x8, #0x18]
0019F6BC  00013fd6  blr      x8
0019F6C0  753200f9  str      x21, [x19, #0x60]
0019F6C4  084f40f9  ldr      x8, [x24, #0x98]
0019F6C8  1f4100f1  cmp      x8, #0x10
0019F6CC  c0a60054  b.eq     #0x1a0ba4
0019F6D0  347b28f8  str      x20, [x25, x8, lsl #3]
0019F6D4  01db8752  mov      w1, #0x3ed8
0019F6D8  084f40f9  ldr      x8, [x24, #0x98]
0019F6DC  e00314aa  mov      x0, x20
0019F6E0  02018052  mov      w2, #8
0019F6E4  08050091  add      x8, x8, #1
0019F6E8  084f00f9  str      x8, [x24, #0x98]
0019F6EC  880240f9  ldr      x8, [x20]
0019F6F0  080940f9  ldr      x8, [x8, #0x10]
0019F6F4  00013fd6  blr      x8
0019F6F8  80a500b4  cbz      x0, #0x1a0ba8
0019F6FC  f50300aa  mov      x21, x0
0019F700  00a00091  add      x0, x0, #0x28
0019F704  02d68752  mov      w2, #0x3eb0
0019F708  e1031f2a  mov      w1, wzr
0019F70C  915a1194  bl       #0x5f6150
0019F710  083000f0  adrp     x8, #0x7a2000
0019F714  f60315aa  mov      x22, x21
0019F718  085d41f9  ldr      x8, [x8, #0x2b8]
0019F71C  a0520191  add      x0, x21, #0x54
0019F720  02d08752  mov      w2, #0x3e80
0019F724  e1031f2a  mov      w1, wzr
0019F728  09810191  add      x9, x8, #0x60
0019F72C  08410091  add      x8, x8, #0x10
0019F730  a80200f9  str      x8, [x21]
0019F734  c98e04f8  str      x9, [x22, #0x48]!
0019F738  865a1194  bl       #0x5f6150
0019F73C  08db8752  mov      w8, #0x3ed8
0019F740  09018052  mov      w9, #8
0019F744  e00316aa  mov      x0, x22
0019F748  b4d600a9  stp      x20, x21, [x21, #8]
0019F74C  a8a601a9  stp      x8, x9, [x21, #0x18]
0019F750  084f40f9  ldr      x8, [x24, #0x98]
0019F754  080500d1  sub      x8, x8, #1
0019F758  084f00f9  str      x8, [x24, #0x98]
0019F75C  c80240f9  ldr      x8, [x22]
0019F760  080940f9  ldr      x8, [x8, #0x10]
0019F764  00013fd6  blr      x8
0019F768  603640f9  ldr      x0, [x19, #0x68]
0019F76C  800000b4  cbz      x0, #0x19f77c
0019F770  088c44f8  ldr      x8, [x0, #0x48]!
0019F774  080d40f9  ldr      x8, [x8, #0x18]
0019F778  00013fd6  blr      x8
0019F77C  753600f9  str      x21, [x19, #0x68]
0019F780  084f40f9  ldr      x8, [x24, #0x98]
0019F784  1f4100f1  cmp      x8, #0x10
0019F788  e0a00054  b.eq     #0x1a0ba4
0019F78C  347b28f8  str      x20, [x25, x8, lsl #3]
0019F790  e00314aa  mov      x0, x20
0019F794  084f40f9  ldr      x8, [x24, #0x98]
0019F798  01ff8152  mov      w1, #0xff8
0019F79C  02018052  mov      w2, #8
0019F7A0  08050091  add      x8, x8, #1
0019F7A4  084f00f9  str      x8, [x24, #0x98]
0019F7A8  880240f9  ldr      x8, [x20]
0019F7AC  080940f9  ldr      x8, [x8, #0x10]
0019F7B0  00013fd6  blr      x8
0019F7B4  a09f00b4  cbz      x0, #0x1a0ba8
0019F7B8  f50300aa  mov      x21, x0
0019F7BC  00a00091  add      x0, x0, #0x28
0019F7C0  02fa8152  mov      w2, #0xfd0
0019F7C4  e1031f2a  mov      w1, wzr
0019F7C8  625a1194  bl       #0x5f6150
0019F7CC  083000f0  adrp     x8, #0x7a2000
0019F7D0  f60315aa  mov      x22, x21
0019F7D4  086141f9  ldr      x8, [x8, #0x2c0]
0019F7D8  a0520191  add      x0, x21, #0x54
0019F7DC  02f48152  mov      w2, #0xfa0
0019F7E0  e1031f2a  mov      w1, wzr
0019F7E4  09810191  add      x9, x8, #0x60
0019F7E8  08410091  add      x8, x8, #0x10
0019F7EC  a80200f9  str      x8, [x21]
0019F7F0  c98e04f8  str      x9, [x22, #0x48]!
0019F7F4  575a1194  bl       #0x5f6150
0019F7F8  08ff8152  mov      w8, #0xff8
0019F7FC  09018052  mov      w9, #8
0019F800  e00316aa  mov      x0, x22
0019F804  b4d600a9  stp      x20, x21, [x21, #8]
0019F808  a8a601a9  stp      x8, x9, [x21, #0x18]
0019F80C  084f40f9  ldr      x8, [x24, #0x98]
0019F810  080500d1  sub      x8, x8, #1
0019F814  084f00f9  str      x8, [x24, #0x98]
0019F818  c80240f9  ldr      x8, [x22]
0019F81C  080940f9  ldr      x8, [x8, #0x10]
0019F820  00013fd6  blr      x8
0019F824  603a40f9  ldr      x0, [x19, #0x70]
0019F828  800000b4  cbz      x0, #0x19f838
0019F82C  088c44f8  ldr      x8, [x0, #0x48]!
0019F830  080d40f9  ldr      x8, [x8, #0x18]
0019F834  00013fd6  blr      x8
0019F838  753a00f9  str      x21, [x19, #0x70]
0019F83C  084f40f9  ldr      x8, [x24, #0x98]
0019F840  1f4100f1  cmp      x8, #0x10
0019F844  009b0054  b.eq     #0x1a0ba4
0019F848  347b28f8  str      x20, [x25, x8, lsl #3]
0019F84C  01138052  mov      w1, #0x98
0019F850  084f40f9  ldr      x8, [x24, #0x98]
0019F854  e00314aa  mov      x0, x20
0019F858  02018052  mov      w2, #8
0019F85C  08050091  add      x8, x8, #1
0019F860  084f00f9  str      x8, [x24, #0x98]
0019F864  880240f9  ldr      x8, [x20]
0019F868  080940f9  ldr      x8, [x8, #0x10]
0019F86C  00013fd6  blr      x8
0019F870  c09900b4  cbz      x0, #0x1a0ba8
0019F874  1f7c05a9  stp      xzr, xzr, [x0, #0x50]
0019F878  083000f0  adrp     x8, #0x7a2000
0019F87C  f50300aa  mov      x21, x0
0019F880  1f4800f9  str      xzr, [x0, #0x90]
0019F884  1f1800f9  str      xzr, [x0, #0x30]
0019F888  1f7c06a9  stp      xzr, xzr, [x0, #0x60]
0019F88C  1f7c07a9  stp      xzr, xzr, [x0, #0x70]
0019F890  1f7c08a9  stp      xzr, xzr, [x0, #0x80]
0019F894  1ffc03a9  stp      xzr, xzr, [x0, #0x38]
0019F898  086541f9  ldr      x8, [x8, #0x2c8]
0019F89C  09410091  add      x9, x8, #0x10
0019F8A0  08810191  add      x8, x8, #0x60
0019F8A4  1f4005f8  stur     xzr, [x0, #0x54]
0019F8A8  088c04f8  str      x8, [x0, #0x48]!
0019F8AC  08138052  mov      w8, #0x98
0019F8B0  bfc205f8  stur     xzr, [x21, #0x5c]
0019F8B4  bf4206f8  stur     xzr, [x21, #0x64]
0019F8B8  bfc206f8  stur     xzr, [x21, #0x6c]
0019F8BC  bf4207f8  stur     xzr, [x21, #0x74]
0019F8C0  bfc207f8  stur     xzr, [x21, #0x7c]
0019F8C4  bf4208f8  stur     xzr, [x21, #0x84]
0019F8C8  bfc208f8  stur     xzr, [x21, #0x8c]
0019F8CC  b52201a9  stp      x21, x8, [x21, #0x10]
0019F8D0  08018052  mov      w8, #8
0019F8D4  a95200a9  stp      x9, x20, [x21]
0019F8D8  a87e02a9  stp      x8, xzr, [x21, #0x20]
0019F8DC  084f40f9  ldr      x8, [x24, #0x98]
0019F8E0  080500d1  sub      x8, x8, #1
0019F8E4  084f00f9  str      x8, [x24, #0x98]
0019F8E8  080040f9  ldr      x8, [x0]
0019F8EC  080940f9  ldr      x8, [x8, #0x10]
0019F8F0  00013fd6  blr      x8
0019F8F4  603e40f9  ldr      x0, [x19, #0x78]
0019F8F8  800000b4  cbz      x0, #0x19f908
0019F8FC  088c44f8  ldr      x8, [x0, #0x48]!
0019F900  080d40f9  ldr      x8, [x8, #0x18]
0019F904  00013fd6  blr      x8
0019F908  753e00f9  str      x21, [x19, #0x78]
0019F90C  084f40f9  ldr      x8, [x24, #0x98]
0019F910  1f4100f1  cmp      x8, #0x10
0019F914  80940054  b.eq     #0x1a0ba4
0019F918  347b28f8  str      x20, [x25, x8, lsl #3]
0019F91C  010b8052  mov      w1, #0x58
0019F920  084f40f9  ldr      x8, [x24, #0x98]
0019F924  e00314aa  mov      x0, x20
0019F928  02018052  mov      w2, #8
0019F92C  08050091  add      x8, x8, #1
0019F930  084f00f9  str      x8, [x24, #0x98]
0019F934  880240f9  ldr      x8, [x20]
0019F938  080940f9  ldr      x8, [x8, #0x10]
0019F93C  00013fd6  blr      x8
0019F940  409300b4  cbz      x0, #0x1a0ba8
0019F944  e8820191  add      x8, x23, #0x60
0019F948  f50300aa  mov      x21, x0
0019F94C  1f2800f9  str      xzr, [x0, #0x50]
0019F950  088c04f8  str      x8, [x0, #0x48]!
0019F954  e8420091  add      x8, x23, #0x10
0019F958  a85200a9  stp      x8, x20, [x21]
0019F95C  080b8052  mov      w8, #0x58
0019F960  bf2200f9  str      xzr, [x21, #0x40]
0019F964  b52201a9  stp      x21, x8, [x21, #0x10]
0019F968  08018052  mov      w8, #8
0019F96C  bf7e03a9  stp      xzr, xzr, [x21, #0x30]
0019F970  a87e02a9  stp      x8, xzr, [x21, #0x20]
0019F974  084f40f9  ldr      x8, [x24, #0x98]
0019F978  080500d1  sub      x8, x8, #1
0019F97C  084f00f9  str      x8, [x24, #0x98]
0019F980  080040f9  ldr      x8, [x0]
0019F984  080940f9  ldr      x8, [x8, #0x10]
0019F988  00013fd6  blr      x8
0019F98C  604240f9  ldr      x0, [x19, #0x80]
0019F990  800000b4  cbz      x0, #0x19f9a0
0019F994  088c44f8  ldr      x8, [x0, #0x48]!
0019F998  080d40f9  ldr      x8, [x8, #0x18]
0019F99C  00013fd6  blr      x8
0019F9A0  754200f9  str      x21, [x19, #0x80]
0019F9A4  084f40f9  ldr      x8, [x24, #0x98]
0019F9A8  1f4100f1  cmp      x8, #0x10
0019F9AC  c08f0054  b.eq     #0x1a0ba4
0019F9B0  347b28f8  str      x20, [x25, x8, lsl #3]
0019F9B4  010b8052  mov      w1, #0x58
0019F9B8  084f40f9  ldr      x8, [x24, #0x98]
0019F9BC  e00314aa  mov      x0, x20
0019F9C0  02018052  mov      w2, #8
0019F9C4  08050091  add      x8, x8, #1
0019F9C8  084f00f9  str      x8, [x24, #0x98]
0019F9CC  880240f9  ldr      x8, [x20]
0019F9D0  080940f9  ldr      x8, [x8, #0x10]
0019F9D4  00013fd6  blr      x8
0019F9D8  808e00b4  cbz      x0, #0x1a0ba8
0019F9DC  083000f0  adrp     x8, #0x7a2000
0019F9E0  f50300aa  mov      x21, x0
0019F9E4  086941f9  ldr      x8, [x8, #0x2d0]
0019F9E8  1f2800f9  str      xzr, [x0, #0x50]
0019F9EC  1f7c03a9  stp      xzr, xzr, [x0, #0x30]
0019F9F0  09810191  add      x9, x8, #0x60
0019F9F4  08410091  add      x8, x8, #0x10
0019F9F8  1f2000f9  str      xzr, [x0, #0x40]
0019F9FC  085000a9  stp      x8, x20, [x0]
0019FA00  080b8052  mov      w8, #0x58
0019FA04  098c04f8  str      x9, [x0, #0x48]!
0019FA08  b52201a9  stp      x21, x8, [x21, #0x10]
0019FA0C  08018052  mov      w8, #8
0019FA10  a87e02a9  stp      x8, xzr, [x21, #0x20]
0019FA14  084f40f9  ldr      x8, [x24, #0x98]
0019FA18  080500d1  sub      x8, x8, #1
0019FA1C  084f00f9  str      x8, [x24, #0x98]
0019FA20  080040f9  ldr      x8, [x0]
0019FA24  080940f9  ldr      x8, [x8, #0x10]
0019FA28  00013fd6  blr      x8
0019FA2C  604640f9  ldr      x0, [x19, #0x88]
0019FA30  800000b4  cbz      x0, #0x19fa40
0019FA34  088c44f8  ldr      x8, [x0, #0x48]!
0019FA38  080d40f9  ldr      x8, [x8, #0x18]
0019FA3C  00013fd6  blr      x8
0019FA40  a8630091  add      x8, x29, #0x18
0019FA44  e00314aa  mov      x0, x20
0019FA48  754600f9  str      x21, [x19, #0x88]
0019FA4C  5b040094  bl       #0x1a0bb8
0019FA50  604a40f9  ldr      x0, [x19, #0x90]
0019FA54  800000b4  cbz      x0, #0x19fa64
0019FA58  088c44f8  ldr      x8, [x0, #0x48]!
0019FA5C  080d40f9  ldr      x8, [x8, #0x18]
0019FA60  00013fd6  blr      x8
0019FA64  a80f40f9  ldr      x8, [x29, #0x18]
0019FA68  684a00f9  str      x8, [x19, #0x90]
0019FA6C  084f40f9  ldr      x8, [x24, #0x98]
0019FA70  1f4100f1  cmp      x8, #0x10
0019FA74  80890054  b.eq     #0x1a0ba4
0019FA78  347b28f8  str      x20, [x25, x8, lsl #3]
0019FA7C  01e58552  mov      w1, #0x2f28
0019FA80  084f40f9  ldr      x8, [x24, #0x98]
0019FA84  e00314aa  mov      x0, x20
0019FA88  02018052  mov      w2, #8
0019FA8C  08050091  add      x8, x8, #1
0019FA90  084f00f9  str      x8, [x24, #0x98]
0019FA94  880240f9  ldr      x8, [x20]
0019FA98  080940f9  ldr      x8, [x8, #0x10]
0019FA9C  00013fd6  blr      x8
0019FAA0  408800b4  cbz      x0, #0x1a0ba8
0019FAA4  1f5000b9  str      wzr, [x0, #0x50]
0019FAA8  083000f0  adrp     x8, #0x7a2000
0019FAAC  f50300aa  mov      x21, x0
0019FAB0  086d41f9  ldr      x8, [x8, #0x2d8]
0019FAB4  1ffc02a9  stp      xzr, xzr, [x0, #0x28]
0019FAB8  f60300aa  mov      x22, x0
0019FABC  82da8552  mov      w2, #0x2ed4
0019FAC0  e1031f2a  mov      w1, wzr
0019FAC4  1ffc03a9  stp      xzr, xzr, [x0, #0x38]
0019FAC8  09810191  add      x9, x8, #0x60
0019FACC  08410091  add      x8, x8, #0x10
0019FAD0  084405f8  str      x8, [x0], #0x54
0019FAD4  c98e04f8  str      x9, [x22, #0x48]!
0019FAD8  9e591194  bl       #0x5f6150
0019FADC  08e58552  mov      w8, #0x2f28
0019FAE0  09018052  mov      w9, #8
0019FAE4  e00316aa  mov      x0, x22
0019FAE8  b4d600a9  stp      x20, x21, [x21, #8]
0019FAEC  a8a601a9  stp      x8, x9, [x21, #0x18]
0019FAF0  084f40f9  ldr      x8, [x24, #0x98]
0019FAF4  080500d1  sub      x8, x8, #1
0019FAF8  084f00f9  str      x8, [x24, #0x98]
0019FAFC  c80240f9  ldr      x8, [x22]
0019FB00  080940f9  ldr      x8, [x8, #0x10]
0019FB04  00013fd6  blr      x8
0019FB08  604e40f9  ldr      x0, [x19, #0x98]
0019FB0C  800000b4  cbz      x0, #0x19fb1c
0019FB10  088c44f8  ldr      x8, [x0, #0x48]!
0019FB14  080d40f9  ldr      x8, [x8, #0x18]
0019FB18  00013fd6  blr      x8
0019FB1C  754e00f9  str      x21, [x19, #0x98]
0019FB20  084f40f9  ldr      x8, [x24, #0x98]
0019FB24  1f4100f1  cmp      x8, #0x10
0019FB28  e0830054  b.eq     #0x1a0ba4
0019FB2C  347b28f8  str      x20, [x25, x8, lsl #3]
0019FB30  e00314aa  mov      x0, x20
0019FB34  084f40f9  ldr      x8, [x24, #0x98]
0019FB38  010c8052  mov      w1, #0x60
0019FB3C  02018052  mov      w2, #8
0019FB40  08050091  add      x8, x8, #1
0019FB44  084f00f9  str      x8, [x24, #0x98]
0019FB48  880240f9  ldr      x8, [x20]
0019FB4C  080940f9  ldr      x8, [x8, #0x10]
0019FB50  00013fd6  blr      x8
0019FB54  a08200b4  cbz      x0, #0x1a0ba8
0019FB58  083000f0  adrp     x8, #0x7a2000
0019FB5C  f50300aa  mov      x21, x0
0019FB60  087141f9  ldr      x8, [x8, #0x2e0]
0019FB64  1f7c05a9  stp      xzr, xzr, [x0, #0x50]
0019FB68  09810191  add      x9, x8, #0x60
0019FB6C  08410091  add      x8, x8, #0x10
0019FB70  1ffc03a9  stp      xzr, xzr, [x0, #0x38]
0019FB74  1ffc02a9  stp      xzr, xzr, [x0, #0x28]
0019FB78  098c04f8  str      x9, [x0, #0x48]!
0019FB7C  a85200a9  stp      x8, x20, [x21]
0019FB80  080c8052  mov      w8, #0x60
0019FB84  b52201a9  stp      x21, x8, [x21, #0x10]
0019FB88  08018052  mov      w8, #8
0019FB8C  a81200f9  str      x8, [x21, #0x20]
0019FB90  084f40f9  ldr      x8, [x24, #0x98]
0019FB94  080500d1  sub      x8, x8, #1
0019FB98  084f00f9  str      x8, [x24, #0x98]
0019FB9C  080040f9  ldr      x8, [x0]
0019FBA0  080940f9  ldr      x8, [x8, #0x10]
0019FBA4  00013fd6  blr      x8
0019FBA8  605240f9  ldr      x0, [x19, #0xa0]
0019FBAC  800000b4  cbz      x0, #0x19fbbc
0019FBB0  088c44f8  ldr      x8, [x0, #0x48]!
0019FBB4  080d40f9  ldr      x8, [x8, #0x18]
0019FBB8  00013fd6  blr      x8
0019FBBC  a8630091  add      x8, x29, #0x18
0019FBC0  e00314aa  mov      x0, x20
0019FBC4  755200f9  str      x21, [x19, #0xa0]
0019FBC8  40040094  bl       #0x1a0cc8
0019FBCC  605640f9  ldr      x0, [x19, #0xa8]
0019FBD0  800000b4  cbz      x0, #0x19fbe0
0019FBD4  088c44f8  ldr      x8, [x0, #0x48]!
0019FBD8  080d40f9  ldr      x8, [x8, #0x18]
0019FBDC  00013fd6  blr      x8
0019FBE0  a80f40f9  ldr      x8, [x29, #0x18]
0019FBE4  e00314aa  mov      x0, x20
0019FBE8  685600f9  str      x8, [x19, #0xa8]
0019FBEC  a8630091  add      x8, x29, #0x18
0019FBF0  77040094  bl       #0x1a0dcc
0019FBF4  605a40f9  ldr      x0, [x19, #0xb0]
0019FBF8  800000b4  cbz      x0, #0x19fc08
0019FBFC  088c44f8  ldr      x8, [x0, #0x48]!
0019FC00  080d40f9  ldr      x8, [x8, #0x18]
0019FC04  00013fd6  blr      x8
0019FC08  a80f40f9  ldr      x8, [x29, #0x18]
0019FC0C  e00314aa  mov      x0, x20
0019FC10  685a00f9  str      x8, [x19, #0xb0]
0019FC14  a8630091  add      x8, x29, #0x18
0019FC18  ae040094  bl       #0x1a0ed0
0019FC1C  605e40f9  ldr      x0, [x19, #0xb8]
0019FC20  800000b4  cbz      x0, #0x19fc30
0019FC24  088c44f8  ldr      x8, [x0, #0x48]!
0019FC28  080d40f9  ldr      x8, [x8, #0x18]
0019FC2C  00013fd6  blr      x8
0019FC30  a80f40f9  ldr      x8, [x29, #0x18]
0019FC34  e00314aa  mov      x0, x20
0019FC38  685e00f9  str      x8, [x19, #0xb8]
0019FC3C  a8630091  add      x8, x29, #0x18
0019FC40  e8040094  bl       #0x1a0fe0
0019FC44  606240f9  ldr      x0, [x19, #0xc0]
0019FC48  800000b4  cbz      x0, #0x19fc58
0019FC4C  088c44f8  ldr      x8, [x0, #0x48]!
0019FC50  080d40f9  ldr      x8, [x8, #0x18]
0019FC54  00013fd6  blr      x8
0019FC58  a80f40f9  ldr      x8, [x29, #0x18]
0019FC5C  e00314aa  mov      x0, x20
0019FC60  686200f9  str      x8, [x19, #0xc0]
0019FC64  a8630091  add      x8, x29, #0x18
0019FC68  1f050094  bl       #0x1a10e4
0019FC6C  606640f9  ldr      x0, [x19, #0xc8]
0019FC70  800000b4  cbz      x0, #0x19fc80
0019FC74  088c44f8  ldr      x8, [x0, #0x48]!
0019FC78  080d40f9  ldr      x8, [x8, #0x18]
0019FC7C  00013fd6  blr      x8
0019FC80  a80f40f9  ldr      x8, [x29, #0x18]
0019FC84  686600f9  str      x8, [x19, #0xc8]
0019FC88  084f40f9  ldr      x8, [x24, #0x98]
0019FC8C  1f4100f1  cmp      x8, #0x10
0019FC90  a0780054  b.eq     #0x1a0ba4
0019FC94  347b28f8  str      x20, [x25, x8, lsl #3]
0019FC98  160d9152  mov      w22, #0x8868
0019FC9C  3600a072  movk     w22, #1, lsl #16
0019FCA0  084f40f9  ldr      x8, [x24, #0x98]
0019FCA4  e00314aa  mov      x0, x20
0019FCA8  e10316aa  mov      x1, x22
0019FCAC  02018052  mov      w2, #8
0019FCB0  08050091  add      x8, x8, #1
0019FCB4  084f00f9  str      x8, [x24, #0x98]
0019FCB8  880240f9  ldr      x8, [x20]
0019FCBC  080940f9  ldr      x8, [x8, #0x10]
0019FCC0  00013fd6  blr      x8
0019FCC4  207700b4  cbz      x0, #0x1a0ba8
0019FCC8  1f5000b9  str      wzr, [x0, #0x50]
0019FCCC  083000f0  adrp     x8, #0x7a2000
0019FCD0  f50300aa  mov      x21, x0
0019FCD4  087541f9  ldr      x8, [x8, #0x2e8]
0019FCD8  1ffc02a9  stp      xzr, xzr, [x0, #0x28]
0019FCDC  f70300aa  mov      x23, x0
0019FCE0  82029152  mov      w2, #0x8814
0019FCE4  2200a072  movk     w2, #1, lsl #16
0019FCE8  1ffc03a9  stp      xzr, xzr, [x0, #0x38]
0019FCEC  e1031f2a  mov      w1, wzr
0019FCF0  09810191  add      x9, x8, #0x60
0019FCF4  08410091  add      x8, x8, #0x10
0019FCF8  084405f8  str      x8, [x0], #0x54
0019FCFC  e98e04f8  str      x9, [x23, #0x48]!
0019FD00  14591194  bl       #0x5f6150
0019FD04  08018052  mov      w8, #8
0019FD08  b4d600a9  stp      x20, x21, [x21, #8]
0019FD0C  e00317aa  mov      x0, x23
0019FD10  b6a201a9  stp      x22, x8, [x21, #0x18]
0019FD14  084f40f9  ldr      x8, [x24, #0x98]
0019FD18  080500d1  sub      x8, x8, #1
0019FD1C  084f00f9  str      x8, [x24, #0x98]
0019FD20  e80240f9  ldr      x8, [x23]
0019FD24  080940f9  ldr      x8, [x8, #0x10]
0019FD28  00013fd6  blr      x8
0019FD2C  606a40f9  ldr      x0, [x19, #0xd0]
0019FD30  800000b4  cbz      x0, #0x19fd40
0019FD34  088c44f8  ldr      x8, [x0, #0x48]!
0019FD38  080d40f9  ldr      x8, [x8, #0x18]
0019FD3C  00013fd6  blr      x8
0019FD40  a8630091  add      x8, x29, #0x18
0019FD44  e00314aa  mov      x0, x20
0019FD48  756a00f9  str      x21, [x19, #0xd0]
0019FD4C  27050094  bl       #0x1a11e8
0019FD50  606e40f9  ldr      x0, [x19, #0xd8]
0019FD54  800000b4  cbz      x0, #0x19fd64
0019FD58  088c44f8  ldr      x8, [x0, #0x48]!
0019FD5C  080d40f9  ldr      x8, [x8, #0x18]
0019FD60  00013fd6  blr      x8
0019FD64  a80f40f9  ldr      x8, [x29, #0x18]
0019FD68  e00314aa  mov      x0, x20
0019FD6C  686e00f9  str      x8, [x19, #0xd8]
0019FD70  a8630091  add      x8, x29, #0x18
0019FD74  5e050094  bl       #0x1a12ec
0019FD78  607240f9  ldr      x0, [x19, #0xe0]
0019FD7C  800000b4  cbz      x0, #0x19fd8c
0019FD80  088c44f8  ldr      x8, [x0, #0x48]!
0019FD84  080d40f9  ldr      x8, [x8, #0x18]
0019FD88  00013fd6  blr      x8
0019FD8C  a80f40f9  ldr      x8, [x29, #0x18]
0019FD90  e00314aa  mov      x0, x20
0019FD94  687200f9  str      x8, [x19, #0xe0]
0019FD98  a8630091  add      x8, x29, #0x18
0019FD9C  95050094  bl       #0x1a13f0
0019FDA0  607640f9  ldr      x0, [x19, #0xe8]
0019FDA4  800000b4  cbz      x0, #0x19fdb4
0019FDA8  088c44f8  ldr      x8, [x0, #0x48]!
0019FDAC  080d40f9  ldr      x8, [x8, #0x18]
0019FDB0  00013fd6  blr      x8
0019FDB4  a80f40f9  ldr      x8, [x29, #0x18]
0019FDB8  e00314aa  mov      x0, x20
0019FDBC  687600f9  str      x8, [x19, #0xe8]
0019FDC0  a8630091  add      x8, x29, #0x18
0019FDC4  cc050094  bl       #0x1a14f4
0019FDC8  607a40f9  ldr      x0, [x19, #0xf0]
0019FDCC  800000b4  cbz      x0, #0x19fddc
0019FDD0  088c44f8  ldr      x8, [x0, #0x48]!
0019FDD4  080d40f9  ldr      x8, [x8, #0x18]
0019FDD8  00013fd6  blr      x8
0019FDDC  a80f40f9  ldr      x8, [x29, #0x18]
0019FDE0  687a00f9  str      x8, [x19, #0xf0]
0019FDE4  084f40f9  ldr      x8, [x24, #0x98]
0019FDE8  1f4100f1  cmp      x8, #0x10
0019FDEC  c06d0054  b.eq     #0x1a0ba4
0019FDF0  347b28f8  str      x20, [x25, x8, lsl #3]
0019FDF4  16e99052  mov      w22, #0x8748
0019FDF8  7600a072  movk     w22, #3, lsl #16
0019FDFC  084f40f9  ldr      x8, [x24, #0x98]
0019FE00  e00314aa  mov      x0, x20
0019FE04  e10316aa  mov      x1, x22
0019FE08  02018052  mov      w2, #8
0019FE0C  08050091  add      x8, x8, #1
0019FE10  084f00f9  str      x8, [x24, #0x98]
0019FE14  880240f9  ldr      x8, [x20]
0019FE18  080940f9  ldr      x8, [x8, #0x10]
0019FE1C  00013fd6  blr      x8
0019FE20  406c00b4  cbz      x0, #0x1a0ba8
0019FE24  1f5000b9  str      wzr, [x0, #0x50]
0019FE28  083000f0  adrp     x8, #0x7a2000
0019FE2C  f50300aa  mov      x21, x0
0019FE30  087941f9  ldr      x8, [x8, #0x2f0]
0019FE34  1ffc02a9  stp      xzr, xzr, [x0, #0x28]
0019FE38  f70300aa  mov      x23, x0
0019FE3C  82de9052  mov      w2, #0x86f4
0019FE40  6200a072  movk     w2, #3, lsl #16
0019FE44  1ffc03a9  stp      xzr, xzr, [x0, #0x38]
0019FE48  e1031f2a  mov      w1, wzr
0019FE4C  09810191  add      x9, x8, #0x60
0019FE50  08410091  add      x8, x8, #0x10
0019FE54  084405f8  str      x8, [x0], #0x54
0019FE58  e98e04f8  str      x9, [x23, #0x48]!
0019FE5C  bd581194  bl       #0x5f6150
0019FE60  08018052  mov      w8, #8
0019FE64  b4d600a9  stp      x20, x21, [x21, #8]
0019FE68  e00317aa  mov      x0, x23
0019FE6C  b6a201a9  stp      x22, x8, [x21, #0x18]
0019FE70  084f40f9  ldr      x8, [x24, #0x98]
0019FE74  080500d1  sub      x8, x8, #1
0019FE78  084f00f9  str      x8, [x24, #0x98]
0019FE7C  e80240f9  ldr      x8, [x23]
0019FE80  080940f9  ldr      x8, [x8, #0x10]
0019FE84  00013fd6  blr      x8
0019FE88  607e40f9  ldr      x0, [x19, #0xf8]
0019FE8C  800000b4  cbz      x0, #0x19fe9c
0019FE90  088c44f8  ldr      x8, [x0, #0x48]!
0019FE94  080d40f9  ldr      x8, [x8, #0x18]
0019FE98  00013fd6  blr      x8
0019FE9C  757e00f9  str      x21, [x19, #0xf8]
0019FEA0  084f40f9  ldr      x8, [x24, #0x98]
0019FEA4  1f4100f1  cmp      x8, #0x10
0019FEA8  e0670054  b.eq     #0x1a0ba4
0019FEAC  347b28f8  str      x20, [x25, x8, lsl #3]
0019FEB0  01178052  mov      w1, #0xb8
0019FEB4  084f40f9  ldr      x8, [x24, #0x98]
0019FEB8  e00314aa  mov      x0, x20
0019FEBC  02018052  mov      w2, #8
0019FEC0  08050091  add      x8, x8, #1
0019FEC4  084f00f9  str      x8, [x24, #0x98]
0019FEC8  880240f9  ldr      x8, [x20]
0019FECC  080940f9  ldr      x8, [x8, #0x10]
0019FED0  00013fd6  blr      x8
0019FED4  a06600b4  cbz      x0, #0x1a0ba8
0019FED8  f50300aa  mov      x21, x0
0019FEDC  1ffc0aa9  stp      xzr, xzr, [x0, #0xa8]
0019FEE0  083000f0  adrp     x8, #0x7a2000
0019FEE4  1f2800f9  str      xzr, [x0, #0x50]
0019FEE8  1f1800f9  str      xzr, [x0, #0x30]
0019FEEC  1ffc09a9  stp      xzr, xzr, [x0, #0x98]
0019FEF0  1ffc08a9  stp      xzr, xzr, [x0, #0x88]
0019FEF4  1ffc07a9  stp      xzr, xzr, [x0, #0x78]
0019FEF8  1ffc06a9  stp      xzr, xzr, [x0, #0x68]
0019FEFC  1ffc05a9  stp      xzr, xzr, [x0, #0x58]
0019FF00  1ffc03a9  stp      xzr, xzr, [x0, #0x38]
0019FF04  1f8c04f8  str      xzr, [x0, #0x48]!
0019FF08  084d41f9  ldr      x8, [x8, #0x298]
0019FF0C  09410091  add      x9, x8, #0x10
0019FF10  08810191  add      x8, x8, #0x60
0019FF14  080000f9  str      x8, [x0]
0019FF18  08178052  mov      w8, #0xb8
0019FF1C  a95200a9  stp      x9, x20, [x21]
0019FF20  09018052  mov      w9, #8
0019FF24  b52201a9  stp      x21, x8, [x21, #0x10]
0019FF28  a97e02a9  stp      x9, xzr, [x21, #0x20]
0019FF2C  084f40f9  ldr      x8, [x24, #0x98]
0019FF30  080500d1  sub      x8, x8, #1
0019FF34  084f00f9  str      x8, [x24, #0x98]
0019FF38  080040f9  ldr      x8, [x0]
0019FF3C  080940f9  ldr      x8, [x8, #0x10]
0019FF40  00013fd6  blr      x8
0019FF44  608240f9  ldr      x0, [x19, #0x100]
0019FF48  800000b4  cbz      x0, #0x19ff58
0019FF4C  088c44f8  ldr      x8, [x0, #0x48]!
0019FF50  080d40f9  ldr      x8, [x8, #0x18]
0019FF54  00013fd6  blr      x8
0019FF58  758200f9  str      x21, [x19, #0x100]
0019FF5C  084f40f9  ldr      x8, [x24, #0x98]
0019FF60  1f4100f1  cmp      x8, #0x10
0019FF64  00620054  b.eq     #0x1a0ba4
0019FF68  347b28f8  str      x20, [x25, x8, lsl #3]
0019FF6C  16bb9552  mov      w22, #0xadd8
0019FF70  3600a072  movk     w22, #1, lsl #16
0019FF74  084f40f9  ldr      x8, [x24, #0x98]
0019FF78  e00314aa  mov      x0, x20
0019FF7C  e10316aa  mov      x1, x22
0019FF80  02018052  mov      w2, #8
0019FF84  08050091  add      x8, x8, #1
0019FF88  084f00f9  str      x8, [x24, #0x98]
0019FF8C  880240f9  ldr      x8, [x20]
0019FF90  080940f9  ldr      x8, [x8, #0x10]
0019FF94  00013fd6  blr      x8
0019FF98  806000b4  cbz      x0, #0x1a0ba8
0019FF9C  f50300aa  mov      x21, x0
0019FFA0  00a00091  add      x0, x0, #0x28
0019FFA4  02b69552  mov      w2, #0xadb0
0019FFA8  2200a072  movk     w2, #1, lsl #16
0019FFAC  e1031f2a  mov      w1, wzr
0019FFB0  68581194  bl       #0x5f6150
0019FFB4  083000f0  adrp     x8, #0x7a2000
0019FFB8  f70315aa  mov      x23, x21
0019FFBC  087d41f9  ldr      x8, [x8, #0x2f8]
0019FFC0  a0520191  add      x0, x21, #0x54
0019FFC4  02b09552  mov      w2, #0xad80
0019FFC8  2200a072  movk     w2, #1, lsl #16
0019FFCC  e1031f2a  mov      w1, wzr
0019FFD0  09810191  add      x9, x8, #0x60
0019FFD4  08410091  add      x8, x8, #0x10
0019FFD8  e98e04f8  str      x9, [x23, #0x48]!
0019FFDC  a80200f9  str      x8, [x21]
0019FFE0  5c581194  bl       #0x5f6150
0019FFE4  08018052  mov      w8, #8
0019FFE8  b4d600a9  stp      x20, x21, [x21, #8]
0019FFEC  e00317aa  mov      x0, x23
0019FFF0  b6a201a9  stp      x22, x8, [x21, #0x18]
0019FFF4  084f40f9  ldr      x8, [x24, #0x98]
0019FFF8  080500d1  sub      x8, x8, #1
0019FFFC  084f00f9  str      x8, [x24, #0x98]
001A0000  e80240f9  ldr      x8, [x23]
001A0004  080940f9  ldr      x8, [x8, #0x10]
001A0008  00013fd6  blr      x8
001A000C  608640f9  ldr      x0, [x19, #0x108]
001A0010  800000b4  cbz      x0, #0x1a0020
001A0014  088c44f8  ldr      x8, [x0, #0x48]!
001A0018  080d40f9  ldr      x8, [x8, #0x18]
001A001C  00013fd6  blr      x8
001A0020  758600f9  str      x21, [x19, #0x108]
001A0024  084f40f9  ldr      x8, [x24, #0x98]
001A0028  1f4100f1  cmp      x8, #0x10
001A002C  c05b0054  b.eq     #0x1a0ba4
001A0030  347b28f8  str      x20, [x25, x8, lsl #3]
001A0034  010d8052  mov      w1, #0x68
001A0038  084f40f9  ldr      x8, [x24, #0x98]
001A003C  e00314aa  mov      x0, x20
001A0040  02018052  mov      w2, #8
001A0044  08050091  add      x8, x8, #1
001A0048  084f00f9  str      x8, [x24, #0x98]
001A004C  880240f9  ldr      x8, [x20]
001A0050  080940f9  ldr      x8, [x8, #0x10]
001A0054  00013fd6  blr      x8
001A0058  805a00b4  cbz      x0, #0x1a0ba8
001A005C  1f7c05a9  stp      xzr, xzr, [x0, #0x50]
001A0060  c82e00b0  adrp     x8, #0x779000
001A0064  08011591  add      x8, x8, #0x540
001A0068  f50300aa  mov      x21, x0
001A006C  09810191  add      x9, x8, #0x60
001A0070  08410091  add      x8, x8, #0x10
001A0074  1f3000f9  str      xzr, [x0, #0x60]
001A0078  1f4005f8  stur     xzr, [x0, #0x54]
001A007C  1ffc03a9  stp      xzr, xzr, [x0, #0x38]
001A0080  1fc005f8  stur     xzr, [x0, #0x5c]
001A0084  098c04f8  str      x9, [x0, #0x48]!
001A0088  a85200a9  stp      x8, x20, [x21]
001A008C  080d8052  mov      w8, #0x68
001A0090  bffe02a9  stp      xzr, xzr, [x21, #0x28]
001A0094  b52201a9  stp      x21, x8, [x21, #0x10]
001A0098  08018052  mov      w8, #8
001A009C  a81200f9  str      x8, [x21, #0x20]
001A00A0  084f40f9  ldr      x8, [x24, #0x98]
001A00A4  080500d1  sub      x8, x8, #1
001A00A8  084f00f9  str      x8, [x24, #0x98]
001A00AC  080040f9  ldr      x8, [x0]
001A00B0  080940f9  ldr      x8, [x8, #0x10]
001A00B4  00013fd6  blr      x8
001A00B8  608a40f9  ldr      x0, [x19, #0x110]
001A00BC  800000b4  cbz      x0, #0x1a00cc
001A00C0  088c44f8  ldr      x8, [x0, #0x48]!
001A00C4  080d40f9  ldr      x8, [x8, #0x18]
001A00C8  00013fd6  blr      x8
001A00CC  758a00f9  str      x21, [x19, #0x110]
001A00D0  084f40f9  ldr      x8, [x24, #0x98]
001A00D4  1f4100f1  cmp      x8, #0x10
001A00D8  60560054  b.eq     #0x1a0ba4
001A00DC  347b28f8  str      x20, [x25, x8, lsl #3]
001A00E0  01838052  mov      w1, #0x418
001A00E4  084f40f9  ldr      x8, [x24, #0x98]
001A00E8  e00314aa  mov      x0, x20
001A00EC  02018052  mov      w2, #8
001A00F0  08050091  add      x8, x8, #1
001A00F4  084f00f9  str      x8, [x24, #0x98]
001A00F8  880240f9  ldr      x8, [x20]
001A00FC  080940f9  ldr      x8, [x8, #0x10]
001A0100  00013fd6  blr      x8
001A0104  205500b4  cbz      x0, #0x1a0ba8
001A0108  f50300aa  mov      x21, x0
001A010C  00a00091  add      x0, x0, #0x28
001A0110  e1031f2a  mov      w1, wzr
001A0114  027e8052  mov      w2, #0x3f0
001A0118  0e581194  bl       #0x5f6150
001A011C  083000d0  adrp     x8, #0x7a2000
001A0120  f60315aa  mov      x22, x21
001A0124  088541f9  ldr      x8, [x8, #0x308]
001A0128  a0520191  add      x0, x21, #0x54
001A012C  e1031f2a  mov      w1, wzr
001A0130  02788052  mov      w2, #0x3c0
001A0134  09810191  add      x9, x8, #0x60
001A0138  08410091  add      x8, x8, #0x10
001A013C  a80200f9  str      x8, [x21]
001A0140  c98e04f8  str      x9, [x22, #0x48]!
001A0144  03581194  bl       #0x5f6150
001A0148  08838052  mov      w8, #0x418
001A014C  09018052  mov      w9, #8
001A0150  e00316aa  mov      x0, x22
001A0154  b4d600a9  stp      x20, x21, [x21, #8]
001A0158  a8a601a9  stp      x8, x9, [x21, #0x18]
001A015C  084f40f9  ldr      x8, [x24, #0x98]
001A0160  080500d1  sub      x8, x8, #1
001A0164  084f00f9  str      x8, [x24, #0x98]
001A0168  c80240f9  ldr      x8, [x22]
001A016C  080940f9  ldr      x8, [x8, #0x10]
001A0170  00013fd6  blr      x8
001A0174  608e40f9  ldr      x0, [x19, #0x118]
001A0178  800000b4  cbz      x0, #0x1a0188
001A017C  088c44f8  ldr      x8, [x0, #0x48]!
001A0180  080d40f9  ldr      x8, [x8, #0x18]
001A0184  00013fd6  blr      x8
001A0188  758e00f9  str      x21, [x19, #0x118]
001A018C  084f40f9  ldr      x8, [x24, #0x98]
001A0190  1f4100f1  cmp      x8, #0x10
001A0194  80500054  b.eq     #0x1a0ba4
001A0198  347b28f8  str      x20, [x25, x8, lsl #3]
001A019C  01b98652  mov      w1, #0x35c8
001A01A0  084f40f9  ldr      x8, [x24, #0x98]
001A01A4  e00314aa  mov      x0, x20
001A01A8  02018052  mov      w2, #8
001A01AC  08050091  add      x8, x8, #1
001A01B0  084f00f9  str      x8, [x24, #0x98]
001A01B4  880240f9  ldr      x8, [x20]
001A01B8  080940f9  ldr      x8, [x8, #0x10]
001A01BC  00013fd6  blr      x8
001A01C0  404f00b4  cbz      x0, #0x1a0ba8
001A01C4  f50300aa  mov      x21, x0
001A01C8  00a00091  add      x0, x0, #0x28
001A01CC  02b48652  mov      w2, #0x35a0
001A01D0  e1031f2a  mov      w1, wzr
001A01D4  df571194  bl       #0x5f6150
001A01D8  083000d0  adrp     x8, #0x7a2000
001A01DC  f60315aa  mov      x22, x21
001A01E0  088941f9  ldr      x8, [x8, #0x310]
001A01E4  a0520191  add      x0, x21, #0x54
001A01E8  02ae8652  mov      w2, #0x3570
001A01EC  e1031f2a  mov      w1, wzr
001A01F0  09810191  add      x9, x8, #0x60
001A01F4  08410091  add      x8, x8, #0x10
001A01F8  a80200f9  str      x8, [x21]
001A01FC  c98e04f8  str      x9, [x22, #0x48]!
001A0200  d4571194  bl       #0x5f6150
001A0204  08b98652  mov      w8, #0x35c8
001A0208  09018052  mov      w9, #8
001A020C  e00316aa  mov      x0, x22
001A0210  b4d600a9  stp      x20, x21, [x21, #8]
001A0214  a8a601a9  stp      x8, x9, [x21, #0x18]
001A0218  084f40f9  ldr      x8, [x24, #0x98]
001A021C  080500d1  sub      x8, x8, #1
001A0220  084f00f9  str      x8, [x24, #0x98]
001A0224  c80240f9  ldr      x8, [x22]
001A0228  080940f9  ldr      x8, [x8, #0x10]
001A022C  00013fd6  blr      x8
001A0230  609240f9  ldr      x0, [x19, #0x120]
001A0234  800000b4  cbz      x0, #0x1a0244
001A0238  088c44f8  ldr      x8, [x0, #0x48]!
001A023C  080d40f9  ldr      x8, [x8, #0x18]
001A0240  00013fd6  blr      x8
001A0244  759200f9  str      x21, [x19, #0x120]
001A0248  084f40f9  ldr      x8, [x24, #0x98]
001A024C  1f4100f1  cmp      x8, #0x10
001A0250  a04a0054  b.eq     #0x1a0ba4
001A0254  347b28f8  str      x20, [x25, x8, lsl #3]
001A0258  01118052  mov      w1, #0x88
001A025C  084f40f9  ldr      x8, [x24, #0x98]
001A0260  e00314aa  mov      x0, x20
001A0264  02018052  mov      w2, #8
001A0268  08050091  add      x8, x8, #1
001A026C  084f00f9  str      x8, [x24, #0x98]
001A0270  880240f9  ldr      x8, [x20]
001A0274  080940f9  ldr      x8, [x8, #0x10]
001A0278  00013fd6  blr      x8
001A027C  604900b4  cbz      x0, #0x1a0ba8
001A0280  1f7c05a9  stp      xzr, xzr, [x0, #0x50]
001A0284  083000d0  adrp     x8, #0x7a2000
001A0288  f50300aa  mov      x21, x0
001A028C  1f7c06a9  stp      xzr, xzr, [x0, #0x60]
001A0290  1f7c07a9  stp      xzr, xzr, [x0, #0x70]
001A0294  088d41f9  ldr      x8, [x8, #0x318]
001A0298  09810191  add      x9, x8, #0x60
001A029C  08410091  add      x8, x8, #0x10
001A02A0  1f4000f9  str      xzr, [x0, #0x80]
001A02A4  1f4005f8  stur     xzr, [x0, #0x54]
001A02A8  1fc005f8  stur     xzr, [x0, #0x5c]
001A02AC  1f4006f8  stur     xzr, [x0, #0x64]
001A02B0  1fc006f8  stur     xzr, [x0, #0x6c]
001A02B4  1f4007f8  stur     xzr, [x0, #0x74]
001A02B8  1fc007f8  stur     xzr, [x0, #0x7c]
001A02BC  098c04f8  str      x9, [x0, #0x48]!
001A02C0  09118052  mov      w9, #0x88
001A02C4  b52601a9  stp      x21, x9, [x21, #0x10]
001A02C8  09018052  mov      w9, #8
001A02CC  a91200f9  str      x9, [x21, #0x20]
001A02D0  bffe03a9  stp      xzr, xzr, [x21, #0x38]
001A02D4  bffe02a9  stp      xzr, xzr, [x21, #0x28]
001A02D8  a85200a9  stp      x8, x20, [x21]
001A02DC  084f40f9  ldr      x8, [x24, #0x98]
001A02E0  080500d1  sub      x8, x8, #1
001A02E4  084f00f9  str      x8, [x24, #0x98]
001A02E8  080040f9  ldr      x8, [x0]
001A02EC  080940f9  ldr      x8, [x8, #0x10]
001A02F0  00013fd6  blr      x8
001A02F4  609640f9  ldr      x0, [x19, #0x128]
001A02F8  800000b4  cbz      x0, #0x1a0308
001A02FC  088c44f8  ldr      x8, [x0, #0x48]!
001A0300  080d40f9  ldr      x8, [x8, #0x18]
001A0304  00013fd6  blr      x8
001A0308  759600f9  str      x21, [x19, #0x128]
001A030C  084f40f9  ldr      x8, [x24, #0x98]
001A0310  1f4100f1  cmp      x8, #0x10
001A0314  80440054  b.eq     #0x1a0ba4
001A0318  347b28f8  str      x20, [x25, x8, lsl #3]
001A031C  012a8052  mov      w1, #0x150
001A0320  084f40f9  ldr      x8, [x24, #0x98]
001A0324  e00314aa  mov      x0, x20
001A0328  02018052  mov      w2, #8
001A032C  08050091  add      x8, x8, #1
001A0330  084f00f9  str      x8, [x24, #0x98]
001A0334  880240f9  ldr      x8, [x20]
001A0338  080940f9  ldr      x8, [x8, #0x10]
001A033C  00013fd6  blr      x8
001A0340  404300b4  cbz      x0, #0x1a0ba8
001A0344  f50300aa  mov      x21, x0
001A0348  00a00091  add      x0, x0, #0x28
001A034C  02258052  mov      w2, #0x128
001A0350  e1031f2a  mov      w1, wzr
001A0354  7f571194  bl       #0x5f6150
001A0358  bfc205f8  stur     xzr, [x21, #0x5c]
001A035C  083000d0  adrp     x8, #0x7a2000
001A0360  e00315aa  mov      x0, x21
001A0364  089141f9  ldr      x8, [x8, #0x320]
001A0368  bf4206f8  stur     xzr, [x21, #0x64]
001A036C  09810191  add      x9, x8, #0x60
001A0370  08410091  add      x8, x8, #0x10
001A0374  bfc206f8  stur     xzr, [x21, #0x6c]
001A0378  bf4207f8  stur     xzr, [x21, #0x74]
001A037C  bfc207f8  stur     xzr, [x21, #0x7c]
001A0380  bf4208f8  stur     xzr, [x21, #0x84]
001A0384  bfc208f8  stur     xzr, [x21, #0x8c]
001A0388  bf4209f8  stur     xzr, [x21, #0x94]
001A038C  bfc209f8  stur     xzr, [x21, #0x9c]
001A0390  bf420af8  stur     xzr, [x21, #0xa4]
001A0394  bfc20af8  stur     xzr, [x21, #0xac]
001A0398  bf420bf8  stur     xzr, [x21, #0xb4]
001A039C  bfc20bf8  stur     xzr, [x21, #0xbc]
001A03A0  098c04f8  str      x9, [x0, #0x48]!
001A03A4  e90315aa  mov      x9, x21
001A03A8  bf420cf8  stur     xzr, [x21, #0xc4]
001A03AC  bfc20cf8  stur     xzr, [x21, #0xcc]
001A03B0  3f4d05f8  str      xzr, [x9, #0x54]!
001A03B4  3f7900f9  str      xzr, [x9, #0xf0]
001A03B8  bf420df8  stur     xzr, [x21, #0xd4]
001A03BC  bfc20df8  stur     xzr, [x21, #0xdc]
001A03C0  bf420ef8  stur     xzr, [x21, #0xe4]
001A03C4  bfc20ef8  stur     xzr, [x21, #0xec]
001A03C8  bf420ff8  stur     xzr, [x21, #0xf4]
001A03CC  bfc20ff8  stur     xzr, [x21, #0xfc]
001A03D0  3f7d0ba9  stp      xzr, xzr, [x9, #0xb0]
001A03D4  3f7d0ca9  stp      xzr, xzr, [x9, #0xc0]
001A03D8  3f7d0da9  stp      xzr, xzr, [x9, #0xd0]
001A03DC  3f7d0ea9  stp      xzr, xzr, [x9, #0xe0]
001A03E0  092a8052  mov      w9, #0x150
001A03E4  b52601a9  stp      x21, x9, [x21, #0x10]
001A03E8  09018052  mov      w9, #8
001A03EC  a91200f9  str      x9, [x21, #0x20]
001A03F0  a85200a9  stp      x8, x20, [x21]
001A03F4  084f40f9  ldr      x8, [x24, #0x98]
001A03F8  080500d1  sub      x8, x8, #1
001A03FC  084f00f9  str      x8, [x24, #0x98]
001A0400  080040f9  ldr      x8, [x0]
001A0404  080940f9  ldr      x8, [x8, #0x10]
001A0408  00013fd6  blr      x8
001A040C  609a40f9  ldr      x0, [x19, #0x130]
001A0410  800000b4  cbz      x0, #0x1a0420
001A0414  088c44f8  ldr      x8, [x0, #0x48]!
001A0418  080d40f9  ldr      x8, [x8, #0x18]
001A041C  00013fd6  blr      x8
001A0420  759a00f9  str      x21, [x19, #0x130]
001A0424  084f40f9  ldr      x8, [x24, #0x98]
001A0428  1f4100f1  cmp      x8, #0x10
001A042C  c03b0054  b.eq     #0x1a0ba4
001A0430  347b28f8  str      x20, [x25, x8, lsl #3]
001A0434  018b8052  mov      w1, #0x458
001A0438  084f40f9  ldr      x8, [x24, #0x98]
001A043C  e00314aa  mov      x0, x20
001A0440  02018052  mov      w2, #8
001A0444  08050091  add      x8, x8, #1
001A0448  084f00f9  str      x8, [x24, #0x98]
001A044C  880240f9  ldr      x8, [x20]
001A0450  080940f9  ldr      x8, [x8, #0x10]
001A0454  00013fd6  blr      x8
001A0458  803a00b4  cbz      x0, #0x1a0ba8
001A045C  1f1c00f9  str      xzr, [x0, #0x38]
001A0460  083000d0  adrp     x8, #0x7a2000
001A0464  f50300aa  mov      x21, x0
001A0468  089541f9  ldr      x8, [x8, #0x328]
001A046C  1f4000b9  str      wzr, [x0, #0x40]
001A0470  f60300aa  mov      x22, x0
001A0474  1f1400f9  str      xzr, [x0, #0x28]
001A0478  e1031f2a  mov      w1, wzr
001A047C  02808052  mov      w2, #0x400
001A0480  1f3000b9  str      wzr, [x0, #0x30]
001A0484  09810191  add      x9, x8, #0x60
001A0488  08410091  add      x8, x8, #0x10
001A048C  1f5000b9  str      wzr, [x0, #0x50]
001A0490  088405f8  str      x8, [x0], #0x58
001A0494  c98e04f8  str      x9, [x22, #0x48]!
001A0498  2e571194  bl       #0x5f6150
001A049C  088b8052  mov      w8, #0x458
001A04A0  09018052  mov      w9, #8
001A04A4  e00316aa  mov      x0, x22
001A04A8  b4d600a9  stp      x20, x21, [x21, #8]
001A04AC  a8a601a9  stp      x8, x9, [x21, #0x18]
001A04B0  084f40f9  ldr      x8, [x24, #0x98]
001A04B4  080500d1  sub      x8, x8, #1
001A04B8  084f00f9  str      x8, [x24, #0x98]
001A04BC  c80240f9  ldr      x8, [x22]
001A04C0  080940f9  ldr      x8, [x8, #0x10]
001A04C4  00013fd6  blr      x8
001A04C8  609e40f9  ldr      x0, [x19, #0x138]
001A04CC  800000b4  cbz      x0, #0x1a04dc
001A04D0  088c44f8  ldr      x8, [x0, #0x48]!
001A04D4  080d40f9  ldr      x8, [x8, #0x18]
001A04D8  00013fd6  blr      x8
001A04DC  759e00f9  str      x21, [x19, #0x138]
001A04E0  084f40f9  ldr      x8, [x24, #0x98]
001A04E4  1f4100f1  cmp      x8, #0x10
001A04E8  e0350054  b.eq     #0x1a0ba4
001A04EC  347b28f8  str      x20, [x25, x8, lsl #3]
001A04F0  01ec8252  mov      w1, #0x1760
001A04F4  084f40f9  ldr      x8, [x24, #0x98]
001A04F8  e00314aa  mov      x0, x20
001A04FC  02018052  mov      w2, #8
001A0500  08050091  add      x8, x8, #1
001A0504  084f00f9  str      x8, [x24, #0x98]
001A0508  880240f9  ldr      x8, [x20]
001A050C  080940f9  ldr      x8, [x8, #0x10]
001A0510  00013fd6  blr      x8
001A0514  a03400b4  cbz      x0, #0x1a0ba8
001A0518  1f5000b9  str      wzr, [x0, #0x50]
001A051C  083000d0  adrp     x8, #0x7a2000
001A0520  f50300aa  mov      x21, x0
001A0524  089941f9  ldr      x8, [x8, #0x330]
001A0528  1ffc02a9  stp      xzr, xzr, [x0, #0x28]
001A052C  f60300aa  mov      x22, x0
001A0530  82e18252  mov      w2, #0x170c
001A0534  e1031f2a  mov      w1, wzr
001A0538  1ffc03a9  stp      xzr, xzr, [x0, #0x38]
001A053C  09810191  add      x9, x8, #0x60
001A0540  08410091  add      x8, x8, #0x10
001A0544  084405f8  str      x8, [x0], #0x54
001A0548  c98e04f8  str      x9, [x22, #0x48]!
001A054C  01571194  bl       #0x5f6150
001A0550  08ec8252  mov      w8, #0x1760
001A0554  09018052  mov      w9, #8
001A0558  e00316aa  mov      x0, x22
001A055C  b4d600a9  stp      x20, x21, [x21, #8]
001A0560  a8a601a9  stp      x8, x9, [x21, #0x18]
001A0564  084f40f9  ldr      x8, [x24, #0x98]
001A0568  080500d1  sub      x8, x8, #1
001A056C  084f00f9  str      x8, [x24, #0x98]
001A0570  c80240f9  ldr      x8, [x22]
001A0574  080940f9  ldr      x8, [x8, #0x10]
001A0578  00013fd6  blr      x8
001A057C  60a240f9  ldr      x0, [x19, #0x140]
001A0580  800000b4  cbz      x0, #0x1a0590
001A0584  088c44f8  ldr      x8, [x0, #0x48]!
001A0588  080d40f9  ldr      x8, [x8, #0x18]
001A058C  00013fd6  blr      x8
001A0590  a8630091  add      x8, x29, #0x18
001A0594  e00314aa  mov      x0, x20
001A0598  75a200f9  str      x21, [x19, #0x140]
001A059C  17040094  bl       #0x1a15f8
001A05A0  60a640f9  ldr      x0, [x19, #0x148]
001A05A4  800000b4  cbz      x0, #0x1a05b4
001A05A8  088c44f8  ldr      x8, [x0, #0x48]!
001A05AC  080d40f9  ldr      x8, [x8, #0x18]
001A05B0  00013fd6  blr      x8
001A05B4  a80f40f9  ldr      x8, [x29, #0x18]
001A05B8  68a600f9  str      x8, [x19, #0x148]
001A05BC  742e40f9  ldr      x20, [x19, #0x58]
001A05C0  b40000b4  cbz      x20, #0x1a05d4
001A05C4  e00314aa  mov      x0, x20
001A05C8  088c44f8  ldr      x8, [x0, #0x48]!
001A05CC  080940f9  ldr      x8, [x8, #0x10]
001A05D0  00013fd6  blr      x8
001A05D4  60aa40f9  ldr      x0, [x19, #0x150]
001A05D8  74aa00f9  str      x20, [x19, #0x150]
001A05DC  800000b4  cbz      x0, #0x1a05ec
001A05E0  088c44f8  ldr      x8, [x0, #0x48]!
001A05E4  080d40f9  ldr      x8, [x8, #0x18]
001A05E8  00013fd6  blr      x8
001A05EC  743240f9  ldr      x20, [x19, #0x60]
001A05F0  b40000b4  cbz      x20, #0x1a0604
001A05F4  e00314aa  mov      x0, x20
001A05F8  088c44f8  ldr      x8, [x0, #0x48]!
001A05FC  080940f9  ldr      x8, [x8, #0x10]
001A0600  00013fd6  blr      x8
001A0604  60ae40f9  ldr      x0, [x19, #0x158]
001A0608  74ae00f9  str      x20, [x19, #0x158]
001A060C  800000b4  cbz      x0, #0x1a061c
001A0610  088c44f8  ldr      x8, [x0, #0x48]!
001A0614  080d40f9  ldr      x8, [x8, #0x18]
001A0618  00013fd6  blr      x8
001A061C  743640f9  ldr      x20, [x19, #0x68]
001A0620  b40000b4  cbz      x20, #0x1a0634
001A0624  e00314aa  mov      x0, x20
001A0628  088c44f8  ldr      x8, [x0, #0x48]!
001A062C  080940f9  ldr      x8, [x8, #0x10]
001A0630  00013fd6  blr      x8
001A0634  60b240f9  ldr      x0, [x19, #0x160]
001A0638  74b200f9  str      x20, [x19, #0x160]
001A063C  800000b4  cbz      x0, #0x1a064c
001A0640  088c44f8  ldr      x8, [x0, #0x48]!
001A0644  080d40f9  ldr      x8, [x8, #0x18]
001A0648  00013fd6  blr      x8
001A064C  743a40f9  ldr      x20, [x19, #0x70]
001A0650  b40000b4  cbz      x20, #0x1a0664
001A0654  e00314aa  mov      x0, x20
001A0658  088c44f8  ldr      x8, [x0, #0x48]!
001A065C  080940f9  ldr      x8, [x8, #0x10]
001A0660  00013fd6  blr      x8
001A0664  60b640f9  ldr      x0, [x19, #0x168]
001A0668  74b600f9  str      x20, [x19, #0x168]
001A066C  800000b4  cbz      x0, #0x1a067c
001A0670  088c44f8  ldr      x8, [x0, #0x48]!
001A0674  080d40f9  ldr      x8, [x8, #0x18]
001A0678  00013fd6  blr      x8
001A067C  743e40f9  ldr      x20, [x19, #0x78]
001A0680  b40000b4  cbz      x20, #0x1a0694
001A0684  e00314aa  mov      x0, x20
001A0688  088c44f8  ldr      x8, [x0, #0x48]!
001A068C  080940f9  ldr      x8, [x8, #0x10]
001A0690  00013fd6  blr      x8
001A0694  60ba40f9  ldr      x0, [x19, #0x170]
001A0698  74ba00f9  str      x20, [x19, #0x170]
001A069C  800000b4  cbz      x0, #0x1a06ac
001A06A0  088c44f8  ldr      x8, [x0, #0x48]!
001A06A4  080d40f9  ldr      x8, [x8, #0x18]
001A06A8  00013fd6  blr      x8
001A06AC  744240f9  ldr      x20, [x19, #0x80]
001A06B0  b40000b4  cbz      x20, #0x1a06c4
001A06B4  e00314aa  mov      x0, x20
001A06B8  088c44f8  ldr      x8, [x0, #0x48]!
001A06BC  080940f9  ldr      x8, [x8, #0x10]
001A06C0  00013fd6  blr      x8
001A06C4  60be40f9  ldr      x0, [x19, #0x178]
001A06C8  74be00f9  str      x20, [x19, #0x178]
001A06CC  800000b4  cbz      x0, #0x1a06dc
001A06D0  088c44f8  ldr      x8, [x0, #0x48]!
001A06D4  080d40f9  ldr      x8, [x8, #0x18]
001A06D8  00013fd6  blr      x8
001A06DC  744640f9  ldr      x20, [x19, #0x88]
001A06E0  b40000b4  cbz      x20, #0x1a06f4
001A06E4  e00314aa  mov      x0, x20
001A06E8  088c44f8  ldr      x8, [x0, #0x48]!
001A06EC  080940f9  ldr      x8, [x8, #0x10]
001A06F0  00013fd6  blr      x8
001A06F4  60c240f9  ldr      x0, [x19, #0x180]
001A06F8  74c200f9  str      x20, [x19, #0x180]
001A06FC  800000b4  cbz      x0, #0x1a070c
001A0700  088c44f8  ldr      x8, [x0, #0x48]!
001A0704  080d40f9  ldr      x8, [x8, #0x18]
001A0708  00013fd6  blr      x8
001A070C  744a40f9  ldr      x20, [x19, #0x90]
001A0710  b40000b4  cbz      x20, #0x1a0724
001A0714  e00314aa  mov      x0, x20
001A0718  088c44f8  ldr      x8, [x0, #0x48]!
001A071C  080940f9  ldr      x8, [x8, #0x10]
001A0720  00013fd6  blr      x8
001A0724  60c640f9  ldr      x0, [x19, #0x188]
001A0728  74c600f9  str      x20, [x19, #0x188]
001A072C  800000b4  cbz      x0, #0x1a073c
001A0730  088c44f8  ldr      x8, [x0, #0x48]!
001A0734  080d40f9  ldr      x8, [x8, #0x18]
001A0738  00013fd6  blr      x8
001A073C  744e40f9  ldr      x20, [x19, #0x98]
001A0740  b40000b4  cbz      x20, #0x1a0754
001A0744  e00314aa  mov      x0, x20
001A0748  088c44f8  ldr      x8, [x0, #0x48]!
001A074C  080940f9  ldr      x8, [x8, #0x10]
001A0750  00013fd6  blr      x8
001A0754  60ca40f9  ldr      x0, [x19, #0x190]
001A0758  74ca00f9  str      x20, [x19, #0x190]
001A075C  800000b4  cbz      x0, #0x1a076c
001A0760  088c44f8  ldr      x8, [x0, #0x48]!
001A0764  080d40f9  ldr      x8, [x8, #0x18]
001A0768  00013fd6  blr      x8
001A076C  745240f9  ldr      x20, [x19, #0xa0]
001A0770  b40000b4  cbz      x20, #0x1a0784
001A0774  e00314aa  mov      x0, x20
001A0778  088c44f8  ldr      x8, [x0, #0x48]!
001A077C  080940f9  ldr      x8, [x8, #0x10]
001A0780  00013fd6  blr      x8
001A0784  60ce40f9  ldr      x0, [x19, #0x198]
001A0788  74ce00f9  str      x20, [x19, #0x198]
001A078C  800000b4  cbz      x0, #0x1a079c
001A0790  088c44f8  ldr      x8, [x0, #0x48]!
001A0794  080d40f9  ldr      x8, [x8, #0x18]
001A0798  00013fd6  blr      x8
001A079C  745640f9  ldr      x20, [x19, #0xa8]
001A07A0  b40000b4  cbz      x20, #0x1a07b4
001A07A4  e00314aa  mov      x0, x20
001A07A8  088c44f8  ldr      x8, [x0, #0x48]!
001A07AC  080940f9  ldr      x8, [x8, #0x10]
001A07B0  00013fd6  blr      x8
001A07B4  60d240f9  ldr      x0, [x19, #0x1a0]
001A07B8  74d200f9  str      x20, [x19, #0x1a0]
001A07BC  800000b4  cbz      x0, #0x1a07cc
001A07C0  088c44f8  ldr      x8, [x0, #0x48]!
001A07C4  080d40f9  ldr      x8, [x8, #0x18]
001A07C8  00013fd6  blr      x8
001A07CC  745a40f9  ldr      x20, [x19, #0xb0]
001A07D0  b40000b4  cbz      x20, #0x1a07e4
001A07D4  e00314aa  mov      x0, x20
001A07D8  088c44f8  ldr      x8, [x0, #0x48]!
001A07DC  080940f9  ldr      x8, [x8, #0x10]
001A07E0  00013fd6  blr      x8
001A07E4  60d640f9  ldr      x0, [x19, #0x1a8]
001A07E8  74d600f9  str      x20, [x19, #0x1a8]
001A07EC  800000b4  cbz      x0, #0x1a07fc
001A07F0  088c44f8  ldr      x8, [x0, #0x48]!
001A07F4  080d40f9  ldr      x8, [x8, #0x18]
001A07F8  00013fd6  blr      x8
001A07FC  745e40f9  ldr      x20, [x19, #0xb8]
001A0800  b40000b4  cbz      x20, #0x1a0814
001A0804  e00314aa  mov      x0, x20
001A0808  088c44f8  ldr      x8, [x0, #0x48]!
001A080C  080940f9  ldr      x8, [x8, #0x10]
001A0810  00013fd6  blr      x8
001A0814  60da40f9  ldr      x0, [x19, #0x1b0]
001A0818  74da00f9  str      x20, [x19, #0x1b0]
001A081C  800000b4  cbz      x0, #0x1a082c
001A0820  088c44f8  ldr      x8, [x0, #0x48]!
001A0824  080d40f9  ldr      x8, [x8, #0x18]
001A0828  00013fd6  blr      x8
001A082C  746240f9  ldr      x20, [x19, #0xc0]
001A0830  b40000b4  cbz      x20, #0x1a0844
001A0834  e00314aa  mov      x0, x20
001A0838  088c44f8  ldr      x8, [x0, #0x48]!
001A083C  080940f9  ldr      x8, [x8, #0x10]
001A0840  00013fd6  blr      x8
001A0844  60de40f9  ldr      x0, [x19, #0x1b8]
001A0848  74de00f9  str      x20, [x19, #0x1b8]
001A084C  800000b4  cbz      x0, #0x1a085c
001A0850  088c44f8  ldr      x8, [x0, #0x48]!
001A0854  080d40f9  ldr      x8, [x8, #0x18]
001A0858  00013fd6  blr      x8
001A085C  746640f9  ldr      x20, [x19, #0xc8]
001A0860  b40000b4  cbz      x20, #0x1a0874
001A0864  e00314aa  mov      x0, x20
001A0868  088c44f8  ldr      x8, [x0, #0x48]!
001A086C  080940f9  ldr      x8, [x8, #0x10]
001A0870  00013fd6  blr      x8
001A0874  60e240f9  ldr      x0, [x19, #0x1c0]
001A0878  74e200f9  str      x20, [x19, #0x1c0]
001A087C  800000b4  cbz      x0, #0x1a088c
001A0880  088c44f8  ldr      x8, [x0, #0x48]!
001A0884  080d40f9  ldr      x8, [x8, #0x18]
001A0888  00013fd6  blr      x8
001A088C  746a40f9  ldr      x20, [x19, #0xd0]
001A0890  b40000b4  cbz      x20, #0x1a08a4
001A0894  e00314aa  mov      x0, x20
001A0898  088c44f8  ldr      x8, [x0, #0x48]!
001A089C  080940f9  ldr      x8, [x8, #0x10]
001A08A0  00013fd6  blr      x8
001A08A4  60e640f9  ldr      x0, [x19, #0x1c8]
001A08A8  74e600f9  str      x20, [x19, #0x1c8]
001A08AC  800000b4  cbz      x0, #0x1a08bc
001A08B0  088c44f8  ldr      x8, [x0, #0x48]!
001A08B4  080d40f9  ldr      x8, [x8, #0x18]
001A08B8  00013fd6  blr      x8
001A08BC  746e40f9  ldr      x20, [x19, #0xd8]
001A08C0  b40000b4  cbz      x20, #0x1a08d4
001A08C4  e00314aa  mov      x0, x20
001A08C8  088c44f8  ldr      x8, [x0, #0x48]!
001A08CC  080940f9  ldr      x8, [x8, #0x10]
001A08D0  00013fd6  blr      x8
001A08D4  60ea40f9  ldr      x0, [x19, #0x1d0]
001A08D8  74ea00f9  str      x20, [x19, #0x1d0]
001A08DC  800000b4  cbz      x0, #0x1a08ec
001A08E0  088c44f8  ldr      x8, [x0, #0x48]!
001A08E4  080d40f9  ldr      x8, [x8, #0x18]
001A08E8  00013fd6  blr      x8
001A08EC  747240f9  ldr      x20, [x19, #0xe0]
001A08F0  b40000b4  cbz      x20, #0x1a0904
001A08F4  e00314aa  mov      x0, x20
001A08F8  088c44f8  ldr      x8, [x0, #0x48]!
001A08FC  080940f9  ldr      x8, [x8, #0x10]
001A0900  00013fd6  blr      x8
001A0904  60ee40f9  ldr      x0, [x19, #0x1d8]
001A0908  74ee00f9  str      x20, [x19, #0x1d8]
001A090C  800000b4  cbz      x0, #0x1a091c
001A0910  088c44f8  ldr      x8, [x0, #0x48]!
001A0914  080d40f9  ldr      x8, [x8, #0x18]
001A0918  00013fd6  blr      x8
001A091C  747640f9  ldr      x20, [x19, #0xe8]
001A0920  b40000b4  cbz      x20, #0x1a0934
001A0924  e00314aa  mov      x0, x20
001A0928  088c44f8  ldr      x8, [x0, #0x48]!
001A092C  080940f9  ldr      x8, [x8, #0x10]
001A0930  00013fd6  blr      x8
001A0934  60f240f9  ldr      x0, [x19, #0x1e0]
001A0938  74f200f9  str      x20, [x19, #0x1e0]
001A093C  800000b4  cbz      x0, #0x1a094c
001A0940  088c44f8  ldr      x8, [x0, #0x48]!
001A0944  080d40f9  ldr      x8, [x8, #0x18]
001A0948  00013fd6  blr      x8
001A094C  747a40f9  ldr      x20, [x19, #0xf0]
001A0950  b40000b4  cbz      x20, #0x1a0964
001A0954  e00314aa  mov      x0, x20
001A0958  088c44f8  ldr      x8, [x0, #0x48]!
001A095C  080940f9  ldr      x8, [x8, #0x10]
001A0960  00013fd6  blr      x8
001A0964  60f640f9  ldr      x0, [x19, #0x1e8]
001A0968  74f600f9  str      x20, [x19, #0x1e8]
001A096C  800000b4  cbz      x0, #0x1a097c
001A0970  088c44f8  ldr      x8, [x0, #0x48]!
001A0974  080d40f9  ldr      x8, [x8, #0x18]
001A0978  00013fd6  blr      x8
001A097C  747e40f9  ldr      x20, [x19, #0xf8]
001A0980  b40000b4  cbz      x20, #0x1a0994
001A0984  e00314aa  mov      x0, x20
001A0988  088c44f8  ldr      x8, [x0, #0x48]!
001A098C  080940f9  ldr      x8, [x8, #0x10]
001A0990  00013fd6  blr      x8
001A0994  60fa40f9  ldr      x0, [x19, #0x1f0]
001A0998  74fa00f9  str      x20, [x19, #0x1f0]
001A099C  800000b4  cbz      x0, #0x1a09ac
001A09A0  088c44f8  ldr      x8, [x0, #0x48]!
001A09A4  080d40f9  ldr      x8, [x8, #0x18]
001A09A8  00013fd6  blr      x8
001A09AC  748240f9  ldr      x20, [x19, #0x100]
001A09B0  b40000b4  cbz      x20, #0x1a09c4
001A09B4  e00314aa  mov      x0, x20
001A09B8  088c44f8  ldr      x8, [x0, #0x48]!
001A09BC  080940f9  ldr      x8, [x8, #0x10]
001A09C0  00013fd6  blr      x8
001A09C4  60fe40f9  ldr      x0, [x19, #0x1f8]
001A09C8  74fe00f9  str      x20, [x19, #0x1f8]
001A09CC  800000b4  cbz      x0, #0x1a09dc
001A09D0  088c44f8  ldr      x8, [x0, #0x48]!
001A09D4  080d40f9  ldr      x8, [x8, #0x18]
001A09D8  00013fd6  blr      x8
001A09DC  748640f9  ldr      x20, [x19, #0x108]
001A09E0  b40000b4  cbz      x20, #0x1a09f4
001A09E4  e00314aa  mov      x0, x20
001A09E8  088c44f8  ldr      x8, [x0, #0x48]!
001A09EC  080940f9  ldr      x8, [x8, #0x10]
001A09F0  00013fd6  blr      x8
001A09F4  600241f9  ldr      x0, [x19, #0x200]
001A09F8  740201f9  str      x20, [x19, #0x200]
001A09FC  800000b4  cbz      x0, #0x1a0a0c
001A0A00  088c44f8  ldr      x8, [x0, #0x48]!
001A0A04  080d40f9  ldr      x8, [x8, #0x18]
001A0A08  00013fd6  blr      x8
001A0A0C  748a40f9  ldr      x20, [x19, #0x110]
001A0A10  b40000b4  cbz      x20, #0x1a0a24
001A0A14  e00314aa  mov      x0, x20
001A0A18  088c44f8  ldr      x8, [x0, #0x48]!
001A0A1C  080940f9  ldr      x8, [x8, #0x10]
001A0A20  00013fd6  blr      x8
001A0A24  600641f9  ldr      x0, [x19, #0x208]
001A0A28  740601f9  str      x20, [x19, #0x208]
001A0A2C  800000b4  cbz      x0, #0x1a0a3c
001A0A30  088c44f8  ldr      x8, [x0, #0x48]!
001A0A34  080d40f9  ldr      x8, [x8, #0x18]
001A0A38  00013fd6  blr      x8
001A0A3C  748e40f9  ldr      x20, [x19, #0x118]
001A0A40  b40000b4  cbz      x20, #0x1a0a54
001A0A44  e00314aa  mov      x0, x20
001A0A48  088c44f8  ldr      x8, [x0, #0x48]!
001A0A4C  080940f9  ldr      x8, [x8, #0x10]
001A0A50  00013fd6  blr      x8
001A0A54  600a41f9  ldr      x0, [x19, #0x210]
001A0A58  740a01f9  str      x20, [x19, #0x210]
001A0A5C  800000b4  cbz      x0, #0x1a0a6c
001A0A60  088c44f8  ldr      x8, [x0, #0x48]!
001A0A64  080d40f9  ldr      x8, [x8, #0x18]
001A0A68  00013fd6  blr      x8
001A0A6C  749240f9  ldr      x20, [x19, #0x120]
001A0A70  b40000b4  cbz      x20, #0x1a0a84
001A0A74  e00314aa  mov      x0, x20
001A0A78  088c44f8  ldr      x8, [x0, #0x48]!
001A0A7C  080940f9  ldr      x8, [x8, #0x10]
001A0A80  00013fd6  blr      x8
001A0A84  600e41f9  ldr      x0, [x19, #0x218]
001A0A88  740e01f9  str      x20, [x19, #0x218]
001A0A8C  800000b4  cbz      x0, #0x1a0a9c
001A0A90  088c44f8  ldr      x8, [x0, #0x48]!
001A0A94  080d40f9  ldr      x8, [x8, #0x18]
001A0A98  00013fd6  blr      x8
001A0A9C  749640f9  ldr      x20, [x19, #0x128]
001A0AA0  b40000b4  cbz      x20, #0x1a0ab4
001A0AA4  e00314aa  mov      x0, x20
001A0AA8  088c44f8  ldr      x8, [x0, #0x48]!
001A0AAC  080940f9  ldr      x8, [x8, #0x10]
001A0AB0  00013fd6  blr      x8
001A0AB4  601241f9  ldr      x0, [x19, #0x220]
001A0AB8  741201f9  str      x20, [x19, #0x220]
001A0ABC  800000b4  cbz      x0, #0x1a0acc
001A0AC0  088c44f8  ldr      x8, [x0, #0x48]!
001A0AC4  080d40f9  ldr      x8, [x8, #0x18]
001A0AC8  00013fd6  blr      x8
001A0ACC  749a40f9  ldr      x20, [x19, #0x130]
001A0AD0  b40000b4  cbz      x20, #0x1a0ae4
001A0AD4  e00314aa  mov      x0, x20
001A0AD8  088c44f8  ldr      x8, [x0, #0x48]!
001A0ADC  080940f9  ldr      x8, [x8, #0x10]
001A0AE0  00013fd6  blr      x8
001A0AE4  601641f9  ldr      x0, [x19, #0x228]
001A0AE8  741601f9  str      x20, [x19, #0x228]
001A0AEC  800000b4  cbz      x0, #0x1a0afc
001A0AF0  088c44f8  ldr      x8, [x0, #0x48]!
001A0AF4  080d40f9  ldr      x8, [x8, #0x18]
001A0AF8  00013fd6  blr      x8
001A0AFC  749e40f9  ldr      x20, [x19, #0x138]
001A0B00  b40000b4  cbz      x20, #0x1a0b14
001A0B04  e00314aa  mov      x0, x20
001A0B08  088c44f8  ldr      x8, [x0, #0x48]!
001A0B0C  080940f9  ldr      x8, [x8, #0x10]
001A0B10  00013fd6  blr      x8
001A0B14  601a41f9  ldr      x0, [x19, #0x230]
001A0B18  741a01f9  str      x20, [x19, #0x230]
001A0B1C  800000b4  cbz      x0, #0x1a0b2c
001A0B20  088c44f8  ldr      x8, [x0, #0x48]!
001A0B24  080d40f9  ldr      x8, [x8, #0x18]
001A0B28  00013fd6  blr      x8
001A0B2C  74a240f9  ldr      x20, [x19, #0x140]
001A0B30  b40000b4  cbz      x20, #0x1a0b44
001A0B34  e00314aa  mov      x0, x20
001A0B38  088c44f8  ldr      x8, [x0, #0x48]!
001A0B3C  080940f9  ldr      x8, [x8, #0x10]
001A0B40  00013fd6  blr      x8
001A0B44  601e41f9  ldr      x0, [x19, #0x238]
001A0B48  741e01f9  str      x20, [x19, #0x238]
001A0B4C  800000b4  cbz      x0, #0x1a0b5c
001A0B50  088c44f8  ldr      x8, [x0, #0x48]!
001A0B54  080d40f9  ldr      x8, [x8, #0x18]
001A0B58  00013fd6  blr      x8
001A0B5C  74a640f9  ldr      x20, [x19, #0x148]
001A0B60  b40000b4  cbz      x20, #0x1a0b74
001A0B64  e00314aa  mov      x0, x20
001A0B68  088c44f8  ldr      x8, [x0, #0x48]!
001A0B6C  080940f9  ldr      x8, [x8, #0x10]
001A0B70  00013fd6  blr      x8
001A0B74  602241f9  ldr      x0, [x19, #0x240]
001A0B78  742201f9  str      x20, [x19, #0x240]
001A0B7C  800000b4  cbz      x0, #0x1a0b8c
001A0B80  088c44f8  ldr      x8, [x0, #0x48]!
001A0B84  080d40f9  ldr      x8, [x8, #0x18]
001A0B88  00013fd6  blr      x8
001A0B8C  f44f44a9  ldp      x20, x19, [sp, #0x40]
001A0B90  f90b40f9  ldr      x25, [sp, #0x10]
001A0B94  f65743a9  ldp      x22, x21, [sp, #0x30]
001A0B98  f85f42a9  ldp      x24, x23, [sp, #0x20]
001A0B9C  fd7bc5a8  ldp      x29, x30, [sp], #0x50
001A0BA0  c0035fd6  ret      
001A0BA4  1b88f997  bl       #0x2c10
001A0BA8  880240f9  ldr      x8, [x20]
001A0BAC  e00314aa  mov      x0, x20
001A0BB0  085d40f9  ldr      x8, [x8, #0xb8]
001A0BB4  00013fd6  blr      x8
~~~
### bdsp_deserialize 0x1a17b0..0x1a1864 (45 instructions)
~~~asm
001A17B0  fd7bbca9  stp      x29, x30, [sp, #-0x40]!
001A17B4  f85f01a9  stp      x24, x23, [sp, #0x10]
001A17B8  f65702a9  stp      x22, x21, [sp, #0x20]
001A17BC  f44f03a9  stp      x20, x19, [sp, #0x30]
001A17C0  fd030091  mov      x29, sp
001A17C4  f40301aa  mov      x20, x1
001A17C8  f30300aa  mov      x19, x0
001A17CC  f7031faa  mov      x23, xzr
001A17D0  18400591  add      x24, x0, #0x150
001A17D4  17000014  b        #0x1a1830
001A17D8  1f2003d5  nop      
001A17DC  1f2003d5  nop      
001A17E0  a80240f9  ldr      x8, [x21]
001A17E4  e00315aa  mov      x0, x21
001A17E8  081940f9  ldr      x8, [x8, #0x30]
001A17EC  00013fd6  blr      x8
001A17F0  a80240f9  ldr      x8, [x21]
001A17F4  f60300aa  mov      x22, x0
001A17F8  e00315aa  mov      x0, x21
001A17FC  081540f9  ldr      x8, [x8, #0x28]
001A1800  00013fd6  blr      x8
001A1804  e10314aa  mov      x1, x20
001A1808  e20316aa  mov      x2, x22
001A180C  75531194  bl       #0x5f65e0
001A1810  a88e44f8  ldr      x8, [x21, #0x48]!
001A1814  94c2368b  add      x20, x20, w22, sxtw
001A1818  e00315aa  mov      x0, x21
001A181C  080d40f9  ldr      x8, [x8, #0x18]
001A1820  00013fd6  blr      x8
001A1824  f7220091  add      x23, x23, #8
001A1828  ffe203f1  cmp      x23, #0xf8
001A182C  00010054  b.eq     #0x1a184c
001A1830  156b77f8  ldr      x21, [x24, x23]
001A1834  75fdffb4  cbz      x21, #0x1a17e0
001A1838  e00315aa  mov      x0, x21
001A183C  088c44f8  ldr      x8, [x0, #0x48]!
001A1840  080940f9  ldr      x8, [x8, #0x10]
001A1844  00013fd6  blr      x8
001A1848  e6ffff17  b        #0x1a17e0
001A184C  604a40f9  ldr      x0, [x19, #0x90]
001A1850  f44f43a9  ldp      x20, x19, [sp, #0x30]
001A1854  f65742a9  ldp      x22, x21, [sp, #0x20]
001A1858  f85f41a9  ldp      x24, x23, [sp, #0x10]
001A185C  fd7bc4a8  ldp      x29, x30, [sp], #0x40
001A1860  6c040014  b        #0x1a2a10
~~~
### bdsp_box_ctor 0x1a2e18..0x1a2ea0 (34 instructions)
~~~asm
001A2E18  1f1c00f9  str      xzr, [x0, #0x38]
001A2E1C  292e00b0  adrp     x9, #0x767000
001A2E20  29611e91  add      x9, x9, #0x798
001A2E24  1f4000b9  str      wzr, [x0, #0x40]
001A2E28  48d03bd5  mrs      x8, tpidr_el0
001A2E2C  08c973f2  ands     x8, x8, #-0x2000
001A2E30  1f7c01a9  stp      xzr, xzr, [x0, #0x10]
001A2E34  29410091  add      x9, x9, #0x10
001A2E38  1f7c02a9  stp      xzr, xzr, [x0, #0x20]
001A2E3C  1f3000b9  str      wzr, [x0, #0x30]
001A2E40  090000f9  str      x9, [x0]
001A2E44  c0000054  b.eq     #0x1a2e5c
001A2E48  094d40f9  ldr      x9, [x8, #0x98]
001A2E4C  a90000b4  cbz      x9, #0x1a2e60
001A2E50  080d098b  add      x8, x8, x9, lsl #3
001A2E54  090940f9  ldr      x9, [x8, #0x10]
001A2E58  02000014  b        #0x1a2e60
001A2E5C  e9031faa  mov      x9, xzr
001A2E60  0a300090  adrp     x10, #0x7a2000
001A2E64  0b9b8952  mov      w11, #0x4cd8
001A2E68  cb00a072  movk     w11, #6, lsl #16
001A2E6C  4a2d41f9  ldr      x10, [x10, #0x258]
001A2E70  08500191  add      x8, x0, #0x54
001A2E74  1f5000b9  str      wzr, [x0, #0x50]
001A2E78  1f682bf8  str      xzr, [x0, x11]
001A2E7C  02908952  mov      w2, #0x4c80
001A2E80  c200a072  movk     w2, #6, lsl #16
001A2E84  e1031f2a  mov      w1, wzr
001A2E88  4b410091  add      x11, x10, #0x10
001A2E8C  4a810191  add      x10, x10, #0x60
001A2E90  0b2400a9  stp      x11, x9, [x0]
001A2E94  0a2400f9  str      x10, [x0, #0x48]
001A2E98  e00308aa  mov      x0, x8
001A2E9C  ad4c1114  b        #0x5f6150
~~~
### bdsp_box_allocate 0x1a0ed0..0x1a0fe0 (68 instructions)
~~~asm
001A0ED0  fd7bbca9  stp      x29, x30, [sp, #-0x40]!
001A0ED4  f70b00f9  str      x23, [sp, #0x10]
001A0ED8  f65702a9  stp      x22, x21, [sp, #0x20]
001A0EDC  f44f03a9  stp      x20, x19, [sp, #0x30]
001A0EE0  fd030091  mov      x29, sp
001A0EE4  f30308aa  mov      x19, x8
001A0EE8  48d03bd5  mrs      x8, tpidr_el0
001A0EEC  17c97392  and      x23, x8, #0xffffffffffffe000
001A0EF0  e84e40f9  ldr      x8, [x23, #0x98]
001A0EF4  1f4100f1  cmp      x8, #0x10
001A0EF8  20070054  b.eq     #0x1a0fdc
001A0EFC  e80e088b  add      x8, x23, x8, lsl #3
001A0F00  169c8952  mov      w22, #0x4ce0
001A0F04  d600a072  movk     w22, #6, lsl #16
001A0F08  e10316aa  mov      x1, x22
001A0F0C  02018052  mov      w2, #8
001A0F10  000d00f9  str      x0, [x8, #0x18]
001A0F14  f50300aa  mov      x21, x0
001A0F18  e84e40f9  ldr      x8, [x23, #0x98]
001A0F1C  08050091  add      x8, x8, #1
001A0F20  e84e00f9  str      x8, [x23, #0x98]
001A0F24  080040f9  ldr      x8, [x0]
001A0F28  080940f9  ldr      x8, [x8, #0x10]
001A0F2C  00013fd6  blr      x8
001A0F30  f40300aa  mov      x20, x0
001A0F34  600200b4  cbz      x0, #0x1a0f80
001A0F38  e00314aa  mov      x0, x20
001A0F3C  b7070094  bl       #0x1a2e18
001A0F40  08018052  mov      w8, #8
001A0F44  95d200a9  stp      x21, x20, [x20, #8]
001A0F48  e00314aa  mov      x0, x20
001A0F4C  96a201a9  stp      x22, x8, [x20, #0x18]
001A0F50  e84e40f9  ldr      x8, [x23, #0x98]
001A0F54  080500d1  sub      x8, x8, #1
001A0F58  e84e00f9  str      x8, [x23, #0x98]
001A0F5C  088c44f8  ldr      x8, [x0, #0x48]!
001A0F60  080940f9  ldr      x8, [x8, #0x10]
001A0F64  00013fd6  blr      x8
001A0F68  740200f9  str      x20, [x19]
001A0F6C  f44f43a9  ldp      x20, x19, [sp, #0x30]
001A0F70  f65742a9  ldp      x22, x21, [sp, #0x20]
001A0F74  f70b40f9  ldr      x23, [sp, #0x10]
001A0F78  fd7bc4a8  ldp      x29, x30, [sp], #0x40
001A0F7C  c0035fd6  ret      
001A0F80  a80240f9  ldr      x8, [x21]
001A0F84  e00315aa  mov      x0, x21
001A0F88  085d40f9  ldr      x8, [x8, #0xb8]
001A0F8C  00013fd6  blr      x8
001A0F90  e0031faa  mov      x0, xzr
001A0F94  a1070094  bl       #0x1a2e18
001A0F98  08018052  mov      w8, #8
001A0F9C  09028052  mov      w9, #0x10
001A0FA0  150100f9  str      x21, [x8]
001A0FA4  3f0100f9  str      xzr, [x9]
001A0FA8  09038052  mov      w9, #0x18
001A0FAC  360100f9  str      x22, [x9]
001A0FB0  09048052  mov      w9, #0x20
001A0FB4  280100f9  str      x8, [x9]
001A0FB8  e84e40f9  ldr      x8, [x23, #0x98]
001A0FBC  080500d1  sub      x8, x8, #1
001A0FC0  e84e00f9  str      x8, [x23, #0x98]
001A0FC4  740200f9  str      x20, [x19]
001A0FC8  f44f43a9  ldp      x20, x19, [sp, #0x30]
001A0FCC  f65742a9  ldp      x22, x21, [sp, #0x20]
001A0FD0  f70b40f9  ldr      x23, [sp, #0x10]
001A0FD4  fd7bc4a8  ldp      x29, x30, [sp], #0x40
001A0FD8  c0035fd6  ret      
001A0FDC  0d87f997  bl       #0x2c10
~~~
### lgpe_rebuild 0x2542d0..0x2546c8 (254 instructions)
~~~asm
002542D0  ff4302d1  sub      sp, sp, #0x90
002542D4  fd7b03a9  stp      x29, x30, [sp, #0x30]
002542D8  fc6f04a9  stp      x28, x27, [sp, #0x40]
002542DC  fa6705a9  stp      x26, x25, [sp, #0x50]
002542E0  f85f06a9  stp      x24, x23, [sp, #0x60]
002542E4  f65707a9  stp      x22, x21, [sp, #0x70]
002542E8  f44f08a9  stp      x20, x19, [sp, #0x80]
002542EC  fdc30091  add      x29, sp, #0x30
002542F0  a82300d1  sub      x8, x29, #8
002542F4  6b30ff97  bl       #0x2204a0
002542F8  a84300d1  sub      x8, x29, #0x10
002542FC  a9e4fe97  bl       #0x20d5a0
00254300  a0035ff8  ldur     x0, [x29, #-0x10]
00254304  185840f9  ldr      x24, [x0, #0xb0]
00254308  f80000b4  cbz      x24, #0x254324
0025430C  e00318aa  mov      x0, x24
00254310  088c44f8  ldr      x8, [x0, #0x48]!
00254314  080940f9  ldr      x8, [x8, #0x10]
00254318  00013fd6  blr      x8
0025431C  a0035ff8  ldur     x0, [x29, #-0x10]
00254320  800000b4  cbz      x0, #0x254330
00254324  080c45f8  ldr      x8, [x0, #0x50]!
00254328  080d40f9  ldr      x8, [x8, #0x18]
0025432C  00013fd6  blr      x8
00254330  682c00b0  adrp     x8, #0x7e1000
00254334  08611491  add      x8, x8, #0x518
00254338  080140f9  ldr      x8, [x8]
0025433C  085541f9  ldr      x8, [x8, #0x2a8]
00254340  e80700f9  str      x8, [sp, #8]
00254344  a84300d1  sub      x8, x29, #0x10
00254348  96e4fe97  bl       #0x20d5a0
0025434C  a0035ff8  ldur     x0, [x29, #-0x10]
00254350  145440f9  ldr      x20, [x0, #0xa8]
00254354  f40000b4  cbz      x20, #0x254370
00254358  e00314aa  mov      x0, x20
0025435C  088c44f8  ldr      x8, [x0, #0x48]!
00254360  080940f9  ldr      x8, [x8, #0x10]
00254364  00013fd6  blr      x8
00254368  a0035ff8  ldur     x0, [x29, #-0x10]
0025436C  800000b4  cbz      x0, #0x25437c
00254370  080c45f8  ldr      x8, [x0, #0x50]!
00254374  080d40f9  ldr      x8, [x8, #0x18]
00254378  00013fd6  blr      x8
0025437C  080340f9  ldr      x8, [x24]
00254380  e00318aa  mov      x0, x24
00254384  e10740f9  ldr      x1, [sp, #8]
00254388  081d40f9  ldr      x8, [x8, #0x38]
0025438C  00013fd6  blr      x8
00254390  a84300d1  sub      x8, x29, #0x10
00254394  9fc60079  strh     wzr, [x20, #0x62]
00254398  82e4fe97  bl       #0x20d5a0
0025439C  a8035ff8  ldur     x8, [x29, #-0x10]
002543A0  164940f9  ldr      x22, [x8, #0x90]
002543A4  b60000b4  cbz      x22, #0x2543b8
002543A8  e00316aa  mov      x0, x22
002543AC  088c44f8  ldr      x8, [x0, #0x48]!
002543B0  080940f9  ldr      x8, [x8, #0x10]
002543B4  00013fd6  blr      x8
002543B8  e00316aa  mov      x0, x22
002543BC  c1008052  mov      w1, #6
002543C0  9cf3fe97  bl       #0x211230
002543C4  c88e44f8  ldr      x8, [x22, #0x48]!
002543C8  e00316aa  mov      x0, x22
002543CC  080d40f9  ldr      x8, [x8, #0x18]
002543D0  00013fd6  blr      x8
002543D4  a0035ff8  ldur     x0, [x29, #-0x10]
002543D8  800000b4  cbz      x0, #0x2543e8
002543DC  080c45f8  ldr      x8, [x0, #0x50]!
002543E0  080d40f9  ldr      x8, [x8, #0x18]
002543E4  00013fd6  blr      x8
002543E8  fa031f2a  mov      w26, wzr
002543EC  9b520191  add      x27, x20, #0x54
002543F0  ff1700b9  str      wzr, [sp, #0x14]
002543F4  9c6a0191  add      x28, x20, #0x5a
002543F8  93620191  add      x19, x20, #0x58
002543FC  f80300f9  str      x24, [sp]
00254400  955a0191  add      x21, x20, #0x56
00254404  367d8052  mov      w22, #0x3e9
00254408  07000014  b        #0x254424
0025440C  1f2003d5  nop      
00254410  e81740b9  ldr      w8, [sp, #0x14]
00254414  08050011  add      w8, w8, #1
00254418  1f890071  cmp      w8, #0x22
0025441C  e81700b9  str      w8, [sp, #0x14]
00254420  80100054  b.eq     #0x254630
00254424  f7031f2a  mov      w23, wzr
00254428  05000014  b        #0x25443c
0025442C  1f2003d5  nop      
00254430  f7060011  add      w23, w23, #1
00254434  ff7a0071  cmp      w23, #0x1e
00254438  c0feff54  b.eq     #0x254410
0025443C  a0835ff8  ldur     x0, [x29, #-8]
00254440  a84300d1  sub      x8, x29, #0x10
00254444  e203172a  mov      w2, w23
00254448  e11740b9  ldr      w1, [sp, #0x14]
0025444C  e30740f9  ldr      x3, [sp, #8]
00254450  feaffe97  bl       #0x200448
00254454  a0035ff8  ldur     x0, [x29, #-0x10]
00254458  4cc8fe97  bl       #0x206588
0025445C  e803002a  mov      w8, w0
00254460  a0035ff8  ldur     x0, [x29, #-0x10]
00254464  c80d0037  tbnz     w8, #0, #0x25461c
00254468  d7c9fe97  bl       #0x206bc4
0025446C  e10300aa  mov      x1, x0
00254470  e00318aa  mov      x0, x24
00254474  70f4fe97  bl       #0x211634
00254478  a8035ff8  ldur     x8, [x29, #-0x10]
0025447C  183140f9  ldr      x24, [x8, #0x60]
00254480  9035ff97  bl       #0x221ac0
00254484  08919652  mov      w8, #0xb488
00254488  e800a072  movk     w8, #7, lsl #16
0025448C  086868f8  ldr      x8, [x0, x8]
00254490  1f0308eb  cmp      x24, x8
00254494  41000054  b.ne     #0x25449c
00254498  9ac20079  strh     w26, [x20, #0x60]
0025449C  f8031faa  mov      x24, xzr
002544A0  04000014  b        #0x2544b0
002544A4  18070091  add      x24, x24, #1
002544A8  1f1b00f1  cmp      x24, #6
002544AC  200b0054  b.eq     #0x254610
002544B0  8435ff97  bl       #0x221ac0
002544B4  080c188b  add      x8, x0, x24, lsl #3
002544B8  098b9652  mov      w9, #0xb458
002544BC  e900a072  movk     w9, #7, lsl #16
002544C0  086969f8  ldr      x8, [x8, x9]
002544C4  a9035ff8  ldur     x9, [x29, #-0x10]
002544C8  293140f9  ldr      x9, [x9, #0x60]
002544CC  1f0109eb  cmp      x8, x9
002544D0  a1feff54  b.ne     #0x2544a4
002544D4  7a7b3878  strh     w26, [x27, x24, lsl #1]
002544D8  88ba4079  ldrh     w8, [x20, #0x5c]
002544DC  1fa50f71  cmp      w8, #0x3e9
002544E0  00060054  b.eq     #0x2545a0
002544E4  88034079  ldrh     w8, [x28]
002544E8  1fa50f71  cmp      w8, #0x3e9
002544EC  60060054  b.eq     #0x2545b8
002544F0  68024079  ldrh     w8, [x19]
002544F4  1fa50f71  cmp      w8, #0x3e9
002544F8  c0060054  b.eq     #0x2545d0
002544FC  a8024079  ldrh     w8, [x21]
00254500  1fa50f71  cmp      w8, #0x3e9
00254504  60070054  b.eq     #0x2545f0
00254508  68034079  ldrh     w8, [x27]
0025450C  1fa50f71  cmp      w8, #0x3e9
00254510  c1000054  b.ne     #0x254528
00254514  a80240f9  ldr      x8, [x21]
00254518  a9124079  ldrh     w9, [x21, #8]
0025451C  96be0079  strh     w22, [x20, #0x5e]
00254520  69130079  strh     w9, [x27, #8]
00254524  680300f9  str      x8, [x27]
00254528  a8035ff8  ldur     x8, [x29, #-0x10]
0025452C  193140f9  ldr      x25, [x8, #0x60]
00254530  6435ff97  bl       #0x221ac0
00254534  08929652  mov      w8, #0xb490
00254538  e800a072  movk     w8, #7, lsl #16
0025453C  086868f8  ldr      x8, [x0, x8]
00254540  3f0308eb  cmp      x25, x8
00254544  01fbff54  b.ne     #0x2544a4
00254548  e8630091  add      x8, sp, #0x18
0025454C  15e4fe97  bl       #0x20d5a0
00254550  e80f40f9  ldr      x8, [sp, #0x18]
00254554  194940f9  ldr      x25, [x8, #0x90]
00254558  b90000b4  cbz      x25, #0x25456c
0025455C  e00319aa  mov      x0, x25
00254560  088c44f8  ldr      x8, [x0, #0x48]!
00254564  080940f9  ldr      x8, [x8, #0x10]
00254568  00013fd6  blr      x8
0025456C  e00319aa  mov      x0, x25
00254570  e103182a  mov      w1, w24
00254574  2ff3fe97  bl       #0x211230
00254578  288f44f8  ldr      x8, [x25, #0x48]!
0025457C  e00319aa  mov      x0, x25
00254580  080d40f9  ldr      x8, [x8, #0x18]
00254584  00013fd6  blr      x8
00254588  e00f40f9  ldr      x0, [sp, #0x18]
0025458C  c0f8ffb4  cbz      x0, #0x2544a4
00254590  080c45f8  ldr      x8, [x0, #0x50]!
00254594  080d40f9  ldr      x8, [x8, #0x18]
00254598  00013fd6  blr      x8
0025459C  c2ffff17  b        #0x2544a4
002545A0  88be4079  ldrh     w8, [x20, #0x5e]
002545A4  96be0079  strh     w22, [x20, #0x5e]
002545A8  88ba0079  strh     w8, [x20, #0x5c]
002545AC  88034079  ldrh     w8, [x28]
002545B0  1fa50f71  cmp      w8, #0x3e9
002545B4  e1f9ff54  b.ne     #0x2544f0
002545B8  885e40b9  ldr      w8, [x20, #0x5c]
002545BC  96be0079  strh     w22, [x20, #0x5e]
002545C0  88a205b8  stur     w8, [x20, #0x5a]
002545C4  68024079  ldrh     w8, [x19]
002545C8  1fa50f71  cmp      w8, #0x3e9
002545CC  81f9ff54  b.ne     #0x2544fc
002545D0  880340b9  ldr      w8, [x28]
002545D4  890b4079  ldrh     w9, [x28, #4]
002545D8  96be0079  strh     w22, [x20, #0x5e]
002545DC  690a0079  strh     w9, [x19, #4]
002545E0  680200b9  str      w8, [x19]
002545E4  a8024079  ldrh     w8, [x21]
002545E8  1fa50f71  cmp      w8, #0x3e9
002545EC  e1f8ff54  b.ne     #0x254508
002545F0  882e40f9  ldr      x8, [x20, #0x58]
002545F4  96be0079  strh     w22, [x20, #0x5e]
002545F8  886205f8  stur     x8, [x20, #0x56]
002545FC  68034079  ldrh     w8, [x27]
00254600  1fa50f71  cmp      w8, #0x3e9
00254604  80f8ff54  b.eq     #0x254514
00254608  c8ffff17  b        #0x254528
0025460C  1f2003d5  nop      
00254610  a0035ff8  ldur     x0, [x29, #-0x10]
00254614  5a070011  add      w26, w26, #1
00254618  f80340f9  ldr      x24, [sp]
0025461C  a0f0ffb4  cbz      x0, #0x254430
00254620  088c44f8  ldr      x8, [x0, #0x48]!
00254624  080d40f9  ldr      x8, [x8, #0x18]
00254628  00013fd6  blr      x8
0025462C  81ffff17  b        #0x254430
00254630  e00318aa  mov      x0, x24
00254634  b7f4fe97  bl       #0x211910
00254638  06e0fe97  bl       #0x20c650
0025463C  a04300d1  sub      x0, x29, #0x10
00254640  78e1fe97  bl       #0x20cc20
00254644  00010036  tbz      w0, #0, #0x254664
00254648  15488852  mov      w21, #0x4240
0025464C  f501a072  movk     w21, #0xf, lsl #16
00254650  e00315aa  mov      x0, x21
00254654  3f870e94  bl       #0x5f6350
00254658  a04300d1  sub      x0, x29, #0x10
0025465C  71e1fe97  bl       #0x20cc20
00254660  80ff0737  tbnz     w0, #0, #0x254650
00254664  b3035fb8  ldur     w19, [x29, #-0x10]
00254668  b40000b4  cbz      x20, #0x25467c
0025466C  888e44f8  ldr      x8, [x20, #0x48]!
00254670  e00314aa  mov      x0, x20
00254674  080d40f9  ldr      x8, [x8, #0x18]
00254678  00013fd6  blr      x8
0025467C  088f44f8  ldr      x8, [x24, #0x48]!
00254680  e00318aa  mov      x0, x24
00254684  080d40f9  ldr      x8, [x8, #0x18]
00254688  00013fd6  blr      x8
0025468C  a0835ff8  ldur     x0, [x29, #-8]
00254690  800000b4  cbz      x0, #0x2546a0
00254694  088c44f8  ldr      x8, [x0, #0x48]!
00254698  080d40f9  ldr      x8, [x8, #0x18]
0025469C  00013fd6  blr      x8
002546A0  7f020071  cmp      w19, #0
002546A4  f44f48a9  ldp      x20, x19, [sp, #0x80]
002546A8  f65747a9  ldp      x22, x21, [sp, #0x70]
002546AC  e0179f1a  cset     w0, eq
002546B0  f85f46a9  ldp      x24, x23, [sp, #0x60]
002546B4  fa6745a9  ldp      x26, x25, [sp, #0x50]
002546B8  fc6f44a9  ldp      x28, x27, [sp, #0x40]
002546BC  fd7b43a9  ldp      x29, x30, [sp, #0x30]
002546C0  ff430291  add      sp, sp, #0x90
002546C4  c0035fd6  ret      
~~~
### za_rebuild 0x1ca8d0..0x1cae6c (359 instructions)
~~~asm
001CA8D0  ff8302d1  sub      sp, sp, #0xa0
001CA8D4  fd7b04a9  stp      x29, x30, [sp, #0x40]
001CA8D8  fc6f05a9  stp      x28, x27, [sp, #0x50]
001CA8DC  fa6706a9  stp      x26, x25, [sp, #0x60]
001CA8E0  f85f07a9  stp      x24, x23, [sp, #0x70]
001CA8E4  f65708a9  stp      x22, x21, [sp, #0x80]
001CA8E8  f44f09a9  stp      x20, x19, [sp, #0x90]
001CA8EC  fd030191  add      x29, sp, #0x40
001CA8F0  a84300d1  sub      x8, x29, #0x10
001CA8F4  f303002a  mov      w19, w0
001CA8F8  ea560194  bl       #0x2204a0
001CA8FC  11990094  bl       #0x1f0d40
001CA900  a82e00b0  adrp     x8, #0x79f000
001CA904  f40300aa  mov      x20, x0
001CA908  08ed41f9  ldr      x8, [x8, #0x3d8]
001CA90C  a16300d1  sub      x1, x29, #0x18
001CA910  080140f9  ldr      x8, [x8]
001CA914  005541f9  ldr      x0, [x8, #0x2a8]
001CA918  e8830091  add      x8, sp, #0x20
001CA91C  a0831ef8  stur     x0, [x29, #-0x18]
001CA920  6362ff97  bl       #0x1a32ac
001CA924  141200b4  cbz      x20, #0x1cab64
001CA928  a8035ff8  ldur     x8, [x29, #-0x10]
001CA92C  89fb8152  mov      w9, #0xfdc
001CA930  090ea072  movk     w9, #0x70, lsl #16
001CA934  086969b8  ldr      w8, [x8, x9]
001CA938  1f050071  cmp      w8, #1
001CA93C  e80300b9  str      w8, [sp]
001CA940  2b110054  b.lt     #0x1cab64
001CA944  48d03bd5  mrs      x8, tpidr_el0
001CA948  f5031f2a  mov      w21, wzr
001CA94C  1c0f8052  mov      w28, #0x78
001CA950  1bc97392  and      x27, x8, #0xffffffffffffe000
001CA954  1a018052  mov      w26, #8
001CA958  06000014  b        #0x1ca970
001CA95C  1f2003d5  nop      
001CA960  e80340b9  ldr      w8, [sp]
001CA964  b5060011  add      w21, w21, #1
001CA968  bf02086b  cmp      w21, w8
001CA96C  c00f0054  b.eq     #0x1cab64
001CA970  f6031f2a  mov      w22, wzr
001CA974  06000014  b        #0x1ca98c
001CA978  1f2003d5  nop      
001CA97C  1f2003d5  nop      
001CA980  d6060011  add      w22, w22, #1
001CA984  df7a0071  cmp      w22, #0x1e
001CA988  c0feff54  b.eq     #0x1ca960
001CA98C  a3835ef8  ldur     x3, [x29, #-0x18]
001CA990  e00314aa  mov      x0, x20
001CA994  e103152a  mov      w1, w21
001CA998  e203162a  mov      w2, w22
001CA99C  3f770094  bl       #0x1e8698
001CA9A0  a3837ea9  ldp      x3, x0, [x29, #-0x18]
001CA9A4  e8630091  add      x8, sp, #0x18
001CA9A8  e103152a  mov      w1, w21
001CA9AC  e203162a  mov      w2, w22
001CA9B0  a6d60094  bl       #0x200448
001CA9B4  e00f40f9  ldr      x0, [sp, #0x18]
001CA9B8  f4ee0094  bl       #0x206588
001CA9BC  a00b0037  tbnz     w0, #0, #0x1cab30
001CA9C0  e00f40f9  ldr      x0, [sp, #0x18]
001CA9C4  b7835ef8  ldur     x23, [x29, #-0x18]
001CA9C8  7ff00094  bl       #0x206bc4
001CA9CC  684f40f9  ldr      x8, [x27, #0x98]
001CA9D0  1f4100f1  cmp      x8, #0x10
001CA9D4  a0240054  b.eq     #0x1cae68
001CA9D8  680f088b  add      x8, x27, x8, lsl #3
001CA9DC  f90300aa  mov      x25, x0
001CA9E0  e00317aa  mov      x0, x23
001CA9E4  010f8052  mov      w1, #0x78
001CA9E8  02018052  mov      w2, #8
001CA9EC  170d00f9  str      x23, [x8, #0x18]
001CA9F0  684f40f9  ldr      x8, [x27, #0x98]
001CA9F4  08050091  add      x8, x8, #1
001CA9F8  684f00f9  str      x8, [x27, #0x98]
001CA9FC  e80240f9  ldr      x8, [x23]
001CAA00  080940f9  ldr      x8, [x8, #0x10]
001CAA04  00013fd6  blr      x8
001CAA08  f80300aa  mov      x24, x0
001CAA0C  e00900b4  cbz      x0, #0x1cab48
001CAA10  b9831ff8  stur     x25, [x29, #-8]
001CAA14  b90000b4  cbz      x25, #0x1caa28
001CAA18  288f44f8  ldr      x8, [x25, #0x48]!
001CAA1C  e00319aa  mov      x0, x25
001CAA20  080940f9  ldr      x8, [x8, #0x10]
001CAA24  00013fd6  blr      x8
001CAA28  a12300d1  sub      x1, x29, #8
001CAA2C  e00318aa  mov      x0, x24
001CAA30  03800094  bl       #0x1eaa3c
001CAA34  a0835ff8  ldur     x0, [x29, #-8]
001CAA38  800000b4  cbz      x0, #0x1caa48
001CAA3C  088c44f8  ldr      x8, [x0, #0x48]!
001CAA40  080d40f9  ldr      x8, [x8, #0x18]
001CAA44  00013fd6  blr      x8
001CAA48  17e300a9  stp      x23, x24, [x24, #8]
001CAA4C  f70318aa  mov      x23, x24
001CAA50  1ceb01a9  stp      x28, x26, [x24, #0x18]
001CAA54  684f40f9  ldr      x8, [x27, #0x98]
001CAA58  080500d1  sub      x8, x8, #1
001CAA5C  684f00f9  str      x8, [x27, #0x98]
001CAA60  e88e44f8  ldr      x8, [x23, #0x48]!
001CAA64  e00317aa  mov      x0, x23
001CAA68  080940f9  ldr      x8, [x8, #0x10]
001CAA6C  00013fd6  blr      x8
001CAA70  e80240f9  ldr      x8, [x23]
001CAA74  e00317aa  mov      x0, x23
001CAA78  f80b00f9  str      x24, [sp, #0x10]
001CAA7C  080940f9  ldr      x8, [x8, #0x10]
001CAA80  00013fd6  blr      x8
001CAA84  e1430091  add      x1, sp, #0x10
001CAA88  e00314aa  mov      x0, x20
001CAA8C  e203152a  mov      w2, w21
001CAA90  e303162a  mov      w3, w22
001CAA94  24008052  mov      w4, #1
001CAA98  45770094  bl       #0x1e87ac
001CAA9C  e00b40f9  ldr      x0, [sp, #0x10]
001CAAA0  a00000b4  cbz      x0, #0x1caab4
001CAAA4  088c44f8  ldr      x8, [x0, #0x48]!
001CAAA8  080d40f9  ldr      x8, [x8, #0x18]
001CAAAC  00013fd6  blr      x8
001CAAB0  ff0b00f9  str      xzr, [sp, #0x10]
001CAAB4  73030036  tbz      w19, #0, #0x1cab20
001CAAB8  a0035ff8  ldur     x0, [x29, #-0x10]
001CAABC  e103152a  mov      w1, w21
001CAAC0  e203162a  mov      w2, w22
001CAAC4  74e40094  bl       #0x203c94
001CAAC8  c0020036  tbz      w0, #0, #0x1cab20
001CAACC  e01340f9  ldr      x0, [sp, #0x20]
001CAAD0  e00700f9  str      x0, [sp, #8]
001CAAD4  800000b4  cbz      x0, #0x1caae4
001CAAD8  088c44f8  ldr      x8, [x0, #0x48]!
001CAADC  080940f9  ldr      x8, [x8, #0x10]
001CAAE0  00013fd6  blr      x8
001CAAE4  e80f40f9  ldr      x8, [sp, #0x18]
001CAAE8  e1230091  add      x1, sp, #8
001CAAEC  e00314aa  mov      x0, x20
001CAAF0  e203152a  mov      w2, w21
001CAAF4  e303162a  mov      w3, w22
001CAAF8  04810191  add      x4, x8, #0x60
001CAAFC  74790094  bl       #0x1e90cc
001CAB00  e00740f9  ldr      x0, [sp, #8]
001CAB04  e00000b4  cbz      x0, #0x1cab20
001CAB08  088c44f8  ldr      x8, [x0, #0x48]!
001CAB0C  080d40f9  ldr      x8, [x8, #0x18]
001CAB10  00013fd6  blr      x8
001CAB14  ff0700f9  str      xzr, [sp, #8]
001CAB18  1f2003d5  nop      
001CAB1C  1f2003d5  nop      
001CAB20  e80240f9  ldr      x8, [x23]
001CAB24  e00317aa  mov      x0, x23
001CAB28  080d40f9  ldr      x8, [x8, #0x18]
001CAB2C  00013fd6  blr      x8
001CAB30  e00f40f9  ldr      x0, [sp, #0x18]
001CAB34  60f2ffb4  cbz      x0, #0x1ca980
001CAB38  088c44f8  ldr      x8, [x0, #0x48]!
001CAB3C  080d40f9  ldr      x8, [x8, #0x18]
001CAB40  00013fd6  blr      x8
001CAB44  8fffff17  b        #0x1ca980
001CAB48  e80240f9  ldr      x8, [x23]
001CAB4C  e00317aa  mov      x0, x23
001CAB50  085d40f9  ldr      x8, [x8, #0xb8]
001CAB54  00013fd6  blr      x8
001CAB58  b9831ff8  stur     x25, [x29, #-8]
001CAB5C  f9f5ffb5  cbnz     x25, #0x1caa18
001CAB60  b2ffff17  b        #0x1caa28
001CAB64  53980094  bl       #0x1f0cb0
001CAB68  e1031f2a  mov      w1, wzr
001CAB6C  f30300aa  mov      x19, x0
001CAB70  ae620094  bl       #0x1e3628
001CAB74  60030034  cbz      w0, #0x1cabe0
001CAB78  f4031faa  mov      x20, xzr
001CAB7C  f503002a  mov      w21, w0
001CAB80  16b49952  mov      w22, #0xcda0
001CAB84  f600a072  movk     w22, #7, lsl #16
001CAB88  1f2003d5  nop      
001CAB8C  1f2003d5  nop      
001CAB90  cc5b0194  bl       #0x221ac0
001CAB94  080c148b  add      x8, x0, x20, lsl #3
001CAB98  a0035ff8  ldur     x0, [x29, #-0x10]
001CAB9C  a12300d1  sub      x1, x29, #8
001CABA0  e2630091  add      x2, sp, #0x18
001CABA4  e3130091  add      x3, sp, #4
001CABA8  ff0700b9  str      wzr, [sp, #4]
001CABAC  086976f8  ldr      x8, [x8, x22]
001CABB0  ff1b00b9  str      wzr, [sp, #0x18]
001CABB4  a8831ff8  stur     x8, [x29, #-8]
001CABB8  48e40094  bl       #0x203cd8
001CABBC  e31b40b9  ldr      w3, [sp, #0x18]
001CABC0  e00313aa  mov      x0, x19
001CABC4  e1031f2a  mov      w1, wzr
001CABC8  e40740b9  ldr      w4, [sp, #4]
001CABCC  e203142a  mov      w2, w20
001CABD0  da650094  bl       #0x1e4338
001CABD4  94060091  add      x20, x20, #1
001CABD8  bf0214eb  cmp      x21, x20
001CABDC  a1fdff54  b.ne     #0x1cab90
001CABE0  e00313aa  mov      x0, x19
001CABE4  21008052  mov      w1, #1
001CABE8  90620094  bl       #0x1e3628
001CABEC  20030034  cbz      w0, #0x1cac50
001CABF0  f4031faa  mov      x20, xzr
001CABF4  f503002a  mov      w21, w0
001CABF8  16ba9952  mov      w22, #0xcdd0
001CABFC  f600a072  movk     w22, #7, lsl #16
001CAC00  b05b0194  bl       #0x221ac0
001CAC04  080c148b  add      x8, x0, x20, lsl #3
001CAC08  a0035ff8  ldur     x0, [x29, #-0x10]
001CAC0C  a12300d1  sub      x1, x29, #8
001CAC10  e2630091  add      x2, sp, #0x18
001CAC14  e3130091  add      x3, sp, #4
001CAC18  ff0700b9  str      wzr, [sp, #4]
001CAC1C  086976f8  ldr      x8, [x8, x22]
001CAC20  ff1b00b9  str      wzr, [sp, #0x18]
001CAC24  a8831ff8  stur     x8, [x29, #-8]
001CAC28  2ce40094  bl       #0x203cd8
001CAC2C  e31b40b9  ldr      w3, [sp, #0x18]
001CAC30  e00313aa  mov      x0, x19
001CAC34  21008052  mov      w1, #1
001CAC38  e40740b9  ldr      w4, [sp, #4]
001CAC3C  e203142a  mov      w2, w20
001CAC40  be650094  bl       #0x1e4338
001CAC44  94060091  add      x20, x20, #1
001CAC48  bf0214eb  cmp      x21, x20
001CAC4C  a1fdff54  b.ne     #0x1cac00
001CAC50  e00313aa  mov      x0, x19
001CAC54  41008052  mov      w1, #2
001CAC58  74620094  bl       #0x1e3628
001CAC5C  20030034  cbz      w0, #0x1cacc0
001CAC60  f4031faa  mov      x20, xzr
001CAC64  f503002a  mov      w21, w0
001CAC68  16c09952  mov      w22, #0xce00
001CAC6C  f600a072  movk     w22, #7, lsl #16
001CAC70  945b0194  bl       #0x221ac0
001CAC74  080c148b  add      x8, x0, x20, lsl #3
001CAC78  a0035ff8  ldur     x0, [x29, #-0x10]
001CAC7C  a12300d1  sub      x1, x29, #8
001CAC80  e2630091  add      x2, sp, #0x18
001CAC84  e3130091  add      x3, sp, #4
001CAC88  ff0700b9  str      wzr, [sp, #4]
001CAC8C  086976f8  ldr      x8, [x8, x22]
001CAC90  ff1b00b9  str      wzr, [sp, #0x18]
001CAC94  a8831ff8  stur     x8, [x29, #-8]
001CAC98  10e40094  bl       #0x203cd8
001CAC9C  e31b40b9  ldr      w3, [sp, #0x18]
001CACA0  e00313aa  mov      x0, x19
001CACA4  41008052  mov      w1, #2
001CACA8  e40740b9  ldr      w4, [sp, #4]
001CACAC  e203142a  mov      w2, w20
001CACB0  a2650094  bl       #0x1e4338
001CACB4  94060091  add      x20, x20, #1
001CACB8  bf0214eb  cmp      x21, x20
001CACBC  a1fdff54  b.ne     #0x1cac70
001CACC0  e00313aa  mov      x0, x19
001CACC4  61008052  mov      w1, #3
001CACC8  58620094  bl       #0x1e3628
001CACCC  20030034  cbz      w0, #0x1cad30
001CACD0  f4031faa  mov      x20, xzr
001CACD4  f503002a  mov      w21, w0
001CACD8  16c69952  mov      w22, #0xce30
001CACDC  f600a072  movk     w22, #7, lsl #16
001CACE0  785b0194  bl       #0x221ac0
001CACE4  080c148b  add      x8, x0, x20, lsl #3
001CACE8  a0035ff8  ldur     x0, [x29, #-0x10]
001CACEC  a12300d1  sub      x1, x29, #8
001CACF0  e2630091  add      x2, sp, #0x18
001CACF4  e3130091  add      x3, sp, #4
001CACF8  ff0700b9  str      wzr, [sp, #4]
001CACFC  086976f8  ldr      x8, [x8, x22]
001CAD00  ff1b00b9  str      wzr, [sp, #0x18]
001CAD04  a8831ff8  stur     x8, [x29, #-8]
001CAD08  f4e30094  bl       #0x203cd8
001CAD0C  e31b40b9  ldr      w3, [sp, #0x18]
001CAD10  e00313aa  mov      x0, x19
001CAD14  61008052  mov      w1, #3
001CAD18  e40740b9  ldr      w4, [sp, #4]
001CAD1C  e203142a  mov      w2, w20
001CAD20  86650094  bl       #0x1e4338
001CAD24  94060091  add      x20, x20, #1
001CAD28  bf0214eb  cmp      x21, x20
001CAD2C  a1fdff54  b.ne     #0x1cace0
001CAD30  e00313aa  mov      x0, x19
001CAD34  81008052  mov      w1, #4
001CAD38  3c620094  bl       #0x1e3628
001CAD3C  20030034  cbz      w0, #0x1cada0
001CAD40  f4031faa  mov      x20, xzr
001CAD44  f503002a  mov      w21, w0
001CAD48  16cc9952  mov      w22, #0xce60
001CAD4C  f600a072  movk     w22, #7, lsl #16
001CAD50  5c5b0194  bl       #0x221ac0
001CAD54  080c148b  add      x8, x0, x20, lsl #3
001CAD58  a0035ff8  ldur     x0, [x29, #-0x10]
001CAD5C  a12300d1  sub      x1, x29, #8
001CAD60  e2630091  add      x2, sp, #0x18
001CAD64  e3130091  add      x3, sp, #4
001CAD68  ff0700b9  str      wzr, [sp, #4]
001CAD6C  086976f8  ldr      x8, [x8, x22]
001CAD70  ff1b00b9  str      wzr, [sp, #0x18]
001CAD74  a8831ff8  stur     x8, [x29, #-8]
001CAD78  d8e30094  bl       #0x203cd8
001CAD7C  e31b40b9  ldr      w3, [sp, #0x18]
001CAD80  e00313aa  mov      x0, x19
001CAD84  81008052  mov      w1, #4
001CAD88  e40740b9  ldr      w4, [sp, #4]
001CAD8C  e203142a  mov      w2, w20
001CAD90  6a650094  bl       #0x1e4338
001CAD94  94060091  add      x20, x20, #1
001CAD98  bf0214eb  cmp      x21, x20
001CAD9C  a1fdff54  b.ne     #0x1cad50
001CADA0  a1008052  mov      w1, #5
001CADA4  e00313aa  mov      x0, x19
001CADA8  20620094  bl       #0x1e3628
001CADAC  40030034  cbz      w0, #0x1cae14
001CADB0  f4031faa  mov      x20, xzr
001CADB4  f603002a  mov      w22, w0
001CADB8  17d29952  mov      w23, #0xce90
001CADBC  f700a072  movk     w23, #7, lsl #16
001CADC0  b5008052  mov      w21, #5
001CADC4  3f5b0194  bl       #0x221ac0
001CADC8  080c148b  add      x8, x0, x20, lsl #3
001CADCC  a0035ff8  ldur     x0, [x29, #-0x10]
001CADD0  a12300d1  sub      x1, x29, #8
001CADD4  e2630091  add      x2, sp, #0x18
001CADD8  e3130091  add      x3, sp, #4
001CADDC  ff0700b9  str      wzr, [sp, #4]
001CADE0  086977f8  ldr      x8, [x8, x23]
001CADE4  ff1b00b9  str      wzr, [sp, #0x18]
001CADE8  a8831ff8  stur     x8, [x29, #-8]
001CADEC  bbe30094  bl       #0x203cd8
001CADF0  e31b40b9  ldr      w3, [sp, #0x18]
001CADF4  e00313aa  mov      x0, x19
001CADF8  e103152a  mov      w1, w21
001CADFC  e40740b9  ldr      w4, [sp, #4]
001CAE00  e203142a  mov      w2, w20
001CAE04  4d650094  bl       #0x1e4338
001CAE08  94060091  add      x20, x20, #1
001CAE0C  df0214eb  cmp      x22, x20
001CAE10  a1fdff54  b.ne     #0x1cadc4
001CAE14  e00313aa  mov      x0, x19
001CAE18  01048052  mov      w1, #0x20
001CAE1C  99650094  bl       #0x1e4480
001CAE20  e01340f9  ldr      x0, [sp, #0x20]
001CAE24  800000b4  cbz      x0, #0x1cae34
001CAE28  088c44f8  ldr      x8, [x0, #0x48]!
001CAE2C  080d40f9  ldr      x8, [x8, #0x18]
001CAE30  00013fd6  blr      x8
001CAE34  a0035ff8  ldur     x0, [x29, #-0x10]
001CAE38  800000b4  cbz      x0, #0x1cae48
001CAE3C  088c44f8  ldr      x8, [x0, #0x48]!
001CAE40  080d40f9  ldr      x8, [x8, #0x18]
001CAE44  00013fd6  blr      x8
001CAE48  f44f49a9  ldp      x20, x19, [sp, #0x90]
001CAE4C  f65748a9  ldp      x22, x21, [sp, #0x80]
001CAE50  f85f47a9  ldp      x24, x23, [sp, #0x70]
001CAE54  fa6746a9  ldp      x26, x25, [sp, #0x60]
001CAE58  fc6f45a9  ldp      x28, x27, [sp, #0x50]
001CAE5C  fd7b44a9  ldp      x29, x30, [sp, #0x40]
001CAE60  ff830291  add      sp, sp, #0xa0
001CAE64  c0035fd6  ret      
001CAE68  6adff897  bl       #0x2c10
~~~

## Vtable target bodies (bounded to 0x2000 bytes)
### 0x10730: sv_primary@0x7815d0, za_primary@0x77c750
~~~asm
00010730  08400191  add      x8, x0, #0x50
00010734  09fd5f88  ldaxr    w9, [x8]
00010738  29050011  add      w9, w9, #1
0001073C  09fd0a88  stlxr    w10, w9, [x8]
00010740  aaffff35  cbnz     w10, #0x10734
00010744  c0035fd6  ret      
~~~
### 0x10750: sv_primary@0x7815d8, za_primary@0x77c758
~~~asm
00010750  08400191  add      x8, x0, #0x50
00010754  09fd5f88  ldaxr    w9, [x8]
00010758  29050071  subs     w9, w9, #1
0001075C  09fd0a88  stlxr    w10, w9, [x8]
00010760  aaffff35  cbnz     w10, #0x10754
00010764  81000054  b.ne     #0x10774
00010768  080040f9  ldr      x8, [x0]
0001076C  010940f9  ldr      x1, [x8, #0x10]
00010770  20001fd6  br       x1
00010774  c0035fd6  ret      
~~~
### 0x10780: sv_ref@0x781640, za_ref@0x77c7c0
~~~asm
00010780  08200091  add      x8, x0, #8
00010784  09fd5f88  ldaxr    w9, [x8]
00010788  29050011  add      w9, w9, #1
0001078C  09fd0a88  stlxr    w10, w9, [x8]
00010790  aaffff35  cbnz     w10, #0x10784
00010794  c0035fd6  ret      
~~~
### 0x107a0: sv_ref@0x781648, za_ref@0x77c7c8
~~~asm
000107A0  08200091  add      x8, x0, #8
000107A4  09fd5f88  ldaxr    w9, [x8]
000107A8  29050071  subs     w9, w9, #1
000107AC  09fd0a88  stlxr    w10, w9, [x8]
000107B0  aaffff35  cbnz     w10, #0x107a4
000107B4  81000054  b.ne     #0x107c4
000107B8  088c5bf8  ldr      x8, [x0, #-0x48]!
000107BC  010940f9  ldr      x1, [x8, #0x10]
000107C0  20001fd6  br       x1
000107C4  c0035fd6  ret      
~~~
### 0x9ceb4: sv_primary@0x7815e0, za_primary@0x77c760
~~~asm
0009CEB4  07000014  b        #0x9ced0
~~~
### 0x9ceb8: sv_primary@0x7815e8, za_primary@0x77c768
~~~asm
0009CEB8  08680991  add      x8, x0, #0x25a
0009CEBC  08fddf08  ldarb    w8, [x8]
0009CEC0  00010012  and      w0, w8, #1
0009CEC4  c0035fd6  ret      
~~~
### 0x9cec8: sv_primary@0x7815f0, za_primary@0x77c770
~~~asm
0009CEC8  c0035fd6  ret      
~~~
### 0x9cecc: sv_third_window@0x781660, za_third_window@0x77c7e0
~~~asm
0009CECC  01000014  b        #0x9ced0
~~~
### 0x1ff3c8: za_primary@0x77c788
~~~asm
001FF3C8  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001FF3CC  f44f01a9  stp      x20, x19, [sp, #0x10]
001FF3D0  fd030091  mov      x29, sp
001FF3D4  080842f9  ldr      x8, [x0, #0x410]
001FF3D8  f30300aa  mov      x19, x0
001FF3DC  880000b4  cbz      x8, #0x1ff3ec
001FF3E0  61c20d91  add      x1, x19, #0x370
001FF3E4  60c21091  add      x0, x19, #0x430
001FF3E8  00013fd6  blr      x8
001FF3EC  74a20f91  add      x20, x19, #0x3e8
001FF3F0  e00314aa  mov      x0, x20
001FF3F4  97dc0f94  bl       #0x5f6650
001FF3F8  680a44b9  ldr      w8, [x19, #0x408]
001FF3FC  e00314aa  mov      x0, x20
001FF400  68e203b9  str      w8, [x19, #0x3e0]
001FF404  97dc0f94  bl       #0x5f6660
001FF408  e00313aa  mov      x0, x19
001FF40C  f44f41a9  ldp      x20, x19, [sp, #0x10]
001FF410  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001FF414  0da60b14  b        #0x4e8c48
~~~
### 0x1ff418: za_primary@0x77c738
~~~asm
001FF418  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001FF41C  f30b00f9  str      x19, [sp, #0x10]
001FF420  fd030091  mov      x29, sp
001FF424  080c42f9  ldr      x8, [x0, #0x418]
001FF428  f30300aa  mov      x19, x0
001FF42C  e80000b4  cbz      x8, #0x1ff448
001FF430  60c21091  add      x0, x19, #0x430
001FF434  7f1602f9  str      xzr, [x19, #0x428]
001FF438  7f1202f9  str      xzr, [x19, #0x420]
001FF43C  7f0e02f9  str      xzr, [x19, #0x418]
001FF440  7f0a02f9  str      xzr, [x19, #0x410]
001FF444  00013fd6  blr      x8
001FF448  60a20f91  add      x0, x19, #0x3e8
001FF44C  cddb0f94  bl       #0x5f6380
001FF450  60e241f9  ldr      x0, [x19, #0x3c0]
001FF454  a00000b4  cbz      x0, #0x1ff468
001FF458  088c44f8  ldr      x8, [x0, #0x48]!
001FF45C  080d40f9  ldr      x8, [x8, #0x18]
001FF460  00013fd6  blr      x8
001FF464  7fe201f9  str      xzr, [x19, #0x3c0]
001FF468  60c641f9  ldr      x0, [x19, #0x388]
001FF46C  a00000b4  cbz      x0, #0x1ff480
001FF470  088c44f8  ldr      x8, [x0, #0x48]!
001FF474  080d40f9  ldr      x8, [x8, #0x18]
001FF478  00013fd6  blr      x8
001FF47C  7fc601f9  str      xzr, [x19, #0x388]
001FF480  e00313aa  mov      x0, x19
001FF484  f30b40f9  ldr      x19, [sp, #0x10]
001FF488  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001FF48C  c3a40b14  b        #0x4e8798
~~~
### 0x1ff490: za_primary@0x77c740
~~~asm
001FF490  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001FF494  f30b00f9  str      x19, [sp, #0x10]
001FF498  fd030091  mov      x29, sp
001FF49C  080c42f9  ldr      x8, [x0, #0x418]
001FF4A0  f30300aa  mov      x19, x0
001FF4A4  e80000b4  cbz      x8, #0x1ff4c0
001FF4A8  60c21091  add      x0, x19, #0x430
001FF4AC  7f1602f9  str      xzr, [x19, #0x428]
001FF4B0  7f1202f9  str      xzr, [x19, #0x420]
001FF4B4  7f0e02f9  str      xzr, [x19, #0x418]
001FF4B8  7f0a02f9  str      xzr, [x19, #0x410]
001FF4BC  00013fd6  blr      x8
001FF4C0  60a20f91  add      x0, x19, #0x3e8
001FF4C4  afdb0f94  bl       #0x5f6380
001FF4C8  60e241f9  ldr      x0, [x19, #0x3c0]
001FF4CC  a00000b4  cbz      x0, #0x1ff4e0
001FF4D0  088c44f8  ldr      x8, [x0, #0x48]!
001FF4D4  080d40f9  ldr      x8, [x8, #0x18]
001FF4D8  00013fd6  blr      x8
001FF4DC  7fe201f9  str      xzr, [x19, #0x3c0]
001FF4E0  60c641f9  ldr      x0, [x19, #0x388]
001FF4E4  a00000b4  cbz      x0, #0x1ff4f8
001FF4E8  088c44f8  ldr      x8, [x0, #0x48]!
001FF4EC  080d40f9  ldr      x8, [x8, #0x18]
001FF4F0  00013fd6  blr      x8
001FF4F4  7fc601f9  str      xzr, [x19, #0x388]
001FF4F8  e00313aa  mov      x0, x19
001FF4FC  f30b40f9  ldr      x19, [sp, #0x10]
001FF500  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001FF504  a5a40b14  b        #0x4e8798
~~~
### 0x1ff508: za_ref@0x77c7b0
~~~asm
001FF508  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001FF50C  f30b00f9  str      x19, [sp, #0x10]
001FF510  fd030091  mov      x29, sp
001FF514  08e841f9  ldr      x8, [x0, #0x3d0]
001FF518  f30300aa  mov      x19, x0
001FF51C  e80000b4  cbz      x8, #0x1ff538
001FF520  60a20f91  add      x0, x19, #0x3e8
001FF524  7ff201f9  str      xzr, [x19, #0x3e0]
001FF528  7fee01f9  str      xzr, [x19, #0x3d8]
001FF52C  7fea01f9  str      xzr, [x19, #0x3d0]
001FF530  7fe601f9  str      xzr, [x19, #0x3c8]
001FF534  00013fd6  blr      x8
001FF538  60820e91  add      x0, x19, #0x3a0
001FF53C  91db0f94  bl       #0x5f6380
001FF540  60be41f9  ldr      x0, [x19, #0x378]
001FF544  a00000b4  cbz      x0, #0x1ff558
001FF548  088c44f8  ldr      x8, [x0, #0x48]!
001FF54C  080d40f9  ldr      x8, [x8, #0x18]
001FF550  00013fd6  blr      x8
001FF554  7fbe01f9  str      xzr, [x19, #0x378]
001FF558  60a241f9  ldr      x0, [x19, #0x340]
001FF55C  a00000b4  cbz      x0, #0x1ff570
001FF560  088c44f8  ldr      x8, [x0, #0x48]!
001FF564  080d40f9  ldr      x8, [x8, #0x18]
001FF568  00013fd6  blr      x8
001FF56C  7fa201f9  str      xzr, [x19, #0x340]
001FF570  602201d1  sub      x0, x19, #0x48
001FF574  f30b40f9  ldr      x19, [sp, #0x10]
001FF578  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001FF57C  87a40b14  b        #0x4e8798
~~~
### 0x1ff580: za_ref@0x77c7b8
~~~asm
001FF580  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001FF584  f30b00f9  str      x19, [sp, #0x10]
001FF588  fd030091  mov      x29, sp
001FF58C  08e841f9  ldr      x8, [x0, #0x3d0]
001FF590  f30300aa  mov      x19, x0
001FF594  e80000b4  cbz      x8, #0x1ff5b0
001FF598  60a20f91  add      x0, x19, #0x3e8
001FF59C  7ff201f9  str      xzr, [x19, #0x3e0]
001FF5A0  7fee01f9  str      xzr, [x19, #0x3d8]
001FF5A4  7fea01f9  str      xzr, [x19, #0x3d0]
001FF5A8  7fe601f9  str      xzr, [x19, #0x3c8]
001FF5AC  00013fd6  blr      x8
001FF5B0  60820e91  add      x0, x19, #0x3a0
001FF5B4  73db0f94  bl       #0x5f6380
001FF5B8  60be41f9  ldr      x0, [x19, #0x378]
001FF5BC  a00000b4  cbz      x0, #0x1ff5d0
001FF5C0  088c44f8  ldr      x8, [x0, #0x48]!
001FF5C4  080d40f9  ldr      x8, [x8, #0x18]
001FF5C8  00013fd6  blr      x8
001FF5CC  7fbe01f9  str      xzr, [x19, #0x378]
001FF5D0  60a241f9  ldr      x0, [x19, #0x340]
001FF5D4  a00000b4  cbz      x0, #0x1ff5e8
001FF5D8  088c44f8  ldr      x8, [x0, #0x48]!
001FF5DC  080d40f9  ldr      x8, [x8, #0x18]
001FF5E0  00013fd6  blr      x8
001FF5E4  7fa201f9  str      xzr, [x19, #0x340]
001FF5E8  602201d1  sub      x0, x19, #0x48
001FF5EC  f30b40f9  ldr      x19, [sp, #0x10]
001FF5F0  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001FF5F4  69a40b14  b        #0x4e8798
~~~
### 0x1ff5f8: za_third_window@0x77c7e8
~~~asm
001FF5F8  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001FF5FC  f30b00f9  str      x19, [sp, #0x10]
001FF600  fd030091  mov      x29, sp
001FF604  08e041f9  ldr      x8, [x0, #0x3c0]
001FF608  f30300aa  mov      x19, x0
001FF60C  e80000b4  cbz      x8, #0x1ff628
001FF610  60620f91  add      x0, x19, #0x3d8
001FF614  7fea01f9  str      xzr, [x19, #0x3d0]
001FF618  7fe601f9  str      xzr, [x19, #0x3c8]
001FF61C  7fe201f9  str      xzr, [x19, #0x3c0]
001FF620  7fde01f9  str      xzr, [x19, #0x3b8]
001FF624  00013fd6  blr      x8
001FF628  60420e91  add      x0, x19, #0x390
001FF62C  55db0f94  bl       #0x5f6380
001FF630  60b641f9  ldr      x0, [x19, #0x368]
001FF634  a00000b4  cbz      x0, #0x1ff648
001FF638  088c44f8  ldr      x8, [x0, #0x48]!
001FF63C  080d40f9  ldr      x8, [x8, #0x18]
001FF640  00013fd6  blr      x8
001FF644  7fb601f9  str      xzr, [x19, #0x368]
001FF648  609a41f9  ldr      x0, [x19, #0x330]
001FF64C  a00000b4  cbz      x0, #0x1ff660
001FF650  088c44f8  ldr      x8, [x0, #0x48]!
001FF654  080d40f9  ldr      x8, [x8, #0x18]
001FF658  00013fd6  blr      x8
001FF65C  7f9a01f9  str      xzr, [x19, #0x330]
001FF660  606201d1  sub      x0, x19, #0x58
001FF664  f30b40f9  ldr      x19, [sp, #0x10]
001FF668  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001FF66C  4ba40b14  b        #0x4e8798
~~~
### 0x1ff670: za_third_window@0x77c7f0
~~~asm
001FF670  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001FF674  f30b00f9  str      x19, [sp, #0x10]
001FF678  fd030091  mov      x29, sp
001FF67C  08e041f9  ldr      x8, [x0, #0x3c0]
001FF680  f30300aa  mov      x19, x0
001FF684  e80000b4  cbz      x8, #0x1ff6a0
001FF688  60620f91  add      x0, x19, #0x3d8
001FF68C  7fea01f9  str      xzr, [x19, #0x3d0]
001FF690  7fe601f9  str      xzr, [x19, #0x3c8]
001FF694  7fe201f9  str      xzr, [x19, #0x3c0]
001FF698  7fde01f9  str      xzr, [x19, #0x3b8]
001FF69C  00013fd6  blr      x8
001FF6A0  60420e91  add      x0, x19, #0x390
001FF6A4  37db0f94  bl       #0x5f6380
001FF6A8  60b641f9  ldr      x0, [x19, #0x368]
001FF6AC  a00000b4  cbz      x0, #0x1ff6c0
001FF6B0  088c44f8  ldr      x8, [x0, #0x48]!
001FF6B4  080d40f9  ldr      x8, [x8, #0x18]
001FF6B8  00013fd6  blr      x8
001FF6BC  7fb601f9  str      xzr, [x19, #0x368]
001FF6C0  609a41f9  ldr      x0, [x19, #0x330]
001FF6C4  a00000b4  cbz      x0, #0x1ff6d8
001FF6C8  088c44f8  ldr      x8, [x0, #0x48]!
001FF6CC  080d40f9  ldr      x8, [x8, #0x18]
001FF6D0  00013fd6  blr      x8
001FF6D4  7f9a01f9  str      xzr, [x19, #0x330]
001FF6D8  606201d1  sub      x0, x19, #0x58
001FF6DC  f30b40f9  ldr      x19, [sp, #0x10]
001FF6E0  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001FF6E4  2da40b14  b        #0x4e8798
~~~
### 0x1ffaf0: za_third_window@0x77c808
~~~asm
001FFAF0  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
001FFAF4  f30b00f9  str      x19, [sp, #0x10]
001FFAF8  fd030091  mov      x29, sp
001FFAFC  f30300aa  mov      x19, x0
001FFB00  00ec41f9  ldr      x0, [x0, #0x3d8]
001FFB04  a00000b4  cbz      x0, #0x1ffb18
001FFB08  088c44f8  ldr      x8, [x0, #0x48]!
001FFB0C  080d40f9  ldr      x8, [x8, #0x18]
001FFB10  00013fd6  blr      x8
001FFB14  7fee01f9  str      xzr, [x19, #0x3d8]
001FFB18  60e20e91  add      x0, x19, #0x3b8
001FFB1C  19da0f94  bl       #0x5f6380
001FFB20  68ce41f9  ldr      x8, [x19, #0x398]
001FFB24  c80000b4  cbz      x8, #0x1ffb3c
001FFB28  60c241f9  ldr      x0, [x19, #0x380]
001FFB2C  800000b4  cbz      x0, #0x1ffb3c
001FFB30  088c44f8  ldr      x8, [x0, #0x48]!
001FFB34  080d40f9  ldr      x8, [x8, #0x18]
001FFB38  00013fd6  blr      x8
001FFB3C  60d241f9  ldr      x0, [x19, #0x3a0]
001FFB40  a8c884d2  mov      x8, #0x2645
001FFB44  4884b0f2  movk     x8, #0x8422, lsl #16
001FFB48  889cd3f2  movk     x8, #0x9ce4, lsl #32
001FFB4C  487ef9f2  movk     x8, #0xcbf2, lsl #48
001FFB50  7fc201f9  str      xzr, [x19, #0x380]
001FFB54  68c601f9  str      x8, [x19, #0x388]
001FFB58  88200090  adrp     x8, #0x60f000
001FFB5C  080d1a91  add      x8, x8, #0x683
001FFB60  68ca01f9  str      x8, [x19, #0x390]
001FFB64  7fce01f9  str      xzr, [x19, #0x398]
001FFB68  800000b4  cbz      x0, #0x1ffb78
001FFB6C  088c44f8  ldr      x8, [x0, #0x48]!
001FFB70  080d40f9  ldr      x8, [x8, #0x18]
001FFB74  00013fd6  blr      x8
001FFB78  7fd201f9  str      xzr, [x19, #0x3a0]
001FFB7C  e00313aa  mov      x0, x19
001FFB80  7faa03b9  str      wzr, [x19, #0x3a8]
001FFB84  f30b40f9  ldr      x19, [sp, #0x10]
001FFB88  fd7bc2a8  ldp      x29, x30, [sp], #0x20
001FFB8C  03a30b14  b        #0x4e8798
~~~
### 0x2a0ae8: sv_primary@0x781608
~~~asm
002A0AE8  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
002A0AEC  f44f01a9  stp      x20, x19, [sp, #0x10]
002A0AF0  fd030091  mov      x29, sp
002A0AF4  080842f9  ldr      x8, [x0, #0x410]
002A0AF8  f30300aa  mov      x19, x0
002A0AFC  880000b4  cbz      x8, #0x2a0b0c
002A0B00  61c20d91  add      x1, x19, #0x370
002A0B04  60c21091  add      x0, x19, #0x430
002A0B08  00013fd6  blr      x8
002A0B0C  74a20f91  add      x20, x19, #0x3e8
002A0B10  e00314aa  mov      x0, x20
002A0B14  cf560d94  bl       #0x5f6650
002A0B18  680a44b9  ldr      w8, [x19, #0x408]
002A0B1C  e00314aa  mov      x0, x20
002A0B20  68e203b9  str      w8, [x19, #0x3e0]
002A0B24  cf560d94  bl       #0x5f6660
002A0B28  e00313aa  mov      x0, x19
002A0B2C  f44f41a9  ldp      x20, x19, [sp, #0x10]
002A0B30  fd7bc2a8  ldp      x29, x30, [sp], #0x20
002A0B34  45200914  b        #0x4e8c48
~~~
### 0x2a0b38: sv_primary@0x7815b8
~~~asm
002A0B38  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
002A0B3C  f30b00f9  str      x19, [sp, #0x10]
002A0B40  fd030091  mov      x29, sp
002A0B44  080c42f9  ldr      x8, [x0, #0x418]
002A0B48  f30300aa  mov      x19, x0
002A0B4C  e80000b4  cbz      x8, #0x2a0b68
002A0B50  60c21091  add      x0, x19, #0x430
002A0B54  7f1602f9  str      xzr, [x19, #0x428]
002A0B58  7f1202f9  str      xzr, [x19, #0x420]
002A0B5C  7f0e02f9  str      xzr, [x19, #0x418]
002A0B60  7f0a02f9  str      xzr, [x19, #0x410]
002A0B64  00013fd6  blr      x8
002A0B68  60a20f91  add      x0, x19, #0x3e8
002A0B6C  05560d94  bl       #0x5f6380
002A0B70  60e241f9  ldr      x0, [x19, #0x3c0]
002A0B74  a00000b4  cbz      x0, #0x2a0b88
002A0B78  088c44f8  ldr      x8, [x0, #0x48]!
002A0B7C  080d40f9  ldr      x8, [x8, #0x18]
002A0B80  00013fd6  blr      x8
002A0B84  7fe201f9  str      xzr, [x19, #0x3c0]
002A0B88  60c641f9  ldr      x0, [x19, #0x388]
002A0B8C  a00000b4  cbz      x0, #0x2a0ba0
002A0B90  088c44f8  ldr      x8, [x0, #0x48]!
002A0B94  080d40f9  ldr      x8, [x8, #0x18]
002A0B98  00013fd6  blr      x8
002A0B9C  7fc601f9  str      xzr, [x19, #0x388]
002A0BA0  e00313aa  mov      x0, x19
002A0BA4  f30b40f9  ldr      x19, [sp, #0x10]
002A0BA8  fd7bc2a8  ldp      x29, x30, [sp], #0x20
002A0BAC  fb1e0914  b        #0x4e8798
~~~
### 0x2a0bb0: sv_primary@0x7815c0
~~~asm
002A0BB0  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
002A0BB4  f30b00f9  str      x19, [sp, #0x10]
002A0BB8  fd030091  mov      x29, sp
002A0BBC  080c42f9  ldr      x8, [x0, #0x418]
002A0BC0  f30300aa  mov      x19, x0
002A0BC4  e80000b4  cbz      x8, #0x2a0be0
002A0BC8  60c21091  add      x0, x19, #0x430
002A0BCC  7f1602f9  str      xzr, [x19, #0x428]
002A0BD0  7f1202f9  str      xzr, [x19, #0x420]
002A0BD4  7f0e02f9  str      xzr, [x19, #0x418]
002A0BD8  7f0a02f9  str      xzr, [x19, #0x410]
002A0BDC  00013fd6  blr      x8
002A0BE0  60a20f91  add      x0, x19, #0x3e8
002A0BE4  e7550d94  bl       #0x5f6380
002A0BE8  60e241f9  ldr      x0, [x19, #0x3c0]
002A0BEC  a00000b4  cbz      x0, #0x2a0c00
002A0BF0  088c44f8  ldr      x8, [x0, #0x48]!
002A0BF4  080d40f9  ldr      x8, [x8, #0x18]
002A0BF8  00013fd6  blr      x8
002A0BFC  7fe201f9  str      xzr, [x19, #0x3c0]
002A0C00  60c641f9  ldr      x0, [x19, #0x388]
002A0C04  a00000b4  cbz      x0, #0x2a0c18
002A0C08  088c44f8  ldr      x8, [x0, #0x48]!
002A0C0C  080d40f9  ldr      x8, [x8, #0x18]
002A0C10  00013fd6  blr      x8
002A0C14  7fc601f9  str      xzr, [x19, #0x388]
002A0C18  e00313aa  mov      x0, x19
002A0C1C  f30b40f9  ldr      x19, [sp, #0x10]
002A0C20  fd7bc2a8  ldp      x29, x30, [sp], #0x20
002A0C24  dd1e0914  b        #0x4e8798
~~~
### 0x2a0c28: sv_ref@0x781630
~~~asm
002A0C28  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
002A0C2C  f30b00f9  str      x19, [sp, #0x10]
002A0C30  fd030091  mov      x29, sp
002A0C34  08e841f9  ldr      x8, [x0, #0x3d0]
002A0C38  f30300aa  mov      x19, x0
002A0C3C  e80000b4  cbz      x8, #0x2a0c58
002A0C40  60a20f91  add      x0, x19, #0x3e8
002A0C44  7ff201f9  str      xzr, [x19, #0x3e0]
002A0C48  7fee01f9  str      xzr, [x19, #0x3d8]
002A0C4C  7fea01f9  str      xzr, [x19, #0x3d0]
002A0C50  7fe601f9  str      xzr, [x19, #0x3c8]
002A0C54  00013fd6  blr      x8
002A0C58  60820e91  add      x0, x19, #0x3a0
002A0C5C  c9550d94  bl       #0x5f6380
002A0C60  60be41f9  ldr      x0, [x19, #0x378]
002A0C64  a00000b4  cbz      x0, #0x2a0c78
002A0C68  088c44f8  ldr      x8, [x0, #0x48]!
002A0C6C  080d40f9  ldr      x8, [x8, #0x18]
002A0C70  00013fd6  blr      x8
002A0C74  7fbe01f9  str      xzr, [x19, #0x378]
002A0C78  60a241f9  ldr      x0, [x19, #0x340]
002A0C7C  a00000b4  cbz      x0, #0x2a0c90
002A0C80  088c44f8  ldr      x8, [x0, #0x48]!
002A0C84  080d40f9  ldr      x8, [x8, #0x18]
002A0C88  00013fd6  blr      x8
002A0C8C  7fa201f9  str      xzr, [x19, #0x340]
002A0C90  602201d1  sub      x0, x19, #0x48
002A0C94  f30b40f9  ldr      x19, [sp, #0x10]
002A0C98  fd7bc2a8  ldp      x29, x30, [sp], #0x20
002A0C9C  bf1e0914  b        #0x4e8798
~~~
### 0x2a0ca0: sv_ref@0x781638
~~~asm
002A0CA0  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
002A0CA4  f30b00f9  str      x19, [sp, #0x10]
002A0CA8  fd030091  mov      x29, sp
002A0CAC  08e841f9  ldr      x8, [x0, #0x3d0]
002A0CB0  f30300aa  mov      x19, x0
002A0CB4  e80000b4  cbz      x8, #0x2a0cd0
002A0CB8  60a20f91  add      x0, x19, #0x3e8
002A0CBC  7ff201f9  str      xzr, [x19, #0x3e0]
002A0CC0  7fee01f9  str      xzr, [x19, #0x3d8]
002A0CC4  7fea01f9  str      xzr, [x19, #0x3d0]
002A0CC8  7fe601f9  str      xzr, [x19, #0x3c8]
002A0CCC  00013fd6  blr      x8
002A0CD0  60820e91  add      x0, x19, #0x3a0
002A0CD4  ab550d94  bl       #0x5f6380
002A0CD8  60be41f9  ldr      x0, [x19, #0x378]
002A0CDC  a00000b4  cbz      x0, #0x2a0cf0
002A0CE0  088c44f8  ldr      x8, [x0, #0x48]!
002A0CE4  080d40f9  ldr      x8, [x8, #0x18]
002A0CE8  00013fd6  blr      x8
002A0CEC  7fbe01f9  str      xzr, [x19, #0x378]
002A0CF0  60a241f9  ldr      x0, [x19, #0x340]
002A0CF4  a00000b4  cbz      x0, #0x2a0d08
002A0CF8  088c44f8  ldr      x8, [x0, #0x48]!
002A0CFC  080d40f9  ldr      x8, [x8, #0x18]
002A0D00  00013fd6  blr      x8
002A0D04  7fa201f9  str      xzr, [x19, #0x340]
002A0D08  602201d1  sub      x0, x19, #0x48
002A0D0C  f30b40f9  ldr      x19, [sp, #0x10]
002A0D10  fd7bc2a8  ldp      x29, x30, [sp], #0x20
002A0D14  a11e0914  b        #0x4e8798
~~~
### 0x2a0d18: sv_third_window@0x781668
~~~asm
002A0D18  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
002A0D1C  f30b00f9  str      x19, [sp, #0x10]
002A0D20  fd030091  mov      x29, sp
002A0D24  08e041f9  ldr      x8, [x0, #0x3c0]
002A0D28  f30300aa  mov      x19, x0
002A0D2C  e80000b4  cbz      x8, #0x2a0d48
002A0D30  60620f91  add      x0, x19, #0x3d8
002A0D34  7fea01f9  str      xzr, [x19, #0x3d0]
002A0D38  7fe601f9  str      xzr, [x19, #0x3c8]
002A0D3C  7fe201f9  str      xzr, [x19, #0x3c0]
002A0D40  7fde01f9  str      xzr, [x19, #0x3b8]
002A0D44  00013fd6  blr      x8
002A0D48  60420e91  add      x0, x19, #0x390
002A0D4C  8d550d94  bl       #0x5f6380
002A0D50  60b641f9  ldr      x0, [x19, #0x368]
002A0D54  a00000b4  cbz      x0, #0x2a0d68
002A0D58  088c44f8  ldr      x8, [x0, #0x48]!
002A0D5C  080d40f9  ldr      x8, [x8, #0x18]
002A0D60  00013fd6  blr      x8
002A0D64  7fb601f9  str      xzr, [x19, #0x368]
002A0D68  609a41f9  ldr      x0, [x19, #0x330]
002A0D6C  a00000b4  cbz      x0, #0x2a0d80
002A0D70  088c44f8  ldr      x8, [x0, #0x48]!
002A0D74  080d40f9  ldr      x8, [x8, #0x18]
002A0D78  00013fd6  blr      x8
002A0D7C  7f9a01f9  str      xzr, [x19, #0x330]
002A0D80  606201d1  sub      x0, x19, #0x58
002A0D84  f30b40f9  ldr      x19, [sp, #0x10]
002A0D88  fd7bc2a8  ldp      x29, x30, [sp], #0x20
002A0D8C  831e0914  b        #0x4e8798
~~~
### 0x2a0d90: sv_third_window@0x781670
~~~asm
002A0D90  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
002A0D94  f30b00f9  str      x19, [sp, #0x10]
002A0D98  fd030091  mov      x29, sp
002A0D9C  08e041f9  ldr      x8, [x0, #0x3c0]
002A0DA0  f30300aa  mov      x19, x0
002A0DA4  e80000b4  cbz      x8, #0x2a0dc0
002A0DA8  60620f91  add      x0, x19, #0x3d8
002A0DAC  7fea01f9  str      xzr, [x19, #0x3d0]
002A0DB0  7fe601f9  str      xzr, [x19, #0x3c8]
002A0DB4  7fe201f9  str      xzr, [x19, #0x3c0]
002A0DB8  7fde01f9  str      xzr, [x19, #0x3b8]
002A0DBC  00013fd6  blr      x8
002A0DC0  60420e91  add      x0, x19, #0x390
002A0DC4  6f550d94  bl       #0x5f6380
002A0DC8  60b641f9  ldr      x0, [x19, #0x368]
002A0DCC  a00000b4  cbz      x0, #0x2a0de0
002A0DD0  088c44f8  ldr      x8, [x0, #0x48]!
002A0DD4  080d40f9  ldr      x8, [x8, #0x18]
002A0DD8  00013fd6  blr      x8
002A0DDC  7fb601f9  str      xzr, [x19, #0x368]
002A0DE0  609a41f9  ldr      x0, [x19, #0x330]
002A0DE4  a00000b4  cbz      x0, #0x2a0df8
002A0DE8  088c44f8  ldr      x8, [x0, #0x48]!
002A0DEC  080d40f9  ldr      x8, [x8, #0x18]
002A0DF0  00013fd6  blr      x8
002A0DF4  7f9a01f9  str      xzr, [x19, #0x330]
002A0DF8  606201d1  sub      x0, x19, #0x58
002A0DFC  f30b40f9  ldr      x19, [sp, #0x10]
002A0E00  fd7bc2a8  ldp      x29, x30, [sp], #0x20
002A0E04  651e0914  b        #0x4e8798
~~~
### 0x2a0fe4: sv_third_window@0x781688
~~~asm
002A0FE4  fd7bbea9  stp      x29, x30, [sp, #-0x20]!
002A0FE8  f30b00f9  str      x19, [sp, #0x10]
002A0FEC  fd030091  mov      x29, sp
002A0FF0  f30300aa  mov      x19, x0
002A0FF4  00c00e91  add      x0, x0, #0x3b0
002A0FF8  e2540d94  bl       #0x5f6380
002A0FFC  68ca41f9  ldr      x8, [x19, #0x390]
002A1000  c80000b4  cbz      x8, #0x2a1018
002A1004  60be41f9  ldr      x0, [x19, #0x378]
002A1008  800000b4  cbz      x0, #0x2a1018
002A100C  088c44f8  ldr      x8, [x0, #0x48]!
002A1010  080d40f9  ldr      x8, [x8, #0x18]
002A1014  00013fd6  blr      x8
002A1018  60ce41f9  ldr      x0, [x19, #0x398]
002A101C  a8c884d2  mov      x8, #0x2645
002A1020  4884b0f2  movk     x8, #0x8422, lsl #16
002A1024  889cd3f2  movk     x8, #0x9ce4, lsl #32
002A1028  487ef9f2  movk     x8, #0xcbf2, lsl #48
002A102C  7fbe01f9  str      xzr, [x19, #0x378]
002A1030  68c201f9  str      x8, [x19, #0x380]
002A1034  681b00d0  adrp     x8, #0x60f000
002A1038  080d1a91  add      x8, x8, #0x683
002A103C  68c601f9  str      x8, [x19, #0x388]
002A1040  7fca01f9  str      xzr, [x19, #0x390]
002A1044  800000b4  cbz      x0, #0x2a1054
002A1048  088c44f8  ldr      x8, [x0, #0x48]!
002A104C  080d40f9  ldr      x8, [x8, #0x18]
002A1050  00013fd6  blr      x8
002A1054  7fce01f9  str      xzr, [x19, #0x398]
002A1058  e00313aa  mov      x0, x19
002A105C  7fa203b9  str      wzr, [x19, #0x3a0]
002A1060  f30b40f9  ldr      x19, [sp, #0x10]
002A1064  fd7bc2a8  ldp      x29, x30, [sp], #0x20
002A1068  cc1d0914  b        #0x4e8798
~~~
### 0x4e8864: sv_primary@0x7815c8, za_primary@0x77c748
~~~asm
004E8864  fd7bbca9  stp      x29, x30, [sp, #-0x40]!
004E8868  f70b00f9  str      x23, [sp, #0x10]
004E886C  f65702a9  stp      x22, x21, [sp, #0x20]
004E8870  f44f03a9  stp      x20, x19, [sp, #0x30]
004E8874  fd030091  mov      x29, sp
004E8878  08640991  add      x8, x0, #0x259
004E887C  f30300aa  mov      x19, x0
004E8880  08fddf08  ldarb    w8, [x8]
004E8884  a8000037  tbnz     w8, #0, #0x4e8898
004E8888  680240f9  ldr      x8, [x19]
004E888C  e00313aa  mov      x0, x19
004E8890  082540f9  ldr      x8, [x8, #0x48]
004E8894  00013fd6  blr      x8
004E8898  685e40a9  ldp      x8, x23, [x19]
004E889C  e00313aa  mov      x0, x19
004E88A0  745641a9  ldp      x20, x21, [x19, #0x10]
004E88A4  761240f9  ldr      x22, [x19, #0x20]
004E88A8  080140f9  ldr      x8, [x8]
004E88AC  00013fd6  blr      x8
004E88B0  e80240f9  ldr      x8, [x23]
004E88B4  e00317aa  mov      x0, x23
004E88B8  e10314aa  mov      x1, x20
004E88BC  e20315aa  mov      x2, x21
004E88C0  e30316aa  mov      x3, x22
004E88C4  f70b40f9  ldr      x23, [sp, #0x10]
004E88C8  f44f43a9  ldp      x20, x19, [sp, #0x30]
004E88CC  040d40f9  ldr      x4, [x8, #0x18]
004E88D0  f65742a9  ldp      x22, x21, [sp, #0x20]
004E88D4  fd7bc4a8  ldp      x29, x30, [sp], #0x40
004E88D8  80001fd6  br       x4
~~~
### 0x4e88dc: sv_primary@0x781618, za_primary@0x77c798
~~~asm
004E88DC  08700991  add      x8, x0, #0x25c
004E88E0  08fddf88  ldar     w8, [x8]
004E88E4  1f050071  cmp      w8, #1
004E88E8  21030054  b.ne     #0x4e894c
004E88EC  ffc300d1  sub      sp, sp, #0x30
004E88F0  fd7b01a9  stp      x29, x30, [sp, #0x10]
004E88F4  f44f02a9  stp      x20, x19, [sp, #0x20]
004E88F8  fd430091  add      x29, sp, #0x10
004E88FC  083841f9  ldr      x8, [x0, #0x270]
004E8900  14400a91  add      x20, x0, #0x290
004E8904  f30300aa  mov      x19, x0
004E8908  e00700f9  str      x0, [sp, #8]
004E890C  e1230091  add      x1, sp, #8
004E8910  e00314aa  mov      x0, x20
004E8914  00013fd6  blr      x8
004E8918  683e41f9  ldr      x8, [x19, #0x278]
004E891C  c80000b4  cbz      x8, #0x4e8934
004E8920  69c20991  add      x9, x19, #0x270
004E8924  e00314aa  mov      x0, x20
004E8928  3f7d01a9  stp      xzr, xzr, [x9, #0x10]
004E892C  3f7d00a9  stp      xzr, xzr, [x9]
004E8930  00013fd6  blr      x8
004E8934  68720991  add      x8, x19, #0x25c
004E8938  49008052  mov      w9, #2
004E893C  09fd9f88  stlr     w9, [x8]
004E8940  f44f42a9  ldp      x20, x19, [sp, #0x20]
004E8944  fd7b41a9  ldp      x29, x30, [sp, #0x10]
004E8948  ffc30091  add      sp, sp, #0x30
004E894C  c0035fd6  ret      
~~~
### 0x4e896c: sv_primary@0x7815f8, za_primary@0x77c778
~~~asm
004E896C  08600991  add      x8, x0, #0x258
004E8970  e41500b0  adrp     x4, #0x7a5000
004E8974  1ffd9f08  stlrb    wzr, [x8]
004E8978  08640991  add      x8, x0, #0x259
004E897C  1ffd9f08  stlrb    wzr, [x8]
004E8980  08680991  add      x8, x0, #0x25a
004E8984  00800191  add      x0, x0, #0x60
004E8988  1ffd9f08  stlrb    wzr, [x8]
004E898C  84a445f9  ldr      x4, [x4, #0xb48]
004E8990  01000014  b        #0x4e8994
~~~
### 0x4e8af0: sv_primary@0x781600, za_primary@0x77c780
~~~asm
004E8AF0  fd7bbca9  stp      x29, x30, [sp, #-0x40]!
004E8AF4  f85f01a9  stp      x24, x23, [sp, #0x10]
004E8AF8  f65702a9  stp      x22, x21, [sp, #0x20]
004E8AFC  f44f03a9  stp      x20, x19, [sp, #0x30]
004E8B00  fd030091  mov      x29, sp
004E8B04  08600991  add      x8, x0, #0x258
004E8B08  f30300aa  mov      x19, x0
004E8B0C  08fddf08  ldarb    w8, [x8]
004E8B10  a8000037  tbnz     w8, #0, #0x4e8b24
004E8B14  680240f9  ldr      x8, [x19]
004E8B18  e00313aa  mov      x0, x19
004E8B1C  082d40f9  ldr      x8, [x8, #0x58]
004E8B20  00013fd6  blr      x8
004E8B24  55d03bd5  mrs      x21, tpidr_el0
004E8B28  e8098052  mov      w8, #0x4f
004E8B2C  74420991  add      x20, x19, #0x250
004E8B30  1735550a  and      w23, w8, w21, lsr #13
004E8B34  764a0991  add      x22, x19, #0x252
004E8B38  1f2003d5  nop      
004E8B3C  1f2003d5  nop      
004E8B40  c8fe5f08  ldaxrb   w8, [x22]
004E8B44  1f3d0171  cmp      w8, #0x4f
004E8B48  81000054  b.ne     #0x4e8b58
004E8B4C  d77e0808  stxrb    w8, w23, [x22]
004E8B50  88ffff35  cbnz     w8, #0x4e8b40
004E8B54  1c000014  b        #0x4e8bc4
004E8B58  784e0991  add      x24, x19, #0x253
004E8B5C  5f3f03d5  clrex    
004E8B60  087f5f08  ldxrb    w8, [x24]
004E8B64  08050011  add      w8, w8, #1
004E8B68  087f0908  stxrb    w9, w8, [x24]
004E8B6C  a9ffff35  cbnz     w9, #0x4e8b60
004E8B70  bf3b03d5  dmb      ish
004E8B74  c8fe5f08  ldaxrb   w8, [x22]
004E8B78  1f3d0171  cmp      w8, #0x4f
004E8B7C  a1000054  b.ne     #0x4e8b90
004E8B80  d77e0808  stxrb    w8, w23, [x22]
004E8B84  88ffff35  cbnz     w8, #0x4e8b74
004E8B88  0b000014  b        #0x4e8bb4
004E8B8C  1f2003d5  nop      
004E8B90  e00314aa  mov      x0, x20
004E8B94  5f3f03d5  clrex    
004E8B98  72350494  bl       #0x5f6160
004E8B9C  1f2003d5  nop      
004E8BA0  c8fe5f08  ldaxrb   w8, [x22]
004E8BA4  1f3d0171  cmp      w8, #0x4f
004E8BA8  41ffff54  b.ne     #0x4e8b90
004E8BAC  d77e0808  stxrb    w8, w23, [x22]
004E8BB0  88ffff35  cbnz     w8, #0x4e8ba0
004E8BB4  087f5f08  ldxrb    w8, [x24]
004E8BB8  08050051  sub      w8, w8, #1
004E8BBC  087f0908  stxrb    w9, w8, [x24]
004E8BC0  a9ffff35  cbnz     w9, #0x4e8bb4
004E8BC4  a8ca73f2  ands     x8, x21, #-0x2000
004E8BC8  80000054  b.eq     #0x4e8bd8
004E8BCC  085540f9  ldr      x8, [x8, #0xa8]
004E8BD0  1f0113eb  cmp      x8, x19
004E8BD4  60010054  b.eq     #0x4e8c00
004E8BD8  77660991  add      x23, x19, #0x259
004E8BDC  e8fedf08  ldarb    w8, [x23]
004E8BE0  08010037  tbnz     w8, #0, #0x4e8c00
004E8BE4  75820191  add      x21, x19, #0x60
004E8BE8  e00315aa  mov      x0, x21
004E8BEC  49390494  bl       #0x5f7110
004E8BF0  e00315aa  mov      x0, x21
004E8BF4  4b390494  bl       #0x5f7120
004E8BF8  28008052  mov      w8, #1
004E8BFC  e8fe9f08  stlrb    w8, [x23]
004E8C00  e8098052  mov      w8, #0x4f
004E8C04  df7e5f08  ldxrb    wzr, [x22]
004E8C08  c8fe0908  stlxrb   w9, w8, [x22]
004E8C0C  c9ffff35  cbnz     w9, #0x4e8c04
004E8C10  bf3b03d5  dmb      ish
004E8C14  684e4939  ldrb     w8, [x19, #0x253]
004E8C18  e8000034  cbz      w8, #0x4e8c34
004E8C1C  e00314aa  mov      x0, x20
004E8C20  f44f43a9  ldp      x20, x19, [sp, #0x30]
004E8C24  f65742a9  ldp      x22, x21, [sp, #0x20]
004E8C28  f85f41a9  ldp      x24, x23, [sp, #0x10]
004E8C2C  fd7bc4a8  ldp      x29, x30, [sp], #0x40
004E8C30  54350414  b        #0x5f6180
004E8C34  f44f43a9  ldp      x20, x19, [sp, #0x30]
004E8C38  f65742a9  ldp      x22, x21, [sp, #0x20]
004E8C3C  f85f41a9  ldp      x24, x23, [sp, #0x10]
004E8C40  fd7bc4a8  ldp      x29, x30, [sp], #0x40
004E8C44  c0035fd6  ret      
~~~
### 0x4e8c48: sv_primary@0x781610, za_primary@0x77c790
~~~asm
004E8C48  08600991  add      x8, x0, #0x258
004E8C4C  29008052  mov      w9, #1
004E8C50  09fd9f08  stlrb    w9, [x8]
004E8C54  c0035fd6  ret      
~~~

No device writes, no runtime persistence claim. Vtable windows are not complete ABI tables; paths need receiver and buffer dataflow review.
