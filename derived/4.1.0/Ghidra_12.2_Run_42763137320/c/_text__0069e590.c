/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069e590; name: FUN_.text__0069e590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0069e590(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = _DAT_008a68e0 + 0x10;
  plVar2 = (long *)param_1[4];
  while (plVar2 != param_1 + 3) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    FUN__text__006a0f24();
    plVar2 = plVar1;
  }
  return;
}


