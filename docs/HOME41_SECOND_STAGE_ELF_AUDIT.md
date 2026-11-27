# HOME41 second-stage save and baseline lifecycle
SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
## Exact stage-two FDE coverage
- LGPE: 0x253e60..0x2542d0, 284 instruction slots
  00253E88 8631ff97 bl       #0x2204a0
  00253E90 c4e5fe97 bl       #0x20d5a0
  00253EAC 00013fd6 blr      x8
  00253EC0 00013fd6 blr      x8
  00253EDC b1e5fe97 bl       #0x20d5a0
  00253EF8 00013fd6 blr      x8
  00253F0C 00013fd6 blr      x8
  00253F20 00013fd6 blr      x8
  00253F2C 9de5fe97 bl       #0x20d5a0
  00253F48 00013fd6 blr      x8
  00253F58 b6f4fe97 bl       #0x211230
  00253F68 00013fd6 blr      x8
  00253F7C 00013fd6 blr      x8
  00253F8C f9e4f897 bl       #0x8d370
  00253FAC 06000014 b        #0x253fc4
  00253FC8 06000014 b        #0x253fe0
  00253FF8 00013fd6 blr      x8
  0025400C 5fb1fe97 bl       #0x200588
  00254020 00013fd6 blr      x8
  0025402C 57c9fe97 bl       #0x206588
  00254038 e3cafe97 bl       #0x206bc4
  00254044 7cf5fe97 bl       #0x211634
  00254054 10bffe97 bl       #0x203c94
  00254064 9ef5fe97 bl       #0x2116dc
  00254070 9436ff97 bl       #0x221ac0
  00254090 04000014 b        #0x2540a0
  002540A0 8836ff97 bl       #0x221ac0
  00254120 6836ff97 bl       #0x221ac0
  0025413C 19e5fe97 bl       #0x20d5a0
  00254158 00013fd6 blr      x8
  00254164 33f4fe97 bl       #0x211230
  00254174 00013fd6 blr      x8
  00254188 00013fd6 blr      x8
  0025418C c2ffff17 b        #0x254094
  002541F8 c8ffff17 b        #0x254118
  00254204 c3f5fe97 bl       #0x211910
  0025420C e5e4fe97 bl       #0x20d5a0
  00254228 00013fd6 blr      x8
  00254238 ea880e94 bl       #0x5f65e0
  00254248 00013fd6 blr      x8
  0025425C 00013fd6 blr      x8
  00254260 a4e2fe97 bl       #0x20ccf0
  00254274 00013fd6 blr      x8
  00254288 00013fd6 blr      x8
  00254298 00013fd6 blr      x8
  002542AC 00013fd6 blr      x8
- SWSH: 0x2555d0..0x255964, 229 instruction slots
  0025560C a52bff97 bl       #0x2204a0
  00255624 00013fd6 blr      x8
  00255644 00013fd6 blr      x8
  00255664 06000014 b        #0x25567c
  00255680 04000014 b        #0x255690
  002556A4 69abfe97 bl       #0x200448
  002556AC b7c3fe97 bl       #0x206588
  002556C8 00013fd6 blr      x8
  002556E0 b8170094 bl       #0x25b5c0
  002556F4 00013fd6 blr      x8
  00255708 63b9fe97 bl       #0x203c94
  00255728 f1170094 bl       #0x25b6ec
  0025573C 00013fd6 blr      x8
  00255740 d1ffff17 b        #0x255684
  00255758 00013fd6 blr      x8
  00255764 c31f0094 bl       #0x25d670
  00255774 00013fd6 blr      x8
  0025577C 492bff97 bl       #0x2204a0
  0025578C 05000014 b        #0x2557a0
  002557B4 00013fd6 blr      x8
  002557C0 011f0094 bl       #0x25d3c4
  002557D4 00013fd6 blr      x8
  002557E4 0f000014 b        #0x255820
  00255800 4a1f0094 bl       #0x25d528
  00255810 00013fd6 blr      x8
  00255820 a830ff97 bl       #0x221ac0
  00255840 26b9fe97 bl       #0x203cd8
  00255858 00013fd6 blr      x8
  0025585C e5ffff17 b        #0x2557f0
  00255880 16b9fe97 bl       #0x203cd8
  00255898 00013fd6 blr      x8
  002558B4 00013fd6 blr      x8
  002558C8 00013fd6 blr      x8
  002558D8 00013fd6 blr      x8
  002558EC 00013fd6 blr      x8
  00255904 00013fd6 blr      x8
  00255914 33830e94 bl       #0x5f65e0
  00255924 00013fd6 blr      x8
  00255930 a36f0094 bl       #0x2717bc
  00255940 0d700094 bl       #0x271974
- BDSP: 0x1a4290..0x1a4630, 232 instruction slots
  001A42C4 77f00194 bl       #0x2204a0
  001A42D0 3de9ff97 bl       #0x19e7c4
  001A42DC 42e9ff97 bl       #0x19e7e4
  001A42F4 f7faff97 bl       #0x1a2ed0
  001A4314 06000014 b        #0x1a432c
  001A4330 04000014 b        #0x1a4340
  001A4354 3d700194 bl       #0x200448
  001A435C 8b880194 bl       #0x206588
  001A437C 00013fd6 blr      x8
  001A4394 4afcff97 bl       #0x1a34bc
  001A43A8 00013fd6 blr      x8
  001A43B4 f58f0194 bl       #0x208388
  001A43CC fffdff97 bl       #0x1a3bc8
  001A43DC 2e7e0194 bl       #0x203c94
  001A43FC 96fcff97 bl       #0x1a3654
  001A4410 00013fd6 blr      x8
  001A4414 c8ffff17 b        #0x1a4334
  001A4428 75faff97 bl       #0x1a2dfc
  001A4430 1cf00194 bl       #0x2204a0
  001A443C 05000014 b        #0x1a4450
  001A4458 e3e8ff97 bl       #0x19e7e4
  001A4464 fff9ff97 bl       #0x1a2c60
  001A447C 00013fd6 blr      x8
  001A448C 04000014 b        #0x1a449c
  001A449C 89f50194 bl       #0x221ac0
  001A44BC 077e0194 bl       #0x203cd8
  001A44C8 c7e8ff97 bl       #0x19e7e4
  001A44DC f6f9ff97 bl       #0x1a2cb4
  001A44F0 00013fd6 blr      x8
  001A44F4 e7ffff17 b        #0x1a4490
  001A4500 e9e8ff97 bl       #0x19e8a4
  001A4508 0fffff97 bl       #0x1a4144
  001A4518 06000014 b        #0x1a4530
  001A4530 64f50194 bl       #0x221ac0
  001A4554 e17d0194 bl       #0x203cd8
  001A4570 effeff97 bl       #0x1a412c
  001A4574 ebffff17 b        #0x1a4520
  001A4588 00013fd6 blr      x8
  001A459C 00013fd6 blr      x8
  001A45B0 00013fd6 blr      x8
  001A45C4 00013fd6 blr      x8
  001A45D8 00013fd6 blr      x8
  001A45E4 b8e8ff97 bl       #0x19e8c4
  001A45F8 fa471194 bl       #0x5f65e0
  001A4608 00013fd6 blr      x8
  001A4610 08e8ff97 bl       #0x19e630
- PLA: 0x1c6560..0x1c6788, 138 instruction slots
  001C6594 c3670194 bl       #0x2204a0
  001C65A0 8baeff97 bl       #0x1b1fcc
  001C65D0 04000014 b        #0x1c65e0
  001C65E4 06000014 b        #0x1c65fc
  001C660C 85d4ff97 bl       #0x1bb820
  001C6624 89e70094 bl       #0x200448
  001C662C d7ff0094 bl       #0x206588
  001C663C 62010194 bl       #0x206bc4
  001C6650 00013fd6 blr      x8
  001C6668 9dd3ff97 bl       #0x1bb4dc
  001C667C 00013fd6 blr      x8
  001C6690 81f50094 bl       #0x203c94
  001C66B0 8dd4ff97 bl       #0x1bb8e4
  001C66C4 00013fd6 blr      x8
  001C66C8 caffff17 b        #0x1c65f0
  001C66D4 45aeff97 bl       #0x1b1fe8
  001C66E0 e3ddff97 bl       #0x1bde6c
  001C66F4 00013fd6 blr      x8
  001C6708 00013fd6 blr      x8
  001C671C 00013fd6 blr      x8
  001C6728 37aeff97 bl       #0x1b2004
  001C673C a9bf1094 bl       #0x5f65e0
  001C674C 00013fd6 blr      x8
  001C6758 95acff97 bl       #0x1b19ac
  001C6768 07adff97 bl       #0x1b1b84
- SV: 0x294440..0x294ba4, 473 instruction slots
  0029449C 00013fd6 blr      x8
  002944C0 00013fd6 blr      x8
  002944C8 3cc5ff97 bl       #0x2859b8
  002944F4 49000014 b        #0x294618
  00294524 06000014 b        #0x29453c
  00294540 04000014 b        #0x294550
  00294560 0cc1ff97 bl       #0x284990
  00294578 b4affd97 bl       #0x200448
  00294580 02c8fd97 bl       #0x206588
  0029458C 8ec9fd97 bl       #0x206bc4
  002945A0 00013fd6 blr      x8
  002945B4 28c1ff97 bl       #0x284a54
  002945C8 00013fd6 blr      x8
  002945DC aebdfd97 bl       #0x203c94
  002945FC 81c2ff97 bl       #0x285000
  00294610 00013fd6 blr      x8
  00294614 ccffff17 b        #0x294544
  00294634 00013fd6 blr      x8
  0029463C 344efe97 bl       #0x227f0c
  00294670 34870d94 bl       #0x5f6340
  00294680 35c7ff97 bl       #0x286354
  00294698 10000014 b        #0x2946d8
  002946B0 8abdfd97 bl       #0x203cd8
  002946C8 e8ccff97 bl       #0x287a68
  002946F0 a8c0fd97 bl       #0x204990
  00294704 aac0fd97 bl       #0x2049ac
  00294708 ebffff17 b        #0x2946b4
  00294714 10c7ff97 bl       #0x286354
  0029472C 0e000014 b        #0x294764
  0029473C 9cc0fd97 bl       #0x2049ac
  00294754 c5ccff97 bl       #0x287a68
  0029477C 85c0fd97 bl       #0x204990
  00294794 51bdfd97 bl       #0x203cd8
  00294798 eaffff17 b        #0x294740
  002947A4 ecc6ff97 bl       #0x286354
  002947BC 0e000014 b        #0x2947f4
  002947CC 78c0fd97 bl       #0x2049ac
  002947E4 a1ccff97 bl       #0x287a68
  0029480C 61c0fd97 bl       #0x204990
  00294824 2dbdfd97 bl       #0x203cd8
  00294828 eaffff17 b        #0x2947d0
  00294834 c8c6ff97 bl       #0x286354
  0029484C 0e000014 b        #0x294884
  0029485C 54c0fd97 bl       #0x2049ac
  00294874 7dccff97 bl       #0x287a68
  0029489C 3dc0fd97 bl       #0x204990
  002948B4 09bdfd97 bl       #0x203cd8
  002948B8 eaffff17 b        #0x294860
  002948C4 a4c6ff97 bl       #0x286354
  002948DC 0e000014 b        #0x294914
  002948EC 30c0fd97 bl       #0x2049ac
  00294904 59ccff97 bl       #0x287a68
  0029492C 19c0fd97 bl       #0x204990
  00294944 e5bcfd97 bl       #0x203cd8
  00294948 eaffff17 b        #0x2948f0
  00294954 80c6ff97 bl       #0x286354
  00294970 0e000014 b        #0x2949a8
  00294980 0bc0fd97 bl       #0x2049ac
  00294998 34ccff97 bl       #0x287a68
  002949C0 f4bffd97 bl       #0x204990
  002949D8 c0bcfd97 bl       #0x203cd8
  002949DC eaffff17 b        #0x294984
  00294A04 b5bcfd97 bl       #0x203cd8
  00294A30 00013fd6 blr      x8
  00294A38 e5dcff97 bl       #0x28bdcc
  00294A64 08000014 b        #0x294a84
  00294A74 6bdcff97 bl       #0x28bc20
  00294A80 6adcff97 bl       #0x28bc28
  00294A8C 49ccff97 bl       #0x287bb0
  00294AA0 00013fd6 blr      x8
  00294AC0 00013fd6 blr      x8
  00294AC8 fa27fe97 bl       #0x21eab0
  00294B04 b7860d94 bl       #0x5f65e0
  00294B28 d5510994 bl       #0x4e927c
  00294B34 2e1e0094 bl       #0x29c3ec
  00294B4C 00013fd6 blr      x8
  00294B5C c8510994 bl       #0x4e927c
  00294B6C 831e0094 bl       #0x29c578
  00294B80 00013fd6 blr      x8
- ZA: 0x1cae6c..0x1caf20, 45 instruction slots
  001CAE84 93feff97 bl       #0x1ca8d0
  001CAE88 37970094 bl       #0x1f0b64
  001CAE90 f4970094 bl       #0x1f0e60
  001CAEA0 d0ad1094 bl       #0x5f65e0
  001CAEB0 f3780c94 bl       #0x4e927c
  001CAEBC e4bc0094 bl       #0x1fa24c
  001CAED4 00013fd6 blr      x8
  001CAEE8 e5780c94 bl       #0x4e927c
  001CAEF8 38bd0094 bl       #0x1fa3d8
  001CAF0C 00013fd6 blr      x8

## Direct callers of lifecycle anchors
### caller 0x6c208
0006C368 5ad00694 bl       #0x2204d0
0006C38C 11d90694 bl       #0x2227d0
0006C3B0 54d00694 bl       #0x220500
### caller 0x897a0
00089CD4 ff590694 bl       #0x2204d0
00089CE0 f0590694 bl       #0x2204a0
### caller 0xa1310
000A13D4 3ffc0594 bl       #0x2204d0
### caller 0xf15e0
000F18B8 06bb0494 bl       #0x2204d0
### caller 0xf5e50
000F5ED0 80a90494 bl       #0x2204d0
### caller 0x1423e0
00142458 8a8a0394 bl       #0x224e80
### caller 0x1484bc
00148D70 b40e0394 bl       #0x20c840
### caller 0x16fb20
0016FBA0 c0cd0294 bl       #0x2232a0
### caller 0x16fd20
0016FDF8 c2c10294 bl       #0x220500
### caller 0x176040
001760B8 e2590214 b        #0x20c840
### caller 0x1a4290
001A42C4 77f00194 bl       #0x2204a0
001A4430 1cf00194 bl       #0x2204a0
### caller 0x1a4630
001A4684 87ef0194 bl       #0x2204a0
001A47CC 35ef0194 bl       #0x2204a0
### caller 0x1a49f0
001A4A88 86ee0194 bl       #0x2204a0
001A4D58 deed0194 bl       #0x2204d0
001A4FD8 81730194 bl       #0x201ddc
### caller 0x1c6560
001C6594 c3670194 bl       #0x2204a0
### caller 0x1c6790
001C67B8 3a670194 bl       #0x2204a0
### caller 0x1c69c0
001C6A48 96660194 bl       #0x2204a0
001C6A50 a0660194 bl       #0x2204d0
001C6D10 33ec0094 bl       #0x201ddc
### caller 0x1ca1a0
001CA250 94580194 bl       #0x2204a0
001CA258 9e580194 bl       #0x2204d0
001CA4D8 41de0094 bl       #0x201ddc
### caller 0x1ca8d0
001CA8F8 ea560194 bl       #0x2204a0
### caller 0x207180
00207250 94640094 bl       #0x2204a0
00207954 df620094 bl       #0x2204d0
00207994 c3620094 bl       #0x2204a0
### caller 0x207afc
00207B14 63620094 bl       #0x2204a0
### caller 0x207ca0
00207CBC c56a0094 bl       #0x2227d0
### caller 0x208390
002083A4 3f600094 bl       #0x2204a0
### caller 0x2083f0
00208438 26600094 bl       #0x2204d0
00208490 04600094 bl       #0x2204a0
002084FC e95f0094 bl       #0x2204a0
### caller 0x213390
0021354C ed330094 bl       #0x220500
00213574 d7330094 bl       #0x2204d0
002153C0 20ddff97 bl       #0x20c840
### caller 0x21acd0
0021AD00 f4150094 bl       #0x2204d0
0021AD08 b21e0094 bl       #0x2227d0
0021AD10 fc150094 bl       #0x220500
0021B1D0 c0140094 bl       #0x2204d0
### caller 0x222470
00222560 1f7eff97 bl       #0x201ddc
### caller 0x222a70
00222B6C 9c7cff97 bl       #0x201ddc
### caller 0x2232a0
0022345C 607aff97 bl       #0x201ddc
### caller 0x224e80
00224FA8 36c30094 bl       #0x255c80
### caller 0x2267b0
002268B4 6bb50094 bl       #0x253e60
002268DC 3dbb0094 bl       #0x2555d0
00226904 63f6fd97 bl       #0x1a4290
0022692C 0d7ffe97 bl       #0x1c6560
00226954 bbb60194 bl       #0x294440
00226978 3d91fe97 bl       #0x1cae6c
### caller 0x22c1cc
0022C22C 8581ff97 bl       #0x20c840
### caller 0x22cb94
0022CBF8 127fff97 bl       #0x20c840
### caller 0x22d0a0
0022D588 d2cbff97 bl       #0x2204d0
### caller 0x240680
00240898 ce87ff97 bl       #0x2227d0
00240900 f47eff97 bl       #0x2204d0
0024096C 1c05ff97 bl       #0x201ddc
### caller 0x243e70
00243F04 7371ff97 bl       #0x2204d0
### caller 0x245d60
00245D90 d069ff97 bl       #0x2204d0
### caller 0x246e40
00247304 4f15ff97 bl       #0x20c840
### caller 0x248bb0
002492B4 630dff97 bl       #0x20c840
002493C4 2b65ff97 bl       #0x222870
00249A34 8f63ff97 bl       #0x222870
### caller 0x24b294
0024B438 0205ff97 bl       #0x20c840
0024B644 7f04ff97 bl       #0x20c840
### caller 0x24c470
0024C6F4 774fff97 bl       #0x2204d0
0024C74C 2158ff97 bl       #0x2227d0
0024C77C 614fff97 bl       #0x220500
0024C890 e466ff97 bl       #0x226420
0024C9F0 cc68ff97 bl       #0x226d20
0024CA04 6369ff97 bl       #0x226f90
0024CC44 0b57ff97 bl       #0x222870
0024CE74 5756ff97 bl       #0x2227d0
0024D1C8 7a65ff97 bl       #0x2267b0
0024D1FC 715dff97 bl       #0x2247c0
0024D2A0 7455ff97 bl       #0x222870
0024D734 674bff97 bl       #0x2204d0
0024D77C 1554ff97 bl       #0x2227d0
0024D7AC 554bff97 bl       #0x220500
0024DBFC 354aff97 bl       #0x2204d0
0024DC28 ea52ff97 bl       #0x2227d0
0024DC58 2a4aff97 bl       #0x220500
0024E510 ccf8fe97 bl       #0x20c840
### caller 0x24e524
0024E53C e547ff97 bl       #0x2204d0
0024E580 c847ff97 bl       #0x2204a0
0024E5B8 ba47ff97 bl       #0x2204a0
0024E5E8 ae47ff97 bl       #0x2204a0
### caller 0x24f9d0
0024FB90 5042ff97 bl       #0x2204d0
### caller 0x24fd70
0024FDE4 bb41ff97 bl       #0x2204d0
### caller 0x252cc4
00252DCC 954dff97 bl       #0x226420
00252F1C 814fff97 bl       #0x226d20
00252F30 1850ff97 bl       #0x226f90
002530A8 e6e5fe97 bl       #0x20c840
00253740 1c4cff97 bl       #0x2267b0
### caller 0x253e60
00253E88 8631ff97 bl       #0x2204a0
### caller 0x2542d0
002542F4 6b30ff97 bl       #0x2204a0
### caller 0x2546d0
0025485C 112fff97 bl       #0x2204a0
00254BE8 3a2eff97 bl       #0x2204d0
### caller 0x2555d0
0025560C a52bff97 bl       #0x2204a0
00255728 f1170094 bl       #0x25b6ec
0025577C 492bff97 bl       #0x2204a0
### caller 0x255970
002559A4 bf2aff97 bl       #0x2204a0
### caller 0x255c80
00255D14 e329ff97 bl       #0x2204a0
00255ECC 8129ff97 bl       #0x2204d0
0025609C 50affe97 bl       #0x201ddc
### caller 0x294bb0
00294BE0 302efe97 bl       #0x2204a0
### caller 0x295390
00295438 1a2cfe97 bl       #0x2204a0
00295440 242cfe97 bl       #0x2204d0
002957DC 80b1fd97 bl       #0x201ddc

## SWSH load virtual reverse references
- slot 0x77f920, inferred address point 0x77f8e0

## Baseline load / recovery candidate edges
### candidate 0x6c208
0006C370 844f0694 bl       #0x200180
0006C394 7b4f0694 bl       #0x200180
0006C3B8 724f0694 bl       #0x200180
### candidate 0xf1e7c
000F1EC8 c8469352 mov      w8, #0x9a36
000F1EF4 c8469352 mov      w8, #0x9a36
### candidate 0x16fd20
0016FE00 e0400294 bl       #0x200180
### candidate 0x1a4290
001A43DC 2e7e0194 bl       #0x203c94
001A43FC 96fcff97 bl       #0x1a3654
001A4610 08e8ff97 bl       #0x19e630
### candidate 0x1a4630
001A465C c8469352 mov      w8, #0x9a36
### candidate 0x1a49f0
001A4D8C fd6c0194 bl       #0x200180
001A4FD8 81730194 bl       #0x201ddc
### candidate 0x1c6560
001C6690 81f50094 bl       #0x203c94
001C66B0 8dd4ff97 bl       #0x1bb8e4
### candidate 0x1c69c0
001C6A80 c0e50094 bl       #0x200180
001C6D10 33ec0094 bl       #0x201ddc
### candidate 0x1ca1a0
001CA28C bdd70094 bl       #0x200180
001CA4D8 41de0094 bl       #0x201ddc
### candidate 0x1ca8d0
001CAAC4 74e40094 bl       #0x203c94
### candidate 0x200000
00200178 02000014 b        #0x200180
### candidate 0x213390
00213554 0bb3ff97 bl       #0x200180
0021357C 01b3ff97 bl       #0x200180
00213DF4 67c3ff97 bl       #0x204b90
00213EE0 2cc3ff97 bl       #0x204b90
00213EEC 29c3ff97 bl       #0x204b90
00214E10 60bfff97 bl       #0x204b90
0021500C e1beff97 bl       #0x204b90
00215018 debeff97 bl       #0x204b90
### candidate 0x2164cc
002174C0 b4b5ff97 bl       #0x204b90
### candidate 0x2175d0
00217AB8 36b4ff97 bl       #0x204b90
### candidate 0x219cf0
00219D2C 99abff97 bl       #0x204b90
### candidate 0x21a614
0021A670 48a9ff97 bl       #0x204b90
### candidate 0x21a780
0021A7A8 faa8ff97 bl       #0x204b90
### candidate 0x21acd0
0021AD4C 0d95ff97 bl       #0x200180
0021ADAC 79a7ff97 bl       #0x204b90
### candidate 0x21c760
0021C7AC f9a0ff97 bl       #0x204b90
### candidate 0x21cb40
0021CBB4 f79fff97 bl       #0x204b90
### candidate 0x21ce60
0021CED8 2e9fff97 bl       #0x204b90
### candidate 0x21dab0
0021DADC 2d9cff97 bl       #0x204b90
### candidate 0x21dc40
0021DC68 ca9bff97 bl       #0x204b90
### candidate 0x220b30
00220B4C 1190ff97 bl       #0x204b90
### candidate 0x220ba0
00220BB8 f68fff97 bl       #0x204b90
00220BD4 ef8fff97 bl       #0x204b90
### candidate 0x220c00
00220C10 e08fff97 bl       #0x204b90
### candidate 0x221c50
00221C6C c98bff97 bl       #0x204b90
### candidate 0x221ce0
00221D1C 9d8bff97 bl       #0x204b90
### candidate 0x221d70
00221D90 808bff97 bl       #0x204b90
### candidate 0x222230
00222244 8b000094 bl       #0x222470
### candidate 0x222470
002224DC 2977ff97 bl       #0x200180
00222560 1f7eff97 bl       #0x201ddc
002225C0 7489ff97 bl       #0x204b90
002225C4 858dff97 bl       #0x205bd8
### candidate 0x222a70
00222ABC b175ff97 bl       #0x200180
00222B6C 9c7cff97 bl       #0x201ddc
### candidate 0x2232a0
0022345C 607aff97 bl       #0x201ddc
### candidate 0x224e80
00224FDC ed7eff97 bl       #0x204b90
### candidate 0x225490
0022564C 517dff97 bl       #0x204b90
002256E8 a66aff97 bl       #0x200180
### candidate 0x225930
00225AEC 297cff97 bl       #0x204b90
00225B88 7e69ff97 bl       #0x200180
### candidate 0x226420
002264C4 7a2d0194 bl       #0x271aac
00226718 ff2c0194 bl       #0x271b14
### candidate 0x226d20
00226E74 0e2b0194 bl       #0x271aac
00226E8C 222b0114 b        #0x271b14
### candidate 0x226fe0
00227048 b32a0114 b        #0x271b14
### candidate 0x227800
002278A0 a4ce0094 bl       #0x25b330
### candidate 0x240680
002408A0 38fefe97 bl       #0x200180
0024096C 1c05ff97 bl       #0x201ddc
### candidate 0x2459c4
00245C38 8e73ff97 bl       #0x222a70
### candidate 0x248bb0
002492AC f165ff97 bl       #0x222a70
002493CC a965ff97 bl       #0x222a70
00249A3C 0d64ff97 bl       #0x222a70
### candidate 0x24c470
0024CC34 eb68ff97 bl       #0x226fe0
0024CC40 0c56ff97 bl       #0x222470
0024CC4C 8957ff97 bl       #0x222a70
0024D290 5467ff97 bl       #0x226fe0
0024D29C 7554ff97 bl       #0x222470
0024D2A8 f255ff97 bl       #0x222a70
0024D998 7edcfe97 bl       #0x204b90
0024DB48 12dcfe97 bl       #0x204b90
0024E4F4 df4fff97 bl       #0x222470
0024E508 5a51ff97 bl       #0x222a70
0024E230 c8469352 mov      w8, #0x9a36
0024E4E8 c8469352 mov      w8, #0x9a36
### candidate 0x24e638
0024EA4C 42d82891 add      x2, x2, #0xa36
### candidate 0x250150
002503C8 aa49ff97 bl       #0x222a70
### candidate 0x252cc4
00253144 a74fff97 bl       #0x226fe0
00253160 c43cff97 bl       #0x222470
002531C0 884fff97 bl       #0x226fe0
002531CC a93cff97 bl       #0x222470
### candidate 0x253774
00253B68 42d82891 add      x2, x2, #0xa36
### candidate 0x253e60
00254054 10bffe97 bl       #0x203c94
00254064 9ef5fe97 bl       #0x2116dc
00254260 a4e2fe97 bl       #0x20ccf0
### candidate 0x2546d0
00254C1C 59adfe97 bl       #0x200180
### candidate 0x2555d0
00255708 63b9fe97 bl       #0x203c94
### candidate 0x255c80
00255E84 2b150094 bl       #0x25b330
00255F00 a0a8fe97 bl       #0x200180
0025609C 50affe97 bl       #0x201ddc
### candidate 0x256b60
0025701C c5100094 bl       #0x25b330
### candidate 0x25b5c0
0025B658 7cffff97 bl       #0x25b448
0025B6DC 5bffff97 bl       #0x25b448
### candidate 0x25b6ec
0025B720 04ffff97 bl       #0x25b330
### candidate 0x271b14
00271B3C d7240094 bl       #0x27ae98
### candidate 0x271ba4
00271BF0 a80a0014 b        #0x274690
### candidate 0x271d20
00271E60 0e240094 bl       #0x27ae98
### candidate 0x274640
00274668 0a000094 bl       #0x274690
### candidate 0x27a1ac
0027A1D8 1ae9ff97 bl       #0x274640
0027A1F0 14e9ff97 bl       #0x274640
### candidate 0x27ad68
0027ADBC 91e7ff97 bl       #0x274c00
0027ADF8 82e7ff97 bl       #0x274c00
### candidate 0x294440
002945DC aebdfd97 bl       #0x203c94
002945FC 81c2ff97 bl       #0x285000
### candidate 0x295390
00295470 44abfd97 bl       #0x200180
002957DC 80b1fd97 bl       #0x201ddc

