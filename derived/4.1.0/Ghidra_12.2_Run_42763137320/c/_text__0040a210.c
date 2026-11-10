/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040a210; name: FUN_.text__0040a210
 */


long FUN__text__0040a210(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  lVar4 = DAT_00ae99f8;
  if (iVar1 == 0 && iVar2 == 0) {
    for (; (lVar4 != 0 && (*(char *)(lVar4 + 0x555) == '\0')); lVar4 = *(long *)(lVar4 + 0x20)) {
    }
    return lVar4;
  }
  if ((iVar1 == 0) || (iVar3 = iVar2, iVar2 == 0)) {
    FUN__text__00408da0(param_1,param_2);
    iVar1 = *param_1;
    iVar3 = *param_2;
  }
  if (DAT_00ae99f8 != 0) {
    lVar4 = DAT_00ae99f8;
    do {
      if (*(long *)(lVar4 + 0x28) == CONCAT44(iVar3,iVar1)) {
        return lVar4;
      }
      lVar4 = *(long *)(lVar4 + 0x20);
    } while (lVar4 != 0);
    if (iVar2 != 0) {
      return 0;
    }
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_3 & 1) == 0) {
      return 0;
    }
    lVar4 = DAT_00ae99f8;
    if (DAT_00ae99f8 == 0) {
      return 0;
    }
    do {
      if (*(int *)(lVar4 + 100) == iVar1) {
        return lVar4;
      }
      lVar4 = *(long *)(lVar4 + 0x20);
    } while (lVar4 != 0);
  }
  return 0;
}


