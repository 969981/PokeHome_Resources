/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00546c74; name: FUN_.text__00546c74
 */


undefined8 FUN__text__00546c74(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double local_80;
  double dStack_78;
  double local_70;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_24 = 0;
  local_30 = 0;
  local_3c = 0;
  local_2c = 0;
  local_38 = 0;
  local_44 = 0;
  FUN__text__0050f11c(*(undefined8 *)(param_1[10] + 8),param_2,&local_2c,&local_38,&local_44);
  uVar2 = FUN__text__00546fa0(&local_2c,&local_38,&local_44,param_1 + 7);
  if ((uVar2 & 1) != 0) {
    pdVar5 = (double *)*param_1;
    lVar4 = param_1[10];
    fVar6 = *(float *)((long)pdVar5 + 0x44);
    fVar7 = *(float *)(pdVar5 + 6) * fVar6;
    fVar11 = *(float *)((long)pdVar5 + 0x34) * fVar6;
    fVar6 = *(float *)(pdVar5 + 7) * fVar6;
    fVar15 = *(float *)(lVar4 + 0x18);
    fVar16 = *(float *)(lVar4 + 0x1c);
    fVar8 = fVar7 + fVar7;
    fVar12 = fVar11 + fVar11;
    fVar18 = *(float *)(lVar4 + 0x10);
    fVar17 = *(float *)(lVar4 + 0x14);
    fVar19 = fVar16 * fVar12 - fVar15 * (fVar6 + fVar6);
    fVar20 = fVar17 * (fVar6 + fVar6) - fVar16 * fVar8;
    fVar22 = fVar15 * fVar8 - fVar17 * fVar12;
    fVar19 = fVar19 + fVar19;
    fVar20 = fVar20 + fVar20;
    fVar22 = fVar22 + fVar22;
    fVar14 = (float)(pdVar5[2] - (*(double *)(lVar4 + 0x30) + (double)fVar6));
    fVar11 = (float)(pdVar5[1] - (*(double *)(lVar4 + 0x28) + (double)fVar11));
    fVar6 = (float)(*pdVar5 - (*(double *)(lVar4 + 0x20) + (double)fVar7));
    fVar21 = fVar16 * fVar11 - fVar15 * fVar14;
    fVar7 = fVar15 * fVar6 - fVar17 * fVar11;
    fVar23 = fVar17 * fVar14 - fVar16 * fVar6;
    fVar21 = fVar21 + fVar21;
    fVar7 = fVar7 + fVar7;
    fVar23 = fVar23 + fVar23;
    auVar9 = NEON_fmov(0x3f800000,4);
    auVar10._0_8_ =
         (double)CONCAT44(((fVar11 + fVar17 * fVar7 + fVar18 * fVar23) - fVar16 * fVar21) /
                          *(float *)(lVar4 + 0x3c),
                          ((fVar6 - fVar15 * fVar7) + fVar18 * fVar21 + fVar16 * fVar23) /
                          *(float *)(lVar4 + 0x38));
    auVar10._12_4_ = auVar9._12_4_;
    auVar10._8_4_ =
         ((fVar14 + fVar18 * fVar7 + fVar15 * fVar21) - fVar17 * fVar23) / *(float *)(lVar4 + 0x40);
    dStack_78 = auVar10._8_8_;
    local_80 = auVar10._0_8_;
    lVar4 = FUN__text__0053cb30(CONCAT44(((fVar12 + fVar17 * fVar22 + fVar18 * fVar20) -
                                         fVar16 * fVar19) / *(float *)(lVar4 + 0x3c),
                                         ((fVar8 - fVar15 * fVar22) + fVar18 * fVar19 +
                                         fVar16 * fVar20) / *(float *)(lVar4 + 0x38)),
                                *(long *)(param_2 + 0x38) + 0x18,&local_80,&local_60);
    lVar3 = param_1[10];
    if (lVar4 != 0) {
      fStack_5c = *(float *)(lVar3 + 0x3c) * fStack_5c;
      local_60 = *(float *)(lVar3 + 0x38) * local_60;
      fVar19 = *(float *)(lVar3 + 0x18);
      fVar20 = *(float *)(lVar3 + 0x1c);
      local_58 = *(float *)(lVar3 + 0x40) * local_58;
      fVar8 = *(float *)(lVar3 + 0x10);
      fVar6 = *(float *)(lVar3 + 0x14);
      fVar12 = fVar6 * local_60 + fStack_5c * fVar19 + local_58 * fVar20;
      fVar11 = fVar8 * fVar8 - (fVar6 * fVar6 + fVar19 * fVar19 + fVar20 * fVar20);
      fVar7 = (fVar19 * local_58 - fVar20 * fStack_5c) * fVar8 + fVar6 * fVar12;
      fVar14 = (fVar20 * local_60 - local_58 * fVar6) * fVar8 + fVar19 * fVar12;
      fVar6 = (fVar6 * fStack_5c - fVar19 * local_60) * fVar8 + fVar20 * fVar12;
      local_80 = *(double *)(lVar3 + 0x20) + (double)(fVar7 + fVar7 + local_60 * fVar11);
      dStack_78 = *(double *)(lVar3 + 0x28) + (double)(fVar14 + fVar14 + fStack_5c * fVar11);
      dVar13 = *(double *)(lVar3 + 0x30) + (double)(fVar6 + fVar6 + local_58 * fVar11);
      local_70 = dVar13;
      FUN__text__00521300(*param_1,&local_80);
      fVar6 = SUB84(dVar13,0);
      lVar3 = param_1[10];
      if (*(float *)(param_1 + 0xf) < fVar6) {
        *(float *)(param_1 + 0xf) = fVar6;
        param_1[0xb] = param_2;
        param_1[0xd] = lVar3;
      }
      if (fVar6 < *(float *)((long)param_1 + 0x7c)) {
        *(float *)((long)param_1 + 0x7c) = fVar6;
        param_1[0xc] = param_2;
        param_1[0xe] = lVar3;
      }
    }
    iVar1 = FUN__text__0051e980(lVar3,param_2,*param_1);
    lVar4 = *param_1;
    lVar3 = param_1[10];
    if (iVar1 == 1) {
      iVar1 = FUN__text__00522240(lVar4,param_2);
      if (iVar1 == 1) {
        return 1;
      }
      FUN__text__0051ec50(param_1[10],param_2,*param_1);
      lVar4 = *param_1;
      lVar3 = param_1[10];
    }
    FUN__text__00521d10(lVar4,lVar3);
  }
  return 1;
}


