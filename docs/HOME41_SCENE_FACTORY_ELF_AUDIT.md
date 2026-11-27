# HOME41 Scene factory and ownership lifecycle
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a

## Relocation slots and factory table candidates
- 0x768290 -> 0x167a0
- 0x76b690 -> 0x6be00
- 0x76b698 -> 0x6bf94
- 0x76b6d0 -> 0x6bfb0
- 0x76b6e0 -> 0x6c1f4
- 0x76d698 -> 0x6f2b4

## Direct caller census
### caller 0x1686c
00016870 ccffff17 b        #0x167a0
### caller 0x16874
00016878 caffff17 b        #0x167a0
### caller 0x6ba90
0006BAE4 0e000094 bl       #0x6bb1c
### caller 0x6bb1c
0006BBA0 53000094 bl       #0x6bcec
0006BCA8 11000094 bl       #0x6bcec
### caller 0x6bcec
0006BD00 76aafe97 bl       #0x166d8
### caller 0x6be00
0006BEAC 020d0094 bl       #0x6f2b4
0006BED8 32aafe17 b        #0x167a0
### caller 0x6bedc
0006BF50 d90c0094 bl       #0x6f2b4
### caller 0x6bf84
0006BF88 9effff17 b        #0x6be00
### caller 0x6bf8c
0006BF90 9cffff17 b        #0x6be00
### caller 0x6bf94
0006BF94 9bffff17 b        #0x6be00
### caller 0x6bf98
0006BF9C 99ffff17 b        #0x6be00
### caller 0x6bfa0
0006BFA4 97ffff17 b        #0x6be00
### caller 0x6eb18
0006EB8C ca010094 bl       #0x6f2b4
### caller 0x897a0
00089AB4 0096ff97 bl       #0x6f2b4
00089BDC b695ff97 bl       #0x6f2b4
### caller 0x968e0
000968F0 7162ff97 bl       #0x6f2b4

