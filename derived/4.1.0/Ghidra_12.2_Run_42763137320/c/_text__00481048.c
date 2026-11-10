/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00481048; name: FUN_.text__00481048
 */


float FUN__text__00481048(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    return *(float *)(param_2 + 0x30) / *(float *)(param_2 + 0x60);
  }
  fVar2 = (float)(*(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x80));
  fVar1 = (float)(*(double *)(param_2 + 0x18) - *(double *)(param_1 + 0x78));
  fVar3 = (float)(*(double *)(param_2 + 0x28) - *(double *)(param_1 + 0x88));
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) / *(float *)(param_2 + 0x60);
}


