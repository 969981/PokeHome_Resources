/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458000; name: FUN_.text__00458000
 */


void FUN__text__00458000(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    do {
      *(int *)(*plVar2 + 0xd0) = *(int *)(*plVar2 + 0xd0) + -1;
      plVar3 = (long *)*plVar2;
      iVar1 = *(int *)((long)plVar3 + 0xbc) + -1;
      *(int *)((long)plVar3 + 0xbc) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN__text__00400fc0(0,plVar3);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (long *)*param_1 + *(uint *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != (long *)0x0) {
    FUN__text__00400fc0(0,plVar2);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


