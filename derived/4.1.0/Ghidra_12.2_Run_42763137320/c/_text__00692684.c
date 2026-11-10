/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00692684; name: FUN_.text__00692684
 */


float FUN__text__00692684(long param_1)

{
  int iVar1;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    return *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x10) * 0.0;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
  return *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x10) * (float)iVar1;
}


