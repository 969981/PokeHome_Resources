/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003986e0; name: FUN_.text__003986e0
 */


void FUN__text__003986e0(long *param_1)

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
  
  lVar7 = *param_1;
  lVar4 = param_1[1] - lVar7;
  uVar12 = lVar4 >> 5;
  if ((ulong)(param_1[2] - lVar7 >> 5) <= uVar12) {
    return;
  }
  if (param_1[1] == lVar7) {
LAB__text__003987d8:
    lVar4 = 0;
    puVar9 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)(uVar12 << 5);
    if (puVar6 == puVar9) {
LAB__text__003987ec:
      lVar4 = param_1[2];
      *param_1 = (long)puVar8;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar8;
      goto joined_r0x003987fc;
    }
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar4,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
      goto LAB__text__003987d8;
    }
    puVar9 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)(lVar4 + uVar12 * 0x20);
    if (puVar6 == puVar9) goto LAB__text__003987ec;
  }
  uVar12 = tpidr_el0;
  uVar12 = uVar12 & 0xffffffffffffe000;
  lVar7 = *(long *)(uVar12 + 0x98);
  puVar10 = puVar8;
  do {
    if (lVar7 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(lVar4);
    }
    *(long *)((uVar12 | 0x18) + lVar7 * 8) = param_1[3];
    *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
    puVar5 = puVar6 + -4;
    uVar2 = puVar6[-3];
    uVar1 = puVar6[-2];
    uVar3 = puVar6[-1];
    puVar11 = puVar10 + -4;
    *puVar11 = *puVar5;
    puVar10[-2] = uVar1;
    puVar10[-1] = uVar3;
    puVar10[-3] = uVar2;
    lVar7 = *(long *)(uVar12 + 0x98) + -1;
    *(long *)(uVar12 + 0x98) = lVar7;
    puVar6 = puVar5;
    puVar10 = puVar11;
  } while (puVar5 != puVar9);
  puVar6 = (undefined8 *)*param_1;
  lVar4 = param_1[2];
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar8;
  param_1[2] = (long)puVar8;
joined_r0x003987fc:
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003987c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar4 - (long)puVar6,8);
  return;
}


