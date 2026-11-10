/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042f090; name: FUN_.text__0042f090
 */


void FUN__text__0042f090(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = (long *)*param_1;
  plVar3 = plVar1;
  if ((int)param_1[1] != 0) {
    do {
      plVar2 = plVar3 + 1;
      lVar4 = *plVar3;
      FUN__text__0042fc10(lVar4,*(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18));
      FUN__text__0042fb4c(lVar4);
      FUN__text__00400fc0(0,lVar4);
      plVar1 = (long *)*param_1;
      plVar3 = plVar2;
    } while (plVar2 != plVar1 + *(uint *)(param_1 + 1));
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,plVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  plVar1 = (long *)param_1[2];
  plVar3 = plVar1;
  if ((int)param_1[3] != 0) {
    do {
      plVar2 = plVar3 + 1;
      lVar4 = *plVar3;
      FUN__text__0042fc10(lVar4,*(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18));
      FUN__text__0042fb4c(lVar4);
      FUN__text__00400fc0(0,lVar4);
      plVar1 = (long *)param_1[2];
      plVar3 = plVar2;
    } while (plVar2 != plVar1 + *(uint *)(param_1 + 3));
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(0,plVar1);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


