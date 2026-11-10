/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bb620; name: FUN_.text__003bb620
 */


void FUN__text__003bb620(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  uVar4 = param_1[5];
  lVar9 = param_1[1] - *param_1 >> 3;
  if (0x7ffffffffffffffe < uVar4) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar1 = lVar9 + 1;
  if (uVar4 < uVar1) {
    FUN__text__003bb804(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  lVar2 = param_1[2] - *param_1;
  uVar3 = lVar2 >> 2;
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  if (uVar4 >> 1 <= (ulong)(lVar2 >> 3)) {
    uVar3 = uVar4;
  }
  if (uVar3 == 0) {
    lVar2 = 0;
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    lVar6 = *(long *)(uVar4 + 0x98);
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar3 << 3,8);
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    lVar6 = *(long *)(uVar4 + 0x98);
  }
  if (lVar6 == 0x10) {
LAB__text__003bb7f8:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar5 = (long *)(lVar2 + lVar9 * 8);
  lVar2 = lVar2 + uVar3 * 8;
  *(long *)(uVar4 + 0x18 + lVar6 * 8) = param_1[4];
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar9 = *param_2;
  *param_2 = 0;
  plVar7 = plVar5 + 1;
  *plVar5 = lVar9;
  lVar9 = *(long *)(uVar4 + 0x98) + -1;
  *(long *)(uVar4 + 0x98) = lVar9;
  plVar10 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  if (plVar8 == plVar10) {
    lVar9 = param_1[2];
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar7;
    param_1[2] = lVar2;
  }
  else {
    do {
      if (lVar9 == 0x10) goto LAB__text__003bb7f8;
      *(long *)(uVar4 + 0x18 + lVar9 * 8) = param_1[4];
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      plVar8 = plVar8 + -1;
      lVar9 = *plVar8;
      *plVar8 = 0;
      plVar5 = plVar5 + -1;
      *plVar5 = lVar9;
      lVar9 = *(long *)(uVar4 + 0x98) + -1;
      *(long *)(uVar4 + 0x98) = lVar9;
    } while (plVar8 != plVar10);
    plVar8 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
    lVar9 = param_1[2];
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar7;
    param_1[2] = lVar2;
    if (plVar10 != plVar8) {
      do {
        plVar5 = plVar10 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar10[-1] = 0;
        }
        plVar10 = plVar5;
      } while (plVar5 != plVar8);
    }
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003bb7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],plVar8,lVar9 - (long)plVar8,8);
  return;
}


