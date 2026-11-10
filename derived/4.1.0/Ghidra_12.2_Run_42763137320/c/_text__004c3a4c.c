/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3a4c; name: FUN_.text__004c3a4c
 */


bool FUN__text__004c3a4c(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(byte *)(param_1 + 0x70) & 1) == 0) && (*(int *)(param_1 + 0x4c) == 1)) {
    bVar1 = *(long *)(param_1 + 0x68) == 0;
  }
  return bVar1;
}


