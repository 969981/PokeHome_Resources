/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0c10; name: FUN_.text__005a0c10
 */


void FUN__text__005a0c10(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar12;
  long *plVar11;
  
  lVar10 = param_1[1] - *param_1 >> 5;
  uVar3 = lVar10 + 1;
  if (uVar3 >> 0x3b != 0) {
    FUN__text__005a0df4(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar2 = param_1[2] - *param_1;
  uVar4 = (long)uVar2 >> 4;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x7fffffffffffffdf < uVar2) {
    uVar4 = 0x7ffffffffffffff;
  }
  if (uVar4 != 0) {
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 5,8);
    if (lVar1 != 0) goto LAB__text__005a0c98;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar1 = 0;
LAB__text__005a0c98:
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
LAB__text__005a0de8:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar12 = (long *)(lVar1 + lVar10 * 0x20);
  lVar1 = lVar1 + uVar4 * 0x20;
  *(long *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = param_1[3];
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar10 = *param_2;
  *param_2 = 0;
  *plVar12 = lVar10;
  lVar10 = param_2[1];
  lVar7 = param_2[3];
  plVar12[2] = param_2[2];
  plVar12[3] = lVar7;
  plVar12[1] = lVar10;
  lVar10 = *(long *)(uVar3 + 0x98) + -1;
  *(long *)(uVar3 + 0x98) = lVar10;
  plVar11 = (long *)*param_1;
  plVar9 = (long *)param_1[1];
  plVar5 = plVar12;
  if (plVar9 == plVar11) {
    lVar10 = param_1[2];
    *param_1 = (long)plVar12;
    param_1[1] = (long)(plVar12 + 4);
    param_1[2] = lVar1;
  }
  else {
    do {
      if (lVar10 == 0x10) goto LAB__text__005a0de8;
      *(long *)(uVar3 + 0x18 + lVar10 * 8) = param_1[3];
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      plVar8 = plVar9 + -4;
      lVar10 = *plVar8;
      *plVar8 = 0;
      plVar6 = plVar5 + -4;
      *plVar6 = lVar10;
      lVar10 = plVar9[-3];
      lVar7 = plVar9[-1];
      plVar5[-2] = plVar9[-2];
      plVar5[-1] = lVar7;
      plVar5[-3] = lVar10;
      lVar10 = *(long *)(uVar3 + 0x98) + -1;
      *(long *)(uVar3 + 0x98) = lVar10;
      plVar5 = plVar6;
      plVar9 = plVar8;
    } while (plVar8 != plVar11);
    plVar9 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
    lVar10 = param_1[2];
    *param_1 = (long)plVar6;
    param_1[1] = (long)(plVar12 + 4);
    param_1[2] = lVar1;
    if (plVar11 != plVar9) {
      do {
        plVar12 = plVar11 + -4;
        lVar1 = *plVar12;
        *plVar12 = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)plVar11[-3] + 0x18))
                    ((long *)plVar11[-3],lVar1,plVar11[-2],plVar11[-1]);
        }
        plVar11 = plVar12;
      } while (plVar12 != plVar9);
    }
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a0dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar9,lVar10 - (long)plVar9,8);
  return;
}


