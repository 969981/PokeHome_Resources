/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521c6c; name: FUN_.text__00521c6c
 */


bool FUN__text__00521c6c(double param_1,double param_2,double param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(param_1 - *param_4);
  fVar3 = (float)(param_2 - param_4[1]);
  fVar1 = (float)(param_3 - param_4[2]);
  if (*(float *)((long)param_4 + 0x3c) <
      ABS(*(float *)(param_4 + 3) * fVar2 + fVar3 * *(float *)((long)param_4 + 0x1c) +
          fVar1 * *(float *)(param_4 + 4))) {
    return false;
  }
  if (*(float *)(param_4 + 8) <
      ABS(*(float *)((long)param_4 + 0x24) * fVar2 + fVar3 * *(float *)(param_4 + 5) +
          fVar1 * *(float *)((long)param_4 + 0x2c))) {
    return false;
  }
  return ABS(*(float *)(param_4 + 6) * fVar2 + fVar3 * *(float *)((long)param_4 + 0x34) +
             fVar1 * *(float *)(param_4 + 7)) <= *(float *)((long)param_4 + 0x44);
}


