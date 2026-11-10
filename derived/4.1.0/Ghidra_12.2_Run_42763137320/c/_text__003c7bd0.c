/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c7bd0; name: FUN_.text__003c7bd0
 */


float FUN__text__003c7bd0(long param_1)

{
  float *pfVar1;
  float fVar2;
  
  if (param_1 == 0) {
    return 0.0;
  }
  fVar2 = *(float *)(param_1 + 0x50);
  do {
    pfVar1 = (float *)(param_1 + 0x48);
    param_1 = *(long *)(param_1 + 0x18);
    fVar2 = fVar2 * *pfVar1;
  } while (param_1 != 0);
  return fVar2;
}


