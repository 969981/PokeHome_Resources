/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004897d0; name: FUN_.text__004897d0
 */


int * FUN__text__004897d0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  
  piVar3 = *(int **)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x18);
  piVar4 = piVar3;
  if (uVar6 == 0) {
LAB__text__00489820:
    if (piVar4 != piVar3 + (ulong)uVar6 * 6) {
      piVar4 = piVar4 + 2;
      iVar1 = FUN__text__004817e0(*(undefined4 *)(param_1 + 0x78),param_2,piVar4);
      goto joined_r0x00489848;
    }
  }
  else {
    lVar5 = (ulong)uVar6 * 0x18;
    do {
      if (*piVar4 == param_2) goto LAB__text__00489820;
      piVar4 = piVar4 + 6;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  if (*(uint *)(param_1 + 0x1c) <= uVar6) {
    uVar2 = FUN__text__0048b680();
    if ((uVar2 & 1) == 0) {
      return (int *)0x0;
    }
    if (*(uint *)(param_1 + 0x1c) <= uVar6) {
      return (int *)0x0;
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    piVar3 = *(int **)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar6 + 1;
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = piVar3 + (ulong)uVar6 * 6;
  piVar3[4] = 0;
  piVar3[5] = 0;
  *piVar3 = param_2;
  piVar4 = piVar3 + 2;
  piVar4[0] = 0;
  piVar4[1] = 0;
  iVar1 = FUN__text__004817e0(*(undefined4 *)(param_1 + 0x78),param_2,piVar4);
joined_r0x00489848:
  if (iVar1 == 1) {
    return piVar4;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x18);
  piVar4 = piVar3;
  if (uVar6 == 0) {
LAB__text__00489900:
    piVar3 = piVar3 + (ulong)uVar6 * 6;
    if (piVar4 != piVar3) {
      if (piVar4 < piVar3 + -6) {
        do {
          piVar7 = piVar4 + 6;
          *piVar4 = *piVar7;
          if (*(long *)(piVar4 + 2) != 0) {
            piVar4[4] = 0;
            FUN__text__00400fc0(0);
          }
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar4 + 8);
          piVar4[4] = piVar4[10];
          piVar4[5] = piVar4[0xb];
          piVar4[8] = 0;
          piVar4[9] = 0;
          piVar4[10] = 0;
          piVar4[0xb] = 0;
          piVar4 = piVar7;
        } while (piVar7 < piVar3 + -6);
        uVar6 = *(uint *)(param_1 + 0x18);
      }
      *(uint *)(param_1 + 0x18) = uVar6 - 1;
      return (int *)0x0;
    }
  }
  else {
    lVar5 = (ulong)uVar6 * 0x18;
    do {
      if (*piVar4 == param_2) goto LAB__text__00489900;
      piVar4 = piVar4 + 6;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return (int *)0x0;
}


