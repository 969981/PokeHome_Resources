/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004259d0; name: FUN_.text__004259d0
 */


int * FUN__text__004259d0(long *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  
  piVar12 = (int *)*param_1;
  uVar6 = *(uint *)(param_1 + 1);
  uVar13 = (ulong)uVar6;
  piVar8 = piVar12;
  if (uVar6 == 0) {
LAB__text__00425a2c:
    if (piVar8 != piVar12 + uVar13 * 8) goto LAB__text__00425b7c;
  }
  else {
    lVar10 = uVar13 << 5;
    do {
      if (*piVar8 == param_2) goto LAB__text__00425a2c;
      piVar8 = piVar8 + 8;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  uVar7 = *(uint *)((long)param_1 + 0xc);
  if (uVar6 < uVar7) {
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (piVar12 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  else {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    if (piVar12 == (int *)0x0) {
      piVar12 = (int *)FUN__text__00400f80(0,(ulong)uVar7 << 5);
      if (piVar12 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar8 = (int *)*param_1;
      if ((piVar8 != (int *)0x0) && (piVar8 != piVar12)) {
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            lVar10 = 0x20;
            piVar8 = piVar12 + 8;
            do {
              uVar9 = uVar9 + 2;
              lVar2 = *param_1 + lVar10;
              uVar4 = *(undefined8 *)(lVar2 + -0x20);
              uVar11 = *(undefined8 *)(lVar2 + -0x18);
              uVar5 = *(undefined8 *)(lVar2 + -8);
              *(undefined8 *)(piVar8 + -4) = *(undefined8 *)(lVar2 + -0x10);
              *(undefined8 *)(piVar8 + -2) = uVar5;
              *(undefined8 *)(piVar8 + -8) = uVar4;
              *(undefined8 *)(piVar8 + -6) = uVar11;
              puVar3 = (undefined8 *)(*param_1 + lVar10);
              lVar10 = lVar10 + 0x40;
              uVar4 = *puVar3;
              uVar11 = puVar3[1];
              uVar5 = puVar3[3];
              *(undefined8 *)(piVar8 + 4) = puVar3[2];
              *(undefined8 *)(piVar8 + 6) = uVar5;
              *(undefined8 *)piVar8 = uVar4;
              *(undefined8 *)(piVar8 + 2) = uVar11;
              piVar8 = piVar8 + 0x10;
            } while ((uVar13 & 0xfffffffe) != uVar9);
          }
          if ((uVar6 & 1) != 0) {
            puVar3 = (undefined8 *)(*param_1 + uVar9 * 0x20);
            piVar8 = piVar12 + uVar9 * 8;
            uVar4 = *puVar3;
            uVar11 = puVar3[1];
            uVar5 = puVar3[3];
            *(undefined8 *)(piVar8 + 4) = puVar3[2];
            *(undefined8 *)(piVar8 + 6) = uVar5;
            *(undefined8 *)piVar8 = uVar4;
            *(undefined8 *)(piVar8 + 2) = uVar11;
          }
          piVar8 = (int *)*param_1;
        }
        FUN__text__00400fc0(0,piVar8);
      }
    }
    else {
      piVar12 = (int *)FUN__text__00400fa0(0,piVar12);
      if (piVar12 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    *param_1 = (long)piVar12;
    *(uint *)((long)param_1 + 0xc) = uVar7;
    if (uVar7 <= uVar6) {
      return (int *)0x0;
    }
    uVar13 = (ulong)*(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  piVar8 = piVar12 + uVar13 * 8;
  *piVar8 = param_2;
LAB__text__00425b7c:
  uVar4 = *param_3;
  uVar11 = param_3[2];
  *(undefined8 *)(piVar8 + 4) = param_3[1];
  *(undefined8 *)(piVar8 + 6) = uVar11;
  *(undefined8 *)(piVar8 + 2) = uVar4;
  return piVar8 + 2;
}


