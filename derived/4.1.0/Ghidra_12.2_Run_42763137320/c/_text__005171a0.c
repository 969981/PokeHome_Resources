/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005171a0; name: FUN_.text__005171a0
 */


float FUN__text__005171a0(float param_1,long param_2,int param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = 0x1c;
  if (param_3 != 0) {
    lVar1 = 0x28;
  }
  fVar4 = *(float *)(param_2 + lVar1);
  pfVar2 = (float *)(param_2 + 0x1c);
  if (param_3 != 0) {
    pfVar2 = (float *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x40) != *(long *)(param_2 + 0x48)) {
    pfVar3 = (float *)(param_2 + 0x28);
    if (param_3 != 0) {
      pfVar3 = (float *)(param_2 + 0x1c);
    }
    fVar4 = fVar4 - *pfVar3;
    fVar5 = SQRT(fVar4 * fVar4 + (pfVar2[1] - pfVar3[1]) * (pfVar2[1] - pfVar3[1]) +
                 (pfVar2[2] - pfVar3[2]) * (pfVar2[2] - pfVar3[2]));
    if (fVar5 == 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = fVar4 * (1.0 / fVar5);
    }
  }
  fVar5 = ABS(*(float *)(param_2 + 8));
  if (ABS(*(float *)(param_2 + 8)) <= ABS(*(float *)(param_2 + 0xc))) {
    fVar5 = ABS(*(float *)(param_2 + 0xc));
  }
  fVar6 = ABS(*(float *)(param_2 + 4));
  if (ABS(*(float *)(param_2 + 4)) <= fVar5) {
    fVar6 = fVar5;
  }
  fVar5 = 0.0002;
  if (2.0 <= fVar6) {
    fVar5 = fVar6 * 0.0001;
  }
  return param_1 + fVar4 * fVar5;
}


