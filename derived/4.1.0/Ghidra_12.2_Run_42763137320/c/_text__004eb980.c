/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb980; name: FUN_.text__004eb980
 */


void FUN__text__004eb980(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  iVar1 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    FUN__text__004e9120(param_1);
  }
  else {
    plVar4 = (long *)0x0;
    plVar5 = (long *)(lVar2 + 0x30);
    do {
      plVar3 = plVar4;
      plVar4 = (long *)*plVar5;
      plVar5 = plVar4 + 1;
    } while (plVar4 != (long *)0x0 && plVar4 != param_1);
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)(lVar2 + 0x30);
      if (*(long **)(lVar2 + 0x30) != plVar4) {
        plVar5 = plVar3 + 1;
      }
      *plVar5 = plVar4[1];
      FUN__text__004eb980();
    }
    param_1[2] = 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN__text__00400fc0(0,param_1);
  return;
}


