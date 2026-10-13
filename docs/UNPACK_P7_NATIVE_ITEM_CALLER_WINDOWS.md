# P7 HOME 4.1.0 — Item8 原生属性分派器上层逐指令证据

ELF SHA-256: `bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a`；所有地址均为 ELF RVA。

本轮直接验证 main+0x4FD0B8 的两个上层 BL 调用及注册/包装路径。
此处只导出程序指令，业务消费者必须依据参数流和函数返回值另行证实。

## outer caller of native item metadata wrapper, anchor main+0x266D58

```asm
0x00266BA8 e00313aa mov      x0, x19
0x00266BAC 21008052 mov      w1, #1
0x00266BB0 295b0a94 bl       #0x4fd854
0x00266BB4 e00313aa mov      x0, x19
0x00266BB8 41008052 mov      w1, #2
0x00266BBC 265b0a94 bl       #0x4fd854
0x00266BC0 e00313aa mov      x0, x19
0x00266BC4 61008052 mov      w1, #3
0x00266BC8 235b0a94 bl       #0x4fd854
0x00266BCC e00313aa mov      x0, x19
0x00266BD0 81008052 mov      w1, #4
0x00266BD4 205b0a94 bl       #0x4fd854
0x00266BD8 a1008052 mov      w1, #5
0x00266BDC e00313aa mov      x0, x19
0x00266BE0 1d5b0a94 bl       #0x4fd854
0x00266BE4 e00313aa mov      x0, x19
0x00266BE8 c1008052 mov      w1, #6
0x00266BEC 1a5b0a94 bl       #0x4fd854
0x00266BF0 e00313aa mov      x0, x19
0x00266BF4 e1008052 mov      w1, #7
0x00266BF8 175b0a94 bl       #0x4fd854
0x00266BFC e00313aa mov      x0, x19
0x00266C00 f30b40f9 ldr      x19, [sp, #0x10]
0x00266C04 01018052 mov      w1, #8
0x00266C08 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00266C0C 125b0a14 b        #0x4fd854
0x00266C10 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x00266C14 f30b00f9 str      x19, [sp, #0x10]
0x00266C18 fd030091 mov      x29, sp
0x00266C1C f30300aa mov      x19, x0
0x00266C20 1ca5f697 bl       #0x10090
0x00266C24 68420591 add      x8, x19, #0x150
0x00266C28 69220791 add      x9, x19, #0x1c8
0x00266C2C 682e13f9 str      x8, [x19, #0x2658]
0x00266C30 e82900b0 adrp     x8, #0x7a3000
0x00266C34 60820191 add      x0, x19, #0x60
0x00266C38 080d40f9 ldr      x8, [x8, #0x18]
0x00266C3C 693213f9 str      x9, [x19, #0x2660]
0x00266C40 69620891 add      x9, x19, #0x218
0x00266C44 602a13f9 str      x0, [x19, #0x2650]
0x00266C48 693613f9 str      x9, [x19, #0x2668]
0x00266C4C 69620d91 add      x9, x19, #0x358
0x00266C50 025f8252 mov      w2, #0x12f8
0x00266C54 693a13f9 str      x9, [x19, #0x2670]
0x00266C58 e1031f2a mov      w1, wzr
0x00266C5C 09410091 add      x9, x8, #0x10
0x00266C60 690200f9 str      x9, [x19]
0x00266C64 09410291 add      x9, x8, #0x90
0x00266C68 08410391 add      x8, x8, #0xd0
0x00266C6C 69a204a9 stp      x9, x8, [x19, #0x48]
0x00266C70 68c22f91 add      x8, x19, #0xbf0
0x00266C74 683e13f9 str      x8, [x19, #0x2678]
0x00266C78 68e23c91 add      x8, x19, #0xf38
0x00266C7C 684213f9 str      x8, [x19, #0x2680]
0x00266C80 08198252 mov      w8, #0x10c8
0x00266C84 6802088b add      x8, x19, x8
0x00266C88 684613f9 str      x8, [x19, #0x2688]
0x00266C8C 084b8252 mov      w8, #0x1258
0x00266C90 6802088b add      x8, x19, x8
0x00266C94 684a13f9 str      x8, [x19, #0x2690]
0x00266C98 f30b40f9 ldr      x19, [sp, #0x10]
0x00266C9C fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00266CA0 2c3d0e14 b        #0x5f6150
0x00266CA4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x00266CA8 f30b00f9 str      x19, [sp, #0x10]
0x00266CAC fd030091 mov      x29, sp
0x00266CB0 c82900b0 adrp     x8, #0x79f000
0x00266CB4 f30300aa mov      x19, x0
0x00266CB8 08d943f9 ldr      x8, [x8, #0x7b0]
0x00266CBC 09410091 add      x9, x8, #0x10
0x00266CC0 0a410191 add      x10, x8, #0x50
0x00266CC4 08410291 add      x8, x8, #0x90
0x00266CC8 090000f9 str      x9, [x0]
0x00266CCC 0aa004a9 stp      x10, x8, [x0, #0x48]
0x00266CD0 002c40f9 ldr      x0, [x0, #0x58]
0x00266CD4 a00000b4 cbz      x0, #0x266ce8
0x00266CD8 088c44f8 ldr      x8, [x0, #0x48]!
0x00266CDC 080d40f9 ldr      x8, [x8, #0x18]
0x00266CE0 00013fd6 blr      x8
0x00266CE4 7f2e00f9 str      xzr, [x19, #0x58]
0x00266CE8 f30b40f9 ldr      x19, [sp, #0x10]
0x00266CEC fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00266CF0 c0035fd6 ret      
0x00266CF4 002001d1 sub      x0, x0, #0x48
0x00266CF8 ebffff17 b        #0x266ca4
0x00266CFC 004001d1 sub      x0, x0, #0x50
0x00266D00 e9ffff17 b        #0x266ca4
0x00266D04 e8ffff17 b        #0x266ca4
0x00266D08 002001d1 sub      x0, x0, #0x48
0x00266D0C e6ffff17 b        #0x266ca4
0x00266D10 004001d1 sub      x0, x0, #0x50
0x00266D14 e4ffff17 b        #0x266ca4
0x00266D18 00800191 add      x0, x0, #0x60
0x00266D1C 025f8252 mov      w2, #0x12f8
0x00266D20 e1031f2a mov      w1, wzr
0x00266D24 0b3d0e14 b        #0x5f6150
0x00266D28 00000000 udf      #0
0x00266D2C 00000000 udf      #0
0x00266D30 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00266D34 f65701a9 stp      x22, x21, [sp, #0x10]
0x00266D38 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00266D3C fd030091 mov      x29, sp
0x00266D40 353c0012 and      w21, w1, #0xffff
0x00266D44 f60300aa mov      x22, x0
0x00266D48 c1018052 mov      w1, #0xe
0x00266D4C e003152a mov      w0, w21
0x00266D50 f303032a mov      w19, w3
0x00266D54 f403022a mov      w20, w2
0x00266D58 cd590a94 bl       #0x4fd48c << EXACT BL CALLSITE
0x00266D5C 1f200071 cmp      w0, #8
0x00266D60 280c0054 b.hi     #0x266ee4
0x00266D64 e803002a mov      w8, w0
0x00266D68 691e00d0 adrp     x9, #0x634000
0x00266D6C 29f13f91 add      x9, x9, #0xffc
0x00266D70 8a000010 adr      x10, #0x266d80
0x00266D74 2b696838 ldrb     w11, [x9, x8]
0x00266D78 4a090b8b add      x10, x10, x11, lsl #2
0x00266D7C 40011fd6 br       x10
0x00266D80 08ca8452 mov      w8, #0x2650
0x00266D84 89078052 mov      w9, #0x3c
0x00266D88 c802088b add      x8, x22, x8
0x00266D8C 080140f9 ldr      x8, [x8]
0x00266D90 280600b5 cbnz     x8, #0x266e54
0x00266D94 54000014 b        #0x266ee4
0x00266D98 08cb8452 mov      w8, #0x2658
0x00266D9C c9038052 mov      w9, #0x1e
0x00266DA0 c802088b add      x8, x22, x8
0x00266DA4 080140f9 ldr      x8, [x8]
0x00266DA8 680500b5 cbnz     x8, #0x266e54
0x00266DAC 4e000014 b        #0x266ee4
0x00266DB0 08cc8452 mov      w8, #0x2660
0x00266DB4 89028052 mov      w9, #0x14
0x00266DB8 c802088b add      x8, x22, x8
0x00266DBC 080140f9 ldr      x8, [x8]
0x00266DC0 a80400b5 cbnz     x8, #0x266e54
0x00266DC4 48000014 b        #0x266ee4
0x00266DC8 08cd8452 mov      w8, #0x2668
0x00266DCC 090a8052 mov      w9, #0x50
0x00266DD0 c802088b add      x8, x22, x8
0x00266DD4 080140f9 ldr      x8, [x8]
0x00266DD8 e80300b5 cbnz     x8, #0x266e54
0x00266DDC 42000014 b        #0x266ee4
0x00266DE0 08ce8452 mov      w8, #0x2670
0x00266DE4 c9448052 mov      w9, #0x226
0x00266DE8 c802088b add      x8, x22, x8
0x00266DEC 080140f9 ldr      x8, [x8]
0x00266DF0 280300b5 cbnz     x8, #0x266e54
0x00266DF4 3c000014 b        #0x266ee4
0x00266DF8 08cf8452 mov      w8, #0x2678
0x00266DFC 491a8052 mov      w9, #0xd2
0x00266E00 c802088b add      x8, x22, x8
0x00266E04 080140f9 ldr      x8, [x8]
0x00266E08 680200b5 cbnz     x8, #0x266e54
0x00266E0C 36000014 b        #0x266ee4
0x00266E10 08d08452 mov      w8, #0x2680
0x00266E14 c802088b add      x8, x22, x8
0x00266E18 890c8052 mov      w9, #0x64
0x00266E1C 080140f9 ldr      x8, [x8]
0x00266E20 a80100b5 cbnz     x8, #0x266e54
0x00266E24 30000014 b        #0x266ee4
0x00266E28 08d18452 mov      w8, #0x2688
0x00266E2C c802088b add      x8, x22, x8
0x00266E30 890c8052 mov      w9, #0x64
0x00266E34 080140f9 ldr      x8, [x8]
0x00266E38 e80000b5 cbnz     x8, #0x266e54
0x00266E3C 2a000014 b        #0x266ee4
0x00266E40 08d28452 mov      w8, #0x2690
0x00266E44 09088052 mov      w9, #0x40
0x00266E48 c802088b add      x8, x22, x8
0x00266E4C 080140f9 ldr      x8, [x8]
0x00266E50 a80400b4 cbz      x8, #0x266ee4
0x00266E54 ea031faa mov      x10, xzr
0x00266E58 0b008012 mov      w11, #-1
0x00266E5C 1f2003d5 nop      
0x00266E60 0c796ab8 ldr      w12, [x8, x10, lsl #2]
0x00266E64 8d390012 and      w13, w12, #0x7fff
0x00266E68 bf01156b cmp      w13, w21
0x00266E6C a0010054 b.eq     #0x266ea0
0x00266E70 bf010071 cmp      w13, #0
0x00266E74 4c019f5a csinv    w12, w10, wzr, eq
0x00266E78 7f050031 cmn      w11, #1
0x00266E7C 4a050091 add      x10, x10, #1
0x00266E80 8b018b1a csel     w11, w12, w11, eq
0x00266E84 3f010aeb cmp      x9, x10
0x00266E88 c1feff54 b.ne     #0x266e60
0x00266E8C 7f050031 cmn      w11, #1
0x00266E90 a0020054 b.eq     #0x266ee4
0x00266E94 0c596bb8 ldr      w12, [x8, w11, uxtw #2]
0x00266E98 ea030baa mov      x10, x11
0x00266E9C 8d390012 and      w13, w12, #0x7fff
0x00266EA0 bf01156b cmp      w13, w21
0x00266EA4 a1020054 b.ne     #0x266ef8
0x00266EA8 89750f53 ubfx     w9, w12, #0xf, #0xf
0x00266EAC 3f990f71 cmp      w9, #0x3e6
0x00266EB0 a8010054 b.hi     #0x266ee4
0x00266EB4 2921340b add      w9, w9, w20, uxth
0x00266EB8 eb7c8052 mov      w11, #0x3e7
0x00266EBC 3f9d0f71 cmp      w9, #0x3e7
0x00266EC0 29318b1a csel     w9, w9, w11, lo
0x00266EC4 8b410212 and      w11, w12, #0xc0007fff
0x00266EC8 693d092a orr      w9, w11, w9, lsl #15
0x00266ECC 20008052 mov      w0, #1
0x00266ED0 09792ab8 str      w9, [x8, x10, lsl #2]
0x00266ED4 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00266ED8 f65741a9 ldp      x22, x21, [sp, #0x10]
0x00266EDC fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00266EE0 c0035fd6 ret      
0x00266EE4 e0031f2a mov      w0, wzr
0x00266EE8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00266EEC f65741a9 ldp      x22, x21, [sp, #0x10]
0x00266EF0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00266EF4 c0035fd6 ret      
0x00266EF8 89050212 and      w9, w12, #0xc0000000
0x00266EFC 8b3e0012 and      w11, w20, #0xffff
0x00266F00 a93a0033 bfxil    w9, w21, #0, #0xf
0x00266F04 6c411153 lsl      w12, w11, #0xf
0x00266F08 7f9d0f71 cmp      w11, #0x3e7
0x00266F0C 0b009052 mov      w11, #0x8000
0x00266F10 6b3ea072 movk     w11, #0x1f3, lsl #16
0x00266F14 6b818c1a csel     w11, w11, w12, hi
0x00266F18 7f020072 tst      w19, #1
0x00266F1C 29010b2a orr      w9, w9, w11
0x00266F20 2b010232 orr      w11, w9, #0x40000000
0x00266F24 6911891a csel     w9, w11, w9, ne
0x00266F28 29790012 and      w9, w9, #0x7fffffff
0x00266F2C 20008052 mov      w0, #1
0x00266F30 09792ab8 str      w9, [x8, x10, lsl #2]
0x00266F34 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00266F38 f65741a9 ldp      x22, x21, [sp, #0x10]
0x00266F3C fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00266F40 c0035fd6 ret      
0x00266F44 00800191 add      x0, x0, #0x60
```

