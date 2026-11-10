/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1c10; name: FUN_.text__005a1c10
 */


void FUN__text__005a1c10(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  lVar10 = param_1[1] - *param_1 >> 6;
  uVar12 = lVar10 + 1;
  if (uVar12 >> 0x3a != 0) {
    FUN__text__005a1e54(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar3 = param_1[2] - *param_1;
  uVar4 = (long)uVar3 >> 5;
  if (uVar4 <= uVar12) {
    uVar4 = uVar12;
  }
  if (0x7fffffffffffffbf < uVar3) {
    uVar4 = 0x3ffffffffffffff;
  }
  if (uVar4 != 0) {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 6,8);
    if (lVar2 != 0) goto LAB__text__005a1ca8;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar2 = 0;
LAB__text__005a1ca8:
  uVar12 = tpidr_el0;
  uVar12 = uVar12 & 0xffffffffffffe000;
  if (*(long *)(uVar12 + 0x98) == 0x10) {
LAB__text__005a1e48:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar10 = lVar2 + lVar10 * 0x40;
  lVar2 = lVar2 + uVar4 * 0x40;
  *(long *)(uVar12 + 0x18 + *(long *)(uVar12 + 0x98) * 8) = param_1[3];
  *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
  FUN__text__005a0e08(lVar10,param_2,*param_3,*param_4);
  lVar6 = *(long *)(uVar12 + 0x98) + -1;
  *(long *)(uVar12 + 0x98) = lVar6;
  lVar11 = *param_1;
  lVar9 = param_1[1];
  if (lVar9 == lVar11) {
    *param_1 = lVar10;
    param_1[1] = lVar10 + 0x40;
    lVar11 = param_1[2];
    param_1[2] = lVar2;
  }
  else {
    lVar5 = 0;
    do {
      if (lVar6 == 0x10) goto LAB__text__005a1e48;
      lVar1 = lVar10 + lVar5;
      *(long *)(uVar12 + 0x18 + lVar6 * 8) = param_1[3];
      lVar6 = lVar9 + lVar5;
      lVar5 = lVar5 + -0x40;
      *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
      uVar7 = *(undefined8 *)(lVar6 + -0x40);
      *(undefined8 *)(lVar6 + -0x40) = 0;
      *(undefined8 *)(lVar1 + -0x40) = uVar7;
      *(undefined8 *)(lVar1 + -0x38) = *(undefined8 *)(lVar6 + -0x38);
      *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(lVar6 + -0x30);
      *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(lVar6 + -0x28);
      uVar7 = *(undefined8 *)(lVar6 + -0x20);
      *(undefined8 *)(lVar6 + -0x20) = 0;
      *(undefined8 *)(lVar1 + -0x20) = uVar7;
      uVar7 = *(undefined8 *)(lVar6 + -0x18);
      uVar8 = *(undefined8 *)(lVar6 + -8);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar6 + -0x10);
      *(undefined8 *)(lVar1 + -8) = uVar8;
      *(undefined8 *)(lVar1 + -0x18) = uVar7;
      lVar6 = *(long *)(uVar12 + 0x98) + -1;
      *(long *)(uVar12 + 0x98) = lVar6;
    } while (lVar9 + lVar5 != lVar11);
    lVar9 = *param_1;
    lVar6 = param_1[1];
    lVar11 = param_1[2];
    *param_1 = lVar10 + lVar5;
    param_1[1] = lVar10 + 0x40;
    param_1[2] = lVar2;
    for (; lVar6 != lVar9; lVar6 = lVar6 + -0x40) {
      if (*(long *)(lVar6 + -0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar6 + -0x20) + 0x48) + 0x18))();
        *(undefined8 *)(lVar6 + -0x20) = 0;
      }
      if (*(long *)(lVar6 + -0x40) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar6 + -0x40) + 0x48) + 0x18))();
        *(undefined8 *)(lVar6 + -0x40) = 0;
      }
    }
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a1e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar9,lVar11 - lVar9,8);
  return;
}


