/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004580c0; name: FUN_.text__004580c0
 */


long * FUN__text__004580c0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  if ((int)param_1[1] != 0) {
    plVar3 = (long *)*param_1;
    do {
      *(int *)(*plVar3 + 0xd0) = *(int *)(*plVar3 + 0xd0) + -1;
      plVar2 = (long *)*plVar3;
      iVar1 = *(int *)((long)plVar2 + 0xbc) + -1;
      *(int *)((long)plVar2 + 0xbc) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN__text__00400fc0(0,plVar2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 8));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN__text__00458170(param_1,param_2);
  return param_1;
}


