/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4a30; name: FUN_.text__006a4a30
 */


long FUN__text__006a4a30(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    plVar4 = (long *)(param_1 + 0x40);
    while (lVar2 = *plVar4, lVar2 != param_1 + 0x38) {
      lVar3 = *(long *)(lVar2 + -0x20);
      plVar4 = (long *)(lVar2 + 8);
      iVar1 = strcmp(param_2,*(char **)(lVar3 + 0x10));
      if (iVar1 == 0) {
        return lVar3;
      }
    }
  }
  return 0;
}


