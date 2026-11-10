/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00549674; name: FUN_.text__00549674
 */


void FUN__text__00549674(float param_1,long param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1;
  if ((param_3 & 1) == 0) {
    fVar2 = 0.0;
  }
  if (fVar2 == 0.0) {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 8);
    return;
  }
  fVar1 = log10f(param_1);
  fVar2 = 100.0;
  if (fVar1 * 20.0 < -0.6) {
    fVar2 = -3.0 / fVar1;
  }
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 8));
  *(int *)(param_2 + 0x40) = (int)(fVar2 * fVar1);
  return;
}


