/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cc8f0; name: FUN_.text__006cc8f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006cc8f0(long param_1,long *param_2,int *param_3)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 uVar9;
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
  float local_60 [8];
  
  puVar7 = (undefined8 *)*param_2;
  fVar10 = *(float *)(param_1 + 0x34) * 0.5;
  fVar8 = *(float *)(param_1 + 0x30) * 0.5;
  if (*(float *)(param_1 + 0x38) <= fVar8) {
    fVar8 = *(float *)(param_1 + 0x38);
  }
  if (fVar8 <= fVar10) {
    fVar10 = fVar8;
  }
  fVar8 = acosf(-2.0 / fVar10 + 1.0);
  lVar2 = _DAT_008a1d28;
  if (fVar8 <= 0.0) {
    uVar4 = 1;
  }
  else {
    uVar4 = (int)(*_DAT_008a5840 / fVar8) + 1;
    if (uVar4 == 0xffffffff) goto LAB__text__006ccb5c;
  }
  uVar5 = 0;
  fVar13 = (float)NEON_ucvtf(*_DAT_008a1d20);
  fVar8 = *_DAT_008a5840 * 0.5;
  fVar11 = fVar8 / (float)uVar4;
  fVar12 = *_DAT_008a02c8;
  do {
    fVar18 = *(float *)(param_1 + 0x38);
    local_60[0] = 1.0;
    local_60[1] = -1.0;
    local_60[2] = -1.0;
    local_60[3] = -1.0;
    local_60[4] = -1.0;
    local_60[5] = 1.0;
    local_60[6] = 1.0;
    local_60[7] = 1.0;
    fVar16 = *(float *)(param_1 + 0x34) * 0.5;
    fVar14 = *(float *)(param_1 + 0x30) * 0.5;
    fVar15 = fVar14;
    if (fVar18 <= fVar14) {
      fVar15 = fVar18;
    }
    fVar17 = fVar16;
    if (fVar15 <= fVar16) {
      fVar17 = fVar15;
    }
    fVar15 = *(float *)(param_1 + 0x28) + (fVar14 - fVar17) * local_60[uVar5 * 2];
    fVar16 = *(float *)(param_1 + 0x2c) + (fVar16 - fVar17) * local_60[uVar5 * 2 + 1];
    fVar14 = fVar8 * (float)(int)uVar5;
    if ((uVar5 & 1) == 0) {
      if (*(float *)(param_1 + 0x30) < fVar18 + fVar18) goto LAB__text__006ccad8;
LAB__text__006cca58:
      uVar6 = uVar4 + 1;
      do {
        fVar18 = fVar14 * (fVar13 / fVar12);
        fVar14 = fVar11 + fVar14;
        uVar6 = uVar6 - 1;
        uVar3 = (ulong)fVar18;
        pfVar1 = (float *)(lVar2 + (uVar3 >> 0x18 & 0xff) * 0x10);
        fVar19 = pfVar1[3];
        fVar18 = (float)((uint)uVar3 & 0xffffff) * 5.9604645e-08;
        fVar17 = pfVar1[1];
        *(float *)*param_2 = fVar15 + fVar10 * (*pfVar1 + fVar18 * pfVar1[2]);
        *(float *)(*param_2 + 4) = fVar16 - fVar10 * (fVar17 + fVar18 * fVar19);
        *param_2 = *param_2 + 8;
        *param_3 = *param_3 + 1;
      } while (uVar6 != 0);
    }
    else {
      if (fVar18 + fVar18 <= *(float *)(param_1 + 0x34)) goto LAB__text__006cca58;
LAB__text__006ccad8:
      uVar6 = 0;
      do {
        if (uVar6 < uVar4) {
          uVar3 = (ulong)(fVar14 * (fVar13 / fVar12));
          pfVar1 = (float *)(lVar2 + (uVar3 >> 0x18 & 0xff) * 0x10);
          fVar19 = pfVar1[1];
          fVar18 = (float)((uint)uVar3 & 0xffffff) * 5.9604645e-08;
          fVar17 = pfVar1[3];
          *(float *)*param_2 = fVar15 + fVar10 * (*pfVar1 + fVar18 * pfVar1[2]);
          *(float *)(*param_2 + 4) = fVar16 - fVar10 * (fVar19 + fVar18 * fVar17);
          *param_2 = *param_2 + 8;
          *param_3 = *param_3 + 1;
        }
        fVar14 = fVar11 + fVar14;
        uVar6 = uVar6 + 1;
      } while (uVar4 + 1 != uVar6);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 4);
LAB__text__006ccb5c:
  uVar9 = *puVar7;
  *(int *)*param_2 = (int)uVar9;
  *(int *)(*param_2 + 4) = (int)((ulong)uVar9 >> 0x20);
  *param_2 = *param_2 + 8;
  *param_3 = *param_3 + 1;
  return;
}


