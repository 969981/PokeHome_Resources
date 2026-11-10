/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053c6a0; name: FUN_.text__0053c6a0
 */


undefined1  [16] FUN__text__0053c6a0(long param_1,long param_2,double *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  
  if (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48)) {
    fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x14) -
            *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x18) -
            *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x24);
    fVar8 = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x20) -
            *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x14);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1c);
    fVar4 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x20);
    fVar8 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x24);
  }
  fVar1 = *(float *)(param_2 + 0x38) * fVar1;
  fVar4 = *(float *)(param_2 + 0x3c) * fVar4;
  fVar8 = *(float *)(param_2 + 0x40) * fVar8;
  fVar9 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x1c);
  fVar11 = *(float *)(param_2 + 0x10);
  fVar5 = *(float *)(param_2 + 0x14);
  fVar12 = fVar5 * fVar1 + fVar4 * fVar9 + fVar8 * fVar10;
  fVar13 = fVar11 * fVar11 - (fVar5 * fVar5 + fVar9 * fVar9 + fVar10 * fVar10);
  fVar6 = (fVar9 * fVar8 - fVar10 * fVar4) * fVar11 + fVar5 * fVar12;
  fVar7 = fVar6 + fVar6 + fVar1 * fVar13;
  fVar6 = (fVar10 * fVar1 - fVar8 * fVar5) * fVar11 + fVar9 * fVar12;
  fVar6 = fVar6 + fVar6 + fVar4 * fVar13;
  fVar1 = (fVar5 * fVar4 - fVar9 * fVar1) * fVar11 + fVar10 * fVar12;
  fVar1 = fVar1 + fVar1 + fVar8 * fVar13;
  fVar1 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1);
  if (fVar1 == 0.0) {
    auVar3._0_8_ = *param_3 + 0.0;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  auVar2._0_8_ = *param_3 + (double)(fVar7 * 0.0001 * (1.0 / fVar1));
  auVar2._8_8_ = 0;
  return auVar2;
}


