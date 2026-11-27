# HOME41 scene state graph and transition descriptor evidence
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
## Scene state entry table
- 0: 0x6c30c
- 1: 0x6c34c
- 2: 0x6c438
- 3: 0x6c44c
- 4: 0x6c474
- 5: 0x6c48c
- 6: 0x6c4b0
- 7: 0x6c4c8
- 8: 0x6c4f8
- 9: 0x6c510
- 10: 0x6c534
- 11: 0x6c54c
- 12: 0x6c574
- 13: 0x6c58c
- 14: 0x6c5a8
- 15: 0x6c5c0
- 16: 0x6c5dc
- 17: 0x6c5f4
- 18: 0x6c610
- 19: 0x6c628
- 20: 0x6c654
- 21: 0x6c2cc
- 22: 0x6c668
- 23: 0x6c2cc
- 24: 0x6c680
- 25: 0x6c698
- 26: 0x6c8b0
- 27: 0x6c2cc
- 28: 0x6c6bc
- 29: 0x6c6d4
- 30: 0x6c70c
- 31: 0x6c724
- 32: 0x6c754
- 33: 0x6c76c
- 34: 0x6c790
- 35: 0x6c7a8
- 36: 0x6c7cc
- 37: 0x6c7e4
- 38: 0x6c8c4
- 39: 0x6c808
- 40: 0x6c82c
- 41: 0x6c844
- 42: 0x6c86c
- 43: 0x6c884
- 44: 0x6c898
- 45: 0x6c2cc
- 46: 0x6c8dc

## Relocated object slots
- 0x76b6d8 -> 0x6c208
  0x76b678: 0x6aec0
  0x76b680: unresolved
  0x76b688: unresolved
  0x76b690: 0x6be00
  0x76b698: 0x6bf94
  0x76b6a0: 0x1029c
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
- 0x7710c8 -> 0x119960
  0x771068: unresolved
  0x771070: 0x60f683
  0x771078: unresolved
  0x771080: unresolved
  0x771088: 0x119eb4
  0x771090: 0x119f20
  0x771098: 0x1029c
  0x7710a0: 0x102b8
  0x7710a8: 0x10310
  0x7710b0: 0x10360
  0x7710b8: 0x25938
  0x7710c0: 0x118e10
  0x7710c8: 0x119960
  0x7710d0: 0x119eb0
  0x7710d8: 0x2594c
  0x7710e0: unresolved
  0x7710e8: unresolved
  0x7710f0: 0x119f8c
  0x7710f8: 0x119ffc

## Table header GOT candidates
- 0x7a04a0 -> 0x76b630
- 0x7a1450 -> 0x76b680
- 0x7a17a0 -> 0x771078