## item wrapper first entry and local selector call, anchor main+0x4FD48C

```asm
0x004FD3FC 00010012 and      w0, w8, #1
0x004FD400 c0035fd6 ret      
0x004FD404 28184039 ldrb     w8, [x1, #6]
0x004FD408 00050153 ubfx     w0, w8, #1, #1
0x004FD40C c0035fd6 ret      
0x004FD410 28184039 ldrb     w8, [x1, #6]
0x004FD414 00090253 ubfx     w0, w8, #2, #1
0x004FD418 c0035fd6 ret      
0x004FD41C 28184039 ldrb     w8, [x1, #6]
0x004FD420 000d0353 ubfx     w0, w8, #3, #1
0x004FD424 c0035fd6 ret      
0x004FD428 28184039 ldrb     w8, [x1, #6]
0x004FD42C 00110453 ubfx     w0, w8, #4, #1
0x004FD430 c0035fd6 ret      
0x004FD434 201cc039 ldrsb    w0, [x1, #7]
0x004FD438 c0035fd6 ret      
0x004FD43C 2020c039 ldrsb    w0, [x1, #8]
0x004FD440 c0035fd6 ret      
0x004FD444 2024c039 ldrsb    w0, [x1, #9]
0x004FD448 c0035fd6 ret      
0x004FD44C 2028c039 ldrsb    w0, [x1, #0xa]
0x004FD450 c0035fd6 ret      
0x004FD454 202cc039 ldrsb    w0, [x1, #0xb]
0x004FD458 c0035fd6 ret      
0x004FD45C 2030c039 ldrsb    w0, [x1, #0xc]
0x004FD460 c0035fd6 ret      
0x004FD464 20344039 ldrb     w0, [x1, #0xd]
0x004FD468 c0035fd6 ret      
0x004FD46C 20384039 ldrb     w0, [x1, #0xe]
0x004FD470 c0035fd6 ret      
0x004FD474 203cc039 ldrsb    w0, [x1, #0xf]
0x004FD478 c0035fd6 ret      
0x004FD47C 2040c039 ldrsb    w0, [x1, #0x10]
0x004FD480 c0035fd6 ret      
0x004FD484 2044c039 ldrsb    w0, [x1, #0x11]
0x004FD488 c0035fd6 ret      
0x004FD48C ffc300d1 sub      sp, sp, #0x30
0x004FD490 fd7b01a9 stp      x29, x30, [sp, #0x10]
0x004FD494 f31300f9 str      x19, [sp, #0x20]
0x004FD498 fd430091 add      x29, sp, #0x10
0x004FD49C 1f901c71 cmp      w0, #0x724
0x004FD4A0 e9000054 b.ls     #0x4fd4bc
0x004FD4A4 f3031f2a mov      w19, wzr
0x004FD4A8 e003132a mov      w0, w19
0x004FD4AC f31340f9 ldr      x19, [sp, #0x20]
0x004FD4B0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0x004FD4B4 ffc30091 add      sp, sp, #0x30
0x004FD4B8 c0035fd6 ret      
0x004FD4BC f303012a mov      w19, w1
0x004FD4C0 e103002a mov      w1, w0
0x004FD4C4 e0030091 mov      x0, sp
0x004FD4C8 e9feff97 bl       #0x4fd06c << EXACT BL CALLSITE
0x004FD4CC e0030091 mov      x0, sp
0x004FD4D0 e103132a mov      w1, w19
0x004FD4D4 f9feff97 bl       #0x4fd0b8 << EXACT BL CALLSITE
0x004FD4D8 f303002a mov      w19, w0
0x004FD4DC e0030091 mov      x0, sp
0x004FD4E0 f5feff97 bl       #0x4fd0b4 << EXACT BL CALLSITE
0x004FD4E4 e003132a mov      w0, w19
0x004FD4E8 f31340f9 ldr      x19, [sp, #0x20]
0x004FD4EC fd7b41a9 ldp      x29, x30, [sp, #0x10]
0x004FD4F0 ffc30091 add      sp, sp, #0x30
0x004FD4F4 c0035fd6 ret      
0x004FD4F8 081500f0 adrp     x8, #0x7a0000
0x004FD4FC e103002a mov      w1, w0
0x004FD500 084542f9 ldr      x8, [x8, #0x488]
0x004FD504 000140f9 ldr      x0, [x8]
0x004FD508 b2000014 b        #0x4fd7d0
0x004FD50C 1f1c00f9 str      xzr, [x0, #0x38]
0x004FD510 491300d0 adrp     x9, #0x767000
0x004FD514 29611e91 add      x9, x9, #0x798
0x004FD518 1f4000b9 str      wzr, [x0, #0x40]
0x004FD51C 48d03bd5 mrs      x8, tpidr_el0
0x004FD520 08c973f2 ands     x8, x8, #-0x2000
0x004FD524 1f7c01a9 stp      xzr, xzr, [x0, #0x10]
0x004FD528 29410091 add      x9, x9, #0x10
0x004FD52C 1f7c02a9 stp      xzr, xzr, [x0, #0x20]
0x004FD530 1f3000b9 str      wzr, [x0, #0x30]
0x004FD534 090000f9 str      x9, [x0]
0x004FD538 e0000054 b.eq     #0x4fd554
0x004FD53C 094d40f9 ldr      x9, [x8, #0x98]
0x004FD540 890000b4 cbz      x9, #0x4fd550
0x004FD544 080d098b add      x8, x8, x9, lsl #3
0x004FD548 080940f9 ldr      x8, [x8, #0x10]
0x004FD54C 02000014 b        #0x4fd554
0x004FD550 e8031faa mov      x8, xzr
0x004FD554 49150090 adrp     x9, #0x7a5000
0x004FD558 2a008052 mov      w10, #1
0x004FD55C 29b546f9 ldr      x9, [x9, #0xd68]
0x004FD560 2a010039 strb     w10, [x9]
0x004FD564 c91400f0 adrp     x9, #0x798000
0x004FD568 29412091 add      x9, x9, #0x810
0x004FD56C 1f7c0ea9 stp      xzr, xzr, [x0, #0xe0]
0x004FD570 1f3c00f9 str      xzr, [x0, #0x78]
0x004FD574 1f7c0fa9 stp      xzr, xzr, [x0, #0xf0]
0x004FD578 2a410091 add      x10, x9, #0x10
0x004FD57C 1ffc05a9 stp      xzr, xzr, [x0, #0x58]
0x004FD580 29010191 add      x9, x9, #0x40
0x004FD584 1ffc06a9 stp      xzr, xzr, [x0, #0x68]
0x004FD588 0a2000a9 stp      x10, x8, [x0]
0x004FD58C 481300d0 adrp     x8, #0x767000
0x004FD590 08a12491 add      x8, x8, #0x928
0x004FD594 1fb000f9 str      xzr, [x0, #0x160]
0x004FD598 08410091 add      x8, x8, #0x10
0x004FD59C 09a004a9 stp      x9, x8, [x0, #0x48]
0x004FD5A0 c0035fd6 ret      
0x004FD5A4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x004FD5A8 f30b00f9 str      x19, [sp, #0x10]
0x004FD5AC fd030091 mov      x29, sp
0x004FD5B0 f30300aa mov      x19, x0
0x004FD5B4 002c40f9 ldr      x0, [x0, #0x58]
0x004FD5B8 a00100b4 cbz      x0, #0x4fd5ec
0x004FD5BC 61420191 add      x1, x19, #0x50
0x004FD5C0 346fff97 bl       #0x4d9290
0x004FD5C4 602e40f9 ldr      x0, [x19, #0x58]
0x004FD5C8 7f2e00f9 str      xzr, [x19, #0x58]
0x004FD5CC 800000b4 cbz      x0, #0x4fd5dc
0x004FD5D0 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD5D4 080d40f9 ldr      x8, [x8, #0x18]
0x004FD5D8 00013fd6 blr      x8
0x004FD5DC 7fb200f9 str      xzr, [x19, #0x160]
0x004FD5E0 f30b40f9 ldr      x19, [sp, #0x10]
0x004FD5E4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x004FD5E8 c0035fd6 ret      
0x004FD5EC 7f2e00f9 str      xzr, [x19, #0x58]
0x004FD5F0 7fb200f9 str      xzr, [x19, #0x160]
0x004FD5F4 f30b40f9 ldr      x19, [sp, #0x10]
0x004FD5F8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x004FD5FC c0035fd6 ret      
0x004FD600 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x004FD604 f30b00f9 str      x19, [sp, #0x10]
0x004FD608 fd030091 mov      x29, sp
0x004FD60C f30300aa mov      x19, x0
0x004FD610 000840f9 ldr      x0, [x0, #0x10]
0x004FD614 a00100b4 cbz      x0, #0x4fd648
0x004FD618 61220091 add      x1, x19, #8
0x004FD61C 1d6fff97 bl       #0x4d9290
0x004FD620 600a40f9 ldr      x0, [x19, #0x10]
0x004FD624 7f0a00f9 str      xzr, [x19, #0x10]
0x004FD628 800000b4 cbz      x0, #0x4fd638
0x004FD62C 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD630 080d40f9 ldr      x8, [x8, #0x18]
0x004FD634 00013fd6 blr      x8
0x004FD638 7f8e00f9 str      xzr, [x19, #0x118]
0x004FD63C f30b40f9 ldr      x19, [sp, #0x10]
0x004FD640 fd7bc2a8 ldp      x29, x30, [sp], #0x20
```

