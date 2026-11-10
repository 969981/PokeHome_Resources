/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051727c; name: FUN_.text__0051727c
 */


float FUN__text__0051727c(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(long *)(param_2 + 0x40) == *(long *)(param_2 + 0x48)) {
    fVar1 = *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x14) -
            *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x18);
    fVar2 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x18) -
            *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x24);
    fVar3 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x20) -
            *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x14);
    fVar2 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x1c);
    fVar2 = *(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0x20);
    fVar3 = *(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x24);
    fVar2 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  }
  if (SQRT(fVar2) == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = fVar1 * (1.0 / SQRT(fVar2));
  }
  fVar2 = ABS(*(float *)(param_2 + 8));
  if (ABS(*(float *)(param_2 + 8)) <= ABS(*(float *)(param_2 + 0xc))) {
    fVar2 = ABS(*(float *)(param_2 + 0xc));
  }
  fVar3 = ABS(*(float *)(param_2 + 4));
  if (ABS(*(float *)(param_2 + 4)) <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = 0.0002;
  if (2.0 <= fVar3) {
    fVar2 = fVar3 * 0.0001;
  }
  return param_1 + fVar1 * fVar2;
}


