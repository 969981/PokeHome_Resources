/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b8a40; name: FUN_.text__005b8a40
 */


ulong FUN__text__005b8a40(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                         undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [12];
  
  lVar7 = param_1[1] - *param_1 >> 9;
  uVar9 = lVar7 + 1;
  if (uVar9 >> 0x37 != 0) {
    auVar10 = FUN__text__005b8a24(param_1);
    return (ulong)*(byte *)(*(long *)(*(long *)(*(long *)(auVar10._0_8_ + 0x68) + 0x260) +
                                      (long)auVar10._8_4_ * 0x60 + 0x40) + 0x38);
  }
  uVar2 = param_1[2] - *param_1;
  uVar4 = (long)uVar2 >> 8;
  if (uVar4 <= uVar9) {
    uVar4 = uVar9;
  }
  if (0x7ffffffffffffdff < uVar2) {
    uVar4 = 0x7fffffffffffff;
  }
  if (uVar4 != 0) {
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 9,0x10);
    if (lVar1 != 0) goto LAB__text__005b8ae0;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar1 = 0;
LAB__text__005b8ae0:
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
LAB__text__005b8c28:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar8 = lVar1 + lVar7 * 0x200;
  lVar1 = lVar1 + uVar4 * 0x200;
  *(long *)(uVar9 + 0x18 + *(long *)(uVar9 + 0x98) * 8) = param_1[3];
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  uVar4 = FUN__text__005d51dc(lVar8,param_2,*param_3,*param_4,param_5);
  lVar7 = lVar8 + 0x200;
  lVar3 = *(long *)(uVar9 + 0x98) + -1;
  *(long *)(uVar9 + 0x98) = lVar3;
  lVar6 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar6) {
    *param_1 = lVar8;
    param_1[1] = lVar7;
    lVar7 = param_1[2];
    param_1[2] = lVar1;
  }
  else {
    do {
      if (lVar3 == 0x10) goto LAB__text__005b8c28;
      lVar5 = lVar5 + -0x200;
      lVar8 = lVar8 + -0x200;
      *(long *)(uVar9 + 0x18 + lVar3 * 8) = param_1[3];
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar4 = FUN__text__005a6738(lVar8,lVar5);
      lVar3 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar3;
    } while (lVar5 != lVar6);
    lVar5 = *param_1;
    lVar6 = param_1[1];
    *param_1 = lVar8;
    param_1[1] = lVar7;
    lVar7 = param_1[2];
    param_1[2] = lVar1;
    while (lVar6 != lVar5) {
      lVar6 = lVar6 + -0x200;
      uVar4 = FUN__text__0014821c(lVar6);
    }
  }
  if (lVar5 == 0) {
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x005b8bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar5,lVar7 - lVar5,0x10);
  return uVar9;
}