## item wrapper second entry and local selector call, anchor main+0x4FD824

```asm
0x004FD714 e80f40f9 ldr      x8, [sp, #0x18]
0x004FD718 c80000b4 cbz      x8, #0x4fd730
0x004FD71C e00340f9 ldr      x0, [sp]
0x004FD720 800000b4 cbz      x0, #0x4fd730
0x004FD724 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD728 080d40f9 ldr      x8, [x8, #0x18]
0x004FD72C 00013fd6 blr      x8
0x004FD730 e01340f9 ldr      x0, [sp, #0x20]
0x004FD734 a8c884d2 mov      x8, #0x2645
0x004FD738 4884b0f2 movk     x8, #0x8422, lsl #16
0x004FD73C 889cd3f2 movk     x8, #0x9ce4, lsl #32
0x004FD740 487ef9f2 movk     x8, #0xcbf2, lsl #48
0x004FD744 ff2300a9 stp      xzr, x8, [sp]
0x004FD748 880800d0 adrp     x8, #0x60f000
0x004FD74C 080d1a91 add      x8, x8, #0x683
0x004FD750 e87f01a9 stp      x8, xzr, [sp, #0x10]
0x004FD754 800000b4 cbz      x0, #0x4fd764
0x004FD758 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD75C 080d40f9 ldr      x8, [x8, #0x18]
0x004FD760 00013fd6 blr      x8
0x004FD764 682e40f9 ldr      x8, [x19, #0x58]
0x004FD768 f52340f9 ldr      x21, [sp, #0x40]
0x004FD76C 08c940f9 ldr      x8, [x8, #0x190]
0x004FD770 fd7b43a9 ldp      x29, x30, [sp, #0x30]
0x004FD774 68b200f9 str      x8, [x19, #0x160]
0x004FD778 f44f45a9 ldp      x20, x19, [sp, #0x50]
0x004FD77C ff830191 add      sp, sp, #0x60
0x004FD780 c0035fd6 ret      
0x004FD784 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
0x004FD788 fd030091 mov      x29, sp
0x004FD78C 08b040f9 ldr      x8, [x0, #0x160]
0x004FD790 e80100b4 cbz      x8, #0x4fd7cc
0x004FD794 09054079 ldrh     w9, [x8, #2]
0x004FD798 3f21216b cmp      w9, w1, uxth
0x004FD79C 89010054 b.ls     #0x4fd7cc
0x004FD7A0 0925218b add      x9, x8, w1, uxth #1
0x004FD7A4 0a094079 ldrh     w10, [x8, #4]
0x004FD7A8 29894079 ldrh     w9, [x9, #0x44]
0x004FD7AC 3f010a6b cmp      w9, w10
0x004FD7B0 e2000054 b.hs     #0x4fd7cc
0x004FD7B4 0a4140b9 ldr      w10, [x8, #0x40]
0x004FD7B8 08010a8b add      x8, x8, x10
0x004FD7BC 0a068052 mov      w10, #0x30
0x004FD7C0 2021aa9b umaddl   x0, w9, w10, x8
0x004FD7C4 fd7bc1a8 ldp      x29, x30, [sp], #0x10
0x004FD7C8 c0035fd6 ret      
0x004FD7CC dde20394 bl       #0x5f6340
0x004FD7D0 a1010034 cbz      w1, #0x4fd804
0x004FD7D4 09b040f9 ldr      x9, [x0, #0x160]
0x004FD7D8 28040051 sub      w8, w1, #1
0x004FD7DC 2a554039 ldrb     w10, [x9, #0x15]
0x004FD7E0 5f01286b cmp      w10, w8, uxtb
0x004FD7E4 09010054 b.ls     #0x4fd804
0x004FD7E8 2a054079 ldrh     w10, [x9, #2]
0x004FD7EC 2a050a8b add      x10, x9, x10, lsl #1
0x004FD7F0 29214039 ldrb     w9, [x9, #8]
0x004FD7F4 4905098b add      x9, x10, x9, lsl #1
0x004FD7F8 2805288b add      x8, x9, w8, uxtb #1
0x004FD7FC 00c94679 ldrh     w0, [x8, #0x364]
0x004FD800 c0035fd6 ret      
0x004FD804 e0031f2a mov      w0, wzr
0x004FD808 c0035fd6 ret      
0x004FD80C ffc300d1 sub      sp, sp, #0x30
0x004FD810 fd7b01a9 stp      x29, x30, [sp, #0x10]
0x004FD814 f31300f9 str      x19, [sp, #0x20]
0x004FD818 fd430091 add      x29, sp, #0x10
0x004FD81C 213c0012 and      w1, w1, #0xffff
0x004FD820 e0030091 mov      x0, sp
0x004FD824 12feff97 bl       #0x4fd06c << EXACT BL CALLSITE
0x004FD828 e0030091 mov      x0, sp
0x004FD82C 81008052 mov      w1, #4
0x004FD830 22feff97 bl       #0x4fd0b8 << EXACT BL CALLSITE
0x004FD834 f303002a mov      w19, w0
0x004FD838 e0030091 mov      x0, sp
0x004FD83C 1efeff97 bl       #0x4fd0b4 << EXACT BL CALLSITE
0x004FD840 e003132a mov      w0, w19
0x004FD844 f31340f9 ldr      x19, [sp, #0x20]
0x004FD848 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0x004FD84C ffc30091 add      sp, sp, #0x30
0x004FD850 c0035fd6 ret      
0x004FD854 283c0012 and      w8, w1, #0xffff
0x004FD858 1f410071 cmp      w8, #0x10
0x004FD85C a2000054 b.hs     #0x4fd870
0x004FD860 08b040f9 ldr      x8, [x0, #0x160]
0x004FD864 0825218b add      x8, x8, w1, uxth #1
0x004FD868 00414079 ldrh     w0, [x8, #0x20]
0x004FD86C c0035fd6 ret      
0x004FD870 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
0x004FD874 fd030091 mov      x29, sp
0x004FD878 b2e20394 bl       #0x5f6340
0x004FD87C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x004FD880 f30b00f9 str      x19, [sp, #0x10]
0x004FD884 fd030091 mov      x29, sp
0x004FD888 48150090 adrp     x8, #0x7a5000
0x004FD88C 091500d0 adrp     x9, #0x79f000
0x004FD890 08b946f9 ldr      x8, [x8, #0xd70]
0x004FD894 298d43f9 ldr      x9, [x9, #0x718]
0x004FD898 f30300aa mov      x19, x0
0x004FD89C e10300aa mov      x1, x0
0x004FD8A0 0a410091 add      x10, x8, #0x10
0x004FD8A4 08010191 add      x8, x8, #0x40
0x004FD8A8 29410091 add      x9, x9, #0x10
0x004FD8AC 0a0000f9 str      x10, [x0]
0x004FD8B0 082400f9 str      x8, [x0, #0x48]
0x004FD8B4 002c40f9 ldr      x0, [x0, #0x58]
0x004FD8B8 290c05f8 str      x9, [x1, #0x50]!
0x004FD8BC a00300b4 cbz      x0, #0x4fd930
0x004FD8C0 746eff97 bl       #0x4d9290
0x004FD8C4 602e40f9 ldr      x0, [x19, #0x58]
0x004FD8C8 7f2e00f9 str      xzr, [x19, #0x58]
0x004FD8CC 800000b4 cbz      x0, #0x4fd8dc
0x004FD8D0 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD8D4 080d40f9 ldr      x8, [x8, #0x18]
0x004FD8D8 00013fd6 blr      x8
```

