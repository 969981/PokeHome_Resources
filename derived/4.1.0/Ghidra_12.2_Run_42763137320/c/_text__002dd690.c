/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dd690; name: FUN_.text__002dd690
 */


void FUN__text__002dd690(ulong *param_1,undefined8 *param_2)

{
  void *__src;
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  
  uVar2 = param_1[2];
  uVar4 = tpidr_el0;
  if (uVar2 == param_1[4]) {
    pvVar12 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar12 || (long)__src - (long)pvVar12 == 0) {
      uVar3 = (long)(uVar2 - (long)pvVar12) >> 2;
      if (uVar2 - (long)pvVar12 == 0) {
        uVar3 = 1;
      }
      uVar1 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],uVar3 * 8,0x10);
      puVar8 = (undefined8 *)(uVar1 + (uVar3 >> 2) * 8);
      uVar2 = param_1[2] - (long)param_1[1];
      puVar6 = puVar8;
      if (uVar2 != 0) {
        uVar9 = uVar4 & 0xffffffffffffe000;
        lVar5 = *(long *)(uVar9 + 0x98);
        puVar6 = (undefined8 *)((long)puVar8 + (uVar2 & 0xfffffffffffffff8));
        lVar10 = ((long)uVar2 >> 3) << 3;
        puVar7 = (undefined8 *)param_1[1];
        puVar11 = puVar8;
        do {
          if (lVar5 == 0x10) goto LAB__text__002dd83c;
          lVar10 = lVar10 + -8;
          *(ulong *)((uVar9 | 0x18) + lVar5 * 8) = param_1[6];
          *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
          *puVar11 = *puVar7;
          lVar5 = *(long *)(uVar9 + 0x98) + -1;
          *(long *)(uVar9 + 0x98) = lVar5;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar10 != 0);
      }
      uVar2 = *param_1;
      *param_1 = uVar1;
      param_1[1] = (ulong)puVar8;
      uVar9 = param_1[4];
      param_1[2] = (ulong)puVar6;
      param_1[4] = uVar1 + uVar3 * 8;
      if (uVar2 != 0) {
        (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],uVar2,uVar9 - uVar2,0x10);
      }
    }
    else {
      lVar5 = (long)__src - (long)pvVar12 >> 3;
      lVar10 = lVar5 + 2;
      if (-2 < lVar5) {
        lVar10 = lVar5 + 1;
      }
      __n = uVar2 - (long)__src;
      pvVar12 = (void *)((long)__src + (lVar10 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar12,__src,__n);
        uVar2 = param_1[1];
      }
      param_1[1] = uVar2 + (lVar10 >> 1) * -8;
      param_1[2] = (long)pvVar12 + __n;
    }
  }
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) != 0x10) {
    puVar8 = (undefined8 *)param_1[2];
    *(ulong *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_1[6];
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *puVar8 = *param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB__text__002dd83c:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


