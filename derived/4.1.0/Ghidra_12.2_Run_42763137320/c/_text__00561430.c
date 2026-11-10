/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561430; name: FUN_.text__00561430
 */


void FUN__text__00561430(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
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
  
  if (param_2 != 0) {
    fVar4 = *(float *)(param_1 + 0x98);
    uVar1 = 0;
    fVar11 = *(float *)(param_1 + 0xa4);
    fVar2 = fVar11 * 4.0;
    fVar6 = fVar4 + *(float *)(param_1 + 0xa0);
    fVar3 = fVar4 * 4.0;
    fVar14 = fVar6 + fVar4;
    fVar15 = fVar14 + fVar4;
    fVar5 = fVar11 + *(float *)(param_1 + 0xac);
    fVar12 = fVar5 + fVar11;
    fVar13 = fVar12 + fVar11;
    fVar11 = fVar13 + fVar11;
    fVar4 = fVar15 + fVar4;
    do {
      uVar1 = uVar1 + 4;
      fVar7 = ((float)*param_3 + (float)*param_4 * fVar6) * fVar5;
      fVar8 = ((float)((ulong)*param_3 >> 0x20) + (float)((ulong)*param_4 >> 0x20) * fVar14) *
              fVar12;
      fVar9 = ((float)param_3[1] + (float)param_4[1] * fVar15) * fVar13;
      fVar10 = ((float)((ulong)param_3[1] >> 0x20) + (float)((ulong)param_4[1] >> 0x20) * fVar4) *
               fVar11;
      fVar5 = fVar5 + fVar2;
      fVar12 = fVar12 + fVar2;
      fVar13 = fVar13 + fVar2;
      fVar11 = fVar11 + fVar2;
      param_3[1] = CONCAT44(fVar10,fVar9);
      *param_3 = CONCAT44(fVar8,fVar7);
      param_3 = param_3 + 2;
      param_4 = param_4 + 2;
      fVar6 = fVar6 + fVar3;
      fVar14 = fVar14 + fVar3;
      fVar15 = fVar15 + fVar3;
      fVar4 = fVar4 + fVar3;
    } while (uVar1 < param_2);
  }
  return;
}