## Complete bodies
### 0x166d8 (50 slots)
~~~asm
000166D8 ffc300d1 sub      sp, sp, #0x30
000166DC fd7b01a9 stp      x29, x30, [sp, #0x10]
000166E0 f44f02a9 stp      x20, x19, [sp, #0x20]
000166E4 fd430091 add      x29, sp, #0x10
000166E8 f30300aa mov      x19, x0
000166EC 69e6ff97 bl       #0x10090
000166F0 483c00b0 adrp     x8, #0x79f000
000166F4 a00b00d1 sub      x0, x29, #2
000166F8 087546f9 ldr      x8, [x8, #0xce8]
000166FC 610640f9 ldr      x1, [x19, #8]
00016700 7f7e06a9 stp      xzr, xzr, [x19, #0x60]
00016704 7f7e07a9 stp      xzr, xzr, [x19, #0x70]
00016708 09410091 add      x9, x8, #0x10
0001670C 0ae10191 add      x10, x8, #0x78
00016710 08e10291 add      x8, x8, #0xb8
00016714 7f4200f9 str      xzr, [x19, #0x80]
00016718 690200f9 str      x9, [x19]
0001671C 6aa204a9 stp      x10, x8, [x19, #0x48]
00016720 c9000094 bl       #0x16a44
00016724 f40300aa mov      x20, x0
00016728 51421394 bl       #0x4e706c
0001672C e00314aa mov      x0, x20
00016730 088c44f8 ldr      x8, [x0, #0x48]!
00016734 080940f9 ldr      x8, [x8, #0x10]
00016738 00013fd6 blr      x8
0001673C 603a40f9 ldr      x0, [x19, #0x70]
00016740 800000b4 cbz      x0, #0x16750
00016744 088c44f8 ldr      x8, [x0, #0x48]!
00016748 080d40f9 ldr      x8, [x8, #0x18]
0001674C 00013fd6 blr      x8
00016750 610640f9 ldr      x1, [x19, #8]
00016754 a00700d1 sub      x0, x29, #1
00016758 743a00f9 str      x20, [x19, #0x70]
0001675C ba000094 bl       #0x16a44
00016760 f40300aa mov      x20, x0
00016764 42421394 bl       #0x4e706c
00016768 e00314aa mov      x0, x20
0001676C 088c44f8 ldr      x8, [x0, #0x48]!
00016770 080940f9 ldr      x8, [x8, #0x10]
00016774 00013fd6 blr      x8
00016778 603e40f9 ldr      x0, [x19, #0x78]
0001677C 800000b4 cbz      x0, #0x1678c
00016780 088c44f8 ldr      x8, [x0, #0x48]!
00016784 080d40f9 ldr      x8, [x8, #0x18]
00016788 00013fd6 blr      x8
0001678C 743e00f9 str      x20, [x19, #0x78]
00016790 f44f42a9 ldp      x20, x19, [sp, #0x20]
00016794 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00016798 ffc30091 add      sp, sp, #0x30
0001679C c0035fd6 ret      
~~~
### 0x167a0 (51 slots)
~~~asm
000167A0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
000167A4 f30b00f9 str      x19, [sp, #0x10]
000167A8 fd030091 mov      x29, sp
000167AC 483c00b0 adrp     x8, #0x79f000
000167B0 f30300aa mov      x19, x0
000167B4 087546f9 ldr      x8, [x8, #0xce8]
000167B8 09410091 add      x9, x8, #0x10
000167BC 0ae10191 add      x10, x8, #0x78
000167C0 08e10291 add      x8, x8, #0xb8
000167C4 090000f9 str      x9, [x0]
000167C8 0aa004a9 stp      x10, x8, [x0, #0x48]
000167CC 004040f9 ldr      x0, [x0, #0x80]
000167D0 a00000b4 cbz      x0, #0x167e4
000167D4 088c44f8 ldr      x8, [x0, #0x48]!
000167D8 080d40f9 ldr      x8, [x8, #0x18]
000167DC 00013fd6 blr      x8
000167E0 7f4200f9 str      xzr, [x19, #0x80]
000167E4 603e40f9 ldr      x0, [x19, #0x78]
000167E8 a00000b4 cbz      x0, #0x167fc
000167EC 088c44f8 ldr      x8, [x0, #0x48]!
000167F0 080d40f9 ldr      x8, [x8, #0x18]
000167F4 00013fd6 blr      x8
000167F8 7f3e00f9 str      xzr, [x19, #0x78]
000167FC 603a40f9 ldr      x0, [x19, #0x70]
00016800 a00000b4 cbz      x0, #0x16814
00016804 088c44f8 ldr      x8, [x0, #0x48]!
00016808 080d40f9 ldr      x8, [x8, #0x18]
0001680C 00013fd6 blr      x8
00016810 7f3a00f9 str      xzr, [x19, #0x70]
00016814 603240f9 ldr      x0, [x19, #0x60]
00016818 a00000b4 cbz      x0, #0x1682c
0001681C 088c44f8 ldr      x8, [x0, #0x48]!
00016820 080d40f9 ldr      x8, [x8, #0x18]
00016824 00013fd6 blr      x8
00016828 7f3200f9 str      xzr, [x19, #0x60]
0001682C 883a00b0 adrp     x8, #0x767000
00016830 08012e91 add      x8, x8, #0xb80
00016834 602e40f9 ldr      x0, [x19, #0x58]
00016838 09410091 add      x9, x8, #0x10
0001683C 0a410191 add      x10, x8, #0x50
00016840 08410291 add      x8, x8, #0x90
00016844 690200f9 str      x9, [x19]
00016848 6aa204a9 stp      x10, x8, [x19, #0x48]
0001684C a00000b4 cbz      x0, #0x16860
00016850 088c44f8 ldr      x8, [x0, #0x48]!
00016854 080d40f9 ldr      x8, [x8, #0x18]
00016858 00013fd6 blr      x8
0001685C 7f2e00f9 str      xzr, [x19, #0x58]
00016860 f30b40f9 ldr      x19, [sp, #0x10]
00016864 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00016868 c0035fd6 ret      
~~~
### 0x6ba90 (35 slots)
~~~asm
0006BA90 ffc300d1 sub      sp, sp, #0x30
0006BA94 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006BA98 f31300f9 str      x19, [sp, #0x20]
0006BA9C fd430091 add      x29, sp, #0x10
0006BAA0 a8390090 adrp     x8, #0x79f000
0006BAA4 a9390090 adrp     x9, #0x79f000
0006BAA8 08ed41f9 ldr      x8, [x8, #0x3d8]
0006BAAC 080140f9 ldr      x8, [x8]
0006BAB0 080540f9 ldr      x8, [x8, #8]
0006BAB4 297942f9 ldr      x9, [x9, #0x4f0]
0006BAB8 a80f00f9 str      x8, [x29, #0x18]
0006BABC 280140f9 ldr      x8, [x9]
0006BAC0 133540f9 ldr      x19, [x8, #0x68]
0006BAC4 b30000b4 cbz      x19, #0x6bad8
0006BAC8 e00313aa mov      x0, x19
0006BACC 088c44f8 ldr      x8, [x0, #0x48]!
0006BAD0 080940f9 ldr      x8, [x8, #0x10]
0006BAD4 00013fd6 blr      x8
0006BAD8 e8230091 add      x8, sp, #8
0006BADC a1630091 add      x1, x29, #0x18
0006BAE0 e00313aa mov      x0, x19
0006BAE4 0e000094 bl       #0x6bb1c
0006BAE8 e00740f9 ldr      x0, [sp, #8]
0006BAEC 800000b4 cbz      x0, #0x6bafc
0006BAF0 088c44f8 ldr      x8, [x0, #0x48]!
0006BAF4 080d40f9 ldr      x8, [x8, #0x18]
0006BAF8 00013fd6 blr      x8
0006BAFC 688e44f8 ldr      x8, [x19, #0x48]!
0006BB00 e00313aa mov      x0, x19
0006BB04 080d40f9 ldr      x8, [x8, #0x18]
0006BB08 00013fd6 blr      x8
0006BB0C f31340f9 ldr      x19, [sp, #0x20]
0006BB10 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006BB14 ffc30091 add      sp, sp, #0x30
0006BB18 c0035fd6 ret      
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
### 0x6bcec (69 slots)
~~~asm
0006BCEC fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0006BCF0 f50b00f9 str      x21, [sp, #0x10]
0006BCF4 f44f02a9 stp      x20, x19, [sp, #0x20]
0006BCF8 fd030091 mov      x29, sp
0006BCFC f30300aa mov      x19, x0
0006BD00 76aafe97 bl       #0x166d8
0006BD04 a83900d0 adrp     x8, #0x7a1000
0006BD08 35008052 mov      w21, #1
0006BD0C 082942f9 ldr      x8, [x8, #0x450]
0006BD10 7ffe08a9 stp      xzr, xzr, [x19, #0x88]
0006BD14 60820491 add      x0, x19, #0x120
0006BD18 7ffe09a9 stp      xzr, xzr, [x19, #0x98]
0006BD1C a2568052 mov      w2, #0x2b5
0006BD20 e1031f2a mov      w1, wzr
0006BD24 74c20491 add      x20, x19, #0x130
0006BD28 09410091 add      x9, x8, #0x10
0006BD2C 75aa00b9 str      w21, [x19, #0xa8]
0006BD30 7f8600f9 str      xzr, [x19, #0x108]
0006BD34 7f1201b9 str      wzr, [x19, #0x110]
0006BD38 7fc20af8 stur     xzr, [x19, #0xac]
0006BD3C 7f420bf8 stur     xzr, [x19, #0xb4]
0006BD40 7fc20bf8 stur     xzr, [x19, #0xbc]
0006BD44 690200f9 str      x9, [x19]
0006BD48 09e10191 add      x9, x8, #0x78
0006BD4C 08e10291 add      x8, x8, #0xb8
0006BD50 7f420cf8 stur     xzr, [x19, #0xc4]
0006BD54 69a204a9 stp      x9, x8, [x19, #0x48]
0006BD58 a83900d0 adrp     x8, #0x7a1000
0006BD5C 7f7e0da9 stp      xzr, xzr, [x19, #0xd0]
0006BD60 7f7e0ea9 stp      xzr, xzr, [x19, #0xe0]
0006BD64 7f7e0fa9 stp      xzr, xzr, [x19, #0xf0]
0006BD68 082d42f9 ldr      x8, [x8, #0x458]
0006BD6C 08410091 add      x8, x8, #0x10
0006BD70 7f0201b9 str      wzr, [x19, #0x100]
0006BD74 7fee01f9 str      xzr, [x19, #0x3d8]
0006BD78 688e00f9 str      x8, [x19, #0x118]
0006BD7C f5281694 bl       #0x5f6150
0006BD80 e00314aa mov      x0, x20
0006BD84 8e0b0094 bl       #0x6ebbc
0006BD88 68e21091 add      x8, x19, #0x438
0006BD8C 60621191 add      x0, x19, #0x458
0006BD90 7f1a02f9 str      xzr, [x19, #0x430]
0006BD94 7f1602f9 str      xzr, [x19, #0x428]
0006BD98 7f1202f9 str      xzr, [x19, #0x420]
0006BD9C 7f0e02f9 str      xzr, [x19, #0x418]
0006BDA0 7f0a02f9 str      xzr, [x19, #0x410]
0006BDA4 7f0602f9 str      xzr, [x19, #0x408]
0006BDA8 7f0202f9 str      xzr, [x19, #0x400]
0006BDAC 7ffe01f9 str      xzr, [x19, #0x3f8]
0006BDB0 7ffa01f9 str      xzr, [x19, #0x3f0]
0006BDB4 7ff601f9 str      xzr, [x19, #0x3e8]
0006BDB8 7ff201f9 str      xzr, [x19, #0x3e0]
0006BDBC 75e21039 strb     w21, [x19, #0x438]
0006BDC0 1f4100f8 stur     xzr, [x8, #4]
0006BDC4 1fc100f8 stur     xzr, [x8, #0xc]
0006BDC8 7f4e04b9 str      wzr, [x19, #0x44c]
0006BDCC b190fe97 bl       #0x10090
0006BDD0 08380090 adrp     x8, #0x76b000
0006BDD4 08c11d91 add      x8, x8, #0x770
0006BDD8 f50b40f9 ldr      x21, [sp, #0x10]
0006BDDC 09410091 add      x9, x8, #0x10
0006BDE0 692e02f9 str      x9, [x19, #0x458]
0006BDE4 09e10191 add      x9, x8, #0x78
0006BDE8 08e10291 add      x8, x8, #0xb8
0006BDEC 695202f9 str      x9, [x19, #0x4a0]
0006BDF0 685602f9 str      x8, [x19, #0x4a8]
0006BDF4 f44f42a9 ldp      x20, x19, [sp, #0x20]
0006BDF8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0006BDFC c0035fd6 ret      
~~~
### 0x6be00 (55 slots)
~~~asm
0006BE00 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0006BE04 f44f01a9 stp      x20, x19, [sp, #0x10]
0006BE08 fd030091 mov      x29, sp
0006BE0C a8390090 adrp     x8, #0x79f000
0006BE10 f30300aa mov      x19, x0
0006BE14 08d943f9 ldr      x8, [x8, #0x7b0]
0006BE18 09410091 add      x9, x8, #0x10
0006BE1C 0a410191 add      x10, x8, #0x50
0006BE20 08410291 add      x8, x8, #0x90
0006BE24 092c02f9 str      x9, [x0, #0x458]
0006BE28 0a5002f9 str      x10, [x0, #0x4a0]
0006BE2C 085402f9 str      x8, [x0, #0x4a8]
0006BE30 005842f9 ldr      x0, [x0, #0x4b0]
0006BE34 a00000b4 cbz      x0, #0x6be48
0006BE38 088c44f8 ldr      x8, [x0, #0x48]!
0006BE3C 080d40f9 ldr      x8, [x8, #0x18]
0006BE40 00013fd6 blr      x8
0006BE44 7f5a02f9 str      xzr, [x19, #0x4b0]
0006BE48 601642f9 ldr      x0, [x19, #0x428]
0006BE4C a00000b4 cbz      x0, #0x6be60
0006BE50 088c44f8 ldr      x8, [x0, #0x48]!
0006BE54 080d40f9 ldr      x8, [x8, #0x18]
0006BE58 00013fd6 blr      x8
0006BE5C 7f1602f9 str      xzr, [x19, #0x428]
0006BE60 601242f9 ldr      x0, [x19, #0x420]
0006BE64 a00000b4 cbz      x0, #0x6be78
0006BE68 088c44f8 ldr      x8, [x0, #0x48]!
0006BE6C 080d40f9 ldr      x8, [x8, #0x18]
0006BE70 00013fd6 blr      x8
0006BE74 7f1202f9 str      xzr, [x19, #0x420]
0006BE78 610242f9 ldr      x1, [x19, #0x400]
0006BE7C 7f0202f9 str      xzr, [x19, #0x400]
0006BE80 e10000b4 cbz      x1, #0x6be9c
0006BE84 600642f9 ldr      x0, [x19, #0x408]
0006BE88 620a42f9 ldr      x2, [x19, #0x410]
0006BE8C 630e42f9 ldr      x3, [x19, #0x418]
0006BE90 080040f9 ldr      x8, [x0]
0006BE94 080d40f9 ldr      x8, [x8, #0x18]
0006BE98 00013fd6 blr      x8
0006BE9C 74f241f9 ldr      x20, [x19, #0x3e0]
0006BEA0 7ff201f9 str      xzr, [x19, #0x3e0]
0006BEA4 540100b4 cbz      x20, #0x6becc
0006BEA8 e00314aa mov      x0, x20
0006BEAC 020d0094 bl       #0x6f2b4
0006BEB0 60f641f9 ldr      x0, [x19, #0x3e8]
0006BEB4 e10314aa mov      x1, x20
0006BEB8 62fa41f9 ldr      x2, [x19, #0x3f0]
0006BEBC 63fe41f9 ldr      x3, [x19, #0x3f8]
0006BEC0 080040f9 ldr      x8, [x0]
0006BEC4 080d40f9 ldr      x8, [x8, #0x18]
0006BEC8 00013fd6 blr      x8
0006BECC e00313aa mov      x0, x19
0006BED0 f44f41a9 ldp      x20, x19, [sp, #0x10]
0006BED4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006BED8 32aafe17 b        #0x167a0
~~~
### 0x6bf84 (2 slots)
~~~asm
0006BF84 002001d1 sub      x0, x0, #0x48
0006BF88 9effff17 b        #0x6be00
~~~
### 0x6bf8c (2 slots)
~~~asm
0006BF8C 004001d1 sub      x0, x0, #0x50
0006BF90 9cffff17 b        #0x6be00
~~~
### 0x6bf94 (1 slots)
~~~asm
0006BF94 9bffff17 b        #0x6be00
~~~
### 0x6bf98 (2 slots)
~~~asm
0006BF98 002001d1 sub      x0, x0, #0x48
0006BF9C 99ffff17 b        #0x6be00
~~~
### 0x6bfa0 (2 slots)
~~~asm
0006BFA0 004001d1 sub      x0, x0, #0x50
0006BFA4 97ffff17 b        #0x6be00
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
### 0x6caa4 (37 slots)
~~~asm
0006CAA4 ffc300d1 sub      sp, sp, #0x30
0006CAA8 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006CAAC f44f02a9 stp      x20, x19, [sp, #0x20]
0006CAB0 fd430091 add      x29, sp, #0x10
0006CAB4 883900f0 adrp     x8, #0x79f000
0006CAB8 893900f0 adrp     x9, #0x79f000
0006CABC 08ed41f9 ldr      x8, [x8, #0x3d8]
0006CAC0 080140f9 ldr      x8, [x8]
0006CAC4 143540f9 ldr      x20, [x8, #0x68]
0006CAC8 082540f9 ldr      x8, [x8, #0x48]
0006CACC 297942f9 ldr      x9, [x9, #0x4f0]
0006CAD0 e80700f9 str      x8, [sp, #8]
0006CAD4 280140f9 ldr      x8, [x9]
0006CAD8 133140f9 ldr      x19, [x8, #0x60]
0006CADC b30000b4 cbz      x19, #0x6caf0
0006CAE0 e00313aa mov      x0, x19
0006CAE4 088c44f8 ldr      x8, [x0, #0x48]!
0006CAE8 080940f9 ldr      x8, [x8, #0x10]
0006CAEC 00013fd6 blr      x8
0006CAF0 e8030091 mov      x8, sp
0006CAF4 e2230091 add      x2, sp, #8
0006CAF8 e00313aa mov      x0, x19
0006CAFC e10314aa mov      x1, x20
0006CB00 5b0b0094 bl       #0x6f86c
0006CB04 688e44f8 ldr      x8, [x19, #0x48]!
0006CB08 e00313aa mov      x0, x19
0006CB0C 080d40f9 ldr      x8, [x8, #0x18]
0006CB10 00013fd6 blr      x8
0006CB14 e00340f9 ldr      x0, [sp]
0006CB18 800000b4 cbz      x0, #0x6cb28
0006CB1C 088c44f8 ldr      x8, [x0, #0x48]!
0006CB20 080d40f9 ldr      x8, [x8, #0x18]
0006CB24 00013fd6 blr      x8
0006CB28 f44f42a9 ldp      x20, x19, [sp, #0x20]
0006CB2C fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006CB30 ffc30091 add      sp, sp, #0x30
0006CB34 c0035fd6 ret      
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
### 0x6f2b4 (46 slots)
~~~asm
0006F2B4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0006F2B8 f44f01a9 stp      x20, x19, [sp, #0x10]
0006F2BC fd030091 mov      x29, sp
0006F2C0 142040f9 ldr      x20, [x0, #0x40]
0006F2C4 f30300aa mov      x19, x0
0006F2C8 1f2000f9 str      xzr, [x0, #0x40]
0006F2CC 340100b4 cbz      x20, #0x6f2f0
0006F2D0 e00314aa mov      x0, x20
0006F2D4 26000094 bl       #0x6f36c
0006F2D8 608a44a9 ldp      x0, x2, [x19, #0x48]
0006F2DC e10314aa mov      x1, x20
0006F2E0 632e40f9 ldr      x3, [x19, #0x58]
0006F2E4 080040f9 ldr      x8, [x0]
0006F2E8 080d40f9 ldr      x8, [x8, #0x18]
0006F2EC 00013fd6 blr      x8
0006F2F0 601e40f9 ldr      x0, [x19, #0x38]
0006F2F4 a00000b4 cbz      x0, #0x6f308
0006F2F8 088c44f8 ldr      x8, [x0, #0x48]!
0006F2FC 080d40f9 ldr      x8, [x8, #0x18]
0006F300 00013fd6 blr      x8
0006F304 7f1e00f9 str      xzr, [x19, #0x38]
0006F308 601a40f9 ldr      x0, [x19, #0x30]
0006F30C a00000b4 cbz      x0, #0x6f320
0006F310 088c44f8 ldr      x8, [x0, #0x48]!
0006F314 080d40f9 ldr      x8, [x8, #0x18]
0006F318 00013fd6 blr      x8
0006F31C 7f1a00f9 str      xzr, [x19, #0x30]
0006F320 601640f9 ldr      x0, [x19, #0x28]
0006F324 a00000b4 cbz      x0, #0x6f338
0006F328 088c44f8 ldr      x8, [x0, #0x48]!
0006F32C 080d40f9 ldr      x8, [x8, #0x18]
0006F330 00013fd6 blr      x8
0006F334 7f1600f9 str      xzr, [x19, #0x28]
0006F338 610640f9 ldr      x1, [x19, #8]
0006F33C 7f0600f9 str      xzr, [x19, #8]
0006F340 010100b4 cbz      x1, #0x6f360
0006F344 600a41a9 ldp      x0, x2, [x19, #0x10]
0006F348 631240f9 ldr      x3, [x19, #0x20]
0006F34C f44f41a9 ldp      x20, x19, [sp, #0x10]
0006F350 080040f9 ldr      x8, [x0]
0006F354 040d40f9 ldr      x4, [x8, #0x18]
0006F358 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006F35C 80001fd6 br       x4
0006F360 f44f41a9 ldp      x20, x19, [sp, #0x10]
0006F364 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006F368 c0035fd6 ret      
~~~
