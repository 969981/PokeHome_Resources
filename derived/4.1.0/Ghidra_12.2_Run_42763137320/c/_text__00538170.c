/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00538170; name: FUN_.text__00538170
 */


undefined1  [16] FUN__text__00538170(long param_1,long param_2,double *param_3,double *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_1 == 0) {
    auVar2._0_8_ = *param_3;
    auVar2._8_8_ = 0;
    return auVar2;
  }
  fVar5 = *(float *)(param_2 + 0x3c) * *(float *)(param_1 + 8);
  fVar13 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0x38) * *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_2 + 0x40) * *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(param_2 + 0x18);
  fVar9 = *(float *)(param_2 + 0x1c);
  fVar14 = fVar10 * fVar1 + fVar5 * fVar7 + fVar6 * fVar9;
  fVar15 = fVar13 * fVar13 - (fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
  fVar8 = (fVar9 * fVar1 - fVar6 * fVar10) * fVar13 + fVar7 * fVar14;
  fVar11 = (fVar7 * fVar6 - fVar9 * fVar5) * fVar13 + fVar10 * fVar14;
  fVar7 = (fVar10 * fVar5 - fVar7 * fVar1) * fVar13 + fVar9 * fVar14;
  fVar5 = fVar8 + fVar8 + fVar5 * fVar15;
  fVar1 = fVar11 + fVar11 + fVar1 * fVar15;
  fVar6 = fVar7 + fVar7 + fVar6 * fVar15;
  fVar7 = SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6);
  if (fVar7 == 0.0) {
    fVar1 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar7 = 1.0 / fVar7;
    fVar1 = fVar1 * fVar7;
    fVar5 = fVar5 * fVar7;
    fVar6 = fVar6 * fVar7;
  }
  dVar12 = *param_3;
  if (0.0 < fVar1 * (float)(*param_4 - dVar12) + (float)(param_4[1] - param_3[1]) * fVar5 +
            (float)(param_4[2] - param_3[2]) * fVar6) {
    auVar3._0_8_ = dVar12 + (double)(fVar1 * 0.0001);
    auVar3._8_8_ = 0;
    return auVar3;
  }
  auVar4._0_8_ = dVar12 - (double)(fVar1 * 0.0001);
  auVar4._8_8_ = 0;
  return auVar4;
}


