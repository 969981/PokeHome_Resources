/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cf2f0; name: FUN_.text__004cf2f0
 */


long * FUN__text__004cf2f0(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  plVar9 = (long *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar10 = (ulong)uVar4;
  plVar6 = plVar9;
  if (uVar4 == 0) {
LAB__text__004cf34c:
    if (plVar6 != plVar9 + (ulong)uVar4 * 2) goto LAB__text__004cf47c;
  }
  else {
    lVar7 = uVar10 << 4;
    do {
      if (*plVar6 == param_2) goto LAB__text__004cf34c;
      plVar6 = plVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 < uVar5) {
    *(uint *)(param_1 + 1) = uVar4 + 1;
    if (plVar9 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar5 = iVar1 + uVar5;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)FUN__text__00400f80(0,(ulong)uVar5 << 4);
      if (plVar9 == (long *)0x0) {
        return (long *)0x0;
      }
      plVar6 = (long *)*param_1;
      if ((plVar6 != (long *)0x0) && (plVar6 != plVar9)) {
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            lVar7 = 0x10;
            plVar6 = plVar9 + 2;
            do {
              uVar8 = uVar8 + 2;
              lVar3 = *(long *)(*param_1 + lVar7 + -8);
              plVar6[-2] = *(long *)(*param_1 + lVar7 + -0x10);
              plVar6[-1] = lVar3;
              plVar2 = (long *)(*param_1 + lVar7);
              lVar7 = lVar7 + 0x20;
              lVar3 = plVar2[1];
              *plVar6 = *plVar2;
              plVar6[1] = lVar3;
              plVar6 = plVar6 + 4;
            } while ((uVar10 & 0xfffffffe) != uVar8);
          }
          if ((uVar4 & 1) != 0) {
            plVar6 = (long *)(*param_1 + uVar8 * 0x10);
            lVar7 = plVar6[1];
            plVar9[uVar8 * 2] = *plVar6;
            (plVar9 + uVar8 * 2)[1] = lVar7;
          }
          plVar6 = (long *)*param_1;
        }
        FUN__text__00400fc0(0,plVar6);
      }
    }
    else {
      plVar9 = (long *)FUN__text__00400fa0(0,plVar9);
      if (plVar9 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    *param_1 = (long)plVar9;
    *(uint *)((long)param_1 + 0xc) = uVar5;
    if (uVar5 <= uVar4) {
      return (long *)0x0;
    }
    uVar10 = (ulong)*(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  plVar6 = plVar9 + uVar10 * 2;
  *plVar6 = param_2;
LAB__text__004cf47c:
  plVar6[1] = *param_3;
  return plVar6 + 1;
}


