/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046e090; name: FUN_.text__0046e090
 */


void FUN__text__0046e090(int *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 4);
  while (plVar2 != (long *)0x0) {
    *(long *)(param_1 + 4) = plVar2[0xc];
    if (*(long **)(param_1 + 2) == plVar2) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *param_1 = *param_1 + -1;
    FUN__text__004449ec(plVar2);
    FUN__text__00444060(plVar2);
    iVar1 = *(int *)((long)plVar2 + 0xbc) + -1;
    *(int *)((long)plVar2 + 0xbc) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__00400fc0(0,plVar2);
    }
    plVar2 = *(long **)(param_1 + 4);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN__text__0046e140(param_1 + 6);
  FUN__text__0046e1f0(param_1 + 0xc);
  FUN__text__0046e2a0(param_1 + 0x12);
  return;
}


