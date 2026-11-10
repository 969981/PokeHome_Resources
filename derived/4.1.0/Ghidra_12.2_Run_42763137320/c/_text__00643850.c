/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00643850; name: FUN_.text__00643850
 */


void FUN__text__00643850(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar3 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar3 >> 3)) {
    puVar4 = puVar3;
    if (param_2 != 0) {
      uVar7 = tpidr_el0;
      puVar4 = puVar3 + param_2;
      lVar10 = param_2 << 3;
      uVar7 = uVar7 & 0xffffffffffffe000;
      lVar1 = *(long *)(uVar7 + 0x98);
      do {
        if (lVar1 == 0x10) goto LAB__text__00643a2c;
        lVar10 = lVar10 + -8;
        *(long *)((uVar7 | 0x18) + lVar1 * 8) = param_1[3];
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        *puVar3 = 0;
        lVar1 = *(long *)(uVar7 + 0x98) + -1;
        *(long *)(uVar7 + 0x98) = lVar1;
        puVar3 = puVar3 + 1;
      } while (lVar10 != 0);
    }
    param_1[1] = (long)puVar4;
    return;
  }
  lVar10 = (long)puVar3 - *param_1 >> 3;
  uVar7 = lVar10 + param_2;
  if (uVar7 >> 0x3d != 0) {
    FUN__text__00643a38(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 != 0) {
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 3,8);
    if (lVar1 != 0) goto LAB__text__006438e4;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar1 = 0;
LAB__text__006438e4:
  uVar7 = tpidr_el0;
  puVar3 = (undefined8 *)(lVar1 + lVar10 * 8);
  lVar10 = param_2 * 8;
  uVar7 = uVar7 & 0xffffffffffffe000;
  lVar8 = *(long *)(uVar7 + 0x98);
  puVar4 = puVar3 + param_2;
  puVar9 = puVar3;
  do {
    if (lVar8 == 0x10) goto LAB__text__00643a2c;
    lVar10 = lVar10 + -8;
    *(long *)((uVar7 | 0x18) + lVar8 * 8) = param_1[3];
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    *puVar9 = 0;
    lVar8 = *(long *)(uVar7 + 0x98) + -1;
    *(long *)(uVar7 + 0x98) = lVar8;
    puVar9 = puVar9 + 1;
  } while (lVar10 != 0);
  puVar9 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != puVar9) {
    do {
      if (lVar8 == 0x10) {
LAB__text__00643a2c:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long *)((uVar7 | 0x18) + lVar8 * 8) = param_1[3];
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar2;
      lVar8 = *(long *)(uVar7 + 0x98) + -1;
      *(long *)(uVar7 + 0x98) = lVar8;
    } while (puVar2 != puVar9);
    puVar2 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar4;
  lVar10 = param_1[2];
  param_1[2] = lVar1 + uVar6 * 8;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006439bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar2,lVar10 - (long)puVar2,8);
  return;
}


