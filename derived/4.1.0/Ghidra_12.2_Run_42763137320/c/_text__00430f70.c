/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00430f70; name: FUN_.text__00430f70
 */


undefined8
FUN__text__00430f70(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6
                   )

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  piVar2 = (int *)*param_1;
  uVar7 = *(uint *)(param_1 + 1);
  piVar4 = piVar2;
  if (uVar7 != 0) {
    lVar5 = (ulong)uVar7 << 4;
    while (*piVar4 != param_2) {
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -0x10;
      if (lVar5 == 0) {
        return 0x14;
      }
    }
  }
  if (piVar4 == piVar2 + (ulong)uVar7 * 4) {
    return 0x14;
  }
  lVar5 = *(long *)(piVar4 + 2);
  uVar7 = *(uint *)(lVar5 + 0x18);
  piVar3 = *(int **)(lVar5 + 0x10);
  piVar2 = piVar3;
  if (uVar7 == 0) {
LAB__text__00431030:
    if (piVar2 == piVar3 + (ulong)uVar7 * 3) goto LAB__text__00431058;
    piVar2[2] = param_5;
  }
  else {
    lVar6 = (ulong)uVar7 * 0xc;
    do {
      if (*piVar2 == param_3 && piVar2[1] == param_4) goto LAB__text__00431030;
      piVar2 = piVar2 + 3;
      lVar6 = lVar6 + -0xc;
    } while (lVar6 != 0);
LAB__text__00431058:
    if (*(uint *)(lVar5 + 0x1c) <= uVar7) {
      uVar1 = FUN__text__00432050();
      if ((uVar1 & 1) == 0) {
        return 0x34;
      }
      if (*(uint *)(lVar5 + 0x1c) <= uVar7) {
        return 0x34;
      }
      uVar7 = *(uint *)(lVar5 + 0x18);
      piVar3 = *(int **)(lVar5 + 0x10);
    }
    *(uint *)(lVar5 + 0x18) = uVar7 + 1;
    if (piVar3 == (int *)0x0) {
      return 0x34;
    }
    *(ulong *)(piVar3 + (ulong)uVar7 * 3) = CONCAT44(param_4,param_3);
    (piVar3 + (ulong)uVar7 * 3)[2] = param_5;
  }
  if ((param_6 & 1) == 0) {
    return 1;
  }
  lVar5 = *(long *)(piVar4 + 2);
  uVar7 = *(uint *)(lVar5 + 0x18);
  piVar2 = *(int **)(lVar5 + 0x10);
  piVar4 = piVar2;
  if (uVar7 == 0) {
LAB__text__004310f0:
    if (piVar4 != piVar2 + (ulong)uVar7 * 3) goto LAB__text__00431154;
  }
  else {
    lVar6 = (ulong)uVar7 * 0xc;
    do {
      if (*piVar4 == param_4 && piVar4[1] == param_3) goto LAB__text__004310f0;
      piVar4 = piVar4 + 3;
      lVar6 = lVar6 + -0xc;
    } while (lVar6 != 0);
  }
  if (*(uint *)(lVar5 + 0x1c) <= uVar7) {
    uVar1 = FUN__text__00432050();
    if ((uVar1 & 1) == 0) {
      return 0x34;
    }
    if (*(uint *)(lVar5 + 0x1c) <= uVar7) {
      return 0x34;
    }
    uVar7 = *(uint *)(lVar5 + 0x18);
    piVar2 = *(int **)(lVar5 + 0x10);
  }
  *(uint *)(lVar5 + 0x18) = uVar7 + 1;
  if (piVar2 == (int *)0x0) {
    return 0x34;
  }
  piVar4 = piVar2 + (ulong)uVar7 * 3;
  *(ulong *)piVar4 = CONCAT44(param_3,param_4);
LAB__text__00431154:
  piVar4[2] = param_5;
  return 1;
}


