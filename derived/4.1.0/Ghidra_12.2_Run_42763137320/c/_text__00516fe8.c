/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00516fe8; name: FUN_.text__00516fe8
 */


bool FUN__text__00516fe8(long param_1,float *param_2,float *param_3)

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
  
  fVar3 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar4 = fVar2 * *(float *)(param_1 + 0x20) - fVar3 * *(float *)(param_1 + 0x24);
  fVar1 = fVar8 * *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c) * fVar2;
  fVar5 = *(float *)(param_1 + 0x1c) * fVar3 - fVar8 * *(float *)(param_1 + 0x20);
  fVar7 = param_2[1] - *(float *)(param_1 + 8);
  fVar11 = param_2[2] - *(float *)(param_1 + 0xc);
  fVar6 = *param_2 - *(float *)(param_1 + 4);
  fVar12 = fVar6 * fVar8 + fVar7 * fVar3 + fVar11 * fVar2;
  fVar6 = fVar6 - fVar8 * fVar12;
  fVar7 = fVar7 - fVar3 * fVar12;
  fVar11 = fVar11 - fVar2 * fVar12;
  fVar10 = param_3[1] - *(float *)(param_1 + 8);
  fVar9 = *param_3 - *(float *)(param_1 + 4);
  fVar12 = param_3[2] - *(float *)(param_1 + 0xc);
  fVar13 = fVar9 * fVar8 + fVar3 * fVar10 + fVar2 * fVar12;
  fVar9 = fVar9 - fVar8 * fVar13;
  fVar10 = fVar10 - fVar3 * fVar13;
  fVar12 = fVar12 - fVar2 * fVar13;
  return (-(fVar11 * fVar5) - (fVar6 * fVar4 + fVar1 * fVar7)) /
         SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar11 * fVar11) <=
         (fVar9 * fVar4 + fVar1 * fVar10 + fVar5 * fVar12) /
         SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12) + 1.1920929e-07;
}


