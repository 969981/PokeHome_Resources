/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471000; name: FUN_.text__00471000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00471000(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  piVar1 = _DAT_008a4cf0;
  if (DAT_00aea7a0 == param_1) {
    *_DAT_008a4d00 = 1;
  }
  else {
    plVar4 = (long *)(_DAT_008a4cf0 + 4);
    lVar3 = 0;
    do {
      lVar2 = lVar3;
      lVar3 = *plVar4;
      plVar4 = (long *)(lVar3 + 0x40);
    } while (lVar3 != 0 && lVar3 != param_1);
    if (lVar3 != 0) {
      plVar4 = (long *)(_DAT_008a4cf0 + 4);
      if (*(long *)(_DAT_008a4cf0 + 4) != lVar3) {
        plVar4 = (long *)(lVar2 + 0x40);
      }
      *plVar4 = *(long *)(lVar3 + 0x40);
      if (*(long *)(piVar1 + 2) == lVar3) {
        *(long *)(piVar1 + 2) = lVar2;
        *piVar1 = *piVar1 + -1;
        return;
      }
      *piVar1 = *piVar1 + -1;
      return;
    }
  }
  return;
}


