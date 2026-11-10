/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1ad0; name: FUN_.text__005a1ad0
 */


long FUN__text__005a1ad0(long param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xb8) + param_2 * 0x10;
  iVar1 = *(int *)(lVar4 + 8);
  iVar2 = *(int *)(lVar4 + 0xc);
  if (iVar1 < iVar2) {
    lVar4 = (long)iVar2 - (long)iVar1;
    plVar3 = (long *)(*(long *)(param_1 + 0xe8) + (long)iVar1 * 0x40 + 8);
    do {
      if (*plVar3 == *param_3) {
        return plVar3[-1];
      }
      plVar3 = plVar3 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return 0;
}


