/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004899a0; name: FUN_.text__004899a0
 */


int * FUN__text__004899a0(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  
  piVar10 = (int *)*param_1;
  uVar5 = *(uint *)(param_1 + 1);
  uVar11 = (ulong)uVar5;
  piVar7 = piVar10;
  if (uVar5 == 0) {
LAB__text__004899f0:
    if (piVar7 != piVar10 + uVar11 * 4) {
      return piVar7 + 2;
    }
  }
  else {
    lVar9 = uVar11 << 4;
    do {
      if (*piVar7 == param_2) goto LAB__text__004899f0;
      piVar7 = piVar7 + 4;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  uVar6 = *(uint *)((long)param_1 + 0xc);
  if (uVar5 < uVar6) {
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (piVar10 != (int *)0x0) {
LAB__text__00489b24:
      piVar10[uVar11 * 4] = param_2;
      return piVar10 + uVar11 * 4 + 2;
    }
  }
  else {
    iVar1 = uVar6 + (uVar6 >> 1);
    if (uVar6 == 0) {
      iVar1 = 1;
    }
    uVar6 = iVar1 + uVar6;
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)FUN__text__00400f80(0,(ulong)uVar6 << 4);
      if (piVar10 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar7 = (int *)*param_1;
      if ((piVar7 != (int *)0x0) && (piVar7 != piVar10)) {
        if (uVar5 != 0) {
          if (uVar5 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            lVar9 = 0x10;
            piVar7 = piVar10 + 4;
            do {
              piVar7[-4] = 0;
              uVar8 = uVar8 + 2;
              uVar4 = *(undefined8 *)(*param_1 + lVar9 + -0x10);
              uVar3 = *(undefined8 *)(*param_1 + lVar9 + -8);
              *piVar7 = 0;
              *(undefined8 *)(piVar7 + -4) = uVar4;
              *(undefined8 *)(piVar7 + -2) = uVar3;
              puVar2 = (undefined8 *)(*param_1 + lVar9);
              lVar9 = lVar9 + 0x20;
              uVar4 = puVar2[1];
              *(undefined8 *)piVar7 = *puVar2;
              *(undefined8 *)(piVar7 + 2) = uVar4;
              piVar7 = piVar7 + 8;
            } while ((uVar11 & 0xfffffffe) != uVar8);
          }
          if ((uVar5 & 1) != 0) {
            piVar7 = piVar10 + uVar8 * 4;
            *piVar7 = 0;
            puVar2 = (undefined8 *)(*param_1 + uVar8 * 0x10);
            uVar4 = puVar2[1];
            *(undefined8 *)piVar7 = *puVar2;
            *(undefined8 *)(piVar7 + 2) = uVar4;
          }
          piVar7 = (int *)*param_1;
        }
        FUN__text__00400fc0(0,piVar7);
      }
    }
    else {
      piVar10 = (int *)FUN__text__00400fa0(0,piVar10);
      if (piVar10 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    *param_1 = (long)piVar10;
    *(uint *)((long)param_1 + 0xc) = uVar6;
    if (uVar5 < uVar6) {
      uVar11 = (ulong)*(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      goto LAB__text__00489b24;
    }
  }
  return (int *)0x0;
}


