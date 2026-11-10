/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685ffc; name: FUN_.text__00685ffc
 */


void FUN__text__00685ffc(long param_1,long param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + *(int *)(param_2 + 0xd0);
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x88) = lVar1;
    *(long *)(lVar1 + 0x80) = param_2;
  }
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_2 + 0x70) = param_1;
  return;
}


