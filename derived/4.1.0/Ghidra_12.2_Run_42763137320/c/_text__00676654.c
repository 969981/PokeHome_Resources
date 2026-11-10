/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00676654; name: FUN_.text__00676654
 */


long * FUN__text__00676654(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN__text__006783d4(0x10);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN__text__006783d4(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      FUN__text__006783e4(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      *plVar1 = (long)param_1;
      (*(code *)*param_1)();
    }
  }
  return plVar1;
}


