/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a09c0; name: FUN_.text__005a09c0
 */


void FUN__text__005a09c0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  lVar7 = param_1[1] - *param_1 >> 5;
  uVar9 = lVar7 + 1;
  if (uVar9 >> 0x3b != 0) {
    FUN__text__005a0bf0(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar3 = param_1[2] - *param_1;
  uVar6 = (long)uVar3 >> 4;
  if (uVar6 <= uVar9) {
    uVar6 = uVar9;
  }
  if (0x7fffffffffffffdf < uVar3) {
    uVar6 = 0x7ffffffffffffff;
  }
  if (uVar6 != 0) {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 5,8);
    if (lVar2 != 0) goto LAB__text__005a0a50;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar2 = 0;
LAB__text__005a0a50:
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
LAB__text__005a0be4:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar10 = (undefined8 *)(lVar2 + lVar7 * 0x20);
  lVar2 = lVar2 + uVar6 * 0x20;
  puVar1 = puVar10 + 4;
  *(long *)(uVar9 + 0x18 + *(long *)(uVar9 + 0x98) * 8) = param_1[3];
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0xffffffffffffffff;
  puVar10[3] = 0;
  lVar4 = *(long *)(uVar9 + 0x98) + -1;
  *(long *)(uVar9 + 0x98) = lVar4;
  lVar7 = *param_1;
  lVar8 = param_1[1];
  if (lVar8 == lVar7) {
    lVar4 = param_1[2];
    *param_1 = (long)puVar10;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar2;
  }
  else {
    do {
      if (lVar4 == 0x10) goto LAB__text__005a0be4;
      *(long *)(uVar9 + 0x18 + lVar4 * 8) = param_1[3];
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      puVar10[-4] = *(undefined8 *)(lVar8 + -0x20);
      uVar5 = *(undefined8 *)(lVar8 + -0x18);
      *(undefined8 *)(lVar8 + -0x18) = 0;
      puVar10[-3] = uVar5;
      puVar10[-2] = *(undefined8 *)(lVar8 + -0x10);
      puVar10[-1] = *(undefined8 *)(lVar8 + -8);
      lVar4 = *(long *)(lVar8 + -0x18);
      *(undefined8 *)(lVar8 + -0x20) = 0;
      *(undefined8 *)(lVar8 + -0x18) = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      *(undefined8 *)(lVar8 + -0x10) = 0xffffffffffffffff;
      *(undefined8 *)(lVar8 + -8) = 0;
      lVar8 = lVar8 + -0x20;
      puVar10 = puVar10 + -4;
      lVar4 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar4;
    } while (lVar8 != lVar7);
    lVar8 = *param_1;
    lVar7 = param_1[1];
    lVar4 = param_1[2];
    *param_1 = (long)puVar10;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar2;
    while (lVar2 = lVar7, lVar2 != lVar8) {
      lVar7 = lVar2 + -0x20;
      FUN__text__005b509c(lVar7);
      if (*(long *)(lVar2 + -0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar2 + -0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar2 + -0x18) = 0;
      }
    }
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a0bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar4 - lVar8,8);
  return;
}


