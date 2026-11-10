/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519f20; name: FUN_.text__00519f20
 */


void FUN__text__00519f20(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0x68) + *(float *)(param_2 + 100) * 0.31830987;
  fVar4 = (float)NEON_fminnm(*(float *)(param_2 + 0x5c) + *(float *)(param_2 + 0x60),
                             *(float *)(param_1 + 0x38));
  fVar3 = 2.0;
  if (fVar2 < 1.0) {
    fVar3 = fVar2 + fVar2;
  }
  lVar1 = FUN__text__00519fa0((fVar4 / *(float *)(param_1 + 0x38) + fVar3) * 0.33333334,
                              param_1 + 0x28);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = param_2;
  }
  return;
}


