/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005189c0; name: FUN_.text__005189c0
 */


float FUN__text__005189c0(double *param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1[7] == param_2) {
    return *(float *)(param_1 + 3);
  }
  fVar4 = *(float *)((long)param_2 + 0x18);
  fVar5 = *(float *)((long)param_2 + 0x1c);
  fVar2 = (float)(param_1[1] - *(double *)((long)param_2 + 0x28));
  fVar1 = (float)(*param_1 - *(double *)((long)param_2 + 0x20));
  fVar3 = (float)(param_1[2] - *(double *)((long)param_2 + 0x30));
  fVar6 = fVar4 * fVar1 - *(float *)((long)param_2 + 0x14) * fVar2;
  fVar2 = fVar5 * fVar2 - fVar4 * fVar3;
  fVar3 = *(float *)((long)param_2 + 0x14) * fVar3 - fVar5 * fVar1;
  return ((fVar1 - fVar4 * (fVar6 + fVar6)) + *(float *)((long)param_2 + 0x10) * (fVar2 + fVar2) +
         fVar5 * (fVar3 + fVar3)) / *(float *)((long)param_2 + 0x38);
}


