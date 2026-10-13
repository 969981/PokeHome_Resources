# P6: HOME 4.1.0 图鉴 Topics 真正 Native 消费者

原始 ELF SHA256: \`bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a\`

确认布局：group stride \`0x78B8\`；slot stride \`0x138\`。
编译器使用 \`UMADDL\` 和 \`LDR\` 对记录内字段进行访问，
下文完整列出相关函数的实际机器码、地址和反汇编结果。
group 5 额外比较一组 96×(u16,u16) 对。
直接 ELF 证实的是数值与比较，不能把 UI 可见性/完成条件
命名当成已验证事实。

## 七组 Native 返回标志位的右移位数

| 组号 | Native 位右移量 |
|---:|---:|
| 0 | 0 |
| 1 | 1 |
| 2 | 2 |
| 3 | 5 |
| 4 | 6 |
| 5 | 7 |
| 6 | 9 |

## topics_group_slot_and_native_flag_checker (main+0x179540)

```asm
0x00179540 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00179544 f50b00f9 str      x21, [sp, #0x10]
0x00179548 f44f02a9 stp      x20, x19, [sp, #0x20]
0x0017954C fd030091 mov      x29, sp
0x00179550 08178f52 mov      w8, #0x78b8  << EXACT OPCODE ASSERTION
0x00179554 09278052 mov      w9, #0x138  << EXACT OPCODE ASSERTION
0x00179558 2800a89b umaddl   x8, w1, w8, x0  << EXACT OPCODE ASSERTION
0x0017955C f403012a mov      w20, w1
0x00179560 4820a99b umaddl   x8, w2, w9, x8  << EXACT OPCODE ASSERTION
0x00179564 0849238b add      x8, x8, w3, uxtw #2
0x00179568 153140b9 ldr      w21, [x8, #0x30]  << EXACT OPCODE ASSERTION
0x0017956C 135540b9 ldr      w19, [x8, #0x54]  << EXACT OPCODE ASSERTION
0x00179570 e003152a mov      w0, w21
0x00179574 e103132a mov      w1, w19
0x00179578 aeb10294 bl       #0x225c30
0x0017957C 9f1a0071 cmp      w20, #6
0x00179580 c9000054 b.ls     #0x179598
0x00179584 e0031f2a mov      w0, wzr
0x00179588 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x0017958C f50b40f9 ldr      x21, [sp, #0x10]
0x00179590 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00179594 c0035fd6 ret      
0x00179598 e803142a mov      w8, w20
0x0017959C a9250090 adrp     x9, #0x62d000
0x001795A0 29710e91 add      x9, x9, #0x39c
0x001795A4 287968b8 ldr      w8, [x9, x8, lsl #2]  << EXACT OPCODE ASSERTION
0x001795A8 9f160071 cmp      w20, #5  << EXACT OPCODE ASSERTION
0x001795AC 21020054 b.ne     #0x1795f0
0x001795B0 e9031faa mov      x9, xzr
0x001795B4 aa3e0012 and      w10, w21, #0xffff
0x001795B8 ab250090 adrp     x11, #0x62d000
0x001795BC 6b690891 add      x11, x11, #0x21a
0x001795C0 04000014 b        #0x1795d0
0x001795C4 29110091 add      x9, x9, #4
0x001795C8 3f0106f1 cmp      x9, #0x180  << EXACT OPCODE ASSERTION
0x001795CC 20010054 b.eq     #0x1795f0
0x001795D0 6c696978 ldrh     w12, [x11, x9]  << EXACT OPCODE ASSERTION
0x001795D4 9f010a6b cmp      w12, w10
0x001795D8 61ffff54 b.ne     #0x1795c4
0x001795DC 6c01098b add      x12, x11, x9
0x001795E0 8c054079 ldrh     w12, [x12, #2]  << EXACT OPCODE ASSERTION
0x001795E4 9f21336b cmp      w12, w19, uxth
0x001795E8 e1feff54 b.ne     #0x1795c4
0x001795EC c0fc4736 tbz      w0, #8, #0x179584  << EXACT OPCODE ASSERTION
0x001795F0 0824c89a lsr      x8, x0, x8  << EXACT OPCODE ASSERTION
0x001795F4 00010012 and      w0, w8, #1  << EXACT OPCODE ASSERTION
0x001795F8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x001795FC f50b40f9 ldr      x21, [sp, #0x10]
0x00179600 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00179604 c0035fd6 ret      
```

## topics_20_slot_condition_consumer (main+0x179640)

```asm
0x00179640 f30300aa mov      x19, x0
0x00179644 3f1c0071 cmp      w1, #7
0x00179648 03020054 b.lo     #0x179688
0x0017964C 003140b9 ldr      w0, [x8, #0x30]
0x00179650 003a0034 cbz      w0, #0x179d90
0x00179654 08178f52 mov      w8, #0x78b8
0x00179658 09278052 mov      w9, #0x138
0x0017965C e84ea89b umaddl   x8, w23, w8, x19
0x00179660 c822a99b umaddl   x8, w22, w9, x8
0x00179664 015540b9 ldr      w1, [x8, #0x54]
0x00179668 72b10294 bl       #0x225c30
0x0017966C e0031f2a mov      w0, wzr
0x00179670 f44f44a9 ldp      x20, x19, [sp, #0x40]
0x00179674 f90b40f9 ldr      x25, [sp, #0x10]
0x00179678 f65743a9 ldp      x22, x21, [sp, #0x30]
0x0017967C f85f42a9 ldp      x24, x23, [sp, #0x20]
0x00179680 fd7bc5a8 ldp      x29, x30, [sp], #0x50
0x00179684 c0035fd6 ret      
0x00179688 143140b9 ldr      w20, [x8, #0x30]
0x0017968C 3f140071 cmp      w1, #5
0x00179690 81080054 b.ne     #0x1797a0
0x00179694 f4370034 cbz      w20, #0x179d90
0x00179698 08178f52 mov      w8, #0x78b8
0x0017969C 09278052 mov      w9, #0x138
0x001796A0 e84ea89b umaddl   x8, w23, w8, x19
0x001796A4 e003142a mov      w0, w20
0x001796A8 c822a99b umaddl   x8, w22, w9, x8
0x001796AC 155540b9 ldr      w21, [x8, #0x54]
0x001796B0 e103152a mov      w1, w21
0x001796B4 5fb10294 bl       #0x225c30
0x001796B8 a8250090 adrp     x8, #0x62d000
0x001796BC 08710e91 add      x8, x8, #0x39c
0x001796C0 e9031faa mov      x9, xzr
0x001796C4 087977b8 ldr      w8, [x8, x23, lsl #2]
0x001796C8 8a3e0012 and      w10, w20, #0xffff
0x001796CC b8250090 adrp     x24, #0x62d000
0x001796D0 186b0891 add      x24, x24, #0x21a
0x001796D4 06000014 b        #0x1796ec
0x001796D8 1f2003d5 nop      
0x001796DC 1f2003d5 nop      
0x001796E0 29110091 add      x9, x9, #4
0x001796E4 3f0106f1 cmp      x9, #0x180
0x001796E8 20010054 b.eq     #0x17970c
0x001796EC 0b6b6978 ldrh     w11, [x24, x9]
0x001796F0 7f010a6b cmp      w11, w10
0x001796F4 61ffff54 b.ne     #0x1796e0
0x001796F8 0b03098b add      x11, x24, x9
0x001796FC 6b054079 ldrh     w11, [x11, #2]
0x00179700 7f21356b cmp      w11, w21, uxth
0x00179704 e1feff54 b.ne     #0x1796e0
0x00179708 20fb4736 tbz      w0, #8, #0x17966c
0x0017970C 29008052 mov      w9, #1
0x00179710 3921c89a lsl      x25, x9, x8
0x00179714 3f0300ea tst      x25, x0
0x00179718 a0faff54 b.eq     #0x17966c
0x0017971C 08178f52 mov      w8, #0x78b8
0x00179720 09278052 mov      w9, #0x138
0x00179724 e84ea89b umaddl   x8, w23, w8, x19
0x00179728 c822a99b umaddl   x8, w22, w9, x8
0x0017972C 153540b9 ldr      w21, [x8, #0x34]
0x00179730 15330034 cbz      w21, #0x179d90
0x00179734 08178f52 mov      w8, #0x78b8
0x00179738 09278052 mov      w9, #0x138
0x0017973C e84ea89b umaddl   x8, w23, w8, x19
0x00179740 e003152a mov      w0, w21
0x00179744 c822a99b umaddl   x8, w22, w9, x8
0x00179748 145940b9 ldr      w20, [x8, #0x58]
0x0017974C e103142a mov      w1, w20
0x00179750 38b10294 bl       #0x225c30
0x00179754 e80300aa mov      x8, x0
0x00179758 e9031faa mov      x9, xzr
0x0017975C aa3e0012 and      w10, w21, #0xffff
0x00179760 04000014 b        #0x179770
0x00179764 29110091 add      x9, x9, #4
0x00179768 3f0106f1 cmp      x9, #0x180
0x0017976C 40120054 b.eq     #0x1799b4
0x00179770 0b6b6978 ldrh     w11, [x24, x9]
0x00179774 7f010a6b cmp      w11, w10
0x00179778 61ffff54 b.ne     #0x179764
0x0017977C 0b03098b add      x11, x24, x9
0x00179780 6b054079 ldrh     w11, [x11, #2]
0x00179784 7f21346b cmp      w11, w20, uxth
0x00179788 e1feff54 b.ne     #0x179764
0x0017978C e0031f2a mov      w0, wzr
0x00179790 08f74736 tbz      w8, #8, #0x179670
0x00179794 2803088a and      x8, x25, x8
0x00179798 281100b5 cbnz     x8, #0x1799bc
0x0017979C b5ffff17 b        #0x179670
0x001797A0 942f0034 cbz      w20, #0x179d90
0x001797A4 08178f52 mov      w8, #0x78b8
0x001797A8 09278052 mov      w9, #0x138
0x001797AC e84ea89b umaddl   x8, w23, w8, x19
0x001797B0 e003142a mov      w0, w20
0x001797B4 c822a99b umaddl   x8, w22, w9, x8
0x001797B8 015540b9 ldr      w1, [x8, #0x54]
0x001797BC 1db10294 bl       #0x225c30
0x001797C0 a8250090 adrp     x8, #0x62d000
0x001797C4 08710e91 add      x8, x8, #0x39c
0x001797C8 29008052 mov      w9, #1
0x001797CC 087977b8 ldr      w8, [x8, x23, lsl #2]
0x001797D0 3421c89a lsl      x20, x9, x8
0x001797D4 9f0200ea tst      x20, x0
0x001797D8 a0f4ff54 b.eq     #0x17966c
0x001797DC 08178f52 mov      w8, #0x78b8
0x001797E0 09278052 mov      w9, #0x138
0x001797E4 e84ea89b umaddl   x8, w23, w8, x19
0x001797E8 c822a99b umaddl   x8, w22, w9, x8
0x001797EC 003540b9 ldr      w0, [x8, #0x34]
0x001797F0 002d0034 cbz      w0, #0x179d90
0x001797F4 08178f52 mov      w8, #0x78b8
0x001797F8 09278052 mov      w9, #0x138
0x001797FC e84ea89b umaddl   x8, w23, w8, x19
0x00179800 c822a99b umaddl   x8, w22, w9, x8
0x00179804 015940b9 ldr      w1, [x8, #0x58]
0x00179808 0ab10294 bl       #0x225c30
0x0017980C 9f0200ea tst      x20, x0
0x00179810 e0f2ff54 b.eq     #0x17966c
0x00179814 08178f52 mov      w8, #0x78b8
0x00179818 09278052 mov      w9, #0x138
0x0017981C e84ea89b umaddl   x8, w23, w8, x19
0x00179820 c822a99b umaddl   x8, w22, w9, x8
0x00179824 003940b9 ldr      w0, [x8, #0x38]
0x00179828 402b0034 cbz      w0, #0x179d90
0x0017982C 08178f52 mov      w8, #0x78b8
0x00179830 09278052 mov      w9, #0x138
0x00179834 e84ea89b umaddl   x8, w23, w8, x19
0x00179838 c822a99b umaddl   x8, w22, w9, x8
0x0017983C 015d40b9 ldr      w1, [x8, #0x5c]
0x00179840 fcb00294 bl       #0x225c30
0x00179844 9f0200ea tst      x20, x0
0x00179848 20f1ff54 b.eq     #0x17966c
0x0017984C 08178f52 mov      w8, #0x78b8
0x00179850 09278052 mov      w9, #0x138
0x00179854 e84ea89b umaddl   x8, w23, w8, x19
0x00179858 c822a99b umaddl   x8, w22, w9, x8
0x0017985C 003d40b9 ldr      w0, [x8, #0x3c]
0x00179860 80290034 cbz      w0, #0x179d90
0x00179864 08178f52 mov      w8, #0x78b8
0x00179868 09278052 mov      w9, #0x138
0x0017986C e84ea89b umaddl   x8, w23, w8, x19
0x00179870 c822a99b umaddl   x8, w22, w9, x8
0x00179874 016140b9 ldr      w1, [x8, #0x60]
0x00179878 eeb00294 bl       #0x225c30
0x0017987C 9f0200ea tst      x20, x0
0x00179880 60efff54 b.eq     #0x17966c
0x00179884 08178f52 mov      w8, #0x78b8
0x00179888 09278052 mov      w9, #0x138
0x0017988C e84ea89b umaddl   x8, w23, w8, x19
0x00179890 c822a99b umaddl   x8, w22, w9, x8
0x00179894 004140b9 ldr      w0, [x8, #0x40]
0x00179898 c0270034 cbz      w0, #0x179d90
0x0017989C 08178f52 mov      w8, #0x78b8
0x001798A0 09278052 mov      w9, #0x138
0x001798A4 e84ea89b umaddl   x8, w23, w8, x19
0x001798A8 c822a99b umaddl   x8, w22, w9, x8
0x001798AC 016540b9 ldr      w1, [x8, #0x64]
0x001798B0 e0b00294 bl       #0x225c30
0x001798B4 9f0200ea tst      x20, x0
0x001798B8 a0edff54 b.eq     #0x17966c
0x001798BC 08178f52 mov      w8, #0x78b8
0x001798C0 09278052 mov      w9, #0x138
0x001798C4 e84ea89b umaddl   x8, w23, w8, x19
0x001798C8 c822a99b umaddl   x8, w22, w9, x8
0x001798CC 004540b9 ldr      w0, [x8, #0x44]
0x001798D0 00260034 cbz      w0, #0x179d90
0x001798D4 08178f52 mov      w8, #0x78b8
0x001798D8 09278052 mov      w9, #0x138
0x001798DC e84ea89b umaddl   x8, w23, w8, x19
0x001798E0 c822a99b umaddl   x8, w22, w9, x8
0x001798E4 016940b9 ldr      w1, [x8, #0x68]
0x001798E8 d2b00294 bl       #0x225c30
0x001798EC 9f0200ea tst      x20, x0
0x001798F0 e0ebff54 b.eq     #0x17966c
0x001798F4 08178f52 mov      w8, #0x78b8
0x001798F8 09278052 mov      w9, #0x138
0x001798FC e84ea89b umaddl   x8, w23, w8, x19
0x00179900 c822a99b umaddl   x8, w22, w9, x8
0x00179904 004940b9 ldr      w0, [x8, #0x48]
0x00179908 40240034 cbz      w0, #0x179d90
0x0017990C 08178f52 mov      w8, #0x78b8
0x00179910 09278052 mov      w9, #0x138
0x00179914 e84ea89b umaddl   x8, w23, w8, x19
0x00179918 c822a99b umaddl   x8, w22, w9, x8
0x0017991C 016d40b9 ldr      w1, [x8, #0x6c]
0x00179920 c4b00294 bl       #0x225c30
0x00179924 9f0200ea tst      x20, x0
0x00179928 20eaff54 b.eq     #0x17966c
0x0017992C 08178f52 mov      w8, #0x78b8
0x00179930 09278052 mov      w9, #0x138
0x00179934 e84ea89b umaddl   x8, w23, w8, x19
0x00179938 c822a99b umaddl   x8, w22, w9, x8
0x0017993C 004d40b9 ldr      w0, [x8, #0x4c]
0x00179940 80220034 cbz      w0, #0x179d90
0x00179944 08178f52 mov      w8, #0x78b8
0x00179948 09278052 mov      w9, #0x138
0x0017994C e84ea89b umaddl   x8, w23, w8, x19
0x00179950 c822a99b umaddl   x8, w22, w9, x8
0x00179954 017140b9 ldr      w1, [x8, #0x70]
0x00179958 b6b00294 bl       #0x225c30
0x0017995C 9f0200ea tst      x20, x0
0x00179960 60e8ff54 b.eq     #0x17966c
0x00179964 08178f52 mov      w8, #0x78b8
0x00179968 09278052 mov      w9, #0x138
0x0017996C e84ea89b umaddl   x8, w23, w8, x19
0x00179970 c822a99b umaddl   x8, w22, w9, x8
0x00179974 005140b9 ldr      w0, [x8, #0x50]
0x00179978 c0200034 cbz      w0, #0x179d90
0x0017997C 08178f52 mov      w8, #0x78b8
0x00179980 09278052 mov      w9, #0x138
0x00179984 e84ea89b umaddl   x8, w23, w8, x19
0x00179988 c822a99b umaddl   x8, w22, w9, x8
0x0017998C 017540b9 ldr      w1, [x8, #0x74]
0x00179990 a8b00294 bl       #0x225c30
0x00179994 9f0200ea tst      x20, x0
0x00179998 e0079f1a cset     w0, ne
0x0017999C f44f44a9 ldp      x20, x19, [sp, #0x40]
0x001799A0 f90b40f9 ldr      x25, [sp, #0x10]
0x001799A4 f65743a9 ldp      x22, x21, [sp, #0x30]
0x001799A8 f85f42a9 ldp      x24, x23, [sp, #0x20]
0x001799AC fd7bc5a8 ldp      x29, x30, [sp], #0x50
0x001799B0 c0035fd6 ret      
0x001799B4 3f0308ea tst      x25, x8
0x001799B8 a0e5ff54 b.eq     #0x17966c
0x001799BC 08178f52 mov      w8, #0x78b8
0x001799C0 09278052 mov      w9, #0x138
0x001799C4 e84ea89b umaddl   x8, w23, w8, x19
0x001799C8 c822a99b umaddl   x8, w22, w9, x8
0x001799CC 153940b9 ldr      w21, [x8, #0x38]
0x001799D0 151e0034 cbz      w21, #0x179d90
0x001799D4 08178f52 mov      w8, #0x78b8
0x001799D8 09278052 mov      w9, #0x138
0x001799DC e84ea89b umaddl   x8, w23, w8, x19
0x001799E0 e003152a mov      w0, w21
0x001799E4 c822a99b umaddl   x8, w22, w9, x8
0x001799E8 145d40b9 ldr      w20, [x8, #0x5c]
0x001799EC e103142a mov      w1, w20
0x001799F0 90b00294 bl       #0x225c30
0x001799F4 e80300aa mov      x8, x0
0x001799F8 e9031faa mov      x9, xzr
0x001799FC aa3e0012 and      w10, w21, #0xffff
0x00179A00 04000014 b        #0x179a10
0x00179A04 29110091 add      x9, x9, #4
0x00179A08 3f0106f1 cmp      x9, #0x180
0x00179A0C a0010054 b.eq     #0x179a40
0x00179A10 0b6b6978 ldrh     w11, [x24, x9]
0x00179A14 7f010a6b cmp      w11, w10
0x00179A18 61ffff54 b.ne     #0x179a04
0x00179A1C 0b03098b add      x11, x24, x9
0x00179A20 6b054079 ldrh     w11, [x11, #2]
0x00179A24 7f21346b cmp      w11, w20, uxth
0x00179A28 e1feff54 b.ne     #0x179a04
0x00179A2C e0031f2a mov      w0, wzr
0x00179A30 08e24736 tbz      w8, #8, #0x179670
0x00179A34 2803088a and      x8, x25, x8
0x00179A38 880000b5 cbnz     x8, #0x179a48
0x00179A3C 0dffff17 b        #0x179670
0x00179A40 3f0308ea tst      x25, x8
0x00179A44 40e1ff54 b.eq     #0x17966c
0x00179A48 08178f52 mov      w8, #0x78b8
0x00179A4C 09278052 mov      w9, #0x138
0x00179A50 e84ea89b umaddl   x8, w23, w8, x19
0x00179A54 c822a99b umaddl   x8, w22, w9, x8
0x00179A58 153d40b9 ldr      w21, [x8, #0x3c]
0x00179A5C b5190034 cbz      w21, #0x179d90
0x00179A60 08178f52 mov      w8, #0x78b8
0x00179A64 09278052 mov      w9, #0x138
0x00179A68 e84ea89b umaddl   x8, w23, w8, x19
0x00179A6C e003152a mov      w0, w21
0x00179A70 c822a99b umaddl   x8, w22, w9, x8
0x00179A74 146140b9 ldr      w20, [x8, #0x60]
0x00179A78 e103142a mov      w1, w20
0x00179A7C 6db00294 bl       #0x225c30
0x00179A80 e80300aa mov      x8, x0
0x00179A84 e9031faa mov      x9, xzr
0x00179A88 aa3e0012 and      w10, w21, #0xffff
0x00179A8C 04000014 b        #0x179a9c
0x00179A90 29110091 add      x9, x9, #4
0x00179A94 3f0106f1 cmp      x9, #0x180
0x00179A98 a0010054 b.eq     #0x179acc
0x00179A9C 0b6b6978 ldrh     w11, [x24, x9]
0x00179AA0 7f010a6b cmp      w11, w10
0x00179AA4 61ffff54 b.ne     #0x179a90
0x00179AA8 0b03098b add      x11, x24, x9
0x00179AAC 6b054079 ldrh     w11, [x11, #2]
0x00179AB0 7f21346b cmp      w11, w20, uxth
0x00179AB4 e1feff54 b.ne     #0x179a90
0x00179AB8 e0031f2a mov      w0, wzr
0x00179ABC a8dd4736 tbz      w8, #8, #0x179670
0x00179AC0 2803088a and      x8, x25, x8
0x00179AC4 880000b5 cbnz     x8, #0x179ad4
0x00179AC8 eafeff17 b        #0x179670
0x00179ACC 3f0308ea tst      x25, x8
0x00179AD0 e0dcff54 b.eq     #0x17966c
0x00179AD4 08178f52 mov      w8, #0x78b8
0x00179AD8 09278052 mov      w9, #0x138
0x00179ADC e84ea89b umaddl   x8, w23, w8, x19
0x00179AE0 c822a99b umaddl   x8, w22, w9, x8
0x00179AE4 154140b9 ldr      w21, [x8, #0x40]
0x00179AE8 55150034 cbz      w21, #0x179d90
0x00179AEC 08178f52 mov      w8, #0x78b8
0x00179AF0 09278052 mov      w9, #0x138
0x00179AF4 e84ea89b umaddl   x8, w23, w8, x19
0x00179AF8 e003152a mov      w0, w21
0x00179AFC c822a99b umaddl   x8, w22, w9, x8
0x00179B00 146540b9 ldr      w20, [x8, #0x64]
0x00179B04 e103142a mov      w1, w20
0x00179B08 4ab00294 bl       #0x225c30
0x00179B0C e80300aa mov      x8, x0
0x00179B10 e9031faa mov      x9, xzr
0x00179B14 aa3e0012 and      w10, w21, #0xffff
0x00179B18 04000014 b        #0x179b28
0x00179B1C 29110091 add      x9, x9, #4
0x00179B20 3f0106f1 cmp      x9, #0x180
0x00179B24 a0010054 b.eq     #0x179b58
0x00179B28 0b6b6978 ldrh     w11, [x24, x9]
0x00179B2C 7f010a6b cmp      w11, w10
0x00179B30 61ffff54 b.ne     #0x179b1c
0x00179B34 0b03098b add      x11, x24, x9
0x00179B38 6b054079 ldrh     w11, [x11, #2]
0x00179B3C 7f21346b cmp      w11, w20, uxth
0x00179B40 e1feff54 b.ne     #0x179b1c
0x00179B44 e0031f2a mov      w0, wzr
0x00179B48 48d94736 tbz      w8, #8, #0x179670
0x00179B4C 2803088a and      x8, x25, x8
0x00179B50 880000b5 cbnz     x8, #0x179b60
0x00179B54 c7feff17 b        #0x179670
0x00179B58 3f0308ea tst      x25, x8
0x00179B5C 80d8ff54 b.eq     #0x17966c
0x00179B60 08178f52 mov      w8, #0x78b8
0x00179B64 09278052 mov      w9, #0x138
0x00179B68 e84ea89b umaddl   x8, w23, w8, x19
0x00179B6C c822a99b umaddl   x8, w22, w9, x8
0x00179B70 154540b9 ldr      w21, [x8, #0x44]
0x00179B74 f5100034 cbz      w21, #0x179d90
0x00179B78 08178f52 mov      w8, #0x78b8
0x00179B7C 09278052 mov      w9, #0x138
0x00179B80 e84ea89b umaddl   x8, w23, w8, x19
0x00179B84 e003152a mov      w0, w21
0x00179B88 c822a99b umaddl   x8, w22, w9, x8
0x00179B8C 146940b9 ldr      w20, [x8, #0x68]
0x00179B90 e103142a mov      w1, w20
0x00179B94 27b00294 bl       #0x225c30
0x00179B98 e80300aa mov      x8, x0
0x00179B9C e9031faa mov      x9, xzr
0x00179BA0 aa3e0012 and      w10, w21, #0xffff
0x00179BA4 04000014 b        #0x179bb4
0x00179BA8 29110091 add      x9, x9, #4
0x00179BAC 3f0106f1 cmp      x9, #0x180
0x00179BB0 a0010054 b.eq     #0x179be4
0x00179BB4 0b6b6978 ldrh     w11, [x24, x9]
0x00179BB8 7f010a6b cmp      w11, w10
0x00179BBC 61ffff54 b.ne     #0x179ba8
0x00179BC0 0b03098b add      x11, x24, x9
0x00179BC4 6b054079 ldrh     w11, [x11, #2]
0x00179BC8 7f21346b cmp      w11, w20, uxth
0x00179BCC e1feff54 b.ne     #0x179ba8
0x00179BD0 e0031f2a mov      w0, wzr
0x00179BD4 e8d44736 tbz      w8, #8, #0x179670
0x00179BD8 2803088a and      x8, x25, x8
0x00179BDC 880000b5 cbnz     x8, #0x179bec
0x00179BE0 a4feff17 b        #0x179670
0x00179BE4 3f0308ea tst      x25, x8
0x00179BE8 20d4ff54 b.eq     #0x17966c
0x00179BEC 08178f52 mov      w8, #0x78b8
0x00179BF0 09278052 mov      w9, #0x138
0x00179BF4 e84ea89b umaddl   x8, w23, w8, x19
0x00179BF8 c822a99b umaddl   x8, w22, w9, x8
0x00179BFC 154940b9 ldr      w21, [x8, #0x48]
0x00179C00 950c0034 cbz      w21, #0x179d90
0x00179C04 08178f52 mov      w8, #0x78b8
0x00179C08 09278052 mov      w9, #0x138
0x00179C0C e84ea89b umaddl   x8, w23, w8, x19
0x00179C10 e003152a mov      w0, w21
0x00179C14 c822a99b umaddl   x8, w22, w9, x8
0x00179C18 146d40b9 ldr      w20, [x8, #0x6c]
0x00179C1C e103142a mov      w1, w20
0x00179C20 04b00294 bl       #0x225c30
0x00179C24 e80300aa mov      x8, x0
0x00179C28 e9031faa mov      x9, xzr
0x00179C2C aa3e0012 and      w10, w21, #0xffff
0x00179C30 04000014 b        #0x179c40
0x00179C34 29110091 add      x9, x9, #4
0x00179C38 3f0106f1 cmp      x9, #0x180
0x00179C3C a0010054 b.eq     #0x179c70
0x00179C40 0b6b6978 ldrh     w11, [x24, x9]
0x00179C44 7f010a6b cmp      w11, w10
0x00179C48 61ffff54 b.ne     #0x179c34
0x00179C4C 0b03098b add      x11, x24, x9
0x00179C50 6b054079 ldrh     w11, [x11, #2]
0x00179C54 7f21346b cmp      w11, w20, uxth
0x00179C58 e1feff54 b.ne     #0x179c34
0x00179C5C e0031f2a mov      w0, wzr
0x00179C60 88d04736 tbz      w8, #8, #0x179670
0x00179C64 2803088a and      x8, x25, x8
0x00179C68 880000b5 cbnz     x8, #0x179c78
0x00179C6C 81feff17 b        #0x179670
0x00179C70 3f0308ea tst      x25, x8
0x00179C74 c0cfff54 b.eq     #0x17966c
0x00179C78 08178f52 mov      w8, #0x78b8
0x00179C7C 09278052 mov      w9, #0x138
0x00179C80 e84ea89b umaddl   x8, w23, w8, x19
0x00179C84 c822a99b umaddl   x8, w22, w9, x8
0x00179C88 154d40b9 ldr      w21, [x8, #0x4c]
0x00179C8C 35080034 cbz      w21, #0x179d90
0x00179C90 08178f52 mov      w8, #0x78b8
0x00179C94 09278052 mov      w9, #0x138
0x00179C98 e84ea89b umaddl   x8, w23, w8, x19
0x00179C9C e003152a mov      w0, w21
0x00179CA0 c822a99b umaddl   x8, w22, w9, x8
0x00179CA4 147140b9 ldr      w20, [x8, #0x70]
0x00179CA8 e103142a mov      w1, w20
0x00179CAC e1af0294 bl       #0x225c30
0x00179CB0 e80300aa mov      x8, x0
0x00179CB4 e9031faa mov      x9, xzr
0x00179CB8 aa3e0012 and      w10, w21, #0xffff
0x00179CBC 04000014 b        #0x179ccc
0x00179CC0 29110091 add      x9, x9, #4
0x00179CC4 3f0106f1 cmp      x9, #0x180
0x00179CC8 a0010054 b.eq     #0x179cfc
0x00179CCC 0b6b6978 ldrh     w11, [x24, x9]
0x00179CD0 7f010a6b cmp      w11, w10
0x00179CD4 61ffff54 b.ne     #0x179cc0
0x00179CD8 0b03098b add      x11, x24, x9
0x00179CDC 6b054079 ldrh     w11, [x11, #2]
0x00179CE0 7f21346b cmp      w11, w20, uxth
0x00179CE4 e1feff54 b.ne     #0x179cc0
0x00179CE8 e0031f2a mov      w0, wzr
0x00179CEC 28cc4736 tbz      w8, #8, #0x179670
0x00179CF0 2803088a and      x8, x25, x8
0x00179CF4 880000b5 cbnz     x8, #0x179d04
0x00179CF8 5efeff17 b        #0x179670
0x00179CFC 3f0308ea tst      x25, x8
0x00179D00 60cbff54 b.eq     #0x17966c
0x00179D04 08178f52 mov      w8, #0x78b8
0x00179D08 09278052 mov      w9, #0x138
0x00179D0C e84ea89b umaddl   x8, w23, w8, x19
0x00179D10 c822a99b umaddl   x8, w22, w9, x8
0x00179D14 145140b9 ldr      w20, [x8, #0x50]
0x00179D18 d4030034 cbz      w20, #0x179d90
0x00179D1C 08178f52 mov      w8, #0x78b8
0x00179D20 09278052 mov      w9, #0x138
0x00179D24 e84ea89b umaddl   x8, w23, w8, x19
0x00179D28 e003142a mov      w0, w20
0x00179D2C c822a99b umaddl   x8, w22, w9, x8
0x00179D30 137540b9 ldr      w19, [x8, #0x74]
0x00179D34 e103132a mov      w1, w19
0x00179D38 beaf0294 bl       #0x225c30
0x00179D3C e80300aa mov      x8, x0
0x00179D40 e9031faa mov      x9, xzr
0x00179D44 8a3e0012 and      w10, w20, #0xffff
0x00179D48 04000014 b        #0x179d58
0x00179D4C 29110091 add      x9, x9, #4
0x00179D50 3f0106f1 cmp      x9, #0x180
0x00179D54 a0010054 b.eq     #0x179d88
0x00179D58 0b6b6978 ldrh     w11, [x24, x9]
0x00179D5C 7f010a6b cmp      w11, w10
0x00179D60 61ffff54 b.ne     #0x179d4c
0x00179D64 0b03098b add      x11, x24, x9
0x00179D68 6b054079 ldrh     w11, [x11, #2]
0x00179D6C 7f21336b cmp      w11, w19, uxth
0x00179D70 e1feff54 b.ne     #0x179d4c
0x00179D74 e0031f2a mov      w0, wzr
0x00179D78 c8c74736 tbz      w8, #8, #0x179670
0x00179D7C 2803088a and      x8, x25, x8
0x00179D80 880000b5 cbnz     x8, #0x179d90
0x00179D84 3bfeff17 b        #0x179670
0x00179D88 3f0308ea tst      x25, x8
0x00179D8C 00c7ff54 b.eq     #0x17966c
0x00179D90 20008052 mov      w0, #1
0x00179D94 f44f44a9 ldp      x20, x19, [sp, #0x40]
0x00179D98 f90b40f9 ldr      x25, [sp, #0x10]
0x00179D9C f65743a9 ldp      x22, x21, [sp, #0x30]
0x00179DA0 f85f42a9 ldp      x24, x23, [sp, #0x20]
0x00179DA4 fd7bc5a8 ldp      x29, x30, [sp], #0x50
0x00179DA8 c0035fd6 ret      
0x00179DAC 00000000 udf      #0
0x00179DB0 fd7bbba9 stp      x29, x30, [sp, #-0x50]!
0x00179DB4 fa6701a9 stp      x26, x25, [sp, #0x10]
0x00179DB8 f85f02a9 stp      x24, x23, [sp, #0x20]
0x00179DBC f65703a9 stp      x22, x21, [sp, #0x30]
```

## topics_species_form_native_flag_query (main+0x225C30)

```asm
0x00225C30 081c8052 mov      w8, #0xe0
0x00225C34 092e0090 adrp     x9, #0x7e5000
0x00225C38 29c11891 add      x9, x9, #0x630
0x00225C3C 0824a89b umaddl   x8, w0, w8, x9
0x00225C40 099d8352 mov      w9, #0x1ce8
0x00225C44 8900a072 movk     w9, #4, lsl #16
0x00225C48 082d218b add      x8, x8, w1, uxth #3
0x00225C4C 006969f8 ldr      x0, [x8, x9]
0x00225C50 c0035fd6 ret      
0x00225C54 00000000 udf      #0
0x00225C58 00000000 udf      #0
0x00225C5C 00000000 udf      #0
0x00225C60 082e0090 adrp     x8, #0x7e5000
0x00225C64 08c11891 add      x8, x8, #0x630
0x00225C68 0841208b add      x8, x8, w0, uxtw
0x00225C6C 890f9552 mov      w9, #0xa87c
0x00225C70 e900a072 movk     w9, #7, lsl #16
0x00225C74 08696938 ldrb     w8, [x8, x9]
0x00225C78 1f010071 cmp      w8, #0
0x00225C7C e0079f1a cset     w0, ne
0x00225C80 c0035fd6 ret      
0x00225C84 00000000 udf      #0
0x00225C88 00000000 udf      #0
0x00225C8C 00000000 udf      #0
0x00225C90 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x00225C94 f30b00f9 str      x19, [sp, #0x10]
0x00225C98 fd030091 mov      x29, sp
0x00225C9C f303002a mov      w19, w0
0x00225CA0 549eff97 bl       #0x20d5f0
0x00225CA4 0840338b add      x8, x0, w19, uxtw
0x00225CA8 f30b40f9 ldr      x19, [sp, #0x10]
0x00225CAC 08f56839 ldrb     w8, [x8, #0xa3d]
0x00225CB0 1f010071 cmp      w8, #0
0x00225CB4 e0079f1a cset     w0, ne
0x00225CB8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00225CBC c0035fd6 ret      
0x00225CC0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0x00225CC4 f44f01a9 stp      x20, x19, [sp, #0x10]
0x00225CC8 fd030091 mov      x29, sp
0x00225CCC f303012a mov      w19, w1
0x00225CD0 f403002a mov      w20, w0
0x00225CD4 479eff97 bl       #0x20d5f0
0x00225CD8 680c8052 mov      w8, #0x63
0x00225CDC 8802a89b umaddl   x8, w20, w8, x0
0x00225CE0 0841338b add      x8, x8, w19, uxtw
0x00225CE4 f44f41a9 ldp      x20, x19, [sp, #0x10]
0x00225CE8 08355039 ldrb     w8, [x8, #0x40d]
0x00225CEC 1f010071 cmp      w8, #0
0x00225CF0 e0079f1a cset     w0, ne
0x00225CF4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00225CF8 c0035fd6 ret      
0x00225CFC 00000000 udf      #0
0x00225D00 c03100d0 adrp     x0, #0x85f000
0x00225D04 00601791 add      x0, x0, #0x5d8
0x00225D08 c0035fd6 ret      
0x00225D0C 00000000 udf      #0
0x00225D10 482e00d0 adrp     x8, #0x7ef000
0x00225D14 085140b9 ldr      w8, [x8, #0x50]
0x00225D18 08050051 sub      w8, w8, #1
0x00225D1C 1f150071 cmp      w8, #5
0x00225D20 48010054 b.hi     #0x225d48
0x00225D24 692000f0 adrp     x9, #0x634000
0x00225D28 29c92f91 add      x9, x9, #0xbf2
0x00225D2C 8a000010 adr      x10, #0x225d3c
0x00225D30 2b696838 ldrb     w11, [x9, x8]
0x00225D34 4a090b8b add      x10, x10, x11, lsl #2
0x00225D38 40011fd6 br       x10
0x00225D3C 002e0090 adrp     x0, #0x7e5000
0x00225D40 00c01891 add      x0, x0, #0x630
0x00225D44 63b90014 b        #0x2542d0
0x00225D48 20008052 mov      w0, #1
0x00225D4C c0035fd6 ret      
0x00225D50 002e0090 adrp     x0, #0x7e5000
0x00225D54 00c01891 add      x0, x0, #0x630
0x00225D58 06bf0014 b        #0x255970
0x00225D5C 002e0090 adrp     x0, #0x7e5000
0x00225D60 00c01891 add      x0, x0, #0x630
0x00225D64 33fafd17 b        #0x1a4630
0x00225D68 002e0090 adrp     x0, #0x7e5000
0x00225D6C 00c01891 add      x0, x0, #0x630
0x00225D70 8882fe17 b        #0x1c6790
0x00225D74 002e0090 adrp     x0, #0x7e5000
0x00225D78 00c01891 add      x0, x0, #0x630
0x00225D7C 8dbb0114 b        #0x294bb0
0x00225D80 002e0090 adrp     x0, #0x7e5000
0x00225D84 00c01891 add      x0, x0, #0x630
0x00225D88 c692fe17 b        #0x1ca8a0
0x00225D8C 00000000 udf      #0
0x00225D90 ff8302d1 sub      sp, sp, #0xa0
0x00225D94 fd7b08a9 stp      x29, x30, [sp, #0x80]
0x00225D98 f44f09a9 stp      x20, x19, [sp, #0x90]
0x00225D9C fd030291 add      x29, sp, #0x80
0x00225DA0 082e0090 adrp     x8, #0x7e5000
0x00225DA4 08c11891 add      x8, x8, #0x630
0x00225DA8 89db8652 mov      w9, #0x36dc
0x00225DAC 2903a072 movk     w9, #0x19, lsl #16
0x00225DB0 146969b8 ldr      w20, [x8, x9]
0x00225DB4 e85d9552 mov      w8, #0xaaef
0x00225DB8 089eac72 movk     w8, #0x64f0, lsl #16
0x00225DBC 9f02086b cmp      w20, w8
0x00225DC0 ad050054 b.le     #0x225e74
0x00225DC4 082e0090 adrp     x8, #0x7e5000
0x00225DC8 08612891 add      x8, x8, #0xa18
0x00225DCC f30300aa mov      x19, x0
0x00225DD0 092942a9 ldp      x9, x10, [x8, #0x20]
0x00225DD4 e92b06a9 stp      x9, x10, [sp, #0x60]
0x00225DD8 092943a9 ldp      x9, x10, [x8, #0x30]
0x00225DDC e92b07a9 stp      x9, x10, [sp, #0x70]
0x00225DE0 092940a9 ldp      x9, x10, [x8]
0x00225DE4 e92b04a9 stp      x9, x10, [sp, #0x40]
0x00225DE8 092141a9 ldp      x9, x8, [x8, #0x10]
0x00225DEC e92305a9 stp      x9, x8, [sp, #0x50]
0x00225DF0 009eff97 bl       #0x20d5f0
0x00225DF4 a8438252 mov      w8, #0x121d
0x00225DF8 fd7b48a9 ldp      x29, x30, [sp, #0x80]
0x00225DFC 0800088b add      x8, x0, x8
0x00225E00 092942a9 ldp      x9, x10, [x8, #0x20]
0x00225E04 e92b02a9 stp      x9, x10, [sp, #0x20]
0x00225E08 092943a9 ldp      x9, x10, [x8, #0x30]
0x00225E0C e92b03a9 stp      x9, x10, [sp, #0x30]
0x00225E10 092940a9 ldp      x9, x10, [x8]
0x00225E14 e92b00a9 stp      x9, x10, [sp]
0x00225E18 092141a9 ldp      x9, x8, [x8, #0x10]
0x00225E1C 7f521129 stp      wzr, w20, [x19, #0x88]
0x00225E20 ea2f47a9 ldp      x10, x11, [sp, #0x70]
0x00225E24 e92301a9 stp      x9, x8, [sp, #0x10]
0x00225E28 e82746a9 ldp      x8, x9, [sp, #0x60]
0x00225E2C 692a03a9 stp      x9, x10, [x19, #0x30]
0x00225E30 e92b44a9 ldp      x9, x10, [sp, #0x40]
0x00225E34 7f2600a9 stp      xzr, x9, [x19]
0x00225E38 e93345a9 ldp      x9, x12, [sp, #0x50]
0x00225E3C 6a2601a9 stp      x10, x9, [x19, #0x10]
0x00225E40 6c2202a9 stp      x12, x8, [x19, #0x20]
0x00225E44 e82740a9 ldp      x8, x9, [sp]
0x00225E48 ea3341a9 ldp      x10, x12, [sp, #0x10]
0x00225E4C 6c3200f9 str      x12, [x19, #0x60]
0x00225E50 692a05a9 stp      x9, x10, [x19, #0x50]
0x00225E54 6b2204a9 stp      x11, x8, [x19, #0x40]
0x00225E58 e82743a9 ldp      x8, x9, [sp, #0x30]
0x00225E5C 68a607a9 stp      x8, x9, [x19, #0x78]
0x00225E60 e92b42a9 ldp      x9, x10, [sp, #0x20]
0x00225E64 69aa06a9 stp      x9, x10, [x19, #0x68]
0x00225E68 f44f49a9 ldp      x20, x19, [sp, #0x90]
0x00225E6C ff830291 add      sp, sp, #0xa0
0x00225E70 c0035fd6 ret      
0x00225E74 33410f94 bl       #0x5f6340
0x00225E78 00000000 udf      #0
0x00225E7C 00000000 udf      #0
0x00225E80 ff0304d1 sub      sp, sp, #0x100
0x00225E84 fd7b0ca9 stp      x29, x30, [sp, #0xc0]
0x00225E88 f85f0da9 stp      x24, x23, [sp, #0xd0]
0x00225E8C f6570ea9 stp      x22, x21, [sp, #0xe0]
```

## topics_owner_reference (main+0x12E50)

```asm
0x00012E50 606e42f9 ldr      x0, [x19, #0x4d8]
0x00012E54 d7090094 bl       #0x155b0
0x00012E58 e0020036 tbz      w0, #0, #0x12eb4
0x00012E5C 688642f9 ldr      x8, [x19, #0x508]
0x00012E60 a80200b4 cbz      x8, #0x12eb4
0x00012E64 08c14539 ldrb     w8, [x8, #0x170]
0x00012E68 68020034 cbz      w8, #0x12eb4
0x00012E6C 680e43f9 ldr      x8, [x19, #0x618]
0x00012E70 280200b4 cbz      x8, #0x12eb4
0x00012E74 08c14539 ldrb     w8, [x8, #0x170]
0x00012E78 1f010071 cmp      w8, #0
0x00012E7C e0079f1a cset     w0, ne
0x00012E80 11000014 b        #0x12ec4
0x00012E84 607641f9 ldr      x0, [x19, #0x2e8]
0x00012E88 e00100b4 cbz      x0, #0x12ec4
0x00012E8C dff70a94 bl       #0x2d0e08
0x00012E90 1f040071 cmp      w0, #1
0x00012E94 01010054 b.ne     #0x12eb4
0x00012E98 607641f9 ldr      x0, [x19, #0x2e8]
0x00012E9C 28008052 mov      w8, #1
0x00012EA0 688a0b39 strb     w8, [x19, #0x2e2]
0x00012EA4 f7f70a94 bl       #0x2d0e80
0x00012EA8 606e42f9 ldr      x0, [x19, #0x4d8]
0x00012EAC c1090094 bl       #0x155b0
0x00012EB0 60fd0737 tbnz     w0, #0, #0x12e5c
0x00012EB4 e0031f2a mov      w0, wzr
0x00012EB8 f30b40f9 ldr      x19, [sp, #0x10]
0x00012EBC fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00012EC0 c0035fd6 ret      
0x00012EC4 f30b40f9 ldr      x19, [sp, #0x10]
0x00012EC8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0x00012ECC c0035fd6 ret      
0x00012ED0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00012ED4 f50b00f9 str      x21, [sp, #0x10]
0x00012ED8 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00012EDC fd030091 mov      x29, sp
0x00012EE0 088442f9 ldr      x8, [x0, #0x508]
0x00012EE4 13c940f9 ldr      x19, [x8, #0x190]
0x00012EE8 680240f9 ldr      x8, [x19]
0x00012EEC 280200b4 cbz      x8, #0x12f30
0x00012EF0 f5031f2a mov      w21, wzr
0x00012EF4 f4031f2a mov      w20, wzr
0x00012EF8 06000014 b        #0x12f10
0x00012EFC 1f2003d5 nop      
0x00012F00 680240f9 ldr      x8, [x19]
0x00012F04 b5060011 add      w21, w21, #1
0x00012F08 1f0115eb cmp      x8, x21
0x00012F0C 49010054 b.ls     #0x12f34
0x00012F10 e003152a mov      w0, w21
0x00012F14 5f4b0894 bl       #0x225c90
0x00012F18 40ff0736 tbz      w0, #0, #0x12f00
0x00012F1C e00313aa mov      x0, x19
0x00012F20 e103152a mov      w1, w21
0x00012F24 a39b0594 bl       #0x179db0
0x00012F28 1400140b add      w20, w0, w20
0x00012F2C f5ffff17 b        #0x12f00
0x00012F30 f4031f2a mov      w20, wzr
0x00012F34 e003142a mov      w0, w20
0x00012F38 f44f42a9 ldp      x20, x19, [sp, #0x20]
0x00012F3C f50b40f9 ldr      x21, [sp, #0x10]
0x00012F40 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0x00012F44 c0035fd6 ret      
0x00012F48 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0x00012F4C f50b00f9 str      x21, [sp, #0x10]
0x00012F50 f44f02a9 stp      x20, x19, [sp, #0x20]
0x00012F54 fd030091 mov      x29, sp
0x00012F58 f40300aa mov      x20, x0
0x00012F5C 003840f9 ldr      x0, [x0, #0x70]
0x00012F60 f503022a mov      w21, w2
0x00012F64 f30308aa mov      x19, x8
0x00012F68 d7801394 bl       #0x4f32c4
0x00012F6C 803e40f9 ldr      x0, [x20, #0x78]
0x00012F70 a00f00f9 str      x0, [x29, #0x18]
0x00012F74 800000b4 cbz      x0, #0x12f84
0x00012F78 088c44f8 ldr      x8, [x0, #0x48]!
0x00012F7C 080940f9 ldr      x8, [x8, #0x10]
```

