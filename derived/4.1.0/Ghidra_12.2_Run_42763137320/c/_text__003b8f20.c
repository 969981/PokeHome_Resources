/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8f20; name: FUN_.text__003b8f20
 */


void FUN__text__003b8f20(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  lVar8 = param_1[1] - *param_1 >> 3;
  uVar7 = lVar8 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar7) {
    FUN__text__003b90d0(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar9 = lVar6 * 0x5555555555555556;
  if (uVar9 <= uVar7) {
    uVar9 = uVar7;
  }
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar9 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar9 != 0) {
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 * 0x18,8);
    if (lVar6 != 0) goto LAB__text__003b8fc8;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar6 = 0;
LAB__text__003b8fc8:
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
LAB__text__003b90c4:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar5 = (undefined8 *)(lVar6 + lVar8 * 8);
  *(long *)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = param_1[3];
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  uVar1 = *param_2;
  uVar12 = param_2[2];
  puVar5[1] = param_2[1];
  puVar5[2] = uVar12;
  *puVar5 = uVar1;
  lVar8 = *(long *)(uVar7 + 0x98) + -1;
  *(long *)(uVar7 + 0x98) = lVar8;
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar10 = puVar5;
  puVar11 = puVar5;
  if (puVar4 != puVar2) {
    do {
      if (lVar8 == 0x10) goto LAB__text__003b90c4;
      *(long *)(uVar7 + 0x18 + lVar8 * 8) = param_1[3];
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      puVar3 = puVar4 + -3;
      uVar1 = puVar4[-2];
      uVar12 = puVar4[-1];
      puVar11 = puVar10 + -3;
      *puVar11 = *puVar3;
      puVar10[-2] = uVar1;
      puVar10[-1] = uVar12;
      lVar8 = *(long *)(uVar7 + 0x98) + -1;
      *(long *)(uVar7 + 0x98) = lVar8;
      puVar4 = puVar3;
      puVar10 = puVar11;
    } while (puVar3 != puVar2);
    puVar4 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar11;
  param_1[1] = (long)(puVar5 + 3);
  lVar8 = param_1[2];
  param_1[2] = lVar6 + uVar9 * 0x18;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003b90b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar4,lVar8 - (long)puVar4,8);
  return;
}


