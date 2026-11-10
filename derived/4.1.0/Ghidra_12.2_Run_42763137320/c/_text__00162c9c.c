/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00162c9c; name: FUN_.text__00162c9c
 */


bool FUN__text__00162c9c(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18f04);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x18f04) = 0;
  }
  return iVar1 != 0;
}


