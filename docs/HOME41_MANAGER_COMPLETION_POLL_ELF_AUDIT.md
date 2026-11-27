# HOME41 dispatch manager callback producer and completion poll audit
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
### completion poll caller 0x6c208
0006C2A0 34861394 bl       #0x54db70
### completion poll caller 0xf15e0
000F16E4 b7c20494 bl       #0x2221c0
### completion poll caller 0xf1e7c
000F1EA8 c6c00494 bl       #0x2221c0
### manager table candidate 0x118e10
001190C0 48340090 adrp     x8, #0x7a1000
001190C8 08dd43f9 ldr      x8, [x8, #0x7b8]
001190CC ff7e12a9 stp      xzr, xzr, [x23, #0x120]
001190D4 ff7e13a9 stp      xzr, xzr, [x23, #0x130]
001190D8 ff1201f9 str      xzr, [x23, #0x220]
001190DC ff7e1aa9 stp      xzr, xzr, [x23, #0x1a0]
001190E0 ff1601f9 str      xzr, [x23, #0x228]
001190E4 ff1a01f9 str      xzr, [x23, #0x230]
001190E8 ff1e01f9 str      xzr, [x23, #0x238]
001190EC ff5201f9 str      xzr, [x23, #0x2a0]
001190F0 ff5601f9 str      xzr, [x23, #0x2a8]
001190F4 ff5a01f9 str      xzr, [x23, #0x2b0]
001190F8 ff5e01f9 str      xzr, [x23, #0x2b8]
0011912C ff7e1ba9 stp      xzr, xzr, [x23, #0x1b0]
### completion poll caller 0x119960
00119984 7bd01094 bl       #0x54db70
### completion poll caller 0x16fd20
0016FD44 1fc90294 bl       #0x2221c0
0016FD60 18c90294 bl       #0x2221c0
### manager table candidate 0x221dc0
00221E40 082c0090 adrp     x8, #0x7a1000
00221E48 08dd43f9 ldr      x8, [x8, #0x7b8]
00221E4C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
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
00221EAC bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00221F18 881201f9 str      x8, [x20, #0x220]
00221F24 891601f9 str      x9, [x20, #0x228]
00221F30 8a1a01f9 str      x10, [x20, #0x230]
00221F3C 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x2221c0
002221F8 5eae0c94 bl       #0x54db70
### manager table candidate 0x222230
002222B4 e82b00f0 adrp     x8, #0x7a1000
002222BC 08dd43f9 ldr      x8, [x8, #0x7b8]
002222C0 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
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
00222320 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022238C 881201f9 str      x8, [x20, #0x220]
00222398 891601f9 str      x9, [x20, #0x228]
002223A4 8a1a01f9 str      x10, [x20, #0x230]
002223B0 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x222800
00222838 ceac0c94 bl       #0x54db70
### manager table candidate 0x222c70
00222CF8 e82b00f0 adrp     x8, #0x7a1000
00222D00 08dd43f9 ldr      x8, [x8, #0x7b8]
00222D04 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00222D0C bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00222D10 bf1201f9 str      xzr, [x21, #0x220]
00222D14 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00222D18 bf1601f9 str      xzr, [x21, #0x228]
00222D1C bf1a01f9 str      xzr, [x21, #0x230]
00222D20 bf1e01f9 str      xzr, [x21, #0x238]
00222D24 bf5201f9 str      xzr, [x21, #0x2a0]
00222D28 bf5601f9 str      xzr, [x21, #0x2a8]
00222D2C bf5a01f9 str      xzr, [x21, #0x2b0]
00222D30 bf5e01f9 str      xzr, [x21, #0x2b8]
00222D64 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00222DD0 881201f9 str      x8, [x20, #0x220]
00222DDC 891601f9 str      x9, [x20, #0x228]
00222DE8 8a1a01f9 str      x10, [x20, #0x230]
00222DF4 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x224e80
002250B4 e82b0090 adrp     x8, #0x7a1000
002250BC 08dd43f9 ldr      x8, [x8, #0x7b8]
002250C0 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
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
00225120 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022518C 881201f9 str      x8, [x20, #0x220]
00225198 891601f9 str      x9, [x20, #0x228]
002251A4 8a1a01f9 str      x10, [x20, #0x230]
002251B0 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x225430
00225468 c2a10c94 bl       #0x54db70
### manager table candidate 0x225490
00225538 1f2101b9 str      wzr, [x8, #0x120]
00225768 e82b0090 adrp     x8, #0x7a1000
00225770 08dd43f9 ldr      x8, [x8, #0x7b8]
00225774 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
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
002257D4 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00225840 881201f9 str      x8, [x20, #0x220]
0022584C 891601f9 str      x9, [x20, #0x228]
00225858 8a1a01f9 str      x10, [x20, #0x230]
00225864 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x227260
002272F0 c82b00d0 adrp     x8, #0x7a1000
002272F8 08dd43f9 ldr      x8, [x8, #0x7b8]
002272FC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00227304 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00227308 bf1201f9 str      xzr, [x21, #0x220]
0022730C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00227310 bf1601f9 str      xzr, [x21, #0x228]
00227314 bf1a01f9 str      xzr, [x21, #0x230]
00227318 bf1e01f9 str      xzr, [x21, #0x238]
0022731C bf5201f9 str      xzr, [x21, #0x2a0]
00227320 bf5601f9 str      xzr, [x21, #0x2a8]
00227324 bf5a01f9 str      xzr, [x21, #0x2b0]
00227328 bf5e01f9 str      xzr, [x21, #0x2b8]
0022735C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
002273E4 881201f9 str      x8, [x20, #0x220]
002273F0 891601f9 str      x9, [x20, #0x228]
002273FC 8a1a01f9 str      x10, [x20, #0x230]
00227408 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x2276c0
002276F8 1e990c94 bl       #0x54db70
### completion poll caller 0x22e540
0022E578 7e7d0c94 bl       #0x54db70
### manager table candidate 0x22e5a0
0022E620 882b00f0 adrp     x8, #0x7a1000
0022E628 08dd43f9 ldr      x8, [x8, #0x7b8]
0022E62C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022E634 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022E638 bf1201f9 str      xzr, [x21, #0x220]
0022E63C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022E640 bf1601f9 str      xzr, [x21, #0x228]
0022E644 bf1a01f9 str      xzr, [x21, #0x230]
0022E648 bf1e01f9 str      xzr, [x21, #0x238]
0022E64C bf5201f9 str      xzr, [x21, #0x2a0]
0022E650 bf5601f9 str      xzr, [x21, #0x2a8]
0022E654 bf5a01f9 str      xzr, [x21, #0x2b0]
0022E658 bf5e01f9 str      xzr, [x21, #0x2b8]
0022E68C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022E6F8 881201f9 str      x8, [x20, #0x220]
0022E704 891601f9 str      x9, [x20, #0x228]
0022E710 8a1a01f9 str      x10, [x20, #0x230]
0022E71C 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x22e9a0
0022E9D8 667c0c94 bl       #0x54db70
### manager table candidate 0x22ea00
0022EA80 882b00f0 adrp     x8, #0x7a1000
0022EA88 08dd43f9 ldr      x8, [x8, #0x7b8]
0022EA8C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022EA94 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022EA98 bf1201f9 str      xzr, [x21, #0x220]
0022EA9C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022EAA0 bf1601f9 str      xzr, [x21, #0x228]
0022EAA4 bf1a01f9 str      xzr, [x21, #0x230]
0022EAA8 bf1e01f9 str      xzr, [x21, #0x238]
0022EAAC bf5201f9 str      xzr, [x21, #0x2a0]
0022EAB0 bf5601f9 str      xzr, [x21, #0x2a8]
0022EAB4 bf5a01f9 str      xzr, [x21, #0x2b0]
0022EAB8 bf5e01f9 str      xzr, [x21, #0x2b8]
0022EAEC bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022EB58 881201f9 str      x8, [x20, #0x220]
0022EB64 891601f9 str      x9, [x20, #0x228]
0022EB70 8a1a01f9 str      x10, [x20, #0x230]
0022EB7C 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x22ee00
0022EE38 4e7b0c94 bl       #0x54db70
### manager table candidate 0x22ee60
0022EEE0 882b00f0 adrp     x8, #0x7a1000
0022EEE8 08dd43f9 ldr      x8, [x8, #0x7b8]
0022EEEC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022EEF4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022EEF8 bf1201f9 str      xzr, [x21, #0x220]
0022EEFC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022EF00 bf1601f9 str      xzr, [x21, #0x228]
0022EF04 bf1a01f9 str      xzr, [x21, #0x230]
0022EF08 bf1e01f9 str      xzr, [x21, #0x238]
0022EF0C bf5201f9 str      xzr, [x21, #0x2a0]
0022EF10 bf5601f9 str      xzr, [x21, #0x2a8]
0022EF14 bf5a01f9 str      xzr, [x21, #0x2b0]
0022EF18 bf5e01f9 str      xzr, [x21, #0x2b8]
0022EF4C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022EFB8 881201f9 str      x8, [x20, #0x220]
0022EFC4 891601f9 str      x9, [x20, #0x228]
0022EFD0 8a1a01f9 str      x10, [x20, #0x230]
0022EFDC 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x22f260
0022F298 367a0c94 bl       #0x54db70
### manager table candidate 0x22f2e0
0022F370 882b00d0 adrp     x8, #0x7a1000
0022F378 08dd43f9 ldr      x8, [x8, #0x7b8]
0022F37C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022F384 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022F388 bf1201f9 str      xzr, [x21, #0x220]
0022F38C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022F390 bf1601f9 str      xzr, [x21, #0x228]
0022F394 bf1a01f9 str      xzr, [x21, #0x230]
0022F398 bf1e01f9 str      xzr, [x21, #0x238]
0022F39C bf5201f9 str      xzr, [x21, #0x2a0]
0022F3A0 bf5601f9 str      xzr, [x21, #0x2a8]
0022F3A4 bf5a01f9 str      xzr, [x21, #0x2b0]
0022F3A8 bf5e01f9 str      xzr, [x21, #0x2b8]
0022F3DC bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022F448 881201f9 str      x8, [x20, #0x220]
0022F454 891601f9 str      x9, [x20, #0x228]
0022F460 8a1a01f9 str      x10, [x20, #0x230]
0022F46C 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x22f7b0
0022F894 882b00d0 adrp     x8, #0x7a1000
0022F89C 08dd43f9 ldr      x8, [x8, #0x7b8]
0022F8A0 df7e12a9 stp      xzr, xzr, [x22, #0x120]
0022F8A8 df7e13a9 stp      xzr, xzr, [x22, #0x130]
0022F8AC df1201f9 str      xzr, [x22, #0x220]
0022F8B0 df7e1aa9 stp      xzr, xzr, [x22, #0x1a0]
0022F8B4 df1601f9 str      xzr, [x22, #0x228]
0022F8B8 df1a01f9 str      xzr, [x22, #0x230]
0022F8BC df1e01f9 str      xzr, [x22, #0x238]
0022F8C0 df5201f9 str      xzr, [x22, #0x2a0]
0022F8C4 df5601f9 str      xzr, [x22, #0x2a8]
0022F8C8 df5a01f9 str      xzr, [x22, #0x2b0]
0022F8CC df5e01f9 str      xzr, [x22, #0x2b8]
0022F900 df7e1ba9 stp      xzr, xzr, [x22, #0x1b0]
0022F96C a81201f9 str      x8, [x21, #0x220]
0022F978 a91601f9 str      x9, [x21, #0x228]
0022F984 aa1a01f9 str      x10, [x21, #0x230]
0022F990 a81e01f9 str      x8, [x21, #0x238]
### completion poll caller 0x22f7b0
0022F80C d9780c94 bl       #0x54db70
### manager table candidate 0x22fc50
0022FCD0 882b00d0 adrp     x8, #0x7a1000
0022FCD8 08dd43f9 ldr      x8, [x8, #0x7b8]
0022FCDC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022FCE4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022FCE8 bf1201f9 str      xzr, [x21, #0x220]
0022FCEC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022FCF0 bf1601f9 str      xzr, [x21, #0x228]
0022FCF4 bf1a01f9 str      xzr, [x21, #0x230]
0022FCF8 bf1e01f9 str      xzr, [x21, #0x238]
0022FCFC bf5201f9 str      xzr, [x21, #0x2a0]
0022FD00 bf5601f9 str      xzr, [x21, #0x2a8]
0022FD04 bf5a01f9 str      xzr, [x21, #0x2b0]
0022FD08 bf5e01f9 str      xzr, [x21, #0x2b8]
0022FD3C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022FDA8 881201f9 str      x8, [x20, #0x220]
0022FDB4 891601f9 str      x9, [x20, #0x228]
0022FDC0 8a1a01f9 str      x10, [x20, #0x230]
0022FDCC 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x230050
00230088 ba760c94 bl       #0x54db70
### manager table candidate 0x2300b0
00230144 882b00b0 adrp     x8, #0x7a1000
0023014C 08dd43f9 ldr      x8, [x8, #0x7b8]
00230150 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00230158 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0023015C bf1201f9 str      xzr, [x21, #0x220]
00230160 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00230164 bf1601f9 str      xzr, [x21, #0x228]
00230168 bf1a01f9 str      xzr, [x21, #0x230]
0023016C bf1e01f9 str      xzr, [x21, #0x238]
00230170 bf5201f9 str      xzr, [x21, #0x2a0]
00230174 bf5601f9 str      xzr, [x21, #0x2a8]
00230178 bf5a01f9 str      xzr, [x21, #0x2b0]
0023017C bf5e01f9 str      xzr, [x21, #0x2b8]
002301B0 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0023021C 881201f9 str      x8, [x20, #0x220]
00230228 891601f9 str      x9, [x20, #0x228]
00230234 8a1a01f9 str      x10, [x20, #0x230]
00230240 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x2304c0
002304F8 9e750c94 bl       #0x54db70
### manager table candidate 0x230520
002305B4 882b00b0 adrp     x8, #0x7a1000
002305BC 08dd43f9 ldr      x8, [x8, #0x7b8]
002305C0 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002305C8 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002305CC bf1201f9 str      xzr, [x21, #0x220]
002305D0 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002305D4 bf1601f9 str      xzr, [x21, #0x228]
002305D8 bf1a01f9 str      xzr, [x21, #0x230]
002305DC bf1e01f9 str      xzr, [x21, #0x238]
002305E0 bf5201f9 str      xzr, [x21, #0x2a0]
002305E4 bf5601f9 str      xzr, [x21, #0x2a8]
002305E8 bf5a01f9 str      xzr, [x21, #0x2b0]
002305EC bf5e01f9 str      xzr, [x21, #0x2b8]
00230620 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0023068C 881201f9 str      x8, [x20, #0x220]
00230698 891601f9 str      x9, [x20, #0x228]
002306A4 8a1a01f9 str      x10, [x20, #0x230]
002306B0 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x230930
002309B0 882b00b0 adrp     x8, #0x7a1000
002309B8 08dd43f9 ldr      x8, [x8, #0x7b8]
002309BC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002309C4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002309C8 bf1201f9 str      xzr, [x21, #0x220]
002309CC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002309D0 bf1601f9 str      xzr, [x21, #0x228]
002309D4 bf1a01f9 str      xzr, [x21, #0x230]
002309D8 bf1e01f9 str      xzr, [x21, #0x238]
002309DC bf5201f9 str      xzr, [x21, #0x2a0]
002309E0 bf5601f9 str      xzr, [x21, #0x2a8]
002309E4 bf5a01f9 str      xzr, [x21, #0x2b0]
002309E8 bf5e01f9 str      xzr, [x21, #0x2b8]
00230A1C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00230A88 881201f9 str      x8, [x20, #0x220]
00230A94 891601f9 str      x9, [x20, #0x228]
00230AA0 8a1a01f9 str      x10, [x20, #0x230]
00230AAC 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x230d30
00230DB0 882b00b0 adrp     x8, #0x7a1000
00230DB8 08dd43f9 ldr      x8, [x8, #0x7b8]
00230DBC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00230DC4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00230DC8 bf1201f9 str      xzr, [x21, #0x220]
00230DCC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00230DD0 bf1601f9 str      xzr, [x21, #0x228]
00230DD4 bf1a01f9 str      xzr, [x21, #0x230]
00230DD8 bf1e01f9 str      xzr, [x21, #0x238]
00230DDC bf5201f9 str      xzr, [x21, #0x2a0]
00230DE0 bf5601f9 str      xzr, [x21, #0x2a8]
00230DE4 bf5a01f9 str      xzr, [x21, #0x2b0]
00230DE8 bf5e01f9 str      xzr, [x21, #0x2b8]
00230E1C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00230E88 881201f9 str      x8, [x20, #0x220]
00230E94 891601f9 str      x9, [x20, #0x228]
00230EA0 8a1a01f9 str      x10, [x20, #0x230]
00230EAC 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x231130
002311B0 882b0090 adrp     x8, #0x7a1000
002311B8 08dd43f9 ldr      x8, [x8, #0x7b8]
002311BC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002311C4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002311C8 bf1201f9 str      xzr, [x21, #0x220]
002311CC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002311D0 bf1601f9 str      xzr, [x21, #0x228]
002311D4 bf1a01f9 str      xzr, [x21, #0x230]
002311D8 bf1e01f9 str      xzr, [x21, #0x238]
002311DC bf5201f9 str      xzr, [x21, #0x2a0]
002311E0 bf5601f9 str      xzr, [x21, #0x2a8]
002311E4 bf5a01f9 str      xzr, [x21, #0x2b0]
002311E8 bf5e01f9 str      xzr, [x21, #0x2b8]
0023121C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00231288 881201f9 str      x8, [x20, #0x220]
00231294 891601f9 str      x9, [x20, #0x228]
002312A0 8a1a01f9 str      x10, [x20, #0x230]
002312AC 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x231530
002315B0 882b0090 adrp     x8, #0x7a1000
002315B8 08dd43f9 ldr      x8, [x8, #0x7b8]
002315BC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002315C4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002315C8 bf1201f9 str      xzr, [x21, #0x220]
002315CC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002315D0 bf1601f9 str      xzr, [x21, #0x228]
002315D4 bf1a01f9 str      xzr, [x21, #0x230]
002315D8 bf1e01f9 str      xzr, [x21, #0x238]
002315DC bf5201f9 str      xzr, [x21, #0x2a0]
002315E0 bf5601f9 str      xzr, [x21, #0x2a8]
002315E4 bf5a01f9 str      xzr, [x21, #0x2b0]
002315E8 bf5e01f9 str      xzr, [x21, #0x2b8]
0023161C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00231688 881201f9 str      x8, [x20, #0x220]
00231694 891601f9 str      x9, [x20, #0x228]
002316A0 8a1a01f9 str      x10, [x20, #0x230]
002316AC 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x231930
002319B0 882b0090 adrp     x8, #0x7a1000
002319B8 08dd43f9 ldr      x8, [x8, #0x7b8]
002319BC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002319C4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002319C8 bf1201f9 str      xzr, [x21, #0x220]
002319CC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002319D0 bf1601f9 str      xzr, [x21, #0x228]
002319D4 bf1a01f9 str      xzr, [x21, #0x230]
002319D8 bf1e01f9 str      xzr, [x21, #0x238]
002319DC bf5201f9 str      xzr, [x21, #0x2a0]
002319E0 bf5601f9 str      xzr, [x21, #0x2a8]
002319E4 bf5a01f9 str      xzr, [x21, #0x2b0]
002319E8 bf5e01f9 str      xzr, [x21, #0x2b8]
00231A1C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00231A88 881201f9 str      x8, [x20, #0x220]
00231A94 891601f9 str      x9, [x20, #0x228]
00231AA0 8a1a01f9 str      x10, [x20, #0x230]
00231AAC 881e01f9 str      x8, [x20, #0x238]
### completion poll caller 0x231d30
00231D68 826f0c94 bl       #0x54db70
### manager table candidate 0x231d90
00231E10 882b0090 adrp     x8, #0x7a1000
00231E18 08dd43f9 ldr      x8, [x8, #0x7b8]
00231E1C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00231E24 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00231E28 bf1201f9 str      xzr, [x21, #0x220]
00231E2C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00231E30 bf1601f9 str      xzr, [x21, #0x228]
00231E34 bf1a01f9 str      xzr, [x21, #0x230]
00231E38 bf1e01f9 str      xzr, [x21, #0x238]
00231E3C bf5201f9 str      xzr, [x21, #0x2a0]
00231E40 bf5601f9 str      xzr, [x21, #0x2a8]
00231E44 bf5a01f9 str      xzr, [x21, #0x2b0]
00231E48 bf5e01f9 str      xzr, [x21, #0x2b8]
00231E7C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00231EE8 881201f9 str      x8, [x20, #0x220]
00231EF4 891601f9 str      x9, [x20, #0x228]
00231F00 8a1a01f9 str      x10, [x20, #0x230]
00231F0C 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x232190
00232210 682b00f0 adrp     x8, #0x7a1000
00232218 08dd43f9 ldr      x8, [x8, #0x7b8]
0023221C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00232224 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00232228 bf1201f9 str      xzr, [x21, #0x220]
0023222C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00232230 bf1601f9 str      xzr, [x21, #0x228]
00232234 bf1a01f9 str      xzr, [x21, #0x230]
00232238 bf1e01f9 str      xzr, [x21, #0x238]
0023223C bf5201f9 str      xzr, [x21, #0x2a0]
00232240 bf5601f9 str      xzr, [x21, #0x2a8]
00232244 bf5a01f9 str      xzr, [x21, #0x2b0]
00232248 bf5e01f9 str      xzr, [x21, #0x2b8]
0023227C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
002322E8 881201f9 str      x8, [x20, #0x220]
002322F4 891601f9 str      x9, [x20, #0x228]
00232300 8a1a01f9 str      x10, [x20, #0x230]
0023230C 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x232590
00232610 682b00f0 adrp     x8, #0x7a1000
00232618 08dd43f9 ldr      x8, [x8, #0x7b8]
0023261C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00232624 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00232628 bf1201f9 str      xzr, [x21, #0x220]
0023262C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00232630 bf1601f9 str      xzr, [x21, #0x228]
00232634 bf1a01f9 str      xzr, [x21, #0x230]
00232638 bf1e01f9 str      xzr, [x21, #0x238]
0023263C bf5201f9 str      xzr, [x21, #0x2a0]
00232640 bf5601f9 str      xzr, [x21, #0x2a8]
00232644 bf5a01f9 str      xzr, [x21, #0x2b0]
00232648 bf5e01f9 str      xzr, [x21, #0x2b8]
0023267C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
002326E8 881201f9 str      x8, [x20, #0x220]
002326F4 891601f9 str      x9, [x20, #0x228]
00232700 8a1a01f9 str      x10, [x20, #0x230]
0023270C 881e01f9 str      x8, [x20, #0x238]
### manager table candidate 0x232990
00232B04 682b00f0 adrp     x8, #0x7a1000
00232B0C 08dd43f9 ldr      x8, [x8, #0x7b8]
00232B10 df7e12a9 stp      xzr, xzr, [x22, #0x120]
00232B18 df7e13a9 stp      xzr, xzr, [x22, #0x130]
00232B1C df1201f9 str      xzr, [x22, #0x220]
00232B20 df7e1aa9 stp      xzr, xzr, [x22, #0x1a0]
00232B24 df1601f9 str      xzr, [x22, #0x228]
00232B28 df1a01f9 str      xzr, [x22, #0x230]
00232B2C df1e01f9 str      xzr, [x22, #0x238]
00232B30 df5201f9 str      xzr, [x22, #0x2a0]
00232B34 df5601f9 str      xzr, [x22, #0x2a8]
00232B38 df5a01f9 str      xzr, [x22, #0x2b0]
00232B3C df5e01f9 str      xzr, [x22, #0x2b8]
00232B70 df7e1ba9 stp      xzr, xzr, [x22, #0x1b0]
00232BDC a81201f9 str      x8, [x21, #0x220]
00232BE8 a91601f9 str      x9, [x21, #0x228]
00232BF4 aa1a01f9 str      x10, [x21, #0x230]
00232C00 a81e01f9 str      x8, [x21, #0x238]
### completion poll caller 0x232990
00232A90 386c0c94 bl       #0x54db70

## Candidate counts
- GOT page/cell pattern: 24
- completion poll direct callers: 18
## Complete bodies
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
### 0x118e10 (272 slots)
~~~asm
00118E10 ff4302d1 sub      sp, sp, #0x90
00118E14 fd7b05a9 stp      x29, x30, [sp, #0x50]
00118E18 f85f06a9 stp      x24, x23, [sp, #0x60]
00118E1C f65707a9 stp      x22, x21, [sp, #0x70]
00118E20 f44f08a9 stp      x20, x19, [sp, #0x80]
00118E24 fd430191 add      x29, sp, #0x50
00118E28 f30300aa mov      x19, x0
00118E2C 21280090 adrp     x1, #0x61c000
00118E30 21983191 add      x1, x1, #0xc66
00118E34 a08300d1 sub      x0, x29, #0x20
00118E38 67c4fb97 bl       #0x9fd4
00118E3C 603a40f9 ldr      x0, [x19, #0x70]
00118E40 800000b4 cbz      x0, #0x118e50
00118E44 088c44f8 ldr      x8, [x0, #0x48]!
00118E48 080d40f9 ldr      x8, [x8, #0x18]
00118E4C 00013fd6 blr      x8
00118E50 a8035ef8 ldur     x8, [x29, #-0x20]
00118E54 20008052 mov      w0, #1
00118E58 683a00f9 str      x8, [x19, #0x70]
00118E5C 29761394 bl       #0x5f6700
00118E60 600640f9 ldr      x0, [x19, #8]
00118E64 08408052 mov      w8, #0x200
00118E68 e1830091 add      x1, sp, #0x20
00118E6C e82300b9 str      w8, [sp, #0x20]
00118E70 a88300d1 sub      x8, x29, #0x20
00118E74 bfe2fb97 bl       #0x11970
00118E78 604240f9 ldr      x0, [x19, #0x80]
00118E7C 800000b4 cbz      x0, #0x118e8c
00118E80 088c44f8 ldr      x8, [x0, #0x48]!
00118E84 080d40f9 ldr      x8, [x8, #0x18]
00118E88 00013fd6 blr      x8
00118E8C a8035ef8 ldur     x8, [x29, #-0x20]
00118E90 684200f9 str      x8, [x19, #0x80]
00118E94 683240f9 ldr      x8, [x19, #0x60]
00118E98 143140f9 ldr      x20, [x8, #0x60]
00118E9C 880240f9 ldr      x8, [x20]
00118EA0 e00314aa mov      x0, x20
00118EA4 080140f9 ldr      x8, [x8]
00118EA8 00013fd6 blr      x8
00118EAC f50300aa mov      x21, x0
00118EB0 ab34fc97 bl       #0x2615c
00118EB4 1f0015eb cmp      x0, x21
00118EB8 c0000054 b.eq     #0x118ed0
00118EBC 1f2003d5 nop      
00118EC0 b50240f9 ldr      x21, [x21]
00118EC4 bf0200eb cmp      x21, x0
00118EC8 a41a40fa ccmp     x21, #0, #4, ne
00118ECC a1ffff54 b.ne     #0x118ec0
00118ED0 88be42f9 ldr      x8, [x20, #0x578]
00118ED4 e1031f2a mov      w1, wzr
00118ED8 005940f9 ldr      x0, [x8, #0xb0]
00118EDC a88300d1 sub      x8, x29, #0x20
00118EE0 fcf1fb97 bl       #0x156d0
00118EE4 a0035ef8 ldur     x0, [x29, #-0x20]
00118EE8 143040f9 ldr      x20, [x0, #0x60]
00118EEC f40000b4 cbz      x20, #0x118f08
00118EF0 e00314aa mov      x0, x20
00118EF4 088c44f8 ldr      x8, [x0, #0x48]!
00118EF8 080940f9 ldr      x8, [x8, #0x10]
00118EFC 00013fd6 blr      x8
00118F00 a0035ef8 ldur     x0, [x29, #-0x20]
00118F04 800000b4 cbz      x0, #0x118f14
00118F08 088c44f8 ldr      x8, [x0, #0x48]!
00118F0C 080d40f9 ldr      x8, [x8, #0x18]
00118F10 00013fd6 blr      x8
00118F14 624240f9 ldr      x2, [x19, #0x80]
00118F18 e86592d2 mov      x8, #0x932f
00118F1C 68e3b2f2 movk     x8, #0x971b, lsl #16
00118F20 884dd1f2 movk     x8, #0x8a6c, lsl #32
00118F24 c83afff2 movk     x8, #0xf9d6, lsl #48
00118F28 a8031ef8 stur     x8, [x29, #-0x20]
00118F2C a18300d1 sub      x1, x29, #0x20
00118F30 e00314aa mov      x0, x20
00118F34 99670f94 bl       #0x4f2d98
00118F38 683240f9 ldr      x8, [x19, #0x60]
00118F3C 153140f9 ldr      x21, [x8, #0x60]
00118F40 a80240f9 ldr      x8, [x21]
00118F44 e00315aa mov      x0, x21
00118F48 080140f9 ldr      x8, [x8]
00118F4C 00013fd6 blr      x8
00118F50 f60300aa mov      x22, x0
00118F54 8234fc97 bl       #0x2615c
00118F58 1f0016eb cmp      x0, x22
00118F5C a0000054 b.eq     #0x118f70
00118F60 d60240f9 ldr      x22, [x22]
00118F64 df0200eb cmp      x22, x0
00118F68 c41a40fa ccmp     x22, #0, #4, ne
00118F6C a1ffff54 b.ne     #0x118f60
00118F70 a0be42f9 ldr      x0, [x21, #0x578]
00118F74 c8cd99d2 mov      x8, #0xce6e
00118F78 e8b5bdf2 movk     x8, #0xedaf, lsl #16
00118F7C 28facdf2 movk     x8, #0x6fd1, lsl #32
00118F80 68eee1f2 movk     x8, #0xf73, lsl #48
00118F84 292800d0 adrp     x9, #0x61e000
00118F88 297d0e91 add      x9, x9, #0x39f
00118F8C a8273ea9 stp      x8, x9, [x29, #-0x20]
00118F90 28028052 mov      w8, #0x11
00118F94 a18300d1 sub      x1, x29, #0x20
00118F98 a87f3fa9 stp      x8, xzr, [x29, #-0x10]
00118F9C 79a8fd97 bl       #0x83180
00118FA0 f50300aa mov      x21, x0
00118FA4 a0835ff8 ldur     x0, [x29, #-8]
00118FA8 800000b4 cbz      x0, #0x118fb8
00118FAC 088c44f8 ldr      x8, [x0, #0x48]!
00118FB0 080d40f9 ldr      x8, [x8, #0x18]
00118FB4 00013fd6 blr      x8
00118FB8 753e00f9 str      x21, [x19, #0x78]
00118FBC 684240f9 ldr      x8, [x19, #0x80]
00118FC0 21008052 mov      w1, #1
00118FC4 a02243f9 ldr      x0, [x21, #0x640]
00118FC8 bf431f38 sturb    wzr, [x29, #-0xc]
00118FCC a87f3ea9 stp      x8, xzr, [x29, #-0x20]
00118FD0 08208052 mov      w8, #0x100
00118FD4 2820a072 movk     w8, #0x101, lsl #16
00118FD8 a8031fb8 stur     w8, [x29, #-0x10]
00118FDC 080c46f8 ldr      x8, [x0, #0x60]!
00118FE0 080540f9 ldr      x8, [x8, #8]
00118FE4 00013fd6 blr      x8
00118FE8 603e40f9 ldr      x0, [x19, #0x78]
00118FEC a18300d1 sub      x1, x29, #0x20
00118FF0 6c63fc97 bl       #0x31da0
00118FF4 683240f9 ldr      x8, [x19, #0x60]
00118FF8 153140f9 ldr      x21, [x8, #0x60]
00118FFC a80240f9 ldr      x8, [x21]
00119000 e00315aa mov      x0, x21
00119004 080140f9 ldr      x8, [x8]
00119008 00013fd6 blr      x8
0011900C f60300aa mov      x22, x0
00119010 5334fc97 bl       #0x2615c
00119014 1f0016eb cmp      x0, x22
00119018 c0000054 b.eq     #0x119030
0011901C 1f2003d5 nop      
00119020 d60240f9 ldr      x22, [x22]
00119024 df0200eb cmp      x22, x0
00119028 c41a40fa ccmp     x22, #0, #4, ne
0011902C a1ffff54 b.ne     #0x119020
00119030 a8fa44f9 ldr      x8, [x21, #0x9f0]
00119034 684600f9 str      x8, [x19, #0x88]
00119038 a2220494 bl       #0x221ac0
0011903C 085f8552 mov      w8, #0x2af8
00119040 1f682838 strb     wzr, [x0, x8]
00119044 c8320090 adrp     x8, #0x771000
00119048 08a10191 add      x8, x8, #0x68
0011904C 092140a9 ldp      x9, x8, [x8]
00119050 e92302a9 stp      x9, x8, [sp, #0x20]
00119054 83cc1094 bl       #0x54c260
00119058 48d03bd5 mrs      x8, tpidr_el0
0011905C 18c97392 and      x24, x8, #0xffffffffffffe000
00119060 084f40f9 ldr      x8, [x24, #0x98]
00119064 1f4100f1 cmp      x8, #0x10
00119068 200f0054 b.eq     #0x11924c
0011906C 080f088b add      x8, x24, x8, lsl #3
00119070 01688052 mov      w1, #0x340
00119074 02028052 mov      w2, #0x10
00119078 f60300aa mov      x22, x0
0011907C 000d00f9 str      x0, [x8, #0x18]
00119080 084f40f9 ldr      x8, [x24, #0x98]
00119084 08050091 add      x8, x8, #1
00119088 084f00f9 str      x8, [x24, #0x98]
0011908C 080040f9 ldr      x8, [x0]
00119090 080940f9 ldr      x8, [x8, #0x10]
00119094 00013fd6 blr      x8
00119098 f70300aa mov      x23, x0
0011909C a00000b5 cbnz     x0, #0x1190b0
001190A0 c80240f9 ldr      x8, [x22]
001190A4 e00316aa mov      x0, x22
001190A8 085d40f9 ldr      x8, [x8, #0xb8]
001190AC 00013fd6 blr      x8
001190B0 e00317aa mov      x0, x23
001190B4 e10316aa mov      x1, x22
001190B8 e2031faa mov      x2, xzr
001190BC 27d21094 bl       #0x54d958
001190C0 48340090 adrp     x8, #0x7a1000
001190C4 f50317aa mov      x21, x23
001190C8 08dd43f9 ldr      x8, [x8, #0x7b8]
001190CC ff7e12a9 stp      xzr, xzr, [x23, #0x120]
001190D0 09c10191 add      x9, x8, #0x70
001190D4 ff7e13a9 stp      xzr, xzr, [x23, #0x130]
001190D8 ff1201f9 str      xzr, [x23, #0x220]
001190DC ff7e1aa9 stp      xzr, xzr, [x23, #0x1a0]
001190E0 ff1601f9 str      xzr, [x23, #0x228]
001190E4 ff1a01f9 str      xzr, [x23, #0x230]
001190E8 ff1e01f9 str      xzr, [x23, #0x238]
001190EC ff5201f9 str      xzr, [x23, #0x2a0]
001190F0 ff5601f9 str      xzr, [x23, #0x2a8]
001190F4 ff5a01f9 str      xzr, [x23, #0x2b0]
001190F8 ff5e01f9 str      xzr, [x23, #0x2b8]
001190FC a98e04f8 str      x9, [x21, #0x48]!
00119100 09c10291 add      x9, x8, #0xb0
00119104 08410091 add      x8, x8, #0x10
00119108 e00315aa mov      x0, x21
0011910C e92a00f9 str      x9, [x23, #0x50]
00119110 09028052 mov      w9, #0x10
00119114 ff820c39 strb     wzr, [x23, #0x320]
00119118 ffa20c39 strb     wzr, [x23, #0x328]
0011911C ffc20c39 strb     wzr, [x23, #0x330]
00119120 e91200f9 str      x9, [x23, #0x20]
00119124 e85a00a9 stp      x8, x22, [x23]
00119128 08688052 mov      w8, #0x340
0011912C ff7e1ba9 stp      xzr, xzr, [x23, #0x1b0]
00119130 f72201a9 stp      x23, x8, [x23, #0x10]
00119134 084f40f9 ldr      x8, [x24, #0x98]
00119138 080500d1 sub      x8, x8, #1
0011913C 084f00f9 str      x8, [x24, #0x98]
00119140 a80240f9 ldr      x8, [x21]
00119144 080940f9 ldr      x8, [x8, #0x10]
00119148 00013fd6 blr      x8
0011914C e8030091 mov      x8, sp
00119150 e00317aa mov      x0, x23
00119154 3f000094 bl       #0x119250
00119158 e00340f9 ldr      x0, [sp]
0011915C e8230091 add      x8, sp, #8
00119160 e1830091 add      x1, sp, #0x20
00119164 ab000094 bl       #0x119410
00119168 e00740f9 ldr      x0, [sp, #8]
0011916C e8430091 add      x8, sp, #0x10
00119170 1a010094 bl       #0x1195d8
00119174 e00b40f9 ldr      x0, [sp, #0x10]
00119178 e8630091 add      x8, sp, #0x18
0011917C 87010094 bl       #0x119798
00119180 f60f40f9 ldr      x22, [sp, #0x18]
00119184 e00316aa mov      x0, x22
00119188 82d21094 bl       #0x54db90
0011918C e00316aa mov      x0, x22
00119190 088c44f8 ldr      x8, [x0, #0x48]!
00119194 080940f9 ldr      x8, [x8, #0x10]
00119198 00013fd6 blr      x8
0011919C 604a40f9 ldr      x0, [x19, #0x90]
001191A0 800000b4 cbz      x0, #0x1191b0
001191A4 088c44f8 ldr      x8, [x0, #0x48]!
001191A8 080d40f9 ldr      x8, [x8, #0x18]
001191AC 00013fd6 blr      x8
001191B0 e00f40f9 ldr      x0, [sp, #0x18]
001191B4 764a00f9 str      x22, [x19, #0x90]
001191B8 a00000b4 cbz      x0, #0x1191cc
001191BC 088c44f8 ldr      x8, [x0, #0x48]!
001191C0 080d40f9 ldr      x8, [x8, #0x18]
001191C4 00013fd6 blr      x8
001191C8 ff0f00f9 str      xzr, [sp, #0x18]
001191CC e00b40f9 ldr      x0, [sp, #0x10]
001191D0 a00000b4 cbz      x0, #0x1191e4
001191D4 088c44f8 ldr      x8, [x0, #0x48]!
001191D8 080d40f9 ldr      x8, [x8, #0x18]
001191DC 00013fd6 blr      x8
001191E0 ff0b00f9 str      xzr, [sp, #0x10]
001191E4 e00740f9 ldr      x0, [sp, #8]
001191E8 a00000b4 cbz      x0, #0x1191fc
001191EC 088c44f8 ldr      x8, [x0, #0x48]!
001191F0 080d40f9 ldr      x8, [x8, #0x18]
001191F4 00013fd6 blr      x8
001191F8 ff0700f9 str      xzr, [sp, #8]
001191FC e00340f9 ldr      x0, [sp]
00119200 a00000b4 cbz      x0, #0x119214
00119204 088c44f8 ldr      x8, [x0, #0x48]!
00119208 080d40f9 ldr      x8, [x8, #0x18]
0011920C 00013fd6 blr      x8
00119210 ff0300f9 str      xzr, [sp]
00119214 a80240f9 ldr      x8, [x21]
00119218 e00315aa mov      x0, x21
0011921C 080d40f9 ldr      x8, [x8, #0x18]
00119220 00013fd6 blr      x8
00119224 888e44f8 ldr      x8, [x20, #0x48]!
00119228 e00314aa mov      x0, x20
0011922C 080d40f9 ldr      x8, [x8, #0x18]
00119230 00013fd6 blr      x8
00119234 f44f48a9 ldp      x20, x19, [sp, #0x80]
00119238 f65747a9 ldp      x22, x21, [sp, #0x70]
0011923C f85f46a9 ldp      x24, x23, [sp, #0x60]
00119240 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00119244 ff430291 add      sp, sp, #0x90
00119248 c0035fd6 ret      
0011924C 71a6fb97 bl       #0x2c10
~~~
### 0x119960 (340 slots)
~~~asm
00119960 fd7bbca9 stp      x29, x30, [sp, #-0x40]!
00119964 fc0b00f9 str      x28, [sp, #0x10]
00119968 fd030091 mov      x29, sp
0011996C f65702a9 stp      x22, x21, [sp, #0x20]
00119970 f44f03a9 stp      x20, x19, [sp, #0x30]
00119974 ff4327d1 sub      sp, sp, #0x9d0
00119978 f30300aa mov      x19, x0
0011997C 004840f9 ldr      x0, [x0, #0x90]
00119980 600000b4 cbz      x0, #0x11998c
00119984 7bd01094 bl       #0x54db70
00119988 c0080036 tbz      w0, #0, #0x119aa0
0011998C 48360090 adrp     x8, #0x7e1000
00119990 08811691 add      x8, x8, #0x5a0
00119994 150140f9 ldr      x21, [x8]
00119998 b44240f9 ldr      x20, [x21, #0x80]
0011999C b40000b4 cbz      x20, #0x1199b0
001199A0 e00314aa mov      x0, x20
001199A4 088c44f8 ldr      x8, [x0, #0x48]!
001199A8 080940f9 ldr      x8, [x8, #0x10]
001199AC 00013fd6 blr      x8
001199B0 88864b39 ldrb     w8, [x20, #0x2e1]
001199B4 68040034 cbz      w8, #0x119a40
001199B8 b54240f9 ldr      x21, [x21, #0x80]
001199BC 350600b4 cbz      x21, #0x119a80
001199C0 f60315aa mov      x22, x21
001199C4 c88e44f8 ldr      x8, [x22, #0x48]!
001199C8 e00316aa mov      x0, x22
001199CC 080940f9 ldr      x8, [x8, #0x10]
001199D0 00013fd6 blr      x8
001199D4 e00315aa mov      x0, x21
001199D8 18e5fb97 bl       #0x12e38
001199DC c80240f9 ldr      x8, [x22]
001199E0 f503002a mov      w21, w0
001199E4 e00316aa mov      x0, x22
001199E8 080d40f9 ldr      x8, [x8, #0x18]
001199EC 00013fd6 blr      x8
001199F0 888e44f8 ldr      x8, [x20, #0x48]!
001199F4 e00314aa mov      x0, x20
001199F8 080d40f9 ldr      x8, [x8, #0x18]
001199FC 00013fd6 blr      x8
00119A00 15050036 tbz      w21, #0, #0x119aa0
00119A04 e0031f2a mov      w0, wzr
00119A08 3e731394 bl       #0x5f6700
00119A0C 684640f9 ldr      x8, [x19, #0x88]
00119A10 1f0500b9 str      wzr, [x8, #4]
00119A14 8b660494 bl       #0x233440
00119A18 80020036 tbz      w0, #0, #0x119a68
00119A1C 684640f9 ldr      x8, [x19, #0x88]
00119A20 20008052 mov      w0, #1
00119A24 000500b9 str      w0, [x8, #4]
00119A28 ff432791 add      sp, sp, #0x9d0
00119A2C f44f43a9 ldp      x20, x19, [sp, #0x30]
00119A30 fc0b40f9 ldr      x28, [sp, #0x10]
00119A34 f65742a9 ldp      x22, x21, [sp, #0x20]
00119A38 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00119A3C c0035fd6 ret      
00119A40 888e44f8 ldr      x8, [x20, #0x48]!
00119A44 e00314aa mov      x0, x20
00119A48 080d40f9 ldr      x8, [x8, #0x18]
00119A4C 00013fd6 blr      x8
00119A50 e0031f2a mov      w0, wzr
00119A54 2b731394 bl       #0x5f6700
00119A58 684640f9 ldr      x8, [x19, #0x88]
00119A5C 1f0500b9 str      wzr, [x8, #4]
00119A60 78660494 bl       #0x233440
00119A64 c0fd0737 tbnz     w0, #0, #0x119a1c
00119A68 8a660494 bl       #0x233490
00119A6C 80020036 tbz      w0, #0, #0x119abc
00119A70 684640f9 ldr      x8, [x19, #0x88]
00119A74 49008052 mov      w9, #2
00119A78 090500b9 str      w9, [x8, #4]
00119A7C f0000014 b        #0x119e3c
00119A80 e0031faa mov      x0, xzr
00119A84 ede4fb97 bl       #0x12e38
00119A88 888e44f8 ldr      x8, [x20, #0x48]!
00119A8C f503002a mov      w21, w0
00119A90 e00314aa mov      x0, x20
00119A94 080d40f9 ldr      x8, [x8, #0x18]
00119A98 00013fd6 blr      x8
00119A9C 55fb0737 tbnz     w21, #0, #0x119a04
00119AA0 e0031f2a mov      w0, wzr
00119AA4 ff432791 add      sp, sp, #0x9d0
00119AA8 f44f43a9 ldp      x20, x19, [sp, #0x30]
00119AAC fc0b40f9 ldr      x28, [sp, #0x10]
00119AB0 f65742a9 ldp      x22, x21, [sp, #0x20]
00119AB4 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00119AB8 c0035fd6 ret      
00119ABC 81660494 bl       #0x2334c0
00119AC0 a0000036 tbz      w0, #0, #0x119ad4
00119AC4 684640f9 ldr      x8, [x19, #0x88]
00119AC8 69008052 mov      w9, #3
00119ACC 090500b9 str      w9, [x8, #4]
00119AD0 db000014 b        #0x119e3c
00119AD4 87660494 bl       #0x2334f0
00119AD8 a0000036 tbz      w0, #0, #0x119aec
00119ADC 684640f9 ldr      x8, [x19, #0x88]
00119AE0 89008052 mov      w9, #4
00119AE4 090500b9 str      w9, [x8, #4]
00119AE8 d5000014 b        #0x119e3c
00119AEC 8d660494 bl       #0x233520
00119AF0 a0000036 tbz      w0, #0, #0x119b04
00119AF4 684640f9 ldr      x8, [x19, #0x88]
00119AF8 49018052 mov      w9, #0xa
00119AFC 090500b9 str      w9, [x8, #4]
00119B00 cf000014 b        #0x119e3c
00119B04 ef1f0494 bl       #0x221ac0
00119B08 08998652 mov      w8, #0x34c8
00119B0C 2801a072 movk     w8, #9, lsl #16
00119B10 086868b8 ldr      w8, [x0, x8]
00119B14 28010034 cbz      w8, #0x119b38
00119B18 684640f9 ldr      x8, [x19, #0x88]
00119B1C 34008052 mov      w20, #1
00119B20 140100b9 str      w20, [x8]
00119B24 e71f0494 bl       #0x221ac0
00119B28 88938652 mov      w8, #0x349c
00119B2C 2801a072 movk     w8, #9, lsl #16
00119B30 14682838 strb     w20, [x0, x8]
00119B34 0e000014 b        #0x119b6c
00119B38 e21f0494 bl       #0x221ac0
00119B3C 085f8552 mov      w8, #0x2af8
00119B40 08686838 ldrb     w8, [x0, x8]
00119B44 e8000034 cbz      w8, #0x119b60
00119B48 e0031faa mov      x0, xzr
00119B4C b1250494 bl       #0x223210
00119B50 40180036 tbz      w0, #0, #0x119e58
00119B54 684640f9 ldr      x8, [x19, #0x88]
00119B58 49008052 mov      w9, #2
00119B5C 03000014 b        #0x119b68
00119B60 684640f9 ldr      x8, [x19, #0x88]
00119B64 a9008052 mov      w9, #5
00119B68 090100b9 str      w9, [x8]
00119B6C d51f0494 bl       #0x221ac0
00119B70 089b8652 mov      w8, #0x34d8
00119B74 2801a072 movk     w8, #9, lsl #16
00119B78 086868b8 ldr      w8, [x0, x8]
00119B7C 1f150071 cmp      w8, #5
00119B80 e1150054 b.ne     #0x119e3c
00119B84 b42c9152 mov      w20, #0x8965
00119B88 f480ad72 movk     w20, #0x6c07, lsl #16
00119B8C 99ce0394 bl       #0x20d5f0
00119B90 a8438252 mov      w8, #0x121d
00119B94 0800088b add      x8, x0, x8
00119B98 1f6100b9 str      wzr, [x8, #0x60]
00119B9C 1f7d00a9 stp      xzr, xzr, [x8]
00119BA0 1f7d01a9 stp      xzr, xzr, [x8, #0x10]
00119BA4 1f7d02a9 stp      xzr, xzr, [x8, #0x20]
00119BA8 1f7d03a9 stp      xzr, xzr, [x8, #0x30]
00119BAC 1f7d04a9 stp      xzr, xzr, [x8, #0x40]
00119BB0 1f7d05a9 stp      xzr, xzr, [x8, #0x50]
00119BB4 c31f0494 bl       #0x221ac0
00119BB8 027d8052 mov      w2, #0x3e8
00119BBC e1031f2a mov      w1, wzr
00119BC0 64711394 bl       #0x5f6150
00119BC4 8bce0394 bl       #0x20d5f0
00119BC8 28548252 mov      w8, #0x12a1
00119BCC 81008052 mov      w1, #4
00119BD0 0800088b add      x8, x0, x8
00119BD4 a0630091 add      x0, x29, #0x18
00119BD8 1f7d00a9 stp      xzr, xzr, [x8]
00119BDC 1f410039 strb     wzr, [x8, #0x10]
00119BE0 e0711394 bl       #0x5f6360
00119BE4 ab1b40b9 ldr      w11, [x29, #0x18]
00119BE8 e8230091 add      x8, sp, #8
00119BEC a94d8092 mov      x9, #-0x26e
00119BF0 08210091 add      x8, x8, #8
00119BF4 2a008052 mov      w10, #1
00119BF8 eb0b00b9 str      w11, [sp, #8]
00119BFC 6b794b4a eor      w11, w11, w11, lsr #30
00119C00 6b7d141b mul      w11, w11, w20
00119C04 2b010b8b add      x11, x9, x11
00119C08 6bbd0991 add      x11, x11, #0x26f
00119C0C 0bc11fb8 stur     w11, [x8, #-4]
00119C10 090200b4 cbz      x9, #0x119c50
00119C14 6b794b4a eor      w11, w11, w11, lsr #30
00119C18 4c050091 add      x12, x10, #1
00119C1C 4a090091 add      x10, x10, #2
00119C20 6b7d141b mul      w11, w11, w20
00119C24 2d010b0b add      w13, w9, w11
00119C28 6b010c0b add      w11, w11, w12
00119C2C 29090091 add      x9, x9, #2
00119C30 adc10911 add      w13, w13, #0x270
00119C34 0d8500b8 str      w13, [x8], #8
00119C38 6b794b4a eor      w11, w11, w11, lsr #30
00119C3C 6b7d141b mul      w11, w11, w20
00119C40 2b010b8b add      x11, x9, x11
00119C44 6bbd0991 add      x11, x11, #0x26f
00119C48 0bc11fb8 stur     w11, [x8, #-4]
00119C4C 49feffb5 cbnz     x9, #0x119c14
00119C50 a807c0d2 mov      x8, #0x3d00000000
00119C54 ffe704f9 str      xzr, [sp, #0x9c8]
00119C58 a80f00f9 str      x8, [x29, #0x18]
00119C5C 65ce0394 bl       #0x20d5f0
00119C60 28548252 mov      w8, #0x12a1
00119C64 690e8052 mov      w9, #0x73
00119C68 09682838 strb     w9, [x0, x8]
00119C6C 61ce0394 bl       #0x20d5f0
00119C70 48548252 mov      w8, #0x12a2
00119C74 e90e8052 mov      w9, #0x77
00119C78 09682838 strb     w9, [x0, x8]
00119C7C 5dce0394 bl       #0x20d5f0
00119C80 68548252 mov      w8, #0x12a3
00119C84 890e8052 mov      w9, #0x74
00119C88 09682838 strb     w9, [x0, x8]
00119C8C 59ce0394 bl       #0x20d5f0
00119C90 88548252 mov      w8, #0x12a4
00119C94 690c8052 mov      w9, #0x63
00119C98 e1230091 add      x1, sp, #8
00119C9C 09682838 strb     w9, [x0, x8]
00119CA0 a0630091 add      x0, x29, #0x18
00119CA4 a2630091 add      x2, x29, #0x18
00119CA8 0ae7fb97 bl       #0x138d0
00119CAC d42700b0 adrp     x20, #0x612000
00119CB0 946e1691 add      x20, x20, #0x59b
00119CB4 954a6038 ldrb     w21, [x20, w0, uxtw]
00119CB8 4ece0394 bl       #0x20d5f0
00119CBC a8548252 mov      w8, #0x12a5
00119CC0 e1230091 add      x1, sp, #8
00119CC4 a2630091 add      x2, x29, #0x18
00119CC8 15682838 strb     w21, [x0, x8]
00119CCC a0630091 add      x0, x29, #0x18
00119CD0 00e7fb97 bl       #0x138d0
00119CD4 954a6038 ldrb     w21, [x20, w0, uxtw]
00119CD8 46ce0394 bl       #0x20d5f0
00119CDC c8548252 mov      w8, #0x12a6
00119CE0 e1230091 add      x1, sp, #8
00119CE4 a2630091 add      x2, x29, #0x18
00119CE8 15682838 strb     w21, [x0, x8]
00119CEC a0630091 add      x0, x29, #0x18
00119CF0 f8e6fb97 bl       #0x138d0
00119CF4 954a6038 ldrb     w21, [x20, w0, uxtw]
00119CF8 3ece0394 bl       #0x20d5f0
00119CFC e8548252 mov      w8, #0x12a7
00119D00 e1230091 add      x1, sp, #8
00119D04 a2630091 add      x2, x29, #0x18
00119D08 15682838 strb     w21, [x0, x8]
00119D0C a0630091 add      x0, x29, #0x18
00119D10 f0e6fb97 bl       #0x138d0
00119D14 954a6038 ldrb     w21, [x20, w0, uxtw]
00119D18 36ce0394 bl       #0x20d5f0
00119D1C 08558252 mov      w8, #0x12a8
00119D20 e1230091 add      x1, sp, #8
00119D24 a2630091 add      x2, x29, #0x18
00119D28 15682838 strb     w21, [x0, x8]
00119D2C a0630091 add      x0, x29, #0x18
00119D30 e8e6fb97 bl       #0x138d0
00119D34 954a6038 ldrb     w21, [x20, w0, uxtw]
00119D38 2ece0394 bl       #0x20d5f0
00119D3C 28558252 mov      w8, #0x12a9
00119D40 e1230091 add      x1, sp, #8
00119D44 a2630091 add      x2, x29, #0x18
00119D48 15682838 strb     w21, [x0, x8]
00119D4C a0630091 add      x0, x29, #0x18
00119D50 e0e6fb97 bl       #0x138d0
00119D54 954a6038 ldrb     w21, [x20, w0, uxtw]
00119D58 26ce0394 bl       #0x20d5f0
00119D5C 48558252 mov      w8, #0x12aa
00119D60 e1230091 add      x1, sp, #8
00119D64 a2630091 add      x2, x29, #0x18
00119D68 15682838 strb     w21, [x0, x8]
00119D6C a0630091 add      x0, x29, #0x18
00119D70 d8e6fb97 bl       #0x138d0
00119D74 954a6038 ldrb     w21, [x20, w0, uxtw]
00119D78 1ece0394 bl       #0x20d5f0
00119D7C 68558252 mov      w8, #0x12ab
00119D80 e1230091 add      x1, sp, #8
00119D84 a2630091 add      x2, x29, #0x18
00119D88 15682838 strb     w21, [x0, x8]
00119D8C a0630091 add      x0, x29, #0x18
00119D90 d0e6fb97 bl       #0x138d0
00119D94 954a6038 ldrb     w21, [x20, w0, uxtw]
00119D98 16ce0394 bl       #0x20d5f0
00119D9C 88558252 mov      w8, #0x12ac
00119DA0 e1230091 add      x1, sp, #8
00119DA4 a2630091 add      x2, x29, #0x18
00119DA8 15682838 strb     w21, [x0, x8]
00119DAC a0630091 add      x0, x29, #0x18
00119DB0 c8e6fb97 bl       #0x138d0
00119DB4 954a6038 ldrb     w21, [x20, w0, uxtw]
00119DB8 0ece0394 bl       #0x20d5f0
00119DBC a8558252 mov      w8, #0x12ad
00119DC0 e1230091 add      x1, sp, #8
00119DC4 a2630091 add      x2, x29, #0x18
00119DC8 15682838 strb     w21, [x0, x8]
00119DCC a0630091 add      x0, x29, #0x18
00119DD0 c0e6fb97 bl       #0x138d0
00119DD4 954a6038 ldrb     w21, [x20, w0, uxtw]
00119DD8 06ce0394 bl       #0x20d5f0
00119DDC c8558252 mov      w8, #0x12ae
00119DE0 e1230091 add      x1, sp, #8
00119DE4 a2630091 add      x2, x29, #0x18
00119DE8 15682838 strb     w21, [x0, x8]
00119DEC a0630091 add      x0, x29, #0x18
00119DF0 b8e6fb97 bl       #0x138d0
00119DF4 954a6038 ldrb     w21, [x20, w0, uxtw]
00119DF8 fecd0394 bl       #0x20d5f0
00119DFC e8558252 mov      w8, #0x12af
00119E00 e1230091 add      x1, sp, #8
00119E04 a2630091 add      x2, x29, #0x18
00119E08 15682838 strb     w21, [x0, x8]
00119E0C a0630091 add      x0, x29, #0x18
00119E10 b0e6fb97 bl       #0x138d0
00119E14 944a6038 ldrb     w20, [x20, w0, uxtw]
00119E18 f6cd0394 bl       #0x20d5f0
00119E1C 08568252 mov      w8, #0x12b0
00119E20 14682838 strb     w20, [x0, x8]
00119E24 f3cd0394 bl       #0x20d5f0
00119E28 28568252 mov      w8, #0x12b1
00119E2C 89008052 mov      w9, #4
00119E30 1f682838 strb     wzr, [x0, x8]
00119E34 684640f9 ldr      x8, [x19, #0x88]
00119E38 090100b9 str      w9, [x8]
00119E3C 20008052 mov      w0, #1
00119E40 ff432791 add      sp, sp, #0x9d0
00119E44 f44f43a9 ldp      x20, x19, [sp, #0x30]
00119E48 fc0b40f9 ldr      x28, [sp, #0x10]
00119E4C f65742a9 ldp      x22, x21, [sp, #0x20]
00119E50 fd7bc4a8 ldp      x29, x30, [sp], #0x40
00119E54 c0035fd6 ret      
00119E58 1a1f0494 bl       #0x221ac0
00119E5C 88f99352 mov      w8, #0x9fcc
00119E60 e800a072 movk     w8, #7, lsl #16
00119E64 086868b8 ldr      w8, [x0, x8]
00119E68 1f690171 cmp      w8, #0x5a
00119E6C a1000054 b.ne     #0x119e80
00119E70 684640f9 ldr      x8, [x19, #0x88]
00119E74 09018052 mov      w9, #8
00119E78 090500b9 str      w9, [x8, #4]
00119E7C 3cffff17 b        #0x119b6c
00119E80 101f0494 bl       #0x221ac0
00119E84 88f99352 mov      w8, #0x9fcc
00119E88 e800a072 movk     w8, #7, lsl #16
00119E8C 096868b8 ldr      w9, [x0, x8]
00119E90 684640f9 ldr      x8, [x19, #0x88]
00119E94 3f8d0171 cmp      w9, #0x63
00119E98 81000054 b.ne     #0x119ea8
00119E9C 29018052 mov      w9, #9
00119EA0 090500b9 str      w9, [x8, #4]
00119EA4 32ffff17 b        #0x119b6c
00119EA8 69008052 mov      w9, #3
00119EAC 2fffff17 b        #0x119b68
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
### 0x11a214 (50 slots)
~~~asm
0011A214 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0011A218 f30b00f9 str      x19, [sp, #0x10]
0011A21C fd030091 mov      x29, sp
0011A220 08c04c39 ldrb     w8, [x0, #0x330]
0011A224 f30300aa mov      x19, x0
0011A228 1f010071 cmp      w8, #0
0011A22C 097c40f9 ldr      x9, [x0, #0xf8]
0011A230 241940fa ccmp     x9, #0, #4, ne
0011A234 e0000054 b.eq     #0x11a250
0011A238 687a40f9 ldr      x8, [x19, #0xf0]
0011A23C 000140f9 ldr      x0, [x8]
0011A240 800000b4 cbz      x0, #0x11a250
0011A244 080040f9 ldr      x8, [x0]
0011A248 082140f9 ldr      x8, [x8, #0x40]
0011A24C 00013fd6 blr      x8
0011A250 68a24c39 ldrb     w8, [x19, #0x328]
0011A254 48000034 cbz      w8, #0x11a25c
0011A258 7fa20c39 strb     wzr, [x19, #0x328]
0011A25C 685641f9 ldr      x8, [x19, #0x2a8]
0011A260 e80000b4 cbz      x8, #0x11a27c
0011A264 60020b91 add      x0, x19, #0x2c0
0011A268 7f5e01f9 str      xzr, [x19, #0x2b8]
0011A26C 7f5a01f9 str      xzr, [x19, #0x2b0]
0011A270 7f5601f9 str      xzr, [x19, #0x2a8]
0011A274 7f5201f9 str      xzr, [x19, #0x2a0]
0011A278 00013fd6 blr      x8
0011A27C 681641f9 ldr      x8, [x19, #0x228]
0011A280 e80000b4 cbz      x8, #0x11a29c
0011A284 60020991 add      x0, x19, #0x240
0011A288 7f1e01f9 str      xzr, [x19, #0x238]
0011A28C 7f1a01f9 str      xzr, [x19, #0x230]
0011A290 7f1601f9 str      xzr, [x19, #0x228]
0011A294 7f1201f9 str      xzr, [x19, #0x220]
0011A298 00013fd6 blr      x8
0011A29C 68d640f9 ldr      x8, [x19, #0x1a8]
0011A2A0 a80000b4 cbz      x8, #0x11a2b4
0011A2A4 60020791 add      x0, x19, #0x1c0
0011A2A8 7f7e1ba9 stp      xzr, xzr, [x19, #0x1b0]
0011A2AC 7f7e1aa9 stp      xzr, xzr, [x19, #0x1a0]
0011A2B0 00013fd6 blr      x8
0011A2B4 689640f9 ldr      x8, [x19, #0x128]
0011A2B8 a80000b4 cbz      x8, #0x11a2cc
0011A2BC 60020591 add      x0, x19, #0x140
0011A2C0 7f7e13a9 stp      xzr, xzr, [x19, #0x130]
0011A2C4 7f7e12a9 stp      xzr, xzr, [x19, #0x120]
0011A2C8 00013fd6 blr      x8
0011A2CC e00313aa mov      x0, x19
0011A2D0 f30b40f9 ldr      x19, [sp, #0x10]
0011A2D4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0011A2D8 3e010014 b        #0x11a7d0
~~~
### 0x11a2e0 (78 slots)
~~~asm
0011A2E0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0011A2E4 f65701a9 stp      x22, x21, [sp, #0x10]
0011A2E8 f44f02a9 stp      x20, x19, [sp, #0x20]
0011A2EC fd030091 mov      x29, sp
0011A2F0 087c40f9 ldr      x8, [x0, #0xf8]
0011A2F4 a80800b4 cbz      x8, #0x11a408
0011A2F8 147840f9 ldr      x20, [x0, #0xf0]
0011A2FC f30300aa mov      x19, x0
0011A300 1f0500f1 cmp      x8, #1
0011A304 950e088b add      x21, x20, x8, lsl #3
0011A308 c1030054 b.ne     #0x11a380
0011A30C a0825ff8 ldur     x0, [x21, #-8]
0011A310 a00000b4 cbz      x0, #0x11a324
0011A314 088c44f8 ldr      x8, [x0, #0x48]!
0011A318 080d40f9 ldr      x8, [x8, #0x18]
0011A31C 00013fd6 blr      x8
0011A320 bf821ff8 stur     xzr, [x21, #-8]
0011A324 69224fa9 ldp      x9, x8, [x19, #0xf0]
0011A328 080500d1 sub      x8, x8, #1
0011A32C 687e00f9 str      x8, [x19, #0xf8]
0011A330 280d088b add      x8, x9, x8, lsl #3
0011A334 9f0208eb cmp      x20, x8
0011A338 80040054 b.eq     #0x11a3c8
0011A33C 800240f9 ldr      x0, [x20]
0011A340 400600b4 cbz      x0, #0x11a408
0011A344 080040f9 ldr      x8, [x0]
0011A348 081d40f9 ldr      x8, [x8, #0x38]
0011A34C 00013fd6 blr      x8
0011A350 c00500b5 cbnz     x0, #0x11a408
0011A354 e00313aa mov      x0, x19
0011A358 7ace1094 bl       #0x54dd40
0011A35C e00313aa mov      x0, x19
0011A360 81008052 mov      w1, #4
0011A364 09ce1094 bl       #0x54db88
0011A368 681241f9 ldr      x8, [x19, #0x220]
0011A36C 080400b4 cbz      x8, #0x11a3ec
0011A370 61820c91 add      x1, x19, #0x320
0011A374 60020991 add      x0, x19, #0x240
0011A378 00013fd6 blr      x8
0011A37C 1c000014 b        #0x11a3ec
0011A380 f60314aa mov      x22, x20
0011A384 0b000014 b        #0x11a3b0
0011A388 1f2003d5 nop      
0011A38C 1f2003d5 nop      
0011A390 e80316aa mov      x8, x22
0011A394 098d40f8 ldr      x9, [x8, #8]!
0011A398 1f0100f9 str      xzr, [x8]
0011A39C c90200f9 str      x9, [x22]
0011A3A0 c9420091 add      x9, x22, #0x10
0011A3A4 f60308aa mov      x22, x8
0011A3A8 3f0115eb cmp      x9, x21
0011A3AC 00fbff54 b.eq     #0x11a30c
0011A3B0 c00240f9 ldr      x0, [x22]
0011A3B4 e0feffb4 cbz      x0, #0x11a390
0011A3B8 088c44f8 ldr      x8, [x0, #0x48]!
0011A3BC 080d40f9 ldr      x8, [x8, #0x18]
0011A3C0 00013fd6 blr      x8
0011A3C4 f3ffff17 b        #0x11a390
0011A3C8 e00313aa mov      x0, x19
0011A3CC 5dce1094 bl       #0x54dd40
0011A3D0 e00313aa mov      x0, x19
0011A3D4 61008052 mov      w1, #3
0011A3D8 eccd1094 bl       #0x54db88
0011A3DC 689240f9 ldr      x8, [x19, #0x120]
0011A3E0 680000b4 cbz      x8, #0x11a3ec
0011A3E4 60020591 add      x0, x19, #0x140
0011A3E8 00013fd6 blr      x8
0011A3EC 61d240f9 ldr      x1, [x19, #0x1a0]
0011A3F0 c10000b4 cbz      x1, #0x11a408
0011A3F4 60020791 add      x0, x19, #0x1c0
0011A3F8 f44f42a9 ldp      x20, x19, [sp, #0x20]
0011A3FC f65741a9 ldp      x22, x21, [sp, #0x10]
0011A400 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0011A404 20001fd6 br       x1
0011A408 f44f42a9 ldp      x20, x19, [sp, #0x20]
0011A40C f65741a9 ldp      x22, x21, [sp, #0x10]
0011A410 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0011A414 c0035fd6 ret      
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
### 0x221ff8 (112 slots)
~~~asm
00221FF8 ff4301d1 sub      sp, sp, #0x50
00221FFC fd7b01a9 stp      x29, x30, [sp, #0x10]
00222000 f71300f9 str      x23, [sp, #0x20]
00222004 f65703a9 stp      x22, x21, [sp, #0x30]
00222008 f44f04a9 stp      x20, x19, [sp, #0x40]
0022200C fd430091 add      x29, sp, #0x10
00222010 f30300aa mov      x19, x0
00222014 f40308aa mov      x20, x8
00222018 4eae0c94 bl       #0x54d950
0022201C 60010034 cbz      w0, #0x222048
00222020 930200f9 str      x19, [x20]
00222024 688e44f8 ldr      x8, [x19, #0x48]!
00222028 e00313aa mov      x0, x19
0022202C f44f44a9 ldp      x20, x19, [sp, #0x40]
00222030 f65743a9 ldp      x22, x21, [sp, #0x30]
00222034 f71340f9 ldr      x23, [sp, #0x20]
00222038 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0022203C 010940f9 ldr      x1, [x8, #0x10]
00222040 ff430191 add      sp, sp, #0x50
00222044 20001fd6 br       x1
00222048 77d645a9 ldp      x23, x21, [x19, #0x58]
0022204C d70100b4 cbz      x23, #0x222084
00222050 f60317aa mov      x22, x23
00222054 c88e44f8 ldr      x8, [x22, #0x48]!
00222058 e00316aa mov      x0, x22
0022205C 080940f9 ldr      x8, [x8, #0x10]
00222060 00013fd6 blr      x8
00222064 c80240f9 ldr      x8, [x22]
00222068 e00316aa mov      x0, x22
0022206C 080940f9 ldr      x8, [x8, #0x10]
00222070 00013fd6 blr      x8
00222074 c80240f9 ldr      x8, [x22]
00222078 e00316aa mov      x0, x22
0022207C 080d40f9 ldr      x8, [x8, #0x18]
00222080 00013fd6 blr      x8
00222084 a0630091 add      x0, x29, #0x18
00222088 e2030091 mov      x2, sp
0022208C e10315aa mov      x1, x21
00222090 f74f00a9 stp      x23, x19, [sp]
00222094 32180094 bl       #0x22815c
00222098 f50300aa mov      x21, x0
0022209C a00000b4 cbz      x0, #0x2220b0
002220A0 e00315aa mov      x0, x21
002220A4 088c44f8 ldr      x8, [x0, #0x48]!
002220A8 080940f9 ldr      x8, [x8, #0x10]
002220AC 00013fd6 blr      x8
002220B0 e00340f9 ldr      x0, [sp]
002220B4 800000b4 cbz      x0, #0x2220c4
002220B8 088c44f8 ldr      x8, [x0, #0x48]!
002220BC 080d40f9 ldr      x8, [x8, #0x18]
002220C0 00013fd6 blr      x8
002220C4 b50f00f9 str      x21, [x29, #0x18]
002220C8 b50000b4 cbz      x21, #0x2220dc
002220CC e00315aa mov      x0, x21
002220D0 088c44f8 ldr      x8, [x0, #0x48]!
002220D4 080940f9 ldr      x8, [x8, #0x10]
002220D8 00013fd6 blr      x8
002220DC 68264fa9 ldp      x8, x9, [x19, #0xf0]
002220E0 010d098b add      x1, x8, x9, lsl #3
002220E4 688240f9 ldr      x8, [x19, #0x100]
002220E8 3f0108eb cmp      x9, x8
002220EC 40050054 b.eq     #0x222194
002220F0 48d03bd5 mrs      x8, tpidr_el0
002220F4 08c97392 and      x8, x8, #0xffffffffffffe000
002220F8 094d40f9 ldr      x9, [x8, #0x98]
002220FC 3f4100f1 cmp      x9, #0x10
00222100 a0050054 b.eq     #0x2221b4
00222104 6a5a40f9 ldr      x10, [x19, #0xb0]
00222108 090d098b add      x9, x8, x9, lsl #3
0022210C 2a0d00f9 str      x10, [x9, #0x18]
00222110 094d40f9 ldr      x9, [x8, #0x98]
00222114 29050091 add      x9, x9, #1
00222118 094d00f9 str      x9, [x8, #0x98]
0022211C a90f40f9 ldr      x9, [x29, #0x18]
00222120 bf0f00f9 str      xzr, [x29, #0x18]
00222124 290000f9 str      x9, [x1]
00222128 094d40f9 ldr      x9, [x8, #0x98]
0022212C 290500d1 sub      x9, x9, #1
00222130 094d00f9 str      x9, [x8, #0x98]
00222134 687e40f9 ldr      x8, [x19, #0xf8]
00222138 08050091 add      x8, x8, #1
0022213C 687e00f9 str      x8, [x19, #0xf8]
00222140 a00f40f9 ldr      x0, [x29, #0x18]
00222144 800000b4 cbz      x0, #0x222154
00222148 088c44f8 ldr      x8, [x0, #0x48]!
0022214C 080d40f9 ldr      x8, [x8, #0x18]
00222150 00013fd6 blr      x8
00222154 930200f9 str      x19, [x20]
00222158 688e44f8 ldr      x8, [x19, #0x48]!
0022215C e00313aa mov      x0, x19
00222160 080940f9 ldr      x8, [x8, #0x10]
00222164 00013fd6 blr      x8
00222168 b50000b4 cbz      x21, #0x22217c
0022216C a88e44f8 ldr      x8, [x21, #0x48]!
00222170 e00315aa mov      x0, x21
00222174 080d40f9 ldr      x8, [x8, #0x18]
00222178 00013fd6 blr      x8
0022217C f44f44a9 ldp      x20, x19, [sp, #0x40]
00222180 f71340f9 ldr      x23, [sp, #0x20]
00222184 f65743a9 ldp      x22, x21, [sp, #0x30]
00222188 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0022218C ff430191 add      sp, sp, #0x50
00222190 c0035fd6 ret      
00222194 60c20291 add      x0, x19, #0xb0
00222198 e8030091 mov      x8, sp
0022219C a3630091 add      x3, x29, #0x18
002221A0 22008052 mov      w2, #1
002221A4 ffe4fb97 bl       #0x11b5a0
002221A8 a00f40f9 ldr      x0, [x29, #0x18]
002221AC e0fcffb5 cbnz     x0, #0x222148
002221B0 e9ffff17 b        #0x222154
002221B4 9782f797 bl       #0x2c10
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
### 0x222800 (28 slots)
~~~asm
00222800 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00222804 f44f01a9 stp      x20, x19, [sp, #0x10]
00222808 fd030091 mov      x29, sp
0022280C e82d00f0 adrp     x8, #0x7e1000
00222810 08613691 add      x8, x8, #0xd98
00222814 080140f9 ldr      x8, [x8]
00222818 132940f9 ldr      x19, [x8, #0x50]
0022281C 330200b4 cbz      x19, #0x222860
00222820 f40313aa mov      x20, x19
00222824 888e44f8 ldr      x8, [x20, #0x48]!
00222828 e00314aa mov      x0, x20
0022282C 080940f9 ldr      x8, [x8, #0x10]
00222830 00013fd6 blr      x8
00222834 e00313aa mov      x0, x19
00222838 ceac0c94 bl       #0x54db70
0022283C 880240f9 ldr      x8, [x20]
00222840 f303002a mov      w19, w0
00222844 e00314aa mov      x0, x20
00222848 080d40f9 ldr      x8, [x8, #0x18]
0022284C 00013fd6 blr      x8
00222850 60020012 and      w0, w19, #1
00222854 f44f41a9 ldp      x20, x19, [sp, #0x10]
00222858 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022285C c0035fd6 ret      
00222860 20008052 mov      w0, #1
00222864 f44f41a9 ldp      x20, x19, [sp, #0x10]
00222868 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022286C c0035fd6 ret      
~~~
### 0x222c70 (144 slots)
~~~asm
00222C70 ff0301d1 sub      sp, sp, #0x40
00222C74 fd7b01a9 stp      x29, x30, [sp, #0x10]
00222C78 f65702a9 stp      x22, x21, [sp, #0x20]
00222C7C f44f03a9 stp      x20, x19, [sp, #0x30]
00222C80 fd430091 add      x29, sp, #0x10
00222C84 a83200d0 adrp     x8, #0x878000
00222C88 00d10ab9 str      w0, [x8, #0xad0]
00222C8C 75a50c94 bl       #0x54c260
00222C90 48d03bd5 mrs      x8, tpidr_el0
00222C94 16c97392 and      x22, x8, #0xffffffffffffe000
00222C98 c84e40f9 ldr      x8, [x22, #0x98]
00222C9C 1f4100f1 cmp      x8, #0x10
00222CA0 60100054 b.eq     #0x222eac
00222CA4 c80e088b add      x8, x22, x8, lsl #3
00222CA8 01688052 mov      w1, #0x340
00222CAC 02028052 mov      w2, #0x10
00222CB0 f40300aa mov      x20, x0
00222CB4 000d00f9 str      x0, [x8, #0x18]
00222CB8 c84e40f9 ldr      x8, [x22, #0x98]
00222CBC 08050091 add      x8, x8, #1
00222CC0 c84e00f9 str      x8, [x22, #0x98]
00222CC4 080040f9 ldr      x8, [x0]
00222CC8 080940f9 ldr      x8, [x8, #0x10]
00222CCC 00013fd6 blr      x8
00222CD0 f50300aa mov      x21, x0
00222CD4 a00000b5 cbnz     x0, #0x222ce8
00222CD8 880240f9 ldr      x8, [x20]
00222CDC e00314aa mov      x0, x20
00222CE0 085d40f9 ldr      x8, [x8, #0xb8]
00222CE4 00013fd6 blr      x8
00222CE8 e00315aa mov      x0, x21
00222CEC e10314aa mov      x1, x20
00222CF0 e2031faa mov      x2, xzr
00222CF4 19ab0c94 bl       #0x54d958
00222CF8 e82b00f0 adrp     x8, #0x7a1000
00222CFC f30315aa mov      x19, x21
00222D00 08dd43f9 ldr      x8, [x8, #0x7b8]
00222D04 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00222D08 09c10191 add      x9, x8, #0x70
00222D0C bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00222D10 bf1201f9 str      xzr, [x21, #0x220]
00222D14 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00222D18 bf1601f9 str      xzr, [x21, #0x228]
00222D1C bf1a01f9 str      xzr, [x21, #0x230]
00222D20 bf1e01f9 str      xzr, [x21, #0x238]
00222D24 bf5201f9 str      xzr, [x21, #0x2a0]
00222D28 bf5601f9 str      xzr, [x21, #0x2a8]
00222D2C bf5a01f9 str      xzr, [x21, #0x2b0]
00222D30 bf5e01f9 str      xzr, [x21, #0x2b8]
00222D34 698e04f8 str      x9, [x19, #0x48]!
00222D38 09c10291 add      x9, x8, #0xb0
00222D3C 08410091 add      x8, x8, #0x10
00222D40 e00313aa mov      x0, x19
00222D44 a92a00f9 str      x9, [x21, #0x50]
00222D48 09028052 mov      w9, #0x10
00222D4C bf820c39 strb     wzr, [x21, #0x320]
00222D50 bfa20c39 strb     wzr, [x21, #0x328]
00222D54 bfc20c39 strb     wzr, [x21, #0x330]
00222D58 a91200f9 str      x9, [x21, #0x20]
00222D5C a85200a9 stp      x8, x20, [x21]
00222D60 08688052 mov      w8, #0x340
00222D64 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00222D68 b52201a9 stp      x21, x8, [x21, #0x10]
00222D6C c84e40f9 ldr      x8, [x22, #0x98]
00222D70 080500d1 sub      x8, x8, #1
00222D74 c84e00f9 str      x8, [x22, #0x98]
00222D78 680240f9 ldr      x8, [x19]
00222D7C 080940f9 ldr      x8, [x8, #0x10]
00222D80 00013fd6 blr      x8
00222D84 e8030091 mov      x8, sp
00222D88 e00315aa mov      x0, x21
00222D8C 31d9fb97 bl       #0x119250
00222D90 e00340f9 ldr      x0, [sp]
00222D94 e8230091 add      x8, sp, #8
00222D98 46000094 bl       #0x222eb0
00222D9C f40740f9 ldr      x20, [sp, #8]
00222DA0 e00314aa mov      x0, x20
00222DA4 ebaa0c94 bl       #0x54d950
00222DA8 80020035 cbnz     w0, #0x222df8
00222DAC 881641f9 ldr      x8, [x20, #0x228]
00222DB0 c80000b4 cbz      x8, #0x222dc8
00222DB4 89820891 add      x9, x20, #0x220
00222DB8 80020991 add      x0, x20, #0x240
00222DBC 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00222DC0 3f7d00a9 stp      xzr, xzr, [x9]
00222DC4 00013fd6 blr      x8
00222DC8 1f2003d5 nop      
00222DCC 88d00310 adr      x8, #0x22a7dc
00222DD0 881201f9 str      x8, [x20, #0x220]
00222DD4 1f2003d5 nop      
00222DD8 49d00310 adr      x9, #0x22a7e0
00222DDC 891601f9 str      x9, [x20, #0x228]
00222DE0 1f2003d5 nop      
00222DE4 0ad00310 adr      x10, #0x22a7e4
00222DE8 8a1a01f9 str      x10, [x20, #0x230]
00222DEC 1f2003d5 nop      
00222DF0 c8cf0310 adr      x8, #0x22a7e8
00222DF4 881e01f9 str      x8, [x20, #0x238]
00222DF8 f50314aa mov      x21, x20
00222DFC a88e44f8 ldr      x8, [x21, #0x48]!
00222E00 e00315aa mov      x0, x21
00222E04 080940f9 ldr      x8, [x8, #0x10]
00222E08 00013fd6 blr      x8
00222E0C e00314aa mov      x0, x20
00222E10 60ab0c94 bl       #0x54db90
00222E14 a80240f9 ldr      x8, [x21]
00222E18 e00315aa mov      x0, x21
00222E1C 080940f9 ldr      x8, [x8, #0x10]
00222E20 00013fd6 blr      x8
00222E24 e82d00f0 adrp     x8, #0x7e1000
00222E28 08613691 add      x8, x8, #0xd98
00222E2C 160140f9 ldr      x22, [x8]
00222E30 c02a40f9 ldr      x0, [x22, #0x50]
00222E34 800000b4 cbz      x0, #0x222e44
00222E38 088c44f8 ldr      x8, [x0, #0x48]!
00222E3C 080d40f9 ldr      x8, [x8, #0x18]
00222E40 00013fd6 blr      x8
00222E44 d42a00f9 str      x20, [x22, #0x50]
00222E48 e00315aa mov      x0, x21
00222E4C 882640f9 ldr      x8, [x20, #0x48]
00222E50 080d40f9 ldr      x8, [x8, #0x18]
00222E54 00013fd6 blr      x8
00222E58 e00740f9 ldr      x0, [sp, #8]
00222E5C a00000b4 cbz      x0, #0x222e70
00222E60 088c44f8 ldr      x8, [x0, #0x48]!
00222E64 080d40f9 ldr      x8, [x8, #0x18]
00222E68 00013fd6 blr      x8
00222E6C ff0700f9 str      xzr, [sp, #8]
00222E70 e00340f9 ldr      x0, [sp]
00222E74 a00000b4 cbz      x0, #0x222e88
00222E78 088c44f8 ldr      x8, [x0, #0x48]!
00222E7C 080d40f9 ldr      x8, [x8, #0x18]
00222E80 00013fd6 blr      x8
00222E84 ff0300f9 str      xzr, [sp]
00222E88 680240f9 ldr      x8, [x19]
00222E8C e00313aa mov      x0, x19
00222E90 080d40f9 ldr      x8, [x8, #0x18]
00222E94 00013fd6 blr      x8
00222E98 f44f43a9 ldp      x20, x19, [sp, #0x30]
00222E9C f65742a9 ldp      x22, x21, [sp, #0x20]
00222EA0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00222EA4 ff030191 add      sp, sp, #0x40
00222EA8 c0035fd6 ret      
00222EAC 597ff797 bl       #0x2c10
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
### 0x225430 (24 slots)
~~~asm
00225430 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00225434 f44f01a9 stp      x20, x19, [sp, #0x10]
00225438 fd030091 mov      x29, sp
0022543C e82d0090 adrp     x8, #0x7e1000
00225440 08613691 add      x8, x8, #0xd98
00225444 080140f9 ldr      x8, [x8]
00225448 132940f9 ldr      x19, [x8, #0x50]
0022544C b30100b4 cbz      x19, #0x225480
00225450 f40313aa mov      x20, x19
00225454 888e44f8 ldr      x8, [x20, #0x48]!
00225458 e00314aa mov      x0, x20
0022545C 080940f9 ldr      x8, [x8, #0x10]
00225460 00013fd6 blr      x8
00225464 e00313aa mov      x0, x19
00225468 c2a10c94 bl       #0x54db70
0022546C 880240f9 ldr      x8, [x20]
00225470 13000052 eor      w19, w0, #1
00225474 e00314aa mov      x0, x20
00225478 080d40f9 ldr      x8, [x8, #0x18]
0022547C 00013fd6 blr      x8
00225480 60020012 and      w0, w19, #1
00225484 f44f41a9 ldp      x20, x19, [sp, #0x10]
00225488 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022548C c0035fd6 ret      
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
### 0x227260 (165 slots)
~~~asm
00227260 ff8301d1 sub      sp, sp, #0x60
00227264 fd7b03a9 stp      x29, x30, [sp, #0x30]
00227268 f65704a9 stp      x22, x21, [sp, #0x40]
0022726C f44f05a9 stp      x20, x19, [sp, #0x50]
00227270 fdc30091 add      x29, sp, #0x30
00227274 a82a00d0 adrp     x8, #0x77d000
00227278 08412191 add      x8, x8, #0x850
0022727C 092140a9 ldp      x9, x8, [x8]
00227280 a9233fa9 stp      x9, x8, [x29, #-0x10]
00227284 f7930c94 bl       #0x54c260
00227288 48d03bd5 mrs      x8, tpidr_el0
0022728C 16c97392 and      x22, x8, #0xffffffffffffe000
00227290 c84e40f9 ldr      x8, [x22, #0x98]
00227294 1f4100f1 cmp      x8, #0x10
00227298 c0120054 b.eq     #0x2274f0
0022729C c80e088b add      x8, x22, x8, lsl #3
002272A0 01688052 mov      w1, #0x340
002272A4 02028052 mov      w2, #0x10
002272A8 f40300aa mov      x20, x0
002272AC 000d00f9 str      x0, [x8, #0x18]
002272B0 c84e40f9 ldr      x8, [x22, #0x98]
002272B4 08050091 add      x8, x8, #1
002272B8 c84e00f9 str      x8, [x22, #0x98]
002272BC 080040f9 ldr      x8, [x0]
002272C0 080940f9 ldr      x8, [x8, #0x10]
002272C4 00013fd6 blr      x8
002272C8 f50300aa mov      x21, x0
002272CC a00000b5 cbnz     x0, #0x2272e0
002272D0 880240f9 ldr      x8, [x20]
002272D4 e00314aa mov      x0, x20
002272D8 085d40f9 ldr      x8, [x8, #0xb8]
002272DC 00013fd6 blr      x8
002272E0 e00315aa mov      x0, x21
002272E4 e10314aa mov      x1, x20
002272E8 e2031faa mov      x2, xzr
002272EC 9b990c94 bl       #0x54d958
002272F0 c82b00d0 adrp     x8, #0x7a1000
002272F4 f30315aa mov      x19, x21
002272F8 08dd43f9 ldr      x8, [x8, #0x7b8]
002272FC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00227300 09c10191 add      x9, x8, #0x70
00227304 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00227308 bf1201f9 str      xzr, [x21, #0x220]
0022730C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00227310 bf1601f9 str      xzr, [x21, #0x228]
00227314 bf1a01f9 str      xzr, [x21, #0x230]
00227318 bf1e01f9 str      xzr, [x21, #0x238]
0022731C bf5201f9 str      xzr, [x21, #0x2a0]
00227320 bf5601f9 str      xzr, [x21, #0x2a8]
00227324 bf5a01f9 str      xzr, [x21, #0x2b0]
00227328 bf5e01f9 str      xzr, [x21, #0x2b8]
0022732C 698e04f8 str      x9, [x19, #0x48]!
00227330 09c10291 add      x9, x8, #0xb0
00227334 08410091 add      x8, x8, #0x10
00227338 e00313aa mov      x0, x19
0022733C a92a00f9 str      x9, [x21, #0x50]
00227340 09028052 mov      w9, #0x10
00227344 bf820c39 strb     wzr, [x21, #0x320]
00227348 bfa20c39 strb     wzr, [x21, #0x328]
0022734C bfc20c39 strb     wzr, [x21, #0x330]
00227350 a91200f9 str      x9, [x21, #0x20]
00227354 a85200a9 stp      x8, x20, [x21]
00227358 08688052 mov      w8, #0x340
0022735C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00227360 b52201a9 stp      x21, x8, [x21, #0x10]
00227364 c84e40f9 ldr      x8, [x22, #0x98]
00227368 080500d1 sub      x8, x8, #1
0022736C c84e00f9 str      x8, [x22, #0x98]
00227370 680240f9 ldr      x8, [x19]
00227374 080940f9 ldr      x8, [x8, #0x10]
00227378 00013fd6 blr      x8
0022737C e8030091 mov      x8, sp
00227380 e00315aa mov      x0, x21
00227384 b3c7fb97 bl       #0x119250
00227388 e00340f9 ldr      x0, [sp]
0022738C e8230091 add      x8, sp, #8
00227390 a14300d1 sub      x1, x29, #0x10
00227394 1fc8fb97 bl       #0x119410
00227398 e00740f9 ldr      x0, [sp, #8]
0022739C e8430091 add      x8, sp, #0x10
002273A0 8ec8fb97 bl       #0x1195d8
002273A4 e00b40f9 ldr      x0, [sp, #0x10]
002273A8 e8630091 add      x8, sp, #0x18
002273AC 52000094 bl       #0x2274f4
002273B0 f40f40f9 ldr      x20, [sp, #0x18]
002273B4 e00314aa mov      x0, x20
002273B8 66990c94 bl       #0x54d950
002273BC 80020035 cbnz     w0, #0x22740c
002273C0 881641f9 ldr      x8, [x20, #0x228]
002273C4 c80000b4 cbz      x8, #0x2273dc
002273C8 89820891 add      x9, x20, #0x220
002273CC 80020991 add      x0, x20, #0x240
002273D0 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
002273D4 3f7d00a9 stp      xzr, xzr, [x9]
002273D8 00013fd6 blr      x8
002273DC 1f2003d5 nop      
002273E0 886e0210 adr      x8, #0x22c1b0
002273E4 881201f9 str      x8, [x20, #0x220]
002273E8 1f2003d5 nop      
002273EC 496e0210 adr      x9, #0x22c1b4
002273F0 891601f9 str      x9, [x20, #0x228]
002273F4 1f2003d5 nop      
002273F8 0a6e0210 adr      x10, #0x22c1b8
002273FC 8a1a01f9 str      x10, [x20, #0x230]
00227400 1f2003d5 nop      
00227404 c86d0210 adr      x8, #0x22c1bc
00227408 881e01f9 str      x8, [x20, #0x238]
0022740C f50314aa mov      x21, x20
00227410 a88e44f8 ldr      x8, [x21, #0x48]!
00227414 e00315aa mov      x0, x21
00227418 080940f9 ldr      x8, [x8, #0x10]
0022741C 00013fd6 blr      x8
00227420 e00314aa mov      x0, x20
00227424 db990c94 bl       #0x54db90
00227428 a80240f9 ldr      x8, [x21]
0022742C e00315aa mov      x0, x21
00227430 080940f9 ldr      x8, [x8, #0x10]
00227434 00013fd6 blr      x8
00227438 c82d00d0 adrp     x8, #0x7e1000
0022743C 08613691 add      x8, x8, #0xd98
00227440 160140f9 ldr      x22, [x8]
00227444 c02a40f9 ldr      x0, [x22, #0x50]
00227448 800000b4 cbz      x0, #0x227458
0022744C 088c44f8 ldr      x8, [x0, #0x48]!
00227450 080d40f9 ldr      x8, [x8, #0x18]
00227454 00013fd6 blr      x8
00227458 d42a00f9 str      x20, [x22, #0x50]
0022745C e00315aa mov      x0, x21
00227460 882640f9 ldr      x8, [x20, #0x48]
00227464 080d40f9 ldr      x8, [x8, #0x18]
00227468 00013fd6 blr      x8
0022746C e00f40f9 ldr      x0, [sp, #0x18]
00227470 a00000b4 cbz      x0, #0x227484
00227474 088c44f8 ldr      x8, [x0, #0x48]!
00227478 080d40f9 ldr      x8, [x8, #0x18]
0022747C 00013fd6 blr      x8
00227480 ff0f00f9 str      xzr, [sp, #0x18]
00227484 e00b40f9 ldr      x0, [sp, #0x10]
00227488 a00000b4 cbz      x0, #0x22749c
0022748C 088c44f8 ldr      x8, [x0, #0x48]!
00227490 080d40f9 ldr      x8, [x8, #0x18]
00227494 00013fd6 blr      x8
00227498 ff0b00f9 str      xzr, [sp, #0x10]
0022749C e00740f9 ldr      x0, [sp, #8]
002274A0 a00000b4 cbz      x0, #0x2274b4
002274A4 088c44f8 ldr      x8, [x0, #0x48]!
002274A8 080d40f9 ldr      x8, [x8, #0x18]
002274AC 00013fd6 blr      x8
002274B0 ff0700f9 str      xzr, [sp, #8]
002274B4 e00340f9 ldr      x0, [sp]
002274B8 a00000b4 cbz      x0, #0x2274cc
002274BC 088c44f8 ldr      x8, [x0, #0x48]!
002274C0 080d40f9 ldr      x8, [x8, #0x18]
002274C4 00013fd6 blr      x8
002274C8 ff0300f9 str      xzr, [sp]
002274CC 680240f9 ldr      x8, [x19]
002274D0 e00313aa mov      x0, x19
002274D4 080d40f9 ldr      x8, [x8, #0x18]
002274D8 00013fd6 blr      x8
002274DC f44f45a9 ldp      x20, x19, [sp, #0x50]
002274E0 f65744a9 ldp      x22, x21, [sp, #0x40]
002274E4 fd7b43a9 ldp      x29, x30, [sp, #0x30]
002274E8 ff830191 add      sp, sp, #0x60
002274EC c0035fd6 ret      
002274F0 c86df797 bl       #0x2c10
~~~
### 0x2276c0 (28 slots)
~~~asm
002276C0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
002276C4 f44f01a9 stp      x20, x19, [sp, #0x10]
002276C8 fd030091 mov      x29, sp
002276CC c82d00d0 adrp     x8, #0x7e1000
002276D0 08613691 add      x8, x8, #0xd98
002276D4 080140f9 ldr      x8, [x8]
002276D8 132940f9 ldr      x19, [x8, #0x50]
002276DC 330200b4 cbz      x19, #0x227720
002276E0 f40313aa mov      x20, x19
002276E4 888e44f8 ldr      x8, [x20, #0x48]!
002276E8 e00314aa mov      x0, x20
002276EC 080940f9 ldr      x8, [x8, #0x10]
002276F0 00013fd6 blr      x8
002276F4 e00313aa mov      x0, x19
002276F8 1e990c94 bl       #0x54db70
002276FC 880240f9 ldr      x8, [x20]
00227700 f303002a mov      w19, w0
00227704 e00314aa mov      x0, x20
00227708 080d40f9 ldr      x8, [x8, #0x18]
0022770C 00013fd6 blr      x8
00227710 60020012 and      w0, w19, #1
00227714 f44f41a9 ldp      x20, x19, [sp, #0x10]
00227718 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022771C c0035fd6 ret      
00227720 20008052 mov      w0, #1
00227724 f44f41a9 ldp      x20, x19, [sp, #0x10]
00227728 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022772C c0035fd6 ret      
~~~
### 0x22e540 (24 slots)
~~~asm
0022E540 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0022E544 f44f01a9 stp      x20, x19, [sp, #0x10]
0022E548 fd030091 mov      x29, sp
0022E54C 882d00f0 adrp     x8, #0x7e1000
0022E550 08613691 add      x8, x8, #0xd98
0022E554 080140f9 ldr      x8, [x8]
0022E558 132940f9 ldr      x19, [x8, #0x50]
0022E55C b30100b4 cbz      x19, #0x22e590
0022E560 f40313aa mov      x20, x19
0022E564 888e44f8 ldr      x8, [x20, #0x48]!
0022E568 e00314aa mov      x0, x20
0022E56C 080940f9 ldr      x8, [x8, #0x10]
0022E570 00013fd6 blr      x8
0022E574 e00313aa mov      x0, x19
0022E578 7e7d0c94 bl       #0x54db70
0022E57C 880240f9 ldr      x8, [x20]
0022E580 13000052 eor      w19, w0, #1
0022E584 e00314aa mov      x0, x20
0022E588 080d40f9 ldr      x8, [x8, #0x18]
0022E58C 00013fd6 blr      x8
0022E590 60020012 and      w0, w19, #1
0022E594 f44f41a9 ldp      x20, x19, [sp, #0x10]
0022E598 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022E59C c0035fd6 ret      
~~~
### 0x22e5a0 (142 slots)
~~~asm
0022E5A0 ff0301d1 sub      sp, sp, #0x40
0022E5A4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0022E5A8 f65702a9 stp      x22, x21, [sp, #0x20]
0022E5AC f44f03a9 stp      x20, x19, [sp, #0x30]
0022E5B0 fd430091 add      x29, sp, #0x10
0022E5B4 2b770c94 bl       #0x54c260
0022E5B8 48d03bd5 mrs      x8, tpidr_el0
0022E5BC 16c97392 and      x22, x8, #0xffffffffffffe000
0022E5C0 c84e40f9 ldr      x8, [x22, #0x98]
0022E5C4 1f4100f1 cmp      x8, #0x10
0022E5C8 60100054 b.eq     #0x22e7d4
0022E5CC c80e088b add      x8, x22, x8, lsl #3
0022E5D0 01688052 mov      w1, #0x340
0022E5D4 02028052 mov      w2, #0x10
0022E5D8 f40300aa mov      x20, x0
0022E5DC 000d00f9 str      x0, [x8, #0x18]
0022E5E0 c84e40f9 ldr      x8, [x22, #0x98]
0022E5E4 08050091 add      x8, x8, #1
0022E5E8 c84e00f9 str      x8, [x22, #0x98]
0022E5EC 080040f9 ldr      x8, [x0]
0022E5F0 080940f9 ldr      x8, [x8, #0x10]
0022E5F4 00013fd6 blr      x8
0022E5F8 f50300aa mov      x21, x0
0022E5FC a00000b5 cbnz     x0, #0x22e610
0022E600 880240f9 ldr      x8, [x20]
0022E604 e00314aa mov      x0, x20
0022E608 085d40f9 ldr      x8, [x8, #0xb8]
0022E60C 00013fd6 blr      x8
0022E610 e00315aa mov      x0, x21
0022E614 e10314aa mov      x1, x20
0022E618 e2031faa mov      x2, xzr
0022E61C cf7c0c94 bl       #0x54d958
0022E620 882b00f0 adrp     x8, #0x7a1000
0022E624 f30315aa mov      x19, x21
0022E628 08dd43f9 ldr      x8, [x8, #0x7b8]
0022E62C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022E630 09c10191 add      x9, x8, #0x70
0022E634 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022E638 bf1201f9 str      xzr, [x21, #0x220]
0022E63C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022E640 bf1601f9 str      xzr, [x21, #0x228]
0022E644 bf1a01f9 str      xzr, [x21, #0x230]
0022E648 bf1e01f9 str      xzr, [x21, #0x238]
0022E64C bf5201f9 str      xzr, [x21, #0x2a0]
0022E650 bf5601f9 str      xzr, [x21, #0x2a8]
0022E654 bf5a01f9 str      xzr, [x21, #0x2b0]
0022E658 bf5e01f9 str      xzr, [x21, #0x2b8]
0022E65C 698e04f8 str      x9, [x19, #0x48]!
0022E660 09c10291 add      x9, x8, #0xb0
0022E664 08410091 add      x8, x8, #0x10
0022E668 e00313aa mov      x0, x19
0022E66C a92a00f9 str      x9, [x21, #0x50]
0022E670 09028052 mov      w9, #0x10
0022E674 bf820c39 strb     wzr, [x21, #0x320]
0022E678 bfa20c39 strb     wzr, [x21, #0x328]
0022E67C bfc20c39 strb     wzr, [x21, #0x330]
0022E680 a91200f9 str      x9, [x21, #0x20]
0022E684 a85200a9 stp      x8, x20, [x21]
0022E688 08688052 mov      w8, #0x340
0022E68C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022E690 b52201a9 stp      x21, x8, [x21, #0x10]
0022E694 c84e40f9 ldr      x8, [x22, #0x98]
0022E698 080500d1 sub      x8, x8, #1
0022E69C c84e00f9 str      x8, [x22, #0x98]
0022E6A0 680240f9 ldr      x8, [x19]
0022E6A4 080940f9 ldr      x8, [x8, #0x10]
0022E6A8 00013fd6 blr      x8
0022E6AC e8030091 mov      x8, sp
0022E6B0 e00315aa mov      x0, x21
0022E6B4 e7aafb97 bl       #0x119250
0022E6B8 e00340f9 ldr      x0, [sp]
0022E6BC e8230091 add      x8, sp, #8
0022E6C0 46000094 bl       #0x22e7d8
0022E6C4 f40740f9 ldr      x20, [sp, #8]
0022E6C8 e00314aa mov      x0, x20
0022E6CC a17c0c94 bl       #0x54d950
0022E6D0 80020035 cbnz     w0, #0x22e720
0022E6D4 881641f9 ldr      x8, [x20, #0x228]
0022E6D8 c80000b4 cbz      x8, #0x22e6f0
0022E6DC 89820891 add      x9, x20, #0x220
0022E6E0 80020991 add      x0, x20, #0x240
0022E6E4 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0022E6E8 3f7d00a9 stp      xzr, xzr, [x9]
0022E6EC 00013fd6 blr      x8
0022E6F0 1f2003d5 nop      
0022E6F4 e8d90210 adr      x8, #0x234230
0022E6F8 881201f9 str      x8, [x20, #0x220]
0022E6FC 1f2003d5 nop      
0022E700 a9da0210 adr      x9, #0x234254
0022E704 891601f9 str      x9, [x20, #0x228]
0022E708 1f2003d5 nop      
0022E70C 6ada0210 adr      x10, #0x234258
0022E710 8a1a01f9 str      x10, [x20, #0x230]
0022E714 1f2003d5 nop      
0022E718 28da0210 adr      x8, #0x23425c
0022E71C 881e01f9 str      x8, [x20, #0x238]
0022E720 f50314aa mov      x21, x20
0022E724 a88e44f8 ldr      x8, [x21, #0x48]!
0022E728 e00315aa mov      x0, x21
0022E72C 080940f9 ldr      x8, [x8, #0x10]
0022E730 00013fd6 blr      x8
0022E734 e00314aa mov      x0, x20
0022E738 167d0c94 bl       #0x54db90
0022E73C a80240f9 ldr      x8, [x21]
0022E740 e00315aa mov      x0, x21
0022E744 080940f9 ldr      x8, [x8, #0x10]
0022E748 00013fd6 blr      x8
0022E74C 882d00f0 adrp     x8, #0x7e1000
0022E750 08613691 add      x8, x8, #0xd98
0022E754 160140f9 ldr      x22, [x8]
0022E758 c02a40f9 ldr      x0, [x22, #0x50]
0022E75C 800000b4 cbz      x0, #0x22e76c
0022E760 088c44f8 ldr      x8, [x0, #0x48]!
0022E764 080d40f9 ldr      x8, [x8, #0x18]
0022E768 00013fd6 blr      x8
0022E76C d42a00f9 str      x20, [x22, #0x50]
0022E770 e00315aa mov      x0, x21
0022E774 882640f9 ldr      x8, [x20, #0x48]
0022E778 080d40f9 ldr      x8, [x8, #0x18]
0022E77C 00013fd6 blr      x8
0022E780 e00740f9 ldr      x0, [sp, #8]
0022E784 a00000b4 cbz      x0, #0x22e798
0022E788 088c44f8 ldr      x8, [x0, #0x48]!
0022E78C 080d40f9 ldr      x8, [x8, #0x18]
0022E790 00013fd6 blr      x8
0022E794 ff0700f9 str      xzr, [sp, #8]
0022E798 e00340f9 ldr      x0, [sp]
0022E79C a00000b4 cbz      x0, #0x22e7b0
0022E7A0 088c44f8 ldr      x8, [x0, #0x48]!
0022E7A4 080d40f9 ldr      x8, [x8, #0x18]
0022E7A8 00013fd6 blr      x8
0022E7AC ff0300f9 str      xzr, [sp]
0022E7B0 680240f9 ldr      x8, [x19]
0022E7B4 e00313aa mov      x0, x19
0022E7B8 080d40f9 ldr      x8, [x8, #0x18]
0022E7BC 00013fd6 blr      x8
0022E7C0 f44f43a9 ldp      x20, x19, [sp, #0x30]
0022E7C4 f65742a9 ldp      x22, x21, [sp, #0x20]
0022E7C8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0022E7CC ff030191 add      sp, sp, #0x40
0022E7D0 c0035fd6 ret      
0022E7D4 0f51f797 bl       #0x2c10
~~~
### 0x22e9a0 (24 slots)
~~~asm
0022E9A0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0022E9A4 f44f01a9 stp      x20, x19, [sp, #0x10]
0022E9A8 fd030091 mov      x29, sp
0022E9AC 882d00f0 adrp     x8, #0x7e1000
0022E9B0 08613691 add      x8, x8, #0xd98
0022E9B4 080140f9 ldr      x8, [x8]
0022E9B8 132940f9 ldr      x19, [x8, #0x50]
0022E9BC b30100b4 cbz      x19, #0x22e9f0
0022E9C0 f40313aa mov      x20, x19
0022E9C4 888e44f8 ldr      x8, [x20, #0x48]!
0022E9C8 e00314aa mov      x0, x20
0022E9CC 080940f9 ldr      x8, [x8, #0x10]
0022E9D0 00013fd6 blr      x8
0022E9D4 e00313aa mov      x0, x19
0022E9D8 667c0c94 bl       #0x54db70
0022E9DC 880240f9 ldr      x8, [x20]
0022E9E0 13000052 eor      w19, w0, #1
0022E9E4 e00314aa mov      x0, x20
0022E9E8 080d40f9 ldr      x8, [x8, #0x18]
0022E9EC 00013fd6 blr      x8
0022E9F0 60020012 and      w0, w19, #1
0022E9F4 f44f41a9 ldp      x20, x19, [sp, #0x10]
0022E9F8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022E9FC c0035fd6 ret      
~~~
### 0x22ea00 (142 slots)
~~~asm
0022EA00 ff0301d1 sub      sp, sp, #0x40
0022EA04 fd7b01a9 stp      x29, x30, [sp, #0x10]
0022EA08 f65702a9 stp      x22, x21, [sp, #0x20]
0022EA0C f44f03a9 stp      x20, x19, [sp, #0x30]
0022EA10 fd430091 add      x29, sp, #0x10
0022EA14 13760c94 bl       #0x54c260
0022EA18 48d03bd5 mrs      x8, tpidr_el0
0022EA1C 16c97392 and      x22, x8, #0xffffffffffffe000
0022EA20 c84e40f9 ldr      x8, [x22, #0x98]
0022EA24 1f4100f1 cmp      x8, #0x10
0022EA28 60100054 b.eq     #0x22ec34
0022EA2C c80e088b add      x8, x22, x8, lsl #3
0022EA30 01688052 mov      w1, #0x340
0022EA34 02028052 mov      w2, #0x10
0022EA38 f40300aa mov      x20, x0
0022EA3C 000d00f9 str      x0, [x8, #0x18]
0022EA40 c84e40f9 ldr      x8, [x22, #0x98]
0022EA44 08050091 add      x8, x8, #1
0022EA48 c84e00f9 str      x8, [x22, #0x98]
0022EA4C 080040f9 ldr      x8, [x0]
0022EA50 080940f9 ldr      x8, [x8, #0x10]
0022EA54 00013fd6 blr      x8
0022EA58 f50300aa mov      x21, x0
0022EA5C a00000b5 cbnz     x0, #0x22ea70
0022EA60 880240f9 ldr      x8, [x20]
0022EA64 e00314aa mov      x0, x20
0022EA68 085d40f9 ldr      x8, [x8, #0xb8]
0022EA6C 00013fd6 blr      x8
0022EA70 e00315aa mov      x0, x21
0022EA74 e10314aa mov      x1, x20
0022EA78 e2031faa mov      x2, xzr
0022EA7C b77b0c94 bl       #0x54d958
0022EA80 882b00f0 adrp     x8, #0x7a1000
0022EA84 f30315aa mov      x19, x21
0022EA88 08dd43f9 ldr      x8, [x8, #0x7b8]
0022EA8C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022EA90 09c10191 add      x9, x8, #0x70
0022EA94 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022EA98 bf1201f9 str      xzr, [x21, #0x220]
0022EA9C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022EAA0 bf1601f9 str      xzr, [x21, #0x228]
0022EAA4 bf1a01f9 str      xzr, [x21, #0x230]
0022EAA8 bf1e01f9 str      xzr, [x21, #0x238]
0022EAAC bf5201f9 str      xzr, [x21, #0x2a0]
0022EAB0 bf5601f9 str      xzr, [x21, #0x2a8]
0022EAB4 bf5a01f9 str      xzr, [x21, #0x2b0]
0022EAB8 bf5e01f9 str      xzr, [x21, #0x2b8]
0022EABC 698e04f8 str      x9, [x19, #0x48]!
0022EAC0 09c10291 add      x9, x8, #0xb0
0022EAC4 08410091 add      x8, x8, #0x10
0022EAC8 e00313aa mov      x0, x19
0022EACC a92a00f9 str      x9, [x21, #0x50]
0022EAD0 09028052 mov      w9, #0x10
0022EAD4 bf820c39 strb     wzr, [x21, #0x320]
0022EAD8 bfa20c39 strb     wzr, [x21, #0x328]
0022EADC bfc20c39 strb     wzr, [x21, #0x330]
0022EAE0 a91200f9 str      x9, [x21, #0x20]
0022EAE4 a85200a9 stp      x8, x20, [x21]
0022EAE8 08688052 mov      w8, #0x340
0022EAEC bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022EAF0 b52201a9 stp      x21, x8, [x21, #0x10]
0022EAF4 c84e40f9 ldr      x8, [x22, #0x98]
0022EAF8 080500d1 sub      x8, x8, #1
0022EAFC c84e00f9 str      x8, [x22, #0x98]
0022EB00 680240f9 ldr      x8, [x19]
0022EB04 080940f9 ldr      x8, [x8, #0x10]
0022EB08 00013fd6 blr      x8
0022EB0C e8030091 mov      x8, sp
0022EB10 e00315aa mov      x0, x21
0022EB14 cfa9fb97 bl       #0x119250
0022EB18 e00340f9 ldr      x0, [sp]
0022EB1C e8230091 add      x8, sp, #8
0022EB20 46000094 bl       #0x22ec38
0022EB24 f40740f9 ldr      x20, [sp, #8]
0022EB28 e00314aa mov      x0, x20
0022EB2C 897b0c94 bl       #0x54d950
0022EB30 80020035 cbnz     w0, #0x22eb80
0022EB34 881641f9 ldr      x8, [x20, #0x228]
0022EB38 c80000b4 cbz      x8, #0x22eb50
0022EB3C 89820891 add      x9, x20, #0x220
0022EB40 80020991 add      x0, x20, #0x240
0022EB44 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0022EB48 3f7d00a9 stp      xzr, xzr, [x9]
0022EB4C 00013fd6 blr      x8
0022EB50 1f2003d5 nop      
0022EB54 681f0310 adr      x8, #0x234f40
0022EB58 881201f9 str      x8, [x20, #0x220]
0022EB5C 1f2003d5 nop      
0022EB60 29200310 adr      x9, #0x234f64
0022EB64 891601f9 str      x9, [x20, #0x228]
0022EB68 1f2003d5 nop      
0022EB6C ea1f0310 adr      x10, #0x234f68
0022EB70 8a1a01f9 str      x10, [x20, #0x230]
0022EB74 1f2003d5 nop      
0022EB78 a81f0310 adr      x8, #0x234f6c
0022EB7C 881e01f9 str      x8, [x20, #0x238]
0022EB80 f50314aa mov      x21, x20
0022EB84 a88e44f8 ldr      x8, [x21, #0x48]!
0022EB88 e00315aa mov      x0, x21
0022EB8C 080940f9 ldr      x8, [x8, #0x10]
0022EB90 00013fd6 blr      x8
0022EB94 e00314aa mov      x0, x20
0022EB98 fe7b0c94 bl       #0x54db90
0022EB9C a80240f9 ldr      x8, [x21]
0022EBA0 e00315aa mov      x0, x21
0022EBA4 080940f9 ldr      x8, [x8, #0x10]
0022EBA8 00013fd6 blr      x8
0022EBAC 882d00f0 adrp     x8, #0x7e1000
0022EBB0 08613691 add      x8, x8, #0xd98
0022EBB4 160140f9 ldr      x22, [x8]
0022EBB8 c02a40f9 ldr      x0, [x22, #0x50]
0022EBBC 800000b4 cbz      x0, #0x22ebcc
0022EBC0 088c44f8 ldr      x8, [x0, #0x48]!
0022EBC4 080d40f9 ldr      x8, [x8, #0x18]
0022EBC8 00013fd6 blr      x8
0022EBCC d42a00f9 str      x20, [x22, #0x50]
0022EBD0 e00315aa mov      x0, x21
0022EBD4 882640f9 ldr      x8, [x20, #0x48]
0022EBD8 080d40f9 ldr      x8, [x8, #0x18]
0022EBDC 00013fd6 blr      x8
0022EBE0 e00740f9 ldr      x0, [sp, #8]
0022EBE4 a00000b4 cbz      x0, #0x22ebf8
0022EBE8 088c44f8 ldr      x8, [x0, #0x48]!
0022EBEC 080d40f9 ldr      x8, [x8, #0x18]
0022EBF0 00013fd6 blr      x8
0022EBF4 ff0700f9 str      xzr, [sp, #8]
0022EBF8 e00340f9 ldr      x0, [sp]
0022EBFC a00000b4 cbz      x0, #0x22ec10
0022EC00 088c44f8 ldr      x8, [x0, #0x48]!
0022EC04 080d40f9 ldr      x8, [x8, #0x18]
0022EC08 00013fd6 blr      x8
0022EC0C ff0300f9 str      xzr, [sp]
0022EC10 680240f9 ldr      x8, [x19]
0022EC14 e00313aa mov      x0, x19
0022EC18 080d40f9 ldr      x8, [x8, #0x18]
0022EC1C 00013fd6 blr      x8
0022EC20 f44f43a9 ldp      x20, x19, [sp, #0x30]
0022EC24 f65742a9 ldp      x22, x21, [sp, #0x20]
0022EC28 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0022EC2C ff030191 add      sp, sp, #0x40
0022EC30 c0035fd6 ret      
0022EC34 f74ff797 bl       #0x2c10
~~~
### 0x22ee00 (24 slots)
~~~asm
0022EE00 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0022EE04 f44f01a9 stp      x20, x19, [sp, #0x10]
0022EE08 fd030091 mov      x29, sp
0022EE0C 882d00f0 adrp     x8, #0x7e1000
0022EE10 08613691 add      x8, x8, #0xd98
0022EE14 080140f9 ldr      x8, [x8]
0022EE18 132940f9 ldr      x19, [x8, #0x50]
0022EE1C b30100b4 cbz      x19, #0x22ee50
0022EE20 f40313aa mov      x20, x19
0022EE24 888e44f8 ldr      x8, [x20, #0x48]!
0022EE28 e00314aa mov      x0, x20
0022EE2C 080940f9 ldr      x8, [x8, #0x10]
0022EE30 00013fd6 blr      x8
0022EE34 e00313aa mov      x0, x19
0022EE38 4e7b0c94 bl       #0x54db70
0022EE3C 880240f9 ldr      x8, [x20]
0022EE40 13000052 eor      w19, w0, #1
0022EE44 e00314aa mov      x0, x20
0022EE48 080d40f9 ldr      x8, [x8, #0x18]
0022EE4C 00013fd6 blr      x8
0022EE50 60020012 and      w0, w19, #1
0022EE54 f44f41a9 ldp      x20, x19, [sp, #0x10]
0022EE58 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022EE5C c0035fd6 ret      
~~~
### 0x22ee60 (142 slots)
~~~asm
0022EE60 ff0301d1 sub      sp, sp, #0x40
0022EE64 fd7b01a9 stp      x29, x30, [sp, #0x10]
0022EE68 f65702a9 stp      x22, x21, [sp, #0x20]
0022EE6C f44f03a9 stp      x20, x19, [sp, #0x30]
0022EE70 fd430091 add      x29, sp, #0x10
0022EE74 fb740c94 bl       #0x54c260
0022EE78 48d03bd5 mrs      x8, tpidr_el0
0022EE7C 16c97392 and      x22, x8, #0xffffffffffffe000
0022EE80 c84e40f9 ldr      x8, [x22, #0x98]
0022EE84 1f4100f1 cmp      x8, #0x10
0022EE88 60100054 b.eq     #0x22f094
0022EE8C c80e088b add      x8, x22, x8, lsl #3
0022EE90 01688052 mov      w1, #0x340
0022EE94 02028052 mov      w2, #0x10
0022EE98 f40300aa mov      x20, x0
0022EE9C 000d00f9 str      x0, [x8, #0x18]
0022EEA0 c84e40f9 ldr      x8, [x22, #0x98]
0022EEA4 08050091 add      x8, x8, #1
0022EEA8 c84e00f9 str      x8, [x22, #0x98]
0022EEAC 080040f9 ldr      x8, [x0]
0022EEB0 080940f9 ldr      x8, [x8, #0x10]
0022EEB4 00013fd6 blr      x8
0022EEB8 f50300aa mov      x21, x0
0022EEBC a00000b5 cbnz     x0, #0x22eed0
0022EEC0 880240f9 ldr      x8, [x20]
0022EEC4 e00314aa mov      x0, x20
0022EEC8 085d40f9 ldr      x8, [x8, #0xb8]
0022EECC 00013fd6 blr      x8
0022EED0 e00315aa mov      x0, x21
0022EED4 e10314aa mov      x1, x20
0022EED8 e2031faa mov      x2, xzr
0022EEDC 9f7a0c94 bl       #0x54d958
0022EEE0 882b00f0 adrp     x8, #0x7a1000
0022EEE4 f30315aa mov      x19, x21
0022EEE8 08dd43f9 ldr      x8, [x8, #0x7b8]
0022EEEC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022EEF0 09c10191 add      x9, x8, #0x70
0022EEF4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022EEF8 bf1201f9 str      xzr, [x21, #0x220]
0022EEFC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022EF00 bf1601f9 str      xzr, [x21, #0x228]
0022EF04 bf1a01f9 str      xzr, [x21, #0x230]
0022EF08 bf1e01f9 str      xzr, [x21, #0x238]
0022EF0C bf5201f9 str      xzr, [x21, #0x2a0]
0022EF10 bf5601f9 str      xzr, [x21, #0x2a8]
0022EF14 bf5a01f9 str      xzr, [x21, #0x2b0]
0022EF18 bf5e01f9 str      xzr, [x21, #0x2b8]
0022EF1C 698e04f8 str      x9, [x19, #0x48]!
0022EF20 09c10291 add      x9, x8, #0xb0
0022EF24 08410091 add      x8, x8, #0x10
0022EF28 e00313aa mov      x0, x19
0022EF2C a92a00f9 str      x9, [x21, #0x50]
0022EF30 09028052 mov      w9, #0x10
0022EF34 bf820c39 strb     wzr, [x21, #0x320]
0022EF38 bfa20c39 strb     wzr, [x21, #0x328]
0022EF3C bfc20c39 strb     wzr, [x21, #0x330]
0022EF40 a91200f9 str      x9, [x21, #0x20]
0022EF44 a85200a9 stp      x8, x20, [x21]
0022EF48 08688052 mov      w8, #0x340
0022EF4C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022EF50 b52201a9 stp      x21, x8, [x21, #0x10]
0022EF54 c84e40f9 ldr      x8, [x22, #0x98]
0022EF58 080500d1 sub      x8, x8, #1
0022EF5C c84e00f9 str      x8, [x22, #0x98]
0022EF60 680240f9 ldr      x8, [x19]
0022EF64 080940f9 ldr      x8, [x8, #0x10]
0022EF68 00013fd6 blr      x8
0022EF6C e8030091 mov      x8, sp
0022EF70 e00315aa mov      x0, x21
0022EF74 b7a8fb97 bl       #0x119250
0022EF78 e00340f9 ldr      x0, [sp]
0022EF7C e8230091 add      x8, sp, #8
0022EF80 46000094 bl       #0x22f098
0022EF84 f40740f9 ldr      x20, [sp, #8]
0022EF88 e00314aa mov      x0, x20
0022EF8C 717a0c94 bl       #0x54d950
0022EF90 80020035 cbnz     w0, #0x22efe0
0022EF94 881641f9 ldr      x8, [x20, #0x228]
0022EF98 c80000b4 cbz      x8, #0x22efb0
0022EF9C 89820891 add      x9, x20, #0x220
0022EFA0 80020991 add      x0, x20, #0x240
0022EFA4 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0022EFA8 3f7d00a9 stp      xzr, xzr, [x9]
0022EFAC 00013fd6 blr      x8
0022EFB0 1f2003d5 nop      
0022EFB4 e8640310 adr      x8, #0x235c50
0022EFB8 881201f9 str      x8, [x20, #0x220]
0022EFBC 1f2003d5 nop      
0022EFC0 a9650310 adr      x9, #0x235c74
0022EFC4 891601f9 str      x9, [x20, #0x228]
0022EFC8 1f2003d5 nop      
0022EFCC 6a650310 adr      x10, #0x235c78
0022EFD0 8a1a01f9 str      x10, [x20, #0x230]
0022EFD4 1f2003d5 nop      
0022EFD8 28650310 adr      x8, #0x235c7c
0022EFDC 881e01f9 str      x8, [x20, #0x238]
0022EFE0 f50314aa mov      x21, x20
0022EFE4 a88e44f8 ldr      x8, [x21, #0x48]!
0022EFE8 e00315aa mov      x0, x21
0022EFEC 080940f9 ldr      x8, [x8, #0x10]
0022EFF0 00013fd6 blr      x8
0022EFF4 e00314aa mov      x0, x20
0022EFF8 e67a0c94 bl       #0x54db90
0022EFFC a80240f9 ldr      x8, [x21]
0022F000 e00315aa mov      x0, x21
0022F004 080940f9 ldr      x8, [x8, #0x10]
0022F008 00013fd6 blr      x8
0022F00C 882d00d0 adrp     x8, #0x7e1000
0022F010 08613691 add      x8, x8, #0xd98
0022F014 160140f9 ldr      x22, [x8]
0022F018 c02a40f9 ldr      x0, [x22, #0x50]
0022F01C 800000b4 cbz      x0, #0x22f02c
0022F020 088c44f8 ldr      x8, [x0, #0x48]!
0022F024 080d40f9 ldr      x8, [x8, #0x18]
0022F028 00013fd6 blr      x8
0022F02C d42a00f9 str      x20, [x22, #0x50]
0022F030 e00315aa mov      x0, x21
0022F034 882640f9 ldr      x8, [x20, #0x48]
0022F038 080d40f9 ldr      x8, [x8, #0x18]
0022F03C 00013fd6 blr      x8
0022F040 e00740f9 ldr      x0, [sp, #8]
0022F044 a00000b4 cbz      x0, #0x22f058
0022F048 088c44f8 ldr      x8, [x0, #0x48]!
0022F04C 080d40f9 ldr      x8, [x8, #0x18]
0022F050 00013fd6 blr      x8
0022F054 ff0700f9 str      xzr, [sp, #8]
0022F058 e00340f9 ldr      x0, [sp]
0022F05C a00000b4 cbz      x0, #0x22f070
0022F060 088c44f8 ldr      x8, [x0, #0x48]!
0022F064 080d40f9 ldr      x8, [x8, #0x18]
0022F068 00013fd6 blr      x8
0022F06C ff0300f9 str      xzr, [sp]
0022F070 680240f9 ldr      x8, [x19]
0022F074 e00313aa mov      x0, x19
0022F078 080d40f9 ldr      x8, [x8, #0x18]
0022F07C 00013fd6 blr      x8
0022F080 f44f43a9 ldp      x20, x19, [sp, #0x30]
0022F084 f65742a9 ldp      x22, x21, [sp, #0x20]
0022F088 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0022F08C ff030191 add      sp, sp, #0x40
0022F090 c0035fd6 ret      
0022F094 df4ef797 bl       #0x2c10
~~~
### 0x22f260 (24 slots)
~~~asm
0022F260 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0022F264 f44f01a9 stp      x20, x19, [sp, #0x10]
0022F268 fd030091 mov      x29, sp
0022F26C 882d00d0 adrp     x8, #0x7e1000
0022F270 08613691 add      x8, x8, #0xd98
0022F274 080140f9 ldr      x8, [x8]
0022F278 132940f9 ldr      x19, [x8, #0x50]
0022F27C b30100b4 cbz      x19, #0x22f2b0
0022F280 f40313aa mov      x20, x19
0022F284 888e44f8 ldr      x8, [x20, #0x48]!
0022F288 e00314aa mov      x0, x20
0022F28C 080940f9 ldr      x8, [x8, #0x10]
0022F290 00013fd6 blr      x8
0022F294 e00313aa mov      x0, x19
0022F298 367a0c94 bl       #0x54db70
0022F29C 880240f9 ldr      x8, [x20]
0022F2A0 13000052 eor      w19, w0, #1
0022F2A4 e00314aa mov      x0, x20
0022F2A8 080d40f9 ldr      x8, [x8, #0x18]
0022F2AC 00013fd6 blr      x8
0022F2B0 60020012 and      w0, w19, #1
0022F2B4 f44f41a9 ldp      x20, x19, [sp, #0x10]
0022F2B8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0022F2BC c0035fd6 ret      
~~~
### 0x22f2e0 (146 slots)
~~~asm
0022F2E0 ff0301d1 sub      sp, sp, #0x40
0022F2E4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0022F2E8 f65702a9 stp      x22, x21, [sp, #0x20]
0022F2EC f44f03a9 stp      x20, x19, [sp, #0x30]
0022F2F0 fd430091 add      x29, sp, #0x10
0022F2F4 f3c9ff97 bl       #0x221ac0
0022F2F8 089a8652 mov      w8, #0x34d0
0022F2FC 2801a072 movk     w8, #9, lsl #16
0022F300 1f6828b8 str      wzr, [x0, x8]
0022F304 d7730c94 bl       #0x54c260
0022F308 48d03bd5 mrs      x8, tpidr_el0
0022F30C 16c97392 and      x22, x8, #0xffffffffffffe000
0022F310 c84e40f9 ldr      x8, [x22, #0x98]
0022F314 1f4100f1 cmp      x8, #0x10
0022F318 60100054 b.eq     #0x22f524
0022F31C c80e088b add      x8, x22, x8, lsl #3
0022F320 01688052 mov      w1, #0x340
0022F324 02028052 mov      w2, #0x10
0022F328 f40300aa mov      x20, x0
0022F32C 000d00f9 str      x0, [x8, #0x18]
0022F330 c84e40f9 ldr      x8, [x22, #0x98]
0022F334 08050091 add      x8, x8, #1
0022F338 c84e00f9 str      x8, [x22, #0x98]
0022F33C 080040f9 ldr      x8, [x0]
0022F340 080940f9 ldr      x8, [x8, #0x10]
0022F344 00013fd6 blr      x8
0022F348 f50300aa mov      x21, x0
0022F34C a00000b5 cbnz     x0, #0x22f360
0022F350 880240f9 ldr      x8, [x20]
0022F354 e00314aa mov      x0, x20
0022F358 085d40f9 ldr      x8, [x8, #0xb8]
0022F35C 00013fd6 blr      x8
0022F360 e00315aa mov      x0, x21
0022F364 e10314aa mov      x1, x20
0022F368 e2031faa mov      x2, xzr
0022F36C 7b790c94 bl       #0x54d958
0022F370 882b00d0 adrp     x8, #0x7a1000
0022F374 f30315aa mov      x19, x21
0022F378 08dd43f9 ldr      x8, [x8, #0x7b8]
0022F37C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022F380 09c10191 add      x9, x8, #0x70
0022F384 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022F388 bf1201f9 str      xzr, [x21, #0x220]
0022F38C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022F390 bf1601f9 str      xzr, [x21, #0x228]
0022F394 bf1a01f9 str      xzr, [x21, #0x230]
0022F398 bf1e01f9 str      xzr, [x21, #0x238]
0022F39C bf5201f9 str      xzr, [x21, #0x2a0]
0022F3A0 bf5601f9 str      xzr, [x21, #0x2a8]
0022F3A4 bf5a01f9 str      xzr, [x21, #0x2b0]
0022F3A8 bf5e01f9 str      xzr, [x21, #0x2b8]
0022F3AC 698e04f8 str      x9, [x19, #0x48]!
0022F3B0 09c10291 add      x9, x8, #0xb0
0022F3B4 08410091 add      x8, x8, #0x10
0022F3B8 e00313aa mov      x0, x19
0022F3BC a92a00f9 str      x9, [x21, #0x50]
0022F3C0 09028052 mov      w9, #0x10
0022F3C4 bf820c39 strb     wzr, [x21, #0x320]
0022F3C8 bfa20c39 strb     wzr, [x21, #0x328]
0022F3CC bfc20c39 strb     wzr, [x21, #0x330]
0022F3D0 a91200f9 str      x9, [x21, #0x20]
0022F3D4 a85200a9 stp      x8, x20, [x21]
0022F3D8 08688052 mov      w8, #0x340
0022F3DC bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022F3E0 b52201a9 stp      x21, x8, [x21, #0x10]
0022F3E4 c84e40f9 ldr      x8, [x22, #0x98]
0022F3E8 080500d1 sub      x8, x8, #1
0022F3EC c84e00f9 str      x8, [x22, #0x98]
0022F3F0 680240f9 ldr      x8, [x19]
0022F3F4 080940f9 ldr      x8, [x8, #0x10]
0022F3F8 00013fd6 blr      x8
0022F3FC e8030091 mov      x8, sp
0022F400 e00315aa mov      x0, x21
0022F404 93a7fb97 bl       #0x119250
0022F408 e00340f9 ldr      x0, [sp]
0022F40C e8230091 add      x8, sp, #8
0022F410 46000094 bl       #0x22f528
0022F414 f40740f9 ldr      x20, [sp, #8]
0022F418 e00314aa mov      x0, x20
0022F41C 4d790c94 bl       #0x54d950
0022F420 80020035 cbnz     w0, #0x22f470
0022F424 881641f9 ldr      x8, [x20, #0x228]
0022F428 c80000b4 cbz      x8, #0x22f440
0022F42C 89820891 add      x9, x20, #0x220
0022F430 80020991 add      x0, x20, #0x240
0022F434 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0022F438 3f7d00a9 stp      xzr, xzr, [x9]
0022F43C 00013fd6 blr      x8
0022F440 1f2003d5 nop      
0022F444 e8a80310 adr      x8, #0x236960
0022F448 881201f9 str      x8, [x20, #0x220]
0022F44C 1f2003d5 nop      
0022F450 a9a90310 adr      x9, #0x236984
0022F454 891601f9 str      x9, [x20, #0x228]
0022F458 1f2003d5 nop      
0022F45C 6aa90310 adr      x10, #0x236988
0022F460 8a1a01f9 str      x10, [x20, #0x230]
0022F464 1f2003d5 nop      
0022F468 28a90310 adr      x8, #0x23698c
0022F46C 881e01f9 str      x8, [x20, #0x238]
0022F470 f50314aa mov      x21, x20
0022F474 a88e44f8 ldr      x8, [x21, #0x48]!
0022F478 e00315aa mov      x0, x21
0022F47C 080940f9 ldr      x8, [x8, #0x10]
0022F480 00013fd6 blr      x8
0022F484 e00314aa mov      x0, x20
0022F488 c2790c94 bl       #0x54db90
0022F48C a80240f9 ldr      x8, [x21]
0022F490 e00315aa mov      x0, x21
0022F494 080940f9 ldr      x8, [x8, #0x10]
0022F498 00013fd6 blr      x8
0022F49C 882d00d0 adrp     x8, #0x7e1000
0022F4A0 08613691 add      x8, x8, #0xd98
0022F4A4 160140f9 ldr      x22, [x8]
0022F4A8 c02a40f9 ldr      x0, [x22, #0x50]
0022F4AC 800000b4 cbz      x0, #0x22f4bc
0022F4B0 088c44f8 ldr      x8, [x0, #0x48]!
0022F4B4 080d40f9 ldr      x8, [x8, #0x18]
0022F4B8 00013fd6 blr      x8
0022F4BC d42a00f9 str      x20, [x22, #0x50]
0022F4C0 e00315aa mov      x0, x21
0022F4C4 882640f9 ldr      x8, [x20, #0x48]
0022F4C8 080d40f9 ldr      x8, [x8, #0x18]
0022F4CC 00013fd6 blr      x8
0022F4D0 e00740f9 ldr      x0, [sp, #8]
0022F4D4 a00000b4 cbz      x0, #0x22f4e8
0022F4D8 088c44f8 ldr      x8, [x0, #0x48]!
0022F4DC 080d40f9 ldr      x8, [x8, #0x18]
0022F4E0 00013fd6 blr      x8
0022F4E4 ff0700f9 str      xzr, [sp, #8]
0022F4E8 e00340f9 ldr      x0, [sp]
0022F4EC a00000b4 cbz      x0, #0x22f500
0022F4F0 088c44f8 ldr      x8, [x0, #0x48]!
0022F4F4 080d40f9 ldr      x8, [x8, #0x18]
0022F4F8 00013fd6 blr      x8
0022F4FC ff0300f9 str      xzr, [sp]
0022F500 680240f9 ldr      x8, [x19]
0022F504 e00313aa mov      x0, x19
0022F508 080d40f9 ldr      x8, [x8, #0x18]
0022F50C 00013fd6 blr      x8
0022F510 f44f43a9 ldp      x20, x19, [sp, #0x30]
0022F514 f65742a9 ldp      x22, x21, [sp, #0x20]
0022F518 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0022F51C ff030191 add      sp, sp, #0x40
0022F520 c0035fd6 ret      
0022F524 bb4df797 bl       #0x2c10
~~~
### 0x22f7b0 (184 slots)
~~~asm
0022F7B0 ff4301d1 sub      sp, sp, #0x50
0022F7B4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0022F7B8 f85f02a9 stp      x24, x23, [sp, #0x20]
0022F7BC f65703a9 stp      x22, x21, [sp, #0x30]
0022F7C0 f44f04a9 stp      x20, x19, [sp, #0x40]
0022F7C4 fd430091 add      x29, sp, #0x10
0022F7C8 c83d00b0 adrp     x8, #0x9e8000
0022F7CC 09f940b9 ldr      w9, [x8, #0xf8]
0022F7D0 a9130034 cbz      w9, #0x22fa44
0022F7D4 29050071 subs     w9, w9, #1
0022F7D8 09f900b9 str      w9, [x8, #0xf8]
0022F7DC cc130054 b.gt     #0x22fa54
0022F7E0 972d00d0 adrp     x23, #0x7e1000
0022F7E4 f7623691 add      x23, x23, #0xd98
0022F7E8 1ff900b9 str      wzr, [x8, #0xf8]
0022F7EC e80240f9 ldr      x8, [x23]
0022F7F0 132940f9 ldr      x19, [x8, #0x50]
0022F7F4 130100b4 cbz      x19, #0x22f814
0022F7F8 e00313aa mov      x0, x19
0022F7FC 088c44f8 ldr      x8, [x0, #0x48]!
0022F800 080940f9 ldr      x8, [x8, #0x10]
0022F804 00013fd6 blr      x8
0022F808 e00313aa mov      x0, x19
0022F80C d9780c94 bl       #0x54db70
0022F810 60120036 tbz      w0, #0, #0x22fa5c
0022F814 abc8ff97 bl       #0x221ac0
0022F818 880d9452 mov      w8, #0xa06c
0022F81C e800a072 movk     w8, #7, lsl #16
0022F820 086868b8 ldr      w8, [x0, x8]
0022F824 48100035 cbnz     w8, #0x22fa2c
0022F828 8e720c94 bl       #0x54c260
0022F82C 48d03bd5 mrs      x8, tpidr_el0
0022F830 18c97392 and      x24, x8, #0xffffffffffffe000
0022F834 084f40f9 ldr      x8, [x24, #0x98]
0022F838 1f4100f1 cmp      x8, #0x10
0022F83C 80120054 b.eq     #0x22fa8c
0022F840 080f088b add      x8, x24, x8, lsl #3
0022F844 01688052 mov      w1, #0x340
0022F848 02028052 mov      w2, #0x10
0022F84C f50300aa mov      x21, x0
0022F850 000d00f9 str      x0, [x8, #0x18]
0022F854 084f40f9 ldr      x8, [x24, #0x98]
0022F858 08050091 add      x8, x8, #1
0022F85C 084f00f9 str      x8, [x24, #0x98]
0022F860 080040f9 ldr      x8, [x0]
0022F864 080940f9 ldr      x8, [x8, #0x10]
0022F868 00013fd6 blr      x8
0022F86C f60300aa mov      x22, x0
0022F870 a00000b5 cbnz     x0, #0x22f884
0022F874 a80240f9 ldr      x8, [x21]
0022F878 e00315aa mov      x0, x21
0022F87C 085d40f9 ldr      x8, [x8, #0xb8]
0022F880 00013fd6 blr      x8
0022F884 e00316aa mov      x0, x22
0022F888 e10315aa mov      x1, x21
0022F88C e2031faa mov      x2, xzr
0022F890 32780c94 bl       #0x54d958
0022F894 882b00d0 adrp     x8, #0x7a1000
0022F898 f40316aa mov      x20, x22
0022F89C 08dd43f9 ldr      x8, [x8, #0x7b8]
0022F8A0 df7e12a9 stp      xzr, xzr, [x22, #0x120]
0022F8A4 09c10191 add      x9, x8, #0x70
0022F8A8 df7e13a9 stp      xzr, xzr, [x22, #0x130]
0022F8AC df1201f9 str      xzr, [x22, #0x220]
0022F8B0 df7e1aa9 stp      xzr, xzr, [x22, #0x1a0]
0022F8B4 df1601f9 str      xzr, [x22, #0x228]
0022F8B8 df1a01f9 str      xzr, [x22, #0x230]
0022F8BC df1e01f9 str      xzr, [x22, #0x238]
0022F8C0 df5201f9 str      xzr, [x22, #0x2a0]
0022F8C4 df5601f9 str      xzr, [x22, #0x2a8]
0022F8C8 df5a01f9 str      xzr, [x22, #0x2b0]
0022F8CC df5e01f9 str      xzr, [x22, #0x2b8]
0022F8D0 898e04f8 str      x9, [x20, #0x48]!
0022F8D4 09c10291 add      x9, x8, #0xb0
0022F8D8 08410091 add      x8, x8, #0x10
0022F8DC e00314aa mov      x0, x20
0022F8E0 c92a00f9 str      x9, [x22, #0x50]
0022F8E4 09028052 mov      w9, #0x10
0022F8E8 df820c39 strb     wzr, [x22, #0x320]
0022F8EC dfa20c39 strb     wzr, [x22, #0x328]
0022F8F0 dfc20c39 strb     wzr, [x22, #0x330]
0022F8F4 c91200f9 str      x9, [x22, #0x20]
0022F8F8 c85600a9 stp      x8, x21, [x22]
0022F8FC 08688052 mov      w8, #0x340
0022F900 df7e1ba9 stp      xzr, xzr, [x22, #0x1b0]
0022F904 d62201a9 stp      x22, x8, [x22, #0x10]
0022F908 084f40f9 ldr      x8, [x24, #0x98]
0022F90C 080500d1 sub      x8, x8, #1
0022F910 084f00f9 str      x8, [x24, #0x98]
0022F914 880240f9 ldr      x8, [x20]
0022F918 080940f9 ldr      x8, [x8, #0x10]
0022F91C 00013fd6 blr      x8
0022F920 e8030091 mov      x8, sp
0022F924 e00316aa mov      x0, x22
0022F928 4aa6fb97 bl       #0x119250
0022F92C e00340f9 ldr      x0, [sp]
0022F930 e8230091 add      x8, sp, #8
0022F934 57000094 bl       #0x22fa90
0022F938 f50740f9 ldr      x21, [sp, #8]
0022F93C e00315aa mov      x0, x21
0022F940 04780c94 bl       #0x54d950
0022F944 80020035 cbnz     w0, #0x22f994
0022F948 a81641f9 ldr      x8, [x21, #0x228]
0022F94C c80000b4 cbz      x8, #0x22f964
0022F950 a9820891 add      x9, x21, #0x220
0022F954 a0020991 add      x0, x21, #0x240
0022F958 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0022F95C 3f7d00a9 stp      xzr, xzr, [x9]
0022F960 00013fd6 blr      x8
0022F964 1f2003d5 nop      
0022F968 48e80310 adr      x8, #0x237670
0022F96C a81201f9 str      x8, [x21, #0x220]
0022F970 1f2003d5 nop      
0022F974 09e90310 adr      x9, #0x237694
0022F978 a91601f9 str      x9, [x21, #0x228]
0022F97C 1f2003d5 nop      
0022F980 cae80310 adr      x10, #0x237698
0022F984 aa1a01f9 str      x10, [x21, #0x230]
0022F988 1f2003d5 nop      
0022F98C 88e80310 adr      x8, #0x23769c
0022F990 a81e01f9 str      x8, [x21, #0x238]
0022F994 f60315aa mov      x22, x21
0022F998 c88e44f8 ldr      x8, [x22, #0x48]!
0022F99C e00316aa mov      x0, x22
0022F9A0 080940f9 ldr      x8, [x8, #0x10]
0022F9A4 00013fd6 blr      x8
0022F9A8 e00315aa mov      x0, x21
0022F9AC 79780c94 bl       #0x54db90
0022F9B0 c80240f9 ldr      x8, [x22]
0022F9B4 e00316aa mov      x0, x22
0022F9B8 080940f9 ldr      x8, [x8, #0x10]
0022F9BC 00013fd6 blr      x8
0022F9C0 f70240f9 ldr      x23, [x23]
0022F9C4 e02a40f9 ldr      x0, [x23, #0x50]
0022F9C8 800000b4 cbz      x0, #0x22f9d8
0022F9CC 088c44f8 ldr      x8, [x0, #0x48]!
0022F9D0 080d40f9 ldr      x8, [x8, #0x18]
0022F9D4 00013fd6 blr      x8
0022F9D8 f52a00f9 str      x21, [x23, #0x50]
0022F9DC e00316aa mov      x0, x22
0022F9E0 a82640f9 ldr      x8, [x21, #0x48]
0022F9E4 080d40f9 ldr      x8, [x8, #0x18]
0022F9E8 00013fd6 blr      x8
0022F9EC e00740f9 ldr      x0, [sp, #8]
0022F9F0 a00000b4 cbz      x0, #0x22fa04
0022F9F4 088c44f8 ldr      x8, [x0, #0x48]!
0022F9F8 080d40f9 ldr      x8, [x8, #0x18]
0022F9FC 00013fd6 blr      x8
0022FA00 ff0700f9 str      xzr, [sp, #8]
0022FA04 e00340f9 ldr      x0, [sp]
0022FA08 a00000b4 cbz      x0, #0x22fa1c
0022FA0C 088c44f8 ldr      x8, [x0, #0x48]!
0022FA10 080d40f9 ldr      x8, [x8, #0x18]
0022FA14 00013fd6 blr      x8
0022FA18 ff0300f9 str      xzr, [sp]
0022FA1C 880240f9 ldr      x8, [x20]
0022FA20 e00314aa mov      x0, x20
0022FA24 080d40f9 ldr      x8, [x8, #0x18]
0022FA28 00013fd6 blr      x8
0022FA2C 25c8ff97 bl       #0x221ac0
0022FA30 880d9452 mov      w8, #0xa06c
0022FA34 e800a072 movk     w8, #7, lsl #16
0022FA38 146868b8 ldr      w20, [x0, x8]
0022FA3C 330100b5 cbnz     x19, #0x22fa60
0022FA40 0c000014 b        #0x22fa70
0022FA44 69078052 mov      w9, #0x3b
0022FA48 f4031f2a mov      w20, wzr
0022FA4C 09f900b9 str      w9, [x8, #0xf8]
0022FA50 08000014 b        #0x22fa70
0022FA54 f4031f2a mov      w20, wzr
0022FA58 06000014 b        #0x22fa70
0022FA5C f4031f2a mov      w20, wzr
0022FA60 688e44f8 ldr      x8, [x19, #0x48]!
0022FA64 e00313aa mov      x0, x19
0022FA68 080d40f9 ldr      x8, [x8, #0x18]
0022FA6C 00013fd6 blr      x8
0022FA70 e003142a mov      w0, w20
0022FA74 f44f44a9 ldp      x20, x19, [sp, #0x40]
0022FA78 f65743a9 ldp      x22, x21, [sp, #0x30]
0022FA7C f85f42a9 ldp      x24, x23, [sp, #0x20]
0022FA80 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0022FA84 ff430191 add      sp, sp, #0x50
0022FA88 c0035fd6 ret      
0022FA8C 614cf797 bl       #0x2c10
~~~
### 0x22fc50 (142 slots)
~~~asm
0022FC50 ff0301d1 sub      sp, sp, #0x40
0022FC54 fd7b01a9 stp      x29, x30, [sp, #0x10]
0022FC58 f65702a9 stp      x22, x21, [sp, #0x20]
0022FC5C f44f03a9 stp      x20, x19, [sp, #0x30]
0022FC60 fd430091 add      x29, sp, #0x10
0022FC64 7f710c94 bl       #0x54c260
0022FC68 48d03bd5 mrs      x8, tpidr_el0
0022FC6C 16c97392 and      x22, x8, #0xffffffffffffe000
0022FC70 c84e40f9 ldr      x8, [x22, #0x98]
0022FC74 1f4100f1 cmp      x8, #0x10
0022FC78 60100054 b.eq     #0x22fe84
0022FC7C c80e088b add      x8, x22, x8, lsl #3
0022FC80 01688052 mov      w1, #0x340
0022FC84 02028052 mov      w2, #0x10
0022FC88 f40300aa mov      x20, x0
0022FC8C 000d00f9 str      x0, [x8, #0x18]
0022FC90 c84e40f9 ldr      x8, [x22, #0x98]
0022FC94 08050091 add      x8, x8, #1
0022FC98 c84e00f9 str      x8, [x22, #0x98]
0022FC9C 080040f9 ldr      x8, [x0]
0022FCA0 080940f9 ldr      x8, [x8, #0x10]
0022FCA4 00013fd6 blr      x8
0022FCA8 f50300aa mov      x21, x0
0022FCAC a00000b5 cbnz     x0, #0x22fcc0
0022FCB0 880240f9 ldr      x8, [x20]
0022FCB4 e00314aa mov      x0, x20
0022FCB8 085d40f9 ldr      x8, [x8, #0xb8]
0022FCBC 00013fd6 blr      x8
0022FCC0 e00315aa mov      x0, x21
0022FCC4 e10314aa mov      x1, x20
0022FCC8 e2031faa mov      x2, xzr
0022FCCC 23770c94 bl       #0x54d958
0022FCD0 882b00d0 adrp     x8, #0x7a1000
0022FCD4 f30315aa mov      x19, x21
0022FCD8 08dd43f9 ldr      x8, [x8, #0x7b8]
0022FCDC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
0022FCE0 09c10191 add      x9, x8, #0x70
0022FCE4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0022FCE8 bf1201f9 str      xzr, [x21, #0x220]
0022FCEC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
0022FCF0 bf1601f9 str      xzr, [x21, #0x228]
0022FCF4 bf1a01f9 str      xzr, [x21, #0x230]
0022FCF8 bf1e01f9 str      xzr, [x21, #0x238]
0022FCFC bf5201f9 str      xzr, [x21, #0x2a0]
0022FD00 bf5601f9 str      xzr, [x21, #0x2a8]
0022FD04 bf5a01f9 str      xzr, [x21, #0x2b0]
0022FD08 bf5e01f9 str      xzr, [x21, #0x2b8]
0022FD0C 698e04f8 str      x9, [x19, #0x48]!
0022FD10 09c10291 add      x9, x8, #0xb0
0022FD14 08410091 add      x8, x8, #0x10
0022FD18 e00313aa mov      x0, x19
0022FD1C a92a00f9 str      x9, [x21, #0x50]
0022FD20 09028052 mov      w9, #0x10
0022FD24 bf820c39 strb     wzr, [x21, #0x320]
0022FD28 bfa20c39 strb     wzr, [x21, #0x328]
0022FD2C bfc20c39 strb     wzr, [x21, #0x330]
0022FD30 a91200f9 str      x9, [x21, #0x20]
0022FD34 a85200a9 stp      x8, x20, [x21]
0022FD38 08688052 mov      w8, #0x340
0022FD3C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
0022FD40 b52201a9 stp      x21, x8, [x21, #0x10]
0022FD44 c84e40f9 ldr      x8, [x22, #0x98]
0022FD48 080500d1 sub      x8, x8, #1
0022FD4C c84e00f9 str      x8, [x22, #0x98]
0022FD50 680240f9 ldr      x8, [x19]
0022FD54 080940f9 ldr      x8, [x8, #0x10]
0022FD58 00013fd6 blr      x8
0022FD5C e8030091 mov      x8, sp
0022FD60 e00315aa mov      x0, x21
0022FD64 3ba5fb97 bl       #0x119250
0022FD68 e00340f9 ldr      x0, [sp]
0022FD6C e8230091 add      x8, sp, #8
0022FD70 46000094 bl       #0x22fe88
0022FD74 f40740f9 ldr      x20, [sp, #8]
0022FD78 e00314aa mov      x0, x20
0022FD7C f5760c94 bl       #0x54d950
0022FD80 80020035 cbnz     w0, #0x22fdd0
0022FD84 881641f9 ldr      x8, [x20, #0x228]
0022FD88 c80000b4 cbz      x8, #0x22fda0
0022FD8C 89820891 add      x9, x20, #0x220
0022FD90 80020991 add      x0, x20, #0x240
0022FD94 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0022FD98 3f7d00a9 stp      xzr, xzr, [x9]
0022FD9C 00013fd6 blr      x8
0022FDA0 1f2003d5 nop      
0022FDA4 e82e0410 adr      x8, #0x238380
0022FDA8 881201f9 str      x8, [x20, #0x220]
0022FDAC 1f2003d5 nop      
0022FDB0 a92f0410 adr      x9, #0x2383a4
0022FDB4 891601f9 str      x9, [x20, #0x228]
0022FDB8 1f2003d5 nop      
0022FDBC 6a2f0410 adr      x10, #0x2383a8
0022FDC0 8a1a01f9 str      x10, [x20, #0x230]
0022FDC4 1f2003d5 nop      
0022FDC8 282f0410 adr      x8, #0x2383ac
0022FDCC 881e01f9 str      x8, [x20, #0x238]
0022FDD0 f50314aa mov      x21, x20
0022FDD4 a88e44f8 ldr      x8, [x21, #0x48]!
0022FDD8 e00315aa mov      x0, x21
0022FDDC 080940f9 ldr      x8, [x8, #0x10]
0022FDE0 00013fd6 blr      x8
0022FDE4 e00314aa mov      x0, x20
0022FDE8 6a770c94 bl       #0x54db90
0022FDEC a80240f9 ldr      x8, [x21]
0022FDF0 e00315aa mov      x0, x21
0022FDF4 080940f9 ldr      x8, [x8, #0x10]
0022FDF8 00013fd6 blr      x8
0022FDFC 882d00d0 adrp     x8, #0x7e1000
0022FE00 08613691 add      x8, x8, #0xd98
0022FE04 160140f9 ldr      x22, [x8]
0022FE08 c02a40f9 ldr      x0, [x22, #0x50]
0022FE0C 800000b4 cbz      x0, #0x22fe1c
0022FE10 088c44f8 ldr      x8, [x0, #0x48]!
0022FE14 080d40f9 ldr      x8, [x8, #0x18]
0022FE18 00013fd6 blr      x8
0022FE1C d42a00f9 str      x20, [x22, #0x50]
0022FE20 e00315aa mov      x0, x21
0022FE24 882640f9 ldr      x8, [x20, #0x48]
0022FE28 080d40f9 ldr      x8, [x8, #0x18]
0022FE2C 00013fd6 blr      x8
0022FE30 e00740f9 ldr      x0, [sp, #8]
0022FE34 a00000b4 cbz      x0, #0x22fe48
0022FE38 088c44f8 ldr      x8, [x0, #0x48]!
0022FE3C 080d40f9 ldr      x8, [x8, #0x18]
0022FE40 00013fd6 blr      x8
0022FE44 ff0700f9 str      xzr, [sp, #8]
0022FE48 e00340f9 ldr      x0, [sp]
0022FE4C a00000b4 cbz      x0, #0x22fe60
0022FE50 088c44f8 ldr      x8, [x0, #0x48]!
0022FE54 080d40f9 ldr      x8, [x8, #0x18]
0022FE58 00013fd6 blr      x8
0022FE5C ff0300f9 str      xzr, [sp]
0022FE60 680240f9 ldr      x8, [x19]
0022FE64 e00313aa mov      x0, x19
0022FE68 080d40f9 ldr      x8, [x8, #0x18]
0022FE6C 00013fd6 blr      x8
0022FE70 f44f43a9 ldp      x20, x19, [sp, #0x30]
0022FE74 f65742a9 ldp      x22, x21, [sp, #0x20]
0022FE78 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0022FE7C ff030191 add      sp, sp, #0x40
0022FE80 c0035fd6 ret      
0022FE84 634bf797 bl       #0x2c10
~~~
### 0x230050 (24 slots)
~~~asm
00230050 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00230054 f44f01a9 stp      x20, x19, [sp, #0x10]
00230058 fd030091 mov      x29, sp
0023005C 882d00b0 adrp     x8, #0x7e1000
00230060 08613691 add      x8, x8, #0xd98
00230064 080140f9 ldr      x8, [x8]
00230068 132940f9 ldr      x19, [x8, #0x50]
0023006C b30100b4 cbz      x19, #0x2300a0
00230070 f40313aa mov      x20, x19
00230074 888e44f8 ldr      x8, [x20, #0x48]!
00230078 e00314aa mov      x0, x20
0023007C 080940f9 ldr      x8, [x8, #0x10]
00230080 00013fd6 blr      x8
00230084 e00313aa mov      x0, x19
00230088 ba760c94 bl       #0x54db70
0023008C 880240f9 ldr      x8, [x20]
00230090 13000052 eor      w19, w0, #1
00230094 e00314aa mov      x0, x20
00230098 080d40f9 ldr      x8, [x8, #0x18]
0023009C 00013fd6 blr      x8
002300A0 60020012 and      w0, w19, #1
002300A4 f44f41a9 ldp      x20, x19, [sp, #0x10]
002300A8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
002300AC c0035fd6 ret      
~~~
### 0x2300b0 (147 slots)
~~~asm
002300B0 ff0301d1 sub      sp, sp, #0x40
002300B4 fd7b01a9 stp      x29, x30, [sp, #0x10]
002300B8 f65702a9 stp      x22, x21, [sp, #0x20]
002300BC f44f03a9 stp      x20, x19, [sp, #0x30]
002300C0 fd430091 add      x29, sp, #0x10
002300C4 f303002a mov      w19, w0
002300C8 7ec6ff97 bl       #0x221ac0
002300CC 88099652 mov      w8, #0xb04c
002300D0 e800a072 movk     w8, #7, lsl #16
002300D4 136828b8 str      w19, [x0, x8]
002300D8 62700c94 bl       #0x54c260
002300DC 48d03bd5 mrs      x8, tpidr_el0
002300E0 16c97392 and      x22, x8, #0xffffffffffffe000
002300E4 c84e40f9 ldr      x8, [x22, #0x98]
002300E8 1f4100f1 cmp      x8, #0x10
002300EC 60100054 b.eq     #0x2302f8
002300F0 c80e088b add      x8, x22, x8, lsl #3
002300F4 01688052 mov      w1, #0x340
002300F8 02028052 mov      w2, #0x10
002300FC f40300aa mov      x20, x0
00230100 000d00f9 str      x0, [x8, #0x18]
00230104 c84e40f9 ldr      x8, [x22, #0x98]
00230108 08050091 add      x8, x8, #1
0023010C c84e00f9 str      x8, [x22, #0x98]
00230110 080040f9 ldr      x8, [x0]
00230114 080940f9 ldr      x8, [x8, #0x10]
00230118 00013fd6 blr      x8
0023011C f50300aa mov      x21, x0
00230120 a00000b5 cbnz     x0, #0x230134
00230124 880240f9 ldr      x8, [x20]
00230128 e00314aa mov      x0, x20
0023012C 085d40f9 ldr      x8, [x8, #0xb8]
00230130 00013fd6 blr      x8
00230134 e00315aa mov      x0, x21
00230138 e10314aa mov      x1, x20
0023013C e2031faa mov      x2, xzr
00230140 06760c94 bl       #0x54d958
00230144 882b00b0 adrp     x8, #0x7a1000
00230148 f30315aa mov      x19, x21
0023014C 08dd43f9 ldr      x8, [x8, #0x7b8]
00230150 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00230154 09c10191 add      x9, x8, #0x70
00230158 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
0023015C bf1201f9 str      xzr, [x21, #0x220]
00230160 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00230164 bf1601f9 str      xzr, [x21, #0x228]
00230168 bf1a01f9 str      xzr, [x21, #0x230]
0023016C bf1e01f9 str      xzr, [x21, #0x238]
00230170 bf5201f9 str      xzr, [x21, #0x2a0]
00230174 bf5601f9 str      xzr, [x21, #0x2a8]
00230178 bf5a01f9 str      xzr, [x21, #0x2b0]
0023017C bf5e01f9 str      xzr, [x21, #0x2b8]
00230180 698e04f8 str      x9, [x19, #0x48]!
00230184 09c10291 add      x9, x8, #0xb0
00230188 08410091 add      x8, x8, #0x10
0023018C e00313aa mov      x0, x19
00230190 a92a00f9 str      x9, [x21, #0x50]
00230194 09028052 mov      w9, #0x10
00230198 bf820c39 strb     wzr, [x21, #0x320]
0023019C bfa20c39 strb     wzr, [x21, #0x328]
002301A0 bfc20c39 strb     wzr, [x21, #0x330]
002301A4 a91200f9 str      x9, [x21, #0x20]
002301A8 a85200a9 stp      x8, x20, [x21]
002301AC 08688052 mov      w8, #0x340
002301B0 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
002301B4 b52201a9 stp      x21, x8, [x21, #0x10]
002301B8 c84e40f9 ldr      x8, [x22, #0x98]
002301BC 080500d1 sub      x8, x8, #1
002301C0 c84e00f9 str      x8, [x22, #0x98]
002301C4 680240f9 ldr      x8, [x19]
002301C8 080940f9 ldr      x8, [x8, #0x10]
002301CC 00013fd6 blr      x8
002301D0 e8030091 mov      x8, sp
002301D4 e00315aa mov      x0, x21
002301D8 1ea4fb97 bl       #0x119250
002301DC e00340f9 ldr      x0, [sp]
002301E0 e8230091 add      x8, sp, #8
002301E4 46000094 bl       #0x2302fc
002301E8 f40740f9 ldr      x20, [sp, #8]
002301EC e00314aa mov      x0, x20
002301F0 d8750c94 bl       #0x54d950
002301F4 80020035 cbnz     w0, #0x230244
002301F8 881641f9 ldr      x8, [x20, #0x228]
002301FC c80000b4 cbz      x8, #0x230214
00230200 89820891 add      x9, x20, #0x220
00230204 80020991 add      x0, x20, #0x240
00230208 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0023020C 3f7d00a9 stp      xzr, xzr, [x9]
00230210 00013fd6 blr      x8
00230214 1f2003d5 nop      
00230218 28750410 adr      x8, #0x2390bc
0023021C 881201f9 str      x8, [x20, #0x220]
00230220 1f2003d5 nop      
00230224 e9750410 adr      x9, #0x2390e0
00230228 891601f9 str      x9, [x20, #0x228]
0023022C 1f2003d5 nop      
00230230 aa750410 adr      x10, #0x2390e4
00230234 8a1a01f9 str      x10, [x20, #0x230]
00230238 1f2003d5 nop      
0023023C 68750410 adr      x8, #0x2390e8
00230240 881e01f9 str      x8, [x20, #0x238]
00230244 f50314aa mov      x21, x20
00230248 a88e44f8 ldr      x8, [x21, #0x48]!
0023024C e00315aa mov      x0, x21
00230250 080940f9 ldr      x8, [x8, #0x10]
00230254 00013fd6 blr      x8
00230258 e00314aa mov      x0, x20
0023025C 4d760c94 bl       #0x54db90
00230260 a80240f9 ldr      x8, [x21]
00230264 e00315aa mov      x0, x21
00230268 080940f9 ldr      x8, [x8, #0x10]
0023026C 00013fd6 blr      x8
00230270 882d00b0 adrp     x8, #0x7e1000
00230274 08613691 add      x8, x8, #0xd98
00230278 160140f9 ldr      x22, [x8]
0023027C c02a40f9 ldr      x0, [x22, #0x50]
00230280 800000b4 cbz      x0, #0x230290
00230284 088c44f8 ldr      x8, [x0, #0x48]!
00230288 080d40f9 ldr      x8, [x8, #0x18]
0023028C 00013fd6 blr      x8
00230290 d42a00f9 str      x20, [x22, #0x50]
00230294 e00315aa mov      x0, x21
00230298 882640f9 ldr      x8, [x20, #0x48]
0023029C 080d40f9 ldr      x8, [x8, #0x18]
002302A0 00013fd6 blr      x8
002302A4 e00740f9 ldr      x0, [sp, #8]
002302A8 a00000b4 cbz      x0, #0x2302bc
002302AC 088c44f8 ldr      x8, [x0, #0x48]!
002302B0 080d40f9 ldr      x8, [x8, #0x18]
002302B4 00013fd6 blr      x8
002302B8 ff0700f9 str      xzr, [sp, #8]
002302BC e00340f9 ldr      x0, [sp]
002302C0 a00000b4 cbz      x0, #0x2302d4
002302C4 088c44f8 ldr      x8, [x0, #0x48]!
002302C8 080d40f9 ldr      x8, [x8, #0x18]
002302CC 00013fd6 blr      x8
002302D0 ff0300f9 str      xzr, [sp]
002302D4 680240f9 ldr      x8, [x19]
002302D8 e00313aa mov      x0, x19
002302DC 080d40f9 ldr      x8, [x8, #0x18]
002302E0 00013fd6 blr      x8
002302E4 f44f43a9 ldp      x20, x19, [sp, #0x30]
002302E8 f65742a9 ldp      x22, x21, [sp, #0x20]
002302EC fd7b41a9 ldp      x29, x30, [sp, #0x10]
002302F0 ff030191 add      sp, sp, #0x40
002302F4 c0035fd6 ret      
002302F8 464af797 bl       #0x2c10
~~~
### 0x2304c0 (24 slots)
~~~asm
002304C0 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
002304C4 f44f01a9 stp      x20, x19, [sp, #0x10]
002304C8 fd030091 mov      x29, sp
002304CC 882d00b0 adrp     x8, #0x7e1000
002304D0 08613691 add      x8, x8, #0xd98
002304D4 080140f9 ldr      x8, [x8]
002304D8 132940f9 ldr      x19, [x8, #0x50]
002304DC b30100b4 cbz      x19, #0x230510
002304E0 f40313aa mov      x20, x19
002304E4 888e44f8 ldr      x8, [x20, #0x48]!
002304E8 e00314aa mov      x0, x20
002304EC 080940f9 ldr      x8, [x8, #0x10]
002304F0 00013fd6 blr      x8
002304F4 e00313aa mov      x0, x19
002304F8 9e750c94 bl       #0x54db70
002304FC 880240f9 ldr      x8, [x20]
00230500 13000052 eor      w19, w0, #1
00230504 e00314aa mov      x0, x20
00230508 080d40f9 ldr      x8, [x8, #0x18]
0023050C 00013fd6 blr      x8
00230510 60020012 and      w0, w19, #1
00230514 f44f41a9 ldp      x20, x19, [sp, #0x10]
00230518 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0023051C c0035fd6 ret      
~~~
### 0x230520 (147 slots)
~~~asm
00230520 ff0301d1 sub      sp, sp, #0x40
00230524 fd7b01a9 stp      x29, x30, [sp, #0x10]
00230528 f65702a9 stp      x22, x21, [sp, #0x20]
0023052C f44f03a9 stp      x20, x19, [sp, #0x30]
00230530 fd430091 add      x29, sp, #0x10
00230534 63c5ff97 bl       #0x221ac0
00230538 88b68652 mov      w8, #0x35b4
0023053C 2803a072 movk     w8, #0x19, lsl #16
00230540 49008052 mov      w9, #2
00230544 096828b8 str      w9, [x0, x8]
00230548 466f0c94 bl       #0x54c260
0023054C 48d03bd5 mrs      x8, tpidr_el0
00230550 16c97392 and      x22, x8, #0xffffffffffffe000
00230554 c84e40f9 ldr      x8, [x22, #0x98]
00230558 1f4100f1 cmp      x8, #0x10
0023055C 60100054 b.eq     #0x230768
00230560 c80e088b add      x8, x22, x8, lsl #3
00230564 01688052 mov      w1, #0x340
00230568 02028052 mov      w2, #0x10
0023056C f40300aa mov      x20, x0
00230570 000d00f9 str      x0, [x8, #0x18]
00230574 c84e40f9 ldr      x8, [x22, #0x98]
00230578 08050091 add      x8, x8, #1
0023057C c84e00f9 str      x8, [x22, #0x98]
00230580 080040f9 ldr      x8, [x0]
00230584 080940f9 ldr      x8, [x8, #0x10]
00230588 00013fd6 blr      x8
0023058C f50300aa mov      x21, x0
00230590 a00000b5 cbnz     x0, #0x2305a4
00230594 880240f9 ldr      x8, [x20]
00230598 e00314aa mov      x0, x20
0023059C 085d40f9 ldr      x8, [x8, #0xb8]
002305A0 00013fd6 blr      x8
002305A4 e00315aa mov      x0, x21
002305A8 e10314aa mov      x1, x20
002305AC e2031faa mov      x2, xzr
002305B0 ea740c94 bl       #0x54d958
002305B4 882b00b0 adrp     x8, #0x7a1000
002305B8 f30315aa mov      x19, x21
002305BC 08dd43f9 ldr      x8, [x8, #0x7b8]
002305C0 bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002305C4 09c10191 add      x9, x8, #0x70
002305C8 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002305CC bf1201f9 str      xzr, [x21, #0x220]
002305D0 bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002305D4 bf1601f9 str      xzr, [x21, #0x228]
002305D8 bf1a01f9 str      xzr, [x21, #0x230]
002305DC bf1e01f9 str      xzr, [x21, #0x238]
002305E0 bf5201f9 str      xzr, [x21, #0x2a0]
002305E4 bf5601f9 str      xzr, [x21, #0x2a8]
002305E8 bf5a01f9 str      xzr, [x21, #0x2b0]
002305EC bf5e01f9 str      xzr, [x21, #0x2b8]
002305F0 698e04f8 str      x9, [x19, #0x48]!
002305F4 09c10291 add      x9, x8, #0xb0
002305F8 08410091 add      x8, x8, #0x10
002305FC e00313aa mov      x0, x19
00230600 a92a00f9 str      x9, [x21, #0x50]
00230604 09028052 mov      w9, #0x10
00230608 bf820c39 strb     wzr, [x21, #0x320]
0023060C bfa20c39 strb     wzr, [x21, #0x328]
00230610 bfc20c39 strb     wzr, [x21, #0x330]
00230614 a91200f9 str      x9, [x21, #0x20]
00230618 a85200a9 stp      x8, x20, [x21]
0023061C 08688052 mov      w8, #0x340
00230620 bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00230624 b52201a9 stp      x21, x8, [x21, #0x10]
00230628 c84e40f9 ldr      x8, [x22, #0x98]
0023062C 080500d1 sub      x8, x8, #1
00230630 c84e00f9 str      x8, [x22, #0x98]
00230634 680240f9 ldr      x8, [x19]
00230638 080940f9 ldr      x8, [x8, #0x10]
0023063C 00013fd6 blr      x8
00230640 e8030091 mov      x8, sp
00230644 e00315aa mov      x0, x21
00230648 02a3fb97 bl       #0x119250
0023064C e00340f9 ldr      x0, [sp]
00230650 e8230091 add      x8, sp, #8
00230654 46000094 bl       #0x23076c
00230658 f40740f9 ldr      x20, [sp, #8]
0023065C e00314aa mov      x0, x20
00230660 bc740c94 bl       #0x54d950
00230664 80020035 cbnz     w0, #0x2306b4
00230668 881641f9 ldr      x8, [x20, #0x228]
0023066C c80000b4 cbz      x8, #0x230684
00230670 89820891 add      x9, x20, #0x220
00230674 80020991 add      x0, x20, #0x240
00230678 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
0023067C 3f7d00a9 stp      xzr, xzr, [x9]
00230680 00013fd6 blr      x8
00230684 1f2003d5 nop      
00230688 48ba0410 adr      x8, #0x239dd0
0023068C 881201f9 str      x8, [x20, #0x220]
00230690 1f2003d5 nop      
00230694 09bb0410 adr      x9, #0x239df4
00230698 891601f9 str      x9, [x20, #0x228]
0023069C 1f2003d5 nop      
002306A0 caba0410 adr      x10, #0x239df8
002306A4 8a1a01f9 str      x10, [x20, #0x230]
002306A8 1f2003d5 nop      
002306AC 88ba0410 adr      x8, #0x239dfc
002306B0 881e01f9 str      x8, [x20, #0x238]
002306B4 f50314aa mov      x21, x20
002306B8 a88e44f8 ldr      x8, [x21, #0x48]!
002306BC e00315aa mov      x0, x21
002306C0 080940f9 ldr      x8, [x8, #0x10]
002306C4 00013fd6 blr      x8
002306C8 e00314aa mov      x0, x20
002306CC 31750c94 bl       #0x54db90
002306D0 a80240f9 ldr      x8, [x21]
002306D4 e00315aa mov      x0, x21
002306D8 080940f9 ldr      x8, [x8, #0x10]
002306DC 00013fd6 blr      x8
002306E0 882d00b0 adrp     x8, #0x7e1000
002306E4 08613691 add      x8, x8, #0xd98
002306E8 160140f9 ldr      x22, [x8]
002306EC c02a40f9 ldr      x0, [x22, #0x50]
002306F0 800000b4 cbz      x0, #0x230700
002306F4 088c44f8 ldr      x8, [x0, #0x48]!
002306F8 080d40f9 ldr      x8, [x8, #0x18]
002306FC 00013fd6 blr      x8
00230700 d42a00f9 str      x20, [x22, #0x50]
00230704 e00315aa mov      x0, x21
00230708 882640f9 ldr      x8, [x20, #0x48]
0023070C 080d40f9 ldr      x8, [x8, #0x18]
00230710 00013fd6 blr      x8
00230714 e00740f9 ldr      x0, [sp, #8]
00230718 a00000b4 cbz      x0, #0x23072c
0023071C 088c44f8 ldr      x8, [x0, #0x48]!
00230720 080d40f9 ldr      x8, [x8, #0x18]
00230724 00013fd6 blr      x8
00230728 ff0700f9 str      xzr, [sp, #8]
0023072C e00340f9 ldr      x0, [sp]
00230730 a00000b4 cbz      x0, #0x230744
00230734 088c44f8 ldr      x8, [x0, #0x48]!
00230738 080d40f9 ldr      x8, [x8, #0x18]
0023073C 00013fd6 blr      x8
00230740 ff0300f9 str      xzr, [sp]
00230744 680240f9 ldr      x8, [x19]
00230748 e00313aa mov      x0, x19
0023074C 080d40f9 ldr      x8, [x8, #0x18]
00230750 00013fd6 blr      x8
00230754 f44f43a9 ldp      x20, x19, [sp, #0x30]
00230758 f65742a9 ldp      x22, x21, [sp, #0x20]
0023075C fd7b41a9 ldp      x29, x30, [sp, #0x10]
00230760 ff030191 add      sp, sp, #0x40
00230764 c0035fd6 ret      
00230768 2a49f797 bl       #0x2c10
~~~
### 0x230930 (142 slots)
~~~asm
00230930 ff0301d1 sub      sp, sp, #0x40
00230934 fd7b01a9 stp      x29, x30, [sp, #0x10]
00230938 f65702a9 stp      x22, x21, [sp, #0x20]
0023093C f44f03a9 stp      x20, x19, [sp, #0x30]
00230940 fd430091 add      x29, sp, #0x10
00230944 476e0c94 bl       #0x54c260
00230948 48d03bd5 mrs      x8, tpidr_el0
0023094C 16c97392 and      x22, x8, #0xffffffffffffe000
00230950 c84e40f9 ldr      x8, [x22, #0x98]
00230954 1f4100f1 cmp      x8, #0x10
00230958 60100054 b.eq     #0x230b64
0023095C c80e088b add      x8, x22, x8, lsl #3
00230960 01688052 mov      w1, #0x340
00230964 02028052 mov      w2, #0x10
00230968 f40300aa mov      x20, x0
0023096C 000d00f9 str      x0, [x8, #0x18]
00230970 c84e40f9 ldr      x8, [x22, #0x98]
00230974 08050091 add      x8, x8, #1
00230978 c84e00f9 str      x8, [x22, #0x98]
0023097C 080040f9 ldr      x8, [x0]
00230980 080940f9 ldr      x8, [x8, #0x10]
00230984 00013fd6 blr      x8
00230988 f50300aa mov      x21, x0
0023098C a00000b5 cbnz     x0, #0x2309a0
00230990 880240f9 ldr      x8, [x20]
00230994 e00314aa mov      x0, x20
00230998 085d40f9 ldr      x8, [x8, #0xb8]
0023099C 00013fd6 blr      x8
002309A0 e00315aa mov      x0, x21
002309A4 e10314aa mov      x1, x20
002309A8 e2031faa mov      x2, xzr
002309AC eb730c94 bl       #0x54d958
002309B0 882b00b0 adrp     x8, #0x7a1000
002309B4 f30315aa mov      x19, x21
002309B8 08dd43f9 ldr      x8, [x8, #0x7b8]
002309BC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002309C0 09c10191 add      x9, x8, #0x70
002309C4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002309C8 bf1201f9 str      xzr, [x21, #0x220]
002309CC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002309D0 bf1601f9 str      xzr, [x21, #0x228]
002309D4 bf1a01f9 str      xzr, [x21, #0x230]
002309D8 bf1e01f9 str      xzr, [x21, #0x238]
002309DC bf5201f9 str      xzr, [x21, #0x2a0]
002309E0 bf5601f9 str      xzr, [x21, #0x2a8]
002309E4 bf5a01f9 str      xzr, [x21, #0x2b0]
002309E8 bf5e01f9 str      xzr, [x21, #0x2b8]
002309EC 698e04f8 str      x9, [x19, #0x48]!
002309F0 09c10291 add      x9, x8, #0xb0
002309F4 08410091 add      x8, x8, #0x10
002309F8 e00313aa mov      x0, x19
002309FC a92a00f9 str      x9, [x21, #0x50]
00230A00 09028052 mov      w9, #0x10
00230A04 bf820c39 strb     wzr, [x21, #0x320]
00230A08 bfa20c39 strb     wzr, [x21, #0x328]
00230A0C bfc20c39 strb     wzr, [x21, #0x330]
00230A10 a91200f9 str      x9, [x21, #0x20]
00230A14 a85200a9 stp      x8, x20, [x21]
00230A18 08688052 mov      w8, #0x340
00230A1C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00230A20 b52201a9 stp      x21, x8, [x21, #0x10]
00230A24 c84e40f9 ldr      x8, [x22, #0x98]
00230A28 080500d1 sub      x8, x8, #1
00230A2C c84e00f9 str      x8, [x22, #0x98]
00230A30 680240f9 ldr      x8, [x19]
00230A34 080940f9 ldr      x8, [x8, #0x10]
00230A38 00013fd6 blr      x8
00230A3C e8030091 mov      x8, sp
00230A40 e00315aa mov      x0, x21
00230A44 03a2fb97 bl       #0x119250
00230A48 e00340f9 ldr      x0, [sp]
00230A4C e8230091 add      x8, sp, #8
00230A50 46000094 bl       #0x230b68
00230A54 f40740f9 ldr      x20, [sp, #8]
00230A58 e00314aa mov      x0, x20
00230A5C bd730c94 bl       #0x54d950
00230A60 80020035 cbnz     w0, #0x230ab0
00230A64 881641f9 ldr      x8, [x20, #0x228]
00230A68 c80000b4 cbz      x8, #0x230a80
00230A6C 89820891 add      x9, x20, #0x220
00230A70 80020991 add      x0, x20, #0x240
00230A74 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00230A78 3f7d00a9 stp      xzr, xzr, [x9]
00230A7C 00013fd6 blr      x8
00230A80 1f2003d5 nop      
00230A84 e8020510 adr      x8, #0x23aae0
00230A88 881201f9 str      x8, [x20, #0x220]
00230A8C 1f2003d5 nop      
00230A90 a9030510 adr      x9, #0x23ab04
00230A94 891601f9 str      x9, [x20, #0x228]
00230A98 1f2003d5 nop      
00230A9C 6a030510 adr      x10, #0x23ab08
00230AA0 8a1a01f9 str      x10, [x20, #0x230]
00230AA4 1f2003d5 nop      
00230AA8 28030510 adr      x8, #0x23ab0c
00230AAC 881e01f9 str      x8, [x20, #0x238]
00230AB0 f50314aa mov      x21, x20
00230AB4 a88e44f8 ldr      x8, [x21, #0x48]!
00230AB8 e00315aa mov      x0, x21
00230ABC 080940f9 ldr      x8, [x8, #0x10]
00230AC0 00013fd6 blr      x8
00230AC4 e00314aa mov      x0, x20
00230AC8 32740c94 bl       #0x54db90
00230ACC a80240f9 ldr      x8, [x21]
00230AD0 e00315aa mov      x0, x21
00230AD4 080940f9 ldr      x8, [x8, #0x10]
00230AD8 00013fd6 blr      x8
00230ADC 882d00b0 adrp     x8, #0x7e1000
00230AE0 08613691 add      x8, x8, #0xd98
00230AE4 160140f9 ldr      x22, [x8]
00230AE8 c02a40f9 ldr      x0, [x22, #0x50]
00230AEC 800000b4 cbz      x0, #0x230afc
00230AF0 088c44f8 ldr      x8, [x0, #0x48]!
00230AF4 080d40f9 ldr      x8, [x8, #0x18]
00230AF8 00013fd6 blr      x8
00230AFC d42a00f9 str      x20, [x22, #0x50]
00230B00 e00315aa mov      x0, x21
00230B04 882640f9 ldr      x8, [x20, #0x48]
00230B08 080d40f9 ldr      x8, [x8, #0x18]
00230B0C 00013fd6 blr      x8
00230B10 e00740f9 ldr      x0, [sp, #8]
00230B14 a00000b4 cbz      x0, #0x230b28
00230B18 088c44f8 ldr      x8, [x0, #0x48]!
00230B1C 080d40f9 ldr      x8, [x8, #0x18]
00230B20 00013fd6 blr      x8
00230B24 ff0700f9 str      xzr, [sp, #8]
00230B28 e00340f9 ldr      x0, [sp]
00230B2C a00000b4 cbz      x0, #0x230b40
00230B30 088c44f8 ldr      x8, [x0, #0x48]!
00230B34 080d40f9 ldr      x8, [x8, #0x18]
00230B38 00013fd6 blr      x8
00230B3C ff0300f9 str      xzr, [sp]
00230B40 680240f9 ldr      x8, [x19]
00230B44 e00313aa mov      x0, x19
00230B48 080d40f9 ldr      x8, [x8, #0x18]
00230B4C 00013fd6 blr      x8
00230B50 f44f43a9 ldp      x20, x19, [sp, #0x30]
00230B54 f65742a9 ldp      x22, x21, [sp, #0x20]
00230B58 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00230B5C ff030191 add      sp, sp, #0x40
00230B60 c0035fd6 ret      
00230B64 2b48f797 bl       #0x2c10
~~~
### 0x230d30 (142 slots)
~~~asm
00230D30 ff0301d1 sub      sp, sp, #0x40
00230D34 fd7b01a9 stp      x29, x30, [sp, #0x10]
00230D38 f65702a9 stp      x22, x21, [sp, #0x20]
00230D3C f44f03a9 stp      x20, x19, [sp, #0x30]
00230D40 fd430091 add      x29, sp, #0x10
00230D44 476d0c94 bl       #0x54c260
00230D48 48d03bd5 mrs      x8, tpidr_el0
00230D4C 16c97392 and      x22, x8, #0xffffffffffffe000
00230D50 c84e40f9 ldr      x8, [x22, #0x98]
00230D54 1f4100f1 cmp      x8, #0x10
00230D58 60100054 b.eq     #0x230f64
00230D5C c80e088b add      x8, x22, x8, lsl #3
00230D60 01688052 mov      w1, #0x340
00230D64 02028052 mov      w2, #0x10
00230D68 f40300aa mov      x20, x0
00230D6C 000d00f9 str      x0, [x8, #0x18]
00230D70 c84e40f9 ldr      x8, [x22, #0x98]
00230D74 08050091 add      x8, x8, #1
00230D78 c84e00f9 str      x8, [x22, #0x98]
00230D7C 080040f9 ldr      x8, [x0]
00230D80 080940f9 ldr      x8, [x8, #0x10]
00230D84 00013fd6 blr      x8
00230D88 f50300aa mov      x21, x0
00230D8C a00000b5 cbnz     x0, #0x230da0
00230D90 880240f9 ldr      x8, [x20]
00230D94 e00314aa mov      x0, x20
00230D98 085d40f9 ldr      x8, [x8, #0xb8]
00230D9C 00013fd6 blr      x8
00230DA0 e00315aa mov      x0, x21
00230DA4 e10314aa mov      x1, x20
00230DA8 e2031faa mov      x2, xzr
00230DAC eb720c94 bl       #0x54d958
00230DB0 882b00b0 adrp     x8, #0x7a1000
00230DB4 f30315aa mov      x19, x21
00230DB8 08dd43f9 ldr      x8, [x8, #0x7b8]
00230DBC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00230DC0 09c10191 add      x9, x8, #0x70
00230DC4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00230DC8 bf1201f9 str      xzr, [x21, #0x220]
00230DCC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00230DD0 bf1601f9 str      xzr, [x21, #0x228]
00230DD4 bf1a01f9 str      xzr, [x21, #0x230]
00230DD8 bf1e01f9 str      xzr, [x21, #0x238]
00230DDC bf5201f9 str      xzr, [x21, #0x2a0]
00230DE0 bf5601f9 str      xzr, [x21, #0x2a8]
00230DE4 bf5a01f9 str      xzr, [x21, #0x2b0]
00230DE8 bf5e01f9 str      xzr, [x21, #0x2b8]
00230DEC 698e04f8 str      x9, [x19, #0x48]!
00230DF0 09c10291 add      x9, x8, #0xb0
00230DF4 08410091 add      x8, x8, #0x10
00230DF8 e00313aa mov      x0, x19
00230DFC a92a00f9 str      x9, [x21, #0x50]
00230E00 09028052 mov      w9, #0x10
00230E04 bf820c39 strb     wzr, [x21, #0x320]
00230E08 bfa20c39 strb     wzr, [x21, #0x328]
00230E0C bfc20c39 strb     wzr, [x21, #0x330]
00230E10 a91200f9 str      x9, [x21, #0x20]
00230E14 a85200a9 stp      x8, x20, [x21]
00230E18 08688052 mov      w8, #0x340
00230E1C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00230E20 b52201a9 stp      x21, x8, [x21, #0x10]
00230E24 c84e40f9 ldr      x8, [x22, #0x98]
00230E28 080500d1 sub      x8, x8, #1
00230E2C c84e00f9 str      x8, [x22, #0x98]
00230E30 680240f9 ldr      x8, [x19]
00230E34 080940f9 ldr      x8, [x8, #0x10]
00230E38 00013fd6 blr      x8
00230E3C e8030091 mov      x8, sp
00230E40 e00315aa mov      x0, x21
00230E44 03a1fb97 bl       #0x119250
00230E48 e00340f9 ldr      x0, [sp]
00230E4C e8230091 add      x8, sp, #8
00230E50 46000094 bl       #0x230f68
00230E54 f40740f9 ldr      x20, [sp, #8]
00230E58 e00314aa mov      x0, x20
00230E5C bd720c94 bl       #0x54d950
00230E60 80020035 cbnz     w0, #0x230eb0
00230E64 881641f9 ldr      x8, [x20, #0x228]
00230E68 c80000b4 cbz      x8, #0x230e80
00230E6C 89820891 add      x9, x20, #0x220
00230E70 80020991 add      x0, x20, #0x240
00230E74 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00230E78 3f7d00a9 stp      xzr, xzr, [x9]
00230E7C 00013fd6 blr      x8
00230E80 1f2003d5 nop      
00230E84 684b0510 adr      x8, #0x23b7f0
00230E88 881201f9 str      x8, [x20, #0x220]
00230E8C 1f2003d5 nop      
00230E90 294c0510 adr      x9, #0x23b814
00230E94 891601f9 str      x9, [x20, #0x228]
00230E98 1f2003d5 nop      
00230E9C ea4b0510 adr      x10, #0x23b818
00230EA0 8a1a01f9 str      x10, [x20, #0x230]
00230EA4 1f2003d5 nop      
00230EA8 a84b0510 adr      x8, #0x23b81c
00230EAC 881e01f9 str      x8, [x20, #0x238]
00230EB0 f50314aa mov      x21, x20
00230EB4 a88e44f8 ldr      x8, [x21, #0x48]!
00230EB8 e00315aa mov      x0, x21
00230EBC 080940f9 ldr      x8, [x8, #0x10]
00230EC0 00013fd6 blr      x8
00230EC4 e00314aa mov      x0, x20
00230EC8 32730c94 bl       #0x54db90
00230ECC a80240f9 ldr      x8, [x21]
00230ED0 e00315aa mov      x0, x21
00230ED4 080940f9 ldr      x8, [x8, #0x10]
00230ED8 00013fd6 blr      x8
00230EDC 882d00b0 adrp     x8, #0x7e1000
00230EE0 08613691 add      x8, x8, #0xd98
00230EE4 160140f9 ldr      x22, [x8]
00230EE8 c02a40f9 ldr      x0, [x22, #0x50]
00230EEC 800000b4 cbz      x0, #0x230efc
00230EF0 088c44f8 ldr      x8, [x0, #0x48]!
00230EF4 080d40f9 ldr      x8, [x8, #0x18]
00230EF8 00013fd6 blr      x8
00230EFC d42a00f9 str      x20, [x22, #0x50]
00230F00 e00315aa mov      x0, x21
00230F04 882640f9 ldr      x8, [x20, #0x48]
00230F08 080d40f9 ldr      x8, [x8, #0x18]
00230F0C 00013fd6 blr      x8
00230F10 e00740f9 ldr      x0, [sp, #8]
00230F14 a00000b4 cbz      x0, #0x230f28
00230F18 088c44f8 ldr      x8, [x0, #0x48]!
00230F1C 080d40f9 ldr      x8, [x8, #0x18]
00230F20 00013fd6 blr      x8
00230F24 ff0700f9 str      xzr, [sp, #8]
00230F28 e00340f9 ldr      x0, [sp]
00230F2C a00000b4 cbz      x0, #0x230f40
00230F30 088c44f8 ldr      x8, [x0, #0x48]!
00230F34 080d40f9 ldr      x8, [x8, #0x18]
00230F38 00013fd6 blr      x8
00230F3C ff0300f9 str      xzr, [sp]
00230F40 680240f9 ldr      x8, [x19]
00230F44 e00313aa mov      x0, x19
00230F48 080d40f9 ldr      x8, [x8, #0x18]
00230F4C 00013fd6 blr      x8
00230F50 f44f43a9 ldp      x20, x19, [sp, #0x30]
00230F54 f65742a9 ldp      x22, x21, [sp, #0x20]
00230F58 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00230F5C ff030191 add      sp, sp, #0x40
00230F60 c0035fd6 ret      
00230F64 2b47f797 bl       #0x2c10
~~~
### 0x231130 (142 slots)
~~~asm
00231130 ff0301d1 sub      sp, sp, #0x40
00231134 fd7b01a9 stp      x29, x30, [sp, #0x10]
00231138 f65702a9 stp      x22, x21, [sp, #0x20]
0023113C f44f03a9 stp      x20, x19, [sp, #0x30]
00231140 fd430091 add      x29, sp, #0x10
00231144 476c0c94 bl       #0x54c260
00231148 48d03bd5 mrs      x8, tpidr_el0
0023114C 16c97392 and      x22, x8, #0xffffffffffffe000
00231150 c84e40f9 ldr      x8, [x22, #0x98]
00231154 1f4100f1 cmp      x8, #0x10
00231158 60100054 b.eq     #0x231364
0023115C c80e088b add      x8, x22, x8, lsl #3
00231160 01688052 mov      w1, #0x340
00231164 02028052 mov      w2, #0x10
00231168 f40300aa mov      x20, x0
0023116C 000d00f9 str      x0, [x8, #0x18]
00231170 c84e40f9 ldr      x8, [x22, #0x98]
00231174 08050091 add      x8, x8, #1
00231178 c84e00f9 str      x8, [x22, #0x98]
0023117C 080040f9 ldr      x8, [x0]
00231180 080940f9 ldr      x8, [x8, #0x10]
00231184 00013fd6 blr      x8
00231188 f50300aa mov      x21, x0
0023118C a00000b5 cbnz     x0, #0x2311a0
00231190 880240f9 ldr      x8, [x20]
00231194 e00314aa mov      x0, x20
00231198 085d40f9 ldr      x8, [x8, #0xb8]
0023119C 00013fd6 blr      x8
002311A0 e00315aa mov      x0, x21
002311A4 e10314aa mov      x1, x20
002311A8 e2031faa mov      x2, xzr
002311AC eb710c94 bl       #0x54d958
002311B0 882b0090 adrp     x8, #0x7a1000
002311B4 f30315aa mov      x19, x21
002311B8 08dd43f9 ldr      x8, [x8, #0x7b8]
002311BC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002311C0 09c10191 add      x9, x8, #0x70
002311C4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002311C8 bf1201f9 str      xzr, [x21, #0x220]
002311CC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002311D0 bf1601f9 str      xzr, [x21, #0x228]
002311D4 bf1a01f9 str      xzr, [x21, #0x230]
002311D8 bf1e01f9 str      xzr, [x21, #0x238]
002311DC bf5201f9 str      xzr, [x21, #0x2a0]
002311E0 bf5601f9 str      xzr, [x21, #0x2a8]
002311E4 bf5a01f9 str      xzr, [x21, #0x2b0]
002311E8 bf5e01f9 str      xzr, [x21, #0x2b8]
002311EC 698e04f8 str      x9, [x19, #0x48]!
002311F0 09c10291 add      x9, x8, #0xb0
002311F4 08410091 add      x8, x8, #0x10
002311F8 e00313aa mov      x0, x19
002311FC a92a00f9 str      x9, [x21, #0x50]
00231200 09028052 mov      w9, #0x10
00231204 bf820c39 strb     wzr, [x21, #0x320]
00231208 bfa20c39 strb     wzr, [x21, #0x328]
0023120C bfc20c39 strb     wzr, [x21, #0x330]
00231210 a91200f9 str      x9, [x21, #0x20]
00231214 a85200a9 stp      x8, x20, [x21]
00231218 08688052 mov      w8, #0x340
0023121C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00231220 b52201a9 stp      x21, x8, [x21, #0x10]
00231224 c84e40f9 ldr      x8, [x22, #0x98]
00231228 080500d1 sub      x8, x8, #1
0023122C c84e00f9 str      x8, [x22, #0x98]
00231230 680240f9 ldr      x8, [x19]
00231234 080940f9 ldr      x8, [x8, #0x10]
00231238 00013fd6 blr      x8
0023123C e8030091 mov      x8, sp
00231240 e00315aa mov      x0, x21
00231244 03a0fb97 bl       #0x119250
00231248 e00340f9 ldr      x0, [sp]
0023124C e8230091 add      x8, sp, #8
00231250 46000094 bl       #0x231368
00231254 f40740f9 ldr      x20, [sp, #8]
00231258 e00314aa mov      x0, x20
0023125C bd710c94 bl       #0x54d950
00231260 80020035 cbnz     w0, #0x2312b0
00231264 881641f9 ldr      x8, [x20, #0x228]
00231268 c80000b4 cbz      x8, #0x231280
0023126C 89820891 add      x9, x20, #0x220
00231270 80020991 add      x0, x20, #0x240
00231274 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00231278 3f7d00a9 stp      xzr, xzr, [x9]
0023127C 00013fd6 blr      x8
00231280 1f2003d5 nop      
00231284 e8930510 adr      x8, #0x23c500
00231288 881201f9 str      x8, [x20, #0x220]
0023128C 1f2003d5 nop      
00231290 a9940510 adr      x9, #0x23c524
00231294 891601f9 str      x9, [x20, #0x228]
00231298 1f2003d5 nop      
0023129C 6a940510 adr      x10, #0x23c528
002312A0 8a1a01f9 str      x10, [x20, #0x230]
002312A4 1f2003d5 nop      
002312A8 28940510 adr      x8, #0x23c52c
002312AC 881e01f9 str      x8, [x20, #0x238]
002312B0 f50314aa mov      x21, x20
002312B4 a88e44f8 ldr      x8, [x21, #0x48]!
002312B8 e00315aa mov      x0, x21
002312BC 080940f9 ldr      x8, [x8, #0x10]
002312C0 00013fd6 blr      x8
002312C4 e00314aa mov      x0, x20
002312C8 32720c94 bl       #0x54db90
002312CC a80240f9 ldr      x8, [x21]
002312D0 e00315aa mov      x0, x21
002312D4 080940f9 ldr      x8, [x8, #0x10]
002312D8 00013fd6 blr      x8
002312DC 882d0090 adrp     x8, #0x7e1000
002312E0 08613691 add      x8, x8, #0xd98
002312E4 160140f9 ldr      x22, [x8]
002312E8 c02a40f9 ldr      x0, [x22, #0x50]
002312EC 800000b4 cbz      x0, #0x2312fc
002312F0 088c44f8 ldr      x8, [x0, #0x48]!
002312F4 080d40f9 ldr      x8, [x8, #0x18]
002312F8 00013fd6 blr      x8
002312FC d42a00f9 str      x20, [x22, #0x50]
00231300 e00315aa mov      x0, x21
00231304 882640f9 ldr      x8, [x20, #0x48]
00231308 080d40f9 ldr      x8, [x8, #0x18]
0023130C 00013fd6 blr      x8
00231310 e00740f9 ldr      x0, [sp, #8]
00231314 a00000b4 cbz      x0, #0x231328
00231318 088c44f8 ldr      x8, [x0, #0x48]!
0023131C 080d40f9 ldr      x8, [x8, #0x18]
00231320 00013fd6 blr      x8
00231324 ff0700f9 str      xzr, [sp, #8]
00231328 e00340f9 ldr      x0, [sp]
0023132C a00000b4 cbz      x0, #0x231340
00231330 088c44f8 ldr      x8, [x0, #0x48]!
00231334 080d40f9 ldr      x8, [x8, #0x18]
00231338 00013fd6 blr      x8
0023133C ff0300f9 str      xzr, [sp]
00231340 680240f9 ldr      x8, [x19]
00231344 e00313aa mov      x0, x19
00231348 080d40f9 ldr      x8, [x8, #0x18]
0023134C 00013fd6 blr      x8
00231350 f44f43a9 ldp      x20, x19, [sp, #0x30]
00231354 f65742a9 ldp      x22, x21, [sp, #0x20]
00231358 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0023135C ff030191 add      sp, sp, #0x40
00231360 c0035fd6 ret      
00231364 2b46f797 bl       #0x2c10
~~~
### 0x231530 (142 slots)
~~~asm
00231530 ff0301d1 sub      sp, sp, #0x40
00231534 fd7b01a9 stp      x29, x30, [sp, #0x10]
00231538 f65702a9 stp      x22, x21, [sp, #0x20]
0023153C f44f03a9 stp      x20, x19, [sp, #0x30]
00231540 fd430091 add      x29, sp, #0x10
00231544 476b0c94 bl       #0x54c260
00231548 48d03bd5 mrs      x8, tpidr_el0
0023154C 16c97392 and      x22, x8, #0xffffffffffffe000
00231550 c84e40f9 ldr      x8, [x22, #0x98]
00231554 1f4100f1 cmp      x8, #0x10
00231558 60100054 b.eq     #0x231764
0023155C c80e088b add      x8, x22, x8, lsl #3
00231560 01688052 mov      w1, #0x340
00231564 02028052 mov      w2, #0x10
00231568 f40300aa mov      x20, x0
0023156C 000d00f9 str      x0, [x8, #0x18]
00231570 c84e40f9 ldr      x8, [x22, #0x98]
00231574 08050091 add      x8, x8, #1
00231578 c84e00f9 str      x8, [x22, #0x98]
0023157C 080040f9 ldr      x8, [x0]
00231580 080940f9 ldr      x8, [x8, #0x10]
00231584 00013fd6 blr      x8
00231588 f50300aa mov      x21, x0
0023158C a00000b5 cbnz     x0, #0x2315a0
00231590 880240f9 ldr      x8, [x20]
00231594 e00314aa mov      x0, x20
00231598 085d40f9 ldr      x8, [x8, #0xb8]
0023159C 00013fd6 blr      x8
002315A0 e00315aa mov      x0, x21
002315A4 e10314aa mov      x1, x20
002315A8 e2031faa mov      x2, xzr
002315AC eb700c94 bl       #0x54d958
002315B0 882b0090 adrp     x8, #0x7a1000
002315B4 f30315aa mov      x19, x21
002315B8 08dd43f9 ldr      x8, [x8, #0x7b8]
002315BC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002315C0 09c10191 add      x9, x8, #0x70
002315C4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002315C8 bf1201f9 str      xzr, [x21, #0x220]
002315CC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002315D0 bf1601f9 str      xzr, [x21, #0x228]
002315D4 bf1a01f9 str      xzr, [x21, #0x230]
002315D8 bf1e01f9 str      xzr, [x21, #0x238]
002315DC bf5201f9 str      xzr, [x21, #0x2a0]
002315E0 bf5601f9 str      xzr, [x21, #0x2a8]
002315E4 bf5a01f9 str      xzr, [x21, #0x2b0]
002315E8 bf5e01f9 str      xzr, [x21, #0x2b8]
002315EC 698e04f8 str      x9, [x19, #0x48]!
002315F0 09c10291 add      x9, x8, #0xb0
002315F4 08410091 add      x8, x8, #0x10
002315F8 e00313aa mov      x0, x19
002315FC a92a00f9 str      x9, [x21, #0x50]
00231600 09028052 mov      w9, #0x10
00231604 bf820c39 strb     wzr, [x21, #0x320]
00231608 bfa20c39 strb     wzr, [x21, #0x328]
0023160C bfc20c39 strb     wzr, [x21, #0x330]
00231610 a91200f9 str      x9, [x21, #0x20]
00231614 a85200a9 stp      x8, x20, [x21]
00231618 08688052 mov      w8, #0x340
0023161C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00231620 b52201a9 stp      x21, x8, [x21, #0x10]
00231624 c84e40f9 ldr      x8, [x22, #0x98]
00231628 080500d1 sub      x8, x8, #1
0023162C c84e00f9 str      x8, [x22, #0x98]
00231630 680240f9 ldr      x8, [x19]
00231634 080940f9 ldr      x8, [x8, #0x10]
00231638 00013fd6 blr      x8
0023163C e8030091 mov      x8, sp
00231640 e00315aa mov      x0, x21
00231644 039ffb97 bl       #0x119250
00231648 e00340f9 ldr      x0, [sp]
0023164C e8230091 add      x8, sp, #8
00231650 46000094 bl       #0x231768
00231654 f40740f9 ldr      x20, [sp, #8]
00231658 e00314aa mov      x0, x20
0023165C bd700c94 bl       #0x54d950
00231660 80020035 cbnz     w0, #0x2316b0
00231664 881641f9 ldr      x8, [x20, #0x228]
00231668 c80000b4 cbz      x8, #0x231680
0023166C 89820891 add      x9, x20, #0x220
00231670 80020991 add      x0, x20, #0x240
00231674 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00231678 3f7d00a9 stp      xzr, xzr, [x9]
0023167C 00013fd6 blr      x8
00231680 1f2003d5 nop      
00231684 68dc0510 adr      x8, #0x23d210
00231688 881201f9 str      x8, [x20, #0x220]
0023168C 1f2003d5 nop      
00231690 29dd0510 adr      x9, #0x23d234
00231694 891601f9 str      x9, [x20, #0x228]
00231698 1f2003d5 nop      
0023169C eadc0510 adr      x10, #0x23d238
002316A0 8a1a01f9 str      x10, [x20, #0x230]
002316A4 1f2003d5 nop      
002316A8 a8dc0510 adr      x8, #0x23d23c
002316AC 881e01f9 str      x8, [x20, #0x238]
002316B0 f50314aa mov      x21, x20
002316B4 a88e44f8 ldr      x8, [x21, #0x48]!
002316B8 e00315aa mov      x0, x21
002316BC 080940f9 ldr      x8, [x8, #0x10]
002316C0 00013fd6 blr      x8
002316C4 e00314aa mov      x0, x20
002316C8 32710c94 bl       #0x54db90
002316CC a80240f9 ldr      x8, [x21]
002316D0 e00315aa mov      x0, x21
002316D4 080940f9 ldr      x8, [x8, #0x10]
002316D8 00013fd6 blr      x8
002316DC 882d0090 adrp     x8, #0x7e1000
002316E0 08613691 add      x8, x8, #0xd98
002316E4 160140f9 ldr      x22, [x8]
002316E8 c02a40f9 ldr      x0, [x22, #0x50]
002316EC 800000b4 cbz      x0, #0x2316fc
002316F0 088c44f8 ldr      x8, [x0, #0x48]!
002316F4 080d40f9 ldr      x8, [x8, #0x18]
002316F8 00013fd6 blr      x8
002316FC d42a00f9 str      x20, [x22, #0x50]
00231700 e00315aa mov      x0, x21
00231704 882640f9 ldr      x8, [x20, #0x48]
00231708 080d40f9 ldr      x8, [x8, #0x18]
0023170C 00013fd6 blr      x8
00231710 e00740f9 ldr      x0, [sp, #8]
00231714 a00000b4 cbz      x0, #0x231728
00231718 088c44f8 ldr      x8, [x0, #0x48]!
0023171C 080d40f9 ldr      x8, [x8, #0x18]
00231720 00013fd6 blr      x8
00231724 ff0700f9 str      xzr, [sp, #8]
00231728 e00340f9 ldr      x0, [sp]
0023172C a00000b4 cbz      x0, #0x231740
00231730 088c44f8 ldr      x8, [x0, #0x48]!
00231734 080d40f9 ldr      x8, [x8, #0x18]
00231738 00013fd6 blr      x8
0023173C ff0300f9 str      xzr, [sp]
00231740 680240f9 ldr      x8, [x19]
00231744 e00313aa mov      x0, x19
00231748 080d40f9 ldr      x8, [x8, #0x18]
0023174C 00013fd6 blr      x8
00231750 f44f43a9 ldp      x20, x19, [sp, #0x30]
00231754 f65742a9 ldp      x22, x21, [sp, #0x20]
00231758 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0023175C ff030191 add      sp, sp, #0x40
00231760 c0035fd6 ret      
00231764 2b45f797 bl       #0x2c10
~~~
### 0x231930 (142 slots)
~~~asm
00231930 ff0301d1 sub      sp, sp, #0x40
00231934 fd7b01a9 stp      x29, x30, [sp, #0x10]
00231938 f65702a9 stp      x22, x21, [sp, #0x20]
0023193C f44f03a9 stp      x20, x19, [sp, #0x30]
00231940 fd430091 add      x29, sp, #0x10
00231944 476a0c94 bl       #0x54c260
00231948 48d03bd5 mrs      x8, tpidr_el0
0023194C 16c97392 and      x22, x8, #0xffffffffffffe000
00231950 c84e40f9 ldr      x8, [x22, #0x98]
00231954 1f4100f1 cmp      x8, #0x10
00231958 60100054 b.eq     #0x231b64
0023195C c80e088b add      x8, x22, x8, lsl #3
00231960 01688052 mov      w1, #0x340
00231964 02028052 mov      w2, #0x10
00231968 f40300aa mov      x20, x0
0023196C 000d00f9 str      x0, [x8, #0x18]
00231970 c84e40f9 ldr      x8, [x22, #0x98]
00231974 08050091 add      x8, x8, #1
00231978 c84e00f9 str      x8, [x22, #0x98]
0023197C 080040f9 ldr      x8, [x0]
00231980 080940f9 ldr      x8, [x8, #0x10]
00231984 00013fd6 blr      x8
00231988 f50300aa mov      x21, x0
0023198C a00000b5 cbnz     x0, #0x2319a0
00231990 880240f9 ldr      x8, [x20]
00231994 e00314aa mov      x0, x20
00231998 085d40f9 ldr      x8, [x8, #0xb8]
0023199C 00013fd6 blr      x8
002319A0 e00315aa mov      x0, x21
002319A4 e10314aa mov      x1, x20
002319A8 e2031faa mov      x2, xzr
002319AC eb6f0c94 bl       #0x54d958
002319B0 882b0090 adrp     x8, #0x7a1000
002319B4 f30315aa mov      x19, x21
002319B8 08dd43f9 ldr      x8, [x8, #0x7b8]
002319BC bf7e12a9 stp      xzr, xzr, [x21, #0x120]
002319C0 09c10191 add      x9, x8, #0x70
002319C4 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
002319C8 bf1201f9 str      xzr, [x21, #0x220]
002319CC bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
002319D0 bf1601f9 str      xzr, [x21, #0x228]
002319D4 bf1a01f9 str      xzr, [x21, #0x230]
002319D8 bf1e01f9 str      xzr, [x21, #0x238]
002319DC bf5201f9 str      xzr, [x21, #0x2a0]
002319E0 bf5601f9 str      xzr, [x21, #0x2a8]
002319E4 bf5a01f9 str      xzr, [x21, #0x2b0]
002319E8 bf5e01f9 str      xzr, [x21, #0x2b8]
002319EC 698e04f8 str      x9, [x19, #0x48]!
002319F0 09c10291 add      x9, x8, #0xb0
002319F4 08410091 add      x8, x8, #0x10
002319F8 e00313aa mov      x0, x19
002319FC a92a00f9 str      x9, [x21, #0x50]
00231A00 09028052 mov      w9, #0x10
00231A04 bf820c39 strb     wzr, [x21, #0x320]
00231A08 bfa20c39 strb     wzr, [x21, #0x328]
00231A0C bfc20c39 strb     wzr, [x21, #0x330]
00231A10 a91200f9 str      x9, [x21, #0x20]
00231A14 a85200a9 stp      x8, x20, [x21]
00231A18 08688052 mov      w8, #0x340
00231A1C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00231A20 b52201a9 stp      x21, x8, [x21, #0x10]
00231A24 c84e40f9 ldr      x8, [x22, #0x98]
00231A28 080500d1 sub      x8, x8, #1
00231A2C c84e00f9 str      x8, [x22, #0x98]
00231A30 680240f9 ldr      x8, [x19]
00231A34 080940f9 ldr      x8, [x8, #0x10]
00231A38 00013fd6 blr      x8
00231A3C e8030091 mov      x8, sp
00231A40 e00315aa mov      x0, x21
00231A44 039efb97 bl       #0x119250
00231A48 e00340f9 ldr      x0, [sp]
00231A4C e8230091 add      x8, sp, #8
00231A50 46000094 bl       #0x231b68
00231A54 f40740f9 ldr      x20, [sp, #8]
00231A58 e00314aa mov      x0, x20
00231A5C bd6f0c94 bl       #0x54d950
00231A60 80020035 cbnz     w0, #0x231ab0
00231A64 881641f9 ldr      x8, [x20, #0x228]
00231A68 c80000b4 cbz      x8, #0x231a80
00231A6C 89820891 add      x9, x20, #0x220
00231A70 80020991 add      x0, x20, #0x240
00231A74 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00231A78 3f7d00a9 stp      xzr, xzr, [x9]
00231A7C 00013fd6 blr      x8
00231A80 1f2003d5 nop      
00231A84 e8240610 adr      x8, #0x23df20
00231A88 881201f9 str      x8, [x20, #0x220]
00231A8C 1f2003d5 nop      
00231A90 a9250610 adr      x9, #0x23df44
00231A94 891601f9 str      x9, [x20, #0x228]
00231A98 1f2003d5 nop      
00231A9C 6a250610 adr      x10, #0x23df48
00231AA0 8a1a01f9 str      x10, [x20, #0x230]
00231AA4 1f2003d5 nop      
00231AA8 28250610 adr      x8, #0x23df4c
00231AAC 881e01f9 str      x8, [x20, #0x238]
00231AB0 f50314aa mov      x21, x20
00231AB4 a88e44f8 ldr      x8, [x21, #0x48]!
00231AB8 e00315aa mov      x0, x21
00231ABC 080940f9 ldr      x8, [x8, #0x10]
00231AC0 00013fd6 blr      x8
00231AC4 e00314aa mov      x0, x20
00231AC8 32700c94 bl       #0x54db90
00231ACC a80240f9 ldr      x8, [x21]
00231AD0 e00315aa mov      x0, x21
00231AD4 080940f9 ldr      x8, [x8, #0x10]
00231AD8 00013fd6 blr      x8
00231ADC 882d0090 adrp     x8, #0x7e1000
00231AE0 08613691 add      x8, x8, #0xd98
00231AE4 160140f9 ldr      x22, [x8]
00231AE8 c02a40f9 ldr      x0, [x22, #0x50]
00231AEC 800000b4 cbz      x0, #0x231afc
00231AF0 088c44f8 ldr      x8, [x0, #0x48]!
00231AF4 080d40f9 ldr      x8, [x8, #0x18]
00231AF8 00013fd6 blr      x8
00231AFC d42a00f9 str      x20, [x22, #0x50]
00231B00 e00315aa mov      x0, x21
00231B04 882640f9 ldr      x8, [x20, #0x48]
00231B08 080d40f9 ldr      x8, [x8, #0x18]
00231B0C 00013fd6 blr      x8
00231B10 e00740f9 ldr      x0, [sp, #8]
00231B14 a00000b4 cbz      x0, #0x231b28
00231B18 088c44f8 ldr      x8, [x0, #0x48]!
00231B1C 080d40f9 ldr      x8, [x8, #0x18]
00231B20 00013fd6 blr      x8
00231B24 ff0700f9 str      xzr, [sp, #8]
00231B28 e00340f9 ldr      x0, [sp]
00231B2C a00000b4 cbz      x0, #0x231b40
00231B30 088c44f8 ldr      x8, [x0, #0x48]!
00231B34 080d40f9 ldr      x8, [x8, #0x18]
00231B38 00013fd6 blr      x8
00231B3C ff0300f9 str      xzr, [sp]
00231B40 680240f9 ldr      x8, [x19]
00231B44 e00313aa mov      x0, x19
00231B48 080d40f9 ldr      x8, [x8, #0x18]
00231B4C 00013fd6 blr      x8
00231B50 f44f43a9 ldp      x20, x19, [sp, #0x30]
00231B54 f65742a9 ldp      x22, x21, [sp, #0x20]
00231B58 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00231B5C ff030191 add      sp, sp, #0x40
00231B60 c0035fd6 ret      
00231B64 2b44f797 bl       #0x2c10
~~~
### 0x231d30 (24 slots)
~~~asm
00231D30 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00231D34 f44f01a9 stp      x20, x19, [sp, #0x10]
00231D38 fd030091 mov      x29, sp
00231D3C 882d0090 adrp     x8, #0x7e1000
00231D40 08613691 add      x8, x8, #0xd98
00231D44 080140f9 ldr      x8, [x8]
00231D48 132940f9 ldr      x19, [x8, #0x50]
00231D4C b30100b4 cbz      x19, #0x231d80
00231D50 f40313aa mov      x20, x19
00231D54 888e44f8 ldr      x8, [x20, #0x48]!
00231D58 e00314aa mov      x0, x20
00231D5C 080940f9 ldr      x8, [x8, #0x10]
00231D60 00013fd6 blr      x8
00231D64 e00313aa mov      x0, x19
00231D68 826f0c94 bl       #0x54db70
00231D6C 880240f9 ldr      x8, [x20]
00231D70 13000052 eor      w19, w0, #1
00231D74 e00314aa mov      x0, x20
00231D78 080d40f9 ldr      x8, [x8, #0x18]
00231D7C 00013fd6 blr      x8
00231D80 60020012 and      w0, w19, #1
00231D84 f44f41a9 ldp      x20, x19, [sp, #0x10]
00231D88 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00231D8C c0035fd6 ret      
~~~
### 0x231d90 (142 slots)
~~~asm
00231D90 ff0301d1 sub      sp, sp, #0x40
00231D94 fd7b01a9 stp      x29, x30, [sp, #0x10]
00231D98 f65702a9 stp      x22, x21, [sp, #0x20]
00231D9C f44f03a9 stp      x20, x19, [sp, #0x30]
00231DA0 fd430091 add      x29, sp, #0x10
00231DA4 2f690c94 bl       #0x54c260
00231DA8 48d03bd5 mrs      x8, tpidr_el0
00231DAC 16c97392 and      x22, x8, #0xffffffffffffe000
00231DB0 c84e40f9 ldr      x8, [x22, #0x98]
00231DB4 1f4100f1 cmp      x8, #0x10
00231DB8 60100054 b.eq     #0x231fc4
00231DBC c80e088b add      x8, x22, x8, lsl #3
00231DC0 01688052 mov      w1, #0x340
00231DC4 02028052 mov      w2, #0x10
00231DC8 f40300aa mov      x20, x0
00231DCC 000d00f9 str      x0, [x8, #0x18]
00231DD0 c84e40f9 ldr      x8, [x22, #0x98]
00231DD4 08050091 add      x8, x8, #1
00231DD8 c84e00f9 str      x8, [x22, #0x98]
00231DDC 080040f9 ldr      x8, [x0]
00231DE0 080940f9 ldr      x8, [x8, #0x10]
00231DE4 00013fd6 blr      x8
00231DE8 f50300aa mov      x21, x0
00231DEC a00000b5 cbnz     x0, #0x231e00
00231DF0 880240f9 ldr      x8, [x20]
00231DF4 e00314aa mov      x0, x20
00231DF8 085d40f9 ldr      x8, [x8, #0xb8]
00231DFC 00013fd6 blr      x8
00231E00 e00315aa mov      x0, x21
00231E04 e10314aa mov      x1, x20
00231E08 e2031faa mov      x2, xzr
00231E0C d36e0c94 bl       #0x54d958
00231E10 882b0090 adrp     x8, #0x7a1000
00231E14 f30315aa mov      x19, x21
00231E18 08dd43f9 ldr      x8, [x8, #0x7b8]
00231E1C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00231E20 09c10191 add      x9, x8, #0x70
00231E24 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00231E28 bf1201f9 str      xzr, [x21, #0x220]
00231E2C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00231E30 bf1601f9 str      xzr, [x21, #0x228]
00231E34 bf1a01f9 str      xzr, [x21, #0x230]
00231E38 bf1e01f9 str      xzr, [x21, #0x238]
00231E3C bf5201f9 str      xzr, [x21, #0x2a0]
00231E40 bf5601f9 str      xzr, [x21, #0x2a8]
00231E44 bf5a01f9 str      xzr, [x21, #0x2b0]
00231E48 bf5e01f9 str      xzr, [x21, #0x2b8]
00231E4C 698e04f8 str      x9, [x19, #0x48]!
00231E50 09c10291 add      x9, x8, #0xb0
00231E54 08410091 add      x8, x8, #0x10
00231E58 e00313aa mov      x0, x19
00231E5C a92a00f9 str      x9, [x21, #0x50]
00231E60 09028052 mov      w9, #0x10
00231E64 bf820c39 strb     wzr, [x21, #0x320]
00231E68 bfa20c39 strb     wzr, [x21, #0x328]
00231E6C bfc20c39 strb     wzr, [x21, #0x330]
00231E70 a91200f9 str      x9, [x21, #0x20]
00231E74 a85200a9 stp      x8, x20, [x21]
00231E78 08688052 mov      w8, #0x340
00231E7C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00231E80 b52201a9 stp      x21, x8, [x21, #0x10]
00231E84 c84e40f9 ldr      x8, [x22, #0x98]
00231E88 080500d1 sub      x8, x8, #1
00231E8C c84e00f9 str      x8, [x22, #0x98]
00231E90 680240f9 ldr      x8, [x19]
00231E94 080940f9 ldr      x8, [x8, #0x10]
00231E98 00013fd6 blr      x8
00231E9C e8030091 mov      x8, sp
00231EA0 e00315aa mov      x0, x21
00231EA4 eb9cfb97 bl       #0x119250
00231EA8 e00340f9 ldr      x0, [sp]
00231EAC e8230091 add      x8, sp, #8
00231EB0 46000094 bl       #0x231fc8
00231EB4 f40740f9 ldr      x20, [sp, #8]
00231EB8 e00314aa mov      x0, x20
00231EBC a56e0c94 bl       #0x54d950
00231EC0 80020035 cbnz     w0, #0x231f10
00231EC4 881641f9 ldr      x8, [x20, #0x228]
00231EC8 c80000b4 cbz      x8, #0x231ee0
00231ECC 89820891 add      x9, x20, #0x220
00231ED0 80020991 add      x0, x20, #0x240
00231ED4 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00231ED8 3f7d00a9 stp      xzr, xzr, [x9]
00231EDC 00013fd6 blr      x8
00231EE0 1f2003d5 nop      
00231EE4 486f0610 adr      x8, #0x23eccc
00231EE8 881201f9 str      x8, [x20, #0x220]
00231EEC 1f2003d5 nop      
00231EF0 09700610 adr      x9, #0x23ecf0
00231EF4 891601f9 str      x9, [x20, #0x228]
00231EF8 1f2003d5 nop      
00231EFC ca6f0610 adr      x10, #0x23ecf4
00231F00 8a1a01f9 str      x10, [x20, #0x230]
00231F04 1f2003d5 nop      
00231F08 886f0610 adr      x8, #0x23ecf8
00231F0C 881e01f9 str      x8, [x20, #0x238]
00231F10 f50314aa mov      x21, x20
00231F14 a88e44f8 ldr      x8, [x21, #0x48]!
00231F18 e00315aa mov      x0, x21
00231F1C 080940f9 ldr      x8, [x8, #0x10]
00231F20 00013fd6 blr      x8
00231F24 e00314aa mov      x0, x20
00231F28 1a6f0c94 bl       #0x54db90
00231F2C a80240f9 ldr      x8, [x21]
00231F30 e00315aa mov      x0, x21
00231F34 080940f9 ldr      x8, [x8, #0x10]
00231F38 00013fd6 blr      x8
00231F3C 882d0090 adrp     x8, #0x7e1000
00231F40 08613691 add      x8, x8, #0xd98
00231F44 160140f9 ldr      x22, [x8]
00231F48 c02a40f9 ldr      x0, [x22, #0x50]
00231F4C 800000b4 cbz      x0, #0x231f5c
00231F50 088c44f8 ldr      x8, [x0, #0x48]!
00231F54 080d40f9 ldr      x8, [x8, #0x18]
00231F58 00013fd6 blr      x8
00231F5C d42a00f9 str      x20, [x22, #0x50]
00231F60 e00315aa mov      x0, x21
00231F64 882640f9 ldr      x8, [x20, #0x48]
00231F68 080d40f9 ldr      x8, [x8, #0x18]
00231F6C 00013fd6 blr      x8
00231F70 e00740f9 ldr      x0, [sp, #8]
00231F74 a00000b4 cbz      x0, #0x231f88
00231F78 088c44f8 ldr      x8, [x0, #0x48]!
00231F7C 080d40f9 ldr      x8, [x8, #0x18]
00231F80 00013fd6 blr      x8
00231F84 ff0700f9 str      xzr, [sp, #8]
00231F88 e00340f9 ldr      x0, [sp]
00231F8C a00000b4 cbz      x0, #0x231fa0
00231F90 088c44f8 ldr      x8, [x0, #0x48]!
00231F94 080d40f9 ldr      x8, [x8, #0x18]
00231F98 00013fd6 blr      x8
00231F9C ff0300f9 str      xzr, [sp]
00231FA0 680240f9 ldr      x8, [x19]
00231FA4 e00313aa mov      x0, x19
00231FA8 080d40f9 ldr      x8, [x8, #0x18]
00231FAC 00013fd6 blr      x8
00231FB0 f44f43a9 ldp      x20, x19, [sp, #0x30]
00231FB4 f65742a9 ldp      x22, x21, [sp, #0x20]
00231FB8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00231FBC ff030191 add      sp, sp, #0x40
00231FC0 c0035fd6 ret      
00231FC4 1343f797 bl       #0x2c10
~~~
### 0x232190 (142 slots)
~~~asm
00232190 ff0301d1 sub      sp, sp, #0x40
00232194 fd7b01a9 stp      x29, x30, [sp, #0x10]
00232198 f65702a9 stp      x22, x21, [sp, #0x20]
0023219C f44f03a9 stp      x20, x19, [sp, #0x30]
002321A0 fd430091 add      x29, sp, #0x10
002321A4 2f680c94 bl       #0x54c260
002321A8 48d03bd5 mrs      x8, tpidr_el0
002321AC 16c97392 and      x22, x8, #0xffffffffffffe000
002321B0 c84e40f9 ldr      x8, [x22, #0x98]
002321B4 1f4100f1 cmp      x8, #0x10
002321B8 60100054 b.eq     #0x2323c4
002321BC c80e088b add      x8, x22, x8, lsl #3
002321C0 01688052 mov      w1, #0x340
002321C4 02028052 mov      w2, #0x10
002321C8 f40300aa mov      x20, x0
002321CC 000d00f9 str      x0, [x8, #0x18]
002321D0 c84e40f9 ldr      x8, [x22, #0x98]
002321D4 08050091 add      x8, x8, #1
002321D8 c84e00f9 str      x8, [x22, #0x98]
002321DC 080040f9 ldr      x8, [x0]
002321E0 080940f9 ldr      x8, [x8, #0x10]
002321E4 00013fd6 blr      x8
002321E8 f50300aa mov      x21, x0
002321EC a00000b5 cbnz     x0, #0x232200
002321F0 880240f9 ldr      x8, [x20]
002321F4 e00314aa mov      x0, x20
002321F8 085d40f9 ldr      x8, [x8, #0xb8]
002321FC 00013fd6 blr      x8
00232200 e00315aa mov      x0, x21
00232204 e10314aa mov      x1, x20
00232208 e2031faa mov      x2, xzr
0023220C d36d0c94 bl       #0x54d958
00232210 682b00f0 adrp     x8, #0x7a1000
00232214 f30315aa mov      x19, x21
00232218 08dd43f9 ldr      x8, [x8, #0x7b8]
0023221C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00232220 09c10191 add      x9, x8, #0x70
00232224 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00232228 bf1201f9 str      xzr, [x21, #0x220]
0023222C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00232230 bf1601f9 str      xzr, [x21, #0x228]
00232234 bf1a01f9 str      xzr, [x21, #0x230]
00232238 bf1e01f9 str      xzr, [x21, #0x238]
0023223C bf5201f9 str      xzr, [x21, #0x2a0]
00232240 bf5601f9 str      xzr, [x21, #0x2a8]
00232244 bf5a01f9 str      xzr, [x21, #0x2b0]
00232248 bf5e01f9 str      xzr, [x21, #0x2b8]
0023224C 698e04f8 str      x9, [x19, #0x48]!
00232250 09c10291 add      x9, x8, #0xb0
00232254 08410091 add      x8, x8, #0x10
00232258 e00313aa mov      x0, x19
0023225C a92a00f9 str      x9, [x21, #0x50]
00232260 09028052 mov      w9, #0x10
00232264 bf820c39 strb     wzr, [x21, #0x320]
00232268 bfa20c39 strb     wzr, [x21, #0x328]
0023226C bfc20c39 strb     wzr, [x21, #0x330]
00232270 a91200f9 str      x9, [x21, #0x20]
00232274 a85200a9 stp      x8, x20, [x21]
00232278 08688052 mov      w8, #0x340
0023227C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00232280 b52201a9 stp      x21, x8, [x21, #0x10]
00232284 c84e40f9 ldr      x8, [x22, #0x98]
00232288 080500d1 sub      x8, x8, #1
0023228C c84e00f9 str      x8, [x22, #0x98]
00232290 680240f9 ldr      x8, [x19]
00232294 080940f9 ldr      x8, [x8, #0x10]
00232298 00013fd6 blr      x8
0023229C e8030091 mov      x8, sp
002322A0 e00315aa mov      x0, x21
002322A4 eb9bfb97 bl       #0x119250
002322A8 e00340f9 ldr      x0, [sp]
002322AC e8230091 add      x8, sp, #8
002322B0 46000094 bl       #0x2323c8
002322B4 f40740f9 ldr      x20, [sp, #8]
002322B8 e00314aa mov      x0, x20
002322BC a56d0c94 bl       #0x54d950
002322C0 80020035 cbnz     w0, #0x232310
002322C4 881641f9 ldr      x8, [x20, #0x228]
002322C8 c80000b4 cbz      x8, #0x2322e0
002322CC 89820891 add      x9, x20, #0x220
002322D0 80020991 add      x0, x20, #0x240
002322D4 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
002322D8 3f7d00a9 stp      xzr, xzr, [x9]
002322DC 00013fd6 blr      x8
002322E0 1f2003d5 nop      
002322E4 e8b70610 adr      x8, #0x23f9e0
002322E8 881201f9 str      x8, [x20, #0x220]
002322EC 1f2003d5 nop      
002322F0 a9b80610 adr      x9, #0x23fa04
002322F4 891601f9 str      x9, [x20, #0x228]
002322F8 1f2003d5 nop      
002322FC 6ab80610 adr      x10, #0x23fa08
00232300 8a1a01f9 str      x10, [x20, #0x230]
00232304 1f2003d5 nop      
00232308 28b80610 adr      x8, #0x23fa0c
0023230C 881e01f9 str      x8, [x20, #0x238]
00232310 f50314aa mov      x21, x20
00232314 a88e44f8 ldr      x8, [x21, #0x48]!
00232318 e00315aa mov      x0, x21
0023231C 080940f9 ldr      x8, [x8, #0x10]
00232320 00013fd6 blr      x8
00232324 e00314aa mov      x0, x20
00232328 1a6e0c94 bl       #0x54db90
0023232C a80240f9 ldr      x8, [x21]
00232330 e00315aa mov      x0, x21
00232334 080940f9 ldr      x8, [x8, #0x10]
00232338 00013fd6 blr      x8
0023233C 682d00f0 adrp     x8, #0x7e1000
00232340 08613691 add      x8, x8, #0xd98
00232344 160140f9 ldr      x22, [x8]
00232348 c02a40f9 ldr      x0, [x22, #0x50]
0023234C 800000b4 cbz      x0, #0x23235c
00232350 088c44f8 ldr      x8, [x0, #0x48]!
00232354 080d40f9 ldr      x8, [x8, #0x18]
00232358 00013fd6 blr      x8
0023235C d42a00f9 str      x20, [x22, #0x50]
00232360 e00315aa mov      x0, x21
00232364 882640f9 ldr      x8, [x20, #0x48]
00232368 080d40f9 ldr      x8, [x8, #0x18]
0023236C 00013fd6 blr      x8
00232370 e00740f9 ldr      x0, [sp, #8]
00232374 a00000b4 cbz      x0, #0x232388
00232378 088c44f8 ldr      x8, [x0, #0x48]!
0023237C 080d40f9 ldr      x8, [x8, #0x18]
00232380 00013fd6 blr      x8
00232384 ff0700f9 str      xzr, [sp, #8]
00232388 e00340f9 ldr      x0, [sp]
0023238C a00000b4 cbz      x0, #0x2323a0
00232390 088c44f8 ldr      x8, [x0, #0x48]!
00232394 080d40f9 ldr      x8, [x8, #0x18]
00232398 00013fd6 blr      x8
0023239C ff0300f9 str      xzr, [sp]
002323A0 680240f9 ldr      x8, [x19]
002323A4 e00313aa mov      x0, x19
002323A8 080d40f9 ldr      x8, [x8, #0x18]
002323AC 00013fd6 blr      x8
002323B0 f44f43a9 ldp      x20, x19, [sp, #0x30]
002323B4 f65742a9 ldp      x22, x21, [sp, #0x20]
002323B8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
002323BC ff030191 add      sp, sp, #0x40
002323C0 c0035fd6 ret      
002323C4 1342f797 bl       #0x2c10
~~~
### 0x232590 (142 slots)
~~~asm
00232590 ff0301d1 sub      sp, sp, #0x40
00232594 fd7b01a9 stp      x29, x30, [sp, #0x10]
00232598 f65702a9 stp      x22, x21, [sp, #0x20]
0023259C f44f03a9 stp      x20, x19, [sp, #0x30]
002325A0 fd430091 add      x29, sp, #0x10
002325A4 2f670c94 bl       #0x54c260
002325A8 48d03bd5 mrs      x8, tpidr_el0
002325AC 16c97392 and      x22, x8, #0xffffffffffffe000
002325B0 c84e40f9 ldr      x8, [x22, #0x98]
002325B4 1f4100f1 cmp      x8, #0x10
002325B8 60100054 b.eq     #0x2327c4
002325BC c80e088b add      x8, x22, x8, lsl #3
002325C0 01688052 mov      w1, #0x340
002325C4 02028052 mov      w2, #0x10
002325C8 f40300aa mov      x20, x0
002325CC 000d00f9 str      x0, [x8, #0x18]
002325D0 c84e40f9 ldr      x8, [x22, #0x98]
002325D4 08050091 add      x8, x8, #1
002325D8 c84e00f9 str      x8, [x22, #0x98]
002325DC 080040f9 ldr      x8, [x0]
002325E0 080940f9 ldr      x8, [x8, #0x10]
002325E4 00013fd6 blr      x8
002325E8 f50300aa mov      x21, x0
002325EC a00000b5 cbnz     x0, #0x232600
002325F0 880240f9 ldr      x8, [x20]
002325F4 e00314aa mov      x0, x20
002325F8 085d40f9 ldr      x8, [x8, #0xb8]
002325FC 00013fd6 blr      x8
00232600 e00315aa mov      x0, x21
00232604 e10314aa mov      x1, x20
00232608 e2031faa mov      x2, xzr
0023260C d36c0c94 bl       #0x54d958
00232610 682b00f0 adrp     x8, #0x7a1000
00232614 f30315aa mov      x19, x21
00232618 08dd43f9 ldr      x8, [x8, #0x7b8]
0023261C bf7e12a9 stp      xzr, xzr, [x21, #0x120]
00232620 09c10191 add      x9, x8, #0x70
00232624 bf7e13a9 stp      xzr, xzr, [x21, #0x130]
00232628 bf1201f9 str      xzr, [x21, #0x220]
0023262C bf7e1aa9 stp      xzr, xzr, [x21, #0x1a0]
00232630 bf1601f9 str      xzr, [x21, #0x228]
00232634 bf1a01f9 str      xzr, [x21, #0x230]
00232638 bf1e01f9 str      xzr, [x21, #0x238]
0023263C bf5201f9 str      xzr, [x21, #0x2a0]
00232640 bf5601f9 str      xzr, [x21, #0x2a8]
00232644 bf5a01f9 str      xzr, [x21, #0x2b0]
00232648 bf5e01f9 str      xzr, [x21, #0x2b8]
0023264C 698e04f8 str      x9, [x19, #0x48]!
00232650 09c10291 add      x9, x8, #0xb0
00232654 08410091 add      x8, x8, #0x10
00232658 e00313aa mov      x0, x19
0023265C a92a00f9 str      x9, [x21, #0x50]
00232660 09028052 mov      w9, #0x10
00232664 bf820c39 strb     wzr, [x21, #0x320]
00232668 bfa20c39 strb     wzr, [x21, #0x328]
0023266C bfc20c39 strb     wzr, [x21, #0x330]
00232670 a91200f9 str      x9, [x21, #0x20]
00232674 a85200a9 stp      x8, x20, [x21]
00232678 08688052 mov      w8, #0x340
0023267C bf7e1ba9 stp      xzr, xzr, [x21, #0x1b0]
00232680 b52201a9 stp      x21, x8, [x21, #0x10]
00232684 c84e40f9 ldr      x8, [x22, #0x98]
00232688 080500d1 sub      x8, x8, #1
0023268C c84e00f9 str      x8, [x22, #0x98]
00232690 680240f9 ldr      x8, [x19]
00232694 080940f9 ldr      x8, [x8, #0x10]
00232698 00013fd6 blr      x8
0023269C e8030091 mov      x8, sp
002326A0 e00315aa mov      x0, x21
002326A4 eb9afb97 bl       #0x119250
002326A8 e00340f9 ldr      x0, [sp]
002326AC e8230091 add      x8, sp, #8
002326B0 46000094 bl       #0x2327c8
002326B4 f40740f9 ldr      x20, [sp, #8]
002326B8 e00314aa mov      x0, x20
002326BC a56c0c94 bl       #0x54d950
002326C0 80020035 cbnz     w0, #0x232710
002326C4 881641f9 ldr      x8, [x20, #0x228]
002326C8 c80000b4 cbz      x8, #0x2326e0
002326CC 89820891 add      x9, x20, #0x220
002326D0 80020991 add      x0, x20, #0x240
002326D4 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
002326D8 3f7d00a9 stp      xzr, xzr, [x9]
002326DC 00013fd6 blr      x8
002326E0 1f2003d5 nop      
002326E4 c8f90610 adr      x8, #0x24061c
002326E8 881201f9 str      x8, [x20, #0x220]
002326EC 1f2003d5 nop      
002326F0 89fa0610 adr      x9, #0x240640
002326F4 891601f9 str      x9, [x20, #0x228]
002326F8 1f2003d5 nop      
002326FC 4afa0610 adr      x10, #0x240644
00232700 8a1a01f9 str      x10, [x20, #0x230]
00232704 1f2003d5 nop      
00232708 08fa0610 adr      x8, #0x240648
0023270C 881e01f9 str      x8, [x20, #0x238]
00232710 f50314aa mov      x21, x20
00232714 a88e44f8 ldr      x8, [x21, #0x48]!
00232718 e00315aa mov      x0, x21
0023271C 080940f9 ldr      x8, [x8, #0x10]
00232720 00013fd6 blr      x8
00232724 e00314aa mov      x0, x20
00232728 1a6d0c94 bl       #0x54db90
0023272C a80240f9 ldr      x8, [x21]
00232730 e00315aa mov      x0, x21
00232734 080940f9 ldr      x8, [x8, #0x10]
00232738 00013fd6 blr      x8
0023273C 682d00f0 adrp     x8, #0x7e1000
00232740 08613691 add      x8, x8, #0xd98
00232744 160140f9 ldr      x22, [x8]
00232748 c02a40f9 ldr      x0, [x22, #0x50]
0023274C 800000b4 cbz      x0, #0x23275c
00232750 088c44f8 ldr      x8, [x0, #0x48]!
00232754 080d40f9 ldr      x8, [x8, #0x18]
00232758 00013fd6 blr      x8
0023275C d42a00f9 str      x20, [x22, #0x50]
00232760 e00315aa mov      x0, x21
00232764 882640f9 ldr      x8, [x20, #0x48]
00232768 080d40f9 ldr      x8, [x8, #0x18]
0023276C 00013fd6 blr      x8
00232770 e00740f9 ldr      x0, [sp, #8]
00232774 a00000b4 cbz      x0, #0x232788
00232778 088c44f8 ldr      x8, [x0, #0x48]!
0023277C 080d40f9 ldr      x8, [x8, #0x18]
00232780 00013fd6 blr      x8
00232784 ff0700f9 str      xzr, [sp, #8]
00232788 e00340f9 ldr      x0, [sp]
0023278C a00000b4 cbz      x0, #0x2327a0
00232790 088c44f8 ldr      x8, [x0, #0x48]!
00232794 080d40f9 ldr      x8, [x8, #0x18]
00232798 00013fd6 blr      x8
0023279C ff0300f9 str      xzr, [sp]
002327A0 680240f9 ldr      x8, [x19]
002327A4 e00313aa mov      x0, x19
002327A8 080d40f9 ldr      x8, [x8, #0x18]
002327AC 00013fd6 blr      x8
002327B0 f44f43a9 ldp      x20, x19, [sp, #0x30]
002327B4 f65742a9 ldp      x22, x21, [sp, #0x20]
002327B8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
002327BC ff030191 add      sp, sp, #0x40
002327C0 c0035fd6 ret      
002327C4 1341f797 bl       #0x2c10
~~~
### 0x232990 (220 slots)
~~~asm
00232990 ff8301d1 sub      sp, sp, #0x60
00232994 fd7b02a9 stp      x29, x30, [sp, #0x20]
00232998 f85f03a9 stp      x24, x23, [sp, #0x30]
0023299C f65704a9 stp      x22, x21, [sp, #0x40]
002329A0 f44f05a9 stp      x20, x19, [sp, #0x50]
002329A4 fd830091 add      x29, sp, #0x20
002329A8 46bcff97 bl       #0x221ac0
002329AC 08998652 mov      w8, #0x34c8
002329B0 2801a072 movk     w8, #9, lsl #16
002329B4 086868b8 ldr      w8, [x0, x8]
002329B8 1f050071 cmp      w8, #1
002329BC ab000054 b.lt     #0x2329d0
002329C0 a02300d1 sub      x0, x29, #8
002329C4 bf831ff8 stur     xzr, [x29, #-8]
002329C8 72100f94 bl       #0x5f6b90
002329CC e0000034 cbz      w0, #0x2329e8
002329D0 f44f45a9 ldp      x20, x19, [sp, #0x50]
002329D4 f65744a9 ldp      x22, x21, [sp, #0x40]
002329D8 f85f43a9 ldp      x24, x23, [sp, #0x30]
002329DC fd7b42a9 ldp      x29, x30, [sp, #0x20]
002329E0 ff830191 add      sp, sp, #0x60
002329E4 c0035fd6 ret      
002329E8 36bcff97 bl       #0x221ac0
002329EC 08998652 mov      w8, #0x34c8
002329F0 2801a072 movk     w8, #9, lsl #16
002329F4 a9835ff8 ldur     x9, [x29, #-8]
002329F8 0868a8b8 ldrsw    x8, [x0, x8]
002329FC 080109eb subs     x8, x8, x9
00232A00 6d150054 b.le     #0x232cac
00232A04 09409952 mov      w9, #0xca00
00232A08 4973a772 movk     w9, #0x3b9a, lsl #16
00232A0C 087d099b mul      x8, x8, x9
00232A10 699692d2 mov      x9, #0x94b3
00232A14 c9daa4f2 movk     x9, #0x26d6, lsl #16
00232A18 ebeb03b2 mov      x11, #-0x1111111111111112
00232A1C 097dc1f2 movk     x9, #0xbe8, lsl #32
00232A20 c925e2f2 movk     x9, #0x112e, lsl #48
00232A24 087d499b smulh    x8, x8, x9
00232A28 ece301b2 mov      x12, #-0x7777777777777778
00232A2C ebdd9df2 movk     x11, #0xeeef
00232A30 0c11e1f2 movk     x12, #0x888, lsl #48
00232A34 09fd5a93 asr      x9, x8, #0x1a
00232A38 28fd488b add      x8, x9, x8, lsr #63
00232A3C a93d00d0 adrp     x9, #0x9e8000
00232A40 29010491 add      x9, x9, #0x100
00232A44 0b310b9b madd     x11, x8, x11, x12
00232A48 ece300b2 mov      x12, #0x1111111111111111
00232A4C 0c2282f2 movk     x12, #0x1110
00232A50 2a0140f9 ldr      x10, [x9]
00232A54 7f010ceb cmp      x11, x12
00232A58 449148fa ccmp     x10, x8, #4, ls
00232A5C a0fbff54 b.eq     #0x2329d0
00232A60 772d00f0 adrp     x23, #0x7e1000
00232A64 f7623691 add      x23, x23, #0xd98
00232A68 280100f9 str      x8, [x9]
00232A6C e80240f9 ldr      x8, [x23]
00232A70 132940f9 ldr      x19, [x8, #0x50]
00232A74 330100b4 cbz      x19, #0x232a98
00232A78 f40313aa mov      x20, x19
00232A7C 888e44f8 ldr      x8, [x20, #0x48]!
00232A80 e00314aa mov      x0, x20
00232A84 080940f9 ldr      x8, [x8, #0x10]
00232A88 00013fd6 blr      x8
00232A8C e00313aa mov      x0, x19
00232A90 386c0c94 bl       #0x54db70
00232A94 00120036 tbz      w0, #0, #0x232cd4
00232A98 f2650c94 bl       #0x54c260
00232A9C 48d03bd5 mrs      x8, tpidr_el0
00232AA0 18c97392 and      x24, x8, #0xffffffffffffe000
00232AA4 084f40f9 ldr      x8, [x24, #0x98]
00232AA8 1f4100f1 cmp      x8, #0x10
00232AAC 80120054 b.eq     #0x232cfc
00232AB0 080f088b add      x8, x24, x8, lsl #3
00232AB4 01688052 mov      w1, #0x340
00232AB8 02028052 mov      w2, #0x10
00232ABC f50300aa mov      x21, x0
00232AC0 000d00f9 str      x0, [x8, #0x18]
00232AC4 084f40f9 ldr      x8, [x24, #0x98]
00232AC8 08050091 add      x8, x8, #1
00232ACC 084f00f9 str      x8, [x24, #0x98]
00232AD0 080040f9 ldr      x8, [x0]
00232AD4 080940f9 ldr      x8, [x8, #0x10]
00232AD8 00013fd6 blr      x8
00232ADC f60300aa mov      x22, x0
00232AE0 a00000b5 cbnz     x0, #0x232af4
00232AE4 a80240f9 ldr      x8, [x21]
00232AE8 e00315aa mov      x0, x21
00232AEC 085d40f9 ldr      x8, [x8, #0xb8]
00232AF0 00013fd6 blr      x8
00232AF4 e00316aa mov      x0, x22
00232AF8 e10315aa mov      x1, x21
00232AFC e2031faa mov      x2, xzr
00232B00 966b0c94 bl       #0x54d958
00232B04 682b00f0 adrp     x8, #0x7a1000
00232B08 f40316aa mov      x20, x22
00232B0C 08dd43f9 ldr      x8, [x8, #0x7b8]
00232B10 df7e12a9 stp      xzr, xzr, [x22, #0x120]
00232B14 09c10191 add      x9, x8, #0x70
00232B18 df7e13a9 stp      xzr, xzr, [x22, #0x130]
00232B1C df1201f9 str      xzr, [x22, #0x220]
00232B20 df7e1aa9 stp      xzr, xzr, [x22, #0x1a0]
00232B24 df1601f9 str      xzr, [x22, #0x228]
00232B28 df1a01f9 str      xzr, [x22, #0x230]
00232B2C df1e01f9 str      xzr, [x22, #0x238]
00232B30 df5201f9 str      xzr, [x22, #0x2a0]
00232B34 df5601f9 str      xzr, [x22, #0x2a8]
00232B38 df5a01f9 str      xzr, [x22, #0x2b0]
00232B3C df5e01f9 str      xzr, [x22, #0x2b8]
00232B40 898e04f8 str      x9, [x20, #0x48]!
00232B44 09c10291 add      x9, x8, #0xb0
00232B48 08410091 add      x8, x8, #0x10
00232B4C e00314aa mov      x0, x20
00232B50 c92a00f9 str      x9, [x22, #0x50]
00232B54 09028052 mov      w9, #0x10
00232B58 df820c39 strb     wzr, [x22, #0x320]
00232B5C dfa20c39 strb     wzr, [x22, #0x328]
00232B60 dfc20c39 strb     wzr, [x22, #0x330]
00232B64 c91200f9 str      x9, [x22, #0x20]
00232B68 c85600a9 stp      x8, x21, [x22]
00232B6C 08688052 mov      w8, #0x340
00232B70 df7e1ba9 stp      xzr, xzr, [x22, #0x1b0]
00232B74 d62201a9 stp      x22, x8, [x22, #0x10]
00232B78 084f40f9 ldr      x8, [x24, #0x98]
00232B7C 080500d1 sub      x8, x8, #1
00232B80 084f00f9 str      x8, [x24, #0x98]
00232B84 880240f9 ldr      x8, [x20]
00232B88 080940f9 ldr      x8, [x8, #0x10]
00232B8C 00013fd6 blr      x8
00232B90 e8230091 add      x8, sp, #8
00232B94 e00316aa mov      x0, x22
00232B98 ae99fb97 bl       #0x119250
00232B9C e00740f9 ldr      x0, [sp, #8]
00232BA0 e8430091 add      x8, sp, #0x10
00232BA4 bbf3ff97 bl       #0x22fa90
00232BA8 f50b40f9 ldr      x21, [sp, #0x10]
00232BAC e00315aa mov      x0, x21
00232BB0 686b0c94 bl       #0x54d950
00232BB4 80020035 cbnz     w0, #0x232c04
00232BB8 a81641f9 ldr      x8, [x21, #0x228]
00232BBC c80000b4 cbz      x8, #0x232bd4
00232BC0 a9820891 add      x9, x21, #0x220
00232BC4 a0020991 add      x0, x21, #0x240
00232BC8 3f7d01a9 stp      xzr, xzr, [x9, #0x10]
00232BCC 3f7d00a9 stp      xzr, xzr, [x9]
00232BD0 00013fd6 blr      x8
00232BD4 1f2003d5 nop      
00232BD8 a8d30610 adr      x8, #0x24064c
00232BDC a81201f9 str      x8, [x21, #0x220]
00232BE0 1f2003d5 nop      
00232BE4 69d40610 adr      x9, #0x240670
00232BE8 a91601f9 str      x9, [x21, #0x228]
00232BEC 1f2003d5 nop      
00232BF0 2ad40610 adr      x10, #0x240674
00232BF4 aa1a01f9 str      x10, [x21, #0x230]
00232BF8 1f2003d5 nop      
00232BFC e8d30610 adr      x8, #0x240678
00232C00 a81e01f9 str      x8, [x21, #0x238]
00232C04 f60315aa mov      x22, x21
00232C08 c88e44f8 ldr      x8, [x22, #0x48]!
00232C0C e00316aa mov      x0, x22
00232C10 080940f9 ldr      x8, [x8, #0x10]
00232C14 00013fd6 blr      x8
00232C18 e00315aa mov      x0, x21
00232C1C dd6b0c94 bl       #0x54db90
00232C20 c80240f9 ldr      x8, [x22]
00232C24 e00316aa mov      x0, x22
00232C28 080940f9 ldr      x8, [x8, #0x10]
00232C2C 00013fd6 blr      x8
00232C30 f70240f9 ldr      x23, [x23]
00232C34 e02a40f9 ldr      x0, [x23, #0x50]
00232C38 800000b4 cbz      x0, #0x232c48
00232C3C 088c44f8 ldr      x8, [x0, #0x48]!
00232C40 080d40f9 ldr      x8, [x8, #0x18]
00232C44 00013fd6 blr      x8
00232C48 f52a00f9 str      x21, [x23, #0x50]
00232C4C e00316aa mov      x0, x22
00232C50 a82640f9 ldr      x8, [x21, #0x48]
00232C54 080d40f9 ldr      x8, [x8, #0x18]
00232C58 00013fd6 blr      x8
00232C5C e00b40f9 ldr      x0, [sp, #0x10]
00232C60 a00000b4 cbz      x0, #0x232c74
00232C64 088c44f8 ldr      x8, [x0, #0x48]!
00232C68 080d40f9 ldr      x8, [x8, #0x18]
00232C6C 00013fd6 blr      x8
00232C70 ff0b00f9 str      xzr, [sp, #0x10]
00232C74 e00740f9 ldr      x0, [sp, #8]
00232C78 a00000b4 cbz      x0, #0x232c8c
00232C7C 088c44f8 ldr      x8, [x0, #0x48]!
00232C80 080d40f9 ldr      x8, [x8, #0x18]
00232C84 00013fd6 blr      x8
00232C88 ff0700f9 str      xzr, [sp, #8]
00232C8C 880240f9 ldr      x8, [x20]
00232C90 e00314aa mov      x0, x20
00232C94 080d40f9 ldr      x8, [x8, #0x18]
00232C98 00013fd6 blr      x8
00232C9C b3e9ffb4 cbz      x19, #0x2329d0
00232CA0 688e44f8 ldr      x8, [x19, #0x48]!
00232CA4 e00313aa mov      x0, x19
00232CA8 0d000014 b        #0x232cdc
00232CAC 85bbff97 bl       #0x221ac0
00232CB0 08998652 mov      w8, #0x34c8
00232CB4 2801a072 movk     w8, #9, lsl #16
00232CB8 1f6828b8 str      wzr, [x0, x8]
00232CBC f44f45a9 ldp      x20, x19, [sp, #0x50]
00232CC0 f65744a9 ldp      x22, x21, [sp, #0x40]
00232CC4 f85f43a9 ldp      x24, x23, [sp, #0x30]
00232CC8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00232CCC ff830191 add      sp, sp, #0x60
00232CD0 c0035fd6 ret      
00232CD4 880240f9 ldr      x8, [x20]
00232CD8 e00314aa mov      x0, x20
00232CDC 080d40f9 ldr      x8, [x8, #0x18]
00232CE0 00013fd6 blr      x8
00232CE4 f44f45a9 ldp      x20, x19, [sp, #0x50]
00232CE8 f65744a9 ldp      x22, x21, [sp, #0x40]
00232CEC f85f43a9 ldp      x24, x23, [sp, #0x30]
00232CF0 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00232CF4 ff830191 add      sp, sp, #0x60
00232CF8 c0035fd6 ret      
00232CFC c53ff797 bl       #0x2c10
~~~
### 0x54db70 (6 slots)
~~~asm
0054DB70 081041b9 ldr      w8, [x0, #0x110]
0054DB74 1f050071 cmp      w8, #1
0054DB78 087c40f9 ldr      x8, [x0, #0xf8]
0054DB7C 008940fa ccmp     x8, #0, #0, hi
0054DB80 e0179f1a cset     w0, eq
0054DB84 c0035fd6 ret      
~~~
### 0x54db88 (2 slots)
~~~asm
0054DB88 011001b9 str      w1, [x0, #0x110]
0054DB8C c0035fd6 ret      
~~~
