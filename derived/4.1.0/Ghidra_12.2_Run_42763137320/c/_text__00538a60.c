/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00538a60; name: FUN_.text__00538a60
 */


bool FUN__text__00538a60(undefined8 param_1,long param_2,double *param_3,double *param_4,
                        double *param_5,float *param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  
  fVar5 = (float)(param_3[1] - *(double *)(param_2 + 0x28));
  fVar10 = *(float *)(param_2 + 0x18);
  fVar11 = *(float *)(param_2 + 0x1c);
  fVar7 = (float)(param_4[1] - *(double *)(param_2 + 0x28));
  fVar13 = *(float *)(param_2 + 0x10);
  fVar12 = *(float *)(param_2 + 0x14);
  fVar4 = (float)(*param_3 - *(double *)(param_2 + 0x20));
  fVar8 = (float)(param_3[2] - *(double *)(param_2 + 0x30));
  fVar6 = (float)(*param_4 - *(double *)(param_2 + 0x20));
  fVar9 = (float)(param_4[2] - *(double *)(param_2 + 0x30));
  fVar14 = fVar10 * fVar4 - fVar12 * fVar5;
  fVar16 = fVar11 * fVar5 - fVar10 * fVar8;
  fVar17 = fVar12 * fVar8 - fVar11 * fVar4;
  fVar15 = fVar10 * fVar6 - fVar12 * fVar7;
  fVar18 = fVar11 * fVar7 - fVar10 * fVar9;
  fVar19 = fVar12 * fVar9 - fVar11 * fVar6;
  fVar14 = fVar14 + fVar14;
  fVar16 = fVar16 + fVar16;
  fVar17 = fVar17 + fVar17;
  fVar15 = fVar15 + fVar15;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  local_4c = ((fVar4 - fVar10 * fVar14) + fVar13 * fVar16 + fVar11 * fVar17) /
             *(float *)(param_2 + 0x38);
  fStack_48 = ((fVar5 + fVar12 * fVar14 + fVar13 * fVar17) - fVar11 * fVar16) /
              *(float *)(param_2 + 0x3c);
  local_44 = ((fVar8 + fVar13 * fVar14 + fVar10 * fVar16) - fVar12 * fVar17) /
             *(float *)(param_2 + 0x40);
  local_58 = ((fVar6 - fVar10 * fVar15) + fVar13 * fVar18 + fVar11 * fVar19) /
             *(float *)(param_2 + 0x38);
  fStack_54 = ((fVar7 + fVar12 * fVar15 + fVar13 * fVar19) - fVar11 * fVar18) /
              *(float *)(param_2 + 0x3c);
  local_50 = ((fVar9 + fVar13 * fVar15 + fVar10 * fVar18) - fVar12 * fVar19) /
             *(float *)(param_2 + 0x40);
  iVar1 = FUN__text__00516f44(param_1,&local_4c);
  iVar2 = FUN__text__00516f44(param_1,&local_58);
  if ((iVar1 == 0) && (iVar2 == 1)) {
    uVar3 = FUN__text__00516fe8(param_1,&local_4c,&local_58);
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    if (iVar2 != 0) {
      return false;
    }
    uVar3 = FUN__text__00516fe8(param_1,&local_58,&local_4c);
  }
  if ((uVar3 & 1) == 0) {
    return false;
  }
  fVar5 = (float)(param_3[1] - param_5[1]);
  fVar8 = (float)(param_5[1] - param_4[1]);
  fVar4 = (float)(*param_3 - *param_5);
  fVar7 = (float)(*param_5 - *param_4);
  fVar6 = (float)(param_3[2] - param_5[2]);
  fVar9 = (float)(param_5[2] - param_4[2]);
  fVar10 = SQRT((fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) *
                (fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6));
  if (fVar10 == 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)NEON_fminnm((fVar7 * fVar4 + fVar5 * fVar8 + fVar6 * fVar9) / fVar10,0x3f800000);
    if (fVar4 <= -1.0) {
      fVar4 = -1.0;
    }
    fVar4 = acosf(fVar4);
    fVar4 = fVar4 * 0.31830987;
  }
  *param_6 = fVar4;
  return fVar10 != 0.0;
}


