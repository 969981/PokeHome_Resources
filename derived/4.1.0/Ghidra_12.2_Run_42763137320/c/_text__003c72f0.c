/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c72f0; name: FUN_.text__003c72f0
 */


void FUN__text__003c72f0(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  plVar3 = (long *)param_3[6];
  if (plVar3 == (long *)0x0) {
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else if (plVar3 == param_3 + 2) {
    param_1[6] = param_1 + 2;
    (**(code **)(*(long *)param_3[6] + 0x18))();
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    param_1[6] = uVar4;
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
  puVar5 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 * 0x18,8);
  puVar2 = (undefined8 *)param_1[8];
  lVar10 = param_1[9];
  if (lVar10 != 0) {
    uVar6 = tpidr_el0;
    uVar6 = uVar6 & 0xffffffffffffe000;
    lVar9 = *(long *)(uVar6 + 0x98);
    puVar7 = puVar2;
    puVar8 = puVar5;
    do {
      if (lVar9 == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)((uVar6 | 0x18) + lVar9 * 8) = *param_1;
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
      *puVar8 = *puVar7;
      uVar4 = puVar7[1];
      puVar7[1] = 0;
      puVar8[1] = uVar4;
      puVar1 = puVar7 + 2;
      puVar7 = puVar7 + 3;
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)puVar1;
      puVar8 = puVar8 + 3;
      lVar9 = *(long *)(uVar6 + 0x98) + -1;
      *(long *)(uVar6 + 0x98) = lVar9;
    } while (puVar7 != puVar2 + lVar10 * 3);
  }
  if (puVar2 != (undefined8 *)0x0) {
    lVar10 = param_1[9];
    if (lVar10 != 0) {
      plVar3 = puVar2 + 1;
      do {
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          *plVar3 = 0;
        }
        lVar10 = lVar10 + -1;
        plVar3 = plVar3 + 3;
      } while (lVar10 != 0);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x18,8);
  }
  param_1[8] = puVar5;
  param_1[10] = param_2;
  return;
}


