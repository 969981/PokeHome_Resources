# HOME41 focused save route audit
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
## Save route caller census and snapshot candidates
### route caller 0x225d10
00225D58 06bf0014 b        #0x255970
### route caller 0x2267b0
002268DC 3dbb0094 bl       #0x2555d0
### route caller 0x248bb0
00249088 4273ff97 bl       #0x225d90
00249110 2073ff97 bl       #0x225d90
### route caller 0x24c470
0024C880 8065ff97 bl       #0x225e80
0024C890 e466ff97 bl       #0x226420
0024D1C8 7a65ff97 bl       #0x2267b0
0024E444 335eff97 bl       #0x225d10
### route caller 0x252cc4
00252DBC 314cff97 bl       #0x225e80
00252DCC 954dff97 bl       #0x226420
00253740 1c4cff97 bl       #0x2267b0
### route caller 0x255970
00255C20 40700094 bl       #0x271d20

## Complete candidate bodies
### 0x1ba830 (76 slots)
~~~asm
001BA830 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
001BA834 f65701a9 stp      x22, x21, [sp, #0x10]
001BA838 f44f02a9 stp      x20, x19, [sp, #0x20]
001BA83C fd030091 mov      x29, sp
001BA840 f30300aa mov      x19, x0
001BA844 1356f997 bl       #0x10090
001BA848 482f0090 adrp     x8, #0x7a2000
001BA84C 60820191 add      x0, x19, #0x60
001BA850 08f141f9 ldr      x8, [x8, #0x3e0]
001BA854 c2df8952 mov      w2, #0x4efe
001BA858 a200a072 movk     w2, #5, lsl #16
001BA85C e1031f2a mov      w1, wzr
001BA860 09410091 add      x9, x8, #0x10
001BA864 690200f9 str      x9, [x19]
001BA868 09c10191 add      x9, x8, #0x70
001BA86C 08c10291 add      x8, x8, #0xb0
001BA870 69a204a9 stp      x9, x8, [x19, #0x48]
001BA874 68524191 add      x8, x19, #0x54, lsl #12
001BA878 69524191 add      x9, x19, #0x54, lsl #12
001BA87C 15813d91 add      x21, x8, #0xf60
001BA880 28c13d91 add      x8, x9, #0xf70
001BA884 1f7d00a9 stp      xzr, xzr, [x8]
001BA888 1f7d01a9 stp      xzr, xzr, [x8, #0x10]
001BA88C bf0200f9 str      xzr, [x21]
001BA890 30ee1094 bl       #0x5f6150
001BA894 48d03bd5 mrs      x8, tpidr_el0
001BA898 16c97392 and      x22, x8, #0xffffffffffffe000
001BA89C c84e40f9 ldr      x8, [x22, #0x98]
001BA8A0 1f4100f1 cmp      x8, #0x10
001BA8A4 c0050054 b.eq     #0x1ba95c
001BA8A8 740640f9 ldr      x20, [x19, #8]
001BA8AC c80e088b add      x8, x22, x8, lsl #3
001BA8B0 01628052 mov      w1, #0x310
001BA8B4 02018052 mov      w2, #8
001BA8B8 140d00f9 str      x20, [x8, #0x18]
001BA8BC e00314aa mov      x0, x20
001BA8C0 c84e40f9 ldr      x8, [x22, #0x98]
001BA8C4 08050091 add      x8, x8, #1
001BA8C8 c84e00f9 str      x8, [x22, #0x98]
001BA8CC 880240f9 ldr      x8, [x20]
001BA8D0 080940f9 ldr      x8, [x8, #0x10]
001BA8D4 00013fd6 blr      x8
001BA8D8 f30300aa mov      x19, x0
001BA8DC a00000b5 cbnz     x0, #0x1ba8f0
001BA8E0 880240f9 ldr      x8, [x20]
001BA8E4 e00314aa mov      x0, x20
001BA8E8 085d40f9 ldr      x8, [x8, #0xb8]
001BA8EC 00013fd6 blr      x8
001BA8F0 e00313aa mov      x0, x19
001BA8F4 e10314aa mov      x1, x20
001BA8F8 e2031f2a mov      w2, wzr
001BA8FC e3031f2a mov      w3, wzr
001BA900 e4031faa mov      x4, xzr
001BA904 d5f20d94 bl       #0x537458
001BA908 08628052 mov      w8, #0x310
001BA90C 09018052 mov      w9, #8
001BA910 e00313aa mov      x0, x19
001BA914 74ce00a9 stp      x20, x19, [x19, #8]
001BA918 68a601a9 stp      x8, x9, [x19, #0x18]
001BA91C c84e40f9 ldr      x8, [x22, #0x98]
001BA920 080500d1 sub      x8, x8, #1
001BA924 c84e00f9 str      x8, [x22, #0x98]
001BA928 088c44f8 ldr      x8, [x0, #0x48]!
001BA92C 080940f9 ldr      x8, [x8, #0x10]
001BA930 00013fd6 blr      x8
001BA934 a00240f9 ldr      x0, [x21]
001BA938 800000b4 cbz      x0, #0x1ba948
001BA93C 088c44f8 ldr      x8, [x0, #0x48]!
001BA940 080d40f9 ldr      x8, [x8, #0x18]
001BA944 00013fd6 blr      x8
001BA948 b30200f9 str      x19, [x21]
001BA94C f44f42a9 ldp      x20, x19, [sp, #0x20]
001BA950 f65741a9 ldp      x22, x21, [sp, #0x10]
001BA954 fd7bc3a8 ldp      x29, x30, [sp], #0x30
001BA958 c0035fd6 ret      
001BA95C ad20f997 bl       #0x2c10
~~~
### 0x225bc0 (3 slots)
~~~asm
00225BC0 402e00b0 adrp     x0, #0x7ee000
00225BC4 00c03c91 add      x0, x0, #0xf30
00225BC8 c0035fd6 ret      
~~~
### 0x225d10 (31 slots)
~~~asm
00225D10 482e00d0 adrp     x8, #0x7ef000
00225D14 085140b9 ldr      w8, [x8, #0x50]
00225D18 08050051 sub      w8, w8, #1
00225D1C 1f150071 cmp      w8, #5
00225D20 48010054 b.hi     #0x225d48
00225D24 692000f0 adrp     x9, #0x634000
00225D28 29c92f91 add      x9, x9, #0xbf2
00225D2C 8a000010 adr      x10, #0x225d3c
00225D30 2b696838 ldrb     w11, [x9, x8]
00225D34 4a090b8b add      x10, x10, x11, lsl #2
00225D38 40011fd6 br       x10
00225D3C 002e0090 adrp     x0, #0x7e5000
00225D40 00c01891 add      x0, x0, #0x630
00225D44 63b90014 b        #0x2542d0
00225D48 20008052 mov      w0, #1
00225D4C c0035fd6 ret      
00225D50 002e0090 adrp     x0, #0x7e5000
00225D54 00c01891 add      x0, x0, #0x630
00225D58 06bf0014 b        #0x255970
00225D5C 002e0090 adrp     x0, #0x7e5000
00225D60 00c01891 add      x0, x0, #0x630
00225D64 33fafd17 b        #0x1a4630
00225D68 002e0090 adrp     x0, #0x7e5000
00225D6C 00c01891 add      x0, x0, #0x630
00225D70 8882fe17 b        #0x1c6790
00225D74 002e0090 adrp     x0, #0x7e5000
00225D78 00c01891 add      x0, x0, #0x630
00225D7C 8dbb0114 b        #0x294bb0
00225D80 002e0090 adrp     x0, #0x7e5000
00225D84 00c01891 add      x0, x0, #0x630
00225D88 c692fe17 b        #0x1ca8a0
~~~
### 0x225d90 (58 slots)
~~~asm
00225D90 ff8302d1 sub      sp, sp, #0xa0
00225D94 fd7b08a9 stp      x29, x30, [sp, #0x80]
00225D98 f44f09a9 stp      x20, x19, [sp, #0x90]
00225D9C fd030291 add      x29, sp, #0x80
00225DA0 082e0090 adrp     x8, #0x7e5000
00225DA4 08c11891 add      x8, x8, #0x630
00225DA8 89db8652 mov      w9, #0x36dc
00225DAC 2903a072 movk     w9, #0x19, lsl #16
00225DB0 146969b8 ldr      w20, [x8, x9]
00225DB4 e85d9552 mov      w8, #0xaaef
00225DB8 089eac72 movk     w8, #0x64f0, lsl #16
00225DBC 9f02086b cmp      w20, w8
00225DC0 ad050054 b.le     #0x225e74
00225DC4 082e0090 adrp     x8, #0x7e5000
00225DC8 08612891 add      x8, x8, #0xa18
00225DCC f30300aa mov      x19, x0
00225DD0 092942a9 ldp      x9, x10, [x8, #0x20]
00225DD4 e92b06a9 stp      x9, x10, [sp, #0x60]
00225DD8 092943a9 ldp      x9, x10, [x8, #0x30]
00225DDC e92b07a9 stp      x9, x10, [sp, #0x70]
00225DE0 092940a9 ldp      x9, x10, [x8]
00225DE4 e92b04a9 stp      x9, x10, [sp, #0x40]
00225DE8 092141a9 ldp      x9, x8, [x8, #0x10]
00225DEC e92305a9 stp      x9, x8, [sp, #0x50]
00225DF0 009eff97 bl       #0x20d5f0
00225DF4 a8438252 mov      w8, #0x121d
00225DF8 fd7b48a9 ldp      x29, x30, [sp, #0x80]
00225DFC 0800088b add      x8, x0, x8
00225E00 092942a9 ldp      x9, x10, [x8, #0x20]
00225E04 e92b02a9 stp      x9, x10, [sp, #0x20]
00225E08 092943a9 ldp      x9, x10, [x8, #0x30]
00225E0C e92b03a9 stp      x9, x10, [sp, #0x30]
00225E10 092940a9 ldp      x9, x10, [x8]
00225E14 e92b00a9 stp      x9, x10, [sp]
00225E18 092141a9 ldp      x9, x8, [x8, #0x10]
00225E1C 7f521129 stp      wzr, w20, [x19, #0x88]
00225E20 ea2f47a9 ldp      x10, x11, [sp, #0x70]
00225E24 e92301a9 stp      x9, x8, [sp, #0x10]
00225E28 e82746a9 ldp      x8, x9, [sp, #0x60]
00225E2C 692a03a9 stp      x9, x10, [x19, #0x30]
00225E30 e92b44a9 ldp      x9, x10, [sp, #0x40]
00225E34 7f2600a9 stp      xzr, x9, [x19]
00225E38 e93345a9 ldp      x9, x12, [sp, #0x50]
00225E3C 6a2601a9 stp      x10, x9, [x19, #0x10]
00225E40 6c2202a9 stp      x12, x8, [x19, #0x20]
00225E44 e82740a9 ldp      x8, x9, [sp]
00225E48 ea3341a9 ldp      x10, x12, [sp, #0x10]
00225E4C 6c3200f9 str      x12, [x19, #0x60]
00225E50 692a05a9 stp      x9, x10, [x19, #0x50]
00225E54 6b2204a9 stp      x11, x8, [x19, #0x40]
00225E58 e82743a9 ldp      x8, x9, [sp, #0x30]
00225E5C 68a607a9 stp      x8, x9, [x19, #0x78]
00225E60 e92b42a9 ldp      x9, x10, [sp, #0x20]
00225E64 69aa06a9 stp      x9, x10, [x19, #0x68]
00225E68 f44f49a9 ldp      x20, x19, [sp, #0x90]
00225E6C ff830291 add      sp, sp, #0xa0
00225E70 c0035fd6 ret      
00225E74 33410f94 bl       #0x5f6340
~~~
### 0x225e80 (360 slots)
~~~asm
00225E80 ff0304d1 sub      sp, sp, #0x100
00225E84 fd7b0ca9 stp      x29, x30, [sp, #0xc0]
00225E88 f85f0da9 stp      x24, x23, [sp, #0xd0]
00225E8C f6570ea9 stp      x22, x21, [sp, #0xe0]
00225E90 f44f0fa9 stp      x20, x19, [sp, #0xf0]
00225E94 fd030391 add      x29, sp, #0xc0
00225E98 883200f0 adrp     x8, #0x878000
00225E9C 08352b91 add      x8, x8, #0xacd
00225EA0 ea478052 mov      w10, #0x23f
00225EA4 0a02a072 movk     w10, #0x10, lsl #16
00225EA8 16696ab8 ldr      w22, [x8, x10]
00225EAC 29008052 mov      w9, #1
00225EB0 09010039 strb     w9, [x8]
00225EB4 e85d9552 mov      w8, #0xaaef
00225EB8 089eac72 movk     w8, #0x64f0, lsl #16
00225EBC df02086b cmp      w22, w8
00225EC0 ed2a0054 b.le     #0x22641c
00225EC4 142e0090 adrp     x20, #0x7e5000
00225EC8 94622891 add      x20, x20, #0xa18
00225ECC f303002a mov      w19, w0
00225ED0 882642a9 ldp      x8, x9, [x20, #0x20]
00225ED4 a8273ea9 stp      x8, x9, [x29, #-0x20]
00225ED8 882643a9 ldp      x8, x9, [x20, #0x30]
00225EDC a8273fa9 stp      x8, x9, [x29, #-0x10]
00225EE0 882640a9 ldp      x8, x9, [x20]
00225EE4 a8273ca9 stp      x8, x9, [x29, #-0x40]
00225EE8 882641a9 ldp      x8, x9, [x20, #0x10]
00225EEC a8273da9 stp      x8, x9, [x29, #-0x30]
00225EF0 c09dff97 bl       #0x20d5f0
00225EF4 a8438252 mov      w8, #0x121d
00225EF8 7f020072 tst      w19, #1
00225EFC 0800088b add      x8, x0, x8
00225F00 092942a9 ldp      x9, x10, [x8, #0x20]
00225F04 e92b06a9 stp      x9, x10, [sp, #0x60]
00225F08 092943a9 ldp      x9, x10, [x8, #0x30]
00225F0C e92b07a9 stp      x9, x10, [sp, #0x70]
00225F10 092940a9 ldp      x9, x10, [x8]
00225F14 e92b04a9 stp      x9, x10, [sp, #0x40]
00225F18 0ac79252 mov      w10, #0x9638
00225F1C 092141a9 ldp      x9, x8, [x8, #0x10]
00225F20 8a6a6ab8 ldr      w10, [x20, x10]
00225F24 e92305a9 stp      x9, x8, [sp, #0x50]
00225F28 48008052 mov      w8, #2
00225F2C 89008052 mov      w9, #4
00225F30 3711881a csel     w23, w9, w8, ne
00225F34 48050051 sub      w8, w10, #1
00225F38 1f150071 cmp      w8, #5
00225F3C a8050054 b.hi     #0x225ff0
00225F40 692000f0 adrp     x9, #0x634000
00225F44 29e12f91 add      x9, x9, #0xbf8
00225F48 8a000010 adr      x10, #0x225f58
00225F4C 2b696838 ldrb     w11, [x9, x8]
00225F50 4a090b8b add      x10, x10, x11, lsl #2
00225F54 40011fd6 br       x10
00225F58 e8230091 add      x8, sp, #8
00225F5C 919dff97 bl       #0x20d5a0
00225F60 e80740f9 ldr      x8, [sp, #8]
00225F64 136540f9 ldr      x19, [x8, #0xc8]
00225F68 74da3f91 add      x20, x19, #0xff6
00225F6C b30000b4 cbz      x19, #0x225f80
00225F70 e00313aa mov      x0, x19
00225F74 088c44f8 ldr      x8, [x0, #0x48]!
00225F78 080940f9 ldr      x8, [x8, #0x10]
00225F7C 00013fd6 blr      x8
00225F80 a8277ea9 ldp      x8, x9, [x29, #-0x20]
00225F84 975a1129 stp      w23, w22, [x20, #0x88]
00225F88 aa2f7fa9 ldp      x10, x11, [x29, #-0x10]
00225F8C 892a03a9 stp      x9, x10, [x20, #0x30]
00225F90 a92b7ca9 ldp      x9, x10, [x29, #-0x40]
00225F94 9f2600a9 stp      xzr, x9, [x20]
00225F98 a9337da9 ldp      x9, x12, [x29, #-0x30]
00225F9C 8a2601a9 stp      x10, x9, [x20, #0x10]
00225FA0 8c2202a9 stp      x12, x8, [x20, #0x20]
00225FA4 e92345a9 ldp      x9, x8, [sp, #0x50]
00225FA8 883200f9 str      x8, [x20, #0x60]
00225FAC ec2b44a9 ldp      x12, x10, [sp, #0x40]
00225FB0 8a2605a9 stp      x10, x9, [x20, #0x50]
00225FB4 ea2747a9 ldp      x10, x9, [sp, #0x70]
00225FB8 8b3204a9 stp      x11, x12, [x20, #0x40]
00225FBC 688e44f8 ldr      x8, [x19, #0x48]!
00225FC0 e00313aa mov      x0, x19
00225FC4 8aa607a9 stp      x10, x9, [x20, #0x78]
00225FC8 eb2746a9 ldp      x11, x9, [sp, #0x60]
00225FCC 8ba606a9 stp      x11, x9, [x20, #0x68]
00225FD0 080d40f9 ldr      x8, [x8, #0x18]
00225FD4 00013fd6 blr      x8
00225FD8 e00740f9 ldr      x0, [sp, #8]
00225FDC 800000b4 cbz      x0, #0x225fec
00225FE0 080c45f8 ldr      x8, [x0, #0x50]!
00225FE4 080d40f9 ldr      x8, [x8, #0x18]
00225FE8 00013fd6 blr      x8
00225FEC 9999ff97 bl       #0x20c650
00225FF0 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
00225FF4 f6574ea9 ldp      x22, x21, [sp, #0xe0]
00225FF8 f85f4da9 ldp      x24, x23, [sp, #0xd0]
00225FFC fd7b4ca9 ldp      x29, x30, [sp, #0xc0]
00226000 ff030491 add      sp, sp, #0x100
00226004 c0035fd6 ret      
00226008 d42d00f0 adrp     x20, #0x7e1000
0022600C 94e21291 add      x20, x20, #0x4b8
00226010 880240f9 ldr      x8, [x20]
00226014 133941f9 ldr      x19, [x8, #0x270]
00226018 b30000b4 cbz      x19, #0x22602c
0022601C e00313aa mov      x0, x19
00226020 088c44f8 ldr      x8, [x0, #0x48]!
00226024 080940f9 ldr      x8, [x8, #0x10]
00226028 00013fd6 blr      x8
0022602C a8277ea9 ldp      x8, x9, [x29, #-0x20]
00226030 775a1d29 stp      w23, w22, [x19, #0xe8]
00226034 aa2f7fa9 ldp      x10, x11, [x29, #-0x10]
00226038 692a09a9 stp      x9, x10, [x19, #0x90]
0022603C a92b7ca9 ldp      x9, x10, [x29, #-0x40]
00226040 7f2606a9 stp      xzr, x9, [x19, #0x60]
00226044 a9337da9 ldp      x9, x12, [x29, #-0x30]
00226048 6a2607a9 stp      x10, x9, [x19, #0x70]
0022604C 6c2208a9 stp      x12, x8, [x19, #0x80]
00226050 e92347a9 ldp      x9, x8, [sp, #0x70]
00226054 69a20da9 stp      x9, x8, [x19, #0xd8]
00226058 ea2346a9 ldp      x10, x8, [sp, #0x60]
0022605C 6aa20ca9 stp      x10, x8, [x19, #0xc8]
00226060 e82744a9 ldp      x8, x9, [sp, #0x40]
00226064 6b220aa9 stp      x11, x8, [x19, #0xa0]
00226068 e82f45a9 ldp      x8, x11, [sp, #0x50]
0022606C 6b6200f9 str      x11, [x19, #0xc0]
00226070 69220ba9 stp      x9, x8, [x19, #0xb0]
00226074 688e44f8 ldr      x8, [x19, #0x48]!
00226078 e00313aa mov      x0, x19
0022607C 080d40f9 ldr      x8, [x8, #0x18]
00226080 00013fd6 blr      x8
00226084 800240f9 ldr      x0, [x20]
00226088 81008052 mov      w1, #4
0022608C cc2d0194 bl       #0x2717bc
00226090 00fb0736 tbz      w0, #0, #0x225ff0
00226094 800240f9 ldr      x0, [x20]
00226098 81008052 mov      w1, #4
0022609C f44f4fa9 ldp      x20, x19, [sp, #0xf0]
002260A0 f6574ea9 ldp      x22, x21, [sp, #0xe0]
002260A4 f85f4da9 ldp      x24, x23, [sp, #0xd0]
002260A8 fd7b4ca9 ldp      x29, x30, [sp, #0xc0]
002260AC ff030491 add      sp, sp, #0x100
002260B0 312e0114 b        #0x271974
002260B4 c82d00f0 adrp     x8, #0x7e1000
002260B8 08011891 add      x8, x8, #0x600
002260BC 130140f9 ldr      x19, [x8]
002260C0 743240f9 ldr      x20, [x19, #0x60]
002260C4 b40000b4 cbz      x20, #0x2260d8
002260C8 e00314aa mov      x0, x20
002260CC 088c44f8 ldr      x8, [x0, #0x48]!
002260D0 080940f9 ldr      x8, [x8, #0x10]
002260D4 00013fd6 blr      x8
002260D8 959e40f9 ldr      x21, [x20, #0x138]
002260DC b50000b4 cbz      x21, #0x2260f0
002260E0 e00315aa mov      x0, x21
002260E4 088c44f8 ldr      x8, [x0, #0x48]!
002260E8 080940f9 ldr      x8, [x8, #0x10]
002260EC 00013fd6 blr      x8
002260F0 a8277ea9 ldp      x8, x9, [x29, #-0x20]
002260F4 b75a1c29 stp      w23, w22, [x21, #0xe0]
002260F8 aa2f7fa9 ldp      x10, x11, [x29, #-0x10]
002260FC a9aa08a9 stp      x9, x10, [x21, #0x88]
00226100 a92b7ca9 ldp      x9, x10, [x29, #-0x40]
00226104 bfa605a9 stp      xzr, x9, [x21, #0x58]
00226108 a9337da9 ldp      x9, x12, [x29, #-0x30]
0022610C aaa606a9 stp      x10, x9, [x21, #0x68]
00226110 aca207a9 stp      x12, x8, [x21, #0x78]
00226114 e92345a9 ldp      x9, x8, [sp, #0x50]
00226118 a85e00f9 str      x8, [x21, #0xb8]
0022611C ec2b44a9 ldp      x12, x10, [sp, #0x40]
00226120 aaa60aa9 stp      x10, x9, [x21, #0xa8]
00226124 ea2747a9 ldp      x10, x9, [sp, #0x70]
00226128 abb209a9 stp      x11, x12, [x21, #0x98]
0022612C aa260da9 stp      x10, x9, [x21, #0xd0]
00226130 eb2746a9 ldp      x11, x9, [sp, #0x60]
00226134 ab260ca9 stp      x11, x9, [x21, #0xc0]
00226138 a88e44f8 ldr      x8, [x21, #0x48]!
0022613C e00315aa mov      x0, x21
00226140 080d40f9 ldr      x8, [x8, #0x18]
00226144 00013fd6 blr      x8
00226148 888e44f8 ldr      x8, [x20, #0x48]!
0022614C e00314aa mov      x0, x20
00226150 080d40f9 ldr      x8, [x8, #0x18]
00226154 00013fd6 blr      x8
00226158 e00313aa mov      x0, x19
0022615C f44f4fa9 ldp      x20, x19, [sp, #0xf0]
00226160 f6574ea9 ldp      x22, x21, [sp, #0xe0]
00226164 f85f4da9 ldp      x24, x23, [sp, #0xd0]
00226168 fd7b4ca9 ldp      x29, x30, [sp, #0xc0]
0022616C ff030491 add      sp, sp, #0x100
00226170 97e0fd17 b        #0x19e3cc
00226174 c82d00f0 adrp     x8, #0x7e1000
00226178 08411891 add      x8, x8, #0x610
0022617C 130140f9 ldr      x19, [x8]
00226180 e8230091 add      x8, sp, #8
00226184 e00313aa mov      x0, x19
00226188 9f2ffe97 bl       #0x1b2004
0022618C e00740f9 ldr      x0, [sp, #8]
00226190 17581d29 stp      w23, w22, [x0, #0xe8]
00226194 a8277ea9 ldp      x8, x9, [x29, #-0x20]
00226198 aa2f7fa9 ldp      x10, x11, [x29, #-0x10]
0022619C 092809a9 stp      x9, x10, [x0, #0x90]
002261A0 a92b7ca9 ldp      x9, x10, [x29, #-0x40]
002261A4 1f2406a9 stp      xzr, x9, [x0, #0x60]
002261A8 a9337da9 ldp      x9, x12, [x29, #-0x30]
002261AC 0a2407a9 stp      x10, x9, [x0, #0x70]
002261B0 0c2008a9 stp      x12, x8, [x0, #0x80]
002261B4 e92347a9 ldp      x9, x8, [sp, #0x70]
002261B8 09a00da9 stp      x9, x8, [x0, #0xd8]
002261BC ea2346a9 ldp      x10, x8, [sp, #0x60]
002261C0 0aa00ca9 stp      x10, x8, [x0, #0xc8]
002261C4 e82744a9 ldp      x8, x9, [sp, #0x40]
002261C8 0b200aa9 stp      x11, x8, [x0, #0xa0]
002261CC e82f45a9 ldp      x8, x11, [sp, #0x50]
002261D0 0b6000f9 str      x11, [x0, #0xc0]
002261D4 09200ba9 stp      x9, x8, [x0, #0xb0]
002261D8 088c44f8 ldr      x8, [x0, #0x48]!
002261DC 080d40f9 ldr      x8, [x8, #0x18]
002261E0 00013fd6 blr      x8
002261E4 e00313aa mov      x0, x19
002261E8 61008052 mov      w1, #3
002261EC f02dfe97 bl       #0x1b19ac
002261F0 00f00736 tbz      w0, #0, #0x225ff0
002261F4 e00313aa mov      x0, x19
002261F8 61008052 mov      w1, #3
002261FC 622efe97 bl       #0x1b1b84
00226200 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
00226204 f6574ea9 ldp      x22, x21, [sp, #0xe0]
00226208 f85f4da9 ldp      x24, x23, [sp, #0xd0]
0022620C fd7b4ca9 ldp      x29, x30, [sp, #0xc0]
00226210 ff030491 add      sp, sp, #0x100
00226214 c0035fd6 ret      
00226218 c82d00f0 adrp     x8, #0x7e1000
0022621C 08811891 add      x8, x8, #0x620
00226220 130140f9 ldr      x19, [x8]
00226224 d30f00b4 cbz      x19, #0x22641c
00226228 78ea40f9 ldr      x24, [x19, #0x1d0]
0022622C 150340f9 ldr      x21, [x24]
00226230 e00315aa mov      x0, x21
00226234 080c45f8 ldr      x8, [x0, #0x50]!
00226238 080140f9 ldr      x8, [x8]
0022623C 00013fd6 blr      x8
00226240 f40300aa mov      x20, x0
00226244 1be2ff97 bl       #0x21eab0
00226248 1f0014eb cmp      x0, x20
0022624C a0070054 b.eq     #0x226340
00226250 940240f9 ldr      x20, [x20]
00226254 9f0200eb cmp      x20, x0
00226258 841a40fa ccmp     x20, #0, #4, ne
0022625C a1ffff54 b.ne     #0x226250
00226260 140700b5 cbnz     x20, #0x226340
00226264 158f40f8 ldr      x21, [x24, #8]!
00226268 f2ffff17 b        #0x226230
0022626C 3e2aff97 bl       #0x1f0b64
00226270 f30300aa mov      x19, x0
00226274 fb2aff97 bl       #0x1f0e60
00226278 a8277ea9 ldp      x8, x9, [x29, #-0x20]
0022627C 17581d29 stp      w23, w22, [x0, #0xe8]
00226280 aa2f7fa9 ldp      x10, x11, [x29, #-0x10]
00226284 0b5000f9 str      x11, [x0, #0xa0]
00226288 092809a9 stp      x9, x10, [x0, #0x90]
0022628C a92b7ca9 ldp      x9, x10, [x29, #-0x40]
00226290 1f2406a9 stp      xzr, x9, [x0, #0x60]
00226294 a9337da9 ldp      x9, x12, [x29, #-0x30]
00226298 0a2407a9 stp      x10, x9, [x0, #0x70]
0022629C 0c2008a9 stp      x12, x8, [x0, #0x80]
002262A0 e92347a9 ldp      x9, x8, [sp, #0x70]
002262A4 09a00da9 stp      x9, x8, [x0, #0xd8]
002262A8 ea2346a9 ldp      x10, x8, [sp, #0x60]
002262AC 0aa00ca9 stp      x10, x8, [x0, #0xc8]
002262B0 e92345a9 ldp      x9, x8, [sp, #0x50]
002262B4 09a00ba9 stp      x9, x8, [x0, #0xb8]
002262B8 691f00f0 adrp     x9, #0x615000
002262BC 29190491 add      x9, x9, #0x106
002262C0 ea2344a9 ldp      x10, x8, [sp, #0x40]
002262C4 0aa00aa9 stp      x10, x8, [x0, #0xa8]
002262C8 28c09bd2 mov      x8, #0xde01
002262CC 6877bef2 movk     x8, #0xf3bb, lsl #16
002262D0 e0a30091 add      x0, sp, #0x28
002262D4 885ac1f2 movk     x8, #0xad4, lsl #32
002262D8 e8c2e5f2 movk     x8, #0x2e17, lsl #48
002262DC e8a702a9 stp      x8, x9, [sp, #0x28]
002262E0 a8008052 mov      w8, #5
002262E4 e81f00f9 str      x8, [sp, #0x38]
002262E8 e8230091 add      x8, sp, #8
002262EC e40b0b94 bl       #0x4e927c
002262F0 e1230091 add      x1, sp, #8
002262F4 e00313aa mov      x0, x19
002262F8 d54fff97 bl       #0x1fa24c
002262FC f403002a mov      w20, w0
00226300 e01340f9 ldr      x0, [sp, #0x20]
00226304 800000b4 cbz      x0, #0x226314
00226308 088c44f8 ldr      x8, [x0, #0x48]!
0022630C 080d40f9 ldr      x8, [x8, #0x18]
00226310 00013fd6 blr      x8
00226314 f4e60736 tbz      w20, #0, #0x225ff0
00226318 e8230091 add      x8, sp, #8
0022631C e0a30091 add      x0, sp, #0x28
00226320 d70b0b94 bl       #0x4e927c
00226324 e1230091 add      x1, sp, #8
00226328 e00313aa mov      x0, x19
0022632C e2031f2a mov      w2, wzr
00226330 2a50ff97 bl       #0x1fa3d8
00226334 e01340f9 ldr      x0, [sp, #0x20]
00226338 000600b5 cbnz     x0, #0x2263f8
0022633C 2dffff17 b        #0x225ff0
00226340 a8277ea9 ldp      x8, x9, [x29, #-0x20]
00226344 b75a1d29 stp      w23, w22, [x21, #0xe8]
00226348 aa2f7fa9 ldp      x10, x11, [x29, #-0x10]
0022634C e0a30091 add      x0, sp, #0x28
00226350 a92a09a9 stp      x9, x10, [x21, #0x90]
00226354 a92b7ca9 ldp      x9, x10, [x29, #-0x40]
00226358 bf2606a9 stp      xzr, x9, [x21, #0x60]
0022635C a9337da9 ldp      x9, x12, [x29, #-0x30]
00226360 aa2607a9 stp      x10, x9, [x21, #0x70]
00226364 ac2208a9 stp      x12, x8, [x21, #0x80]
00226368 e92345a9 ldp      x9, x8, [sp, #0x50]
0022636C a86200f9 str      x8, [x21, #0xc0]
00226370 ec2b44a9 ldp      x12, x10, [sp, #0x40]
00226374 e82b0090 adrp     x8, #0x7a2000
00226378 aa260ba9 stp      x10, x9, [x21, #0xb0]
0022637C ea2747a9 ldp      x10, x9, [sp, #0x70]
00226380 ab320aa9 stp      x11, x12, [x21, #0xa0]
00226384 aaa60da9 stp      x10, x9, [x21, #0xd8]
00226388 eb2746a9 ldp      x11, x9, [sp, #0x60]
0022638C aba60ca9 stp      x11, x9, [x21, #0xc8]
00226390 081d46f9 ldr      x8, [x8, #0xc38]
00226394 092940a9 ldp      x9, x10, [x8]
00226398 080940f9 ldr      x8, [x8, #0x10]
0022639C e81f00f9 str      x8, [sp, #0x38]
002263A0 e8230091 add      x8, sp, #8
002263A4 e9ab02a9 stp      x9, x10, [sp, #0x28]
002263A8 b50b0b94 bl       #0x4e927c
002263AC e1230091 add      x1, sp, #8
002263B0 e00313aa mov      x0, x19
002263B4 0ed80194 bl       #0x29c3ec
002263B8 f403002a mov      w20, w0
002263BC e01340f9 ldr      x0, [sp, #0x20]
002263C0 800000b4 cbz      x0, #0x2263d0
002263C4 088c44f8 ldr      x8, [x0, #0x48]!
002263C8 080d40f9 ldr      x8, [x8, #0x18]
002263CC 00013fd6 blr      x8
002263D0 14e10736 tbz      w20, #0, #0x225ff0
002263D4 e8230091 add      x8, sp, #8
002263D8 e0a30091 add      x0, sp, #0x28
002263DC a80b0b94 bl       #0x4e927c
002263E0 e1230091 add      x1, sp, #8
002263E4 e00313aa mov      x0, x19
002263E8 e2031f2a mov      w2, wzr
002263EC 63d80194 bl       #0x29c578
002263F0 e01340f9 ldr      x0, [sp, #0x20]
002263F4 e0dfffb4 cbz      x0, #0x225ff0
002263F8 088c44f8 ldr      x8, [x0, #0x48]!
002263FC 080d40f9 ldr      x8, [x8, #0x18]
00226400 00013fd6 blr      x8
00226404 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
00226408 f6574ea9 ldp      x22, x21, [sp, #0xe0]
0022640C f85f4da9 ldp      x24, x23, [sp, #0xd0]
00226410 fd7b4ca9 ldp      x29, x30, [sp, #0xc0]
00226414 ff030491 add      sp, sp, #0x100
00226418 c0035fd6 ret      
0022641C c93f0f94 bl       #0x5f6340
~~~
### 0x226420 (227 slots)
~~~asm
00226420 ff8301d1 sub      sp, sp, #0x60
00226424 fd7b04a9 stp      x29, x30, [sp, #0x40]
00226428 f44f05a9 stp      x20, x19, [sp, #0x50]
0022642C fd030191 add      x29, sp, #0x40
00226430 482e00b0 adrp     x8, #0x7ef000
00226434 085140b9 ldr      w8, [x8, #0x50]
00226438 08050051 sub      w8, w8, #1
0022643C 1f150071 cmp      w8, #5
00226440 c8010054 b.hi     #0x226478
00226444 692000d0 adrp     x9, #0x634000
00226448 29f92f91 add      x9, x9, #0xbfe
0022644C 8a000010 adr      x10, #0x22645c
00226450 2b696838 ldrb     w11, [x9, x8]
00226454 4a090b8b add      x10, x10, x11, lsl #2
00226458 40011fd6 br       x10
0022645C e0230091 add      x0, sp, #8
00226460 f099ff97 bl       #0x20cc20
00226464 80140037 tbnz     w0, #0, #0x2266f4
00226468 883200d0 adrp     x8, #0x878000
0022646C 1f352b39 strb     wzr, [x8, #0xacd]
00226470 e80b40b9 ldr      w8, [sp, #8]
00226474 22000014 b        #0x2264fc
00226478 33008052 mov      w19, #1
0022647C e003132a mov      w0, w19
00226480 f44f45a9 ldp      x20, x19, [sp, #0x50]
00226484 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00226488 ff830191 add      sp, sp, #0x60
0022648C c0035fd6 ret      
00226490 d42b00b0 adrp     x20, #0x79f000
00226494 81008052 mov      w1, #4
00226498 942642f9 ldr      x20, [x20, #0x448]
0022649C 800240f9 ldr      x0, [x20]
002264A0 4f2d0194 bl       #0x2719dc
002264A4 80120036 tbz      w0, #0, #0x2266f4
002264A8 800240f9 ldr      x0, [x20]
002264AC 81008052 mov      w1, #4
002264B0 652d0194 bl       #0x271a44
002264B4 1f080071 cmp      w0, #2
002264B8 a1120054 b.ne     #0x22670c
002264BC 800240f9 ldr      x0, [x20]
002264C0 81008052 mov      w1, #4
002264C4 7a2d0194 bl       #0x271aac
002264C8 33008052 mov      w19, #1
002264CC 91000014 b        #0x226710
002264D0 d32b00b0 adrp     x19, #0x79f000
002264D4 73da42f9 ldr      x19, [x19, #0x5b0]
002264D8 600240f9 ldr      x0, [x19]
002264DC 2fe0fd97 bl       #0x19e598
002264E0 a0100036 tbz      w0, #0, #0x2266f4
002264E4 883200d0 adrp     x8, #0x878000
002264E8 09118052 mov      w9, #0x88
002264EC 0908a072 movk     w9, #0x40, lsl #16
002264F0 1f352b39 strb     wzr, [x8, #0xacd]
002264F4 680240f9 ldr      x8, [x19]
002264F8 086969b8 ldr      w8, [x8, x9]
002264FC 1f010071 cmp      w8, #0
00226500 28008052 mov      w8, #1
00226504 1305881a cinc     w19, w8, ne
00226508 e003132a mov      w0, w19
0022650C f44f45a9 ldp      x20, x19, [sp, #0x50]
00226510 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00226514 ff830191 add      sp, sp, #0x60
00226518 c0035fd6 ret      
0022651C d42b00b0 adrp     x20, #0x79f000
00226520 61008052 mov      w1, #3
00226524 948a42f9 ldr      x20, [x20, #0x510]
00226528 800240f9 ldr      x0, [x20]
0022652C b02dfe97 bl       #0x1b1bec
00226530 200e0036 tbz      w0, #0, #0x2266f4
00226534 800240f9 ldr      x0, [x20]
00226538 61008052 mov      w1, #3
0022653C c62dfe97 bl       #0x1b1c54
00226540 1f080071 cmp      w0, #2
00226544 e10e0054 b.ne     #0x226720
00226548 800240f9 ldr      x0, [x20]
0022654C 61008052 mov      w1, #3
00226550 db2dfe97 bl       #0x1b1cbc
00226554 33008052 mov      w19, #1
00226558 73000014 b        #0x226724
0022655C e82b0090 adrp     x8, #0x7a2000
00226560 d42b00b0 adrp     x20, #0x79f000
00226564 081d46f9 ldr      x8, [x8, #0xc38]
00226568 a06300d1 sub      x0, x29, #0x18
0022656C 092940a9 ldp      x9, x10, [x8]
00226570 080940f9 ldr      x8, [x8, #0x10]
00226574 a9ab3ea9 stp      x9, x10, [x29, #-0x18]
00226578 a8831ff8 stur     x8, [x29, #-8]
0022657C e8230091 add      x8, sp, #8
00226580 948e42f9 ldr      x20, [x20, #0x518]
00226584 930240f9 ldr      x19, [x20]
00226588 3d0b0b94 bl       #0x4e927c
0022658C e1230091 add      x1, sp, #8
00226590 e00313aa mov      x0, x19
00226594 5dd80194 bl       #0x29c708
00226598 f303002a mov      w19, w0
0022659C e01340f9 ldr      x0, [sp, #0x20]
002265A0 800000b4 cbz      x0, #0x2265b0
002265A4 088c44f8 ldr      x8, [x0, #0x48]!
002265A8 080d40f9 ldr      x8, [x8, #0x18]
002265AC 00013fd6 blr      x8
002265B0 330a0036 tbz      w19, #0, #0x2266f4
002265B4 930240f9 ldr      x19, [x20]
002265B8 e8230091 add      x8, sp, #8
002265BC a06300d1 sub      x0, x29, #0x18
002265C0 2f0b0b94 bl       #0x4e927c
002265C4 e1230091 add      x1, sp, #8
002265C8 e00313aa mov      x0, x19
002265CC 6bd80194 bl       #0x29c778
002265D0 f303002a mov      w19, w0
002265D4 e01340f9 ldr      x0, [sp, #0x20]
002265D8 800000b4 cbz      x0, #0x2265e8
002265DC 088c44f8 ldr      x8, [x0, #0x48]!
002265E0 080d40f9 ldr      x8, [x8, #0x18]
002265E4 00013fd6 blr      x8
002265E8 7f0a0071 cmp      w19, #2
002265EC 410a0054 b.ne     #0x226734
002265F0 930240f9 ldr      x19, [x20]
002265F4 e8230091 add      x8, sp, #8
002265F8 a06300d1 sub      x0, x29, #0x18
002265FC 200b0b94 bl       #0x4e927c
00226600 e1230091 add      x1, sp, #8
00226604 e00313aa mov      x0, x19
00226608 78d80194 bl       #0x29c7e8
0022660C e01340f9 ldr      x0, [sp, #0x20]
00226610 800000b4 cbz      x0, #0x226620
00226614 088c44f8 ldr      x8, [x0, #0x48]!
00226618 080d40f9 ldr      x8, [x8, #0x18]
0022661C 00013fd6 blr      x8
00226620 33008052 mov      w19, #1
00226624 45000014 b        #0x226738
00226628 4f29ff97 bl       #0x1f0b64
0022662C 28c09bd2 mov      x8, #0xde01
00226630 6877bef2 movk     x8, #0xf3bb, lsl #16
00226634 691f00f0 adrp     x9, #0x615000
00226638 29190491 add      x9, x9, #0x106
0022663C 885ac1f2 movk     x8, #0xad4, lsl #32
00226640 e8c2e5f2 movk     x8, #0x2e17, lsl #48
00226644 a8a73ea9 stp      x8, x9, [x29, #-0x18]
00226648 a8008052 mov      w8, #5
0022664C f40300aa mov      x20, x0
00226650 a8831ff8 stur     x8, [x29, #-8]
00226654 e8230091 add      x8, sp, #8
00226658 a06300d1 sub      x0, x29, #0x18
0022665C 080b0b94 bl       #0x4e927c
00226660 e1230091 add      x1, sp, #8
00226664 e00314aa mov      x0, x20
00226668 c04fff97 bl       #0x1fa568
0022666C f303002a mov      w19, w0
00226670 e01340f9 ldr      x0, [sp, #0x20]
00226674 800000b4 cbz      x0, #0x226684
00226678 088c44f8 ldr      x8, [x0, #0x48]!
0022667C 080d40f9 ldr      x8, [x8, #0x18]
00226680 00013fd6 blr      x8
00226684 93030036 tbz      w19, #0, #0x2266f4
00226688 e8230091 add      x8, sp, #8
0022668C a06300d1 sub      x0, x29, #0x18
00226690 fb0a0b94 bl       #0x4e927c
00226694 e1230091 add      x1, sp, #8
00226698 e00314aa mov      x0, x20
0022669C cf4fff97 bl       #0x1fa5d8
002266A0 f303002a mov      w19, w0
002266A4 e01340f9 ldr      x0, [sp, #0x20]
002266A8 800000b4 cbz      x0, #0x2266b8
002266AC 088c44f8 ldr      x8, [x0, #0x48]!
002266B0 080d40f9 ldr      x8, [x8, #0x18]
002266B4 00013fd6 blr      x8
002266B8 7f0a0071 cmp      w19, #2
002266BC 21050054 b.ne     #0x226760
002266C0 e8230091 add      x8, sp, #8
002266C4 a06300d1 sub      x0, x29, #0x18
002266C8 ed0a0b94 bl       #0x4e927c
002266CC e1230091 add      x1, sp, #8
002266D0 e00314aa mov      x0, x20
002266D4 dd4fff97 bl       #0x1fa648
002266D8 e01340f9 ldr      x0, [sp, #0x20]
002266DC 800000b4 cbz      x0, #0x2266ec
002266E0 088c44f8 ldr      x8, [x0, #0x48]!
002266E4 080d40f9 ldr      x8, [x8, #0x18]
002266E8 00013fd6 blr      x8
002266EC 33008052 mov      w19, #1
002266F0 1d000014 b        #0x226764
002266F4 f3031f2a mov      w19, wzr
002266F8 e003132a mov      w0, w19
002266FC f44f45a9 ldp      x20, x19, [sp, #0x50]
00226700 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00226704 ff830191 add      sp, sp, #0x60
00226708 c0035fd6 ret      
0022670C 53008052 mov      w19, #2
00226710 800240f9 ldr      x0, [x20]
00226714 81008052 mov      w1, #4
00226718 ff2c0194 bl       #0x271b14
0022671C 1d000014 b        #0x226790
00226720 53008052 mov      w19, #2
00226724 800240f9 ldr      x0, [x20]
00226728 61008052 mov      w1, #3
0022672C 7e2dfe97 bl       #0x1b1d24
00226730 18000014 b        #0x226790
00226734 53008052 mov      w19, #2
00226738 940240f9 ldr      x20, [x20]
0022673C e8230091 add      x8, sp, #8
00226740 a06300d1 sub      x0, x29, #0x18
00226744 ce0a0b94 bl       #0x4e927c
00226748 e1230091 add      x1, sp, #8
0022674C e00314aa mov      x0, x20
00226750 42d80194 bl       #0x29c858
00226754 e01340f9 ldr      x0, [sp, #0x20]
00226758 600100b5 cbnz     x0, #0x226784
0022675C 0d000014 b        #0x226790
00226760 53008052 mov      w19, #2
00226764 e8230091 add      x8, sp, #8
00226768 a06300d1 sub      x0, x29, #0x18
0022676C c40a0b94 bl       #0x4e927c
00226770 e1230091 add      x1, sp, #8
00226774 e00314aa mov      x0, x20
00226778 d04fff97 bl       #0x1fa6b8
0022677C e01340f9 ldr      x0, [sp, #0x20]
00226780 800000b4 cbz      x0, #0x226790
00226784 088c44f8 ldr      x8, [x0, #0x48]!
00226788 080d40f9 ldr      x8, [x8, #0x18]
0022678C 00013fd6 blr      x8
00226790 883200d0 adrp     x8, #0x878000
00226794 1f352b39 strb     wzr, [x8, #0xacd]
00226798 e003132a mov      w0, w19
0022679C f44f45a9 ldp      x20, x19, [sp, #0x50]
002267A0 fd7b44a9 ldp      x29, x30, [sp, #0x40]
002267A4 ff830191 add      sp, sp, #0x60
002267A8 c0035fd6 ret      
~~~
### 0x2267b0 (121 slots)
~~~asm
002267B0 ff0304d1 sub      sp, sp, #0x100
002267B4 fd7b0da9 stp      x29, x30, [sp, #0xd0]
002267B8 f57300f9 str      x21, [sp, #0xe0]
002267BC f44f0fa9 stp      x20, x19, [sp, #0xf0]
002267C0 fd430391 add      x29, sp, #0xd0
002267C4 e82d00f0 adrp     x8, #0x7e5000
002267C8 08c11891 add      x8, x8, #0x630
002267CC 89db8652 mov      w9, #0x36dc
002267D0 2903a072 movk     w9, #0x19, lsl #16
002267D4 146969b8 ldr      w20, [x8, x9]
002267D8 e85d9552 mov      w8, #0xaaef
002267DC 089eac72 movk     w8, #0x64f0, lsl #16
002267E0 9f02086b cmp      w20, w8
002267E4 6d0d0054 b.le     #0x226990
002267E8 f52d00f0 adrp     x21, #0x7e5000
002267EC b5622891 add      x21, x21, #0xa18
002267F0 f303002a mov      w19, w0
002267F4 a82642a9 ldp      x8, x9, [x21, #0x20]
002267F8 a8273ea9 stp      x8, x9, [x29, #-0x20]
002267FC a82643a9 ldp      x8, x9, [x21, #0x30]
00226800 a8273fa9 stp      x8, x9, [x29, #-0x10]
00226804 a82640a9 ldp      x8, x9, [x21]
00226808 a8273ca9 stp      x8, x9, [x29, #-0x40]
0022680C a82641a9 ldp      x8, x9, [x21, #0x10]
00226810 a8273da9 stp      x8, x9, [x29, #-0x30]
00226814 779bff97 bl       #0x20d5f0
00226818 a8438252 mov      w8, #0x121d
0022681C 7f020072 tst      w19, #1
00226820 ff531129 stp      wzr, w20, [sp, #0x88]
00226824 0800088b add      x8, x0, x8
00226828 092942a9 ldp      x9, x10, [x8, #0x20]
0022682C 0b3143a9 ldp      x11, x12, [x8, #0x30]
00226830 ec4300f9 str      x12, [sp, #0x80]
00226834 ea2f07a9 stp      x10, x11, [sp, #0x70]
00226838 0a2d40a9 ldp      x10, x11, [x8]
0022683C 0c2141a9 ldp      x12, x8, [x8, #0x10]
00226840 eb3305a9 stp      x11, x12, [sp, #0x50]
00226844 e82706a9 stp      x8, x9, [sp, #0x60]
00226848 a8277ea9 ldp      x8, x9, [x29, #-0x20]
0022684C ab337fa9 ldp      x11, x12, [x29, #-0x10]
00226850 e92f03a9 stp      x9, x11, [sp, #0x30]
00226854 ec2b04a9 stp      x12, x10, [sp, #0x40]
00226858 a92b7ca9 ldp      x9, x10, [x29, #-0x40]
0022685C ff2700a9 stp      xzr, x9, [sp]
00226860 a92f7da9 ldp      x9, x11, [x29, #-0x30]
00226864 eb2302a9 stp      x11, x8, [sp, #0x20]
00226868 68008052 mov      w8, #3
0022686C ea2701a9 stp      x10, x9, [sp, #0x10]
00226870 09159f1a csinc    w9, w8, wzr, ne
00226874 08c79252 mov      w8, #0x9638
00226878 a86a68b8 ldr      w8, [x21, x8]
0022687C e9230239 strb     w9, [sp, #0x88]
00226880 08050051 sub      w8, w8, #1
00226884 1f150071 cmp      w8, #5
00226888 88010054 b.hi     #0x2268b8
0022688C 692000d0 adrp     x9, #0x634000
00226890 29113091 add      x9, x9, #0xc04
00226894 8a000010 adr      x10, #0x2268a4
00226898 2b696838 ldrb     w11, [x9, x8]
0022689C 4a090b8b add      x10, x10, x11, lsl #2
002268A0 40011fd6 br       x10
002268A4 60020012 and      w0, w19, #1
002268A8 e12d00f0 adrp     x1, #0x7e5000
002268AC 21c01891 add      x1, x1, #0x630
002268B0 e2030091 mov      x2, sp
002268B4 6bb50094 bl       #0x253e60
002268B8 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
002268BC f57340f9 ldr      x21, [sp, #0xe0]
002268C0 fd7b4da9 ldp      x29, x30, [sp, #0xd0]
002268C4 ff030491 add      sp, sp, #0x100
002268C8 c0035fd6 ret      
002268CC 60020012 and      w0, w19, #1
002268D0 e12d00f0 adrp     x1, #0x7e5000
002268D4 21c01891 add      x1, x1, #0x630
002268D8 e2030091 mov      x2, sp
002268DC 3dbb0094 bl       #0x2555d0
002268E0 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
002268E4 f57340f9 ldr      x21, [sp, #0xe0]
002268E8 fd7b4da9 ldp      x29, x30, [sp, #0xd0]
002268EC ff030491 add      sp, sp, #0x100
002268F0 c0035fd6 ret      
002268F4 60020012 and      w0, w19, #1
002268F8 e12d00f0 adrp     x1, #0x7e5000
002268FC 21c01891 add      x1, x1, #0x630
00226900 e2030091 mov      x2, sp
00226904 63f6fd97 bl       #0x1a4290
00226908 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
0022690C f57340f9 ldr      x21, [sp, #0xe0]
00226910 fd7b4da9 ldp      x29, x30, [sp, #0xd0]
00226914 ff030491 add      sp, sp, #0x100
00226918 c0035fd6 ret      
0022691C 60020012 and      w0, w19, #1
00226920 e12d00f0 adrp     x1, #0x7e5000
00226924 21c01891 add      x1, x1, #0x630
00226928 e2030091 mov      x2, sp
0022692C 0d7ffe97 bl       #0x1c6560
00226930 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
00226934 f57340f9 ldr      x21, [sp, #0xe0]
00226938 fd7b4da9 ldp      x29, x30, [sp, #0xd0]
0022693C ff030491 add      sp, sp, #0x100
00226940 c0035fd6 ret      
00226944 60020012 and      w0, w19, #1
00226948 e12d00f0 adrp     x1, #0x7e5000
0022694C 21c01891 add      x1, x1, #0x630
00226950 e2030091 mov      x2, sp
00226954 bbb60194 bl       #0x294440
00226958 f44f4fa9 ldp      x20, x19, [sp, #0xf0]
0022695C f57340f9 ldr      x21, [sp, #0xe0]
00226960 fd7b4da9 ldp      x29, x30, [sp, #0xd0]
00226964 ff030491 add      sp, sp, #0x100
00226968 c0035fd6 ret      
0022696C e02d00f0 adrp     x0, #0x7e5000
00226970 00c01891 add      x0, x0, #0x630
00226974 e1030091 mov      x1, sp
00226978 3d91fe97 bl       #0x1cae6c
0022697C f44f4fa9 ldp      x20, x19, [sp, #0xf0]
00226980 f57340f9 ldr      x21, [sp, #0xe0]
00226984 fd7b4da9 ldp      x29, x30, [sp, #0xd0]
00226988 ff030491 add      sp, sp, #0x100
0022698C c0035fd6 ret      
00226990 6c3e0f94 bl       #0x5f6340
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
### 0x2555d0 (229 slots)
~~~asm
002555D0 ff0302d1 sub      sp, sp, #0x80
002555D4 fd7b02a9 stp      x29, x30, [sp, #0x20]
002555D8 fb1b00f9 str      x27, [sp, #0x30]
002555DC fa6704a9 stp      x26, x25, [sp, #0x40]
002555E0 f85f05a9 stp      x24, x23, [sp, #0x50]
002555E4 f65706a9 stp      x22, x21, [sp, #0x60]
002555E8 f44f07a9 stp      x20, x19, [sp, #0x70]
002555EC fd830091 add      x29, sp, #0x20
002555F0 482a00d0 adrp     x8, #0x79f000
002555F4 f40302aa mov      x20, x2
002555F8 082542f9 ldr      x8, [x8, #0x448]
002555FC 130140f9 ldr      x19, [x8]
00255600 80170037 tbnz     w0, #0, #0x2558f0
00255604 a8630091 add      x8, x29, #0x18
00255608 f60301aa mov      x22, x1
0025560C a52bff97 bl       #0x2204a0
00255610 751a41f9 ldr      x21, [x19, #0x230]
00255614 b50000b4 cbz      x21, #0x255628
00255618 e00315aa mov      x0, x21
0025561C 088c44f8 ldr      x8, [x0, #0x48]!
00255620 080940f9 ldr      x8, [x8, #0x10]
00255624 00013fd6 blr      x8
00255628 482a00d0 adrp     x8, #0x79f000
0025562C e00315aa mov      x0, x21
00255630 08ed41f9 ldr      x8, [x8, #0x3d8]
00255634 080140f9 ldr      x8, [x8]
00255638 175541f9 ldr      x23, [x8, #0x2a8]
0025563C a80240f9 ldr      x8, [x21]
00255640 081d40f9 ldr      x8, [x8, #0x38]
00255644 00013fd6 blr      x8
00255648 a80f40f9 ldr      x8, [x29, #0x18]
0025564C 89fb8152 mov      w9, #0xfdc
00255650 090ea072 movk     w9, #0x70, lsl #16
00255654 1a6969b8 ldr      w26, [x8, x9]
00255658 5f070071 cmp      w26, #1
0025565C 4b070054 b.lt     #0x255744
00255660 f8031f2a mov      w24, wzr
00255664 06000014 b        #0x25567c
00255668 1f2003d5 nop      
0025566C 1f2003d5 nop      
00255670 18070011 add      w24, w24, #1
00255674 1f031a6b cmp      w24, w26
00255678 60060054 b.eq     #0x255744
0025567C f9031f2a mov      w25, wzr
00255680 04000014 b        #0x255690
00255684 39070011 add      w25, w25, #1
00255688 3f7b0071 cmp      w25, #0x1e
0025568C 20ffff54 b.eq     #0x255670
00255690 a00f40f9 ldr      x0, [x29, #0x18]
00255694 a82300d1 sub      x8, x29, #8
00255698 e103182a mov      w1, w24
0025569C e203192a mov      w2, w25
002556A0 e30317aa mov      x3, x23
002556A4 69abfe97 bl       #0x200448
002556A8 a0835ff8 ldur     x0, [x29, #-8]
002556AC b7c3fe97 bl       #0x206588
002556B0 e0030037 tbnz     w0, #0, #0x25572c
002556B4 a0835ff8 ldur     x0, [x29, #-8]
002556B8 e00b00f9 str      x0, [sp, #0x10]
002556BC 800000b4 cbz      x0, #0x2556cc
002556C0 088c44f8 ldr      x8, [x0, #0x48]!
002556C4 080940f9 ldr      x8, [x8, #0x10]
002556C8 00013fd6 blr      x8
002556CC e1430091 add      x1, sp, #0x10
002556D0 e00315aa mov      x0, x21
002556D4 e20317aa mov      x2, x23
002556D8 e303182a mov      w3, w24
002556DC e403192a mov      w4, w25
002556E0 b8170094 bl       #0x25b5c0
002556E4 e00b40f9 ldr      x0, [sp, #0x10]
002556E8 a00000b4 cbz      x0, #0x2556fc
002556EC 088c44f8 ldr      x8, [x0, #0x48]!
002556F0 080d40f9 ldr      x8, [x8, #0x18]
002556F4 00013fd6 blr      x8
002556F8 ff0b00f9 str      xzr, [sp, #0x10]
002556FC a00f40f9 ldr      x0, [x29, #0x18]
00255700 e103182a mov      w1, w24
00255704 e203192a mov      w2, w25
00255708 63b9fe97 bl       #0x203c94
0025570C 00010036 tbz      w0, #0, #0x25572c
00255710 a8835ff8 ldur     x8, [x29, #-8]
00255714 e00315aa mov      x0, x21
00255718 e103182a mov      w1, w24
0025571C e203192a mov      w2, w25
00255720 e40317aa mov      x4, x23
00255724 03810191 add      x3, x8, #0x60
00255728 f1170094 bl       #0x25b6ec
0025572C a0835ff8 ldur     x0, [x29, #-8]
00255730 a0faffb4 cbz      x0, #0x255684
00255734 088c44f8 ldr      x8, [x0, #0x48]!
00255738 080d40f9 ldr      x8, [x8, #0x18]
0025573C 00013fd6 blr      x8
00255740 d1ffff17 b        #0x255684
00255744 772241f9 ldr      x23, [x19, #0x240]
00255748 b70000b4 cbz      x23, #0x25575c
0025574C e00317aa mov      x0, x23
00255750 088c44f8 ldr      x8, [x0, #0x48]!
00255754 080940f9 ldr      x8, [x8, #0x10]
00255758 00013fd6 blr      x8
0025575C e00317aa mov      x0, x23
00255760 01048052 mov      w1, #0x20
00255764 c31f0094 bl       #0x25d670
00255768 e88e44f8 ldr      x8, [x23, #0x48]!
0025576C e00317aa mov      x0, x23
00255770 080d40f9 ldr      x8, [x8, #0x18]
00255774 00013fd6 blr      x8
00255778 a82300d1 sub      x8, x29, #8
0025577C 492bff97 bl       #0x2204a0
00255780 f7031faa mov      x23, xzr
00255784 1ab49952 mov      w26, #0xcda0
00255788 fa00a072 movk     w26, #7, lsl #16
0025578C 05000014 b        #0x2557a0
00255790 f7060091 add      x23, x23, #1
00255794 5ac30091 add      x26, x26, #0x30
00255798 ff1a00f1 cmp      x23, #6
0025579C 20060054 b.eq     #0x255860
002557A0 782241f9 ldr      x24, [x19, #0x240]
002557A4 b80000b4 cbz      x24, #0x2557b8
002557A8 e00318aa mov      x0, x24
002557AC 088c44f8 ldr      x8, [x0, #0x48]!
002557B0 080940f9 ldr      x8, [x8, #0x10]
002557B4 00013fd6 blr      x8
002557B8 e00318aa mov      x0, x24
002557BC e103172a mov      w1, w23
002557C0 011f0094 bl       #0x25d3c4
002557C4 088f44f8 ldr      x8, [x24, #0x48]!
002557C8 f903002a mov      w25, w0
002557CC e00318aa mov      x0, x24
002557D0 080d40f9 ldr      x8, [x8, #0x18]
002557D4 00013fd6 blr      x8
002557D8 d9fdff34 cbz      w25, #0x255790
002557DC f8031faa mov      x24, xzr
002557E0 fb03192a mov      w27, w25
002557E4 0f000014 b        #0x255820
002557E8 1f2003d5 nop      
002557EC 1f2003d5 nop      
002557F0 e40f4029 ldp      w4, w3, [sp]
002557F4 e00319aa mov      x0, x25
002557F8 e103172a mov      w1, w23
002557FC e203182a mov      w2, w24
00255800 4a1f0094 bl       #0x25d528
00255804 288f44f8 ldr      x8, [x25, #0x48]!
00255808 e00319aa mov      x0, x25
0025580C 080d40f9 ldr      x8, [x8, #0x18]
00255810 00013fd6 blr      x8
00255814 18070091 add      x24, x24, #1
00255818 7f0318eb cmp      x27, x24
0025581C a0fbff54 b.eq     #0x255790
00255820 a830ff97 bl       #0x221ac0
00255824 08001a8b add      x8, x0, x26
00255828 a0835ff8 ldur     x0, [x29, #-8]
0025582C e1230091 add      x1, sp, #8
00255830 087978f8 ldr      x8, [x8, x24, lsl #3]
00255834 e2130091 add      x2, sp, #4
00255838 e3030091 mov      x3, sp
0025583C ff2300a9 stp      xzr, x8, [sp]
00255840 26b9fe97 bl       #0x203cd8
00255844 792241f9 ldr      x25, [x19, #0x240]
00255848 59fdffb4 cbz      x25, #0x2557f0
0025584C e00319aa mov      x0, x25
00255850 088c44f8 ldr      x8, [x0, #0x48]!
00255854 080940f9 ldr      x8, [x8, #0x10]
00255858 00013fd6 blr      x8
0025585C e5ffff17 b        #0x2557f0
00255860 c8f24191 add      x8, x22, #0x7c, lsl #12
00255864 01013b91 add      x1, x8, #0xec0
00255868 280040f9 ldr      x8, [x1]
0025586C 680200b4 cbz      x8, #0x2558b8
00255870 a0835ff8 ldur     x0, [x29, #-8]
00255874 e2230091 add      x2, sp, #8
00255878 e3130091 add      x3, sp, #4
0025587C ffff0029 stp      wzr, wzr, [sp, #4]
00255880 16b9fe97 bl       #0x203cd8
00255884 763641f9 ldr      x22, [x19, #0x268]
00255888 b60000b4 cbz      x22, #0x25589c
0025588C e00316aa mov      x0, x22
00255890 088c44f8 ldr      x8, [x0, #0x48]!
00255894 080940f9 ldr      x8, [x8, #0x10]
00255898 00013fd6 blr      x8
0025589C e9a34029 ldp      w9, w8, [sp, #4]
002558A0 ca8e44f8 ldr      x10, [x22, #0x48]!
002558A4 e00316aa mov      x0, x22
002558A8 c8ca02b9 str      w8, [x22, #0x2c8]
002558AC c9ce02b9 str      w9, [x22, #0x2cc]
002558B0 480d40f9 ldr      x8, [x10, #0x18]
002558B4 00013fd6 blr      x8
002558B8 a0835ff8 ldur     x0, [x29, #-8]
002558BC 800000b4 cbz      x0, #0x2558cc
002558C0 088c44f8 ldr      x8, [x0, #0x48]!
002558C4 080d40f9 ldr      x8, [x8, #0x18]
002558C8 00013fd6 blr      x8
002558CC a88e44f8 ldr      x8, [x21, #0x48]!
002558D0 e00315aa mov      x0, x21
002558D4 080d40f9 ldr      x8, [x8, #0x18]
002558D8 00013fd6 blr      x8
002558DC a00f40f9 ldr      x0, [x29, #0x18]
002558E0 800000b4 cbz      x0, #0x2558f0
002558E4 088c44f8 ldr      x8, [x0, #0x48]!
002558E8 080d40f9 ldr      x8, [x8, #0x18]
002558EC 00013fd6 blr      x8
002558F0 753a41f9 ldr      x21, [x19, #0x270]
002558F4 b50000b4 cbz      x21, #0x255908
002558F8 e00315aa mov      x0, x21
002558FC 088c44f8 ldr      x8, [x0, #0x48]!
00255900 080940f9 ldr      x8, [x8, #0x10]
00255904 00013fd6 blr      x8
00255908 a0820191 add      x0, x21, #0x60
0025590C 02128052 mov      w2, #0x90
00255910 e10314aa mov      x1, x20
00255914 33830e94 bl       #0x5f65e0
00255918 a88e44f8 ldr      x8, [x21, #0x48]!
0025591C e00315aa mov      x0, x21
00255920 080d40f9 ldr      x8, [x8, #0x18]
00255924 00013fd6 blr      x8
00255928 e00313aa mov      x0, x19
0025592C 81008052 mov      w1, #4
00255930 a36f0094 bl       #0x2717bc
00255934 80000036 tbz      w0, #0, #0x255944
00255938 e00313aa mov      x0, x19
0025593C 81008052 mov      w1, #4
00255940 0d700094 bl       #0x271974
00255944 f44f47a9 ldp      x20, x19, [sp, #0x70]
00255948 fb1b40f9 ldr      x27, [sp, #0x30]
0025594C f65746a9 ldp      x22, x21, [sp, #0x60]
00255950 f85f45a9 ldp      x24, x23, [sp, #0x50]
00255954 fa6744a9 ldp      x26, x25, [sp, #0x40]
00255958 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0025595C ff030291 add      sp, sp, #0x80
00255960 c0035fd6 ret      
~~~
### 0x255970 (193 slots)
~~~asm
00255970 ff0302d1 sub      sp, sp, #0x80
00255974 fd7b02a9 stp      x29, x30, [sp, #0x20]
00255978 fb1b00f9 str      x27, [sp, #0x30]
0025597C fa6704a9 stp      x26, x25, [sp, #0x40]
00255980 f85f05a9 stp      x24, x23, [sp, #0x50]
00255984 f65706a9 stp      x22, x21, [sp, #0x60]
00255988 f44f07a9 stp      x20, x19, [sp, #0x70]
0025598C fd830091 add      x29, sp, #0x20
00255990 582a00d0 adrp     x24, #0x79f000
00255994 a8630091 add      x8, x29, #0x18
00255998 182742f9 ldr      x24, [x24, #0x448]
0025599C f40300aa mov      x20, x0
002559A0 190340f9 ldr      x25, [x24]
002559A4 bf2aff97 bl       #0x2204a0
002559A8 331b41f9 ldr      x19, [x25, #0x230]
002559AC b30000b4 cbz      x19, #0x2559c0
002559B0 e00313aa mov      x0, x19
002559B4 088c44f8 ldr      x8, [x0, #0x48]!
002559B8 080940f9 ldr      x8, [x8, #0x10]
002559BC 00013fd6 blr      x8
002559C0 482a00d0 adrp     x8, #0x79f000
002559C4 e00313aa mov      x0, x19
002559C8 08ed41f9 ldr      x8, [x8, #0x3d8]
002559CC 080140f9 ldr      x8, [x8]
002559D0 155541f9 ldr      x21, [x8, #0x2a8]
002559D4 680240f9 ldr      x8, [x19]
002559D8 081d40f9 ldr      x8, [x8, #0x38]
002559DC 00013fd6 blr      x8
002559E0 f6031f2a mov      w22, wzr
002559E4 06000014 b        #0x2559fc
002559E8 1f2003d5 nop      
002559EC 1f2003d5 nop      
002559F0 d6060011 add      w22, w22, #1
002559F4 df820071 cmp      w22, #0x20
002559F8 e0040054 b.eq     #0x255a94
002559FC f7031f2a mov      w23, wzr
00255A00 04000014 b        #0x255a10
00255A04 f7060011 add      w23, w23, #1
00255A08 ff7a0071 cmp      w23, #0x1e
00255A0C 20ffff54 b.eq     #0x2559f0
00255A10 a00f40f9 ldr      x0, [x29, #0x18]
00255A14 a82300d1 sub      x8, x29, #8
00255A18 e103162a mov      w1, w22
00255A1C e203172a mov      w2, w23
00255A20 e30315aa mov      x3, x21
00255A24 89aafe97 bl       #0x200448
00255A28 a0835ff8 ldur     x0, [x29, #-8]
00255A2C d7c2fe97 bl       #0x206588
00255A30 60020037 tbnz     w0, #0, #0x255a7c
00255A34 a0835ff8 ldur     x0, [x29, #-8]
00255A38 e00b00f9 str      x0, [sp, #0x10]
00255A3C 800000b4 cbz      x0, #0x255a4c
00255A40 088c44f8 ldr      x8, [x0, #0x48]!
00255A44 080940f9 ldr      x8, [x8, #0x10]
00255A48 00013fd6 blr      x8
00255A4C e1430091 add      x1, sp, #0x10
00255A50 e00313aa mov      x0, x19
00255A54 e20315aa mov      x2, x21
00255A58 e303162a mov      w3, w22
00255A5C e403172a mov      w4, w23
00255A60 d8160094 bl       #0x25b5c0
00255A64 e00b40f9 ldr      x0, [sp, #0x10]
00255A68 a00000b4 cbz      x0, #0x255a7c
00255A6C 088c44f8 ldr      x8, [x0, #0x48]!
00255A70 080d40f9 ldr      x8, [x8, #0x18]
00255A74 00013fd6 blr      x8
00255A78 ff0b00f9 str      xzr, [sp, #0x10]
00255A7C a0835ff8 ldur     x0, [x29, #-8]
00255A80 20fcffb4 cbz      x0, #0x255a04
00255A84 088c44f8 ldr      x8, [x0, #0x48]!
00255A88 080d40f9 ldr      x8, [x8, #0x18]
00255A8C 00013fd6 blr      x8
00255A90 ddffff17 b        #0x255a04
00255A94 352341f9 ldr      x21, [x25, #0x240]
00255A98 b50000b4 cbz      x21, #0x255aac
00255A9C e00315aa mov      x0, x21
00255AA0 088c44f8 ldr      x8, [x0, #0x48]!
00255AA4 080940f9 ldr      x8, [x8, #0x10]
00255AA8 00013fd6 blr      x8
00255AAC e00315aa mov      x0, x21
00255AB0 01048052 mov      w1, #0x20
00255AB4 ef1e0094 bl       #0x25d670
00255AB8 a88e44f8 ldr      x8, [x21, #0x48]!
00255ABC e00315aa mov      x0, x21
00255AC0 080d40f9 ldr      x8, [x8, #0x18]
00255AC4 00013fd6 blr      x8
00255AC8 f5031faa mov      x21, xzr
00255ACC 1ab49952 mov      w26, #0xcda0
00255AD0 fa00a072 movk     w26, #7, lsl #16
00255AD4 07000014 b        #0x255af0
00255AD8 1f2003d5 nop      
00255ADC 1f2003d5 nop      
00255AE0 b5060091 add      x21, x21, #1
00255AE4 5ac30091 add      x26, x26, #0x30
00255AE8 bf1a00f1 cmp      x21, #6
00255AEC 40060054 b.eq     #0x255bb4
00255AF0 362341f9 ldr      x22, [x25, #0x240]
00255AF4 b60000b4 cbz      x22, #0x255b08
00255AF8 e00316aa mov      x0, x22
00255AFC 088c44f8 ldr      x8, [x0, #0x48]!
00255B00 080940f9 ldr      x8, [x8, #0x10]
00255B04 00013fd6 blr      x8
00255B08 e00316aa mov      x0, x22
00255B0C e103152a mov      w1, w21
00255B10 2d1e0094 bl       #0x25d3c4
00255B14 c88e44f8 ldr      x8, [x22, #0x48]!
00255B18 f703002a mov      w23, w0
00255B1C e00316aa mov      x0, x22
00255B20 080d40f9 ldr      x8, [x8, #0x18]
00255B24 00013fd6 blr      x8
00255B28 d7fdff34 cbz      w23, #0x255ae0
00255B2C f6031faa mov      x22, xzr
00255B30 fb03172a mov      w27, w23
00255B34 0f000014 b        #0x255b70
00255B38 1f2003d5 nop      
00255B3C 1f2003d5 nop      
00255B40 e40f4129 ldp      w4, w3, [sp, #8]
00255B44 e00317aa mov      x0, x23
00255B48 e103152a mov      w1, w21
00255B4C e203162a mov      w2, w22
00255B50 761e0094 bl       #0x25d528
00255B54 e88e44f8 ldr      x8, [x23, #0x48]!
00255B58 e00317aa mov      x0, x23
00255B5C 080d40f9 ldr      x8, [x8, #0x18]
00255B60 00013fd6 blr      x8
00255B64 d6060091 add      x22, x22, #1
00255B68 7f0316eb cmp      x27, x22
00255B6C a0fbff54 b.eq     #0x255ae0
00255B70 d42fff97 bl       #0x221ac0
00255B74 08001a8b add      x8, x0, x26
00255B78 a00f40f9 ldr      x0, [x29, #0x18]
00255B7C a12300d1 sub      x1, x29, #8
00255B80 087976f8 ldr      x8, [x8, x22, lsl #3]
00255B84 e2330091 add      x2, sp, #0xc
00255B88 e3230091 add      x3, sp, #8
00255B8C ff0700f9 str      xzr, [sp, #8]
00255B90 a8831ff8 stur     x8, [x29, #-8]
00255B94 51b8fe97 bl       #0x203cd8
00255B98 372341f9 ldr      x23, [x25, #0x240]
00255B9C 37fdffb4 cbz      x23, #0x255b40
00255BA0 e00317aa mov      x0, x23
00255BA4 088c44f8 ldr      x8, [x0, #0x48]!
00255BA8 080940f9 ldr      x8, [x8, #0x10]
00255BAC 00013fd6 blr      x8
00255BB0 e4ffff17 b        #0x255b40
00255BB4 88f24191 add      x8, x20, #0x7c, lsl #12
00255BB8 01013b91 add      x1, x8, #0xec0
00255BBC 280040f9 ldr      x8, [x1]
00255BC0 c80200b4 cbz      x8, #0x255c18
00255BC4 a00f40f9 ldr      x0, [x29, #0x18]
00255BC8 a22300d1 sub      x2, x29, #8
00255BCC e3330091 add      x3, sp, #0xc
00255BD0 bf831fb8 stur     wzr, [x29, #-8]
00255BD4 ff0f00b9 str      wzr, [sp, #0xc]
00255BD8 40b8fe97 bl       #0x203cd8
00255BDC 080340f9 ldr      x8, [x24]
00255BE0 143541f9 ldr      x20, [x8, #0x268]
00255BE4 b40000b4 cbz      x20, #0x255bf8
00255BE8 e00314aa mov      x0, x20
00255BEC 088c44f8 ldr      x8, [x0, #0x48]!
00255BF0 080940f9 ldr      x8, [x8, #0x10]
00255BF4 00013fd6 blr      x8
00255BF8 a8835fb8 ldur     w8, [x29, #-8]
00255BFC e90f40b9 ldr      w9, [sp, #0xc]
00255C00 8a8e44f8 ldr      x10, [x20, #0x48]!
00255C04 e00314aa mov      x0, x20
00255C08 88ca02b9 str      w8, [x20, #0x2c8]
00255C0C 89ce02b9 str      w9, [x20, #0x2cc]
00255C10 480d40f9 ldr      x8, [x10, #0x18]
00255C14 00013fd6 blr      x8
00255C18 000340f9 ldr      x0, [x24]
00255C1C 81008052 mov      w1, #4
00255C20 40700094 bl       #0x271d20
00255C24 688e44f8 ldr      x8, [x19, #0x48]!
00255C28 f403002a mov      w20, w0
00255C2C e00313aa mov      x0, x19
00255C30 080d40f9 ldr      x8, [x8, #0x18]
00255C34 00013fd6 blr      x8
00255C38 a00f40f9 ldr      x0, [x29, #0x18]
00255C3C 800000b4 cbz      x0, #0x255c4c
00255C40 088c44f8 ldr      x8, [x0, #0x48]!
00255C44 080d40f9 ldr      x8, [x8, #0x18]
00255C48 00013fd6 blr      x8
00255C4C 9f0e0071 cmp      w20, #3
00255C50 f44f47a9 ldp      x20, x19, [sp, #0x70]
00255C54 f65746a9 ldp      x22, x21, [sp, #0x60]
00255C58 e0079f1a cset     w0, ne
00255C5C f85f45a9 ldp      x24, x23, [sp, #0x50]
00255C60 fb1b40f9 ldr      x27, [sp, #0x30]
00255C64 fa6744a9 ldp      x26, x25, [sp, #0x40]
00255C68 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00255C6C ff030291 add      sp, sp, #0x80
00255C70 c0035fd6 ret      
~~~
### 0x255c80 (629 slots)
~~~asm
00255C80 ffc302d1 sub      sp, sp, #0xb0
00255C84 fd7b05a9 stp      x29, x30, [sp, #0x50]
00255C88 fc6f06a9 stp      x28, x27, [sp, #0x60]
00255C8C fa6707a9 stp      x26, x25, [sp, #0x70]
00255C90 f85f08a9 stp      x24, x23, [sp, #0x80]
00255C94 f65709a9 stp      x22, x21, [sp, #0x90]
00255C98 f44f0aa9 stp      x20, x19, [sp, #0xa0]
00255C9C fd430191 add      x29, sp, #0x50
00255CA0 48140051 sub      w8, w2, #5
00255CA4 1f090031 cmn      w8, #2
00255CA8 e3350054 b.lo     #0x256364
00255CAC 080098d2 mov      x8, #0xc000
00255CB0 4818a1f2 movk     x8, #0x8c2, lsl #16
00255CB4 090090d2 mov      x9, #0x8000
00255CB8 c912a1f2 movk     x9, #0x896, lsl #16
00255CBC 5f0c0071 cmp      w2, #3
00255CC0 08b6d1f2 movk     x8, #0x8db0, lsl #32
00255CC4 0820e0f2 movk     x8, #0x100, lsl #48
00255CC8 097ed5f2 movk     x9, #0xabf0, lsl #32
00255CCC 0920e0f2 movk     x9, #0x100, lsl #48
00255CD0 f503022a mov      w21, w2
00255CD4 2801889a csel     x8, x9, x8, eq
00255CD8 a8831ff8 stur     x8, [x29, #-8]
00255CDC 42008052 mov      w2, #2
00255CE0 f60301aa mov      x22, x1
00255CE4 f703002a mov      w23, w0
00255CE8 a23aff97 bl       #0x224770
00255CEC 682c0090 adrp     x8, #0x7e1000
00255CF0 08e11291 add      x8, x8, #0x4b8
00255CF4 1c0140f9 ldr      x28, [x8]
00255CF8 9b1b41f9 ldr      x27, [x28, #0x230]
00255CFC bb0000b4 cbz      x27, #0x255d10
00255D00 e0031baa mov      x0, x27
00255D04 088c44f8 ldr      x8, [x0, #0x48]!
00255D08 080940f9 ldr      x8, [x8, #0x10]
00255D0C 00013fd6 blr      x8
00255D10 a84300d1 sub      x8, x29, #0x10
00255D14 e329ff97 bl       #0x2204a0
00255D18 c82640a9 ldp      x8, x9, [x22]
00255D1C a22300d1 sub      x2, x29, #8
00255D20 e0031caa mov      x0, x28
00255D24 21008052 mov      w1, #1
00255D28 88271fa9 stp      x8, x9, [x28, #0x1f0]
00255D2C b56f0094 bl       #0x271c00
00255D30 1f080071 cmp      w0, #2
00255D34 81000054 b.ne     #0x255d44
00255D38 e003172a mov      w0, w23
00255D3C e10316aa mov      x1, x22
00255D40 2839ff97 bl       #0x2241e0
00255D44 a05300d1 sub      x0, x29, #0x14
00255D48 bfc31eb8 stur     wzr, [x29, #-0x14]
00255D4C f929ff97 bl       #0x220530
00255D50 a8035ff8 ldur     x8, [x29, #-0x10]
00255D54 89fb8152 mov      w9, #0xfdc
00255D58 090ea072 movk     w9, #0x70, lsl #16
00255D5C 006929b8 str      w0, [x8, x9]
00255D60 582fff97 bl       #0x221ac0
00255D64 13b49952 mov      w19, #0xcda0
00255D68 f300a072 movk     w19, #7, lsl #16
00255D6C 02248052 mov      w2, #0x120
00255D70 0000138b add      x0, x0, x19
00255D74 e1031f2a mov      w1, wzr
00255D78 f6800e94 bl       #0x5f6150
00255D7C f6031faa mov      x22, xzr
00255D80 05000014 b        #0x255d94
00255D84 d6060091 add      x22, x22, #1
00255D88 73c20091 add      x19, x19, #0x30
00255D8C df1a00f1 cmp      x22, #6
00255D90 20090054 b.eq     #0x255eb4
00255D94 972341f9 ldr      x23, [x28, #0x240]
00255D98 b70000b4 cbz      x23, #0x255dac
00255D9C e00317aa mov      x0, x23
00255DA0 088c44f8 ldr      x8, [x0, #0x48]!
00255DA4 080940f9 ldr      x8, [x8, #0x10]
00255DA8 00013fd6 blr      x8
00255DAC e00317aa mov      x0, x23
00255DB0 e103162a mov      w1, w22
00255DB4 841d0094 bl       #0x25d3c4
00255DB8 e88e44f8 ldr      x8, [x23, #0x48]!
00255DBC f803002a mov      w24, w0
00255DC0 e00317aa mov      x0, x23
00255DC4 080d40f9 ldr      x8, [x8, #0x18]
00255DC8 00013fd6 blr      x8
00255DCC d8fdff34 cbz      w24, #0x255d84
00255DD0 f7031faa mov      x23, xzr
00255DD4 f403182a mov      w20, w24
00255DD8 05000014 b        #0x255dec
00255DDC 1f2003d5 nop      
00255DE0 f7060091 add      x23, x23, #1
00255DE4 9f0217eb cmp      x20, x23
00255DE8 e0fcff54 b.eq     #0x255d84
00255DEC 992341f9 ldr      x25, [x28, #0x240]
00255DF0 b90000b4 cbz      x25, #0x255e04
00255DF4 e00319aa mov      x0, x25
00255DF8 088c44f8 ldr      x8, [x0, #0x48]!
00255DFC 080940f9 ldr      x8, [x8, #0x10]
00255E00 00013fd6 blr      x8
00255E04 e00319aa mov      x0, x25
00255E08 e103162a mov      w1, w22
00255E0C e203172a mov      w2, w23
00255E10 1a1d0094 bl       #0x25d278
00255E14 288f44f8 ldr      x8, [x25, #0x48]!
00255E18 f803002a mov      w24, w0
00255E1C e00319aa mov      x0, x25
00255E20 080d40f9 ldr      x8, [x8, #0x18]
00255E24 00013fd6 blr      x8
00255E28 992341f9 ldr      x25, [x28, #0x240]
00255E2C b90000b4 cbz      x25, #0x255e40
00255E30 e00319aa mov      x0, x25
00255E34 088c44f8 ldr      x8, [x0, #0x48]!
00255E38 080940f9 ldr      x8, [x8, #0x10]
00255E3C 00013fd6 blr      x8
00255E40 e00319aa mov      x0, x25
00255E44 e103162a mov      w1, w22
00255E48 e203172a mov      w2, w23
00255E4C 141d0094 bl       #0x25d29c
00255E50 288f44f8 ldr      x8, [x25, #0x48]!
00255E54 fa03002a mov      w26, w0
00255E58 e00319aa mov      x0, x25
00255E5C 080d40f9 ldr      x8, [x8, #0x18]
00255E60 00013fd6 blr      x8
00255E64 482a00d0 adrp     x8, #0x79f000
00255E68 e0031baa mov      x0, x27
00255E6C 08ed41f9 ldr      x8, [x8, #0x3d8]
00255E70 e103182a mov      w1, w24
00255E74 e2031a2a mov      w2, w26
00255E78 080140f9 ldr      x8, [x8]
00255E7C 035541f9 ldr      x3, [x8, #0x2a8]
00255E80 a88300d1 sub      x8, x29, #0x20
00255E84 2b150094 bl       #0x25b330
00255E88 a8035ef8 ldur     x8, [x29, #-0x20]
00255E8C 183140f9 ldr      x24, [x8, #0x60]
00255E90 0c2fff97 bl       #0x221ac0
00255E94 0800138b add      x8, x0, x19
00255E98 187937f8 str      x24, [x8, x23, lsl #3]
00255E9C a0035ef8 ldur     x0, [x29, #-0x20]
00255EA0 00faffb4 cbz      x0, #0x255de0
00255EA4 088c44f8 ldr      x8, [x0, #0x48]!
00255EA8 080d40f9 ldr      x8, [x8, #0x18]
00255EAC 00013fd6 blr      x8
00255EB0 ccffff17 b        #0x255de0
00255EB4 fc6f00a9 stp      x28, x27, [sp]
00255EB8 682c0090 adrp     x8, #0x7e1000
00255EBC 08611491 add      x8, x8, #0x518
00255EC0 080140f9 ldr      x8, [x8]
00255EC4 165541f9 ldr      x22, [x8, #0x2a8]
00255EC8 a88300d1 sub      x8, x29, #0x20
00255ECC 8129ff97 bl       #0x2204d0
00255ED0 a0035ef8 ldur     x0, [x29, #-0x20]
00255ED4 09f28152 mov      w9, #0xf90
00255ED8 090ea072 movk     w9, #0x70, lsl #16
00255EDC 33008052 mov      w19, #1
00255EE0 088c44f8 ldr      x8, [x0, #0x48]!
00255EE4 136829b8 str      w19, [x0, x9]
00255EE8 080d40f9 ldr      x8, [x8, #0x18]
00255EEC 00013fd6 blr      x8
00255EF0 a0035ff8 ldur     x0, [x29, #-0x10]
00255EF4 08fb8152 mov      w8, #0xfd8
00255EF8 080ea072 movk     w8, #0x70, lsl #16
00255EFC 136828b8 str      w19, [x0, x8]
00255F00 a0a8fe97 bl       #0x200180
00255F04 bf0e0071 cmp      w21, #3
00255F08 48d03bd5 mrs      x8, tpidr_el0
00255F0C 69008052 mov      w9, #3
00255F10 13c97392 and      x19, x8, #0xffffffffffffe000
00255F14 f7031f2a mov      w23, wzr
00255F18 3c05891a cinc     w28, w9, ne
00255F1C 74067db2 orr      x20, x19, #0x18
00255F20 15168052 mov      w21, #0xb0
00255F24 1b018052 mov      w27, #8
00255F28 05000014 b        #0x255f3c
00255F2C 1f2003d5 nop      
00255F30 f7060011 add      w23, w23, #1
00255F34 ff820071 cmp      w23, #0x20
00255F38 200c0054 b.eq     #0x2560bc
00255F3C f8031f2a mov      w24, wzr
00255F40 08000014 b        #0x255f60
00255F44 280340f9 ldr      x8, [x25]
00255F48 e00319aa mov      x0, x25
00255F4C 080d40f9 ldr      x8, [x8, #0x18]
00255F50 00013fd6 blr      x8
00255F54 18070011 add      w24, w24, #1
00255F58 1f7b0071 cmp      w24, #0x1e
00255F5C a0feff54 b.eq     #0x255f30
00255F60 684e40f9 ldr      x8, [x19, #0x98]
00255F64 1f4100f1 cmp      x8, #0x10
00255F68 e0200054 b.eq     #0x256384
00255F6C 967a28f8 str      x22, [x20, x8, lsl #3]
00255F70 e00316aa mov      x0, x22
00255F74 684e40f9 ldr      x8, [x19, #0x98]
00255F78 e10315aa mov      x1, x21
00255F7C 02018052 mov      w2, #8
00255F80 08050091 add      x8, x8, #1
00255F84 684e00f9 str      x8, [x19, #0x98]
00255F88 c80240f9 ldr      x8, [x22]
00255F8C 080940f9 ldr      x8, [x8, #0x10]
00255F90 00013fd6 blr      x8
00255F94 f90300aa mov      x25, x0
00255F98 c00200b4 cbz      x0, #0x255ff0
00255F9C e00319aa mov      x0, x25
00255FA0 e10316aa mov      x1, x22
00255FA4 91c0fe97 bl       #0x2061e8
00255FA8 36e700a9 stp      x22, x25, [x25, #8]
00255FAC fa0319aa mov      x26, x25
00255FB0 35ef01a9 stp      x21, x27, [x25, #0x18]
00255FB4 684e40f9 ldr      x8, [x19, #0x98]
00255FB8 080500d1 sub      x8, x8, #1
00255FBC 684e00f9 str      x8, [x19, #0x98]
00255FC0 488f44f8 ldr      x8, [x26, #0x48]!
00255FC4 e0031aaa mov      x0, x26
00255FC8 080940f9 ldr      x8, [x8, #0x10]
00255FCC 00013fd6 blr      x8
00255FD0 480340f9 ldr      x8, [x26]
00255FD4 e0031aaa mov      x0, x26
00255FD8 f91700f9 str      x25, [sp, #0x28]
00255FDC 080940f9 ldr      x8, [x8, #0x10]
00255FE0 00013fd6 blr      x8
00255FE4 15000014 b        #0x256038
00255FE8 1f2003d5 nop      
00255FEC 1f2003d5 nop      
00255FF0 c80240f9 ldr      x8, [x22]
00255FF4 e00316aa mov      x0, x22
00255FF8 085d40f9 ldr      x8, [x8, #0xb8]
00255FFC 00013fd6 blr      x8
00256000 e0031faa mov      x0, xzr
00256004 e10316aa mov      x1, x22
00256008 78c0fe97 bl       #0x2061e8
0025600C 08028052 mov      w8, #0x10
00256010 760300f9 str      x22, [x27]
00256014 ff1700f9 str      xzr, [sp, #0x28]
00256018 1f0100f9 str      xzr, [x8]
0025601C 08038052 mov      w8, #0x18
00256020 150100f9 str      x21, [x8]
00256024 08048052 mov      w8, #0x20
00256028 1b0100f9 str      x27, [x8]
0025602C 684e40f9 ldr      x8, [x19, #0x98]
00256030 080500d1 sub      x8, x8, #1
00256034 684e00f9 str      x8, [x19, #0x98]
00256038 e00740f9 ldr      x0, [sp, #8]
0025603C e1a30091 add      x1, sp, #0x28
00256040 e203172a mov      w2, w23
00256044 e303182a mov      w3, w24
00256048 92140094 bl       #0x25b290
0025604C e01740f9 ldr      x0, [sp, #0x28]
00256050 a00000b4 cbz      x0, #0x256064
00256054 088c44f8 ldr      x8, [x0, #0x48]!
00256058 080d40f9 ldr      x8, [x8, #0x18]
0025605C 00013fd6 blr      x8
00256060 ff1700f9 str      xzr, [sp, #0x28]
00256064 68008052 mov      w8, #3
00256068 3c9b00b9 str      w28, [x25, #0x98]
0025606C ba035ff8 ldur     x26, [x29, #-0x10]
00256070 289300b9 str      w8, [x25, #0x90]
00256074 f91300f9 str      x25, [sp, #0x20]
00256078 288f44f8 ldr      x8, [x25, #0x48]!
0025607C e00319aa mov      x0, x25
00256080 080940f9 ldr      x8, [x8, #0x10]
00256084 00013fd6 blr      x8
00256088 e1830091 add      x1, sp, #0x20
0025608C e0031aaa mov      x0, x26
00256090 e20316aa mov      x2, x22
00256094 e303172a mov      w3, w23
00256098 e403182a mov      w4, w24
0025609C 50affe97 bl       #0x201ddc
002560A0 e01340f9 ldr      x0, [sp, #0x20]
002560A4 00f5ffb4 cbz      x0, #0x255f44
002560A8 088c44f8 ldr      x8, [x0, #0x48]!
002560AC 080d40f9 ldr      x8, [x8, #0x18]
002560B0 00013fd6 blr      x8
002560B4 ff1300f9 str      xzr, [sp, #0x20]
002560B8 a3ffff17 b        #0x255f44
002560BC 812eff97 bl       #0x221ac0
002560C0 f40340f9 ldr      x20, [sp]
002560C4 08d89952 mov      w8, #0xcec0
002560C8 e800a072 movk     w8, #7, lsl #16
002560CC 1f6828f8 str      xzr, [x0, x8]
002560D0 953641f9 ldr      x21, [x20, #0x268]
002560D4 b50000b4 cbz      x21, #0x2560e8
002560D8 e00315aa mov      x0, x21
002560DC 088c44f8 ldr      x8, [x0, #0x48]!
002560E0 080940f9 ldr      x8, [x8, #0x10]
002560E4 00013fd6 blr      x8
002560E8 a87e4c39 ldrb     w8, [x21, #0x31f]
002560EC 1f090071 cmp      w8, #2
002560F0 482a00b0 adrp     x8, #0x79f000
002560F4 a98a41f9 ldr      x9, [x21, #0x310]
002560F8 08ed41f9 ldr      x8, [x8, #0x3d8]
002560FC 21019fda csinv    x1, x9, xzr, eq
00256100 3f040031 cmn      w1, #1
00256104 080140f9 ldr      x8, [x8]
00256108 165541f9 ldr      x22, [x8, #0x2a8]
0025610C 60020054 b.eq     #0x256158
00256110 22fc60d3 lsr      x2, x1, #0x20
00256114 5f040031 cmn      w2, #1
00256118 00020054 b.eq     #0x256158
0025611C a0035ff8 ldur     x0, [x29, #-0x10]
00256120 a88300d1 sub      x8, x29, #0x20
00256124 e30316aa mov      x3, x22
00256128 c8a8fe97 bl       #0x200448
0025612C a8035ef8 ldur     x8, [x29, #-0x20]
00256130 133140f9 ldr      x19, [x8, #0x60]
00256134 632eff97 bl       #0x221ac0
00256138 08d89952 mov      w8, #0xcec0
0025613C e800a072 movk     w8, #7, lsl #16
00256140 136828f8 str      x19, [x0, x8]
00256144 a0035ef8 ldur     x0, [x29, #-0x20]
00256148 800000b4 cbz      x0, #0x256158
0025614C 088c44f8 ldr      x8, [x0, #0x48]!
00256150 080d40f9 ldr      x8, [x8, #0x18]
00256154 00013fd6 blr      x8
00256158 f7031f2a mov      w23, wzr
0025615C 7b028052 mov      w27, #0x13
00256160 04000014 b        #0x256170
00256164 f7060011 add      w23, w23, #1
00256168 ff820071 cmp      w23, #0x20
0025616C e0100054 b.eq     #0x256388
00256170 f8031f2a mov      w24, wzr
00256174 06000014 b        #0x25618c
00256178 1f2003d5 nop      
0025617C 1f2003d5 nop      
00256180 18070011 add      w24, w24, #1
00256184 1f7b0071 cmp      w24, #0x1e
00256188 e0feff54 b.eq     #0x256164
0025618C a0035ff8 ldur     x0, [x29, #-0x10]
00256190 a88300d1 sub      x8, x29, #0x20
00256194 e103172a mov      w1, w23
00256198 e203182a mov      w2, w24
0025619C e30316aa mov      x3, x22
002561A0 aaa8fe97 bl       #0x200448
002561A4 a0035ef8 ldur     x0, [x29, #-0x20]
002561A8 f8c0fe97 bl       #0x206588
002561AC a0000036 tbz      w0, #0, #0x2561c0
002561B0 f3031f2a mov      w19, wzr
002561B4 a0035ef8 ldur     x0, [x29, #-0x20]
002561B8 a00a00b5 cbnz     x0, #0x25630c
002561BC 57000014 b        #0x256318
002561C0 992241f9 ldr      x25, [x20, #0x240]
002561C4 b90000b4 cbz      x25, #0x2561d8
002561C8 e00319aa mov      x0, x25
002561CC 088c44f8 ldr      x8, [x0, #0x48]!
002561D0 080940f9 ldr      x8, [x8, #0x10]
002561D4 00013fd6 blr      x8
002561D8 a0035ef8 ldur     x0, [x29, #-0x20]
002561DC 07c1fe97 bl       #0x2065f8
002561E0 fa03002a mov      w26, w0
002561E4 a0035ef8 ldur     x0, [x29, #-0x20]
002561E8 06c1fe97 bl       #0x206600
002561EC e103002a mov      w1, w0
002561F0 e0031a2a mov      w0, w26
002561F4 1b010094 bl       #0x256660
002561F8 e00319aa mov      x0, x25
002561FC e103172a mov      w1, w23
00256200 e203182a mov      w2, w24
00256204 8b1c0094 bl       #0x25d430
00256208 f3031b2a mov      w19, w27
0025620C 40070037 tbnz     w0, #0, #0x2562f4
00256210 9a3641f9 ldr      x26, [x20, #0x268]
00256214 fa0600b4 cbz      x26, #0x2562f0
00256218 488f44f8 ldr      x8, [x26, #0x48]!
0025621C e0031aaa mov      x0, x26
00256220 080940f9 ldr      x8, [x8, #0x10]
00256224 00013fd6 blr      x8
00256228 480340f9 ldr      x8, [x26]
0025622C e0031aaa mov      x0, x26
00256230 080d40f9 ldr      x8, [x8, #0x18]
00256234 00013fd6 blr      x8
00256238 485f4b39 ldrb     w8, [x26, #0x2d7]
0025623C 1f090071 cmp      w8, #2
00256240 496741f9 ldr      x9, [x26, #0x2c8]
00256244 28019fda csinv    x8, x9, xzr, eq
00256248 ff02086b cmp      w23, w8
0025624C a1000054 b.ne     #0x256260
00256250 08fd60d3 lsr      x8, x8, #0x20
00256254 f3031b2a mov      w19, w27
00256258 1f03086b cmp      w24, w8
0025625C c0040054 b.eq     #0x2562f4
00256260 a0035ff8 ldur     x0, [x29, #-0x10]
00256264 e8630091 add      x8, sp, #0x18
00256268 e103172a mov      w1, w23
0025626C e203182a mov      w2, w24
00256270 e30316aa mov      x3, x22
00256274 75a8fe97 bl       #0x200448
00256278 e00f40f9 ldr      x0, [sp, #0x18]
0025627C 52c2fe97 bl       #0x206bc4
00256280 60bffa97 bl       #0x106000
00256284 80020036 tbz      w0, #0, #0x2562d4
00256288 ba035ff8 ldur     x26, [x29, #-0x10]
0025628C e00f40f9 ldr      x0, [sp, #0x18]
00256290 e00b00f9 str      x0, [sp, #0x10]
00256294 800000b4 cbz      x0, #0x2562a4
00256298 088c44f8 ldr      x8, [x0, #0x48]!
0025629C 080940f9 ldr      x8, [x8, #0x10]
002562A0 00013fd6 blr      x8
002562A4 e1430091 add      x1, sp, #0x10
002562A8 e0031aaa mov      x0, x26
002562AC e203172a mov      w2, w23
002562B0 e303182a mov      w3, w24
002562B4 24008052 mov      w4, #1
002562B8 14affe97 bl       #0x201f08
002562BC e00b40f9 ldr      x0, [sp, #0x10]
002562C0 a00000b4 cbz      x0, #0x2562d4
002562C4 088c44f8 ldr      x8, [x0, #0x48]!
002562C8 080d40f9 ldr      x8, [x8, #0x18]
002562CC 00013fd6 blr      x8
002562D0 ff0b00f9 str      xzr, [sp, #0x10]
002562D4 e00f40f9 ldr      x0, [sp, #0x18]
002562D8 800000b4 cbz      x0, #0x2562e8
002562DC 088c44f8 ldr      x8, [x0, #0x48]!
002562E0 080d40f9 ldr      x8, [x8, #0x18]
002562E4 00013fd6 blr      x8
002562E8 f3031f2a mov      w19, wzr
002562EC 02000014 b        #0x2562f4
002562F0 33008052 mov      w19, #1
002562F4 288f44f8 ldr      x8, [x25, #0x48]!
002562F8 e00319aa mov      x0, x25
002562FC 080d40f9 ldr      x8, [x8, #0x18]
00256300 00013fd6 blr      x8
00256304 a0035ef8 ldur     x0, [x29, #-0x20]
00256308 800000b4 cbz      x0, #0x256318
0025630C 088c44f8 ldr      x8, [x0, #0x48]!
00256310 080d40f9 ldr      x8, [x8, #0x18]
00256314 00013fd6 blr      x8
00256318 7f4e0071 cmp      w19, #0x13
0025631C 20f3ff54 b.eq     #0x256180
00256320 13f3ff34 cbz      w19, #0x256180
00256324 b50000b4 cbz      x21, #0x256338
00256328 a88e44f8 ldr      x8, [x21, #0x48]!
0025632C e00315aa mov      x0, x21
00256330 080d40f9 ldr      x8, [x8, #0x18]
00256334 00013fd6 blr      x8
00256338 a0035ff8 ldur     x0, [x29, #-0x10]
0025633C f30740f9 ldr      x19, [sp, #8]
00256340 800000b4 cbz      x0, #0x256350
00256344 088c44f8 ldr      x8, [x0, #0x48]!
00256348 080d40f9 ldr      x8, [x8, #0x18]
0025634C 00013fd6 blr      x8
00256350 b30000b4 cbz      x19, #0x256364
00256354 688e44f8 ldr      x8, [x19, #0x48]!
00256358 e00313aa mov      x0, x19
0025635C 080d40f9 ldr      x8, [x8, #0x18]
00256360 00013fd6 blr      x8
00256364 f44f4aa9 ldp      x20, x19, [sp, #0xa0]
00256368 f65749a9 ldp      x22, x21, [sp, #0x90]
0025636C f85f48a9 ldp      x24, x23, [sp, #0x80]
00256370 fa6747a9 ldp      x26, x25, [sp, #0x70]
00256374 fc6f46a9 ldp      x28, x27, [sp, #0x60]
00256378 fd7b45a9 ldp      x29, x30, [sp, #0x50]
0025637C ffc30291 add      sp, sp, #0xb0
00256380 c0035fd6 ret      
00256384 23b2f697 bl       #0x2c10
00256388 482c00f0 adrp     x8, #0x7e1000
0025638C 08811691 add      x8, x8, #0x5a0
00256390 080140f9 ldr      x8, [x8]
00256394 174140f9 ldr      x23, [x8, #0x80]
00256398 b70000b4 cbz      x23, #0x2563ac
0025639C e00317aa mov      x0, x23
002563A0 088c44f8 ldr      x8, [x0, #0x48]!
002563A4 080940f9 ldr      x8, [x8, #0x10]
002563A8 00013fd6 blr      x8
002563AC f62e40f9 ldr      x22, [x23, #0x58]
002563B0 b60000b4 cbz      x22, #0x2563c4
002563B4 e00316aa mov      x0, x22
002563B8 088c44f8 ldr      x8, [x0, #0x48]!
002563BC 080940f9 ldr      x8, [x8, #0x10]
002563C0 00013fd6 blr      x8
002563C4 e88e44f8 ldr      x8, [x23, #0x48]!
002563C8 e00317aa mov      x0, x23
002563CC 080d40f9 ldr      x8, [x8, #0x18]
002563D0 00013fd6 blr      x8
002563D4 e00316aa mov      x0, x22
002563D8 72920b94 bl       #0x53ada0
002563DC 80020034 cbz      w0, #0x25642c
002563E0 f7031f2a mov      w23, wzr
002563E4 c80240f9 ldr      x8, [x22]
002563E8 e00316aa mov      x0, x22
002563EC e103172a mov      w1, w23
002563F0 082940f9 ldr      x8, [x8, #0x50]
002563F4 00013fd6 blr      x8
002563F8 f80300aa mov      x24, x0
002563FC 036b0b94 bl       #0x531008
00256400 f903002a mov      w25, w0
00256404 e00318aa mov      x0, x24
00256408 026b0b94 bl       #0x531010
0025640C e103002a mov      w1, w0
00256410 e003192a mov      w0, w25
00256414 93000094 bl       #0x256660
00256418 e00316aa mov      x0, x22
0025641C f7060011 add      w23, w23, #1
00256420 60920b94 bl       #0x53ada0
00256424 ff02006b cmp      w23, w0
00256428 e3fdff54 b.lo     #0x2563e4
0025642C c88e44f8 ldr      x8, [x22, #0x48]!
00256430 e00316aa mov      x0, x22
00256434 080d40f9 ldr      x8, [x8, #0x18]
00256438 00013fd6 blr      x8
0025643C 482c00f0 adrp     x8, #0x7e1000
00256440 08611491 add      x8, x8, #0x518
00256444 963e41f9 ldr      x22, [x20, #0x278]
00256448 080140f9 ldr      x8, [x8]
0025644C 175541f9 ldr      x23, [x8, #0x2a8]
00256450 b60000b4 cbz      x22, #0x256464
00256454 e00316aa mov      x0, x22
00256458 088c44f8 ldr      x8, [x0, #0x48]!
0025645C 080940f9 ldr      x8, [x8, #0x10]
00256460 00013fd6 blr      x8
00256464 f8031f2a mov      w24, wzr
00256468 05000014 b        #0x25647c
0025646C 1f2003d5 nop      
00256470 18070011 add      w24, w24, #1
00256474 1f830071 cmp      w24, #0x20
00256478 40040054 b.eq     #0x256500
0025647C e00316aa mov      x0, x22
00256480 e103182a mov      w1, w24
00256484 144e0094 bl       #0x269cd4
00256488 08004039 ldrb     w8, [x0]
0025648C 28ffff34 cbz      w8, #0x256470
00256490 f90300aa mov      x25, x0
00256494 fa031f2a mov      w26, wzr
00256498 06000014 b        #0x2564b0
0025649C 1f2003d5 nop      
002564A0 28034039 ldrb     w8, [x25]
002564A4 5a070011 add      w26, w26, #1
002564A8 5f03086b cmp      w26, w8
002564AC 22feff54 b.hs     #0x256470
002564B0 a88300d1 sub      x8, x29, #0x20
002564B4 e00316aa mov      x0, x22
002564B8 e103182a mov      w1, w24
002564BC e2031a2a mov      w2, w26
002564C0 e30317aa mov      x3, x23
002564C4 094e0094 bl       #0x269ce8
002564C8 a0035ef8 ldur     x0, [x29, #-0x20]
002564CC cf6a0b94 bl       #0x531008
002564D0 fb03002a mov      w27, w0
002564D4 a0035ef8 ldur     x0, [x29, #-0x20]
002564D8 ce6a0b94 bl       #0x531010
002564DC e103002a mov      w1, w0
002564E0 e0031b2a mov      w0, w27
002564E4 5f000094 bl       #0x256660
002564E8 a0035ef8 ldur     x0, [x29, #-0x20]
002564EC a0fdffb4 cbz      x0, #0x2564a0
002564F0 088c44f8 ldr      x8, [x0, #0x48]!
002564F4 080d40f9 ldr      x8, [x8, #0x18]
002564F8 00013fd6 blr      x8
002564FC e9ffff17 b        #0x2564a0
00256500 b60000b4 cbz      x22, #0x256514
00256504 c88e44f8 ldr      x8, [x22, #0x48]!
00256508 e00316aa mov      x0, x22
0025650C 080d40f9 ldr      x8, [x8, #0x18]
00256510 00013fd6 blr      x8
00256514 482c00f0 adrp     x8, #0x7e1000
00256518 08611491 add      x8, x8, #0x518
0025651C 944241f9 ldr      x20, [x20, #0x280]
00256520 080140f9 ldr      x8, [x8]
00256524 165541f9 ldr      x22, [x8, #0x2a8]
00256528 b40000b4 cbz      x20, #0x25653c
0025652C e00314aa mov      x0, x20
00256530 088c44f8 ldr      x8, [x0, #0x48]!
00256534 080940f9 ldr      x8, [x8, #0x10]
00256538 00013fd6 blr      x8
0025653C e00314aa mov      x0, x20
00256540 e1031f2a mov      w1, wzr
00256544 60040094 bl       #0x2576c4
00256548 a0030034 cbz      w0, #0x2565bc
0025654C f7031f2a mov      w23, wzr
00256550 07000014 b        #0x25656c
00256554 e00314aa mov      x0, x20
00256558 e1031f2a mov      w1, wzr
0025655C f7060011 add      w23, w23, #1
00256560 59040094 bl       #0x2576c4
00256564 ff02006b cmp      w23, w0
00256568 a2020054 b.hs     #0x2565bc
0025656C a88300d1 sub      x8, x29, #0x20
00256570 e00314aa mov      x0, x20
00256574 e10316aa mov      x1, x22
00256578 e2031f2a mov      w2, wzr
0025657C e303172a mov      w3, w23
00256580 5b040094 bl       #0x2576ec
00256584 a0035ef8 ldur     x0, [x29, #-0x20]
00256588 a06a0b94 bl       #0x531008
0025658C f803002a mov      w24, w0
00256590 a0035ef8 ldur     x0, [x29, #-0x20]
00256594 9f6a0b94 bl       #0x531010
00256598 e103002a mov      w1, w0
0025659C e003182a mov      w0, w24
002565A0 30000094 bl       #0x256660
002565A4 a0035ef8 ldur     x0, [x29, #-0x20]
002565A8 60fdffb4 cbz      x0, #0x256554
002565AC 088c44f8 ldr      x8, [x0, #0x48]!
002565B0 080d40f9 ldr      x8, [x8, #0x18]
002565B4 00013fd6 blr      x8
002565B8 e7ffff17 b        #0x256554
002565BC e00314aa mov      x0, x20
002565C0 21008052 mov      w1, #1
002565C4 40040094 bl       #0x2576c4
002565C8 a0030034 cbz      w0, #0x25663c
002565CC f7031f2a mov      w23, wzr
002565D0 07000014 b        #0x2565ec
002565D4 e00314aa mov      x0, x20
002565D8 21008052 mov      w1, #1
002565DC f7060011 add      w23, w23, #1
002565E0 39040094 bl       #0x2576c4
002565E4 ff02006b cmp      w23, w0
002565E8 a2020054 b.hs     #0x25663c
002565EC a88300d1 sub      x8, x29, #0x20
002565F0 e00314aa mov      x0, x20
002565F4 e10316aa mov      x1, x22
002565F8 22008052 mov      w2, #1
002565FC e303172a mov      w3, w23
00256600 3b040094 bl       #0x2576ec
00256604 a0035ef8 ldur     x0, [x29, #-0x20]
00256608 806a0b94 bl       #0x531008
0025660C f803002a mov      w24, w0
00256610 a0035ef8 ldur     x0, [x29, #-0x20]
00256614 7f6a0b94 bl       #0x531010
00256618 e103002a mov      w1, w0
0025661C e003182a mov      w0, w24
00256620 10000094 bl       #0x256660
00256624 a0035ef8 ldur     x0, [x29, #-0x20]
00256628 60fdffb4 cbz      x0, #0x2565d4
0025662C 088c44f8 ldr      x8, [x0, #0x48]!
00256630 080d40f9 ldr      x8, [x8, #0x18]
00256634 00013fd6 blr      x8
00256638 e7ffff17 b        #0x2565d4
0025663C 54e7ffb4 cbz      x20, #0x256324
00256640 888e44f8 ldr      x8, [x20, #0x48]!
00256644 e00314aa mov      x0, x20
00256648 080d40f9 ldr      x8, [x8, #0x18]
0025664C 00013fd6 blr      x8
00256650 35ffff17 b        #0x256324
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
### 0x2717bc (110 slots)
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
### 0x271974 (26 slots)
~~~asm
00271974 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00271978 f50b00f9 str      x21, [sp, #0x10]
0027197C f44f02a9 stp      x20, x19, [sp, #0x20]
00271980 fd030091 mov      x29, sp
00271984 13600691 add      x19, x0, #0x198
00271988 f40300aa mov      x20, x0
0027198C f503012a mov      w21, w1
00271990 e00313aa mov      x0, x19
00271994 2f130e94 bl       #0x5f6650
00271998 80be40f9 ldr      x0, [x20, #0x178]
0027199C 000100b4 cbz      x0, #0x2719bc
002719A0 f0240094 bl       #0x27ad60
002719A4 1f00156b cmp      w0, w21
002719A8 a1000054 b.ne     #0x2719bc
002719AC 80be40f9 ldr      x0, [x20, #0x178]
002719B0 ee240094 bl       #0x27ad68
002719B4 34008052 mov      w20, #1
002719B8 02000014 b        #0x2719c0
002719BC f4031f2a mov      w20, wzr
002719C0 e00313aa mov      x0, x19
002719C4 27130e94 bl       #0x5f6660
002719C8 e003142a mov      w0, w20
002719CC f44f42a9 ldp      x20, x19, [sp, #0x20]
002719D0 f50b40f9 ldr      x21, [sp, #0x10]
002719D4 fd7bc3a8 ldp      x29, x30, [sp], #0x30
002719D8 c0035fd6 ret      
~~~
### 0x271d20 (109 slots)
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
### 0x27ad68 (53 slots)
~~~asm
0027AD68 080440f9 ldr      x8, [x0, #8]
0027AD6C 680600b4 cbz      x8, #0x27ae38
0027AD70 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0027AD74 f50b00f9 str      x21, [sp, #0x10]
0027AD78 f44f02a9 stp      x20, x19, [sp, #0x20]
0027AD7C fd030091 mov      x29, sp
0027AD80 080040b9 ldr      w8, [x0]
0027AD84 342900b0 adrp     x20, #0x79f000
0027AD88 35008052 mov      w21, #1
0027AD8C 942642f9 ldr      x20, [x20, #0x448]
0027AD90 ca028052 mov      w10, #0x16
0027AD94 f30300aa mov      x19, x0
0027AD98 a922c81a lsl      w9, w21, w8
0027AD9C 1f110071 cmp      w8, #4
0027ADA0 29010a0a and      w9, w9, w10
0027ADA4 2499407a ccmp     w9, #0, #4, ls
0027ADA8 a0010054 b.eq     #0x27addc
0027ADAC 800240f9 ldr      x0, [x20]
0027ADB0 a1730091 add      x1, x29, #0x1c
0027ADB4 bf1f00b9 str      wzr, [x29, #0x1c]
0027ADB8 2ad9ff97 bl       #0x271260
0027ADBC 91e7ff97 bl       #0x274c00
0027ADC0 800240f9 ldr      x0, [x20]
0027ADC4 a1730091 add      x1, x29, #0x1c
0027ADC8 bf1f00b9 str      wzr, [x29, #0x1c]
0027ADCC 25d9ff97 bl       #0x271260
0027ADD0 08600291 add      x8, x0, #0x98
0027ADD4 15fd9f08 stlrb    w21, [x8]
0027ADD8 680240b9 ldr      w8, [x19]
0027ADDC 080d0051 sub      w8, w8, #3
0027ADE0 1f050071 cmp      w8, #1
0027ADE4 88010054 b.hi     #0x27ae14
0027ADE8 800240f9 ldr      x0, [x20]
0027ADEC a1730091 add      x1, x29, #0x1c
0027ADF0 b51f00b9 str      w21, [x29, #0x1c]
0027ADF4 1bd9ff97 bl       #0x271260
0027ADF8 82e7ff97 bl       #0x274c00
0027ADFC 800240f9 ldr      x0, [x20]
0027AE00 a1730091 add      x1, x29, #0x1c
0027AE04 b51f00b9 str      w21, [x29, #0x1c]
0027AE08 16d9ff97 bl       #0x271260
0027AE0C 08600291 add      x8, x0, #0x98
0027AE10 15fd9f08 stlrb    w21, [x8]
0027AE14 600640f9 ldr      x0, [x19, #8]
0027AE18 c11c00d0 adrp     x1, #0x614000
0027AE1C 21181b91 add      x1, x1, #0x6c6
0027AE20 02008012 mov      w2, #-1
0027AE24 03028052 mov      w3, #0x10
0027AE28 d1b60994 bl       #0x4e896c
0027AE2C f44f42a9 ldp      x20, x19, [sp, #0x20]
0027AE30 f50b40f9 ldr      x21, [sp, #0x10]
0027AE34 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0027AE38 c0035fd6 ret      
~~~
