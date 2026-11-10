/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b4f10; name: FUN_.text__002b4f10
 */


void FUN__text__002b4f10(long *param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar4 = lVar9 + 1;
  if (uVar4 >> 0x3d != 0) {
    pvVar2 = (void *)FUN__text__002b4d9c(param_1);
    operator_delete(pvVar2);
    return;
  }
  uVar3 = param_1[2] - *param_1;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 != 0) {
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 3,8);
    if (lVar1 != 0) goto LAB__text__002b4f9c;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar1 = 0;
LAB__text__002b4f9c:
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
LAB__text__002b50d8:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar6 = (long *)(lVar1 + lVar9 * 8);
  lVar1 = lVar1 + uVar5 * 8;
  *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_1[3];
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar9 = *param_2;
  *param_2 = 0;
  plVar7 = plVar6 + 1;
  *plVar6 = lVar9;
  lVar9 = *(long *)(uVar4 + 0x98) + -1;
  *(long *)(uVar4 + 0x98) = lVar9;
  plVar10 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  if (plVar8 == plVar10) {
    lVar9 = param_1[2];
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar7;
    param_1[2] = lVar1;
  }
  else {
    do {
      if (lVar9 == 0x10) goto LAB__text__002b50d8;
      *(long *)(uVar4 + 0x18 + lVar9 * 8) = param_1[3];
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      plVar8 = plVar8 + -1;
      lVar9 = *plVar8;
      *plVar8 = 0;
      plVar6 = plVar6 + -1;
      *plVar6 = lVar9;
      lVar9 = *(long *)(uVar4 + 0x98) + -1;
      *(long *)(uVar4 + 0x98) = lVar9;
    } while (plVar8 != plVar10);
    plVar8 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
    lVar9 = param_1[2];
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar7;
    param_1[2] = lVar1;
    if (plVar10 != plVar8) {
      do {
        plVar6 = plVar10 + -1;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          plVar10[-1] = 0;
        }
        plVar10 = plVar6;
      } while (plVar6 != plVar8);
    }
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002b50c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar8,lVar9 - (long)plVar8,8);
  return;
}