## item record pointer, selector entry, anchor main+0x4FD06C

```asm
0x004FD05C f44f42a9 ldp      x20, x19, [sp, #0x20]
0x004FD060 f65741a9 ldp      x22, x21, [sp, #0x10]
0x004FD064 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x004FD068 c0035fd6 ret      
0x004FD06C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x004FD070 f44f01a9 stp      x20, x19, [sp, #0x10]
0x004FD074 fd030091 mov      x29, sp
0x004FD078 1f0000f9 str      xzr, [x0]
0x004FD07C 081500f0 adrp     x8, #0x7a0000
0x004FD080 f40300aa mov      x20, x0
0x004FD084 1f0800b9 str      wzr, [x0, #8]
0x004FD088 084542f9 ldr      x8, [x8, #0x488]
0x004FD08C 000140f9 ldr      x0, [x8]
0x004FD090 000100b4 cbz      x0, #0x4fd0b0
0x004FD094 f303012a mov      w19, w1
0x004FD098 bb010094 bl       #0x4fd784
0x004FD09C 800200f9 str      x0, [x20]
0x004FD0A0 930a00b9 str      w19, [x20, #8]
0x004FD0A4 f44f41a9 ldp      x20, x19, [sp, #0x10]
0x004FD0A8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x004FD0AC c0035fd6 ret      
0x004FD0B0 a4e40394 bl       #0x5f6340
0x004FD0B4 c0035fd6 ret      
0x004FD0B8 3f640071 cmp      w1, #0x19
0x004FD0BC 48010054 b.hi     #0x4fd0e4
0x004FD0C0 e803012a mov      w8, w1
0x004FD0C4 c90a00d0 adrp     x9, #0x657000
0x004FD0C8 29313f91 add      x9, x9, #0xfcc
0x004FD0CC 8a000010 adr      x10, #0x4fd0dc
0x004FD0D0 2b696838 ldrb     w11, [x9, x8]
0x004FD0D4 4a090b8b add      x10, x10, x11, lsl #2
0x004FD0D8 40011fd6 br       x10
0x004FD0DC 000840b9 ldr      w0, [x0, #8]
0x004FD0E0 c0035fd6 ret      
0x004FD0E4 080040f9 ldr      x8, [x0]
0x004FD0E8 09554039 ldrb     w9, [x8, #0x15]
0x004FD0EC 3f090071 cmp      w9, #2
0x004FD0F0 80000054 b.eq     #0x4fd100
0x004FD0F4 3f050071 cmp      w9, #1
0x004FD0F8 000b0054 b.eq     #0x4fd258
0x004FD0FC 690b0035 cbnz     w9, #0x4fd268
0x004FD100 00794039 ldrb     w0, [x8, #0x1e]
0x004FD104 c0035fd6 ret      
```