## Direct callers and GOT instruction candidates
### caller 0x2feac
0002FF34 b4070094 bl       #0x31e04
### caller 0x31da0
00031DF4 04000094 bl       #0x31e04
### caller 0x325c8
0003262C f6fdff97 bl       #0x31e04
### caller 0x3278c
000327A4 c7d9ff97 bl       #0x28ec0
### caller 0x327ec
00032804 afd9ff97 bl       #0x28ec0
### caller 0x341e4
00034224 27d3ff97 bl       #0x28ec0
### caller 0x34250
000351F8 32cfff97 bl       #0x28ec0
### caller 0x376f8
00037710 ecc5ff97 bl       #0x28ec0
### caller 0x37d20
00038754 dbc1ff97 bl       #0x28ec0
### caller 0x38fa8
000390E8 76bfff97 bl       #0x28ec0
### caller 0x3bca0
0003C678 12b2ff97 bl       #0x28ec0
### caller 0x3d218
0003D2D4 fbaeff97 bl       #0x28ec0
### caller 0x425f4
00042640 209aff97 bl       #0x28ec0
### caller 0x43624
0004363C 2196ff97 bl       #0x28ec0
### caller 0x6bcec
GOT 0006BD0C 082942f9 ldr      x8, [x8, #0x450]
### caller 0x6c208
0006C59C 46030094 bl       #0x6d2b4
0006C5D0 b4030094 bl       #0x6d4a0
0006C604 2b040094 bl       #0x6d6b0
### caller 0x7f208
0007F264 17a7fe17 b        #0x28ec0
### caller 0x82aa0
00082D10 3dbcfe97 bl       #0x31e04
00082D24 1fbcfe97 bl       #0x31da0
00082D44 5f98fe97 bl       #0x28ec0
### caller 0x86030
00086044 9f8bfe97 bl       #0x28ec0
### caller 0x86264
0008629C 098bfe97 bl       #0x28ec0
### caller 0x874f0
000875E0 f0a9fe97 bl       #0x31da0
000875EC 3586fe97 bl       #0x28ec0
### caller 0x87800
000878F0 2ca9fe97 bl       #0x31da0
000878FC 7185fe97 bl       #0x28ec0
### caller 0x87930
00087B5C aaa8fe97 bl       #0x31e04
00087B68 d684fe97 bl       #0x28ec0
### caller 0xc3f68
000C3F80 d093fd97 bl       #0x28ec0
### caller 0xd6348
000D6360 d84afd97 bl       #0x28ec0
### caller 0xd6d28
000D6D3C 6148fd97 bl       #0x28ec0
### caller 0xece80
000EE384 cfeafc97 bl       #0x28ec0
### caller 0xee3c0
000EE858 6b0dfd97 bl       #0x31e04
### caller 0xee990
000EEDBC 120cfd97 bl       #0x31e04
### caller 0xeeed0
000EF1B4 fb0afd97 bl       #0x31da0
### caller 0xef270
000EF608 ff09fd97 bl       #0x31e04
### caller 0xef720
000EFA04 e708fd97 bl       #0x31da0
### caller 0xefab0
000EFD70 2508fd97 bl       #0x31e04
### caller 0xefe70
000F00DC 3107fd97 bl       #0x31da0
### caller 0xf0190
000F035C 9106fd97 bl       #0x31da0
### caller 0xf0400
000F05CC f505fd97 bl       #0x31da0
### caller 0xf0670
000F080C 6505fd97 bl       #0x31da0
### caller 0xf08c0
000F0A8C c504fd97 bl       #0x31da0
### caller 0xf0b10
000F1018 6203fd97 bl       #0x31da0
### caller 0xf1150
000F12EC ad02fd97 bl       #0x31da0
### caller 0xf1390
000F1520 2002fd97 bl       #0x31da0
### caller 0xf15e0
000F17C8 5b02fd97 bl       #0x32134
### caller 0xf1980
000F1B1C a100fd97 bl       #0x31da0
### caller 0xf1c30
000F1DC0 f8fffc97 bl       #0x31da0
### caller 0xf1e7c
000F1EE4 9400fd97 bl       #0x32134
### caller 0xf1f20
000F20BC 39fffc97 bl       #0x31da0
### caller 0xf2160
000F2498 5bfefc97 bl       #0x31e04
### caller 0xf24d0
000F24E8 13fffc97 bl       #0x32134
### caller 0xf26a0
000F2960 29fdfc97 bl       #0x31e04
### caller 0xf2a90
000F2C20 60fcfc97 bl       #0x31da0
### caller 0xf2cdc
000F2D34 00fdfc97 bl       #0x32134
### caller 0xf2d60
000F3268 e7fafc97 bl       #0x31e04
### caller 0xf3380
000F37AC 96f9fc97 bl       #0x31e04
### caller 0xf3880
000F3A30 dcf8fc97 bl       #0x31da0
### caller 0xf3be0
000F3C1C 46f9fc97 bl       #0x32134
### caller 0xf3d30
000F40A0 40f7fc97 bl       #0x31da0
### caller 0xf4160
000F44C0 51f6fc97 bl       #0x31e04
### caller 0xf461c
000F4674 b0f6fc97 bl       #0x32134
### caller 0xf46a0
000F4A78 caf4fc97 bl       #0x31da0
### caller 0xf4b20
000F5008 7ff3fc97 bl       #0x31e04
### caller 0xf5140
000F569C c1f1fc97 bl       #0x31da0
### caller 0xf56e0
000F5794 68f2fc97 bl       #0x32134
000F5B08 a6f0fc97 bl       #0x31da0
000F5B1C 86f1fc97 bl       #0x32134
000F5B68 8ef0fc97 bl       #0x31da0
### caller 0xf5c70
000F5D30 01f1fc97 bl       #0x32134
### caller 0xf92f0
000F93A8 63e3fc97 bl       #0x32134
000F942C 42e3fc97 bl       #0x32134
000F94AC 22e3fc97 bl       #0x32134
### caller 0xf9580
000F96CC cee1fc97 bl       #0x31e04
000F96FC a9e1fc97 bl       #0x31da0
000F9708 eebdfc97 bl       #0x28ec0
### caller 0xfe050
000FE3BC 92cefc97 bl       #0x31e04
000FE3C8 beaafc97 bl       #0x28ec0
### caller 0xfe410
000FE65C d1cdfc97 bl       #0x31da0
000FE668 16aafc97 bl       #0x28ec0
### caller 0xfe6a0
000FE87C 49cdfc97 bl       #0x31da0
000FE888 8ea9fc97 bl       #0x28ec0
### caller 0xfe8c0
000FE930 01cefc97 bl       #0x32134
### caller 0x108850
00108AD4 b3a4fc97 bl       #0x31da0
### caller 0x108e60
001090D4 33a3fc97 bl       #0x31da0
001091F0 eca2fc97 bl       #0x31da0
001091FC 317ffc97 bl       #0x28ec0
00109450 6da2fc97 bl       #0x31e04
0010945C 997efc97 bl       #0x28ec0
### caller 0x109490
001095C8 f6a1fc97 bl       #0x31da0
00109714 a3a1fc97 bl       #0x31da0
### caller 0x10d840
0010D854 9b6dfc97 bl       #0x28ec0
### caller 0x110910
00110AE8 ae84fc97 bl       #0x31da0
00110AF4 f360fc97 bl       #0x28ec0
### caller 0x111774
001117A4 6482fc97 bl       #0x32134
### caller 0x112170
001124BC 527efc97 bl       #0x31e04
001124D4 337efc97 bl       #0x31da0
001124E0 785afc97 bl       #0x28ec0
### caller 0x1131f0
001132FC c27afc97 bl       #0x31e04
00113304 a77afc97 bl       #0x31da0
00113310 ec56fc97 bl       #0x28ec0
### caller 0x113330
001133B8 5f7bfc97 bl       #0x32134
### caller 0x113830
00113924 1f79fc97 bl       #0x31da0
00113BF8 6a78fc97 bl       #0x31da0
### caller 0x118390
001188B0 5565fc97 bl       #0x31e04
001188BC 8141fc97 bl       #0x28ec0
001188EC 2d65fc97 bl       #0x31da0
### caller 0x118e10
00118FF0 6c63fc97 bl       #0x31da0
### caller 0x119eb4
GOT 00119EC8 08d143f9 ldr      x8, [x8, #0x7a0]
### caller 0x119f20
GOT 00119F34 08d143f9 ldr      x8, [x8, #0x7a0]
### caller 0x119f8c
GOT 00119FA0 08d143f9 ldr      x8, [x8, #0x7a0]
### caller 0x119ffc
GOT 0011A010 08d143f9 ldr      x8, [x8, #0x7a0]
### caller 0x11a06c
GOT 0011A080 08d143f9 ldr      x8, [x8, #0x7a0]
### caller 0x11a0dc
GOT 0011A0F0 08d143f9 ldr      x8, [x8, #0x7a0]
### caller 0x11fca0
0011FE5C b648fc97 bl       #0x32134
0011FEC8 9b48fc97 bl       #0x32134
0011FF84 6c48fc97 bl       #0x32134
0011FFC8 5b48fc97 bl       #0x32134
0012000C 6547fc97 bl       #0x31da0
00120018 aa23fc97 bl       #0x28ec0
00120028 4348fc97 bl       #0x32134
### caller 0x1201a4
001201F4 eb46fc97 bl       #0x31da0
00120200 3023fc97 bl       #0x28ec0
### caller 0x120214
001202B4 d446fc97 bl       #0x31e04
001202C0 0023fc97 bl       #0x28ec0
### caller 0x120328
0012037C 8946fc97 bl       #0x31da0
00120388 ce22fc97 bl       #0x28ec0
### caller 0x12039c
00120570 0c46fc97 bl       #0x31da0
0012057C 5122fc97 bl       #0x28ec0
00120608 e645fc97 bl       #0x31da0
00120614 2b22fc97 bl       #0x28ec0
### caller 0x120638
00120650 b946fc97 bl       #0x32134
001206E4 af45fc97 bl       #0x31da0
001206F0 f421fc97 bl       #0x28ec0
00120734 9b45fc97 bl       #0x31da0
00120740 e021fc97 bl       #0x28ec0
### caller 0x12075c
001207A8 7e45fc97 bl       #0x31da0
001207B4 c321fc97 bl       #0x28ec0
### caller 0x1207c8
00120854 5345fc97 bl       #0x31da0
00120860 9821fc97 bl       #0x28ec0
### caller 0x121d98
00121DAC 451cfc97 bl       #0x28ec0
### caller 0x122000
00122080 901bfc97 bl       #0x28ec0
### caller 0x124044
001240FC 0e38fc97 bl       #0x32134
00124120 0538fc97 bl       #0x32134
00124154 f837fc97 bl       #0x32134
001241D8 d737fc97 bl       #0x32134
### caller 0x124230
00124560 2936fc97 bl       #0x31e04
0012456C 5512fc97 bl       #0x28ec0
### caller 0x1245c0
001246B0 bc35fc97 bl       #0x31da0
001246D4 fb11fc97 bl       #0x28ec0
### caller 0x124710
00124804 6735fc97 bl       #0x31da0
00124828 a611fc97 bl       #0x28ec0
### caller 0x124860
0012495C 1135fc97 bl       #0x31da0
00124968 5611fc97 bl       #0x28ec0
### caller 0x127030
00127048 9e07fc97 bl       #0x28ec0
### caller 0x1270b4
00127108 6e07fc97 bl       #0x28ec0
### caller 0x12cd90
0012CF98 8213fc97 bl       #0x31da0
0012CFA4 c7effb97 bl       #0x28ec0
### caller 0x12d330
0012D618 e211fc97 bl       #0x31da0
0012D634 23eefb97 bl       #0x28ec0
### caller 0x12d654
0012D6A0 a512fc97 bl       #0x32134
### caller 0x132734
00132774 d3d9fb17 b        #0x28ec0
### caller 0x1347d8
0013480C add1fb97 bl       #0x28ec0
### caller 0x136de0
00136E24 27c8fb17 b        #0x28ec0
### caller 0x137014
001370A0 88c7fb97 bl       #0x28ec0
### caller 0x139ffc
0013A03C a1bbfb17 b        #0x28ec0
### caller 0x13a648
0013A694 0bbafb17 b        #0x28ec0
### caller 0x13c478
0013C4C4 7fb2fb17 b        #0x28ec0
### caller 0x13c710
0013C754 dbb1fb97 bl       #0x28ec0
### caller 0x13d15c
0013D1A8 46affb17 b        #0x28ec0
### caller 0x13d698
0013D6DC f9adfb97 bl       #0x28ec0
### caller 0x140000
00140070 31c8fb97 bl       #0x32134
001400CC 1ac8fb97 bl       #0x32134
0014014C fac7fb97 bl       #0x32134
001402B0 a1c7fb97 bl       #0x32134
00140304 8cc7fb97 bl       #0x32134
0014043C 59c6fb97 bl       #0x31da0
00140448 9ea2fb97 bl       #0x28ec0
00140578 23c6fb97 bl       #0x31e04
00140584 4fa2fb97 bl       #0x28ec0
001405BC dec6fb97 bl       #0x32134
00140618 c7c6fb97 bl       #0x32134
0014066C b2c6fb97 bl       #0x32134
001407FC 69c5fb97 bl       #0x31da0
00140808 aea1fb97 bl       #0x28ec0
### caller 0x140b68
00140BE8 87c4fb97 bl       #0x31e04
00140BF4 b3a0fb97 bl       #0x28ec0
### caller 0x140c10
00140DA0 00c4fb97 bl       #0x31da0
00140DAC 45a0fb97 bl       #0x28ec0
### caller 0x141620
001417E0 89c1fb97 bl       #0x31e04
001417EC b59dfb97 bl       #0x28ec0
### caller 0x141820
00141B78 8ac0fb97 bl       #0x31da0
00141B84 cf9cfb97 bl       #0x28ec0
### caller 0x144738
00144760 d891fb97 bl       #0x28ec0
### caller 0x1449bc
00144A78 1291fb97 bl       #0x28ec0
### caller 0x14a6c0
0014A874 4b9dfb97 bl       #0x31da0
0014A898 8a79fb97 bl       #0x28ec0
### caller 0x14ab70
0014AD38 1a9cfb97 bl       #0x31da0
0014AD44 5f78fb97 bl       #0x28ec0
### caller 0x14ae40
0014B09C 5a9bfb97 bl       #0x31e04
0014B0A8 8677fb97 bl       #0x28ec0
### caller 0x14b1b0
0014B418 629afb97 bl       #0x31da0
0014B424 a776fb97 bl       #0x28ec0
### caller 0x14b490
0014B658 d299fb97 bl       #0x31da0
0014B664 1776fb97 bl       #0x28ec0
### caller 0x14b800
0014BA5C ea98fb97 bl       #0x31e04
0014BA68 1675fb97 bl       #0x28ec0
### caller 0x1517a8
00151834 a35dfb97 bl       #0x28ec0
### caller 0x15e074
0015E088 8e2bfb97 bl       #0x28ec0
### caller 0x15f088
0015F0A0 8827fb97 bl       #0x28ec0
### caller 0x15f0e0
0015F20C 2d27fb97 bl       #0x28ec0
### caller 0x15f44c
0015F464 9726fb97 bl       #0x28ec0
### caller 0x15f4a4
0015F4BC 8126fb97 bl       #0x28ec0
### caller 0x163640
00163670 b13afb97 bl       #0x32134
00163770 713afb97 bl       #0x32134
### caller 0x1638d8
00163C34 5b38fb97 bl       #0x31da0
00163C40 a014fb97 bl       #0x28ec0
### caller 0x163f30
001641DC f136fb97 bl       #0x31da0
001641E8 3613fb97 bl       #0x28ec0
### caller 0x1642e0
0016451C 2136fb97 bl       #0x31da0
00164538 6212fb97 bl       #0x28ec0
### caller 0x1645e0
0016462C c236fb97 bl       #0x32134
00164684 ac36fb97 bl       #0x32134
001646C0 9d36fb97 bl       #0x32134
### caller 0x164ed8
00164F84 8733fb97 bl       #0x31da0
00164F90 cc0ffb97 bl       #0x28ec0
### caller 0x164fb0
00164FF0 5134fb97 bl       #0x32134
00165070 4c33fb97 bl       #0x31da0
0016509C 2634fb97 bl       #0x32134
0016516C f233fb97 bl       #0x32134
001651AC e233fb97 bl       #0x32134
00165228 de32fb97 bl       #0x31da0
0016524C ba33fb97 bl       #0x32134
### caller 0x165860
00165930 0132fb97 bl       #0x32134
00165968 f331fb97 bl       #0x32134
001659A4 e431fb97 bl       #0x32134
001659DC d631fb97 bl       #0x32134
00165A4C ba31fb97 bl       #0x32134
### caller 0x165b0c
00165C64 6830fb97 bl       #0x31e04
00165C6C 4d30fb97 bl       #0x31da0
00165C78 920cfb97 bl       #0x28ec0
### caller 0x166050
00166258 d22efb97 bl       #0x31da0
00166264 170bfb97 bl       #0x28ec0
### caller 0x1662e0
00166304 8c2ffb97 bl       #0x32134
00166318 872ffb97 bl       #0x32134
### caller 0x168ad0
00168E5C ea23fb97 bl       #0x31e04
00168E68 1600fb97 bl       #0x28ec0
### caller 0x168e84
00168EC4 9c24fb97 bl       #0x32134
00168F74 a423fb97 bl       #0x31e04
00168F80 d0fffa97 bl       #0x28ec0
00168F94 6824fb97 bl       #0x32134
00169000 6823fb97 bl       #0x31da0
0016900C adfffa97 bl       #0x28ec0
00169100 2823fb97 bl       #0x31da0
0016910C 6dfffa97 bl       #0x28ec0
001691FC ce23fb97 bl       #0x32134
### caller 0x16a484
0016A724 e7f9fa97 bl       #0x28ec0
### caller 0x16a87c
0016A8D0 7cf9fa97 bl       #0x28ec0
### caller 0x16a8e4
0016A938 62f9fa97 bl       #0x28ec0
### caller 0x16c190
0016C1E0 d517fb97 bl       #0x32134
0016C21C c617fb97 bl       #0x32134
0016C284 ac17fb97 bl       #0x32134
0016C2B0 a117fb97 bl       #0x32134
0016C318 8717fb97 bl       #0x32134
0016C38C 6a17fb97 bl       #0x32134
0016C3D4 5817fb97 bl       #0x32134
0016C590 e916fb97 bl       #0x32134
### caller 0x16c720
0016C864 6815fb97 bl       #0x31e04
0016C870 94f1fa97 bl       #0x28ec0
### caller 0x16c8a0
0016C9E8 0715fb97 bl       #0x31e04
0016C9F4 33f1fa97 bl       #0x28ec0
### caller 0x16ca20
0016CB64 a814fb97 bl       #0x31e04
0016CB70 d4f0fa97 bl       #0x28ec0
### caller 0x16cca0
0016CDE4 ef13fb97 bl       #0x31da0
0016CDF0 34f0fa97 bl       #0x28ec0
### caller 0x16f740
0016F800 8109fb97 bl       #0x31e04
0016F80C ade5fa97 bl       #0x28ec0
0016F848 3b0afb97 bl       #0x32134
0016F89C 260afb97 bl       #0x32134
0016F8D4 13010094 bl       #0x16fd20
0016F8F0 110afb97 bl       #0x32134
### caller 0x16f9e8
0016FA00 cd09fb97 bl       #0x32134
0016FAB4 d408fb97 bl       #0x31e04
0016FAC0 00e5fa97 bl       #0x28ec0
### caller 0x16fb20
0016FB3C 7e09fb97 bl       #0x32134
0016FBA0 c0cd0294 bl       #0x2232a0
0016FBDC 7108fb97 bl       #0x31da0
0016FBE8 b6e4fa97 bl       #0x28ec0
### caller 0x16fc20
0016FC3C 3e09fb97 bl       #0x32134
0016FCD8 3208fb97 bl       #0x31da0
0016FCE4 77e4fa97 bl       #0x28ec0
### caller 0x16fd20
0016FD38 ff08fb97 bl       #0x32134
0016FD8C 0508fb97 bl       #0x31da0
0016FD98 4ae4fa97 bl       #0x28ec0
### caller 0x16fe30
0017002C 5d07fb97 bl       #0x31da0
00170038 a2e3fa97 bl       #0x28ec0
### caller 0x1700d8
0017023C f206fb97 bl       #0x31e04
00170248 1ee3fa97 bl       #0x28ec0
001702C4 d006fb97 bl       #0x31e04
001702D0 fce2fa97 bl       #0x28ec0
### caller 0x1708e8
001708FC 71e1fa97 bl       #0x28ec0
### caller 0x174884
00174914 6bd1fa97 bl       #0x28ec0
### caller 0x175ecc
00175F38 9aeffa97 bl       #0x31da0
00175F5C d9cbfa97 bl       #0x28ec0
00175F84 6cf0fa97 bl       #0x32134
### caller 0x177400
00177438 3febfa97 bl       #0x32134
### caller 0x1778d0
0017799C 1ae9fa97 bl       #0x31e04
001779A8 46c5fa97 bl       #0x28ec0
### caller 0x177de0
001780E8 47e7fa97 bl       #0x31e04
001780F4 73c3fa97 bl       #0x28ec0
### caller 0x178120
00178160 f5e7fa97 bl       #0x32134
00178208 e6e6fa97 bl       #0x31da0
00178230 c1e7fa97 bl       #0x32134
### caller 0x1787e0
00178B7C a2e4fa97 bl       #0x31e04
00178B88 cec0fa97 bl       #0x28ec0
### caller 0x178be0
00178C60 35e5fa97 bl       #0x32134
### caller 0x18a010
0018A274 137bfa97 bl       #0x28ec0
### caller 0x18a2a8
0018A320 e87afa97 bl       #0x28ec0
### caller 0x18da98
0018DBD8 ba6cfa97 bl       #0x28ec0
### caller 0x18dc60
0018DCD8 7a6cfa97 bl       #0x28ec0
### caller 0x18f5d8
0018F5FC 3166fa97 bl       #0x28ec0
### caller 0x190fa0
00191030 a45ffa97 bl       #0x28ec0
### caller 0x1927e8
00192894 8b59fa97 bl       #0x28ec0
### caller 0x195c74
00195C8C 8d4cfa97 bl       #0x28ec0
### caller 0x19aec0
0019B190 045bfa97 bl       #0x31da0
0019B19C 4937fa97 bl       #0x28ec0
### caller 0x19c0b0
0019C0CC 7d33fa97 bl       #0x28ec0
### caller 0x19d90c
0019D99C 492dfa97 bl       #0x28ec0
0019D9BC 412dfa97 bl       #0x28ec0

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
### 0x25938 (1 slots)
~~~asm
00025938 5e020014 b        #0x262b0
~~~
### 0x2594c (2 slots)
~~~asm
0002594C 00008012 mov      w0, #-1
00025950 c0035fd6 ret      
~~~
### 0x28ec0 (4 slots)
~~~asm
00028EC0 e203012a mov      w2, w1
00028EC4 e10300aa mov      x1, x0
00028EC8 003040f9 ldr      x0, [x0, #0x60]
00028ECC 5dfbff17 b        #0x27c40
~~~
### 0x31da0 (25 slots)
~~~asm
00031DA0 ff0302d1 sub      sp, sp, #0x80
00031DA4 fd7b07a9 stp      x29, x30, [sp, #0x70]
00031DA8 fdc30191 add      x29, sp, #0x70
00031DAC 482a9dd2 mov      x8, #0xe952
00031DB0 e868b4f2 movk     x8, #0xa347, lsl #16
00031DB4 ff3b00b9 str      wzr, [sp, #0x38]
00031DB8 484edef2 movk     x8, #0xf272, lsl #32
00031DBC 4857f1f2 movk     x8, #0x8aba, lsl #48
00031DC0 ff0300f9 str      xzr, [sp]
00031DC4 e82300f9 str      x8, [sp, #0x40]
00031DC8 88008052 mov      w8, #4
00031DCC e2030091 mov      x2, sp
00031DD0 e84b00b9 str      w8, [sp, #0x48]
00031DD4 28008052 mov      w8, #1
00031DD8 e8330139 strb     w8, [sp, #0x4c]
00031DDC e8ff9f52 mov      w8, #0xffff
00031DE0 e8e304b8 stur     w8, [sp, #0x4e]
00031DE4 ffff02a9 stp      xzr, xzr, [sp, #0x28]
00031DE8 ffff01a9 stp      xzr, xzr, [sp, #0x18]
00031DEC ffff00a9 stp      xzr, xzr, [sp, #8]
00031DF0 ff7f06a9 stp      xzr, xzr, [sp, #0x60]
00031DF4 04000094 bl       #0x31e04
00031DF8 fd7b47a9 ldp      x29, x30, [sp, #0x70]
00031DFC ff030291 add      sp, sp, #0x80
00031E00 c0035fd6 ret      
~~~
### 0x31e04 (61 slots)
~~~asm
00031E04 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00031E08 f50b00f9 str      x21, [sp, #0x10]
00031E0C f44f02a9 stp      x20, x19, [sp, #0x20]
00031E10 fd030091 mov      x29, sp
00031E14 f30300aa mov      x19, x0
00031E18 002843f9 ldr      x0, [x0, #0x650]
00031E1C f50302aa mov      x21, x2
00031E20 f40301aa mov      x20, x1
00031E24 a00000b4 cbz      x0, #0x31e38
00031E28 e10315aa mov      x1, x21
00031E2C 15030094 bl       #0x32a80
00031E30 08000012 and      w8, w0, #1
00031E34 68421a39 strb     w8, [x19, #0x690]
00031E38 603a43f9 ldr      x0, [x19, #0x670]
00031E3C a00000b4 cbz      x0, #0x31e50
00031E40 e10315aa mov      x1, x21
00031E44 01060094 bl       #0x33648
00031E48 08000012 and      w8, w0, #1
00031E4C 68421a39 strb     w8, [x19, #0x690]
00031E50 88424039 ldrb     w8, [x20, #0x10]
00031E54 68461a39 strb     w8, [x19, #0x691]
00031E58 602243f9 ldr      x0, [x19, #0x640]
00031E5C 814a4039 ldrb     w1, [x20, #0x12]
00031E60 7a4b0a94 bl       #0x2c4c48
00031E64 602243f9 ldr      x0, [x19, #0x640]
00031E68 814e4039 ldrb     w1, [x20, #0x13]
00031E6C 7b4b0a94 bl       #0x2c4c58
00031E70 602243f9 ldr      x0, [x19, #0x640]
00031E74 81524039 ldrb     w1, [x20, #0x14]
00031E78 7a4b0a94 bl       #0x2c4c60
00031E7C 602243f9 ldr      x0, [x19, #0x640]
00031E80 810a4129 ldp      w1, w2, [x20, #8]
00031E84 324b0a94 bl       #0x2c4b4c
00031E88 602243f9 ldr      x0, [x19, #0x640]
00031E8C 810240f9 ldr      x1, [x20]
00031E90 080040f9 ldr      x8, [x0]
00031E94 082940f9 ldr      x8, [x8, #0x50]
00031E98 00013fd6 blr      x8
00031E9C a80240f9 ldr      x8, [x21]
00031EA0 1f0100f1 cmp      x8, #0
00031EA4 602243f9 ldr      x0, [x19, #0x640]
00031EA8 e1179f1a cset     w1, eq
00031EAC 694b0a94 bl       #0x2c4c50
00031EB0 88464039 ldrb     w8, [x20, #0x11]
00031EB4 68000034 cbz      w8, #0x31ec0
00031EB8 602243f9 ldr      x0, [x19, #0x640]
00031EBC 214a0a94 bl       #0x2c4740
00031EC0 682a43f9 ldr      x8, [x19, #0x650]
00031EC4 693a43f9 ldr      x9, [x19, #0x670]
00031EC8 080109aa orr      x8, x8, x9
00031ECC e80000b4 cbz      x8, #0x31ee8
00031ED0 60420491 add      x0, x19, #0x110
00031ED4 f44f42a9 ldp      x20, x19, [sp, #0x20]
00031ED8 f50b40f9 ldr      x21, [sp, #0x10]
00031EDC 21008052 mov      w1, #1
00031EE0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
00031EE4 6fe7ff17 b        #0x2bca0
00031EE8 f44f42a9 ldp      x20, x19, [sp, #0x20]
00031EEC f50b40f9 ldr      x21, [sp, #0x10]
00031EF0 fd7bc3a8 ldp      x29, x30, [sp], #0x30
00031EF4 c0035fd6 ret      
~~~
### 0x32134 (32 slots)
~~~asm
00032134 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00032138 f30b00f9 str      x19, [sp, #0x10]
0003213C fd030091 mov      x29, sp
00032140 f30300aa mov      x19, x0
00032144 002043f9 ldr      x0, [x0, #0x640]
00032148 c3490a94 bl       #0x2c4854
0003214C 682a43f9 ldr      x8, [x19, #0x650]
00032150 e80100b4 cbz      x8, #0x3218c
00032154 08614139 ldrb     w8, [x8, #0x58]
00032158 1f010071 cmp      w8, #0
0003215C e8179f1a cset     w8, eq
00032160 693a43f9 ldr      x9, [x19, #0x670]
00032164 a90100b4 cbz      x9, #0x32198
00032168 29414139 ldrb     w9, [x9, #0x50]
0003216C 3f010071 cmp      w9, #0
00032170 e9179f1a cset     w9, eq
00032174 f30b40f9 ldr      x19, [sp, #0x10]
00032178 1f180071 cmp      w0, #6
0003217C e813881a csel     w8, wzr, w8, ne
00032180 0001090a and      w0, w8, w9
00032184 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00032188 c0035fd6 ret      
0003218C 28008052 mov      w8, #1
00032190 693a43f9 ldr      x9, [x19, #0x670]
00032194 a9feffb5 cbnz     x9, #0x32168
00032198 29008052 mov      w9, #1
0003219C f30b40f9 ldr      x19, [sp, #0x10]
000321A0 1f180071 cmp      w0, #6
000321A4 e813881a csel     w8, wzr, w8, ne
000321A8 0001090a and      w0, w8, w9
000321AC fd7bc2a8 ldp      x29, x30, [sp], #0x20
000321B0 c0035fd6 ret      
~~~
### 0x6aec0 (25 slots)
~~~asm
0006AEC0 a83b00f0 adrp     x8, #0x7e1000
0006AEC4 08811591 add      x8, x8, #0x560
0006AEC8 000140f9 ldr      x0, [x8]
0006AECC 1f0100f9 str      xzr, [x8]
0006AED0 800200b4 cbz      x0, #0x6af20
0006AED4 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0006AED8 f65701a9 stp      x22, x21, [sp, #0x10]
0006AEDC f44f02a9 stp      x20, x19, [sp, #0x20]
0006AEE0 fd030091 mov      x29, sp
0006AEE4 085840a9 ldp      x8, x22, [x0]
0006AEE8 151040f9 ldr      x21, [x0, #0x20]
0006AEEC 135041a9 ldp      x19, x20, [x0, #0x10]
0006AEF0 080140f9 ldr      x8, [x8]
0006AEF4 00013fd6 blr      x8
0006AEF8 c80240f9 ldr      x8, [x22]
0006AEFC e00316aa mov      x0, x22
0006AF00 e10313aa mov      x1, x19
0006AF04 e20314aa mov      x2, x20
0006AF08 e30315aa mov      x3, x21
0006AF0C 040d40f9 ldr      x4, [x8, #0x18]
0006AF10 f44f42a9 ldp      x20, x19, [sp, #0x20]
0006AF14 f65741a9 ldp      x22, x21, [sp, #0x10]
0006AF18 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0006AF1C 80001fd6 br       x4
0006AF20 c0035fd6 ret      
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
### 0x6bf94 (1 slots)
~~~asm
0006BF94 9bffff17 b        #0x6be00
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
### 0x6ccb0 (92 slots)
~~~asm
0006CCB0 ff4301d1 sub      sp, sp, #0x50
0006CCB4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006CCB8 f71300f9 str      x23, [sp, #0x20]
0006CCBC f65703a9 stp      x22, x21, [sp, #0x30]
0006CCC0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006CCC4 fd430091 add      x29, sp, #0x10
0006CCC8 13400291 add      x19, x0, #0x90
0006CCCC e00313aa mov      x0, x19
0006CCD0 bd410094 bl       #0x7d3c4
0006CCD4 e00313aa mov      x0, x19
0006CCD8 bf410094 bl       #0x7d3d4
0006CCDC 883900f0 adrp     x8, #0x79f000
0006CCE0 893900f0 adrp     x9, #0x79f000
0006CCE4 08ed41f9 ldr      x8, [x8, #0x3d8]
0006CCE8 080140f9 ldr      x8, [x8]
0006CCEC 153540f9 ldr      x21, [x8, #0x68]
0006CCF0 082540f9 ldr      x8, [x8, #0x48]
0006CCF4 297942f9 ldr      x9, [x9, #0x4f0]
0006CCF8 a80f00f9 str      x8, [x29, #0x18]
0006CCFC 280140f9 ldr      x8, [x9]
0006CD00 143140f9 ldr      x20, [x8, #0x60]
0006CD04 b40000b4 cbz      x20, #0x6cd18
0006CD08 e00314aa mov      x0, x20
0006CD0C 088c44f8 ldr      x8, [x0, #0x48]!
0006CD10 080940f9 ldr      x8, [x8, #0x10]
0006CD14 00013fd6 blr      x8
0006CD18 e8230091 add      x8, sp, #8
0006CD1C a2630091 add      x2, x29, #0x18
0006CD20 e00314aa mov      x0, x20
0006CD24 e10315aa mov      x1, x21
0006CD28 97100094 bl       #0x70f84
0006CD2C 888e44f8 ldr      x8, [x20, #0x48]!
0006CD30 e00314aa mov      x0, x20
0006CD34 080d40f9 ldr      x8, [x8, #0x18]
0006CD38 00013fd6 blr      x8
0006CD3C f40740f9 ldr      x20, [sp, #8]
0006CD40 140500b4 cbz      x20, #0x6cde0
0006CD44 965640b9 ldr      w22, [x20, #0x54]
0006CD48 d6040034 cbz      w22, #0x6cde0
0006CD4C 95520191 add      x21, x20, #0x54
0006CD50 06000014 b        #0x6cd68
0006CD54 5f3f03d5 clrex    
0006CD58 e9031f2a mov      w9, wzr
0006CD5C df020037 tbnz     wzr, #0, #0x6cdb4
0006CD60 f603082a mov      w22, w8
0006CD64 e8030034 cbz      w8, #0x6cde0
0006CD68 972e40f9 ldr      x23, [x20, #0x58]
0006CD6C f3120094 bl       #0x71938
0006CD70 1f0017eb cmp      x0, x23
0006CD74 00010054 b.eq     #0x6cd94
0006CD78 1f2003d5 nop      
0006CD7C 1f2003d5 nop      
0006CD80 f70240f9 ldr      x23, [x23]
0006CD84 ff0200eb cmp      x23, x0
0006CD88 e41a40fa ccmp     x23, #0, #4, ne
0006CD8C a1ffff54 b.ne     #0x6cd80
0006CD90 970200b4 cbz      x23, #0x6cde0
0006CD94 a87e5f88 ldxr     w8, [x21]
0006CD98 1f01166b cmp      w8, w22
0006CD9C c1fdff54 b.ne     #0x6cd54
0006CDA0 c9060011 add      w9, w22, #1
0006CDA4 a97e0a88 stxr     w10, w9, [x21]
0006CDA8 8afdff35 cbnz     w10, #0x6cd58
0006CDAC 29008052 mov      w9, #1
0006CDB0 89fd0736 tbz      w9, #0, #0x6cd60
0006CDB4 883240f9 ldr      x8, [x20, #0x60]
0006CDB8 094101d1 sub      x9, x8, #0x50
0006CDBC 1f0100f1 cmp      x8, #0
0006CDC0 e003899a csel     x0, xzr, x9, eq
0006CDC4 088c44f8 ldr      x8, [x0, #0x48]!
0006CDC8 13fc04f9 str      x19, [x0, #0x9f8]
0006CDCC 080d40f9 ldr      x8, [x8, #0x18]
0006CDD0 00013fd6 blr      x8
0006CDD4 e00740f9 ldr      x0, [sp, #8]
0006CDD8 200100b5 cbnz     x0, #0x6cdfc
0006CDDC 0b000014 b        #0x6ce08
0006CDE0 e0031faa mov      x0, xzr
0006CDE4 088c44f8 ldr      x8, [x0, #0x48]!
0006CDE8 13fc04f9 str      x19, [x0, #0x9f8]
0006CDEC 080d40f9 ldr      x8, [x8, #0x18]
0006CDF0 00013fd6 blr      x8
0006CDF4 e00740f9 ldr      x0, [sp, #8]
0006CDF8 800000b4 cbz      x0, #0x6ce08
0006CDFC 088c44f8 ldr      x8, [x0, #0x48]!
0006CE00 080d40f9 ldr      x8, [x8, #0x18]
0006CE04 00013fd6 blr      x8
0006CE08 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006CE0C f71340f9 ldr      x23, [sp, #0x20]
0006CE10 f65743a9 ldp      x22, x21, [sp, #0x30]
0006CE14 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006CE18 ff430191 add      sp, sp, #0x50
0006CE1C c0035fd6 ret      
~~~
### 0x6ce20 (16 slots)
~~~asm
0006CE20 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0006CE24 f30b00f9 str      x19, [sp, #0x10]
0006CE28 fd030091 mov      x29, sp
0006CE2C 139c40b9 ldr      w19, [x0, #0x9c]
0006CE30 e003132a mov      w0, w19
0006CE34 a7d80694 bl       #0x2230d0
0006CE38 883900f0 adrp     x8, #0x79f000
0006CE3C e003132a mov      w0, w19
0006CE40 08ed41f9 ldr      x8, [x8, #0x3d8]
0006CE44 080140f9 ldr      x8, [x8]
0006CE48 015541f9 ldr      x1, [x8, #0x2a8]
0006CE4C 1df6ff97 bl       #0x6a6c0
0006CE50 f30b40f9 ldr      x19, [sp, #0x10]
0006CE54 00018052 mov      w0, #8
0006CE58 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006CE5C c0035fd6 ret      
~~~
### 0x6ce60 (93 slots)
~~~asm
0006CE60 ff4301d1 sub      sp, sp, #0x50
0006CE64 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006CE68 f71300f9 str      x23, [sp, #0x20]
0006CE6C f65703a9 stp      x22, x21, [sp, #0x30]
0006CE70 f44f04a9 stp      x20, x19, [sp, #0x40]
0006CE74 fd430091 add      x29, sp, #0x10
0006CE78 13e01091 add      x19, x0, #0x438
0006CE7C f40300aa mov      x20, x0
0006CE80 e00313aa mov      x0, x19
0006CE84 ee6b0394 bl       #0x147e3c
0006CE88 893900f0 adrp     x9, #0x79f000
0006CE8C 28008052 mov      w8, #1
0006CE90 29ed41f9 ldr      x9, [x9, #0x3d8]
0006CE94 88e21039 strb     w8, [x20, #0x438]
0006CE98 280140f9 ldr      x8, [x9]
0006CE9C 893900f0 adrp     x9, #0x79f000
0006CEA0 153540f9 ldr      x21, [x8, #0x68]
0006CEA4 082540f9 ldr      x8, [x8, #0x48]
0006CEA8 297942f9 ldr      x9, [x9, #0x4f0]
0006CEAC a80f00f9 str      x8, [x29, #0x18]
0006CEB0 280140f9 ldr      x8, [x9]
0006CEB4 143140f9 ldr      x20, [x8, #0x60]
0006CEB8 b40000b4 cbz      x20, #0x6cecc
0006CEBC e00314aa mov      x0, x20
0006CEC0 088c44f8 ldr      x8, [x0, #0x48]!
0006CEC4 080940f9 ldr      x8, [x8, #0x10]
0006CEC8 00013fd6 blr      x8
0006CECC e8230091 add      x8, sp, #8
0006CED0 a2630091 add      x2, x29, #0x18
0006CED4 e00314aa mov      x0, x20
0006CED8 e10315aa mov      x1, x21
0006CEDC fa120094 bl       #0x71ac4
0006CEE0 888e44f8 ldr      x8, [x20, #0x48]!
0006CEE4 e00314aa mov      x0, x20
0006CEE8 080d40f9 ldr      x8, [x8, #0x18]
0006CEEC 00013fd6 blr      x8
0006CEF0 f40740f9 ldr      x20, [sp, #8]
0006CEF4 140500b4 cbz      x20, #0x6cf94
0006CEF8 965640b9 ldr      w22, [x20, #0x54]
0006CEFC d6040034 cbz      w22, #0x6cf94
0006CF00 95520191 add      x21, x20, #0x54
0006CF04 08000014 b        #0x6cf24
0006CF08 1f2003d5 nop      
0006CF0C 1f2003d5 nop      
0006CF10 5f3f03d5 clrex    
0006CF14 e9031f2a mov      w9, wzr
0006CF18 9f020037 tbnz     wzr, #0, #0x6cf68
0006CF1C f603082a mov      w22, w8
0006CF20 a8030034 cbz      w8, #0x6cf94
0006CF24 972e40f9 ldr      x23, [x20, #0x58]
0006CF28 75150094 bl       #0x724fc
0006CF2C 1f0017eb cmp      x0, x23
0006CF30 c0000054 b.eq     #0x6cf48
0006CF34 f70240f9 ldr      x23, [x23]
0006CF38 ff0200eb cmp      x23, x0
0006CF3C e41a40fa ccmp     x23, #0, #4, ne
0006CF40 a1ffff54 b.ne     #0x6cf34
0006CF44 970200b4 cbz      x23, #0x6cf94
0006CF48 a87e5f88 ldxr     w8, [x21]
0006CF4C 1f01166b cmp      w8, w22
0006CF50 01feff54 b.ne     #0x6cf10
0006CF54 c9060011 add      w9, w22, #1
0006CF58 a97e0a88 stxr     w10, w9, [x21]
0006CF5C cafdff35 cbnz     w10, #0x6cf14
0006CF60 29008052 mov      w9, #1
0006CF64 c9fd0736 tbz      w9, #0, #0x6cf1c
0006CF68 883240f9 ldr      x8, [x20, #0x60]
0006CF6C 094101d1 sub      x9, x8, #0x50
0006CF70 1f0100f1 cmp      x8, #0
0006CF74 e003899a csel     x0, xzr, x9, eq
0006CF78 088c44f8 ldr      x8, [x0, #0x48]!
0006CF7C 130c05f9 str      x19, [x0, #0xa18]
0006CF80 080d40f9 ldr      x8, [x8, #0x18]
0006CF84 00013fd6 blr      x8
0006CF88 e00740f9 ldr      x0, [sp, #8]
0006CF8C 200100b5 cbnz     x0, #0x6cfb0
0006CF90 0b000014 b        #0x6cfbc
0006CF94 e0031faa mov      x0, xzr
0006CF98 088c44f8 ldr      x8, [x0, #0x48]!
0006CF9C 130c05f9 str      x19, [x0, #0xa18]
0006CFA0 080d40f9 ldr      x8, [x8, #0x18]
0006CFA4 00013fd6 blr      x8
0006CFA8 e00740f9 ldr      x0, [sp, #8]
0006CFAC 800000b4 cbz      x0, #0x6cfbc
0006CFB0 088c44f8 ldr      x8, [x0, #0x48]!
0006CFB4 080d40f9 ldr      x8, [x8, #0x18]
0006CFB8 00013fd6 blr      x8
0006CFBC f44f44a9 ldp      x20, x19, [sp, #0x40]
0006CFC0 f71340f9 ldr      x23, [sp, #0x20]
0006CFC4 f65743a9 ldp      x22, x21, [sp, #0x30]
0006CFC8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006CFCC ff430191 add      sp, sp, #0x50
0006CFD0 c0035fd6 ret      
~~~
### 0x6cfe0 (92 slots)
~~~asm
0006CFE0 ff4301d1 sub      sp, sp, #0x50
0006CFE4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006CFE8 f71300f9 str      x23, [sp, #0x20]
0006CFEC f65703a9 stp      x22, x21, [sp, #0x30]
0006CFF0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006CFF4 fd430091 add      x29, sp, #0x10
0006CFF8 13300291 add      x19, x0, #0x8c
0006CFFC f40300aa mov      x20, x0
0006D000 e00313aa mov      x0, x19
0006D004 fef60394 bl       #0x16abfc
0006D008 883900d0 adrp     x8, #0x79f000
0006D00C 893900d0 adrp     x9, #0x79f000
0006D010 08ed41f9 ldr      x8, [x8, #0x3d8]
0006D014 9f8e00b9 str      wzr, [x20, #0x8c]
0006D018 080140f9 ldr      x8, [x8]
0006D01C 153540f9 ldr      x21, [x8, #0x68]
0006D020 082540f9 ldr      x8, [x8, #0x48]
0006D024 297942f9 ldr      x9, [x9, #0x4f0]
0006D028 a80f00f9 str      x8, [x29, #0x18]
0006D02C 280140f9 ldr      x8, [x9]
0006D030 143140f9 ldr      x20, [x8, #0x60]
0006D034 b40000b4 cbz      x20, #0x6d048
0006D038 e00314aa mov      x0, x20
0006D03C 088c44f8 ldr      x8, [x0, #0x48]!
0006D040 080940f9 ldr      x8, [x8, #0x10]
0006D044 00013fd6 blr      x8
0006D048 e8230091 add      x8, sp, #8
0006D04C a2630091 add      x2, x29, #0x18
0006D050 e00314aa mov      x0, x20
0006D054 e10315aa mov      x1, x21
0006D058 8c150094 bl       #0x72688
0006D05C 888e44f8 ldr      x8, [x20, #0x48]!
0006D060 e00314aa mov      x0, x20
0006D064 080d40f9 ldr      x8, [x8, #0x18]
0006D068 00013fd6 blr      x8
0006D06C f40740f9 ldr      x20, [sp, #8]
0006D070 140500b4 cbz      x20, #0x6d110
0006D074 965640b9 ldr      w22, [x20, #0x54]
0006D078 d6040034 cbz      w22, #0x6d110
0006D07C 95520191 add      x21, x20, #0x54
0006D080 06000014 b        #0x6d098
0006D084 5f3f03d5 clrex    
0006D088 e9031f2a mov      w9, wzr
0006D08C df020037 tbnz     wzr, #0, #0x6d0e4
0006D090 f603082a mov      w22, w8
0006D094 e8030034 cbz      w8, #0x6d110
0006D098 972e40f9 ldr      x23, [x20, #0x58]
0006D09C e7170094 bl       #0x73038
0006D0A0 1f0017eb cmp      x0, x23
0006D0A4 00010054 b.eq     #0x6d0c4
0006D0A8 1f2003d5 nop      
0006D0AC 1f2003d5 nop      
0006D0B0 f70240f9 ldr      x23, [x23]
0006D0B4 ff0200eb cmp      x23, x0
0006D0B8 e41a40fa ccmp     x23, #0, #4, ne
0006D0BC a1ffff54 b.ne     #0x6d0b0
0006D0C0 970200b4 cbz      x23, #0x6d110
0006D0C4 a87e5f88 ldxr     w8, [x21]
0006D0C8 1f01166b cmp      w8, w22
0006D0CC c1fdff54 b.ne     #0x6d084
0006D0D0 c9060011 add      w9, w22, #1
0006D0D4 a97e0a88 stxr     w10, w9, [x21]
0006D0D8 8afdff35 cbnz     w10, #0x6d088
0006D0DC 29008052 mov      w9, #1
0006D0E0 89fd0736 tbz      w9, #0, #0x6d090
0006D0E4 883240f9 ldr      x8, [x20, #0x60]
0006D0E8 094101d1 sub      x9, x8, #0x50
0006D0EC 1f0100f1 cmp      x8, #0
0006D0F0 e003899a csel     x0, xzr, x9, eq
0006D0F4 088c44f8 ldr      x8, [x0, #0x48]!
0006D0F8 13fc04f9 str      x19, [x0, #0x9f8]
0006D0FC 080d40f9 ldr      x8, [x8, #0x18]
0006D100 00013fd6 blr      x8
0006D104 e00740f9 ldr      x0, [sp, #8]
0006D108 200100b5 cbnz     x0, #0x6d12c
0006D10C 0b000014 b        #0x6d138
0006D110 e0031faa mov      x0, xzr
0006D114 088c44f8 ldr      x8, [x0, #0x48]!
0006D118 13fc04f9 str      x19, [x0, #0x9f8]
0006D11C 080d40f9 ldr      x8, [x8, #0x18]
0006D120 00013fd6 blr      x8
0006D124 e00740f9 ldr      x0, [sp, #8]
0006D128 800000b4 cbz      x0, #0x6d138
0006D12C 088c44f8 ldr      x8, [x0, #0x48]!
0006D130 080d40f9 ldr      x8, [x8, #0x18]
0006D134 00013fd6 blr      x8
0006D138 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006D13C f71340f9 ldr      x23, [sp, #0x20]
0006D140 f65743a9 ldp      x22, x21, [sp, #0x30]
0006D144 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006D148 ff430191 add      sp, sp, #0x50
0006D14C c0035fd6 ret      
~~~
### 0x6d150 (89 slots)
~~~asm
0006D150 ff4301d1 sub      sp, sp, #0x50
0006D154 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006D158 f71300f9 str      x23, [sp, #0x20]
0006D15C f65703a9 stp      x22, x21, [sp, #0x30]
0006D160 f44f04a9 stp      x20, x19, [sp, #0x40]
0006D164 fd430091 add      x29, sp, #0x10
0006D168 883900d0 adrp     x8, #0x79f000
0006D16C f30300aa mov      x19, x0
0006D170 08ed41f9 ldr      x8, [x8, #0x3d8]
0006D174 7f0e0ab8 str      wzr, [x19, #0xa0]!
0006D178 893900d0 adrp     x9, #0x79f000
0006D17C 080140f9 ldr      x8, [x8]
0006D180 153540f9 ldr      x21, [x8, #0x68]
0006D184 082540f9 ldr      x8, [x8, #0x48]
0006D188 297942f9 ldr      x9, [x9, #0x4f0]
0006D18C a80f00f9 str      x8, [x29, #0x18]
0006D190 280140f9 ldr      x8, [x9]
0006D194 143140f9 ldr      x20, [x8, #0x60]
0006D198 b40000b4 cbz      x20, #0x6d1ac
0006D19C e00314aa mov      x0, x20
0006D1A0 088c44f8 ldr      x8, [x0, #0x48]!
0006D1A4 080940f9 ldr      x8, [x8, #0x10]
0006D1A8 00013fd6 blr      x8
0006D1AC e8230091 add      x8, sp, #8
0006D1B0 a2630091 add      x2, x29, #0x18
0006D1B4 e00314aa mov      x0, x20
0006D1B8 e10315aa mov      x1, x21
0006D1BC 02180094 bl       #0x731c4
0006D1C0 888e44f8 ldr      x8, [x20, #0x48]!
0006D1C4 e00314aa mov      x0, x20
0006D1C8 080d40f9 ldr      x8, [x8, #0x18]
0006D1CC 00013fd6 blr      x8
0006D1D0 f40740f9 ldr      x20, [sp, #8]
0006D1D4 140500b4 cbz      x20, #0x6d274
0006D1D8 965640b9 ldr      w22, [x20, #0x54]
0006D1DC d6040034 cbz      w22, #0x6d274
0006D1E0 95520191 add      x21, x20, #0x54
0006D1E4 08000014 b        #0x6d204
0006D1E8 1f2003d5 nop      
0006D1EC 1f2003d5 nop      
0006D1F0 5f3f03d5 clrex    
0006D1F4 e9031f2a mov      w9, wzr
0006D1F8 9f020037 tbnz     wzr, #0, #0x6d248
0006D1FC f603082a mov      w22, w8
0006D200 a8030034 cbz      w8, #0x6d274
0006D204 972e40f9 ldr      x23, [x20, #0x58]
0006D208 5c1a0094 bl       #0x73b78
0006D20C 1f0017eb cmp      x0, x23
0006D210 c0000054 b.eq     #0x6d228
0006D214 f70240f9 ldr      x23, [x23]
0006D218 ff0200eb cmp      x23, x0
0006D21C e41a40fa ccmp     x23, #0, #4, ne
0006D220 a1ffff54 b.ne     #0x6d214
0006D224 970200b4 cbz      x23, #0x6d274
0006D228 a87e5f88 ldxr     w8, [x21]
0006D22C 1f01166b cmp      w8, w22
0006D230 01feff54 b.ne     #0x6d1f0
0006D234 c9060011 add      w9, w22, #1
0006D238 a97e0a88 stxr     w10, w9, [x21]
0006D23C cafdff35 cbnz     w10, #0x6d1f4
0006D240 29008052 mov      w9, #1
0006D244 c9fd0736 tbz      w9, #0, #0x6d1fc
0006D248 883240f9 ldr      x8, [x20, #0x60]
0006D24C 094101d1 sub      x9, x8, #0x50
0006D250 1f0100f1 cmp      x8, #0
0006D254 e003899a csel     x0, xzr, x9, eq
0006D258 088c44f8 ldr      x8, [x0, #0x48]!
0006D25C 13fc04f9 str      x19, [x0, #0x9f8]
0006D260 080d40f9 ldr      x8, [x8, #0x18]
0006D264 00013fd6 blr      x8
0006D268 e00740f9 ldr      x0, [sp, #8]
0006D26C 200100b5 cbnz     x0, #0x6d290
0006D270 0b000014 b        #0x6d29c
0006D274 e0031faa mov      x0, xzr
0006D278 088c44f8 ldr      x8, [x0, #0x48]!
0006D27C 13fc04f9 str      x19, [x0, #0x9f8]
0006D280 080d40f9 ldr      x8, [x8, #0x18]
0006D284 00013fd6 blr      x8
0006D288 e00740f9 ldr      x0, [sp, #8]
0006D28C 800000b4 cbz      x0, #0x6d29c
0006D290 088c44f8 ldr      x8, [x0, #0x48]!
0006D294 080d40f9 ldr      x8, [x8, #0x18]
0006D298 00013fd6 blr      x8
0006D29C f44f44a9 ldp      x20, x19, [sp, #0x40]
0006D2A0 f71340f9 ldr      x23, [sp, #0x20]
0006D2A4 f65743a9 ldp      x22, x21, [sp, #0x30]
0006D2A8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006D2AC ff430191 add      sp, sp, #0x50
0006D2B0 c0035fd6 ret      
~~~
### 0x6d2b4 (30 slots)
~~~asm
0006D2B4 08a040b9 ldr      w8, [x0, #0xa0]
0006D2B8 08050051 sub      w8, w8, #1
0006D2BC 1f0d0071 cmp      w8, #3
0006D2C0 e8010054 b.hi     #0x6d2fc
0006D2C4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0006D2C8 f30b00f9 str      x19, [sp, #0x10]
0006D2CC fd030091 mov      x29, sp
0006D2D0 c92d0090 adrp     x9, #0x625000
0006D2D4 29591a91 add      x9, x9, #0x696
0006D2D8 aa000010 adr      x10, #0x6d2ec
0006D2DC 2b696838 ldrb     w11, [x9, x8]
0006D2E0 4a090b8b add      x10, x10, x11, lsl #2
0006D2E4 13048052 mov      w19, #0x20
0006D2E8 40011fd6 br       x10
0006D2EC 28008052 mov      w8, #1
0006D2F0 13038052 mov      w19, #0x18
0006D2F4 080c01b9 str      w8, [x0, #0x10c]
0006D2F8 06000014 b        #0x6d310
0006D2FC 80008052 mov      w0, #4
0006D300 c0035fd6 ret      
0006D304 13028052 mov      w19, #0x10
0006D308 02000014 b        #0x6d310
0006D30C 93018052 mov      w19, #0xc
0006D310 cce70694 bl       #0x227240
0006D314 1f000072 tst      w0, #1
0006D318 c8018052 mov      w8, #0xe
0006D31C 0011931a csel     w0, w8, w19, ne
0006D320 f30b40f9 ldr      x19, [sp, #0x10]
0006D324 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006D328 c0035fd6 ret      
~~~
### 0x6d330 (92 slots)
~~~asm
0006D330 ff4301d1 sub      sp, sp, #0x50
0006D334 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006D338 f71300f9 str      x23, [sp, #0x20]
0006D33C f65703a9 stp      x22, x21, [sp, #0x30]
0006D340 f44f04a9 stp      x20, x19, [sp, #0x40]
0006D344 fd430091 add      x29, sp, #0x10
0006D348 13e01091 add      x19, x0, #0x438
0006D34C f40300aa mov      x20, x0
0006D350 e00313aa mov      x0, x19
0006D354 ba6a0394 bl       #0x147e3c
0006D358 883900d0 adrp     x8, #0x79f000
0006D35C 893900d0 adrp     x9, #0x79f000
0006D360 08ed41f9 ldr      x8, [x8, #0x3d8]
0006D364 9fe21039 strb     wzr, [x20, #0x438]
0006D368 080140f9 ldr      x8, [x8]
0006D36C 153540f9 ldr      x21, [x8, #0x68]
0006D370 082540f9 ldr      x8, [x8, #0x48]
0006D374 297942f9 ldr      x9, [x9, #0x4f0]
0006D378 a80f00f9 str      x8, [x29, #0x18]
0006D37C 280140f9 ldr      x8, [x9]
0006D380 143140f9 ldr      x20, [x8, #0x60]
0006D384 b40000b4 cbz      x20, #0x6d398
0006D388 e00314aa mov      x0, x20
0006D38C 088c44f8 ldr      x8, [x0, #0x48]!
0006D390 080940f9 ldr      x8, [x8, #0x10]
0006D394 00013fd6 blr      x8
0006D398 e8230091 add      x8, sp, #8
0006D39C a2630091 add      x2, x29, #0x18
0006D3A0 e00314aa mov      x0, x20
0006D3A4 e10315aa mov      x1, x21
0006D3A8 c7110094 bl       #0x71ac4
0006D3AC 888e44f8 ldr      x8, [x20, #0x48]!
0006D3B0 e00314aa mov      x0, x20
0006D3B4 080d40f9 ldr      x8, [x8, #0x18]
0006D3B8 00013fd6 blr      x8
0006D3BC f40740f9 ldr      x20, [sp, #8]
0006D3C0 140500b4 cbz      x20, #0x6d460
0006D3C4 965640b9 ldr      w22, [x20, #0x54]
0006D3C8 d6040034 cbz      w22, #0x6d460
0006D3CC 95520191 add      x21, x20, #0x54
0006D3D0 06000014 b        #0x6d3e8
0006D3D4 5f3f03d5 clrex    
0006D3D8 e9031f2a mov      w9, wzr
0006D3DC df020037 tbnz     wzr, #0, #0x6d434
0006D3E0 f603082a mov      w22, w8
0006D3E4 e8030034 cbz      w8, #0x6d460
0006D3E8 972e40f9 ldr      x23, [x20, #0x58]
0006D3EC 44140094 bl       #0x724fc
0006D3F0 1f0017eb cmp      x0, x23
0006D3F4 00010054 b.eq     #0x6d414
0006D3F8 1f2003d5 nop      
0006D3FC 1f2003d5 nop      
0006D400 f70240f9 ldr      x23, [x23]
0006D404 ff0200eb cmp      x23, x0
0006D408 e41a40fa ccmp     x23, #0, #4, ne
0006D40C a1ffff54 b.ne     #0x6d400
0006D410 970200b4 cbz      x23, #0x6d460
0006D414 a87e5f88 ldxr     w8, [x21]
0006D418 1f01166b cmp      w8, w22
0006D41C c1fdff54 b.ne     #0x6d3d4
0006D420 c9060011 add      w9, w22, #1
0006D424 a97e0a88 stxr     w10, w9, [x21]
0006D428 8afdff35 cbnz     w10, #0x6d3d8
0006D42C 29008052 mov      w9, #1
0006D430 89fd0736 tbz      w9, #0, #0x6d3e0
0006D434 883240f9 ldr      x8, [x20, #0x60]
0006D438 094101d1 sub      x9, x8, #0x50
0006D43C 1f0100f1 cmp      x8, #0
0006D440 e003899a csel     x0, xzr, x9, eq
0006D444 088c44f8 ldr      x8, [x0, #0x48]!
0006D448 130c05f9 str      x19, [x0, #0xa18]
0006D44C 080d40f9 ldr      x8, [x8, #0x18]
0006D450 00013fd6 blr      x8
0006D454 e00740f9 ldr      x0, [sp, #8]
0006D458 200100b5 cbnz     x0, #0x6d47c
0006D45C 0b000014 b        #0x6d488
0006D460 e0031faa mov      x0, xzr
0006D464 088c44f8 ldr      x8, [x0, #0x48]!
0006D468 130c05f9 str      x19, [x0, #0xa18]
0006D46C 080d40f9 ldr      x8, [x8, #0x18]
0006D470 00013fd6 blr      x8
0006D474 e00740f9 ldr      x0, [sp, #8]
0006D478 800000b4 cbz      x0, #0x6d488
0006D47C 088c44f8 ldr      x8, [x0, #0x48]!
0006D480 080d40f9 ldr      x8, [x8, #0x18]
0006D484 00013fd6 blr      x8
0006D488 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006D48C f71340f9 ldr      x23, [sp, #0x20]
0006D490 f65743a9 ldp      x22, x21, [sp, #0x30]
0006D494 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006D498 ff430191 add      sp, sp, #0x50
0006D49C c0035fd6 ret      
~~~
### 0x6d4a0 (42 slots)
~~~asm
0006D4A0 083c44b9 ldr      w8, [x0, #0x43c]
0006D4A4 1f050071 cmp      w8, #1
0006D4A8 c1020054 b.ne     #0x6d500
0006D4AC fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0006D4B0 f30b00f9 str      x19, [sp, #0x10]
0006D4B4 fd030091 mov      x29, sp
0006D4B8 f30300aa mov      x19, x0
0006D4BC 65e70694 bl       #0x227250
0006D4C0 68a240b9 ldr      w8, [x19, #0xa0]
0006D4C4 08050051 sub      w8, w8, #1
0006D4C8 1f0d0071 cmp      w8, #3
0006D4CC e8010054 b.hi     #0x6d508
0006D4D0 c92d0090 adrp     x9, #0x625000
0006D4D4 29691a91 add      x9, x9, #0x69a
0006D4D8 8a000010 adr      x10, #0x6d4e8
0006D4DC 2b696838 ldrb     w11, [x9, x8]
0006D4E0 4a090b8b add      x10, x10, x11, lsl #2
0006D4E4 40011fd6 br       x10
0006D4E8 28008052 mov      w8, #1
0006D4EC 00038052 mov      w0, #0x18
0006D4F0 680e01b9 str      w8, [x19, #0x10c]
0006D4F4 f30b40f9 ldr      x19, [sp, #0x10]
0006D4F8 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006D4FC c0035fd6 ret      
0006D500 80008052 mov      w0, #4
0006D504 c0035fd6 ret      
0006D508 80008052 mov      w0, #4
0006D50C f30b40f9 ldr      x19, [sp, #0x10]
0006D510 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006D514 c0035fd6 ret      
0006D518 00048052 mov      w0, #0x20
0006D51C f30b40f9 ldr      x19, [sp, #0x10]
0006D520 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006D524 c0035fd6 ret      
0006D528 00028052 mov      w0, #0x10
0006D52C f30b40f9 ldr      x19, [sp, #0x10]
0006D530 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006D534 c0035fd6 ret      
0006D538 80018052 mov      w0, #0xc
0006D53C f30b40f9 ldr      x19, [sp, #0x10]
0006D540 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0006D544 c0035fd6 ret      
~~~
### 0x6d550 (88 slots)
~~~asm
0006D550 ff4301d1 sub      sp, sp, #0x50
0006D554 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006D558 f71300f9 str      x23, [sp, #0x20]
0006D55C f65703a9 stp      x22, x21, [sp, #0x30]
0006D560 f44f04a9 stp      x20, x19, [sp, #0x40]
0006D564 fd430091 add      x29, sp, #0x10
0006D568 883900d0 adrp     x8, #0x79f000
0006D56C f30300aa mov      x19, x0
0006D570 08d542f9 ldr      x8, [x8, #0x5a8]
0006D574 000140f9 ldr      x0, [x8]
0006D578 8e9cff97 bl       #0x547b0
0006D57C 7f7e00f9 str      xzr, [x19, #0xf8]
0006D580 883900d0 adrp     x8, #0x79f000
0006D584 893900d0 adrp     x9, #0x79f000
0006D588 08ed41f9 ldr      x8, [x8, #0x3d8]
0006D58C 7f0201b9 str      wzr, [x19, #0x100]
0006D590 080140f9 ldr      x8, [x8]
0006D594 153540f9 ldr      x21, [x8, #0x68]
0006D598 082540f9 ldr      x8, [x8, #0x48]
0006D59C 297942f9 ldr      x9, [x9, #0x4f0]
0006D5A0 a80f00f9 str      x8, [x29, #0x18]
0006D5A4 280140f9 ldr      x8, [x9]
0006D5A8 143140f9 ldr      x20, [x8, #0x60]
0006D5AC b40000b4 cbz      x20, #0x6d5c0
0006D5B0 e00314aa mov      x0, x20
0006D5B4 088c44f8 ldr      x8, [x0, #0x48]!
0006D5B8 080940f9 ldr      x8, [x8, #0x10]
0006D5BC 00013fd6 blr      x8
0006D5C0 e8230091 add      x8, sp, #8
0006D5C4 a2630091 add      x2, x29, #0x18
0006D5C8 e00314aa mov      x0, x20
0006D5CC e10315aa mov      x1, x21
0006D5D0 cd190094 bl       #0x73d04
0006D5D4 888e44f8 ldr      x8, [x20, #0x48]!
0006D5D8 e00314aa mov      x0, x20
0006D5DC 080d40f9 ldr      x8, [x8, #0x18]
0006D5E0 00013fd6 blr      x8
0006D5E4 f40740f9 ldr      x20, [sp, #8]
0006D5E8 340400b4 cbz      x20, #0x6d66c
0006D5EC 965640b9 ldr      w22, [x20, #0x54]
0006D5F0 f6030034 cbz      w22, #0x6d66c
0006D5F4 95520191 add      x21, x20, #0x54
0006D5F8 07000014 b        #0x6d614
0006D5FC 1f2003d5 nop      
0006D600 5f3f03d5 clrex    
0006D604 e9031f2a mov      w9, wzr
0006D608 9f020037 tbnz     wzr, #0, #0x6d658
0006D60C f603082a mov      w22, w8
0006D610 e8020034 cbz      w8, #0x6d66c
0006D614 972e40f9 ldr      x23, [x20, #0x58]
0006D618 281c0094 bl       #0x746b8
0006D61C 1f0017eb cmp      x0, x23
0006D620 c0000054 b.eq     #0x6d638
0006D624 f70240f9 ldr      x23, [x23]
0006D628 ff0200eb cmp      x23, x0
0006D62C e41a40fa ccmp     x23, #0, #4, ne
0006D630 a1ffff54 b.ne     #0x6d624
0006D634 d70100b4 cbz      x23, #0x6d66c
0006D638 a87e5f88 ldxr     w8, [x21]
0006D63C 1f01166b cmp      w8, w22
0006D640 01feff54 b.ne     #0x6d600
0006D644 c9060011 add      w9, w22, #1
0006D648 a97e0a88 stxr     w10, w9, [x21]
0006D64C cafdff35 cbnz     w10, #0x6d604
0006D650 29008052 mov      w9, #1
0006D654 c9fd0736 tbz      w9, #0, #0x6d60c
0006D658 883240f9 ldr      x8, [x20, #0x60]
0006D65C 094101d1 sub      x9, x8, #0x50
0006D660 1f0100f1 cmp      x8, #0
0006D664 e003899a csel     x0, xzr, x9, eq
0006D668 02000014 b        #0x6d670
0006D66C e0031faa mov      x0, xzr
0006D670 088c44f8 ldr      x8, [x0, #0x48]!
0006D674 69a20291 add      x9, x19, #0xa8
0006D678 09fc04f9 str      x9, [x0, #0x9f8]
0006D67C 080d40f9 ldr      x8, [x8, #0x18]
0006D680 00013fd6 blr      x8
0006D684 e00740f9 ldr      x0, [sp, #8]
0006D688 800000b4 cbz      x0, #0x6d698
0006D68C 088c44f8 ldr      x8, [x0, #0x48]!
0006D690 080d40f9 ldr      x8, [x8, #0x18]
0006D694 00013fd6 blr      x8
0006D698 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006D69C f71340f9 ldr      x23, [sp, #0x20]
0006D6A0 f65743a9 ldp      x22, x21, [sp, #0x30]
0006D6A4 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006D6A8 ff430191 add      sp, sp, #0x50
0006D6AC c0035fd6 ret      
~~~
### 0x6d6b0 (37 slots)
~~~asm
0006D6B0 09a840b9 ldr      w9, [x0, #0xa8]
0006D6B4 e80300aa mov      x8, x0
0006D6B8 80008052 mov      w0, #4
0006D6BC 3f290071 cmp      w9, #0xa
0006D6C0 08040054 b.hi     #0x6d740
0006D6C4 ca2d0090 adrp     x10, #0x625000
0006D6C8 4a791a91 add      x10, x10, #0x69e
0006D6CC 8b000010 adr      x11, #0x6d6dc
0006D6D0 4c696938 ldrb     w12, [x10, x9]
0006D6D4 6b090c8b add      x11, x11, x12, lsl #2
0006D6D8 60011fd6 br       x11
0006D6DC fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
0006D6E0 fd030091 mov      x29, sp
0006D6E4 00ad40b9 ldr      w0, [x8, #0xac]
0006D6E8 62d50694 bl       #0x222c70
0006D6EC 80008052 mov      w0, #4
0006D6F0 fd7bc1a8 ldp      x29, x30, [sp], #0x10
0006D6F4 c0035fd6 ret      
0006D6F8 40048052 mov      w0, #0x22
0006D6FC c0035fd6 ret      
0006D700 80028052 mov      w0, #0x14
0006D704 c0035fd6 ret      
0006D708 c0028052 mov      w0, #0x16
0006D70C c0035fd6 ret      
0006D710 00038052 mov      w0, #0x18
0006D714 1f0d01b9 str      wzr, [x8, #0x10c]
0006D718 c0035fd6 ret      
0006D71C 80048052 mov      w0, #0x24
0006D720 c0035fd6 ret      
0006D724 80038052 mov      w0, #0x1c
0006D728 c0035fd6 ret      
0006D72C 00058052 mov      w0, #0x28
0006D730 c0035fd6 ret      
0006D734 40058052 mov      w0, #0x2a
0006D738 c0035fd6 ret      
0006D73C c0048052 mov      w0, #0x26
0006D740 c0035fd6 ret      
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
### 0x6daa0 (87 slots)
~~~asm
0006DAA0 ff4301d1 sub      sp, sp, #0x50
0006DAA4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006DAA8 f71300f9 str      x23, [sp, #0x20]
0006DAAC f65703a9 stp      x22, x21, [sp, #0x30]
0006DAB0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006DAB4 fd430091 add      x29, sp, #0x10
0006DAB8 883900d0 adrp     x8, #0x79f000
0006DABC f30300aa mov      x19, x0
0006DAC0 08d542f9 ldr      x8, [x8, #0x5a8]
0006DAC4 000140f9 ldr      x0, [x8]
0006DAC8 3a9bff97 bl       #0x547b0
0006DACC 883900d0 adrp     x8, #0x79f000
0006DAD0 893900d0 adrp     x9, #0x79f000
0006DAD4 08ed41f9 ldr      x8, [x8, #0x3d8]
0006DAD8 080140f9 ldr      x8, [x8]
0006DADC 153540f9 ldr      x21, [x8, #0x68]
0006DAE0 082540f9 ldr      x8, [x8, #0x48]
0006DAE4 297942f9 ldr      x9, [x9, #0x4f0]
0006DAE8 a80f00f9 str      x8, [x29, #0x18]
0006DAEC 280140f9 ldr      x8, [x9]
0006DAF0 143140f9 ldr      x20, [x8, #0x60]
0006DAF4 b40000b4 cbz      x20, #0x6db08
0006DAF8 e00314aa mov      x0, x20
0006DAFC 088c44f8 ldr      x8, [x0, #0x48]!
0006DB00 080940f9 ldr      x8, [x8, #0x10]
0006DB04 00013fd6 blr      x8
0006DB08 e8230091 add      x8, sp, #8
0006DB0C a2630091 add      x2, x29, #0x18
0006DB10 e00314aa mov      x0, x20
0006DB14 e10315aa mov      x1, x21
0006DB18 e3240094 bl       #0x76ea4
0006DB1C 888e44f8 ldr      x8, [x20, #0x48]!
0006DB20 e00314aa mov      x0, x20
0006DB24 080d40f9 ldr      x8, [x8, #0x18]
0006DB28 00013fd6 blr      x8
0006DB2C f40740f9 ldr      x20, [sp, #8]
0006DB30 540400b4 cbz      x20, #0x6dbb8
0006DB34 965640b9 ldr      w22, [x20, #0x54]
0006DB38 16040034 cbz      w22, #0x6dbb8
0006DB3C 95520191 add      x21, x20, #0x54
0006DB40 06000014 b        #0x6db58
0006DB44 5f3f03d5 clrex    
0006DB48 e9031f2a mov      w9, wzr
0006DB4C df020037 tbnz     wzr, #0, #0x6dba4
0006DB50 f603082a mov      w22, w8
0006DB54 28030034 cbz      w8, #0x6dbb8
0006DB58 972e40f9 ldr      x23, [x20, #0x58]
0006DB5C 3f270094 bl       #0x77858
0006DB60 1f0017eb cmp      x0, x23
0006DB64 00010054 b.eq     #0x6db84
0006DB68 1f2003d5 nop      
0006DB6C 1f2003d5 nop      
0006DB70 f70240f9 ldr      x23, [x23]
0006DB74 ff0200eb cmp      x23, x0
0006DB78 e41a40fa ccmp     x23, #0, #4, ne
0006DB7C a1ffff54 b.ne     #0x6db70
0006DB80 d70100b4 cbz      x23, #0x6dbb8
0006DB84 a87e5f88 ldxr     w8, [x21]
0006DB88 1f01166b cmp      w8, w22
0006DB8C c1fdff54 b.ne     #0x6db44
0006DB90 c9060011 add      w9, w22, #1
0006DB94 a97e0a88 stxr     w10, w9, [x21]
0006DB98 8afdff35 cbnz     w10, #0x6db48
0006DB9C 29008052 mov      w9, #1
0006DBA0 89fd0736 tbz      w9, #0, #0x6db50
0006DBA4 883240f9 ldr      x8, [x20, #0x60]
0006DBA8 094101d1 sub      x9, x8, #0x50
0006DBAC 1f0100f1 cmp      x8, #0
0006DBB0 e003899a csel     x0, xzr, x9, eq
0006DBB4 02000014 b        #0x6dbbc
0006DBB8 e0031faa mov      x0, xzr
0006DBBC 088c44f8 ldr      x8, [x0, #0x48]!
0006DBC0 69220491 add      x9, x19, #0x108
0006DBC4 09fc04f9 str      x9, [x0, #0x9f8]
0006DBC8 080d40f9 ldr      x8, [x8, #0x18]
0006DBCC 00013fd6 blr      x8
0006DBD0 e00740f9 ldr      x0, [sp, #8]
0006DBD4 800000b4 cbz      x0, #0x6dbe4
0006DBD8 088c44f8 ldr      x8, [x0, #0x48]!
0006DBDC 080d40f9 ldr      x8, [x8, #0x18]
0006DBE0 00013fd6 blr      x8
0006DBE4 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006DBE8 f71340f9 ldr      x23, [sp, #0x20]
0006DBEC f65743a9 ldp      x22, x21, [sp, #0x30]
0006DBF0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006DBF4 ff430191 add      sp, sp, #0x50
0006DBF8 c0035fd6 ret      
~~~
### 0x6dbfc (37 slots)
~~~asm
0006DBFC ffc300d1 sub      sp, sp, #0x30
0006DC00 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006DC04 f44f02a9 stp      x20, x19, [sp, #0x20]
0006DC08 fd430091 add      x29, sp, #0x10
0006DC0C 883900d0 adrp     x8, #0x79f000
0006DC10 893900d0 adrp     x9, #0x79f000
0006DC14 08ed41f9 ldr      x8, [x8, #0x3d8]
0006DC18 080140f9 ldr      x8, [x8]
0006DC1C 143540f9 ldr      x20, [x8, #0x68]
0006DC20 082540f9 ldr      x8, [x8, #0x48]
0006DC24 297942f9 ldr      x9, [x9, #0x4f0]
0006DC28 e80700f9 str      x8, [sp, #8]
0006DC2C 280140f9 ldr      x8, [x9]
0006DC30 133140f9 ldr      x19, [x8, #0x60]
0006DC34 b30000b4 cbz      x19, #0x6dc48
0006DC38 e00313aa mov      x0, x19
0006DC3C 088c44f8 ldr      x8, [x0, #0x48]!
0006DC40 080940f9 ldr      x8, [x8, #0x10]
0006DC44 00013fd6 blr      x8
0006DC48 e8030091 mov      x8, sp
0006DC4C e2230091 add      x2, sp, #8
0006DC50 e00313aa mov      x0, x19
0006DC54 e10314aa mov      x1, x20
0006DC58 63270094 bl       #0x779e4
0006DC5C 688e44f8 ldr      x8, [x19, #0x48]!
0006DC60 e00313aa mov      x0, x19
0006DC64 080d40f9 ldr      x8, [x8, #0x18]
0006DC68 00013fd6 blr      x8
0006DC6C e00340f9 ldr      x0, [sp]
0006DC70 800000b4 cbz      x0, #0x6dc80
0006DC74 088c44f8 ldr      x8, [x0, #0x48]!
0006DC78 080d40f9 ldr      x8, [x8, #0x18]
0006DC7C 00013fd6 blr      x8
0006DC80 f44f42a9 ldp      x20, x19, [sp, #0x20]
0006DC84 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006DC88 ffc30091 add      sp, sp, #0x30
0006DC8C c0035fd6 ret      
~~~
### 0x6dc90 (83 slots)
~~~asm
0006DC90 ff4301d1 sub      sp, sp, #0x50
0006DC94 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006DC98 f71300f9 str      x23, [sp, #0x20]
0006DC9C f65703a9 stp      x22, x21, [sp, #0x30]
0006DCA0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006DCA4 fd430091 add      x29, sp, #0x10
0006DCA8 883900d0 adrp     x8, #0x79f000
0006DCAC 893900d0 adrp     x9, #0x79f000
0006DCB0 08ed41f9 ldr      x8, [x8, #0x3d8]
0006DCB4 f30300aa mov      x19, x0
0006DCB8 080140f9 ldr      x8, [x8]
0006DCBC 153540f9 ldr      x21, [x8, #0x68]
0006DCC0 082540f9 ldr      x8, [x8, #0x48]
0006DCC4 297942f9 ldr      x9, [x9, #0x4f0]
0006DCC8 a80f00f9 str      x8, [x29, #0x18]
0006DCCC 280140f9 ldr      x8, [x9]
0006DCD0 143140f9 ldr      x20, [x8, #0x60]
0006DCD4 b40000b4 cbz      x20, #0x6dce8
0006DCD8 e00314aa mov      x0, x20
0006DCDC 088c44f8 ldr      x8, [x0, #0x48]!
0006DCE0 080940f9 ldr      x8, [x8, #0x10]
0006DCE4 00013fd6 blr      x8
0006DCE8 e8230091 add      x8, sp, #8
0006DCEC a2630091 add      x2, x29, #0x18
0006DCF0 e00314aa mov      x0, x20
0006DCF4 e10315aa mov      x1, x21
0006DCF8 a4290094 bl       #0x78388
0006DCFC 888e44f8 ldr      x8, [x20, #0x48]!
0006DD00 e00314aa mov      x0, x20
0006DD04 080d40f9 ldr      x8, [x8, #0x18]
0006DD08 00013fd6 blr      x8
0006DD0C f40740f9 ldr      x20, [sp, #8]
0006DD10 540400b4 cbz      x20, #0x6dd98
0006DD14 965640b9 ldr      w22, [x20, #0x54]
0006DD18 16040034 cbz      w22, #0x6dd98
0006DD1C 95520191 add      x21, x20, #0x54
0006DD20 06000014 b        #0x6dd38
0006DD24 5f3f03d5 clrex    
0006DD28 e9031f2a mov      w9, wzr
0006DD2C df020037 tbnz     wzr, #0, #0x6dd84
0006DD30 f603082a mov      w22, w8
0006DD34 28030034 cbz      w8, #0x6dd98
0006DD38 972e40f9 ldr      x23, [x20, #0x58]
0006DD3C 202c0094 bl       #0x78dbc
0006DD40 1f0017eb cmp      x0, x23
0006DD44 00010054 b.eq     #0x6dd64
0006DD48 1f2003d5 nop      
0006DD4C 1f2003d5 nop      
0006DD50 f70240f9 ldr      x23, [x23]
0006DD54 ff0200eb cmp      x23, x0
0006DD58 e41a40fa ccmp     x23, #0, #4, ne
0006DD5C a1ffff54 b.ne     #0x6dd50
0006DD60 d70100b4 cbz      x23, #0x6dd98
0006DD64 a87e5f88 ldxr     w8, [x21]
0006DD68 1f01166b cmp      w8, w22
0006DD6C c1fdff54 b.ne     #0x6dd24
0006DD70 c9060011 add      w9, w22, #1
0006DD74 a97e0a88 stxr     w10, w9, [x21]
0006DD78 8afdff35 cbnz     w10, #0x6dd28
0006DD7C 29008052 mov      w9, #1
0006DD80 89fd0736 tbz      w9, #0, #0x6dd30
0006DD84 883240f9 ldr      x8, [x20, #0x60]
0006DD88 094101d1 sub      x9, x8, #0x50
0006DD8C 1f0100f1 cmp      x8, #0
0006DD90 e003899a csel     x0, xzr, x9, eq
0006DD94 02000014 b        #0x6dd9c
0006DD98 e0031faa mov      x0, xzr
0006DD9C 088c44f8 ldr      x8, [x0, #0x48]!
0006DDA0 69c21091 add      x9, x19, #0x430
0006DDA4 090c05f9 str      x9, [x0, #0xa18]
0006DDA8 080d40f9 ldr      x8, [x8, #0x18]
0006DDAC 00013fd6 blr      x8
0006DDB0 e00740f9 ldr      x0, [sp, #8]
0006DDB4 800000b4 cbz      x0, #0x6ddc4
0006DDB8 088c44f8 ldr      x8, [x0, #0x48]!
0006DDBC 080d40f9 ldr      x8, [x8, #0x18]
0006DDC0 00013fd6 blr      x8
0006DDC4 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006DDC8 f71340f9 ldr      x23, [sp, #0x20]
0006DDCC f65743a9 ldp      x22, x21, [sp, #0x30]
0006DDD0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006DDD4 ff430191 add      sp, sp, #0x50
0006DDD8 c0035fd6 ret      
~~~
### 0x6dde0 (108 slots)
~~~asm
0006DDE0 ff4301d1 sub      sp, sp, #0x50
0006DDE4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006DDE8 f85f02a9 stp      x24, x23, [sp, #0x20]
0006DDEC f65703a9 stp      x22, x21, [sp, #0x30]
0006DDF0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006DDF4 fd430091 add      x29, sp, #0x10
0006DDF8 883900d0 adrp     x8, #0x79f000
0006DDFC 893900d0 adrp     x9, #0x79f000
0006DE00 08ed41f9 ldr      x8, [x8, #0x3d8]
0006DE04 f30300aa mov      x19, x0
0006DE08 080140f9 ldr      x8, [x8]
0006DE0C 153540f9 ldr      x21, [x8, #0x68]
0006DE10 082540f9 ldr      x8, [x8, #0x48]
0006DE14 297942f9 ldr      x9, [x9, #0x4f0]
0006DE18 e80700f9 str      x8, [sp, #8]
0006DE1C 280140f9 ldr      x8, [x9]
0006DE20 143140f9 ldr      x20, [x8, #0x60]
0006DE24 b40000b4 cbz      x20, #0x6de38
0006DE28 e00314aa mov      x0, x20
0006DE2C 088c44f8 ldr      x8, [x0, #0x48]!
0006DE30 080940f9 ldr      x8, [x8, #0x10]
0006DE34 00013fd6 blr      x8
0006DE38 e8030091 mov      x8, sp
0006DE3C e2230091 add      x2, sp, #8
0006DE40 e00314aa mov      x0, x20
0006DE44 e10315aa mov      x1, x21
0006DE48 402c0094 bl       #0x78f48
0006DE4C 888e44f8 ldr      x8, [x20, #0x48]!
0006DE50 e00314aa mov      x0, x20
0006DE54 080d40f9 ldr      x8, [x8, #0x18]
0006DE58 00013fd6 blr      x8
0006DE5C 682241b9 ldr      w8, [x19, #0x120]
0006DE60 1f090071 cmp      w8, #2
0006DE64 f40340f9 ldr      x20, [sp]
0006DE68 f6179f1a cset     w22, eq
0006DE6C f40300b4 cbz      x20, #0x6dee8
0006DE70 975640b9 ldr      w23, [x20, #0x54]
0006DE74 77080034 cbz      w23, #0x6df80
0006DE78 95520191 add      x21, x20, #0x54
0006DE7C 06000014 b        #0x6de94
0006DE80 5f3f03d5 clrex    
0006DE84 e9031f2a mov      w9, wzr
0006DE88 9f020037 tbnz     wzr, #0, #0x6ded8
0006DE8C f703082a mov      w23, w8
0006DE90 88070034 cbz      w8, #0x6df80
0006DE94 982e40f9 ldr      x24, [x20, #0x58]
0006DE98 b92e0094 bl       #0x7997c
0006DE9C 1f0018eb cmp      x0, x24
0006DEA0 c0000054 b.eq     #0x6deb8
0006DEA4 180340f9 ldr      x24, [x24]
0006DEA8 1f0300eb cmp      x24, x0
0006DEAC 041b40fa ccmp     x24, #0, #4, ne
0006DEB0 a1ffff54 b.ne     #0x6dea4
0006DEB4 780600b4 cbz      x24, #0x6df80
0006DEB8 a87e5f88 ldxr     w8, [x21]
0006DEBC 1f01176b cmp      w8, w23
0006DEC0 01feff54 b.ne     #0x6de80
0006DEC4 e9060011 add      w9, w23, #1
0006DEC8 a97e0a88 stxr     w10, w9, [x21]
0006DECC cafdff35 cbnz     w10, #0x6de84
0006DED0 29008052 mov      w9, #1
0006DED4 c9fd0736 tbz      w9, #0, #0x6de8c
0006DED8 883240f9 ldr      x8, [x20, #0x60]
0006DEDC 094101d1 sub      x9, x8, #0x50
0006DEE0 1f0100f1 cmp      x8, #0
0006DEE4 f403899a csel     x20, xzr, x9, eq
0006DEE8 731642f9 ldr      x19, [x19, #0x428]
0006DEEC 530100b4 cbz      x19, #0x6df14
0006DEF0 f50313aa mov      x21, x19
0006DEF4 a88e44f8 ldr      x8, [x21, #0x48]!
0006DEF8 e00315aa mov      x0, x21
0006DEFC 080940f9 ldr      x8, [x8, #0x10]
0006DF00 00013fd6 blr      x8
0006DF04 a80240f9 ldr      x8, [x21]
0006DF08 e00315aa mov      x0, x21
0006DF0C 080940f9 ldr      x8, [x8, #0x10]
0006DF10 00013fd6 blr      x8
0006DF14 803245f9 ldr      x0, [x20, #0xa60]
0006DF18 933205f9 str      x19, [x20, #0xa60]
0006DF1C 800000b4 cbz      x0, #0x6df2c
0006DF20 088c44f8 ldr      x8, [x0, #0x48]!
0006DF24 080d40f9 ldr      x8, [x8, #0x18]
0006DF28 00013fd6 blr      x8
0006DF2C 966a0ab9 str      w22, [x20, #0xa68]
0006DF30 b30000b4 cbz      x19, #0x6df44
0006DF34 688e44f8 ldr      x8, [x19, #0x48]!
0006DF38 e00313aa mov      x0, x19
0006DF3C 080d40f9 ldr      x8, [x8, #0x18]
0006DF40 00013fd6 blr      x8
0006DF44 888e44f8 ldr      x8, [x20, #0x48]!
0006DF48 e00314aa mov      x0, x20
0006DF4C 080d40f9 ldr      x8, [x8, #0x18]
0006DF50 00013fd6 blr      x8
0006DF54 e00340f9 ldr      x0, [sp]
0006DF58 800000b4 cbz      x0, #0x6df68
0006DF5C 088c44f8 ldr      x8, [x0, #0x48]!
0006DF60 080d40f9 ldr      x8, [x8, #0x18]
0006DF64 00013fd6 blr      x8
0006DF68 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006DF6C f65743a9 ldp      x22, x21, [sp, #0x30]
0006DF70 f85f42a9 ldp      x24, x23, [sp, #0x20]
0006DF74 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006DF78 ff430191 add      sp, sp, #0x50
0006DF7C c0035fd6 ret      
0006DF80 f4031faa mov      x20, xzr
0006DF84 731642f9 ldr      x19, [x19, #0x428]
0006DF88 53fbffb5 cbnz     x19, #0x6def0
0006DF8C e2ffff17 b        #0x6df14
~~~
### 0x6df90 (87 slots)
~~~asm
0006DF90 ff4301d1 sub      sp, sp, #0x50
0006DF94 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006DF98 f71300f9 str      x23, [sp, #0x20]
0006DF9C f65703a9 stp      x22, x21, [sp, #0x30]
0006DFA0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006DFA4 fd430091 add      x29, sp, #0x10
0006DFA8 883900d0 adrp     x8, #0x79f000
0006DFAC f30300aa mov      x19, x0
0006DFB0 08d542f9 ldr      x8, [x8, #0x5a8]
0006DFB4 000140f9 ldr      x0, [x8]
0006DFB8 fe99ff97 bl       #0x547b0
0006DFBC 883900d0 adrp     x8, #0x79f000
0006DFC0 893900d0 adrp     x9, #0x79f000
0006DFC4 08ed41f9 ldr      x8, [x8, #0x3d8]
0006DFC8 080140f9 ldr      x8, [x8]
0006DFCC 153540f9 ldr      x21, [x8, #0x68]
0006DFD0 082540f9 ldr      x8, [x8, #0x48]
0006DFD4 297942f9 ldr      x9, [x9, #0x4f0]
0006DFD8 a80f00f9 str      x8, [x29, #0x18]
0006DFDC 280140f9 ldr      x8, [x9]
0006DFE0 143140f9 ldr      x20, [x8, #0x60]
0006DFE4 b40000b4 cbz      x20, #0x6dff8
0006DFE8 e00314aa mov      x0, x20
0006DFEC 088c44f8 ldr      x8, [x0, #0x48]!
0006DFF0 080940f9 ldr      x8, [x8, #0x10]
0006DFF4 00013fd6 blr      x8
0006DFF8 e8230091 add      x8, sp, #8
0006DFFC a2630091 add      x2, x29, #0x18
0006E000 e00314aa mov      x0, x20
0006E004 e10315aa mov      x1, x21
0006E008 c02e0094 bl       #0x79b08
0006E00C 888e44f8 ldr      x8, [x20, #0x48]!
0006E010 e00314aa mov      x0, x20
0006E014 080d40f9 ldr      x8, [x8, #0x18]
0006E018 00013fd6 blr      x8
0006E01C f40740f9 ldr      x20, [sp, #8]
0006E020 540400b4 cbz      x20, #0x6e0a8
0006E024 965640b9 ldr      w22, [x20, #0x54]
0006E028 16040034 cbz      w22, #0x6e0a8
0006E02C 95520191 add      x21, x20, #0x54
0006E030 06000014 b        #0x6e048
0006E034 5f3f03d5 clrex    
0006E038 e9031f2a mov      w9, wzr
0006E03C df020037 tbnz     wzr, #0, #0x6e094
0006E040 f603082a mov      w22, w8
0006E044 28030034 cbz      w8, #0x6e0a8
0006E048 972e40f9 ldr      x23, [x20, #0x58]
0006E04C 1b310094 bl       #0x7a4b8
0006E050 1f0017eb cmp      x0, x23
0006E054 00010054 b.eq     #0x6e074
0006E058 1f2003d5 nop      
0006E05C 1f2003d5 nop      
0006E060 f70240f9 ldr      x23, [x23]
0006E064 ff0200eb cmp      x23, x0
0006E068 e41a40fa ccmp     x23, #0, #4, ne
0006E06C a1ffff54 b.ne     #0x6e060
0006E070 d70100b4 cbz      x23, #0x6e0a8
0006E074 a87e5f88 ldxr     w8, [x21]
0006E078 1f01166b cmp      w8, w22
0006E07C c1fdff54 b.ne     #0x6e034
0006E080 c9060011 add      w9, w22, #1
0006E084 a97e0a88 stxr     w10, w9, [x21]
0006E088 8afdff35 cbnz     w10, #0x6e038
0006E08C 29008052 mov      w9, #1
0006E090 89fd0736 tbz      w9, #0, #0x6e040
0006E094 883240f9 ldr      x8, [x20, #0x60]
0006E098 094101d1 sub      x9, x8, #0x50
0006E09C 1f0100f1 cmp      x8, #0
0006E0A0 e003899a csel     x0, xzr, x9, eq
0006E0A4 02000014 b        #0x6e0ac
0006E0A8 e0031faa mov      x0, xzr
0006E0AC 088c44f8 ldr      x8, [x0, #0x48]!
0006E0B0 69420491 add      x9, x19, #0x110
0006E0B4 09fc04f9 str      x9, [x0, #0x9f8]
0006E0B8 080d40f9 ldr      x8, [x8, #0x18]
0006E0BC 00013fd6 blr      x8
0006E0C0 e00740f9 ldr      x0, [sp, #8]
0006E0C4 800000b4 cbz      x0, #0x6e0d4
0006E0C8 088c44f8 ldr      x8, [x0, #0x48]!
0006E0CC 080d40f9 ldr      x8, [x8, #0x18]
0006E0D0 00013fd6 blr      x8
0006E0D4 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006E0D8 f71340f9 ldr      x23, [sp, #0x20]
0006E0DC f65743a9 ldp      x22, x21, [sp, #0x30]
0006E0E0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006E0E4 ff430191 add      sp, sp, #0x50
0006E0E8 c0035fd6 ret      
~~~
### 0x6e0f0 (93 slots)
~~~asm
0006E0F0 ff4301d1 sub      sp, sp, #0x50
0006E0F4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006E0F8 f71300f9 str      x23, [sp, #0x20]
0006E0FC f65703a9 stp      x22, x21, [sp, #0x30]
0006E100 f44f04a9 stp      x20, x19, [sp, #0x40]
0006E104 fd430091 add      x29, sp, #0x10
0006E108 883900b0 adrp     x8, #0x79f000
0006E10C 893900b0 adrp     x9, #0x79f000
0006E110 08ed41f9 ldr      x8, [x8, #0x3d8]
0006E114 f30300aa mov      x19, x0
0006E118 080140f9 ldr      x8, [x8]
0006E11C 153540f9 ldr      x21, [x8, #0x68]
0006E120 082540f9 ldr      x8, [x8, #0x48]
0006E124 297942f9 ldr      x9, [x9, #0x4f0]
0006E128 a80f00f9 str      x8, [x29, #0x18]
0006E12C 280140f9 ldr      x8, [x9]
0006E130 143140f9 ldr      x20, [x8, #0x60]
0006E134 b40000b4 cbz      x20, #0x6e148
0006E138 e00314aa mov      x0, x20
0006E13C 088c44f8 ldr      x8, [x0, #0x48]!
0006E140 080940f9 ldr      x8, [x8, #0x10]
0006E144 00013fd6 blr      x8
0006E148 e8230091 add      x8, sp, #8
0006E14C a2630091 add      x2, x29, #0x18
0006E150 e00314aa mov      x0, x20
0006E154 e10315aa mov      x1, x21
0006E158 3b310094 bl       #0x7a644
0006E15C 888e44f8 ldr      x8, [x20, #0x48]!
0006E160 e00314aa mov      x0, x20
0006E164 080d40f9 ldr      x8, [x8, #0x18]
0006E168 00013fd6 blr      x8
0006E16C 680e4eb8 ldr      w8, [x19, #0xe0]!
0006E170 7f0600b9 str      wzr, [x19, #4]
0006E174 1f110071 cmp      w8, #4
0006E178 61000054 b.ne     #0x6e184
0006E17C 28008052 mov      w8, #1
0006E180 680200b9 str      w8, [x19]
0006E184 f40740f9 ldr      x20, [sp, #8]
0006E188 f40400b4 cbz      x20, #0x6e224
0006E18C 965640b9 ldr      w22, [x20, #0x54]
0006E190 b6040034 cbz      w22, #0x6e224
0006E194 95520191 add      x21, x20, #0x54
0006E198 07000014 b        #0x6e1b4
0006E19C 1f2003d5 nop      
0006E1A0 5f3f03d5 clrex    
0006E1A4 e9031f2a mov      w9, wzr
0006E1A8 9f020037 tbnz     wzr, #0, #0x6e1f8
0006E1AC f603082a mov      w22, w8
0006E1B0 a8030034 cbz      w8, #0x6e224
0006E1B4 972e40f9 ldr      x23, [x20, #0x58]
0006E1B8 b1330094 bl       #0x7b07c
0006E1BC 1f0017eb cmp      x0, x23
0006E1C0 c0000054 b.eq     #0x6e1d8
0006E1C4 f70240f9 ldr      x23, [x23]
0006E1C8 ff0200eb cmp      x23, x0
0006E1CC e41a40fa ccmp     x23, #0, #4, ne
0006E1D0 a1ffff54 b.ne     #0x6e1c4
0006E1D4 970200b4 cbz      x23, #0x6e224
0006E1D8 a87e5f88 ldxr     w8, [x21]
0006E1DC 1f01166b cmp      w8, w22
0006E1E0 01feff54 b.ne     #0x6e1a0
0006E1E4 c9060011 add      w9, w22, #1
0006E1E8 a97e0a88 stxr     w10, w9, [x21]
0006E1EC cafdff35 cbnz     w10, #0x6e1a4
0006E1F0 29008052 mov      w9, #1
0006E1F4 c9fd0736 tbz      w9, #0, #0x6e1ac
0006E1F8 883240f9 ldr      x8, [x20, #0x60]
0006E1FC 094101d1 sub      x9, x8, #0x50
0006E200 1f0100f1 cmp      x8, #0
0006E204 e003899a csel     x0, xzr, x9, eq
0006E208 088c44f8 ldr      x8, [x0, #0x48]!
0006E20C 130c05f9 str      x19, [x0, #0xa18]
0006E210 080d40f9 ldr      x8, [x8, #0x18]
0006E214 00013fd6 blr      x8
0006E218 e00740f9 ldr      x0, [sp, #8]
0006E21C 200100b5 cbnz     x0, #0x6e240
0006E220 0b000014 b        #0x6e24c
0006E224 e0031faa mov      x0, xzr
0006E228 088c44f8 ldr      x8, [x0, #0x48]!
0006E22C 130c05f9 str      x19, [x0, #0xa18]
0006E230 080d40f9 ldr      x8, [x8, #0x18]
0006E234 00013fd6 blr      x8
0006E238 e00740f9 ldr      x0, [sp, #8]
0006E23C 800000b4 cbz      x0, #0x6e24c
0006E240 088c44f8 ldr      x8, [x0, #0x48]!
0006E244 080d40f9 ldr      x8, [x8, #0x18]
0006E248 00013fd6 blr      x8
0006E24C f44f44a9 ldp      x20, x19, [sp, #0x40]
0006E250 f71340f9 ldr      x23, [sp, #0x20]
0006E254 f65743a9 ldp      x22, x21, [sp, #0x30]
0006E258 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006E25C ff430191 add      sp, sp, #0x50
0006E260 c0035fd6 ret      
~~~
### 0x6e270 (89 slots)
~~~asm
0006E270 ff4301d1 sub      sp, sp, #0x50
0006E274 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006E278 f71300f9 str      x23, [sp, #0x20]
0006E27C f65703a9 stp      x22, x21, [sp, #0x30]
0006E280 f44f04a9 stp      x20, x19, [sp, #0x40]
0006E284 fd430091 add      x29, sp, #0x10
0006E288 883900b0 adrp     x8, #0x79f000
0006E28C 893900b0 adrp     x9, #0x79f000
0006E290 08ed41f9 ldr      x8, [x8, #0x3d8]
0006E294 f30300aa mov      x19, x0
0006E298 080140f9 ldr      x8, [x8]
0006E29C 153540f9 ldr      x21, [x8, #0x68]
0006E2A0 082540f9 ldr      x8, [x8, #0x48]
0006E2A4 297942f9 ldr      x9, [x9, #0x4f0]
0006E2A8 a80f00f9 str      x8, [x29, #0x18]
0006E2AC 280140f9 ldr      x8, [x9]
0006E2B0 143140f9 ldr      x20, [x8, #0x60]
0006E2B4 b40000b4 cbz      x20, #0x6e2c8
0006E2B8 e00314aa mov      x0, x20
0006E2BC 088c44f8 ldr      x8, [x0, #0x48]!
0006E2C0 080940f9 ldr      x8, [x8, #0x10]
0006E2C4 00013fd6 blr      x8
0006E2C8 e8230091 add      x8, sp, #8
0006E2CC a2630091 add      x2, x29, #0x18
0006E2D0 e00314aa mov      x0, x20
0006E2D4 e10315aa mov      x1, x21
0006E2D8 db300094 bl       #0x7a644
0006E2DC 888e44f8 ldr      x8, [x20, #0x48]!
0006E2E0 e00314aa mov      x0, x20
0006E2E4 080d40f9 ldr      x8, [x8, #0x18]
0006E2E8 00013fd6 blr      x8
0006E2EC 28008052 mov      w8, #1
0006E2F0 74820391 add      x20, x19, #0xe0
0006E2F4 68e600b9 str      w8, [x19, #0xe4]
0006E2F8 f30740f9 ldr      x19, [sp, #8]
0006E2FC d30400b4 cbz      x19, #0x6e394
0006E300 765640b9 ldr      w22, [x19, #0x54]
0006E304 96040034 cbz      w22, #0x6e394
0006E308 75520191 add      x21, x19, #0x54
0006E30C 06000014 b        #0x6e324
0006E310 5f3f03d5 clrex    
0006E314 e9031f2a mov      w9, wzr
0006E318 9f020037 tbnz     wzr, #0, #0x6e368
0006E31C f603082a mov      w22, w8
0006E320 a8030034 cbz      w8, #0x6e394
0006E324 772e40f9 ldr      x23, [x19, #0x58]
0006E328 55330094 bl       #0x7b07c
0006E32C 1f0017eb cmp      x0, x23
0006E330 c0000054 b.eq     #0x6e348
0006E334 f70240f9 ldr      x23, [x23]
0006E338 ff0200eb cmp      x23, x0
0006E33C e41a40fa ccmp     x23, #0, #4, ne
0006E340 a1ffff54 b.ne     #0x6e334
0006E344 970200b4 cbz      x23, #0x6e394
0006E348 a87e5f88 ldxr     w8, [x21]
0006E34C 1f01166b cmp      w8, w22
0006E350 01feff54 b.ne     #0x6e310
0006E354 c9060011 add      w9, w22, #1
0006E358 a97e0a88 stxr     w10, w9, [x21]
0006E35C cafdff35 cbnz     w10, #0x6e314
0006E360 29008052 mov      w9, #1
0006E364 c9fd0736 tbz      w9, #0, #0x6e31c
0006E368 683240f9 ldr      x8, [x19, #0x60]
0006E36C 094101d1 sub      x9, x8, #0x50
0006E370 1f0100f1 cmp      x8, #0
0006E374 e003899a csel     x0, xzr, x9, eq
0006E378 088c44f8 ldr      x8, [x0, #0x48]!
0006E37C 140c05f9 str      x20, [x0, #0xa18]
0006E380 080d40f9 ldr      x8, [x8, #0x18]
0006E384 00013fd6 blr      x8
0006E388 e00740f9 ldr      x0, [sp, #8]
0006E38C 200100b5 cbnz     x0, #0x6e3b0
0006E390 0b000014 b        #0x6e3bc
0006E394 e0031faa mov      x0, xzr
0006E398 088c44f8 ldr      x8, [x0, #0x48]!
0006E39C 140c05f9 str      x20, [x0, #0xa18]
0006E3A0 080d40f9 ldr      x8, [x8, #0x18]
0006E3A4 00013fd6 blr      x8
0006E3A8 e00740f9 ldr      x0, [sp, #8]
0006E3AC 800000b4 cbz      x0, #0x6e3bc
0006E3B0 088c44f8 ldr      x8, [x0, #0x48]!
0006E3B4 080d40f9 ldr      x8, [x8, #0x18]
0006E3B8 00013fd6 blr      x8
0006E3BC f44f44a9 ldp      x20, x19, [sp, #0x40]
0006E3C0 f71340f9 ldr      x23, [sp, #0x20]
0006E3C4 f65743a9 ldp      x22, x21, [sp, #0x30]
0006E3C8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006E3CC ff430191 add      sp, sp, #0x50
0006E3D0 c0035fd6 ret      
~~~
### 0x6e3e0 (89 slots)
~~~asm
0006E3E0 ff4301d1 sub      sp, sp, #0x50
0006E3E4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006E3E8 f71300f9 str      x23, [sp, #0x20]
0006E3EC f65703a9 stp      x22, x21, [sp, #0x30]
0006E3F0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006E3F4 fd430091 add      x29, sp, #0x10
0006E3F8 883900b0 adrp     x8, #0x79f000
0006E3FC 893900b0 adrp     x9, #0x79f000
0006E400 08ed41f9 ldr      x8, [x8, #0x3d8]
0006E404 f30300aa mov      x19, x0
0006E408 080140f9 ldr      x8, [x8]
0006E40C 153540f9 ldr      x21, [x8, #0x68]
0006E410 082540f9 ldr      x8, [x8, #0x48]
0006E414 297942f9 ldr      x9, [x9, #0x4f0]
0006E418 a80f00f9 str      x8, [x29, #0x18]
0006E41C 280140f9 ldr      x8, [x9]
0006E420 143140f9 ldr      x20, [x8, #0x60]
0006E424 b40000b4 cbz      x20, #0x6e438
0006E428 e00314aa mov      x0, x20
0006E42C 088c44f8 ldr      x8, [x0, #0x48]!
0006E430 080940f9 ldr      x8, [x8, #0x10]
0006E434 00013fd6 blr      x8
0006E438 e8230091 add      x8, sp, #8
0006E43C a2630091 add      x2, x29, #0x18
0006E440 e00314aa mov      x0, x20
0006E444 e10315aa mov      x1, x21
0006E448 7f300094 bl       #0x7a644
0006E44C 888e44f8 ldr      x8, [x20, #0x48]!
0006E450 e00314aa mov      x0, x20
0006E454 080d40f9 ldr      x8, [x8, #0x18]
0006E458 00013fd6 blr      x8
0006E45C 48008052 mov      w8, #2
0006E460 74820391 add      x20, x19, #0xe0
0006E464 68e600b9 str      w8, [x19, #0xe4]
0006E468 f30740f9 ldr      x19, [sp, #8]
0006E46C d30400b4 cbz      x19, #0x6e504
0006E470 765640b9 ldr      w22, [x19, #0x54]
0006E474 96040034 cbz      w22, #0x6e504
0006E478 75520191 add      x21, x19, #0x54
0006E47C 06000014 b        #0x6e494
0006E480 5f3f03d5 clrex    
0006E484 e9031f2a mov      w9, wzr
0006E488 9f020037 tbnz     wzr, #0, #0x6e4d8
0006E48C f603082a mov      w22, w8
0006E490 a8030034 cbz      w8, #0x6e504
0006E494 772e40f9 ldr      x23, [x19, #0x58]
0006E498 f9320094 bl       #0x7b07c
0006E49C 1f0017eb cmp      x0, x23
0006E4A0 c0000054 b.eq     #0x6e4b8
0006E4A4 f70240f9 ldr      x23, [x23]
0006E4A8 ff0200eb cmp      x23, x0
0006E4AC e41a40fa ccmp     x23, #0, #4, ne
0006E4B0 a1ffff54 b.ne     #0x6e4a4
0006E4B4 970200b4 cbz      x23, #0x6e504
0006E4B8 a87e5f88 ldxr     w8, [x21]
0006E4BC 1f01166b cmp      w8, w22
0006E4C0 01feff54 b.ne     #0x6e480
0006E4C4 c9060011 add      w9, w22, #1
0006E4C8 a97e0a88 stxr     w10, w9, [x21]
0006E4CC cafdff35 cbnz     w10, #0x6e484
0006E4D0 29008052 mov      w9, #1
0006E4D4 c9fd0736 tbz      w9, #0, #0x6e48c
0006E4D8 683240f9 ldr      x8, [x19, #0x60]
0006E4DC 094101d1 sub      x9, x8, #0x50
0006E4E0 1f0100f1 cmp      x8, #0
0006E4E4 e003899a csel     x0, xzr, x9, eq
0006E4E8 088c44f8 ldr      x8, [x0, #0x48]!
0006E4EC 140c05f9 str      x20, [x0, #0xa18]
0006E4F0 080d40f9 ldr      x8, [x8, #0x18]
0006E4F4 00013fd6 blr      x8
0006E4F8 e00740f9 ldr      x0, [sp, #8]
0006E4FC 200100b5 cbnz     x0, #0x6e520
0006E500 0b000014 b        #0x6e52c
0006E504 e0031faa mov      x0, xzr
0006E508 088c44f8 ldr      x8, [x0, #0x48]!
0006E50C 140c05f9 str      x20, [x0, #0xa18]
0006E510 080d40f9 ldr      x8, [x8, #0x18]
0006E514 00013fd6 blr      x8
0006E518 e00740f9 ldr      x0, [sp, #8]
0006E51C 800000b4 cbz      x0, #0x6e52c
0006E520 088c44f8 ldr      x8, [x0, #0x48]!
0006E524 080d40f9 ldr      x8, [x8, #0x18]
0006E528 00013fd6 blr      x8
0006E52C f44f44a9 ldp      x20, x19, [sp, #0x40]
0006E530 f71340f9 ldr      x23, [sp, #0x20]
0006E534 f65743a9 ldp      x22, x21, [sp, #0x30]
0006E538 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006E53C ff430191 add      sp, sp, #0x50
0006E540 c0035fd6 ret      
~~~
### 0x6e550 (83 slots)
~~~asm
0006E550 ff4301d1 sub      sp, sp, #0x50
0006E554 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006E558 f71300f9 str      x23, [sp, #0x20]
0006E55C f65703a9 stp      x22, x21, [sp, #0x30]
0006E560 f44f04a9 stp      x20, x19, [sp, #0x40]
0006E564 fd430091 add      x29, sp, #0x10
0006E568 883900b0 adrp     x8, #0x79f000
0006E56C 893900b0 adrp     x9, #0x79f000
0006E570 08ed41f9 ldr      x8, [x8, #0x3d8]
0006E574 f30300aa mov      x19, x0
0006E578 080140f9 ldr      x8, [x8]
0006E57C 153540f9 ldr      x21, [x8, #0x68]
0006E580 082540f9 ldr      x8, [x8, #0x48]
0006E584 297942f9 ldr      x9, [x9, #0x4f0]
0006E588 a80f00f9 str      x8, [x29, #0x18]
0006E58C 280140f9 ldr      x8, [x9]
0006E590 143140f9 ldr      x20, [x8, #0x60]
0006E594 b40000b4 cbz      x20, #0x6e5a8
0006E598 e00314aa mov      x0, x20
0006E59C 088c44f8 ldr      x8, [x0, #0x48]!
0006E5A0 080940f9 ldr      x8, [x8, #0x10]
0006E5A4 00013fd6 blr      x8
0006E5A8 e8230091 add      x8, sp, #8
0006E5AC a2630091 add      x2, x29, #0x18
0006E5B0 e00314aa mov      x0, x20
0006E5B4 e10315aa mov      x1, x21
0006E5B8 14330094 bl       #0x7b208
0006E5BC 888e44f8 ldr      x8, [x20, #0x48]!
0006E5C0 e00314aa mov      x0, x20
0006E5C4 080d40f9 ldr      x8, [x8, #0x18]
0006E5C8 00013fd6 blr      x8
0006E5CC f40740f9 ldr      x20, [sp, #8]
0006E5D0 540400b4 cbz      x20, #0x6e658
0006E5D4 965640b9 ldr      w22, [x20, #0x54]
0006E5D8 16040034 cbz      w22, #0x6e658
0006E5DC 95520191 add      x21, x20, #0x54
0006E5E0 06000014 b        #0x6e5f8
0006E5E4 5f3f03d5 clrex    
0006E5E8 e9031f2a mov      w9, wzr
0006E5EC df020037 tbnz     wzr, #0, #0x6e644
0006E5F0 f603082a mov      w22, w8
0006E5F4 28030034 cbz      w8, #0x6e658
0006E5F8 972e40f9 ldr      x23, [x20, #0x58]
0006E5FC 6f350094 bl       #0x7bbb8
0006E600 1f0017eb cmp      x0, x23
0006E604 00010054 b.eq     #0x6e624
0006E608 1f2003d5 nop      
0006E60C 1f2003d5 nop      
0006E610 f70240f9 ldr      x23, [x23]
0006E614 ff0200eb cmp      x23, x0
0006E618 e41a40fa ccmp     x23, #0, #4, ne
0006E61C a1ffff54 b.ne     #0x6e610
0006E620 d70100b4 cbz      x23, #0x6e658
0006E624 a87e5f88 ldxr     w8, [x21]
0006E628 1f01166b cmp      w8, w22
0006E62C c1fdff54 b.ne     #0x6e5e4
0006E630 c9060011 add      w9, w22, #1
0006E634 a97e0a88 stxr     w10, w9, [x21]
0006E638 8afdff35 cbnz     w10, #0x6e5e8
0006E63C 29008052 mov      w9, #1
0006E640 89fd0736 tbz      w9, #0, #0x6e5f0
0006E644 883240f9 ldr      x8, [x20, #0x60]
0006E648 094101d1 sub      x9, x8, #0x50
0006E64C 1f0100f1 cmp      x8, #0
0006E650 e003899a csel     x0, xzr, x9, eq
0006E654 02000014 b        #0x6e65c
0006E658 e0031faa mov      x0, xzr
0006E65C 088c44f8 ldr      x8, [x0, #0x48]!
0006E660 69021191 add      x9, x19, #0x440
0006E664 09fc04f9 str      x9, [x0, #0x9f8]
0006E668 080d40f9 ldr      x8, [x8, #0x18]
0006E66C 00013fd6 blr      x8
0006E670 e00740f9 ldr      x0, [sp, #8]
0006E674 800000b4 cbz      x0, #0x6e684
0006E678 088c44f8 ldr      x8, [x0, #0x48]!
0006E67C 080d40f9 ldr      x8, [x8, #0x18]
0006E680 00013fd6 blr      x8
0006E684 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006E688 f71340f9 ldr      x23, [sp, #0x20]
0006E68C f65743a9 ldp      x22, x21, [sp, #0x30]
0006E690 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006E694 ff430191 add      sp, sp, #0x50
0006E698 c0035fd6 ret      
~~~
### 0x6e6a0 (83 slots)
~~~asm
0006E6A0 ff4301d1 sub      sp, sp, #0x50
0006E6A4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006E6A8 f71300f9 str      x23, [sp, #0x20]
0006E6AC f65703a9 stp      x22, x21, [sp, #0x30]
0006E6B0 f44f04a9 stp      x20, x19, [sp, #0x40]
0006E6B4 fd430091 add      x29, sp, #0x10
0006E6B8 883900b0 adrp     x8, #0x79f000
0006E6BC 893900b0 adrp     x9, #0x79f000
0006E6C0 08ed41f9 ldr      x8, [x8, #0x3d8]
0006E6C4 f30300aa mov      x19, x0
0006E6C8 080140f9 ldr      x8, [x8]
0006E6CC 153540f9 ldr      x21, [x8, #0x68]
0006E6D0 082540f9 ldr      x8, [x8, #0x48]
0006E6D4 297942f9 ldr      x9, [x9, #0x4f0]
0006E6D8 a80f00f9 str      x8, [x29, #0x18]
0006E6DC 280140f9 ldr      x8, [x9]
0006E6E0 143140f9 ldr      x20, [x8, #0x60]
0006E6E4 b40000b4 cbz      x20, #0x6e6f8
0006E6E8 e00314aa mov      x0, x20
0006E6EC 088c44f8 ldr      x8, [x0, #0x48]!
0006E6F0 080940f9 ldr      x8, [x8, #0x10]
0006E6F4 00013fd6 blr      x8
0006E6F8 e8230091 add      x8, sp, #8
0006E6FC a2630091 add      x2, x29, #0x18
0006E700 e00314aa mov      x0, x20
0006E704 e10315aa mov      x1, x21
0006E708 8f350094 bl       #0x7bd44
0006E70C 888e44f8 ldr      x8, [x20, #0x48]!
0006E710 e00314aa mov      x0, x20
0006E714 080d40f9 ldr      x8, [x8, #0x18]
0006E718 00013fd6 blr      x8
0006E71C f40740f9 ldr      x20, [sp, #8]
0006E720 540400b4 cbz      x20, #0x6e7a8
0006E724 965640b9 ldr      w22, [x20, #0x54]
0006E728 16040034 cbz      w22, #0x6e7a8
0006E72C 95520191 add      x21, x20, #0x54
0006E730 06000014 b        #0x6e748
0006E734 5f3f03d5 clrex    
0006E738 e9031f2a mov      w9, wzr
0006E73C df020037 tbnz     wzr, #0, #0x6e794
0006E740 f603082a mov      w22, w8
0006E744 28030034 cbz      w8, #0x6e7a8
0006E748 972e40f9 ldr      x23, [x20, #0x58]
0006E74C eb370094 bl       #0x7c6f8
0006E750 1f0017eb cmp      x0, x23
0006E754 00010054 b.eq     #0x6e774
0006E758 1f2003d5 nop      
0006E75C 1f2003d5 nop      
0006E760 f70240f9 ldr      x23, [x23]
0006E764 ff0200eb cmp      x23, x0
0006E768 e41a40fa ccmp     x23, #0, #4, ne
0006E76C a1ffff54 b.ne     #0x6e760
0006E770 d70100b4 cbz      x23, #0x6e7a8
0006E774 a87e5f88 ldxr     w8, [x21]
0006E778 1f01166b cmp      w8, w22
0006E77C c1fdff54 b.ne     #0x6e734
0006E780 c9060011 add      w9, w22, #1
0006E784 a97e0a88 stxr     w10, w9, [x21]
0006E788 8afdff35 cbnz     w10, #0x6e738
0006E78C 29008052 mov      w9, #1
0006E790 89fd0736 tbz      w9, #0, #0x6e740
0006E794 883240f9 ldr      x8, [x20, #0x60]
0006E798 094101d1 sub      x9, x8, #0x50
0006E79C 1f0100f1 cmp      x8, #0
0006E7A0 e003899a csel     x0, xzr, x9, eq
0006E7A4 02000014 b        #0x6e7ac
0006E7A8 e0031faa mov      x0, xzr
0006E7AC 088c44f8 ldr      x8, [x0, #0x48]!
0006E7B0 69221191 add      x9, x19, #0x448
0006E7B4 09fc04f9 str      x9, [x0, #0x9f8]
0006E7B8 080d40f9 ldr      x8, [x8, #0x18]
0006E7BC 00013fd6 blr      x8
0006E7C0 e00740f9 ldr      x0, [sp, #8]
0006E7C4 800000b4 cbz      x0, #0x6e7d4
0006E7C8 088c44f8 ldr      x8, [x0, #0x48]!
0006E7CC 080d40f9 ldr      x8, [x8, #0x18]
0006E7D0 00013fd6 blr      x8
0006E7D4 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006E7D8 f71340f9 ldr      x23, [sp, #0x20]
0006E7DC f65743a9 ldp      x22, x21, [sp, #0x30]
0006E7E0 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006E7E4 ff430191 add      sp, sp, #0x50
0006E7E8 c0035fd6 ret      
~~~
### 0x6e7f0 (83 slots)
~~~asm
0006E7F0 ff4301d1 sub      sp, sp, #0x50
0006E7F4 fd7b01a9 stp      x29, x30, [sp, #0x10]
0006E7F8 f71300f9 str      x23, [sp, #0x20]
0006E7FC f65703a9 stp      x22, x21, [sp, #0x30]
0006E800 f44f04a9 stp      x20, x19, [sp, #0x40]
0006E804 fd430091 add      x29, sp, #0x10
0006E808 883900b0 adrp     x8, #0x79f000
0006E80C 893900b0 adrp     x9, #0x79f000
0006E810 08ed41f9 ldr      x8, [x8, #0x3d8]
0006E814 f30300aa mov      x19, x0
0006E818 080140f9 ldr      x8, [x8]
0006E81C 153540f9 ldr      x21, [x8, #0x68]
0006E820 082540f9 ldr      x8, [x8, #0x48]
0006E824 297942f9 ldr      x9, [x9, #0x4f0]
0006E828 a80f00f9 str      x8, [x29, #0x18]
0006E82C 280140f9 ldr      x8, [x9]
0006E830 143140f9 ldr      x20, [x8, #0x60]
0006E834 b40000b4 cbz      x20, #0x6e848
0006E838 e00314aa mov      x0, x20
0006E83C 088c44f8 ldr      x8, [x0, #0x48]!
0006E840 080940f9 ldr      x8, [x8, #0x10]
0006E844 00013fd6 blr      x8
0006E848 e8230091 add      x8, sp, #8
0006E84C a2630091 add      x2, x29, #0x18
0006E850 e00314aa mov      x0, x20
0006E854 e10315aa mov      x1, x21
0006E858 0b380094 bl       #0x7c884
0006E85C 888e44f8 ldr      x8, [x20, #0x48]!
0006E860 e00314aa mov      x0, x20
0006E864 080d40f9 ldr      x8, [x8, #0x18]
0006E868 00013fd6 blr      x8
0006E86C f40740f9 ldr      x20, [sp, #8]
0006E870 540400b4 cbz      x20, #0x6e8f8
0006E874 965640b9 ldr      w22, [x20, #0x54]
0006E878 16040034 cbz      w22, #0x6e8f8
0006E87C 95520191 add      x21, x20, #0x54
0006E880 06000014 b        #0x6e898
0006E884 5f3f03d5 clrex    
0006E888 e9031f2a mov      w9, wzr
0006E88C df020037 tbnz     wzr, #0, #0x6e8e4
0006E890 f603082a mov      w22, w8
0006E894 28030034 cbz      w8, #0x6e8f8
0006E898 972e40f9 ldr      x23, [x20, #0x58]
0006E89C 673a0094 bl       #0x7d238
0006E8A0 1f0017eb cmp      x0, x23
0006E8A4 00010054 b.eq     #0x6e8c4
0006E8A8 1f2003d5 nop      
0006E8AC 1f2003d5 nop      
0006E8B0 f70240f9 ldr      x23, [x23]
0006E8B4 ff0200eb cmp      x23, x0
0006E8B8 e41a40fa ccmp     x23, #0, #4, ne
0006E8BC a1ffff54 b.ne     #0x6e8b0
0006E8C0 d70100b4 cbz      x23, #0x6e8f8
0006E8C4 a87e5f88 ldxr     w8, [x21]
0006E8C8 1f01166b cmp      w8, w22
0006E8CC c1fdff54 b.ne     #0x6e884
0006E8D0 c9060011 add      w9, w22, #1
0006E8D4 a97e0a88 stxr     w10, w9, [x21]
0006E8D8 8afdff35 cbnz     w10, #0x6e888
0006E8DC 29008052 mov      w9, #1
0006E8E0 89fd0736 tbz      w9, #0, #0x6e890
0006E8E4 883240f9 ldr      x8, [x20, #0x60]
0006E8E8 094101d1 sub      x9, x8, #0x50
0006E8EC 1f0100f1 cmp      x8, #0
0006E8F0 e003899a csel     x0, xzr, x9, eq
0006E8F4 02000014 b        #0x6e8fc
0006E8F8 e0031faa mov      x0, xzr
0006E8FC 088c44f8 ldr      x8, [x0, #0x48]!
0006E900 69421191 add      x9, x19, #0x450
0006E904 09fc04f9 str      x9, [x0, #0x9f8]
0006E908 080d40f9 ldr      x8, [x8, #0x18]
0006E90C 00013fd6 blr      x8
0006E910 e00740f9 ldr      x0, [sp, #8]
0006E914 800000b4 cbz      x0, #0x6e924
0006E918 088c44f8 ldr      x8, [x0, #0x48]!
0006E91C 080d40f9 ldr      x8, [x8, #0x18]
0006E920 00013fd6 blr      x8
0006E924 f44f44a9 ldp      x20, x19, [sp, #0x40]
0006E928 f71340f9 ldr      x23, [sp, #0x20]
0006E92C f65743a9 ldp      x22, x21, [sp, #0x30]
0006E930 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0006E934 ff430191 add      sp, sp, #0x50
0006E938 c0035fd6 ret      
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
### 0x119eb0 (1 slots)
~~~asm
00119EB0 c0035fd6 ret      
~~~
### 0x119eb4 (27 slots)
~~~asm
00119EB4 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00119EB8 f30b00f9 str      x19, [sp, #0x10]
00119EBC fd030091 mov      x29, sp
00119EC0 48340090 adrp     x8, #0x7a1000
00119EC4 f30300aa mov      x19, x0
00119EC8 08d143f9 ldr      x8, [x8, #0x7a0]
00119ECC 09410091 add      x9, x8, #0x10
00119ED0 0ae10191 add      x10, x8, #0x78
00119ED4 08e10291 add      x8, x8, #0xb8
00119ED8 090000f9 str      x9, [x0]
00119EDC 0aa004a9 stp      x10, x8, [x0, #0x48]
00119EE0 004840f9 ldr      x0, [x0, #0x90]
00119EE4 a00000b4 cbz      x0, #0x119ef8
00119EE8 088c44f8 ldr      x8, [x0, #0x48]!
00119EEC 080d40f9 ldr      x8, [x8, #0x18]
00119EF0 00013fd6 blr      x8
00119EF4 7f4a00f9 str      xzr, [x19, #0x90]
00119EF8 604240f9 ldr      x0, [x19, #0x80]
00119EFC a00000b4 cbz      x0, #0x119f10
00119F00 088c44f8 ldr      x8, [x0, #0x48]!
00119F04 080d40f9 ldr      x8, [x8, #0x18]
00119F08 00013fd6 blr      x8
00119F0C 7f4200f9 str      xzr, [x19, #0x80]
00119F10 e00313aa mov      x0, x19
00119F14 f30b40f9 ldr      x19, [sp, #0x10]
00119F18 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00119F1C f62dfc17 b        #0x256f4
~~~
### 0x119f20 (27 slots)
~~~asm
00119F20 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00119F24 f30b00f9 str      x19, [sp, #0x10]
00119F28 fd030091 mov      x29, sp
00119F2C 48340090 adrp     x8, #0x7a1000
00119F30 f30300aa mov      x19, x0
00119F34 08d143f9 ldr      x8, [x8, #0x7a0]
00119F38 09410091 add      x9, x8, #0x10
00119F3C 0ae10191 add      x10, x8, #0x78
00119F40 08e10291 add      x8, x8, #0xb8
00119F44 090000f9 str      x9, [x0]
00119F48 0aa004a9 stp      x10, x8, [x0, #0x48]
00119F4C 004840f9 ldr      x0, [x0, #0x90]
00119F50 a00000b4 cbz      x0, #0x119f64
00119F54 088c44f8 ldr      x8, [x0, #0x48]!
00119F58 080d40f9 ldr      x8, [x8, #0x18]
00119F5C 00013fd6 blr      x8
00119F60 7f4a00f9 str      xzr, [x19, #0x90]
00119F64 604240f9 ldr      x0, [x19, #0x80]
00119F68 a00000b4 cbz      x0, #0x119f7c
00119F6C 088c44f8 ldr      x8, [x0, #0x48]!
00119F70 080d40f9 ldr      x8, [x8, #0x18]
00119F74 00013fd6 blr      x8
00119F78 7f4200f9 str      xzr, [x19, #0x80]
00119F7C e00313aa mov      x0, x19
00119F80 f30b40f9 ldr      x19, [sp, #0x10]
00119F84 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00119F88 db2dfc17 b        #0x256f4
~~~
### 0x119f8c (28 slots)
~~~asm
00119F8C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00119F90 f44f01a9 stp      x20, x19, [sp, #0x10]
00119F94 fd030091 mov      x29, sp
00119F98 48340090 adrp     x8, #0x7a1000
00119F9C f30300aa mov      x19, x0
00119FA0 08d143f9 ldr      x8, [x8, #0x7a0]
00119FA4 f40300aa mov      x20, x0
00119FA8 09410091 add      x9, x8, #0x10
00119FAC 0ae10191 add      x10, x8, #0x78
00119FB0 08e10291 add      x8, x8, #0xb8
00119FB4 0a2000a9 stp      x10, x8, [x0]
00119FB8 002440f9 ldr      x0, [x0, #0x48]
00119FBC 898e1bf8 str      x9, [x20, #-0x48]!
00119FC0 a00000b4 cbz      x0, #0x119fd4
00119FC4 088c44f8 ldr      x8, [x0, #0x48]!
00119FC8 080d40f9 ldr      x8, [x8, #0x18]
00119FCC 00013fd6 blr      x8
00119FD0 7f2600f9 str      xzr, [x19, #0x48]
00119FD4 601e40f9 ldr      x0, [x19, #0x38]
00119FD8 a00000b4 cbz      x0, #0x119fec
00119FDC 088c44f8 ldr      x8, [x0, #0x48]!
00119FE0 080d40f9 ldr      x8, [x8, #0x18]
00119FE4 00013fd6 blr      x8
00119FE8 7f1e00f9 str      xzr, [x19, #0x38]
00119FEC e00314aa mov      x0, x20
00119FF0 f44f41a9 ldp      x20, x19, [sp, #0x10]
00119FF4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00119FF8 bf2dfc17 b        #0x256f4
~~~
### 0x119ffc (28 slots)
~~~asm
00119FFC fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0011A000 f44f01a9 stp      x20, x19, [sp, #0x10]
0011A004 fd030091 mov      x29, sp
0011A008 283400f0 adrp     x8, #0x7a1000
0011A00C f30300aa mov      x19, x0
0011A010 08d143f9 ldr      x8, [x8, #0x7a0]
0011A014 f40300aa mov      x20, x0
0011A018 09410091 add      x9, x8, #0x10
0011A01C 0ae10191 add      x10, x8, #0x78
0011A020 08e10291 add      x8, x8, #0xb8
0011A024 0a2000a9 stp      x10, x8, [x0]
0011A028 002440f9 ldr      x0, [x0, #0x48]
0011A02C 898e1bf8 str      x9, [x20, #-0x48]!
0011A030 a00000b4 cbz      x0, #0x11a044
0011A034 088c44f8 ldr      x8, [x0, #0x48]!
0011A038 080d40f9 ldr      x8, [x8, #0x18]
0011A03C 00013fd6 blr      x8
0011A040 7f2600f9 str      xzr, [x19, #0x48]
0011A044 601e40f9 ldr      x0, [x19, #0x38]
0011A048 a00000b4 cbz      x0, #0x11a05c
0011A04C 088c44f8 ldr      x8, [x0, #0x48]!
0011A050 080d40f9 ldr      x8, [x8, #0x18]
0011A054 00013fd6 blr      x8
0011A058 7f1e00f9 str      xzr, [x19, #0x38]
0011A05C e00314aa mov      x0, x20
0011A060 f44f41a9 ldp      x20, x19, [sp, #0x10]
0011A064 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0011A068 a32dfc17 b        #0x256f4
~~~
### 0x11a06c (28 slots)
~~~asm
0011A06C fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0011A070 f44f01a9 stp      x20, x19, [sp, #0x10]
0011A074 fd030091 mov      x29, sp
0011A078 283400f0 adrp     x8, #0x7a1000
0011A07C f40300aa mov      x20, x0
0011A080 08d143f9 ldr      x8, [x8, #0x7a0]
0011A084 f30300aa mov      x19, x0
0011A088 09410091 add      x9, x8, #0x10
0011A08C 890e1bf8 str      x9, [x20, #-0x50]!
0011A090 09e10191 add      x9, x8, #0x78
0011A094 08e10291 add      x8, x8, #0xb8
0011A098 09a03fa9 stp      x9, x8, [x0, #-8]
0011A09C 002040f9 ldr      x0, [x0, #0x40]
0011A0A0 a00000b4 cbz      x0, #0x11a0b4
0011A0A4 088c44f8 ldr      x8, [x0, #0x48]!
0011A0A8 080d40f9 ldr      x8, [x8, #0x18]
0011A0AC 00013fd6 blr      x8
0011A0B0 7f2200f9 str      xzr, [x19, #0x40]
0011A0B4 601a40f9 ldr      x0, [x19, #0x30]
0011A0B8 a00000b4 cbz      x0, #0x11a0cc
0011A0BC 088c44f8 ldr      x8, [x0, #0x48]!
0011A0C0 080d40f9 ldr      x8, [x8, #0x18]
0011A0C4 00013fd6 blr      x8
0011A0C8 7f1a00f9 str      xzr, [x19, #0x30]
0011A0CC e00314aa mov      x0, x20
0011A0D0 f44f41a9 ldp      x20, x19, [sp, #0x10]
0011A0D4 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0011A0D8 872dfc17 b        #0x256f4
~~~
### 0x11a0dc (28 slots)
~~~asm
0011A0DC fd7bbea9 stp      x29, x30, [sp, #-0x20]!
0011A0E0 f44f01a9 stp      x20, x19, [sp, #0x10]
0011A0E4 fd030091 mov      x29, sp
0011A0E8 283400f0 adrp     x8, #0x7a1000
0011A0EC f40300aa mov      x20, x0
0011A0F0 08d143f9 ldr      x8, [x8, #0x7a0]
0011A0F4 f30300aa mov      x19, x0
0011A0F8 09410091 add      x9, x8, #0x10
0011A0FC 890e1bf8 str      x9, [x20, #-0x50]!
0011A100 09e10191 add      x9, x8, #0x78
0011A104 08e10291 add      x8, x8, #0xb8
0011A108 09a03fa9 stp      x9, x8, [x0, #-8]
0011A10C 002040f9 ldr      x0, [x0, #0x40]
0011A110 a00000b4 cbz      x0, #0x11a124
0011A114 088c44f8 ldr      x8, [x0, #0x48]!
0011A118 080d40f9 ldr      x8, [x8, #0x18]
0011A11C 00013fd6 blr      x8
0011A120 7f2200f9 str      xzr, [x19, #0x40]
0011A124 601a40f9 ldr      x0, [x19, #0x30]
0011A128 a00000b4 cbz      x0, #0x11a13c
0011A12C 088c44f8 ldr      x8, [x0, #0x48]!
0011A130 080d40f9 ldr      x8, [x8, #0x18]
0011A134 00013fd6 blr      x8
0011A138 7f1a00f9 str      xzr, [x19, #0x30]
0011A13C e00314aa mov      x0, x20
0011A140 f44f41a9 ldp      x20, x19, [sp, #0x10]
0011A144 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0011A148 6b2dfc17 b        #0x256f4
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
### 0x220500 (10 slots)
~~~asm
00220500 493e0090 adrp     x9, #0x9e8000
00220504 29c10191 add      x9, x9, #0x70
00220508 290140f9 ldr      x9, [x9]
0022050C 203540f9 ldr      x0, [x9, #0x68]
00220510 000100f9 str      x0, [x8]
00220514 800000b4 cbz      x0, #0x220524
00220518 088c44f8 ldr      x8, [x0, #0x48]!
0022051C 010940f9 ldr      x1, [x8, #0x10]
00220520 20001fd6 br       x1
00220524 c0035fd6 ret      
~~~
### 0x2232a0 (149 slots)
~~~asm
002232A0 ffc301d1 sub      sp, sp, #0x70
002232A4 fd7b01a9 stp      x29, x30, [sp, #0x10]
002232A8 fc6f02a9 stp      x28, x27, [sp, #0x20]
002232AC fa6703a9 stp      x26, x25, [sp, #0x30]
002232B0 f85f04a9 stp      x24, x23, [sp, #0x40]
002232B4 f65705a9 stp      x22, x21, [sp, #0x50]
002232B8 f44f06a9 stp      x20, x19, [sp, #0x60]
002232BC fd430091 add      x29, sp, #0x10
002232C0 f42b00f0 adrp     x20, #0x7a2000
002232C4 f60300aa mov      x22, x0
002232C8 940245f9 ldr      x20, [x20, #0xa00]
002232CC 880240f9 ldr      x8, [x20]
002232D0 132940f9 ldr      x19, [x8, #0x50]
002232D4 d30000b4 cbz      x19, #0x2232ec
002232D8 e00313aa mov      x0, x19
002232DC 088c44f8 ldr      x8, [x0, #0x48]!
002232E0 080940f9 ldr      x8, [x8, #0x10]
002232E4 00013fd6 blr      x8
002232E8 880240f9 ldr      x8, [x20]
002232EC 143540f9 ldr      x20, [x8, #0x68]
002232F0 b40000b4 cbz      x20, #0x223304
002232F4 e00314aa mov      x0, x20
002232F8 088c44f8 ldr      x8, [x0, #0x48]!
002232FC 080940f9 ldr      x8, [x8, #0x10]
00223300 00013fd6 blr      x8
00223304 e82b0090 adrp     x8, #0x79f000
00223308 f9031f2a mov      w25, wzr
0022330C 08ed41f9 ldr      x8, [x8, #0x3d8]
00223310 f7031f2a mov      w23, wzr
00223314 080140f9 ldr      x8, [x8]
00223318 155541f9 ldr      x21, [x8, #0x2a8]
0022331C 1f2003d5 nop      
00223320 e00313aa mov      x0, x19
00223324 e103172a mov      w1, w23
00223328 e20315aa mov      x2, x21
0022332C 23008052 mov      w3, #1
00223330 5f7cff97 bl       #0x2024ac
00223334 1f000071 cmp      w0, #0
00223338 f7060011 add      w23, w23, #1
0022333C 3917991a cinc     w25, w25, eq
00223340 ffb20471 cmp      w23, #0x12c
00223344 e1feff54 b.ne     #0x223320
00223348 fa031f2a mov      w26, wzr
0022334C f7031f2a mov      w23, wzr
00223350 e00314aa mov      x0, x20
00223354 e103172a mov      w1, w23
00223358 e20315aa mov      x2, x21
0022335C 23008052 mov      w3, #1
00223360 537cff97 bl       #0x2024ac
00223364 1f000071 cmp      w0, #0
00223368 f7060011 add      w23, w23, #1
0022336C 5a079a1a cinc     w26, w26, ne
00223370 ffb20471 cmp      w23, #0x12c
00223374 e1feff54 b.ne     #0x223350
00223378 3f031a6b cmp      w25, w26
0022337C 03090054 b.lo     #0x22349c
00223380 f6031f2a mov      w22, wzr
00223384 fb031f2a mov      w27, wzr
00223388 7c2e0090 adrp     x28, #0x7ef000
0022338C 05000014 b        #0x2233a0
00223390 fb03172a mov      w27, w23
00223394 d6060011 add      w22, w22, #1
00223398 dfb20471 cmp      w22, #0x12c
0022339C 40080054 b.eq     #0x2234a4
002233A0 e00313aa mov      x0, x19
002233A4 e103162a mov      w1, w22
002233A8 e20315aa mov      x2, x21
002233AC 23008052 mov      w3, #1
002233B0 3f7cff97 bl       #0x2024ac
002233B4 00ffff35 cbnz     w0, #0x223394
002233B8 7faf0471 cmp      w27, #0x12b
002233BC c8feff54 b.hi     #0x223394
002233C0 e00314aa mov      x0, x20
002233C4 e1031b2a mov      w1, w27
002233C8 e20315aa mov      x2, x21
002233CC 23008052 mov      w3, #1
002233D0 377cff97 bl       #0x2024ac
002233D4 77070011 add      w23, w27, #1
002233D8 c0000035 cbnz     w0, #0x2233f0
002233DC ffb20471 cmp      w23, #0x12c
002233E0 fb03172a mov      w27, w23
002233E4 e1feff54 b.ne     #0x2233c0
002233E8 ebffff17 b        #0x223394
002233EC 1f2003d5 nop      
002233F0 f8031f2a mov      w24, wzr
002233F4 06000014 b        #0x22340c
002233F8 1f2003d5 nop      
002233FC 1f2003d5 nop      
00223400 18070011 add      w24, w24, #1
00223404 1f7b0071 cmp      w24, #0x1e
00223408 40fcff54 b.eq     #0x223390
0022340C e8230091 add      x8, sp, #8
00223410 e00314aa mov      x0, x20
00223414 e1031b2a mov      w1, w27
00223418 e203182a mov      w2, w24
0022341C e30315aa mov      x3, x21
00223420 0a74ff97 bl       #0x200448
00223424 e00740f9 ldr      x0, [sp, #8]
00223428 588cff97 bl       #0x206588
0022342C c0020037 tbnz     w0, #0, #0x223484
00223430 e00740f9 ldr      x0, [sp, #8]
00223434 e00300f9 str      x0, [sp]
00223438 800000b4 cbz      x0, #0x223448
0022343C 088c44f8 ldr      x8, [x0, #0x48]!
00223440 080940f9 ldr      x8, [x8, #0x10]
00223444 00013fd6 blr      x8
00223448 e1030091 mov      x1, sp
0022344C e00313aa mov      x0, x19
00223450 e20315aa mov      x2, x21
00223454 e303162a mov      w3, w22
00223458 e403182a mov      w4, w24
0022345C 607aff97 bl       #0x201ddc
00223460 e00340f9 ldr      x0, [sp]
00223464 a00000b4 cbz      x0, #0x223478
00223468 088c44f8 ldr      x8, [x0, #0x48]!
0022346C 080d40f9 ldr      x8, [x8, #0x18]
00223470 00013fd6 blr      x8
00223474 ff0300f9 str      xzr, [sp]
00223478 885f40b9 ldr      w8, [x28, #0x5c]
0022347C 08050011 add      w8, w8, #1
00223480 885f00b9 str      w8, [x28, #0x5c]
00223484 e00740f9 ldr      x0, [sp, #8]
00223488 c0fbffb4 cbz      x0, #0x223400
0022348C 088c44f8 ldr      x8, [x0, #0x48]!
00223490 080d40f9 ldr      x8, [x8, #0x18]
00223494 00013fd6 blr      x8
00223498 daffff17 b        #0x223400
0022349C 560000b4 cbz      x22, #0x2234a4
002234A0 d90200b9 str      w25, [x22]
002234A4 b40000b4 cbz      x20, #0x2234b8
002234A8 888e44f8 ldr      x8, [x20, #0x48]!
002234AC e00314aa mov      x0, x20
002234B0 080d40f9 ldr      x8, [x8, #0x18]
002234B4 00013fd6 blr      x8
002234B8 b30000b4 cbz      x19, #0x2234cc
002234BC 688e44f8 ldr      x8, [x19, #0x48]!
002234C0 e00313aa mov      x0, x19
002234C4 080d40f9 ldr      x8, [x8, #0x18]
002234C8 00013fd6 blr      x8
002234CC 3f031a6b cmp      w25, w26
002234D0 f44f46a9 ldp      x20, x19, [sp, #0x60]
002234D4 f65745a9 ldp      x22, x21, [sp, #0x50]
002234D8 e0379f1a cset     w0, hs
002234DC f85f44a9 ldp      x24, x23, [sp, #0x40]
002234E0 fa6743a9 ldp      x26, x25, [sp, #0x30]
002234E4 fc6f42a9 ldp      x28, x27, [sp, #0x20]
002234E8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
002234EC ffc30191 add      sp, sp, #0x70
002234F0 c0035fd6 ret      
~~~
