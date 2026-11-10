/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1fc0; name: FUN_.text__004c1fc0
 */


void FUN__text__004c1fc0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  lVar3 = 0;
  plVar4 = plVar1;
  do {
    lVar2 = lVar3;
    lVar3 = *plVar4;
    plVar4 = (long *)(lVar3 + 8);
  } while (lVar3 != 0 && lVar3 != param_2);
  if (lVar3 != 0) {
    if (*plVar1 != lVar3) {
      plVar1 = (long *)(lVar2 + 8);
    }
    *plVar1 = *(long *)(lVar3 + 8);
  }
  return;
}


