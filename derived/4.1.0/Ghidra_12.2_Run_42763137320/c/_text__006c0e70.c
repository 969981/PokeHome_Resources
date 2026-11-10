/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c0e70; name: FUN_.text__006c0e70
 */


long FUN__text__006c0e70(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) != param_1 + 0x20) {
    return *(long *)(param_1 + 0x28) + -8;
  }
  do {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = (long *)(param_1 + 0x10);
    param_1 = lVar2;
  } while (*plVar1 == lVar2 + 0x20);
  return *plVar1 + -8;
}