## object data source, field dispatch, anchor main+0x4FD0B8

```asm
0x004FD094 f303012a mov      w19, w1
0x004FD098 bb010094 bl       #0x4fd784
0x004FD09C 800200f9 str      x0, [x20]
0x004FD0A0 930a00b9 str      w19, [x20, #8]
0x004FD0A4 f44f41a9 ldp      x20, x19, [sp, #0x10]
0x004FD0A8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x004FD0AC c0035fd6 ret      
0x004FD0B0 a4e40394 bl       #0x5f6340
0x004FD0B4 c0035fd6 ret      
0x004FD0B8 3f640071 cmp      w1, #0x19
0x004FD0BC 48010054 b.hi     #0x4fd0e4
0x004FD0C0 e803012a mov      w8, w1
0x004FD0C4 c90a00d0 adrp     x9, #0x657000
0x004FD0C8 29313f91 add      x9, x9, #0xfcc
0x004FD0CC 8a000010 adr      x10, #0x4fd0dc
0x004FD0D0 2b696838 ldrb     w11, [x9, x8]
0x004FD0D4 4a090b8b add      x10, x10, x11, lsl #2
0x004FD0D8 40011fd6 br       x10
0x004FD0DC 000840b9 ldr      w0, [x0, #8]
0x004FD0E0 c0035fd6 ret      
0x004FD0E4 080040f9 ldr      x8, [x0]
0x004FD0E8 09554039 ldrb     w9, [x8, #0x15]
0x004FD0EC 3f090071 cmp      w9, #2
0x004FD0F0 80000054 b.eq     #0x4fd100
0x004FD0F4 3f050071 cmp      w9, #1
0x004FD0F8 000b0054 b.eq     #0x4fd258
0x004FD0FC 690b0035 cbnz     w9, #0x4fd268
0x004FD100 00794039 ldrb     w0, [x8, #0x1e]
0x004FD104 c0035fd6 ret      
0x004FD108 080040f9 ldr      x8, [x0]
0x004FD10C 000140b9 ldr      w0, [x8]
0x004FD110 c0035fd6 ret      
0x004FD114 080040f9 ldr      x8, [x0]
0x004FD118 000540b9 ldr      w0, [x8, #4]
0x004FD11C c0035fd6 ret      
0x004FD120 080040f9 ldr      x8, [x0]
0x004FD124 000940b9 ldr      w0, [x8, #8]
0x004FD128 c0035fd6 ret      
0x004FD12C 080040f9 ldr      x8, [x0]
0x004FD130 0035c079 ldrsh    w0, [x8, #0x1a]
0x004FD134 c0035fd6 ret      
0x004FD138 080040f9 ldr      x8, [x0]
0x004FD13C 00314039 ldrb     w0, [x8, #0xc]
0x004FD140 c0035fd6 ret      
0x004FD144 080040f9 ldr      x8, [x0]
0x004FD148 00354039 ldrb     w0, [x8, #0xd]
0x004FD14C c0035fd6 ret      
0x004FD150 080040f9 ldr      x8, [x0]
0x004FD154 00394039 ldrb     w0, [x8, #0xe]
0x004FD158 c0035fd6 ret      
0x004FD15C 080040f9 ldr      x8, [x0]
0x004FD160 08214079 ldrh     w8, [x8, #0x10]
0x004FD164 00310c53 ubfx     w0, w8, #0xc, #1
0x004FD168 c0035fd6 ret      
0x004FD16C 080040f9 ldr      x8, [x0]
0x004FD170 00494039 ldrb     w0, [x8, #0x12]
0x004FD174 c0035fd6 ret      
0x004FD178 080040f9 ldr      x8, [x0]
0x004FD17C 003d4039 ldrb     w0, [x8, #0xf]
0x004FD180 c0035fd6 ret      
0x004FD184 080040f9 ldr      x8, [x0]
0x004FD188 08214079 ldrh     w8, [x8, #0x10]
0x004FD18C 00110012 and      w0, w8, #0x1f
0x004FD190 c0035fd6 ret      
0x004FD194 080040f9 ldr      x8, [x0]
0x004FD198 08214079 ldrh     w8, [x8, #0x10]
0x004FD19C 00150553 ubfx     w0, w8, #5, #1
0x004FD1A0 c0035fd6 ret      
0x004FD1A4 080040f9 ldr      x8, [x0]
0x004FD1A8 08214079 ldrh     w8, [x8, #0x10]
0x004FD1AC 00190653 ubfx     w0, w8, #6, #1
0x004FD1B0 c0035fd6 ret      
0x004FD1B4 080040f9 ldr      x8, [x0]
0x004FD1B8 08454039 ldrb     w8, [x8, #0x11]
0x004FD1BC 000d0012 and      w0, w8, #0xf
0x004FD1C0 c0035fd6 ret      
0x004FD1C4 080040f9 ldr      x8, [x0]
0x004FD1C8 004d4039 ldrb     w0, [x8, #0x13]
0x004FD1CC c0035fd6 ret      
0x004FD1D0 080040f9 ldr      x8, [x0]
0x004FD1D4 00514039 ldrb     w0, [x8, #0x14]
0x004FD1D8 c0035fd6 ret      
0x004FD1DC 080040f9 ldr      x8, [x0]
0x004FD1E0 00554039 ldrb     w0, [x8, #0x15]
0x004FD1E4 c0035fd6 ret      
0x004FD1E8 080040f9 ldr      x8, [x0]
0x004FD1EC 00594039 ldrb     w0, [x8, #0x16]
0x004FD1F0 c0035fd6 ret      
0x004FD1F4 080040f9 ldr      x8, [x0]
0x004FD1F8 085d4039 ldrb     w8, [x8, #0x17]
0x004FD1FC 000d0012 and      w0, w8, #0xf
0x004FD200 c0035fd6 ret      
0x004FD204 080040f9 ldr      x8, [x0]
0x004FD208 085d4039 ldrb     w8, [x8, #0x17]
0x004FD20C 007d0453 lsr      w0, w8, #4
0x004FD210 c0035fd6 ret      
0x004FD214 080040f9 ldr      x8, [x0]
0x004FD218 00614039 ldrb     w0, [x8, #0x18]
0x004FD21C c0035fd6 ret      
0x004FD220 080040f9 ldr      x8, [x0]
0x004FD224 00714039 ldrb     w0, [x8, #0x1c]
0x004FD228 c0035fd6 ret      
0x004FD22C 080040f9 ldr      x8, [x0]
0x004FD230 00754039 ldrb     w0, [x8, #0x1d]
0x004FD234 c0035fd6 ret      
0x004FD238 080040f9 ldr      x8, [x0]
0x004FD23C 08214079 ldrh     w8, [x8, #0x10]
0x004FD240 001d0753 ubfx     w0, w8, #7, #1
0x004FD244 c0035fd6 ret      
0x004FD248 080040f9 ldr      x8, [x0]
0x004FD24C 08214079 ldrh     w8, [x8, #0x10]
0x004FD250 00350d53 ubfx     w0, w8, #0xd, #1
0x004FD254 c0035fd6 ret      
0x004FD258 08790091 add      x8, x8, #0x1e
0x004FD25C e003012a mov      w0, w1
0x004FD260 e10308aa mov      x1, x8
0x004FD264 03000014 b        #0x4fd270
0x004FD268 e0031f2a mov      w0, wzr
0x004FD26C c0035fd6 ret      
```

