/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00546fa0; name: FUN_.text__00546fa0
 */


uint FUN__text__00546fa0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_d4;
  float fStack_d0;
  float local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  float local_94;
  float fStack_90;
  undefined4 local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  
  fVar11 = *param_1;
  fVar13 = param_1[1];
  fVar12 = *param_2;
  fVar16 = param_2[1];
  fVar7 = fVar12 - fVar11;
  fVar14 = *param_3;
  fVar15 = param_3[1];
  fVar6 = fVar16 - fVar13;
  fVar10 = param_2[2];
  local_80 = (param_4[3] + *param_4) * 0.5;
  fStack_64 = (param_4[4] + param_4[1]) * 0.5;
  fStack_58 = (param_4[4] - param_4[1]) * 0.5;
  local_54 = (param_4[5] - param_4[2]) * 0.5;
  local_5c = (param_4[3] - *param_4) * 0.5;
  local_78 = (param_4[5] + param_4[2]) * 0.5;
  fVar5 = param_1[2];
  fVar9 = param_3[2];
  local_68 = fVar11 - local_80;
  local_74 = fVar12 - local_80;
  fStack_70 = fVar16 - fStack_64;
  local_80 = fVar14 - local_80;
  fStack_7c = fVar15 - fStack_64;
  fStack_64 = fVar13 - fStack_64;
  local_60 = fVar5 - local_78;
  local_6c = fVar10 - local_78;
  local_78 = fVar9 - local_78;
  fVar18 = fVar6 * local_74 - fStack_70 * fVar7;
  fVar19 = local_80 * fVar6 - fStack_7c * fVar7;
  fVar17 = fVar6 * local_68 - fVar7 * fStack_64;
  uVar8 = NEON_fminnm(fVar18,fVar19);
  if (fVar18 <= fVar19) {
    fVar18 = fVar19;
  }
  fVar19 = (float)NEON_fminnm(fVar17,uVar8);
  if (fVar17 <= fVar18) {
    fVar17 = fVar18;
  }
  fVar18 = ABS(fVar12 - fVar11) * fStack_58 + local_5c * ABS(fVar16 - fVar13);
  fVar20 = -fVar18;
  bVar1 = true;
  bVar2 = false;
  if (fVar19 <= fVar18) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar17) && !NAN(fVar20)) {
      bVar1 = fVar17 < fVar20;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    fVar12 = fVar14 - fVar12;
    fVar16 = fVar15 - fVar16;
    fVar17 = fVar16 * local_68 - fVar12 * fStack_64;
    uVar8 = NEON_fminnm(fVar16 * local_74 - fVar12 * fStack_70,
                        fVar16 * local_80 - fStack_7c * fVar12);
    fVar19 = (float)NEON_fminnm(fVar17,uVar8);
    fVar18 = ABS(fVar12) * fStack_58 + local_5c * ABS(fVar16);
    fVar20 = -fVar18;
    bVar1 = true;
    bVar2 = false;
    if (fVar19 <= fVar18) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar17) && !NAN(fVar20)) {
        bVar1 = fVar17 < fVar20;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      fVar11 = fVar11 - fVar14;
      fVar13 = fVar13 - fVar15;
      uVar3 = 0;
      fVar17 = fVar13 * local_68 - fVar11 * fStack_64;
      fVar18 = fVar13 * local_74 - fVar11 * fStack_70;
      fVar15 = fVar13 * local_80 - fStack_7c * fVar11;
      uVar8 = NEON_fminnm(fVar18,fVar15);
      fVar19 = (float)NEON_fminnm(fVar17,uVar8);
      fVar14 = ABS(fVar11) * fStack_58 + local_5c * ABS(fVar13);
      if (fVar14 < fVar19) goto LAB__text__005470fc;
      if (fVar18 <= fVar15) {
        fVar18 = fVar15;
      }
      if (fVar17 <= fVar18) {
        fVar17 = fVar18;
      }
      if (fVar17 < -fVar14) goto LAB__text__005470fc;
      fVar14 = fVar10 - fVar5;
      uVar3 = 0;
      fVar18 = local_6c * fVar7 - fVar14 * local_74;
      fVar15 = local_78 * fVar7 - local_80 * fVar14;
      fVar17 = fVar7 * local_60 - fVar14 * local_68;
      uVar8 = NEON_fminnm(fVar18,fVar15);
      fVar20 = (float)NEON_fminnm(fVar17,uVar8);
      fVar19 = ABS(fVar7) * local_54 + local_5c * ABS(fVar14);
      if (fVar19 < fVar20) goto LAB__text__005470fc;
      if (fVar18 <= fVar15) {
        fVar18 = fVar15;
      }
      if (fVar17 <= fVar18) {
        fVar17 = fVar18;
      }
      if (fVar17 < -fVar19) goto LAB__text__005470fc;
      fVar10 = fVar9 - fVar10;
      uVar3 = 0;
      fVar18 = fVar12 * local_6c - fVar10 * local_74;
      fVar19 = local_78 * fVar12 - fVar10 * local_80;
      fVar17 = fVar12 * local_60 - fVar10 * local_68;
      fVar15 = ABS(fVar12) * local_54 + local_5c * ABS(fVar10);
      uVar8 = NEON_fminnm(fVar18,fVar19);
      fVar20 = (float)NEON_fminnm(fVar17,uVar8);
      if (fVar15 < fVar20) goto LAB__text__005470fc;
      if (fVar18 <= fVar19) {
        fVar18 = fVar19;
      }
      if (fVar17 <= fVar18) {
        fVar17 = fVar18;
      }
      if (fVar17 < -fVar15) goto LAB__text__005470fc;
      fVar5 = fVar5 - fVar9;
      uVar3 = 0;
      fVar18 = fVar11 * local_60 - fVar5 * local_68;
      fVar17 = ABS(fVar11) * local_54 + local_5c * ABS(fVar5);
      uVar8 = NEON_fminnm(fVar11 * local_6c - fVar5 * local_74,local_78 * fVar11 - fVar5 * local_80)
      ;
      fVar9 = (float)NEON_fminnm(fVar18,uVar8);
      if ((fVar17 < fVar9) || (fVar18 < -fVar17)) goto LAB__text__005470fc;
      fStack_84 = -fVar6;
      local_8c = 0;
      local_88 = fVar14;
      uVar4 = FUN__text__005473c0(&local_8c,&local_68,&local_74,&local_80,&local_5c);
      uVar3 = 0;
      if ((uVar4 & 1) == 0) goto LAB__text__005470fc;
      fStack_90 = -fVar16;
      local_98 = 0;
      local_94 = fVar10;
      uVar4 = FUN__text__005473c0(&local_98,&local_68,&local_74,&local_80,&local_5c);
      uVar3 = 0;
      if ((uVar4 & 1) == 0) goto LAB__text__005470fc;
      fStack_9c = -fVar13;
      local_a4 = 0;
      local_a0 = fVar5;
      uVar4 = FUN__text__005473c0(&local_a4,&local_68,&local_74,&local_80,&local_5c);
      uVar3 = 0;
      if ((uVar4 & 1) == 0) goto LAB__text__005470fc;
      local_b0 = 0;
      local_a8 = 0x3f800000;
      uVar4 = FUN__text__005473c0(&local_b0,&local_68,&local_74,&local_80,&local_5c);
      if ((uVar4 & 1) != 0) {
        local_b4 = 0;
        local_bc = 0x3f800000;
        uVar4 = FUN__text__005473c0(&local_bc,&local_68,&local_74,&local_80,&local_5c);
        uVar3 = 0;
        if ((uVar4 & 1) != 0) {
          local_c0 = 0;
          local_c8 = 0x3f80000000000000;
          uVar4 = FUN__text__005473c0(&local_c8,&local_68,&local_74,&local_80,&local_5c);
          uVar3 = 0;
          if ((uVar4 & 1) != 0) {
            local_d4 = fVar16 * fVar14 - fVar10 * fVar6;
            fStack_d0 = fVar10 * fVar7 - fVar12 * fVar14;
            local_cc = fVar12 * fVar6 - fVar16 * fVar7;
            uVar3 = FUN__text__005473c0(&local_d4,&local_68,&local_74,&local_80,&local_5c);
          }
        }
        goto LAB__text__005470fc;
      }
    }
  }
  uVar3 = 0;
LAB__text__005470fc:
  return uVar3 & 1;
}


