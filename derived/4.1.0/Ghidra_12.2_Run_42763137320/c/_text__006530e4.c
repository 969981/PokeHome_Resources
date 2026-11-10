/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006530e4; name: FUN_.text__006530e4
 */


void FUN__text__006530e4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(param_1 + lVar2 * 8);
      while (plVar1 != (long *)0x0) {
        plVar1 = (long *)*plVar1;
        FUN__text__00652864();
      }
      *(undefined8 *)(param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x100);
    *(undefined8 *)(param_1 + 0x810) = 0;
  }
  return;
}


