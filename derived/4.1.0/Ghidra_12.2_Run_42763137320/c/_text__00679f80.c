/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679f80; name: FUN_.text__00679f80
 */


long FUN__text__00679f80(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN__text__00680914();
  lVar2 = lVar1;
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) == 0) {
      lVar2 = 0;
      if (*(int *)(lVar1 + 0xdc) != 5) {
        lVar2 = lVar1;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}


