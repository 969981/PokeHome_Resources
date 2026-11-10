/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf020; name: FUN_.text__005cf020
 */


void FUN__text__005cf020(long *param_1,undefined8 *param_2)

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
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  lVar12 = param_1[1] - *param_1 >> 4;
  uVar8 = lVar12 + 1;
  if (uVar8 >> 0x3c != 0) {
    FUN__text__005cf194(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar7 = param_1[2] - *param_1;
  uVar9 = (long)uVar7 >> 3;
  if (uVar9 <= uVar8) {
    uVar9 = uVar8;
  }
  if (0x7fffffffffffffef < uVar7) {
    uVar9 = 0xfffffffffffffff;
  }
  if (uVar9 != 0) {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 4,8);
    if (lVar4 != 0) goto LAB__text__005cf0a8;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar4 = 0;
LAB__text__005cf0a8:
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
LAB__text__005cf188:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar1 = (undefined8 *)(lVar4 + lVar12 * 0x10);
  *(long *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_1[3];
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  lVar12 = *(long *)(uVar8 + 0x98) + -1;
  *(long *)(uVar8 + 0x98) = lVar12;
  puVar2 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  puVar10 = puVar1;
  puVar11 = puVar1;
  if (puVar6 != puVar2) {
    do {
      if (lVar12 == 0x10) goto LAB__text__005cf188;
      *(long *)(uVar8 + 0x18 + lVar12 * 8) = param_1[3];
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      puVar5 = puVar6 + -2;
      uVar3 = puVar6[-1];
      puVar11 = puVar10 + -2;
      *puVar11 = *puVar5;
      puVar10[-1] = uVar3;
      lVar12 = *(long *)(uVar8 + 0x98) + -1;
      *(long *)(uVar8 + 0x98) = lVar12;
      puVar6 = puVar5;
      puVar10 = puVar11;
    } while (puVar5 != puVar2);
    puVar6 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar11;
  param_1[1] = (long)(puVar1 + 2);
  lVar12 = param_1[2];
  param_1[2] = lVar4 + uVar9 * 0x10;
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005cf174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar6,lVar12 - (long)puVar6,8);
  return;
}


