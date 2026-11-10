/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f0ff0; name: FUN_.text__005f0ff0
 */


void FUN__text__005f0ff0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  pvVar7 = (void *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)pvVar7 >> 3) * -0x7d05f417d05f417d)) {
    pvVar9 = pvVar7;
    if (param_2 != 0) {
      pvVar9 = (void *)((long)pvVar7 + param_2 * 0x158);
      uVar11 = tpidr_el0;
      lVar6 = param_2 * 0x158;
      uVar11 = uVar11 & 0xffffffffffffe000;
      lVar2 = *(long *)(uVar11 + 0x98);
      do {
        if (lVar2 == 0x10) goto LAB__text__005f130c;
        *(long *)((uVar11 | 0x18) + lVar2 * 8) = param_1[3];
        *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
        memset(pvVar7,0,0x158);
        pvVar7 = (void *)((long)pvVar7 + 0x158);
        lVar6 = lVar6 + -0x158;
        lVar2 = *(long *)(uVar11 + 0x98) + -1;
        *(long *)(uVar11 + 0x98) = lVar2;
      } while (lVar6 != 0);
    }
    param_1[1] = (long)pvVar9;
    return;
  }
  lVar6 = (long)pvVar7 - *param_1 >> 3;
  uVar11 = lVar6 * -0x7d05f417d05f417d + param_2;
  if (0xbe82fa0be82fa0 < uVar11) {
    FUN__text__005f1318(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  lVar2 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar2 * 0x5f417d05f417d06;
  if (uVar5 <= uVar11) {
    uVar5 = uVar11;
  }
  if (0x5f417d05f417cf < (ulong)(lVar2 * -0x7d05f417d05f417d)) {
    uVar5 = 0xbe82fa0be82fa0;
  }
  if (uVar5 != 0) {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 * 0x158,8);
    if (lVar2 != 0) goto LAB__text__005f10d4;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar2 = 0;
LAB__text__005f10d4:
  uVar11 = tpidr_el0;
  pvVar10 = (void *)(lVar2 + lVar6 * 8);
  lVar6 = param_2 * 0x158;
  uVar11 = uVar11 & 0xffffffffffffe000;
  lVar3 = *(long *)(uVar11 + 0x98);
  lVar2 = lVar2 + uVar5 * 0x158;
  pvVar9 = (void *)((long)pvVar10 + lVar6);
  pvVar7 = pvVar10;
  do {
    if (lVar3 == 0x10) goto LAB__text__005f130c;
    *(long *)((uVar11 | 0x18) + lVar3 * 8) = param_1[3];
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
    memset(pvVar7,0,0x158);
    pvVar7 = (void *)((long)pvVar7 + 0x158);
    lVar6 = lVar6 + -0x158;
    lVar3 = *(long *)(uVar11 + 0x98) + -1;
    *(long *)(uVar11 + 0x98) = lVar3;
  } while (lVar6 != 0);
  lVar6 = *param_1;
  lVar8 = param_1[1];
  if (lVar8 == lVar6) {
    lVar6 = param_1[2];
    *param_1 = (long)pvVar10;
    param_1[1] = (long)pvVar9;
    param_1[2] = lVar2;
  }
  else {
    lVar12 = 0;
    do {
      if (lVar3 == 0x10) {
LAB__text__005f130c:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      lVar1 = lVar8 + lVar12;
      *(long *)((uVar11 | 0x18) + lVar3 * 8) = param_1[3];
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      memcpy((void *)((long)pvVar10 + lVar12 + -0x158),(void *)(lVar1 + -0x158),0x140);
      uVar4 = *(undefined8 *)(lVar1 + -0x18);
      *(undefined8 *)(lVar1 + -0x18) = 0;
      lVar13 = lVar12 + -0x158;
      *(undefined8 *)((long)pvVar10 + lVar12 + -0x18) = uVar4;
      uVar4 = *(undefined8 *)(lVar1 + -0x10);
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined8 *)((long)pvVar10 + lVar12 + -0x10) = uVar4;
      *(undefined4 *)((long)pvVar10 + lVar12 + -8) = *(undefined4 *)(lVar1 + -8);
      lVar3 = *(long *)(uVar11 + 0x98) + -1;
      *(long *)(uVar11 + 0x98) = lVar3;
      lVar12 = lVar13;
    } while (lVar8 + lVar13 != lVar6);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    *param_1 = (long)pvVar10 + lVar13;
    lVar6 = param_1[2];
    param_1[1] = (long)pvVar9;
    param_1[2] = lVar2;
    for (; lVar3 != lVar8; lVar3 = lVar3 + -0x158) {
      if (*(long *)(lVar3 + -0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + -0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -0x10) = 0;
      }
      if (*(long *)(lVar3 + -0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + -0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -0x18) = 0;
      }
    }
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005f12e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar6 - lVar8,8);
  return;
}