## resource path owner initialization, anchor main+0x4FD67C

```asm
0x004FD5EC 7f2e00f9 str      xzr, [x19, #0x58]
0x004FD5F0 7fb200f9 str      xzr, [x19, #0x160]
0x004FD5F4 f30b40f9 ldr      x19, [sp, #0x10]
0x004FD5F8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x004FD5FC c0035fd6 ret      
0x004FD600 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x004FD604 f30b00f9 str      x19, [sp, #0x10]
0x004FD608 fd030091 mov      x29, sp
0x004FD60C f30300aa mov      x19, x0
0x004FD610 000840f9 ldr      x0, [x0, #0x10]
0x004FD614 a00100b4 cbz      x0, #0x4fd648
0x004FD618 61220091 add      x1, x19, #8
0x004FD61C 1d6fff97 bl       #0x4d9290
0x004FD620 600a40f9 ldr      x0, [x19, #0x10]
0x004FD624 7f0a00f9 str      xzr, [x19, #0x10]
0x004FD628 800000b4 cbz      x0, #0x4fd638
0x004FD62C 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD630 080d40f9 ldr      x8, [x8, #0x18]
0x004FD634 00013fd6 blr      x8
0x004FD638 7f8e00f9 str      xzr, [x19, #0x118]
0x004FD63C f30b40f9 ldr      x19, [sp, #0x10]
0x004FD640 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x004FD644 c0035fd6 ret      
0x004FD648 7f0a00f9 str      xzr, [x19, #0x10]
0x004FD64C 7f8e00f9 str      xzr, [x19, #0x118]
0x004FD650 f30b40f9 ldr      x19, [sp, #0x10]
0x004FD654 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x004FD658 c0035fd6 ret      
0x004FD65C ff8301d1 sub      sp, sp, #0x60
0x004FD660 fd7b03a9 stp      x29, x30, [sp, #0x30]
0x004FD664 f52300f9 str      x21, [sp, #0x40]
0x004FD668 f44f05a9 stp      x20, x19, [sp, #0x50]
0x004FD66C fdc30091 add      x29, sp, #0x30
0x004FD670 e8030091 mov      x8, sp
0x004FD674 f40301aa mov      x20, x1
0x004FD678 f30300aa mov      x19, x0
0x004FD67C 89120094 bl       #0x5020a0
0x004FD680 081500d0 adrp     x8, #0x79f000
0x004FD684 e2030091 mov      x2, sp
0x004FD688 08a942f9 ldr      x8, [x8, #0x550]
0x004FD68C e1031f2a mov      w1, wzr
0x004FD690 e3031f2a mov      w3, wzr
0x004FD694 000140f9 ldr      x0, [x8]
0x004FD698 a8630091 add      x8, x29, #0x18
0x004FD69C e40314aa mov      x4, x20
0x004FD6A0 e5031faa mov      x5, xzr
0x004FD6A4 4359ec97 bl       #0x13bb0
0x004FD6A8 602e40f9 ldr      x0, [x19, #0x58]
0x004FD6AC 800000b4 cbz      x0, #0x4fd6bc
0x004FD6B0 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD6B4 080d40f9 ldr      x8, [x8, #0x18]
0x004FD6B8 00013fd6 blr      x8
0x004FD6BC b40f40f9 ldr      x20, [x29, #0x18]
0x004FD6C0 742e00f9 str      x20, [x19, #0x58]
0x004FD6C4 940200b4 cbz      x20, #0x4fd714
0x004FD6C8 f50314aa mov      x21, x20
0x004FD6CC a88e44f8 ldr      x8, [x21, #0x48]!
0x004FD6D0 e00315aa mov      x0, x21
0x004FD6D4 080940f9 ldr      x8, [x8, #0x10]
0x004FD6D8 00013fd6 blr      x8
0x004FD6DC 683240f9 ldr      x8, [x19, #0x60]
0x004FD6E0 697240f9 ldr      x9, [x19, #0xe0]
0x004FD6E4 080109aa orr      x8, x8, x9
0x004FD6E8 a80000b4 cbz      x8, #0x4fd6fc
0x004FD6EC 61420191 add      x1, x19, #0x50
0x004FD6F0 e00314aa mov      x0, x20
0x004FD6F4 22008052 mov      w2, #1
0x004FD6F8 466eff97 bl       #0x4d9010
0x004FD6FC e00314aa mov      x0, x20
0x004FD700 b86dff97 bl       #0x4d8de0
0x004FD704 882640f9 ldr      x8, [x20, #0x48]
0x004FD708 e00315aa mov      x0, x21
0x004FD70C 080d40f9 ldr      x8, [x8, #0x18]
0x004FD710 00013fd6 blr      x8
0x004FD714 e80f40f9 ldr      x8, [sp, #0x18]
0x004FD718 c80000b4 cbz      x8, #0x4fd730
0x004FD71C e00340f9 ldr      x0, [sp]
0x004FD720 800000b4 cbz      x0, #0x4fd730
0x004FD724 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD728 080d40f9 ldr      x8, [x8, #0x18]
0x004FD72C 00013fd6 blr      x8
0x004FD730 e01340f9 ldr      x0, [sp, #0x20]
0x004FD734 a8c884d2 mov      x8, #0x2645
0x004FD738 4884b0f2 movk     x8, #0x8422, lsl #16
0x004FD73C 889cd3f2 movk     x8, #0x9ce4, lsl #32
0x004FD740 487ef9f2 movk     x8, #0xcbf2, lsl #48
0x004FD744 ff2300a9 stp      xzr, x8, [sp]
0x004FD748 880800d0 adrp     x8, #0x60f000
0x004FD74C 080d1a91 add      x8, x8, #0x683
0x004FD750 e87f01a9 stp      x8, xzr, [sp, #0x10]
0x004FD754 800000b4 cbz      x0, #0x4fd764
0x004FD758 088c44f8 ldr      x8, [x0, #0x48]!
0x004FD75C 080d40f9 ldr      x8, [x8, #0x18]
0x004FD760 00013fd6 blr      x8
0x004FD764 682e40f9 ldr      x8, [x19, #0x58]
0x004FD768 f52340f9 ldr      x21, [sp, #0x40]
0x004FD76C 08c940f9 ldr      x8, [x8, #0x190]
0x004FD770 fd7b43a9 ldp      x29, x30, [sp, #0x30]
0x004FD774 68b200f9 str      x8, [x19, #0x160]
0x004FD778 f44f45a9 ldp      x20, x19, [sp, #0x50]
0x004FD77C ff830191 add      sp, sp, #0x60
0x004FD780 c0035fd6 ret      
0x004FD784 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
0x004FD788 fd030091 mov      x29, sp
```

