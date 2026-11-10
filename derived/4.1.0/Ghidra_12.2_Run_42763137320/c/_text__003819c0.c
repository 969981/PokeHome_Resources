/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003819c0; name: FUN_.text__003819c0
 */


void FUN__text__003819c0(long *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar14 = param_1[1] - *param_1 >> 5;
  uVar8 = lVar14 + 1;
  if (uVar8 >> 0x3b != 0) {
    FUN__text__00381b68(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar7 = param_1[2] - *param_1;
  uVar9 = (long)uVar7 >> 4;
  if (uVar9 <= uVar8) {
    uVar9 = uVar8;
  }
  if (0x7fffffffffffffdf < uVar7) {
    uVar9 = 0x7ffffffffffffff;
  }
  if (uVar9 != 0) {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 5,8);
    if (lVar4 != 0) goto LAB__text__00381a54;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar4 = 0;
LAB__text__00381a54:
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
LAB__text__00381b5c:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar1 = (undefined8 *)(lVar4 + lVar14 * 0x20);
  *(long *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_1[3];
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  uVar10 = *param_3;
  uVar13 = *param_4;
  *(undefined4 *)puVar1 = *param_2;
  puVar1[1] = uVar10;
  puVar1[2] = uVar13;
  puVar1[3] = uVar13;
  lVar14 = *(long *)(uVar8 + 0x98) + -1;
  *(long *)(uVar8 + 0x98) = lVar14;
  puVar2 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  puVar11 = puVar1;
  puVar12 = puVar1;
  if (puVar6 != puVar2) {
    do {
      if (lVar14 == 0x10) goto LAB__text__00381b5c;
      *(long *)(uVar8 + 0x18 + lVar14 * 8) = param_1[3];
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      puVar5 = puVar6 + -4;
      uVar13 = puVar6[-3];
      uVar10 = puVar6[-2];
      uVar3 = puVar6[-1];
      puVar12 = puVar11 + -4;
      *puVar12 = *puVar5;
      puVar11[-2] = uVar10;
      puVar11[-1] = uVar3;
      puVar11[-3] = uVar13;
      lVar14 = *(long *)(uVar8 + 0x98) + -1;
      *(long *)(uVar8 + 0x98) = lVar14;
      puVar6 = puVar5;
      puVar11 = puVar12;
    } while (puVar5 != puVar2);
    puVar6 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)(puVar1 + 4);
  lVar14 = param_1[2];
  param_1[2] = lVar4 + uVar9 * 0x20;
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00381b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar14 - (long)puVar6,8);
  return;
}


