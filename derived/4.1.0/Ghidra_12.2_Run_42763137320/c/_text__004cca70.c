/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cca70; name: FUN_.text__004cca70
 */


int * FUN__text__004cca70(long *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  
  piVar8 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar9 = (ulong)uVar2;
  piVar4 = piVar8;
  if (uVar2 == 0) {
LAB__text__004ccacc:
    if (piVar4 != piVar8 + (ulong)uVar2 * 2) goto LAB__text__004ccbe8;
  }
  else {
    lVar5 = uVar9 << 3;
    do {
      if (*piVar4 == param_2) goto LAB__text__004ccacc;
      piVar4 = piVar4 + 2;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 < uVar3) {
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (piVar8 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  else {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)FUN__text__00400f80(0,(ulong)uVar3 << 3);
      if (piVar8 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar4 = (int *)*param_1;
      if ((piVar4 != (int *)0x0) && (piVar4 != piVar8)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar6 = 0;
          }
          else {
            uVar7 = 0;
            do {
              uVar6 = uVar7 + 2;
              *(undefined8 *)(piVar8 + uVar7 * 2) = *(undefined8 *)(*param_1 + uVar7 * 8);
              *(undefined8 *)(piVar8 + uVar7 * 2 + 2) = *(undefined8 *)(*param_1 + uVar7 * 8 + 8);
              uVar7 = uVar6;
            } while ((uVar9 & 0xfffffffe) != uVar6);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)(piVar8 + uVar6 * 2) = *(undefined8 *)(*param_1 + uVar6 * 8);
          }
          piVar4 = (int *)*param_1;
        }
        FUN__text__00400fc0(0,piVar4);
      }
    }
    else {
      piVar8 = (int *)FUN__text__00400fa0(0,piVar8);
      if (piVar8 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    *param_1 = (long)piVar8;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (uVar3 <= uVar2) {
      return (int *)0x0;
    }
    uVar9 = (ulong)*(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  piVar4 = piVar8 + uVar9 * 2;
  *piVar4 = param_2;
LAB__text__004ccbe8:
  piVar4[1] = *param_3;
  return piVar4 + 1;
}


