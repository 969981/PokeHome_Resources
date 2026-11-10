/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00145fcc; name: FUN_.text__00145fcc
 */


long FUN__text__00145fcc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar1 = *(long *)(param_1 + 0x58) + 0x30;
  }
  return lVar1;
}


