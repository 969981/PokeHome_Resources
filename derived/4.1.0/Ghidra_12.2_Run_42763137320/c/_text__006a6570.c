/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a6570; name: FUN_.text__006a6570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a6570(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar2 = param_1 + 0x28;
  if (lVar3 == lVar2) {
    lVar3 = lVar2;
  }
  else {
    lVar4 = lVar3;
    do {
      iVar1 = strcmp(*(char **)(lVar4 + 0x10),(char *)0x714c32);
      if (iVar1 == 0) goto LAB__text__006a65d4;
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != lVar2);
  }
  goto LAB__text__006a65f4;
  while (lVar3 = *(long *)(lVar3 + 8), lVar3 != lVar2) {
LAB__text__006a65d4:
    iVar1 = strcmp(*(char **)(lVar3 + 0x10),(char *)0x714c32);
    if (iVar1 == 0) goto LAB__text__006a65f4;
  }
  lVar3 = 0;
LAB__text__006a65f4:
  *(long *)(param_1 + 0x20) = lVar3;
  FUN__text__006ca610(param_1,lVar3);
  *(undefined2 *)(param_1 + 0x10d) = 0;
  lVar2 = FUN__text__006c9ec4(param_1 + 0x48);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) {
    (*(code *)*_DAT_008a6968)(lVar2,*_DAT_008a6970);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}


