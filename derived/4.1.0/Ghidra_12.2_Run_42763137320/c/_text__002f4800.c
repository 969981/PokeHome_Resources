/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f4800; name: FUN_.text__002f4800
 */


void FUN__text__002f4800(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 5)) {
    return;
  }
  if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN__text__002c9298(param_1);
  }
  lVar12 = param_1[1] - *param_1 >> 5;
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 5,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar8 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)(lVar12 * 0x20);
    if (puVar6 != puVar8) goto LAB__text__002f4870;
  }
  else {
    puVar8 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)(lVar4 + lVar12 * 0x20);
    if (puVar6 != puVar8) {
LAB__text__002f4870:
      uVar11 = tpidr_el0;
      uVar11 = uVar11 & 0xffffffffffffe000;
      lVar12 = *(long *)(uVar11 + 0x98);
      puVar9 = puVar7;
      do {
        if (lVar12 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)((uVar11 | 0x18) + lVar12 * 8) = param_1[3];
        *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
        puVar5 = puVar6 + -4;
        uVar2 = puVar6[-3];
        uVar1 = puVar6[-2];
        uVar3 = puVar6[-1];
        puVar10 = puVar9 + -4;
        *puVar10 = *puVar5;
        puVar9[-2] = uVar1;
        puVar9[-1] = uVar3;
        puVar9[-3] = uVar2;
        lVar12 = *(long *)(uVar11 + 0x98) + -1;
        *(long *)(uVar11 + 0x98) = lVar12;
        puVar6 = puVar5;
        puVar9 = puVar10;
      } while (puVar5 != puVar8);
      puVar6 = (undefined8 *)*param_1;
      *param_1 = (long)puVar10;
      param_1[1] = (long)puVar7;
      lVar12 = param_1[2];
      param_1[2] = lVar4 + param_2 * 0x20;
      goto joined_r0x002f4938;
    }
  }
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar7;
  lVar12 = param_1[2];
  param_1[2] = lVar4 + param_2 * 0x20;
joined_r0x002f4938:
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002f4900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar12 - (long)puVar6,8);
  return;
}


