/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ae040; name: FUN_.text__003ae040
 */


long FUN__text__003ae040(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    plVar1 = (long *)(*(code *)**(undefined8 **)(lVar3 + 0x50))();
    plVar2 = (long *)FUN__text__003a9e38();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
    }
  }
  return lVar3;
}


