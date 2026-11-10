/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042ecf0; name: FUN_.text__0042ecf0
 */


int * FUN__text__0042ecf0(long *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  
  piVar9 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar10 = (ulong)uVar4;
  piVar6 = piVar9;
  if (uVar4 == 0) {
LAB__text__0042ed4c:
    if (piVar6 != piVar9 + (ulong)uVar4 * 4) goto LAB__text__0042ee80;
  }
  else {
    lVar8 = uVar10 << 4;
    do {
      if (*piVar6 == param_2) goto LAB__text__0042ed4c;
      piVar6 = piVar6 + 4;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 < uVar5) {
    *(uint *)(param_1 + 1) = uVar4 + 1;
    if (piVar9 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  else {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar5 = iVar1 + uVar5;
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)FUN__text__00400f80(0,(ulong)uVar5 << 4);
      if (piVar9 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar6 = (int *)*param_1;
      if ((piVar6 != (int *)0x0) && (piVar6 != piVar9)) {
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            lVar8 = 0x10;
            piVar6 = piVar9 + 4;
            do {
              uVar7 = uVar7 + 2;
              uVar3 = *(undefined8 *)(*param_1 + lVar8 + -8);
              *(undefined8 *)(piVar6 + -4) = *(undefined8 *)(*param_1 + lVar8 + -0x10);
              *(undefined8 *)(piVar6 + -2) = uVar3;
              puVar2 = (undefined8 *)(*param_1 + lVar8);
              lVar8 = lVar8 + 0x20;
              uVar3 = puVar2[1];
              *(undefined8 *)piVar6 = *puVar2;
              *(undefined8 *)(piVar6 + 2) = uVar3;
              piVar6 = piVar6 + 8;
            } while ((uVar10 & 0xfffffffe) != uVar7);
          }
          if ((uVar4 & 1) != 0) {
            puVar2 = (undefined8 *)(*param_1 + uVar7 * 0x10);
            uVar3 = puVar2[1];
            *(undefined8 *)(piVar9 + uVar7 * 4) = *puVar2;
            *(undefined8 *)(piVar9 + uVar7 * 4 + 2) = uVar3;
          }
          piVar6 = (int *)*param_1;
        }
        FUN__text__00400fc0(0,piVar6);
      }
    }
    else {
      piVar9 = (int *)FUN__text__00400fa0(0,piVar9);
      if (piVar9 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    *param_1 = (long)piVar9;
    *(uint *)((long)param_1 + 0xc) = uVar5;
    if (uVar5 <= uVar4) {
      return (int *)0x0;
    }
    uVar10 = (ulong)*(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  piVar6 = piVar9 + uVar10 * 4;
  *piVar6 = param_2;
LAB__text__0042ee80:
  *(undefined8 *)(piVar6 + 2) = *param_3;
  return piVar6 + 2;
}


