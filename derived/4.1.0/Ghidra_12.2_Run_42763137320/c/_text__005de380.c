/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005de380; name: FUN_.text__005de380
 */


void FUN__text__005de380(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = param_1[1] - *param_1 >> 3;
  uVar3 = lVar8 + 1;
  if (uVar3 >> 0x3d != 0) {
    FUN__text__005de554(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar2 = param_1[2] - *param_1;
  uVar4 = (long)uVar2 >> 2;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x7ffffffffffffff7 < uVar2) {
    uVar4 = 0x1fffffffffffffff;
  }
  if (uVar4 != 0) {
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 3,8);
    if (lVar1 != 0) goto LAB__text__005de40c;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar1 = 0;
LAB__text__005de40c:
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
LAB__text__005de548:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar5 = (long *)(lVar1 + lVar8 * 8);
  lVar1 = lVar1 + uVar4 * 8;
  *(long *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = param_1[3];
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar8 = *param_2;
  *param_2 = 0;
  plVar6 = plVar5 + 1;
  *plVar5 = lVar8;
  lVar8 = *(long *)(uVar3 + 0x98) + -1;
  *(long *)(uVar3 + 0x98) = lVar8;
  plVar9 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  if (plVar7 == plVar9) {
    lVar8 = param_1[2];
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar6;
    param_1[2] = lVar1;
  }
  else {
    do {
      if (lVar8 == 0x10) goto LAB__text__005de548;
      *(long *)(uVar3 + 0x18 + lVar8 * 8) = param_1[3];
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      plVar7 = plVar7 + -1;
      lVar8 = *plVar7;
      *plVar7 = 0;
      plVar5 = plVar5 + -1;
      *plVar5 = lVar8;
      lVar8 = *(long *)(uVar3 + 0x98) + -1;
      *(long *)(uVar3 + 0x98) = lVar8;
    } while (plVar7 != plVar9);
    plVar7 = (long *)*param_1;
    plVar9 = (long *)param_1[1];
    lVar8 = param_1[2];
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar6;
    param_1[2] = lVar1;
    if (plVar9 != plVar7) {
      do {
        plVar5 = plVar9 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar9[-1] = 0;
        }
        plVar9 = plVar5;
      } while (plVar5 != plVar7);
    }
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005de530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar8 - (long)plVar7,8);
  return;
}


