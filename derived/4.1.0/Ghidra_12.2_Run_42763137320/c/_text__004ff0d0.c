/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ff0d0; name: FUN_.text__004ff0d0
 */


undefined8 FUN__text__004ff0d0(long *param_1,undefined8 *param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  ushort local_40 [2];
  byte local_3c [4];
  int local_38;
  undefined1 auStack_34 [4];
  
  uVar3 = (**(code **)*param_2)(param_2,&local_38,4,auStack_34);
  if ((uVar3 & 1) == 0) {
    return 2;
  }
  uVar3 = (**(code **)*param_2)(param_2,local_3c,1,auStack_34);
  if ((uVar3 & 1) == 0) {
    return 2;
  }
  lVar7 = *param_3;
  if (*(int *)(lVar7 + 0x10) != local_38) {
    plVar5 = *(long **)(lVar7 + 0x20);
    uVar1 = *(uint *)(lVar7 + 0x28);
    plVar4 = plVar5;
    if (uVar1 != 0) {
      lVar7 = (ulong)uVar1 << 3;
      while (*(int *)(*plVar4 + 0x10) != local_38) {
        plVar4 = plVar4 + 1;
        lVar7 = lVar7 + -8;
        if (lVar7 == 0) {
          return 2;
        }
      }
    }
    if (plVar4 == plVar5 + uVar1) {
      return 2;
    }
    lVar7 = *plVar4;
    *param_3 = lVar7;
  }
  *param_1 = lVar7;
  if ((local_3c[0] & 0xfd) != 1) {
    uVar3 = (**(code **)*param_2)(param_2,local_40,2,auStack_34);
    if ((uVar3 & 1) == 0) {
      return 2;
    }
    plVar4 = (long *)FUN__text__004ff328(local_3c[0],local_40[0],0);
    if (plVar4 == (long *)0x0) {
      return 2;
    }
    iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,param_2,local_40[0]);
    if (iVar2 != 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return 2;
    }
    param_1[2] = (long)plVar4;
LAB__text__004ff278:
    local_40[0] = local_40[0] & 0xff00;
    uVar3 = (**(code **)*param_2)(param_2,param_1 + 1,2,auStack_34);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = (**(code **)*param_2)(param_2,local_40,1,auStack_34), (uVar3 & 1) == 0)) {
      return 2;
    }
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xfc | (byte)local_40[0] & 3;
    return 1;
  }
  piVar6 = *(int **)(param_4 + 0x38);
  uVar1 = *(uint *)(param_4 + 0x40);
  piVar8 = piVar6;
  if (uVar1 == 0) {
LAB__text__004ff25c:
    if (piVar8 != piVar6 + (ulong)uVar1 * 6) {
      lVar7 = *(long *)(piVar8 + 2);
      param_1[2] = lVar7;
      if (lVar7 == 0) {
        return 2;
      }
      goto LAB__text__004ff278;
    }
  }
  else {
    lVar7 = (ulong)uVar1 * 0x18;
    do {
      if (*piVar8 == local_38) goto LAB__text__004ff25c;
      piVar8 = piVar8 + 6;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  param_1[2] = 0;
  return 2;
}


