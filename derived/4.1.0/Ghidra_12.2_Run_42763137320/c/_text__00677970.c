/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677970; name: FUN_.text__00677970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00677970(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar1 = _DAT_008a6598;
  if (*_DAT_008a6598 == 0x89a3d8) {
    if (param_1 != 0) {
      *_DAT_008a6598 = param_1;
      return 0;
    }
    if (_DAT_008b4670 != 0) {
      lVar3 = FUN__text__00674c34(0x71c85d);
      lVar4 = _DAT_008b4670;
      if ((lVar3 != 0) && (_DAT_008b4670 != 0)) {
        iVar2 = FUN__text__0066c234(lVar3,*(undefined8 *)(_DAT_008b4670 + 8));
        plVar5 = (long *)&DAT_008b4670;
        while (iVar2 == 0) {
          if (plVar5[1] == 0) {
            lVar4 = _DAT_008b4670;
            goto LAB__text__00677a20;
          }
          iVar2 = FUN__text__0066c234(lVar3,*(undefined8 *)(plVar5[1] + 8));
          plVar5 = plVar5 + 1;
        }
        lVar4 = *plVar5;
      }
LAB__text__00677a20:
      *plVar1 = lVar4;
      thunk_FUN__text__006783e4(lVar3);
      return 0;
    }
  }
  return 1;
}


