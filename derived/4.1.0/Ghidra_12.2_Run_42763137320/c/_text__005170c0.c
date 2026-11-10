/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005170c0; name: FUN_.text__005170c0
 */


bool FUN__text__005170c0(long param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
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
  float fVar16;
  float fVar17;
  
  fVar3 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar9 = *(float *)(param_1 + 0x14);
  fVar10 = *(float *)(param_1 + 0x18);
  fVar1 = fVar8 * (*param_2 - fVar3) + (param_2[1] - fVar2) * fVar9 + (param_2[2] - fVar4) * fVar10;
  fVar11 = fVar8 * (*param_3 - fVar3) + (param_3[1] - fVar2) * fVar9 + (param_3[2] - fVar4) * fVar10
  ;
  fVar5 = fVar3 + fVar8 * fVar1;
  fVar15 = *param_2 - fVar5;
  fVar6 = fVar2 + fVar9 * fVar1;
  fVar13 = *param_3 - (fVar3 + fVar8 * fVar11);
  fVar16 = param_2[1] - fVar6;
  fVar7 = fVar4 + fVar10 * fVar1;
  fVar14 = param_3[1] - (fVar2 + fVar9 * fVar11);
  fVar12 = param_2[2] - fVar7;
  fVar17 = param_3[2] - (fVar4 + fVar10 * fVar11);
  fVar12 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar14 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar17 * fVar17);
  fVar13 = fVar12 + fVar14;
  if (0.0 < fVar13) {
    fVar1 = (fVar14 * fVar1 + fVar11 * fVar12) / fVar13;
    fVar5 = fVar3 + fVar8 * fVar1;
    fVar6 = fVar2 + fVar9 * fVar1;
    fVar7 = fVar4 + fVar10 * fVar1;
  }
  *param_4 = fVar5;
  param_4[1] = fVar6;
  param_4[2] = fVar7;
  return fVar1 <= *(float *)(param_1 + 0x50) && 0.0 <= fVar1;
}


