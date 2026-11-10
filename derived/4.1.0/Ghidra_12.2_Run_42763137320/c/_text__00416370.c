/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00416370; name: FUN_.text__00416370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00416370(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = FUN__text__0044e1d0(param_2,param_1);
  plVar1 = _DAT_008a48f0;
  if ((int)uVar2 != 0x3f) {
    plVar5 = _DAT_008a48f0 + 1;
    lVar4 = 0;
    do {
      lVar3 = lVar4;
      lVar4 = *plVar5;
      plVar5 = (long *)(lVar4 + 0x68);
    } while (lVar4 != 0 && lVar4 != param_2);
    if (lVar4 != 0) {
      plVar5 = _DAT_008a48f0 + 1;
      if (_DAT_008a48f0[1] != lVar4) {
        plVar5 = (long *)(lVar3 + 0x68);
      }
      *plVar5 = *(long *)(lVar4 + 0x68);
      if (*plVar1 == lVar4) {
        *plVar1 = lVar3;
      }
    }
    if ((int)uVar2 == 1) {
      uVar2 = FUN__text__00415c70(param_2);
      return uVar2;
    }
    FUN__text__004061f0(param_2,1);
    uVar2 = 2;
  }
  return uVar2;
}


