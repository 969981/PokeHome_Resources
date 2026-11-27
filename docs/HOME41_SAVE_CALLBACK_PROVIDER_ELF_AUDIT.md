# HOME41 original ELF callback and provider audit
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a

Candidate matching is not type proof. No live operations.
## Focused original FDEs
### 0x1b1fcc (28 bytes; 7 slots)
~~~asm
001B1FCC 001841f9 ldr      x0, [x0, #0x230]
001B1FD0 000100f9 str      x0, [x8]
001B1FD4 800000b4 cbz      x0, #0x1b1fe4
001B1FD8 088c44f8 ldr      x8, [x0, #0x48]!
001B1FDC 010940f9 ldr      x1, [x8, #0x10]
001B1FE0 20001fd6 br       x1
001B1FE4 c0035fd6 ret      
~~~
### 0x1bb4dc (264 bytes; 66 slots)
~~~asm
001BB4DC ff8301d1 sub      sp, sp, #0x60
001BB4E0 fd7b02a9 stp      x29, x30, [sp, #0x20]
001BB4E4 f71b00f9 str      x23, [sp, #0x30]
001BB4E8 f65704a9 stp      x22, x21, [sp, #0x40]
001BB4EC f44f05a9 stp      x20, x19, [sp, #0x50]
001BB4F0 fd830091 add      x29, sp, #0x20
001BB4F4 f30301aa mov      x19, x1
001BB4F8 f60300aa mov      x22, x0
001BB4FC a20f00f9 str      x2, [x29, #0x18]
001BB500 a82300d1 sub      x8, x29, #8
001BB504 a1630091 add      x1, x29, #0x18
001BB508 e00302aa mov      x0, x2
001BB50C f403042a mov      w20, w4
001BB510 f503032a mov      w21, w3
001BB514 669fff97 bl       #0x1a32ac
001BB518 730240f9 ldr      x19, [x19]
001BB51C f30b00f9 str      x19, [sp, #0x10]
001BB520 b30000b4 cbz      x19, #0x1bb534
001BB524 e00313aa mov      x0, x19
001BB528 088c44f8 ldr      x8, [x0, #0x48]!
001BB52C 080940f9 ldr      x8, [x8, #0x10]
001BB530 00013fd6 blr      x8
001BB534 b7835ff8 ldur     x23, [x29, #-8]
001BB538 f70700f9 str      x23, [sp, #8]
001BB53C 370400b4 cbz      x23, #0x1bb5c0
001BB540 e88e44f8 ldr      x8, [x23, #0x48]!
001BB544 e00317aa mov      x0, x23
001BB548 080940f9 ldr      x8, [x8, #0x10]
001BB54C 00013fd6 blr      x8
001BB550 e1430091 add      x1, sp, #0x10
001BB554 e2230091 add      x2, sp, #8
001BB558 e00316aa mov      x0, x22
001BB55C e303152a mov      w3, w21
001BB560 e403142a mov      w4, w20
001BB564 65ffff97 bl       #0x1bb2f8
001BB568 e80240f9 ldr      x8, [x23]
001BB56C f403002a mov      w20, w0
001BB570 e00317aa mov      x0, x23
001BB574 080d40f9 ldr      x8, [x8, #0x18]
001BB578 00013fd6 blr      x8
001BB57C b30000b4 cbz      x19, #0x1bb590
001BB580 688e44f8 ldr      x8, [x19, #0x48]!
001BB584 e00313aa mov      x0, x19
001BB588 080d40f9 ldr      x8, [x8, #0x18]
001BB58C 00013fd6 blr      x8
001BB590 a0835ff8 ldur     x0, [x29, #-8]
001BB594 800000b4 cbz      x0, #0x1bb5a4
001BB598 088c44f8 ldr      x8, [x0, #0x48]!
001BB59C 080d40f9 ldr      x8, [x8, #0x18]
001BB5A0 00013fd6 blr      x8
001BB5A4 80020012 and      w0, w20, #1
001BB5A8 f44f45a9 ldp      x20, x19, [sp, #0x50]
001BB5AC f65744a9 ldp      x22, x21, [sp, #0x40]
001BB5B0 f71b40f9 ldr      x23, [sp, #0x30]
001BB5B4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
001BB5B8 ff830191 add      sp, sp, #0x60
001BB5BC c0035fd6 ret      
001BB5C0 e1430091 add      x1, sp, #0x10
001BB5C4 e2230091 add      x2, sp, #8
001BB5C8 e00316aa mov      x0, x22
001BB5CC e303152a mov      w3, w21
001BB5D0 e403142a mov      w4, w20
001BB5D4 49ffff97 bl       #0x1bb2f8
001BB5D8 f403002a mov      w20, w0
001BB5DC 33fdffb5 cbnz     x19, #0x1bb580
001BB5E0 ecffff17 b        #0x1bb590
~~~
### 0x1bb5e4 (572 bytes; 143 slots)
~~~asm
001BB5E4 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
001BB5E8 fb0b00f9 str      x27, [sp, #0x10]
001BB5EC fa6702a9 stp      x26, x25, [sp, #0x20]
001BB5F0 f85f03a9 stp      x24, x23, [sp, #0x30]
001BB5F4 f65704a9 stp      x22, x21, [sp, #0x40]
001BB5F8 f44f05a9 stp      x20, x19, [sp, #0x50]
001BB5FC fd030091 mov      x29, sp
001BB600 5f7c0071 cmp      w2, #0x1f
001BB604 080f0054 b.hi     #0x1bb7e4
001BB608 f503032a mov      w21, w3
001BB60C 7f740071 cmp      w3, #0x1d
001BB610 a80e0054 b.hi     #0x1bb7e4
001BB614 08504191 add      x8, x0, #0x54, lsl #12
001BB618 f603022a mov      w22, w2
001BB61C f40301aa mov      x20, x1
001BB620 19813d91 add      x25, x8, #0xf60
001BB624 370340f9 ldr      x23, [x25]
001BB628 f30300aa mov      x19, x0
001BB62C 1a468552 mov      w26, #0x2a30
001BB630 1b2d8052 mov      w27, #0x168
001BB634 770e00b4 cbz      x23, #0x1bb800
001BB638 f80317aa mov      x24, x23
001BB63C 088f44f8 ldr      x8, [x24, #0x48]!
001BB640 e00318aa mov      x0, x24
001BB644 080940f9 ldr      x8, [x8, #0x10]
001BB648 00013fd6 blr      x8
001BB64C c84eba9b umaddl   x8, w22, w26, x19
001BB650 e00317aa mov      x0, x23
001BB654 a822bb9b umaddl   x8, w21, w27, x8
001BB658 01810191 add      x1, x8, #0x60
001BB65C 07030d94 bl       #0x4fc278
001BB660 080340f9 ldr      x8, [x24]
001BB664 e00318aa mov      x0, x24
001BB668 080d40f9 ldr      x8, [x8, #0x18]
001BB66C 00013fd6 blr      x8
001BB670 370340f9 ldr      x23, [x25]
001BB674 b70000b4 cbz      x23, #0x1bb688
001BB678 e00317aa mov      x0, x23
001BB67C 088c44f8 ldr      x8, [x0, #0x48]!
001BB680 080940f9 ldr      x8, [x8, #0x10]
001BB684 00013fd6 blr      x8
001BB688 e00317aa mov      x0, x23
001BB68C 5fd60d94 bl       #0x531008
001BB690 a0010034 cbz      w0, #0x1bb6c4
001BB694 f803002a mov      w24, w0
001BB698 e00317aa mov      x0, x23
001BB69C 41008052 mov      w1, #2
001BB6A0 25e10d94 bl       #0x533b34
001BB6A4 00010037 tbnz     w0, #0, #0x1bb6c4
001BB6A8 68524191 add      x8, x19, #0x54, lsl #12
001BB6AC 08611d91 add      x8, x8, #0x758
001BB6B0 09597878 ldrh     w9, [x8, w24, uxtw #1]
001BB6B4 89000034 cbz      w9, #0x1bb6c4
001BB6B8 ea03182a mov      w10, w24
001BB6BC 29050051 sub      w9, w9, #1
001BB6C0 09792a78 strh     w9, [x8, x10, lsl #1]
001BB6C4 e88e44f8 ldr      x8, [x23, #0x48]!
001BB6C8 e00317aa mov      x0, x23
001BB6CC 080d40f9 ldr      x8, [x8, #0x18]
001BB6D0 00013fd6 blr      x8
001BB6D4 c84eba9b umaddl   x8, w22, w26, x19
001BB6D8 810240f9 ldr      x1, [x20]
001BB6DC a822bb9b umaddl   x8, w21, w27, x8
001BB6E0 00810191 add      x0, x8, #0x60
001BB6E4 cb020d94 bl       #0x4fc210
001BB6E8 970240f9 ldr      x23, [x20]
001BB6EC 68524191 add      x8, x19, #0x54, lsl #12
001BB6F0 18a11991 add      x24, x8, #0x668
001BB6F4 b70000b4 cbz      x23, #0x1bb708
001BB6F8 e00317aa mov      x0, x23
001BB6FC 088c44f8 ldr      x8, [x0, #0x48]!
001BB700 080940f9 ldr      x8, [x8, #0x10]
001BB704 00013fd6 blr      x8
001BB708 e00317aa mov      x0, x23
001BB70C 9ad60d94 bl       #0x531174
001BB710 c8038052 mov      w8, #0x1e
001BB714 2a008052 mov      w10, #1
001BB718 c956081b madd     w9, w22, w8, w21
001BB71C 28fd46d3 lsr      x8, x9, #6
001BB720 4921c99a lsl      x9, x10, x9
001BB724 80000036 tbz      w0, #0, #0x1bb734
001BB728 0a7b68f8 ldr      x10, [x24, x8, lsl #3]
001BB72C 4901298a bic      x9, x10, x9
001BB730 03000014 b        #0x1bb73c
001BB734 0a7b68f8 ldr      x10, [x24, x8, lsl #3]
001BB738 490109aa orr      x9, x10, x9
001BB73C 097b28f8 str      x9, [x24, x8, lsl #3]
001BB740 e88e44f8 ldr      x8, [x23, #0x48]!
001BB744 e00317aa mov      x0, x23
001BB748 080d40f9 ldr      x8, [x8, #0x18]
001BB74C 00013fd6 blr      x8
001BB750 940240f9 ldr      x20, [x20]
001BB754 b40000b4 cbz      x20, #0x1bb768
001BB758 e00314aa mov      x0, x20
001BB75C 088c44f8 ldr      x8, [x0, #0x48]!
001BB760 080940f9 ldr      x8, [x8, #0x10]
001BB764 00013fd6 blr      x8
001BB768 e00314aa mov      x0, x20
001BB76C 27d60d94 bl       #0x531008
001BB770 c0010034 cbz      w0, #0x1bb7a8
001BB774 f503002a mov      w21, w0
001BB778 e00314aa mov      x0, x20
001BB77C 41008052 mov      w1, #2
001BB780 ede00d94 bl       #0x533b34
001BB784 20010037 tbnz     w0, #0, #0x1bb7a8
001BB788 68524191 add      x8, x19, #0x54, lsl #12
001BB78C 08611d91 add      x8, x8, #0x758
001BB790 09597578 ldrh     w9, [x8, w21, uxtw #1]
001BB794 3ffd0e71 cmp      w9, #0x3bf
001BB798 88000054 b.hi     #0x1bb7a8
001BB79C ea03152a mov      w10, w21
001BB7A0 29050011 add      w9, w9, #1
001BB7A4 09792a78 strh     w9, [x8, x10, lsl #1]
001BB7A8 888e44f8 ldr      x8, [x20, #0x48]!
001BB7AC e00314aa mov      x0, x20
001BB7B0 080d40f9 ldr      x8, [x8, #0x18]
001BB7B4 00013fd6 blr      x8
001BB7B8 210b40f9 ldr      x1, [x25, #0x10]
001BB7BC 410100b4 cbz      x1, #0x1bb7e4
001BB7C0 68524191 add      x8, x19, #0x54, lsl #12
001BB7C4 f44f45a9 ldp      x20, x19, [sp, #0x50]
001BB7C8 f65744a9 ldp      x22, x21, [sp, #0x40]
001BB7CC 00413e91 add      x0, x8, #0xf90
001BB7D0 f85f43a9 ldp      x24, x23, [sp, #0x30]
001BB7D4 fb0b40f9 ldr      x27, [sp, #0x10]
001BB7D8 fa6742a9 ldp      x26, x25, [sp, #0x20]
001BB7DC fd7bc6a8 ldp      x29, x30, [sp], #0x60
001BB7E0 20001fd6 br       x1
001BB7E4 f44f45a9 ldp      x20, x19, [sp, #0x50]
001BB7E8 fb0b40f9 ldr      x27, [sp, #0x10]
001BB7EC f65744a9 ldp      x22, x21, [sp, #0x40]
001BB7F0 f85f43a9 ldp      x24, x23, [sp, #0x30]
001BB7F4 fa6742a9 ldp      x26, x25, [sp, #0x20]
001BB7F8 fd7bc6a8 ldp      x29, x30, [sp], #0x60
001BB7FC c0035fd6 ret      
001BB800 c84eba9b umaddl   x8, w22, w26, x19
001BB804 e0031faa mov      x0, xzr
001BB808 a822bb9b umaddl   x8, w21, w27, x8
001BB80C 01810191 add      x1, x8, #0x60
001BB810 9a020d94 bl       #0x4fc278
001BB814 370340f9 ldr      x23, [x25]
001BB818 17f3ffb5 cbnz     x23, #0x1bb678
001BB81C 9bffff17 b        #0x1bb688
~~~
### 0x1bb820 (196 bytes; 49 slots)
~~~asm
001BB820 ff4301d1 sub      sp, sp, #0x50
001BB824 fd7b02a9 stp      x29, x30, [sp, #0x20]
001BB828 f65703a9 stp      x22, x21, [sp, #0x30]
001BB82C f44f04a9 stp      x20, x19, [sp, #0x40]
001BB830 fd830091 add      x29, sp, #0x20
001BB834 f503012a mov      w21, w1
001BB838 f60300aa mov      x22, x0
001BB83C e30b00f9 str      x3, [sp, #0x10]
001BB840 e8230091 add      x8, sp, #8
001BB844 e1430091 add      x1, sp, #0x10
001BB848 e00303aa mov      x0, x3
001BB84C f303022a mov      w19, w2
001BB850 979eff97 bl       #0x1a32ac
001BB854 f40740f9 ldr      x20, [sp, #8]
001BB858 b40000b4 cbz      x20, #0x1bb86c
001BB85C e00314aa mov      x0, x20
001BB860 088c44f8 ldr      x8, [x0, #0x48]!
001BB864 080940f9 ldr      x8, [x8, #0x10]
001BB868 00013fd6 blr      x8
001BB86C e00314aa mov      x0, x20
001BB870 3fd60d94 bl       #0x53116c
001BB874 b4831ff8 stur     x20, [x29, #-8]
001BB878 888e44f8 ldr      x8, [x20, #0x48]!
001BB87C e00314aa mov      x0, x20
001BB880 080940f9 ldr      x8, [x8, #0x10]
001BB884 00013fd6 blr      x8
001BB888 a12300d1 sub      x1, x29, #8
001BB88C e00316aa mov      x0, x22
001BB890 e203152a mov      w2, w21
001BB894 e303132a mov      w3, w19
001BB898 53ffff97 bl       #0x1bb5e4
001BB89C 880240f9 ldr      x8, [x20]
001BB8A0 e00314aa mov      x0, x20
001BB8A4 080d40f9 ldr      x8, [x8, #0x18]
001BB8A8 00013fd6 blr      x8
001BB8AC 880240f9 ldr      x8, [x20]
001BB8B0 e00314aa mov      x0, x20
001BB8B4 080d40f9 ldr      x8, [x8, #0x18]
001BB8B8 00013fd6 blr      x8
001BB8BC e00740f9 ldr      x0, [sp, #8]
001BB8C0 800000b4 cbz      x0, #0x1bb8d0
001BB8C4 088c44f8 ldr      x8, [x0, #0x48]!
001BB8C8 080d40f9 ldr      x8, [x8, #0x18]
001BB8CC 00013fd6 blr      x8
001BB8D0 f44f44a9 ldp      x20, x19, [sp, #0x40]
001BB8D4 f65743a9 ldp      x22, x21, [sp, #0x30]
001BB8D8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
001BB8DC ff430191 add      sp, sp, #0x50
001BB8E0 c0035fd6 ret      
~~~
### 0x1bb8e4 (1264 bytes; 316 slots)
~~~asm
001BB8E4 ff4303d1 sub      sp, sp, #0xd0
001BB8E8 fd7b08a9 stp      x29, x30, [sp, #0x80]
001BB8EC f94b00f9 str      x25, [sp, #0x90]
001BB8F0 f85f0aa9 stp      x24, x23, [sp, #0xa0]
001BB8F4 f6570ba9 stp      x22, x21, [sp, #0xb0]
001BB8F8 f44f0ca9 stp      x20, x19, [sp, #0xc0]
001BB8FC fd030291 add      x29, sp, #0x80
001BB900 f603012a mov      w22, w1
001BB904 f70300aa mov      x23, x0
001BB908 e41300f9 str      x4, [sp, #0x20]
001BB90C a8630091 add      x8, x29, #0x18
001BB910 e1830091 add      x1, sp, #0x20
001BB914 e00304aa mov      x0, x4
001BB918 f30304aa mov      x19, x4
001BB91C f80303aa mov      x24, x3
001BB920 f503022a mov      w21, w2
001BB924 629eff97 bl       #0x1a32ac
001BB928 b40f40f9 ldr      x20, [x29, #0x18]
001BB92C b40000b4 cbz      x20, #0x1bb940
001BB930 e00314aa mov      x0, x20
001BB934 088c44f8 ldr      x8, [x0, #0x48]!
001BB938 080940f9 ldr      x8, [x8, #0x10]
001BB93C 00013fd6 blr      x8
001BB940 df7e0071 cmp      w22, #0x1f
001BB944 48010054 b.hi     #0x1bb96c
001BB948 bf760071 cmp      w21, #0x1d
001BB94C 08010054 b.hi     #0x1bb96c
001BB950 08468552 mov      w8, #0x2a30
001BB954 092d8052 mov      w9, #0x168
001BB958 c85ea89b umaddl   x8, w22, w8, x23
001BB95C e00314aa mov      x0, x20
001BB960 a822a99b umaddl   x8, w21, w9, x8
001BB964 01810191 add      x1, x8, #0x60
001BB968 44020d94 bl       #0x4fc278
001BB96C b40000b4 cbz      x20, #0x1bb980
001BB970 888e44f8 ldr      x8, [x20, #0x48]!
001BB974 e00314aa mov      x0, x20
001BB978 080d40f9 ldr      x8, [x8, #0x18]
001BB97C 00013fd6 blr      x8
001BB980 a00f40f9 ldr      x0, [x29, #0x18]
001BB984 802100b4 cbz      x0, #0x1bbdb4
001BB988 fbd50d94 bl       #0x531174
001BB98C a0200037 tbnz     w0, #0, #0x1bbda0
001BB990 283100d0 adrp     x8, #0x7e1000
001BB994 08411891 add      x8, x8, #0x610
001BB998 140140f9 ldr      x20, [x8]
001BB99C e8830091 add      x8, sp, #0x20
001BB9A0 bf7f3fa9 stp      xzr, xzr, [x29, #-0x10]
001BB9A4 bf7f3ea9 stp      xzr, xzr, [x29, #-0x20]
001BB9A8 e00314aa mov      x0, x20
001BB9AC 9dd9ff97 bl       #0x1b2020
001BB9B0 e01340f9 ldr      x0, [sp, #0x20]
001BB9B4 a18300d1 sub      x1, x29, #0x20
001BB9B8 29d0ff97 bl       #0x1afa5c
001BB9BC e01340f9 ldr      x0, [sp, #0x20]
001BB9C0 800000b4 cbz      x0, #0x1bb9d0
001BB9C4 088c44f8 ldr      x8, [x0, #0x48]!
001BB9C8 080d40f9 ldr      x8, [x8, #0x18]
001BB9CC 00013fd6 blr      x8
001BB9D0 a00f40f9 ldr      x0, [x29, #0x18]
001BB9D4 4de00d94 bl       #0x533b08
001BB9D8 f903002a mov      w25, w0
001BB9DC a00f40f9 ldr      x0, [x29, #0x18]
001BB9E0 e1830091 add      x1, sp, #0x20
001BB9E4 02048052 mov      w2, #0x20
001BB9E8 ff7f05a9 stp      xzr, xzr, [sp, #0x50]
001BB9EC ff7f04a9 stp      xzr, xzr, [sp, #0x40]
001BB9F0 ff7f03a9 stp      xzr, xzr, [sp, #0x30]
001BB9F4 ff7f02a9 stp      xzr, xzr, [sp, #0x20]
001BB9F8 42e00d94 bl       #0x533b00
001BB9FC a8435e38 ldurb    w8, [x29, #-0x1c]
001BBA00 3f03086b cmp      w25, w8
001BBA04 a1010054 b.ne     #0x1bba38
001BBA08 a88300d1 sub      x8, x29, #0x20
001BBA0C 42038052 mov      w2, #0x1a
001BBA10 e1830091 add      x1, sp, #0x20
001BBA14 00057fb2 orr      x0, x8, #6
001BBA18 d6eb1094 bl       #0x5f6970
001BBA1C 1f000071 cmp      w0, #0
001BBA20 f9179f1a cset     w25, eq
001BBA24 083b40b9 ldr      w8, [x24, #0x38]
001BBA28 08050051 sub      w8, w8, #1
001BBA2C 1f050071 cmp      w8, #1
001BBA30 e9000054 b.ls     #0x1bba4c
001BBA34 0a000014 b        #0x1bba5c
001BBA38 f9031f2a mov      w25, wzr
001BBA3C 083b40b9 ldr      w8, [x24, #0x38]
001BBA40 08050051 sub      w8, w8, #1
001BBA44 1f050071 cmp      w8, #1
001BBA48 a8000054 b.hi     #0x1bba5c
001BBA4C a00f40f9 ldr      x0, [x29, #0x18]
001BBA50 30e00d94 bl       #0x533b10
001BBA54 1f1c0072 tst      w0, #0xff
001BBA58 40020054 b.eq     #0x1bbaa0
001BBA5C a00f40f9 ldr      x0, [x29, #0x18]
001BBA60 a18300d1 sub      x1, x29, #0x20
001BBA64 b5df0d94 bl       #0x533938
001BBA68 e803002a mov      w8, w0
001BBA6C a00f40f9 ldr      x0, [x29, #0x18]
001BBA70 68000036 tbz      w8, #0, #0x1bba7c
001BBA74 e1031f2a mov      w1, wzr
001BBA78 03000014 b        #0x1bba84
001BBA7C 59010034 cbz      w25, #0x1bbaa4
001BBA80 21008052 mov      w1, #1
001BBA84 11e00d94 bl       #0x533ac8
001BBA88 a00f40f9 ldr      x0, [x29, #0x18]
001BBA8C e1031f2a mov      w1, wzr
001BBA90 a7d60d94 bl       #0x53152c
001BBA94 1f7c0071 cmp      w0, #0x1f
001BBA98 00020054 b.eq     #0x1bbad8
001BBA9C 16000014 b        #0x1bbaf4
001BBAA0 a00f40f9 ldr      x0, [x29, #0x18]
001BBAA4 41068052 mov      w1, #0x32
001BBAA8 1ce00d94 bl       #0x533b18
001BBAAC a00f40f9 ldr      x0, [x29, #0x18]
001BBAB0 e1031f2a mov      w1, wzr
001BBAB4 1ad60d94 bl       #0x53131c
001BBAB8 a00f40f9 ldr      x0, [x29, #0x18]
001BBABC a18300d1 sub      x1, x29, #0x20
001BBAC0 b9df0d94 bl       #0x5339a4
001BBAC4 a00f40f9 ldr      x0, [x29, #0x18]
001BBAC8 e1031f2a mov      w1, wzr
001BBACC 98d60d94 bl       #0x53152c
001BBAD0 1f7c0071 cmp      w0, #0x1f
001BBAD4 01010054 b.ne     #0x1bbaf4
001BBAD8 a00f40f9 ldr      x0, [x29, #0x18]
001BBADC e1031f2a mov      w1, wzr
001BBAE0 bfd60d94 bl       #0x5315dc
001BBAE4 80000036 tbz      w0, #0, #0x1bbaf4
001BBAE8 a00f40f9 ldr      x0, [x29, #0x18]
001BBAEC e1031f2a mov      w1, wzr
001BBAF0 a6d70d94 bl       #0x531988
001BBAF4 a00f40f9 ldr      x0, [x29, #0x18]
001BBAF8 21008052 mov      w1, #1
001BBAFC 8cd60d94 bl       #0x53152c
001BBB00 1f7c0071 cmp      w0, #0x1f
001BBB04 01010054 b.ne     #0x1bbb24
001BBB08 a00f40f9 ldr      x0, [x29, #0x18]
001BBB0C 21008052 mov      w1, #1
001BBB10 b3d60d94 bl       #0x5315dc
001BBB14 80000036 tbz      w0, #0, #0x1bbb24
001BBB18 a00f40f9 ldr      x0, [x29, #0x18]
001BBB1C 21008052 mov      w1, #1
001BBB20 9ad70d94 bl       #0x531988
001BBB24 a00f40f9 ldr      x0, [x29, #0x18]
001BBB28 41008052 mov      w1, #2
001BBB2C 80d60d94 bl       #0x53152c
001BBB30 1f7c0071 cmp      w0, #0x1f
001BBB34 01010054 b.ne     #0x1bbb54
001BBB38 a00f40f9 ldr      x0, [x29, #0x18]
001BBB3C 41008052 mov      w1, #2
001BBB40 a7d60d94 bl       #0x5315dc
001BBB44 80000036 tbz      w0, #0, #0x1bbb54
001BBB48 a00f40f9 ldr      x0, [x29, #0x18]
001BBB4C 41008052 mov      w1, #2
001BBB50 8ed70d94 bl       #0x531988
001BBB54 a00f40f9 ldr      x0, [x29, #0x18]
001BBB58 61008052 mov      w1, #3
001BBB5C 74d60d94 bl       #0x53152c
001BBB60 1f7c0071 cmp      w0, #0x1f
001BBB64 01010054 b.ne     #0x1bbb84
001BBB68 a00f40f9 ldr      x0, [x29, #0x18]
001BBB6C 61008052 mov      w1, #3
001BBB70 9bd60d94 bl       #0x5315dc
001BBB74 80000036 tbz      w0, #0, #0x1bbb84
001BBB78 a00f40f9 ldr      x0, [x29, #0x18]
001BBB7C 61008052 mov      w1, #3
001BBB80 82d70d94 bl       #0x531988
001BBB84 a00f40f9 ldr      x0, [x29, #0x18]
001BBB88 81008052 mov      w1, #4
001BBB8C 68d60d94 bl       #0x53152c
001BBB90 1f7c0071 cmp      w0, #0x1f
001BBB94 01010054 b.ne     #0x1bbbb4
001BBB98 a00f40f9 ldr      x0, [x29, #0x18]
001BBB9C 81008052 mov      w1, #4
001BBBA0 8fd60d94 bl       #0x5315dc
001BBBA4 80000036 tbz      w0, #0, #0x1bbbb4
001BBBA8 a00f40f9 ldr      x0, [x29, #0x18]
001BBBAC 81008052 mov      w1, #4
001BBBB0 76d70d94 bl       #0x531988
001BBBB4 a00f40f9 ldr      x0, [x29, #0x18]
001BBBB8 a1008052 mov      w1, #5
001BBBBC 5cd60d94 bl       #0x53152c
001BBBC0 1f7c0071 cmp      w0, #0x1f
001BBBC4 01010054 b.ne     #0x1bbbe4
001BBBC8 a00f40f9 ldr      x0, [x29, #0x18]
001BBBCC a1008052 mov      w1, #5
001BBBD0 83d60d94 bl       #0x5315dc
001BBBD4 80000036 tbz      w0, #0, #0x1bbbe4
001BBBD8 a00f40f9 ldr      x0, [x29, #0x18]
001BBBDC a1008052 mov      w1, #5
001BBBE0 6ad70d94 bl       #0x531988
001BBBE4 a00f40f9 ldr      x0, [x29, #0x18]
001BBBE8 f9d40d94 bl       #0x530fcc
001BBBEC a00f40f9 ldr      x0, [x29, #0x18]
001BBBF0 e1031f2a mov      w1, wzr
001BBBF4 cedf0d94 bl       #0x533b2c
001BBBF8 b80f40f9 ldr      x24, [x29, #0x18]
001BBBFC f80f00f9 str      x24, [sp, #0x18]
001BBC00 f80100b4 cbz      x24, #0x1bbc3c
001BBC04 088f44f8 ldr      x8, [x24, #0x48]!
001BBC08 e00318aa mov      x0, x24
001BBC0C 080940f9 ldr      x8, [x8, #0x10]
001BBC10 00013fd6 blr      x8
001BBC14 e1630091 add      x1, sp, #0x18
001BBC18 e00317aa mov      x0, x23
001BBC1C e203162a mov      w2, w22
001BBC20 e303152a mov      w3, w21
001BBC24 70feff97 bl       #0x1bb5e4
001BBC28 080340f9 ldr      x8, [x24]
001BBC2C e00318aa mov      x0, x24
001BBC30 080d40f9 ldr      x8, [x8, #0x18]
001BBC34 00013fd6 blr      x8
001BBC38 06000014 b        #0x1bbc50
001BBC3C e1630091 add      x1, sp, #0x18
001BBC40 e00317aa mov      x0, x23
001BBC44 e203162a mov      w2, w22
001BBC48 e303152a mov      w3, w21
001BBC4C 66feff97 bl       #0x1bb5e4
001BBC50 28008052 mov      w8, #1
001BBC54 ff1300b9 str      wzr, [sp, #0x10]
001BBC58 e00314aa mov      x0, x20
001BBC5C e84f0039 strb     w8, [sp, #0x13]
001BBC60 e8230091 add      x8, sp, #8
001BBC64 ff2b0079 strh     wzr, [sp, #0x14]
001BBC68 f5d8ff97 bl       #0x1b203c
001BBC6C e00740f9 ldr      x0, [sp, #8]
001BBC70 e2430091 add      x2, sp, #0x10
001BBC74 a10f40f9 ldr      x1, [x29, #0x18]
001BBC78 5d140094 bl       #0x1c0dec
001BBC7C e00740f9 ldr      x0, [sp, #8]
001BBC80 800000b4 cbz      x0, #0x1bbc90
001BBC84 088c44f8 ldr      x8, [x0, #0x48]!
001BBC88 080d40f9 ldr      x8, [x8, #0x18]
001BBC8C 00013fd6 blr      x8
001BBC90 a00f40f9 ldr      x0, [x29, #0x18]
001BBC94 ddd40d94 bl       #0x531008
001BBC98 1fb00771 cmp      w0, #0x1ec
001BBC9C 21080054 b.ne     #0x1bbda0
001BBCA0 a00f40f9 ldr      x0, [x29, #0x18]
001BBCA4 dbd40d94 bl       #0x531010
001BBCA8 083c0012 and      w8, w0, #0xffff
001BBCAC 1f050071 cmp      w8, #1
001BBCB0 81070054 b.ne     #0x1bbda0
001BBCB4 48d03bd5 mrs      x8, tpidr_el0
001BBCB8 17c97392 and      x23, x8, #0xffffffffffffe000
001BBCBC e84e40f9 ldr      x8, [x23, #0x98]
001BBCC0 1f4100f1 cmp      x8, #0x10
001BBCC4 60080054 b.eq     #0x1bbdd0
001BBCC8 e80e088b add      x8, x23, x8, lsl #3
001BBCCC b60f40f9 ldr      x22, [x29, #0x18]
001BBCD0 01628052 mov      w1, #0x310
001BBCD4 e00313aa mov      x0, x19
001BBCD8 02018052 mov      w2, #8
001BBCDC 130d00f9 str      x19, [x8, #0x18]
001BBCE0 e84e40f9 ldr      x8, [x23, #0x98]
001BBCE4 08050091 add      x8, x8, #1
001BBCE8 e84e00f9 str      x8, [x23, #0x98]
001BBCEC 680240f9 ldr      x8, [x19]
001BBCF0 080940f9 ldr      x8, [x8, #0x10]
001BBCF4 00013fd6 blr      x8
001BBCF8 f50300aa mov      x21, x0
001BBCFC a00000b5 cbnz     x0, #0x1bbd10
001BBD00 680240f9 ldr      x8, [x19]
001BBD04 e00313aa mov      x0, x19
001BBD08 085d40f9 ldr      x8, [x8, #0xb8]
001BBD0C 00013fd6 blr      x8
001BBD10 e00315aa mov      x0, x21
001BBD14 e10313aa mov      x1, x19
001BBD18 e20316aa mov      x2, x22
001BBD1C 03ee0d94 bl       #0x537528
001BBD20 08628052 mov      w8, #0x310
001BBD24 09018052 mov      w9, #8
001BBD28 b3d600a9 stp      x19, x21, [x21, #8]
001BBD2C f30315aa mov      x19, x21
001BBD30 a8a601a9 stp      x8, x9, [x21, #0x18]
001BBD34 e84e40f9 ldr      x8, [x23, #0x98]
001BBD38 080500d1 sub      x8, x8, #1
001BBD3C e84e00f9 str      x8, [x23, #0x98]
001BBD40 688e44f8 ldr      x8, [x19, #0x48]!
001BBD44 e00313aa mov      x0, x19
001BBD48 080940f9 ldr      x8, [x8, #0x10]
001BBD4C 00013fd6 blr      x8
001BBD50 e00315aa mov      x0, x21
001BBD54 e1031f2a mov      w1, wzr
001BBD58 e2031faa mov      x2, xzr
001BBD5C c8df0d94 bl       #0x533c7c
001BBD60 e8230091 add      x8, sp, #8
001BBD64 e00314aa mov      x0, x20
001BBD68 b5d8ff97 bl       #0x1b203c
001BBD6C e00740f9 ldr      x0, [sp, #8]
001BBD70 e2430091 add      x2, sp, #0x10
001BBD74 e10315aa mov      x1, x21
001BBD78 1d140094 bl       #0x1c0dec
001BBD7C e00740f9 ldr      x0, [sp, #8]
001BBD80 800000b4 cbz      x0, #0x1bbd90
001BBD84 088c44f8 ldr      x8, [x0, #0x48]!
001BBD88 080d40f9 ldr      x8, [x8, #0x18]
001BBD8C 00013fd6 blr      x8
001BBD90 680240f9 ldr      x8, [x19]
001BBD94 e00313aa mov      x0, x19
001BBD98 080d40f9 ldr      x8, [x8, #0x18]
001BBD9C 00013fd6 blr      x8
001BBDA0 a00f40f9 ldr      x0, [x29, #0x18]
001BBDA4 800000b4 cbz      x0, #0x1bbdb4
001BBDA8 088c44f8 ldr      x8, [x0, #0x48]!
001BBDAC 080d40f9 ldr      x8, [x8, #0x18]
001BBDB0 00013fd6 blr      x8
001BBDB4 f44f4ca9 ldp      x20, x19, [sp, #0xc0]
001BBDB8 f94b40f9 ldr      x25, [sp, #0x90]
001BBDBC f6574ba9 ldp      x22, x21, [sp, #0xb0]
001BBDC0 f85f4aa9 ldp      x24, x23, [sp, #0xa0]
001BBDC4 fd7b48a9 ldp      x29, x30, [sp, #0x80]
001BBDC8 ff430391 add      sp, sp, #0xd0
001BBDCC c0035fd6 ret      
001BBDD0 901bf997 bl       #0x2c10
~~~
### 0x1fa24c (396 bytes; 99 slots)
~~~asm
001FA24C fd7bbca9 stp      x29, x30, [sp, #-0x40]!
001FA250 f85f01a9 stp      x24, x23, [sp, #0x10]
001FA254 f65702a9 stp      x22, x21, [sp, #0x20]
001FA258 f44f03a9 stp      x20, x19, [sp, #0x30]
001FA25C fd030091 mov      x29, sp
001FA260 13200791 add      x19, x0, #0x1c8
001FA264 f40300aa mov      x20, x0
001FA268 f60301aa mov      x22, x1
001FA26C e00313aa mov      x0, x19
001FA270 f8f00f94 bl       #0x5f6650
001FA274 88d640f9 ldr      x8, [x20, #0x1a8]
001FA278 680000b4 cbz      x8, #0x1fa284
001FA27C f4031f2a mov      w20, wzr
001FA280 4d000014 b        #0x1fa3b4
001FA284 954e40f9 ldr      x21, [x20, #0x98]
001FA288 01268052 mov      w1, #0x130
001FA28C 02028052 mov      w2, #0x10
001FA290 a80240f9 ldr      x8, [x21]
001FA294 e00315aa mov      x0, x21
001FA298 080940f9 ldr      x8, [x8, #0x10]
001FA29C 00013fd6 blr      x8
001FA2A0 48d03bd5 mrs      x8, tpidr_el0
001FA2A4 18c97392 and      x24, x8, #0xffffffffffffe000
001FA2A8 084f40f9 ldr      x8, [x24, #0x98]
001FA2AC 1f4100f1 cmp      x8, #0x10
001FA2B0 20090054 b.eq     #0x1fa3d4
001FA2B4 080f088b add      x8, x24, x8, lsl #3
001FA2B8 83020391 add      x3, x20, #0xc0
001FA2BC e20316aa mov      x2, x22
001FA2C0 f70300aa mov      x23, x0
001FA2C4 150d00f9 str      x21, [x8, #0x18]
001FA2C8 084f40f9 ldr      x8, [x24, #0x98]
001FA2CC 08050091 add      x8, x8, #1
001FA2D0 084f00f9 str      x8, [x24, #0x98]
001FA2D4 815240f9 ldr      x1, [x20, #0xa0]
001FA2D8 01130094 bl       #0x1feedc
001FA2DC 084f40f9 ldr      x8, [x24, #0x98]
001FA2E0 080500d1 sub      x8, x8, #1
001FA2E4 084f00f9 str      x8, [x24, #0x98]
001FA2E8 96d640f9 ldr      x22, [x20, #0x1a8]
001FA2EC 97d600f9 str      x23, [x20, #0x1a8]
001FA2F0 160400b4 cbz      x22, #0x1fa370
001FA2F4 c85e40f9 ldr      x8, [x22, #0xb8]
001FA2F8 a80000b4 cbz      x8, #0x1fa30c
001FA2FC c0420391 add      x0, x22, #0xd0
001FA300 df7e0ca9 stp      xzr, xzr, [x22, #0xc0]
001FA304 df7e0ba9 stp      xzr, xzr, [x22, #0xb0]
001FA308 00013fd6 blr      x8
001FA30C c81e40f9 ldr      x8, [x22, #0x38]
001FA310 a80000b4 cbz      x8, #0x1fa324
001FA314 c0420191 add      x0, x22, #0x50
001FA318 df7e04a9 stp      xzr, xzr, [x22, #0x40]
001FA31C df7e03a9 stp      xzr, xzr, [x22, #0x30]
001FA320 00013fd6 blr      x8
001FA324 c01240f9 ldr      x0, [x22, #0x20]
001FA328 a00000b4 cbz      x0, #0x1fa33c
001FA32C 088c44f8 ldr      x8, [x0, #0x48]!
001FA330 080d40f9 ldr      x8, [x8, #0x18]
001FA334 00013fd6 blr      x8
001FA338 df1200f9 str      xzr, [x22, #0x20]
001FA33C c00e40f9 ldr      x0, [x22, #0x18]
001FA340 a00000b4 cbz      x0, #0x1fa354
001FA344 088c44f8 ldr      x8, [x0, #0x48]!
001FA348 080d40f9 ldr      x8, [x8, #0x18]
001FA34C 00013fd6 blr      x8
001FA350 df0e00f9 str      xzr, [x22, #0x18]
001FA354 800a5ba9 ldp      x0, x2, [x20, #0x1b0]
001FA358 e10316aa mov      x1, x22
001FA35C 83e240f9 ldr      x3, [x20, #0x1c0]
001FA360 080040f9 ldr      x8, [x0]
001FA364 080d40f9 ldr      x8, [x8, #0x18]
001FA368 00013fd6 blr      x8
001FA36C 97d640f9 ldr      x23, [x20, #0x1a8]
001FA370 08268052 mov      w8, #0x130
001FA374 95221ba9 stp      x21, x8, [x20, #0x1b0]
001FA378 08028052 mov      w8, #0x10
001FA37C 88e200f9 str      x8, [x20, #0x1c0]
001FA380 f7f7ffb4 cbz      x23, #0x1fa27c
001FA384 81820e91 add      x1, x20, #0x3a0
001FA388 e00317aa mov      x0, x23
001FA38C 6c130094 bl       #0x1ff13c
001FA390 80d640f9 ldr      x0, [x20, #0x1a8]
001FA394 81821091 add      x1, x20, #0x420
001FA398 87130094 bl       #0x1ff1b4
001FA39C 80d640f9 ldr      x0, [x20, #0x1a8]
001FA3A0 81821291 add      x1, x20, #0x4a0
001FA3A4 a2130094 bl       #0x1ff22c
001FA3A8 88d640f9 ldr      x8, [x20, #0x1a8]
001FA3AC 1f0100f1 cmp      x8, #0
001FA3B0 f4079f1a cset     w20, ne
001FA3B4 e00313aa mov      x0, x19
001FA3B8 aaf00f94 bl       #0x5f6660
001FA3BC e003142a mov      w0, w20
001FA3C0 f44f43a9 ldp      x20, x19, [sp, #0x30]
001FA3C4 f65742a9 ldp      x22, x21, [sp, #0x20]
001FA3C8 f85f41a9 ldp      x24, x23, [sp, #0x10]
001FA3CC fd7bc4a8 ldp      x29, x30, [sp], #0x40
001FA3D0 c0035fd6 ret      
001FA3D4 0f22f897 bl       #0x2c10
~~~
### 0x1fce00 (208 bytes; 52 slots)
~~~asm
001FCE00 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001FCE04 f65701a9 stp      x22, x21, [sp, #0x10]
001FCE08 f44f02a9 stp      x20, x19, [sp, #0x20]
001FCE0C fd030091 mov      x29, sp
001FCE10 130040f9 ldr      x19, [x0]
001FCE14 f40300aa mov      x20, x0
001FCE18 60d640f9 ldr      x0, [x19, #0x1a8]
001FCE1C 800400b4 cbz      x0, #0x1fceac
001FCE20 9c080094 bl       #0x1ff090
001FCE24 c0040036 tbz      w0, #0, #0x1fcebc
001FCE28 75220791 add      x21, x19, #0x1c8
001FCE2C e00315aa mov      x0, x21
001FCE30 08e60f94 bl       #0x5f6650
001FCE34 60d640f9 ldr      x0, [x19, #0x1a8]
001FCE38 000300b4 cbz      x0, #0x1fce98
001FCE3C 7e080094 bl       #0x1ff034
001FCE40 080040f9 ldr      x8, [x0]
001FCE44 890640f9 ldr      x9, [x20, #8]
001FCE48 1f0109eb cmp      x8, x9
001FCE4C 61020054 b.ne     #0x1fce98
001FCE50 60d640f9 ldr      x0, [x19, #0x1a8]
001FCE54 97080094 bl       #0x1ff0b0
001FCE58 f603002a mov      w22, w0
001FCE5C e00315aa mov      x0, x21
001FCE60 00e60f94 bl       #0x5f6660
001FCE64 df0a0071 cmp      w22, #2
001FCE68 c1010054 b.ne     #0x1fcea0
001FCE6C e00315aa mov      x0, x21
001FCE70 f8e50f94 bl       #0x5f6650
001FCE74 60d640f9 ldr      x0, [x19, #0x1a8]
001FCE78 000100b4 cbz      x0, #0x1fce98
001FCE7C 6e080094 bl       #0x1ff034
001FCE80 080040f9 ldr      x8, [x0]
001FCE84 890640f9 ldr      x9, [x20, #8]
001FCE88 1f0109eb cmp      x8, x9
001FCE8C 61000054 b.ne     #0x1fce98
001FCE90 60020391 add      x0, x19, #0xc0
001FCE94 31820b94 bl       #0x4dd758
001FCE98 e00315aa mov      x0, x21
001FCE9C f1e50f94 bl       #0x5f6660
001FCEA0 e00313aa mov      x0, x19
001FCEA4 05f6ff97 bl       #0x1fa6b8
001FCEA8 e0031f2a mov      w0, wzr
001FCEAC f44f42a9 ldp      x20, x19, [sp, #0x20]
001FCEB0 f65741a9 ldp      x22, x21, [sp, #0x10]
001FCEB4 fd7bc3a8 ldp      x29, x30, [sp], #0x30
001FCEB8 c0035fd6 ret      
001FCEBC 20008052 mov      w0, #1
001FCEC0 f44f42a9 ldp      x20, x19, [sp, #0x20]
001FCEC4 f65741a9 ldp      x22, x21, [sp, #0x10]
001FCEC8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
001FCECC c0035fd6 ret      
~~~
### 0x1ff22c (120 bytes; 30 slots)
~~~asm
001FF22C fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001FF230 f50b00f9 str      x21, [sp, #0x10]
001FF234 f44f02a9 stp      x20, x19, [sp, #0x20]
001FF238 fd030091 mov      x29, sp
001FF23C 151040f9 ldr      x21, [x0, #0x20]
001FF240 f30301aa mov      x19, x1
001FF244 b4421091 add      x20, x21, #0x410
001FF248 a80e42f9 ldr      x8, [x21, #0x418]
001FF24C a80000b4 cbz      x8, #0x1ff260
001FF250 a0c21091 add      x0, x21, #0x430
001FF254 9f7e01a9 stp      xzr, xzr, [x20, #0x10]
001FF258 9f7e00a9 stp      xzr, xzr, [x20]
001FF25C 00013fd6 blr      x8
001FF260 680a40f9 ldr      x8, [x19, #0x10]
001FF264 880100b4 cbz      x8, #0x1ff294
001FF268 60820091 add      x0, x19, #0x20
001FF26C a1c21091 add      x1, x21, #0x430
001FF270 00013fd6 blr      x8
001FF274 680e40f9 ldr      x8, [x19, #0x18]
001FF278 690640f9 ldr      x9, [x19, #8]
001FF27C 890600f9 str      x9, [x20, #8]
001FF280 880e00f9 str      x8, [x20, #0x18]
001FF284 680240f9 ldr      x8, [x19]
001FF288 690a40f9 ldr      x9, [x19, #0x10]
001FF28C 890a00f9 str      x9, [x20, #0x10]
001FF290 880200f9 str      x8, [x20]
001FF294 f44f42a9 ldp      x20, x19, [sp, #0x20]
001FF298 f50b40f9 ldr      x21, [sp, #0x10]
001FF29C fd7bc3a8 ldp      x29, x30, [sp], #0x30
001FF2A0 c0035fd6 ret      
~~~
### 0x25b448 (376 bytes; 94 slots)
~~~asm
0025B448 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
0025B44C fc6f01a9 stp      x28, x27, [sp, #0x10]
0025B450 fa6702a9 stp      x26, x25, [sp, #0x20]
0025B454 f85f03a9 stp      x24, x23, [sp, #0x30]
0025B458 f65704a9 stp      x22, x21, [sp, #0x40]
0025B45C f44f05a9 stp      x20, x19, [sp, #0x50]
0025B460 fd030091 mov      x29, sp
0025B464 570040f9 ldr      x23, [x2]
0025B468 f303042a mov      w19, w4
0025B46C f403032a mov      w20, w3
0025B470 f60301aa mov      x22, x1
0025B474 f50300aa mov      x21, x0
0025B478 1b0a8552 mov      w27, #0x2850
0025B47C 1c2b8052 mov      w28, #0x158
0025B480 19dc8552 mov      w25, #0x2ee0
0025B484 1a328052 mov      w26, #0x190
0025B488 d70100b4 cbz      x23, #0x25b4c0
0025B48C f80317aa mov      x24, x23
0025B490 088f44f8 ldr      x8, [x24, #0x48]!
0025B494 e00318aa mov      x0, x24
0025B498 080940f9 ldr      x8, [x8, #0x10]
0025B49C 00013fd6 blr      x8
0025B4A0 080340f9 ldr      x8, [x24]
0025B4A4 e00318aa mov      x0, x24
0025B4A8 080940f9 ldr      x8, [x8, #0x10]
0025B4AC 00013fd6 blr      x8
0025B4B0 9fae0471 cmp      w20, #0x12b
0025B4B4 c8020054 b.hi     #0x25b50c
0025B4B8 7f760071 cmp      w19, #0x1d
0025B4BC 88020054 b.hi     #0x25b50c
0025B4C0 8856bb9b umaddl   x8, w20, w27, x21
0025B4C4 e00317aa mov      x0, x23
0025B4C8 6822bc9b umaddl   x8, w19, w28, x8
0025B4CC 01810191 add      x1, x8, #0x60
0025B4D0 d3acfe97 bl       #0x20681c
0025B4D4 8856b99b umaddl   x8, w20, w25, x21
0025B4D8 6822ba9b umaddl   x8, w19, w26, x8
0025B4DC 089d5791 add      x8, x8, #0x5e7, lsl #12
0025B4E0 08913391 add      x8, x8, #0xce4
0025B4E4 092940a9 ldp      x9, x10, [x8]
0025B4E8 e92a06a9 stp      x9, x10, [x23, #0x60]
0025B4EC 092941a9 ldp      x9, x10, [x8, #0x10]
0025B4F0 0b3142a9 ldp      x11, x12, [x8, #0x20]
0025B4F4 eb3208a9 stp      x11, x12, [x23, #0x80]
0025B4F8 e92a07a9 stp      x9, x10, [x23, #0x70]
0025B4FC 092943a9 ldp      x9, x10, [x8, #0x30]
0025B500 0b2144a9 ldp      x11, x8, [x8, #0x40]
0025B504 eb220aa9 stp      x11, x8, [x23, #0xa0]
0025B508 e92a09a9 stp      x9, x10, [x23, #0x90]
0025B50C f80317aa mov      x24, x23
0025B510 088f44f8 ldr      x8, [x24, #0x48]!
0025B514 e00318aa mov      x0, x24
0025B518 080d40f9 ldr      x8, [x8, #0x18]
0025B51C 00013fd6 blr      x8
0025B520 e00317aa mov      x0, x23
0025B524 19acfe97 bl       #0x206588
0025B528 080340f9 ldr      x8, [x24]
0025B52C f703002a mov      w23, w0
0025B530 e00318aa mov      x0, x24
0025B534 080d40f9 ldr      x8, [x8, #0x18]
0025B538 00013fd6 blr      x8
0025B53C 37030036 tbz      w23, #0, #0x25b5a0
0025B540 8856bb9b umaddl   x8, w20, w27, x21
0025B544 c00240f9 ldr      x0, [x22]
0025B548 6822bc9b umaddl   x8, w19, w28, x8
0025B54C 01810191 add      x1, x8, #0x60
0025B550 b1acfe97 bl       #0x206814
0025B554 d60240f9 ldr      x22, [x22]
0025B558 8856b99b umaddl   x8, w20, w25, x21
0025B55C 7322ba9b umaddl   x19, w19, w26, x8
0025B560 c12e40f9 ldr      x1, [x22, #0x58]
0025B564 689e5791 add      x8, x19, #0x5e7, lsl #12
0025B568 00812f91 add      x0, x8, #0xbe0
0025B56C c4820a94 bl       #0x4fc07c
0025B570 c92246a9 ldp      x9, x8, [x22, #0x60]
0025B574 6a9e5791 add      x10, x19, #0x5e7, lsl #12
0025B578 4a913391 add      x10, x10, #0xce4
0025B57C 492100a9 stp      x9, x8, [x10]
0025B580 c82648a9 ldp      x8, x9, [x22, #0x80]
0025B584 cc2e47a9 ldp      x12, x11, [x22, #0x70]
0025B588 482502a9 stp      x8, x9, [x10, #0x20]
0025B58C 4c2d01a9 stp      x12, x11, [x10, #0x10]
0025B590 c8264aa9 ldp      x8, x9, [x22, #0xa0]
0025B594 cc2e49a9 ldp      x12, x11, [x22, #0x90]
0025B598 482504a9 stp      x8, x9, [x10, #0x40]
0025B59C 4c2d03a9 stp      x12, x11, [x10, #0x30]
0025B5A0 e0020012 and      w0, w23, #1
0025B5A4 f44f45a9 ldp      x20, x19, [sp, #0x50]
0025B5A8 f65744a9 ldp      x22, x21, [sp, #0x40]
0025B5AC f85f43a9 ldp      x24, x23, [sp, #0x30]
0025B5B0 fa6742a9 ldp      x26, x25, [sp, #0x20]
0025B5B4 fc6f41a9 ldp      x28, x27, [sp, #0x10]
0025B5B8 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0025B5BC c0035fd6 ret      
~~~
### 0x25b5c0 (300 bytes; 75 slots)
~~~asm
0025B5C0 ff8301d1 sub      sp, sp, #0x60
0025B5C4 fd7b02a9 stp      x29, x30, [sp, #0x20]
0025B5C8 f71b00f9 str      x23, [sp, #0x30]
0025B5CC f65704a9 stp      x22, x21, [sp, #0x40]
0025B5D0 f44f05a9 stp      x20, x19, [sp, #0x50]
0025B5D4 fd830091 add      x29, sp, #0x20
0025B5D8 f30301aa mov      x19, x1
0025B5DC f60300aa mov      x22, x0
0025B5E0 a20f00f9 str      x2, [x29, #0x18]
0025B5E4 a82300d1 sub      x8, x29, #8
0025B5E8 a1630091 add      x1, x29, #0x18
0025B5EC e00302aa mov      x0, x2
0025B5F0 f403042a mov      w20, w4
0025B5F4 f503032a mov      w21, w3
0025B5F8 2d1ffd97 bl       #0x1a32ac
0025B5FC a00f40f9 ldr      x0, [x29, #0x18]
0025B600 e8430091 add      x8, sp, #0x10
0025B604 a12300d1 sub      x1, x29, #8
0025B608 701ffd97 bl       #0x1a33c8
0025B60C 730240f9 ldr      x19, [x19]
0025B610 f30700f9 str      x19, [sp, #8]
0025B614 b30000b4 cbz      x19, #0x25b628
0025B618 e00313aa mov      x0, x19
0025B61C 088c44f8 ldr      x8, [x0, #0x48]!
0025B620 080940f9 ldr      x8, [x8, #0x10]
0025B624 00013fd6 blr      x8
0025B628 f70b40f9 ldr      x23, [sp, #0x10]
0025B62C f70300f9 str      x23, [sp]
0025B630 d70400b4 cbz      x23, #0x25b6c8
0025B634 e88e44f8 ldr      x8, [x23, #0x48]!
0025B638 e00317aa mov      x0, x23
0025B63C 080940f9 ldr      x8, [x8, #0x10]
0025B640 00013fd6 blr      x8
0025B644 e1230091 add      x1, sp, #8
0025B648 e2030091 mov      x2, sp
0025B64C e00316aa mov      x0, x22
0025B650 e303152a mov      w3, w21
0025B654 e403142a mov      w4, w20
0025B658 7cffff97 bl       #0x25b448
0025B65C e80240f9 ldr      x8, [x23]
0025B660 f403002a mov      w20, w0
0025B664 e00317aa mov      x0, x23
0025B668 080d40f9 ldr      x8, [x8, #0x18]
0025B66C 00013fd6 blr      x8
0025B670 b30000b4 cbz      x19, #0x25b684
0025B674 688e44f8 ldr      x8, [x19, #0x48]!
0025B678 e00313aa mov      x0, x19
0025B67C 080d40f9 ldr      x8, [x8, #0x18]
0025B680 00013fd6 blr      x8
0025B684 e00b40f9 ldr      x0, [sp, #0x10]
0025B688 800000b4 cbz      x0, #0x25b698
0025B68C 088c44f8 ldr      x8, [x0, #0x48]!
0025B690 080d40f9 ldr      x8, [x8, #0x18]
0025B694 00013fd6 blr      x8
0025B698 a0835ff8 ldur     x0, [x29, #-8]
0025B69C 800000b4 cbz      x0, #0x25b6ac
0025B6A0 088c44f8 ldr      x8, [x0, #0x48]!
0025B6A4 080d40f9 ldr      x8, [x8, #0x18]
0025B6A8 00013fd6 blr      x8
0025B6AC 80020012 and      w0, w20, #1
0025B6B0 f44f45a9 ldp      x20, x19, [sp, #0x50]
0025B6B4 f65744a9 ldp      x22, x21, [sp, #0x40]
0025B6B8 f71b40f9 ldr      x23, [sp, #0x30]
0025B6BC fd7b42a9 ldp      x29, x30, [sp, #0x20]
0025B6C0 ff830191 add      sp, sp, #0x60
0025B6C4 c0035fd6 ret      
0025B6C8 e1230091 add      x1, sp, #8
0025B6CC e2030091 mov      x2, sp
0025B6D0 e00316aa mov      x0, x22
0025B6D4 e303152a mov      w3, w21
0025B6D8 e403142a mov      w4, w20
0025B6DC 5bffff97 bl       #0x25b448
0025B6E0 f403002a mov      w20, w0
0025B6E4 93fcffb5 cbnz     x19, #0x25b674
0025B6E8 e7ffff17 b        #0x25b684
~~~
### 0x25d3c4 (84 bytes; 21 slots)
~~~asm
0025D3C4 88018052 mov      w8, #0xc
0025D3C8 2800a89b umaddl   x8, w1, w8, x0
0025D3CC 0a4dca79 ldrsh    w10, [x8, #0x526]
0025D3D0 0949ca79 ldrsh    w9, [x8, #0x524]
0025D3D4 5f050031 cmn      w10, #1
0025D3D8 ea079f1a cset     w10, ne
0025D3DC 3f050031 cmn      w9, #1
0025D3E0 49058a1a cinc     w9, w10, ne
0025D3E4 0a51ca79 ldrsh    w10, [x8, #0x528]
0025D3E8 5f050031 cmn      w10, #1
0025D3EC 0a55ca79 ldrsh    w10, [x8, #0x52a]
0025D3F0 2905891a cinc     w9, w9, ne
0025D3F4 5f050031 cmn      w10, #1
0025D3F8 0a59ca79 ldrsh    w10, [x8, #0x52c]
0025D3FC 085dca79 ldrsh    w8, [x8, #0x52e]
0025D400 2905891a cinc     w9, w9, ne
0025D404 5f050031 cmn      w10, #1
0025D408 2905891a cinc     w9, w9, ne
0025D40C 1f050031 cmn      w8, #1
0025D410 2005891a cinc     w0, w9, ne
0025D414 c0035fd6 ret      
~~~
### 0x25d528 (328 bytes; 82 slots)
~~~asm
0025D528 c8008052 mov      w8, #6
0025D52C 3f140071 cmp      w1, #5
0025D530 c8090054 b.hi     #0x25d668
0025D534 5f140071 cmp      w2, #5
0025D538 88090054 b.hi     #0x25d668
0025D53C 7f7c0071 cmp      w3, #0x1f
0025D540 48090054 b.hi     #0x25d668
0025D544 9f740071 cmp      w4, #0x1d
0025D548 08090054 b.hi     #0x25d668
0025D54C 88018052 mov      w8, #0xc
0025D550 e903012a mov      w9, w1
0025D554 2800a89b umaddl   x8, w1, w8, x0
0025D558 08494a79 ldrh     w8, [x8, #0x524]
0025D55C 7f20486b cmp      w3, w8, lsr #8
0025D560 c1000054 b.ne     #0x25d578
0025D564 081d0012 and      w8, w8, #0xff
0025D568 1f01046b cmp      w8, w4
0025D56C 61000054 b.ne     #0x25d578
0025D570 e8031faa mov      x8, xzr
0025D574 33000014 b        #0x25d640
0025D578 88018052 mov      w8, #0xc
0025D57C 2801a89b umaddl   x8, w9, w8, x0
0025D580 084d4a79 ldrh     w8, [x8, #0x526]
0025D584 7f20486b cmp      w3, w8, lsr #8
0025D588 c1000054 b.ne     #0x25d5a0
0025D58C 081d0012 and      w8, w8, #0xff
0025D590 1f01046b cmp      w8, w4
0025D594 61000054 b.ne     #0x25d5a0
0025D598 28008052 mov      w8, #1
0025D59C 29000014 b        #0x25d640
0025D5A0 88018052 mov      w8, #0xc
0025D5A4 2801a89b umaddl   x8, w9, w8, x0
0025D5A8 08514a79 ldrh     w8, [x8, #0x528]
0025D5AC 7f20486b cmp      w3, w8, lsr #8
0025D5B0 c1000054 b.ne     #0x25d5c8
0025D5B4 081d0012 and      w8, w8, #0xff
0025D5B8 1f01046b cmp      w8, w4
0025D5BC 61000054 b.ne     #0x25d5c8
0025D5C0 48008052 mov      w8, #2
0025D5C4 1f000014 b        #0x25d640
0025D5C8 88018052 mov      w8, #0xc
0025D5CC 2801a89b umaddl   x8, w9, w8, x0
0025D5D0 08554a79 ldrh     w8, [x8, #0x52a]
0025D5D4 7f20486b cmp      w3, w8, lsr #8
0025D5D8 c1000054 b.ne     #0x25d5f0
0025D5DC 081d0012 and      w8, w8, #0xff
0025D5E0 1f01046b cmp      w8, w4
0025D5E4 61000054 b.ne     #0x25d5f0
0025D5E8 68008052 mov      w8, #3
0025D5EC 15000014 b        #0x25d640
0025D5F0 88018052 mov      w8, #0xc
0025D5F4 2801a89b umaddl   x8, w9, w8, x0
0025D5F8 08594a79 ldrh     w8, [x8, #0x52c]
0025D5FC 7f20486b cmp      w3, w8, lsr #8
0025D600 c1000054 b.ne     #0x25d618
0025D604 081d0012 and      w8, w8, #0xff
0025D608 1f01046b cmp      w8, w4
0025D60C 61000054 b.ne     #0x25d618
0025D610 88008052 mov      w8, #4
0025D614 0b000014 b        #0x25d640
0025D618 88018052 mov      w8, #0xc
0025D61C 2801a89b umaddl   x8, w9, w8, x0
0025D620 0a5d4a79 ldrh     w10, [x8, #0x52e]
0025D624 c8008052 mov      w8, #6
0025D628 7f204a6b cmp      w3, w10, lsr #8
0025D62C 41010054 b.ne     #0x25d654
0025D630 4a1d0012 and      w10, w10, #0xff
0025D634 5f01046b cmp      w10, w4
0025D638 e1000054 b.ne     #0x25d654
0025D63C a8008052 mov      w8, #5
0025D640 8a018052 mov      w10, #0xc
0025D644 ebff9f52 mov      w11, #0xffff
0025D648 2a01aa9b umaddl   x10, w9, w10, x0
0025D64C 4a05088b add      x10, x10, x8, lsl #1
0025D650 4b490a79 strh     w11, [x10, #0x524]
0025D654 8b018052 mov      w11, #0xc
0025D658 8a20030b add      w10, w4, w3, lsl #8
0025D65C 2901ab9b umaddl   x9, w9, w11, x0
0025D660 2945228b add      x9, x9, w2, uxtw #1
0025D664 2a490a79 strh     w10, [x9, #0x524]
0025D668 e003082a mov      w0, w8
0025D66C c0035fd6 ret      
~~~
### 0x25d670 (8 bytes; 2 slots)
~~~asm
0025D670 01b41539 strb     w1, [x0, #0x56d]
0025D674 c0035fd6 ret      
~~~
### 0x271d20 (436 bytes; 109 slots)
~~~asm
00271D20 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00271D24 f70b00f9 str      x23, [sp, #0x10]
00271D28 f65702a9 stp      x22, x21, [sp, #0x20]
00271D2C f44f03a9 stp      x20, x19, [sp, #0x30]
00271D30 fd030091 mov      x29, sp
00271D34 f503012a mov      w21, w1
00271D38 f30300aa mov      x19, x0
00271D3C a0feff97 bl       #0x2717bc
00271D40 40070036 tbz      w0, #0, #0x271e28
00271D44 74620691 add      x20, x19, #0x198
00271D48 e00314aa mov      x0, x20
00271D4C 41120e94 bl       #0x5f6650
00271D50 60be40f9 ldr      x0, [x19, #0x178]
00271D54 c00000b4 cbz      x0, #0x271d6c
00271D58 02240094 bl       #0x27ad60
00271D5C 1f00156b cmp      w0, w21
00271D60 61000054 b.ne     #0x271d6c
00271D64 60be40f9 ldr      x0, [x19, #0x178]
00271D68 00240094 bl       #0x27ad68
00271D6C e00314aa mov      x0, x20
00271D70 3c120e94 bl       #0x5f6660
00271D74 16d09252 mov      w22, #0x9680
00271D78 1613a072 movk     w22, #0x98, lsl #16
00271D7C 05000014 b        #0x271d90
00271D80 e00314aa mov      x0, x20
00271D84 37120e94 bl       #0x5f6660
00271D88 e00316aa mov      x0, x22
00271D8C 71110e94 bl       #0x5f6350
00271D90 e00314aa mov      x0, x20
00271D94 2f120e94 bl       #0x5f6650
00271D98 60be40f9 ldr      x0, [x19, #0x178]
00271D9C 20ffffb4 cbz      x0, #0x271d80
00271DA0 f0230094 bl       #0x27ad60
00271DA4 1f00156b cmp      w0, w21
00271DA8 c1feff54 b.ne     #0x271d80
00271DAC 60be40f9 ldr      x0, [x19, #0x178]
00271DB0 23240094 bl       #0x27ae3c
00271DB4 f703002a mov      w23, w0
00271DB8 e00314aa mov      x0, x20
00271DBC 29120e94 bl       #0x5f6660
00271DC0 57fe0736 tbz      w23, #0, #0x271d88
00271DC4 e00314aa mov      x0, x20
00271DC8 22120e94 bl       #0x5f6650
00271DCC 60be40f9 ldr      x0, [x19, #0x178]
00271DD0 a00300b4 cbz      x0, #0x271e44
00271DD4 e3230094 bl       #0x27ad60
00271DD8 1f00156b cmp      w0, w21
00271DDC 41030054 b.ne     #0x271e44
00271DE0 60be40f9 ldr      x0, [x19, #0x178]
00271DE4 1e240094 bl       #0x27ae5c
00271DE8 f603002a mov      w22, w0
00271DEC e00314aa mov      x0, x20
00271DF0 1c120e94 bl       #0x5f6660
00271DF4 df0a0071 cmp      w22, #2
00271DF8 c1020054 b.ne     #0x271e50
00271DFC e00314aa mov      x0, x20
00271E00 14120e94 bl       #0x5f6650
00271E04 60be40f9 ldr      x0, [x19, #0x178]
00271E08 c00000b4 cbz      x0, #0x271e20
00271E0C d5230094 bl       #0x27ad60
00271E10 1f00156b cmp      w0, w21
00271E14 61000054 b.ne     #0x271e20
00271E18 60a20291 add      x0, x19, #0xa8
00271E1C 4fae0994 bl       #0x4dd758
00271E20 56008052 mov      w22, #2
00271E24 09000014 b        #0x271e48
00271E28 f6031f2a mov      w22, wzr
00271E2C e003162a mov      w0, w22
00271E30 f44f43a9 ldp      x20, x19, [sp, #0x30]
00271E34 f65742a9 ldp      x22, x21, [sp, #0x20]
00271E38 f70b40f9 ldr      x23, [sp, #0x10]
00271E3C fd7bc4a8 ldp      x29, x30, [sp], #0x40
00271E40 c0035fd6 ret      
00271E44 f6031f2a mov      w22, wzr
00271E48 e00314aa mov      x0, x20
00271E4C 05120e94 bl       #0x5f6660
00271E50 e00314aa mov      x0, x20
00271E54 ff110e94 bl       #0x5f6650
00271E58 60be40f9 ldr      x0, [x19, #0x178]
00271E5C 200200b4 cbz      x0, #0x271ea0
00271E60 0e240094 bl       #0x27ae98
00271E64 75be40f9 ldr      x21, [x19, #0x178]
00271E68 7fbe00f9 str      xzr, [x19, #0x178]
00271E6C b50100b4 cbz      x21, #0x271ea0
00271E70 a00640f9 ldr      x0, [x21, #8]
00271E74 a00000b4 cbz      x0, #0x271e88
00271E78 088c44f8 ldr      x8, [x0, #0x48]!
00271E7C 080d40f9 ldr      x8, [x8, #0x18]
00271E80 00013fd6 blr      x8
00271E84 bf0600f9 str      xzr, [x21, #8]
00271E88 600a58a9 ldp      x0, x2, [x19, #0x180]
00271E8C e10315aa mov      x1, x21
00271E90 63ca40f9 ldr      x3, [x19, #0x190]
00271E94 080040f9 ldr      x8, [x0]
00271E98 080d40f9 ldr      x8, [x8, #0x18]
00271E9C 00013fd6 blr      x8
00271EA0 682900d0 adrp     x8, #0x79f000
00271EA4 61a20291 add      x1, x19, #0xa8
00271EA8 08a942f9 ldr      x8, [x8, #0x550]
00271EAC 000140f9 ldr      x0, [x8]
00271EB0 faa20994 bl       #0x4daa98
00271EB4 e00314aa mov      x0, x20
00271EB8 ea110e94 bl       #0x5f6660
00271EBC e003162a mov      w0, w22
00271EC0 f44f43a9 ldp      x20, x19, [sp, #0x30]
00271EC4 f65742a9 ldp      x22, x21, [sp, #0x20]
00271EC8 f70b40f9 ldr      x23, [sp, #0x10]
00271ECC fd7bc4a8 ldp      x29, x30, [sp], #0x40
00271ED0 c0035fd6 ret      
~~~
### 0x271ed4 (100 bytes; 25 slots)
~~~asm
00271ED4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00271ED8 f44f01a9 stp      x20, x19, [sp, #0x10]
00271EDC fd030091 mov      x29, sp
00271EE0 130c41f9 ldr      x19, [x0, #0x218]
00271EE4 330200b4 cbz      x19, #0x271f28
00271EE8 f40313aa mov      x20, x19
00271EEC 888e44f8 ldr      x8, [x20, #0x48]!
00271EF0 e00314aa mov      x0, x20
00271EF4 080940f9 ldr      x8, [x8, #0x10]
00271EF8 00013fd6 blr      x8
00271EFC e00313aa mov      x0, x19
00271F00 64baff97 bl       #0x260890
00271F04 880240f9 ldr      x8, [x20]
00271F08 f303002a mov      w19, w0
00271F0C e00314aa mov      x0, x20
00271F10 080d40f9 ldr      x8, [x8, #0x18]
00271F14 00013fd6 blr      x8
00271F18 60020012 and      w0, w19, #1
00271F1C f44f41a9 ldp      x20, x19, [sp, #0x10]
00271F20 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00271F24 c0035fd6 ret      
00271F28 e0031f2a mov      w0, wzr
00271F2C f44f41a9 ldp      x20, x19, [sp, #0x10]
00271F30 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00271F34 c0035fd6 ret      
~~~
### 0x271f38 (856 bytes; 214 slots)
~~~asm
00271F38 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00271F3C f44f01a9 stp      x20, x19, [sp, #0x10]
00271F40 fd030091 mov      x29, sp
00271F44 f30300aa mov      x19, x0
00271F48 004441f9 ldr      x0, [x0, #0x288]
00271F4C a00000b4 cbz      x0, #0x271f60
00271F50 088c44f8 ldr      x8, [x0, #0x48]!
00271F54 080d40f9 ldr      x8, [x8, #0x18]
00271F58 00013fd6 blr      x8
00271F5C 7f4601f9 str      xzr, [x19, #0x288]
00271F60 604241f9 ldr      x0, [x19, #0x280]
00271F64 a00000b4 cbz      x0, #0x271f78
00271F68 088c44f8 ldr      x8, [x0, #0x48]!
00271F6C 080d40f9 ldr      x8, [x8, #0x18]
00271F70 00013fd6 blr      x8
00271F74 7f4201f9 str      xzr, [x19, #0x280]
00271F78 603e41f9 ldr      x0, [x19, #0x278]
00271F7C a00000b4 cbz      x0, #0x271f90
00271F80 088c44f8 ldr      x8, [x0, #0x48]!
00271F84 080d40f9 ldr      x8, [x8, #0x18]
00271F88 00013fd6 blr      x8
00271F8C 7f3e01f9 str      xzr, [x19, #0x278]
00271F90 603a41f9 ldr      x0, [x19, #0x270]
00271F94 a00000b4 cbz      x0, #0x271fa8
00271F98 088c44f8 ldr      x8, [x0, #0x48]!
00271F9C 080d40f9 ldr      x8, [x8, #0x18]
00271FA0 00013fd6 blr      x8
00271FA4 7f3a01f9 str      xzr, [x19, #0x270]
00271FA8 603641f9 ldr      x0, [x19, #0x268]
00271FAC a00000b4 cbz      x0, #0x271fc0
00271FB0 088c44f8 ldr      x8, [x0, #0x48]!
00271FB4 080d40f9 ldr      x8, [x8, #0x18]
00271FB8 00013fd6 blr      x8
00271FBC 7f3601f9 str      xzr, [x19, #0x268]
00271FC0 603241f9 ldr      x0, [x19, #0x260]
00271FC4 a00000b4 cbz      x0, #0x271fd8
00271FC8 088c44f8 ldr      x8, [x0, #0x48]!
00271FCC 080d40f9 ldr      x8, [x8, #0x18]
00271FD0 00013fd6 blr      x8
00271FD4 7f3201f9 str      xzr, [x19, #0x260]
00271FD8 602e41f9 ldr      x0, [x19, #0x258]
00271FDC a00000b4 cbz      x0, #0x271ff0
00271FE0 088c44f8 ldr      x8, [x0, #0x48]!
00271FE4 080d40f9 ldr      x8, [x8, #0x18]
00271FE8 00013fd6 blr      x8
00271FEC 7f2e01f9 str      xzr, [x19, #0x258]
00271FF0 602a41f9 ldr      x0, [x19, #0x250]
00271FF4 a00000b4 cbz      x0, #0x272008
00271FF8 088c44f8 ldr      x8, [x0, #0x48]!
00271FFC 080d40f9 ldr      x8, [x8, #0x18]
00272000 00013fd6 blr      x8
00272004 7f2a01f9 str      xzr, [x19, #0x250]
00272008 602641f9 ldr      x0, [x19, #0x248]
0027200C a00000b4 cbz      x0, #0x272020
00272010 088c44f8 ldr      x8, [x0, #0x48]!
00272014 080d40f9 ldr      x8, [x8, #0x18]
00272018 00013fd6 blr      x8
0027201C 7f2601f9 str      xzr, [x19, #0x248]
00272020 602241f9 ldr      x0, [x19, #0x240]
00272024 a00000b4 cbz      x0, #0x272038
00272028 088c44f8 ldr      x8, [x0, #0x48]!
0027202C 080d40f9 ldr      x8, [x8, #0x18]
00272030 00013fd6 blr      x8
00272034 7f2201f9 str      xzr, [x19, #0x240]
00272038 601e41f9 ldr      x0, [x19, #0x238]
0027203C a00000b4 cbz      x0, #0x272050
00272040 088c44f8 ldr      x8, [x0, #0x48]!
00272044 080d40f9 ldr      x8, [x8, #0x18]
00272048 00013fd6 blr      x8
0027204C 7f1e01f9 str      xzr, [x19, #0x238]
00272050 601a41f9 ldr      x0, [x19, #0x230]
00272054 a00000b4 cbz      x0, #0x272068
00272058 088c44f8 ldr      x8, [x0, #0x48]!
0027205C 080d40f9 ldr      x8, [x8, #0x18]
00272060 00013fd6 blr      x8
00272064 7f1a01f9 str      xzr, [x19, #0x230]
00272068 601641f9 ldr      x0, [x19, #0x228]
0027206C a00000b4 cbz      x0, #0x272080
00272070 088c44f8 ldr      x8, [x0, #0x48]!
00272074 080d40f9 ldr      x8, [x8, #0x18]
00272078 00013fd6 blr      x8
0027207C 7f1601f9 str      xzr, [x19, #0x228]
00272080 601241f9 ldr      x0, [x19, #0x220]
00272084 a00000b4 cbz      x0, #0x272098
00272088 088c44f8 ldr      x8, [x0, #0x48]!
0027208C 080d40f9 ldr      x8, [x8, #0x18]
00272090 00013fd6 blr      x8
00272094 7f1201f9 str      xzr, [x19, #0x220]
00272098 600e41f9 ldr      x0, [x19, #0x218]
0027209C a00000b4 cbz      x0, #0x2720b0
002720A0 088c44f8 ldr      x8, [x0, #0x48]!
002720A4 080d40f9 ldr      x8, [x8, #0x18]
002720A8 00013fd6 blr      x8
002720AC 7f0e01f9 str      xzr, [x19, #0x218]
002720B0 600a41f9 ldr      x0, [x19, #0x210]
002720B4 a00000b4 cbz      x0, #0x2720c8
002720B8 088c44f8 ldr      x8, [x0, #0x48]!
002720BC 080d40f9 ldr      x8, [x8, #0x18]
002720C0 00013fd6 blr      x8
002720C4 7f0a01f9 str      xzr, [x19, #0x210]
002720C8 600641f9 ldr      x0, [x19, #0x208]
002720CC a00000b4 cbz      x0, #0x2720e0
002720D0 088c44f8 ldr      x8, [x0, #0x48]!
002720D4 080d40f9 ldr      x8, [x8, #0x18]
002720D8 00013fd6 blr      x8
002720DC 7f0601f9 str      xzr, [x19, #0x208]
002720E0 60f640f9 ldr      x0, [x19, #0x1e8]
002720E4 a00000b4 cbz      x0, #0x2720f8
002720E8 088c44f8 ldr      x8, [x0, #0x48]!
002720EC 080d40f9 ldr      x8, [x8, #0x18]
002720F0 00013fd6 blr      x8
002720F4 7ff600f9 str      xzr, [x19, #0x1e8]
002720F8 60f240f9 ldr      x0, [x19, #0x1e0]
002720FC a00000b4 cbz      x0, #0x272110
00272100 088c44f8 ldr      x8, [x0, #0x48]!
00272104 080d40f9 ldr      x8, [x8, #0x18]
00272108 00013fd6 blr      x8
0027210C 7ff200f9 str      xzr, [x19, #0x1e0]
00272110 60ee40f9 ldr      x0, [x19, #0x1d8]
00272114 a00000b4 cbz      x0, #0x272128
00272118 088c44f8 ldr      x8, [x0, #0x48]!
0027211C 080d40f9 ldr      x8, [x8, #0x18]
00272120 00013fd6 blr      x8
00272124 7fee00f9 str      xzr, [x19, #0x1d8]
00272128 60ea40f9 ldr      x0, [x19, #0x1d0]
0027212C a00000b4 cbz      x0, #0x272140
00272130 088c44f8 ldr      x8, [x0, #0x48]!
00272134 080d40f9 ldr      x8, [x8, #0x18]
00272138 00013fd6 blr      x8
0027213C 7fea00f9 str      xzr, [x19, #0x1d0]
00272140 60e640f9 ldr      x0, [x19, #0x1c8]
00272144 a00000b4 cbz      x0, #0x272158
00272148 088c44f8 ldr      x8, [x0, #0x48]!
0027214C 080d40f9 ldr      x8, [x8, #0x18]
00272150 00013fd6 blr      x8
00272154 7fe600f9 str      xzr, [x19, #0x1c8]
00272158 60e240f9 ldr      x0, [x19, #0x1c0]
0027215C a00000b4 cbz      x0, #0x272170
00272160 088c44f8 ldr      x8, [x0, #0x48]!
00272164 080d40f9 ldr      x8, [x8, #0x18]
00272168 00013fd6 blr      x8
0027216C 7fe200f9 str      xzr, [x19, #0x1c0]
00272170 60de40f9 ldr      x0, [x19, #0x1b8]
00272174 a00000b4 cbz      x0, #0x272188
00272178 088c44f8 ldr      x8, [x0, #0x48]!
0027217C 080d40f9 ldr      x8, [x8, #0x18]
00272180 00013fd6 blr      x8
00272184 7fde00f9 str      xzr, [x19, #0x1b8]
00272188 60620691 add      x0, x19, #0x198
0027218C 7d100e94 bl       #0x5f6380
00272190 74be40f9 ldr      x20, [x19, #0x178]
00272194 7fbe00f9 str      xzr, [x19, #0x178]
00272198 b40100b4 cbz      x20, #0x2721cc
0027219C 800640f9 ldr      x0, [x20, #8]
002721A0 a00000b4 cbz      x0, #0x2721b4
002721A4 088c44f8 ldr      x8, [x0, #0x48]!
002721A8 080d40f9 ldr      x8, [x8, #0x18]
002721AC 00013fd6 blr      x8
002721B0 9f0600f9 str      xzr, [x20, #8]
002721B4 600a58a9 ldp      x0, x2, [x19, #0x180]
002721B8 e10314aa mov      x1, x20
002721BC 63ca40f9 ldr      x3, [x19, #0x190]
002721C0 080040f9 ldr      x8, [x0]
002721C4 080d40f9 ldr      x8, [x8, #0x18]
002721C8 00013fd6 blr      x8
002721CC 60620591 add      x0, x19, #0x158
002721D0 6c100e94 bl       #0x5f6380
002721D4 749e40f9 ldr      x20, [x19, #0x138]
002721D8 7f9e00f9 str      xzr, [x19, #0x138]
002721DC b40100b4 cbz      x20, #0x272210
002721E0 800640f9 ldr      x0, [x20, #8]
002721E4 a00000b4 cbz      x0, #0x2721f8
002721E8 088c44f8 ldr      x8, [x0, #0x48]!
002721EC 080d40f9 ldr      x8, [x8, #0x18]
002721F0 00013fd6 blr      x8
002721F4 9f0600f9 str      xzr, [x20, #8]
002721F8 600a54a9 ldp      x0, x2, [x19, #0x140]
002721FC e10314aa mov      x1, x20
00272200 63aa40f9 ldr      x3, [x19, #0x150]
00272204 080040f9 ldr      x8, [x0]
00272208 080d40f9 ldr      x8, [x8, #0x18]
0027220C 00013fd6 blr      x8
00272210 748e40f9 ldr      x20, [x19, #0x118]
00272214 7f8e00f9 str      xzr, [x19, #0x118]
00272218 340100b4 cbz      x20, #0x27223c
0027221C e00314aa mov      x0, x20
00272220 60040094 bl       #0x2733a0
00272224 600a52a9 ldp      x0, x2, [x19, #0x120]
00272228 e10314aa mov      x1, x20
0027222C 639a40f9 ldr      x3, [x19, #0x130]
00272230 080040f9 ldr      x8, [x0]
00272234 080d40f9 ldr      x8, [x8, #0x18]
00272238 00013fd6 blr      x8
0027223C 747e40f9 ldr      x20, [x19, #0xf8]
00272240 7f7e00f9 str      xzr, [x19, #0xf8]
00272244 340100b4 cbz      x20, #0x272268
00272248 e00314aa mov      x0, x20
0027224C 55040094 bl       #0x2733a0
00272250 600a50a9 ldp      x0, x2, [x19, #0x100]
00272254 e10314aa mov      x1, x20
00272258 638a40f9 ldr      x3, [x19, #0x110]
0027225C 080040f9 ldr      x8, [x0]
00272260 080d40f9 ldr      x8, [x8, #0x18]
00272264 00013fd6 blr      x8
00272268 606e40f9 ldr      x0, [x19, #0xd8]
0027226C a00000b4 cbz      x0, #0x272280
00272270 088c44f8 ldr      x8, [x0, #0x48]!
00272274 080d40f9 ldr      x8, [x8, #0x18]
00272278 00013fd6 blr      x8
0027227C 7f6e00f9 str      xzr, [x19, #0xd8]
00272280 60420191 add      x0, x19, #0x50
00272284 f44f41a9 ldp      x20, x19, [sp, #0x10]
00272288 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0027228C 35000014 b        #0x272360
~~~
### 0x29c3ec (396 bytes; 99 slots)
~~~asm
0029C3EC fd7bbca9 stp      x29, x30, [sp, #-0x40]!
0029C3F0 f85f01a9 stp      x24, x23, [sp, #0x10]
0029C3F4 f65702a9 stp      x22, x21, [sp, #0x20]
0029C3F8 f44f03a9 stp      x20, x19, [sp, #0x30]
0029C3FC fd030091 mov      x29, sp
0029C400 13c00691 add      x19, x0, #0x1b0
0029C404 f40300aa mov      x20, x0
0029C408 f60301aa mov      x22, x1
0029C40C e00313aa mov      x0, x19
0029C410 90680d94 bl       #0x5f6650
0029C414 88ca40f9 ldr      x8, [x20, #0x190]
0029C418 680000b4 cbz      x8, #0x29c424
0029C41C f4031f2a mov      w20, wzr
0029C420 4d000014 b        #0x29c554
0029C424 954e40f9 ldr      x21, [x20, #0x98]
0029C428 01268052 mov      w1, #0x130
0029C42C 02028052 mov      w2, #0x10
0029C430 a80240f9 ldr      x8, [x21]
0029C434 e00315aa mov      x0, x21
0029C438 080940f9 ldr      x8, [x8, #0x10]
0029C43C 00013fd6 blr      x8
0029C440 48d03bd5 mrs      x8, tpidr_el0
0029C444 18c97392 and      x24, x8, #0xffffffffffffe000
0029C448 084f40f9 ldr      x8, [x24, #0x98]
0029C44C 1f4100f1 cmp      x8, #0x10
0029C450 20090054 b.eq     #0x29c574
0029C454 080f088b add      x8, x24, x8, lsl #3
0029C458 83a20291 add      x3, x20, #0xa8
0029C45C e20316aa mov      x2, x22
0029C460 f70300aa mov      x23, x0
0029C464 150d00f9 str      x21, [x8, #0x18]
0029C468 084f40f9 ldr      x8, [x24, #0x98]
0029C46C 08050091 add      x8, x8, #1
0029C470 084f00f9 str      x8, [x24, #0x98]
0029C474 815240f9 ldr      x1, [x20, #0xa0]
0029C478 61100094 bl       #0x2a05fc
0029C47C 084f40f9 ldr      x8, [x24, #0x98]
0029C480 080500d1 sub      x8, x8, #1
0029C484 084f00f9 str      x8, [x24, #0x98]
0029C488 96ca40f9 ldr      x22, [x20, #0x190]
0029C48C 97ca00f9 str      x23, [x20, #0x190]
0029C490 160400b4 cbz      x22, #0x29c510
0029C494 c85e40f9 ldr      x8, [x22, #0xb8]
0029C498 a80000b4 cbz      x8, #0x29c4ac
0029C49C c0420391 add      x0, x22, #0xd0
0029C4A0 df7e0ca9 stp      xzr, xzr, [x22, #0xc0]
0029C4A4 df7e0ba9 stp      xzr, xzr, [x22, #0xb0]
0029C4A8 00013fd6 blr      x8
0029C4AC c81e40f9 ldr      x8, [x22, #0x38]
0029C4B0 a80000b4 cbz      x8, #0x29c4c4
0029C4B4 c0420191 add      x0, x22, #0x50
0029C4B8 df7e04a9 stp      xzr, xzr, [x22, #0x40]
0029C4BC df7e03a9 stp      xzr, xzr, [x22, #0x30]
0029C4C0 00013fd6 blr      x8
0029C4C4 c01240f9 ldr      x0, [x22, #0x20]
0029C4C8 a00000b4 cbz      x0, #0x29c4dc
0029C4CC 088c44f8 ldr      x8, [x0, #0x48]!
0029C4D0 080d40f9 ldr      x8, [x8, #0x18]
0029C4D4 00013fd6 blr      x8
0029C4D8 df1200f9 str      xzr, [x22, #0x20]
0029C4DC c00e40f9 ldr      x0, [x22, #0x18]
0029C4E0 a00000b4 cbz      x0, #0x29c4f4
0029C4E4 088c44f8 ldr      x8, [x0, #0x48]!
0029C4E8 080d40f9 ldr      x8, [x8, #0x18]
0029C4EC 00013fd6 blr      x8
0029C4F0 df0e00f9 str      xzr, [x22, #0x18]
0029C4F4 808a59a9 ldp      x0, x2, [x20, #0x198]
0029C4F8 e10316aa mov      x1, x22
0029C4FC 83d640f9 ldr      x3, [x20, #0x1a8]
0029C500 080040f9 ldr      x8, [x0]
0029C504 080d40f9 ldr      x8, [x8, #0x18]
0029C508 00013fd6 blr      x8
0029C50C 97ca40f9 ldr      x23, [x20, #0x190]
0029C510 08268052 mov      w8, #0x130
0029C514 95a219a9 stp      x21, x8, [x20, #0x198]
0029C518 08028052 mov      w8, #0x10
0029C51C 88d600f9 str      x8, [x20, #0x1a8]
0029C520 f7f7ffb4 cbz      x23, #0x29c41c
0029C524 81020e91 add      x1, x20, #0x380
0029C528 e00317aa mov      x0, x23
0029C52C cc100094 bl       #0x2a085c
0029C530 80ca40f9 ldr      x0, [x20, #0x190]
0029C534 81021091 add      x1, x20, #0x400
0029C538 e7100094 bl       #0x2a08d4
0029C53C 80ca40f9 ldr      x0, [x20, #0x190]
0029C540 81021291 add      x1, x20, #0x480
0029C544 02110094 bl       #0x2a094c
0029C548 88ca40f9 ldr      x8, [x20, #0x190]
0029C54C 1f0100f1 cmp      x8, #0
0029C550 f4079f1a cset     w20, ne
0029C554 e00313aa mov      x0, x19
0029C558 42680d94 bl       #0x5f6660
0029C55C e003142a mov      w0, w20
0029C560 f44f43a9 ldp      x20, x19, [sp, #0x30]
0029C564 f65742a9 ldp      x22, x21, [sp, #0x20]
0029C568 f85f41a9 ldp      x24, x23, [sp, #0x10]
0029C56C fd7bc4a8 ldp      x29, x30, [sp], #0x40
0029C570 c0035fd6 ret      
0029C574 a799f597 bl       #0x2c10
~~~
### 0x29f060 (208 bytes; 52 slots)
~~~asm
0029F060 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0029F064 f65701a9 stp      x22, x21, [sp, #0x10]
0029F068 f44f02a9 stp      x20, x19, [sp, #0x20]
0029F06C fd030091 mov      x29, sp
0029F070 130040f9 ldr      x19, [x0]
0029F074 f40300aa mov      x20, x0
0029F078 60ca40f9 ldr      x0, [x19, #0x190]
0029F07C 800400b4 cbz      x0, #0x29f10c
0029F080 cc050094 bl       #0x2a07b0
0029F084 c0040036 tbz      w0, #0, #0x29f11c
0029F088 75c20691 add      x21, x19, #0x1b0
0029F08C e00315aa mov      x0, x21
0029F090 705d0d94 bl       #0x5f6650
0029F094 60ca40f9 ldr      x0, [x19, #0x190]
0029F098 000300b4 cbz      x0, #0x29f0f8
0029F09C ae050094 bl       #0x2a0754
0029F0A0 080040f9 ldr      x8, [x0]
0029F0A4 890640f9 ldr      x9, [x20, #8]
0029F0A8 1f0109eb cmp      x8, x9
0029F0AC 61020054 b.ne     #0x29f0f8
0029F0B0 60ca40f9 ldr      x0, [x19, #0x190]
0029F0B4 c7050094 bl       #0x2a07d0
0029F0B8 f603002a mov      w22, w0
0029F0BC e00315aa mov      x0, x21
0029F0C0 685d0d94 bl       #0x5f6660
0029F0C4 df0a0071 cmp      w22, #2
0029F0C8 c1010054 b.ne     #0x29f100
0029F0CC e00315aa mov      x0, x21
0029F0D0 605d0d94 bl       #0x5f6650
0029F0D4 60ca40f9 ldr      x0, [x19, #0x190]
0029F0D8 000100b4 cbz      x0, #0x29f0f8
0029F0DC 9e050094 bl       #0x2a0754
0029F0E0 080040f9 ldr      x8, [x0]
0029F0E4 890640f9 ldr      x9, [x20, #8]
0029F0E8 1f0109eb cmp      x8, x9
0029F0EC 61000054 b.ne     #0x29f0f8
0029F0F0 60a20291 add      x0, x19, #0xa8
0029F0F4 99f90894 bl       #0x4dd758
0029F0F8 e00315aa mov      x0, x21
0029F0FC 595d0d94 bl       #0x5f6660
0029F100 e00313aa mov      x0, x19
0029F104 d5f5ff97 bl       #0x29c858
0029F108 e0031f2a mov      w0, wzr
0029F10C f44f42a9 ldp      x20, x19, [sp, #0x20]
0029F110 f65741a9 ldp      x22, x21, [sp, #0x10]
0029F114 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0029F118 c0035fd6 ret      
0029F11C 20008052 mov      w0, #1
0029F120 f44f42a9 ldp      x20, x19, [sp, #0x20]
0029F124 f65741a9 ldp      x22, x21, [sp, #0x10]
0029F128 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0029F12C c0035fd6 ret      
~~~
### 0x2a094c (120 bytes; 30 slots)
~~~asm
002A094C fd7bbda9 stp      x29, x30, [sp, #-0x30]!
002A0950 f50b00f9 str      x21, [sp, #0x10]
002A0954 f44f02a9 stp      x20, x19, [sp, #0x20]
002A0958 fd030091 mov      x29, sp
002A095C 151040f9 ldr      x21, [x0, #0x20]
002A0960 f30301aa mov      x19, x1
002A0964 b4421091 add      x20, x21, #0x410
002A0968 a80e42f9 ldr      x8, [x21, #0x418]
002A096C a80000b4 cbz      x8, #0x2a0980
002A0970 a0c21091 add      x0, x21, #0x430
002A0974 9f7e01a9 stp      xzr, xzr, [x20, #0x10]
002A0978 9f7e00a9 stp      xzr, xzr, [x20]
002A097C 00013fd6 blr      x8
002A0980 680a40f9 ldr      x8, [x19, #0x10]
002A0984 880100b4 cbz      x8, #0x2a09b4
002A0988 60820091 add      x0, x19, #0x20
002A098C a1c21091 add      x1, x21, #0x430
002A0990 00013fd6 blr      x8
002A0994 680e40f9 ldr      x8, [x19, #0x18]
002A0998 690640f9 ldr      x9, [x19, #8]
002A099C 890600f9 str      x9, [x20, #8]
002A09A0 880e00f9 str      x8, [x20, #0x18]
002A09A4 680240f9 ldr      x8, [x19]
002A09A8 690a40f9 ldr      x9, [x19, #0x10]
002A09AC 890a00f9 str      x9, [x20, #0x10]
002A09B0 880200f9 str      x8, [x20]
002A09B4 f44f42a9 ldp      x20, x19, [sp, #0x20]
002A09B8 f50b40f9 ldr      x21, [sp, #0x10]
002A09BC fd7bc3a8 ldp      x29, x30, [sp], #0x30
002A09C0 c0035fd6 ret      
~~~
### 0x4fc460 (260 bytes; 65 slots)
~~~asm
004FC460 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
004FC464 fc5f01a9 stp      x28, x23, [sp, #0x10]
004FC468 fd030091 mov      x29, sp
004FC46C f65702a9 stp      x22, x21, [sp, #0x20]
004FC470 f44f03a9 stp      x20, x19, [sp, #0x30]
004FC474 ffc30ad1 sub      sp, sp, #0x2b0
004FC478 f40301aa mov      x20, x1
004FC47C f30300aa mov      x19, x0
004FC480 c2528052 mov      w2, #0x296
004FC484 e06b0091 add      x0, sp, #0x1a
004FC488 e1031f2a mov      w1, wzr
004FC48C 31e70394 bl       #0x5f6150
004FC490 e16b0091 add      x1, sp, #0x1a
004FC494 e00314aa mov      x0, x20
004FC498 3fd30094 bl       #0x531194
004FC49C b6008052 mov      w22, #5
004FC4A0 e06b0091 add      x0, sp, #0x1a
004FC4A4 e103162a mov      w1, w22
004FC4A8 7b220094 bl       #0x504e94
004FC4AC e00314aa mov      x0, x20
004FC4B0 75220591 add      x21, x19, #0x148
004FC4B4 8bda0094 bl       #0x532ee0
004FC4B8 f703002a mov      w23, w0
004FC4BC e00314aa mov      x0, x20
004FC4C0 d2d70094 bl       #0x532408
004FC4C4 e0330039 strb     w0, [sp, #0xc]
004FC4C8 e00314aa mov      x0, x20
004FC4CC e1031f2a mov      w1, wzr
004FC4D0 20e90094 bl       #0x536950
004FC4D4 e01f0079 strh     w0, [sp, #0xe]
004FC4D8 e00314aa mov      x0, x20
004FC4DC 21008052 mov      w1, #1
004FC4E0 1ce90094 bl       #0x536950
004FC4E4 e0230079 strh     w0, [sp, #0x10]
004FC4E8 e00314aa mov      x0, x20
004FC4EC 41008052 mov      w1, #2
004FC4F0 18e90094 bl       #0x536950
004FC4F4 e0270079 strh     w0, [sp, #0x12]
004FC4F8 e00314aa mov      x0, x20
004FC4FC e103162a mov      w1, w22
004FC500 14e90094 bl       #0x536950
004FC504 e02b0079 strh     w0, [sp, #0x14]
004FC508 e00314aa mov      x0, x20
004FC50C 61008052 mov      w1, #3
004FC510 10e90094 bl       #0x536950
004FC514 e02f0079 strh     w0, [sp, #0x16]
004FC518 e00314aa mov      x0, x20
004FC51C 81008052 mov      w1, #4
004FC520 0ce90094 bl       #0x536950
004FC524 e0330079 strh     w0, [sp, #0x18]
004FC528 e1020012 and      w1, w23, #1
004FC52C e00314aa mov      x0, x20
004FC530 2cdb0094 bl       #0x5331e0
004FC534 e26b0091 add      x2, sp, #0x1a
004FC538 e3330091 add      x3, sp, #0xc
004FC53C e00313aa mov      x0, x19
004FC540 e10315aa mov      x1, x21
004FC544 f4200094 bl       #0x504914
004FC548 00000012 and      w0, w0, #1
004FC54C ffc30a91 add      sp, sp, #0x2b0
004FC550 f44f43a9 ldp      x20, x19, [sp, #0x30]
004FC554 f65742a9 ldp      x22, x21, [sp, #0x20]
004FC558 fc5f41a9 ldp      x28, x23, [sp, #0x10]
004FC55C fd7bc4a8 ldp      x29, x30, [sp], #0x40
004FC560 c0035fd6 ret      
~~~
### 0x4fc5dc (272 bytes; 68 slots)
~~~asm
004FC5DC fd7bbca9 stp      x29, x30, [sp, #-0x40]!
004FC5E0 fc0b00f9 str      x28, [sp, #0x10]
004FC5E4 fd030091 mov      x29, sp
004FC5E8 f65702a9 stp      x22, x21, [sp, #0x20]
004FC5EC f44f03a9 stp      x20, x19, [sp, #0x30]
004FC5F0 ffc30ad1 sub      sp, sp, #0x2b0
004FC5F4 f503022a mov      w21, w2
004FC5F8 f40301aa mov      x20, x1
004FC5FC f30300aa mov      x19, x0
004FC600 c2528052 mov      w2, #0x296
004FC604 e06b0091 add      x0, sp, #0x1a
004FC608 e1031f2a mov      w1, wzr
004FC60C d1e60394 bl       #0x5f6150
004FC610 e16b0091 add      x1, sp, #0x1a
004FC614 e00314aa mov      x0, x20
004FC618 dfd20094 bl       #0x531194
004FC61C e06b0091 add      x0, sp, #0x1a
004FC620 e1008052 mov      w1, #7
004FC624 1c220094 bl       #0x504e94
004FC628 75000036 tbz      w21, #0, #0x4fc634
004FC62C e06b0091 add      x0, sp, #0x1a
004FC630 082a0094 bl       #0x506e50
004FC634 e00314aa mov      x0, x20
004FC638 75220591 add      x21, x19, #0x148
004FC63C 29da0094 bl       #0x532ee0
004FC640 f603002a mov      w22, w0
004FC644 e00314aa mov      x0, x20
004FC648 70d70094 bl       #0x532408
004FC64C e0330039 strb     w0, [sp, #0xc]
004FC650 e00314aa mov      x0, x20
004FC654 e1031f2a mov      w1, wzr
004FC658 13ea0094 bl       #0x536ea4
004FC65C e01f0079 strh     w0, [sp, #0xe]
004FC660 e00314aa mov      x0, x20
004FC664 21008052 mov      w1, #1
004FC668 0fea0094 bl       #0x536ea4
004FC66C e0230079 strh     w0, [sp, #0x10]
004FC670 e00314aa mov      x0, x20
004FC674 41008052 mov      w1, #2
004FC678 0bea0094 bl       #0x536ea4
004FC67C e0270079 strh     w0, [sp, #0x12]
004FC680 a1008052 mov      w1, #5
004FC684 e00314aa mov      x0, x20
004FC688 07ea0094 bl       #0x536ea4
004FC68C e02b0079 strh     w0, [sp, #0x14]
004FC690 e00314aa mov      x0, x20
004FC694 61008052 mov      w1, #3
004FC698 03ea0094 bl       #0x536ea4
004FC69C e02f0079 strh     w0, [sp, #0x16]
004FC6A0 e00314aa mov      x0, x20
004FC6A4 81008052 mov      w1, #4
004FC6A8 ffe90094 bl       #0x536ea4
004FC6AC e0330079 strh     w0, [sp, #0x18]
004FC6B0 c1020012 and      w1, w22, #1
004FC6B4 e00314aa mov      x0, x20
004FC6B8 cada0094 bl       #0x5331e0
004FC6BC e26b0091 add      x2, sp, #0x1a
004FC6C0 e3330091 add      x3, sp, #0xc
004FC6C4 e00313aa mov      x0, x19
004FC6C8 e10315aa mov      x1, x21
004FC6CC b4200094 bl       #0x50499c
004FC6D0 00000012 and      w0, w0, #1
004FC6D4 ffc30a91 add      sp, sp, #0x2b0
004FC6D8 f44f43a9 ldp      x20, x19, [sp, #0x30]
004FC6DC fc0b40f9 ldr      x28, [sp, #0x10]
004FC6E0 f65742a9 ldp      x22, x21, [sp, #0x20]
004FC6E4 fd7bc4a8 ldp      x29, x30, [sp], #0x40
004FC6E8 c0035fd6 ret      
~~~

## SV owner candidates
### candidate 0x29aa90 (5 matching instructions)
- 0029AAAC ff0312d1 sub      sp, sp, #0x480
- 0029AB5C 02808052 mov      w2, #0x400
- 0029ABC8 08808052 mov      w8, #0x400
- 0029ABD0 3f0310f1 cmp      x25, #0x400
- 0029ADC8 ff031291 add      sp, sp, #0x480
### 0x29aa90 (856 bytes; 214 slots)
~~~asm
0029AA90 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
0029AA94 fc6f01a9 stp      x28, x27, [sp, #0x10]
0029AA98 fd030091 mov      x29, sp
0029AA9C fa6702a9 stp      x26, x25, [sp, #0x20]
0029AAA0 f85f03a9 stp      x24, x23, [sp, #0x30]
0029AAA4 f65704a9 stp      x22, x21, [sp, #0x40]
0029AAA8 f44f05a9 stp      x20, x19, [sp, #0x50]
0029AAAC ff0312d1 sub      sp, sp, #0x480
0029AAB0 080440f9 ldr      x8, [x0, #8]
0029AAB4 e11300f9 str      x1, [sp, #0x20]
0029AAB8 e30300f9 str      x3, [sp]
0029AABC 093040f9 ldr      x9, [x0, #0x60]
0029AAC0 080109cb sub      x8, x8, x9
0029AAC4 ff2b00f9 str      xzr, [sp, #0x50]
0029AAC8 ffff06a9 stp      xzr, xzr, [sp, #0x68]
0029AACC 0a01038b add      x10, x8, x3
0029AAD0 ffff05a9 stp      xzr, xzr, [sp, #0x58]
0029AAD4 4801028b add      x8, x10, x2
0029AAD8 09fd42d3 lsr      x9, x8, #2
0029AADC 1f0540f2 tst      x8, #3
0029AAE0 2805899a cinc     x8, x9, ne
0029AAE4 5f0400f1 cmp      x2, #1
0029AAE8 cb160054 b.lt     #0x29adc0
0029AAEC f60300aa mov      x22, x0
0029AAF0 f5031faa mov      x21, xzr
0029AAF4 e80700f9 str      x8, [sp, #8]
0029AAF8 54fd42d3 lsr      x20, x10, #2
0029AAFC 17200191 add      x23, x0, #0x48
0029AB00 38008052 mov      w24, #1
0029AB04 ea0b01a9 stp      x10, x2, [sp, #0x10]
0029AB08 0e000014 b        #0x29ab40
0029AB0C 1f2003d5 nop      
0029AB10 f82f40b9 ldr      w24, [sp, #0x2c]
0029AB14 e2031baa mov      x2, x27
0029AB18 b802180a and      w24, w21, w24
0029AB1C e81340f9 ldr      x8, [sp, #0x20]
0029AB20 f51b40f9 ldr      x21, [sp, #0x30]
0029AB24 e12740f9 ldr      x1, [sp, #0x48]
0029AB28 0001158b add      x0, x8, x21
0029AB2C ad6e0d94 bl       #0x5f65e0
0029AB30 ea0b41a9 ldp      x10, x2, [sp, #0x10]
0029AB34 7503158b add      x21, x27, x21
0029AB38 bf0202eb cmp      x21, x2
0029AB3C 4a140054 b.ge     #0x29adc4
0029AB40 a8020a0b add      w8, w21, w10
0029AB44 0a058052 mov      w10, #0x28
0029AB48 530015cb sub      x19, x2, x21
0029AB4C 09054092 and      x9, x8, #3
0029AB50 e0e30191 add      x0, sp, #0x78
0029AB54 e1031f2a mov      w1, wzr
0029AB58 490109cb sub      x9, x10, x9
0029AB5C 02808052 mov      w2, #0x400
0029AB60 7f0209eb cmp      x19, x9
0029AB64 7bb2899a csel     x27, x19, x9, lt
0029AB68 e9430191 add      x9, sp, #0x50
0029AB6C 090540b3 bfxil    x9, x8, #0, #2
0029AB70 e92700f9 str      x9, [sp, #0x48]
0029AB74 776d0d94 bl       #0x5f6150
0029AB78 7f0600f1 cmp      x19, #1
0029AB7C f51b00f9 str      x21, [sp, #0x30]
0029AB80 f82f00b9 str      w24, [sp, #0x2c]
0029AB84 eb0c0054 b.lt     #0x29ad20
0029AB88 e80340f9 ldr      x8, [sp]
0029AB8C f3031faa mov      x19, xzr
0029AB90 a802088b add      x8, x21, x8
0029AB94 35008052 mov      w21, #1
0029AB98 e8ef03a9 stp      x8, x27, [sp, #0x38]
0029AB9C 0a000014 b        #0x29abc4
0029ABA0 e82740f9 ldr      x8, [sp, #0x48]
0029ABA4 1500150a and      w21, w0, w21
0029ABA8 e1e30191 add      x1, sp, #0x78
0029ABAC e2031aaa mov      x2, x26
0029ABB0 0001138b add      x0, x8, x19
0029ABB4 8b6e0d94 bl       #0x5f65e0
0029ABB8 5303138b add      x19, x26, x19
0029ABBC 7f021beb cmp      x19, x27
0029ABC0 2a0b0054 b.ge     #0x29ad24
0029ABC4 790313cb sub      x25, x27, x19
0029ABC8 08808052 mov      w8, #0x400
0029ABCC e00316aa mov      x0, x22
0029ABD0 3f0310f1 cmp      x25, #0x400
0029ABD4 3ab3889a csel     x26, x25, x8, lt
0029ABD8 e81f40f9 ldr      x8, [sp, #0x38]
0029ABDC 1801138b add      x24, x8, x19
0029ABE0 c80240f9 ldr      x8, [x22]
0029ABE4 081540f9 ldr      x8, [x8, #0x28]
0029ABE8 00013fd6 blr      x8
0029ABEC fb0300aa mov      x27, x0
0029ABF0 e0031f2a mov      w0, wzr
0029ABF4 3f0700f1 cmp      x25, #1
0029ABF8 4b020054 b.lt     #0x29ac40
0029ABFC c80640f9 ldr      x8, [x22, #8]
0029AC00 1c01188b add      x28, x8, x24
0029AC04 fc01f8b7 tbnz     x28, #0x3f, #0x29ac40
0029AC08 680340f9 ldr      x8, [x27]
0029AC0C e0031baa mov      x0, x27
0029AC10 e1031aaa mov      x1, x26
0029AC14 e2031caa mov      x2, x28
0029AC18 080940f9 ldr      x8, [x8, #0x10]
0029AC1C 00013fd6 blr      x8
0029AC20 80010036 tbz      w0, #0, #0x29ac50
0029AC24 680340f9 ldr      x8, [x27]
0029AC28 e1e30191 add      x1, sp, #0x78
0029AC2C e0031baa mov      x0, x27
0029AC30 e2031aaa mov      x2, x26
0029AC34 e3031caa mov      x3, x28
0029AC38 081540f9 ldr      x8, [x8, #0x28]
0029AC3C 00013fd6 blr      x8
0029AC40 fb2340f9 ldr      x27, [sp, #0x40]
0029AC44 3f0700f1 cmp      x25, #1
0029AC48 ca000054 b.ge     #0x29ac60
0029AC4C d5ffff17 b        #0x29aba0
0029AC50 e0031f2a mov      w0, wzr
0029AC54 fb2340f9 ldr      x27, [sp, #0x40]
0029AC58 3f0700f1 cmp      x25, #1
0029AC5C 2bfaff54 b.lt     #0x29aba0
0029AC60 c81e40f9 ldr      x8, [x22, #0x38]
0029AC64 e8f9ffb4 cbz      x8, #0x29aba0
0029AC68 c91a40f9 ldr      x9, [x22, #0x30]
0029AC6C a9f9ffb4 cbz      x9, #0x29aba0
0029AC70 ca0640f9 ldr      x10, [x22, #8]
0029AC74 5f0700f1 cmp      x26, #1
0029AC78 4a01188b add      x10, x10, x24
0029AC7C cb2240f9 ldr      x11, [x22, #0x40]
0029AC80 4a010bcb sub      x10, x10, x11
0029AC84 4b0dc89a sdiv     x11, x10, x8
0029AC88 6aa9089b msub     x10, x11, x8, x10
0029AC8C a1000054 b.ne     #0x29aca0
0029AC90 eb031faa mov      x11, xzr
0029AC94 19000014 b        #0x29acf8
0029AC98 1f2003d5 nop      
0029AC9C 1f2003d5 nop      
0029ACA0 eb031faa mov      x11, xzr
0029ACA4 4cfb7f92 and      x12, x26, #0xfffffffffffffffe
0029ACA8 f1e30191 add      x17, sp, #0x78
0029ACAC 1f2003d5 nop      
0029ACB0 4d010b8b add      x13, x10, x11
0029ACB4 2f020b8b add      x15, x17, x11
0029ACB8 ae0dc89a sdiv     x14, x13, x8
0029ACBC f0014039 ldrb     w16, [x15]
0029ACC0 6b090091 add      x11, x11, #2
0029ACC4 9f010beb cmp      x12, x11
0029ACC8 ceb5089b msub     x14, x14, x8, x13
0029ACCC ad050091 add      x13, x13, #1
0029ACD0 2e696e38 ldrb     w14, [x9, x14]
0029ACD4 0e020e4a eor      w14, w16, w14
0029ACD8 b00dc89a sdiv     x16, x13, x8
0029ACDC ee010039 strb     w14, [x15]
0029ACE0 ee054039 ldrb     w14, [x15, #1]
0029ACE4 0db6089b msub     x13, x16, x8, x13
0029ACE8 2d696d38 ldrb     w13, [x9, x13]
0029ACEC cd010d4a eor      w13, w14, w13
0029ACF0 ed050039 strb     w13, [x15, #1]
0029ACF4 e1fdff54 b.ne     #0x29acb0
0029ACF8 5af50736 tbz      w26, #0, #0x29aba0
0029ACFC 6a010a8b add      x10, x11, x10
0029AD00 4c0dc89a sdiv     x12, x10, x8
0029AD04 88a9089b msub     x8, x12, x8, x10
0029AD08 eae30191 add      x10, sp, #0x78
0029AD0C 28696838 ldrb     w8, [x9, x8]
0029AD10 49696b38 ldrb     w9, [x10, x11]
0029AD14 2801084a eor      w8, w9, w8
0029AD18 48692b38 strb     w8, [x10, x11]
0029AD1C a1ffff17 b        #0x29aba0
0029AD20 35008052 mov      w21, #1
0029AD24 f80740f9 ldr      x24, [sp, #8]
0029AD28 f3031faa mov      x19, xzr
0029AD2C f9430191 add      x25, sp, #0x50
0029AD30 c82a40f9 ldr      x8, [x22, #0x50]
0029AD34 1f0114eb cmp      x8, x20
0029AD38 2d020054 b.le     #0x29ad7c
0029AD3C c82640f9 ldr      x8, [x22, #0x48]
0029AD40 e00317aa mov      x0, x23
0029AD44 080140f9 ldr      x8, [x8]
0029AD48 00013fd6 blr      x8
0029AD4C e8031faa mov      x8, xzr
0029AD50 df2a00f9 str      xzr, [x22, #0x50]
0029AD54 0a000014 b        #0x29ad7c
0029AD58 1f2003d5 nop      
0029AD5C 1f2003d5 nop      
0029AD60 c82640f9 ldr      x8, [x22, #0x48]
0029AD64 e00317aa mov      x0, x23
0029AD68 080940f9 ldr      x8, [x8, #0x10]
0029AD6C 00013fd6 blr      x8
0029AD70 c82a40f9 ldr      x8, [x22, #0x50]
0029AD74 08050091 add      x8, x8, #1
0029AD78 c82a00f9 str      x8, [x22, #0x50]
0029AD7C 1f0114eb cmp      x8, x20
0029AD80 0bffff54 b.lt     #0x29ad60
0029AD84 e80240f9 ldr      x8, [x23]
0029AD88 e00317aa mov      x0, x23
0029AD8C 94060091 add      x20, x20, #1
0029AD90 080540f9 ldr      x8, [x8, #8]
0029AD94 00013fd6 blr      x8
0029AD98 68f67ed3 lsl      x8, x19, #2
0029AD9C 9f0218eb cmp      x20, x24
0029ADA0 296b68b8 ldr      w9, [x25, x8]
0029ADA4 2901004a eor      w9, w9, w0
0029ADA8 296b28b8 str      w9, [x25, x8]
0029ADAC 22ebff54 b.hs     #0x29ab10
0029ADB0 73060091 add      x19, x19, #1
0029ADB4 7f2a00f1 cmp      x19, #0xa
0029ADB8 c1fbff54 b.ne     #0x29ad30
0029ADBC 55ffff17 b        #0x29ab10
0029ADC0 38008052 mov      w24, #1
0029ADC4 00030012 and      w0, w24, #1
0029ADC8 ff031291 add      sp, sp, #0x480
0029ADCC f44f45a9 ldp      x20, x19, [sp, #0x50]
0029ADD0 f65744a9 ldp      x22, x21, [sp, #0x40]
0029ADD4 f85f43a9 ldp      x24, x23, [sp, #0x30]
0029ADD8 fa6742a9 ldp      x26, x25, [sp, #0x20]
0029ADDC fc6f41a9 ldp      x28, x27, [sp, #0x10]
0029ADE0 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0029ADE4 c0035fd6 ret      
~~~
### candidate 0x29adf0 (5 matching instructions)
- 0029AE0C ff0312d1 sub      sp, sp, #0x480
- 0029AF74 02808052 mov      w2, #0x400
- 0029AFE0 08808052 mov      w8, #0x400
- 0029AFE8 9f0310f1 cmp      x28, #0x400
- 0029B130 ff031291 add      sp, sp, #0x480
### 0x29adf0 (864 bytes; 216 slots)
~~~asm
0029ADF0 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
0029ADF4 fc6f01a9 stp      x28, x27, [sp, #0x10]
0029ADF8 fd030091 mov      x29, sp
0029ADFC fa6702a9 stp      x26, x25, [sp, #0x20]
0029AE00 f85f03a9 stp      x24, x23, [sp, #0x30]
0029AE04 f65704a9 stp      x22, x21, [sp, #0x40]
0029AE08 f44f05a9 stp      x20, x19, [sp, #0x50]
0029AE0C ff0312d1 sub      sp, sp, #0x480
0029AE10 080440f9 ldr      x8, [x0, #8]
0029AE14 e11300f9 str      x1, [sp, #0x20]
0029AE18 e30300f9 str      x3, [sp]
0029AE1C 093040f9 ldr      x9, [x0, #0x60]
0029AE20 080109cb sub      x8, x8, x9
0029AE24 0a01038b add      x10, x8, x3
0029AE28 4801028b add      x8, x10, x2
0029AE2C 09fd42d3 lsr      x9, x8, #2
0029AE30 1f0540f2 tst      x8, #3
0029AE34 3805899a cinc     x24, x9, ne
0029AE38 5f0400f1 cmp      x2, #1
0029AE3C 6b170054 b.lt     #0x29b128
0029AE40 f60300aa mov      x22, x0
0029AE44 fa031faa mov      x26, xzr
0029AE48 f80700f9 str      x24, [sp, #8]
0029AE4C 54fd42d3 lsr      x20, x10, #2
0029AE50 17200191 add      x23, x0, #0x48
0029AE54 3b008052 mov      w27, #1
0029AE58 fc430191 add      x28, sp, #0x50
0029AE5C ea0b01a9 stp      x10, x2, [sp, #0x10]
0029AE60 f9e30191 add      x25, sp, #0x78
0029AE64 0e000014 b        #0x29ae9c
0029AE68 1f2003d5 nop      
0029AE6C 1f2003d5 nop      
0029AE70 f82740f9 ldr      x24, [sp, #0x48]
0029AE74 35008052 mov      w21, #1
0029AE78 fa1b40f9 ldr      x26, [sp, #0x30]
0029AE7C fc430191 add      x28, sp, #0x50
0029AE80 1a031a8b add      x26, x24, x26
0029AE84 fb2f40b9 ldr      w27, [sp, #0x2c]
0029AE88 ea0b41a9 ldp      x10, x2, [sp, #0x10]
0029AE8C f80740f9 ldr      x24, [sp, #8]
0029AE90 bb021b0a and      w27, w21, w27
0029AE94 5f0302eb cmp      x26, x2
0029AE98 aa140054 b.ge     #0x29b12c
0029AE9C 48030a0b add      w8, w26, w10
0029AEA0 e0430191 add      x0, sp, #0x50
0029AEA4 000540b3 bfxil    x0, x8, #0, #2
0029AEA8 09054092 and      x9, x8, #3
0029AEAC e81340f9 ldr      x8, [sp, #0x20]
0029AEB0 0a058052 mov      w10, #0x28
0029AEB4 53001acb sub      x19, x2, x26
0029AEB8 490109cb sub      x9, x10, x9
0029AEBC e02300f9 str      x0, [sp, #0x40]
0029AEC0 7f0209eb cmp      x19, x9
0029AEC4 ffff06a9 stp      xzr, xzr, [sp, #0x68]
0029AEC8 62b2899a csel     x2, x19, x9, lt
0029AECC ffff05a9 stp      xzr, xzr, [sp, #0x58]
0029AED0 01011a8b add      x1, x8, x26
0029AED4 e2ff04a9 stp      x2, xzr, [sp, #0x48]
0029AED8 c26d0d94 bl       #0x5f65e0
0029AEDC f5031faa mov      x21, xzr
0029AEE0 c82a40f9 ldr      x8, [x22, #0x50]
0029AEE4 1f0114eb cmp      x8, x20
0029AEE8 2d020054 b.le     #0x29af2c
0029AEEC c82640f9 ldr      x8, [x22, #0x48]
0029AEF0 e00317aa mov      x0, x23
0029AEF4 080140f9 ldr      x8, [x8]
0029AEF8 00013fd6 blr      x8
0029AEFC e8031faa mov      x8, xzr
0029AF00 df2a00f9 str      xzr, [x22, #0x50]
0029AF04 0a000014 b        #0x29af2c
0029AF08 1f2003d5 nop      
0029AF0C 1f2003d5 nop      
0029AF10 c82640f9 ldr      x8, [x22, #0x48]
0029AF14 e00317aa mov      x0, x23
0029AF18 080940f9 ldr      x8, [x8, #0x10]
0029AF1C 00013fd6 blr      x8
0029AF20 c82a40f9 ldr      x8, [x22, #0x50]
0029AF24 08050091 add      x8, x8, #1
0029AF28 c82a00f9 str      x8, [x22, #0x50]
0029AF2C 1f0114eb cmp      x8, x20
0029AF30 0bffff54 b.lt     #0x29af10
0029AF34 e80240f9 ldr      x8, [x23]
0029AF38 e00317aa mov      x0, x23
0029AF3C 94060091 add      x20, x20, #1
0029AF40 080540f9 ldr      x8, [x8, #8]
0029AF44 00013fd6 blr      x8
0029AF48 a8f67ed3 lsl      x8, x21, #2
0029AF4C 9f0218eb cmp      x20, x24
0029AF50 896b68b8 ldr      w9, [x28, x8]
0029AF54 2901004a eor      w9, w9, w0
0029AF58 896b28b8 str      w9, [x28, x8]
0029AF5C 82000054 b.hs     #0x29af6c
0029AF60 b5060091 add      x21, x21, #1
0029AF64 bf2a00f1 cmp      x21, #0xa
0029AF68 c1fbff54 b.ne     #0x29aee0
0029AF6C e0e30191 add      x0, sp, #0x78
0029AF70 e1031f2a mov      w1, wzr
0029AF74 02808052 mov      w2, #0x400
0029AF78 766c0d94 bl       #0x5f6150
0029AF7C 7f0600f1 cmp      x19, #1
0029AF80 fa1b00f9 str      x26, [sp, #0x30]
0029AF84 fb2f00b9 str      w27, [sp, #0x2c]
0029AF88 4bf7ff54 b.lt     #0x29ae70
0029AF8C e80340f9 ldr      x8, [sp]
0029AF90 f3031faa mov      x19, xzr
0029AF94 35008052 mov      w21, #1
0029AF98 f82740f9 ldr      x24, [sp, #0x48]
0029AF9C 4803088b add      x8, x26, x8
0029AFA0 e81f00f9 str      x8, [sp, #0x38]
0029AFA4 0e000014 b        #0x29afdc
0029AFA8 1f2003d5 nop      
0029AFAC 1f2003d5 nop      
0029AFB0 680340f9 ldr      x8, [x27]
0029AFB4 e1e30191 add      x1, sp, #0x78
0029AFB8 e0031baa mov      x0, x27
0029AFBC e2031aaa mov      x2, x26
0029AFC0 e3031caa mov      x3, x28
0029AFC4 081940f9 ldr      x8, [x8, #0x30]
0029AFC8 00013fd6 blr      x8
0029AFCC 5303138b add      x19, x26, x19
0029AFD0 1500150a and      w21, w0, w21
0029AFD4 7f0218eb cmp      x19, x24
0029AFD8 0af5ff54 b.ge     #0x29ae78
0029AFDC 1c0313cb sub      x28, x24, x19
0029AFE0 08808052 mov      w8, #0x400
0029AFE4 e0e30191 add      x0, sp, #0x78
0029AFE8 9f0310f1 cmp      x28, #0x400
0029AFEC 9ab3889a csel     x26, x28, x8, lt
0029AFF0 e82340f9 ldr      x8, [sp, #0x40]
0029AFF4 e2031aaa mov      x2, x26
0029AFF8 0101138b add      x1, x8, x19
0029AFFC 796d0d94 bl       #0x5f65e0
0029B000 e81f40f9 ldr      x8, [sp, #0x38]
0029B004 9f0700f1 cmp      x28, #1
0029B008 1801138b add      x24, x8, x19
0029B00C eb050054 b.lt     #0x29b0c8
0029B010 c81e40f9 ldr      x8, [x22, #0x38]
0029B014 a80500b4 cbz      x8, #0x29b0c8
0029B018 c91a40f9 ldr      x9, [x22, #0x30]
0029B01C 690500b4 cbz      x9, #0x29b0c8
0029B020 ca0640f9 ldr      x10, [x22, #8]
0029B024 5f0700f1 cmp      x26, #1
0029B028 4a01188b add      x10, x10, x24
0029B02C cb2240f9 ldr      x11, [x22, #0x40]
0029B030 4a010bcb sub      x10, x10, x11
0029B034 4b0dc89a sdiv     x11, x10, x8
0029B038 6aa9089b msub     x10, x11, x8, x10
0029B03C a1000054 b.ne     #0x29b050
0029B040 eb031faa mov      x11, xzr
0029B044 19000014 b        #0x29b0a8
0029B048 1f2003d5 nop      
0029B04C 1f2003d5 nop      
0029B050 eb031faa mov      x11, xzr
0029B054 4cfb7f92 and      x12, x26, #0xfffffffffffffffe
0029B058 1f2003d5 nop      
0029B05C 1f2003d5 nop      
0029B060 4d010b8b add      x13, x10, x11
0029B064 2f030b8b add      x15, x25, x11
0029B068 ae0dc89a sdiv     x14, x13, x8
0029B06C f0014039 ldrb     w16, [x15]
0029B070 6b090091 add      x11, x11, #2
0029B074 9f010beb cmp      x12, x11
0029B078 ceb5089b msub     x14, x14, x8, x13
0029B07C ad050091 add      x13, x13, #1
0029B080 2e696e38 ldrb     w14, [x9, x14]
0029B084 0e020e4a eor      w14, w16, w14
0029B088 b00dc89a sdiv     x16, x13, x8
0029B08C ee010039 strb     w14, [x15]
0029B090 ee054039 ldrb     w14, [x15, #1]
0029B094 0db6089b msub     x13, x16, x8, x13
0029B098 2d696d38 ldrb     w13, [x9, x13]
0029B09C cd010d4a eor      w13, w14, w13
0029B0A0 ed050039 strb     w13, [x15, #1]
0029B0A4 e1fdff54 b.ne     #0x29b060
0029B0A8 1a010036 tbz      w26, #0, #0x29b0c8
0029B0AC 6a010a8b add      x10, x11, x10
0029B0B0 4c0dc89a sdiv     x12, x10, x8
0029B0B4 88a9089b msub     x8, x12, x8, x10
0029B0B8 28696838 ldrb     w8, [x9, x8]
0029B0BC 296b6b38 ldrb     w9, [x25, x11]
0029B0C0 2801084a eor      w8, w9, w8
0029B0C4 286b2b38 strb     w8, [x25, x11]
0029B0C8 c80240f9 ldr      x8, [x22]
0029B0CC e00316aa mov      x0, x22
0029B0D0 081140f9 ldr      x8, [x8, #0x20]
0029B0D4 00013fd6 blr      x8
0029B0D8 fb0300aa mov      x27, x0
0029B0DC e0031f2a mov      w0, wzr
0029B0E0 9f0700f1 cmp      x28, #1
0029B0E4 eb010054 b.lt     #0x29b120
0029B0E8 c80640f9 ldr      x8, [x22, #8]
0029B0EC 1c01188b add      x28, x8, x24
0029B0F0 f82740f9 ldr      x24, [sp, #0x48]
0029B0F4 dcf6ffb7 tbnz     x28, #0x3f, #0x29afcc
0029B0F8 680340f9 ldr      x8, [x27]
0029B0FC e0031baa mov      x0, x27
0029B100 e1031aaa mov      x1, x26
0029B104 e2031caa mov      x2, x28
0029B108 080d40f9 ldr      x8, [x8, #0x18]
0029B10C 00013fd6 blr      x8
0029B110 00f50737 tbnz     w0, #0, #0x29afb0
0029B114 e0031f2a mov      w0, wzr
0029B118 adffff17 b        #0x29afcc
0029B11C 1f2003d5 nop      
0029B120 f82740f9 ldr      x24, [sp, #0x48]
0029B124 aaffff17 b        #0x29afcc
0029B128 3b008052 mov      w27, #1
0029B12C 60030012 and      w0, w27, #1
0029B130 ff031291 add      sp, sp, #0x480
0029B134 f44f45a9 ldp      x20, x19, [sp, #0x50]
0029B138 f65744a9 ldp      x22, x21, [sp, #0x40]
0029B13C f85f43a9 ldp      x24, x23, [sp, #0x30]
0029B140 fa6742a9 ldp      x26, x25, [sp, #0x20]
0029B144 fc6f41a9 ldp      x28, x27, [sp, #0x10]
0029B148 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0029B14C c0035fd6 ret      
~~~
### candidate 0x29b170 (12 matching instructions)
- 0029B310 290142f9 ldr      x9, [x9, #0x400]
- 0029B510 68c201f9 str      x8, [x19, #0x380]
- 0029B51C 68c601f9 str      x8, [x19, #0x388]
- 0029B540 680202f9 str      x8, [x19, #0x400]
- 0029B54C 680602f9 str      x8, [x19, #0x408]
- 0029B558 680a02f9 str      x8, [x19, #0x410]
- 0029B564 680e02f9 str      x8, [x19, #0x418]
- 0029B570 684202f9 str      x8, [x19, #0x480]
- 0029B57C 684602f9 str      x8, [x19, #0x488]
- 0029B588 684a02f9 str      x8, [x19, #0x490]
- 0029B5F8 735202f9 str      x19, [x19, #0x4a0]
- 0029B5FC 684e02f9 str      x8, [x19, #0x498]
### 0x29b170 (1184 bytes; 296 slots)
~~~asm
0029B170 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
0029B174 f90b00f9 str      x25, [sp, #0x10]
0029B178 f85f02a9 stp      x24, x23, [sp, #0x20]
0029B17C f65703a9 stp      x22, x21, [sp, #0x30]
0029B180 f44f04a9 stp      x20, x19, [sp, #0x40]
0029B184 fd030091 mov      x29, sp
0029B188 1f1c00f9 str      xzr, [x0, #0x38]
0029B18C 28280090 adrp     x8, #0x79f000
0029B190 f30300aa mov      x19, x0
0029B194 084943f9 ldr      x8, [x8, #0x690]
0029B198 1f4000b9 str      wzr, [x0, #0x40]
0029B19C 57d03bd5 mrs      x23, tpidr_el0
0029B1A0 f5ca73f2 ands     x21, x23, #-0x2000
0029B1A4 1f7c01a9 stp      xzr, xzr, [x0, #0x10]
0029B1A8 08410091 add      x8, x8, #0x10
0029B1AC 1f7c02a9 stp      xzr, xzr, [x0, #0x20]
0029B1B0 1f3000b9 str      wzr, [x0, #0x30]
0029B1B4 080000f9 str      x8, [x0]
0029B1B8 c0000054 b.eq     #0x29b1d0
0029B1BC a84e40f9 ldr      x8, [x21, #0x98]
0029B1C0 a80000b4 cbz      x8, #0x29b1d4
0029B1C4 a80e088b add      x8, x21, x8, lsl #3
0029B1C8 080940f9 ldr      x8, [x8, #0x10]
0029B1CC 02000014 b        #0x29b1d4
0029B1D0 e8031faa mov      x8, xzr
0029B1D4 49280090 adrp     x9, #0x7a3000
0029B1D8 2a008052 mov      w10, #1
0029B1DC 29f541f9 ldr      x9, [x9, #0x3e8]
0029B1E0 4b280090 adrp     x11, #0x7a3000
0029B1E4 6bf941f9 ldr      x11, [x11, #0x3f0]
0029B1E8 f60313aa mov      x22, x19
0029B1EC 2a010039 strb     w10, [x9]
0029B1F0 29280090 adrp     x9, #0x79f000
0029B1F4 6a410091 add      x10, x11, #0x10
0029B1F8 29e141f9 ldr      x9, [x9, #0x3c0]
0029B1FC 6a2200a9 stp      x10, x8, [x19]
0029B200 68010191 add      x8, x11, #0x40
0029B204 682600f9 str      x8, [x19, #0x48]
0029B208 29410091 add      x9, x9, #0x10
0029B20C c90e05f8 str      x9, [x22, #0x50]!
0029B210 396e0994 bl       #0x4f6af4
0029B214 e8098052 mov      w8, #0x4f
0029B218 f40300aa mov      x20, x0
0029B21C 1835570a and      w24, w8, w23, lsr #13
0029B220 17080091 add      x23, x0, #2
0029B224 e8fe5f08 ldaxrb   w8, [x23]
0029B228 1f3d0171 cmp      w8, #0x4f
0029B22C 81000054 b.ne     #0x29b23c
0029B230 f87e0808 stxrb    w8, w24, [x23]
0029B234 88ffff35 cbnz     w8, #0x29b224
0029B238 1f000014 b        #0x29b2b4
0029B23C 990e0091 add      x25, x20, #3
0029B240 5f3f03d5 clrex    
0029B244 287f5f08 ldxrb    w8, [x25]
0029B248 08050011 add      w8, w8, #1
0029B24C 287f0908 stxrb    w9, w8, [x25]
0029B250 a9ffff35 cbnz     w9, #0x29b244
0029B254 bf3b03d5 dmb      ish
0029B258 1f2003d5 nop      
0029B25C 1f2003d5 nop      
0029B260 e8fe5f08 ldaxrb   w8, [x23]
0029B264 1f3d0171 cmp      w8, #0x4f
0029B268 c1000054 b.ne     #0x29b280
0029B26C f87e0808 stxrb    w8, w24, [x23]
0029B270 88ffff35 cbnz     w8, #0x29b260
0029B274 0c000014 b        #0x29b2a4
0029B278 1f2003d5 nop      
0029B27C 1f2003d5 nop      
0029B280 e00314aa mov      x0, x20
0029B284 5f3f03d5 clrex    
0029B288 b66b0d94 bl       #0x5f6160
0029B28C 1f2003d5 nop      
0029B290 e8fe5f08 ldaxrb   w8, [x23]
0029B294 1f3d0171 cmp      w8, #0x4f
0029B298 41ffff54 b.ne     #0x29b280
0029B29C f87e0808 stxrb    w8, w24, [x23]
0029B2A0 88ffff35 cbnz     w8, #0x29b290
0029B2A4 287f5f08 ldxrb    w8, [x25]
0029B2A8 08050051 sub      w8, w8, #1
0029B2AC 287f0908 stxrb    w9, w8, [x25]
0029B2B0 a9ffff35 cbnz     w9, #0x29b2a4
0029B2B4 28280090 adrp     x8, #0x79f000
0029B2B8 08e541f9 ldr      x8, [x8, #0x3c8]
0029B2BC 090144f9 ldr      x9, [x8, #0x800]
0029B2C0 3f0104f1 cmp      x9, #0x100
0029B2C4 401a0054 b.eq     #0x29b60c
0029B2C8 167929f8 str      x22, [x8, x9, lsl #3]
0029B2CC 090144f9 ldr      x9, [x8, #0x800]
0029B2D0 29050091 add      x9, x9, #1
0029B2D4 090104f9 str      x9, [x8, #0x800]
0029B2D8 e8098052 mov      w8, #0x4f
0029B2DC 1f2003d5 nop      
0029B2E0 ff7e5f08 ldxrb    wzr, [x23]
0029B2E4 e8fe0908 stlxrb   w9, w8, [x23]
0029B2E8 c9ffff35 cbnz     w9, #0x29b2e0
0029B2EC bf3b03d5 dmb      ish
0029B2F0 880e4039 ldrb     w8, [x20, #3]
0029B2F4 68000034 cbz      w8, #0x29b300
0029B2F8 e00314aa mov      x0, x20
0029B2FC a16b0d94 bl       #0x5f6180
0029B300 48280090 adrp     x8, #0x7a3000
0029B304 49280090 adrp     x9, #0x7a3000
0029B308 08fd41f9 ldr      x8, [x8, #0x3f8]
0029B30C 7f7e06a9 stp      xzr, xzr, [x19, #0x60]
0029B310 290142f9 ldr      x9, [x9, #0x400]
0029B314 7f7e07a9 stp      xzr, xzr, [x19, #0x70]
0029B318 08410091 add      x8, x8, #0x10
0029B31C 7f7e08a9 stp      xzr, xzr, [x19, #0x80]
0029B320 7f5200f9 str      xzr, [x19, #0xa0]
0029B324 360100f9 str      x22, [x9]
0029B328 687e05a9 stp      x8, xzr, [x19, #0x50]
0029B32C 68a20291 add      x8, x19, #0xa8
0029B330 7f7e09a9 stp      xzr, xzr, [x19, #0x90]
0029B334 29090994 bl       #0x4dd7d8
0029B338 7ffe0fa9 stp      xzr, xzr, [x19, #0xf8]
0029B33C 750100b4 cbz      x21, #0x29b368
0029B340 a84e40f9 ldr      x8, [x21, #0x98]
0029B344 280100b4 cbz      x8, #0x29b368
0029B348 a80e088b add      x8, x21, x8, lsl #3
0029B34C 080940f9 ldr      x8, [x8, #0x10]
0029B350 c80000b4 cbz      x8, #0x29b368
0029B354 68fe10a9 stp      x8, xzr, [x19, #0x108]
0029B358 74820491 add      x20, x19, #0x120
0029B35C 7f1a01b9 str      wzr, [x19, #0x118]
0029B360 7f9200f9 str      xzr, [x19, #0x120]
0029B364 07000014 b        #0x29b380
0029B368 d2670994 bl       #0x4f52b0
0029B36C 74820491 add      x20, x19, #0x120
0029B370 60fe10a9 stp      x0, xzr, [x19, #0x108]
0029B374 7f1a01b9 str      wzr, [x19, #0x118]
0029B378 7f9200f9 str      xzr, [x19, #0x120]
0029B37C d50000b4 cbz      x21, #0x29b394
0029B380 a84e40f9 ldr      x8, [x21, #0x98]
0029B384 880000b4 cbz      x8, #0x29b394
0029B388 a80e088b add      x8, x21, x8, lsl #3
0029B38C 000940f9 ldr      x0, [x8, #0x10]
0029B390 400000b5 cbnz     x0, #0x29b398
0029B394 c7670994 bl       #0x4f52b0
0029B398 80fe00a9 stp      x0, xzr, [x20, #8]
0029B39C 08f0a752 mov      w8, #0x3f800000
0029B3A0 60c20591 add      x0, x19, #0x170
0029B3A4 e1031f2a mov      w1, wzr
0029B3A8 e2031f2a mov      w2, wzr
0029B3AC 9f1a00b9 str      wzr, [x20, #0x18]
0029B3B0 7fa200f9 str      xzr, [x19, #0x140]
0029B3B4 684a01b9 str      w8, [x19, #0x148]
0029B3B8 7f7e15a9 stp      xzr, xzr, [x19, #0x150]
0029B3BC 7f7e16a9 stp      xzr, xzr, [x19, #0x160]
0029B3C0 b86b0d94 bl       #0x5f62a0
0029B3C4 60c20691 add      x0, x19, #0x1b0
0029B3C8 e1031f2a mov      w1, wzr
0029B3CC e2031f2a mov      w2, wzr
0029B3D0 7f7e1aa9 stp      xzr, xzr, [x19, #0x1a0]
0029B3D4 7f7e19a9 stp      xzr, xzr, [x19, #0x190]
0029B3D8 b26b0d94 bl       #0x5f62a0
0029B3DC 7ffe1da9 stp      xzr, xzr, [x19, #0x1d8]
0029B3E0 7fea00f9 str      xzr, [x19, #0x1d0]
0029B3E4 d50000b4 cbz      x21, #0x29b3fc
0029B3E8 a84e40f9 ldr      x8, [x21, #0x98]
0029B3EC 880000b4 cbz      x8, #0x29b3fc
0029B3F0 a80e088b add      x8, x21, x8, lsl #3
0029B3F4 000940f9 ldr      x0, [x8, #0x10]
0029B3F8 400000b5 cbnz     x0, #0x29b400
0029B3FC ad670994 bl       #0x4f52b0
0029B400 60fe1ea9 stp      x0, xzr, [x19, #0x1e8]
0029B404 28280090 adrp     x8, #0x79f000
0029B408 7ffa01b9 str      wzr, [x19, #0x1f8]
0029B40C 7f021439 strb     wzr, [x19, #0x500]
0029B410 7f8a02f9 str      xzr, [x19, #0x510]
0029B414 7f8e02f9 str      xzr, [x19, #0x518]
0029B418 7f9202f9 str      xzr, [x19, #0x520]
0029B41C 7f9602f9 str      xzr, [x19, #0x528]
0029B420 7f9a02f9 str      xzr, [x19, #0x530]
0029B424 7f9e02f9 str      xzr, [x19, #0x538]
0029B428 7fa202f9 str      xzr, [x19, #0x540]
0029B42C 7fa602f9 str      xzr, [x19, #0x548]
0029B430 7faa02f9 str      xzr, [x19, #0x550]
0029B434 7fae02f9 str      xzr, [x19, #0x558]
0029B438 7fb202f9 str      xzr, [x19, #0x560]
0029B43C 7fb602f9 str      xzr, [x19, #0x568]
0029B440 7fba02f9 str      xzr, [x19, #0x570]
0029B444 7fbe02f9 str      xzr, [x19, #0x578]
0029B448 7fc202f9 str      xzr, [x19, #0x580]
0029B44C 7fc602f9 str      xzr, [x19, #0x588]
0029B450 7fca02f9 str      xzr, [x19, #0x590]
0029B454 7fce02f9 str      xzr, [x19, #0x598]
0029B458 7fd202f9 str      xzr, [x19, #0x5a0]
0029B45C 7fd602f9 str      xzr, [x19, #0x5a8]
0029B460 08c147f9 ldr      x8, [x8, #0xf80]
0029B464 08410091 add      x8, x8, #0x10
0029B468 f65743a9 ldp      x22, x21, [sp, #0x30]
0029B46C f90b40f9 ldr      x25, [sp, #0x10]
0029B470 f85f42a9 ldp      x24, x23, [sp, #0x20]
0029B474 688a02f9 str      x8, [x19, #0x510]
0029B478 1f2003d5 nop      
0029B47C 08e80010 adr      x8, #0x29d17c
0029B480 680201f9 str      x8, [x19, #0x200]
0029B484 1f2003d5 nop      
0029B488 28ec0010 adr      x8, #0x29d20c
0029B48C 680601f9 str      x8, [x19, #0x208]
0029B490 1f2003d5 nop      
0029B494 e8eb0010 adr      x8, #0x29d210
0029B498 680a01f9 str      x8, [x19, #0x210]
0029B49C 1f2003d5 nop      
0029B4A0 e8eb0010 adr      x8, #0x29d21c
0029B4A4 680e01f9 str      x8, [x19, #0x218]
0029B4A8 1f2003d5 nop      
0029B4AC 28ec0010 adr      x8, #0x29d230
0029B4B0 684201f9 str      x8, [x19, #0x280]
0029B4B4 1f2003d5 nop      
0029B4B8 e8ed0010 adr      x8, #0x29d274
0029B4BC 684601f9 str      x8, [x19, #0x288]
0029B4C0 1f2003d5 nop      
0029B4C4 a8ed0010 adr      x8, #0x29d278
0029B4C8 684a01f9 str      x8, [x19, #0x290]
0029B4CC 1f2003d5 nop      
0029B4D0 a8ed0010 adr      x8, #0x29d284
0029B4D4 684e01f9 str      x8, [x19, #0x298]
0029B4D8 1f2003d5 nop      
0029B4DC a8ed0010 adr      x8, #0x29d290
0029B4E0 688201f9 str      x8, [x19, #0x300]
0029B4E4 1f2003d5 nop      
0029B4E8 481c0110 adr      x8, #0x29d870
0029B4EC 688601f9 str      x8, [x19, #0x308]
0029B4F0 1f2003d5 nop      
0029B4F4 081c0110 adr      x8, #0x29d874
0029B4F8 688a01f9 str      x8, [x19, #0x310]
0029B4FC 1f2003d5 nop      
0029B500 081c0110 adr      x8, #0x29d880
0029B504 688e01f9 str      x8, [x19, #0x318]
0029B508 1f2003d5 nop      
0029B50C 081c0110 adr      x8, #0x29d88c
0029B510 68c201f9 str      x8, [x19, #0x380]
0029B514 1f2003d5 nop      
0029B518 28280110 adr      x8, #0x29da1c
0029B51C 68c601f9 str      x8, [x19, #0x388]
0029B520 1f2003d5 nop      
0029B524 e8270110 adr      x8, #0x29da20
0029B528 68ca01f9 str      x8, [x19, #0x390]
0029B52C 1f2003d5 nop      
0029B530 e8270110 adr      x8, #0x29da2c
0029B534 68ce01f9 str      x8, [x19, #0x398]
0029B538 1f2003d5 nop      
0029B53C e8270110 adr      x8, #0x29da38
0029B540 680202f9 str      x8, [x19, #0x400]
0029B544 1f2003d5 nop      
0029B548 c8330110 adr      x8, #0x29dbc0
0029B54C 680602f9 str      x8, [x19, #0x408]
0029B550 1f2003d5 nop      
0029B554 88330110 adr      x8, #0x29dbc4
0029B558 680a02f9 str      x8, [x19, #0x410]
0029B55C 1f2003d5 nop      
0029B560 88330110 adr      x8, #0x29dbd0
0029B564 680e02f9 str      x8, [x19, #0x418]
0029B568 1f2003d5 nop      
0029B56C a8330110 adr      x8, #0x29dbe0
0029B570 684202f9 str      x8, [x19, #0x480]
0029B574 1f2003d5 nop      
0029B578 08630110 adr      x8, #0x29e1d8
0029B57C 684602f9 str      x8, [x19, #0x488]
0029B580 1f2003d5 nop      
0029B584 c8620110 adr      x8, #0x29e1dc
0029B588 684a02f9 str      x8, [x19, #0x490]
0029B58C 1f2003d5 nop      
0029B590 c8620110 adr      x8, #0x29e1e8
0029B594 7f9202f9 str      xzr, [x19, #0x520]
0029B598 7f9602f9 str      xzr, [x19, #0x528]
0029B59C 7f9a02f9 str      xzr, [x19, #0x530]
0029B5A0 7f9e02f9 str      xzr, [x19, #0x538]
0029B5A4 7fda02f9 str      xzr, [x19, #0x5b0]
0029B5A8 7fde02f9 str      xzr, [x19, #0x5b8]
0029B5AC 7fe202f9 str      xzr, [x19, #0x5c0]
0029B5B0 7fe602f9 str      xzr, [x19, #0x5c8]
0029B5B4 7fea02f9 str      xzr, [x19, #0x5d0]
0029B5B8 7fee02f9 str      xzr, [x19, #0x5d8]
0029B5BC 7ff202f9 str      xzr, [x19, #0x5e0]
0029B5C0 7ff602f9 str      xzr, [x19, #0x5e8]
0029B5C4 7ffa02f9 str      xzr, [x19, #0x5f0]
0029B5C8 7ffe02f9 str      xzr, [x19, #0x5f8]
0029B5CC 7f0203f9 str      xzr, [x19, #0x600]
0029B5D0 7f0603f9 str      xzr, [x19, #0x608]
0029B5D4 7f0a03f9 str      xzr, [x19, #0x610]
0029B5D8 7f0e03f9 str      xzr, [x19, #0x618]
0029B5DC 7f1203f9 str      xzr, [x19, #0x620]
0029B5E0 7f1603f9 str      xzr, [x19, #0x628]
0029B5E4 731201f9 str      x19, [x19, #0x220]
0029B5E8 735201f9 str      x19, [x19, #0x2a0]
0029B5EC 739201f9 str      x19, [x19, #0x320]
0029B5F0 73d201f9 str      x19, [x19, #0x3a0]
0029B5F4 731202f9 str      x19, [x19, #0x420]
0029B5F8 735202f9 str      x19, [x19, #0x4a0]
0029B5FC 684e02f9 str      x8, [x19, #0x498]
0029B600 f44f44a9 ldp      x20, x19, [sp, #0x40]
0029B604 fd7bc5a8 ldp      x29, x30, [sp], #0x50
0029B608 c0035fd6 ret      
0029B60C 819df597 bl       #0x2c10
~~~
### candidate 0x29b610 (1 matching instructions)
- 0029B634 d60242f9 ldr      x22, [x22, #0x400]
### 0x29b610 (448 bytes; 112 slots)
~~~asm
0029B610 ff8301d1 sub      sp, sp, #0x60
0029B614 fd7b02a9 stp      x29, x30, [sp, #0x20]
0029B618 f71b00f9 str      x23, [sp, #0x30]
0029B61C f65704a9 stp      x22, x21, [sp, #0x40]
0029B620 f44f05a9 stp      x20, x19, [sp, #0x50]
0029B624 fd830091 add      x29, sp, #0x20
0029B628 56280090 adrp     x22, #0x7a3000
0029B62C f30300aa mov      x19, x0
0029B630 000440f9 ldr      x0, [x0, #8]
0029B634 d60242f9 ldr      x22, [x22, #0x400]
0029B638 f40302aa mov      x20, x2
0029B63C d70240f9 ldr      x23, [x22]
0029B640 e00a00f9 str      x0, [x23, #0x10]
0029B644 480c40f9 ldr      x8, [x2, #0x18]
0029B648 e81200f9 str      x8, [x23, #0x20]
0029B64C 080040f9 ldr      x8, [x0]
0029B650 410c40f9 ldr      x1, [x2, #0x18]
0029B654 02018052 mov      w2, #8
0029B658 080940f9 ldr      x8, [x8, #0x10]
0029B65C 00013fd6 blr      x8
0029B660 f50300aa mov      x21, x0
0029B664 e00e00f9 str      x0, [x23, #0x18]
0029B668 c00000b5 cbnz     x0, #0x29b680
0029B66C e00a40f9 ldr      x0, [x23, #0x10]
0029B670 080040f9 ldr      x8, [x0]
0029B674 085d40f9 ldr      x8, [x8, #0xb8]
0029B678 00013fd6 blr      x8
0029B67C f50e40f9 ldr      x21, [x23, #0x18]
0029B680 880e40f9 ldr      x8, [x20, #0x18]
0029B684 a1a20291 add      x1, x21, #0xa8
0029B688 e00315aa mov      x0, x21
0029B68C e3031faa mov      x3, xzr
0029B690 02a102d1 sub      x2, x8, #0xa8
0029B694 406d0994 bl       #0x4f6b94
0029B698 f50600f9 str      x21, [x23, #8]
0029B69C d60240f9 ldr      x22, [x22]
0029B6A0 02018052 mov      w2, #8
0029B6A4 600640f9 ldr      x0, [x19, #8]
0029B6A8 754e00f9 str      x21, [x19, #0x98]
0029B6AC c01a00f9 str      x0, [x22, #0x30]
0029B6B0 881240f9 ldr      x8, [x20, #0x20]
0029B6B4 c82200f9 str      x8, [x22, #0x40]
0029B6B8 080040f9 ldr      x8, [x0]
0029B6BC 811240f9 ldr      x1, [x20, #0x20]
0029B6C0 080940f9 ldr      x8, [x8, #0x10]
0029B6C4 00013fd6 blr      x8
0029B6C8 f50300aa mov      x21, x0
0029B6CC c01e00f9 str      x0, [x22, #0x38]
0029B6D0 c00000b5 cbnz     x0, #0x29b6e8
0029B6D4 c01a40f9 ldr      x0, [x22, #0x30]
0029B6D8 080040f9 ldr      x8, [x0]
0029B6DC 085d40f9 ldr      x8, [x8, #0xb8]
0029B6E0 00013fd6 blr      x8
0029B6E4 d51e40f9 ldr      x21, [x22, #0x38]
0029B6E8 881240f9 ldr      x8, [x20, #0x20]
0029B6EC a1a20291 add      x1, x21, #0xa8
0029B6F0 e00315aa mov      x0, x21
0029B6F4 e3031faa mov      x3, xzr
0029B6F8 02a102d1 sub      x2, x8, #0xa8
0029B6FC 266d0994 bl       #0x4f6b94
0029B700 d51600f9 str      x21, [x22, #0x28]
0029B704 680241f9 ldr      x8, [x19, #0x200]
0029B708 755200f9 str      x21, [x19, #0xa0]
0029B70C 880000b4 cbz      x8, #0x29b71c
0029B710 60820891 add      x0, x19, #0x220
0029B714 e10314aa mov      x1, x20
0029B718 00013fd6 blr      x8
0029B71C 40280090 adrp     x0, #0x7a3000
0029B720 e8030091 mov      x8, sp
0029B724 00a840f9 ldr      x0, [x0, #0x150]
0029B728 d5360994 bl       #0x4e927c
0029B72C e1030091 mov      x1, sp
0029B730 e00313aa mov      x0, x19
0029B734 27000094 bl       #0x29b7d0
0029B738 9b000094 bl       #0x29b9a4
0029B73C e00f40f9 ldr      x0, [sp, #0x18]
0029B740 800000b4 cbz      x0, #0x29b750
0029B744 088c44f8 ldr      x8, [x0, #0x48]!
0029B748 080d40f9 ldr      x8, [x8, #0x18]
0029B74C 00013fd6 blr      x8
0029B750 689642f9 ldr      x8, [x19, #0x528]
0029B754 c80000b4 cbz      x8, #0x29b76c
0029B758 69821491 add      x9, x19, #0x520
0029B75C 60021591 add      x0, x19, #0x540
0029B760 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0029B764 3f7d00a9 stp      xzr, xzr, [x9]
0029B768 00013fd6 blr      x8
0029B76C 1f2003d5 nop      
0029B770 28900110 adr      x8, #0x29e974
0029B774 73a202f9 str      x19, [x19, #0x540]
0029B778 689202f9 str      x8, [x19, #0x520]
0029B77C 1f2003d5 nop      
0029B780 28900110 adr      x8, #0x29e984
0029B784 689602f9 str      x8, [x19, #0x528]
0029B788 1f2003d5 nop      
0029B78C e88f0110 adr      x8, #0x29e988
0029B790 689a02f9 str      x8, [x19, #0x530]
0029B794 1f2003d5 nop      
0029B798 e88f0110 adr      x8, #0x29e994
0029B79C 689e02f9 str      x8, [x19, #0x538]
0029B7A0 28280090 adrp     x8, #0x79f000
0029B7A4 62421491 add      x2, x19, #0x510
0029B7A8 08c547f9 ldr      x8, [x8, #0xf88]
0029B7AC 81008052 mov      w1, #4
0029B7B0 000140f9 ldr      x0, [x8]
0029B7B4 780e0994 bl       #0x4df194
0029B7B8 f44f45a9 ldp      x20, x19, [sp, #0x50]
0029B7BC f71b40f9 ldr      x23, [sp, #0x30]
0029B7C0 f65744a9 ldp      x22, x21, [sp, #0x40]
0029B7C4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0029B7C8 ff830191 add      sp, sp, #0x60
0029B7CC c0035fd6 ret      
~~~
### candidate 0x29b9a4 (3 matching instructions)
- 0029B9F4 4a0942f9 ldr      x10, [x10, #0x410]
- 0029B9F8 6b0542f9 ldr      x11, [x11, #0x408]
- 0029BA08 4a0d42f9 ldr      x10, [x10, #0x418]
### 0x29b9a4 (452 bytes; 113 slots)
~~~asm
0029B9A4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0029B9A8 f30b00f9 str      x19, [sp, #0x10]
0029B9AC fd030091 mov      x29, sp
0029B9B0 08a44ea9 ldp      x8, x9, [x0, #0xe8]
0029B9B4 f30300aa mov      x19, x0
0029B9B8 1f0109eb cmp      x8, x9
0029B9BC 22080054 b.hs     #0x29bac0
0029B9C0 49d03bd5 mrs      x9, tpidr_el0
0029B9C4 29c97392 and      x9, x9, #0xffffffffffffe000
0029B9C8 2a4d40f9 ldr      x10, [x9, #0x98]
0029B9CC 5f4100f1 cmp      x10, #0x10
0029B9D0 a00c0054 b.eq     #0x29bb64
0029B9D4 6b7e40f9 ldr      x11, [x19, #0xf8]
0029B9D8 2a0d0a8b add      x10, x9, x10, lsl #3
0029B9DC 4b0d00f9 str      x11, [x10, #0x18]
0029B9E0 4b280090 adrp     x11, #0x7a3000
0029B9E4 2a4d40f9 ldr      x10, [x9, #0x98]
0029B9E8 4a050091 add      x10, x10, #1
0029B9EC 2a4d00f9 str      x10, [x9, #0x98]
0029B9F0 4a280090 adrp     x10, #0x7a3000
0029B9F4 4a0942f9 ldr      x10, [x10, #0x410]
0029B9F8 6b0542f9 ldr      x11, [x11, #0x408]
0029B9FC 0a2d00a9 stp      x10, x11, [x8]
0029BA00 4a280090 adrp     x10, #0x7a3000
0029BA04 4b280090 adrp     x11, #0x7a3000
0029BA08 4a0d42f9 ldr      x10, [x10, #0x418]
0029BA0C 6b1142f9 ldr      x11, [x11, #0x420]
0029BA10 0a2d01a9 stp      x10, x11, [x8, #0x10]
0029BA14 08010291 add      x8, x8, #0x80
0029BA18 2a4d40f9 ldr      x10, [x9, #0x98]
0029BA1C 4a0500d1 sub      x10, x10, #1
0029BA20 2a4d00f9 str      x10, [x9, #0x98]
0029BA24 687600f9 str      x8, [x19, #0xe8]
0029BA28 68a651a9 ldp      x8, x9, [x19, #0x118]
0029BA2C 1f0109eb cmp      x8, x9
0029BA30 43050054 b.lo     #0x29bad8
0029BA34 60420491 add      x0, x19, #0x110
0029BA38 a17b0091 add      x1, x29, #0x1e
0029BA3C 910a0094 bl       #0x29e480
0029BA40 68a654a9 ldp      x8, x9, [x19, #0x148]
0029BA44 1f0109eb cmp      x8, x9
0029BA48 22080054 b.hs     #0x29bb4c
0029BA4C 49d03bd5 mrs      x9, tpidr_el0
0029BA50 29c97392 and      x9, x9, #0xffffffffffffe000
0029BA54 2a4d40f9 ldr      x10, [x9, #0x98]
0029BA58 5f4100f1 cmp      x10, #0x10
0029BA5C 40080054 b.eq     #0x29bb64
0029BA60 6bae40f9 ldr      x11, [x19, #0x158]
0029BA64 2a0d0a8b add      x10, x9, x10, lsl #3
0029BA68 4b0d00f9 str      x11, [x10, #0x18]
0029BA6C 4b280090 adrp     x11, #0x7a3000
0029BA70 2a4d40f9 ldr      x10, [x9, #0x98]
0029BA74 4a050091 add      x10, x10, #1
0029BA78 2a4d00f9 str      x10, [x9, #0x98]
0029BA7C 4a280090 adrp     x10, #0x7a3000
0029BA80 4a1942f9 ldr      x10, [x10, #0x430]
0029BA84 6b1542f9 ldr      x11, [x11, #0x428]
0029BA88 0a2d00a9 stp      x10, x11, [x8]
0029BA8C 4a280090 adrp     x10, #0x7a3000
0029BA90 4b280090 adrp     x11, #0x7a3000
0029BA94 4a1d42f9 ldr      x10, [x10, #0x438]
0029BA98 6b2142f9 ldr      x11, [x11, #0x440]
0029BA9C 0a2d01a9 stp      x10, x11, [x8, #0x10]
0029BAA0 08010291 add      x8, x8, #0x80
0029BAA4 2a4d40f9 ldr      x10, [x9, #0x98]
0029BAA8 4a0500d1 sub      x10, x10, #1
0029BAAC 2a4d00f9 str      x10, [x9, #0x98]
0029BAB0 68a600f9 str      x8, [x19, #0x148]
0029BAB4 f30b40f9 ldr      x19, [sp, #0x10]
0029BAB8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0029BABC c0035fd6 ret      
0029BAC0 60820391 add      x0, x19, #0xe0
0029BAC4 a17f0091 add      x1, x29, #0x1f
0029BAC8 ce090094 bl       #0x29e200
0029BACC 68a651a9 ldp      x8, x9, [x19, #0x118]
0029BAD0 1f0109eb cmp      x8, x9
0029BAD4 02fbff54 b.hs     #0x29ba34
0029BAD8 49d03bd5 mrs      x9, tpidr_el0
0029BADC 29c97392 and      x9, x9, #0xffffffffffffe000
0029BAE0 2a4d40f9 ldr      x10, [x9, #0x98]
0029BAE4 5f4100f1 cmp      x10, #0x10
0029BAE8 e0030054 b.eq     #0x29bb64
0029BAEC 6b9640f9 ldr      x11, [x19, #0x128]
0029BAF0 2a0d0a8b add      x10, x9, x10, lsl #3
0029BAF4 4b0d00f9 str      x11, [x10, #0x18]
0029BAF8 4b280090 adrp     x11, #0x7a3000
0029BAFC 2a4d40f9 ldr      x10, [x9, #0x98]
0029BB00 4a050091 add      x10, x10, #1
0029BB04 2a4d00f9 str      x10, [x9, #0x98]
0029BB08 4a280090 adrp     x10, #0x7a3000
0029BB0C 4a2942f9 ldr      x10, [x10, #0x450]
0029BB10 6b2542f9 ldr      x11, [x11, #0x448]
0029BB14 0a2d00a9 stp      x10, x11, [x8]
0029BB18 4a280090 adrp     x10, #0x7a3000
0029BB1C 4b280090 adrp     x11, #0x7a3000
0029BB20 4a2d42f9 ldr      x10, [x10, #0x458]
0029BB24 6b3142f9 ldr      x11, [x11, #0x460]
0029BB28 0a2d01a9 stp      x10, x11, [x8, #0x10]
0029BB2C 08010291 add      x8, x8, #0x80
0029BB30 2a4d40f9 ldr      x10, [x9, #0x98]
0029BB34 4a0500d1 sub      x10, x10, #1
0029BB38 2a4d00f9 str      x10, [x9, #0x98]
0029BB3C 688e00f9 str      x8, [x19, #0x118]
0029BB40 68a654a9 ldp      x8, x9, [x19, #0x148]
0029BB44 1f0109eb cmp      x8, x9
0029BB48 23f8ff54 b.lo     #0x29ba4c
0029BB4C 60020591 add      x0, x19, #0x140
0029BB50 a1770091 add      x1, x29, #0x1d
0029BB54 eb0a0094 bl       #0x29e700
0029BB58 f30b40f9 ldr      x19, [sp, #0x10]
0029BB5C fd7bc2a8 ldp      x29, x30, [sp], #0x20
0029BB60 c0035fd6 ret      
0029BB64 2b9cf597 bl       #0x2c10
~~~
### candidate 0x29be30 (1 matching instructions)
- 0029BFC4 940242f9 ldr      x20, [x20, #0x400]
### 0x29be30 (564 bytes; 141 slots)
~~~asm
0029BE30 ff4302d1 sub      sp, sp, #0x90
0029BE34 fd7b05a9 stp      x29, x30, [sp, #0x50]
0029BE38 f73300f9 str      x23, [sp, #0x60]
0029BE3C f65707a9 stp      x22, x21, [sp, #0x70]
0029BE40 f44f08a9 stp      x20, x19, [sp, #0x80]
0029BE44 fd430191 add      x29, sp, #0x50
0029BE48 28280090 adrp     x8, #0x79f000
0029BE4C f30300aa mov      x19, x0
0029BE50 08a942f9 ldr      x8, [x8, #0x550]
0029BE54 01a00291 add      x1, x0, #0xa8
0029BE58 000140f9 ldr      x0, [x8]
0029BE5C 0ffb0894 bl       #0x4daa98
0029BE60 e8030091 mov      x8, sp
0029BE64 5d060994 bl       #0x4dd7d8
0029BE68 e82740a9 ldp      x8, x9, [sp]
0029BE6C ea1340b9 ldr      w10, [sp, #0x10]
0029BE70 68a60aa9 stp      x8, x9, [x19, #0xa8]
0029BE74 e81740f9 ldr      x8, [sp, #0x28]
0029BE78 ebb341a9 ldp      x11, x12, [sp, #0x18]
0029BE7C 606e40f9 ldr      x0, [x19, #0xd8]
0029BE80 6aba00b9 str      w10, [x19, #0xb8]
0029BE84 6b320ca9 stp      x11, x12, [x19, #0xc0]
0029BE88 686a00f9 str      x8, [x19, #0xd0]
0029BE8C 800000b4 cbz      x0, #0x29be9c
0029BE90 088c44f8 ldr      x8, [x0, #0x48]!
0029BE94 080d40f9 ldr      x8, [x8, #0x18]
0029BE98 00013fd6 blr      x8
0029BE9C e82743a9 ldp      x8, x9, [sp, #0x30]
0029BEA0 ea2f44a9 ldp      x10, x11, [sp, #0x40]
0029BEA4 68a60da9 stp      x8, x9, [x19, #0xd8]
0029BEA8 68a240f9 ldr      x8, [x19, #0x140]
0029BEAC 6aae0ea9 stp      x10, x11, [x19, #0xe8]
0029BEB0 680800b4 cbz      x8, #0x29bfbc
0029BEB4 759240f9 ldr      x21, [x19, #0x120]
0029BEB8 f50300b4 cbz      x21, #0x29bf34
0029BEBC 140a8052 mov      w20, #0x50
0029BEC0 0a000014 b        #0x29bee8
0029BEC4 609640f9 ldr      x0, [x19, #0x128]
0029BEC8 e10315aa mov      x1, x21
0029BECC e20314aa mov      x2, x20
0029BED0 03018052 mov      w3, #8
0029BED4 080040f9 ldr      x8, [x0]
0029BED8 080d40f9 ldr      x8, [x8, #0x18]
0029BEDC 00013fd6 blr      x8
0029BEE0 f50317aa mov      x21, x23
0029BEE4 970200b4 cbz      x23, #0x29bf34
0029BEE8 b61a40f9 ldr      x22, [x21, #0x30]
0029BEEC bf1a00f9 str      xzr, [x21, #0x30]
0029BEF0 b70240f9 ldr      x23, [x21]
0029BEF4 360100b4 cbz      x22, #0x29bf18
0029BEF8 e00316aa mov      x0, x22
0029BEFC a1eaff97 bl       #0x296980
0029BF00 a08a43a9 ldp      x0, x2, [x21, #0x38]
0029BF04 e10316aa mov      x1, x22
0029BF08 a32640f9 ldr      x3, [x21, #0x48]
0029BF0C 080040f9 ldr      x8, [x0]
0029BF10 080d40f9 ldr      x8, [x8, #0x18]
0029BF14 00013fd6 blr      x8
0029BF18 a01640f9 ldr      x0, [x21, #0x28]
0029BF1C 40fdffb4 cbz      x0, #0x29bec4
0029BF20 088c44f8 ldr      x8, [x0, #0x48]!
0029BF24 080d40f9 ldr      x8, [x8, #0x18]
0029BF28 00013fd6 blr      x8
0029BF2C bf1600f9 str      xzr, [x21, #0x28]
0029BF30 e5ffff17 b        #0x29bec4
0029BF34 6a8240f9 ldr      x10, [x19, #0x100]
0029BF38 7f9200f9 str      xzr, [x19, #0x120]
0029BF3C ea0300b4 cbz      x10, #0x29bfb8
0029BF40 48054092 and      x8, x10, #3
0029BF44 5f1100f1 cmp      x10, #4
0029BF48 62000054 b.hs     #0x29bf54
0029BF4C e9031faa mov      x9, xzr
0029BF50 13000014 b        #0x29bf9c
0029BF54 e9031faa mov      x9, xzr
0029BF58 4af57e92 and      x10, x10, #0xfffffffffffffffc
0029BF5C 1f2003d5 nop      
0029BF60 6b7e40f9 ldr      x11, [x19, #0xf8]
0029BF64 2cf17dd3 lsl      x12, x9, #3
0029BF68 29110091 add      x9, x9, #4
0029BF6C 5f0109eb cmp      x10, x9
0029BF70 7f692cf8 str      xzr, [x11, x12]
0029BF74 6b7e40f9 ldr      x11, [x19, #0xf8]
0029BF78 6b010c8b add      x11, x11, x12
0029BF7C 7f0500f9 str      xzr, [x11, #8]
0029BF80 6b7e40f9 ldr      x11, [x19, #0xf8]
0029BF84 6b010c8b add      x11, x11, x12
0029BF88 7f0900f9 str      xzr, [x11, #0x10]
0029BF8C 6b7e40f9 ldr      x11, [x19, #0xf8]
0029BF90 6b010c8b add      x11, x11, x12
0029BF94 7f0d00f9 str      xzr, [x11, #0x18]
0029BF98 41feff54 b.ne     #0x29bf60
0029BF9C e80000b4 cbz      x8, #0x29bfb8
0029BFA0 29f17dd3 lsl      x9, x9, #3
0029BFA4 6a7e40f9 ldr      x10, [x19, #0xf8]
0029BFA8 080500f1 subs     x8, x8, #1
0029BFAC 5f6929f8 str      xzr, [x10, x9]
0029BFB0 29210091 add      x9, x9, #8
0029BFB4 81ffff54 b.ne     #0x29bfa4
0029BFB8 7fa200f9 str      xzr, [x19, #0x140]
0029BFBC 54280090 adrp     x20, #0x7a3000
0029BFC0 684e40f9 ldr      x8, [x19, #0x98]
0029BFC4 940242f9 ldr      x20, [x20, #0x400]
0029BFC8 080200b4 cbz      x8, #0x29c008
0029BFCC 950240f9 ldr      x21, [x20]
0029BFD0 7f4e00f9 str      xzr, [x19, #0x98]
0029BFD4 a00640f9 ldr      x0, [x21, #8]
0029BFD8 080040f9 ldr      x8, [x0]
0029BFDC 080140f9 ldr      x8, [x8]
0029BFE0 00013fd6 blr      x8
0029BFE4 a00641a9 ldp      x0, x1, [x21, #0x10]
0029BFE8 bf0600f9 str      xzr, [x21, #8]
0029BFEC a21240f9 ldr      x2, [x21, #0x20]
0029BFF0 03018052 mov      w3, #8
0029BFF4 080040f9 ldr      x8, [x0]
0029BFF8 080d40f9 ldr      x8, [x8, #0x18]
0029BFFC 00013fd6 blr      x8
0029C000 bffe01a9 stp      xzr, xzr, [x21, #0x18]
0029C004 bf0a00f9 str      xzr, [x21, #0x10]
0029C008 685240f9 ldr      x8, [x19, #0xa0]
0029C00C 080200b4 cbz      x8, #0x29c04c
0029C010 7f5200f9 str      xzr, [x19, #0xa0]
0029C014 930240f9 ldr      x19, [x20]
0029C018 601640f9 ldr      x0, [x19, #0x28]
0029C01C 080040f9 ldr      x8, [x0]
0029C020 080140f9 ldr      x8, [x8]
0029C024 00013fd6 blr      x8
0029C028 600643a9 ldp      x0, x1, [x19, #0x30]
0029C02C 7f1600f9 str      xzr, [x19, #0x28]
0029C030 622240f9 ldr      x2, [x19, #0x40]
0029C034 03018052 mov      w3, #8
0029C038 080040f9 ldr      x8, [x0]
0029C03C 080d40f9 ldr      x8, [x8, #0x18]
0029C040 00013fd6 blr      x8
0029C044 7ffe03a9 stp      xzr, xzr, [x19, #0x38]
0029C048 7f1a00f9 str      xzr, [x19, #0x30]
0029C04C f44f48a9 ldp      x20, x19, [sp, #0x80]
0029C050 f73340f9 ldr      x23, [sp, #0x60]
0029C054 f65747a9 ldp      x22, x21, [sp, #0x70]
0029C058 fd7b45a9 ldp      x29, x30, [sp, #0x50]
0029C05C ff430291 add      sp, sp, #0x90
0029C060 c0035fd6 ret      
~~~

## ZA owner candidates
### candidate 0x1f8f00 (5 matching instructions)
- 001F9320 685202f9 str      x8, [x19, #0x4a0]
- 001F932C 685602f9 str      x8, [x19, #0x4a8]
- 001F9338 685a02f9 str      x8, [x19, #0x4b0]
- 001F93A8 736202f9 str      x19, [x19, #0x4c0]
- 001F93AC 685e02f9 str      x8, [x19, #0x4b8]
### 0x1f8f00 (1216 bytes; 304 slots)
~~~asm
001F8F00 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
001F8F04 f90b00f9 str      x25, [sp, #0x10]
001F8F08 f85f02a9 stp      x24, x23, [sp, #0x20]
001F8F0C f65703a9 stp      x22, x21, [sp, #0x30]
001F8F10 f44f04a9 stp      x20, x19, [sp, #0x40]
001F8F14 fd030091 mov      x29, sp
001F8F18 1f1c00f9 str      xzr, [x0, #0x38]
001F8F1C 282d00f0 adrp     x8, #0x79f000
001F8F20 f30300aa mov      x19, x0
001F8F24 084943f9 ldr      x8, [x8, #0x690]
001F8F28 1f4000b9 str      wzr, [x0, #0x40]
001F8F2C 57d03bd5 mrs      x23, tpidr_el0
001F8F30 f5ca73f2 ands     x21, x23, #-0x2000
001F8F34 1f7c01a9 stp      xzr, xzr, [x0, #0x10]
001F8F38 08410091 add      x8, x8, #0x10
001F8F3C 1f7c02a9 stp      xzr, xzr, [x0, #0x20]
001F8F40 1f3000b9 str      wzr, [x0, #0x30]
001F8F44 080000f9 str      x8, [x0]
001F8F48 c0000054 b.eq     #0x1f8f60
001F8F4C a84e40f9 ldr      x8, [x21, #0x98]
001F8F50 a80000b4 cbz      x8, #0x1f8f64
001F8F54 a80e088b add      x8, x21, x8, lsl #3
001F8F58 080940f9 ldr      x8, [x8, #0x10]
001F8F5C 02000014 b        #0x1f8f64
001F8F60 e8031faa mov      x8, xzr
001F8F64 492d00d0 adrp     x9, #0x7a2000
001F8F68 2a008052 mov      w10, #1
001F8F6C 299544f9 ldr      x9, [x9, #0x928]
001F8F70 4b2d00d0 adrp     x11, #0x7a2000
001F8F74 6b9944f9 ldr      x11, [x11, #0x930]
001F8F78 f60313aa mov      x22, x19
001F8F7C 2a010039 strb     w10, [x9]
001F8F80 292d00f0 adrp     x9, #0x79f000
001F8F84 6a410091 add      x10, x11, #0x10
001F8F88 29e141f9 ldr      x9, [x9, #0x3c0]
001F8F8C 6a2200a9 stp      x10, x8, [x19]
001F8F90 68010191 add      x8, x11, #0x40
001F8F94 682600f9 str      x8, [x19, #0x48]
001F8F98 29410091 add      x9, x9, #0x10
001F8F9C c90e05f8 str      x9, [x22, #0x50]!
001F8FA0 d5f60b94 bl       #0x4f6af4
001F8FA4 e8098052 mov      w8, #0x4f
001F8FA8 f40300aa mov      x20, x0
001F8FAC 1835570a and      w24, w8, w23, lsr #13
001F8FB0 17080091 add      x23, x0, #2
001F8FB4 e8fe5f08 ldaxrb   w8, [x23]
001F8FB8 1f3d0171 cmp      w8, #0x4f
001F8FBC 81000054 b.ne     #0x1f8fcc
001F8FC0 f87e0808 stxrb    w8, w24, [x23]
001F8FC4 88ffff35 cbnz     w8, #0x1f8fb4
001F8FC8 1f000014 b        #0x1f9044
001F8FCC 990e0091 add      x25, x20, #3
001F8FD0 5f3f03d5 clrex    
001F8FD4 287f5f08 ldxrb    w8, [x25]
001F8FD8 08050011 add      w8, w8, #1
001F8FDC 287f0908 stxrb    w9, w8, [x25]
001F8FE0 a9ffff35 cbnz     w9, #0x1f8fd4
001F8FE4 bf3b03d5 dmb      ish
001F8FE8 1f2003d5 nop      
001F8FEC 1f2003d5 nop      
001F8FF0 e8fe5f08 ldaxrb   w8, [x23]
001F8FF4 1f3d0171 cmp      w8, #0x4f
001F8FF8 c1000054 b.ne     #0x1f9010
001F8FFC f87e0808 stxrb    w8, w24, [x23]
001F9000 88ffff35 cbnz     w8, #0x1f8ff0
001F9004 0c000014 b        #0x1f9034
001F9008 1f2003d5 nop      
001F900C 1f2003d5 nop      
001F9010 e00314aa mov      x0, x20
001F9014 5f3f03d5 clrex    
001F9018 52f40f94 bl       #0x5f6160
001F901C 1f2003d5 nop      
001F9020 e8fe5f08 ldaxrb   w8, [x23]
001F9024 1f3d0171 cmp      w8, #0x4f
001F9028 41ffff54 b.ne     #0x1f9010
001F902C f87e0808 stxrb    w8, w24, [x23]
001F9030 88ffff35 cbnz     w8, #0x1f9020
001F9034 287f5f08 ldxrb    w8, [x25]
001F9038 08050051 sub      w8, w8, #1
001F903C 287f0908 stxrb    w9, w8, [x25]
001F9040 a9ffff35 cbnz     w9, #0x1f9034
001F9044 282d00d0 adrp     x8, #0x79f000
001F9048 08e541f9 ldr      x8, [x8, #0x3c8]
001F904C 090144f9 ldr      x9, [x8, #0x800]
001F9050 3f0104f1 cmp      x9, #0x100
001F9054 401b0054 b.eq     #0x1f93bc
001F9058 167929f8 str      x22, [x8, x9, lsl #3]
001F905C f8098052 mov      w24, #0x4f
001F9060 090144f9 ldr      x9, [x8, #0x800]
001F9064 29050091 add      x9, x9, #1
001F9068 090104f9 str      x9, [x8, #0x800]
001F906C 1f2003d5 nop      
001F9070 ff7e5f08 ldxrb    wzr, [x23]
001F9074 f8fe0808 stlxrb   w8, w24, [x23]
001F9078 c8ffff35 cbnz     w8, #0x1f9070
001F907C bf3b03d5 dmb      ish
001F9080 880e4039 ldrb     w8, [x20, #3]
001F9084 68000034 cbz      w8, #0x1f9090
001F9088 e00314aa mov      x0, x20
001F908C 3df40f94 bl       #0x5f6180
001F9090 482d00b0 adrp     x8, #0x7a2000
001F9094 492d00b0 adrp     x9, #0x7a2000
001F9098 089d44f9 ldr      x8, [x8, #0x938]
001F909C 7f7e06a9 stp      xzr, xzr, [x19, #0x60]
001F90A0 60a20291 add      x0, x19, #0xa8
001F90A4 29a144f9 ldr      x9, [x9, #0x940]
001F90A8 e1031f2a mov      w1, wzr
001F90AC 22008052 mov      w2, #1
001F90B0 7f7e07a9 stp      xzr, xzr, [x19, #0x70]
001F90B4 08410091 add      x8, x8, #0x10
001F90B8 7f7e08a9 stp      xzr, xzr, [x19, #0x80]
001F90BC 7f5200f9 str      xzr, [x19, #0xa0]
001F90C0 360100f9 str      x22, [x9]
001F90C4 687e05a9 stp      x8, xzr, [x19, #0x50]
001F90C8 7f7e09a9 stp      xzr, xzr, [x19, #0x90]
001F90CC 79f40f94 bl       #0x5f62b0
001F90D0 68020391 add      x8, x19, #0xc0
001F90D4 78aa0239 strb     w24, [x19, #0xaa]
001F90D8 7fae0239 strb     wzr, [x19, #0xab]
001F90DC 7f7e0ba9 stp      xzr, xzr, [x19, #0xb0]
001F90E0 be910b94 bl       #0x4dd7d8
001F90E4 7f7e11a9 stp      xzr, xzr, [x19, #0x110]
001F90E8 750100b4 cbz      x21, #0x1f9114
001F90EC a84e40f9 ldr      x8, [x21, #0x98]
001F90F0 280100b4 cbz      x8, #0x1f9114
001F90F4 a80e088b add      x8, x21, x8, lsl #3
001F90F8 080940f9 ldr      x8, [x8, #0x10]
001F90FC c80000b4 cbz      x8, #0x1f9114
001F9100 687e12a9 stp      x8, xzr, [x19, #0x120]
001F9104 74e20491 add      x20, x19, #0x138
001F9108 7f3201b9 str      wzr, [x19, #0x130]
001F910C 7f9e00f9 str      xzr, [x19, #0x138]
001F9110 07000014 b        #0x1f912c
001F9114 67f00b94 bl       #0x4f52b0
001F9118 74e20491 add      x20, x19, #0x138
001F911C 607e12a9 stp      x0, xzr, [x19, #0x120]
001F9120 7f3201b9 str      wzr, [x19, #0x130]
001F9124 7f9e00f9 str      xzr, [x19, #0x138]
001F9128 d50000b4 cbz      x21, #0x1f9140
001F912C a84e40f9 ldr      x8, [x21, #0x98]
001F9130 880000b4 cbz      x8, #0x1f9140
001F9134 a80e088b add      x8, x21, x8, lsl #3
001F9138 000940f9 ldr      x0, [x8, #0x10]
001F913C 400000b5 cbnz     x0, #0x1f9144
001F9140 5cf00b94 bl       #0x4f52b0
001F9144 80fe00a9 stp      x0, xzr, [x20, #8]
001F9148 08f0a752 mov      w8, #0x3f800000
001F914C 60220691 add      x0, x19, #0x188
001F9150 e1031f2a mov      w1, wzr
001F9154 e2031f2a mov      w2, wzr
001F9158 9f1a00b9 str      wzr, [x20, #0x18]
001F915C 7fae00f9 str      xzr, [x19, #0x158]
001F9160 686201b9 str      w8, [x19, #0x160]
001F9164 7ffe16a9 stp      xzr, xzr, [x19, #0x168]
001F9168 7ffe17a9 stp      xzr, xzr, [x19, #0x178]
001F916C 4df40f94 bl       #0x5f62a0
001F9170 60220791 add      x0, x19, #0x1c8
001F9174 e1031f2a mov      w1, wzr
001F9178 e2031f2a mov      w2, wzr
001F917C 7ffe1ba9 stp      xzr, xzr, [x19, #0x1b8]
001F9180 7ffe1aa9 stp      xzr, xzr, [x19, #0x1a8]
001F9184 47f40f94 bl       #0x5f62a0
001F9188 7f7e1fa9 stp      xzr, xzr, [x19, #0x1f0]
001F918C 7ff600f9 str      xzr, [x19, #0x1e8]
001F9190 d50000b4 cbz      x21, #0x1f91a8
001F9194 a84e40f9 ldr      x8, [x21, #0x98]
001F9198 880000b4 cbz      x8, #0x1f91a8
001F919C a80e088b add      x8, x21, x8, lsl #3
001F91A0 000940f9 ldr      x0, [x8, #0x10]
001F91A4 400000b5 cbnz     x0, #0x1f91ac
001F91A8 42f00b94 bl       #0x4f52b0
001F91AC 600201f9 str      x0, [x19, #0x200]
001F91B0 282d00d0 adrp     x8, #0x79f000
001F91B4 7f0601f9 str      xzr, [x19, #0x208]
001F91B8 7f1202b9 str      wzr, [x19, #0x210]
001F91BC 7f821439 strb     wzr, [x19, #0x520]
001F91C0 7f9a02f9 str      xzr, [x19, #0x530]
001F91C4 7f9e02f9 str      xzr, [x19, #0x538]
001F91C8 7fa202f9 str      xzr, [x19, #0x540]
001F91CC 7fa602f9 str      xzr, [x19, #0x548]
001F91D0 7faa02f9 str      xzr, [x19, #0x550]
001F91D4 7fae02f9 str      xzr, [x19, #0x558]
001F91D8 7fb202f9 str      xzr, [x19, #0x560]
001F91DC 7fb602f9 str      xzr, [x19, #0x568]
001F91E0 7fba02f9 str      xzr, [x19, #0x570]
001F91E4 7fbe02f9 str      xzr, [x19, #0x578]
001F91E8 7fc202f9 str      xzr, [x19, #0x580]
001F91EC 7fc602f9 str      xzr, [x19, #0x588]
001F91F0 7fca02f9 str      xzr, [x19, #0x590]
001F91F4 7fce02f9 str      xzr, [x19, #0x598]
001F91F8 7fd202f9 str      xzr, [x19, #0x5a0]
001F91FC 7fd602f9 str      xzr, [x19, #0x5a8]
001F9200 7fda02f9 str      xzr, [x19, #0x5b0]
001F9204 7fde02f9 str      xzr, [x19, #0x5b8]
001F9208 7fe202f9 str      xzr, [x19, #0x5c0]
001F920C 7fe602f9 str      xzr, [x19, #0x5c8]
001F9210 08c147f9 ldr      x8, [x8, #0xf80]
001F9214 08410091 add      x8, x8, #0x10
001F9218 f65743a9 ldp      x22, x21, [sp, #0x30]
001F921C f90b40f9 ldr      x25, [sp, #0x10]
001F9220 f85f42a9 ldp      x24, x23, [sp, #0x20]
001F9224 689a02f9 str      x8, [x19, #0x530]
001F9228 1f2003d5 nop      
001F922C 88ef0010 adr      x8, #0x1fb01c
001F9230 681201f9 str      x8, [x19, #0x220]
001F9234 1f2003d5 nop      
001F9238 08f20010 adr      x8, #0x1fb078
001F923C 681601f9 str      x8, [x19, #0x228]
001F9240 1f2003d5 nop      
001F9244 c8f10010 adr      x8, #0x1fb07c
001F9248 681a01f9 str      x8, [x19, #0x230]
001F924C 1f2003d5 nop      
001F9250 c8f10010 adr      x8, #0x1fb088
001F9254 681e01f9 str      x8, [x19, #0x238]
001F9258 1f2003d5 nop      
001F925C 28f20010 adr      x8, #0x1fb0a0
001F9260 685201f9 str      x8, [x19, #0x2a0]
001F9264 1f2003d5 nop      
001F9268 e8f30010 adr      x8, #0x1fb0e4
001F926C 685601f9 str      x8, [x19, #0x2a8]
001F9270 1f2003d5 nop      
001F9274 a8f30010 adr      x8, #0x1fb0e8
001F9278 685a01f9 str      x8, [x19, #0x2b0]
001F927C 1f2003d5 nop      
001F9280 a8f30010 adr      x8, #0x1fb0f4
001F9284 685e01f9 str      x8, [x19, #0x2b8]
001F9288 1f2003d5 nop      
001F928C a8f30010 adr      x8, #0x1fb100
001F9290 689201f9 str      x8, [x19, #0x320]
001F9294 1f2003d5 nop      
001F9298 e8120110 adr      x8, #0x1fb4f4
001F929C 689601f9 str      x8, [x19, #0x328]
001F92A0 1f2003d5 nop      
001F92A4 a8120110 adr      x8, #0x1fb4f8
001F92A8 689a01f9 str      x8, [x19, #0x330]
001F92AC 1f2003d5 nop      
001F92B0 a8120110 adr      x8, #0x1fb504
001F92B4 689e01f9 str      x8, [x19, #0x338]
001F92B8 1f2003d5 nop      
001F92BC a8120110 adr      x8, #0x1fb510
001F92C0 68d201f9 str      x8, [x19, #0x3a0]
001F92C4 1f2003d5 nop      
001F92C8 c81f0110 adr      x8, #0x1fb6c0
001F92CC 68d601f9 str      x8, [x19, #0x3a8]
001F92D0 1f2003d5 nop      
001F92D4 881f0110 adr      x8, #0x1fb6c4
001F92D8 68da01f9 str      x8, [x19, #0x3b0]
001F92DC 1f2003d5 nop      
001F92E0 881f0110 adr      x8, #0x1fb6d0
001F92E4 68de01f9 str      x8, [x19, #0x3b8]
001F92E8 1f2003d5 nop      
001F92EC a81f0110 adr      x8, #0x1fb6e0
001F92F0 681202f9 str      x8, [x19, #0x420]
001F92F4 1f2003d5 nop      
001F92F8 282d0110 adr      x8, #0x1fb89c
001F92FC 681602f9 str      x8, [x19, #0x428]
001F9300 1f2003d5 nop      
001F9304 e82c0110 adr      x8, #0x1fb8a0
001F9308 681a02f9 str      x8, [x19, #0x430]
001F930C 1f2003d5 nop      
001F9310 e82c0110 adr      x8, #0x1fb8ac
001F9314 681e02f9 str      x8, [x19, #0x438]
001F9318 1f2003d5 nop      
001F931C e82c0110 adr      x8, #0x1fb8b8
001F9320 685202f9 str      x8, [x19, #0x4a0]
001F9324 1f2003d5 nop      
001F9328 884b0110 adr      x8, #0x1fbc98
001F932C 685602f9 str      x8, [x19, #0x4a8]
001F9330 1f2003d5 nop      
001F9334 484b0110 adr      x8, #0x1fbc9c
001F9338 685a02f9 str      x8, [x19, #0x4b0]
001F933C 1f2003d5 nop      
001F9340 484b0110 adr      x8, #0x1fbca8
001F9344 7fa202f9 str      xzr, [x19, #0x540]
001F9348 7fa602f9 str      xzr, [x19, #0x548]
001F934C 7faa02f9 str      xzr, [x19, #0x550]
001F9350 7fae02f9 str      xzr, [x19, #0x558]
001F9354 7fea02f9 str      xzr, [x19, #0x5d0]
001F9358 7fee02f9 str      xzr, [x19, #0x5d8]
001F935C 7ff202f9 str      xzr, [x19, #0x5e0]
001F9360 7ff602f9 str      xzr, [x19, #0x5e8]
001F9364 7ffa02f9 str      xzr, [x19, #0x5f0]
001F9368 7ffe02f9 str      xzr, [x19, #0x5f8]
001F936C 7f0203f9 str      xzr, [x19, #0x600]
001F9370 7f0603f9 str      xzr, [x19, #0x608]
001F9374 7f0a03f9 str      xzr, [x19, #0x610]
001F9378 7f0e03f9 str      xzr, [x19, #0x618]
001F937C 7f1203f9 str      xzr, [x19, #0x620]
001F9380 7f1603f9 str      xzr, [x19, #0x628]
001F9384 7f1a03f9 str      xzr, [x19, #0x630]
001F9388 7f1e03f9 str      xzr, [x19, #0x638]
001F938C 7f2203f9 str      xzr, [x19, #0x640]
001F9390 7f2603f9 str      xzr, [x19, #0x648]
001F9394 732201f9 str      x19, [x19, #0x240]
001F9398 736201f9 str      x19, [x19, #0x2c0]
001F939C 73a201f9 str      x19, [x19, #0x340]
001F93A0 73e201f9 str      x19, [x19, #0x3c0]
001F93A4 732202f9 str      x19, [x19, #0x440]
001F93A8 736202f9 str      x19, [x19, #0x4c0]
001F93AC 685e02f9 str      x8, [x19, #0x4b8]
001F93B0 f44f44a9 ldp      x20, x19, [sp, #0x40]
001F93B4 fd7bc5a8 ldp      x29, x30, [sp], #0x50
001F93B8 c0035fd6 ret      
001F93BC 1526f897 bl       #0x2c10
~~~

## SWSH owner candidates
### candidate 0x27091c (3 matching instructions)
- 00270948 01958052 mov      w1, #0x4a8
- 00270980 08958052 mov      w8, #0x4a8
- 002709EC 0a958052 mov      w10, #0x4a8
### 0x27091c (260 bytes; 65 slots)
~~~asm
0027091C fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00270920 f65701a9 stp      x22, x21, [sp, #0x10]
00270924 f44f02a9 stp      x20, x19, [sp, #0x20]
00270928 fd030091 mov      x29, sp
0027092C f30308aa mov      x19, x8
00270930 48d03bd5 mrs      x8, tpidr_el0
00270934 16c97392 and      x22, x8, #0xffffffffffffe000
00270938 c84e40f9 ldr      x8, [x22, #0x98]
0027093C 1f4100f1 cmp      x8, #0x10
00270940 e0060054 b.eq     #0x270a1c
00270944 c80e088b add      x8, x22, x8, lsl #3
00270948 01958052 mov      w1, #0x4a8
0027094C 02018052 mov      w2, #8
00270950 f50300aa mov      x21, x0
00270954 000d00f9 str      x0, [x8, #0x18]
00270958 c84e40f9 ldr      x8, [x22, #0x98]
0027095C 08050091 add      x8, x8, #1
00270960 c84e00f9 str      x8, [x22, #0x98]
00270964 080040f9 ldr      x8, [x0]
00270968 080940f9 ldr      x8, [x8, #0x10]
0027096C 00013fd6 blr      x8
00270970 f40300aa mov      x20, x0
00270974 600200b4 cbz      x0, #0x2709c0
00270978 e00314aa mov      x0, x20
0027097C b3d1ff97 bl       #0x265048
00270980 08958052 mov      w8, #0x4a8
00270984 09018052 mov      w9, #8
00270988 e00314aa mov      x0, x20
0027098C 95d200a9 stp      x21, x20, [x20, #8]
00270990 88a601a9 stp      x8, x9, [x20, #0x18]
00270994 c84e40f9 ldr      x8, [x22, #0x98]
00270998 080500d1 sub      x8, x8, #1
0027099C c84e00f9 str      x8, [x22, #0x98]
002709A0 088c44f8 ldr      x8, [x0, #0x48]!
002709A4 080940f9 ldr      x8, [x8, #0x10]
002709A8 00013fd6 blr      x8
002709AC 740200f9 str      x20, [x19]
002709B0 f44f42a9 ldp      x20, x19, [sp, #0x20]
002709B4 f65741a9 ldp      x22, x21, [sp, #0x10]
002709B8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
002709BC c0035fd6 ret      
002709C0 a80240f9 ldr      x8, [x21]
002709C4 e00315aa mov      x0, x21
002709C8 085d40f9 ldr      x8, [x8, #0xb8]
002709CC 00013fd6 blr      x8
002709D0 e0031faa mov      x0, xzr
002709D4 9dd1ff97 bl       #0x265048
002709D8 08018052 mov      w8, #8
002709DC 09028052 mov      w9, #0x10
002709E0 150100f9 str      x21, [x8]
002709E4 3f0100f9 str      xzr, [x9]
002709E8 09038052 mov      w9, #0x18
002709EC 0a958052 mov      w10, #0x4a8
002709F0 2a0100f9 str      x10, [x9]
002709F4 09048052 mov      w9, #0x20
002709F8 280100f9 str      x8, [x9]
002709FC c84e40f9 ldr      x8, [x22, #0x98]
00270A00 080500d1 sub      x8, x8, #1
00270A04 c84e00f9 str      x8, [x22, #0x98]
00270A08 740200f9 str      x20, [x19]
00270A0C f44f42a9 ldp      x20, x19, [sp, #0x20]
00270A10 f65741a9 ldp      x22, x21, [sp, #0x10]
00270A14 fd7bc3a8 ldp      x29, x30, [sp], #0x30
00270A18 c0035fd6 ret      
00270A1C 7d48f697 bl       #0x2c10
~~~

## Direct filesystem calls by owning FDE
### sink 0x4dc190: 7
- 0x114bb4 FDE 0x114ab0
- 0x114db8 FDE 0x114ab0
- 0x19eec0 FDE 0x19ea74
- 0x19eee8 FDE 0x19ea74
- 0x205fe4 FDE 0x205dc0
- 0x20a090 FDE 0x209ff0
- 0x20dd80 FDE 0x20d9a0
### sink 0x4dc198: 17
- 0x114ba0 FDE 0x114ab0
- 0x114d54 FDE 0x114ab0
- 0x19ecd8 FDE 0x19ea74
- 0x19ed50 FDE 0x19ea74
- 0x1b4190 FDE 0x1b3fd0
- 0x1f3634 FDE 0x1f3320
- 0x205e5c FDE 0x205dc0
- 0x206144 FDE 0x206104
- 0x20a07c FDE 0x209ff0
- 0x20dc50 FDE 0x20d9a0
- 0x20dc84 FDE 0x20d9a0
- 0x20dcd8 FDE 0x20d9a0
- 0x20dcf4 FDE 0x20d9a0
- 0x20dd10 FDE 0x20d9a0
- 0x20dd2c FDE 0x20d9a0
- 0x2742e0 FDE 0x274120
- 0x2978c0 FDE 0x297700
### sink 0x4dd758: 12
- 0x19edc4 FDE 0x19ea74
- 0x1b1cf8 FDE 0x1b1cbc
- 0x1fa68c FDE 0x1fa648
- 0x1fce94 FDE 0x1fce00
- 0x20a224 FDE 0x20a150
- 0x20a3d0 FDE 0x20a2f4
- 0x20d730 FDE 0x20d620
- 0x20dd68 FDE 0x20d9a0
- 0x271ae8 FDE 0x271aac
- 0x271e1c FDE 0x271d20
- 0x29c82c FDE 0x29c7e8
- 0x29f0f4 FDE 0x29f060
### sink 0x5f7070: 4
- 0x2f4660 FDE 0x2f4638
- 0x2f46a4 FDE 0x2f467c
- 0x4dc0f4 FDE 0x4dc04c
- 0x4dc1c8 FDE 0x4dc198
### sink 0x5f7080: 5
- 0x2f46e4 FDE 0x2f46c0
- 0x2f4724 FDE 0x2f4700
- 0x4dc030 FDE 0x4dc014
- 0x4dc194 FDE 0x4dc190
- 0x4dc26c FDE 0x4dc234
### sink 0x5f7720: 2
- 0x4dd78c FDE 0x4dd758
- 0x4dd7c0 FDE 0x4dd758

## Game-range direct writer bodies
### 0x1b1cbc (104 bytes; 26 slots)
~~~asm
001B1CBC fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001B1CC0 f50b00f9 str      x21, [sp, #0x10]
001B1CC4 f44f02a9 stp      x20, x19, [sp, #0x20]
001B1CC8 fd030091 mov      x29, sp
001B1CCC 13e00591 add      x19, x0, #0x178
001B1CD0 f40300aa mov      x20, x0
001B1CD4 f503012a mov      w21, w1
001B1CD8 e00313aa mov      x0, x19
001B1CDC 5d121194 bl       #0x5f6650
001B1CE0 80ae40f9 ldr      x0, [x20, #0x158]
001B1CE4 000100b4 cbz      x0, #0x1b1d04
001B1CE8 f0490094 bl       #0x1c44a8
001B1CEC 1f00156b cmp      w0, w21
001B1CF0 a1000054 b.ne     #0x1b1d04
001B1CF4 80a20291 add      x0, x20, #0xa8
001B1CF8 98ae0c94 bl       #0x4dd758
001B1CFC 34008052 mov      w20, #1
001B1D00 02000014 b        #0x1b1d08
001B1D04 f4031f2a mov      w20, wzr
001B1D08 e00313aa mov      x0, x19
001B1D0C 55121194 bl       #0x5f6660
001B1D10 e003142a mov      w0, w20
001B1D14 f44f42a9 ldp      x20, x19, [sp, #0x20]
001B1D18 f50b40f9 ldr      x21, [sp, #0x10]
001B1D1C fd7bc3a8 ldp      x29, x30, [sp], #0x30
001B1D20 c0035fd6 ret      
~~~
### 0x1b3fd0 (472 bytes; 118 slots)
~~~asm
001B3FD0 ff4305d1 sub      sp, sp, #0x150
001B3FD4 fd7b10a9 stp      x29, x30, [sp, #0x100]
001B3FD8 fc8b00f9 str      x28, [sp, #0x110]
001B3FDC f85f12a9 stp      x24, x23, [sp, #0x120]
001B3FE0 f65713a9 stp      x22, x21, [sp, #0x130]
001B3FE4 f44f14a9 stp      x20, x19, [sp, #0x140]
001B3FE8 fd030491 add      x29, sp, #0x100
001B3FEC 14e00191 add      x20, x0, #0x78
001B3FF0 f80300aa mov      x24, x0
001B3FF4 f50302aa mov      x21, x2
001B3FF8 e00314aa mov      x0, x20
001B3FFC f30301aa mov      x19, x1
001B4000 94091194 bl       #0x5f6650
001B4004 08a740a9 ldp      x8, x9, [x24, #8]
001B4008 1f0109eb cmp      x8, x9
001B400C 20010054 b.eq     #0x1b4030
001B4010 f7031faa mov      x23, xzr
001B4014 0a1140f9 ldr      x10, [x8, #0x20]
001B4018 08c10091 add      x8, x8, #0x30
001B401C 1f0109eb cmp      x8, x9
001B4020 ea020a8b add      x10, x23, x10
001B4024 57110091 add      x23, x10, #4
001B4028 61ffff54 b.ne     #0x1b4014
001B402C 02000014 b        #0x1b4034
001B4030 f7031faa mov      x23, xzr
001B4034 e00314aa mov      x0, x20
001B4038 8a091194 bl       #0x5f6660
001B403C 680240f9 ldr      x8, [x19]
001B4040 f4820091 add      x20, x23, #0x20
001B4044 e00313aa mov      x0, x19
001B4048 e10314aa mov      x1, x20
001B404C 02018052 mov      w2, #8
001B4050 080940f9 ldr      x8, [x8, #0x10]
001B4054 00013fd6 blr      x8
001B4058 400800b4 cbz      x0, #0x1b4160
001B405C e82300f0 adrp     x8, #0x633000
001B4060 08f10e91 add      x8, x8, #0x3bc
001B4064 e90f8052 mov      w9, #0x7f
001B4068 a8a73ea9 stp      x8, x9, [x29, #-0x18]
001B406C 682f00d0 adrp     x8, #0x7a2000
001B4070 692f00d0 adrp     x9, #0x7a2000
001B4074 08dd41f9 ldr      x8, [x8, #0x3b8]
001B4078 29c141f9 ldr      x9, [x9, #0x380]
001B407C a05f3da9 stp      x0, x23, [x29, #-0x30]
001B4080 f60300aa mov      x22, x0
001B4084 bf031e38 sturb    wzr, [x29, #-0x20]
001B4088 a14301d1 sub      x1, x29, #0x50
001B408C e00318aa mov      x0, x24
001B4090 bf831ff8 stur     xzr, [x29, #-8]
001B4094 29410091 add      x9, x9, #0x10
001B4098 08410091 add      x8, x8, #0x10
001B409C bf273ca9 stp      xzr, x9, [x29, #-0x40]
001B40A0 692f00d0 adrp     x9, #0x7a2000
001B40A4 29c541f9 ldr      x9, [x9, #0x388]
001B40A8 29410091 add      x9, x9, #0x10
001B40AC a8273ba9 stp      x8, x9, [x29, #-0x50]
001B40B0 40000094 bl       #0x1b41b0
001B40B4 f8031f2a mov      w24, wzr
001B40B8 40040036 tbz      w0, #0, #0x1b4140
001B40BC e0a30091 add      x0, sp, #0x28
001B40C0 b5430094 bl       #0x1c4f94
001B40C4 e0a30091 add      x0, sp, #0x28
001B40C8 b7430094 bl       #0x1c4fa4
001B40CC e0a30091 add      x0, sp, #0x28
001B40D0 e10316aa mov      x1, x22
001B40D4 e20317aa mov      x2, x23
001B40D8 e3031faa mov      x3, xzr
001B40DC cd430094 bl       #0x1c5010
001B40E0 e8230091 add      x8, sp, #8
001B40E4 e0a30091 add      x0, sp, #0x28
001B40E8 dd430094 bl       #0x1c505c
001B40EC e8a740a9 ldp      x8, x9, [sp, #8]
001B40F0 cc02178b add      x12, x22, x23
001B40F4 eaaf41a9 ldp      x10, x11, [sp, #0x18]
001B40F8 a0630091 add      x0, x29, #0x18
001B40FC e10315aa mov      x1, x21
001B4100 e20314aa mov      x2, x20
001B4104 e3031faa mov      x3, xzr
001B4108 8a2d01a9 stp      x10, x11, [x12, #0x10]
001B410C 882500a9 stp      x8, x9, [x12]
001B4110 bf0f00f9 str      xzr, [x29, #0x18]
001B4114 3a83fd97 bl       #0x114dfc
001B4118 60030034 cbz      w0, #0x1b4184
001B411C f8031f2a mov      w24, wzr
001B4120 a00f40f9 ldr      x0, [x29, #0x18]
001B4124 800000b4 cbz      x0, #0x1b4134
001B4128 088c44f8 ldr      x8, [x0, #0x48]!
001B412C 080d40f9 ldr      x8, [x8, #0x18]
001B4130 00013fd6 blr      x8
001B4134 e8a30091 add      x8, sp, #0x28
001B4138 00410091 add      x0, x8, #0x10
001B413C 1d0a1194 bl       #0x5f69b0
001B4140 680240f9 ldr      x8, [x19]
001B4144 e00313aa mov      x0, x19
001B4148 e10316aa mov      x1, x22
001B414C e20314aa mov      x2, x20
001B4150 03018052 mov      w3, #8
001B4154 080d40f9 ldr      x8, [x8, #0x18]
001B4158 00013fd6 blr      x8
001B415C 02000014 b        #0x1b4164
001B4160 f8031f2a mov      w24, wzr
001B4164 e003182a mov      w0, w24
001B4168 f44f54a9 ldp      x20, x19, [sp, #0x140]
001B416C f65753a9 ldp      x22, x21, [sp, #0x130]
001B4170 fc8b40f9 ldr      x28, [sp, #0x110]
001B4174 f85f52a9 ldp      x24, x23, [sp, #0x120]
001B4178 fd7b50a9 ldp      x29, x30, [sp, #0x100]
001B417C ff430591 add      sp, sp, #0x150
001B4180 c0035fd6 ret      
001B4184 a00f40f9 ldr      x0, [x29, #0x18]
001B4188 e10316aa mov      x1, x22
001B418C e20314aa mov      x2, x20
001B4190 02a00c94 bl       #0x4dc198
001B4194 1f000071 cmp      w0, #0
001B4198 f8179f1a cset     w24, eq
001B419C a00f40f9 ldr      x0, [x29, #0x18]
001B41A0 40fcffb5 cbnz     x0, #0x1b4128
001B41A4 e4ffff17 b        #0x1b4134
~~~
### 0x1f3320 (812 bytes; 203 slots)
~~~asm
001F3320 ff8307d1 sub      sp, sp, #0x1e0
001F3324 fd7b18a9 stp      x29, x30, [sp, #0x180]
001F3328 fc6f19a9 stp      x28, x27, [sp, #0x190]
001F332C fa671aa9 stp      x26, x25, [sp, #0x1a0]
001F3330 f85f1ba9 stp      x24, x23, [sp, #0x1b0]
001F3334 f6571ca9 stp      x22, x21, [sp, #0x1c0]
001F3338 f44f1da9 stp      x20, x19, [sp, #0x1d0]
001F333C fd030691 add      x29, sp, #0x180
001F3340 48d03bd5 mrs      x8, tpidr_el0
001F3344 e9098052 mov      w9, #0x4f
001F3348 f30302aa mov      x19, x2
001F334C 3535480a and      w21, w9, w8, lsr #13
001F3350 f70301aa mov      x23, x1
001F3354 f60300aa mov      x22, x0
001F3358 14e00191 add      x20, x0, #0x78
001F335C 19e80191 add      x25, x0, #0x7a
001F3360 28ff5f08 ldaxrb   w8, [x25]
001F3364 1f3d0171 cmp      w8, #0x4f
001F3368 81000054 b.ne     #0x1f3378
001F336C 357f0808 stxrb    w8, w21, [x25]
001F3370 88ffff35 cbnz     w8, #0x1f3360
001F3374 1c000014 b        #0x1f33e4
001F3378 d8ee0191 add      x24, x22, #0x7b
001F337C 5f3f03d5 clrex    
001F3380 087f5f08 ldxrb    w8, [x24]
001F3384 08050011 add      w8, w8, #1
001F3388 087f0908 stxrb    w9, w8, [x24]
001F338C a9ffff35 cbnz     w9, #0x1f3380
001F3390 bf3b03d5 dmb      ish
001F3394 28ff5f08 ldaxrb   w8, [x25]
001F3398 1f3d0171 cmp      w8, #0x4f
001F339C a1000054 b.ne     #0x1f33b0
001F33A0 357f0808 stxrb    w8, w21, [x25]
001F33A4 88ffff35 cbnz     w8, #0x1f3394
001F33A8 0b000014 b        #0x1f33d4
001F33AC 1f2003d5 nop      
001F33B0 e00314aa mov      x0, x20
001F33B4 5f3f03d5 clrex    
001F33B8 6a0b1094 bl       #0x5f6160
001F33BC 1f2003d5 nop      
001F33C0 28ff5f08 ldaxrb   w8, [x25]
001F33C4 1f3d0171 cmp      w8, #0x4f
001F33C8 41ffff54 b.ne     #0x1f33b0
001F33CC 357f0808 stxrb    w8, w21, [x25]
001F33D0 88ffff35 cbnz     w8, #0x1f33c0
001F33D4 087f5f08 ldxrb    w8, [x24]
001F33D8 08050051 sub      w8, w8, #1
001F33DC 087f0908 stxrb    w9, w8, [x24]
001F33E0 a9ffff35 cbnz     w9, #0x1f33d4
001F33E4 c8a640a9 ldp      x8, x9, [x22, #8]
001F33E8 1f0109eb cmp      x8, x9
001F33EC 20010054 b.eq     #0x1f3410
001F33F0 f8031faa mov      x24, xzr
001F33F4 0a0d40f9 ldr      x10, [x8, #0x18]
001F33F8 08810091 add      x8, x8, #0x20
001F33FC 1f0109eb cmp      x8, x9
001F3400 0a030a8b add      x10, x24, x10
001F3404 58110091 add      x24, x10, #4
001F3408 61ffff54 b.ne     #0x1f33f4
001F340C 02000014 b        #0x1f3414
001F3410 f8031faa mov      x24, xzr
001F3414 e80240f9 ldr      x8, [x23]
001F3418 15830091 add      x21, x24, #0x20
001F341C e00317aa mov      x0, x23
001F3420 e10315aa mov      x1, x21
001F3424 080940f9 ldr      x8, [x8, #0x10]
001F3428 00013fd6 blr      x8
001F342C 400d00b4 cbz      x0, #0x1f35d4
001F3430 682d00f0 adrp     x8, #0x7a2000
001F3434 7c2d00f0 adrp     x28, #0x7a2000
001F3438 088544f9 ldr      x8, [x8, #0x908]
001F343C e0630ca9 stp      x0, x24, [sp, #0xc0]
001F3440 1a220090 adrp     x26, #0x633000
001F3444 5a6b2691 add      x26, x26, #0x99a
001F3448 9ce342f9 ldr      x28, [x28, #0x5c0]
001F344C e90f8052 mov      w9, #0x7f
001F3450 faa70da9 stp      x26, x9, [sp, #0xd8]
001F3454 7b2d00f0 adrp     x27, #0x7a2000
001F3458 ff430339 strb     wzr, [sp, #0xd0]
001F345C f70300aa mov      x23, x0
001F3460 e1830291 add      x1, sp, #0xa0
001F3464 ff7700f9 str      xzr, [sp, #0xe8]
001F3468 08410091 add      x8, x8, #0x10
001F346C e00316aa mov      x0, x22
001F3470 89430091 add      x9, x28, #0x10
001F3474 ff270ba9 stp      xzr, x9, [sp, #0xb0]
001F3478 7b7b44f9 ldr      x27, [x27, #0x8f0]
001F347C 69430091 add      x9, x27, #0x10
001F3480 e8270aa9 stp      x8, x9, [sp, #0xa0]
001F3484 73000094 bl       #0x1f3650
001F3488 600a0036 tbz      w0, #0, #0x1f35d4
001F348C e8098052 mov      w8, #0x4f
001F3490 3f7f5f08 ldxrb    wzr, [x25]
001F3494 28ff0908 stlxrb   w9, w8, [x25]
001F3498 c9ffff35 cbnz     w9, #0x1f3490
001F349C bf3b03d5 dmb      ish
001F34A0 c8ee4139 ldrb     w8, [x22, #0x7b]
001F34A4 68000034 cbz      w8, #0x1f34b0
001F34A8 e00314aa mov      x0, x20
001F34AC 350b1094 bl       #0x5f6180
001F34B0 a04302d1 sub      x0, x29, #0x90
001F34B4 b44302d1 sub      x20, x29, #0x90
001F34B8 7e320094 bl       #0x1ffeb0
001F34BC a04302d1 sub      x0, x29, #0x90
001F34C0 80320094 bl       #0x1ffec0
001F34C4 a04302d1 sub      x0, x29, #0x90
001F34C8 e10317aa mov      x1, x23
001F34CC e20318aa mov      x2, x24
001F34D0 e3031faa mov      x3, xzr
001F34D4 96320094 bl       #0x1fff2c
001F34D8 e8030291 add      x8, sp, #0x80
001F34DC a04302d1 sub      x0, x29, #0x90
001F34E0 a6320094 bl       #0x1fff78
001F34E4 80420091 add      x0, x20, #0x10
001F34E8 320d1094 bl       #0x5f69b0
001F34EC e82748a9 ldp      x8, x9, [sp, #0x80]
001F34F0 ec02188b add      x12, x23, x24
001F34F4 ea2f49a9 ldp      x10, x11, [sp, #0x90]
001F34F8 e0e30191 add      x0, sp, #0x78
001F34FC e10313aa mov      x1, x19
001F3500 e20315aa mov      x2, x21
001F3504 e3031faa mov      x3, xzr
001F3508 8a2d01a9 stp      x10, x11, [x12, #0x10]
001F350C 882500a9 stp      x8, x9, [x12]
001F3510 ff3f00f9 str      xzr, [sp, #0x78]
001F3514 3a86fc97 bl       #0x114dfc
001F3518 00050035 cbnz     w0, #0x1f35b8
001F351C 682d00f0 adrp     x8, #0x7a2000
001F3520 89430091 add      x9, x28, #0x10
001F3524 087544f9 ldr      x8, [x8, #0x8e8]
001F3528 ea0f8052 mov      w10, #0x7f
001F352C ffa703a9 stp      xzr, x9, [sp, #0x38]
001F3530 69430091 add      x9, x27, #0x10
001F3534 e0a30091 add      x0, sp, #0x28
001F3538 ff630139 strb     wzr, [sp, #0x58]
001F353C f7e304a9 stp      x23, x24, [sp, #0x48]
001F3540 08410091 add      x8, x8, #0x10
001F3544 fa2b06a9 stp      x26, x10, [sp, #0x60]
001F3548 ff3b00f9 str      xzr, [sp, #0x70]
001F354C e8a702a9 stp      x8, x9, [sp, #0x28]
001F3550 b0000094 bl       #0x1f3810
001F3554 20030036 tbz      w0, #0, #0x1f35b8
001F3558 a04302d1 sub      x0, x29, #0x90
001F355C b34302d1 sub      x19, x29, #0x90
001F3560 54320094 bl       #0x1ffeb0
001F3564 a04302d1 sub      x0, x29, #0x90
001F3568 56320094 bl       #0x1ffec0
001F356C a04302d1 sub      x0, x29, #0x90
001F3570 e10317aa mov      x1, x23
001F3574 e20318aa mov      x2, x24
001F3578 e3031faa mov      x3, xzr
001F357C 6c320094 bl       #0x1fff2c
001F3580 e8230091 add      x8, sp, #8
001F3584 a04302d1 sub      x0, x29, #0x90
001F3588 7c320094 bl       #0x1fff78
001F358C 60420091 add      x0, x19, #0x10
001F3590 080d1094 bl       #0x5f69b0
001F3594 e82748a9 ldp      x8, x9, [sp, #0x80]
001F3598 eaaf40a9 ldp      x10, x11, [sp, #8]
001F359C 1f010aeb cmp      x8, x10
001F35A0 ec3749a9 ldp      x12, x13, [sp, #0x90]
001F35A4 20014bfa ccmp     x9, x11, #0, eq
001F35A8 e8ab41a9 ldp      x8, x10, [sp, #0x18]
001F35AC 800148fa ccmp     x12, x8, #0, eq
001F35B0 a0014afa ccmp     x13, x10, #0, eq
001F35B4 a0030054 b.eq     #0x1f3628
001F35B8 f3031f2a mov      w19, wzr
001F35BC e03f40f9 ldr      x0, [sp, #0x78]
001F35C0 200200b4 cbz      x0, #0x1f3604
001F35C4 088c44f8 ldr      x8, [x0, #0x48]!
001F35C8 080d40f9 ldr      x8, [x8, #0x18]
001F35CC 00013fd6 blr      x8
001F35D0 0d000014 b        #0x1f3604
001F35D4 e8098052 mov      w8, #0x4f
001F35D8 1f2003d5 nop      
001F35DC 1f2003d5 nop      
001F35E0 3f7f5f08 ldxrb    wzr, [x25]
001F35E4 28ff0908 stlxrb   w9, w8, [x25]
001F35E8 c9ffff35 cbnz     w9, #0x1f35e0
001F35EC bf3b03d5 dmb      ish
001F35F0 c8ee4139 ldrb     w8, [x22, #0x7b]
001F35F4 68000034 cbz      w8, #0x1f3600
001F35F8 e00314aa mov      x0, x20
001F35FC e10a1094 bl       #0x5f6180
001F3600 f3031f2a mov      w19, wzr
001F3604 e003132a mov      w0, w19
001F3608 f44f5da9 ldp      x20, x19, [sp, #0x1d0]
001F360C f6575ca9 ldp      x22, x21, [sp, #0x1c0]
001F3610 f85f5ba9 ldp      x24, x23, [sp, #0x1b0]
001F3614 fa675aa9 ldp      x26, x25, [sp, #0x1a0]
001F3618 fc6f59a9 ldp      x28, x27, [sp, #0x190]
001F361C fd7b58a9 ldp      x29, x30, [sp, #0x180]
001F3620 ff830791 add      sp, sp, #0x1e0
001F3624 c0035fd6 ret      
001F3628 e03f40f9 ldr      x0, [sp, #0x78]
001F362C e10317aa mov      x1, x23
001F3630 e20315aa mov      x2, x21
001F3634 d9a20b94 bl       #0x4dc198
001F3638 1f000071 cmp      w0, #0
001F363C f3179f1a cset     w19, eq
001F3640 e03f40f9 ldr      x0, [sp, #0x78]
001F3644 00fcffb5 cbnz     x0, #0x1f35c4
001F3648 efffff17 b        #0x1f3604
~~~
### 0x1fa648 (112 bytes; 28 slots)
~~~asm
001FA648 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001FA64C f50b00f9 str      x21, [sp, #0x10]
001FA650 f44f02a9 stp      x20, x19, [sp, #0x20]
001FA654 fd030091 mov      x29, sp
001FA658 13200791 add      x19, x0, #0x1c8
001FA65C f40300aa mov      x20, x0
001FA660 f50301aa mov      x21, x1
001FA664 e00313aa mov      x0, x19
001FA668 faef0f94 bl       #0x5f6650
001FA66C 80d640f9 ldr      x0, [x20, #0x1a8]
001FA670 400100b4 cbz      x0, #0x1fa698
001FA674 70120094 bl       #0x1ff034
001FA678 080040f9 ldr      x8, [x0]
001FA67C a90240f9 ldr      x9, [x21]
001FA680 1f0109eb cmp      x8, x9
001FA684 a1000054 b.ne     #0x1fa698
001FA688 80020391 add      x0, x20, #0xc0
001FA68C 338c0b94 bl       #0x4dd758
001FA690 34008052 mov      w20, #1
001FA694 02000014 b        #0x1fa69c
001FA698 f4031f2a mov      w20, wzr
001FA69C e00313aa mov      x0, x19
001FA6A0 f0ef0f94 bl       #0x5f6660
001FA6A4 e003142a mov      w0, w20
001FA6A8 f44f42a9 ldp      x20, x19, [sp, #0x20]
001FA6AC f50b40f9 ldr      x21, [sp, #0x10]
001FA6B0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
001FA6B4 c0035fd6 ret      
~~~
### 0x1fce00 (208 bytes; 52 slots)
~~~asm
001FCE00 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001FCE04 f65701a9 stp      x22, x21, [sp, #0x10]
001FCE08 f44f02a9 stp      x20, x19, [sp, #0x20]
001FCE0C fd030091 mov      x29, sp
001FCE10 130040f9 ldr      x19, [x0]
001FCE14 f40300aa mov      x20, x0
001FCE18 60d640f9 ldr      x0, [x19, #0x1a8]
001FCE1C 800400b4 cbz      x0, #0x1fceac
001FCE20 9c080094 bl       #0x1ff090
001FCE24 c0040036 tbz      w0, #0, #0x1fcebc
001FCE28 75220791 add      x21, x19, #0x1c8
001FCE2C e00315aa mov      x0, x21
001FCE30 08e60f94 bl       #0x5f6650
001FCE34 60d640f9 ldr      x0, [x19, #0x1a8]
001FCE38 000300b4 cbz      x0, #0x1fce98
001FCE3C 7e080094 bl       #0x1ff034
001FCE40 080040f9 ldr      x8, [x0]
001FCE44 890640f9 ldr      x9, [x20, #8]
001FCE48 1f0109eb cmp      x8, x9
001FCE4C 61020054 b.ne     #0x1fce98
001FCE50 60d640f9 ldr      x0, [x19, #0x1a8]
001FCE54 97080094 bl       #0x1ff0b0
001FCE58 f603002a mov      w22, w0
001FCE5C e00315aa mov      x0, x21
001FCE60 00e60f94 bl       #0x5f6660
001FCE64 df0a0071 cmp      w22, #2
001FCE68 c1010054 b.ne     #0x1fcea0
001FCE6C e00315aa mov      x0, x21
001FCE70 f8e50f94 bl       #0x5f6650
001FCE74 60d640f9 ldr      x0, [x19, #0x1a8]
001FCE78 000100b4 cbz      x0, #0x1fce98
001FCE7C 6e080094 bl       #0x1ff034
001FCE80 080040f9 ldr      x8, [x0]
001FCE84 890640f9 ldr      x9, [x20, #8]
001FCE88 1f0109eb cmp      x8, x9
001FCE8C 61000054 b.ne     #0x1fce98
001FCE90 60020391 add      x0, x19, #0xc0
001FCE94 31820b94 bl       #0x4dd758
001FCE98 e00315aa mov      x0, x21
001FCE9C f1e50f94 bl       #0x5f6660
001FCEA0 e00313aa mov      x0, x19
001FCEA4 05f6ff97 bl       #0x1fa6b8
001FCEA8 e0031f2a mov      w0, wzr
001FCEAC f44f42a9 ldp      x20, x19, [sp, #0x20]
001FCEB0 f65741a9 ldp      x22, x21, [sp, #0x10]
001FCEB4 fd7bc3a8 ldp      x29, x30, [sp], #0x30
001FCEB8 c0035fd6 ret      
001FCEBC 20008052 mov      w0, #1
001FCEC0 f44f42a9 ldp      x20, x19, [sp, #0x20]
001FCEC4 f65741a9 ldp      x22, x21, [sp, #0x10]
001FCEC8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
001FCECC c0035fd6 ret      
~~~
### 0x271aac (104 bytes; 26 slots)
~~~asm
00271AAC fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00271AB0 f50b00f9 str      x21, [sp, #0x10]
00271AB4 f44f02a9 stp      x20, x19, [sp, #0x20]
00271AB8 fd030091 mov      x29, sp
00271ABC 13600691 add      x19, x0, #0x198
00271AC0 f40300aa mov      x20, x0
00271AC4 f503012a mov      w21, w1
00271AC8 e00313aa mov      x0, x19
00271ACC e1120e94 bl       #0x5f6650
00271AD0 80be40f9 ldr      x0, [x20, #0x178]
00271AD4 000100b4 cbz      x0, #0x271af4
00271AD8 a2240094 bl       #0x27ad60
00271ADC 1f00156b cmp      w0, w21
00271AE0 a1000054 b.ne     #0x271af4
00271AE4 80a20291 add      x0, x20, #0xa8
00271AE8 1caf0994 bl       #0x4dd758
00271AEC 34008052 mov      w20, #1
00271AF0 02000014 b        #0x271af8
00271AF4 f4031f2a mov      w20, wzr
00271AF8 e00313aa mov      x0, x19
00271AFC d9120e94 bl       #0x5f6660
00271B00 e003142a mov      w0, w20
00271B04 f44f42a9 ldp      x20, x19, [sp, #0x20]
00271B08 f50b40f9 ldr      x21, [sp, #0x10]
00271B0C fd7bc3a8 ldp      x29, x30, [sp], #0x30
00271B10 c0035fd6 ret      
~~~
### 0x271d20 (436 bytes; 109 slots)
~~~asm
00271D20 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00271D24 f70b00f9 str      x23, [sp, #0x10]
00271D28 f65702a9 stp      x22, x21, [sp, #0x20]
00271D2C f44f03a9 stp      x20, x19, [sp, #0x30]
00271D30 fd030091 mov      x29, sp
00271D34 f503012a mov      w21, w1
00271D38 f30300aa mov      x19, x0
00271D3C a0feff97 bl       #0x2717bc
00271D40 40070036 tbz      w0, #0, #0x271e28
00271D44 74620691 add      x20, x19, #0x198
00271D48 e00314aa mov      x0, x20
00271D4C 41120e94 bl       #0x5f6650
00271D50 60be40f9 ldr      x0, [x19, #0x178]
00271D54 c00000b4 cbz      x0, #0x271d6c
00271D58 02240094 bl       #0x27ad60
00271D5C 1f00156b cmp      w0, w21
00271D60 61000054 b.ne     #0x271d6c
00271D64 60be40f9 ldr      x0, [x19, #0x178]
00271D68 00240094 bl       #0x27ad68
00271D6C e00314aa mov      x0, x20
00271D70 3c120e94 bl       #0x5f6660
00271D74 16d09252 mov      w22, #0x9680
00271D78 1613a072 movk     w22, #0x98, lsl #16
00271D7C 05000014 b        #0x271d90
00271D80 e00314aa mov      x0, x20
00271D84 37120e94 bl       #0x5f6660
00271D88 e00316aa mov      x0, x22
00271D8C 71110e94 bl       #0x5f6350
00271D90 e00314aa mov      x0, x20
00271D94 2f120e94 bl       #0x5f6650
00271D98 60be40f9 ldr      x0, [x19, #0x178]
00271D9C 20ffffb4 cbz      x0, #0x271d80
00271DA0 f0230094 bl       #0x27ad60
00271DA4 1f00156b cmp      w0, w21
00271DA8 c1feff54 b.ne     #0x271d80
00271DAC 60be40f9 ldr      x0, [x19, #0x178]
00271DB0 23240094 bl       #0x27ae3c
00271DB4 f703002a mov      w23, w0
00271DB8 e00314aa mov      x0, x20
00271DBC 29120e94 bl       #0x5f6660
00271DC0 57fe0736 tbz      w23, #0, #0x271d88
00271DC4 e00314aa mov      x0, x20
00271DC8 22120e94 bl       #0x5f6650
00271DCC 60be40f9 ldr      x0, [x19, #0x178]
00271DD0 a00300b4 cbz      x0, #0x271e44
00271DD4 e3230094 bl       #0x27ad60
00271DD8 1f00156b cmp      w0, w21
00271DDC 41030054 b.ne     #0x271e44
00271DE0 60be40f9 ldr      x0, [x19, #0x178]
00271DE4 1e240094 bl       #0x27ae5c
00271DE8 f603002a mov      w22, w0
00271DEC e00314aa mov      x0, x20
00271DF0 1c120e94 bl       #0x5f6660
00271DF4 df0a0071 cmp      w22, #2
00271DF8 c1020054 b.ne     #0x271e50
00271DFC e00314aa mov      x0, x20
00271E00 14120e94 bl       #0x5f6650
00271E04 60be40f9 ldr      x0, [x19, #0x178]
00271E08 c00000b4 cbz      x0, #0x271e20
00271E0C d5230094 bl       #0x27ad60
00271E10 1f00156b cmp      w0, w21
00271E14 61000054 b.ne     #0x271e20
00271E18 60a20291 add      x0, x19, #0xa8
00271E1C 4fae0994 bl       #0x4dd758
00271E20 56008052 mov      w22, #2
00271E24 09000014 b        #0x271e48
00271E28 f6031f2a mov      w22, wzr
00271E2C e003162a mov      w0, w22
00271E30 f44f43a9 ldp      x20, x19, [sp, #0x30]
00271E34 f65742a9 ldp      x22, x21, [sp, #0x20]
00271E38 f70b40f9 ldr      x23, [sp, #0x10]
00271E3C fd7bc4a8 ldp      x29, x30, [sp], #0x40
00271E40 c0035fd6 ret      
00271E44 f6031f2a mov      w22, wzr
00271E48 e00314aa mov      x0, x20
00271E4C 05120e94 bl       #0x5f6660
00271E50 e00314aa mov      x0, x20
00271E54 ff110e94 bl       #0x5f6650
00271E58 60be40f9 ldr      x0, [x19, #0x178]
00271E5C 200200b4 cbz      x0, #0x271ea0
00271E60 0e240094 bl       #0x27ae98
00271E64 75be40f9 ldr      x21, [x19, #0x178]
00271E68 7fbe00f9 str      xzr, [x19, #0x178]
00271E6C b50100b4 cbz      x21, #0x271ea0
00271E70 a00640f9 ldr      x0, [x21, #8]
00271E74 a00000b4 cbz      x0, #0x271e88
00271E78 088c44f8 ldr      x8, [x0, #0x48]!
00271E7C 080d40f9 ldr      x8, [x8, #0x18]
00271E80 00013fd6 blr      x8
00271E84 bf0600f9 str      xzr, [x21, #8]
00271E88 600a58a9 ldp      x0, x2, [x19, #0x180]
00271E8C e10315aa mov      x1, x21
00271E90 63ca40f9 ldr      x3, [x19, #0x190]
00271E94 080040f9 ldr      x8, [x0]
00271E98 080d40f9 ldr      x8, [x8, #0x18]
00271E9C 00013fd6 blr      x8
00271EA0 682900d0 adrp     x8, #0x79f000
00271EA4 61a20291 add      x1, x19, #0xa8
00271EA8 08a942f9 ldr      x8, [x8, #0x550]
00271EAC 000140f9 ldr      x0, [x8]
00271EB0 faa20994 bl       #0x4daa98
00271EB4 e00314aa mov      x0, x20
00271EB8 ea110e94 bl       #0x5f6660
00271EBC e003162a mov      w0, w22
00271EC0 f44f43a9 ldp      x20, x19, [sp, #0x30]
00271EC4 f65742a9 ldp      x22, x21, [sp, #0x20]
00271EC8 f70b40f9 ldr      x23, [sp, #0x10]
00271ECC fd7bc4a8 ldp      x29, x30, [sp], #0x40
00271ED0 c0035fd6 ret      
~~~
### 0x274120 (472 bytes; 118 slots)
~~~asm
00274120 ff4305d1 sub      sp, sp, #0x150
00274124 fd7b10a9 stp      x29, x30, [sp, #0x100]
00274128 fc8b00f9 str      x28, [sp, #0x110]
0027412C f85f12a9 stp      x24, x23, [sp, #0x120]
00274130 f65713a9 stp      x22, x21, [sp, #0x130]
00274134 f44f14a9 stp      x20, x19, [sp, #0x140]
00274138 fd030491 add      x29, sp, #0x100
0027413C 14e00191 add      x20, x0, #0x78
00274140 f80300aa mov      x24, x0
00274144 f50302aa mov      x21, x2
00274148 e00314aa mov      x0, x20
0027414C f30301aa mov      x19, x1
00274150 40090e94 bl       #0x5f6650
00274154 08a740a9 ldp      x8, x9, [x24, #8]
00274158 1f0109eb cmp      x8, x9
0027415C 20010054 b.eq     #0x274180
00274160 f7031faa mov      x23, xzr
00274164 0a0d40f9 ldr      x10, [x8, #0x18]
00274168 08810091 add      x8, x8, #0x20
0027416C 1f0109eb cmp      x8, x9
00274170 ea020a8b add      x10, x23, x10
00274174 57110091 add      x23, x10, #4
00274178 61ffff54 b.ne     #0x274164
0027417C 02000014 b        #0x274184
00274180 f7031faa mov      x23, xzr
00274184 e00314aa mov      x0, x20
00274188 36090e94 bl       #0x5f6660
0027418C 680240f9 ldr      x8, [x19]
00274190 f4820091 add      x20, x23, #0x20
00274194 e00313aa mov      x0, x19
00274198 e10314aa mov      x1, x20
0027419C 02018052 mov      w2, #8
002741A0 080940f9 ldr      x8, [x8, #0x10]
002741A4 00013fd6 blr      x8
002741A8 400800b4 cbz      x0, #0x2742b0
002741AC 081e00b0 adrp     x8, #0x635000
002741B0 08610d91 add      x8, x8, #0x358
002741B4 e90f8052 mov      w9, #0x7f
002741B8 a8a73ea9 stp      x8, x9, [x29, #-0x18]
002741BC 682900d0 adrp     x8, #0x7a2000
002741C0 692900d0 adrp     x9, #0x7a2000
002741C4 087d47f9 ldr      x8, [x8, #0xef8]
002741C8 296147f9 ldr      x9, [x9, #0xec0]
002741CC a05f3da9 stp      x0, x23, [x29, #-0x30]
002741D0 f60300aa mov      x22, x0
002741D4 bf031e38 sturb    wzr, [x29, #-0x20]
002741D8 a14301d1 sub      x1, x29, #0x50
002741DC e00318aa mov      x0, x24
002741E0 bf831ff8 stur     xzr, [x29, #-8]
002741E4 29410091 add      x9, x9, #0x10
002741E8 08410091 add      x8, x8, #0x10
002741EC bf273ca9 stp      xzr, x9, [x29, #-0x40]
002741F0 692900d0 adrp     x9, #0x7a2000
002741F4 296547f9 ldr      x9, [x9, #0xec8]
002741F8 29410091 add      x9, x9, #0x10
002741FC a8273ba9 stp      x8, x9, [x29, #-0x50]
00274200 40000094 bl       #0x274300
00274204 f8031f2a mov      w24, wzr
00274208 40040036 tbz      w0, #0, #0x274290
0027420C e0a30091 add      x0, sp, #0x28
00274210 fe1d0094 bl       #0x27ba08
00274214 e0a30091 add      x0, sp, #0x28
00274218 001e0094 bl       #0x27ba18
0027421C e0a30091 add      x0, sp, #0x28
00274220 e10316aa mov      x1, x22
00274224 e20317aa mov      x2, x23
00274228 e3031faa mov      x3, xzr
0027422C 161e0094 bl       #0x27ba84
00274230 e8230091 add      x8, sp, #8
00274234 e0a30091 add      x0, sp, #0x28
00274238 261e0094 bl       #0x27bad0
0027423C e8a740a9 ldp      x8, x9, [sp, #8]
00274240 cc02178b add      x12, x22, x23
00274244 eaaf41a9 ldp      x10, x11, [sp, #0x18]
00274248 a0630091 add      x0, x29, #0x18
0027424C e10315aa mov      x1, x21
00274250 e20314aa mov      x2, x20
00274254 e3031faa mov      x3, xzr
00274258 8a2d01a9 stp      x10, x11, [x12, #0x10]
0027425C 882500a9 stp      x8, x9, [x12]
00274260 bf0f00f9 str      xzr, [x29, #0x18]
00274264 e682fa97 bl       #0x114dfc
00274268 60030034 cbz      w0, #0x2742d4
0027426C f8031f2a mov      w24, wzr
00274270 a00f40f9 ldr      x0, [x29, #0x18]
00274274 800000b4 cbz      x0, #0x274284
00274278 088c44f8 ldr      x8, [x0, #0x48]!
0027427C 080d40f9 ldr      x8, [x8, #0x18]
00274280 00013fd6 blr      x8
00274284 e8a30091 add      x8, sp, #0x28
00274288 00410091 add      x0, x8, #0x10
0027428C c9090e94 bl       #0x5f69b0
00274290 680240f9 ldr      x8, [x19]
00274294 e00313aa mov      x0, x19
00274298 e10316aa mov      x1, x22
0027429C e20314aa mov      x2, x20
002742A0 03018052 mov      w3, #8
002742A4 080d40f9 ldr      x8, [x8, #0x18]
002742A8 00013fd6 blr      x8
002742AC 02000014 b        #0x2742b4
002742B0 f8031f2a mov      w24, wzr
002742B4 e003182a mov      w0, w24
002742B8 f44f54a9 ldp      x20, x19, [sp, #0x140]
002742BC f65753a9 ldp      x22, x21, [sp, #0x130]
002742C0 fc8b40f9 ldr      x28, [sp, #0x110]
002742C4 f85f52a9 ldp      x24, x23, [sp, #0x120]
002742C8 fd7b50a9 ldp      x29, x30, [sp, #0x100]
002742CC ff430591 add      sp, sp, #0x150
002742D0 c0035fd6 ret      
002742D4 a00f40f9 ldr      x0, [x29, #0x18]
002742D8 e10316aa mov      x1, x22
002742DC e20314aa mov      x2, x20
002742E0 ae9f0994 bl       #0x4dc198
002742E4 1f000071 cmp      w0, #0
002742E8 f8179f1a cset     w24, eq
002742EC a00f40f9 ldr      x0, [x29, #0x18]
002742F0 40fcffb5 cbnz     x0, #0x274278
002742F4 e4ffff17 b        #0x274284
~~~
### 0x297700 (472 bytes; 118 slots)
~~~asm
00297700 ff4305d1 sub      sp, sp, #0x150
00297704 fd7b10a9 stp      x29, x30, [sp, #0x100]
00297708 fc8b00f9 str      x28, [sp, #0x110]
0029770C f85f12a9 stp      x24, x23, [sp, #0x120]
00297710 f65713a9 stp      x22, x21, [sp, #0x130]
00297714 f44f14a9 stp      x20, x19, [sp, #0x140]
00297718 fd030491 add      x29, sp, #0x100
0029771C 14e00191 add      x20, x0, #0x78
00297720 f80300aa mov      x24, x0
00297724 f50302aa mov      x21, x2
00297728 e00314aa mov      x0, x20
0029772C f30301aa mov      x19, x1
00297730 c87b0d94 bl       #0x5f6650
00297734 08a740a9 ldp      x8, x9, [x24, #8]
00297738 1f0109eb cmp      x8, x9
0029773C 20010054 b.eq     #0x297760
00297740 f7031faa mov      x23, xzr
00297744 0a0d40f9 ldr      x10, [x8, #0x18]
00297748 08810091 add      x8, x8, #0x20
0029774C 1f0109eb cmp      x8, x9
00297750 ea020a8b add      x10, x23, x10
00297754 57110091 add      x23, x10, #4
00297758 61ffff54 b.ne     #0x297744
0029775C 02000014 b        #0x297764
00297760 f7031faa mov      x23, xzr
00297764 e00314aa mov      x0, x20
00297768 be7b0d94 bl       #0x5f6660
0029776C 680240f9 ldr      x8, [x19]
00297770 f4820091 add      x20, x23, #0x20
00297774 e00313aa mov      x0, x19
00297778 e10314aa mov      x1, x20
0029777C 02018052 mov      w2, #8
00297780 080940f9 ldr      x8, [x8, #0x10]
00297784 00013fd6 blr      x8
00297788 400800b4 cbz      x0, #0x297890
0029778C 081d00f0 adrp     x8, #0x63a000
00297790 08051891 add      x8, x8, #0x601
00297794 e90f8052 mov      w9, #0x7f
00297798 a8a73ea9 stp      x8, x9, [x29, #-0x18]
0029779C 68280090 adrp     x8, #0x7a3000
002977A0 69280090 adrp     x9, #0x7a3000
002977A4 08f141f9 ldr      x8, [x8, #0x3e0]
002977A8 294541f9 ldr      x9, [x9, #0x288]
002977AC a05f3da9 stp      x0, x23, [x29, #-0x30]
002977B0 f60300aa mov      x22, x0
002977B4 bf031e38 sturb    wzr, [x29, #-0x20]
002977B8 a14301d1 sub      x1, x29, #0x50
002977BC e00318aa mov      x0, x24
002977C0 bf831ff8 stur     xzr, [x29, #-8]
002977C4 29410091 add      x9, x9, #0x10
002977C8 08410091 add      x8, x8, #0x10
002977CC bf273ca9 stp      xzr, x9, [x29, #-0x40]
002977D0 69280090 adrp     x9, #0x7a3000
002977D4 29e541f9 ldr      x9, [x9, #0x3c8]
002977D8 29410091 add      x9, x9, #0x10
002977DC a8273ba9 stp      x8, x9, [x29, #-0x50]
002977E0 40000094 bl       #0x2978e0
002977E4 f8031f2a mov      w24, wzr
002977E8 40040036 tbz      w0, #0, #0x297870
002977EC e0a30091 add      x0, sp, #0x28
002977F0 c9260094 bl       #0x2a1314
002977F4 e0a30091 add      x0, sp, #0x28
002977F8 cb260094 bl       #0x2a1324
002977FC e0a30091 add      x0, sp, #0x28
00297800 e10316aa mov      x1, x22
00297804 e20317aa mov      x2, x23
00297808 e3031faa mov      x3, xzr
0029780C e1260094 bl       #0x2a1390
00297810 e8230091 add      x8, sp, #8
00297814 e0a30091 add      x0, sp, #0x28
00297818 f1260094 bl       #0x2a13dc
0029781C e8a740a9 ldp      x8, x9, [sp, #8]
00297820 cc02178b add      x12, x22, x23
00297824 eaaf41a9 ldp      x10, x11, [sp, #0x18]
00297828 a0630091 add      x0, x29, #0x18
0029782C e10315aa mov      x1, x21
00297830 e20314aa mov      x2, x20
00297834 e3031faa mov      x3, xzr
00297838 8a2d01a9 stp      x10, x11, [x12, #0x10]
0029783C 882500a9 stp      x8, x9, [x12]
00297840 bf0f00f9 str      xzr, [x29, #0x18]
00297844 6ef5f997 bl       #0x114dfc
00297848 60030034 cbz      w0, #0x2978b4
0029784C f8031f2a mov      w24, wzr
00297850 a00f40f9 ldr      x0, [x29, #0x18]
00297854 800000b4 cbz      x0, #0x297864
00297858 088c44f8 ldr      x8, [x0, #0x48]!
0029785C 080d40f9 ldr      x8, [x8, #0x18]
00297860 00013fd6 blr      x8
00297864 e8a30091 add      x8, sp, #0x28
00297868 00410091 add      x0, x8, #0x10
0029786C 517c0d94 bl       #0x5f69b0
00297870 680240f9 ldr      x8, [x19]
00297874 e00313aa mov      x0, x19
00297878 e10316aa mov      x1, x22
0029787C e20314aa mov      x2, x20
00297880 03018052 mov      w3, #8
00297884 080d40f9 ldr      x8, [x8, #0x18]
00297888 00013fd6 blr      x8
0029788C 02000014 b        #0x297894
00297890 f8031f2a mov      w24, wzr
00297894 e003182a mov      w0, w24
00297898 f44f54a9 ldp      x20, x19, [sp, #0x140]
0029789C f65753a9 ldp      x22, x21, [sp, #0x130]
002978A0 fc8b40f9 ldr      x28, [sp, #0x110]
002978A4 f85f52a9 ldp      x24, x23, [sp, #0x120]
002978A8 fd7b50a9 ldp      x29, x30, [sp, #0x100]
002978AC ff430591 add      sp, sp, #0x150
002978B0 c0035fd6 ret      
002978B4 a00f40f9 ldr      x0, [x29, #0x18]
002978B8 e10316aa mov      x1, x22
002978BC e20314aa mov      x2, x20
002978C0 36120994 bl       #0x4dc198
002978C4 1f000071 cmp      w0, #0
002978C8 f8179f1a cset     w24, eq
002978CC a00f40f9 ldr      x0, [x29, #0x18]
002978D0 40fcffb5 cbnz     x0, #0x297858
002978D4 e4ffff17 b        #0x297864
~~~
### 0x29c7e8 (112 bytes; 28 slots)
~~~asm
0029C7E8 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0029C7EC f50b00f9 str      x21, [sp, #0x10]
0029C7F0 f44f02a9 stp      x20, x19, [sp, #0x20]
0029C7F4 fd030091 mov      x29, sp
0029C7F8 13c00691 add      x19, x0, #0x1b0
0029C7FC f40300aa mov      x20, x0
0029C800 f50301aa mov      x21, x1
0029C804 e00313aa mov      x0, x19
0029C808 92670d94 bl       #0x5f6650
0029C80C 80ca40f9 ldr      x0, [x20, #0x190]
0029C810 400100b4 cbz      x0, #0x29c838
0029C814 d00f0094 bl       #0x2a0754
0029C818 080040f9 ldr      x8, [x0]
0029C81C a90240f9 ldr      x9, [x21]
0029C820 1f0109eb cmp      x8, x9
0029C824 a1000054 b.ne     #0x29c838
0029C828 80a20291 add      x0, x20, #0xa8
0029C82C cb030994 bl       #0x4dd758
0029C830 34008052 mov      w20, #1
0029C834 02000014 b        #0x29c83c
0029C838 f4031f2a mov      w20, wzr
0029C83C e00313aa mov      x0, x19
0029C840 88670d94 bl       #0x5f6660
0029C844 e003142a mov      w0, w20
0029C848 f44f42a9 ldp      x20, x19, [sp, #0x20]
0029C84C f50b40f9 ldr      x21, [sp, #0x10]
0029C850 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0029C854 c0035fd6 ret      
~~~
### 0x29f060 (208 bytes; 52 slots)
~~~asm
0029F060 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0029F064 f65701a9 stp      x22, x21, [sp, #0x10]
0029F068 f44f02a9 stp      x20, x19, [sp, #0x20]
0029F06C fd030091 mov      x29, sp
0029F070 130040f9 ldr      x19, [x0]
0029F074 f40300aa mov      x20, x0
0029F078 60ca40f9 ldr      x0, [x19, #0x190]
0029F07C 800400b4 cbz      x0, #0x29f10c
0029F080 cc050094 bl       #0x2a07b0
0029F084 c0040036 tbz      w0, #0, #0x29f11c
0029F088 75c20691 add      x21, x19, #0x1b0
0029F08C e00315aa mov      x0, x21
0029F090 705d0d94 bl       #0x5f6650
0029F094 60ca40f9 ldr      x0, [x19, #0x190]
0029F098 000300b4 cbz      x0, #0x29f0f8
0029F09C ae050094 bl       #0x2a0754
0029F0A0 080040f9 ldr      x8, [x0]
0029F0A4 890640f9 ldr      x9, [x20, #8]
0029F0A8 1f0109eb cmp      x8, x9
0029F0AC 61020054 b.ne     #0x29f0f8
0029F0B0 60ca40f9 ldr      x0, [x19, #0x190]
0029F0B4 c7050094 bl       #0x2a07d0
0029F0B8 f603002a mov      w22, w0
0029F0BC e00315aa mov      x0, x21
0029F0C0 685d0d94 bl       #0x5f6660
0029F0C4 df0a0071 cmp      w22, #2
0029F0C8 c1010054 b.ne     #0x29f100
0029F0CC e00315aa mov      x0, x21
0029F0D0 605d0d94 bl       #0x5f6650
0029F0D4 60ca40f9 ldr      x0, [x19, #0x190]
0029F0D8 000100b4 cbz      x0, #0x29f0f8
0029F0DC 9e050094 bl       #0x2a0754
0029F0E0 080040f9 ldr      x8, [x0]
0029F0E4 890640f9 ldr      x9, [x20, #8]
0029F0E8 1f0109eb cmp      x8, x9
0029F0EC 61000054 b.ne     #0x29f0f8
0029F0F0 60a20291 add      x0, x19, #0xa8
0029F0F4 99f90894 bl       #0x4dd758
0029F0F8 e00315aa mov      x0, x21
0029F0FC 595d0d94 bl       #0x5f6660
0029F100 e00313aa mov      x0, x19
0029F104 d5f5ff97 bl       #0x29c858
0029F108 e0031f2a mov      w0, wzr
0029F10C f44f42a9 ldp      x20, x19, [sp, #0x20]
0029F110 f65741a9 ldp      x22, x21, [sp, #0x10]
0029F114 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0029F118 c0035fd6 ret      
0029F11C 20008052 mov      w0, #1
0029F120 f44f42a9 ldp      x20, x19, [sp, #0x20]
0029F124 f65741a9 ldp      x22, x21, [sp, #0x10]
0029F128 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0029F12C c0035fd6 ret      
~~~

## Callback and concrete file writer incoming edges
### Target 0x1b3fd0
- site 0x1c4c24, owner 0x1c4c04
### Target 0x1f3320
- site 0x1ff984, owner 0x1ff930
- site 0x1ff9c4, owner 0x1ff930
- site 0x1ffa54, owner 0x1ff930
### Target 0x1f3ef8
- site 0x1fb9bc, owner 0x1fb8b8
- site 0x1fbb84, owner 0x1fb8b8
### Target 0x1ff6e8
- site 0x1f3f94, owner 0x1f3ef8
### Target 0x274120
- site 0x27b698, owner 0x27b678
### Target 0x297700
- site 0x2a0fa4, owner 0x2a0f84

## Nested worker vtable candidates
- 0x77c808: raw 0x1ffaf0, target 0x1ffaf0
- 0x77c810: raw 0x1ffb90, target 0x1ffb90
- 0x77c818: raw 0x4e8864, target 0x4e8864
- 0x77c820: raw 0x10730, target 0x10730
- 0x77c828: raw 0x10750, target 0x10750
- 0x77c830: raw 0x9ceb4, target 0x9ceb4
- 0x77c838: raw 0x9ceb8, target 0x9ceb8
- 0x77c840: raw 0x9cec8, target 0x9cec8
- 0x77c848: raw 0x4e896c, target 0x4e896c
- 0x77c850: raw 0x4e8af0, target 0x4e8af0
- 0x77c858: raw 0x1ff930, target 0x1ff930
- 0x77c860: raw 0x4e8c48, target 0x4e8c48
- 0x77c868: raw 0x4e88dc, target 0x4e88dc
- 0x77c870: raw 0xffffffffffffffb8, target unresolved
- 0x77c878: raw 0x0, target unresolved
- 0x781688: raw 0x2a0fe4, target 0x2a0fe4
- 0x781690: raw 0x2a106c, target 0x2a106c
- 0x781698: raw 0x4e8864, target 0x4e8864
- 0x7816a0: raw 0x10730, target 0x10730
- 0x7816a8: raw 0x10750, target 0x10750
- 0x7816b0: raw 0x9ceb4, target 0x9ceb4
- 0x7816b8: raw 0x9ceb8, target 0x9ceb8
- 0x7816c0: raw 0x9cec8, target 0x9cec8
- 0x7816c8: raw 0x4e896c, target 0x4e896c
- 0x7816d0: raw 0x4e8af0, target 0x4e8af0
- 0x7816d8: raw 0x2a0f84, target 0x2a0f84
- 0x7816e0: raw 0x4e8c48, target 0x4e8c48
- 0x7816e8: raw 0x4e88dc, target 0x4e88dc
- 0x7816f0: raw 0xffffffffffffffb8, target unresolved
- 0x7816f8: raw 0x0, target unresolved

## Additional complete FDEs
### 0x10730 (24 bytes; 6 slots)
~~~asm
00010730 08400191 add      x8, x0, #0x50
00010734 09fd5f88 ldaxr    w9, [x8]
00010738 29050011 add      w9, w9, #1
0001073C 09fd0a88 stlxr    w10, w9, [x8]
00010740 aaffff35 cbnz     w10, #0x10734
00010744 c0035fd6 ret      
~~~
### 0x10750 (40 bytes; 10 slots)
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
### 0x9ceb4 (4 bytes; 1 slots)
~~~asm
0009CEB4 07000014 b        #0x9ced0
~~~
### 0x9ceb8 (16 bytes; 4 slots)
~~~asm
0009CEB8 08680991 add      x8, x0, #0x25a
0009CEBC 08fddf08 ldarb    w8, [x8]
0009CEC0 00010012 and      w0, w8, #1
0009CEC4 c0035fd6 ret      
~~~
### 0x9cec8 (4 bytes; 1 slots)
~~~asm
0009CEC8 c0035fd6 ret      
~~~
### 0x1b3fd0 (472 bytes; 118 slots)
~~~asm
001B3FD0 ff4305d1 sub      sp, sp, #0x150
001B3FD4 fd7b10a9 stp      x29, x30, [sp, #0x100]
001B3FD8 fc8b00f9 str      x28, [sp, #0x110]
001B3FDC f85f12a9 stp      x24, x23, [sp, #0x120]
001B3FE0 f65713a9 stp      x22, x21, [sp, #0x130]
001B3FE4 f44f14a9 stp      x20, x19, [sp, #0x140]
001B3FE8 fd030491 add      x29, sp, #0x100
001B3FEC 14e00191 add      x20, x0, #0x78
001B3FF0 f80300aa mov      x24, x0
001B3FF4 f50302aa mov      x21, x2
001B3FF8 e00314aa mov      x0, x20
001B3FFC f30301aa mov      x19, x1
001B4000 94091194 bl       #0x5f6650
001B4004 08a740a9 ldp      x8, x9, [x24, #8]
001B4008 1f0109eb cmp      x8, x9
001B400C 20010054 b.eq     #0x1b4030
001B4010 f7031faa mov      x23, xzr
001B4014 0a1140f9 ldr      x10, [x8, #0x20]
001B4018 08c10091 add      x8, x8, #0x30
001B401C 1f0109eb cmp      x8, x9
001B4020 ea020a8b add      x10, x23, x10
001B4024 57110091 add      x23, x10, #4
001B4028 61ffff54 b.ne     #0x1b4014
001B402C 02000014 b        #0x1b4034
001B4030 f7031faa mov      x23, xzr
001B4034 e00314aa mov      x0, x20
001B4038 8a091194 bl       #0x5f6660
001B403C 680240f9 ldr      x8, [x19]
001B4040 f4820091 add      x20, x23, #0x20
001B4044 e00313aa mov      x0, x19
001B4048 e10314aa mov      x1, x20
001B404C 02018052 mov      w2, #8
001B4050 080940f9 ldr      x8, [x8, #0x10]
001B4054 00013fd6 blr      x8
001B4058 400800b4 cbz      x0, #0x1b4160
001B405C e82300f0 adrp     x8, #0x633000
001B4060 08f10e91 add      x8, x8, #0x3bc
001B4064 e90f8052 mov      w9, #0x7f
001B4068 a8a73ea9 stp      x8, x9, [x29, #-0x18]
001B406C 682f00d0 adrp     x8, #0x7a2000
001B4070 692f00d0 adrp     x9, #0x7a2000
001B4074 08dd41f9 ldr      x8, [x8, #0x3b8]
001B4078 29c141f9 ldr      x9, [x9, #0x380]
001B407C a05f3da9 stp      x0, x23, [x29, #-0x30]
001B4080 f60300aa mov      x22, x0
001B4084 bf031e38 sturb    wzr, [x29, #-0x20]
001B4088 a14301d1 sub      x1, x29, #0x50
001B408C e00318aa mov      x0, x24
001B4090 bf831ff8 stur     xzr, [x29, #-8]
001B4094 29410091 add      x9, x9, #0x10
001B4098 08410091 add      x8, x8, #0x10
001B409C bf273ca9 stp      xzr, x9, [x29, #-0x40]
001B40A0 692f00d0 adrp     x9, #0x7a2000
001B40A4 29c541f9 ldr      x9, [x9, #0x388]
001B40A8 29410091 add      x9, x9, #0x10
001B40AC a8273ba9 stp      x8, x9, [x29, #-0x50]
001B40B0 40000094 bl       #0x1b41b0
001B40B4 f8031f2a mov      w24, wzr
001B40B8 40040036 tbz      w0, #0, #0x1b4140
001B40BC e0a30091 add      x0, sp, #0x28
001B40C0 b5430094 bl       #0x1c4f94
001B40C4 e0a30091 add      x0, sp, #0x28
001B40C8 b7430094 bl       #0x1c4fa4
001B40CC e0a30091 add      x0, sp, #0x28
001B40D0 e10316aa mov      x1, x22
001B40D4 e20317aa mov      x2, x23
001B40D8 e3031faa mov      x3, xzr
001B40DC cd430094 bl       #0x1c5010
001B40E0 e8230091 add      x8, sp, #8
001B40E4 e0a30091 add      x0, sp, #0x28
001B40E8 dd430094 bl       #0x1c505c
001B40EC e8a740a9 ldp      x8, x9, [sp, #8]
001B40F0 cc02178b add      x12, x22, x23
001B40F4 eaaf41a9 ldp      x10, x11, [sp, #0x18]
001B40F8 a0630091 add      x0, x29, #0x18
001B40FC e10315aa mov      x1, x21
001B4100 e20314aa mov      x2, x20
001B4104 e3031faa mov      x3, xzr
001B4108 8a2d01a9 stp      x10, x11, [x12, #0x10]
001B410C 882500a9 stp      x8, x9, [x12]
001B4110 bf0f00f9 str      xzr, [x29, #0x18]
001B4114 3a83fd97 bl       #0x114dfc
001B4118 60030034 cbz      w0, #0x1b4184
001B411C f8031f2a mov      w24, wzr
001B4120 a00f40f9 ldr      x0, [x29, #0x18]
001B4124 800000b4 cbz      x0, #0x1b4134
001B4128 088c44f8 ldr      x8, [x0, #0x48]!
001B412C 080d40f9 ldr      x8, [x8, #0x18]
001B4130 00013fd6 blr      x8
001B4134 e8a30091 add      x8, sp, #0x28
001B4138 00410091 add      x0, x8, #0x10
001B413C 1d0a1194 bl       #0x5f69b0
001B4140 680240f9 ldr      x8, [x19]
001B4144 e00313aa mov      x0, x19
001B4148 e10316aa mov      x1, x22
001B414C e20314aa mov      x2, x20
001B4150 03018052 mov      w3, #8
001B4154 080d40f9 ldr      x8, [x8, #0x18]
001B4158 00013fd6 blr      x8
001B415C 02000014 b        #0x1b4164
001B4160 f8031f2a mov      w24, wzr
001B4164 e003182a mov      w0, w24
001B4168 f44f54a9 ldp      x20, x19, [sp, #0x140]
001B416C f65753a9 ldp      x22, x21, [sp, #0x130]
001B4170 fc8b40f9 ldr      x28, [sp, #0x110]
001B4174 f85f52a9 ldp      x24, x23, [sp, #0x120]
001B4178 fd7b50a9 ldp      x29, x30, [sp, #0x100]
001B417C ff430591 add      sp, sp, #0x150
001B4180 c0035fd6 ret      
001B4184 a00f40f9 ldr      x0, [x29, #0x18]
001B4188 e10316aa mov      x1, x22
001B418C e20314aa mov      x2, x20
001B4190 02a00c94 bl       #0x4dc198
001B4194 1f000071 cmp      w0, #0
001B4198 f8179f1a cset     w24, eq
001B419C a00f40f9 ldr      x0, [x29, #0x18]
001B41A0 40fcffb5 cbnz     x0, #0x1b4128
001B41A4 e4ffff17 b        #0x1b4134
~~~
### 0x1b41b0 (600 bytes; 150 slots)
~~~asm
001B41B0 ff8301d1 sub      sp, sp, #0x60
001B41B4 fd7b01a9 stp      x29, x30, [sp, #0x10]
001B41B8 fa6702a9 stp      x26, x25, [sp, #0x20]
001B41BC f85f03a9 stp      x24, x23, [sp, #0x30]
001B41C0 f65704a9 stp      x22, x21, [sp, #0x40]
001B41C4 f44f05a9 stp      x20, x19, [sp, #0x50]
001B41C8 fd430091 add      x29, sp, #0x10
001B41CC 13e00191 add      x19, x0, #0x78
001B41D0 f60300aa mov      x22, x0
001B41D4 f40301aa mov      x20, x1
001B41D8 e00313aa mov      x0, x19
001B41DC 1d091194 bl       #0x5f6650
001B41E0 d7620291 add      x23, x22, #0x98
001B41E4 e00317aa mov      x0, x23
001B41E8 1a091194 bl       #0x5f6650
001B41EC c8e60291 add      x8, x22, #0xb9
001B41F0 29008052 mov      w9, #1
001B41F4 09fd9f08 stlrb    w9, [x8]
001B41F8 e00313aa mov      x0, x19
001B41FC 15091194 bl       #0x5f6650
001B4200 c8a640a9 ldp      x8, x9, [x22, #8]
001B4204 1f0109eb cmp      x8, x9
001B4208 20010054 b.eq     #0x1b422c
001B420C f5031faa mov      x21, xzr
001B4210 0a1140f9 ldr      x10, [x8, #0x20]
001B4214 08c10091 add      x8, x8, #0x30
001B4218 1f0109eb cmp      x8, x9
001B421C aa020a8b add      x10, x21, x10
001B4220 55110091 add      x21, x10, #4
001B4224 61ffff54 b.ne     #0x1b4210
001B4228 02000014 b        #0x1b4230
001B422C f5031faa mov      x21, xzr
001B4230 e00313aa mov      x0, x19
001B4234 0b091194 bl       #0x5f6660
001B4238 880240f9 ldr      x8, [x20]
001B423C e00314aa mov      x0, x20
001B4240 080d40f9 ldr      x8, [x8, #0x18]
001B4244 00013fd6 blr      x8
001B4248 080040f9 ldr      x8, [x0]
001B424C f80300aa mov      x24, x0
001B4250 081540f9 ldr      x8, [x8, #0x28]
001B4254 00013fd6 blr      x8
001B4258 080040f9 ldr      x8, [x0]
001B425C e10315aa mov      x1, x21
001B4260 020740f9 ldr      x2, [x24, #8]
001B4264 080d40f9 ldr      x8, [x8, #0x18]
001B4268 00013fd6 blr      x8
001B426C f503002a mov      w21, w0
001B4270 20020036 tbz      w0, #0, #0x1b42b4
001B4274 d8e640a9 ldp      x24, x25, [x22, #8]
001B4278 03000014 b        #0x1b4284
001B427C 1f2003d5 nop      
001B4280 18c30091 add      x24, x24, #0x30
001B4284 1f0319eb cmp      x24, x25
001B4288 20030054 b.eq     #0x1b42ec
001B428C 08a34039 ldrb     w8, [x24, #0x28]
001B4290 88ffff34 cbz      w8, #0x1b4280
001B4294 010740f9 ldr      x1, [x24, #8]
001B4298 41ffffb4 cbz      x1, #0x1b4280
001B429C 000b40f9 ldr      x0, [x24, #0x10]
001B42A0 00ffffb4 cbz      x0, #0x1b4280
001B42A4 021340f9 ldr      x2, [x24, #0x20]
001B42A8 ce081194 bl       #0x5f65e0
001B42AC 1fa30039 strb     wzr, [x24, #0x28]
001B42B0 f4ffff17 b        #0x1b4280
001B42B4 c8e60291 add      x8, x22, #0xb9
001B42B8 e00317aa mov      x0, x23
001B42BC 1ffd9f08 stlrb    wzr, [x8]
001B42C0 e8081194 bl       #0x5f6660
001B42C4 e00313aa mov      x0, x19
001B42C8 e6081194 bl       #0x5f6660
001B42CC a0020012 and      w0, w21, #1
001B42D0 f44f45a9 ldp      x20, x19, [sp, #0x50]
001B42D4 f65744a9 ldp      x22, x21, [sp, #0x40]
001B42D8 f85f43a9 ldp      x24, x23, [sp, #0x30]
001B42DC fa6742a9 ldp      x26, x25, [sp, #0x20]
001B42E0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
001B42E4 ff830191 add      sp, sp, #0x60
001B42E8 c0035fd6 ret      
001B42EC c8e60291 add      x8, x22, #0xb9
001B42F0 e00317aa mov      x0, x23
001B42F4 1ffd9f08 stlrb    wzr, [x8]
001B42F8 da081194 bl       #0x5f6660
001B42FC d9ea40a9 ldp      x25, x26, [x22, #8]
001B4300 09000014 b        #0x1b4324
001B4304 880240f9 ldr      x8, [x20]
001B4308 e00314aa mov      x0, x20
001B430C 080940f9 ldr      x8, [x8, #0x10]
001B4310 00013fd6 blr      x8
001B4314 080440f9 ldr      x8, [x0, #8]
001B4318 39c30091 add      x25, x25, #0x30
001B431C 0801168b add      x8, x8, x22
001B4320 080400f9 str      x8, [x0, #8]
001B4324 3f031aeb cmp      x25, x26
001B4328 e0fcff54 b.eq     #0x1b42c4
001B432C 280340b9 ldr      w8, [x25]
001B4330 e00314aa mov      x0, x20
001B4334 a8c31fb8 stur     w8, [x29, #-4]
001B4338 880240f9 ldr      x8, [x20]
001B433C 080940f9 ldr      x8, [x8, #0x10]
001B4340 00013fd6 blr      x8
001B4344 080040f9 ldr      x8, [x0]
001B4348 f60300aa mov      x22, x0
001B434C 081540f9 ldr      x8, [x8, #0x28]
001B4350 00013fd6 blr      x8
001B4354 080040f9 ldr      x8, [x0]
001B4358 81008052 mov      w1, #4
001B435C c20640f9 ldr      x2, [x22, #8]
001B4360 080d40f9 ldr      x8, [x8, #0x18]
001B4364 00013fd6 blr      x8
001B4368 00010036 tbz      w0, #0, #0x1b4388
001B436C c80240f9 ldr      x8, [x22]
001B4370 a11300d1 sub      x1, x29, #4
001B4374 e00316aa mov      x0, x22
001B4378 82008052 mov      w2, #4
001B437C e3031faa mov      x3, xzr
001B4380 080d40f9 ldr      x8, [x8, #0x18]
001B4384 00013fd6 blr      x8
001B4388 880240f9 ldr      x8, [x20]
001B438C e00314aa mov      x0, x20
001B4390 080940f9 ldr      x8, [x8, #0x10]
001B4394 00013fd6 blr      x8
001B4398 080440f9 ldr      x8, [x0, #8]
001B439C 08110091 add      x8, x8, #4
001B43A0 080400f9 str      x8, [x0, #8]
001B43A4 e00314aa mov      x0, x20
001B43A8 880240f9 ldr      x8, [x20]
001B43AC 370b40f9 ldr      x23, [x25, #0x10]
001B43B0 361340f9 ldr      x22, [x25, #0x20]
001B43B4 080940f9 ldr      x8, [x8, #0x10]
001B43B8 00013fd6 blr      x8
001B43BC 57faffb4 cbz      x23, #0x1b4304
001B43C0 080040f9 ldr      x8, [x0]
001B43C4 f80300aa mov      x24, x0
001B43C8 081540f9 ldr      x8, [x8, #0x28]
001B43CC 00013fd6 blr      x8
001B43D0 080040f9 ldr      x8, [x0]
001B43D4 e10316aa mov      x1, x22
001B43D8 020740f9 ldr      x2, [x24, #8]
001B43DC 080d40f9 ldr      x8, [x8, #0x18]
001B43E0 00013fd6 blr      x8
001B43E4 00f90736 tbz      w0, #0, #0x1b4304
001B43E8 080340f9 ldr      x8, [x24]
001B43EC e00318aa mov      x0, x24
001B43F0 e10317aa mov      x1, x23
001B43F4 e20316aa mov      x2, x22
001B43F8 e3031faa mov      x3, xzr
001B43FC 080d40f9 ldr      x8, [x8, #0x18]
001B4400 00013fd6 blr      x8
001B4404 c0ffff17 b        #0x1b4304
~~~
### 0x1bb2f8 (484 bytes; 121 slots)
~~~asm
001BB2F8 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
001BB2FC f85f01a9 stp      x24, x23, [sp, #0x10]
001BB300 f65702a9 stp      x22, x21, [sp, #0x20]
001BB304 f44f03a9 stp      x20, x19, [sp, #0x30]
001BB308 fd030091 mov      x29, sp
001BB30C 580040f9 ldr      x24, [x2]
001BB310 f603042a mov      w22, w4
001BB314 f703032a mov      w23, w3
001BB318 f50301aa mov      x21, x1
001BB31C f30300aa mov      x19, x0
001BB320 580100b4 cbz      x24, #0x1bb348
001BB324 f40318aa mov      x20, x24
001BB328 888e44f8 ldr      x8, [x20, #0x48]!
001BB32C e00314aa mov      x0, x20
001BB330 080940f9 ldr      x8, [x8, #0x10]
001BB334 00013fd6 blr      x8
001BB338 880240f9 ldr      x8, [x20]
001BB33C e00314aa mov      x0, x20
001BB340 080940f9 ldr      x8, [x8, #0x10]
001BB344 00013fd6 blr      x8
001BB348 ff7e0071 cmp      w23, #0x1f
001BB34C 48010054 b.hi     #0x1bb374
001BB350 df760071 cmp      w22, #0x1d
001BB354 08010054 b.hi     #0x1bb374
001BB358 08468552 mov      w8, #0x2a30
001BB35C 092d8052 mov      w9, #0x168
001BB360 e84ea89b umaddl   x8, w23, w8, x19
001BB364 e00318aa mov      x0, x24
001BB368 c822a99b umaddl   x8, w22, w9, x8
001BB36C 01810191 add      x1, x8, #0x60
001BB370 c2030d94 bl       #0x4fc278
001BB374 b80000b4 cbz      x24, #0x1bb388
001BB378 e00318aa mov      x0, x24
001BB37C 088c44f8 ldr      x8, [x0, #0x48]!
001BB380 080d40f9 ldr      x8, [x8, #0x18]
001BB384 00013fd6 blr      x8
001BB388 e00318aa mov      x0, x24
001BB38C 7ad70d94 bl       #0x531174
001BB390 088f44f8 ldr      x8, [x24, #0x48]!
001BB394 f403002a mov      w20, w0
001BB398 e00318aa mov      x0, x24
001BB39C 080d40f9 ldr      x8, [x8, #0x18]
001BB3A0 00013fd6 blr      x8
001BB3A4 b4080036 tbz      w20, #0, #0x1bb4b8
001BB3A8 08468552 mov      w8, #0x2a30
001BB3AC 092d8052 mov      w9, #0x168
001BB3B0 a10240f9 ldr      x1, [x21]
001BB3B4 e84ea89b umaddl   x8, w23, w8, x19
001BB3B8 c822a99b umaddl   x8, w22, w9, x8
001BB3BC 00810191 add      x0, x8, #0x60
001BB3C0 94030d94 bl       #0x4fc210
001BB3C4 b80240f9 ldr      x24, [x21]
001BB3C8 b80000b4 cbz      x24, #0x1bb3dc
001BB3CC e00318aa mov      x0, x24
001BB3D0 088c44f8 ldr      x8, [x0, #0x48]!
001BB3D4 080940f9 ldr      x8, [x8, #0x10]
001BB3D8 00013fd6 blr      x8
001BB3DC e00318aa mov      x0, x24
001BB3E0 65d70d94 bl       #0x531174
001BB3E4 c8038052 mov      w8, #0x1e
001BB3E8 ea5a081b madd     w10, w23, w8, w22
001BB3EC 5f010f71 cmp      w10, #0x3c0
001BB3F0 02070054 b.hs     #0x1bb4d0
001BB3F4 68524191 add      x8, x19, #0x54, lsl #12
001BB3F8 2b008052 mov      w11, #1
001BB3FC 49fd46d3 lsr      x9, x10, #6
001BB400 08a11991 add      x8, x8, #0x668
001BB404 6a21ca9a lsl      x10, x11, x10
001BB408 80000036 tbz      w0, #0, #0x1bb418
001BB40C 0b7969f8 ldr      x11, [x8, x9, lsl #3]
001BB410 6a012a8a bic      x10, x11, x10
001BB414 03000014 b        #0x1bb420
001BB418 0b7969f8 ldr      x11, [x8, x9, lsl #3]
001BB41C 6a010aaa orr      x10, x11, x10
001BB420 0a7929f8 str      x10, [x8, x9, lsl #3]
001BB424 088f44f8 ldr      x8, [x24, #0x48]!
001BB428 e00318aa mov      x0, x24
001BB42C 080d40f9 ldr      x8, [x8, #0x18]
001BB430 00013fd6 blr      x8
001BB434 b50240f9 ldr      x21, [x21]
001BB438 b50000b4 cbz      x21, #0x1bb44c
001BB43C e00315aa mov      x0, x21
001BB440 088c44f8 ldr      x8, [x0, #0x48]!
001BB444 080940f9 ldr      x8, [x8, #0x10]
001BB448 00013fd6 blr      x8
001BB44C e00315aa mov      x0, x21
001BB450 eed60d94 bl       #0x531008
001BB454 c0010034 cbz      w0, #0x1bb48c
001BB458 f603002a mov      w22, w0
001BB45C e00315aa mov      x0, x21
001BB460 41008052 mov      w1, #2
001BB464 b4e10d94 bl       #0x533b34
001BB468 20010037 tbnz     w0, #0, #0x1bb48c
001BB46C 68524191 add      x8, x19, #0x54, lsl #12
001BB470 08611d91 add      x8, x8, #0x758
001BB474 09597678 ldrh     w9, [x8, w22, uxtw #1]
001BB478 3ffd0e71 cmp      w9, #0x3bf
001BB47C 88000054 b.hi     #0x1bb48c
001BB480 ea03162a mov      w10, w22
001BB484 29050011 add      w9, w9, #1
001BB488 09792a78 strh     w9, [x8, x10, lsl #1]
001BB48C a88e44f8 ldr      x8, [x21, #0x48]!
001BB490 e00315aa mov      x0, x21
001BB494 080d40f9 ldr      x8, [x8, #0x18]
001BB498 00013fd6 blr      x8
001BB49C 08ee8952 mov      w8, #0x4f70
001BB4A0 a800a072 movk     w8, #5, lsl #16
001BB4A4 686a68f8 ldr      x8, [x19, x8]
001BB4A8 880000b4 cbz      x8, #0x1bb4b8
001BB4AC 69524191 add      x9, x19, #0x54, lsl #12
001BB4B0 20413e91 add      x0, x9, #0xf90
001BB4B4 00013fd6 blr      x8
001BB4B8 80020012 and      w0, w20, #1
001BB4BC f44f43a9 ldp      x20, x19, [sp, #0x30]
001BB4C0 f65742a9 ldp      x22, x21, [sp, #0x20]
001BB4C4 f85f41a9 ldp      x24, x23, [sp, #0x10]
001BB4C8 fd7bc4a8 ldp      x29, x30, [sp], #0x40
001BB4CC c0035fd6 ret      
001BB4D0 c0220090 adrp     x0, #0x613000
001BB4D4 00400b91 add      x0, x0, #0x2d0
001BB4D8 2a7bf997 bl       #0x1a180
~~~
### 0x1c3a0c (424 bytes; 106 slots)
~~~asm
001C3A0C ff0301d1 sub      sp, sp, #0x40
001C3A10 fd7b01a9 stp      x29, x30, [sp, #0x10]
001C3A14 f51300f9 str      x21, [sp, #0x20]
001C3A18 f44f03a9 stp      x20, x19, [sp, #0x30]
001C3A1C fd430091 add      x29, sp, #0x10
001C3A20 f40300aa mov      x20, x0
001C3A24 e00301aa mov      x0, x1
001C3A28 f50301aa mov      x21, x1
001C3A2C f30308aa mov      x19, x8
001C3A30 f4660c94 bl       #0x4dd600
001C3A34 e22e0090 adrp     x2, #0x79f000
001C3A38 e303002a mov      w3, w0
001C3A3C 42d043f9 ldr      x2, [x2, #0x7a0]
001C3A40 e0030091 mov      x0, sp
001C3A44 01028052 mov      w1, #0x10
001C3A48 2acb1094 bl       #0x5f66f0
001C3A4C e0030091 mov      x0, sp
001C3A50 08ca1094 bl       #0x5f6270
001C3A54 e20300aa mov      x2, x0
001C3A58 e1030091 mov      x1, sp
001C3A5C e00314aa mov      x0, x20
001C3A60 08ca1094 bl       #0x5f6280
001C3A64 a0030034 cbz      w0, #0x1c3ad8
001C3A68 e00315aa mov      x0, x21
001C3A6C e5660c94 bl       #0x4dd600
001C3A70 1f040031 cmn      w0, #1
001C3A74 e0060054 b.eq     #0x1c3b50
001C3A78 e22e0090 adrp     x2, #0x79f000
001C3A7C e303002a mov      w3, w0
001C3A80 42d043f9 ldr      x2, [x2, #0x7a0]
001C3A84 e0030091 mov      x0, sp
001C3A88 01028052 mov      w1, #0x10
001C3A8C 19cb1094 bl       #0x5f66f0
001C3A90 a8630091 add      x8, x29, #0x18
001C3A94 e0030091 mov      x0, sp
001C3A98 e10314aa mov      x1, x20
001C3A9C b0000094 bl       #0x1c3d5c
001C3AA0 a1630091 add      x1, x29, #0x18
001C3AA4 e00313aa mov      x0, x19
001C3AA8 82008052 mov      w2, #4
001C3AAC bb650c94 bl       #0x4dd198
001C3AB0 a00f40f9 ldr      x0, [x29, #0x18]
001C3AB4 800000b4 cbz      x0, #0x1c3ac4
001C3AB8 088c44f8 ldr      x8, [x0, #0x48]!
001C3ABC 080d40f9 ldr      x8, [x8, #0x18]
001C3AC0 00013fd6 blr      x8
001C3AC4 f44f43a9 ldp      x20, x19, [sp, #0x30]
001C3AC8 f51340f9 ldr      x21, [sp, #0x20]
001C3ACC fd7b41a9 ldp      x29, x30, [sp, #0x10]
001C3AD0 ff030191 add      sp, sp, #0x40
001C3AD4 c0035fd6 ret      
001C3AD8 e00313aa mov      x0, x19
001C3ADC e10314aa mov      x1, x20
001C3AE0 3d19f997 bl       #0x9fd4
001C3AE4 740240f9 ldr      x20, [x19]
001C3AE8 e82e0090 adrp     x8, #0x79f000
001C3AEC 89620191 add      x9, x20, #0x58
001C3AF0 08e542f9 ldr      x8, [x8, #0x5c8]
001C3AF4 9f0200f1 cmp      x20, #0
001C3AF8 8a820191 add      x10, x20, #0x60
001C3AFC 0801899a csel     x8, x8, x9, eq
001C3B00 e92e0090 adrp     x9, #0x79f000
001C3B04 080140f9 ldr      x8, [x8]
001C3B08 29e942f9 ldr      x9, [x9, #0x5d0]
001C3B0C 29018a9a csel     x9, x9, x10, eq
001C3B10 290140f9 ldr      x9, [x9]
001C3B14 d40300b4 cbz      x20, #0x1c3b8c
001C3B18 8a3640f9 ldr      x10, [x20, #0x68]
001C3B1C 68a600a9 stp      x8, x9, [x19, #8]
001C3B20 e00314aa mov      x0, x20
001C3B24 6afe01a9 stp      x10, xzr, [x19, #0x18]
001C3B28 088c44f8 ldr      x8, [x0, #0x48]!
001C3B2C 080940f9 ldr      x8, [x8, #0x10]
001C3B30 00013fd6 blr      x8
001C3B34 601240f9 ldr      x0, [x19, #0x20]
001C3B38 741200f9 str      x20, [x19, #0x20]
001C3B3C c00200b4 cbz      x0, #0x1c3b94
001C3B40 088c44f8 ldr      x8, [x0, #0x48]!
001C3B44 080d40f9 ldr      x8, [x8, #0x18]
001C3B48 00013fd6 blr      x8
001C3B4C 12000014 b        #0x1c3b94
001C3B50 a8c884d2 mov      x8, #0x2645
001C3B54 4884b0f2 movk     x8, #0x8422, lsl #16
001C3B58 7f1200f9 str      xzr, [x19, #0x20]
001C3B5C 889cd3f2 movk     x8, #0x9ce4, lsl #32
001C3B60 487ef9f2 movk     x8, #0xcbf2, lsl #48
001C3B64 7f2a00b9 str      wzr, [x19, #0x28]
001C3B68 69220090 adrp     x9, #0x60f000
001C3B6C 290d1a91 add      x9, x9, #0x683
001C3B70 7f2200a9 stp      xzr, x8, [x19]
001C3B74 697e01a9 stp      x9, xzr, [x19, #0x10]
001C3B78 f44f43a9 ldp      x20, x19, [sp, #0x30]
001C3B7C f51340f9 ldr      x21, [sp, #0x20]
001C3B80 fd7b41a9 ldp      x29, x30, [sp, #0x10]
001C3B84 ff030191 add      sp, sp, #0x40
001C3B88 c0035fd6 ret      
001C3B8C 68a600a9 stp      x8, x9, [x19, #8]
001C3B90 7ffe01a9 stp      xzr, xzr, [x19, #0x18]
001C3B94 88008052 mov      w8, #4
001C3B98 e00313aa mov      x0, x19
001C3B9C f51340f9 ldr      x21, [sp, #0x20]
001C3BA0 682a00b9 str      w8, [x19, #0x28]
001C3BA4 f44f43a9 ldp      x20, x19, [sp, #0x30]
001C3BA8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
001C3BAC ff030191 add      sp, sp, #0x40
001C3BB0 b825f917 b        #0xd290
~~~
### 0x1c3bb4 (424 bytes; 106 slots)
~~~asm
001C3BB4 ff0301d1 sub      sp, sp, #0x40
001C3BB8 fd7b01a9 stp      x29, x30, [sp, #0x10]
001C3BBC f51300f9 str      x21, [sp, #0x20]
001C3BC0 f44f03a9 stp      x20, x19, [sp, #0x30]
001C3BC4 fd430091 add      x29, sp, #0x10
001C3BC8 f40300aa mov      x20, x0
001C3BCC e00301aa mov      x0, x1
001C3BD0 f50301aa mov      x21, x1
001C3BD4 f30308aa mov      x19, x8
001C3BD8 8a660c94 bl       #0x4dd600
001C3BDC e22e0090 adrp     x2, #0x79f000
001C3BE0 e303002a mov      w3, w0
001C3BE4 42d043f9 ldr      x2, [x2, #0x7a0]
001C3BE8 e0030091 mov      x0, sp
001C3BEC 01028052 mov      w1, #0x10
001C3BF0 c0ca1094 bl       #0x5f66f0
001C3BF4 e0030091 mov      x0, sp
001C3BF8 9ec91094 bl       #0x5f6270
001C3BFC e20300aa mov      x2, x0
001C3C00 e1030091 mov      x1, sp
001C3C04 e00314aa mov      x0, x20
001C3C08 9ec91094 bl       #0x5f6280
001C3C0C a0030034 cbz      w0, #0x1c3c80
001C3C10 e00315aa mov      x0, x21
001C3C14 7b660c94 bl       #0x4dd600
001C3C18 1f040031 cmn      w0, #1
001C3C1C e0060054 b.eq     #0x1c3cf8
001C3C20 e22e0090 adrp     x2, #0x79f000
001C3C24 e303002a mov      w3, w0
001C3C28 42d043f9 ldr      x2, [x2, #0x7a0]
001C3C2C e0030091 mov      x0, sp
001C3C30 01028052 mov      w1, #0x10
001C3C34 afca1094 bl       #0x5f66f0
001C3C38 a8630091 add      x8, x29, #0x18
001C3C3C e0030091 mov      x0, sp
001C3C40 e10314aa mov      x1, x20
001C3C44 65000094 bl       #0x1c3dd8
001C3C48 a1630091 add      x1, x29, #0x18
001C3C4C e00313aa mov      x0, x19
001C3C50 82008052 mov      w2, #4
001C3C54 51650c94 bl       #0x4dd198
001C3C58 a00f40f9 ldr      x0, [x29, #0x18]
001C3C5C 800000b4 cbz      x0, #0x1c3c6c
001C3C60 088c44f8 ldr      x8, [x0, #0x48]!
001C3C64 080d40f9 ldr      x8, [x8, #0x18]
001C3C68 00013fd6 blr      x8
001C3C6C f44f43a9 ldp      x20, x19, [sp, #0x30]
001C3C70 f51340f9 ldr      x21, [sp, #0x20]
001C3C74 fd7b41a9 ldp      x29, x30, [sp, #0x10]
001C3C78 ff030191 add      sp, sp, #0x40
001C3C7C c0035fd6 ret      
001C3C80 e00313aa mov      x0, x19
001C3C84 e10314aa mov      x1, x20
001C3C88 d318f997 bl       #0x9fd4
001C3C8C 740240f9 ldr      x20, [x19]
001C3C90 e82e0090 adrp     x8, #0x79f000
001C3C94 89620191 add      x9, x20, #0x58
001C3C98 08e542f9 ldr      x8, [x8, #0x5c8]
001C3C9C 9f0200f1 cmp      x20, #0
001C3CA0 8a820191 add      x10, x20, #0x60
001C3CA4 0801899a csel     x8, x8, x9, eq
001C3CA8 e92e0090 adrp     x9, #0x79f000
001C3CAC 080140f9 ldr      x8, [x8]
001C3CB0 29e942f9 ldr      x9, [x9, #0x5d0]
001C3CB4 29018a9a csel     x9, x9, x10, eq
001C3CB8 290140f9 ldr      x9, [x9]
001C3CBC d40300b4 cbz      x20, #0x1c3d34
001C3CC0 8a3640f9 ldr      x10, [x20, #0x68]
001C3CC4 68a600a9 stp      x8, x9, [x19, #8]
001C3CC8 e00314aa mov      x0, x20
001C3CCC 6afe01a9 stp      x10, xzr, [x19, #0x18]
001C3CD0 088c44f8 ldr      x8, [x0, #0x48]!
001C3CD4 080940f9 ldr      x8, [x8, #0x10]
001C3CD8 00013fd6 blr      x8
001C3CDC 601240f9 ldr      x0, [x19, #0x20]
001C3CE0 741200f9 str      x20, [x19, #0x20]
001C3CE4 c00200b4 cbz      x0, #0x1c3d3c
001C3CE8 088c44f8 ldr      x8, [x0, #0x48]!
001C3CEC 080d40f9 ldr      x8, [x8, #0x18]
001C3CF0 00013fd6 blr      x8
001C3CF4 12000014 b        #0x1c3d3c
001C3CF8 a8c884d2 mov      x8, #0x2645
001C3CFC 4884b0f2 movk     x8, #0x8422, lsl #16
001C3D00 7f1200f9 str      xzr, [x19, #0x20]
001C3D04 889cd3f2 movk     x8, #0x9ce4, lsl #32
001C3D08 487ef9f2 movk     x8, #0xcbf2, lsl #48
001C3D0C 7f2a00b9 str      wzr, [x19, #0x28]
001C3D10 69220090 adrp     x9, #0x60f000
001C3D14 290d1a91 add      x9, x9, #0x683
001C3D18 7f2200a9 stp      xzr, x8, [x19]
001C3D1C 697e01a9 stp      x9, xzr, [x19, #0x10]
001C3D20 f44f43a9 ldp      x20, x19, [sp, #0x30]
001C3D24 f51340f9 ldr      x21, [sp, #0x20]
001C3D28 fd7b41a9 ldp      x29, x30, [sp, #0x10]
001C3D2C ff030191 add      sp, sp, #0x40
001C3D30 c0035fd6 ret      
001C3D34 68a600a9 stp      x8, x9, [x19, #8]
001C3D38 7ffe01a9 stp      xzr, xzr, [x19, #0x18]
001C3D3C 88008052 mov      w8, #4
001C3D40 e00313aa mov      x0, x19
001C3D44 f51340f9 ldr      x21, [sp, #0x20]
001C3D48 682a00b9 str      w8, [x19, #0x28]
001C3D4C f44f43a9 ldp      x20, x19, [sp, #0x30]
001C3D50 fd7b41a9 ldp      x29, x30, [sp, #0x10]
001C3D54 ff030191 add      sp, sp, #0x40
001C3D58 4e25f917 b        #0xd290
~~~
### 0x1c4c04 (96 bytes; 24 slots)
~~~asm
001C4C04 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001C4C08 f50b00f9 str      x21, [sp, #0x10]
001C4C0C f44f02a9 stp      x20, x19, [sp, #0x20]
001C4C10 fd030091 mov      x29, sp
001C4C14 f30300aa mov      x19, x0
001C4C18 00b841f9 ldr      x0, [x0, #0x370]
001C4C1C 62e20d91 add      x2, x19, #0x378
001C4C20 610640f9 ldr      x1, [x19, #8]
001C4C24 ebbcff97 bl       #0x1b3fd0
001C4C28 75c20e91 add      x21, x19, #0x3b0
001C4C2C f403002a mov      w20, w0
001C4C30 e00315aa mov      x0, x21
001C4C34 87c61094 bl       #0x5f6650
001C4C38 9f020072 tst      w20, #1
001C4C3C 48008052 mov      w8, #2
001C4C40 e00315aa mov      x0, x21
001C4C44 0815881a cinc     w8, w8, eq
001C4C48 68aa03b9 str      w8, [x19, #0x3a8]
001C4C4C 85c61094 bl       #0x5f6660
001C4C50 e00313aa mov      x0, x19
001C4C54 f44f42a9 ldp      x20, x19, [sp, #0x20]
001C4C58 f50b40f9 ldr      x21, [sp, #0x10]
001C4C5C fd7bc3a8 ldp      x29, x30, [sp], #0x30
001C4C60 fa8f0c14 b        #0x4e8c48
~~~
### 0x1f3320 (812 bytes; 203 slots)
~~~asm
001F3320 ff8307d1 sub      sp, sp, #0x1e0
001F3324 fd7b18a9 stp      x29, x30, [sp, #0x180]
001F3328 fc6f19a9 stp      x28, x27, [sp, #0x190]
001F332C fa671aa9 stp      x26, x25, [sp, #0x1a0]
001F3330 f85f1ba9 stp      x24, x23, [sp, #0x1b0]
001F3334 f6571ca9 stp      x22, x21, [sp, #0x1c0]
001F3338 f44f1da9 stp      x20, x19, [sp, #0x1d0]
001F333C fd030691 add      x29, sp, #0x180
001F3340 48d03bd5 mrs      x8, tpidr_el0
001F3344 e9098052 mov      w9, #0x4f
001F3348 f30302aa mov      x19, x2
001F334C 3535480a and      w21, w9, w8, lsr #13
001F3350 f70301aa mov      x23, x1
001F3354 f60300aa mov      x22, x0
001F3358 14e00191 add      x20, x0, #0x78
001F335C 19e80191 add      x25, x0, #0x7a
001F3360 28ff5f08 ldaxrb   w8, [x25]
001F3364 1f3d0171 cmp      w8, #0x4f
001F3368 81000054 b.ne     #0x1f3378
001F336C 357f0808 stxrb    w8, w21, [x25]
001F3370 88ffff35 cbnz     w8, #0x1f3360
001F3374 1c000014 b        #0x1f33e4
001F3378 d8ee0191 add      x24, x22, #0x7b
001F337C 5f3f03d5 clrex    
001F3380 087f5f08 ldxrb    w8, [x24]
001F3384 08050011 add      w8, w8, #1
001F3388 087f0908 stxrb    w9, w8, [x24]
001F338C a9ffff35 cbnz     w9, #0x1f3380
001F3390 bf3b03d5 dmb      ish
001F3394 28ff5f08 ldaxrb   w8, [x25]
001F3398 1f3d0171 cmp      w8, #0x4f
001F339C a1000054 b.ne     #0x1f33b0
001F33A0 357f0808 stxrb    w8, w21, [x25]
001F33A4 88ffff35 cbnz     w8, #0x1f3394
001F33A8 0b000014 b        #0x1f33d4
001F33AC 1f2003d5 nop      
001F33B0 e00314aa mov      x0, x20
001F33B4 5f3f03d5 clrex    
001F33B8 6a0b1094 bl       #0x5f6160
001F33BC 1f2003d5 nop      
001F33C0 28ff5f08 ldaxrb   w8, [x25]
001F33C4 1f3d0171 cmp      w8, #0x4f
001F33C8 41ffff54 b.ne     #0x1f33b0
001F33CC 357f0808 stxrb    w8, w21, [x25]
001F33D0 88ffff35 cbnz     w8, #0x1f33c0
001F33D4 087f5f08 ldxrb    w8, [x24]
001F33D8 08050051 sub      w8, w8, #1
001F33DC 087f0908 stxrb    w9, w8, [x24]
001F33E0 a9ffff35 cbnz     w9, #0x1f33d4
001F33E4 c8a640a9 ldp      x8, x9, [x22, #8]
001F33E8 1f0109eb cmp      x8, x9
001F33EC 20010054 b.eq     #0x1f3410
001F33F0 f8031faa mov      x24, xzr
001F33F4 0a0d40f9 ldr      x10, [x8, #0x18]
001F33F8 08810091 add      x8, x8, #0x20
001F33FC 1f0109eb cmp      x8, x9
001F3400 0a030a8b add      x10, x24, x10
001F3404 58110091 add      x24, x10, #4
001F3408 61ffff54 b.ne     #0x1f33f4
001F340C 02000014 b        #0x1f3414
001F3410 f8031faa mov      x24, xzr
001F3414 e80240f9 ldr      x8, [x23]
001F3418 15830091 add      x21, x24, #0x20
001F341C e00317aa mov      x0, x23
001F3420 e10315aa mov      x1, x21
001F3424 080940f9 ldr      x8, [x8, #0x10]
001F3428 00013fd6 blr      x8
001F342C 400d00b4 cbz      x0, #0x1f35d4
001F3430 682d00f0 adrp     x8, #0x7a2000
001F3434 7c2d00f0 adrp     x28, #0x7a2000
001F3438 088544f9 ldr      x8, [x8, #0x908]
001F343C e0630ca9 stp      x0, x24, [sp, #0xc0]
001F3440 1a220090 adrp     x26, #0x633000
001F3444 5a6b2691 add      x26, x26, #0x99a
001F3448 9ce342f9 ldr      x28, [x28, #0x5c0]
001F344C e90f8052 mov      w9, #0x7f
001F3450 faa70da9 stp      x26, x9, [sp, #0xd8]
001F3454 7b2d00f0 adrp     x27, #0x7a2000
001F3458 ff430339 strb     wzr, [sp, #0xd0]
001F345C f70300aa mov      x23, x0
001F3460 e1830291 add      x1, sp, #0xa0
001F3464 ff7700f9 str      xzr, [sp, #0xe8]
001F3468 08410091 add      x8, x8, #0x10
001F346C e00316aa mov      x0, x22
001F3470 89430091 add      x9, x28, #0x10
001F3474 ff270ba9 stp      xzr, x9, [sp, #0xb0]
001F3478 7b7b44f9 ldr      x27, [x27, #0x8f0]
001F347C 69430091 add      x9, x27, #0x10
001F3480 e8270aa9 stp      x8, x9, [sp, #0xa0]
001F3484 73000094 bl       #0x1f3650
001F3488 600a0036 tbz      w0, #0, #0x1f35d4
001F348C e8098052 mov      w8, #0x4f
001F3490 3f7f5f08 ldxrb    wzr, [x25]
001F3494 28ff0908 stlxrb   w9, w8, [x25]
001F3498 c9ffff35 cbnz     w9, #0x1f3490
001F349C bf3b03d5 dmb      ish
001F34A0 c8ee4139 ldrb     w8, [x22, #0x7b]
001F34A4 68000034 cbz      w8, #0x1f34b0
001F34A8 e00314aa mov      x0, x20
001F34AC 350b1094 bl       #0x5f6180
001F34B0 a04302d1 sub      x0, x29, #0x90
001F34B4 b44302d1 sub      x20, x29, #0x90
001F34B8 7e320094 bl       #0x1ffeb0
001F34BC a04302d1 sub      x0, x29, #0x90
001F34C0 80320094 bl       #0x1ffec0
001F34C4 a04302d1 sub      x0, x29, #0x90
001F34C8 e10317aa mov      x1, x23
001F34CC e20318aa mov      x2, x24
001F34D0 e3031faa mov      x3, xzr
001F34D4 96320094 bl       #0x1fff2c
001F34D8 e8030291 add      x8, sp, #0x80
001F34DC a04302d1 sub      x0, x29, #0x90
001F34E0 a6320094 bl       #0x1fff78
001F34E4 80420091 add      x0, x20, #0x10
001F34E8 320d1094 bl       #0x5f69b0
001F34EC e82748a9 ldp      x8, x9, [sp, #0x80]
001F34F0 ec02188b add      x12, x23, x24
001F34F4 ea2f49a9 ldp      x10, x11, [sp, #0x90]
001F34F8 e0e30191 add      x0, sp, #0x78
001F34FC e10313aa mov      x1, x19
001F3500 e20315aa mov      x2, x21
001F3504 e3031faa mov      x3, xzr
001F3508 8a2d01a9 stp      x10, x11, [x12, #0x10]
001F350C 882500a9 stp      x8, x9, [x12]
001F3510 ff3f00f9 str      xzr, [sp, #0x78]
001F3514 3a86fc97 bl       #0x114dfc
001F3518 00050035 cbnz     w0, #0x1f35b8
001F351C 682d00f0 adrp     x8, #0x7a2000
001F3520 89430091 add      x9, x28, #0x10
001F3524 087544f9 ldr      x8, [x8, #0x8e8]
001F3528 ea0f8052 mov      w10, #0x7f
001F352C ffa703a9 stp      xzr, x9, [sp, #0x38]
001F3530 69430091 add      x9, x27, #0x10
001F3534 e0a30091 add      x0, sp, #0x28
001F3538 ff630139 strb     wzr, [sp, #0x58]
001F353C f7e304a9 stp      x23, x24, [sp, #0x48]
001F3540 08410091 add      x8, x8, #0x10
001F3544 fa2b06a9 stp      x26, x10, [sp, #0x60]
001F3548 ff3b00f9 str      xzr, [sp, #0x70]
001F354C e8a702a9 stp      x8, x9, [sp, #0x28]
001F3550 b0000094 bl       #0x1f3810
001F3554 20030036 tbz      w0, #0, #0x1f35b8
001F3558 a04302d1 sub      x0, x29, #0x90
001F355C b34302d1 sub      x19, x29, #0x90
001F3560 54320094 bl       #0x1ffeb0
001F3564 a04302d1 sub      x0, x29, #0x90
001F3568 56320094 bl       #0x1ffec0
001F356C a04302d1 sub      x0, x29, #0x90
001F3570 e10317aa mov      x1, x23
001F3574 e20318aa mov      x2, x24
001F3578 e3031faa mov      x3, xzr
001F357C 6c320094 bl       #0x1fff2c
001F3580 e8230091 add      x8, sp, #8
001F3584 a04302d1 sub      x0, x29, #0x90
001F3588 7c320094 bl       #0x1fff78
001F358C 60420091 add      x0, x19, #0x10
001F3590 080d1094 bl       #0x5f69b0
001F3594 e82748a9 ldp      x8, x9, [sp, #0x80]
001F3598 eaaf40a9 ldp      x10, x11, [sp, #8]
001F359C 1f010aeb cmp      x8, x10
001F35A0 ec3749a9 ldp      x12, x13, [sp, #0x90]
001F35A4 20014bfa ccmp     x9, x11, #0, eq
001F35A8 e8ab41a9 ldp      x8, x10, [sp, #0x18]
001F35AC 800148fa ccmp     x12, x8, #0, eq
001F35B0 a0014afa ccmp     x13, x10, #0, eq
001F35B4 a0030054 b.eq     #0x1f3628
001F35B8 f3031f2a mov      w19, wzr
001F35BC e03f40f9 ldr      x0, [sp, #0x78]
001F35C0 200200b4 cbz      x0, #0x1f3604
001F35C4 088c44f8 ldr      x8, [x0, #0x48]!
001F35C8 080d40f9 ldr      x8, [x8, #0x18]
001F35CC 00013fd6 blr      x8
001F35D0 0d000014 b        #0x1f3604
001F35D4 e8098052 mov      w8, #0x4f
001F35D8 1f2003d5 nop      
001F35DC 1f2003d5 nop      
001F35E0 3f7f5f08 ldxrb    wzr, [x25]
001F35E4 28ff0908 stlxrb   w9, w8, [x25]
001F35E8 c9ffff35 cbnz     w9, #0x1f35e0
001F35EC bf3b03d5 dmb      ish
001F35F0 c8ee4139 ldrb     w8, [x22, #0x7b]
001F35F4 68000034 cbz      w8, #0x1f3600
001F35F8 e00314aa mov      x0, x20
001F35FC e10a1094 bl       #0x5f6180
001F3600 f3031f2a mov      w19, wzr
001F3604 e003132a mov      w0, w19
001F3608 f44f5da9 ldp      x20, x19, [sp, #0x1d0]
001F360C f6575ca9 ldp      x22, x21, [sp, #0x1c0]
001F3610 f85f5ba9 ldp      x24, x23, [sp, #0x1b0]
001F3614 fa675aa9 ldp      x26, x25, [sp, #0x1a0]
001F3618 fc6f59a9 ldp      x28, x27, [sp, #0x190]
001F361C fd7b58a9 ldp      x29, x30, [sp, #0x180]
001F3620 ff830791 add      sp, sp, #0x1e0
001F3624 c0035fd6 ret      
001F3628 e03f40f9 ldr      x0, [sp, #0x78]
001F362C e10317aa mov      x1, x23
001F3630 e20315aa mov      x2, x21
001F3634 d9a20b94 bl       #0x4dc198
001F3638 1f000071 cmp      w0, #0
001F363C f3179f1a cset     w19, eq
001F3640 e03f40f9 ldr      x0, [sp, #0x78]
001F3644 00fcffb5 cbnz     x0, #0x1f35c4
001F3648 efffff17 b        #0x1f3604
~~~
### 0x1f3650 (436 bytes; 109 slots)
~~~asm
001F3650 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
001F3654 f90b00f9 str      x25, [sp, #0x10]
001F3658 f85f02a9 stp      x24, x23, [sp, #0x20]
001F365C f65703a9 stp      x22, x21, [sp, #0x30]
001F3660 f44f04a9 stp      x20, x19, [sp, #0x40]
001F3664 fd030091 mov      x29, sp
001F3668 08a440a9 ldp      x8, x9, [x0, #8]
001F366C f30301aa mov      x19, x1
001F3670 f50300aa mov      x21, x0
001F3674 1f0109eb cmp      x8, x9
001F3678 20010054 b.eq     #0x1f369c
001F367C f4031faa mov      x20, xzr
001F3680 0a0d40f9 ldr      x10, [x8, #0x18]
001F3684 08810091 add      x8, x8, #0x20
001F3688 1f0109eb cmp      x8, x9
001F368C 8a020a8b add      x10, x20, x10
001F3690 54110091 add      x20, x10, #4
001F3694 61ffff54 b.ne     #0x1f3680
001F3698 02000014 b        #0x1f36a0
001F369C f4031faa mov      x20, xzr
001F36A0 680240f9 ldr      x8, [x19]
001F36A4 e00313aa mov      x0, x19
001F36A8 080d40f9 ldr      x8, [x8, #0x18]
001F36AC 00013fd6 blr      x8
001F36B0 080040f9 ldr      x8, [x0]
001F36B4 f60300aa mov      x22, x0
001F36B8 081540f9 ldr      x8, [x8, #0x28]
001F36BC 00013fd6 blr      x8
001F36C0 080040f9 ldr      x8, [x0]
001F36C4 e10314aa mov      x1, x20
001F36C8 c20640f9 ldr      x2, [x22, #8]
001F36CC 080d40f9 ldr      x8, [x8, #0x18]
001F36D0 00013fd6 blr      x8
001F36D4 f403002a mov      w20, w0
001F36D8 80080036 tbz      w0, #0, #0x1f37e8
001F36DC b8e640a9 ldp      x24, x25, [x21, #8]
001F36E0 09000014 b        #0x1f3704
001F36E4 680240f9 ldr      x8, [x19]
001F36E8 e00313aa mov      x0, x19
001F36EC 080940f9 ldr      x8, [x8, #0x10]
001F36F0 00013fd6 blr      x8
001F36F4 080440f9 ldr      x8, [x0, #8]
001F36F8 18830091 add      x24, x24, #0x20
001F36FC 0801158b add      x8, x8, x21
001F3700 080400f9 str      x8, [x0, #8]
001F3704 1f0319eb cmp      x24, x25
001F3708 00070054 b.eq     #0x1f37e8
001F370C 080340b9 ldr      w8, [x24]
001F3710 e00313aa mov      x0, x19
001F3714 a81f00b9 str      w8, [x29, #0x1c]
001F3718 680240f9 ldr      x8, [x19]
001F371C 080940f9 ldr      x8, [x8, #0x10]
001F3720 00013fd6 blr      x8
001F3724 080040f9 ldr      x8, [x0]
001F3728 f50300aa mov      x21, x0
001F372C 081540f9 ldr      x8, [x8, #0x28]
001F3730 00013fd6 blr      x8
001F3734 080040f9 ldr      x8, [x0]
001F3738 81008052 mov      w1, #4
001F373C a20640f9 ldr      x2, [x21, #8]
001F3740 080d40f9 ldr      x8, [x8, #0x18]
001F3744 00013fd6 blr      x8
001F3748 00010036 tbz      w0, #0, #0x1f3768
001F374C a80240f9 ldr      x8, [x21]
001F3750 a1730091 add      x1, x29, #0x1c
001F3754 e00315aa mov      x0, x21
001F3758 82008052 mov      w2, #4
001F375C e3031faa mov      x3, xzr
001F3760 080d40f9 ldr      x8, [x8, #0x18]
001F3764 00013fd6 blr      x8
001F3768 680240f9 ldr      x8, [x19]
001F376C e00313aa mov      x0, x19
001F3770 080940f9 ldr      x8, [x8, #0x10]
001F3774 00013fd6 blr      x8
001F3778 080440f9 ldr      x8, [x0, #8]
001F377C 08110091 add      x8, x8, #4
001F3780 080400f9 str      x8, [x0, #8]
001F3784 e00313aa mov      x0, x19
001F3788 680240f9 ldr      x8, [x19]
001F378C 160740f9 ldr      x22, [x24, #8]
001F3790 150f40f9 ldr      x21, [x24, #0x18]
001F3794 080940f9 ldr      x8, [x8, #0x10]
001F3798 00013fd6 blr      x8
001F379C 56faffb4 cbz      x22, #0x1f36e4
001F37A0 080040f9 ldr      x8, [x0]
001F37A4 f70300aa mov      x23, x0
001F37A8 081540f9 ldr      x8, [x8, #0x28]
001F37AC 00013fd6 blr      x8
001F37B0 080040f9 ldr      x8, [x0]
001F37B4 e10315aa mov      x1, x21
001F37B8 e20640f9 ldr      x2, [x23, #8]
001F37BC 080d40f9 ldr      x8, [x8, #0x18]
001F37C0 00013fd6 blr      x8
001F37C4 00f90736 tbz      w0, #0, #0x1f36e4
001F37C8 e80240f9 ldr      x8, [x23]
001F37CC e00317aa mov      x0, x23
001F37D0 e10316aa mov      x1, x22
001F37D4 e20315aa mov      x2, x21
001F37D8 e3031faa mov      x3, xzr
001F37DC 080d40f9 ldr      x8, [x8, #0x18]
001F37E0 00013fd6 blr      x8
001F37E4 c0ffff17 b        #0x1f36e4
001F37E8 80020012 and      w0, w20, #1
001F37EC f44f44a9 ldp      x20, x19, [sp, #0x40]
001F37F0 f65743a9 ldp      x22, x21, [sp, #0x30]
001F37F4 f90b40f9 ldr      x25, [sp, #0x10]
001F37F8 f85f42a9 ldp      x24, x23, [sp, #0x20]
001F37FC fd7bc5a8 ldp      x29, x30, [sp], #0x50
001F3800 c0035fd6 ret      
~~~
### 0x1f3ef8 (292 bytes; 73 slots)
~~~asm
001F3EF8 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
001F3EFC f85f01a9 stp      x24, x23, [sp, #0x10]
001F3F00 f65702a9 stp      x22, x21, [sp, #0x20]
001F3F04 f44f03a9 stp      x20, x19, [sp, #0x30]
001F3F08 fd030091 mov      x29, sp
001F3F0C f30300aa mov      x19, x0
001F3F10 004840f9 ldr      x0, [x0, #0x90]
001F3F14 f50303aa mov      x21, x3
001F3F18 f60302aa mov      x22, x2
001F3F1C f40301aa mov      x20, x1
001F3F20 600000b4 cbz      x0, #0x1f3f2c
001F3F24 7e2e0094 bl       #0x1ff91c
001F3F28 e0060036 tbz      w0, #0, #0x1f4004
001F3F2C 48d03bd5 mrs      x8, tpidr_el0
001F3F30 18c97392 and      x24, x8, #0xffffffffffffe000
001F3F34 084f40f9 ldr      x8, [x24, #0x98]
001F3F38 1f4100f1 cmp      x8, #0x10
001F3F3C e0060054 b.eq     #0x1f4018
001F3F40 080f088b add      x8, x24, x8, lsl #3
001F3F44 e00314aa mov      x0, x20
001F3F48 017c8052 mov      w1, #0x3e0
001F3F4C 02028052 mov      w2, #0x10
001F3F50 140d00f9 str      x20, [x8, #0x18]
001F3F54 084f40f9 ldr      x8, [x24, #0x98]
001F3F58 08050091 add      x8, x8, #1
001F3F5C 084f00f9 str      x8, [x24, #0x98]
001F3F60 880240f9 ldr      x8, [x20]
001F3F64 080940f9 ldr      x8, [x8, #0x10]
001F3F68 00013fd6 blr      x8
001F3F6C f70300aa mov      x23, x0
001F3F70 a00000b5 cbnz     x0, #0x1f3f84
001F3F74 880240f9 ldr      x8, [x20]
001F3F78 e00314aa mov      x0, x20
001F3F7C 085d40f9 ldr      x8, [x8, #0xb8]
001F3F80 00013fd6 blr      x8
001F3F84 e00317aa mov      x0, x23
001F3F88 e10313aa mov      x1, x19
001F3F8C e20316aa mov      x2, x22
001F3F90 e30315aa mov      x3, x21
001F3F94 d52d0094 bl       #0x1ff6e8
001F3F98 087c8052 mov      w8, #0x3e0
001F3F9C 09028052 mov      w9, #0x10
001F3FA0 e00317aa mov      x0, x23
001F3FA4 f4de00a9 stp      x20, x23, [x23, #8]
001F3FA8 e8a601a9 stp      x8, x9, [x23, #0x18]
001F3FAC 084f40f9 ldr      x8, [x24, #0x98]
001F3FB0 080500d1 sub      x8, x8, #1
001F3FB4 084f00f9 str      x8, [x24, #0x98]
001F3FB8 088c44f8 ldr      x8, [x0, #0x48]!
001F3FBC 080940f9 ldr      x8, [x8, #0x10]
001F3FC0 00013fd6 blr      x8
001F3FC4 604a40f9 ldr      x0, [x19, #0x90]
001F3FC8 800000b4 cbz      x0, #0x1f3fd8
001F3FCC 088c44f8 ldr      x8, [x0, #0x48]!
001F3FD0 080d40f9 ldr      x8, [x8, #0x18]
001F3FD4 00013fd6 blr      x8
001F3FD8 774a00f9 str      x23, [x19, #0x90]
001F3FDC e00317aa mov      x0, x23
001F3FE0 e12000f0 adrp     x1, #0x612000
001F3FE4 215c2491 add      x1, x1, #0x917
001F3FE8 f44f43a9 ldp      x20, x19, [sp, #0x30]
001F3FEC f65742a9 ldp      x22, x21, [sp, #0x20]
001F3FF0 02008012 mov      w2, #-1
001F3FF4 f85f41a9 ldp      x24, x23, [sp, #0x10]
001F3FF8 03028052 mov      w3, #0x10
001F3FFC fd7bc4a8 ldp      x29, x30, [sp], #0x40
001F4000 5bd20b14 b        #0x4e896c
001F4004 f44f43a9 ldp      x20, x19, [sp, #0x30]
001F4008 f65742a9 ldp      x22, x21, [sp, #0x20]
001F400C f85f41a9 ldp      x24, x23, [sp, #0x10]
001F4010 fd7bc4a8 ldp      x29, x30, [sp], #0x40
001F4014 c0035fd6 ret      
001F4018 fe3af897 bl       #0x2c10
~~~
### 0x1f401c (16 bytes; 4 slots)
~~~asm
001F401C 004840f9 ldr      x0, [x0, #0x90]
001F4020 400000b4 cbz      x0, #0x1f4028
001F4024 3a2e0014 b        #0x1ff90c
001F4028 c0035fd6 ret      
~~~
### 0x1f402c (16 bytes; 4 slots)
~~~asm
001F402C 004840f9 ldr      x0, [x0, #0x90]
001F4030 400000b4 cbz      x0, #0x1f4038
001F4034 282e0014 b        #0x1ff8d4
001F4038 c0035fd6 ret      
~~~
### 0x1f95a0 (468 bytes; 117 slots)
~~~asm
001F95A0 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
001F95A4 fd030091 mov      x29, sp
001F95A8 098c40f9 ldr      x9, [x0, #0x118]
001F95AC c90d00b4 cbz      x9, #0x1f9764
001F95B0 2afd41d3 lsr      x10, x9, #1
001F95B4 280040f9 ldr      x8, [x1]
001F95B8 4af10092 and      x10, x10, #0x5555555555555555
001F95BC 2a010acb sub      x10, x9, x10
001F95C0 4be50092 and      x11, x10, #0x3333333333333333
001F95C4 4afd42d3 lsr      x10, x10, #2
001F95C8 4ae50092 and      x10, x10, #0x3333333333333333
001F95CC 6a010a8b add      x10, x11, x10
001F95D0 ebc300b2 mov      x11, #0x101010101010101
001F95D4 4a114a8b add      x10, x10, x10, lsr #4
001F95D8 4acd0092 and      x10, x10, #0xf0f0f0f0f0f0f0f
001F95DC 4a7d0b9b mul      x10, x10, x11
001F95E0 4afd78d3 lsr      x10, x10, #0x38
001F95E4 5f0500f1 cmp      x10, #1
001F95E8 88000054 b.hi     #0x1f95f8
001F95EC 2b0500d1 sub      x11, x9, #1
001F95F0 6d01088a and      x13, x11, x8
001F95F4 06000014 b        #0x1f960c
001F95F8 1f0109eb cmp      x8, x9
001F95FC ed0308aa mov      x13, x8
001F9600 63000054 b.lo     #0x1f960c
001F9604 0b09c99a udiv     x11, x8, x9
001F9608 6da1099b msub     x13, x11, x9, x8
001F960C 0c8840f9 ldr      x12, [x0, #0x110]
001F9610 8b796df8 ldr      x11, [x12, x13, lsl #3]
001F9614 8b0a00b4 cbz      x11, #0x1f9764
001F9618 6e0140f9 ldr      x14, [x11]
001F961C 4e0a00b4 cbz      x14, #0x1f9764
001F9620 2b0500d1 sub      x11, x9, #1
001F9624 5f0900f1 cmp      x10, #2
001F9628 c2020054 b.hs     #0x1f9680
001F962C 06000014 b        #0x1f9644
001F9630 ef010b8a and      x15, x15, x11
001F9634 ff010deb cmp      x15, x13
001F9638 61090054 b.ne     #0x1f9764
001F963C ce0140f9 ldr      x14, [x14]
001F9640 2e0900b4 cbz      x14, #0x1f9764
001F9644 cf0540f9 ldr      x15, [x14, #8]
001F9648 1f010feb cmp      x8, x15
001F964C 21ffff54 b.ne     #0x1f9630
001F9650 cf0940f9 ldr      x15, [x14, #0x10]
001F9654 ff0108eb cmp      x15, x8
001F9658 21ffff54 b.ne     #0x1f963c
001F965C 5f0500f1 cmp      x10, #1
001F9660 a8020054 b.hi     #0x1f96b4
001F9664 6d01088a and      x13, x11, x8
001F9668 18000014 b        #0x1f96c8
001F966C 1f2003d5 nop      
001F9670 ff010deb cmp      x15, x13
001F9674 81070054 b.ne     #0x1f9764
001F9678 ce0140f9 ldr      x14, [x14]
001F967C 4e0700b4 cbz      x14, #0x1f9764
001F9680 cf0540f9 ldr      x15, [x14, #8]
001F9684 1f010feb cmp      x8, x15
001F9688 c1000054 b.ne     #0x1f96a0
001F968C cf0940f9 ldr      x15, [x14, #0x10]
001F9690 ff0108eb cmp      x15, x8
001F9694 21ffff54 b.ne     #0x1f9678
001F9698 f1ffff17 b        #0x1f965c
001F969C 1f2003d5 nop      
001F96A0 ff0109eb cmp      x15, x9
001F96A4 63feff54 b.lo     #0x1f9670
001F96A8 f009c99a udiv     x16, x15, x9
001F96AC 0fbe099b msub     x15, x16, x9, x15
001F96B0 f0ffff17 b        #0x1f9670
001F96B4 1f0109eb cmp      x8, x9
001F96B8 ed0308aa mov      x13, x8
001F96BC 63000054 b.lo     #0x1f96c8
001F96C0 0d09c99a udiv     x13, x8, x9
001F96C4 ada1099b msub     x13, x13, x9, x8
001F96C8 8c796df8 ldr      x12, [x12, x13, lsl #3]
001F96CC ec0400b4 cbz      x12, #0x1f9768
001F96D0 8c0140f9 ldr      x12, [x12]
001F96D4 ac0400b4 cbz      x12, #0x1f9768
001F96D8 5f0900f1 cmp      x10, #2
001F96DC a2020054 b.hs     #0x1f9730
001F96E0 06000014 b        #0x1f96f8
001F96E4 29010b8a and      x9, x9, x11
001F96E8 3f010deb cmp      x9, x13
001F96EC e1030054 b.ne     #0x1f9768
001F96F0 8c0140f9 ldr      x12, [x12]
001F96F4 ac0300b4 cbz      x12, #0x1f9768
001F96F8 890540f9 ldr      x9, [x12, #8]
001F96FC 1f0109eb cmp      x8, x9
001F9700 21ffff54 b.ne     #0x1f96e4
001F9704 890940f9 ldr      x9, [x12, #0x10]
001F9708 3f0108eb cmp      x9, x8
001F970C 21ffff54 b.ne     #0x1f96f0
001F9710 801940f9 ldr      x0, [x12, #0x30]
001F9714 fd7bc1a8 ldp      x29, x30, [sp], #0x10
001F9718 c0035fd6 ret      
001F971C 1f2003d5 nop      
001F9720 5f010deb cmp      x10, x13
001F9724 21020054 b.ne     #0x1f9768
001F9728 8c0140f9 ldr      x12, [x12]
001F972C ec0100b4 cbz      x12, #0x1f9768
001F9730 8a0540f9 ldr      x10, [x12, #8]
001F9734 1f010aeb cmp      x8, x10
001F9738 c1000054 b.ne     #0x1f9750
001F973C 8a0940f9 ldr      x10, [x12, #0x10]
001F9740 5f0108eb cmp      x10, x8
001F9744 21ffff54 b.ne     #0x1f9728
001F9748 f2ffff17 b        #0x1f9710
001F974C 1f2003d5 nop      
001F9750 5f0109eb cmp      x10, x9
001F9754 63feff54 b.lo     #0x1f9720
001F9758 4b09c99a udiv     x11, x10, x9
001F975C 6aa9099b msub     x10, x11, x9, x10
001F9760 f0ffff17 b        #0x1f9720
001F9764 f7f20f94 bl       #0x5f6340
001F9768 c0200090 adrp     x0, #0x611000
001F976C 00ac2f91 add      x0, x0, #0xbeb
001F9770 8482f897 bl       #0x1a180
~~~
### 0x1fa7e0 (428 bytes; 107 slots)
~~~asm
001FA7E0 ff4301d1 sub      sp, sp, #0x50
001FA7E4 fd7b02a9 stp      x29, x30, [sp, #0x20]
001FA7E8 f65703a9 stp      x22, x21, [sp, #0x30]
001FA7EC f44f04a9 stp      x20, x19, [sp, #0x40]
001FA7F0 fd830091 add      x29, sp, #0x20
001FA7F4 160440f9 ldr      x22, [x0, #8]
001FA7F8 f40300aa mov      x20, x0
001FA7FC e00301aa mov      x0, x1
001FA800 f50301aa mov      x21, x1
001FA804 f30308aa mov      x19, x8
001FA808 7e8b0b94 bl       #0x4dd600
001FA80C 222d00b0 adrp     x2, #0x79f000
001FA810 e303002a mov      w3, w0
001FA814 42d043f9 ldr      x2, [x2, #0x7a0]
001FA818 e0430091 add      x0, sp, #0x10
001FA81C 01028052 mov      w1, #0x10
001FA820 b4ef0f94 bl       #0x5f66f0
001FA824 e0430091 add      x0, sp, #0x10
001FA828 92ee0f94 bl       #0x5f6270
001FA82C e20300aa mov      x2, x0
001FA830 e1430091 add      x1, sp, #0x10
001FA834 e00316aa mov      x0, x22
001FA838 92ee0f94 bl       #0x5f6280
001FA83C a0030034 cbz      w0, #0x1fa8b0
001FA840 e00315aa mov      x0, x21
001FA844 6f8b0b94 bl       #0x4dd600
001FA848 1f040031 cmn      w0, #1
001FA84C e0060054 b.eq     #0x1fa928
001FA850 222d00b0 adrp     x2, #0x79f000
001FA854 e303002a mov      w3, w0
001FA858 42d043f9 ldr      x2, [x2, #0x7a0]
001FA85C e0430091 add      x0, sp, #0x10
001FA860 01028052 mov      w1, #0x10
001FA864 a3ef0f94 bl       #0x5f66f0
001FA868 e8230091 add      x8, sp, #8
001FA86C e0430091 add      x0, sp, #0x10
001FA870 e10314aa mov      x1, x20
001FA874 1386f997 bl       #0x5c0c0
001FA878 e1230091 add      x1, sp, #8
001FA87C e00313aa mov      x0, x19
001FA880 82008052 mov      w2, #4
001FA884 458a0b94 bl       #0x4dd198
001FA888 e00740f9 ldr      x0, [sp, #8]
001FA88C 800000b4 cbz      x0, #0x1fa89c
001FA890 088c44f8 ldr      x8, [x0, #0x48]!
001FA894 080d40f9 ldr      x8, [x8, #0x18]
001FA898 00013fd6 blr      x8
001FA89C f44f44a9 ldp      x20, x19, [sp, #0x40]
001FA8A0 f65743a9 ldp      x22, x21, [sp, #0x30]
001FA8A4 fd7b42a9 ldp      x29, x30, [sp, #0x20]
001FA8A8 ff430191 add      sp, sp, #0x50
001FA8AC c0035fd6 ret      
001FA8B0 810640f9 ldr      x1, [x20, #8]
001FA8B4 e00313aa mov      x0, x19
001FA8B8 c73df897 bl       #0x9fd4
001FA8BC 740240f9 ldr      x20, [x19]
001FA8C0 282d00b0 adrp     x8, #0x79f000
001FA8C4 89620191 add      x9, x20, #0x58
001FA8C8 08e542f9 ldr      x8, [x8, #0x5c8]
001FA8CC 9f0200f1 cmp      x20, #0
001FA8D0 8a820191 add      x10, x20, #0x60
001FA8D4 0801899a csel     x8, x8, x9, eq
001FA8D8 292d00b0 adrp     x9, #0x79f000
001FA8DC 080140f9 ldr      x8, [x8]
001FA8E0 29e942f9 ldr      x9, [x9, #0x5d0]
001FA8E4 29018a9a csel     x9, x9, x10, eq
001FA8E8 290140f9 ldr      x9, [x9]
001FA8EC d40300b4 cbz      x20, #0x1fa964
001FA8F0 8a3640f9 ldr      x10, [x20, #0x68]
001FA8F4 68a600a9 stp      x8, x9, [x19, #8]
001FA8F8 e00314aa mov      x0, x20
001FA8FC 6afe01a9 stp      x10, xzr, [x19, #0x18]
001FA900 088c44f8 ldr      x8, [x0, #0x48]!
001FA904 080940f9 ldr      x8, [x8, #0x10]
001FA908 00013fd6 blr      x8
001FA90C 601240f9 ldr      x0, [x19, #0x20]
001FA910 741200f9 str      x20, [x19, #0x20]
001FA914 c00200b4 cbz      x0, #0x1fa96c
001FA918 088c44f8 ldr      x8, [x0, #0x48]!
001FA91C 080d40f9 ldr      x8, [x8, #0x18]
001FA920 00013fd6 blr      x8
001FA924 12000014 b        #0x1fa96c
001FA928 a8c884d2 mov      x8, #0x2645
001FA92C 4884b0f2 movk     x8, #0x8422, lsl #16
001FA930 7f1200f9 str      xzr, [x19, #0x20]
001FA934 889cd3f2 movk     x8, #0x9ce4, lsl #32
001FA938 487ef9f2 movk     x8, #0xcbf2, lsl #48
001FA93C 7f2a00b9 str      wzr, [x19, #0x28]
001FA940 a92000b0 adrp     x9, #0x60f000
001FA944 290d1a91 add      x9, x9, #0x683
001FA948 7f2200a9 stp      xzr, x8, [x19]
001FA94C 697e01a9 stp      x9, xzr, [x19, #0x10]
001FA950 f44f44a9 ldp      x20, x19, [sp, #0x40]
001FA954 f65743a9 ldp      x22, x21, [sp, #0x30]
001FA958 fd7b42a9 ldp      x29, x30, [sp, #0x20]
001FA95C ff430191 add      sp, sp, #0x50
001FA960 c0035fd6 ret      
001FA964 68a600a9 stp      x8, x9, [x19, #8]
001FA968 7ffe01a9 stp      xzr, xzr, [x19, #0x18]
001FA96C 88008052 mov      w8, #4
001FA970 e00313aa mov      x0, x19
001FA974 682a00b9 str      w8, [x19, #0x28]
001FA978 f44f44a9 ldp      x20, x19, [sp, #0x40]
001FA97C f65743a9 ldp      x22, x21, [sp, #0x30]
001FA980 fd7b42a9 ldp      x29, x30, [sp, #0x20]
001FA984 ff430191 add      sp, sp, #0x50
001FA988 424af817 b        #0xd290
~~~
### 0x1fb8b8 (992 bytes; 248 slots)
~~~asm
001FB8B8 ffc303d1 sub      sp, sp, #0xf0
001FB8BC fd7b09a9 stp      x29, x30, [sp, #0x90]
001FB8C0 fc6f0aa9 stp      x28, x27, [sp, #0xa0]
001FB8C4 fa670ba9 stp      x26, x25, [sp, #0xb0]
001FB8C8 f85f0ca9 stp      x24, x23, [sp, #0xc0]
001FB8CC f6570da9 stp      x22, x21, [sp, #0xd0]
001FB8D0 f44f0ea9 stp      x20, x19, [sp, #0xe0]
001FB8D4 fd430291 add      x29, sp, #0x90
001FB8D8 280040f9 ldr      x8, [x1]
001FB8DC 2ac09bd2 mov      x10, #0xde01
001FB8E0 6a77bef2 movk     x10, #0xf3bb, lsl #16
001FB8E4 130040f9 ldr      x19, [x0]
001FB8E8 8a5ac1f2 movk     x10, #0xad4, lsl #32
001FB8EC eac2e5f2 movk     x10, #0x2e17, lsl #48
001FB8F0 69ec83d2 mov      x9, #0x1f63
001FB8F4 29debaf2 movk     x9, #0xd6f1, lsl #16
001FB8F8 1bbd9ed2 mov      x27, #0xf5e8
001FB8FC dbcbadf2 movk     x27, #0x6e5e, lsl #16
001FB900 bac884d2 mov      x26, #0x2645
001FB904 5a84b0f2 movk     x26, #0x8422, lsl #16
001FB908 1f010aeb cmp      x8, x10
001FB90C a9d9def2 movk     x9, #0xf6cd, lsl #32
001FB910 89f9f6f2 movk     x9, #0xb7cc, lsl #48
001FB914 3b53cff2 movk     x27, #0x7a99, lsl #32
001FB918 1b9afcf2 movk     x27, #0xe4d0, lsl #48
001FB91C 9a9cd3f2 movk     x26, #0x9ce4, lsl #32
001FB920 5a7ef9f2 movk     x26, #0xcbf2, lsl #48
001FB924 041149fa ccmp     x8, x9, #4, ne
001FB928 b9200090 adrp     x25, #0x60f000
001FB92C 390f1a91 add      x25, x25, #0x683
001FB930 410d0054 b.ne     #0x1fbad8
001FB934 392d00f0 adrp     x25, #0x7a2000
001FB938 a88300d1 sub      x8, x29, #0x20
001FB93C 394743f9 ldr      x25, [x25, #0x688]
001FB940 f40301aa mov      x20, x1
001FB944 e00319aa mov      x0, x25
001FB948 4db60b94 bl       #0x4e927c
001FB94C a18300d1 sub      x1, x29, #0x20
001FB950 e00313aa mov      x0, x19
001FB954 13f7ff97 bl       #0x1f95a0
001FB958 760640f9 ldr      x22, [x19, #8]
001FB95C f50300aa mov      x21, x0
001FB960 e8830091 add      x8, sp, #0x20
001FB964 e00319aa mov      x0, x25
001FB968 77a20291 add      x23, x19, #0xa8
001FB96C 78020391 add      x24, x19, #0xc0
001FB970 43b60b94 bl       #0x4e927c
001FB974 e81340f9 ldr      x8, [sp, #0x20]
001FB978 fc031baa mov      x28, x27
001FB97C 1f011beb cmp      x8, x27
001FB980 e1000054 b.ne     #0x1fb99c
001FB984 c02000d0 adrp     x0, #0x615000
001FB988 00040491 add      x0, x0, #0x101
001FB98C e8030191 add      x8, sp, #0x40
001FB990 e10318aa mov      x1, x24
001FB994 8820ff97 bl       #0x1c3bb4
001FB998 05000014 b        #0x1fb9ac
001FB99C e8030191 add      x8, sp, #0x40
001FB9A0 e0830091 add      x0, sp, #0x20
001FB9A4 e10318aa mov      x1, x24
001FB9A8 8efbff97 bl       #0x1fa7e0
001FB9AC e3030191 add      x3, sp, #0x40
001FB9B0 e00315aa mov      x0, x21
001FB9B4 e10316aa mov      x1, x22
001FB9B8 e20317aa mov      x2, x23
001FB9BC 4fe1ff97 bl       #0x1f3ef8
001FB9C0 e82f40f9 ldr      x8, [sp, #0x58]
001FB9C4 b9200090 adrp     x25, #0x60f000
001FB9C8 390f1a91 add      x25, x25, #0x683
001FB9CC c80000b4 cbz      x8, #0x1fb9e4
001FB9D0 e02340f9 ldr      x0, [sp, #0x40]
001FB9D4 800000b4 cbz      x0, #0x1fb9e4
001FB9D8 088c44f8 ldr      x8, [x0, #0x48]!
001FB9DC 080d40f9 ldr      x8, [x8, #0x18]
001FB9E0 00013fd6 blr      x8
001FB9E4 e03340f9 ldr      x0, [sp, #0x60]
001FB9E8 fb031caa mov      x27, x28
001FB9EC ff6b04a9 stp      xzr, x26, [sp, #0x40]
001FB9F0 f97f05a9 stp      x25, xzr, [sp, #0x50]
001FB9F4 800000b4 cbz      x0, #0x1fba04
001FB9F8 088c44f8 ldr      x8, [x0, #0x48]!
001FB9FC 080d40f9 ldr      x8, [x8, #0x18]
001FBA00 00013fd6 blr      x8
001FBA04 e01f40f9 ldr      x0, [sp, #0x38]
001FBA08 ff3300f9 str      xzr, [sp, #0x60]
001FBA0C ff6b00b9 str      wzr, [sp, #0x68]
001FBA10 800000b4 cbz      x0, #0x1fba20
001FBA14 088c44f8 ldr      x8, [x0, #0x48]!
001FBA18 080d40f9 ldr      x8, [x8, #0x18]
001FBA1C 00013fd6 blr      x8
001FBA20 a0835ff8 ldur     x0, [x29, #-8]
001FBA24 800000b4 cbz      x0, #0x1fba34
001FBA28 088c44f8 ldr      x8, [x0, #0x48]!
001FBA2C 080d40f9 ldr      x8, [x8, #0x18]
001FBA30 00013fd6 blr      x8
001FBA34 202d00f0 adrp     x0, #0x7a2000
001FBA38 e8030191 add      x8, sp, #0x40
001FBA3C 004443f9 ldr      x0, [x0, #0x688]
001FBA40 0fb60b94 bl       #0x4e927c
001FBA44 e1030191 add      x1, sp, #0x40
001FBA48 e00313aa mov      x0, x19
001FBA4C d5f6ff97 bl       #0x1f95a0
001FBA50 73e1ff97 bl       #0x1f401c
001FBA54 e02f40f9 ldr      x0, [sp, #0x58]
001FBA58 800000b4 cbz      x0, #0x1fba68
001FBA5C 088c44f8 ldr      x8, [x0, #0x48]!
001FBA60 080d40f9 ldr      x8, [x8, #0x18]
001FBA64 00013fd6 blr      x8
001FBA68 202d00f0 adrp     x0, #0x7a2000
001FBA6C e8030191 add      x8, sp, #0x40
001FBA70 004443f9 ldr      x0, [x0, #0x688]
001FBA74 02b60b94 bl       #0x4e927c
001FBA78 e1030191 add      x1, sp, #0x40
001FBA7C e00313aa mov      x0, x19
001FBA80 c8f6ff97 bl       #0x1f95a0
001FBA84 6ae1ff97 bl       #0x1f402c
001FBA88 75220791 add      x21, x19, #0x1c8
001FBA8C a0031eb8 stur     w0, [x29, #-0x20]
001FBA90 e00315aa mov      x0, x21
001FBA94 efea0f94 bl       #0x5f6650
001FBA98 60d640f9 ldr      x0, [x19, #0x1a8]
001FBA9C 600000b4 cbz      x0, #0x1fbaa8
001FBAA0 a18300d1 sub      x1, x29, #0x20
001FBAA4 000e0094 bl       #0x1ff2a4
001FBAA8 e00315aa mov      x0, x21
001FBAAC edea0f94 bl       #0x5f6660
001FBAB0 e02f40f9 ldr      x0, [sp, #0x58]
001FBAB4 800000b4 cbz      x0, #0x1fbac4
001FBAB8 088c44f8 ldr      x8, [x0, #0x48]!
001FBABC 080d40f9 ldr      x8, [x8, #0x18]
001FBAC0 00013fd6 blr      x8
001FBAC4 880240f9 ldr      x8, [x20]
001FBAC8 2ac09bd2 mov      x10, #0xde01
001FBACC 6a77bef2 movk     x10, #0xf3bb, lsl #16
001FBAD0 8a5ac1f2 movk     x10, #0xad4, lsl #32
001FBAD4 eac2e5f2 movk     x10, #0x2e17, lsl #48
001FBAD8 1f010aeb cmp      x8, x10
001FBADC e0000054 b.eq     #0x1fbaf8
001FBAE0 89d785d2 mov      x9, #0x2ebc
001FBAE4 49a0abf2 movk     x9, #0x5d02, lsl #16
001FBAE8 49b5d2f2 movk     x9, #0x95aa, lsl #32
001FBAEC 0938f4f2 movk     x9, #0xa1c0, lsl #48
001FBAF0 1f0109eb cmp      x8, x9
001FBAF4 210c0054 b.ne     #0x1fbc78
001FBAF8 c82000d0 adrp     x8, #0x615000
001FBAFC 08050491 add      x8, x8, #0x101
001FBB00 e0230091 add      x0, sp, #8
001FBB04 fba300a9 stp      x27, x8, [sp, #8]
001FBB08 88008052 mov      w8, #4
001FBB0C e80f00f9 str      x8, [sp, #0x18]
001FBB10 a88300d1 sub      x8, x29, #0x20
001FBB14 dab50b94 bl       #0x4e927c
001FBB18 a18300d1 sub      x1, x29, #0x20
001FBB1C e00313aa mov      x0, x19
001FBB20 a0f6ff97 bl       #0x1f95a0
001FBB24 750640f9 ldr      x21, [x19, #8]
001FBB28 f40300aa mov      x20, x0
001FBB2C e8830091 add      x8, sp, #0x20
001FBB30 e0230091 add      x0, sp, #8
001FBB34 76a20291 add      x22, x19, #0xa8
001FBB38 77020391 add      x23, x19, #0xc0
001FBB3C d0b50b94 bl       #0x4e927c
001FBB40 e81340f9 ldr      x8, [sp, #0x20]
001FBB44 1f011beb cmp      x8, x27
001FBB48 e1000054 b.ne     #0x1fbb64
001FBB4C c02000d0 adrp     x0, #0x615000
001FBB50 00dc3d91 add      x0, x0, #0xf77
001FBB54 e8030191 add      x8, sp, #0x40
001FBB58 e10317aa mov      x1, x23
001FBB5C ac1fff97 bl       #0x1c3a0c
001FBB60 05000014 b        #0x1fbb74
001FBB64 e8030191 add      x8, sp, #0x40
001FBB68 e0830091 add      x0, sp, #0x20
001FBB6C e10317aa mov      x1, x23
001FBB70 1cfbff97 bl       #0x1fa7e0
001FBB74 e3030191 add      x3, sp, #0x40
001FBB78 e00314aa mov      x0, x20
001FBB7C e10315aa mov      x1, x21
001FBB80 e20316aa mov      x2, x22
001FBB84 dde0ff97 bl       #0x1f3ef8
001FBB88 e82f40f9 ldr      x8, [sp, #0x58]
001FBB8C c80000b4 cbz      x8, #0x1fbba4
001FBB90 e02340f9 ldr      x0, [sp, #0x40]
001FBB94 800000b4 cbz      x0, #0x1fbba4
001FBB98 088c44f8 ldr      x8, [x0, #0x48]!
001FBB9C 080d40f9 ldr      x8, [x8, #0x18]
001FBBA0 00013fd6 blr      x8
001FBBA4 e03340f9 ldr      x0, [sp, #0x60]
001FBBA8 ff6b04a9 stp      xzr, x26, [sp, #0x40]
001FBBAC f97f05a9 stp      x25, xzr, [sp, #0x50]
001FBBB0 800000b4 cbz      x0, #0x1fbbc0
001FBBB4 088c44f8 ldr      x8, [x0, #0x48]!
001FBBB8 080d40f9 ldr      x8, [x8, #0x18]
001FBBBC 00013fd6 blr      x8
001FBBC0 e01f40f9 ldr      x0, [sp, #0x38]
001FBBC4 ff3300f9 str      xzr, [sp, #0x60]
001FBBC8 ff6b00b9 str      wzr, [sp, #0x68]
001FBBCC 800000b4 cbz      x0, #0x1fbbdc
001FBBD0 088c44f8 ldr      x8, [x0, #0x48]!
001FBBD4 080d40f9 ldr      x8, [x8, #0x18]
001FBBD8 00013fd6 blr      x8
001FBBDC a0835ff8 ldur     x0, [x29, #-8]
001FBBE0 800000b4 cbz      x0, #0x1fbbf0
001FBBE4 088c44f8 ldr      x8, [x0, #0x48]!
001FBBE8 080d40f9 ldr      x8, [x8, #0x18]
001FBBEC 00013fd6 blr      x8
001FBBF0 e8030191 add      x8, sp, #0x40
001FBBF4 e0230091 add      x0, sp, #8
001FBBF8 a1b50b94 bl       #0x4e927c
001FBBFC e1030191 add      x1, sp, #0x40
001FBC00 e00313aa mov      x0, x19
001FBC04 67f6ff97 bl       #0x1f95a0
001FBC08 05e1ff97 bl       #0x1f401c
001FBC0C e02f40f9 ldr      x0, [sp, #0x58]
001FBC10 800000b4 cbz      x0, #0x1fbc20
001FBC14 088c44f8 ldr      x8, [x0, #0x48]!
001FBC18 080d40f9 ldr      x8, [x8, #0x18]
001FBC1C 00013fd6 blr      x8
001FBC20 e8030191 add      x8, sp, #0x40
001FBC24 e0230091 add      x0, sp, #8
001FBC28 95b50b94 bl       #0x4e927c
001FBC2C e1030191 add      x1, sp, #0x40
001FBC30 e00313aa mov      x0, x19
001FBC34 5bf6ff97 bl       #0x1f95a0
001FBC38 fde0ff97 bl       #0x1f402c
001FBC3C 74220791 add      x20, x19, #0x1c8
001FBC40 a0031eb8 stur     w0, [x29, #-0x20]
001FBC44 e00314aa mov      x0, x20
001FBC48 82ea0f94 bl       #0x5f6650
001FBC4C 60d640f9 ldr      x0, [x19, #0x1a8]
001FBC50 600000b4 cbz      x0, #0x1fbc5c
001FBC54 a18300d1 sub      x1, x29, #0x20
001FBC58 930d0094 bl       #0x1ff2a4
001FBC5C e00314aa mov      x0, x20
001FBC60 80ea0f94 bl       #0x5f6660
001FBC64 e02f40f9 ldr      x0, [sp, #0x58]
001FBC68 800000b4 cbz      x0, #0x1fbc78
001FBC6C 088c44f8 ldr      x8, [x0, #0x48]!
001FBC70 080d40f9 ldr      x8, [x8, #0x18]
001FBC74 00013fd6 blr      x8
001FBC78 f44f4ea9 ldp      x20, x19, [sp, #0xe0]
001FBC7C f6574da9 ldp      x22, x21, [sp, #0xd0]
001FBC80 f85f4ca9 ldp      x24, x23, [sp, #0xc0]
001FBC84 fa674ba9 ldp      x26, x25, [sp, #0xb0]
001FBC88 fc6f4aa9 ldp      x28, x27, [sp, #0xa0]
001FBC8C fd7b49a9 ldp      x29, x30, [sp, #0x90]
001FBC90 ffc30391 add      sp, sp, #0xf0
001FBC94 c0035fd6 ret      
~~~
### 0x1ff2a4 (28 bytes; 7 slots)
~~~asm
001FF2A4 081040f9 ldr      x8, [x0, #0x20]
001FF2A8 290040b9 ldr      w9, [x1]
001FF2AC 0a0944b9 ldr      w10, [x8, #0x408]
001FF2B0 3f010a6b cmp      w9, w10
001FF2B4 29c18a1a csel     w9, w9, w10, gt
001FF2B8 090904b9 str      w9, [x8, #0x408]
001FF2BC c0035fd6 ret      
~~~
### 0x1ff6e8 (492 bytes; 123 slots)
~~~asm
001FF6E8 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001FF6EC f65701a9 stp      x22, x21, [sp, #0x10]
001FF6F0 f44f02a9 stp      x20, x19, [sp, #0x20]
001FF6F4 fd030091 mov      x29, sp
001FF6F8 f60301aa mov      x22, x1
001FF6FC 4100a052 mov      w1, #0x20000
001FF700 f40303aa mov      x20, x3
001FF704 f50302aa mov      x21, x2
001FF708 f30300aa mov      x19, x0
001FF70C caa30b94 bl       #0x4e8634
001FF710 e82b00b0 adrp     x8, #0x77c000
001FF714 08e11f91 add      x8, x8, #0x7f8
001FF718 76ba01f9 str      x22, [x19, #0x370]
001FF71C 75be01f9 str      x21, [x19, #0x378]
001FF720 09410091 add      x9, x8, #0x10
001FF724 7fc201f9 str      xzr, [x19, #0x380]
001FF728 7fce01f9 str      xzr, [x19, #0x398]
001FF72C 7fd201f9 str      xzr, [x19, #0x3a0]
001FF730 7faa03b9 str      wzr, [x19, #0x3a8]
001FF734 690200f9 str      x9, [x19]
001FF738 09210291 add      x9, x8, #0x88
001FF73C 08e10291 add      x8, x8, #0xb8
001FF740 682e00f9 str      x8, [x19, #0x58]
001FF744 a8c884d2 mov      x8, #0x2645
001FF748 4884b0f2 movk     x8, #0x8422, lsl #16
001FF74C 889cd3f2 movk     x8, #0x9ce4, lsl #32
001FF750 487ef9f2 movk     x8, #0xcbf2, lsl #48
001FF754 692600f9 str      x9, [x19, #0x48]
001FF758 68c601f9 str      x8, [x19, #0x388]
001FF75C 88200090 adrp     x8, #0x60f000
001FF760 080d1a91 add      x8, x8, #0x683
001FF764 68ca01f9 str      x8, [x19, #0x390]
001FF768 880640f9 ldr      x8, [x20, #8]
001FF76C 68c601f9 str      x8, [x19, #0x388]
001FF770 880a40f9 ldr      x8, [x20, #0x10]
001FF774 68ca01f9 str      x8, [x19, #0x390]
001FF778 880e40f9 ldr      x8, [x20, #0x18]
001FF77C 68ce01f9 str      x8, [x19, #0x398]
001FF780 951240f9 ldr      x21, [x20, #0x20]
001FF784 950300b4 cbz      x21, #0x1ff7f4
001FF788 e00315aa mov      x0, x21
001FF78C 088c44f8 ldr      x8, [x0, #0x48]!
001FF790 080940f9 ldr      x8, [x8, #0x10]
001FF794 00013fd6 blr      x8
001FF798 60d241f9 ldr      x0, [x19, #0x3a0]
001FF79C 75d201f9 str      x21, [x19, #0x3a0]
001FF7A0 800000b4 cbz      x0, #0x1ff7b0
001FF7A4 088c44f8 ldr      x8, [x0, #0x48]!
001FF7A8 080d40f9 ldr      x8, [x8, #0x18]
001FF7AC 00013fd6 blr      x8
001FF7B0 882a40b9 ldr      w8, [x20, #0x28]
001FF7B4 68aa03b9 str      w8, [x19, #0x3a8]
001FF7B8 880e40f9 ldr      x8, [x20, #0x18]
001FF7BC 680200b4 cbz      x8, #0x1ff808
001FF7C0 940240f9 ldr      x20, [x20]
001FF7C4 b40000b4 cbz      x20, #0x1ff7d8
001FF7C8 e00314aa mov      x0, x20
001FF7CC 088c44f8 ldr      x8, [x0, #0x48]!
001FF7D0 080940f9 ldr      x8, [x8, #0x10]
001FF7D4 00013fd6 blr      x8
001FF7D8 60c241f9 ldr      x0, [x19, #0x380]
001FF7DC 74c201f9 str      x20, [x19, #0x380]
001FF7E0 800100b4 cbz      x0, #0x1ff810
001FF7E4 088c44f8 ldr      x8, [x0, #0x48]!
001FF7E8 080d40f9 ldr      x8, [x8, #0x18]
001FF7EC 00013fd6 blr      x8
001FF7F0 08000014 b        #0x1ff810
001FF7F4 7fd201f9 str      xzr, [x19, #0x3a0]
001FF7F8 882a40b9 ldr      w8, [x20, #0x28]
001FF7FC 68aa03b9 str      w8, [x19, #0x3a8]
001FF800 880e40f9 ldr      x8, [x20, #0x18]
001FF804 e8fdffb5 cbnz     x8, #0x1ff7c0
001FF808 880240f9 ldr      x8, [x20]
001FF80C 68c201f9 str      x8, [x19, #0x380]
001FF810 28008052 mov      w8, #1
001FF814 60e20e91 add      x0, x19, #0x3b8
001FF818 68b203b9 str      w8, [x19, #0x3b0]
001FF81C e1031f2a mov      w1, wzr
001FF820 e2031f2a mov      w2, wzr
001FF824 9fda0f94 bl       #0x5f62a0
001FF828 48d03bd5 mrs      x8, tpidr_el0
001FF82C 16c97392 and      x22, x8, #0xffffffffffffe000
001FF830 c84e40f9 ldr      x8, [x22, #0x98]
001FF834 1f4100f1 cmp      x8, #0x10
001FF838 c0040054 b.eq     #0x1ff8d0
001FF83C 740640f9 ldr      x20, [x19, #8]
001FF840 c80e088b add      x8, x22, x8, lsl #3
001FF844 01128052 mov      w1, #0x90
001FF848 02018052 mov      w2, #8
001FF84C 140d00f9 str      x20, [x8, #0x18]
001FF850 e00314aa mov      x0, x20
001FF854 c84e40f9 ldr      x8, [x22, #0x98]
001FF858 08050091 add      x8, x8, #1
001FF85C c84e00f9 str      x8, [x22, #0x98]
001FF860 880240f9 ldr      x8, [x20]
001FF864 080940f9 ldr      x8, [x8, #0x10]
001FF868 00013fd6 blr      x8
001FF86C f50300aa mov      x21, x0
001FF870 a00000b5 cbnz     x0, #0x1ff884
001FF874 880240f9 ldr      x8, [x20]
001FF878 e00314aa mov      x0, x20
001FF87C 085d40f9 ldr      x8, [x8, #0xb8]
001FF880 00013fd6 blr      x8
001FF884 e00315aa mov      x0, x21
001FF888 e1031f2a mov      w1, wzr
001FF88C e2031f2a mov      w2, wzr
001FF890 99890b94 bl       #0x4e1ef4
001FF894 08128052 mov      w8, #0x90
001FF898 09018052 mov      w9, #8
001FF89C 75ee01f9 str      x21, [x19, #0x3d8]
001FF8A0 b4d600a9 stp      x20, x21, [x21, #8]
001FF8A4 f44f42a9 ldp      x20, x19, [sp, #0x20]
001FF8A8 a8a601a9 stp      x8, x9, [x21, #0x18]
001FF8AC c84e40f9 ldr      x8, [x22, #0x98]
001FF8B0 080500d1 sub      x8, x8, #1
001FF8B4 c84e00f9 str      x8, [x22, #0x98]
001FF8B8 a88e44f8 ldr      x8, [x21, #0x48]!
001FF8BC e00315aa mov      x0, x21
001FF8C0 f65741a9 ldp      x22, x21, [sp, #0x10]
001FF8C4 010940f9 ldr      x1, [x8, #0x10]
001FF8C8 fd7bc3a8 ldp      x29, x30, [sp], #0x30
001FF8CC 20001fd6 br       x1
001FF8D0 d00cf897 bl       #0x2c10
~~~
### 0x1ff91c (20 bytes; 5 slots)
~~~asm
001FF91C 00ec41f9 ldr      x0, [x0, #0x3d8]
001FF920 400000b4 cbz      x0, #0x1ff928
001FF924 96890b14 b        #0x4e1f7c
001FF928 20008052 mov      w0, #1
001FF92C c0035fd6 ret      
~~~
### 0x1ff930 (448 bytes; 112 slots)
~~~asm
001FF930 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
001FF934 f90b00f9 str      x25, [sp, #0x10]
001FF938 f85f02a9 stp      x24, x23, [sp, #0x20]
001FF93C f65703a9 stp      x22, x21, [sp, #0x30]
001FF940 f44f04a9 stp      x20, x19, [sp, #0x40]
001FF944 fd030091 mov      x29, sp
001FF948 14bc41f9 ldr      x20, [x0, #0x378]
001FF94C ea098052 mov      w10, #0x4f
001FF950 f30300aa mov      x19, x0
001FF954 15b841f9 ldr      x21, [x0, #0x370]
001FF958 880a4039 ldrb     w8, [x20, #2]
001FF95C 1f3d0171 cmp      w8, #0x4f
001FF960 49d03bd5 mrs      x9, tpidr_el0
001FF964 5735490a and      w23, w10, w9, lsr #13
001FF968 0011577a ccmp     w8, w23, #0, ne
001FF96C f6179f1a cset     w22, eq
001FF970 21010054 b.ne     #0x1ff994
001FF974 88220091 add      x8, x20, #8
001FF978 62020e91 add      x2, x19, #0x380
001FF97C 01fddfc8 ldar     x1, [x8]
001FF980 e00315aa mov      x0, x21
001FF984 67ceff97 bl       #0x1f3320
001FF988 60080036 tbz      w0, #0, #0x1ffa94
001FF98C 55008052 mov      w21, #2
001FF990 42000014 b        #0x1ffa98
001FF994 980a0091 add      x24, x20, #2
001FF998 1f2003d5 nop      
001FF99C 1f2003d5 nop      
001FF9A0 08ff5f08 ldaxrb   w8, [x24]
001FF9A4 1f3d0171 cmp      w8, #0x4f
001FF9A8 41010054 b.ne     #0x1ff9d0
001FF9AC 177f0808 stxrb    w8, w23, [x24]
001FF9B0 88ffff35 cbnz     w8, #0x1ff9a0
001FF9B4 88220091 add      x8, x20, #8
001FF9B8 62020e91 add      x2, x19, #0x380
001FF9BC 01fddfc8 ldar     x1, [x8]
001FF9C0 e00315aa mov      x0, x21
001FF9C4 57ceff97 bl       #0x1f3320
001FF9C8 f503002a mov      w21, w0
001FF9CC 25000014 b        #0x1ffa60
001FF9D0 990e0091 add      x25, x20, #3
001FF9D4 5f3f03d5 clrex    
001FF9D8 1f2003d5 nop      
001FF9DC 1f2003d5 nop      
001FF9E0 287f5f08 ldxrb    w8, [x25]
001FF9E4 08050011 add      w8, w8, #1
001FF9E8 287f0908 stxrb    w9, w8, [x25]
001FF9EC a9ffff35 cbnz     w9, #0x1ff9e0
001FF9F0 bf3b03d5 dmb      ish
001FF9F4 08ff5f08 ldaxrb   w8, [x24]
001FF9F8 1f3d0171 cmp      w8, #0x4f
001FF9FC a1000054 b.ne     #0x1ffa10
001FFA00 177f0808 stxrb    w8, w23, [x24]
001FFA04 88ffff35 cbnz     w8, #0x1ff9f4
001FFA08 0b000014 b        #0x1ffa34
001FFA0C 1f2003d5 nop      
001FFA10 e00314aa mov      x0, x20
001FFA14 5f3f03d5 clrex    
001FFA18 d2d90f94 bl       #0x5f6160
001FFA1C 1f2003d5 nop      
001FFA20 08ff5f08 ldaxrb   w8, [x24]
001FFA24 1f3d0171 cmp      w8, #0x4f
001FFA28 41ffff54 b.ne     #0x1ffa10
001FFA2C 177f0808 stxrb    w8, w23, [x24]
001FFA30 88ffff35 cbnz     w8, #0x1ffa20
001FFA34 287f5f08 ldxrb    w8, [x25]
001FFA38 08050051 sub      w8, w8, #1
001FFA3C 287f0908 stxrb    w9, w8, [x25]
001FFA40 a9ffff35 cbnz     w9, #0x1ffa34
001FFA44 88220091 add      x8, x20, #8
001FFA48 62020e91 add      x2, x19, #0x380
001FFA4C 01fddfc8 ldar     x1, [x8]
001FFA50 e00315aa mov      x0, x21
001FFA54 33ceff97 bl       #0x1f3320
001FFA58 f503002a mov      w21, w0
001FFA5C b6010037 tbnz     w22, #0, #0x1ffa90
001FFA60 880a0091 add      x8, x20, #2
001FFA64 e9098052 mov      w9, #0x4f
001FFA68 1f2003d5 nop      
001FFA6C 1f2003d5 nop      
001FFA70 1f7d5f08 ldxrb    wzr, [x8]
001FFA74 09fd0a08 stlxrb   w10, w9, [x8]
001FFA78 caffff35 cbnz     w10, #0x1ffa70
001FFA7C bf3b03d5 dmb      ish
001FFA80 880e4039 ldrb     w8, [x20, #3]
001FFA84 68000034 cbz      w8, #0x1ffa90
001FFA88 e00314aa mov      x0, x20
001FFA8C bdd90f94 bl       #0x5f6180
001FFA90 f5f70737 tbnz     w21, #0, #0x1ff98c
001FFA94 75008052 mov      w21, #3
001FFA98 74e20e91 add      x20, x19, #0x3b8
001FFA9C e00314aa mov      x0, x20
001FFAA0 ecda0f94 bl       #0x5f6650
001FFAA4 e00314aa mov      x0, x20
001FFAA8 75b203b9 str      w21, [x19, #0x3b0]
001FFAAC edda0f94 bl       #0x5f6660
001FFAB0 e00313aa mov      x0, x19
001FFAB4 65a40b94 bl       #0x4e8c48
001FFAB8 60ee41f9 ldr      x0, [x19, #0x3d8]
001FFABC e00000b4 cbz      x0, #0x1ffad8
001FFAC0 f44f44a9 ldp      x20, x19, [sp, #0x40]
001FFAC4 f90b40f9 ldr      x25, [sp, #0x10]
001FFAC8 f65743a9 ldp      x22, x21, [sp, #0x30]
001FFACC f85f42a9 ldp      x24, x23, [sp, #0x20]
001FFAD0 fd7bc5a8 ldp      x29, x30, [sp], #0x50
001FFAD4 2c890b14 b        #0x4e1f84
001FFAD8 f44f44a9 ldp      x20, x19, [sp, #0x40]
001FFADC f90b40f9 ldr      x25, [sp, #0x10]
001FFAE0 f65743a9 ldp      x22, x21, [sp, #0x30]
001FFAE4 f85f42a9 ldp      x24, x23, [sp, #0x20]
001FFAE8 fd7bc5a8 ldp      x29, x30, [sp], #0x50
001FFAEC c0035fd6 ret      
~~~
### 0x1ffaf0 (160 bytes; 40 slots)
~~~asm
001FFAF0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
001FFAF4 f30b00f9 str      x19, [sp, #0x10]
001FFAF8 fd030091 mov      x29, sp
001FFAFC f30300aa mov      x19, x0
001FFB00 00ec41f9 ldr      x0, [x0, #0x3d8]
001FFB04 a00000b4 cbz      x0, #0x1ffb18
001FFB08 088c44f8 ldr      x8, [x0, #0x48]!
001FFB0C 080d40f9 ldr      x8, [x8, #0x18]
001FFB10 00013fd6 blr      x8
001FFB14 7fee01f9 str      xzr, [x19, #0x3d8]
001FFB18 60e20e91 add      x0, x19, #0x3b8
001FFB1C 19da0f94 bl       #0x5f6380
001FFB20 68ce41f9 ldr      x8, [x19, #0x398]
001FFB24 c80000b4 cbz      x8, #0x1ffb3c
001FFB28 60c241f9 ldr      x0, [x19, #0x380]
001FFB2C 800000b4 cbz      x0, #0x1ffb3c
001FFB30 088c44f8 ldr      x8, [x0, #0x48]!
001FFB34 080d40f9 ldr      x8, [x8, #0x18]
001FFB38 00013fd6 blr      x8
001FFB3C 60d241f9 ldr      x0, [x19, #0x3a0]
001FFB40 a8c884d2 mov      x8, #0x2645
001FFB44 4884b0f2 movk     x8, #0x8422, lsl #16
001FFB48 889cd3f2 movk     x8, #0x9ce4, lsl #32
001FFB4C 487ef9f2 movk     x8, #0xcbf2, lsl #48
001FFB50 7fc201f9 str      xzr, [x19, #0x380]
001FFB54 68c601f9 str      x8, [x19, #0x388]
001FFB58 88200090 adrp     x8, #0x60f000
001FFB5C 080d1a91 add      x8, x8, #0x683
001FFB60 68ca01f9 str      x8, [x19, #0x390]
001FFB64 7fce01f9 str      xzr, [x19, #0x398]
001FFB68 800000b4 cbz      x0, #0x1ffb78
001FFB6C 088c44f8 ldr      x8, [x0, #0x48]!
001FFB70 080d40f9 ldr      x8, [x8, #0x18]
001FFB74 00013fd6 blr      x8
001FFB78 7fd201f9 str      xzr, [x19, #0x3a0]
001FFB7C e00313aa mov      x0, x19
001FFB80 7faa03b9 str      wzr, [x19, #0x3a8]
001FFB84 f30b40f9 ldr      x19, [sp, #0x10]
001FFB88 fd7bc2a8 ldp      x29, x30, [sp], #0x20
001FFB8C 03a30b14 b        #0x4e8798
~~~
### 0x1ffb90 (160 bytes; 40 slots)
~~~asm
001FFB90 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
001FFB94 f30b00f9 str      x19, [sp, #0x10]
001FFB98 fd030091 mov      x29, sp
001FFB9C f30300aa mov      x19, x0
001FFBA0 00ec41f9 ldr      x0, [x0, #0x3d8]
001FFBA4 a00000b4 cbz      x0, #0x1ffbb8
001FFBA8 088c44f8 ldr      x8, [x0, #0x48]!
001FFBAC 080d40f9 ldr      x8, [x8, #0x18]
001FFBB0 00013fd6 blr      x8
001FFBB4 7fee01f9 str      xzr, [x19, #0x3d8]
001FFBB8 60e20e91 add      x0, x19, #0x3b8
001FFBBC f1d90f94 bl       #0x5f6380
001FFBC0 68ce41f9 ldr      x8, [x19, #0x398]
001FFBC4 c80000b4 cbz      x8, #0x1ffbdc
001FFBC8 60c241f9 ldr      x0, [x19, #0x380]
001FFBCC 800000b4 cbz      x0, #0x1ffbdc
001FFBD0 088c44f8 ldr      x8, [x0, #0x48]!
001FFBD4 080d40f9 ldr      x8, [x8, #0x18]
001FFBD8 00013fd6 blr      x8
001FFBDC 60d241f9 ldr      x0, [x19, #0x3a0]
001FFBE0 a8c884d2 mov      x8, #0x2645
001FFBE4 4884b0f2 movk     x8, #0x8422, lsl #16
001FFBE8 889cd3f2 movk     x8, #0x9ce4, lsl #32
001FFBEC 487ef9f2 movk     x8, #0xcbf2, lsl #48
001FFBF0 7fc201f9 str      xzr, [x19, #0x380]
001FFBF4 68c601f9 str      x8, [x19, #0x388]
001FFBF8 88200090 adrp     x8, #0x60f000
001FFBFC 080d1a91 add      x8, x8, #0x683
001FFC00 68ca01f9 str      x8, [x19, #0x390]
001FFC04 7fce01f9 str      xzr, [x19, #0x398]
001FFC08 800000b4 cbz      x0, #0x1ffc18
001FFC0C 088c44f8 ldr      x8, [x0, #0x48]!
001FFC10 080d40f9 ldr      x8, [x8, #0x18]
001FFC14 00013fd6 blr      x8
001FFC18 7fd201f9 str      xzr, [x19, #0x3a0]
001FFC1C e00313aa mov      x0, x19
001FFC20 7faa03b9 str      wzr, [x19, #0x3a8]
001FFC24 f30b40f9 ldr      x19, [sp, #0x10]
001FFC28 fd7bc2a8 ldp      x29, x30, [sp], #0x20
001FFC2C dba20b14 b        #0x4e8798
~~~
### 0x2717bc (440 bytes; 110 slots)
~~~asm
002717BC ff8302d1 sub      sp, sp, #0xa0
002717C0 fd7b05a9 stp      x29, x30, [sp, #0x50]
002717C4 f93300f9 str      x25, [sp, #0x60]
002717C8 f85f07a9 stp      x24, x23, [sp, #0x70]
002717CC f65708a9 stp      x22, x21, [sp, #0x80]
002717D0 f44f09a9 stp      x20, x19, [sp, #0x90]
002717D4 fd430191 add      x29, sp, #0x50
002717D8 13600691 add      x19, x0, #0x198
002717DC f40300aa mov      x20, x0
002717E0 f503012a mov      w21, w1
002717E4 e00313aa mov      x0, x19
002717E8 9a130e94 bl       #0x5f6650
002717EC 88be40f9 ldr      x8, [x20, #0x178]
002717F0 680000b4 cbz      x8, #0x2717fc
002717F4 f5031f2a mov      w21, wzr
002717F8 54000014 b        #0x271948
002717FC 96a20291 add      x22, x20, #0xa8
00271800 e00316aa mov      x0, x22
00271804 81af0994 bl       #0x4dd608
00271808 972b0090 adrp     x23, #0x7e1000
0027180C f7021591 add      x23, x23, #0x540
00271810 80000034 cbz      w0, #0x271820
00271814 e00240f9 ldr      x0, [x23]
00271818 e10316aa mov      x1, x22
0027181C 9fa40994 bl       #0x4daa98
00271820 e00240f9 ldr      x0, [x23]
00271824 81c20791 add      x1, x20, #0x1f0
00271828 e8030091 mov      x8, sp
0027182C 820241f9 ldr      x2, [x20, #0x200]
00271830 f0a30994 bl       #0x4da7f0
00271834 e82740a9 ldp      x8, x9, [sp]
00271838 ea1340b9 ldr      w10, [sp, #0x10]
0027183C c82600a9 stp      x8, x9, [x22]
00271840 e81740f9 ldr      x8, [sp, #0x28]
00271844 ebb341a9 ldp      x11, x12, [sp, #0x18]
00271848 806e40f9 ldr      x0, [x20, #0xd8]
0027184C ca1200b9 str      w10, [x22, #0x10]
00271850 8b320ca9 stp      x11, x12, [x20, #0xc0]
00271854 886a00f9 str      x8, [x20, #0xd0]
00271858 800000b4 cbz      x0, #0x271868
0027185C 088c44f8 ldr      x8, [x0, #0x48]!
00271860 080d40f9 ldr      x8, [x8, #0x18]
00271864 00013fd6 blr      x8
00271868 e82743a9 ldp      x8, x9, [sp, #0x30]
0027186C e00316aa mov      x0, x22
00271870 ea2f44a9 ldp      x10, x11, [sp, #0x40]
00271874 810241f9 ldr      x1, [x20, #0x200]
00271878 88a60da9 stp      x8, x9, [x20, #0xd8]
0027187C 8aae0ea9 stp      x10, x11, [x20, #0xe8]
00271880 72af0994 bl       #0x4dd648
00271884 974e40f9 ldr      x23, [x20, #0x98]
00271888 01028052 mov      w1, #0x10
0027188C 02018052 mov      w2, #8
00271890 e80240f9 ldr      x8, [x23]
00271894 e00317aa mov      x0, x23
00271898 080940f9 ldr      x8, [x8, #0x10]
0027189C 00013fd6 blr      x8
002718A0 48d03bd5 mrs      x8, tpidr_el0
002718A4 19c97392 and      x25, x8, #0xffffffffffffe000
002718A8 284f40f9 ldr      x8, [x25, #0x98]
002718AC 1f4100f1 cmp      x8, #0x10
002718B0 00060054 b.eq     #0x271970
002718B4 280f088b add      x8, x25, x8, lsl #3
002718B8 e203152a mov      w2, w21
002718BC e30316aa mov      x3, x22
002718C0 f80300aa mov      x24, x0
002718C4 170d00f9 str      x23, [x8, #0x18]
002718C8 284f40f9 ldr      x8, [x25, #0x98]
002718CC 08050091 add      x8, x8, #1
002718D0 284f00f9 str      x8, [x25, #0x98]
002718D4 815240f9 ldr      x1, [x20, #0xa0]
002718D8 ed240094 bl       #0x27ac8c
002718DC 284f40f9 ldr      x8, [x25, #0x98]
002718E0 080500d1 sub      x8, x8, #1
002718E4 284f00f9 str      x8, [x25, #0x98]
002718E8 95be40f9 ldr      x21, [x20, #0x178]
002718EC 98be00f9 str      x24, [x20, #0x178]
002718F0 350200b4 cbz      x21, #0x271934
002718F4 a00640f9 ldr      x0, [x21, #8]
002718F8 a00000b4 cbz      x0, #0x27190c
002718FC 088c44f8 ldr      x8, [x0, #0x48]!
00271900 080d40f9 ldr      x8, [x8, #0x18]
00271904 00013fd6 blr      x8
00271908 bf0600f9 str      xzr, [x21, #8]
0027190C 800a58a9 ldp      x0, x2, [x20, #0x180]
00271910 e10315aa mov      x1, x21
00271914 83ca40f9 ldr      x3, [x20, #0x190]
00271918 080040f9 ldr      x8, [x0]
0027191C 080d40f9 ldr      x8, [x8, #0x18]
00271920 00013fd6 blr      x8
00271924 88be40f9 ldr      x8, [x20, #0x178]
00271928 1f0100f1 cmp      x8, #0
0027192C f5079f1a cset     w21, ne
00271930 02000014 b        #0x271938
00271934 35008052 mov      w21, #1
00271938 08028052 mov      w8, #0x10
0027193C 972218a9 stp      x23, x8, [x20, #0x180]
00271940 08018052 mov      w8, #8
00271944 88ca00f9 str      x8, [x20, #0x190]
00271948 e00313aa mov      x0, x19
0027194C 45130e94 bl       #0x5f6660
00271950 e003152a mov      w0, w21
00271954 f44f49a9 ldp      x20, x19, [sp, #0x90]
00271958 f65748a9 ldp      x22, x21, [sp, #0x80]
0027195C f93340f9 ldr      x25, [sp, #0x60]
00271960 f85f47a9 ldp      x24, x23, [sp, #0x70]
00271964 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00271968 ff830291 add      sp, sp, #0xa0
0027196C c0035fd6 ret      
00271970 a844f697 bl       #0x2c10
~~~
### 0x274120 (472 bytes; 118 slots)
~~~asm
00274120 ff4305d1 sub      sp, sp, #0x150
00274124 fd7b10a9 stp      x29, x30, [sp, #0x100]
00274128 fc8b00f9 str      x28, [sp, #0x110]
0027412C f85f12a9 stp      x24, x23, [sp, #0x120]
00274130 f65713a9 stp      x22, x21, [sp, #0x130]
00274134 f44f14a9 stp      x20, x19, [sp, #0x140]
00274138 fd030491 add      x29, sp, #0x100
0027413C 14e00191 add      x20, x0, #0x78
00274140 f80300aa mov      x24, x0
00274144 f50302aa mov      x21, x2
00274148 e00314aa mov      x0, x20
0027414C f30301aa mov      x19, x1
00274150 40090e94 bl       #0x5f6650
00274154 08a740a9 ldp      x8, x9, [x24, #8]
00274158 1f0109eb cmp      x8, x9
0027415C 20010054 b.eq     #0x274180
00274160 f7031faa mov      x23, xzr
00274164 0a0d40f9 ldr      x10, [x8, #0x18]
00274168 08810091 add      x8, x8, #0x20
0027416C 1f0109eb cmp      x8, x9
00274170 ea020a8b add      x10, x23, x10
00274174 57110091 add      x23, x10, #4
00274178 61ffff54 b.ne     #0x274164
0027417C 02000014 b        #0x274184
00274180 f7031faa mov      x23, xzr
00274184 e00314aa mov      x0, x20
00274188 36090e94 bl       #0x5f6660
0027418C 680240f9 ldr      x8, [x19]
00274190 f4820091 add      x20, x23, #0x20
00274194 e00313aa mov      x0, x19
00274198 e10314aa mov      x1, x20
0027419C 02018052 mov      w2, #8
002741A0 080940f9 ldr      x8, [x8, #0x10]
002741A4 00013fd6 blr      x8
002741A8 400800b4 cbz      x0, #0x2742b0
002741AC 081e00b0 adrp     x8, #0x635000
002741B0 08610d91 add      x8, x8, #0x358
002741B4 e90f8052 mov      w9, #0x7f
002741B8 a8a73ea9 stp      x8, x9, [x29, #-0x18]
002741BC 682900d0 adrp     x8, #0x7a2000
002741C0 692900d0 adrp     x9, #0x7a2000
002741C4 087d47f9 ldr      x8, [x8, #0xef8]
002741C8 296147f9 ldr      x9, [x9, #0xec0]
002741CC a05f3da9 stp      x0, x23, [x29, #-0x30]
002741D0 f60300aa mov      x22, x0
002741D4 bf031e38 sturb    wzr, [x29, #-0x20]
002741D8 a14301d1 sub      x1, x29, #0x50
002741DC e00318aa mov      x0, x24
002741E0 bf831ff8 stur     xzr, [x29, #-8]
002741E4 29410091 add      x9, x9, #0x10
002741E8 08410091 add      x8, x8, #0x10
002741EC bf273ca9 stp      xzr, x9, [x29, #-0x40]
002741F0 692900d0 adrp     x9, #0x7a2000
002741F4 296547f9 ldr      x9, [x9, #0xec8]
002741F8 29410091 add      x9, x9, #0x10
002741FC a8273ba9 stp      x8, x9, [x29, #-0x50]
00274200 40000094 bl       #0x274300
00274204 f8031f2a mov      w24, wzr
00274208 40040036 tbz      w0, #0, #0x274290
0027420C e0a30091 add      x0, sp, #0x28
00274210 fe1d0094 bl       #0x27ba08
00274214 e0a30091 add      x0, sp, #0x28
00274218 001e0094 bl       #0x27ba18
0027421C e0a30091 add      x0, sp, #0x28
00274220 e10316aa mov      x1, x22
00274224 e20317aa mov      x2, x23
00274228 e3031faa mov      x3, xzr
0027422C 161e0094 bl       #0x27ba84
00274230 e8230091 add      x8, sp, #8
00274234 e0a30091 add      x0, sp, #0x28
00274238 261e0094 bl       #0x27bad0
0027423C e8a740a9 ldp      x8, x9, [sp, #8]
00274240 cc02178b add      x12, x22, x23
00274244 eaaf41a9 ldp      x10, x11, [sp, #0x18]
00274248 a0630091 add      x0, x29, #0x18
0027424C e10315aa mov      x1, x21
00274250 e20314aa mov      x2, x20
00274254 e3031faa mov      x3, xzr
00274258 8a2d01a9 stp      x10, x11, [x12, #0x10]
0027425C 882500a9 stp      x8, x9, [x12]
00274260 bf0f00f9 str      xzr, [x29, #0x18]
00274264 e682fa97 bl       #0x114dfc
00274268 60030034 cbz      w0, #0x2742d4
0027426C f8031f2a mov      w24, wzr
00274270 a00f40f9 ldr      x0, [x29, #0x18]
00274274 800000b4 cbz      x0, #0x274284
00274278 088c44f8 ldr      x8, [x0, #0x48]!
0027427C 080d40f9 ldr      x8, [x8, #0x18]
00274280 00013fd6 blr      x8
00274284 e8a30091 add      x8, sp, #0x28
00274288 00410091 add      x0, x8, #0x10
0027428C c9090e94 bl       #0x5f69b0
00274290 680240f9 ldr      x8, [x19]
00274294 e00313aa mov      x0, x19
00274298 e10316aa mov      x1, x22
0027429C e20314aa mov      x2, x20
002742A0 03018052 mov      w3, #8
002742A4 080d40f9 ldr      x8, [x8, #0x18]
002742A8 00013fd6 blr      x8
002742AC 02000014 b        #0x2742b4
002742B0 f8031f2a mov      w24, wzr
002742B4 e003182a mov      w0, w24
002742B8 f44f54a9 ldp      x20, x19, [sp, #0x140]
002742BC f65753a9 ldp      x22, x21, [sp, #0x130]
002742C0 fc8b40f9 ldr      x28, [sp, #0x110]
002742C4 f85f52a9 ldp      x24, x23, [sp, #0x120]
002742C8 fd7b50a9 ldp      x29, x30, [sp, #0x100]
002742CC ff430591 add      sp, sp, #0x150
002742D0 c0035fd6 ret      
002742D4 a00f40f9 ldr      x0, [x29, #0x18]
002742D8 e10316aa mov      x1, x22
002742DC e20314aa mov      x2, x20
002742E0 ae9f0994 bl       #0x4dc198
002742E4 1f000071 cmp      w0, #0
002742E8 f8179f1a cset     w24, eq
002742EC a00f40f9 ldr      x0, [x29, #0x18]
002742F0 40fcffb5 cbnz     x0, #0x274278
002742F4 e4ffff17 b        #0x274284
~~~
### 0x274300 (492 bytes; 123 slots)
~~~asm
00274300 ff8301d1 sub      sp, sp, #0x60
00274304 fd7b01a9 stp      x29, x30, [sp, #0x10]
00274308 fa6702a9 stp      x26, x25, [sp, #0x20]
0027430C f85f03a9 stp      x24, x23, [sp, #0x30]
00274310 f65704a9 stp      x22, x21, [sp, #0x40]
00274314 f44f05a9 stp      x20, x19, [sp, #0x50]
00274318 fd430091 add      x29, sp, #0x10
0027431C 13e00191 add      x19, x0, #0x78
00274320 f60300aa mov      x22, x0
00274324 f40301aa mov      x20, x1
00274328 e00313aa mov      x0, x19
0027432C c9080e94 bl       #0x5f6650
00274330 e00313aa mov      x0, x19
00274334 c7080e94 bl       #0x5f6650
00274338 c8a640a9 ldp      x8, x9, [x22, #8]
0027433C 1f0109eb cmp      x8, x9
00274340 60010054 b.eq     #0x27436c
00274344 f5031faa mov      x21, xzr
00274348 1f2003d5 nop      
0027434C 1f2003d5 nop      
00274350 0a0d40f9 ldr      x10, [x8, #0x18]
00274354 08810091 add      x8, x8, #0x20
00274358 1f0109eb cmp      x8, x9
0027435C aa020a8b add      x10, x21, x10
00274360 55110091 add      x21, x10, #4
00274364 61ffff54 b.ne     #0x274350
00274368 02000014 b        #0x274370
0027436C f5031faa mov      x21, xzr
00274370 e00313aa mov      x0, x19
00274374 bb080e94 bl       #0x5f6660
00274378 880240f9 ldr      x8, [x20]
0027437C e00314aa mov      x0, x20
00274380 080d40f9 ldr      x8, [x8, #0x18]
00274384 00013fd6 blr      x8
00274388 080040f9 ldr      x8, [x0]
0027438C f70300aa mov      x23, x0
00274390 081540f9 ldr      x8, [x8, #0x28]
00274394 00013fd6 blr      x8
00274398 080040f9 ldr      x8, [x0]
0027439C e10315aa mov      x1, x21
002743A0 e20640f9 ldr      x2, [x23, #8]
002743A4 080d40f9 ldr      x8, [x8, #0x18]
002743A8 00013fd6 blr      x8
002743AC f503002a mov      w21, w0
002743B0 a0080036 tbz      w0, #0, #0x2744c4
002743B4 d9ea40a9 ldp      x25, x26, [x22, #8]
002743B8 0a000014 b        #0x2743e0
002743BC 1f2003d5 nop      
002743C0 880240f9 ldr      x8, [x20]
002743C4 e00314aa mov      x0, x20
002743C8 080940f9 ldr      x8, [x8, #0x10]
002743CC 00013fd6 blr      x8
002743D0 080440f9 ldr      x8, [x0, #8]
002743D4 39830091 add      x25, x25, #0x20
002743D8 0801168b add      x8, x8, x22
002743DC 080400f9 str      x8, [x0, #8]
002743E0 3f031aeb cmp      x25, x26
002743E4 00070054 b.eq     #0x2744c4
002743E8 280340b9 ldr      w8, [x25]
002743EC e00314aa mov      x0, x20
002743F0 a8c31fb8 stur     w8, [x29, #-4]
002743F4 880240f9 ldr      x8, [x20]
002743F8 080940f9 ldr      x8, [x8, #0x10]
002743FC 00013fd6 blr      x8
00274400 080040f9 ldr      x8, [x0]
00274404 f60300aa mov      x22, x0
00274408 081540f9 ldr      x8, [x8, #0x28]
0027440C 00013fd6 blr      x8
00274410 080040f9 ldr      x8, [x0]
00274414 81008052 mov      w1, #4
00274418 c20640f9 ldr      x2, [x22, #8]
0027441C 080d40f9 ldr      x8, [x8, #0x18]
00274420 00013fd6 blr      x8
00274424 00010036 tbz      w0, #0, #0x274444
00274428 c80240f9 ldr      x8, [x22]
0027442C a11300d1 sub      x1, x29, #4
00274430 e00316aa mov      x0, x22
00274434 82008052 mov      w2, #4
00274438 e3031faa mov      x3, xzr
0027443C 080d40f9 ldr      x8, [x8, #0x18]
00274440 00013fd6 blr      x8
00274444 880240f9 ldr      x8, [x20]
00274448 e00314aa mov      x0, x20
0027444C 080940f9 ldr      x8, [x8, #0x10]
00274450 00013fd6 blr      x8
00274454 080440f9 ldr      x8, [x0, #8]
00274458 08110091 add      x8, x8, #4
0027445C 080400f9 str      x8, [x0, #8]
00274460 e00314aa mov      x0, x20
00274464 880240f9 ldr      x8, [x20]
00274468 370740f9 ldr      x23, [x25, #8]
0027446C 360f40f9 ldr      x22, [x25, #0x18]
00274470 080940f9 ldr      x8, [x8, #0x10]
00274474 00013fd6 blr      x8
00274478 57faffb4 cbz      x23, #0x2743c0
0027447C 080040f9 ldr      x8, [x0]
00274480 f80300aa mov      x24, x0
00274484 081540f9 ldr      x8, [x8, #0x28]
00274488 00013fd6 blr      x8
0027448C 080040f9 ldr      x8, [x0]
00274490 e10316aa mov      x1, x22
00274494 020740f9 ldr      x2, [x24, #8]
00274498 080d40f9 ldr      x8, [x8, #0x18]
0027449C 00013fd6 blr      x8
002744A0 00f90736 tbz      w0, #0, #0x2743c0
002744A4 080340f9 ldr      x8, [x24]
002744A8 e00318aa mov      x0, x24
002744AC e10317aa mov      x1, x23
002744B0 e20316aa mov      x2, x22
002744B4 e3031faa mov      x3, xzr
002744B8 080d40f9 ldr      x8, [x8, #0x18]
002744BC 00013fd6 blr      x8
002744C0 c0ffff17 b        #0x2743c0
002744C4 e00313aa mov      x0, x19
002744C8 66080e94 bl       #0x5f6660
002744CC a0020012 and      w0, w21, #1
002744D0 f44f45a9 ldp      x20, x19, [sp, #0x50]
002744D4 f65744a9 ldp      x22, x21, [sp, #0x40]
002744D8 f85f43a9 ldp      x24, x23, [sp, #0x30]
002744DC fa6742a9 ldp      x26, x25, [sp, #0x20]
002744E0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
002744E4 ff830191 add      sp, sp, #0x60
002744E8 c0035fd6 ret      
~~~
### 0x27ac8c (212 bytes; 53 slots)
~~~asm
0027AC8C fd7bbca9 stp      x29, x30, [sp, #-0x40]!
0027AC90 f85f01a9 stp      x24, x23, [sp, #0x10]
0027AC94 f65702a9 stp      x22, x21, [sp, #0x20]
0027AC98 f44f03a9 stp      x20, x19, [sp, #0x30]
0027AC9C fd030091 mov      x29, sp
0027ACA0 020000b9 str      w2, [x0]
0027ACA4 48d03bd5 mrs      x8, tpidr_el0
0027ACA8 18c97392 and      x24, x8, #0xffffffffffffe000
0027ACAC 084f40f9 ldr      x8, [x24, #0x98]
0027ACB0 1f4100f1 cmp      x8, #0x10
0027ACB4 40050054 b.eq     #0x27ad5c
0027ACB8 080f088b add      x8, x24, x8, lsl #3
0027ACBC f603022a mov      w22, w2
0027ACC0 f40301aa mov      x20, x1
0027ACC4 f30300aa mov      x19, x0
0027ACC8 e00301aa mov      x0, x1
0027ACCC 010d00f9 str      x1, [x8, #0x18]
0027ACD0 02028052 mov      w2, #0x10
0027ACD4 f50303aa mov      x21, x3
0027ACD8 084f40f9 ldr      x8, [x24, #0x98]
0027ACDC 08050091 add      x8, x8, #1
0027ACE0 084f00f9 str      x8, [x24, #0x98]
0027ACE4 280040f9 ldr      x8, [x1]
0027ACE8 01808052 mov      w1, #0x400
0027ACEC 080940f9 ldr      x8, [x8, #0x10]
0027ACF0 00013fd6 blr      x8
0027ACF4 f70300aa mov      x23, x0
0027ACF8 a00000b5 cbnz     x0, #0x27ad0c
0027ACFC 880240f9 ldr      x8, [x20]
0027AD00 e00314aa mov      x0, x20
0027AD04 085d40f9 ldr      x8, [x8, #0xb8]
0027AD08 00013fd6 blr      x8
0027AD0C e00317aa mov      x0, x23
0027AD10 e103162a mov      w1, w22
0027AD14 e20315aa mov      x2, x21
0027AD18 96000094 bl       #0x27af70
0027AD1C 08808052 mov      w8, #0x400
0027AD20 09028052 mov      w9, #0x10
0027AD24 770600f9 str      x23, [x19, #8]
0027AD28 f4de00a9 stp      x20, x23, [x23, #8]
0027AD2C f44f43a9 ldp      x20, x19, [sp, #0x30]
0027AD30 e8a601a9 stp      x8, x9, [x23, #0x18]
0027AD34 084f40f9 ldr      x8, [x24, #0x98]
0027AD38 f65742a9 ldp      x22, x21, [sp, #0x20]
0027AD3C 080500d1 sub      x8, x8, #1
0027AD40 084f00f9 str      x8, [x24, #0x98]
0027AD44 e88e44f8 ldr      x8, [x23, #0x48]!
0027AD48 e00317aa mov      x0, x23
0027AD4C f85f41a9 ldp      x24, x23, [sp, #0x10]
0027AD50 010940f9 ldr      x1, [x8, #0x10]
0027AD54 fd7bc4a8 ldp      x29, x30, [sp], #0x40
0027AD58 20001fd6 br       x1
0027AD5C ad1ff697 bl       #0x2c10
~~~
### 0x27b678 (96 bytes; 24 slots)
~~~asm
0027B678 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0027B67C f50b00f9 str      x21, [sp, #0x10]
0027B680 f44f02a9 stp      x20, x19, [sp, #0x20]
0027B684 fd030091 mov      x29, sp
0027B688 f30300aa mov      x19, x0
0027B68C 00b841f9 ldr      x0, [x0, #0x370]
0027B690 62e20d91 add      x2, x19, #0x378
0027B694 610640f9 ldr      x1, [x19, #8]
0027B698 a2e2ff97 bl       #0x274120
0027B69C 75c20e91 add      x21, x19, #0x3b0
0027B6A0 f403002a mov      w20, w0
0027B6A4 e00315aa mov      x0, x21
0027B6A8 eaeb0d94 bl       #0x5f6650
0027B6AC 9f020072 tst      w20, #1
0027B6B0 48008052 mov      w8, #2
0027B6B4 e00315aa mov      x0, x21
0027B6B8 0815881a cinc     w8, w8, eq
0027B6BC 68aa03b9 str      w8, [x19, #0x3a8]
0027B6C0 e8eb0d94 bl       #0x5f6660
0027B6C4 e00313aa mov      x0, x19
0027B6C8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0027B6CC f50b40f9 ldr      x21, [sp, #0x10]
0027B6D0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0027B6D4 5db50914 b        #0x4e8c48
~~~
### 0x297700 (472 bytes; 118 slots)
~~~asm
00297700 ff4305d1 sub      sp, sp, #0x150
00297704 fd7b10a9 stp      x29, x30, [sp, #0x100]
00297708 fc8b00f9 str      x28, [sp, #0x110]
0029770C f85f12a9 stp      x24, x23, [sp, #0x120]
00297710 f65713a9 stp      x22, x21, [sp, #0x130]
00297714 f44f14a9 stp      x20, x19, [sp, #0x140]
00297718 fd030491 add      x29, sp, #0x100
0029771C 14e00191 add      x20, x0, #0x78
00297720 f80300aa mov      x24, x0
00297724 f50302aa mov      x21, x2
00297728 e00314aa mov      x0, x20
0029772C f30301aa mov      x19, x1
00297730 c87b0d94 bl       #0x5f6650
00297734 08a740a9 ldp      x8, x9, [x24, #8]
00297738 1f0109eb cmp      x8, x9
0029773C 20010054 b.eq     #0x297760
00297740 f7031faa mov      x23, xzr
00297744 0a0d40f9 ldr      x10, [x8, #0x18]
00297748 08810091 add      x8, x8, #0x20
0029774C 1f0109eb cmp      x8, x9
00297750 ea020a8b add      x10, x23, x10
00297754 57110091 add      x23, x10, #4
00297758 61ffff54 b.ne     #0x297744
0029775C 02000014 b        #0x297764
00297760 f7031faa mov      x23, xzr
00297764 e00314aa mov      x0, x20
00297768 be7b0d94 bl       #0x5f6660
0029776C 680240f9 ldr      x8, [x19]
00297770 f4820091 add      x20, x23, #0x20
00297774 e00313aa mov      x0, x19
00297778 e10314aa mov      x1, x20
0029777C 02018052 mov      w2, #8
00297780 080940f9 ldr      x8, [x8, #0x10]
00297784 00013fd6 blr      x8
00297788 400800b4 cbz      x0, #0x297890
0029778C 081d00f0 adrp     x8, #0x63a000
00297790 08051891 add      x8, x8, #0x601
00297794 e90f8052 mov      w9, #0x7f
00297798 a8a73ea9 stp      x8, x9, [x29, #-0x18]
0029779C 68280090 adrp     x8, #0x7a3000
002977A0 69280090 adrp     x9, #0x7a3000
002977A4 08f141f9 ldr      x8, [x8, #0x3e0]
002977A8 294541f9 ldr      x9, [x9, #0x288]
002977AC a05f3da9 stp      x0, x23, [x29, #-0x30]
002977B0 f60300aa mov      x22, x0
002977B4 bf031e38 sturb    wzr, [x29, #-0x20]
002977B8 a14301d1 sub      x1, x29, #0x50
002977BC e00318aa mov      x0, x24
002977C0 bf831ff8 stur     xzr, [x29, #-8]
002977C4 29410091 add      x9, x9, #0x10
002977C8 08410091 add      x8, x8, #0x10
002977CC bf273ca9 stp      xzr, x9, [x29, #-0x40]
002977D0 69280090 adrp     x9, #0x7a3000
002977D4 29e541f9 ldr      x9, [x9, #0x3c8]
002977D8 29410091 add      x9, x9, #0x10
002977DC a8273ba9 stp      x8, x9, [x29, #-0x50]
002977E0 40000094 bl       #0x2978e0
002977E4 f8031f2a mov      w24, wzr
002977E8 40040036 tbz      w0, #0, #0x297870
002977EC e0a30091 add      x0, sp, #0x28
002977F0 c9260094 bl       #0x2a1314
002977F4 e0a30091 add      x0, sp, #0x28
002977F8 cb260094 bl       #0x2a1324
002977FC e0a30091 add      x0, sp, #0x28
00297800 e10316aa mov      x1, x22
00297804 e20317aa mov      x2, x23
00297808 e3031faa mov      x3, xzr
0029780C e1260094 bl       #0x2a1390
00297810 e8230091 add      x8, sp, #8
00297814 e0a30091 add      x0, sp, #0x28
00297818 f1260094 bl       #0x2a13dc
0029781C e8a740a9 ldp      x8, x9, [sp, #8]
00297820 cc02178b add      x12, x22, x23
00297824 eaaf41a9 ldp      x10, x11, [sp, #0x18]
00297828 a0630091 add      x0, x29, #0x18
0029782C e10315aa mov      x1, x21
00297830 e20314aa mov      x2, x20
00297834 e3031faa mov      x3, xzr
00297838 8a2d01a9 stp      x10, x11, [x12, #0x10]
0029783C 882500a9 stp      x8, x9, [x12]
00297840 bf0f00f9 str      xzr, [x29, #0x18]
00297844 6ef5f997 bl       #0x114dfc
00297848 60030034 cbz      w0, #0x2978b4
0029784C f8031f2a mov      w24, wzr
00297850 a00f40f9 ldr      x0, [x29, #0x18]
00297854 800000b4 cbz      x0, #0x297864
00297858 088c44f8 ldr      x8, [x0, #0x48]!
0029785C 080d40f9 ldr      x8, [x8, #0x18]
00297860 00013fd6 blr      x8
00297864 e8a30091 add      x8, sp, #0x28
00297868 00410091 add      x0, x8, #0x10
0029786C 517c0d94 bl       #0x5f69b0
00297870 680240f9 ldr      x8, [x19]
00297874 e00313aa mov      x0, x19
00297878 e10316aa mov      x1, x22
0029787C e20314aa mov      x2, x20
00297880 03018052 mov      w3, #8
00297884 080d40f9 ldr      x8, [x8, #0x18]
00297888 00013fd6 blr      x8
0029788C 02000014 b        #0x297894
00297890 f8031f2a mov      w24, wzr
00297894 e003182a mov      w0, w24
00297898 f44f54a9 ldp      x20, x19, [sp, #0x140]
0029789C f65753a9 ldp      x22, x21, [sp, #0x130]
002978A0 fc8b40f9 ldr      x28, [sp, #0x110]
002978A4 f85f52a9 ldp      x24, x23, [sp, #0x120]
002978A8 fd7b50a9 ldp      x29, x30, [sp, #0x100]
002978AC ff430591 add      sp, sp, #0x150
002978B0 c0035fd6 ret      
002978B4 a00f40f9 ldr      x0, [x29, #0x18]
002978B8 e10316aa mov      x1, x22
002978BC e20314aa mov      x2, x20
002978C0 36120994 bl       #0x4dc198
002978C4 1f000071 cmp      w0, #0
002978C8 f8179f1a cset     w24, eq
002978CC a00f40f9 ldr      x0, [x29, #0x18]
002978D0 40fcffb5 cbnz     x0, #0x297858
002978D4 e4ffff17 b        #0x297864
~~~
### 0x2978e0 (492 bytes; 123 slots)
~~~asm
002978E0 ff8301d1 sub      sp, sp, #0x60
002978E4 fd7b01a9 stp      x29, x30, [sp, #0x10]
002978E8 fa6702a9 stp      x26, x25, [sp, #0x20]
002978EC f85f03a9 stp      x24, x23, [sp, #0x30]
002978F0 f65704a9 stp      x22, x21, [sp, #0x40]
002978F4 f44f05a9 stp      x20, x19, [sp, #0x50]
002978F8 fd430091 add      x29, sp, #0x10
002978FC 13e00191 add      x19, x0, #0x78
00297900 f60300aa mov      x22, x0
00297904 f40301aa mov      x20, x1
00297908 e00313aa mov      x0, x19
0029790C 517b0d94 bl       #0x5f6650
00297910 e00313aa mov      x0, x19
00297914 4f7b0d94 bl       #0x5f6650
00297918 c8a640a9 ldp      x8, x9, [x22, #8]
0029791C 1f0109eb cmp      x8, x9
00297920 60010054 b.eq     #0x29794c
00297924 f5031faa mov      x21, xzr
00297928 1f2003d5 nop      
0029792C 1f2003d5 nop      
00297930 0a0d40f9 ldr      x10, [x8, #0x18]
00297934 08810091 add      x8, x8, #0x20
00297938 1f0109eb cmp      x8, x9
0029793C aa020a8b add      x10, x21, x10
00297940 55110091 add      x21, x10, #4
00297944 61ffff54 b.ne     #0x297930
00297948 02000014 b        #0x297950
0029794C f5031faa mov      x21, xzr
00297950 e00313aa mov      x0, x19
00297954 437b0d94 bl       #0x5f6660
00297958 880240f9 ldr      x8, [x20]
0029795C e00314aa mov      x0, x20
00297960 080d40f9 ldr      x8, [x8, #0x18]
00297964 00013fd6 blr      x8
00297968 080040f9 ldr      x8, [x0]
0029796C f70300aa mov      x23, x0
00297970 081540f9 ldr      x8, [x8, #0x28]
00297974 00013fd6 blr      x8
00297978 080040f9 ldr      x8, [x0]
0029797C e10315aa mov      x1, x21
00297980 e20640f9 ldr      x2, [x23, #8]
00297984 080d40f9 ldr      x8, [x8, #0x18]
00297988 00013fd6 blr      x8
0029798C f503002a mov      w21, w0
00297990 a0080036 tbz      w0, #0, #0x297aa4
00297994 d9ea40a9 ldp      x25, x26, [x22, #8]
00297998 0a000014 b        #0x2979c0
0029799C 1f2003d5 nop      
002979A0 880240f9 ldr      x8, [x20]
002979A4 e00314aa mov      x0, x20
002979A8 080940f9 ldr      x8, [x8, #0x10]
002979AC 00013fd6 blr      x8
002979B0 080440f9 ldr      x8, [x0, #8]
002979B4 39830091 add      x25, x25, #0x20
002979B8 0801168b add      x8, x8, x22
002979BC 080400f9 str      x8, [x0, #8]
002979C0 3f031aeb cmp      x25, x26
002979C4 00070054 b.eq     #0x297aa4
002979C8 280340b9 ldr      w8, [x25]
002979CC e00314aa mov      x0, x20
002979D0 a8c31fb8 stur     w8, [x29, #-4]
002979D4 880240f9 ldr      x8, [x20]
002979D8 080940f9 ldr      x8, [x8, #0x10]
002979DC 00013fd6 blr      x8
002979E0 080040f9 ldr      x8, [x0]
002979E4 f60300aa mov      x22, x0
002979E8 081540f9 ldr      x8, [x8, #0x28]
002979EC 00013fd6 blr      x8
002979F0 080040f9 ldr      x8, [x0]
002979F4 81008052 mov      w1, #4
002979F8 c20640f9 ldr      x2, [x22, #8]
002979FC 080d40f9 ldr      x8, [x8, #0x18]
00297A00 00013fd6 blr      x8
00297A04 00010036 tbz      w0, #0, #0x297a24
00297A08 c80240f9 ldr      x8, [x22]
00297A0C a11300d1 sub      x1, x29, #4
00297A10 e00316aa mov      x0, x22
00297A14 82008052 mov      w2, #4
00297A18 e3031faa mov      x3, xzr
00297A1C 080d40f9 ldr      x8, [x8, #0x18]
00297A20 00013fd6 blr      x8
00297A24 880240f9 ldr      x8, [x20]
00297A28 e00314aa mov      x0, x20
00297A2C 080940f9 ldr      x8, [x8, #0x10]
00297A30 00013fd6 blr      x8
00297A34 080440f9 ldr      x8, [x0, #8]
00297A38 08110091 add      x8, x8, #4
00297A3C 080400f9 str      x8, [x0, #8]
00297A40 e00314aa mov      x0, x20
00297A44 880240f9 ldr      x8, [x20]
00297A48 370740f9 ldr      x23, [x25, #8]
00297A4C 360f40f9 ldr      x22, [x25, #0x18]
00297A50 080940f9 ldr      x8, [x8, #0x10]
00297A54 00013fd6 blr      x8
00297A58 57faffb4 cbz      x23, #0x2979a0
00297A5C 080040f9 ldr      x8, [x0]
00297A60 f80300aa mov      x24, x0
00297A64 081540f9 ldr      x8, [x8, #0x28]
00297A68 00013fd6 blr      x8
00297A6C 080040f9 ldr      x8, [x0]
00297A70 e10316aa mov      x1, x22
00297A74 020740f9 ldr      x2, [x24, #8]
00297A78 080d40f9 ldr      x8, [x8, #0x18]
00297A7C 00013fd6 blr      x8
00297A80 00f90736 tbz      w0, #0, #0x2979a0
00297A84 080340f9 ldr      x8, [x24]
00297A88 e00318aa mov      x0, x24
00297A8C e10317aa mov      x1, x23
00297A90 e20316aa mov      x2, x22
00297A94 e3031faa mov      x3, xzr
00297A98 080d40f9 ldr      x8, [x8, #0x18]
00297A9C 00013fd6 blr      x8
00297AA0 c0ffff17 b        #0x2979a0
00297AA4 e00313aa mov      x0, x19
00297AA8 ee7a0d94 bl       #0x5f6660
00297AAC a0020012 and      w0, w21, #1
00297AB0 f44f45a9 ldp      x20, x19, [sp, #0x50]
00297AB4 f65744a9 ldp      x22, x21, [sp, #0x40]
00297AB8 f85f43a9 ldp      x24, x23, [sp, #0x30]
00297ABC fa6742a9 ldp      x26, x25, [sp, #0x20]
00297AC0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00297AC4 ff830191 add      sp, sp, #0x60
00297AC8 c0035fd6 ret      
~~~
### 0x297e60 (288 bytes; 72 slots)
~~~asm
00297E60 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00297E64 f70b00f9 str      x23, [sp, #0x10]
00297E68 f65702a9 stp      x22, x21, [sp, #0x20]
00297E6C f44f03a9 stp      x20, x19, [sp, #0x30]
00297E70 fd030091 mov      x29, sp
00297E74 085440f9 ldr      x8, [x0, #0xa8]
00297E78 f60302aa mov      x22, x2
00297E7C f40301aa mov      x20, x1
00297E80 f30300aa mov      x19, x0
00297E84 280100b4 cbz      x8, #0x297ea8
00297E88 08690991 add      x8, x8, #0x25a
00297E8C 08fddf08 ldarb    w8, [x8]
00297E90 c8000037 tbnz     w8, #0, #0x297ea8
00297E94 f44f43a9 ldp      x20, x19, [sp, #0x30]
00297E98 f70b40f9 ldr      x23, [sp, #0x10]
00297E9C f65742a9 ldp      x22, x21, [sp, #0x20]
00297EA0 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00297EA4 c0035fd6 ret      
00297EA8 48d03bd5 mrs      x8, tpidr_el0
00297EAC 17c97392 and      x23, x8, #0xffffffffffffe000
00297EB0 e84e40f9 ldr      x8, [x23, #0x98]
00297EB4 1f4100f1 cmp      x8, #0x10
00297EB8 20060054 b.eq     #0x297f7c
00297EBC e80e088b add      x8, x23, x8, lsl #3
00297EC0 017a8052 mov      w1, #0x3d0
00297EC4 e00314aa mov      x0, x20
00297EC8 02028052 mov      w2, #0x10
00297ECC 140d00f9 str      x20, [x8, #0x18]
00297ED0 e84e40f9 ldr      x8, [x23, #0x98]
00297ED4 08050091 add      x8, x8, #1
00297ED8 e84e00f9 str      x8, [x23, #0x98]
00297EDC 880240f9 ldr      x8, [x20]
00297EE0 080940f9 ldr      x8, [x8, #0x10]
00297EE4 00013fd6 blr      x8
00297EE8 f50300aa mov      x21, x0
00297EEC a00000b5 cbnz     x0, #0x297f00
00297EF0 880240f9 ldr      x8, [x20]
00297EF4 e00314aa mov      x0, x20
00297EF8 085d40f9 ldr      x8, [x8, #0xb8]
00297EFC 00013fd6 blr      x8
00297F00 e00315aa mov      x0, x21
00297F04 e10313aa mov      x1, x19
00297F08 e20316aa mov      x2, x22
00297F0C bf230094 bl       #0x2a0e08
00297F10 087a8052 mov      w8, #0x3d0
00297F14 09028052 mov      w9, #0x10
00297F18 e00315aa mov      x0, x21
00297F1C b4d600a9 stp      x20, x21, [x21, #8]
00297F20 a8a601a9 stp      x8, x9, [x21, #0x18]
00297F24 e84e40f9 ldr      x8, [x23, #0x98]
00297F28 080500d1 sub      x8, x8, #1
00297F2C e84e00f9 str      x8, [x23, #0x98]
00297F30 088c44f8 ldr      x8, [x0, #0x48]!
00297F34 080940f9 ldr      x8, [x8, #0x10]
00297F38 00013fd6 blr      x8
00297F3C 605640f9 ldr      x0, [x19, #0xa8]
00297F40 800000b4 cbz      x0, #0x297f50
00297F44 088c44f8 ldr      x8, [x0, #0x48]!
00297F48 080d40f9 ldr      x8, [x8, #0x18]
00297F4C 00013fd6 blr      x8
00297F50 755600f9 str      x21, [x19, #0xa8]
00297F54 e00315aa mov      x0, x21
00297F58 f70b40f9 ldr      x23, [sp, #0x10]
00297F5C f44f43a9 ldp      x20, x19, [sp, #0x30]
00297F60 c11b00f0 adrp     x1, #0x612000
00297F64 215c2491 add      x1, x1, #0x917
00297F68 f65742a9 ldp      x22, x21, [sp, #0x20]
00297F6C 02008012 mov      w2, #-1
00297F70 03028052 mov      w3, #0x10
00297F74 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00297F78 7d420914 b        #0x4e896c
00297F7C 25abf597 bl       #0x2c10
~~~
### 0x297f80 (32 bytes; 8 slots)
~~~asm
00297F80 085440f9 ldr      x8, [x0, #0xa8]
00297F84 a80000b4 cbz      x8, #0x297f98
00297F88 08690991 add      x8, x8, #0x25a
00297F8C 08fddf08 ldarb    w8, [x8]
00297F90 00010012 and      w0, w8, #1
00297F94 c0035fd6 ret      
00297F98 e0031f2a mov      w0, wzr
00297F9C c0035fd6 ret      
~~~
### 0x297fa0 (16 bytes; 4 slots)
~~~asm
00297FA0 005440f9 ldr      x0, [x0, #0xa8]
00297FA4 400000b4 cbz      x0, #0x297fac
00297FA8 e9230014 b        #0x2a0f4c
00297FAC c0035fd6 ret      
~~~
### 0x29b7d0 (468 bytes; 117 slots)
~~~asm
0029B7D0 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
0029B7D4 fd030091 mov      x29, sp
0029B7D8 098040f9 ldr      x9, [x0, #0x100]
0029B7DC c90d00b4 cbz      x9, #0x29b994
0029B7E0 2afd41d3 lsr      x10, x9, #1
0029B7E4 280040f9 ldr      x8, [x1]
0029B7E8 4af10092 and      x10, x10, #0x5555555555555555
0029B7EC 2a010acb sub      x10, x9, x10
0029B7F0 4be50092 and      x11, x10, #0x3333333333333333
0029B7F4 4afd42d3 lsr      x10, x10, #2
0029B7F8 4ae50092 and      x10, x10, #0x3333333333333333
0029B7FC 6a010a8b add      x10, x11, x10
0029B800 ebc300b2 mov      x11, #0x101010101010101
0029B804 4a114a8b add      x10, x10, x10, lsr #4
0029B808 4acd0092 and      x10, x10, #0xf0f0f0f0f0f0f0f
0029B80C 4a7d0b9b mul      x10, x10, x11
0029B810 4afd78d3 lsr      x10, x10, #0x38
0029B814 5f0500f1 cmp      x10, #1
0029B818 88000054 b.hi     #0x29b828
0029B81C 2b0500d1 sub      x11, x9, #1
0029B820 6d01088a and      x13, x11, x8
0029B824 06000014 b        #0x29b83c
0029B828 1f0109eb cmp      x8, x9
0029B82C ed0308aa mov      x13, x8
0029B830 63000054 b.lo     #0x29b83c
0029B834 0b09c99a udiv     x11, x8, x9
0029B838 6da1099b msub     x13, x11, x9, x8
0029B83C 0c7c40f9 ldr      x12, [x0, #0xf8]
0029B840 8b796df8 ldr      x11, [x12, x13, lsl #3]
0029B844 8b0a00b4 cbz      x11, #0x29b994
0029B848 6e0140f9 ldr      x14, [x11]
0029B84C 4e0a00b4 cbz      x14, #0x29b994
0029B850 2b0500d1 sub      x11, x9, #1
0029B854 5f0900f1 cmp      x10, #2
0029B858 c2020054 b.hs     #0x29b8b0
0029B85C 06000014 b        #0x29b874
0029B860 ef010b8a and      x15, x15, x11
0029B864 ff010deb cmp      x15, x13
0029B868 61090054 b.ne     #0x29b994
0029B86C ce0140f9 ldr      x14, [x14]
0029B870 2e0900b4 cbz      x14, #0x29b994
0029B874 cf0540f9 ldr      x15, [x14, #8]
0029B878 1f010feb cmp      x8, x15
0029B87C 21ffff54 b.ne     #0x29b860
0029B880 cf0940f9 ldr      x15, [x14, #0x10]
0029B884 ff0108eb cmp      x15, x8
0029B888 21ffff54 b.ne     #0x29b86c
0029B88C 5f0500f1 cmp      x10, #1
0029B890 a8020054 b.hi     #0x29b8e4
0029B894 6d01088a and      x13, x11, x8
0029B898 18000014 b        #0x29b8f8
0029B89C 1f2003d5 nop      
0029B8A0 ff010deb cmp      x15, x13
0029B8A4 81070054 b.ne     #0x29b994
0029B8A8 ce0140f9 ldr      x14, [x14]
0029B8AC 4e0700b4 cbz      x14, #0x29b994
0029B8B0 cf0540f9 ldr      x15, [x14, #8]
0029B8B4 1f010feb cmp      x8, x15
0029B8B8 c1000054 b.ne     #0x29b8d0
0029B8BC cf0940f9 ldr      x15, [x14, #0x10]
0029B8C0 ff0108eb cmp      x15, x8
0029B8C4 21ffff54 b.ne     #0x29b8a8
0029B8C8 f1ffff17 b        #0x29b88c
0029B8CC 1f2003d5 nop      
0029B8D0 ff0109eb cmp      x15, x9
0029B8D4 63feff54 b.lo     #0x29b8a0
0029B8D8 f009c99a udiv     x16, x15, x9
0029B8DC 0fbe099b msub     x15, x16, x9, x15
0029B8E0 f0ffff17 b        #0x29b8a0
0029B8E4 1f0109eb cmp      x8, x9
0029B8E8 ed0308aa mov      x13, x8
0029B8EC 63000054 b.lo     #0x29b8f8
0029B8F0 0d09c99a udiv     x13, x8, x9
0029B8F4 ada1099b msub     x13, x13, x9, x8
0029B8F8 8c796df8 ldr      x12, [x12, x13, lsl #3]
0029B8FC ec0400b4 cbz      x12, #0x29b998
0029B900 8c0140f9 ldr      x12, [x12]
0029B904 ac0400b4 cbz      x12, #0x29b998
0029B908 5f0900f1 cmp      x10, #2
0029B90C a2020054 b.hs     #0x29b960
0029B910 06000014 b        #0x29b928
0029B914 29010b8a and      x9, x9, x11
0029B918 3f010deb cmp      x9, x13
0029B91C e1030054 b.ne     #0x29b998
0029B920 8c0140f9 ldr      x12, [x12]
0029B924 ac0300b4 cbz      x12, #0x29b998
0029B928 890540f9 ldr      x9, [x12, #8]
0029B92C 1f0109eb cmp      x8, x9
0029B930 21ffff54 b.ne     #0x29b914
0029B934 890940f9 ldr      x9, [x12, #0x10]
0029B938 3f0108eb cmp      x9, x8
0029B93C 21ffff54 b.ne     #0x29b920
0029B940 801940f9 ldr      x0, [x12, #0x30]
0029B944 fd7bc1a8 ldp      x29, x30, [sp], #0x10
0029B948 c0035fd6 ret      
0029B94C 1f2003d5 nop      
0029B950 5f010deb cmp      x10, x13
0029B954 21020054 b.ne     #0x29b998
0029B958 8c0140f9 ldr      x12, [x12]
0029B95C ec0100b4 cbz      x12, #0x29b998
0029B960 8a0540f9 ldr      x10, [x12, #8]
0029B964 1f010aeb cmp      x8, x10
0029B968 c1000054 b.ne     #0x29b980
0029B96C 8a0940f9 ldr      x10, [x12, #0x10]
0029B970 5f0108eb cmp      x10, x8
0029B974 21ffff54 b.ne     #0x29b958
0029B978 f2ffff17 b        #0x29b940
0029B97C 1f2003d5 nop      
0029B980 5f0109eb cmp      x10, x9
0029B984 63feff54 b.lo     #0x29b950
0029B988 4b09c99a udiv     x11, x10, x9
0029B98C 6aa9099b msub     x10, x11, x9, x10
0029B990 f0ffff17 b        #0x29b950
0029B994 6b6a0d94 bl       #0x5f6340
0029B998 a01b00d0 adrp     x0, #0x611000
0029B99C 00ac2f91 add      x0, x0, #0xbeb
0029B9A0 f8f9f597 bl       #0x1a180
~~~
### 0x29dbe0 (1528 bytes; 382 slots)
~~~asm
0029DBE0 ffc303d1 sub      sp, sp, #0xf0
0029DBE4 fd7b09a9 stp      x29, x30, [sp, #0x90]
0029DBE8 fc6f0aa9 stp      x28, x27, [sp, #0xa0]
0029DBEC fa670ba9 stp      x26, x25, [sp, #0xb0]
0029DBF0 f85f0ca9 stp      x24, x23, [sp, #0xc0]
0029DBF4 f6570da9 stp      x22, x21, [sp, #0xd0]
0029DBF8 f44f0ea9 stp      x20, x19, [sp, #0xe0]
0029DBFC fd430291 add      x29, sp, #0x90
0029DC00 292800d0 adrp     x9, #0x7a3000
0029DC04 130040f9 ldr      x19, [x0]
0029DC08 392800d0 adrp     x25, #0x7a3000
0029DC0C 280040f9 ldr      x8, [x1]
0029DC10 3c2800b0 adrp     x28, #0x7a2000
0029DC14 1bbd9ed2 mov      x27, #0xf5e8
0029DC18 dbcbadf2 movk     x27, #0x6e5e, lsl #16
0029DC1C 292541f9 ldr      x9, [x9, #0x248]
0029DC20 b8c884d2 mov      x24, #0x2645
0029DC24 5884b0f2 movk     x24, #0x8422, lsl #16
0029DC28 f50301aa mov      x21, x1
0029DC2C 2b0140f9 ldr      x11, [x9]
0029DC30 392b41f9 ldr      x25, [x25, #0x250]
0029DC34 3b53cff2 movk     x27, #0x7a99, lsl #32
0029DC38 1b9afcf2 movk     x27, #0xe4d0, lsl #48
0029DC3C 989cd3f2 movk     x24, #0x9ce4, lsl #32
0029DC40 587ef9f2 movk     x24, #0xcbf2, lsl #48
0029DC44 2a0340f9 ldr      x10, [x25]
0029DC48 9c1f46f9 ldr      x28, [x28, #0xc38]
0029DC4C 1f010beb cmp      x8, x11
0029DC50 14d09252 mov      w20, #0x9680
0029DC54 1413a072 movk     w20, #0x98, lsl #16
0029DC58 9a1b00d0 adrp     x26, #0x60f000
0029DC5C 5a0f1a91 add      x26, x26, #0x683
0029DC60 890340f9 ldr      x9, [x28]
0029DC64 04114afa ccmp     x8, x10, #4, ne
0029DC68 041149fa ccmp     x8, x9, #4, ne
0029DC6C c10d0054 b.ne     #0x29de24
0029DC70 c81b0090 adrp     x8, #0x615000
0029DC74 08050491 add      x8, x8, #0x101
0029DC78 a06300d1 sub      x0, x29, #0x18
0029DC7C bba33ea9 stp      x27, x8, [x29, #-0x18]
0029DC80 88008052 mov      w8, #4
0029DC84 a8831ff8 stur     x8, [x29, #-8]
0029DC88 a8e300d1 sub      x8, x29, #0x38
0029DC8C fc031aaa mov      x28, x26
0029DC90 fa0318aa mov      x26, x24
0029DC94 7a2d0994 bl       #0x4e927c
0029DC98 a1e300d1 sub      x1, x29, #0x38
0029DC9C e00313aa mov      x0, x19
0029DCA0 ccf6ff97 bl       #0x29b7d0
0029DCA4 770640f9 ldr      x23, [x19, #8]
0029DCA8 f60300aa mov      x22, x0
0029DCAC e8230091 add      x8, sp, #8
0029DCB0 a06300d1 sub      x0, x29, #0x18
0029DCB4 78a20291 add      x24, x19, #0xa8
0029DCB8 712d0994 bl       #0x4e927c
0029DCBC e80740f9 ldr      x8, [sp, #8]
0029DCC0 1f011beb cmp      x8, x27
0029DCC4 e1000054 b.ne     #0x29dce0
0029DCC8 c01b0090 adrp     x0, #0x615000
0029DCCC 00040491 add      x0, x0, #0x101
0029DCD0 e8a30091 add      x8, sp, #0x28
0029DCD4 e10318aa mov      x1, x24
0029DCD8 b797fc97 bl       #0x1c3bb4
0029DCDC 05000014 b        #0x29dcf0
0029DCE0 e8a30091 add      x8, sp, #0x28
0029DCE4 e0230091 add      x0, sp, #8
0029DCE8 e10318aa mov      x1, x24
0029DCEC bd72fd97 bl       #0x1fa7e0
0029DCF0 e2a30091 add      x2, sp, #0x28
0029DCF4 e00316aa mov      x0, x22
0029DCF8 e10317aa mov      x1, x23
0029DCFC 59e8ff97 bl       #0x297e60
0029DD00 e82340f9 ldr      x8, [sp, #0x40]
0029DD04 f8031aaa mov      x24, x26
0029DD08 c80000b4 cbz      x8, #0x29dd20
0029DD0C e01740f9 ldr      x0, [sp, #0x28]
0029DD10 800000b4 cbz      x0, #0x29dd20
0029DD14 088c44f8 ldr      x8, [x0, #0x48]!
0029DD18 080d40f9 ldr      x8, [x8, #0x18]
0029DD1C 00013fd6 blr      x8
0029DD20 e02740f9 ldr      x0, [sp, #0x48]
0029DD24 fa031caa mov      x26, x28
0029DD28 ffe302a9 stp      xzr, x24, [sp, #0x28]
0029DD2C fcff03a9 stp      x28, xzr, [sp, #0x38]
0029DD30 800000b4 cbz      x0, #0x29dd40
0029DD34 088c44f8 ldr      x8, [x0, #0x48]!
0029DD38 080d40f9 ldr      x8, [x8, #0x18]
0029DD3C 00013fd6 blr      x8
0029DD40 ff2700f9 str      xzr, [sp, #0x48]
0029DD44 3c2800b0 adrp     x28, #0x7a2000
0029DD48 e01340f9 ldr      x0, [sp, #0x20]
0029DD4C ff5300b9 str      wzr, [sp, #0x50]
0029DD50 9c1f46f9 ldr      x28, [x28, #0xc38]
0029DD54 800000b4 cbz      x0, #0x29dd64
0029DD58 088c44f8 ldr      x8, [x0, #0x48]!
0029DD5C 080d40f9 ldr      x8, [x8, #0x18]
0029DD60 00013fd6 blr      x8
0029DD64 a0035ef8 ldur     x0, [x29, #-0x20]
0029DD68 000100b4 cbz      x0, #0x29dd88
0029DD6C 088c44f8 ldr      x8, [x0, #0x48]!
0029DD70 080d40f9 ldr      x8, [x8, #0x18]
0029DD74 00013fd6 blr      x8
0029DD78 04000014 b        #0x29dd88
0029DD7C 1f2003d5 nop      
0029DD80 e00314aa mov      x0, x20
0029DD84 73610d94 bl       #0x5f6350
0029DD88 e8a30091 add      x8, sp, #0x28
0029DD8C a06300d1 sub      x0, x29, #0x18
0029DD90 3b2d0994 bl       #0x4e927c
0029DD94 e1a30091 add      x1, sp, #0x28
0029DD98 e00313aa mov      x0, x19
0029DD9C 8df6ff97 bl       #0x29b7d0
0029DDA0 78e8ff97 bl       #0x297f80
0029DDA4 f603002a mov      w22, w0
0029DDA8 e02340f9 ldr      x0, [sp, #0x40]
0029DDAC 800000b4 cbz      x0, #0x29ddbc
0029DDB0 088c44f8 ldr      x8, [x0, #0x48]!
0029DDB4 080d40f9 ldr      x8, [x8, #0x18]
0029DDB8 00013fd6 blr      x8
0029DDBC 36fe0736 tbz      w22, #0, #0x29dd80
0029DDC0 e8a30091 add      x8, sp, #0x28
0029DDC4 a06300d1 sub      x0, x29, #0x18
0029DDC8 2d2d0994 bl       #0x4e927c
0029DDCC e1a30091 add      x1, sp, #0x28
0029DDD0 e00313aa mov      x0, x19
0029DDD4 7ff6ff97 bl       #0x29b7d0
0029DDD8 72e8ff97 bl       #0x297fa0
0029DDDC 76c20691 add      x22, x19, #0x1b0
0029DDE0 a0831cb8 stur     w0, [x29, #-0x38]
0029DDE4 e00316aa mov      x0, x22
0029DDE8 1a620d94 bl       #0x5f6650
0029DDEC 60ca40f9 ldr      x0, [x19, #0x190]
0029DDF0 600000b4 cbz      x0, #0x29ddfc
0029DDF4 a1e300d1 sub      x1, x29, #0x38
0029DDF8 f30a0094 bl       #0x2a09c4
0029DDFC e00316aa mov      x0, x22
0029DE00 18620d94 bl       #0x5f6660
0029DE04 e02340f9 ldr      x0, [sp, #0x40]
0029DE08 800000b4 cbz      x0, #0x29de18
0029DE0C 088c44f8 ldr      x8, [x0, #0x48]!
0029DE10 080d40f9 ldr      x8, [x8, #0x18]
0029DE14 00013fd6 blr      x8
0029DE18 a80240f9 ldr      x8, [x21]
0029DE1C 2a0340f9 ldr      x10, [x25]
0029DE20 890340f9 ldr      x9, [x28]
0029DE24 2b2800d0 adrp     x11, #0x7a3000
0029DE28 1f010aeb cmp      x8, x10
0029DE2C 6b2d41f9 ldr      x11, [x11, #0x258]
0029DE30 6b0140f9 ldr      x11, [x11]
0029DE34 04114bfa ccmp     x8, x11, #4, ne
0029DE38 041149fa ccmp     x8, x9, #4, ne
0029DE3C 210d0054 b.ne     #0x29dfe0
0029DE40 c81b0090 adrp     x8, #0x615000
0029DE44 08050491 add      x8, x8, #0x101
0029DE48 a06300d1 sub      x0, x29, #0x18
0029DE4C bba33ea9 stp      x27, x8, [x29, #-0x18]
0029DE50 88008052 mov      w8, #4
0029DE54 a8831ff8 stur     x8, [x29, #-8]
0029DE58 a8e300d1 sub      x8, x29, #0x38
0029DE5C f90318aa mov      x25, x24
0029DE60 072d0994 bl       #0x4e927c
0029DE64 a1e300d1 sub      x1, x29, #0x38
0029DE68 e00313aa mov      x0, x19
0029DE6C 59f6ff97 bl       #0x29b7d0
0029DE70 770640f9 ldr      x23, [x19, #8]
0029DE74 f60300aa mov      x22, x0
0029DE78 e8230091 add      x8, sp, #8
0029DE7C a06300d1 sub      x0, x29, #0x18
0029DE80 78a20291 add      x24, x19, #0xa8
0029DE84 fe2c0994 bl       #0x4e927c
0029DE88 e80740f9 ldr      x8, [sp, #8]
0029DE8C 1f011beb cmp      x8, x27
0029DE90 e1000054 b.ne     #0x29deac
0029DE94 c01b0090 adrp     x0, #0x615000
0029DE98 00dc3d91 add      x0, x0, #0xf77
0029DE9C e8a30091 add      x8, sp, #0x28
0029DEA0 e10318aa mov      x1, x24
0029DEA4 da96fc97 bl       #0x1c3a0c
0029DEA8 05000014 b        #0x29debc
0029DEAC e8a30091 add      x8, sp, #0x28
0029DEB0 e0230091 add      x0, sp, #8
0029DEB4 e10318aa mov      x1, x24
0029DEB8 4a72fd97 bl       #0x1fa7e0
0029DEBC e2a30091 add      x2, sp, #0x28
0029DEC0 e00316aa mov      x0, x22
0029DEC4 e10317aa mov      x1, x23
0029DEC8 e6e7ff97 bl       #0x297e60
0029DECC e82340f9 ldr      x8, [sp, #0x40]
0029DED0 f80319aa mov      x24, x25
0029DED4 c80000b4 cbz      x8, #0x29deec
0029DED8 e01740f9 ldr      x0, [sp, #0x28]
0029DEDC 800000b4 cbz      x0, #0x29deec
0029DEE0 088c44f8 ldr      x8, [x0, #0x48]!
0029DEE4 080d40f9 ldr      x8, [x8, #0x18]
0029DEE8 00013fd6 blr      x8
0029DEEC e02740f9 ldr      x0, [sp, #0x48]
0029DEF0 ffe302a9 stp      xzr, x24, [sp, #0x28]
0029DEF4 faff03a9 stp      x26, xzr, [sp, #0x38]
0029DEF8 800000b4 cbz      x0, #0x29df08
0029DEFC 088c44f8 ldr      x8, [x0, #0x48]!
0029DF00 080d40f9 ldr      x8, [x8, #0x18]
0029DF04 00013fd6 blr      x8
0029DF08 e01340f9 ldr      x0, [sp, #0x20]
0029DF0C ff2700f9 str      xzr, [sp, #0x48]
0029DF10 ff5300b9 str      wzr, [sp, #0x50]
0029DF14 800000b4 cbz      x0, #0x29df24
0029DF18 088c44f8 ldr      x8, [x0, #0x48]!
0029DF1C 080d40f9 ldr      x8, [x8, #0x18]
0029DF20 00013fd6 blr      x8
0029DF24 a0035ef8 ldur     x0, [x29, #-0x20]
0029DF28 000100b4 cbz      x0, #0x29df48
0029DF2C 088c44f8 ldr      x8, [x0, #0x48]!
0029DF30 080d40f9 ldr      x8, [x8, #0x18]
0029DF34 00013fd6 blr      x8
0029DF38 04000014 b        #0x29df48
0029DF3C 1f2003d5 nop      
0029DF40 e00314aa mov      x0, x20
0029DF44 03610d94 bl       #0x5f6350
0029DF48 e8a30091 add      x8, sp, #0x28
0029DF4C a06300d1 sub      x0, x29, #0x18
0029DF50 cb2c0994 bl       #0x4e927c
0029DF54 e1a30091 add      x1, sp, #0x28
0029DF58 e00313aa mov      x0, x19
0029DF5C 1df6ff97 bl       #0x29b7d0
0029DF60 08e8ff97 bl       #0x297f80
0029DF64 f603002a mov      w22, w0
0029DF68 e02340f9 ldr      x0, [sp, #0x40]
0029DF6C 800000b4 cbz      x0, #0x29df7c
0029DF70 088c44f8 ldr      x8, [x0, #0x48]!
0029DF74 080d40f9 ldr      x8, [x8, #0x18]
0029DF78 00013fd6 blr      x8
0029DF7C 36fe0736 tbz      w22, #0, #0x29df40
0029DF80 e8a30091 add      x8, sp, #0x28
0029DF84 a06300d1 sub      x0, x29, #0x18
0029DF88 bd2c0994 bl       #0x4e927c
0029DF8C e1a30091 add      x1, sp, #0x28
0029DF90 e00313aa mov      x0, x19
0029DF94 0ff6ff97 bl       #0x29b7d0
0029DF98 02e8ff97 bl       #0x297fa0
0029DF9C 76c20691 add      x22, x19, #0x1b0
0029DFA0 a0831cb8 stur     w0, [x29, #-0x38]
0029DFA4 e00316aa mov      x0, x22
0029DFA8 aa610d94 bl       #0x5f6650
0029DFAC 60ca40f9 ldr      x0, [x19, #0x190]
0029DFB0 600000b4 cbz      x0, #0x29dfbc
0029DFB4 a1e300d1 sub      x1, x29, #0x38
0029DFB8 830a0094 bl       #0x2a09c4
0029DFBC e00316aa mov      x0, x22
0029DFC0 a8610d94 bl       #0x5f6660
0029DFC4 e02340f9 ldr      x0, [sp, #0x40]
0029DFC8 800000b4 cbz      x0, #0x29dfd8
0029DFCC 088c44f8 ldr      x8, [x0, #0x48]!
0029DFD0 080d40f9 ldr      x8, [x8, #0x18]
0029DFD4 00013fd6 blr      x8
0029DFD8 a80240f9 ldr      x8, [x21]
0029DFDC 890340f9 ldr      x9, [x28]
0029DFE0 2a2800d0 adrp     x10, #0x7a3000
0029DFE4 4a3141f9 ldr      x10, [x10, #0x260]
0029DFE8 4a0140f9 ldr      x10, [x10]
0029DFEC 1f010aeb cmp      x8, x10
0029DFF0 60000054 b.eq     #0x29dffc
0029DFF4 1f0109eb cmp      x8, x9
0029DFF8 010e0054 b.ne     #0x29e1b8
0029DFFC a8d986d2 mov      x8, #0x36cd
0029E000 e815bdf2 movk     x8, #0xe8af, lsl #16
0029E004 891b0090 adrp     x9, #0x60e000
0029E008 29293d91 add      x9, x9, #0xf4a
0029E00C 286bcaf2 movk     x8, #0x5359, lsl #32
0029E010 c83bfff2 movk     x8, #0xf9de, lsl #48
0029E014 a8a73ea9 stp      x8, x9, [x29, #-0x18]
0029E018 48018052 mov      w8, #0xa
0029E01C a8831ff8 stur     x8, [x29, #-8]
0029E020 a8e300d1 sub      x8, x29, #0x38
0029E024 a06300d1 sub      x0, x29, #0x18
0029E028 952c0994 bl       #0x4e927c
0029E02C a1e300d1 sub      x1, x29, #0x38
0029E030 e00313aa mov      x0, x19
0029E034 e7f5ff97 bl       #0x29b7d0
0029E038 760640f9 ldr      x22, [x19, #8]
0029E03C f50300aa mov      x21, x0
0029E040 e8230091 add      x8, sp, #8
0029E044 a06300d1 sub      x0, x29, #0x18
0029E048 77a20291 add      x23, x19, #0xa8
0029E04C 8c2c0994 bl       #0x4e927c
0029E050 e80740f9 ldr      x8, [sp, #8]
0029E054 1f011beb cmp      x8, x27
0029E058 a1010054 b.ne     #0x29e08c
0029E05C a01b00f0 adrp     x0, #0x615000
0029E060 00040491 add      x0, x0, #0x101
0029E064 e8a30091 add      x8, sp, #0x28
0029E068 e10317aa mov      x1, x23
0029E06C d296fc97 bl       #0x1c3bb4
0029E070 e2a30091 add      x2, sp, #0x28
0029E074 e00315aa mov      x0, x21
0029E078 e10316aa mov      x1, x22
0029E07C 79e7ff97 bl       #0x297e60
0029E080 e82340f9 ldr      x8, [sp, #0x40]
0029E084 880100b5 cbnz     x8, #0x29e0b4
0029E088 10000014 b        #0x29e0c8
0029E08C e8a30091 add      x8, sp, #0x28
0029E090 e0230091 add      x0, sp, #8
0029E094 e10317aa mov      x1, x23
0029E098 d271fd97 bl       #0x1fa7e0
0029E09C e2a30091 add      x2, sp, #0x28
0029E0A0 e00315aa mov      x0, x21
0029E0A4 e10316aa mov      x1, x22
0029E0A8 6ee7ff97 bl       #0x297e60
0029E0AC e82340f9 ldr      x8, [sp, #0x40]
0029E0B0 c80000b4 cbz      x8, #0x29e0c8
0029E0B4 e01740f9 ldr      x0, [sp, #0x28]
0029E0B8 800000b4 cbz      x0, #0x29e0c8
0029E0BC 088c44f8 ldr      x8, [x0, #0x48]!
0029E0C0 080d40f9 ldr      x8, [x8, #0x18]
0029E0C4 00013fd6 blr      x8
0029E0C8 e02740f9 ldr      x0, [sp, #0x48]
0029E0CC ffe302a9 stp      xzr, x24, [sp, #0x28]
0029E0D0 faff03a9 stp      x26, xzr, [sp, #0x38]
0029E0D4 800000b4 cbz      x0, #0x29e0e4
0029E0D8 088c44f8 ldr      x8, [x0, #0x48]!
0029E0DC 080d40f9 ldr      x8, [x8, #0x18]
0029E0E0 00013fd6 blr      x8
0029E0E4 e01340f9 ldr      x0, [sp, #0x20]
0029E0E8 ff2700f9 str      xzr, [sp, #0x48]
0029E0EC ff5300b9 str      wzr, [sp, #0x50]
0029E0F0 800000b4 cbz      x0, #0x29e100
0029E0F4 088c44f8 ldr      x8, [x0, #0x48]!
0029E0F8 080d40f9 ldr      x8, [x8, #0x18]
0029E0FC 00013fd6 blr      x8
0029E100 a0035ef8 ldur     x0, [x29, #-0x20]
0029E104 200100b4 cbz      x0, #0x29e128
0029E108 088c44f8 ldr      x8, [x0, #0x48]!
0029E10C 080d40f9 ldr      x8, [x8, #0x18]
0029E110 00013fd6 blr      x8
0029E114 05000014 b        #0x29e128
0029E118 1f2003d5 nop      
0029E11C 1f2003d5 nop      
0029E120 e00314aa mov      x0, x20
0029E124 8b600d94 bl       #0x5f6350
0029E128 e8a30091 add      x8, sp, #0x28
0029E12C a06300d1 sub      x0, x29, #0x18
0029E130 532c0994 bl       #0x4e927c
0029E134 e1a30091 add      x1, sp, #0x28
0029E138 e00313aa mov      x0, x19
0029E13C a5f5ff97 bl       #0x29b7d0
0029E140 90e7ff97 bl       #0x297f80
0029E144 f503002a mov      w21, w0
0029E148 e02340f9 ldr      x0, [sp, #0x40]
0029E14C 800000b4 cbz      x0, #0x29e15c
0029E150 088c44f8 ldr      x8, [x0, #0x48]!
0029E154 080d40f9 ldr      x8, [x8, #0x18]
0029E158 00013fd6 blr      x8
0029E15C 35fe0736 tbz      w21, #0, #0x29e120
0029E160 e8a30091 add      x8, sp, #0x28
0029E164 a06300d1 sub      x0, x29, #0x18
0029E168 452c0994 bl       #0x4e927c
0029E16C e1a30091 add      x1, sp, #0x28
0029E170 e00313aa mov      x0, x19
0029E174 97f5ff97 bl       #0x29b7d0
0029E178 8ae7ff97 bl       #0x297fa0
0029E17C 74c20691 add      x20, x19, #0x1b0
0029E180 a0831cb8 stur     w0, [x29, #-0x38]
0029E184 e00314aa mov      x0, x20
0029E188 32610d94 bl       #0x5f6650
0029E18C 60ca40f9 ldr      x0, [x19, #0x190]
0029E190 600000b4 cbz      x0, #0x29e19c
0029E194 a1e300d1 sub      x1, x29, #0x38
0029E198 0b0a0094 bl       #0x2a09c4
0029E19C e00314aa mov      x0, x20
0029E1A0 30610d94 bl       #0x5f6660
0029E1A4 e02340f9 ldr      x0, [sp, #0x40]
0029E1A8 800000b4 cbz      x0, #0x29e1b8
0029E1AC 088c44f8 ldr      x8, [x0, #0x48]!
0029E1B0 080d40f9 ldr      x8, [x8, #0x18]
0029E1B4 00013fd6 blr      x8
0029E1B8 f44f4ea9 ldp      x20, x19, [sp, #0xe0]
0029E1BC f6574da9 ldp      x22, x21, [sp, #0xd0]
0029E1C0 f85f4ca9 ldp      x24, x23, [sp, #0xc0]
0029E1C4 fa674ba9 ldp      x26, x25, [sp, #0xb0]
0029E1C8 fc6f4aa9 ldp      x28, x27, [sp, #0xa0]
0029E1CC fd7b49a9 ldp      x29, x30, [sp, #0x90]
0029E1D0 ffc30391 add      sp, sp, #0xf0
0029E1D4 c0035fd6 ret      
~~~
### 0x2a09c4 (28 bytes; 7 slots)
~~~asm
002A09C4 081040f9 ldr      x8, [x0, #0x20]
002A09C8 290040b9 ldr      w9, [x1]
002A09CC 0a0944b9 ldr      w10, [x8, #0x408]
002A09D0 3f010a6b cmp      w9, w10
002A09D4 29c18a1a csel     w9, w9, w10, gt
002A09D8 090904b9 str      w9, [x8, #0x408]
002A09DC c0035fd6 ret      
~~~
### 0x2a0f84 (96 bytes; 24 slots)
~~~asm
002A0F84 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
002A0F88 f50b00f9 str      x21, [sp, #0x10]
002A0F8C f44f02a9 stp      x20, x19, [sp, #0x20]
002A0F90 fd030091 mov      x29, sp
002A0F94 f30300aa mov      x19, x0
002A0F98 00b841f9 ldr      x0, [x0, #0x370]
002A0F9C 62e20d91 add      x2, x19, #0x378
002A0FA0 610640f9 ldr      x1, [x19, #8]
002A0FA4 d7d9ff97 bl       #0x297700
002A0FA8 75c20e91 add      x21, x19, #0x3b0
002A0FAC f403002a mov      w20, w0
002A0FB0 e00315aa mov      x0, x21
002A0FB4 a7550d94 bl       #0x5f6650
002A0FB8 9f020072 tst      w20, #1
002A0FBC 48008052 mov      w8, #2
002A0FC0 e00315aa mov      x0, x21
002A0FC4 0815881a cinc     w8, w8, eq
002A0FC8 68aa03b9 str      w8, [x19, #0x3a8]
002A0FCC a5550d94 bl       #0x5f6660
002A0FD0 e00313aa mov      x0, x19
002A0FD4 f44f42a9 ldp      x20, x19, [sp, #0x20]
002A0FD8 f50b40f9 ldr      x21, [sp, #0x10]
002A0FDC fd7bc3a8 ldp      x29, x30, [sp], #0x30
002A0FE0 1a1f0914 b        #0x4e8c48
~~~
### 0x2a0fe4 (136 bytes; 34 slots)
~~~asm
002A0FE4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
002A0FE8 f30b00f9 str      x19, [sp, #0x10]
002A0FEC fd030091 mov      x29, sp
002A0FF0 f30300aa mov      x19, x0
002A0FF4 00c00e91 add      x0, x0, #0x3b0
002A0FF8 e2540d94 bl       #0x5f6380
002A0FFC 68ca41f9 ldr      x8, [x19, #0x390]
002A1000 c80000b4 cbz      x8, #0x2a1018
002A1004 60be41f9 ldr      x0, [x19, #0x378]
002A1008 800000b4 cbz      x0, #0x2a1018
002A100C 088c44f8 ldr      x8, [x0, #0x48]!
002A1010 080d40f9 ldr      x8, [x8, #0x18]
002A1014 00013fd6 blr      x8
002A1018 60ce41f9 ldr      x0, [x19, #0x398]
002A101C a8c884d2 mov      x8, #0x2645
002A1020 4884b0f2 movk     x8, #0x8422, lsl #16
002A1024 889cd3f2 movk     x8, #0x9ce4, lsl #32
002A1028 487ef9f2 movk     x8, #0xcbf2, lsl #48
002A102C 7fbe01f9 str      xzr, [x19, #0x378]
002A1030 68c201f9 str      x8, [x19, #0x380]
002A1034 681b00d0 adrp     x8, #0x60f000
002A1038 080d1a91 add      x8, x8, #0x683
002A103C 68c601f9 str      x8, [x19, #0x388]
002A1040 7fca01f9 str      xzr, [x19, #0x390]
002A1044 800000b4 cbz      x0, #0x2a1054
002A1048 088c44f8 ldr      x8, [x0, #0x48]!
002A104C 080d40f9 ldr      x8, [x8, #0x18]
002A1050 00013fd6 blr      x8
002A1054 7fce01f9 str      xzr, [x19, #0x398]
002A1058 e00313aa mov      x0, x19
002A105C 7fa203b9 str      wzr, [x19, #0x3a0]
002A1060 f30b40f9 ldr      x19, [sp, #0x10]
002A1064 fd7bc2a8 ldp      x29, x30, [sp], #0x20
002A1068 cc1d0914 b        #0x4e8798
~~~
### 0x2a106c (136 bytes; 34 slots)
~~~asm
002A106C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
002A1070 f30b00f9 str      x19, [sp, #0x10]
002A1074 fd030091 mov      x29, sp
002A1078 f30300aa mov      x19, x0
002A107C 00c00e91 add      x0, x0, #0x3b0
002A1080 c0540d94 bl       #0x5f6380
002A1084 68ca41f9 ldr      x8, [x19, #0x390]
002A1088 c80000b4 cbz      x8, #0x2a10a0
002A108C 60be41f9 ldr      x0, [x19, #0x378]
002A1090 800000b4 cbz      x0, #0x2a10a0
002A1094 088c44f8 ldr      x8, [x0, #0x48]!
002A1098 080d40f9 ldr      x8, [x8, #0x18]
002A109C 00013fd6 blr      x8
002A10A0 60ce41f9 ldr      x0, [x19, #0x398]
002A10A4 a8c884d2 mov      x8, #0x2645
002A10A8 4884b0f2 movk     x8, #0x8422, lsl #16
002A10AC 889cd3f2 movk     x8, #0x9ce4, lsl #32
002A10B0 487ef9f2 movk     x8, #0xcbf2, lsl #48
002A10B4 7fbe01f9 str      xzr, [x19, #0x378]
002A10B8 68c201f9 str      x8, [x19, #0x380]
002A10BC 681b00d0 adrp     x8, #0x60f000
002A10C0 080d1a91 add      x8, x8, #0x683
002A10C4 68c601f9 str      x8, [x19, #0x388]
002A10C8 7fca01f9 str      xzr, [x19, #0x390]
002A10CC 800000b4 cbz      x0, #0x2a10dc
002A10D0 088c44f8 ldr      x8, [x0, #0x48]!
002A10D4 080d40f9 ldr      x8, [x8, #0x18]
002A10D8 00013fd6 blr      x8
002A10DC 7fce01f9 str      xzr, [x19, #0x398]
002A10E0 e00313aa mov      x0, x19
002A10E4 7fa203b9 str      wzr, [x19, #0x3a0]
002A10E8 f30b40f9 ldr      x19, [sp, #0x10]
002A10EC fd7bc2a8 ldp      x29, x30, [sp], #0x20
002A10F0 aa1d0914 b        #0x4e8798
~~~
### 0x4e8864 (120 bytes; 30 slots)
~~~asm
004E8864 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
004E8868 f70b00f9 str      x23, [sp, #0x10]
004E886C f65702a9 stp      x22, x21, [sp, #0x20]
004E8870 f44f03a9 stp      x20, x19, [sp, #0x30]
004E8874 fd030091 mov      x29, sp
004E8878 08640991 add      x8, x0, #0x259
004E887C f30300aa mov      x19, x0
004E8880 08fddf08 ldarb    w8, [x8]
004E8884 a8000037 tbnz     w8, #0, #0x4e8898
004E8888 680240f9 ldr      x8, [x19]
004E888C e00313aa mov      x0, x19
004E8890 082540f9 ldr      x8, [x8, #0x48]
004E8894 00013fd6 blr      x8
004E8898 685e40a9 ldp      x8, x23, [x19]
004E889C e00313aa mov      x0, x19
004E88A0 745641a9 ldp      x20, x21, [x19, #0x10]
004E88A4 761240f9 ldr      x22, [x19, #0x20]
004E88A8 080140f9 ldr      x8, [x8]
004E88AC 00013fd6 blr      x8
004E88B0 e80240f9 ldr      x8, [x23]
004E88B4 e00317aa mov      x0, x23
004E88B8 e10314aa mov      x1, x20
004E88BC e20315aa mov      x2, x21
004E88C0 e30316aa mov      x3, x22
004E88C4 f70b40f9 ldr      x23, [sp, #0x10]
004E88C8 f44f43a9 ldp      x20, x19, [sp, #0x30]
004E88CC 040d40f9 ldr      x4, [x8, #0x18]
004E88D0 f65742a9 ldp      x22, x21, [sp, #0x20]
004E88D4 fd7bc4a8 ldp      x29, x30, [sp], #0x40
004E88D8 80001fd6 br       x4
~~~
### 0x4e88dc (116 bytes; 29 slots)
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
### 0x4e896c (40 bytes; 10 slots)
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
### 0x4e8af0 (344 bytes; 86 slots)
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
### 0x4e8c48 (16 bytes; 4 slots)
~~~asm
004E8C48 08600991 add      x8, x0, #0x258
004E8C4C 29008052 mov      w9, #1
004E8C50 09fd9f08 stlrb    w9, [x8]
004E8C54 c0035fd6 ret      
~~~
### 0x4fc210 (104 bytes; 26 slots)
~~~asm
004FC210 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
004FC214 fc0b00f9 str      x28, [sp, #0x10]
004FC218 fd030091 mov      x29, sp
004FC21C f44f02a9 stp      x20, x19, [sp, #0x20]
004FC220 ff830ad1 sub      sp, sp, #0x2a0
004FC224 f30301aa mov      x19, x1
004FC228 f40300aa mov      x20, x0
004FC22C c2528052 mov      w2, #0x296
004FC230 e02b0091 add      x0, sp, #0xa
004FC234 e1031f2a mov      w1, wzr
004FC238 c6e70394 bl       #0x5f6150
004FC23C e12b0091 add      x1, sp, #0xa
004FC240 e00313aa mov      x0, x19
004FC244 d4d30094 bl       #0x531194
004FC248 e02b0091 add      x0, sp, #0xa
004FC24C 61008052 mov      w1, #3
004FC250 11230094 bl       #0x504e94
004FC254 e12b0091 add      x1, sp, #0xa
004FC258 e00314aa mov      x0, x20
004FC25C 93210094 bl       #0x5048a8
004FC260 00000012 and      w0, w0, #1
004FC264 ff830a91 add      sp, sp, #0x2a0
004FC268 f44f42a9 ldp      x20, x19, [sp, #0x20]
004FC26C fc0b40f9 ldr      x28, [sp, #0x10]
004FC270 fd7bc3a8 ldp      x29, x30, [sp], #0x30
004FC274 c0035fd6 ret      
~~~
### 0x4fc278 (112 bytes; 28 slots)
~~~asm
004FC278 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
004FC27C fc0b00f9 str      x28, [sp, #0x10]
004FC280 fd030091 mov      x29, sp
004FC284 f44f02a9 stp      x20, x19, [sp, #0x20]
004FC288 ff830ad1 sub      sp, sp, #0x2a0
004FC28C f40301aa mov      x20, x1
004FC290 f30300aa mov      x19, x0
004FC294 c2528052 mov      w2, #0x296
004FC298 e02b0091 add      x0, sp, #0xa
004FC29C e1031f2a mov      w1, wzr
004FC2A0 ace70394 bl       #0x5f6150
004FC2A4 e02b0091 add      x0, sp, #0xa
004FC2A8 e10314aa mov      x1, x20
004FC2AC 2b220094 bl       #0x504b58
004FC2B0 f403002a mov      w20, w0
004FC2B4 e0000036 tbz      w0, #0, #0x4fc2d0
004FC2B8 e12b0091 add      x1, sp, #0xa
004FC2BC e00313aa mov      x0, x19
004FC2C0 22008052 mov      w2, #1
004FC2C4 bed30094 bl       #0x5311bc
004FC2C8 68008052 mov      w8, #3
004FC2CC 68520139 strb     w8, [x19, #0x54]
004FC2D0 80020012 and      w0, w20, #1
004FC2D4 ff830a91 add      sp, sp, #0x2a0
004FC2D8 f44f42a9 ldp      x20, x19, [sp, #0x20]
004FC2DC fc0b40f9 ldr      x28, [sp, #0x10]
004FC2E0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
004FC2E4 c0035fd6 ret      
~~~
