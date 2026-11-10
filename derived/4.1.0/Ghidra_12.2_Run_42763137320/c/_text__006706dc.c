/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006706dc; name: FUN_.text__006706dc
 */


undefined8 FUN__text__006706dc(long param_1,long *param_2)

{
  long *plVar1;
  
  if ((param_2 == (long *)0x0) || (plVar1 = (long *)*param_2, plVar1 == (long *)0x0)) {
    return 0;
  }
  do {
    if (*plVar1 == param_1) {
      FUN__text__00656b90(param_2,plVar1,0);
      return 1;
    }
    plVar1 = (long *)plVar1[2];
  } while (plVar1 != (long *)0x0);
  return 0;
}


