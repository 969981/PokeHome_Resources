/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050ac90; name: FUN_.text__0050ac90
 */


long FUN__text__0050ac90(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x80);
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    lVar1 = FUN__text__00542d00(plVar2,param_2);
  } while (lVar1 == 0);
  return lVar1;
}


