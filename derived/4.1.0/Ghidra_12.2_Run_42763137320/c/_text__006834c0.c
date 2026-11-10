/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006834c0; name: FUN_.text__006834c0
 */


long FUN__text__006834c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar3 = 0;
  do {
    plVar1 = param_1 + 3;
    plVar2 = param_1 + 4;
    param_1 = (long *)*param_1;
    lVar3 = (lVar3 + *plVar2) - *plVar1;
  } while (param_1 != (long *)0x0);
  return lVar3;
}


