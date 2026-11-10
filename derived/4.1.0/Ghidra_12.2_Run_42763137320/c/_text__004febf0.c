/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004febf0; name: FUN_.text__004febf0
 */


long * FUN__text__004febf0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  
  iVar1 = *(int *)(param_2 + 0x10);
  piVar5 = (int *)param_1[7];
  uVar9 = *(uint *)(param_1 + 8);
  piVar7 = piVar5;
  if (uVar9 == 0) {
LAB__text__004fec50:
    if (piVar7 != piVar5 + (ulong)uVar9 * 6) {
      return *(long **)(piVar7 + 2);
    }
  }
  else {
    lVar8 = (ulong)uVar9 * 0x18;
    do {
      if (*piVar7 == iVar1) goto LAB__text__004fec50;
      piVar7 = piVar7 + 6;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  plVar3 = (long *)FUN__text__004fe870(*param_1,iVar1);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)FUN__text__004fedb0(param_2);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,*(undefined4 *)(param_2 + 0x28));
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  piVar5 = (int *)param_1[7];
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar9 = *(uint *)(param_1 + 8);
  piVar7 = piVar5;
  if (uVar9 == 0) {
LAB__text__004fecfc:
    if (piVar7 != piVar5 + (ulong)uVar9 * 6) {
      plVar6 = (long *)(piVar7 + 2);
      goto LAB__text__004fed60;
    }
  }
  else {
    lVar8 = (ulong)uVar9 * 0x18;
    do {
      if (*piVar7 == iVar1) goto LAB__text__004fecfc;
      piVar7 = piVar7 + 6;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  if (*(uint *)((long)param_1 + 0x44) <= uVar9) {
    uVar4 = FUN__text__00501bb0(param_1 + 7);
    if (((uVar4 & 1) == 0) || (*(uint *)((long)param_1 + 0x44) <= uVar9)) goto LAB__text__004fed80;
    uVar9 = *(uint *)(param_1 + 8);
    piVar5 = (int *)param_1[7];
  }
  *(uint *)(param_1 + 8) = uVar9 + 1;
  if (piVar5 != (int *)0x0) {
    piVar5 = piVar5 + (ulong)uVar9 * 6;
    *(undefined2 *)(piVar5 + 4) = 0;
    *piVar5 = iVar1;
    plVar6 = (long *)(piVar5 + 2);
    *plVar6 = 0;
LAB__text__004fed60:
    *plVar6 = (long)plVar3;
    *(short *)(plVar6 + 1) = (short)uVar2;
    return plVar3;
  }
LAB__text__004fed80:
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return (long *)0x0;
}


