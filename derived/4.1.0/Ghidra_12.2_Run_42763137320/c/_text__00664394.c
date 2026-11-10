/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00664394; name: FUN_.text__00664394
 */


void FUN__text__00664394(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  plVar1 = *(long **)(lVar2 + 0x1a0);
  while (plVar1 != (long *)0x0) {
    *(long *)(lVar2 + 0x1a0) = plVar1[1];
    (**(code **)(*plVar1 + 0x20))(param_1,plVar1);
    FUN__text__006783e4(plVar1);
    plVar1 = *(long **)(lVar2 + 0x1a0);
  }
  return;
}


