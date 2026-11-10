/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064d9c0; name: FUN_.text__0064d9c0
 */


void FUN__text__0064d9c0(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  plVar1 = (long *)param_3[6];
  if (plVar1 == (long *)0x0) {
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else if (plVar1 == param_3 + 2) {
    param_1[6] = param_1 + 2;
    (**(code **)(*(long *)param_3[6] + 0x18))();
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_1[6] = uVar2;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  if (param_2 == 0) {
    return;
  }
  if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar3 = (long *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 << 3,8);
  plVar1 = (long *)param_1[8];
  if (param_1[9] != 0) {
    uVar4 = tpidr_el0;
    lVar5 = param_1[9] << 3;
    uVar4 = uVar4 & 0xffffffffffffe000;
    lVar8 = *(long *)(uVar4 + 0x98);
    plVar6 = plVar1;
    plVar7 = plVar3;
    do {
      if (lVar8 == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      lVar5 = lVar5 + -8;
      *(undefined8 *)((uVar4 | 0x18) + lVar8 * 8) = *param_1;
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      lVar8 = *plVar6;
      *plVar6 = 0;
      *plVar7 = lVar8;
      lVar8 = *(long *)(uVar4 + 0x98) + -1;
      *(long *)(uVar4 + 0x98) = lVar8;
      plVar6 = plVar6 + 1;
      plVar7 = plVar7 + 1;
    } while (lVar5 != 0);
  }
  if (plVar1 != (long *)0x0) {
    for (lVar5 = param_1[9]; lVar5 != 0; lVar5 = lVar5 + -1) {
      if (*plVar1 != 0) {
        (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
        *plVar1 = 0;
      }
      plVar1 = plVar1 + 1;
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 3,8);
  }
  param_1[8] = plVar3;
  param_1[10] = param_2;
  return;
}


