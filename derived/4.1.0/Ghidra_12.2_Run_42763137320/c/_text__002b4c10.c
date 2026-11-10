/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b4c10; name: FUN_.text__002b4c10
 */


void FUN__text__002b4c10(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  if (param_2 <= (ulong)((param_1[2] - *param_1 >> 4) * -0x5555555555555555)) {
    return;
  }
  if (0x555555555555555 < param_2) {
    FUN__text__002aabd8(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  lVar7 = param_1[1] - *param_1 >> 4;
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x30,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar9 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)(lVar7 * 0x10);
    if (puVar6 != puVar9) goto LAB__text__002b4ca8;
  }
  else {
    puVar9 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)(lVar4 + lVar7 * 0x10);
    if (puVar6 != puVar9) {
LAB__text__002b4ca8:
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      lVar7 = *(long *)(uVar12 + 0x98);
      puVar10 = puVar8;
      do {
        if (lVar7 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)((uVar12 | 0x18) + lVar7 * 8) = param_1[3];
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        puVar5 = puVar6 + -6;
        uVar1 = puVar6[-5];
        puVar11 = puVar10 + -6;
        *puVar11 = *puVar5;
        puVar10[-5] = uVar1;
        uVar1 = puVar6[-4];
        uVar2 = puVar6[-3];
        uVar3 = puVar6[-1];
        puVar10[-2] = puVar6[-2];
        puVar10[-1] = uVar3;
        puVar10[-4] = uVar1;
        puVar10[-3] = uVar2;
        lVar7 = *(long *)(uVar12 + 0x98) + -1;
        *(long *)(uVar12 + 0x98) = lVar7;
        puVar6 = puVar5;
        puVar10 = puVar11;
      } while (puVar5 != puVar9);
      puVar6 = (undefined8 *)*param_1;
      lVar7 = param_1[2];
      param_1[2] = lVar4 + param_2 * 0x30;
      *param_1 = (long)puVar11;
      param_1[1] = (long)puVar8;
      goto joined_r0x002b4d7c;
    }
  }
  lVar7 = param_1[2];
  param_1[2] = lVar4 + param_2 * 0x30;
  *param_1 = (long)puVar8;
  param_1[1] = (long)puVar8;
joined_r0x002b4d7c:
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002b4d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar7 - (long)puVar6,8);
  return;
}


