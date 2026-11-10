/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686e58; name: FUN_.text__00686e58
 */


undefined8 FUN__text__00686e58(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    return 0xffffffff;
  }
  do {
    if (*plVar1 == param_2) {
      FUN__text__00656b90(param_1,plVar1,0);
      return 0;
    }
    plVar1 = (long *)plVar1[2];
  } while (plVar1 != (long *)0x0);
  return 0xffffffff;
}