## item property-related neighbors, anchor main+0x4FCC40

```asm
0x004FCBA0 e5008052 mov      w5, #7
0x004FCBA4 4f000094 bl       #0x4fcce0
0x004FCBA8 a1020012 and      w1, w21, #1
0x004FCBAC e00313aa mov      x0, x19
0x004FCBB0 f44f43a9 ldp      x20, x19, [sp, #0x30]
0x004FCBB4 f65742a9 ldp      x22, x21, [sp, #0x20]
0x004FCBB8 f85f41a9 ldp      x24, x23, [sp, #0x10]
0x004FCBBC fd7bc4a8 ldp      x29, x30, [sp], #0x40
0x004FCBC0 88d90014 b        #0x5331e0
0x004FCBC4 00000000 udf      #0
0x004FCBC8 00000000 udf      #0
0x004FCBCC 00000000 udf      #0
0x004FCBD0 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
0x004FCBD4 fc6f01a9 stp      x28, x27, [sp, #0x10]
0x004FCBD8 fa6702a9 stp      x26, x25, [sp, #0x20]
0x004FCBDC f85f03a9 stp      x24, x23, [sp, #0x30]
0x004FCBE0 f65704a9 stp      x22, x21, [sp, #0x40]
0x004FCBE4 f44f05a9 stp      x20, x19, [sp, #0x50]
0x004FCBE8 fd030091 mov      x29, sp
0x004FCBEC f50301aa mov      x21, x1
0x004FCBF0 f60300aa mov      x22, x0
0x004FCBF4 e00301aa mov      x0, x1
0x004FCBF8 e103022a mov      w1, w2
0x004FCBFC f303032a mov      w19, w3
0x004FCC00 f403022a mov      w20, w2
0x004FCC04 1be40094 bl       #0x535c70
0x004FCC08 a0050036 tbz      w0, #0, #0x4fccbc
0x004FCC0C e00315aa mov      x0, x21
0x004FCC10 fed00094 bl       #0x531008
0x004FCC14 f703002a mov      w23, w0
0x004FCC18 e00315aa mov      x0, x21
0x004FCC1C fdd00094 bl       #0x531010
0x004FCC20 f803002a mov      w24, w0
0x004FCC24 e00315aa mov      x0, x21
0x004FCC28 f8d50094 bl       #0x532408
0x004FCC2C f903002a mov      w25, w0
0x004FCC30 e003172a mov      w0, w23
0x004FCC34 e103182a mov      w1, w24
0x004FCC38 e203142a mov      w2, w20
0x004FCC3C 050c0094 bl       #0x4ffc50
0x004FCC40 1c3c0072 ands     w28, w0, #0xffff
0x004FCC44 c0030054 b.eq     #0x4fccbc
0x004FCC48 fa031f2a mov      w26, wzr
0x004FCC4C 0a000014 b        #0x4fcc74
0x004FCC50 e00316aa mov      x0, x22
0x004FCC54 e203142a mov      w2, w20
0x004FCC58 e303132a mov      w3, w19
0x004FCC5C e40315aa mov      x4, x21
0x004FCC60 e5031f2a mov      w5, wzr
0x004FCC64 1f000094 bl       #0x4fcce0
0x004FCC68 5a070011 add      w26, w26, #1
0x004FCC6C 9f031a6b cmp      w28, w26
0x004FCC70 60020054 b.eq     #0x4fccbc
0x004FCC74 e003172a mov      w0, w23
0x004FCC78 e103182a mov      w1, w24
0x004FCC7C e2031a2a mov      w2, w26
0x004FCC80 e303142a mov      w3, w20
0x004FCC84 190c0094 bl       #0x4ffce8
0x004FCC88 fb03002a mov      w27, w0
0x004FCC8C e003172a mov      w0, w23
0x004FCC90 e103182a mov      w1, w24
0x004FCC94 e2031a2a mov      w2, w26
0x004FCC98 e303142a mov      w3, w20
0x004FCC9C ea0c0094 bl       #0x500044
0x004FCCA0 683f0012 and      w8, w27, #0xffff
0x004FCCA4 e103002a mov      w1, w0
0x004FCCA8 1f990171 cmp      w8, #0x66
0x004FCCAC 20fdff54 b.eq     #0x4fcc50
0x004FCCB0 3f03086b cmp      w25, w8
0x004FCCB4 a3fdff54 b.lo     #0x4fcc68
0x004FCCB8 e6ffff17 b        #0x4fcc50
0x004FCCBC f44f45a9 ldp      x20, x19, [sp, #0x50]
0x004FCCC0 f65744a9 ldp      x22, x21, [sp, #0x40]
0x004FCCC4 f85f43a9 ldp      x24, x23, [sp, #0x30]
0x004FCCC8 fa6742a9 ldp      x26, x25, [sp, #0x20]
0x004FCCCC fc6f41a9 ldp      x28, x27, [sp, #0x10]
0x004FCCD0 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0x004FCCD4 c0035fd6 ret      
0x004FCCD8 00000000 udf      #0
0x004FCCDC 00000000 udf      #0
0x004FCCE0 810c0034 cbz      w1, #0x4fce70
0x004FCCE4 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
0x004FCCE8 f90b00f9 str      x25, [sp, #0x10]
0x004FCCEC f85f02a9 stp      x24, x23, [sp, #0x20]
0x004FCCF0 f65703a9 stp      x22, x21, [sp, #0x30]
0x004FCCF4 f44f04a9 stp      x20, x19, [sp, #0x40]
0x004FCCF8 fd030091 mov      x29, sp
0x004FCCFC f403012a mov      w20, w1
0x004FCD00 f30300aa mov      x19, x0
0x004FCD04 e003012a mov      w0, w1
0x004FCD08 e103032a mov      w1, w3
0x004FCD0C f803052a mov      w24, w5
0x004FCD10 f50304aa mov      x21, x4
0x004FCD14 f603032a mov      w22, w3
0x004FCD18 f703022a mov      w23, w2
0x004FCD1C 8d030194 bl       #0x53db50
0x004FCD20 e0090036 tbz      w0, #0, #0x4fce5c
0x004FCD24 d91e0012 and      w25, w22, #0xff
0x004FCD28 3f0b0071 cmp      w25, #2
0x004FCD2C 01020054 b.ne     #0x4fcd6c
0x004FCD30 e8060051 sub      w8, w23, #1
0x004FCD34 081d0012 and      w8, w8, #0xff
0x004FCD38 1f050071 cmp      w8, #1
0x004FCD3C 88010054 b.hi     #0x4fcd6c
0x004FCD40 08070051 sub      w8, w24, #1
0x004FCD44 1f050071 cmp      w8, #1
0x004FCD48 28010054 b.hi     #0x4fcd6c
0x004FCD4C e00315aa mov      x0, x21
0x004FCD50 62d10094 bl       #0x5312d8
0x004FCD54 1fb00071 cmp      w0, #0x2c
0x004FCD58 a0000054 b.eq     #0x4fcd6c
0x004FCD5C e00315aa mov      x0, x21
0x004FCD60 5ed10094 bl       #0x5312d8
0x004FCD64 1fb40071 cmp      w0, #0x2d
0x004FCD68 61010054 b.ne     #0x4fcd94
0x004FCD6C 3f03376b cmp      w25, w23, uxtb
0x004FCD70 00020054 b.eq     #0x4fcdb0
0x004FCD74 23008052 mov      w3, #1
0x004FCD78 e00315aa mov      x0, x21
0x004FCD7C e103142a mov      w1, w20
0x004FCD80 e203162a mov      w2, w22
0x004FCD84 e403032a mov      w4, w3
0x004FCD88 e00c0094 bl       #0x500108
0x004FCD8C 20010037 tbnz     w0, #0, #0x4fcdb0
0x004FCD90 33000014 b        #0x4fce5c
0x004FCD94 e3031f2a mov      w3, wzr
0x004FCD98 e00315aa mov      x0, x21
0x004FCD9C e103142a mov      w1, w20
0x004FCDA0 e203162a mov      w2, w22
0x004FCDA4 e403032a mov      w4, w3
0x004FCDA8 d80c0094 bl       #0x500108
0x004FCDAC 80050036 tbz      w0, #0, #0x4fce5c
0x004FCDB0 c81e0012 and      w8, w22, #0xff
0x004FCDB4 1f1d0071 cmp      w8, #7
0x004FCDB8 01030054 b.ne     #0x4fce18
0x004FCDBC f6031faa mov      x22, xzr
0x004FCDC0 d70a00f0 adrp     x23, #0x657000
0x004FCDC4 f7e23691 add      x23, x23, #0xdb8
0x004FCDC8 05000014 b        #0x4fcddc
0x004FCDCC 1f2003d5 nop      
0x004FCDD0 d6420091 add      x22, x22, #0x10
0x004FCDD4 df0208f1 cmp      x22, #0x200
0x004FCDD8 00020054 b.eq     #0x4fce18
0x004FCDDC f802168b add      x24, x23, x22
0x004FCDE0 080f40b9 ldr      w8, [x24, #0xc]
0x004FCDE4 1f01146b cmp      w8, w20
0x004FCDE8 41ffff54 b.ne     #0x4fcdd0
0x004FCDEC 190740b9 ldr      w25, [x24, #4]
0x004FCDF0 e00315aa mov      x0, x21
0x004FCDF4 85d00094 bl       #0x531008
0x004FCDF8 3f03006b cmp      w25, w0
0x004FCDFC a1feff54 b.ne     #0x4fcdd0
0x004FCE00 18134079 ldrh     w24, [x24, #8]
0x004FCE04 e00315aa mov      x0, x21
0x004FCE08 82d00094 bl       #0x531010
0x004FCE0C 1f23206b cmp      w24, w0, uxth
0x004FCE10 01feff54 b.ne     #0x4fcdd0
0x004FCE14 12000014 b        #0x4fce5c
0x004FCE18 68664eb9 ldr      w8, [x19, #0xe64]
0x004FCE1C 68010034 cbz      w8, #0x4fce48
0x004FCE20 e90313aa mov      x9, x19
0x004FCE24 ea0308aa mov      x10, x8
0x004FCE28 1f2003d5 nop      
0x004FCE2C 1f2003d5 nop      
0x004FCE30 2b4540b8 ldr      w11, [x9], #4
0x004FCE34 7f01146b cmp      w11, w20
0x004FCE38 20010054 b.eq     #0x4fce5c
0x004FCE3C 4a0500f1 subs     x10, x10, #1
0x004FCE40 81ffff54 b.ne     #0x4fce30
0x004FCE44 02000014 b        #0x4fce4c
0x004FCE48 e8031faa mov      x8, xzr
0x004FCE4C 747a28b8 str      w20, [x19, x8, lsl #2]
0x004FCE50 68664eb9 ldr      w8, [x19, #0xe64]
0x004FCE54 08050011 add      w8, w8, #1
0x004FCE58 68660eb9 str      w8, [x19, #0xe64]
0x004FCE5C f44f44a9 ldp      x20, x19, [sp, #0x40]
0x004FCE60 f90b40f9 ldr      x25, [sp, #0x10]
0x004FCE64 f65743a9 ldp      x22, x21, [sp, #0x30]
0x004FCE68 f85f42a9 ldp      x24, x23, [sp, #0x20]
0x004FCE6C fd7bc5a8 ldp      x29, x30, [sp], #0x50
0x004FCE70 c0035fd6 ret      
0x004FCE74 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x004FCE78 f65701a9 stp      x22, x21, [sp, #0x10]
0x004FCE7C f44f02a9 stp      x20, x19, [sp, #0x20]
0x004FCE80 fd030091 mov      x29, sp
0x004FCE84 f40301aa mov      x20, x1
0x004FCE88 f60300aa mov      x22, x0
0x004FCE8C e00301aa mov      x0, x1
0x004FCE90 e103022a mov      w1, w2
0x004FCE94 f303032a mov      w19, w3
0x004FCE98 f503022a mov      w21, w2
0x004FCE9C 75e30094 bl       #0x535c70
```

