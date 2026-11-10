/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005acc90; name: FUN_.text__005acc90
 */


void FUN__text__005acc90(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar6 = lVar9 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN__text__005ace00(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar4 = param_1[2] - *param_1;
  uVar7 = (long)uVar4 >> 2;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 != 0) {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 3,8);
    if (lVar2 != 0) goto LAB__text__005acd18;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar2 = 0;
LAB__text__005acd18:
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
LAB__text__005acdf4:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_1[3];
  puVar5 = (undefined8 *)(lVar2 + lVar9 * 8);
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  puVar8 = puVar5 + 1;
  *puVar5 = *param_2;
  lVar9 = *(long *)(uVar6 + 0x98) + -1;
  *(long *)(uVar6 + 0x98) = lVar9;
  puVar1 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      if (lVar9 == 0x10) goto LAB__text__005acdf4;
      *(long *)(uVar6 + 0x18 + lVar9 * 8) = param_1[3];
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar3;
      lVar9 = *(long *)(uVar6 + 0x98) + -1;
      *(long *)(uVar6 + 0x98) = lVar9;
    } while (puVar3 != puVar1);
    puVar3 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar8;
  lVar9 = param_1[2];
  param_1[2] = lVar2 + uVar7 * 8;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005acde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar3,lVar9 - (long)puVar3,8);
  return;
}


