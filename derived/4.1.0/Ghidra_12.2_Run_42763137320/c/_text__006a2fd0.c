/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a2fd0; name: FUN_.text__006a2fd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006a2fd0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = (*(code *)*_DAT_008a6960)(0x40,4,*_DAT_008a6970);
  if (lVar1 != 0) {
    FUN__text__006973d8(lVar1);
    plVar4 = (long *)(param_1 + 8);
    plVar2 = (long *)(lVar1 + 8);
    lVar3 = *plVar2;
    *plVar2 = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *(long **)(*plVar4 + 8) = plVar2;
    *plVar4 = lVar3;
  }
  return lVar1;
}


