/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00415c70; name: FUN_.text__00415c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00415c70(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if (((*(byte *)(param_1 + 0x58) & 1) == 0) || (iVar1 = FUN__text__0044f5b0(param_1), iVar1 == 1))
  {
    plVar3 = DAT_00aea230;
    if (DAT_00aea238 == 0) {
      plVar3 = (long *)FUN__text__00415d70(_DAT_008a4d88,0);
    }
    else {
      do {
        iVar1 = (**(code **)(**(long **)(*plVar3 + 0xe0) + 0xf0))();
        iVar2 = (**(code **)(**(long **)(param_1 + 0xe0) + 0xf0))();
        if (iVar2 <= iVar1) break;
        plVar3 = plVar3 + 1;
      } while (plVar3 != DAT_00aea230 + DAT_00aea238);
      plVar3 = (long *)FUN__text__00415d70(_DAT_008a4d88,
                                           (ulong)((long)plVar3 - (long)DAT_00aea230) >> 3);
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = param_1;
      FUN__text__00415ee0(param_1);
      return 1;
    }
  }
  FUN__text__004061f0(param_1,1);
  return 2;
}


