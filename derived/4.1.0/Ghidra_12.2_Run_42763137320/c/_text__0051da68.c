/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051da68; name: FUN_.text__0051da68
 */


float FUN__text__0051da68(long param_1,double *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  fVar5 = *(float *)(lVar1 + 0x18);
  fVar6 = *(float *)(lVar1 + 0x1c);
  fVar3 = (float)(param_2[1] - *(double *)(lVar1 + 0x28));
  fVar2 = (float)(*param_2 - *(double *)(lVar1 + 0x20));
  fVar4 = (float)(param_2[2] - *(double *)(lVar1 + 0x30));
  fVar7 = fVar5 * fVar2 - *(float *)(lVar1 + 0x14) * fVar3;
  fVar3 = fVar6 * fVar3 - fVar5 * fVar4;
  fVar4 = *(float *)(lVar1 + 0x14) * fVar4 - fVar6 * fVar2;
  return ((fVar2 - fVar5 * (fVar7 + fVar7)) + *(float *)(lVar1 + 0x10) * (fVar3 + fVar3) +
         fVar6 * (fVar4 + fVar4)) / *(float *)(lVar1 + 0x38);
}


