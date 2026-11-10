/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cb070; name: FUN_.text__004cb070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004cb070(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = FUN__text__004319c0(*_DAT_008a4658);
  if (lVar1 != 0) {
    lVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x28);
    do {
      lVar2 = lVar3;
      lVar3 = *plVar4;
      plVar4 = (long *)(lVar3 + 8);
    } while (lVar3 != 0 && lVar3 != param_1);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar1 + 0x28);
      if (*(long *)(lVar1 + 0x28) != lVar3) {
        plVar4 = (long *)(lVar2 + 8);
      }
      *plVar4 = *(long *)(lVar3 + 8);
      if (*(long *)(lVar1 + 0x20) == lVar3) {
        *(long *)(lVar1 + 0x20) = lVar2;
        return;
      }
    }
  }
  return;
}


