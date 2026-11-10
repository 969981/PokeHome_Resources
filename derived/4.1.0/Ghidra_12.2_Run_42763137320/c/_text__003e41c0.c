/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e41c0; name: FUN_.text__003e41c0
 */


void FUN__text__003e41c0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                        uint *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  
  uVar3 = CONCAT17((char)(param_3._14_2_ >> 4),
                   CONCAT16((char)(param_3._12_2_ >> 4),
                            CONCAT15((char)(param_3._10_2_ >> 4),
                                     CONCAT14((char)(param_3._8_2_ >> 4),
                                              CONCAT13((char)(param_3._6_2_ >> 4),
                                                       CONCAT12((char)(param_3._4_2_ >> 4),
                                                                CONCAT11((char)(param_3._2_2_ >> 4),
                                                                         (char)(param_3._0_2_ >> 4))
                                                               ))))));
  uVar3 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
  uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20);
  uVar1 = (int)(uVar3 >> 2) - 1;
  *param_4 = uVar1;
  if ((uint)uVar3 < 4) {
    *(undefined1 *)(param_4 + 1) = 1;
    param_4[10] = 0xffffffff;
    param_4[0xb] = 0xffffffff;
    param_4[8] = 0xffffffff;
    param_4[9] = 0xffffffff;
    return;
  }
  lVar2 = -(ulong)uVar1;
  uVar12 = *(undefined8 *)(lVar2 + 0x73ade0);
  uVar4 = *(undefined8 *)(lVar2 + 0x73add8);
  bVar5 = (byte)((ulong)uVar4 >> 8);
  bVar6 = (byte)((ulong)uVar4 >> 0x10);
  bVar7 = (byte)((ulong)uVar4 >> 0x18);
  bVar8 = (byte)((ulong)uVar4 >> 0x20);
  bVar9 = (byte)((ulong)uVar4 >> 0x28);
  bVar10 = (byte)((ulong)uVar4 >> 0x30);
  bVar11 = (byte)((ulong)uVar4 >> 0x38);
  bVar13 = (byte)((ulong)uVar12 >> 8);
  bVar14 = (byte)((ulong)uVar12 >> 0x10);
  bVar15 = (byte)((ulong)uVar12 >> 0x18);
  bVar16 = (byte)((ulong)uVar12 >> 0x20);
  bVar17 = (byte)((ulong)uVar12 >> 0x28);
  bVar18 = (byte)((ulong)uVar12 >> 0x30);
  bVar19 = (byte)((ulong)uVar12 >> 0x38);
  *(ulong *)(param_4 + 10) =
       CONCAT17(param_1[0xf] | ~bVar19,
                CONCAT16(param_1[0xe] | ~bVar18,
                         CONCAT15(param_1[0xd] | ~bVar17,
                                  CONCAT14(param_1[0xc] | ~bVar16,
                                           CONCAT13(param_1[0xb] | ~bVar15,
                                                    CONCAT12(param_1[10] | ~bVar14,
                                                             CONCAT11(param_1[9] | ~bVar13,
                                                                      param_1[8] | ~(byte)uVar12))))
                                 )));
  *(ulong *)(param_4 + 8) =
       CONCAT17(param_1[7] | ~bVar11,
                CONCAT16(param_1[6] | ~bVar10,
                         CONCAT15(param_1[5] | ~bVar9,
                                  CONCAT14(param_1[4] | ~bVar8,
                                           CONCAT13(param_1[3] | ~bVar7,
                                                    CONCAT12(param_1[2] | ~bVar6,
                                                             CONCAT11(param_1[1] | ~bVar5,
                                                                      param_1[0] | ~(byte)uVar4)))))
                        ));
  *(ulong *)(param_4 + 0xe) =
       CONCAT17(bVar19 & param_2[0xf],
                CONCAT16(bVar18 & param_2[0xe],
                         CONCAT15(bVar17 & param_2[0xd],
                                  CONCAT14(bVar16 & param_2[0xc],
                                           CONCAT13(bVar15 & param_2[0xb],
                                                    CONCAT12(bVar14 & param_2[10],
                                                             CONCAT11(bVar13 & param_2[9],
                                                                      (byte)uVar12 & param_2[8])))))
                        ));
  *(ulong *)(param_4 + 0xc) =
       CONCAT17(bVar11 & param_2[7],
                CONCAT16(bVar10 & param_2[6],
                         CONCAT15(bVar9 & param_2[5],
                                  CONCAT14(bVar8 & param_2[4],
                                           CONCAT13(bVar7 & param_2[3],
                                                    CONCAT12(bVar6 & param_2[2],
                                                             CONCAT11(bVar5 & param_2[1],
                                                                      (byte)uVar4 & param_2[0]))))))
               );
  return;
}


