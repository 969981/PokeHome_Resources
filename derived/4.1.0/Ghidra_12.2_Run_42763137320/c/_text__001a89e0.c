/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a89e0; name: FUN_.text__001a89e0
 */


void FUN__text__001a89e0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar10 = param_1[1] - *param_1 >> 3;
  uVar9 = lVar10 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN__text__001a8bd8(param_1);
  }
  lVar8 = param_1[2] - *param_1 >> 3;
  uVar11 = lVar8 * 0x1c71c71c71c71c72;
  if (uVar11 <= uVar9) {
    uVar11 = uVar9;
  }
  if (0x1c71c71c71c71c6 < (ulong)(lVar8 * -0x71c71c71c71c71c7)) {
    uVar11 = 0x38e38e38e38e38e;
  }
  if (uVar11 != 0) {
    lVar8 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x48,4);
    if (lVar8 != 0) goto LAB__text__001a8aa0;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar8 = 0;
LAB__text__001a8aa0:
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
LAB__text__001a8bcc:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar7 = (undefined8 *)(lVar8 + lVar10 * 8);
  *(long *)(uVar9 + 0x18 + *(long *)(uVar9 + 0x98) * 8) = param_1[3];
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  *puVar7 = *param_2;
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[4];
  puVar7[3] = param_2[3];
  puVar7[4] = uVar4;
  puVar7[1] = uVar1;
  puVar7[2] = uVar3;
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[8];
  puVar7[7] = param_2[7];
  puVar7[8] = uVar4;
  puVar7[5] = uVar1;
  puVar7[6] = uVar3;
  lVar10 = *(long *)(uVar9 + 0x98) + -1;
  *(long *)(uVar9 + 0x98) = lVar10;
  puVar2 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  puVar12 = puVar7;
  puVar13 = puVar7;
  if (puVar6 != puVar2) {
    do {
      if (lVar10 == 0x10) goto LAB__text__001a8bcc;
      *(long *)(uVar9 + 0x18 + lVar10 * 8) = param_1[3];
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      puVar5 = puVar6 + -9;
      puVar13 = puVar12 + -9;
      *puVar13 = *puVar5;
      uVar1 = puVar6[-8];
      uVar3 = puVar6[-7];
      uVar4 = puVar6[-5];
      puVar12[-6] = puVar6[-6];
      puVar12[-5] = uVar4;
      puVar12[-8] = uVar1;
      puVar12[-7] = uVar3;
      uVar1 = puVar6[-4];
      uVar3 = puVar6[-3];
      uVar4 = puVar6[-1];
      puVar12[-2] = puVar6[-2];
      puVar12[-1] = uVar4;
      puVar12[-4] = uVar1;
      puVar12[-3] = uVar3;
      lVar10 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar10;
      puVar6 = puVar5;
      puVar12 = puVar13;
    } while (puVar5 != puVar2);
    puVar6 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)(puVar7 + 9);
  lVar10 = param_1[2];
  param_1[2] = lVar8 + uVar11 * 0x48;
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001a8bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar10 - (long)puVar6,4);
  return;
}


