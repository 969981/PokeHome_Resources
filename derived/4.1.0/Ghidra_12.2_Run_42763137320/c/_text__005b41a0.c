/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b41a0; name: FUN_.text__005b41a0
 */


void FUN__text__005b41a0(ulong *param_1,undefined8 *param_2)

{
  void *__src;
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  
  uVar2 = param_1[2];
  uVar5 = tpidr_el0;
  if (uVar2 == param_1[3]) {
    pvVar12 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar12 || (long)__src - (long)pvVar12 == 0) {
      uVar3 = (long)(uVar2 - (long)pvVar12) >> 2;
      if (uVar2 - (long)pvVar12 == 0) {
        uVar3 = 1;
      }
      uVar2 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar3 << 3,8);
      if (uVar2 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xb8))();
        puVar8 = (undefined8 *)param_1[1];
        puVar9 = (undefined8 *)((uVar3 >> 2) * 8);
        uVar1 = param_1[2] - (long)puVar8;
      }
      else {
        puVar8 = (undefined8 *)param_1[1];
        puVar9 = (undefined8 *)(uVar2 + (uVar3 >> 2) * 8);
        uVar1 = param_1[2] - (long)puVar8;
      }
      puVar7 = puVar9;
      if (uVar1 != 0) {
        uVar4 = uVar5 & 0xffffffffffffe000;
        lVar6 = *(long *)(uVar4 + 0x98);
        lVar10 = ((long)uVar1 >> 3) << 3;
        puVar11 = puVar9;
        do {
          if (lVar6 == 0x10) goto LAB__text__005b4378;
          lVar10 = lVar10 + -8;
          *(ulong *)((uVar4 | 0x18) + lVar6 * 8) = param_1[4];
          *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
          *puVar11 = *puVar8;
          lVar6 = *(long *)(uVar4 + 0x98) + -1;
          *(long *)(uVar4 + 0x98) = lVar6;
          puVar7 = (undefined8 *)((long)puVar9 + (uVar1 & 0xfffffffffffffff8));
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar10 != 0);
      }
      uVar1 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar9;
      uVar4 = param_1[3];
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar2 + uVar3 * 8;
      if (uVar1 != 0) {
        (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],uVar1,uVar4 - uVar1,8);
      }
    }
    else {
      lVar6 = (long)__src - (long)pvVar12 >> 3;
      lVar10 = lVar6 + 2;
      if (-2 < lVar6) {
        lVar10 = lVar6 + 1;
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
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) != 0x10) {
    puVar9 = (undefined8 *)param_1[2];
    *(ulong *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = param_1[4];
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    *puVar9 = *param_2;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB__text__005b4378:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


