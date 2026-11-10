/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00480e30; name: FUN_.text__00480e30
 */


void FUN__text__00480e30(float param_1,long param_2,long param_3,long param_4)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x90);
  if (*(long *)(*(long *)(param_3 + 8) + 0x58) != *(long *)(*(long *)(param_2 + 8) + 0x58)) {
    fVar1 = *(float *)(param_3 + 0x78) * fVar1;
  }
  *(float *)(param_4 + 0x60) = fVar1;
  *(float *)(param_4 + 0x30) = param_1 / fVar1;
  return;
}


