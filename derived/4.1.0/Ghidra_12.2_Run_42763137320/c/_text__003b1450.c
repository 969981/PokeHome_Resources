/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b1450; name: FUN_.text__003b1450
 */


void FUN__text__003b1450(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  byte bVar16;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  byte bVar17;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  byte bVar18;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  byte bVar19;
  undefined1 extraout_var_15;
  float fVar20;
  undefined8 extraout_var_16;
  float fVar21;
  undefined8 extraout_var_17;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long *local_70;
  undefined8 uStack_68;
  long *local_58;
  long **local_50;
  long lStack_48;
  undefined1 uStack_31;
  
  uVar25 = param_2[3];
  uVar24 = param_2[2];
  uVar23 = param_2[1];
  uVar22 = param_2[0];
  puVar12 = (undefined8 *)FUN__text__003b8e30(param_3 + 0xf1,0xffffffff);
  lStack_48 = *puVar12;
  local_50 = &local_70;
  local_70 = (long *)0x0;
  FUN__text__003aa1c0(param_3,&local_50,0);
  plVar11 = local_70;
  local_58 = local_70;
  lVar13 = param_3[0x10d];
  (**(code **)(*local_70 + 0x40))(local_70);
  fVar1 = (float)CONCAT13(extraout_var_05,
                          CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
  (**(code **)(*param_3 + 0xe0))(param_3,(int)lVar13);
  fVar31 = -((float)*(int *)(param_3[0x100] + 0x10) * *(float *)(param_3 + 0xe0));
  fVar15 = 0.0;
  if ((int)param_3[0xd8] != 0) {
    fVar31 = 0.0;
    fVar15 = *(float *)((long)param_3 + 0x6fc) * (float)*(int *)(param_3[0x100] + 0x10);
  }
  fVar15 = (float)CONCAT13(extraout_var_06,
                           CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00))) -
           fVar15;
  fVar31 = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) - fVar31;
  fVar2 = fVar15 - fVar1;
  fVar37 = (float)(CONCAT17(extraout_var_14,
                            CONCAT16(extraout_var_12,
                                     CONCAT15(extraout_var_10,CONCAT14(extraout_var_08,fVar1)))) >>
                  0x20);
  fVar3 = fVar31 - fVar37;
  fVar20 = 0.0 - (float)extraout_var_16;
  fVar38 = (float)((ulong)extraout_var_16 >> 0x20);
  fVar21 = 0.0 - fVar38;
  param_3[0x10f] = 0;
  param_3[0x10e] = CONCAT44(fVar31,fVar15);
  fVar15 = fVar2 * fVar2;
  fVar31 = fVar3 * fVar3;
  uVar22 = (undefined1)((uint)fVar31 >> 8);
  uVar23 = (undefined1)((uint)fVar31 >> 0x10);
  uVar24 = (undefined1)((uint)fVar31 >> 0x18);
  fVar14 = fVar20 * fVar20;
  uVar25 = (undefined1)((uint)fVar14 >> 8);
  uVar26 = (undefined1)((uint)fVar14 >> 0x10);
  uVar27 = (undefined1)((uint)fVar14 >> 0x18);
  fVar9 = fVar21 * fVar21;
  uVar28 = (undefined1)((uint)fVar9 >> 8);
  uVar29 = (undefined1)((uint)fVar9 >> 0x10);
  uVar30 = (undefined1)((uint)fVar9 >> 0x18);
  auVar32[4] = SUB41(fVar31,0);
  auVar32._0_4_ = fVar15;
  auVar32[5] = uVar22;
  auVar32[6] = uVar23;
  auVar32[7] = uVar24;
  auVar32[8] = SUB41(fVar14,0);
  auVar32[9] = uVar25;
  auVar32[10] = uVar26;
  auVar32[0xb] = uVar27;
  auVar32[0xc] = SUB41(fVar9,0);
  auVar32[0xd] = uVar28;
  auVar32[0xe] = uVar29;
  auVar32[0xf] = uVar30;
  auVar35[4] = SUB41(fVar31,0);
  auVar35._0_4_ = fVar15;
  auVar35[5] = uVar22;
  auVar35[6] = uVar23;
  auVar35[7] = uVar24;
  auVar35[8] = SUB41(fVar14,0);
  auVar35[9] = uVar25;
  auVar35[10] = uVar26;
  auVar35[0xb] = uVar27;
  auVar35[0xc] = SUB41(fVar9,0);
  auVar35[0xd] = uVar28;
  auVar35[0xe] = uVar29;
  auVar35[0xf] = uVar30;
  auVar32 = NEON_ext(auVar32,auVar35,8,1);
  fVar15 = auVar32._0_4_ + fVar15;
  fVar31 = auVar32._4_4_ + fVar31;
  fVar14 = fVar15 + fVar31;
  fVar15 = fVar15 + fVar31;
  uVar22 = SUB41(fVar15,0);
  uVar23 = (undefined1)((uint)fVar15 >> 8);
  uVar24 = (undefined1)((uint)fVar15 >> 0x10);
  uVar25 = (undefined1)((uint)fVar15 >> 0x18);
  auVar4[4] = uVar22;
  auVar4._0_4_ = fVar14;
  auVar4[5] = uVar23;
  auVar4[6] = uVar24;
  auVar4[7] = uVar25;
  auVar4[8] = SUB41(fVar14,0);
  auVar4[9] = (char)((uint)fVar14 >> 8);
  auVar4[10] = (char)((uint)fVar14 >> 0x10);
  auVar4[0xb] = (char)((uint)fVar14 >> 0x18);
  auVar4[0xc] = uVar22;
  auVar4[0xd] = uVar23;
  auVar4[0xe] = uVar24;
  auVar4[0xf] = uVar25;
  auVar32 = NEON_frsqrte(auVar4,4);
  auVar34._0_4_ = auVar32._0_4_ * fVar14;
  auVar34._4_4_ = auVar32._4_4_ * fVar15;
  auVar34._8_4_ = auVar32._8_4_ * fVar14;
  uVar5 = (undefined2)(CONCAT15(uVar23,CONCAT14(uVar22,fVar14)) >> 0x20);
  auVar34._12_4_ = auVar32._12_4_ * (float)CONCAT13(uVar25,CONCAT12(uVar24,uVar5));
  auVar35 = NEON_frsqrts(auVar32,auVar34,4);
  auVar33._0_4_ = auVar32._0_4_ * auVar35._0_4_;
  auVar33._4_4_ = auVar32._4_4_ * auVar35._4_4_;
  auVar33._8_4_ = auVar32._8_4_ * auVar35._8_4_;
  auVar33._12_4_ = auVar32._12_4_ * auVar35._12_4_;
  auVar36._0_4_ = fVar14 * auVar33._0_4_;
  auVar36._4_4_ = fVar15 * auVar33._4_4_;
  auVar36._8_4_ = fVar14 * auVar33._8_4_;
  auVar36._12_4_ = (float)CONCAT13(uVar25,CONCAT12(uVar24,uVar5)) * auVar33._12_4_;
  iVar6 = -(uint)(fVar14 == 0.0);
  iVar7 = -(uint)(fVar15 == 0.0);
  iVar8 = -(uint)(fVar14 == 0.0);
  iVar10 = -(uint)((float)CONCAT13(uVar25,CONCAT12(uVar24,uVar5)) == 0.0);
  auVar32 = NEON_frsqrts(auVar33,auVar36,4);
  fVar2 = fVar2 * auVar33._0_4_ * auVar32._0_4_;
  fVar3 = fVar3 * auVar33._4_4_ * auVar32._4_4_;
  fVar20 = fVar20 * auVar33._8_4_ * auVar32._8_4_;
  fVar21 = fVar21 * auVar33._12_4_ * auVar32._12_4_;
  bVar16 = SUB41(fVar3,0) & ~(byte)iVar7;
  bVar17 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar7 >> 8);
  bVar18 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
  bVar19 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
  fVar31 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar8)));
  fVar15 = (*(float *)(param_3 + 0xe0) + *(float *)(param_3[0xed] + 0x14) * 0.5) /
           ABS((float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16))));
  fVar37 = fVar37 + (float)CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16))) * fVar15;
  lStack_48 = CONCAT44(fVar38 + (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) &
                                                 ~(byte)((uint)iVar10 >> 0x18),
                                                 CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                                          ~(byte)((uint)iVar10 >> 0x10),
                                                          CONCAT15((byte)((uint)fVar21 >> 8) &
                                                                   ~(byte)((uint)iVar10 >> 8),
                                                                   CONCAT14(SUB41(fVar21,0) &
                                                                            ~(byte)iVar10,fVar31))))
                                       >> 0x20) * fVar15,(float)extraout_var_16 + fVar31 * fVar15);
  local_50 = (long **)CONCAT17((char)((uint)fVar37 >> 0x18),
                               CONCAT16((char)((uint)fVar37 >> 0x10),
                                        CONCAT15((char)((uint)fVar37 >> 8),
                                                 CONCAT14(SUB41(fVar37,0),
                                                          fVar1 + (float)CONCAT13((byte)((uint)fVar2
                                                                                        >> 0x18) &
                                                                                  ~(byte)((uint)
                                                  iVar6 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar2 >> 0x10) &
                                                           ~(byte)((uint)iVar6 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar2 >> 8) &
                                                                    ~(byte)((uint)iVar6 >> 8),
                                                                    SUB41(fVar2,0) & ~(byte)iVar6)))
                                                  * fVar15))));
  lVar13 = FUN__text__003b8e30(param_3 + 0xf1,(int)lVar13);
  if (lVar13 != 0) {
    local_50 = (long **)param_3[0x10e];
    lStack_48 = param_3[0x10f];
  }
  lVar13 = param_3[1];
  (**(code **)(*plVar11 + 0x40))(plVar11);
  local_78 = 2;
  uStack_74 = 5;
  local_70 = (long *)CONCAT17(extraout_var_15,
                              CONCAT16(extraout_var_13,
                                       CONCAT15(extraout_var_11,
                                                CONCAT14(extraout_var_09,
                                                         CONCAT13(extraout_var_07,
                                                                  CONCAT12(extraout_var_04,
                                                                           CONCAT11(extraout_var_01,
                                                                                    extraout_b0_01))
                                                                 )))));
  uStack_68 = extraout_var_17;
  local_80 = FUN__text__003b3ab4(&uStack_31,lVar13,&local_58,&local_70,&local_50,&uStack_74,
                                 &local_78);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  FUN__text__003c24d0(param_3[0xf9],&local_80,0x40);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  return;
}


