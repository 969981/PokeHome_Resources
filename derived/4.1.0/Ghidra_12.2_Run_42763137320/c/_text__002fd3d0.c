/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd3d0; name: FUN_.text__002fd3d0
 */


void FUN__text__002fd3d0(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  void *__src;
  ulong uVar9;
  
  pvVar8 = (void *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)pvVar8 >> 0xc)) {
    pvVar7 = pvVar8;
    if (param_2 != 0) {
      uVar9 = tpidr_el0;
      pvVar7 = (void *)((long)pvVar8 + param_2 * 0x1000);
      lVar6 = param_2 << 0xc;
      uVar9 = uVar9 & 0xffffffffffffe000;
      lVar2 = *(long *)(uVar9 + 0x98);
      do {
        if (lVar2 == 0x10) goto LAB__text__002fd5f4;
        *(long *)((uVar9 | 0x18) + lVar2 * 8) = param_1[3];
        *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
        memset(pvVar8,0,0x1000);
        pvVar8 = (void *)((long)pvVar8 + 0x1000);
        lVar6 = lVar6 + -0x1000;
        lVar2 = *(long *)(uVar9 + 0x98) + -1;
        *(long *)(uVar9 + 0x98) = lVar2;
      } while (lVar6 != 0);
    }
    param_1[1] = (long)pvVar7;
    return;
  }
  lVar6 = (long)pvVar8 - *param_1 >> 0xc;
  uVar9 = lVar6 + param_2;
  if (uVar9 >> 0x34 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN__text__002fd600(param_1);
  }
  uVar3 = param_1[2] - *param_1;
  uVar5 = (long)uVar3 >> 0xb;
  if (uVar5 <= uVar9) {
    uVar5 = uVar9;
  }
  if (0x7fffffffffffefff < uVar3) {
    uVar5 = 0xfffffffffffff;
  }
  if (uVar5 != 0) {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 0xc,0x1000);
    if (lVar2 != 0) goto LAB__text__002fd46c;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar2 = 0;
LAB__text__002fd46c:
  uVar9 = tpidr_el0;
  pvVar7 = (void *)(lVar2 + lVar6 * 0x1000);
  lVar6 = param_2 * 0x1000;
  uVar9 = uVar9 & 0xffffffffffffe000;
  lVar4 = *(long *)(uVar9 + 0x98);
  pvVar1 = (void *)((long)pvVar7 + lVar6);
  pvVar8 = pvVar7;
  do {
    if (lVar4 == 0x10) goto LAB__text__002fd5f4;
    *(long *)((uVar9 | 0x18) + lVar4 * 8) = param_1[3];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    memset(pvVar8,0,0x1000);
    pvVar8 = (void *)((long)pvVar8 + 0x1000);
    lVar6 = lVar6 + -0x1000;
    lVar4 = *(long *)(uVar9 + 0x98) + -1;
    *(long *)(uVar9 + 0x98) = lVar4;
  } while (lVar6 != 0);
  pvVar8 = (void *)*param_1;
  __src = (void *)param_1[1];
  if (__src != pvVar8) {
    do {
      if (lVar4 == 0x10) {
LAB__text__002fd5f4:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      __src = (void *)((long)__src + -0x1000);
      pvVar7 = (void *)((long)pvVar7 + -0x1000);
      *(long *)((uVar9 | 0x18) + lVar4 * 8) = param_1[3];
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      memcpy(pvVar7,__src,0x1000);
      lVar4 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar4;
    } while (__src != pvVar8);
    __src = (void *)*param_1;
  }
  lVar6 = param_1[2];
  *param_1 = (long)pvVar7;
  param_1[1] = (long)pvVar1;
  param_1[2] = lVar2 + uVar5 * 0x1000;
  if (__src == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002fd568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,lVar6 - (long)__src,0x1000);
  return;
}


