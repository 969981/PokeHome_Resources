/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4698; name: FUN_.text__006b4698
 */


long FUN__text__006b4698(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    return lVar2 + 0xc;
  }
  lVar1 = 0;
  if (*(short *)(lVar2 + 8) != 1) {
    lVar1 = lVar2 + 0x18;
  }
  return lVar1;
}


