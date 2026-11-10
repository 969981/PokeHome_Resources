/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c7130; name: FUN_.text__003c7130
 */


void FUN__text__003c7130(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  plVar2 = (long *)param_3[6];
  if (plVar2 == (long *)0x0) {
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else if (plVar2 == param_3 + 2) {
    param_1[6] = param_1 + 2;
    (**(code **)(*(long *)param_3[6] + 0x18))();
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    param_1[6] = uVar3;
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
  puVar4 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 << 4,8);
  puVar1 = (undefined8 *)param_1[8];
  lVar9 = param_1[9];
  if (lVar9 != 0) {
    uVar5 = tpidr_el0;
    uVar5 = uVar5 & 0xffffffffffffe000;
    lVar8 = *(long *)(uVar5 + 0x98);
    puVar6 = puVar1;
    puVar7 = puVar4;
    do {
      if (lVar8 == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)((uVar5 | 0x18) + lVar8 * 8) = *param_1;
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
      *puVar7 = *puVar6;
      uVar3 = puVar6[1];
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      puVar7[1] = uVar3;
      puVar7 = puVar7 + 2;
      lVar8 = *(long *)(uVar5 + 0x98) + -1;
      *(long *)(uVar5 + 0x98) = lVar8;
    } while (puVar6 != puVar1 + lVar9 * 2);
  }
  if (puVar1 != (undefined8 *)0x0) {
    lVar9 = param_1[9];
    if (lVar9 != 0) {
      plVar2 = puVar1 + 1;
      do {
        if (*plVar2 != 0) {
          (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
          *plVar2 = 0;
        }
        lVar9 = lVar9 + -1;
        plVar2 = plVar2 + 2;
      } while (lVar9 != 0);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 4,8);
  }
  param_1[8] = puVar4;
  param_1[10] = param_2;
  return;
}


