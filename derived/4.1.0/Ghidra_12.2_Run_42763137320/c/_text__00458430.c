/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458430; name: FUN_.text__00458430
 */


bool FUN__text__00458430(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 1) == 0) {
    return false;
  }
  lVar2 = (ulong)*(uint *)(param_1 + 1) * 8;
  plVar1 = (long *)*param_1;
  do {
    lVar2 = lVar2 + -8;
    lVar3 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (lVar3 != param_2 && lVar2 != 0);
  return lVar3 == param_2;
}


