/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c2db0; name: FUN_.text__005c2db0
 */


void FUN__text__005c2db0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = param_1[1] - *param_1 >> 9;
  uVar9 = lVar7 + 1;
  if (uVar9 >> 0x37 != 0) {
    FUN__text__005b8a24(param_1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x5c2f7c);
    (*pcVar1)();
  }
  uVar3 = param_1[2] - *param_1;
  uVar5 = (long)uVar3 >> 8;
  if (uVar5 <= uVar9) {
    uVar5 = uVar9;
  }
  if (0x7ffffffffffffdff < uVar3) {
    uVar5 = 0x7fffffffffffff;
  }
  if (uVar5 != 0) {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 9,0x10);
    if (lVar2 != 0) goto LAB__text__005c2e40;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar2 = 0;
LAB__text__005c2e40:
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
LAB__text__005c2f70:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar8 = lVar2 + lVar7 * 0x200;
  lVar2 = lVar2 + uVar5 * 0x200;
  *(long *)(uVar9 + 0x18 + *(long *)(uVar9 + 0x98) * 8) = param_1[3];
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  FUN__text__005bff30(lVar8,param_2);
  lVar7 = lVar8 + 0x200;
  lVar4 = *(long *)(uVar9 + 0x98) + -1;
  *(long *)(uVar9 + 0x98) = lVar4;
  lVar10 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 == lVar10) {
    *param_1 = lVar8;
    param_1[1] = lVar7;
    lVar7 = param_1[2];
    param_1[2] = lVar2;
  }
  else {
    do {
      if (lVar4 == 0x10) goto LAB__text__005c2f70;
      lVar6 = lVar6 + -0x200;
      lVar8 = lVar8 + -0x200;
      *(long *)(uVar9 + 0x18 + lVar4 * 8) = param_1[3];
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      FUN__text__005a6738(lVar8,lVar6);
      lVar4 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar4;
    } while (lVar6 != lVar10);
    lVar6 = *param_1;
    lVar10 = param_1[1];
    *param_1 = lVar8;
    param_1[1] = lVar7;
    lVar7 = param_1[2];
    param_1[2] = lVar2;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x200;
      FUN__text__0014821c(lVar10);
    }
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005c2f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar7 - lVar6,0x10);
  return;
}


