/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4900; name: FUN_.text__006a4900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006a4900(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  char *__s1;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  __s1 = (char *)param_3[2];
  if (*(int *)(param_1 + 0x48) == 0) {
LAB__text__006a4968:
    lVar5 = (*(code *)*_DAT_008a6960)(0x70,0x10,*_DAT_008a6970);
    if (lVar5 != 0) {
      FUN__text__006a0114(lVar5,__s1);
    }
    lVar2 = (**(code **)(*param_3 + 0x40))(param_3);
    plVar3 = *(long **)(param_1 + 0x30);
    plVar4 = (long *)(*plVar3 + (long)(int)plVar3[1] * 0x30);
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    *plVar4 = lVar5;
    plVar4[1] = 0;
    plVar4[2] = (long)param_3;
    plVar4[3] = lVar2 + 0xb0;
    plVar4 = plVar4 + 4;
    lVar2 = *plVar4;
    plVar3 = (long *)(param_1 + 0x38);
    *plVar4 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *(long **)(*plVar3 + 8) = plVar4;
    *plVar3 = lVar2;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    *(char *)(lVar5 + 0x18) = (char)param_3[3];
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
  }
  else {
    plVar3 = (long *)(param_1 + 0x40);
    do {
      lVar2 = *plVar3;
      if (lVar2 == param_1 + 0x38) goto LAB__text__006a4968;
      lVar5 = *(long *)(lVar2 + -0x20);
      plVar3 = (long *)(lVar2 + 8);
      iVar1 = strcmp(__s1,*(char **)(lVar5 + 0x10));
    } while (iVar1 != 0);
  }
  return lVar5;
}


