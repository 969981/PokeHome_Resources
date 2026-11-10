/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002db020; name: FUN_.text__002db020
 */


void FUN__text__002db020(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar6 = lVar7 + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN__text__002d994c(param_1);
  }
  uVar3 = param_1[2] - *param_1;
  uVar4 = (long)uVar3 >> 2;
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar4 = 0x1fffffffffffffff;
  }
  if (uVar4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
  }
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
LAB__text__002db200:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar8 = (long *)(lVar2 + lVar7 * 8);
  *(long *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_1[3];
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  lVar7 = *param_2;
  *plVar8 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar2 = lVar2 + uVar4 * 8;
  lVar7 = *(long *)(uVar6 + 0x98) + -1;
  plVar1 = plVar8 + 1;
  *(long *)(uVar6 + 0x98) = lVar7;
  plVar9 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  if (plVar5 == plVar9) {
    lVar7 = param_1[2];
    *param_1 = (long)plVar8;
    param_1[1] = (long)plVar1;
    param_1[2] = lVar2;
  }
  else {
    do {
      if (lVar7 == 0x10) goto LAB__text__002db200;
      *(long *)(uVar6 + 0x18 + lVar7 * 8) = param_1[3];
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
      plVar5 = plVar5 + -1;
      lVar7 = *plVar5;
      *plVar5 = 0;
      plVar8 = plVar8 + -1;
      *plVar8 = lVar7;
      lVar7 = *(long *)(uVar6 + 0x98) + -1;
      *(long *)(uVar6 + 0x98) = lVar7;
    } while (plVar5 != plVar9);
    plVar5 = (long *)*param_1;
    plVar9 = (long *)param_1[1];
    lVar7 = param_1[2];
    *param_1 = (long)plVar8;
    param_1[1] = (long)plVar1;
    param_1[2] = lVar2;
    if (plVar9 != plVar5) {
      do {
        plVar8 = plVar9 + -1;
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          plVar9[-1] = 0;
        }
        plVar9 = plVar8;
      } while (plVar8 != plVar5);
    }
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002db1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar5,lVar7 - (long)plVar5,8);
  return;
}