## Complete function bodies
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
### 0x19e630 (4 slots)
~~~asm
0019E630 e22300d0 adrp     x2, #0x61c000
0019E634 42dc3b91 add      x2, x2, #0xef7
0019E638 e1031f2a mov      w1, wzr
0019E63C 68ffff17 b        #0x19e3dc
~~~
### 0x1a3654 (337 slots)
~~~asm
001A3654 ff4303d1 sub      sp, sp, #0xd0
001A3658 fd7b08a9 stp      x29, x30, [sp, #0x80]
001A365C fa6709a9 stp      x26, x25, [sp, #0x90]
001A3660 f85f0aa9 stp      x24, x23, [sp, #0xa0]
001A3664 f6570ba9 stp      x22, x21, [sp, #0xb0]
001A3668 f44f0ca9 stp      x20, x19, [sp, #0xc0]
001A366C fd030291 add      x29, sp, #0x80
001A3670 f703012a mov      w23, w1
001A3674 f80300aa mov      x24, x0
001A3678 e40f00f9 str      x4, [sp, #0x18]
001A367C a8a300d1 sub      x8, x29, #0x28
001A3680 e1630091 add      x1, sp, #0x18
001A3684 e00304aa mov      x0, x4
001A3688 f30304aa mov      x19, x4
001A368C f90303aa mov      x25, x3
001A3690 f603022a mov      w22, w2
001A3694 06ffff97 bl       #0x1a32ac
001A3698 e00f40f9 ldr      x0, [sp, #0x18]
001A369C a82300d1 sub      x8, x29, #8
001A36A0 a1a300d1 sub      x1, x29, #0x28
001A36A4 49ffff97 bl       #0x1a33c8
001A36A8 b4835ff8 ldur     x20, [x29, #-8]
001A36AC 540100b4 cbz      x20, #0x1a36d4
001A36B0 e00314aa mov      x0, x20
001A36B4 088c44f8 ldr      x8, [x0, #0x48]!
001A36B8 080940f9 ldr      x8, [x8, #0x10]
001A36BC 00013fd6 blr      x8
001A36C0 ff9e0071 cmp      w23, #0x27
001A36C4 e8010054 b.hi     #0x1a3700
001A36C8 df760071 cmp      w22, #0x1d
001A36CC c9000054 b.ls     #0x1a36e4
001A36D0 0c000014 b        #0x1a3700
001A36D4 ff9e0071 cmp      w23, #0x27
001A36D8 c8010054 b.hi     #0x1a3710
001A36DC df760071 cmp      w22, #0x1d
001A36E0 88010054 b.hi     #0x1a3710
001A36E4 080a8552 mov      w8, #0x2850
001A36E8 092b8052 mov      w9, #0x158
001A36EC 802e40f9 ldr      x0, [x20, #0x58]
001A36F0 e862a89b umaddl   x8, w23, w8, x24
001A36F4 c822a99b umaddl   x8, w22, w9, x8
001A36F8 01510191 add      x1, x8, #0x54
001A36FC 3b630d94 bl       #0x4fc3e8
001A3700 888e44f8 ldr      x8, [x20, #0x48]!
001A3704 e00314aa mov      x0, x20
001A3708 080d40f9 ldr      x8, [x8, #0x18]
001A370C 00013fd6 blr      x8
001A3710 a0835df8 ldur     x0, [x29, #-0x28]
001A3714 800000b4 cbz      x0, #0x1a3724
001A3718 088c44f8 ldr      x8, [x0, #0x48]!
001A371C 080d40f9 ldr      x8, [x8, #0x18]
001A3720 00013fd6 blr      x8
001A3724 a0835ff8 ldur     x0, [x29, #-8]
001A3728 802200b4 cbz      x0, #0x1a3b78
001A372C 978b0194 bl       #0x206588
001A3730 a0210037 tbnz     w0, #0, #0x1a3b64
001A3734 a0835ff8 ldur     x0, [x29, #-8]
001A3738 238d0194 bl       #0x206bc4
001A373C e82f0090 adrp     x8, #0x79f000
001A3740 f40300aa mov      x20, x0
001A3744 08d942f9 ldr      x8, [x8, #0x5b0]
001A3748 bfff3ea9 stp      xzr, xzr, [x29, #-0x18]
001A374C 150140f9 ldr      x21, [x8]
001A3750 e8630091 add      x8, sp, #0x18
001A3754 bfff3da9 stp      xzr, xzr, [x29, #-0x28]
001A3758 e00315aa mov      x0, x21
001A375C 3aecff97 bl       #0x19e844
001A3760 e00f40f9 ldr      x0, [sp, #0x18]
001A3764 a1a300d1 sub      x1, x29, #0x28
001A3768 b8e9ff97 bl       #0x19de48
001A376C e00f40f9 ldr      x0, [sp, #0x18]
001A3770 800000b4 cbz      x0, #0x1a3780
001A3774 088c44f8 ldr      x8, [x0, #0x48]!
001A3778 080d40f9 ldr      x8, [x8, #0x18]
001A377C 00013fd6 blr      x8
001A3780 e00314aa mov      x0, x20
001A3784 e1400e94 bl       #0x533b08
001A3788 fa03002a mov      w26, w0
001A378C e1630091 add      x1, sp, #0x18
001A3790 e00314aa mov      x0, x20
001A3794 02048052 mov      w2, #0x20
001A3798 ffff04a9 stp      xzr, xzr, [sp, #0x48]
001A379C ffff03a9 stp      xzr, xzr, [sp, #0x38]
001A37A0 ffff02a9 stp      xzr, xzr, [sp, #0x28]
001A37A4 ffff01a9 stp      xzr, xzr, [sp, #0x18]
001A37A8 d6400e94 bl       #0x533b00
001A37AC a8c35d38 ldurb    w8, [x29, #-0x24]
001A37B0 5f03086b cmp      w26, w8
001A37B4 a1010054 b.ne     #0x1a37e8
001A37B8 a8a300d1 sub      x8, x29, #0x28
001A37BC 42038052 mov      w2, #0x1a
001A37C0 e1630091 add      x1, sp, #0x18
001A37C4 00057fb2 orr      x0, x8, #6
001A37C8 6a4c1194 bl       #0x5f6970
001A37CC 1f000071 cmp      w0, #0
001A37D0 fa179f1a cset     w26, eq
001A37D4 283b40b9 ldr      w8, [x25, #0x38]
001A37D8 08050051 sub      w8, w8, #1
001A37DC 1f050071 cmp      w8, #1
001A37E0 e9000054 b.ls     #0x1a37fc
001A37E4 0a000014 b        #0x1a380c
001A37E8 fa031f2a mov      w26, wzr
001A37EC 283b40b9 ldr      w8, [x25, #0x38]
001A37F0 08050051 sub      w8, w8, #1
001A37F4 1f050071 cmp      w8, #1
001A37F8 a8000054 b.hi     #0x1a380c
001A37FC e00314aa mov      x0, x20
001A3800 c4400e94 bl       #0x533b10
001A3804 1f1c0072 tst      w0, #0xff
001A3808 c0010054 b.eq     #0x1a3840
001A380C a1a300d1 sub      x1, x29, #0x28
001A3810 e00314aa mov      x0, x20
001A3814 49400e94 bl       #0x533938
001A3818 a0000036 tbz      w0, #0, #0x1a382c
001A381C e00314aa mov      x0, x20
001A3820 e1031f2a mov      w1, wzr
001A3824 a9400e94 bl       #0x533ac8
001A3828 0f000014 b        #0x1a3864
001A382C ba000034 cbz      w26, #0x1a3840
001A3830 e00314aa mov      x0, x20
001A3834 21008052 mov      w1, #1
001A3838 a4400e94 bl       #0x533ac8
001A383C 0a000014 b        #0x1a3864
001A3840 41068052 mov      w1, #0x32
001A3844 e00314aa mov      x0, x20
001A3848 b4400e94 bl       #0x533b18
001A384C e00314aa mov      x0, x20
001A3850 e1031f2a mov      w1, wzr
001A3854 b2360e94 bl       #0x53131c
001A3858 a1a300d1 sub      x1, x29, #0x28
001A385C e00314aa mov      x0, x20
001A3860 51400e94 bl       #0x5339a4
001A3864 e00314aa mov      x0, x20
001A3868 e1031f2a mov      w1, wzr
001A386C 30370e94 bl       #0x53152c
001A3870 1f7c0071 cmp      w0, #0x1f
001A3874 01010054 b.ne     #0x1a3894
001A3878 e00314aa mov      x0, x20
001A387C e1031f2a mov      w1, wzr
001A3880 57370e94 bl       #0x5315dc
001A3884 80000036 tbz      w0, #0, #0x1a3894
001A3888 e00314aa mov      x0, x20
001A388C e1031f2a mov      w1, wzr
001A3890 3e380e94 bl       #0x531988
001A3894 e00314aa mov      x0, x20
001A3898 21008052 mov      w1, #1
001A389C 24370e94 bl       #0x53152c
001A38A0 1f7c0071 cmp      w0, #0x1f
001A38A4 01010054 b.ne     #0x1a38c4
001A38A8 e00314aa mov      x0, x20
001A38AC 21008052 mov      w1, #1
001A38B0 4b370e94 bl       #0x5315dc
001A38B4 80000036 tbz      w0, #0, #0x1a38c4
001A38B8 e00314aa mov      x0, x20
001A38BC 21008052 mov      w1, #1
001A38C0 32380e94 bl       #0x531988
001A38C4 e00314aa mov      x0, x20
001A38C8 41008052 mov      w1, #2
001A38CC 18370e94 bl       #0x53152c
001A38D0 1f7c0071 cmp      w0, #0x1f
001A38D4 01010054 b.ne     #0x1a38f4
001A38D8 e00314aa mov      x0, x20
001A38DC 41008052 mov      w1, #2
001A38E0 3f370e94 bl       #0x5315dc
001A38E4 80000036 tbz      w0, #0, #0x1a38f4
001A38E8 e00314aa mov      x0, x20
001A38EC 41008052 mov      w1, #2
001A38F0 26380e94 bl       #0x531988
001A38F4 e00314aa mov      x0, x20
001A38F8 61008052 mov      w1, #3
001A38FC 0c370e94 bl       #0x53152c
001A3900 1f7c0071 cmp      w0, #0x1f
001A3904 01010054 b.ne     #0x1a3924
001A3908 e00314aa mov      x0, x20
001A390C 61008052 mov      w1, #3
001A3910 33370e94 bl       #0x5315dc
001A3914 80000036 tbz      w0, #0, #0x1a3924
001A3918 e00314aa mov      x0, x20
001A391C 61008052 mov      w1, #3
001A3920 1a380e94 bl       #0x531988
001A3924 e00314aa mov      x0, x20
001A3928 81008052 mov      w1, #4
001A392C 00370e94 bl       #0x53152c
001A3930 1f7c0071 cmp      w0, #0x1f
001A3934 01010054 b.ne     #0x1a3954
001A3938 e00314aa mov      x0, x20
001A393C 81008052 mov      w1, #4
001A3940 27370e94 bl       #0x5315dc
001A3944 80000036 tbz      w0, #0, #0x1a3954
001A3948 e00314aa mov      x0, x20
001A394C 81008052 mov      w1, #4
001A3950 0e380e94 bl       #0x531988
001A3954 a1008052 mov      w1, #5
001A3958 e00314aa mov      x0, x20
001A395C f4360e94 bl       #0x53152c
001A3960 1f7c0071 cmp      w0, #0x1f
001A3964 01010054 b.ne     #0x1a3984
001A3968 a1008052 mov      w1, #5
001A396C e00314aa mov      x0, x20
001A3970 1b370e94 bl       #0x5315dc
001A3974 80000036 tbz      w0, #0, #0x1a3984
001A3978 a1008052 mov      w1, #5
001A397C e00314aa mov      x0, x20
001A3980 02380e94 bl       #0x531988
001A3984 e00314aa mov      x0, x20
001A3988 91350e94 bl       #0x530fcc
001A398C e00314aa mov      x0, x20
001A3990 e1031f2a mov      w1, wzr
001A3994 66400e94 bl       #0x533b2c
001A3998 b9835ff8 ldur     x25, [x29, #-8]
001A399C 590100b4 cbz      x25, #0x1a39c4
001A39A0 e00319aa mov      x0, x25
001A39A4 088c44f8 ldr      x8, [x0, #0x48]!
001A39A8 080940f9 ldr      x8, [x8, #0x10]
001A39AC 00013fd6 blr      x8
001A39B0 ff9e0071 cmp      w23, #0x27
001A39B4 e8010054 b.hi     #0x1a39f0
001A39B8 df760071 cmp      w22, #0x1d
001A39BC c9000054 b.ls     #0x1a39d4
001A39C0 0c000014 b        #0x1a39f0
001A39C4 ff9e0071 cmp      w23, #0x27
001A39C8 c8010054 b.hi     #0x1a3a00
001A39CC df760071 cmp      w22, #0x1d
001A39D0 88010054 b.hi     #0x1a3a00
001A39D4 080a8552 mov      w8, #0x2850
001A39D8 092b8052 mov      w9, #0x158
001A39DC 212f40f9 ldr      x1, [x25, #0x58]
001A39E0 e862a89b umaddl   x8, w23, w8, x24
001A39E4 c822a99b umaddl   x8, w22, w9, x8
001A39E8 00510191 add      x0, x8, #0x54
001A39EC 3f620d94 bl       #0x4fc2e8
001A39F0 288f44f8 ldr      x8, [x25, #0x48]!
001A39F4 e00319aa mov      x0, x25
001A39F8 080d40f9 ldr      x8, [x8, #0x18]
001A39FC 00013fd6 blr      x8
001A3A00 e8430091 add      x8, sp, #0x10
001A3A04 e00315aa mov      x0, x21
001A3A08 87ebff97 bl       #0x19e824
001A3A0C e00b40f9 ldr      x0, [sp, #0x10]
001A3A10 e10314aa mov      x1, x20
001A3A14 62008052 mov      w2, #3
001A3A18 58faff97 bl       #0x1a2378
001A3A1C e00314aa mov      x0, x20
001A3A20 7a350e94 bl       #0x531008
001A3A24 1fb00771 cmp      w0, #0x1ec
001A3A28 01070054 b.ne     #0x1a3b08
001A3A2C e00314aa mov      x0, x20
001A3A30 78350e94 bl       #0x531010
001A3A34 083c0012 and      w8, w0, #0xffff
001A3A38 1f050071 cmp      w8, #1
001A3A3C 61060054 b.ne     #0x1a3b08
001A3A40 48d03bd5 mrs      x8, tpidr_el0
001A3A44 17c97392 and      x23, x8, #0xffffffffffffe000
001A3A48 e84e40f9 ldr      x8, [x23, #0x98]
001A3A4C 1f4100f1 cmp      x8, #0x10
001A3A50 200a0054 b.eq     #0x1a3b94
001A3A54 e80e088b add      x8, x23, x8, lsl #3
001A3A58 01628052 mov      w1, #0x310
001A3A5C e00313aa mov      x0, x19
001A3A60 02018052 mov      w2, #8
001A3A64 130d00f9 str      x19, [x8, #0x18]
001A3A68 e84e40f9 ldr      x8, [x23, #0x98]
001A3A6C 08050091 add      x8, x8, #1
001A3A70 e84e00f9 str      x8, [x23, #0x98]
001A3A74 680240f9 ldr      x8, [x19]
001A3A78 080940f9 ldr      x8, [x8, #0x10]
001A3A7C 00013fd6 blr      x8
001A3A80 f60300aa mov      x22, x0
001A3A84 a00000b5 cbnz     x0, #0x1a3a98
001A3A88 680240f9 ldr      x8, [x19]
001A3A8C e00313aa mov      x0, x19
001A3A90 085d40f9 ldr      x8, [x8, #0xb8]
001A3A94 00013fd6 blr      x8
001A3A98 e00316aa mov      x0, x22
001A3A9C e10313aa mov      x1, x19
001A3AA0 e20314aa mov      x2, x20
001A3AA4 a14e0e94 bl       #0x537528
001A3AA8 08628052 mov      w8, #0x310
001A3AAC 09018052 mov      w9, #8
001A3AB0 d3da00a9 stp      x19, x22, [x22, #8]
001A3AB4 f30316aa mov      x19, x22
001A3AB8 c8a601a9 stp      x8, x9, [x22, #0x18]
001A3ABC e84e40f9 ldr      x8, [x23, #0x98]
001A3AC0 080500d1 sub      x8, x8, #1
001A3AC4 e84e00f9 str      x8, [x23, #0x98]
001A3AC8 688e44f8 ldr      x8, [x19, #0x48]!
001A3ACC e00313aa mov      x0, x19
001A3AD0 080940f9 ldr      x8, [x8, #0x10]
001A3AD4 00013fd6 blr      x8
001A3AD8 e00316aa mov      x0, x22
001A3ADC e1031f2a mov      w1, wzr
001A3AE0 e2031faa mov      x2, xzr
001A3AE4 66400e94 bl       #0x533c7c
001A3AE8 e00b40f9 ldr      x0, [sp, #0x10]
001A3AEC e10316aa mov      x1, x22
001A3AF0 62008052 mov      w2, #3
001A3AF4 21faff97 bl       #0x1a2378
001A3AF8 680240f9 ldr      x8, [x19]
001A3AFC e00313aa mov      x0, x19
001A3B00 080d40f9 ldr      x8, [x8, #0x18]
001A3B04 00013fd6 blr      x8
001A3B08 e8230091 add      x8, sp, #8
001A3B0C e00315aa mov      x0, x21
001A3B10 5debff97 bl       #0x19e884
001A3B14 f30740f9 ldr      x19, [sp, #8]
001A3B18 e00314aa mov      x0, x20
001A3B1C 3b350e94 bl       #0x531008
001A3B20 f503002a mov      w21, w0
001A3B24 e00314aa mov      x0, x20
001A3B28 3a350e94 bl       #0x531010
001A3B2C e203002a mov      w2, w0
001A3B30 e00313aa mov      x0, x19
001A3B34 e103152a mov      w1, w21
001A3B38 51000094 bl       #0x1a3c7c
001A3B3C e00740f9 ldr      x0, [sp, #8]
001A3B40 800000b4 cbz      x0, #0x1a3b50
001A3B44 088c44f8 ldr      x8, [x0, #0x48]!
001A3B48 080d40f9 ldr      x8, [x8, #0x18]
001A3B4C 00013fd6 blr      x8
001A3B50 e00b40f9 ldr      x0, [sp, #0x10]
001A3B54 800000b4 cbz      x0, #0x1a3b64
001A3B58 088c44f8 ldr      x8, [x0, #0x48]!
001A3B5C 080d40f9 ldr      x8, [x8, #0x18]
001A3B60 00013fd6 blr      x8
001A3B64 a0835ff8 ldur     x0, [x29, #-8]
001A3B68 800000b4 cbz      x0, #0x1a3b78
001A3B6C 088c44f8 ldr      x8, [x0, #0x48]!
001A3B70 080d40f9 ldr      x8, [x8, #0x18]
001A3B74 00013fd6 blr      x8
001A3B78 f44f4ca9 ldp      x20, x19, [sp, #0xc0]
001A3B7C f6574ba9 ldp      x22, x21, [sp, #0xb0]
001A3B80 f85f4aa9 ldp      x24, x23, [sp, #0xa0]
001A3B84 fa6749a9 ldp      x26, x25, [sp, #0x90]
001A3B88 fd7b48a9 ldp      x29, x30, [sp, #0x80]
001A3B8C ff430391 add      sp, sp, #0xd0
001A3B90 c0035fd6 ret      
001A3B94 1f7cf997 bl       #0x2c10
~~~
### 0x1a4290 (232 slots)
~~~asm
001A4290 ff4302d1 sub      sp, sp, #0x90
001A4294 fd7b04a9 stp      x29, x30, [sp, #0x40]
001A4298 f92b00f9 str      x25, [sp, #0x50]
001A429C f85f06a9 stp      x24, x23, [sp, #0x60]
001A42A0 f65707a9 stp      x22, x21, [sp, #0x70]
001A42A4 f44f08a9 stp      x20, x19, [sp, #0x80]
001A42A8 fd030191 add      x29, sp, #0x40
001A42AC c82f00f0 adrp     x8, #0x79f000
001A42B0 f40302aa mov      x20, x2
001A42B4 08d942f9 ldr      x8, [x8, #0x5b0]
001A42B8 130140f9 ldr      x19, [x8]
001A42BC 00190037 tbnz     w0, #0, #0x1a45dc
001A42C0 a8630091 add      x8, x29, #0x18
001A42C4 77f00194 bl       #0x2204a0
001A42C8 a82300d1 sub      x8, x29, #8
001A42CC e00313aa mov      x0, x19
001A42D0 3de9ff97 bl       #0x19e7c4
001A42D4 a84300d1 sub      x8, x29, #0x10
001A42D8 e00313aa mov      x0, x19
001A42DC 42e9ff97 bl       #0x19e7e4
001A42E0 e83100b0 adrp     x8, #0x7e1000
001A42E4 08611491 add      x8, x8, #0x518
001A42E8 a0835ff8 ldur     x0, [x29, #-8]
001A42EC 080140f9 ldr      x8, [x8]
001A42F0 155541f9 ldr      x21, [x8, #0x2a8]
001A42F4 f7faff97 bl       #0x1a2ed0
001A42F8 a80f40f9 ldr      x8, [x29, #0x18]
001A42FC 89fb8152 mov      w9, #0xfdc
001A4300 090ea072 movk     w9, #0x70, lsl #16
001A4304 196969b8 ldr      w25, [x8, x9]
001A4308 3f070071 cmp      w25, #1
001A430C 6b080054 b.lt     #0x1a4418
001A4310 f6031f2a mov      w22, wzr
001A4314 06000014 b        #0x1a432c
001A4318 1f2003d5 nop      
001A431C 1f2003d5 nop      
001A4320 d6060011 add      w22, w22, #1
001A4324 df02196b cmp      w22, w25
001A4328 80070054 b.eq     #0x1a4418
001A432C f7031f2a mov      w23, wzr
001A4330 04000014 b        #0x1a4340
001A4334 f7060011 add      w23, w23, #1
001A4338 ff7a0071 cmp      w23, #0x1e
001A433C 20ffff54 b.eq     #0x1a4320
001A4340 a00f40f9 ldr      x0, [x29, #0x18]
001A4344 a86300d1 sub      x8, x29, #0x18
001A4348 e103162a mov      w1, w22
001A434C e203172a mov      w2, w23
001A4350 e30315aa mov      x3, x21
001A4354 3d700194 bl       #0x200448
001A4358 a0835ef8 ldur     x0, [x29, #-0x18]
001A435C 8b880194 bl       #0x206588
001A4360 00050037 tbnz     w0, #0, #0x1a4400
001A4364 b8835ff8 ldur     x24, [x29, #-8]
001A4368 a0835ef8 ldur     x0, [x29, #-0x18]
001A436C e01300f9 str      x0, [sp, #0x20]
001A4370 800000b4 cbz      x0, #0x1a4380
001A4374 088c44f8 ldr      x8, [x0, #0x48]!
001A4378 080940f9 ldr      x8, [x8, #0x10]
001A437C 00013fd6 blr      x8
001A4380 e1830091 add      x1, sp, #0x20
001A4384 e00318aa mov      x0, x24
001A4388 e20315aa mov      x2, x21
001A438C e303162a mov      w3, w22
001A4390 e403172a mov      w4, w23
001A4394 4afcff97 bl       #0x1a34bc
001A4398 e01340f9 ldr      x0, [sp, #0x20]
001A439C a00000b4 cbz      x0, #0x1a43b0
001A43A0 088c44f8 ldr      x8, [x0, #0x48]!
001A43A4 080d40f9 ldr      x8, [x8, #0x18]
001A43A8 00013fd6 blr      x8
001A43AC ff1300f9 str      xzr, [sp, #0x20]
001A43B0 a0835ef8 ldur     x0, [x29, #-0x18]
001A43B4 f58f0194 bl       #0x208388
001A43B8 c0000036 tbz      w0, #0, #0x1a43d0
001A43BC a0835ff8 ldur     x0, [x29, #-8]
001A43C0 e103162a mov      w1, w22
001A43C4 e203172a mov      w2, w23
001A43C8 23008052 mov      w3, #1
001A43CC fffdff97 bl       #0x1a3bc8
001A43D0 a00f40f9 ldr      x0, [x29, #0x18]
001A43D4 e103162a mov      w1, w22
001A43D8 e203172a mov      w2, w23
001A43DC 2e7e0194 bl       #0x203c94
001A43E0 00010036 tbz      w0, #0, #0x1a4400
001A43E4 a8835ef8 ldur     x8, [x29, #-0x18]
001A43E8 e103162a mov      w1, w22
001A43EC e203172a mov      w2, w23
001A43F0 a0835ff8 ldur     x0, [x29, #-8]
001A43F4 e40315aa mov      x4, x21
001A43F8 03810191 add      x3, x8, #0x60
001A43FC 96fcff97 bl       #0x1a3654
001A4400 a0835ef8 ldur     x0, [x29, #-0x18]
001A4404 80f9ffb4 cbz      x0, #0x1a4334
001A4408 088c44f8 ldr      x8, [x0, #0x48]!
001A440C 080d40f9 ldr      x8, [x8, #0x18]
001A4410 00013fd6 blr      x8
001A4414 c8ffff17 b        #0x1a4334
001A4418 a0035ff8 ldur     x0, [x29, #-0x10]
001A441C 01058052 mov      w1, #0x28
001A4420 18b49952 mov      w24, #0xcda0
001A4424 f800a072 movk     w24, #7, lsl #16
001A4428 75faff97 bl       #0x1a2dfc
001A442C a86300d1 sub      x8, x29, #0x18
001A4430 1cf00194 bl       #0x2204a0
001A4434 f5031faa mov      x21, xzr
001A4438 f90318aa mov      x25, x24
001A443C 05000014 b        #0x1a4450
001A4440 b5060091 add      x21, x21, #1
001A4444 39c30091 add      x25, x25, #0x30
001A4448 bf1a00f1 cmp      x21, #6
001A444C 60050054 b.eq     #0x1a44f8
001A4450 e8630091 add      x8, sp, #0x18
001A4454 e00313aa mov      x0, x19
001A4458 e3e8ff97 bl       #0x19e7e4
001A445C e00f40f9 ldr      x0, [sp, #0x18]
001A4460 e103152a mov      w1, w21
001A4464 fff9ff97 bl       #0x1a2c60
001A4468 f703002a mov      w23, w0
001A446C e00f40f9 ldr      x0, [sp, #0x18]
001A4470 800000b4 cbz      x0, #0x1a4480
001A4474 088c44f8 ldr      x8, [x0, #0x48]!
001A4478 080d40f9 ldr      x8, [x8, #0x18]
001A447C 00013fd6 blr      x8
001A4480 17feff34 cbz      w23, #0x1a4440
001A4484 f6031faa mov      x22, xzr
001A4488 f703172a mov      w23, w23
001A448C 04000014 b        #0x1a449c
001A4490 d6060091 add      x22, x22, #1
001A4494 ff0216eb cmp      x23, x22
001A4498 40fdff54 b.eq     #0x1a4440
001A449C 89f50194 bl       #0x221ac0
001A44A0 0800198b add      x8, x0, x25
001A44A4 a0835ef8 ldur     x0, [x29, #-0x18]
001A44A8 e1630091 add      x1, sp, #0x18
001A44AC 087976f8 ldr      x8, [x8, x22, lsl #3]
001A44B0 e2530091 add      x2, sp, #0x14
001A44B4 e3430091 add      x3, sp, #0x10
001A44B8 ff2301a9 stp      xzr, x8, [sp, #0x10]
001A44BC 077e0194 bl       #0x203cd8
001A44C0 e8230091 add      x8, sp, #8
001A44C4 e00313aa mov      x0, x19
001A44C8 c7e8ff97 bl       #0x19e7e4
001A44CC e00740f9 ldr      x0, [sp, #8]
001A44D0 e103152a mov      w1, w21
001A44D4 e203162a mov      w2, w22
001A44D8 e40f4229 ldp      w4, w3, [sp, #0x10]
001A44DC f6f9ff97 bl       #0x1a2cb4
001A44E0 e00740f9 ldr      x0, [sp, #8]
001A44E4 60fdffb4 cbz      x0, #0x1a4490
001A44E8 088c44f8 ldr      x8, [x0, #0x48]!
001A44EC 080d40f9 ldr      x8, [x8, #0x18]
001A44F0 00013fd6 blr      x8
001A44F4 e7ffff17 b        #0x1a4490
001A44F8 e8630091 add      x8, sp, #0x18
001A44FC e00313aa mov      x0, x19
001A4500 e9e8ff97 bl       #0x19e8a4
001A4504 e00f40f9 ldr      x0, [sp, #0x18]
001A4508 0fffff97 bl       #0x1a4144
001A450C f5031faa mov      x21, xzr
001A4510 16a30491 add      x22, x24, #0x128
001A4514 17008012 mov      w23, #-1
001A4518 06000014 b        #0x1a4530
001A451C 1f2003d5 nop      
001A4520 b5060091 add      x21, x21, #1
001A4524 d6220091 add      x22, x22, #8
001A4528 bf8e01f1 cmp      x21, #0x63
001A452C 60020054 b.eq     #0x1a4578
001A4530 64f50194 bl       #0x221ac0
001A4534 0100168b add      x1, x0, x22
001A4538 280040f9 ldr      x8, [x1]
001A453C 28ffffb4 cbz      x8, #0x1a4520
001A4540 a0835ef8 ldur     x0, [x29, #-0x18]
001A4544 e2230091 add      x2, sp, #8
001A4548 e3530091 add      x3, sp, #0x14
001A454C f70b00b9 str      w23, [sp, #8]
001A4550 f71700b9 str      w23, [sp, #0x14]
001A4554 e17d0194 bl       #0x203cd8
001A4558 e20b40b9 ldr      w2, [sp, #8]
001A455C 22feff37 tbnz     w2, #0x1f, #0x1a4520
001A4560 e31740b9 ldr      w3, [sp, #0x14]
001A4564 e3fdff37 tbnz     w3, #0x1f, #0x1a4520
001A4568 e00f40f9 ldr      x0, [sp, #0x18]
001A456C e103152a mov      w1, w21
001A4570 effeff97 bl       #0x1a412c
001A4574 ebffff17 b        #0x1a4520
001A4578 e00f40f9 ldr      x0, [sp, #0x18]
001A457C 800000b4 cbz      x0, #0x1a458c
001A4580 088c44f8 ldr      x8, [x0, #0x48]!
001A4584 080d40f9 ldr      x8, [x8, #0x18]
001A4588 00013fd6 blr      x8
001A458C a0835ef8 ldur     x0, [x29, #-0x18]
001A4590 800000b4 cbz      x0, #0x1a45a0
001A4594 088c44f8 ldr      x8, [x0, #0x48]!
001A4598 080d40f9 ldr      x8, [x8, #0x18]
001A459C 00013fd6 blr      x8
001A45A0 a0035ff8 ldur     x0, [x29, #-0x10]
001A45A4 800000b4 cbz      x0, #0x1a45b4
001A45A8 088c44f8 ldr      x8, [x0, #0x48]!
001A45AC 080d40f9 ldr      x8, [x8, #0x18]
001A45B0 00013fd6 blr      x8
001A45B4 a0835ff8 ldur     x0, [x29, #-8]
001A45B8 800000b4 cbz      x0, #0x1a45c8
001A45BC 088c44f8 ldr      x8, [x0, #0x48]!
001A45C0 080d40f9 ldr      x8, [x8, #0x18]
001A45C4 00013fd6 blr      x8
001A45C8 a00f40f9 ldr      x0, [x29, #0x18]
001A45CC 800000b4 cbz      x0, #0x1a45dc
001A45D0 088c44f8 ldr      x8, [x0, #0x48]!
001A45D4 080d40f9 ldr      x8, [x8, #0x18]
001A45D8 00013fd6 blr      x8
001A45DC a8630091 add      x8, x29, #0x18
001A45E0 e00313aa mov      x0, x19
001A45E4 b8e8ff97 bl       #0x19e8c4
001A45E8 b50f40f9 ldr      x21, [x29, #0x18]
001A45EC 02128052 mov      w2, #0x90
001A45F0 e10314aa mov      x1, x20
001A45F4 a0620191 add      x0, x21, #0x58
001A45F8 fa471194 bl       #0x5f65e0
001A45FC a88e44f8 ldr      x8, [x21, #0x48]!
001A4600 e00315aa mov      x0, x21
001A4604 080d40f9 ldr      x8, [x8, #0x18]
001A4608 00013fd6 blr      x8
001A460C e00313aa mov      x0, x19
001A4610 08e8ff97 bl       #0x19e630
001A4614 f44f48a9 ldp      x20, x19, [sp, #0x80]
001A4618 f92b40f9 ldr      x25, [sp, #0x50]
001A461C f65747a9 ldp      x22, x21, [sp, #0x70]
001A4620 f85f46a9 ldp      x24, x23, [sp, #0x60]
001A4624 fd7b44a9 ldp      x29, x30, [sp, #0x40]
001A4628 ff430291 add      sp, sp, #0x90
001A462C c0035fd6 ret      
~~~
### 0x1a4630 (239 slots)
~~~asm
001A4630 ff4302d1 sub      sp, sp, #0x90
001A4634 fd7b03a9 stp      x29, x30, [sp, #0x30]
001A4638 fb2300f9 str      x27, [sp, #0x40]
001A463C fa6705a9 stp      x26, x25, [sp, #0x50]
001A4640 f85f06a9 stp      x24, x23, [sp, #0x60]
001A4644 f65707a9 stp      x22, x21, [sp, #0x70]
001A4648 f44f08a9 stp      x20, x19, [sp, #0x80]
001A464C fdc30091 add      x29, sp, #0x30
001A4650 e83100b0 adrp     x8, #0x7e1000
001A4654 08011891 add      x8, x8, #0x600
001A4658 130140f9 ldr      x19, [x8]
001A465C c8469352 mov      w8, #0x9a36
001A4660 08686838 ldrb     w8, [x0, x8]
001A4664 28190035 cbnz     w8, #0x1a4988
001A4668 743240f9 ldr      x20, [x19, #0x60]
001A466C b40000b4 cbz      x20, #0x1a4680
001A4670 e00314aa mov      x0, x20
001A4674 088c44f8 ldr      x8, [x0, #0x48]!
001A4678 080940f9 ldr      x8, [x8, #0x10]
001A467C 00013fd6 blr      x8
001A4680 a8630091 add      x8, x29, #0x18
001A4684 87ef0194 bl       #0x2204a0
001A4688 955e40f9 ldr      x21, [x20, #0xb8]
001A468C b50000b4 cbz      x21, #0x1a46a0
001A4690 e00315aa mov      x0, x21
001A4694 088c44f8 ldr      x8, [x0, #0x48]!
001A4698 080940f9 ldr      x8, [x8, #0x10]
001A469C 00013fd6 blr      x8
001A46A0 965a40f9 ldr      x22, [x20, #0xb0]
001A46A4 b60000b4 cbz      x22, #0x1a46b8
001A46A8 e00316aa mov      x0, x22
001A46AC 088c44f8 ldr      x8, [x0, #0x48]!
001A46B0 080940f9 ldr      x8, [x8, #0x10]
001A46B4 00013fd6 blr      x8
001A46B8 c82f00f0 adrp     x8, #0x79f000
001A46BC e00315aa mov      x0, x21
001A46C0 08ed41f9 ldr      x8, [x8, #0x3d8]
001A46C4 080140f9 ldr      x8, [x8]
001A46C8 175541f9 ldr      x23, [x8, #0x2a8]
001A46CC 01faff97 bl       #0x1a2ed0
001A46D0 a80f40f9 ldr      x8, [x29, #0x18]
001A46D4 89fb8152 mov      w9, #0xfdc
001A46D8 090ea072 movk     w9, #0x70, lsl #16
001A46DC 1a6969b8 ldr      w26, [x8, x9]
001A46E0 5f070071 cmp      w26, #1
001A46E4 8b060054 b.lt     #0x1a47b4
001A46E8 f8031f2a mov      w24, wzr
001A46EC 04000014 b        #0x1a46fc
001A46F0 18070011 add      w24, w24, #1
001A46F4 1f031a6b cmp      w24, w26
001A46F8 e0050054 b.eq     #0x1a47b4
001A46FC f9031f2a mov      w25, wzr
001A4700 04000014 b        #0x1a4710
001A4704 39070011 add      w25, w25, #1
001A4708 3f7b0071 cmp      w25, #0x1e
001A470C 20ffff54 b.eq     #0x1a46f0
001A4710 a00f40f9 ldr      x0, [x29, #0x18]
001A4714 a82300d1 sub      x8, x29, #8
001A4718 e103182a mov      w1, w24
001A471C e203192a mov      w2, w25
001A4720 e30317aa mov      x3, x23
001A4724 496f0194 bl       #0x200448
001A4728 a0835ff8 ldur     x0, [x29, #-8]
001A472C 97870194 bl       #0x206588
001A4730 60030037 tbnz     w0, #0, #0x1a479c
001A4734 a0835ff8 ldur     x0, [x29, #-8]
001A4738 a0031ff8 stur     x0, [x29, #-0x10]
001A473C 800000b4 cbz      x0, #0x1a474c
001A4740 088c44f8 ldr      x8, [x0, #0x48]!
001A4744 080940f9 ldr      x8, [x8, #0x10]
001A4748 00013fd6 blr      x8
001A474C a14300d1 sub      x1, x29, #0x10
001A4750 e00315aa mov      x0, x21
001A4754 e20317aa mov      x2, x23
001A4758 e303182a mov      w3, w24
001A475C e403192a mov      w4, w25
001A4760 57fbff97 bl       #0x1a34bc
001A4764 a0035ff8 ldur     x0, [x29, #-0x10]
001A4768 a00000b4 cbz      x0, #0x1a477c
001A476C 088c44f8 ldr      x8, [x0, #0x48]!
001A4770 080d40f9 ldr      x8, [x8, #0x18]
001A4774 00013fd6 blr      x8
001A4778 bf031ff8 stur     xzr, [x29, #-0x10]
001A477C a0835ff8 ldur     x0, [x29, #-8]
001A4780 028f0194 bl       #0x208388
001A4784 c0000036 tbz      w0, #0, #0x1a479c
001A4788 e00315aa mov      x0, x21
001A478C e103182a mov      w1, w24
001A4790 e203192a mov      w2, w25
001A4794 23008052 mov      w3, #1
001A4798 0cfdff97 bl       #0x1a3bc8
001A479C a0835ff8 ldur     x0, [x29, #-8]
001A47A0 20fbffb4 cbz      x0, #0x1a4704
001A47A4 088c44f8 ldr      x8, [x0, #0x48]!
001A47A8 080d40f9 ldr      x8, [x8, #0x18]
001A47AC 00013fd6 blr      x8
001A47B0 d5ffff17 b        #0x1a4704
001A47B4 01058052 mov      w1, #0x28
001A47B8 e00316aa mov      x0, x22
001A47BC 1ab49952 mov      w26, #0xcda0
001A47C0 fa00a072 movk     w26, #7, lsl #16
001A47C4 8ef9ff97 bl       #0x1a2dfc
001A47C8 a82300d1 sub      x8, x29, #8
001A47CC 35ef0194 bl       #0x2204a0
001A47D0 f7031faa mov      x23, xzr
001A47D4 fb031aaa mov      x27, x26
001A47D8 06000014 b        #0x1a47f0
001A47DC 1f2003d5 nop      
001A47E0 f7060091 add      x23, x23, #1
001A47E4 7bc30091 add      x27, x27, #0x30
001A47E8 ff1a00f1 cmp      x23, #6
001A47EC 60050054 b.eq     #0x1a4898
001A47F0 e8630091 add      x8, sp, #0x18
001A47F4 e00313aa mov      x0, x19
001A47F8 fbe7ff97 bl       #0x19e7e4
001A47FC e00f40f9 ldr      x0, [sp, #0x18]
001A4800 e103172a mov      w1, w23
001A4804 17f9ff97 bl       #0x1a2c60
001A4808 f903002a mov      w25, w0
001A480C e00f40f9 ldr      x0, [sp, #0x18]
001A4810 800000b4 cbz      x0, #0x1a4820
001A4814 088c44f8 ldr      x8, [x0, #0x48]!
001A4818 080d40f9 ldr      x8, [x8, #0x18]
001A481C 00013fd6 blr      x8
001A4820 19feff34 cbz      w25, #0x1a47e0
001A4824 f8031faa mov      x24, xzr
001A4828 f903192a mov      w25, w25
001A482C 04000014 b        #0x1a483c
001A4830 18070091 add      x24, x24, #1
001A4834 3f0318eb cmp      x25, x24
001A4838 40fdff54 b.eq     #0x1a47e0
001A483C a1f40194 bl       #0x221ac0
001A4840 08001b8b add      x8, x0, x27
001A4844 a0835ff8 ldur     x0, [x29, #-8]
001A4848 e1630091 add      x1, sp, #0x18
001A484C 087978f8 ldr      x8, [x8, x24, lsl #3]
001A4850 e2530091 add      x2, sp, #0x14
001A4854 e3430091 add      x3, sp, #0x10
001A4858 ff2301a9 stp      xzr, x8, [sp, #0x10]
001A485C 1f7d0194 bl       #0x203cd8
001A4860 e8230091 add      x8, sp, #8
001A4864 e00313aa mov      x0, x19
001A4868 dfe7ff97 bl       #0x19e7e4
001A486C e00740f9 ldr      x0, [sp, #8]
001A4870 e103172a mov      w1, w23
001A4874 e203182a mov      w2, w24
001A4878 e40f4229 ldp      w4, w3, [sp, #0x10]
001A487C 0ef9ff97 bl       #0x1a2cb4
001A4880 e00740f9 ldr      x0, [sp, #8]
001A4884 60fdffb4 cbz      x0, #0x1a4830
001A4888 088c44f8 ldr      x8, [x0, #0x48]!
001A488C 080d40f9 ldr      x8, [x8, #0x18]
001A4890 00013fd6 blr      x8
001A4894 e7ffff17 b        #0x1a4830
001A4898 e8630091 add      x8, sp, #0x18
001A489C e00313aa mov      x0, x19
001A48A0 01e8ff97 bl       #0x19e8a4
001A48A4 e00f40f9 ldr      x0, [sp, #0x18]
001A48A8 27feff97 bl       #0x1a4144
001A48AC f7031faa mov      x23, xzr
001A48B0 58a30491 add      x24, x26, #0x128
001A48B4 19008012 mov      w25, #-1
001A48B8 06000014 b        #0x1a48d0
001A48BC 1f2003d5 nop      
001A48C0 f7060091 add      x23, x23, #1
001A48C4 18230091 add      x24, x24, #8
001A48C8 ff8e01f1 cmp      x23, #0x63
001A48CC 60020054 b.eq     #0x1a4918
001A48D0 7cf40194 bl       #0x221ac0
001A48D4 0100188b add      x1, x0, x24
001A48D8 280040f9 ldr      x8, [x1]
001A48DC 28ffffb4 cbz      x8, #0x1a48c0
001A48E0 a0835ff8 ldur     x0, [x29, #-8]
001A48E4 e2230091 add      x2, sp, #8
001A48E8 e3530091 add      x3, sp, #0x14
001A48EC f90b00b9 str      w25, [sp, #8]
001A48F0 f91700b9 str      w25, [sp, #0x14]
001A48F4 f97c0194 bl       #0x203cd8
001A48F8 e20b40b9 ldr      w2, [sp, #8]
001A48FC 22feff37 tbnz     w2, #0x1f, #0x1a48c0
001A4900 e31740b9 ldr      w3, [sp, #0x14]
001A4904 e3fdff37 tbnz     w3, #0x1f, #0x1a48c0
001A4908 e00f40f9 ldr      x0, [sp, #0x18]
001A490C e103172a mov      w1, w23
001A4910 07feff97 bl       #0x1a412c
001A4914 ebffff17 b        #0x1a48c0
001A4918 e00f40f9 ldr      x0, [sp, #0x18]
001A491C 800000b4 cbz      x0, #0x1a492c
001A4920 088c44f8 ldr      x8, [x0, #0x48]!
001A4924 080d40f9 ldr      x8, [x8, #0x18]
001A4928 00013fd6 blr      x8
001A492C a0835ff8 ldur     x0, [x29, #-8]
001A4930 800000b4 cbz      x0, #0x1a4940
001A4934 088c44f8 ldr      x8, [x0, #0x48]!
001A4938 080d40f9 ldr      x8, [x8, #0x18]
001A493C 00013fd6 blr      x8
001A4940 c88e44f8 ldr      x8, [x22, #0x48]!
001A4944 e00316aa mov      x0, x22
001A4948 080d40f9 ldr      x8, [x8, #0x18]
001A494C 00013fd6 blr      x8
001A4950 a88e44f8 ldr      x8, [x21, #0x48]!
001A4954 e00315aa mov      x0, x21
001A4958 080d40f9 ldr      x8, [x8, #0x18]
001A495C 00013fd6 blr      x8
001A4960 a00f40f9 ldr      x0, [x29, #0x18]
001A4964 800000b4 cbz      x0, #0x1a4974
001A4968 088c44f8 ldr      x8, [x0, #0x48]!
001A496C 080d40f9 ldr      x8, [x8, #0x18]
001A4970 00013fd6 blr      x8
001A4974 b40000b4 cbz      x20, #0x1a4988
001A4978 888e44f8 ldr      x8, [x20, #0x48]!
001A497C e00314aa mov      x0, x20
001A4980 080d40f9 ldr      x8, [x8, #0x18]
001A4984 00013fd6 blr      x8
001A4988 e00313aa mov      x0, x19
001A498C 90e6ff97 bl       #0x19e3cc
001A4990 e00313aa mov      x0, x19
001A4994 01e7ff97 bl       #0x19e598
001A4998 00010037 tbnz     w0, #0, #0x1a49b8
001A499C 14488852 mov      w20, #0x4240
001A49A0 f401a072 movk     w20, #0xf, lsl #16
001A49A4 e00314aa mov      x0, x20
001A49A8 6a461194 bl       #0x5f6350
001A49AC e00313aa mov      x0, x19
001A49B0 fae6ff97 bl       #0x19e598
001A49B4 80ff0736 tbz      w0, #0, #0x1a49a4
001A49B8 08118052 mov      w8, #0x88
001A49BC 0808a072 movk     w8, #0x40, lsl #16
001A49C0 fb2340f9 ldr      x27, [sp, #0x40]
001A49C4 686a68b8 ldr      w8, [x19, x8]
001A49C8 1f010071 cmp      w8, #0
001A49CC f44f48a9 ldp      x20, x19, [sp, #0x80]
001A49D0 e0179f1a cset     w0, eq
001A49D4 f65747a9 ldp      x22, x21, [sp, #0x70]
001A49D8 f85f46a9 ldp      x24, x23, [sp, #0x60]
001A49DC fa6745a9 ldp      x26, x25, [sp, #0x50]
001A49E0 fd7b43a9 ldp      x29, x30, [sp, #0x30]
001A49E4 ff430291 add      sp, sp, #0x90
001A49E8 c0035fd6 ret      
~~~
### 0x1bb8e4 (316 slots)
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
### 0x1c6560 (138 slots)
~~~asm
001C6560 ffc301d1 sub      sp, sp, #0x70
001C6564 fd7b02a9 stp      x29, x30, [sp, #0x20]
001C6568 f91b00f9 str      x25, [sp, #0x30]
001C656C f85f04a9 stp      x24, x23, [sp, #0x40]
001C6570 f65705a9 stp      x22, x21, [sp, #0x50]
001C6574 f44f06a9 stp      x20, x19, [sp, #0x60]
001C6578 fd830091 add      x29, sp, #0x20
001C657C c82e00b0 adrp     x8, #0x79f000
001C6580 f40302aa mov      x20, x2
001C6584 088942f9 ldr      x8, [x8, #0x510]
001C6588 130140f9 ldr      x19, [x8]
001C658C a00c0037 tbnz     w0, #0, #0x1c6720
001C6590 a8630091 add      x8, x29, #0x18
001C6594 c3670194 bl       #0x2204a0
001C6598 a82300d1 sub      x8, x29, #8
001C659C e00313aa mov      x0, x19
001C65A0 8baeff97 bl       #0x1b1fcc
001C65A4 a80f40f9 ldr      x8, [x29, #0x18]
001C65A8 89fb8152 mov      w9, #0xfdc
001C65AC 090ea072 movk     w9, #0x70, lsl #16
001C65B0 196969b8 ldr      w25, [x8, x9]
001C65B4 3f070071 cmp      w25, #1
001C65B8 ab080054 b.lt     #0x1c66cc
001C65BC c82e00b0 adrp     x8, #0x79f000
001C65C0 f5031f2a mov      w21, wzr
001C65C4 08ed41f9 ldr      x8, [x8, #0x3d8]
001C65C8 080140f9 ldr      x8, [x8]
001C65CC 165541f9 ldr      x22, [x8, #0x2a8]
001C65D0 04000014 b        #0x1c65e0
001C65D4 b5060011 add      w21, w21, #1
001C65D8 bf02196b cmp      w21, w25
001C65DC 80070054 b.eq     #0x1c66cc
001C65E0 f7031f2a mov      w23, wzr
001C65E4 06000014 b        #0x1c65fc
001C65E8 1f2003d5 nop      
001C65EC 1f2003d5 nop      
001C65F0 f7060011 add      w23, w23, #1
001C65F4 ff7a0071 cmp      w23, #0x1e
001C65F8 e0feff54 b.eq     #0x1c65d4
001C65FC a0835ff8 ldur     x0, [x29, #-8]
001C6600 e103152a mov      w1, w21
001C6604 e203172a mov      w2, w23
001C6608 e30316aa mov      x3, x22
001C660C 85d4ff97 bl       #0x1bb820
001C6610 a00f40f9 ldr      x0, [x29, #0x18]
001C6614 e8430091 add      x8, sp, #0x10
001C6618 e103152a mov      w1, w21
001C661C e203172a mov      w2, w23
001C6620 e30316aa mov      x3, x22
001C6624 89e70094 bl       #0x200448
001C6628 e00b40f9 ldr      x0, [sp, #0x10]
001C662C d7ff0094 bl       #0x206588
001C6630 20040037 tbnz     w0, #0, #0x1c66b4
001C6634 e00b40f9 ldr      x0, [sp, #0x10]
001C6638 b8835ff8 ldur     x24, [x29, #-8]
001C663C 62010194 bl       #0x206bc4
001C6640 e00700f9 str      x0, [sp, #8]
001C6644 800000b4 cbz      x0, #0x1c6654
001C6648 088c44f8 ldr      x8, [x0, #0x48]!
001C664C 080940f9 ldr      x8, [x8, #0x10]
001C6650 00013fd6 blr      x8
001C6654 e1230091 add      x1, sp, #8
001C6658 e00318aa mov      x0, x24
001C665C e20316aa mov      x2, x22
001C6660 e303152a mov      w3, w21
001C6664 e403172a mov      w4, w23
001C6668 9dd3ff97 bl       #0x1bb4dc
001C666C e00740f9 ldr      x0, [sp, #8]
001C6670 a00000b4 cbz      x0, #0x1c6684
001C6674 088c44f8 ldr      x8, [x0, #0x48]!
001C6678 080d40f9 ldr      x8, [x8, #0x18]
001C667C 00013fd6 blr      x8
001C6680 ff0700f9 str      xzr, [sp, #8]
001C6684 a00f40f9 ldr      x0, [x29, #0x18]
001C6688 e103152a mov      w1, w21
001C668C e203172a mov      w2, w23
001C6690 81f50094 bl       #0x203c94
001C6694 00010036 tbz      w0, #0, #0x1c66b4
001C6698 e80b40f9 ldr      x8, [sp, #0x10]
001C669C e103152a mov      w1, w21
001C66A0 e203172a mov      w2, w23
001C66A4 a0835ff8 ldur     x0, [x29, #-8]
001C66A8 e40316aa mov      x4, x22
001C66AC 03810191 add      x3, x8, #0x60
001C66B0 8dd4ff97 bl       #0x1bb8e4
001C66B4 e00b40f9 ldr      x0, [sp, #0x10]
001C66B8 c0f9ffb4 cbz      x0, #0x1c65f0
001C66BC 088c44f8 ldr      x8, [x0, #0x48]!
001C66C0 080d40f9 ldr      x8, [x8, #0x18]
001C66C4 00013fd6 blr      x8
001C66C8 caffff17 b        #0x1c65f0
001C66CC e8430091 add      x8, sp, #0x10
001C66D0 e00313aa mov      x0, x19
001C66D4 45aeff97 bl       #0x1b1fe8
001C66D8 e00b40f9 ldr      x0, [sp, #0x10]
001C66DC 01048052 mov      w1, #0x20
001C66E0 e3ddff97 bl       #0x1bde6c
001C66E4 e00b40f9 ldr      x0, [sp, #0x10]
001C66E8 800000b4 cbz      x0, #0x1c66f8
001C66EC 088c44f8 ldr      x8, [x0, #0x48]!
001C66F0 080d40f9 ldr      x8, [x8, #0x18]
001C66F4 00013fd6 blr      x8
001C66F8 a0835ff8 ldur     x0, [x29, #-8]
001C66FC 800000b4 cbz      x0, #0x1c670c
001C6700 088c44f8 ldr      x8, [x0, #0x48]!
001C6704 080d40f9 ldr      x8, [x8, #0x18]
001C6708 00013fd6 blr      x8
001C670C a00f40f9 ldr      x0, [x29, #0x18]
001C6710 800000b4 cbz      x0, #0x1c6720
001C6714 088c44f8 ldr      x8, [x0, #0x48]!
001C6718 080d40f9 ldr      x8, [x8, #0x18]
001C671C 00013fd6 blr      x8
001C6720 a8630091 add      x8, x29, #0x18
001C6724 e00313aa mov      x0, x19
001C6728 37aeff97 bl       #0x1b2004
001C672C b50f40f9 ldr      x21, [x29, #0x18]
001C6730 02128052 mov      w2, #0x90
001C6734 e10314aa mov      x1, x20
001C6738 a0820191 add      x0, x21, #0x60
001C673C a9bf1094 bl       #0x5f65e0
001C6740 a88e44f8 ldr      x8, [x21, #0x48]!
001C6744 e00315aa mov      x0, x21
001C6748 080d40f9 ldr      x8, [x8, #0x18]
001C674C 00013fd6 blr      x8
001C6750 e00313aa mov      x0, x19
001C6754 61008052 mov      w1, #3
001C6758 95acff97 bl       #0x1b19ac
001C675C 80000036 tbz      w0, #0, #0x1c676c
001C6760 e00313aa mov      x0, x19
001C6764 61008052 mov      w1, #3
001C6768 07adff97 bl       #0x1b1b84
001C676C f44f46a9 ldp      x20, x19, [sp, #0x60]
001C6770 f91b40f9 ldr      x25, [sp, #0x30]
001C6774 f65745a9 ldp      x22, x21, [sp, #0x50]
001C6778 f85f44a9 ldp      x24, x23, [sp, #0x40]
001C677C fd7b42a9 ldp      x29, x30, [sp, #0x20]
001C6780 ffc30191 add      sp, sp, #0x70
001C6784 c0035fd6 ret      
~~~
### 0x1cae6c (45 slots)
~~~asm
001CAE6C ff0301d1 sub      sp, sp, #0x40
001CAE70 fd7b02a9 stp      x29, x30, [sp, #0x20]
001CAE74 f44f03a9 stp      x20, x19, [sp, #0x30]
001CAE78 fd830091 add      x29, sp, #0x20
001CAE7C 20008052 mov      w0, #1
001CAE80 f40301aa mov      x20, x1
001CAE84 93feff97 bl       #0x1ca8d0
001CAE88 37970094 bl       #0x1f0b64
001CAE8C f30300aa mov      x19, x0
001CAE90 f4970094 bl       #0x1f0e60
001CAE94 00800191 add      x0, x0, #0x60
001CAE98 02128052 mov      w2, #0x90
001CAE9C e10314aa mov      x1, x20
001CAEA0 d0ad1094 bl       #0x5f65e0
001CAEA4 c02e0090 adrp     x0, #0x7a2000
001CAEA8 e8030091 mov      x8, sp
001CAEAC 006844f9 ldr      x0, [x0, #0x8d0]
001CAEB0 f3780c94 bl       #0x4e927c
001CAEB4 e1030091 mov      x1, sp
001CAEB8 e00313aa mov      x0, x19
001CAEBC e4bc0094 bl       #0x1fa24c
001CAEC0 f403002a mov      w20, w0
001CAEC4 e00f40f9 ldr      x0, [sp, #0x18]
001CAEC8 800000b4 cbz      x0, #0x1caed8
001CAECC 088c44f8 ldr      x8, [x0, #0x48]!
001CAED0 080d40f9 ldr      x8, [x8, #0x18]
001CAED4 00013fd6 blr      x8
001CAED8 d4010036 tbz      w20, #0, #0x1caf10
001CAEDC c02e0090 adrp     x0, #0x7a2000
001CAEE0 e8030091 mov      x8, sp
001CAEE4 006844f9 ldr      x0, [x0, #0x8d0]
001CAEE8 e5780c94 bl       #0x4e927c
001CAEEC e1030091 mov      x1, sp
001CAEF0 e00313aa mov      x0, x19
001CAEF4 e2031f2a mov      w2, wzr
001CAEF8 38bd0094 bl       #0x1fa3d8
001CAEFC e00f40f9 ldr      x0, [sp, #0x18]
001CAF00 800000b4 cbz      x0, #0x1caf10
001CAF04 088c44f8 ldr      x8, [x0, #0x48]!
001CAF08 080d40f9 ldr      x8, [x8, #0x18]
001CAF0C 00013fd6 blr      x8
001CAF10 f44f43a9 ldp      x20, x19, [sp, #0x30]
001CAF14 fd7b42a9 ldp      x29, x30, [sp, #0x20]
001CAF18 ff030191 add      sp, sp, #0x40
001CAF1C c0035fd6 ret      
~~~
### 0x200180 (123 slots)
~~~asm
00200180 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
00200184 fc6f01a9 stp      x28, x27, [sp, #0x10]
00200188 fa6702a9 stp      x26, x25, [sp, #0x20]
0020018C f85f03a9 stp      x24, x23, [sp, #0x30]
00200190 f65704a9 stp      x22, x21, [sp, #0x40]
00200194 f44f05a9 stp      x20, x19, [sp, #0x50]
00200198 fd030091 mov      x29, sp
0020019C 48d03bd5 mrs      x8, tpidr_el0
002001A0 16c97392 and      x22, x8, #0xffffffffffffe000
002001A4 c84e40f9 ldr      x8, [x22, #0x98]
002001A8 1f4100f1 cmp      x8, #0x10
002001AC e00d0054 b.eq     #0x200368
002001B0 150440f9 ldr      x21, [x0, #8]
002001B4 c80e088b add      x8, x22, x8, lsl #3
002001B8 f30300aa mov      x19, x0
002001BC 01168052 mov      w1, #0xb0
002001C0 02018052 mov      w2, #8
002001C4 150d00f9 str      x21, [x8, #0x18]
002001C8 e00315aa mov      x0, x21
002001CC c84e40f9 ldr      x8, [x22, #0x98]
002001D0 08050091 add      x8, x8, #1
002001D4 c84e00f9 str      x8, [x22, #0x98]
002001D8 a80240f9 ldr      x8, [x21]
002001DC 080940f9 ldr      x8, [x8, #0x10]
002001E0 00013fd6 blr      x8
002001E4 f40300aa mov      x20, x0
002001E8 a00000b5 cbnz     x0, #0x2001fc
002001EC a80240f9 ldr      x8, [x21]
002001F0 e00315aa mov      x0, x21
002001F4 085d40f9 ldr      x8, [x8, #0xb8]
002001F8 00013fd6 blr      x8
002001FC e00314aa mov      x0, x20
00200200 e10315aa mov      x1, x21
00200204 e2031f2a mov      w2, wzr
00200208 e3031f2a mov      w3, wzr
0020020C e4031faa mov      x4, xzr
00200210 39180094 bl       #0x2062f4
00200214 08168052 mov      w8, #0xb0
00200218 09018052 mov      w9, #8
0020021C 95d200a9 stp      x21, x20, [x20, #8]
00200220 f50314aa mov      x21, x20
00200224 88a601a9 stp      x8, x9, [x20, #0x18]
00200228 c84e40f9 ldr      x8, [x22, #0x98]
0020022C 080500d1 sub      x8, x8, #1
00200230 c84e00f9 str      x8, [x22, #0x98]
00200234 a88e44f8 ldr      x8, [x21, #0x48]!
00200238 e00315aa mov      x0, x21
0020023C 080940f9 ldr      x8, [x8, #0x10]
00200240 00013fd6 blr      x8
00200244 f6031faa mov      x22, xzr
00200248 b7620091 add      x23, x21, #0x18
0020024C 78c20b91 add      x24, x19, #0x2f0
00200250 79008052 mov      w25, #3
00200254 1af48b52 mov      w26, #0x5fa0
00200258 1f2003d5 nop      
0020025C 1f2003d5 nop      
00200260 db038052 mov      w27, #0x1e
00200264 fc0318aa mov      x28, x24
00200268 1f2003d5 nop      
0020026C 1f2003d5 nop      
00200270 882640f9 ldr      x8, [x20, #0x48]
00200274 e00315aa mov      x0, x21
00200278 080940f9 ldr      x8, [x8, #0x10]
0020027C 00013fd6 blr      x8
00200280 812e40f9 ldr      x1, [x20, #0x58]
00200284 80630ad1 sub      x0, x28, #0x298
00200288 78ef0b94 bl       #0x4fc068
0020028C e92240a9 ldp      x9, x8, [x23]
00200290 e00314aa mov      x0, x20
00200294 892300a9 stp      x9, x8, [x28]
00200298 e82642a9 ldp      x8, x9, [x23, #0x20]
0020029C eb2a41a9 ldp      x11, x10, [x23, #0x10]
002002A0 882702a9 stp      x8, x9, [x28, #0x20]
002002A4 8b2b01a9 stp      x11, x10, [x28, #0x10]
002002A8 e82644a9 ldp      x8, x9, [x23, #0x40]
002002AC eb2a43a9 ldp      x11, x10, [x23, #0x30]
002002B0 882704a9 stp      x8, x9, [x28, #0x40]
002002B4 8b2b03a9 stp      x11, x10, [x28, #0x30]
002002B8 d0180094 bl       #0x2065f8
002002BC 805300b9 str      w0, [x28, #0x50]
002002C0 802e40f9 ldr      x0, [x20, #0x58]
002002C4 50dc0c94 bl       #0x537404
002002C8 802f00f9 str      x0, [x28, #0x58]
002002CC e00315aa mov      x0, x21
002002D0 882640f9 ldr      x8, [x20, #0x48]
002002D4 080d40f9 ldr      x8, [x8, #0x18]
002002D8 00013fd6 blr      x8
002002DC 9f7f04a9 stp      xzr, xzr, [x28, #0x40]
002002E0 7b0700f1 subs     x27, x27, #1
002002E4 9f830139 strb     wzr, [x28, #0x60]
002002E8 9f4306f8 stur     xzr, [x28, #0x64]
002002EC 9fc306f8 stur     xzr, [x28, #0x6c]
002002F0 9f4307f8 stur     xzr, [x28, #0x74]
002002F4 9fc307f8 stur     xzr, [x28, #0x7c]
002002F8 9f4308f8 stur     xzr, [x28, #0x84]
002002FC 9fc308f8 stur     xzr, [x28, #0x8c]
00200300 9f9700b9 str      wzr, [x28, #0x94]
00200304 997f03a9 stp      x25, xzr, [x28, #0x30]
00200308 9f7f02a9 stp      xzr, xzr, [x28, #0x20]
0020030C 9f7f01a9 stp      xzr, xzr, [x28, #0x10]
00200310 9f7f00a9 stp      xzr, xzr, [x28]
00200314 9cc30c91 add      x28, x28, #0x330
00200318 c1faff54 b.ne     #0x200270
0020031C d6060091 add      x22, x22, #1
00200320 18031a8b add      x24, x24, x26
00200324 dfb204f1 cmp      x22, #0x12c
00200328 c1f9ff54 b.ne     #0x200260
0020032C 68025c91 add      x8, x19, #0x700, lsl #12
00200330 02058452 mov      w2, #0x2028
00200334 e1031f2a mov      w1, wzr
00200338 00813f91 add      x0, x8, #0xfe0
0020033C 85d70f94 bl       #0x5f6150
00200340 a80240f9 ldr      x8, [x21]
00200344 e00315aa mov      x0, x21
00200348 010d40f9 ldr      x1, [x8, #0x18]
0020034C f44f45a9 ldp      x20, x19, [sp, #0x50]
00200350 f65744a9 ldp      x22, x21, [sp, #0x40]
00200354 f85f43a9 ldp      x24, x23, [sp, #0x30]
00200358 fa6742a9 ldp      x26, x25, [sp, #0x20]
0020035C fc6f41a9 ldp      x28, x27, [sp, #0x10]
00200360 fd7bc6a8 ldp      x29, x30, [sp], #0x60
00200364 20001fd6 br       x1
00200368 2a0af897 bl       #0x2c10
~~~
### 0x201ddc (75 slots)
~~~asm
00201DDC ff8301d1 sub      sp, sp, #0x60
00201DE0 fd7b02a9 stp      x29, x30, [sp, #0x20]
00201DE4 f71b00f9 str      x23, [sp, #0x30]
00201DE8 f65704a9 stp      x22, x21, [sp, #0x40]
00201DEC f44f05a9 stp      x20, x19, [sp, #0x50]
00201DF0 fd830091 add      x29, sp, #0x20
00201DF4 f30301aa mov      x19, x1
00201DF8 f60300aa mov      x22, x0
00201DFC a20f00f9 str      x2, [x29, #0x18]
00201E00 a82300d1 sub      x8, x29, #8
00201E04 a1630091 add      x1, x29, #0x18
00201E08 e00302aa mov      x0, x2
00201E0C f403042a mov      w20, w4
00201E10 f503032a mov      w21, w3
00201E14 2685fe97 bl       #0x1a32ac
00201E18 a00f40f9 ldr      x0, [x29, #0x18]
00201E1C e8430091 add      x8, sp, #0x10
00201E20 a12300d1 sub      x1, x29, #8
00201E24 6985fe97 bl       #0x1a33c8
00201E28 730240f9 ldr      x19, [x19]
00201E2C f30700f9 str      x19, [sp, #8]
00201E30 b30000b4 cbz      x19, #0x201e44
00201E34 e00313aa mov      x0, x19
00201E38 088c44f8 ldr      x8, [x0, #0x48]!
00201E3C 080940f9 ldr      x8, [x8, #0x10]
00201E40 00013fd6 blr      x8
00201E44 f70b40f9 ldr      x23, [sp, #0x10]
00201E48 f70300f9 str      x23, [sp]
00201E4C d70400b4 cbz      x23, #0x201ee4
00201E50 e88e44f8 ldr      x8, [x23, #0x48]!
00201E54 e00317aa mov      x0, x23
00201E58 080940f9 ldr      x8, [x8, #0x10]
00201E5C 00013fd6 blr      x8
00201E60 e1230091 add      x1, sp, #8
00201E64 e2030091 mov      x2, sp
00201E68 e00316aa mov      x0, x22
00201E6C e303152a mov      w3, w21
00201E70 e403142a mov      w4, w20
00201E74 25ffff97 bl       #0x201b08
00201E78 e80240f9 ldr      x8, [x23]
00201E7C f403002a mov      w20, w0
00201E80 e00317aa mov      x0, x23
00201E84 080d40f9 ldr      x8, [x8, #0x18]
00201E88 00013fd6 blr      x8
00201E8C b30000b4 cbz      x19, #0x201ea0
00201E90 688e44f8 ldr      x8, [x19, #0x48]!
00201E94 e00313aa mov      x0, x19
00201E98 080d40f9 ldr      x8, [x8, #0x18]
00201E9C 00013fd6 blr      x8
00201EA0 e00b40f9 ldr      x0, [sp, #0x10]
00201EA4 800000b4 cbz      x0, #0x201eb4
00201EA8 088c44f8 ldr      x8, [x0, #0x48]!
00201EAC 080d40f9 ldr      x8, [x8, #0x18]
00201EB0 00013fd6 blr      x8
00201EB4 a0835ff8 ldur     x0, [x29, #-8]
00201EB8 800000b4 cbz      x0, #0x201ec8
00201EBC 088c44f8 ldr      x8, [x0, #0x48]!
00201EC0 080d40f9 ldr      x8, [x8, #0x18]
00201EC4 00013fd6 blr      x8
00201EC8 80020012 and      w0, w20, #1
00201ECC f44f45a9 ldp      x20, x19, [sp, #0x50]
00201ED0 f65744a9 ldp      x22, x21, [sp, #0x40]
00201ED4 f71b40f9 ldr      x23, [sp, #0x30]
00201ED8 fd7b42a9 ldp      x29, x30, [sp, #0x20]
00201EDC ff830191 add      sp, sp, #0x60
00201EE0 c0035fd6 ret      
00201EE4 e1230091 add      x1, sp, #8
00201EE8 e2030091 mov      x2, sp
00201EEC e00316aa mov      x0, x22
00201EF0 e303152a mov      w3, w21
00201EF4 e403142a mov      w4, w20
00201EF8 04ffff97 bl       #0x201b08
00201EFC f403002a mov      w20, w0
00201F00 93fcffb5 cbnz     x19, #0x201e90
00201F04 e7ffff17 b        #0x201ea0
~~~
### 0x203c94 (17 slots)
~~~asm
00203C94 e80300aa mov      x8, x0
00203C98 e0031f2a mov      w0, wzr
00203C9C 5f740071 cmp      w2, #0x1d
00203CA0 a8010054 b.hi     #0x203cd4
00203CA4 89fb8152 mov      w9, #0xfdc
00203CA8 090ea072 movk     w9, #0x70, lsl #16
00203CAC 096969b8 ldr      w9, [x8, x9]
00203CB0 3f01016b cmp      w9, w1
00203CB4 09010054 b.ls     #0x203cd4
00203CB8 09f48b52 mov      w9, #0x5fa0
00203CBC 2820a99b umaddl   x8, w1, w9, x8
00203CC0 09668052 mov      w9, #0x330
00203CC4 4820a99b umaddl   x8, w2, w9, x8
00203CC8 08414d39 ldrb     w8, [x8, #0x350]
00203CCC 1f010071 cmp      w8, #0
00203CD0 e0079f1a cset     w0, ne
00203CD4 c0035fd6 ret      
~~~
### 0x204b90 (5 slots)
~~~asm
00204B90 e82e00b0 adrp     x8, #0x7e1000
00204B94 08e13591 add      x8, x8, #0xd78
00204B98 080140f9 ldr      x8, [x8]
00204B9C 00410191 add      x0, x8, #0x50
00204BA0 c0035fd6 ret      
~~~
### 0x205bd8 (13 slots)
~~~asm
00205BD8 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00205BDC f30b00f9 str      x19, [sp, #0x10]
00205BE0 fd030091 mov      x29, sp
00205BE4 08fc6491 add      x8, x0, #0x93f, lsl #12
00205BE8 13c10c91 add      x19, x8, #0x330
00205BEC b56f0094 bl       #0x221ac0
00205BF0 08f44191 add      x8, x0, #0x7d, lsl #12
00205BF4 e00313aa mov      x0, x19
00205BF8 f30b40f9 ldr      x19, [sp, #0x10]
00205BFC 01a10791 add      x1, x8, #0x1e8
00205C00 02468552 mov      w2, #0x2a30
00205C04 fd7bc2a8 ldp      x29, x30, [sp], #0x20
00205C08 76c20f14 b        #0x5f65e0
~~~
### 0x20ccf0 (4 slots)
~~~asm
0020CCF0 c82e00b0 adrp     x8, #0x7e5000
0020CCF4 08e11791 add      x8, x8, #0x5f8
0020CCF8 000140f9 ldr      x0, [x8]
0020CCFC 01000014 b        #0x20cd00
~~~
### 0x2116dc (110 slots)
~~~asm
002116DC 283c0012 and      w8, w1, #0xffff
002116E0 1fa50f71 cmp      w8, #0x3e9
002116E4 600d0054 b.eq     #0x211890
002116E8 ff4301d1 sub      sp, sp, #0x50
002116EC fd7b02a9 stp      x29, x30, [sp, #0x20]
002116F0 f51b00f9 str      x21, [sp, #0x30]
002116F4 f44f04a9 stp      x20, x19, [sp, #0x40]
002116F8 fd830091 add      x29, sp, #0x20
002116FC 09f39d52 mov      w9, #0xef98
00211700 e900a072 movk     w9, #7, lsl #16
00211704 096869f8 ldr      x9, [x0, x9]
00211708 29c54079 ldrh     w9, [x9, #0x62]
0021170C 3f01086b cmp      w9, w8
00211710 890b0054 b.ls     #0x211880
00211714 084c288b add      x8, x0, w8, uxtw #3
00211718 09f49d52 mov      w9, #0xefa0
0021171C e900a072 movk     w9, #7, lsl #16
00211720 146969f8 ldr      x20, [x8, x9]
00211724 f40a00b4 cbz      x20, #0x211880
00211728 f30314aa mov      x19, x20
0021172C 688e44f8 ldr      x8, [x19, #0x48]!
00211730 e00313aa mov      x0, x19
00211734 080940f9 ldr      x8, [x8, #0x10]
00211738 00013fd6 blr      x8
0021173C e00314aa mov      x0, x20
00211740 8d7e0c94 bl       #0x531174
00211744 60090037 tbnz     w0, #0, #0x211870
00211748 e8030091 mov      x8, sp
0021174C 95efff97 bl       #0x20d5a0
00211750 e80340f9 ldr      x8, [sp]
00211754 154540f9 ldr      x21, [x8, #0x88]
00211758 b50000b4 cbz      x21, #0x21176c
0021175C e00315aa mov      x0, x21
00211760 088c44f8 ldr      x8, [x0, #0x48]!
00211764 080940f9 ldr      x8, [x8, #0x10]
00211768 00013fd6 blr      x8
0021176C e00315aa mov      x0, x21
00211770 e10314aa mov      x1, x20
00211774 d0020094 bl       #0x2122b4
00211778 a88e44f8 ldr      x8, [x21, #0x48]!
0021177C e00315aa mov      x0, x21
00211780 080d40f9 ldr      x8, [x8, #0x18]
00211784 00013fd6 blr      x8
00211788 e00340f9 ldr      x0, [sp]
0021178C 800000b4 cbz      x0, #0x21179c
00211790 080c45f8 ldr      x8, [x0, #0x50]!
00211794 080d40f9 ldr      x8, [x8, #0x18]
00211798 00013fd6 blr      x8
0021179C e8030091 mov      x8, sp
002117A0 80efff97 bl       #0x20d5a0
002117A4 e80340f9 ldr      x8, [sp]
002117A8 154540f9 ldr      x21, [x8, #0x88]
002117AC b50000b4 cbz      x21, #0x2117c0
002117B0 e00315aa mov      x0, x21
002117B4 088c44f8 ldr      x8, [x0, #0x48]!
002117B8 080940f9 ldr      x8, [x8, #0x10]
002117BC 00013fd6 blr      x8
002117C0 e00315aa mov      x0, x21
002117C4 e10314aa mov      x1, x20
002117C8 4c050094 bl       #0x212cf8
002117CC a88e44f8 ldr      x8, [x21, #0x48]!
002117D0 e00315aa mov      x0, x21
002117D4 080d40f9 ldr      x8, [x8, #0x18]
002117D8 00013fd6 blr      x8
002117DC e00340f9 ldr      x0, [sp]
002117E0 800000b4 cbz      x0, #0x2117f0
002117E4 080c45f8 ldr      x8, [x0, #0x50]!
002117E8 080d40f9 ldr      x8, [x8, #0x18]
002117EC 00013fd6 blr      x8
002117F0 a8630091 add      x8, x29, #0x18
002117F4 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
002117F8 ff7f00a9 stp      xzr, xzr, [sp]
002117FC 69efff97 bl       #0x20d5a0
00211800 a00f40f9 ldr      x0, [x29, #0x18]
00211804 153c40f9 ldr      x21, [x0, #0x78]
00211808 f50000b4 cbz      x21, #0x211824
0021180C e00315aa mov      x0, x21
00211810 088c44f8 ldr      x8, [x0, #0x48]!
00211814 080940f9 ldr      x8, [x8, #0x10]
00211818 00013fd6 blr      x8
0021181C a00f40f9 ldr      x0, [x29, #0x18]
00211820 800000b4 cbz      x0, #0x211830
00211824 080c45f8 ldr      x8, [x0, #0x50]!
00211828 080d40f9 ldr      x8, [x8, #0x18]
0021182C 00013fd6 blr      x8
00211830 e1030091 mov      x1, sp
00211834 e00315aa mov      x0, x21
00211838 0ceaff97 bl       #0x20c068
0021183C e1030091 mov      x1, sp
00211840 e00314aa mov      x0, x20
00211844 3d880c94 bl       #0x533938
00211848 80000037 tbnz     w0, #0, #0x211858
0021184C e1030091 mov      x1, sp
00211850 e00314aa mov      x0, x20
00211854 54880c94 bl       #0x5339a4
00211858 e00314aa mov      x0, x20
0021185C dc7d0c94 bl       #0x530fcc
00211860 a88e44f8 ldr      x8, [x21, #0x48]!
00211864 e00315aa mov      x0, x21
00211868 080d40f9 ldr      x8, [x8, #0x18]
0021186C 00013fd6 blr      x8
00211870 680240f9 ldr      x8, [x19]
00211874 e00313aa mov      x0, x19
00211878 080d40f9 ldr      x8, [x8, #0x18]
0021187C 00013fd6 blr      x8
00211880 f44f44a9 ldp      x20, x19, [sp, #0x40]
00211884 f51b40f9 ldr      x21, [sp, #0x30]
00211888 fd7b42a9 ldp      x29, x30, [sp, #0x20]
0021188C ff430191 add      sp, sp, #0x50
00211890 c0035fd6 ret      
~~~
### 0x222470 (101 slots)
~~~asm
00222470 ff4301d1 sub      sp, sp, #0x50
00222474 fd7b01a9 stp      x29, x30, [sp, #0x10]
00222478 f71300f9 str      x23, [sp, #0x20]
0022247C f65703a9 stp      x22, x21, [sp, #0x30]
00222480 f44f04a9 stp      x20, x19, [sp, #0x40]
00222484 fd430091 add      x29, sp, #0x10
00222488 e82b00b0 adrp     x8, #0x79f000
0022248C 152c0090 adrp     x21, #0x7a2000
00222490 08ed41f9 ldr      x8, [x8, #0x3d8]
00222494 080140f9 ldr      x8, [x8]
00222498 b50245f9 ldr      x21, [x21, #0xa00]
0022249C 145541f9 ldr      x20, [x8, #0x2a8]
002224A0 a80240f9 ldr      x8, [x21]
002224A4 132940f9 ldr      x19, [x8, #0x50]
002224A8 d30000b4 cbz      x19, #0x2224c0
002224AC e00313aa mov      x0, x19
002224B0 088c44f8 ldr      x8, [x0, #0x48]!
002224B4 080940f9 ldr      x8, [x8, #0x10]
002224B8 00013fd6 blr      x8
002224BC a80240f9 ldr      x8, [x21]
002224C0 152d40f9 ldr      x21, [x8, #0x58]
002224C4 b50000b4 cbz      x21, #0x2224d8
002224C8 e00315aa mov      x0, x21
002224CC 088c44f8 ldr      x8, [x0, #0x48]!
002224D0 080940f9 ldr      x8, [x8, #0x10]
002224D4 00013fd6 blr      x8
002224D8 e00313aa mov      x0, x19
002224DC 2977ff97 bl       #0x200180
002224E0 f6031f2a mov      w22, wzr
002224E4 06000014 b        #0x2224fc
002224E8 1f2003d5 nop      
002224EC 1f2003d5 nop      
002224F0 d6060011 add      w22, w22, #1
002224F4 dfb20471 cmp      w22, #0x12c
002224F8 40060054 b.eq     #0x2225c0
002224FC f7031f2a mov      w23, wzr
00222500 04000014 b        #0x222510
00222504 f7060011 add      w23, w23, #1
00222508 ff7a0071 cmp      w23, #0x1e
0022250C 20ffff54 b.eq     #0x2224f0
00222510 a8630091 add      x8, x29, #0x18
00222514 e00315aa mov      x0, x21
00222518 e103162a mov      w1, w22
0022251C e203172a mov      w2, w23
00222520 e30314aa mov      x3, x20
00222524 c977ff97 bl       #0x200448
00222528 a00f40f9 ldr      x0, [x29, #0x18]
0022252C 1790ff97 bl       #0x206588
00222530 c0030037 tbnz     w0, #0, #0x2225a8
00222534 a00f40f9 ldr      x0, [x29, #0x18]
00222538 e00700f9 str      x0, [sp, #8]
0022253C 800000b4 cbz      x0, #0x22254c
00222540 088c44f8 ldr      x8, [x0, #0x48]!
00222544 080940f9 ldr      x8, [x8, #0x10]
00222548 00013fd6 blr      x8
0022254C e1230091 add      x1, sp, #8
00222550 e00313aa mov      x0, x19
00222554 e20314aa mov      x2, x20
00222558 e303162a mov      w3, w22
0022255C e403172a mov      w4, w23
00222560 1f7eff97 bl       #0x201ddc
00222564 e00740f9 ldr      x0, [sp, #8]
00222568 a00000b4 cbz      x0, #0x22257c
0022256C 088c44f8 ldr      x8, [x0, #0x48]!
00222570 080d40f9 ldr      x8, [x8, #0x18]
00222574 00013fd6 blr      x8
00222578 ff0700f9 str      xzr, [sp, #8]
0022257C e8030091 mov      x8, sp
00222580 e00313aa mov      x0, x19
00222584 e103162a mov      w1, w22
00222588 e203172a mov      w2, w23
0022258C e30314aa mov      x3, x20
00222590 ae77ff97 bl       #0x200448
00222594 e00340f9 ldr      x0, [sp]
00222598 800000b4 cbz      x0, #0x2225a8
0022259C 088c44f8 ldr      x8, [x0, #0x48]!
002225A0 080d40f9 ldr      x8, [x8, #0x18]
002225A4 00013fd6 blr      x8
002225A8 a00f40f9 ldr      x0, [x29, #0x18]
002225AC c0faffb4 cbz      x0, #0x222504
002225B0 088c44f8 ldr      x8, [x0, #0x48]!
002225B4 080d40f9 ldr      x8, [x8, #0x18]
002225B8 00013fd6 blr      x8
002225BC d2ffff17 b        #0x222504
002225C0 7489ff97 bl       #0x204b90
002225C4 858dff97 bl       #0x205bd8
002225C8 b50000b4 cbz      x21, #0x2225dc
002225CC a88e44f8 ldr      x8, [x21, #0x48]!
002225D0 e00315aa mov      x0, x21
002225D4 080d40f9 ldr      x8, [x8, #0x18]
002225D8 00013fd6 blr      x8
002225DC 688e44f8 ldr      x8, [x19, #0x48]!
002225E0 e00313aa mov      x0, x19
002225E4 080d40f9 ldr      x8, [x8, #0x18]
002225E8 00013fd6 blr      x8
002225EC f44f44a9 ldp      x20, x19, [sp, #0x40]
002225F0 f71340f9 ldr      x23, [sp, #0x20]
002225F4 f65743a9 ldp      x22, x21, [sp, #0x30]
002225F8 fd7b41a9 ldp      x29, x30, [sp, #0x10]
002225FC ff430191 add      sp, sp, #0x50
00222600 c0035fd6 ret      
~~~
### 0x222870 (126 slots)
~~~asm
00222870 ffc301d1 sub      sp, sp, #0x70
00222874 fd7b01a9 stp      x29, x30, [sp, #0x10]
00222878 fb1300f9 str      x27, [sp, #0x20]
0022287C fa6703a9 stp      x26, x25, [sp, #0x30]
00222880 f85f04a9 stp      x24, x23, [sp, #0x40]
00222884 f65705a9 stp      x22, x21, [sp, #0x50]
00222888 f44f06a9 stp      x20, x19, [sp, #0x60]
0022288C fd430091 add      x29, sp, #0x10
00222890 e82b00b0 adrp     x8, #0x79f000
00222894 142c0090 adrp     x20, #0x7a2000
00222898 08ed41f9 ldr      x8, [x8, #0x3d8]
0022289C 080140f9 ldr      x8, [x8]
002228A0 940245f9 ldr      x20, [x20, #0xa00]
002228A4 155541f9 ldr      x21, [x8, #0x2a8]
002228A8 880240f9 ldr      x8, [x20]
002228AC 132940f9 ldr      x19, [x8, #0x50]
002228B0 d30000b4 cbz      x19, #0x2228c8
002228B4 e00313aa mov      x0, x19
002228B8 088c44f8 ldr      x8, [x0, #0x48]!
002228BC 080940f9 ldr      x8, [x8, #0x10]
002228C0 00013fd6 blr      x8
002228C4 880240f9 ldr      x8, [x20]
002228C8 142d40f9 ldr      x20, [x8, #0x58]
002228CC b40000b4 cbz      x20, #0x2228e0
002228D0 e00314aa mov      x0, x20
002228D4 088c44f8 ldr      x8, [x0, #0x48]!
002228D8 080940f9 ldr      x8, [x8, #0x10]
002228DC 00013fd6 blr      x8
002228E0 f6031f2a mov      w22, wzr
002228E4 fa031f2a mov      w26, wzr
002228E8 3b008052 mov      w27, #1
002228EC f7031f2a mov      w23, wzr
002228F0 06000014 b        #0x222908
002228F4 6803380a bic      w8, w27, w24
002228F8 f7060011 add      w23, w23, #1
002228FC 5a03080b add      w26, w26, w8
00222900 ff7a0071 cmp      w23, #0x1e
00222904 60060054 b.eq     #0x2229d0
00222908 a8630091 add      x8, x29, #0x18
0022290C e00313aa mov      x0, x19
00222910 e103162a mov      w1, w22
00222914 e203172a mov      w2, w23
00222918 e30315aa mov      x3, x21
0022291C cb76ff97 bl       #0x200448
00222920 e8230091 add      x8, sp, #8
00222924 e00314aa mov      x0, x20
00222928 e103162a mov      w1, w22
0022292C e203172a mov      w2, w23
00222930 e30315aa mov      x3, x21
00222934 c576ff97 bl       #0x200448
00222938 a00f40f9 ldr      x0, [x29, #0x18]
0022293C 138fff97 bl       #0x206588
00222940 f803002a mov      w24, w0
00222944 a00f40f9 ldr      x0, [x29, #0x18]
00222948 108fff97 bl       #0x206588
0022294C 80000037 tbnz     w0, #0, #0x22295c
00222950 e00740f9 ldr      x0, [sp, #8]
00222954 0d8fff97 bl       #0x206588
00222958 40010036 tbz      w0, #0, #0x222980
0022295C a00f40f9 ldr      x0, [x29, #0x18]
00222960 0a8fff97 bl       #0x206588
00222964 60040036 tbz      w0, #0, #0x2229f0
00222968 e00740f9 ldr      x0, [sp, #8]
0022296C 078fff97 bl       #0x206588
00222970 a0010037 tbnz     w0, #0, #0x2229a4
00222974 1f000014 b        #0x2229f0
00222978 1f2003d5 nop      
0022297C 1f2003d5 nop      
00222980 a80f40f9 ldr      x8, [x29, #0x18]
00222984 002d40f9 ldr      x0, [x8, #0x58]
00222988 9f520c94 bl       #0x537404
0022298C e80740f9 ldr      x8, [sp, #8]
00222990 f90300aa mov      x25, x0
00222994 002d40f9 ldr      x0, [x8, #0x58]
00222998 9b520c94 bl       #0x537404
0022299C 3f0300eb cmp      x25, x0
002229A0 81020054 b.ne     #0x2229f0
002229A4 e00740f9 ldr      x0, [sp, #8]
002229A8 800000b4 cbz      x0, #0x2229b8
002229AC 088c44f8 ldr      x8, [x0, #0x48]!
002229B0 080d40f9 ldr      x8, [x8, #0x18]
002229B4 00013fd6 blr      x8
002229B8 a00f40f9 ldr      x0, [x29, #0x18]
002229BC c0f9ffb4 cbz      x0, #0x2228f4
002229C0 088c44f8 ldr      x8, [x0, #0x48]!
002229C4 080d40f9 ldr      x8, [x8, #0x18]
002229C8 00013fd6 blr      x8
002229CC caffff17 b        #0x2228f4
002229D0 d6060011 add      w22, w22, #1
002229D4 dfb20471 cmp      w22, #0x12c
002229D8 a1f8ff54 b.ne     #0x2228ec
002229DC 682e00b0 adrp     x8, #0x7ef000
002229E0 085d40b9 ldr      w8, [x8, #0x5c]
002229E4 1f011a6b cmp      w8, w26
002229E8 f5079f1a cset     w21, ne
002229EC 0c000014 b        #0x222a1c
002229F0 e00740f9 ldr      x0, [sp, #8]
002229F4 800000b4 cbz      x0, #0x222a04
002229F8 088c44f8 ldr      x8, [x0, #0x48]!
002229FC 080d40f9 ldr      x8, [x8, #0x18]
00222A00 00013fd6 blr      x8
00222A04 a00f40f9 ldr      x0, [x29, #0x18]
00222A08 800000b4 cbz      x0, #0x222a18
00222A0C 088c44f8 ldr      x8, [x0, #0x48]!
00222A10 080d40f9 ldr      x8, [x8, #0x18]
00222A14 00013fd6 blr      x8
00222A18 35008052 mov      w21, #1
00222A1C b40000b4 cbz      x20, #0x222a30
00222A20 888e44f8 ldr      x8, [x20, #0x48]!
00222A24 e00314aa mov      x0, x20
00222A28 080d40f9 ldr      x8, [x8, #0x18]
00222A2C 00013fd6 blr      x8
00222A30 b30000b4 cbz      x19, #0x222a44
00222A34 688e44f8 ldr      x8, [x19, #0x48]!
00222A38 e00313aa mov      x0, x19
00222A3C 080d40f9 ldr      x8, [x8, #0x18]
00222A40 00013fd6 blr      x8
00222A44 e003152a mov      w0, w21
00222A48 f44f46a9 ldp      x20, x19, [sp, #0x60]
00222A4C f65745a9 ldp      x22, x21, [sp, #0x50]
00222A50 fb1340f9 ldr      x27, [sp, #0x20]
00222A54 f85f44a9 ldp      x24, x23, [sp, #0x40]
00222A58 fa6743a9 ldp      x26, x25, [sp, #0x30]
00222A5C fd7b41a9 ldp      x29, x30, [sp, #0x10]
00222A60 ffc30191 add      sp, sp, #0x70
00222A64 c0035fd6 ret      
~~~
### 0x222a70 (90 slots)
~~~asm
00222A70 ff8301d1 sub      sp, sp, #0x60
00222A74 fd7b01a9 stp      x29, x30, [sp, #0x10]
00222A78 f91300f9 str      x25, [sp, #0x20]
00222A7C f85f03a9 stp      x24, x23, [sp, #0x30]
00222A80 f65704a9 stp      x22, x21, [sp, #0x40]
00222A84 f44f05a9 stp      x20, x19, [sp, #0x50]
00222A88 fd430091 add      x29, sp, #0x10
00222A8C f5a50c94 bl       #0x54c260
00222A90 182c0090 adrp     x24, #0x7a2000
00222A94 f40300aa mov      x20, x0
00222A98 180345f9 ldr      x24, [x24, #0xa00]
00222A9C 080340f9 ldr      x8, [x24]
00222AA0 132d40f9 ldr      x19, [x8, #0x58]
00222AA4 b30000b4 cbz      x19, #0x222ab8
00222AA8 e00313aa mov      x0, x19
00222AAC 088c44f8 ldr      x8, [x0, #0x48]!
00222AB0 080940f9 ldr      x8, [x8, #0x10]
00222AB4 00013fd6 blr      x8
00222AB8 e00313aa mov      x0, x19
00222ABC b175ff97 bl       #0x200180
00222AC0 f5031f2a mov      w21, wzr
00222AC4 792e00b0 adrp     x25, #0x7ef000
00222AC8 3f5f00b9 str      wzr, [x25, #0x5c]
00222ACC 04000014 b        #0x222adc
00222AD0 b5060011 add      w21, w21, #1
00222AD4 bfb20471 cmp      w21, #0x12c
00222AD8 a0060054 b.eq     #0x222bac
00222ADC f6031f2a mov      w22, wzr
00222AE0 04000014 b        #0x222af0
00222AE4 d6060011 add      w22, w22, #1
00222AE8 df7a0071 cmp      w22, #0x1e
00222AEC 20ffff54 b.eq     #0x222ad0
00222AF0 080340f9 ldr      x8, [x24]
00222AF4 172940f9 ldr      x23, [x8, #0x50]
00222AF8 b70000b4 cbz      x23, #0x222b0c
00222AFC e00317aa mov      x0, x23
00222B00 088c44f8 ldr      x8, [x0, #0x48]!
00222B04 080940f9 ldr      x8, [x8, #0x10]
00222B08 00013fd6 blr      x8
00222B0C a8630091 add      x8, x29, #0x18
00222B10 e00317aa mov      x0, x23
00222B14 e103152a mov      w1, w21
00222B18 e203162a mov      w2, w22
00222B1C e30314aa mov      x3, x20
00222B20 4a76ff97 bl       #0x200448
00222B24 e88e44f8 ldr      x8, [x23, #0x48]!
00222B28 e00317aa mov      x0, x23
00222B2C 080d40f9 ldr      x8, [x8, #0x18]
00222B30 00013fd6 blr      x8
00222B34 a00f40f9 ldr      x0, [x29, #0x18]
00222B38 948eff97 bl       #0x206588
00222B3C c0020037 tbnz     w0, #0, #0x222b94
00222B40 a00f40f9 ldr      x0, [x29, #0x18]
00222B44 e00700f9 str      x0, [sp, #8]
00222B48 800000b4 cbz      x0, #0x222b58
00222B4C 088c44f8 ldr      x8, [x0, #0x48]!
00222B50 080940f9 ldr      x8, [x8, #0x10]
00222B54 00013fd6 blr      x8
00222B58 e1230091 add      x1, sp, #8
00222B5C e00313aa mov      x0, x19
00222B60 e20314aa mov      x2, x20
00222B64 e303152a mov      w3, w21
00222B68 e403162a mov      w4, w22
00222B6C 9c7cff97 bl       #0x201ddc
00222B70 e00740f9 ldr      x0, [sp, #8]
00222B74 a00000b4 cbz      x0, #0x222b88
00222B78 088c44f8 ldr      x8, [x0, #0x48]!
00222B7C 080d40f9 ldr      x8, [x8, #0x18]
00222B80 00013fd6 blr      x8
00222B84 ff0700f9 str      xzr, [sp, #8]
00222B88 285f40b9 ldr      w8, [x25, #0x5c]
00222B8C 08050011 add      w8, w8, #1
00222B90 285f00b9 str      w8, [x25, #0x5c]
00222B94 a00f40f9 ldr      x0, [x29, #0x18]
00222B98 60faffb4 cbz      x0, #0x222ae4
00222B9C 088c44f8 ldr      x8, [x0, #0x48]!
00222BA0 080d40f9 ldr      x8, [x8, #0x18]
00222BA4 00013fd6 blr      x8
00222BA8 cfffff17 b        #0x222ae4
00222BAC 688e44f8 ldr      x8, [x19, #0x48]!
00222BB0 e00313aa mov      x0, x19
00222BB4 080d40f9 ldr      x8, [x8, #0x18]
00222BB8 00013fd6 blr      x8
00222BBC f44f45a9 ldp      x20, x19, [sp, #0x50]
00222BC0 f91340f9 ldr      x25, [sp, #0x20]
00222BC4 f65744a9 ldp      x22, x21, [sp, #0x40]
00222BC8 f85f43a9 ldp      x24, x23, [sp, #0x30]
00222BCC fd7b41a9 ldp      x29, x30, [sp, #0x10]
00222BD0 ff830191 add      sp, sp, #0x60
00222BD4 c0035fd6 ret      
~~~
### 0x2247c0 (429 slots)
~~~asm
002247C0 ff4301d1 sub      sp, sp, #0x50
002247C4 fd7b01a9 stp      x29, x30, [sp, #0x10]
002247C8 f85f02a9 stp      x24, x23, [sp, #0x20]
002247CC f65703a9 stp      x22, x21, [sp, #0x30]
002247D0 f44f04a9 stp      x20, x19, [sp, #0x40]
002247D4 fd430091 add      x29, sp, #0x10
002247D8 4a2e00d0 adrp     x10, #0x7ee000
002247DC 4a413f91 add      x10, x10, #0xfd0
002247E0 282440a9 ldp      x8, x9, [x1]
002247E4 4b2940a9 ldp      x11, x10, [x10]
002247E8 7f0108eb cmp      x11, x8
002247EC 400149fa ccmp     x10, x9, #0, eq
002247F0 20020054 b.eq     #0x224834
002247F4 4a2e00d0 adrp     x10, #0x7ee000
002247F8 4a813f91 add      x10, x10, #0xfe0
002247FC 4b2940a9 ldp      x11, x10, [x10]
00224800 7f0108eb cmp      x11, x8
00224804 400149fa ccmp     x10, x9, #0, eq
00224808 a0010054 b.eq     #0x22483c
0022480C 4a2e00d0 adrp     x10, #0x7ee000
00224810 4ac13f91 add      x10, x10, #0xff0
00224814 4b0140f9 ldr      x11, [x10]
00224818 7f0108eb cmp      x11, x8
0022481C c1150054 b.ne     #0x224ad4
00224820 4a0540f9 ldr      x10, [x10, #8]
00224824 5f0109eb cmp      x10, x9
00224828 61150054 b.ne     #0x224ad4
0022482C 48008052 mov      w8, #2
00224830 04000014 b        #0x224840
00224834 e8031f2a mov      w8, wzr
00224838 02000014 b        #0x224840
0022483C 28008052 mov      w8, #1
00224840 c9028052 mov      w9, #0x16
00224844 152e00b0 adrp     x21, #0x7e5000
00224848 b5c21891 add      x21, x21, #0x630
0022484C 087d091b mul      w8, w8, w9
00224850 09148052 mov      w9, #0xa0
00224854 0a55a99b umaddl   x10, w8, w9, x21
00224858 4a2d6bb9 ldr      w10, [x10, #0x2b2c]
0022485C 6a000034 cbz      w10, #0x224868
00224860 20130034 cbz      w0, #0x224ac4
00224864 2a008052 mov      w10, #1
00224868 0b0140b2 orr      x11, x8, #1
0022486C 0c148052 mov      w12, #0xa0
00224870 6b55ac9b umaddl   x11, w11, w12, x21
00224874 6b2d6bb9 ldr      w11, [x11, #0x2b2c]
00224878 8b000034 cbz      w11, #0x224888
0022487C 5f01006b cmp      w10, w0
00224880 e2110054 b.hs     #0x224abc
00224884 4a050011 add      w10, w10, #1
00224888 0b148052 mov      w11, #0xa0
0022488C 0b55ab9b umaddl   x11, w8, w11, x21
00224890 6b6d6cb9 ldr      w11, [x11, #0x2c6c]
00224894 8b000034 cbz      w11, #0x2248a4
00224898 5f01006b cmp      w10, w0
0022489C 82110054 b.hs     #0x224acc
002248A0 4a050011 add      w10, w10, #1
002248A4 0b148052 mov      w11, #0xa0
002248A8 0b55ab9b umaddl   x11, w8, w11, x21
002248AC 6b0d6db9 ldr      w11, [x11, #0x2d0c]
002248B0 8b000034 cbz      w11, #0x2248c0
002248B4 5f01006b cmp      w10, w0
002248B8 22120054 b.hs     #0x224afc
002248BC 4a050011 add      w10, w10, #1
002248C0 0b148052 mov      w11, #0xa0
002248C4 0b55ab9b umaddl   x11, w8, w11, x21
002248C8 6bad6db9 ldr      w11, [x11, #0x2dac]
002248CC 8b000034 cbz      w11, #0x2248dc
002248D0 5f01006b cmp      w10, w0
002248D4 82110054 b.hs     #0x224b04
002248D8 4a050011 add      w10, w10, #1
002248DC 0b148052 mov      w11, #0xa0
002248E0 0b55ab9b umaddl   x11, w8, w11, x21
002248E4 6b4d6eb9 ldr      w11, [x11, #0x2e4c]
002248E8 8b000034 cbz      w11, #0x2248f8
002248EC 5f01006b cmp      w10, w0
002248F0 22120054 b.hs     #0x224b34
002248F4 4a050011 add      w10, w10, #1
002248F8 0b148052 mov      w11, #0xa0
002248FC 0b55ab9b umaddl   x11, w8, w11, x21
00224900 6bed6eb9 ldr      w11, [x11, #0x2eec]
00224904 8b000034 cbz      w11, #0x224914
00224908 5f01006b cmp      w10, w0
0022490C 82110054 b.hs     #0x224b3c
00224910 4a050011 add      w10, w10, #1
00224914 0b148052 mov      w11, #0xa0
00224918 0b55ab9b umaddl   x11, w8, w11, x21
0022491C 6b8d6fb9 ldr      w11, [x11, #0x2f8c]
00224920 8b000034 cbz      w11, #0x224930
00224924 5f01006b cmp      w10, w0
00224928 22120054 b.hs     #0x224b6c
0022492C 4a050011 add      w10, w10, #1
00224930 0b148052 mov      w11, #0xa0
00224934 0b55ab9b umaddl   x11, w8, w11, x21
00224938 6b2d70b9 ldr      w11, [x11, #0x302c]
0022493C 8b000034 cbz      w11, #0x22494c
00224940 5f01006b cmp      w10, w0
00224944 82110054 b.hs     #0x224b74
00224948 4a050011 add      w10, w10, #1
0022494C 0b148052 mov      w11, #0xa0
00224950 0b55ab9b umaddl   x11, w8, w11, x21
00224954 6bcd70b9 ldr      w11, [x11, #0x30cc]
00224958 8b000034 cbz      w11, #0x224968
0022495C 5f01006b cmp      w10, w0
00224960 22120054 b.hs     #0x224ba4
00224964 4a050011 add      w10, w10, #1
00224968 0b148052 mov      w11, #0xa0
0022496C 0b55ab9b umaddl   x11, w8, w11, x21
00224970 6b6d71b9 ldr      w11, [x11, #0x316c]
00224974 8b000034 cbz      w11, #0x224984
00224978 5f01006b cmp      w10, w0
0022497C 82110054 b.hs     #0x224bac
00224980 4a050011 add      w10, w10, #1
00224984 0b148052 mov      w11, #0xa0
00224988 0b55ab9b umaddl   x11, w8, w11, x21
0022498C 6b0d72b9 ldr      w11, [x11, #0x320c]
00224990 8b000034 cbz      w11, #0x2249a0
00224994 5f01006b cmp      w10, w0
00224998 e2110054 b.hs     #0x224bd4
0022499C 4a050011 add      w10, w10, #1
002249A0 0b148052 mov      w11, #0xa0
002249A4 0b55ab9b umaddl   x11, w8, w11, x21
002249A8 6bad72b9 ldr      w11, [x11, #0x32ac]
002249AC 8b000034 cbz      w11, #0x2249bc
002249B0 5f01006b cmp      w10, w0
002249B4 42110054 b.hs     #0x224bdc
002249B8 4a050011 add      w10, w10, #1
002249BC 0b148052 mov      w11, #0xa0
002249C0 0b55ab9b umaddl   x11, w8, w11, x21
002249C4 6b4d73b9 ldr      w11, [x11, #0x334c]
002249C8 8b000034 cbz      w11, #0x2249d8
002249CC 5f01006b cmp      w10, w0
002249D0 a2100054 b.hs     #0x224be4
002249D4 4a050011 add      w10, w10, #1
002249D8 0b148052 mov      w11, #0xa0
002249DC 0b55ab9b umaddl   x11, w8, w11, x21
002249E0 6bed73b9 ldr      w11, [x11, #0x33ec]
002249E4 8b000034 cbz      w11, #0x2249f4
002249E8 5f01006b cmp      w10, w0
002249EC 02100054 b.hs     #0x224bec
002249F0 4a050011 add      w10, w10, #1
002249F4 0b148052 mov      w11, #0xa0
002249F8 0b55ab9b umaddl   x11, w8, w11, x21
002249FC 6b8d74b9 ldr      w11, [x11, #0x348c]
00224A00 8b000034 cbz      w11, #0x224a10
00224A04 5f01006b cmp      w10, w0
00224A08 620f0054 b.hs     #0x224bf4
00224A0C 4a050011 add      w10, w10, #1
00224A10 0b148052 mov      w11, #0xa0
00224A14 0b55ab9b umaddl   x11, w8, w11, x21
00224A18 6b2d75b9 ldr      w11, [x11, #0x352c]
00224A1C 8b000034 cbz      w11, #0x224a2c
00224A20 5f01006b cmp      w10, w0
00224A24 c20e0054 b.hs     #0x224bfc
00224A28 4a050011 add      w10, w10, #1
00224A2C 0b148052 mov      w11, #0xa0
00224A30 0b55ab9b umaddl   x11, w8, w11, x21
00224A34 6bcd75b9 ldr      w11, [x11, #0x35cc]
00224A38 8b000034 cbz      w11, #0x224a48
00224A3C 5f01006b cmp      w10, w0
00224A40 220e0054 b.hs     #0x224c04
00224A44 4a050011 add      w10, w10, #1
00224A48 0b148052 mov      w11, #0xa0
00224A4C 0b55ab9b umaddl   x11, w8, w11, x21
00224A50 6b6d76b9 ldr      w11, [x11, #0x366c]
00224A54 8b000034 cbz      w11, #0x224a64
00224A58 5f01006b cmp      w10, w0
00224A5C 820d0054 b.hs     #0x224c0c
00224A60 4a050011 add      w10, w10, #1
00224A64 0b148052 mov      w11, #0xa0
00224A68 0b55ab9b umaddl   x11, w8, w11, x21
00224A6C 6b0d77b9 ldr      w11, [x11, #0x370c]
00224A70 8b000034 cbz      w11, #0x224a80
00224A74 5f01006b cmp      w10, w0
00224A78 e20c0054 b.hs     #0x224c14
00224A7C 4a050011 add      w10, w10, #1
00224A80 0b148052 mov      w11, #0xa0
00224A84 0b55ab9b umaddl   x11, w8, w11, x21
00224A88 6bad77b9 ldr      w11, [x11, #0x37ac]
00224A8C 8b000034 cbz      w11, #0x224a9c
00224A90 5f01006b cmp      w10, w0
00224A94 420c0054 b.hs     #0x224c1c
00224A98 4a050011 add      w10, w10, #1
00224A9C 0b148052 mov      w11, #0xa0
00224AA0 5f01006b cmp      w10, w0
00224AA4 0b55ab9b umaddl   x11, w8, w11, x21
00224AA8 aa028052 mov      w10, #0x15
00224AAC 6b4d78b9 ldr      w11, [x11, #0x384c]
00224AB0 6429407a ccmp     w11, #0, #4, hs
00224AB4 4a158a1a cinc     w10, w10, eq
00224AB8 5a000014 b        #0x224c20
00224ABC 2a008052 mov      w10, #1
00224AC0 58000014 b        #0x224c20
00224AC4 ea031f2a mov      w10, wzr
00224AC8 56000014 b        #0x224c20
00224ACC 4a008052 mov      w10, #2
00224AD0 54000014 b        #0x224c20
00224AD4 4a2e00f0 adrp     x10, #0x7ef000
00224AD8 4a010091 add      x10, x10, #0
00224ADC 4b0140f9 ldr      x11, [x10]
00224AE0 7f0108eb cmp      x11, x8
00224AE4 41010054 b.ne     #0x224b0c
00224AE8 4a0540f9 ldr      x10, [x10, #8]
00224AEC 5f0109eb cmp      x10, x9
00224AF0 e1000054 b.ne     #0x224b0c
00224AF4 68008052 mov      w8, #3
00224AF8 52ffff17 b        #0x224840
00224AFC 6a008052 mov      w10, #3
00224B00 48000014 b        #0x224c20
00224B04 8a008052 mov      w10, #4
00224B08 46000014 b        #0x224c20
00224B0C 4a2e00f0 adrp     x10, #0x7ef000
00224B10 4a410091 add      x10, x10, #0x10
00224B14 4b0140f9 ldr      x11, [x10]
00224B18 7f0108eb cmp      x11, x8
00224B1C 41010054 b.ne     #0x224b44
00224B20 4a0540f9 ldr      x10, [x10, #8]
00224B24 5f0109eb cmp      x10, x9
00224B28 e1000054 b.ne     #0x224b44
00224B2C 88008052 mov      w8, #4
00224B30 44ffff17 b        #0x224840
00224B34 aa008052 mov      w10, #5
00224B38 3a000014 b        #0x224c20
00224B3C ca008052 mov      w10, #6
00224B40 38000014 b        #0x224c20
00224B44 4a2e00f0 adrp     x10, #0x7ef000
00224B48 4a810091 add      x10, x10, #0x20
00224B4C 4b0140f9 ldr      x11, [x10]
00224B50 7f0108eb cmp      x11, x8
00224B54 41010054 b.ne     #0x224b7c
00224B58 4a0540f9 ldr      x10, [x10, #8]
00224B5C 5f0109eb cmp      x10, x9
00224B60 e1000054 b.ne     #0x224b7c
00224B64 a8008052 mov      w8, #5
00224B68 36ffff17 b        #0x224840
00224B6C ea008052 mov      w10, #7
00224B70 2c000014 b        #0x224c20
00224B74 0a018052 mov      w10, #8
00224B78 2a000014 b        #0x224c20
00224B7C 4a2e00f0 adrp     x10, #0x7ef000
00224B80 4ac10091 add      x10, x10, #0x30
00224B84 4b0140f9 ldr      x11, [x10]
00224B88 7f0108eb cmp      x11, x8
00224B8C 41010054 b.ne     #0x224bb4
00224B90 4a0540f9 ldr      x10, [x10, #8]
00224B94 5f0109eb cmp      x10, x9
00224B98 e1000054 b.ne     #0x224bb4
00224B9C c8008052 mov      w8, #6
00224BA0 28ffff17 b        #0x224840
00224BA4 2a018052 mov      w10, #9
00224BA8 1e000014 b        #0x224c20
00224BAC 4a018052 mov      w10, #0xa
00224BB0 1c000014 b        #0x224c20
00224BB4 4a2e00f0 adrp     x10, #0x7ef000
00224BB8 4a010191 add      x10, x10, #0x40
00224BBC 4b2940a9 ldp      x11, x10, [x10]
00224BC0 5f0109eb cmp      x10, x9
00224BC4 600148fa ccmp     x11, x8, #0, eq
00224BC8 e8008052 mov      w8, #7
00224BCC 08019f1a csel     w8, w8, wzr, eq
00224BD0 1cffff17 b        #0x224840
00224BD4 6a018052 mov      w10, #0xb
00224BD8 12000014 b        #0x224c20
00224BDC 8a018052 mov      w10, #0xc
00224BE0 10000014 b        #0x224c20
00224BE4 aa018052 mov      w10, #0xd
00224BE8 0e000014 b        #0x224c20
00224BEC ca018052 mov      w10, #0xe
00224BF0 0c000014 b        #0x224c20
00224BF4 ea018052 mov      w10, #0xf
00224BF8 0a000014 b        #0x224c20
00224BFC 0a028052 mov      w10, #0x10
00224C00 08000014 b        #0x224c20
00224C04 2a028052 mov      w10, #0x11
00224C08 06000014 b        #0x224c20
00224C0C 4a028052 mov      w10, #0x12
00224C10 04000014 b        #0x224c20
00224C14 6a028052 mov      w10, #0x13
00224C18 02000014 b        #0x224c20
00224C1C 8a028052 mov      w10, #0x14
00224C20 5601080b add      w22, w10, w8
00224C24 c856a99b umaddl   x8, w22, w9, x21
00224C28 082d6bb9 ldr      w8, [x8, #0x2b2c]
00224C2C 090d0051 sub      w9, w8, #3
00224C30 3f050071 cmp      w9, #1
00224C34 28030054 b.hi     #0x224c98
00224C38 e82d00b0 adrp     x8, #0x7e1000
00224C3C 08e11291 add      x8, x8, #0x4b8
00224C40 080140f9 ldr      x8, [x8]
00224C44 131141f9 ldr      x19, [x8, #0x220]
00224C48 b30000b4 cbz      x19, #0x224c5c
00224C4C e00313aa mov      x0, x19
00224C50 088c44f8 ldr      x8, [x0, #0x48]!
00224C54 080940f9 ldr      x8, [x8, #0x10]
00224C58 00013fd6 blr      x8
00224C5C e00313aa mov      x0, x19
00224C60 e1031f2a mov      w1, wzr
00224C64 ab250194 bl       #0x26e310
00224C68 08148052 mov      w8, #0xa0
00224C6C f85f42a9 ldp      x24, x23, [sp, #0x20]
00224C70 c856a89b umaddl   x8, w22, w8, x21
00224C74 f65743a9 ldp      x22, x21, [sp, #0x30]
00224C78 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00224C7C 00252bb9 str      w0, [x8, #0x2b24]
00224C80 688e44f8 ldr      x8, [x19, #0x48]!
00224C84 e00313aa mov      x0, x19
00224C88 f44f44a9 ldp      x20, x19, [sp, #0x40]
00224C8C 010d40f9 ldr      x1, [x8, #0x18]
00224C90 ff430191 add      sp, sp, #0x50
00224C94 20001fd6 br       x1
00224C98 09050051 sub      w9, w8, #1
00224C9C 3f050071 cmp      w9, #1
00224CA0 e8030054 b.hi     #0x224d1c
00224CA4 e8230091 add      x8, sp, #8
00224CA8 3ea2ff97 bl       #0x20d5a0
00224CAC e00740f9 ldr      x0, [sp, #8]
00224CB0 134440f9 ldr      x19, [x0, #0x88]
00224CB4 f30000b4 cbz      x19, #0x224cd0
00224CB8 e00313aa mov      x0, x19
00224CBC 088c44f8 ldr      x8, [x0, #0x48]!
00224CC0 080940f9 ldr      x8, [x8, #0x10]
00224CC4 00013fd6 blr      x8
00224CC8 e00740f9 ldr      x0, [sp, #8]
00224CCC 800000b4 cbz      x0, #0x224cdc
00224CD0 080c45f8 ldr      x8, [x0, #0x50]!
00224CD4 080d40f9 ldr      x8, [x8, #0x18]
00224CD8 00013fd6 blr      x8
00224CDC e00313aa mov      x0, x19
00224CE0 f4b7ff97 bl       #0x212cb0
00224CE4 09148052 mov      w9, #0xa0
00224CE8 083c0012 and      w8, w0, #0xffff
00224CEC c956a99b umaddl   x9, w22, w9, x21
00224CF0 28252bb9 str      w8, [x9, #0x2b24]
00224CF4 688e44f8 ldr      x8, [x19, #0x48]!
00224CF8 e00313aa mov      x0, x19
00224CFC 080d40f9 ldr      x8, [x8, #0x18]
00224D00 00013fd6 blr      x8
00224D04 f44f44a9 ldp      x20, x19, [sp, #0x40]
00224D08 f65743a9 ldp      x22, x21, [sp, #0x30]
00224D0C f85f42a9 ldp      x24, x23, [sp, #0x20]
00224D10 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00224D14 ff430191 add      sp, sp, #0x50
00224D18 c0035fd6 ret      
00224D1C 09150051 sub      w9, w8, #5
00224D20 3f050071 cmp      w9, #1
00224D24 c8010054 b.hi     #0x224d5c
00224D28 e82d00b0 adrp     x8, #0x7e1000
00224D2C 08011891 add      x8, x8, #0x600
00224D30 000140f9 ldr      x0, [x8]
00224D34 e8230091 add      x8, sp, #8
00224D38 bbe6fd97 bl       #0x19e824
00224D3C e00740f9 ldr      x0, [sp, #8]
00224D40 58f5fd97 bl       #0x1a22a0
00224D44 08148052 mov      w8, #0xa0
00224D48 c856a89b umaddl   x8, w22, w8, x21
00224D4C 00252bb9 str      w0, [x8, #0x2b24]
00224D50 e00740f9 ldr      x0, [sp, #8]
00224D54 000200b5 cbnz     x0, #0x224d94
00224D58 ebffff17 b        #0x224d04
00224D5C 1f1d0071 cmp      w8, #7
00224D60 c1020054 b.ne     #0x224db8
00224D64 e82d00b0 adrp     x8, #0x7e1000
00224D68 08411891 add      x8, x8, #0x610
00224D6C 000140f9 ldr      x0, [x8]
00224D70 e8230091 add      x8, sp, #8
00224D74 b234fe97 bl       #0x1b203c
00224D78 e00740f9 ldr      x0, [sp, #8]
00224D7C ad70fe97 bl       #0x1c1030
00224D80 08148052 mov      w8, #0xa0
00224D84 c856a89b umaddl   x8, w22, w8, x21
00224D88 00252bb9 str      w0, [x8, #0x2b24]
00224D8C e00740f9 ldr      x0, [sp, #8]
00224D90 a0fbffb4 cbz      x0, #0x224d04
00224D94 088c44f8 ldr      x8, [x0, #0x48]!
00224D98 080d40f9 ldr      x8, [x8, #0x18]
00224D9C 00013fd6 blr      x8
00224DA0 f44f44a9 ldp      x20, x19, [sp, #0x40]
00224DA4 f65743a9 ldp      x22, x21, [sp, #0x30]
00224DA8 f85f42a9 ldp      x24, x23, [sp, #0x20]
00224DAC fd7b41a9 ldp      x29, x30, [sp, #0x10]
00224DB0 ff430191 add      sp, sp, #0x50
00224DB4 c0035fd6 ret      
00224DB8 09791f12 and      w9, w8, #0xfffffffe
00224DBC 3f210071 cmp      w9, #8
00224DC0 41030054 b.ne     #0x224e28
00224DC4 e82d00b0 adrp     x8, #0x7e1000
00224DC8 08811891 add      x8, x8, #0x620
00224DCC 080140f9 ldr      x8, [x8]
00224DD0 17615da9 ldp      x23, x24, [x8, #0x1d0]
00224DD4 ff0218eb cmp      x23, x24
00224DD8 60f9ff54 b.eq     #0x224d04
00224DDC 1f2003d5 nop      
00224DE0 f30240f9 ldr      x19, [x23]
00224DE4 e00313aa mov      x0, x19
00224DE8 080c45f8 ldr      x8, [x0, #0x50]!
00224DEC 080140f9 ldr      x8, [x8]
00224DF0 00013fd6 blr      x8
00224DF4 f40300aa mov      x20, x0
00224DF8 038fff97 bl       #0x208a04
00224DFC 1f0014eb cmp      x0, x20
00224E00 40020054 b.eq     #0x224e48
00224E04 940240f9 ldr      x20, [x20]
00224E08 9f0200eb cmp      x20, x0
00224E0C 841a40fa ccmp     x20, #0, #4, ne
00224E10 a1ffff54 b.ne     #0x224e04
00224E14 940100b5 cbnz     x20, #0x224e44
00224E18 f7220091 add      x23, x23, #8
00224E1C ff0218eb cmp      x23, x24
00224E20 01feff54 b.ne     #0x224de0
00224E24 b8ffff17 b        #0x224d04
00224E28 1f290071 cmp      w8, #0xa
00224E2C c1f6ff54 b.ne     #0x224d04
00224E30 3830ff97 bl       #0x1f0f10
00224E34 e1031f2a mov      w1, wzr
00224E38 e2031f2a mov      w2, wzr
00224E3C 05b3fe97 bl       #0x1d1a50
00224E40 04000014 b        #0x224e50
00224E44 13f6ffb4 cbz      x19, #0x224d04
00224E48 e00313aa mov      x0, x19
00224E4C f5af0194 bl       #0x290e20
00224E50 08148052 mov      w8, #0xa0
00224E54 c856a89b umaddl   x8, w22, w8, x21
00224E58 00252bb9 str      w0, [x8, #0x2b24]
00224E5C f44f44a9 ldp      x20, x19, [sp, #0x40]
00224E60 f65743a9 ldp      x22, x21, [sp, #0x30]
00224E64 f85f42a9 ldp      x24, x23, [sp, #0x20]
00224E68 fd7b41a9 ldp      x29, x30, [sp, #0x10]
00224E6C ff430191 add      sp, sp, #0x50
00224E70 c0035fd6 ret      
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
### 0x226d20 (155 slots)
~~~asm
00226D20 ff8301d1 sub      sp, sp, #0x60
00226D24 fd7b04a9 stp      x29, x30, [sp, #0x40]
00226D28 f44f05a9 stp      x20, x19, [sp, #0x50]
00226D2C fd030191 add      x29, sp, #0x40
00226D30 482e00b0 adrp     x8, #0x7ef000
00226D34 085140b9 ldr      w8, [x8, #0x50]
00226D38 08050051 sub      w8, w8, #1
00226D3C 1f150071 cmp      w8, #5
00226D40 08080054 b.hi     #0x226e40
00226D44 692000d0 adrp     x9, #0x634000
00226D48 29593091 add      x9, x9, #0xc16
00226D4C 8a000010 adr      x10, #0x226d5c
00226D50 2b696838 ldrb     w11, [x9, x8]
00226D54 4a090b8b add      x10, x10, x11, lsl #2
00226D58 40011fd6 br       x10
00226D5C f44f45a9 ldp      x20, x19, [sp, #0x50]
00226D60 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00226D64 ff830191 add      sp, sp, #0x60
00226D68 8698ff17 b        #0x20cf80
00226D6C c82d00f0 adrp     x8, #0x7e1000
00226D70 08011891 add      x8, x8, #0x600
00226D74 000140f9 ldr      x0, [x8]
00226D78 f44f45a9 ldp      x20, x19, [sp, #0x50]
00226D7C fd7b44a9 ldp      x29, x30, [sp, #0x40]
00226D80 ff830191 add      sp, sp, #0x60
00226D84 58defd17 b        #0x19e6e4
00226D88 c82d00f0 adrp     x8, #0x7e1000
00226D8C 08811891 add      x8, x8, #0x620
00226D90 130140f9 ldr      x19, [x8]
00226D94 b30f00b4 cbz      x19, #0x226f88
00226D98 e82b0090 adrp     x8, #0x7a2000
00226D9C a06300d1 sub      x0, x29, #0x18
00226DA0 081d46f9 ldr      x8, [x8, #0xc38]
00226DA4 092940a9 ldp      x9, x10, [x8]
00226DA8 080940f9 ldr      x8, [x8, #0x10]
00226DAC a8831ff8 stur     x8, [x29, #-8]
00226DB0 e8230091 add      x8, sp, #8
00226DB4 a9ab3ea9 stp      x9, x10, [x29, #-0x18]
00226DB8 31090b94 bl       #0x4e927c
00226DBC e1230091 add      x1, sp, #8
00226DC0 e00313aa mov      x0, x19
00226DC4 6dd60194 bl       #0x29c778
00226DC8 f403002a mov      w20, w0
00226DCC e01340f9 ldr      x0, [sp, #0x20]
00226DD0 800000b4 cbz      x0, #0x226de0
00226DD4 088c44f8 ldr      x8, [x0, #0x48]!
00226DD8 080d40f9 ldr      x8, [x8, #0x18]
00226DDC 00013fd6 blr      x8
00226DE0 9f0a0071 cmp      w20, #2
00226DE4 81010054 b.ne     #0x226e14
00226DE8 e8230091 add      x8, sp, #8
00226DEC a06300d1 sub      x0, x29, #0x18
00226DF0 23090b94 bl       #0x4e927c
00226DF4 e1230091 add      x1, sp, #8
00226DF8 e00313aa mov      x0, x19
00226DFC 7bd60194 bl       #0x29c7e8
00226E00 e01340f9 ldr      x0, [sp, #0x20]
00226E04 800000b4 cbz      x0, #0x226e14
00226E08 088c44f8 ldr      x8, [x0, #0x48]!
00226E0C 080d40f9 ldr      x8, [x8, #0x18]
00226E10 00013fd6 blr      x8
00226E14 e8230091 add      x8, sp, #8
00226E18 a06300d1 sub      x0, x29, #0x18
00226E1C 18090b94 bl       #0x4e927c
00226E20 e1230091 add      x1, sp, #8
00226E24 e00313aa mov      x0, x19
00226E28 8cd60194 bl       #0x29c858
00226E2C e01340f9 ldr      x0, [sp, #0x20]
00226E30 800000b4 cbz      x0, #0x226e40
00226E34 088c44f8 ldr      x8, [x0, #0x48]!
00226E38 080d40f9 ldr      x8, [x8, #0x18]
00226E3C 00013fd6 blr      x8
00226E40 f44f45a9 ldp      x20, x19, [sp, #0x50]
00226E44 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00226E48 ff830191 add      sp, sp, #0x60
00226E4C c0035fd6 ret      
00226E50 d32b00b0 adrp     x19, #0x79f000
00226E54 81008052 mov      w1, #4
00226E58 732642f9 ldr      x19, [x19, #0x448]
00226E5C 600240f9 ldr      x0, [x19]
00226E60 f92a0194 bl       #0x271a44
00226E64 1f080071 cmp      w0, #2
00226E68 81000054 b.ne     #0x226e78
00226E6C 600240f9 ldr      x0, [x19]
00226E70 81008052 mov      w1, #4
00226E74 0e2b0194 bl       #0x271aac
00226E78 600240f9 ldr      x0, [x19]
00226E7C 81008052 mov      w1, #4
00226E80 f44f45a9 ldp      x20, x19, [sp, #0x50]
00226E84 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00226E88 ff830191 add      sp, sp, #0x60
00226E8C 222b0114 b        #0x271b14
00226E90 d32b00b0 adrp     x19, #0x79f000
00226E94 61008052 mov      w1, #3
00226E98 738a42f9 ldr      x19, [x19, #0x510]
00226E9C 600240f9 ldr      x0, [x19]
00226EA0 6d2bfe97 bl       #0x1b1c54
00226EA4 1f080071 cmp      w0, #2
00226EA8 81000054 b.ne     #0x226eb8
00226EAC 600240f9 ldr      x0, [x19]
00226EB0 61008052 mov      w1, #3
00226EB4 822bfe97 bl       #0x1b1cbc
00226EB8 600240f9 ldr      x0, [x19]
00226EBC 61008052 mov      w1, #3
00226EC0 f44f45a9 ldp      x20, x19, [sp, #0x50]
00226EC4 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00226EC8 ff830191 add      sp, sp, #0x60
00226ECC 962bfe17 b        #0x1b1d24
00226ED0 2527ff97 bl       #0x1f0b64
00226ED4 a00500b4 cbz      x0, #0x226f88
00226ED8 28c09bd2 mov      x8, #0xde01
00226EDC 6877bef2 movk     x8, #0xf3bb, lsl #16
00226EE0 691f00f0 adrp     x9, #0x615000
00226EE4 29190491 add      x9, x9, #0x106
00226EE8 885ac1f2 movk     x8, #0xad4, lsl #32
00226EEC e8c2e5f2 movk     x8, #0x2e17, lsl #48
00226EF0 a8a73ea9 stp      x8, x9, [x29, #-0x18]
00226EF4 a8008052 mov      w8, #5
00226EF8 f30300aa mov      x19, x0
00226EFC a8831ff8 stur     x8, [x29, #-8]
00226F00 e8230091 add      x8, sp, #8
00226F04 a06300d1 sub      x0, x29, #0x18
00226F08 dd080b94 bl       #0x4e927c
00226F0C e1230091 add      x1, sp, #8
00226F10 e00313aa mov      x0, x19
00226F14 b14dff97 bl       #0x1fa5d8
00226F18 f403002a mov      w20, w0
00226F1C e01340f9 ldr      x0, [sp, #0x20]
00226F20 800000b4 cbz      x0, #0x226f30
00226F24 088c44f8 ldr      x8, [x0, #0x48]!
00226F28 080d40f9 ldr      x8, [x8, #0x18]
00226F2C 00013fd6 blr      x8
00226F30 9f0a0071 cmp      w20, #2
00226F34 81010054 b.ne     #0x226f64
00226F38 e8230091 add      x8, sp, #8
00226F3C a06300d1 sub      x0, x29, #0x18
00226F40 cf080b94 bl       #0x4e927c
00226F44 e1230091 add      x1, sp, #8
00226F48 e00313aa mov      x0, x19
00226F4C bf4dff97 bl       #0x1fa648
00226F50 e01340f9 ldr      x0, [sp, #0x20]
00226F54 800000b4 cbz      x0, #0x226f64
00226F58 088c44f8 ldr      x8, [x0, #0x48]!
00226F5C 080d40f9 ldr      x8, [x8, #0x18]
00226F60 00013fd6 blr      x8
00226F64 e8230091 add      x8, sp, #8
00226F68 a06300d1 sub      x0, x29, #0x18
00226F6C c4080b94 bl       #0x4e927c
00226F70 e1230091 add      x1, sp, #8
00226F74 e00313aa mov      x0, x19
00226F78 d04dff97 bl       #0x1fa6b8
00226F7C e01340f9 ldr      x0, [sp, #0x20]
00226F80 a0f5ffb5 cbnz     x0, #0x226e34
00226F84 afffff17 b        #0x226e40
00226F88 ee3c0f94 bl       #0x5f6340
~~~
### 0x226f90 (20 slots)
~~~asm
00226F90 482e00b0 adrp     x8, #0x7ef000
00226F94 085140b9 ldr      w8, [x8, #0x50]
00226F98 1f0d0071 cmp      w8, #3
00226F9C a0000054 b.eq     #0x226fb0
00226FA0 1f050071 cmp      w8, #1
00226FA4 a1010054 b.ne     #0x226fd8
00226FA8 e0031faa mov      x0, xzr
00226FAC fd97ff17 b        #0x20cfa0
00226FB0 fd7bbfa9 stp      x29, x30, [sp, #-0x10]!
00226FB4 fd030091 mov      x29, sp
00226FB8 c82d00f0 adrp     x8, #0x7e1000
00226FBC 08011891 add      x8, x8, #0x600
00226FC0 000140f9 ldr      x0, [x8]
00226FC4 75ddfd97 bl       #0x19e598
00226FC8 08000052 eor      w8, w0, #1
00226FCC fd7bc1a8 ldp      x29, x30, [sp], #0x10
00226FD0 00010012 and      w0, w8, #1
00226FD4 c0035fd6 ret      
00226FD8 e0030012 and      w0, wzr, #1
00226FDC c0035fd6 ret      
~~~
### 0x226fe0 (88 slots)
~~~asm
00226FE0 ff8301d1 sub      sp, sp, #0x60
00226FE4 fd7b04a9 stp      x29, x30, [sp, #0x40]
00226FE8 f32b00f9 str      x19, [sp, #0x50]
00226FEC fd030191 add      x29, sp, #0x40
00226FF0 482e00b0 adrp     x8, #0x7ef000
00226FF4 085140b9 ldr      w8, [x8, #0x50]
00226FF8 08050051 sub      w8, w8, #1
00226FFC 1f150071 cmp      w8, #5
00227000 68090054 b.hi     #0x22712c
00227004 692000b0 adrp     x9, #0x634000
00227008 29713091 add      x9, x9, #0xc1c
0022700C 8a000010 adr      x10, #0x22701c
00227010 2b696838 ldrb     w11, [x9, x8]
00227014 4a090b8b add      x10, x10, x11, lsl #2
00227018 40011fd6 br       x10
0022701C f32b40f9 ldr      x19, [sp, #0x50]
00227020 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00227024 ff830191 add      sp, sp, #0x60
00227028 1298ff17 b        #0x20d070
0022702C c82b0090 adrp     x8, #0x79f000
00227030 81008052 mov      w1, #4
00227034 082542f9 ldr      x8, [x8, #0x448]
00227038 f32b40f9 ldr      x19, [sp, #0x50]
0022703C fd7b44a9 ldp      x29, x30, [sp, #0x40]
00227040 000140f9 ldr      x0, [x8]
00227044 ff830191 add      sp, sp, #0x60
00227048 b32a0114 b        #0x271b14
0022704C c82d00d0 adrp     x8, #0x7e1000
00227050 08011891 add      x8, x8, #0x600
00227054 f32b40f9 ldr      x19, [sp, #0x50]
00227058 fd7b44a9 ldp      x29, x30, [sp, #0x40]
0022705C 000140f9 ldr      x0, [x8]
00227060 ff830191 add      sp, sp, #0x60
00227064 afddfd17 b        #0x19e720
00227068 c82b0090 adrp     x8, #0x79f000
0022706C 61008052 mov      w1, #3
00227070 088942f9 ldr      x8, [x8, #0x510]
00227074 f32b40f9 ldr      x19, [sp, #0x50]
00227078 fd7b44a9 ldp      x29, x30, [sp, #0x40]
0022707C 000140f9 ldr      x0, [x8]
00227080 ff830191 add      sp, sp, #0x60
00227084 282bfe17 b        #0x1b1d24
00227088 c82d00d0 adrp     x8, #0x7e1000
0022708C 08811891 add      x8, x8, #0x620
00227090 130140f9 ldr      x19, [x8]
00227094 530500b4 cbz      x19, #0x22713c
00227098 c82b00f0 adrp     x8, #0x7a2000
0022709C a06300d1 sub      x0, x29, #0x18
002270A0 081d46f9 ldr      x8, [x8, #0xc38]
002270A4 092940a9 ldp      x9, x10, [x8]
002270A8 080940f9 ldr      x8, [x8, #0x10]
002270AC a8831ff8 stur     x8, [x29, #-8]
002270B0 e8230091 add      x8, sp, #8
002270B4 a9ab3ea9 stp      x9, x10, [x29, #-0x18]
002270B8 71080b94 bl       #0x4e927c
002270BC e1230091 add      x1, sp, #8
002270C0 e00313aa mov      x0, x19
002270C4 e5d50194 bl       #0x29c858
002270C8 e01340f9 ldr      x0, [sp, #0x20]
002270CC a00200b5 cbnz     x0, #0x227120
002270D0 17000014 b        #0x22712c
002270D4 a426ff97 bl       #0x1f0b64
002270D8 28c09bd2 mov      x8, #0xde01
002270DC 6877bef2 movk     x8, #0xf3bb, lsl #16
002270E0 691f00d0 adrp     x9, #0x615000
002270E4 29190491 add      x9, x9, #0x106
002270E8 885ac1f2 movk     x8, #0xad4, lsl #32
002270EC e8c2e5f2 movk     x8, #0x2e17, lsl #48
002270F0 a8a73ea9 stp      x8, x9, [x29, #-0x18]
002270F4 a8008052 mov      w8, #5
002270F8 f30300aa mov      x19, x0
002270FC a8831ff8 stur     x8, [x29, #-8]
00227100 e8230091 add      x8, sp, #8
00227104 a06300d1 sub      x0, x29, #0x18
00227108 5d080b94 bl       #0x4e927c
0022710C e1230091 add      x1, sp, #8
00227110 e00313aa mov      x0, x19
00227114 694dff97 bl       #0x1fa6b8
00227118 e01340f9 ldr      x0, [sp, #0x20]
0022711C 800000b4 cbz      x0, #0x22712c
00227120 088c44f8 ldr      x8, [x0, #0x48]!
00227124 080d40f9 ldr      x8, [x8, #0x18]
00227128 00013fd6 blr      x8
0022712C f32b40f9 ldr      x19, [sp, #0x50]
00227130 fd7b44a9 ldp      x29, x30, [sp, #0x40]
00227134 ff830191 add      sp, sp, #0x60
00227138 c0035fd6 ret      
0022713C 813c0f94 bl       #0x5f6340
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
### 0x253e60 (284 slots)
~~~asm
00253E60 ff8302d1 sub      sp, sp, #0xa0
00253E64 fd7b04a9 stp      x29, x30, [sp, #0x40]
00253E68 fc6f05a9 stp      x28, x27, [sp, #0x50]
00253E6C fa6706a9 stp      x26, x25, [sp, #0x60]
00253E70 f85f07a9 stp      x24, x23, [sp, #0x70]
00253E74 f65708a9 stp      x22, x21, [sp, #0x80]
00253E78 f44f09a9 stp      x20, x19, [sp, #0x90]
00253E7C fd030191 add      x29, sp, #0x40
00253E80 a82300d1 sub      x8, x29, #8
00253E84 e20300f9 str      x2, [sp]
00253E88 8631ff97 bl       #0x2204a0
00253E8C a84300d1 sub      x8, x29, #0x10
00253E90 c4e5fe97 bl       #0x20d5a0
00253E94 a0035ff8 ldur     x0, [x29, #-0x10]
00253E98 135840f9 ldr      x19, [x0, #0xb0]
00253E9C f30000b4 cbz      x19, #0x253eb8
00253EA0 e00313aa mov      x0, x19
00253EA4 088c44f8 ldr      x8, [x0, #0x48]!
00253EA8 080940f9 ldr      x8, [x8, #0x10]
00253EAC 00013fd6 blr      x8
00253EB0 a0035ff8 ldur     x0, [x29, #-0x10]
00253EB4 800000b4 cbz      x0, #0x253ec4
00253EB8 080c45f8 ldr      x8, [x0, #0x50]!
00253EBC 080d40f9 ldr      x8, [x8, #0x18]
00253EC0 00013fd6 blr      x8
00253EC4 682c00d0 adrp     x8, #0x7e1000
00253EC8 08611491 add      x8, x8, #0x518
00253ECC 080140f9 ldr      x8, [x8]
00253ED0 085541f9 ldr      x8, [x8, #0x2a8]
00253ED4 a8031ff8 stur     x8, [x29, #-0x10]
00253ED8 a86300d1 sub      x8, x29, #0x18
00253EDC b1e5fe97 bl       #0x20d5a0
00253EE0 a0835ef8 ldur     x0, [x29, #-0x18]
00253EE4 155440f9 ldr      x21, [x0, #0xa8]
00253EE8 f50000b4 cbz      x21, #0x253f04
00253EEC e00315aa mov      x0, x21
00253EF0 088c44f8 ldr      x8, [x0, #0x48]!
00253EF4 080940f9 ldr      x8, [x8, #0x10]
00253EF8 00013fd6 blr      x8
00253EFC a0835ef8 ldur     x0, [x29, #-0x18]
00253F00 800000b4 cbz      x0, #0x253f10
00253F04 080c45f8 ldr      x8, [x0, #0x50]!
00253F08 080d40f9 ldr      x8, [x8, #0x18]
00253F0C 00013fd6 blr      x8
00253F10 680240f9 ldr      x8, [x19]
00253F14 e00313aa mov      x0, x19
00253F18 a1035ff8 ldur     x1, [x29, #-0x10]
00253F1C 081d40f9 ldr      x8, [x8, #0x38]
00253F20 00013fd6 blr      x8
00253F24 a86300d1 sub      x8, x29, #0x18
00253F28 bfc60079 strh     wzr, [x21, #0x62]
00253F2C 9de5fe97 bl       #0x20d5a0
00253F30 a8835ef8 ldur     x8, [x29, #-0x18]
00253F34 164940f9 ldr      x22, [x8, #0x90]
00253F38 b60000b4 cbz      x22, #0x253f4c
00253F3C e00316aa mov      x0, x22
00253F40 088c44f8 ldr      x8, [x0, #0x48]!
00253F44 080940f9 ldr      x8, [x8, #0x10]
00253F48 00013fd6 blr      x8
00253F4C e00316aa mov      x0, x22
00253F50 c1008052 mov      w1, #6
00253F54 f30700f9 str      x19, [sp, #8]
00253F58 b6f4fe97 bl       #0x211230
00253F5C c88e44f8 ldr      x8, [x22, #0x48]!
00253F60 e00316aa mov      x0, x22
00253F64 080d40f9 ldr      x8, [x8, #0x18]
00253F68 00013fd6 blr      x8
00253F6C a0835ef8 ldur     x0, [x29, #-0x18]
00253F70 800000b4 cbz      x0, #0x253f80
00253F74 080c45f8 ldr      x8, [x0, #0x50]!
00253F78 080d40f9 ldr      x8, [x8, #0x18]
00253F7C 00013fd6 blr      x8
00253F80 a0035ff8 ldur     x0, [x29, #-0x10]
00253F84 a86300d1 sub      x8, x29, #0x18
00253F88 a14300d1 sub      x1, x29, #0x10
00253F8C f9e4f897 bl       #0x8d370
00253F90 f7031f2a mov      w23, wzr
00253F94 bb520191 add      x27, x21, #0x54
00253F98 ff1700b9 str      wzr, [sp, #0x14]
00253F9C bc6a0191 add      x28, x21, #0x5a
00253FA0 b4620191 add      x20, x21, #0x58
00253FA4 b35a0191 add      x19, x21, #0x56
00253FA8 367d8052 mov      w22, #0x3e9
00253FAC 06000014 b        #0x253fc4
00253FB0 e81740b9 ldr      w8, [sp, #0x14]
00253FB4 08050011 add      w8, w8, #1
00253FB8 1f890071 cmp      w8, #0x22
00253FBC e81700b9 str      w8, [sp, #0x14]
00253FC0 e0110054 b.eq     #0x2541fc
00253FC4 f8031f2a mov      w24, wzr
00253FC8 06000014 b        #0x253fe0
00253FCC 1f2003d5 nop      
00253FD0 f7060011 add      w23, w23, #1
00253FD4 18070011 add      w24, w24, #1
00253FD8 1f7b0071 cmp      w24, #0x1e
00253FDC a0feff54 b.eq     #0x253fb0
00253FE0 b9835ff8 ldur     x25, [x29, #-8]
00253FE4 a0835ef8 ldur     x0, [x29, #-0x18]
00253FE8 e01300f9 str      x0, [sp, #0x20]
00253FEC 800000b4 cbz      x0, #0x253ffc
00253FF0 088c44f8 ldr      x8, [x0, #0x48]!
00253FF4 080940f9 ldr      x8, [x8, #0x10]
00253FF8 00013fd6 blr      x8
00253FFC e21740b9 ldr      w2, [sp, #0x14]
00254000 e1830091 add      x1, sp, #0x20
00254004 e00319aa mov      x0, x25
00254008 e303182a mov      w3, w24
0025400C 5fb1fe97 bl       #0x200588
00254010 e01340f9 ldr      x0, [sp, #0x20]
00254014 a00000b4 cbz      x0, #0x254028
00254018 088c44f8 ldr      x8, [x0, #0x48]!
0025401C 080d40f9 ldr      x8, [x8, #0x18]
00254020 00013fd6 blr      x8
00254024 ff1300f9 str      xzr, [sp, #0x20]
00254028 a0835ef8 ldur     x0, [x29, #-0x18]
0025402C 57c9fe97 bl       #0x206588
00254030 20fd0737 tbnz     w0, #0, #0x253fd4
00254034 a0835ef8 ldur     x0, [x29, #-0x18]
00254038 e3cafe97 bl       #0x206bc4
0025403C e10300aa mov      x1, x0
00254040 e00740f9 ldr      x0, [sp, #8]
00254044 7cf5fe97 bl       #0x211634
00254048 a0835ff8 ldur     x0, [x29, #-8]
0025404C e203182a mov      w2, w24
00254050 e11740b9 ldr      w1, [sp, #0x14]
00254054 10bffe97 bl       #0x203c94
00254058 80000036 tbz      w0, #0, #0x254068
0025405C e00740f9 ldr      x0, [sp, #8]
00254060 e103172a mov      w1, w23
00254064 9ef5fe97 bl       #0x2116dc
00254068 a8835ef8 ldur     x8, [x29, #-0x18]
0025406C 193140f9 ldr      x25, [x8, #0x60]
00254070 9436ff97 bl       #0x221ac0
00254074 08919652 mov      w8, #0xb488
00254078 e800a072 movk     w8, #7, lsl #16
0025407C 086868f8 ldr      x8, [x0, x8]
00254080 3f0308eb cmp      x25, x8
00254084 41000054 b.ne     #0x25408c
00254088 b7c20079 strh     w23, [x21, #0x60]
0025408C f9031faa mov      x25, xzr
00254090 04000014 b        #0x2540a0
00254094 39070091 add      x25, x25, #1
00254098 3f1b00f1 cmp      x25, #6
0025409C a0f9ff54 b.eq     #0x253fd0
002540A0 8836ff97 bl       #0x221ac0
002540A4 080c198b add      x8, x0, x25, lsl #3
002540A8 098b9652 mov      w9, #0xb458
002540AC e900a072 movk     w9, #7, lsl #16
002540B0 086969f8 ldr      x8, [x8, x9]
002540B4 a9835ef8 ldur     x9, [x29, #-0x18]
002540B8 293140f9 ldr      x9, [x9, #0x60]
002540BC 1f0109eb cmp      x8, x9
002540C0 a1feff54 b.ne     #0x254094
002540C4 777b3978 strh     w23, [x27, x25, lsl #1]
002540C8 a8ba4079 ldrh     w8, [x21, #0x5c]
002540CC 1fa50f71 cmp      w8, #0x3e9
002540D0 00060054 b.eq     #0x254190
002540D4 88034079 ldrh     w8, [x28]
002540D8 1fa50f71 cmp      w8, #0x3e9
002540DC 60060054 b.eq     #0x2541a8
002540E0 88024079 ldrh     w8, [x20]
002540E4 1fa50f71 cmp      w8, #0x3e9
002540E8 c0060054 b.eq     #0x2541c0
002540EC 68024079 ldrh     w8, [x19]
002540F0 1fa50f71 cmp      w8, #0x3e9
002540F4 60070054 b.eq     #0x2541e0
002540F8 68034079 ldrh     w8, [x27]
002540FC 1fa50f71 cmp      w8, #0x3e9
00254100 c1000054 b.ne     #0x254118
00254104 680240f9 ldr      x8, [x19]
00254108 69124079 ldrh     w9, [x19, #8]
0025410C b6be0079 strh     w22, [x21, #0x5e]
00254110 69130079 strh     w9, [x27, #8]
00254114 680300f9 str      x8, [x27]
00254118 a8835ef8 ldur     x8, [x29, #-0x18]
0025411C 1a3140f9 ldr      x26, [x8, #0x60]
00254120 6836ff97 bl       #0x221ac0
00254124 08929652 mov      w8, #0xb490
00254128 e800a072 movk     w8, #7, lsl #16
0025412C 086868f8 ldr      x8, [x0, x8]
00254130 5f0308eb cmp      x26, x8
00254134 01fbff54 b.ne     #0x254094
00254138 e8630091 add      x8, sp, #0x18
0025413C 19e5fe97 bl       #0x20d5a0
00254140 e80f40f9 ldr      x8, [sp, #0x18]
00254144 1a4940f9 ldr      x26, [x8, #0x90]
00254148 ba0000b4 cbz      x26, #0x25415c
0025414C e0031aaa mov      x0, x26
00254150 088c44f8 ldr      x8, [x0, #0x48]!
00254154 080940f9 ldr      x8, [x8, #0x10]
00254158 00013fd6 blr      x8
0025415C e0031aaa mov      x0, x26
00254160 e103192a mov      w1, w25
00254164 33f4fe97 bl       #0x211230
00254168 488f44f8 ldr      x8, [x26, #0x48]!
0025416C e0031aaa mov      x0, x26
00254170 080d40f9 ldr      x8, [x8, #0x18]
00254174 00013fd6 blr      x8
00254178 e00f40f9 ldr      x0, [sp, #0x18]
0025417C c0f8ffb4 cbz      x0, #0x254094
00254180 080c45f8 ldr      x8, [x0, #0x50]!
00254184 080d40f9 ldr      x8, [x8, #0x18]
00254188 00013fd6 blr      x8
0025418C c2ffff17 b        #0x254094
00254190 a8be4079 ldrh     w8, [x21, #0x5e]
00254194 b6be0079 strh     w22, [x21, #0x5e]
00254198 a8ba0079 strh     w8, [x21, #0x5c]
0025419C 88034079 ldrh     w8, [x28]
002541A0 1fa50f71 cmp      w8, #0x3e9
002541A4 e1f9ff54 b.ne     #0x2540e0
002541A8 a85e40b9 ldr      w8, [x21, #0x5c]
002541AC b6be0079 strh     w22, [x21, #0x5e]
002541B0 a8a205b8 stur     w8, [x21, #0x5a]
002541B4 88024079 ldrh     w8, [x20]
002541B8 1fa50f71 cmp      w8, #0x3e9
002541BC 81f9ff54 b.ne     #0x2540ec
002541C0 880340b9 ldr      w8, [x28]
002541C4 890b4079 ldrh     w9, [x28, #4]
002541C8 b6be0079 strh     w22, [x21, #0x5e]
002541CC 890a0079 strh     w9, [x20, #4]
002541D0 880200b9 str      w8, [x20]
002541D4 68024079 ldrh     w8, [x19]
002541D8 1fa50f71 cmp      w8, #0x3e9
002541DC e1f8ff54 b.ne     #0x2540f8
002541E0 a82e40f9 ldr      x8, [x21, #0x58]
002541E4 b6be0079 strh     w22, [x21, #0x5e]
002541E8 a86205f8 stur     x8, [x21, #0x56]
002541EC 68034079 ldrh     w8, [x27]
002541F0 1fa50f71 cmp      w8, #0x3e9
002541F4 80f8ff54 b.eq     #0x254104
002541F8 c8ffff17 b        #0x254118
002541FC f30740f9 ldr      x19, [sp, #8]
00254200 e00313aa mov      x0, x19
00254204 c3f5fe97 bl       #0x211910
00254208 e8630091 add      x8, sp, #0x18
0025420C e5e4fe97 bl       #0x20d5a0
00254210 e80f40f9 ldr      x8, [sp, #0x18]
00254214 166540f9 ldr      x22, [x8, #0xc8]
00254218 b60000b4 cbz      x22, #0x25422c
0025421C e00316aa mov      x0, x22
00254220 088c44f8 ldr      x8, [x0, #0x48]!
00254224 080940f9 ldr      x8, [x8, #0x10]
00254228 00013fd6 blr      x8
0025422C e10340f9 ldr      x1, [sp]
00254230 c0da3f91 add      x0, x22, #0xff6
00254234 02128052 mov      w2, #0x90
00254238 ea880e94 bl       #0x5f65e0
0025423C c88e44f8 ldr      x8, [x22, #0x48]!
00254240 e00316aa mov      x0, x22
00254244 080d40f9 ldr      x8, [x8, #0x18]
00254248 00013fd6 blr      x8
0025424C e00f40f9 ldr      x0, [sp, #0x18]
00254250 800000b4 cbz      x0, #0x254260
00254254 080c45f8 ldr      x8, [x0, #0x50]!
00254258 080d40f9 ldr      x8, [x8, #0x18]
0025425C 00013fd6 blr      x8
00254260 a4e2fe97 bl       #0x20ccf0
00254264 a0835ef8 ldur     x0, [x29, #-0x18]
00254268 800000b4 cbz      x0, #0x254278
0025426C 088c44f8 ldr      x8, [x0, #0x48]!
00254270 080d40f9 ldr      x8, [x8, #0x18]
00254274 00013fd6 blr      x8
00254278 b50000b4 cbz      x21, #0x25428c
0025427C a88e44f8 ldr      x8, [x21, #0x48]!
00254280 e00315aa mov      x0, x21
00254284 080d40f9 ldr      x8, [x8, #0x18]
00254288 00013fd6 blr      x8
0025428C 688e44f8 ldr      x8, [x19, #0x48]!
00254290 e00313aa mov      x0, x19
00254294 080d40f9 ldr      x8, [x8, #0x18]
00254298 00013fd6 blr      x8
0025429C a0835ff8 ldur     x0, [x29, #-8]
002542A0 800000b4 cbz      x0, #0x2542b0
002542A4 088c44f8 ldr      x8, [x0, #0x48]!
002542A8 080d40f9 ldr      x8, [x8, #0x18]
002542AC 00013fd6 blr      x8
002542B0 f44f49a9 ldp      x20, x19, [sp, #0x90]
002542B4 f65748a9 ldp      x22, x21, [sp, #0x80]
002542B8 f85f47a9 ldp      x24, x23, [sp, #0x70]
002542BC fa6746a9 ldp      x26, x25, [sp, #0x60]
002542C0 fc6f45a9 ldp      x28, x27, [sp, #0x50]
002542C4 fd7b44a9 ldp      x29, x30, [sp, #0x40]
002542C8 ff830291 add      sp, sp, #0xa0
002542CC c0035fd6 ret      
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
### 0x25b330 (70 slots)
~~~asm
0025B330 ff0301d1 sub      sp, sp, #0x40
0025B334 fd7b01a9 stp      x29, x30, [sp, #0x10]
0025B338 f65702a9 stp      x22, x21, [sp, #0x20]
0025B33C f44f03a9 stp      x20, x19, [sp, #0x30]
0025B340 fd430091 add      x29, sp, #0x10
0025B344 f503012a mov      w21, w1
0025B348 f60300aa mov      x22, x0
0025B34C e30700f9 str      x3, [sp, #8]
0025B350 f30308aa mov      x19, x8
0025B354 e8030091 mov      x8, sp
0025B358 e1230091 add      x1, sp, #8
0025B35C e00303aa mov      x0, x3
0025B360 f403022a mov      w20, w2
0025B364 d21ffd97 bl       #0x1a32ac
0025B368 e00740f9 ldr      x0, [sp, #8]
0025B36C e1030091 mov      x1, sp
0025B370 e80313aa mov      x8, x19
0025B374 1520fd97 bl       #0x1a33c8
0025B378 730240f9 ldr      x19, [x19]
0025B37C 530100b4 cbz      x19, #0x25b3a4
0025B380 e00313aa mov      x0, x19
0025B384 088c44f8 ldr      x8, [x0, #0x48]!
0025B388 080940f9 ldr      x8, [x8, #0x10]
0025B38C 00013fd6 blr      x8
0025B390 bfae0471 cmp      w21, #0x12b
0025B394 e8030054 b.hi     #0x25b410
0025B398 9f760071 cmp      w20, #0x1d
0025B39C c9000054 b.ls     #0x25b3b4
0025B3A0 1c000014 b        #0x25b410
0025B3A4 bfae0471 cmp      w21, #0x12b
0025B3A8 c8030054 b.hi     #0x25b420
0025B3AC 9f760071 cmp      w20, #0x1d
0025B3B0 88030054 b.hi     #0x25b420
0025B3B4 080a8552 mov      w8, #0x2850
0025B3B8 092b8052 mov      w9, #0x158
0025B3BC a85aa89b umaddl   x8, w21, w8, x22
0025B3C0 e00313aa mov      x0, x19
0025B3C4 8822a99b umaddl   x8, w20, w9, x8
0025B3C8 01810191 add      x1, x8, #0x60
0025B3CC 14adfe97 bl       #0x20681c
0025B3D0 08dc8552 mov      w8, #0x2ee0
0025B3D4 09328052 mov      w9, #0x190
0025B3D8 a85aa89b umaddl   x8, w21, w8, x22
0025B3DC 8822a99b umaddl   x8, w20, w9, x8
0025B3E0 089d5791 add      x8, x8, #0x5e7, lsl #12
0025B3E4 08913391 add      x8, x8, #0xce4
0025B3E8 092940a9 ldp      x9, x10, [x8]
0025B3EC 692a06a9 stp      x9, x10, [x19, #0x60]
0025B3F0 092941a9 ldp      x9, x10, [x8, #0x10]
0025B3F4 0b3142a9 ldp      x11, x12, [x8, #0x20]
0025B3F8 6b3208a9 stp      x11, x12, [x19, #0x80]
0025B3FC 692a07a9 stp      x9, x10, [x19, #0x70]
0025B400 092943a9 ldp      x9, x10, [x8, #0x30]
0025B404 0b2144a9 ldp      x11, x8, [x8, #0x40]
0025B408 6b220aa9 stp      x11, x8, [x19, #0xa0]
0025B40C 692a09a9 stp      x9, x10, [x19, #0x90]
0025B410 688e44f8 ldr      x8, [x19, #0x48]!
0025B414 e00313aa mov      x0, x19
0025B418 080d40f9 ldr      x8, [x8, #0x18]
0025B41C 00013fd6 blr      x8
0025B420 e00340f9 ldr      x0, [sp]
0025B424 800000b4 cbz      x0, #0x25b434
0025B428 088c44f8 ldr      x8, [x0, #0x48]!
0025B42C 080d40f9 ldr      x8, [x8, #0x18]
0025B430 00013fd6 blr      x8
0025B434 f44f43a9 ldp      x20, x19, [sp, #0x30]
0025B438 f65742a9 ldp      x22, x21, [sp, #0x20]
0025B43C fd7b41a9 ldp      x29, x30, [sp, #0x10]
0025B440 ff030191 add      sp, sp, #0x40
0025B444 c0035fd6 ret      
~~~
### 0x25b448 (94 slots)
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
### 0x25b6ec (259 slots)
~~~asm
0025B6EC ff0303d1 sub      sp, sp, #0xc0
0025B6F0 fd7b07a9 stp      x29, x30, [sp, #0x70]
0025B6F4 fa6708a9 stp      x26, x25, [sp, #0x80]
0025B6F8 f85f09a9 stp      x24, x23, [sp, #0x90]
0025B6FC f6570aa9 stp      x22, x21, [sp, #0xa0]
0025B700 f44f0ba9 stp      x20, x19, [sp, #0xb0]
0025B704 fdc30191 add      x29, sp, #0x70
0025B708 f70303aa mov      x23, x3
0025B70C a82300d1 sub      x8, x29, #8
0025B710 e30304aa mov      x3, x4
0025B714 f403022a mov      w20, w2
0025B718 f503012a mov      w21, w1
0025B71C f60300aa mov      x22, x0
0025B720 04ffff97 bl       #0x25b330
0025B724 a0835ff8 ldur     x0, [x29, #-8]
0025B728 a01d00b4 cbz      x0, #0x25badc
0025B72C 97abfe97 bl       #0x206588
0025B730 c01c0037 tbnz     w0, #0, #0x25bac8
0025B734 a0835ff8 ldur     x0, [x29, #-8]
0025B738 23adfe97 bl       #0x206bc4
0025B73C 282a0090 adrp     x8, #0x79f000
0025B740 f30300aa mov      x19, x0
0025B744 082542f9 ldr      x8, [x8, #0x448]
0025B748 bfff3ea9 stp      xzr, xzr, [x29, #-0x18]
0025B74C 190140f9 ldr      x25, [x8]
0025B750 bfff3da9 stp      xzr, xzr, [x29, #-0x28]
0025B754 380b41f9 ldr      x24, [x25, #0x210]
0025B758 b80000b4 cbz      x24, #0x25b76c
0025B75C e00318aa mov      x0, x24
0025B760 088c44f8 ldr      x8, [x0, #0x48]!
0025B764 080940f9 ldr      x8, [x8, #0x10]
0025B768 00013fd6 blr      x8
0025B76C a1a300d1 sub      x1, x29, #0x28
0025B770 e00318aa mov      x0, x24
0025B774 baa300d1 sub      x26, x29, #0x28
0025B778 c5300094 bl       #0x267a8c
0025B77C 088f44f8 ldr      x8, [x24, #0x48]!
0025B780 e00318aa mov      x0, x24
0025B784 080d40f9 ldr      x8, [x8, #0x18]
0025B788 00013fd6 blr      x8
0025B78C e00313aa mov      x0, x19
0025B790 de600b94 bl       #0x533b08
0025B794 f803002a mov      w24, w0
0025B798 e1230091 add      x1, sp, #8
0025B79C e00313aa mov      x0, x19
0025B7A0 02048052 mov      w2, #0x20
0025B7A4 ffff03a9 stp      xzr, xzr, [sp, #0x38]
0025B7A8 ffff02a9 stp      xzr, xzr, [sp, #0x28]
0025B7AC ffff01a9 stp      xzr, xzr, [sp, #0x18]
0025B7B0 ffff00a9 stp      xzr, xzr, [sp, #8]
0025B7B4 d3600b94 bl       #0x533b00
0025B7B8 a8c35d38 ldurb    w8, [x29, #-0x24]
0025B7BC 1f03086b cmp      w24, w8
0025B7C0 81010054 b.ne     #0x25b7f0
0025B7C4 40077fb2 orr      x0, x26, #6
0025B7C8 42038052 mov      w2, #0x1a
0025B7CC e1230091 add      x1, sp, #8
0025B7D0 686c0e94 bl       #0x5f6970
0025B7D4 1f000071 cmp      w0, #0
0025B7D8 f8179f1a cset     w24, eq
0025B7DC e83a40b9 ldr      w8, [x23, #0x38]
0025B7E0 08050051 sub      w8, w8, #1
0025B7E4 1f050071 cmp      w8, #1
0025B7E8 e9000054 b.ls     #0x25b804
0025B7EC 0a000014 b        #0x25b814
0025B7F0 f8031f2a mov      w24, wzr
0025B7F4 e83a40b9 ldr      w8, [x23, #0x38]
0025B7F8 08050051 sub      w8, w8, #1
0025B7FC 1f050071 cmp      w8, #1
0025B800 a8000054 b.hi     #0x25b814
0025B804 e00313aa mov      x0, x19
0025B808 c2600b94 bl       #0x533b10
0025B80C 1f1c0072 tst      w0, #0xff
0025B810 c0010054 b.eq     #0x25b848
0025B814 a1a300d1 sub      x1, x29, #0x28
0025B818 e00313aa mov      x0, x19
0025B81C 47600b94 bl       #0x533938
0025B820 a0000036 tbz      w0, #0, #0x25b834
0025B824 e00313aa mov      x0, x19
0025B828 e1031f2a mov      w1, wzr
0025B82C a7600b94 bl       #0x533ac8
0025B830 0f000014 b        #0x25b86c
0025B834 b8000034 cbz      w24, #0x25b848
0025B838 e00313aa mov      x0, x19
0025B83C 21008052 mov      w1, #1
0025B840 a2600b94 bl       #0x533ac8
0025B844 0a000014 b        #0x25b86c
0025B848 41068052 mov      w1, #0x32
0025B84C e00313aa mov      x0, x19
0025B850 b2600b94 bl       #0x533b18
0025B854 e00313aa mov      x0, x19
0025B858 e1031f2a mov      w1, wzr
0025B85C b0560b94 bl       #0x53131c
0025B860 a1a300d1 sub      x1, x29, #0x28
0025B864 e00313aa mov      x0, x19
0025B868 4f600b94 bl       #0x5339a4
0025B86C e00313aa mov      x0, x19
0025B870 e1031f2a mov      w1, wzr
0025B874 2e570b94 bl       #0x53152c
0025B878 1f7c0071 cmp      w0, #0x1f
0025B87C 01010054 b.ne     #0x25b89c
0025B880 e00313aa mov      x0, x19
0025B884 e1031f2a mov      w1, wzr
0025B888 55570b94 bl       #0x5315dc
0025B88C 80000036 tbz      w0, #0, #0x25b89c
0025B890 e00313aa mov      x0, x19
0025B894 e1031f2a mov      w1, wzr
0025B898 3c580b94 bl       #0x531988
0025B89C e00313aa mov      x0, x19
0025B8A0 21008052 mov      w1, #1
0025B8A4 22570b94 bl       #0x53152c
0025B8A8 1f7c0071 cmp      w0, #0x1f
0025B8AC 01010054 b.ne     #0x25b8cc
0025B8B0 e00313aa mov      x0, x19
0025B8B4 21008052 mov      w1, #1
0025B8B8 49570b94 bl       #0x5315dc
0025B8BC 80000036 tbz      w0, #0, #0x25b8cc
0025B8C0 e00313aa mov      x0, x19
0025B8C4 21008052 mov      w1, #1
0025B8C8 30580b94 bl       #0x531988
0025B8CC e00313aa mov      x0, x19
0025B8D0 41008052 mov      w1, #2
0025B8D4 16570b94 bl       #0x53152c
0025B8D8 1f7c0071 cmp      w0, #0x1f
0025B8DC 01010054 b.ne     #0x25b8fc
0025B8E0 e00313aa mov      x0, x19
0025B8E4 41008052 mov      w1, #2
0025B8E8 3d570b94 bl       #0x5315dc
0025B8EC 80000036 tbz      w0, #0, #0x25b8fc
0025B8F0 e00313aa mov      x0, x19
0025B8F4 41008052 mov      w1, #2
0025B8F8 24580b94 bl       #0x531988
0025B8FC e00313aa mov      x0, x19
0025B900 61008052 mov      w1, #3
0025B904 0a570b94 bl       #0x53152c
0025B908 1f7c0071 cmp      w0, #0x1f
0025B90C 01010054 b.ne     #0x25b92c
0025B910 e00313aa mov      x0, x19
0025B914 61008052 mov      w1, #3
0025B918 31570b94 bl       #0x5315dc
0025B91C 80000036 tbz      w0, #0, #0x25b92c
0025B920 e00313aa mov      x0, x19
0025B924 61008052 mov      w1, #3
0025B928 18580b94 bl       #0x531988
0025B92C e00313aa mov      x0, x19
0025B930 81008052 mov      w1, #4
0025B934 fe560b94 bl       #0x53152c
0025B938 1f7c0071 cmp      w0, #0x1f
0025B93C 01010054 b.ne     #0x25b95c
0025B940 e00313aa mov      x0, x19
0025B944 81008052 mov      w1, #4
0025B948 25570b94 bl       #0x5315dc
0025B94C 80000036 tbz      w0, #0, #0x25b95c
0025B950 e00313aa mov      x0, x19
0025B954 81008052 mov      w1, #4
0025B958 0c580b94 bl       #0x531988
0025B95C a1008052 mov      w1, #5
0025B960 e00313aa mov      x0, x19
0025B964 f2560b94 bl       #0x53152c
0025B968 1f7c0071 cmp      w0, #0x1f
0025B96C 01010054 b.ne     #0x25b98c
0025B970 a1008052 mov      w1, #5
0025B974 e00313aa mov      x0, x19
0025B978 19570b94 bl       #0x5315dc
0025B97C 80000036 tbz      w0, #0, #0x25b98c
0025B980 a1008052 mov      w1, #5
0025B984 e00313aa mov      x0, x19
0025B988 00580b94 bl       #0x531988
0025B98C e00313aa mov      x0, x19
0025B990 8f550b94 bl       #0x530fcc
0025B994 e00313aa mov      x0, x19
0025B998 e1031f2a mov      w1, wzr
0025B99C 64600b94 bl       #0x533b2c
0025B9A0 b7835ff8 ldur     x23, [x29, #-8]
0025B9A4 570100b4 cbz      x23, #0x25b9cc
0025B9A8 e00317aa mov      x0, x23
0025B9AC 088c44f8 ldr      x8, [x0, #0x48]!
0025B9B0 080940f9 ldr      x8, [x8, #0x10]
0025B9B4 00013fd6 blr      x8
0025B9B8 bfae0471 cmp      w21, #0x12b
0025B9BC 68040054 b.hi     #0x25ba48
0025B9C0 9f760071 cmp      w20, #0x1d
0025B9C4 c9000054 b.ls     #0x25b9dc
0025B9C8 20000014 b        #0x25ba48
0025B9CC bfae0471 cmp      w21, #0x12b
0025B9D0 48040054 b.hi     #0x25ba58
0025B9D4 9f760071 cmp      w20, #0x1d
0025B9D8 08040054 b.hi     #0x25ba58
0025B9DC 080a8552 mov      w8, #0x2850
0025B9E0 092b8052 mov      w9, #0x158
0025B9E4 a85aa89b umaddl   x8, w21, w8, x22
0025B9E8 e00317aa mov      x0, x23
0025B9EC 8822a99b umaddl   x8, w20, w9, x8
0025B9F0 01810191 add      x1, x8, #0x60
0025B9F4 88abfe97 bl       #0x206814
0025B9F8 08dc8552 mov      w8, #0x2ee0
0025B9FC 09328052 mov      w9, #0x190
0025BA00 e12e40f9 ldr      x1, [x23, #0x58]
0025BA04 a85aa89b umaddl   x8, w21, w8, x22
0025BA08 9422a99b umaddl   x20, w20, w9, x8
0025BA0C 889e5791 add      x8, x20, #0x5e7, lsl #12
0025BA10 00812f91 add      x0, x8, #0xbe0
0025BA14 9a810a94 bl       #0x4fc07c
0025BA18 e92246a9 ldp      x9, x8, [x23, #0x60]
0025BA1C 8a9e5791 add      x10, x20, #0x5e7, lsl #12
0025BA20 4a913391 add      x10, x10, #0xce4
0025BA24 492100a9 stp      x9, x8, [x10]
0025BA28 e82648a9 ldp      x8, x9, [x23, #0x80]
0025BA2C ec2e47a9 ldp      x12, x11, [x23, #0x70]
0025BA30 482502a9 stp      x8, x9, [x10, #0x20]
0025BA34 4c2d01a9 stp      x12, x11, [x10, #0x10]
0025BA38 e8264aa9 ldp      x8, x9, [x23, #0xa0]
0025BA3C ec2e49a9 ldp      x12, x11, [x23, #0x90]
0025BA40 482504a9 stp      x8, x9, [x10, #0x40]
0025BA44 4c2d03a9 stp      x12, x11, [x10, #0x30]
0025BA48 e88e44f8 ldr      x8, [x23, #0x48]!
0025BA4C e00317aa mov      x0, x23
0025BA50 080d40f9 ldr      x8, [x8, #0x18]
0025BA54 00013fd6 blr      x8
0025BA58 341341f9 ldr      x20, [x25, #0x220]
0025BA5C b40000b4 cbz      x20, #0x25ba70
0025BA60 e00314aa mov      x0, x20
0025BA64 088c44f8 ldr      x8, [x0, #0x48]!
0025BA68 080940f9 ldr      x8, [x8, #0x10]
0025BA6C 00013fd6 blr      x8
0025BA70 e00314aa mov      x0, x20
0025BA74 e10313aa mov      x1, x19
0025BA78 e2031f2a mov      w2, wzr
0025BA7C 7d480094 bl       #0x26dc70
0025BA80 888e44f8 ldr      x8, [x20, #0x48]!
0025BA84 e00314aa mov      x0, x20
0025BA88 080d40f9 ldr      x8, [x8, #0x18]
0025BA8C 00013fd6 blr      x8
0025BA90 341341f9 ldr      x20, [x25, #0x220]
0025BA94 b40000b4 cbz      x20, #0x25baa8
0025BA98 e00314aa mov      x0, x20
0025BA9C 088c44f8 ldr      x8, [x0, #0x48]!
0025BAA0 080940f9 ldr      x8, [x8, #0x10]
0025BAA4 00013fd6 blr      x8
0025BAA8 e00314aa mov      x0, x20
0025BAAC e10313aa mov      x1, x19
0025BAB0 e2031f2a mov      w2, wzr
0025BAB4 744a0094 bl       #0x26e484
0025BAB8 888e44f8 ldr      x8, [x20, #0x48]!
0025BABC e00314aa mov      x0, x20
0025BAC0 080d40f9 ldr      x8, [x8, #0x18]
0025BAC4 00013fd6 blr      x8
0025BAC8 a0835ff8 ldur     x0, [x29, #-8]
0025BACC 800000b4 cbz      x0, #0x25badc
0025BAD0 088c44f8 ldr      x8, [x0, #0x48]!
0025BAD4 080d40f9 ldr      x8, [x8, #0x18]
0025BAD8 00013fd6 blr      x8
0025BADC f44f4ba9 ldp      x20, x19, [sp, #0xb0]
0025BAE0 f6574aa9 ldp      x22, x21, [sp, #0xa0]
0025BAE4 f85f49a9 ldp      x24, x23, [sp, #0x90]
0025BAE8 fa6748a9 ldp      x26, x25, [sp, #0x80]
0025BAEC fd7b47a9 ldp      x29, x30, [sp, #0x70]
0025BAF0 ff030391 add      sp, sp, #0xc0
0025BAF4 c0035fd6 ret      
~~~
### 0x271aac (26 slots)
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
### 0x271b14 (36 slots)
~~~asm
00271B14 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00271B18 f50b00f9 str      x21, [sp, #0x10]
00271B1C f44f02a9 stp      x20, x19, [sp, #0x20]
00271B20 fd030091 mov      x29, sp
00271B24 13600691 add      x19, x0, #0x198
00271B28 f40300aa mov      x20, x0
00271B2C e00313aa mov      x0, x19
00271B30 c8120e94 bl       #0x5f6650
00271B34 80be40f9 ldr      x0, [x20, #0x178]
00271B38 200200b4 cbz      x0, #0x271b7c
00271B3C d7240094 bl       #0x27ae98
00271B40 95be40f9 ldr      x21, [x20, #0x178]
00271B44 9fbe00f9 str      xzr, [x20, #0x178]
00271B48 b50100b4 cbz      x21, #0x271b7c
00271B4C a00640f9 ldr      x0, [x21, #8]
00271B50 a00000b4 cbz      x0, #0x271b64
00271B54 088c44f8 ldr      x8, [x0, #0x48]!
00271B58 080d40f9 ldr      x8, [x8, #0x18]
00271B5C 00013fd6 blr      x8
00271B60 bf0600f9 str      xzr, [x21, #8]
00271B64 800a58a9 ldp      x0, x2, [x20, #0x180]
00271B68 e10315aa mov      x1, x21
00271B6C 83ca40f9 ldr      x3, [x20, #0x190]
00271B70 080040f9 ldr      x8, [x0]
00271B74 080d40f9 ldr      x8, [x8, #0x18]
00271B78 00013fd6 blr      x8
00271B7C 682900d0 adrp     x8, #0x79f000
00271B80 81a20291 add      x1, x20, #0xa8
00271B84 08a942f9 ldr      x8, [x8, #0x550]
00271B88 000140f9 ldr      x0, [x8]
00271B8C c3a30994 bl       #0x4daa98
00271B90 e00313aa mov      x0, x19
00271B94 f44f42a9 ldp      x20, x19, [sp, #0x20]
00271B98 f50b40f9 ldr      x21, [sp, #0x10]
00271B9C fd7bc3a8 ldp      x29, x30, [sp], #0x30
00271BA0 b0120e14 b        #0x5f6660
~~~
### 0x271ba4 (20 slots)
~~~asm
00271BA4 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
00271BA8 f50b00f9 str      x21, [sp, #0x10]
00271BAC f44f02a9 stp      x20, x19, [sp, #0x20]
00271BB0 fd030091 mov      x29, sp
00271BB4 280040b9 ldr      w8, [x1]
00271BB8 14e00391 add      x20, x0, #0xf8
00271BBC 15600491 add      x21, x0, #0x118
00271BC0 f30301aa mov      x19, x1
00271BC4 1f010071 cmp      w8, #0
00271BC8 8802959a csel     x8, x20, x21, eq
00271BCC 000140f9 ldr      x0, [x8]
00271BD0 900b0094 bl       #0x274a10
00271BD4 680240b9 ldr      w8, [x19]
00271BD8 1f010071 cmp      w8, #0
00271BDC 8802959a csel     x8, x20, x21, eq
00271BE0 f44f42a9 ldp      x20, x19, [sp, #0x20]
00271BE4 f50b40f9 ldr      x21, [sp, #0x10]
00271BE8 000140f9 ldr      x0, [x8]
00271BEC fd7bc3a8 ldp      x29, x30, [sp], #0x30
00271BF0 a80a0014 b        #0x274690
~~~
### 0x274640 (20 slots)
~~~asm
00274640 fd7bbea9 stp      x29, x30, [sp, #-0x20]!
00274644 f30b00f9 str      x19, [sp, #0x10]
00274648 fd030091 mov      x29, sp
0027464C f30300aa mov      x19, x0
00274650 005040f9 ldr      x0, [x0, #0xa0]
00274654 800100b4 cbz      x0, #0x274684
00274658 7e180094 bl       #0x27a850
0027465C 1f080071 cmp      w0, #2
00274660 61000054 b.ne     #0x27466c
00274664 e00313aa mov      x0, x19
00274668 0a000094 bl       #0x274690
0027466C 605240f9 ldr      x0, [x19, #0xa0]
00274670 a00000b4 cbz      x0, #0x274684
00274674 088c44f8 ldr      x8, [x0, #0x48]!
00274678 080d40f9 ldr      x8, [x8, #0x18]
0027467C 00013fd6 blr      x8
00274680 7f5200f9 str      xzr, [x19, #0xa0]
00274684 f30b40f9 ldr      x19, [sp, #0x10]
00274688 fd7bc2a8 ldp      x29, x30, [sp], #0x20
0027468C c0035fd6 ret      
~~~
### 0x274690 (124 slots)
~~~asm
00274690 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
00274694 fc6f01a9 stp      x28, x27, [sp, #0x10]
00274698 fa6702a9 stp      x26, x25, [sp, #0x20]
0027469C f85f03a9 stp      x24, x23, [sp, #0x30]
002746A0 f65704a9 stp      x22, x21, [sp, #0x40]
002746A4 f44f05a9 stp      x20, x19, [sp, #0x50]
002746A8 fd030091 mov      x29, sp
002746AC 18644ba9 ldp      x24, x25, [x0, #0xb0]
002746B0 f30300aa mov      x19, x0
002746B4 1f0319eb cmp      x24, x25
002746B8 400c0054 b.eq     #0x274840
002746BC 742900d0 adrp     x20, #0x7a2000
002746C0 562900f0 adrp     x22, #0x79f000
002746C4 948247f9 ldr      x20, [x20, #0xf00]
002746C8 7c2900d0 adrp     x28, #0x7a2000
002746CC d64e42f9 ldr      x22, [x22, #0x498]
002746D0 9c8747f9 ldr      x28, [x28, #0xf08]
002746D4 0d000014 b        #0x274708
002746D8 f7031faa mov      x23, xzr
002746DC e80240f9 ldr      x8, [x23]
002746E0 e00317aa mov      x0, x23
002746E4 082140f9 ldr      x8, [x8, #0x40]
002746E8 00013fd6 blr      x8
002746EC e88e44f8 ldr      x8, [x23, #0x48]!
002746F0 e00317aa mov      x0, x23
002746F4 080d40f9 ldr      x8, [x8, #0x18]
002746F8 00013fd6 blr      x8
002746FC 18230091 add      x24, x24, #8
00274700 1f0319eb cmp      x24, x25
00274704 e0090054 b.eq     #0x274840
00274708 080340f9 ldr      x8, [x24]
0027470C 88ffffb4 cbz      x8, #0x2746fc
00274710 08510191 add      x8, x8, #0x54
00274714 08fddf88 ldar     w8, [x8]
00274718 28ffff34 cbz      w8, #0x2746fc
0027471C 170340f9 ldr      x23, [x24]
00274720 f7fdffb4 cbz      x23, #0x2746dc
00274724 f55640b9 ldr      w21, [x23, #0x54]
00274728 95fdff34 cbz      w21, #0x2746d8
0027472C fa520191 add      x26, x23, #0x54
00274730 06000014 b        #0x274748
00274734 5f3f03d5 clrex    
00274738 e9031f2a mov      w9, wzr
0027473C 9f070037 tbnz     wzr, #0, #0x27482c
00274740 f503082a mov      w21, w8
00274744 a8fcff34 cbz      w8, #0x2746d8
00274748 fb2e40f9 ldr      x27, [x23, #0x58]
0027474C 88fedf08 ldarb    w8, [x20]
00274750 48020036 tbz      w8, #0, #0x274798
00274754 7f031ceb cmp      x27, x28
00274758 e0000054 b.eq     #0x274774
0027475C 1f2003d5 nop      
00274760 7b0340f9 ldr      x27, [x27]
00274764 7f031ceb cmp      x27, x28
00274768 641b40fa ccmp     x27, #0, #4, ne
0027476C a1ffff54 b.ne     #0x274760
00274770 5bfbffb4 cbz      x27, #0x2746d8
00274774 487f5f88 ldxr     w8, [x26]
00274778 1f01156b cmp      w8, w21
0027477C c1fdff54 b.ne     #0x274734
00274780 a9060011 add      w9, w21, #1
00274784 497f0a88 stxr     w10, w9, [x26]
00274788 8afdff35 cbnz     w10, #0x274738
0027478C 29008052 mov      w9, #1
00274790 89fd0736 tbz      w9, #0, #0x274740
00274794 26000014 b        #0x27482c
00274798 e00314aa mov      x0, x20
0027479C 8d060e94 bl       #0x5f61d0
002747A0 a0fdff34 cbz      w0, #0x274754
002747A4 482900f0 adrp     x8, #0x79f000
002747A8 08c943f9 ldr      x8, [x8, #0x790]
002747AC 08fddf08 ldarb    w8, [x8]
002747B0 e8000036 tbz      w8, #0, #0x2747cc
002747B4 482900f0 adrp     x8, #0x79f000
002747B8 e00314aa mov      x0, x20
002747BC 08cd43f9 ldr      x8, [x8, #0x798]
002747C0 880300f9 str      x8, [x28]
002747C4 87060e94 bl       #0x5f61e0
002747C8 e3ffff17 b        #0x274754
002747CC 402900f0 adrp     x0, #0x79f000
002747D0 00c843f9 ldr      x0, [x0, #0x790]
002747D4 7f060e94 bl       #0x5f61d0
002747D8 e0feff34 cbz      w0, #0x2747b4
002747DC c8fedf08 ldarb    w8, [x22]
002747E0 48010036 tbz      w8, #0, #0x274808
002747E4 482900f0 adrp     x8, #0x79f000
002747E8 492900f0 adrp     x9, #0x79f000
002747EC 085142f9 ldr      x8, [x8, #0x4a0]
002747F0 29cd43f9 ldr      x9, [x9, #0x798]
002747F4 402900f0 adrp     x0, #0x79f000
002747F8 280100f9 str      x8, [x9]
002747FC 00c843f9 ldr      x0, [x0, #0x790]
00274800 78060e94 bl       #0x5f61e0
00274804 ecffff17 b        #0x2747b4
00274808 e00316aa mov      x0, x22
0027480C 71060e94 bl       #0x5f61d0
00274810 a0feff34 cbz      w0, #0x2747e4
00274814 482900f0 adrp     x8, #0x79f000
00274818 e00316aa mov      x0, x22
0027481C 085142f9 ldr      x8, [x8, #0x4a0]
00274820 1f0100f9 str      xzr, [x8]
00274824 6f060e94 bl       #0x5f61e0
00274828 efffff17 b        #0x2747e4
0027482C e83240f9 ldr      x8, [x23, #0x60]
00274830 094101d1 sub      x9, x8, #0x50
00274834 1f0100f1 cmp      x8, #0
00274838 f703899a csel     x23, xzr, x9, eq
0027483C a8ffff17 b        #0x2746dc
00274840 744e51a9 ldp      x20, x19, [x19, #0x110]
00274844 9f0213eb cmp      x20, x19
00274848 e0000054 b.eq     #0x274864
0027484C 1f2003d5 nop      
00274850 80820091 add      x0, x20, #0x20
00274854 880648f8 ldr      x8, [x20], #0x80
00274858 00013fd6 blr      x8
0027485C 9f0213eb cmp      x20, x19
00274860 81ffff54 b.ne     #0x274850
00274864 f44f45a9 ldp      x20, x19, [sp, #0x50]
00274868 f65744a9 ldp      x22, x21, [sp, #0x40]
0027486C f85f43a9 ldp      x24, x23, [sp, #0x30]
00274870 fa6742a9 ldp      x26, x25, [sp, #0x20]
00274874 fc6f41a9 ldp      x28, x27, [sp, #0x10]
00274878 fd7bc6a8 ldp      x29, x30, [sp], #0x60
0027487C c0035fd6 ret      
~~~
### 0x274c00 (124 slots)
~~~asm
00274C00 fd7bbaa9 stp      x29, x30, [sp, #-0x60]!
00274C04 fc6f01a9 stp      x28, x27, [sp, #0x10]
00274C08 fa6702a9 stp      x26, x25, [sp, #0x20]
00274C0C f85f03a9 stp      x24, x23, [sp, #0x30]
00274C10 f65704a9 stp      x22, x21, [sp, #0x40]
00274C14 f44f05a9 stp      x20, x19, [sp, #0x50]
00274C18 fd030091 mov      x29, sp
00274C1C 18644ba9 ldp      x24, x25, [x0, #0xb0]
00274C20 f30300aa mov      x19, x0
00274C24 1f0319eb cmp      x24, x25
00274C28 400c0054 b.eq     #0x274db0
00274C2C 742900d0 adrp     x20, #0x7a2000
00274C30 562900f0 adrp     x22, #0x79f000
00274C34 948247f9 ldr      x20, [x20, #0xf00]
00274C38 7c2900d0 adrp     x28, #0x7a2000
00274C3C d64e42f9 ldr      x22, [x22, #0x498]
00274C40 9c8747f9 ldr      x28, [x28, #0xf08]
00274C44 0d000014 b        #0x274c78
00274C48 f7031faa mov      x23, xzr
00274C4C e80240f9 ldr      x8, [x23]
00274C50 e00317aa mov      x0, x23
00274C54 082540f9 ldr      x8, [x8, #0x48]
00274C58 00013fd6 blr      x8
00274C5C e88e44f8 ldr      x8, [x23, #0x48]!
00274C60 e00317aa mov      x0, x23
00274C64 080d40f9 ldr      x8, [x8, #0x18]
00274C68 00013fd6 blr      x8
00274C6C 18230091 add      x24, x24, #8
00274C70 1f0319eb cmp      x24, x25
00274C74 e0090054 b.eq     #0x274db0
00274C78 080340f9 ldr      x8, [x24]
00274C7C 88ffffb4 cbz      x8, #0x274c6c
00274C80 08510191 add      x8, x8, #0x54
00274C84 08fddf88 ldar     w8, [x8]
00274C88 28ffff34 cbz      w8, #0x274c6c
00274C8C 170340f9 ldr      x23, [x24]
00274C90 f7fdffb4 cbz      x23, #0x274c4c
00274C94 f55640b9 ldr      w21, [x23, #0x54]
00274C98 95fdff34 cbz      w21, #0x274c48
00274C9C fa520191 add      x26, x23, #0x54
00274CA0 06000014 b        #0x274cb8
00274CA4 5f3f03d5 clrex    
00274CA8 e9031f2a mov      w9, wzr
00274CAC 9f070037 tbnz     wzr, #0, #0x274d9c
00274CB0 f503082a mov      w21, w8
00274CB4 a8fcff34 cbz      w8, #0x274c48
00274CB8 fb2e40f9 ldr      x27, [x23, #0x58]
00274CBC 88fedf08 ldarb    w8, [x20]
00274CC0 48020036 tbz      w8, #0, #0x274d08
00274CC4 7f031ceb cmp      x27, x28
00274CC8 e0000054 b.eq     #0x274ce4
00274CCC 1f2003d5 nop      
00274CD0 7b0340f9 ldr      x27, [x27]
00274CD4 7f031ceb cmp      x27, x28
00274CD8 641b40fa ccmp     x27, #0, #4, ne
00274CDC a1ffff54 b.ne     #0x274cd0
00274CE0 5bfbffb4 cbz      x27, #0x274c48
00274CE4 487f5f88 ldxr     w8, [x26]
00274CE8 1f01156b cmp      w8, w21
00274CEC c1fdff54 b.ne     #0x274ca4
00274CF0 a9060011 add      w9, w21, #1
00274CF4 497f0a88 stxr     w10, w9, [x26]
00274CF8 8afdff35 cbnz     w10, #0x274ca8
00274CFC 29008052 mov      w9, #1
00274D00 89fd0736 tbz      w9, #0, #0x274cb0
00274D04 26000014 b        #0x274d9c
00274D08 e00314aa mov      x0, x20
00274D0C 31050e94 bl       #0x5f61d0
00274D10 a0fdff34 cbz      w0, #0x274cc4
00274D14 482900f0 adrp     x8, #0x79f000
00274D18 08c943f9 ldr      x8, [x8, #0x790]
00274D1C 08fddf08 ldarb    w8, [x8]
00274D20 e8000036 tbz      w8, #0, #0x274d3c
00274D24 482900f0 adrp     x8, #0x79f000
00274D28 e00314aa mov      x0, x20
00274D2C 08cd43f9 ldr      x8, [x8, #0x798]
00274D30 880300f9 str      x8, [x28]
00274D34 2b050e94 bl       #0x5f61e0
00274D38 e3ffff17 b        #0x274cc4
00274D3C 402900f0 adrp     x0, #0x79f000
00274D40 00c843f9 ldr      x0, [x0, #0x790]
00274D44 23050e94 bl       #0x5f61d0
00274D48 e0feff34 cbz      w0, #0x274d24
00274D4C c8fedf08 ldarb    w8, [x22]
00274D50 48010036 tbz      w8, #0, #0x274d78
00274D54 482900f0 adrp     x8, #0x79f000
00274D58 492900f0 adrp     x9, #0x79f000
00274D5C 085142f9 ldr      x8, [x8, #0x4a0]
00274D60 29cd43f9 ldr      x9, [x9, #0x798]
00274D64 402900f0 adrp     x0, #0x79f000
00274D68 280100f9 str      x8, [x9]
00274D6C 00c843f9 ldr      x0, [x0, #0x790]
00274D70 1c050e94 bl       #0x5f61e0
00274D74 ecffff17 b        #0x274d24
00274D78 e00316aa mov      x0, x22
00274D7C 15050e94 bl       #0x5f61d0
00274D80 a0feff34 cbz      w0, #0x274d54
00274D84 482900f0 adrp     x8, #0x79f000
00274D88 e00316aa mov      x0, x22
00274D8C 085142f9 ldr      x8, [x8, #0x4a0]
00274D90 1f0100f9 str      xzr, [x8]
00274D94 13050e94 bl       #0x5f61e0
00274D98 efffff17 b        #0x274d54
00274D9C e83240f9 ldr      x8, [x23, #0x60]
00274DA0 094101d1 sub      x9, x8, #0x50
00274DA4 1f0100f1 cmp      x8, #0
00274DA8 f703899a csel     x23, xzr, x9, eq
00274DAC a8ffff17 b        #0x274c4c
00274DB0 744e54a9 ldp      x20, x19, [x19, #0x140]
00274DB4 9f0213eb cmp      x20, x19
00274DB8 e0000054 b.eq     #0x274dd4
00274DBC 1f2003d5 nop      
00274DC0 80820091 add      x0, x20, #0x20
00274DC4 880648f8 ldr      x8, [x20], #0x80
00274DC8 00013fd6 blr      x8
00274DCC 9f0213eb cmp      x20, x19
00274DD0 81ffff54 b.ne     #0x274dc0
00274DD4 f44f45a9 ldp      x20, x19, [sp, #0x50]
00274DD8 f65744a9 ldp      x22, x21, [sp, #0x40]
00274DDC f85f43a9 ldp      x24, x23, [sp, #0x30]
00274DE0 fa6742a9 ldp      x26, x25, [sp, #0x20]
00274DE4 fc6f41a9 ldp      x28, x27, [sp, #0x10]
00274DE8 fd7bc6a8 ldp      x29, x30, [sp], #0x60
00274DEC c0035fd6 ret      
~~~
### 0x27a1ac (28 slots)
~~~asm
0027A1AC ffc300d1 sub      sp, sp, #0x30
0027A1B0 fd7b01a9 stp      x29, x30, [sp, #0x10]
0027A1B4 f44f02a9 stp      x20, x19, [sp, #0x20]
0027A1B8 fd430091 add      x29, sp, #0x10
0027A1BC 342900b0 adrp     x20, #0x79f000
0027A1C0 f30300aa mov      x19, x0
0027A1C4 942642f9 ldr      x20, [x20, #0x448]
0027A1C8 a11300d1 sub      x1, x29, #4
0027A1CC bfc31fb8 stur     wzr, [x29, #-4]
0027A1D0 800240f9 ldr      x0, [x20]
0027A1D4 23dcff97 bl       #0x271260
0027A1D8 1ae9ff97 bl       #0x274640
0027A1DC 800240f9 ldr      x0, [x20]
0027A1E0 28008052 mov      w8, #1
0027A1E4 e1230091 add      x1, sp, #8
0027A1E8 e80b00b9 str      w8, [sp, #8]
0027A1EC 1ddcff97 bl       #0x271260
0027A1F0 14e9ff97 bl       #0x274640
0027A1F4 600640f9 ldr      x0, [x19, #8]
0027A1F8 a00000b4 cbz      x0, #0x27a20c
0027A1FC 088c44f8 ldr      x8, [x0, #0x48]!
0027A200 080d40f9 ldr      x8, [x8, #0x18]
0027A204 00013fd6 blr      x8
0027A208 7f0600f9 str      xzr, [x19, #8]
0027A20C f44f42a9 ldp      x20, x19, [sp, #0x20]
0027A210 fd7b41a9 ldp      x29, x30, [sp, #0x10]
0027A214 ffc30091 add      sp, sp, #0x30
0027A218 c0035fd6 ret      
~~~
### 0x27ae98 (54 slots)
~~~asm
0027AE98 080440f9 ldr      x8, [x0, #8]
0027AE9C 880600b4 cbz      x8, #0x27af6c
0027AEA0 fd7bbda9 stp      x29, x30, [sp, #-0x30]!
0027AEA4 f50b00f9 str      x21, [sp, #0x10]
0027AEA8 f44f02a9 stp      x20, x19, [sp, #0x20]
0027AEAC fd030091 mov      x29, sp
0027AEB0 080040b9 ldr      w8, [x0]
0027AEB4 342900b0 adrp     x20, #0x79f000
0027AEB8 29008052 mov      w9, #1
0027AEBC 942642f9 ldr      x20, [x20, #0x448]
0027AEC0 ca028052 mov      w10, #0x16
0027AEC4 f30300aa mov      x19, x0
0027AEC8 2921c81a lsl      w9, w9, w8
0027AECC 1f110071 cmp      w8, #4
0027AED0 29010a0a and      w9, w9, w10
0027AED4 2499407a ccmp     w9, #0, #4, ls
0027AED8 a0010054 b.eq     #0x27af0c
0027AEDC 800240f9 ldr      x0, [x20]
0027AEE0 a1730091 add      x1, x29, #0x1c
0027AEE4 bf1f00b9 str      wzr, [x29, #0x1c]
0027AEE8 ded8ff97 bl       #0x271260
0027AEEC b9e6ff97 bl       #0x2749d0
0027AEF0 800240f9 ldr      x0, [x20]
0027AEF4 a1730091 add      x1, x29, #0x1c
0027AEF8 bf1f00b9 str      wzr, [x29, #0x1c]
0027AEFC d9d8ff97 bl       #0x271260
0027AF00 08600291 add      x8, x0, #0x98
0027AF04 1ffd9f08 stlrb    wzr, [x8]
0027AF08 680240b9 ldr      w8, [x19]
0027AF0C 080d0051 sub      w8, w8, #3
0027AF10 1f050071 cmp      w8, #1
0027AF14 a8010054 b.hi     #0x27af48
0027AF18 800240f9 ldr      x0, [x20]
0027AF1C 35008052 mov      w21, #1
0027AF20 a1730091 add      x1, x29, #0x1c
0027AF24 b51f00b9 str      w21, [x29, #0x1c]
0027AF28 ced8ff97 bl       #0x271260
0027AF2C a9e6ff97 bl       #0x2749d0
0027AF30 800240f9 ldr      x0, [x20]
0027AF34 a1730091 add      x1, x29, #0x1c
0027AF38 b51f00b9 str      w21, [x29, #0x1c]
0027AF3C c9d8ff97 bl       #0x271260
0027AF40 08600291 add      x8, x0, #0x98
0027AF44 1ffd9f08 stlrb    wzr, [x8]
0027AF48 600640f9 ldr      x0, [x19, #8]
0027AF4C a00000b4 cbz      x0, #0x27af60
0027AF50 088c44f8 ldr      x8, [x0, #0x48]!
0027AF54 080d40f9 ldr      x8, [x8, #0x18]
0027AF58 00013fd6 blr      x8
0027AF5C 7f0600f9 str      xzr, [x19, #8]
0027AF60 f44f42a9 ldp      x20, x19, [sp, #0x20]
0027AF64 f50b40f9 ldr      x21, [sp, #0x10]
0027AF68 fd7bc3a8 ldp      x29, x30, [sp], #0x30
0027AF6C c0035fd6 ret      
~~~
### 0x285000 (283 slots)
~~~asm
00285000 ff4303d1 sub      sp, sp, #0xd0
00285004 fd7b07a9 stp      x29, x30, [sp, #0x70]
00285008 fb4300f9 str      x27, [sp, #0x80]
0028500C fa6709a9 stp      x26, x25, [sp, #0x90]
00285010 f85f0aa9 stp      x24, x23, [sp, #0xa0]
00285014 f6570ba9 stp      x22, x21, [sp, #0xb0]
00285018 f44f0ca9 stp      x20, x19, [sp, #0xc0]
0028501C fdc30191 add      x29, sp, #0x70
00285020 3f800071 cmp      w1, #0x20
00285024 48210054 b.hi     #0x28544c
00285028 f303022a mov      w19, w2
0028502C 5f740071 cmp      w2, #0x1d
00285030 e8200054 b.hi     #0x28544c
00285034 f50300aa mov      x21, x0
00285038 000440f9 ldr      x0, [x0, #8]
0028503C f403012a mov      w20, w1
00285040 a8630091 add      x8, x29, #0x18
00285044 e1430091 add      x1, sp, #0x10
00285048 e00b00f9 str      x0, [sp, #0x10]
0028504C f60303aa mov      x22, x3
00285050 b21afa97 bl       #0x10bb18
00285054 b70f40f9 ldr      x23, [x29, #0x18]
00285058 b70000b4 cbz      x23, #0x28506c
0028505C e00317aa mov      x0, x23
00285060 088c44f8 ldr      x8, [x0, #0x48]!
00285064 080940f9 ldr      x8, [x8, #0x10]
00285068 00013fd6 blr      x8
0028506C a8fa44f9 ldr      x8, [x21, #0x9f0]
00285070 090a8552 mov      w9, #0x2850
00285074 e00317aa mov      x0, x23
00285078 8822a99b umaddl   x8, w20, w9, x8
0028507C 092b8052 mov      w9, #0x158
00285080 6122a99b umaddl   x1, w19, w9, x8
00285084 38dd0994 bl       #0x4fc564
00285088 e00317aa mov      x0, x23
0028508C cdba0a94 bl       #0x533bc0
00285090 e88e44f8 ldr      x8, [x23, #0x48]!
00285094 e00317aa mov      x0, x23
00285098 080d40f9 ldr      x8, [x8, #0x18]
0028509C 00013fd6 blr      x8
002850A0 a00f40f9 ldr      x0, [x29, #0x18]
002850A4 34b00a94 bl       #0x531174
002850A8 a00f40f9 ldr      x0, [x29, #0x18]
002850AC 001d00b4 cbz      x0, #0x28544c
002850B0 31b00a94 bl       #0x531174
002850B4 201c0037 tbnz     w0, #0, #0x285438
002850B8 f92a0090 adrp     x25, #0x7e1000
002850BC 39831891 add      x25, x25, #0x620
002850C0 280340f9 ldr      x8, [x25]
002850C4 bf7f3fa9 stp      xzr, xzr, [x29, #-0x10]
002850C8 bf7f3ea9 stp      xzr, xzr, [x29, #-0x20]
002850CC 1a6d5da9 ldp      x26, x27, [x8, #0x1d0]
002850D0 5f031beb cmp      x26, x27
002850D4 80020054 b.eq     #0x285124
002850D8 1f2003d5 nop      
002850DC 1f2003d5 nop      
002850E0 570340f9 ldr      x23, [x26]
002850E4 e00317aa mov      x0, x23
002850E8 080c45f8 ldr      x8, [x0, #0x50]!
002850EC 080140f9 ldr      x8, [x8]
002850F0 00013fd6 blr      x8
002850F4 f80300aa mov      x24, x0
002850F8 6967fb97 bl       #0x15ee9c
002850FC 1f0018eb cmp      x0, x24
00285100 60010054 b.eq     #0x28512c
00285104 180340f9 ldr      x24, [x24]
00285108 1f0300eb cmp      x24, x0
0028510C 041b40fa ccmp     x24, #0, #4, ne
00285110 a1ffff54 b.ne     #0x285104
00285114 b80000b5 cbnz     x24, #0x285128
00285118 5a230091 add      x26, x26, #8
0028511C 5f031beb cmp      x26, x27
00285120 01feff54 b.ne     #0x2850e0
00285124 87c40d94 bl       #0x5f6340
00285128 f7ffffb4 cbz      x23, #0x285124
0028512C a18300d1 sub      x1, x29, #0x20
00285130 e00317aa mov      x0, x23
00285134 b88300d1 sub      x24, x29, #0x20
00285138 9f3a0094 bl       #0x293bb4
0028513C a00f40f9 ldr      x0, [x29, #0x18]
00285140 72ba0a94 bl       #0x533b08
00285144 f703002a mov      w23, w0
00285148 a00f40f9 ldr      x0, [x29, #0x18]
0028514C e1430091 add      x1, sp, #0x10
00285150 02048052 mov      w2, #0x20
00285154 ff7f04a9 stp      xzr, xzr, [sp, #0x40]
00285158 ff7f03a9 stp      xzr, xzr, [sp, #0x30]
0028515C ff7f02a9 stp      xzr, xzr, [sp, #0x20]
00285160 ff7f01a9 stp      xzr, xzr, [sp, #0x10]
00285164 67ba0a94 bl       #0x533b00
00285168 a8435e38 ldurb    w8, [x29, #-0x1c]
0028516C ff02086b cmp      w23, w8
00285170 81010054 b.ne     #0x2851a0
00285174 00077fb2 orr      x0, x24, #6
00285178 42038052 mov      w2, #0x1a
0028517C e1430091 add      x1, sp, #0x10
00285180 fcc50d94 bl       #0x5f6970
00285184 1f000071 cmp      w0, #0
00285188 f7179f1a cset     w23, eq
0028518C c83a40b9 ldr      w8, [x22, #0x38]
00285190 08050051 sub      w8, w8, #1
00285194 1f050071 cmp      w8, #1
00285198 e9000054 b.ls     #0x2851b4
0028519C 0a000014 b        #0x2851c4
002851A0 f7031f2a mov      w23, wzr
002851A4 c83a40b9 ldr      w8, [x22, #0x38]
002851A8 08050051 sub      w8, w8, #1
002851AC 1f050071 cmp      w8, #1
002851B0 a8000054 b.hi     #0x2851c4
002851B4 a00f40f9 ldr      x0, [x29, #0x18]
002851B8 56ba0a94 bl       #0x533b10
002851BC 1f1c0072 tst      w0, #0xff
002851C0 e0010054 b.eq     #0x2851fc
002851C4 a00f40f9 ldr      x0, [x29, #0x18]
002851C8 a18300d1 sub      x1, x29, #0x20
002851CC dbb90a94 bl       #0x533938
002851D0 e803002a mov      w8, w0
002851D4 a00f40f9 ldr      x0, [x29, #0x18]
002851D8 a8000036 tbz      w8, #0, #0x2851ec
002851DC e1031f2a mov      w1, wzr
002851E0 3aba0a94 bl       #0x533ac8
002851E4 17020036 tbz      w23, #0, #0x285224
002851E8 11000014 b        #0x28522c
002851EC b7000034 cbz      w23, #0x285200
002851F0 21008052 mov      w1, #1
002851F4 35ba0a94 bl       #0x533ac8
002851F8 0d000014 b        #0x28522c
002851FC a00f40f9 ldr      x0, [x29, #0x18]
00285200 41068052 mov      w1, #0x32
00285204 45ba0a94 bl       #0x533b18
00285208 a00f40f9 ldr      x0, [x29, #0x18]
0028520C e1031f2a mov      w1, wzr
00285210 43b00a94 bl       #0x53131c
00285214 a00f40f9 ldr      x0, [x29, #0x18]
00285218 a18300d1 sub      x1, x29, #0x20
0028521C e2b90a94 bl       #0x5339a4
00285220 77000037 tbnz     w23, #0, #0x28522c
00285224 a00f40f9 ldr      x0, [x29, #0x18]
00285228 61b90a94 bl       #0x5337ac
0028522C a00f40f9 ldr      x0, [x29, #0x18]
00285230 e1031f2a mov      w1, wzr
00285234 beb00a94 bl       #0x53152c
00285238 1f7c0071 cmp      w0, #0x1f
0028523C 01010054 b.ne     #0x28525c
00285240 a00f40f9 ldr      x0, [x29, #0x18]
00285244 e1031f2a mov      w1, wzr
00285248 e5b00a94 bl       #0x5315dc
0028524C 80000036 tbz      w0, #0, #0x28525c
00285250 a00f40f9 ldr      x0, [x29, #0x18]
00285254 e1031f2a mov      w1, wzr
00285258 ccb10a94 bl       #0x531988
0028525C a00f40f9 ldr      x0, [x29, #0x18]
00285260 21008052 mov      w1, #1
00285264 b2b00a94 bl       #0x53152c
00285268 1f7c0071 cmp      w0, #0x1f
0028526C 01010054 b.ne     #0x28528c
00285270 a00f40f9 ldr      x0, [x29, #0x18]
00285274 21008052 mov      w1, #1
00285278 d9b00a94 bl       #0x5315dc
0028527C 80000036 tbz      w0, #0, #0x28528c
00285280 a00f40f9 ldr      x0, [x29, #0x18]
00285284 21008052 mov      w1, #1
00285288 c0b10a94 bl       #0x531988
0028528C a00f40f9 ldr      x0, [x29, #0x18]
00285290 41008052 mov      w1, #2
00285294 a6b00a94 bl       #0x53152c
00285298 1f7c0071 cmp      w0, #0x1f
0028529C 01010054 b.ne     #0x2852bc
002852A0 a00f40f9 ldr      x0, [x29, #0x18]
002852A4 41008052 mov      w1, #2
002852A8 cdb00a94 bl       #0x5315dc
002852AC 80000036 tbz      w0, #0, #0x2852bc
002852B0 a00f40f9 ldr      x0, [x29, #0x18]
002852B4 41008052 mov      w1, #2
002852B8 b4b10a94 bl       #0x531988
002852BC a00f40f9 ldr      x0, [x29, #0x18]
002852C0 61008052 mov      w1, #3
002852C4 9ab00a94 bl       #0x53152c
002852C8 1f7c0071 cmp      w0, #0x1f
002852CC 01010054 b.ne     #0x2852ec
002852D0 a00f40f9 ldr      x0, [x29, #0x18]
002852D4 61008052 mov      w1, #3
002852D8 c1b00a94 bl       #0x5315dc
002852DC 80000036 tbz      w0, #0, #0x2852ec
002852E0 a00f40f9 ldr      x0, [x29, #0x18]
002852E4 61008052 mov      w1, #3
002852E8 a8b10a94 bl       #0x531988
002852EC a00f40f9 ldr      x0, [x29, #0x18]
002852F0 81008052 mov      w1, #4
002852F4 8eb00a94 bl       #0x53152c
002852F8 1f7c0071 cmp      w0, #0x1f
002852FC 01010054 b.ne     #0x28531c
00285300 a00f40f9 ldr      x0, [x29, #0x18]
00285304 81008052 mov      w1, #4
00285308 b5b00a94 bl       #0x5315dc
0028530C 80000036 tbz      w0, #0, #0x28531c
00285310 a00f40f9 ldr      x0, [x29, #0x18]
00285314 81008052 mov      w1, #4
00285318 9cb10a94 bl       #0x531988
0028531C a00f40f9 ldr      x0, [x29, #0x18]
00285320 a1008052 mov      w1, #5
00285324 82b00a94 bl       #0x53152c
00285328 1f7c0071 cmp      w0, #0x1f
0028532C 01010054 b.ne     #0x28534c
00285330 a00f40f9 ldr      x0, [x29, #0x18]
00285334 a1008052 mov      w1, #5
00285338 a9b00a94 bl       #0x5315dc
0028533C 80000036 tbz      w0, #0, #0x28534c
00285340 a00f40f9 ldr      x0, [x29, #0x18]
00285344 a1008052 mov      w1, #5
00285348 90b10a94 bl       #0x531988
0028534C a00f40f9 ldr      x0, [x29, #0x18]
00285350 1faf0a94 bl       #0x530fcc
00285354 a00f40f9 ldr      x0, [x29, #0x18]
00285358 e1031f2a mov      w1, wzr
0028535C f4b90a94 bl       #0x533b2c
00285360 b60f40f9 ldr      x22, [x29, #0x18]
00285364 f60700f9 str      x22, [sp, #8]
00285368 960200b4 cbz      x22, #0x2853b8
0028536C c88e44f8 ldr      x8, [x22, #0x48]!
00285370 e00316aa mov      x0, x22
00285374 080940f9 ldr      x8, [x8, #0x10]
00285378 00013fd6 blr      x8
0028537C e1230091 add      x1, sp, #8
00285380 e00315aa mov      x0, x21
00285384 e203142a mov      w2, w20
00285388 e303132a mov      w3, w19
0028538C 88feff97 bl       #0x284dac
00285390 c80240f9 ldr      x8, [x22]
00285394 e00316aa mov      x0, x22
00285398 080d40f9 ldr      x8, [x8, #0x18]
0028539C 00013fd6 blr      x8
002853A0 ff0700f9 str      xzr, [sp, #8]
002853A4 280340f9 ldr      x8, [x25]
002853A8 15595da9 ldp      x21, x22, [x8, #0x1d0]
002853AC bf0216eb cmp      x21, x22
002853B0 81010054 b.ne     #0x2853e0
002853B4 21000014 b        #0x285438
002853B8 e1230091 add      x1, sp, #8
002853BC e00315aa mov      x0, x21
002853C0 e203142a mov      w2, w20
002853C4 e303132a mov      w3, w19
002853C8 79feff97 bl       #0x284dac
002853CC 280340f9 ldr      x8, [x25]
002853D0 15595da9 ldp      x21, x22, [x8, #0x1d0]
002853D4 bf0216eb cmp      x21, x22
002853D8 00030054 b.eq     #0x285438
002853DC 1f2003d5 nop      
002853E0 b30240f9 ldr      x19, [x21]
002853E4 e00313aa mov      x0, x19
002853E8 080c45f8 ldr      x8, [x0, #0x50]!
002853EC 080140f9 ldr      x8, [x8]
002853F0 00013fd6 blr      x8
002853F4 f40300aa mov      x20, x0
002853F8 830dfe97 bl       #0x208a04
002853FC 1f0014eb cmp      x0, x20
00285400 60010054 b.eq     #0x28542c
00285404 940240f9 ldr      x20, [x20]
00285408 9f0200eb cmp      x20, x0
0028540C 841a40fa ccmp     x20, #0, #4, ne
00285410 a1ffff54 b.ne     #0x285404
00285414 b40000b5 cbnz     x20, #0x285428
00285418 b5220091 add      x21, x21, #8
0028541C bf0216eb cmp      x21, x22
00285420 01feff54 b.ne     #0x2853e0
00285424 05000014 b        #0x285438
00285428 930000b4 cbz      x19, #0x285438
0028542C a10f40f9 ldr      x1, [x29, #0x18]
00285430 e00313aa mov      x0, x19
00285434 762e0094 bl       #0x290e0c
00285438 a00f40f9 ldr      x0, [x29, #0x18]
0028543C 800000b4 cbz      x0, #0x28544c
00285440 088c44f8 ldr      x8, [x0, #0x48]!
00285444 080d40f9 ldr      x8, [x8, #0x18]
00285448 00013fd6 blr      x8
0028544C f44f4ca9 ldp      x20, x19, [sp, #0xc0]
00285450 fb4340f9 ldr      x27, [sp, #0x80]
00285454 f6574ba9 ldp      x22, x21, [sp, #0xb0]
00285458 f85f4aa9 ldp      x24, x23, [sp, #0xa0]
0028545C fa6749a9 ldp      x26, x25, [sp, #0x90]
00285460 fd7b47a9 ldp      x29, x30, [sp, #0x70]
00285464 ff430391 add      sp, sp, #0xd0
00285468 c0035fd6 ret      
~~~
### 0x294440 (473 slots)
~~~asm
00294440 ffc302d1 sub      sp, sp, #0xb0
00294444 fd7b05a9 stp      x29, x30, [sp, #0x50]
00294448 fc6f06a9 stp      x28, x27, [sp, #0x60]
0029444C fa6707a9 stp      x26, x25, [sp, #0x70]
00294450 f85f08a9 stp      x24, x23, [sp, #0x80]
00294454 f65709a9 stp      x22, x21, [sp, #0x90]
00294458 f44f0aa9 stp      x20, x19, [sp, #0xa0]
0029445C fd430191 add      x29, sp, #0x50
00294460 7b2a00b0 adrp     x27, #0x7e1000
00294464 7b831891 add      x27, x27, #0x620
00294468 730340f9 ldr      x19, [x27]
0029446C 331000b4 cbz      x19, #0x294670
00294470 f40302aa mov      x20, x2
00294474 80310037 tbnz     w0, #0, #0x294aa4
00294478 682800d0 adrp     x8, #0x7a2000
0029447C f60301aa mov      x22, x1
00294480 080145f9 ldr      x8, [x8, #0xa00]
00294484 080140f9 ldr      x8, [x8]
00294488 153140f9 ldr      x21, [x8, #0x60]
0029448C b50000b4 cbz      x21, #0x2944a0
00294490 e00315aa mov      x0, x21
00294494 088c44f8 ldr      x8, [x0, #0x48]!
00294498 080940f9 ldr      x8, [x8, #0x10]
0029449C 00013fd6 blr      x8
002944A0 796a5da9 ldp      x25, x26, [x19, #0x1d0]
002944A4 3f031aeb cmp      x25, x26
002944A8 800b0054 b.eq     #0x294618
002944AC 1f2003d5 nop      
002944B0 370340f9 ldr      x23, [x25]
002944B4 e00317aa mov      x0, x23
002944B8 080c45f8 ldr      x8, [x0, #0x50]!
002944BC 080140f9 ldr      x8, [x8]
002944C0 00013fd6 blr      x8
002944C4 f80300aa mov      x24, x0
002944C8 3cc5ff97 bl       #0x2859b8
002944CC 1f0018eb cmp      x0, x24
002944D0 60010054 b.eq     #0x2944fc
002944D4 180340f9 ldr      x24, [x24]
002944D8 1f0300eb cmp      x24, x0
002944DC 041b40fa ccmp     x24, #0, #4, ne
002944E0 a1ffff54 b.ne     #0x2944d4
002944E4 b80000b5 cbnz     x24, #0x2944f8
002944E8 39230091 add      x25, x25, #8
002944EC 3f031aeb cmp      x25, x26
002944F0 01feff54 b.ne     #0x2944b0
002944F4 49000014 b        #0x294618
002944F8 170900b4 cbz      x23, #0x294618
002944FC 88fb8152 mov      w8, #0xfdc
00294500 080ea072 movk     w8, #0x70, lsl #16
00294504 bc6a68b8 ldr      w28, [x21, x8]
00294508 9f070071 cmp      w28, #1
0029450C 6b080054 b.lt     #0x294618
00294510 482800f0 adrp     x8, #0x79f000
00294514 f8031f2a mov      w24, wzr
00294518 08ed41f9 ldr      x8, [x8, #0x3d8]
0029451C 080140f9 ldr      x8, [x8]
00294520 195541f9 ldr      x25, [x8, #0x2a8]
00294524 06000014 b        #0x29453c
00294528 1f2003d5 nop      
0029452C 1f2003d5 nop      
00294530 18070011 add      w24, w24, #1
00294534 1f031c6b cmp      w24, w28
00294538 00070054 b.eq     #0x294618
0029453C fa031f2a mov      w26, wzr
00294540 04000014 b        #0x294550
00294544 5a070011 add      w26, w26, #1
00294548 5f7b0071 cmp      w26, #0x1e
0029454C 20ffff54 b.eq     #0x294530
00294550 e00317aa mov      x0, x23
00294554 e103182a mov      w1, w24
00294558 e2031a2a mov      w2, w26
0029455C e30319aa mov      x3, x25
00294560 0cc1ff97 bl       #0x284990
00294564 e8230091 add      x8, sp, #8
00294568 e00315aa mov      x0, x21
0029456C e103182a mov      w1, w24
00294570 e2031a2a mov      w2, w26
00294574 e30319aa mov      x3, x25
00294578 b4affd97 bl       #0x200448
0029457C e00740f9 ldr      x0, [sp, #8]
00294580 02c8fd97 bl       #0x206588
00294584 e0030037 tbnz     w0, #0, #0x294600
00294588 e00740f9 ldr      x0, [sp, #8]
0029458C 8ec9fd97 bl       #0x206bc4
00294590 a0831ff8 stur     x0, [x29, #-8]
00294594 800000b4 cbz      x0, #0x2945a4
00294598 088c44f8 ldr      x8, [x0, #0x48]!
0029459C 080940f9 ldr      x8, [x8, #0x10]
002945A0 00013fd6 blr      x8
002945A4 a12300d1 sub      x1, x29, #8
002945A8 e00317aa mov      x0, x23
002945AC e203182a mov      w2, w24
002945B0 e3031a2a mov      w3, w26
002945B4 28c1ff97 bl       #0x284a54
002945B8 a0835ff8 ldur     x0, [x29, #-8]
002945BC a00000b4 cbz      x0, #0x2945d0
002945C0 088c44f8 ldr      x8, [x0, #0x48]!
002945C4 080d40f9 ldr      x8, [x8, #0x18]
002945C8 00013fd6 blr      x8
002945CC bf831ff8 stur     xzr, [x29, #-8]
002945D0 e00315aa mov      x0, x21
002945D4 e103182a mov      w1, w24
002945D8 e2031a2a mov      w2, w26
002945DC aebdfd97 bl       #0x203c94
002945E0 00010036 tbz      w0, #0, #0x294600
002945E4 e80740f9 ldr      x8, [sp, #8]
002945E8 e00317aa mov      x0, x23
002945EC e103182a mov      w1, w24
002945F0 e2031a2a mov      w2, w26
002945F4 e40319aa mov      x4, x25
002945F8 03810191 add      x3, x8, #0x60
002945FC 81c2ff97 bl       #0x285000
00294600 e00740f9 ldr      x0, [sp, #8]
00294604 00faffb4 cbz      x0, #0x294544
00294608 088c44f8 ldr      x8, [x0, #0x48]!
0029460C 080d40f9 ldr      x8, [x8, #0x18]
00294610 00013fd6 blr      x8
00294614 ccffff17 b        #0x294544
00294618 796a5da9 ldp      x25, x26, [x19, #0x1d0]
0029461C 3f031aeb cmp      x25, x26
00294620 80020054 b.eq     #0x294670
00294624 370340f9 ldr      x23, [x25]
00294628 e00317aa mov      x0, x23
0029462C 080c45f8 ldr      x8, [x0, #0x50]!
00294630 080140f9 ldr      x8, [x8]
00294634 00013fd6 blr      x8
00294638 f80300aa mov      x24, x0
0029463C 344efe97 bl       #0x227f0c
00294640 1f0018eb cmp      x0, x24
00294644 a0010054 b.eq     #0x294678
00294648 1f2003d5 nop      
0029464C 1f2003d5 nop      
00294650 180340f9 ldr      x24, [x24]
00294654 1f0300eb cmp      x24, x0
00294658 041b40fa ccmp     x24, #0, #4, ne
0029465C a1ffff54 b.ne     #0x294650
00294660 b80000b5 cbnz     x24, #0x294674
00294664 39230091 add      x25, x25, #8
00294668 3f031aeb cmp      x25, x26
0029466C c1fdff54 b.ne     #0x294624
00294670 34870d94 bl       #0x5f6340
00294674 f7ffffb4 cbz      x23, #0x294670
00294678 e00317aa mov      x0, x23
0029467C e1031f2a mov      w1, wzr
00294680 35c7ff97 bl       #0x286354
00294684 40040034 cbz      w0, #0x29470c
00294688 c8f24191 add      x8, x22, #0x7c, lsl #12
0029468C f8031faa mov      x24, xzr
00294690 f903002a mov      w25, w0
00294694 1a813691 add      x26, x8, #0xda0
00294698 10000014 b        #0x2946d8
0029469C 1f2003d5 nop      
002946A0 e1230091 add      x1, sp, #8
002946A4 e2a30091 add      x2, sp, #0x28
002946A8 a33300d1 sub      x3, x29, #0xc
002946AC e00315aa mov      x0, x21
002946B0 8abdfd97 bl       #0x203cd8
002946B4 e32b40b9 ldr      w3, [sp, #0x28]
002946B8 e00317aa mov      x0, x23
002946BC e1031f2a mov      w1, wzr
002946C0 a4435fb8 ldur     w4, [x29, #-0xc]
002946C4 e203182a mov      w2, w24
002946C8 e8ccff97 bl       #0x287a68
002946CC 18070091 add      x24, x24, #1
002946D0 3f0318eb cmp      x25, x24
002946D4 c0010054 b.eq     #0x29470c
002946D8 487b78f8 ldr      x8, [x26, x24, lsl #3]
002946DC e1230091 add      x1, sp, #8
002946E0 e00315aa mov      x0, x21
002946E4 ff2b00b9 str      wzr, [sp, #0x28]
002946E8 bf431fb8 stur     wzr, [x29, #-0xc]
002946EC e80700f9 str      x8, [sp, #8]
002946F0 a8c0fd97 bl       #0x204990
002946F4 60fd0736 tbz      w0, #0, #0x2946a0
002946F8 e1a30091 add      x1, sp, #0x28
002946FC a23300d1 sub      x2, x29, #0xc
00294700 e00315aa mov      x0, x21
00294704 aac0fd97 bl       #0x2049ac
00294708 ebffff17 b        #0x2946b4
0029470C e00317aa mov      x0, x23
00294710 21008052 mov      w1, #1
00294714 10c7ff97 bl       #0x286354
00294718 20040034 cbz      w0, #0x29479c
0029471C c8f24191 add      x8, x22, #0x7c, lsl #12
00294720 f8031faa mov      x24, xzr
00294724 f903002a mov      w25, w0
00294728 1a413791 add      x26, x8, #0xdd0
0029472C 0e000014 b        #0x294764
00294730 e1a30091 add      x1, sp, #0x28
00294734 a23300d1 sub      x2, x29, #0xc
00294738 e00315aa mov      x0, x21
0029473C 9cc0fd97 bl       #0x2049ac
00294740 e32b40b9 ldr      w3, [sp, #0x28]
00294744 e00317aa mov      x0, x23
00294748 21008052 mov      w1, #1
0029474C a4435fb8 ldur     w4, [x29, #-0xc]
00294750 e203182a mov      w2, w24
00294754 c5ccff97 bl       #0x287a68
00294758 18070091 add      x24, x24, #1
0029475C 3f0318eb cmp      x25, x24
00294760 e0010054 b.eq     #0x29479c
00294764 487b78f8 ldr      x8, [x26, x24, lsl #3]
00294768 e1230091 add      x1, sp, #8
0029476C e00315aa mov      x0, x21
00294770 ff2b00b9 str      wzr, [sp, #0x28]
00294774 bf431fb8 stur     wzr, [x29, #-0xc]
00294778 e80700f9 str      x8, [sp, #8]
0029477C 85c0fd97 bl       #0x204990
00294780 80fd0737 tbnz     w0, #0, #0x294730
00294784 e1230091 add      x1, sp, #8
00294788 e2a30091 add      x2, sp, #0x28
0029478C a33300d1 sub      x3, x29, #0xc
00294790 e00315aa mov      x0, x21
00294794 51bdfd97 bl       #0x203cd8
00294798 eaffff17 b        #0x294740
0029479C e00317aa mov      x0, x23
002947A0 41008052 mov      w1, #2
002947A4 ecc6ff97 bl       #0x286354
002947A8 20040034 cbz      w0, #0x29482c
002947AC c8f24191 add      x8, x22, #0x7c, lsl #12
002947B0 f8031faa mov      x24, xzr
002947B4 f903002a mov      w25, w0
002947B8 1a013891 add      x26, x8, #0xe00
002947BC 0e000014 b        #0x2947f4
002947C0 e1a30091 add      x1, sp, #0x28
002947C4 a23300d1 sub      x2, x29, #0xc
002947C8 e00315aa mov      x0, x21
002947CC 78c0fd97 bl       #0x2049ac
002947D0 e32b40b9 ldr      w3, [sp, #0x28]
002947D4 e00317aa mov      x0, x23
002947D8 41008052 mov      w1, #2
002947DC a4435fb8 ldur     w4, [x29, #-0xc]
002947E0 e203182a mov      w2, w24
002947E4 a1ccff97 bl       #0x287a68
002947E8 18070091 add      x24, x24, #1
002947EC 3f0318eb cmp      x25, x24
002947F0 e0010054 b.eq     #0x29482c
002947F4 487b78f8 ldr      x8, [x26, x24, lsl #3]
002947F8 e1230091 add      x1, sp, #8
002947FC e00315aa mov      x0, x21
00294800 ff2b00b9 str      wzr, [sp, #0x28]
00294804 bf431fb8 stur     wzr, [x29, #-0xc]
00294808 e80700f9 str      x8, [sp, #8]
0029480C 61c0fd97 bl       #0x204990
00294810 80fd0737 tbnz     w0, #0, #0x2947c0
00294814 e1230091 add      x1, sp, #8
00294818 e2a30091 add      x2, sp, #0x28
0029481C a33300d1 sub      x3, x29, #0xc
00294820 e00315aa mov      x0, x21
00294824 2dbdfd97 bl       #0x203cd8
00294828 eaffff17 b        #0x2947d0
0029482C e00317aa mov      x0, x23
00294830 61008052 mov      w1, #3
00294834 c8c6ff97 bl       #0x286354
00294838 20040034 cbz      w0, #0x2948bc
0029483C c8f24191 add      x8, x22, #0x7c, lsl #12
00294840 f8031faa mov      x24, xzr
00294844 f903002a mov      w25, w0
00294848 1ac13891 add      x26, x8, #0xe30
0029484C 0e000014 b        #0x294884
00294850 e1a30091 add      x1, sp, #0x28
00294854 a23300d1 sub      x2, x29, #0xc
00294858 e00315aa mov      x0, x21
0029485C 54c0fd97 bl       #0x2049ac
00294860 e32b40b9 ldr      w3, [sp, #0x28]
00294864 e00317aa mov      x0, x23
00294868 61008052 mov      w1, #3
0029486C a4435fb8 ldur     w4, [x29, #-0xc]
00294870 e203182a mov      w2, w24
00294874 7dccff97 bl       #0x287a68
00294878 18070091 add      x24, x24, #1
0029487C 3f0318eb cmp      x25, x24
00294880 e0010054 b.eq     #0x2948bc
00294884 487b78f8 ldr      x8, [x26, x24, lsl #3]
00294888 e1230091 add      x1, sp, #8
0029488C e00315aa mov      x0, x21
00294890 ff2b00b9 str      wzr, [sp, #0x28]
00294894 bf431fb8 stur     wzr, [x29, #-0xc]
00294898 e80700f9 str      x8, [sp, #8]
0029489C 3dc0fd97 bl       #0x204990
002948A0 80fd0737 tbnz     w0, #0, #0x294850
002948A4 e1230091 add      x1, sp, #8
002948A8 e2a30091 add      x2, sp, #0x28
002948AC a33300d1 sub      x3, x29, #0xc
002948B0 e00315aa mov      x0, x21
002948B4 09bdfd97 bl       #0x203cd8
002948B8 eaffff17 b        #0x294860
002948BC e00317aa mov      x0, x23
002948C0 81008052 mov      w1, #4
002948C4 a4c6ff97 bl       #0x286354
002948C8 20040034 cbz      w0, #0x29494c
002948CC c8f24191 add      x8, x22, #0x7c, lsl #12
002948D0 f8031faa mov      x24, xzr
002948D4 f903002a mov      w25, w0
002948D8 1a813991 add      x26, x8, #0xe60
002948DC 0e000014 b        #0x294914
002948E0 e1a30091 add      x1, sp, #0x28
002948E4 a23300d1 sub      x2, x29, #0xc
002948E8 e00315aa mov      x0, x21
002948EC 30c0fd97 bl       #0x2049ac
002948F0 e32b40b9 ldr      w3, [sp, #0x28]
002948F4 e00317aa mov      x0, x23
002948F8 81008052 mov      w1, #4
002948FC a4435fb8 ldur     w4, [x29, #-0xc]
00294900 e203182a mov      w2, w24
00294904 59ccff97 bl       #0x287a68
00294908 18070091 add      x24, x24, #1
0029490C 3f0318eb cmp      x25, x24
00294910 e0010054 b.eq     #0x29494c
00294914 487b78f8 ldr      x8, [x26, x24, lsl #3]
00294918 e1230091 add      x1, sp, #8
0029491C e00315aa mov      x0, x21
00294920 ff2b00b9 str      wzr, [sp, #0x28]
00294924 bf431fb8 stur     wzr, [x29, #-0xc]
00294928 e80700f9 str      x8, [sp, #8]
0029492C 19c0fd97 bl       #0x204990
00294930 80fd0737 tbnz     w0, #0, #0x2948e0
00294934 e1230091 add      x1, sp, #8
00294938 e2a30091 add      x2, sp, #0x28
0029493C a33300d1 sub      x3, x29, #0xc
00294940 e00315aa mov      x0, x21
00294944 e5bcfd97 bl       #0x203cd8
00294948 eaffff17 b        #0x2948f0
0029494C a1008052 mov      w1, #5
00294950 e00317aa mov      x0, x23
00294954 80c6ff97 bl       #0x286354
00294958 40040034 cbz      w0, #0x2949e0
0029495C c8f24191 add      x8, x22, #0x7c, lsl #12
00294960 f8031faa mov      x24, xzr
00294964 fa03002a mov      w26, w0
00294968 1c413a91 add      x28, x8, #0xe90
0029496C b9008052 mov      w25, #5
00294970 0e000014 b        #0x2949a8
00294974 e1a30091 add      x1, sp, #0x28
00294978 a23300d1 sub      x2, x29, #0xc
0029497C e00315aa mov      x0, x21
00294980 0bc0fd97 bl       #0x2049ac
00294984 e32b40b9 ldr      w3, [sp, #0x28]
00294988 e00317aa mov      x0, x23
0029498C e103192a mov      w1, w25
00294990 a4435fb8 ldur     w4, [x29, #-0xc]
00294994 e203182a mov      w2, w24
00294998 34ccff97 bl       #0x287a68
0029499C 18070091 add      x24, x24, #1
002949A0 5f0318eb cmp      x26, x24
002949A4 e0010054 b.eq     #0x2949e0
002949A8 887b78f8 ldr      x8, [x28, x24, lsl #3]
002949AC e1230091 add      x1, sp, #8
002949B0 e00315aa mov      x0, x21
002949B4 ff2b00b9 str      wzr, [sp, #0x28]
002949B8 bf431fb8 stur     wzr, [x29, #-0xc]
002949BC e80700f9 str      x8, [sp, #8]
002949C0 f4bffd97 bl       #0x204990
002949C4 80fd0737 tbnz     w0, #0, #0x294974
002949C8 e1230091 add      x1, sp, #8
002949CC e2a30091 add      x2, sp, #0x28
002949D0 a33300d1 sub      x3, x29, #0xc
002949D4 e00315aa mov      x0, x21
002949D8 c0bcfd97 bl       #0x203cd8
002949DC eaffff17 b        #0x294984
002949E0 c8f24191 add      x8, x22, #0x7c, lsl #12
002949E4 01013b91 add      x1, x8, #0xec0
002949E8 280040f9 ldr      x8, [x1]
002949EC c80400b4 cbz      x8, #0x294a84
002949F0 e2230091 add      x2, sp, #8
002949F4 e3a30091 add      x3, sp, #0x28
002949F8 ff0b00b9 str      wzr, [sp, #8]
002949FC e00315aa mov      x0, x21
00294A00 ff2b00b9 str      wzr, [sp, #0x28]
00294A04 b5bcfd97 bl       #0x203cd8
00294A08 680340f9 ldr      x8, [x27]
00294A0C 19695da9 ldp      x25, x26, [x8, #0x1d0]
00294A10 3f031aeb cmp      x25, x26
00294A14 80030054 b.eq     #0x294a84
00294A18 1f2003d5 nop      
00294A1C 1f2003d5 nop      
00294A20 360340f9 ldr      x22, [x25]
00294A24 e00316aa mov      x0, x22
00294A28 080c45f8 ldr      x8, [x0, #0x50]!
00294A2C 080140f9 ldr      x8, [x8]
00294A30 00013fd6 blr      x8
00294A34 f80300aa mov      x24, x0
00294A38 e5dcff97 bl       #0x28bdcc
00294A3C 1f0018eb cmp      x0, x24
00294A40 60010054 b.eq     #0x294a6c
00294A44 180340f9 ldr      x24, [x24]
00294A48 1f0300eb cmp      x24, x0
00294A4C 041b40fa ccmp     x24, #0, #4, ne
00294A50 a1ffff54 b.ne     #0x294a44
00294A54 b80000b5 cbnz     x24, #0x294a68
00294A58 39230091 add      x25, x25, #8
00294A5C 3f031aeb cmp      x25, x26
00294A60 01feff54 b.ne     #0x294a20
00294A64 08000014 b        #0x294a84
00294A68 f60000b4 cbz      x22, #0x294a84
00294A6C e10b40b9 ldr      w1, [sp, #8]
00294A70 e00316aa mov      x0, x22
00294A74 6bdcff97 bl       #0x28bc20
00294A78 e12b40b9 ldr      w1, [sp, #0x28]
00294A7C e00316aa mov      x0, x22
00294A80 6adcff97 bl       #0x28bc28
00294A84 e00317aa mov      x0, x23
00294A88 01048052 mov      w1, #0x20
00294A8C 49ccff97 bl       #0x287bb0
00294A90 b50000b4 cbz      x21, #0x294aa4
00294A94 a88e44f8 ldr      x8, [x21, #0x48]!
00294A98 e00315aa mov      x0, x21
00294A9C 080d40f9 ldr      x8, [x8, #0x18]
00294AA0 00013fd6 blr      x8
00294AA4 765e5da9 ldp      x22, x23, [x19, #0x1d0]
00294AA8 df0217eb cmp      x22, x23
00294AAC 40020054 b.eq     #0x294af4
00294AB0 d80240f9 ldr      x24, [x22]
00294AB4 e00318aa mov      x0, x24
00294AB8 080c45f8 ldr      x8, [x0, #0x50]!
00294ABC 080140f9 ldr      x8, [x8]
00294AC0 00013fd6 blr      x8
00294AC4 f50300aa mov      x21, x0
00294AC8 fa27fe97 bl       #0x21eab0
00294ACC 1f0015eb cmp      x0, x21
00294AD0 40010054 b.eq     #0x294af8
00294AD4 b50240f9 ldr      x21, [x21]
00294AD8 bf0200eb cmp      x21, x0
00294ADC a41a40fa ccmp     x21, #0, #4, ne
00294AE0 a1ffff54 b.ne     #0x294ad4
00294AE4 b50000b5 cbnz     x21, #0x294af8
00294AE8 d6220091 add      x22, x22, #8
00294AEC df0217eb cmp      x22, x23
00294AF0 01feff54 b.ne     #0x294ab0
00294AF4 f8031faa mov      x24, xzr
00294AF8 00830191 add      x0, x24, #0x60
00294AFC 02128052 mov      w2, #0x90
00294B00 e10314aa mov      x1, x20
00294B04 b7860d94 bl       #0x5f65e0
00294B08 682800d0 adrp     x8, #0x7a2000
00294B0C e0a30091 add      x0, sp, #0x28
00294B10 081d46f9 ldr      x8, [x8, #0xc38]
00294B14 092940a9 ldp      x9, x10, [x8]
00294B18 080940f9 ldr      x8, [x8, #0x10]
00294B1C e81f00f9 str      x8, [sp, #0x38]
00294B20 e8230091 add      x8, sp, #8
00294B24 e9ab02a9 stp      x9, x10, [sp, #0x28]
00294B28 d5510994 bl       #0x4e927c
00294B2C e1230091 add      x1, sp, #8
00294B30 e00313aa mov      x0, x19
00294B34 2e1e0094 bl       #0x29c3ec
00294B38 f403002a mov      w20, w0
00294B3C e01340f9 ldr      x0, [sp, #0x20]
00294B40 800000b4 cbz      x0, #0x294b50
00294B44 088c44f8 ldr      x8, [x0, #0x48]!
00294B48 080d40f9 ldr      x8, [x8, #0x18]
00294B4C 00013fd6 blr      x8
00294B50 b4010036 tbz      w20, #0, #0x294b84
00294B54 e8230091 add      x8, sp, #8
00294B58 e0a30091 add      x0, sp, #0x28
00294B5C c8510994 bl       #0x4e927c
00294B60 e1230091 add      x1, sp, #8
00294B64 e00313aa mov      x0, x19
00294B68 e2031f2a mov      w2, wzr
00294B6C 831e0094 bl       #0x29c578
00294B70 e01340f9 ldr      x0, [sp, #0x20]
00294B74 800000b4 cbz      x0, #0x294b84
00294B78 088c44f8 ldr      x8, [x0, #0x48]!
00294B7C 080d40f9 ldr      x8, [x8, #0x18]
00294B80 00013fd6 blr      x8
00294B84 f44f4aa9 ldp      x20, x19, [sp, #0xa0]
00294B88 f65749a9 ldp      x22, x21, [sp, #0x90]
00294B8C f85f48a9 ldp      x24, x23, [sp, #0x80]
00294B90 fa6747a9 ldp      x26, x25, [sp, #0x70]
00294B94 fc6f46a9 ldp      x28, x27, [sp, #0x60]
00294B98 fd7b45a9 ldp      x29, x30, [sp, #0x50]
00294B9C ffc30291 add      sp, sp, #0xb0
00294BA0 c0035fd6 ret      
~~~
