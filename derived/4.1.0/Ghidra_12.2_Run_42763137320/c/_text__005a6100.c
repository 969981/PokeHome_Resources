/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a6100; name: FUN_.text__005a6100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a6100(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = param_1[1] - *param_1 >> 3;
  uVar4 = lVar8 + 1;
  if (uVar4 >> 0x3d != 0) {
    plVar2 = (long *)FUN__text__005a41b4(param_1);
    lVar8 = _DAT_0089fdb0 + 0x68;
    lVar1 = _DAT_0089fdb0 + 0xa8;
    *plVar2 = _DAT_0089fdb0 + 0x10;
    plVar2[9] = lVar8;
    plVar2[10] = lVar1;
    if (plVar2[0x4c] != 0) {
      (**(code **)(*(long *)(plVar2[0x4c] + 0x48) + 0x18))();
      plVar2[0x4c] = 0;
    }
    FUN__text__005e66f0(plVar2);
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
    if (lVar1 != 0) goto LAB__text__005a618c;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar1 = 0;
LAB__text__005a618c:
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
LAB__text__005a62c8:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = (long *)(lVar1 + lVar8 * 8);
  lVar1 = lVar1 + uVar5 * 8;
  *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_1[3];
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar8 = *param_2;
  *param_2 = 0;
  plVar6 = plVar2 + 1;
  *plVar2 = lVar8;
  lVar8 = *(long *)(uVar4 + 0x98) + -1;
  *(long *)(uVar4 + 0x98) = lVar8;
  plVar9 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  if (plVar7 == plVar9) {
    lVar8 = param_1[2];
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar6;
    param_1[2] = lVar1;
  }
  else {
    do {
      if (lVar8 == 0x10) goto LAB__text__005a62c8;
      *(long *)(uVar4 + 0x18 + lVar8 * 8) = param_1[3];
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      plVar7 = plVar7 + -1;
      lVar8 = *plVar7;
      *plVar7 = 0;
      plVar2 = plVar2 + -1;
      *plVar2 = lVar8;
      lVar8 = *(long *)(uVar4 + 0x98) + -1;
      *(long *)(uVar4 + 0x98) = lVar8;
    } while (plVar7 != plVar9);
    plVar7 = (long *)*param_1;
    plVar9 = (long *)param_1[1];
    lVar8 = param_1[2];
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar6;
    param_1[2] = lVar1;
    if (plVar9 != plVar7) {
      do {
        plVar2 = plVar9 + -1;
        if (*plVar2 != 0) {
          (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
          plVar9[-1] = 0;
        }
        plVar9 = plVar2;
      } while (plVar2 != plVar7);
    }
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a62b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar8 - (long)plVar7,8);
  return;
}


