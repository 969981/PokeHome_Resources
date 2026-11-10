/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679878; name: FUN_.text__00679878
 */


void FUN__text__00679878(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = nnosGetSystemTick();
  lVar3 = nnosGetSystemTickFrequency();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2 / lVar3;
  }
  if (param_1 != (long *)0x0) {
    *param_1 = lVar1;
  }
  return;
}


