/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00540418; name: FUN_.text__00540418
 */


void FUN__text__00540418(long *param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
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
  
  *param_1 = param_2;
  fVar8 = *(float *)(param_2 + 0x18);
  fVar9 = *(float *)(param_2 + 0x1c);
  fVar15 = *(float *)(param_2 + 0x10);
  fVar14 = *(float *)(param_2 + 0x14);
  fVar2 = (float)((double)param_1[4] - *(double *)(param_2 + 0x28));
  fVar1 = (float)((double)param_1[3] - *(double *)(param_2 + 0x20));
  fVar4 = *(float *)(param_2 + 0x38);
  fVar6 = *(float *)(param_2 + 0x3c);
  fVar3 = (float)((double)param_1[5] - *(double *)(param_2 + 0x30));
  fVar16 = fVar8 * fVar1 - fVar14 * fVar2;
  fVar11 = fVar9 * fVar2 - fVar8 * fVar3;
  fVar13 = fVar14 * fVar3 - fVar9 * fVar1;
  fVar16 = fVar16 + fVar16;
  fVar11 = fVar11 + fVar11;
  fVar13 = fVar13 + fVar13;
  fVar12 = *(float *)(param_1 + 6);
  auVar5 = NEON_fmov(0x3f800000,4);
  fVar10 = *(float *)((long)param_1 + 0x34);
  fVar7 = *(float *)(param_1 + 7);
  *(float *)(param_1 + 9) =
       ((fVar3 + fVar15 * fVar16 + fVar8 * fVar11) - fVar14 * fVar13) / *(float *)(param_2 + 0x40);
  *(int *)((long)param_1 + 0x4c) = auVar5._12_4_;
  *(float *)(param_1 + 8) = ((fVar1 - fVar8 * fVar16) + fVar15 * fVar11 + fVar9 * fVar13) / fVar4;
  *(float *)((long)param_1 + 0x44) =
       ((fVar2 + fVar14 * fVar16 + fVar15 * fVar13) - fVar9 * fVar11) / fVar6;
  fVar1 = *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar9 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)(param_2 + 0x14);
  fVar6 = fVar7 * fVar8 - fVar12 * fVar3;
  fVar4 = fVar10 * fVar3 - fVar7 * fVar1;
  fVar11 = fVar12 * fVar1 - fVar10 * fVar8;
  fVar6 = fVar6 + fVar6;
  fVar4 = fVar4 + fVar4;
  fVar11 = fVar11 + fVar11;
  fVar2 = ((fVar12 + fVar9 * fVar4 + fVar3 * fVar6) - fVar1 * fVar11) / *(float *)(param_2 + 0x38);
  fVar3 = ((fVar10 - fVar3 * fVar4) + fVar8 * fVar11 + fVar9 * fVar6) / *(float *)(param_2 + 0x3c);
  fVar4 = ((fVar7 + fVar1 * fVar4 + fVar9 * fVar11) - fVar8 * fVar6) / *(float *)(param_2 + 0x40);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  param_1[0xb] = (ulong)(uint)fVar4;
  param_1[10] = CONCAT44(fVar3,fVar2);
  if (fVar1 == 0.0) {
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    return;
  }
  fVar1 = 1.0 / fVar1;
  param_1[0xd] = (ulong)(uint)(fVar4 * fVar1);
  param_1[0xc] = CONCAT44(fVar3 * fVar1,fVar2 * fVar1);
  return;
}


