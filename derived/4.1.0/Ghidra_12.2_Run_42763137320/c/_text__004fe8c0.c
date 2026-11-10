/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fe8c0; name: FUN_.text__004fe8c0
 */


undefined8 FUN__text__004fe8c0(long param_1,int param_2,long *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar2 = (long *)(**(code **)(*param_3 + 0x20))(param_3,param_4);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  piVar3 = *(int **)(param_1 + 0x178);
  uVar1 = *(uint *)(param_1 + 0x180);
  uVar7 = (ulong)uVar1;
  piVar4 = piVar3;
  if (uVar1 == 0) {
LAB__text__004fe92c:
    if (piVar4 != piVar3 + (ulong)uVar1 * 4) {
      plVar6 = (long *)(piVar4 + 2);
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x10))();
      }
      goto LAB__text__004fe99c;
    }
  }
  else {
    lVar5 = uVar7 << 4;
    do {
      if (*piVar4 == param_2) goto LAB__text__004fe92c;
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if (*(uint *)(param_1 + 0x184) <= uVar1) {
    uVar7 = FUN__text__004fe9f0(param_1 + 0x178);
    if (((uVar7 & 1) == 0) || (*(uint *)(param_1 + 0x184) <= uVar1)) goto LAB__text__004fe9b4;
    uVar7 = (ulong)*(uint *)(param_1 + 0x180);
    piVar3 = *(int **)(param_1 + 0x178);
  }
  *(int *)(param_1 + 0x180) = (int)uVar7 + 1;
  if (piVar3 != (int *)0x0) {
    piVar3[uVar7 * 4] = param_2;
    plVar6 = (long *)(piVar3 + uVar7 * 4 + 2);
    *plVar6 = 0;
LAB__text__004fe99c:
    *plVar6 = (long)plVar2;
    return 1;
  }
LAB__text__004fe9b4:
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return 0;
}


