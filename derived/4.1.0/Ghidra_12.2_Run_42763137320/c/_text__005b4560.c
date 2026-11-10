/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4560; name: FUN_.text__005b4560
 */


void FUN__text__005b4560(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__src;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  
  uVar3 = param_1[2];
  uVar6 = tpidr_el0;
  if (uVar3 == param_1[3]) {
    pvVar13 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar13 || (long)__src - (long)pvVar13 == 0) {
      puVar10 = (undefined8 *)param_1[4];
      uVar4 = (long)(uVar3 - (long)pvVar13) >> 2;
      if (uVar3 - (long)pvVar13 == 0) {
        uVar4 = 1;
      }
      uVar3 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,uVar4 << 3,8);
      if (uVar3 == 0) {
        (**(code **)(*(long *)*puVar10 + 0xb8))();
        puVar9 = (undefined8 *)param_1[1];
        puVar1 = (undefined8 *)((uVar4 >> 2) * 8);
        uVar2 = param_1[2] - (long)puVar9;
      }
      else {
        puVar9 = (undefined8 *)param_1[1];
        puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
        uVar2 = param_1[2] - (long)puVar9;
      }
      puVar8 = puVar1;
      if (uVar2 != 0) {
        uVar5 = uVar6 & 0xffffffffffffe000;
        lVar7 = *(long *)(uVar5 + 0x98);
        lVar11 = ((long)uVar2 >> 3) << 3;
        puVar12 = puVar1;
        do {
          if (lVar7 == 0x10) goto LAB__text__005b4740;
          lVar11 = lVar11 + -8;
          *(undefined8 *)((uVar5 | 0x18) + lVar7 * 8) = *puVar10;
          *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
          *puVar12 = *puVar9;
          lVar7 = *(long *)(uVar5 + 0x98) + -1;
          *(long *)(uVar5 + 0x98) = lVar7;
          puVar8 = (undefined8 *)((long)puVar1 + (uVar2 & 0xfffffffffffffff8));
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar11 != 0);
      }
      uVar2 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      uVar5 = param_1[3];
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar2 != 0) {
        (**(code **)(*(long *)*puVar10 + 0x18))((long *)*puVar10,uVar2,uVar5 - uVar2,8);
      }
    }
    else {
      lVar7 = (long)__src - (long)pvVar13 >> 3;
      lVar11 = lVar7 + 2;
      if (-2 < lVar7) {
        lVar11 = lVar7 + 1;
      }
      __n = uVar3 - (long)__src;
      pvVar13 = (void *)((long)__src + (lVar11 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar13,__src,__n);
        uVar3 = param_1[1];
      }
      param_1[1] = uVar3 + (lVar11 >> 1) * -8;
      param_1[2] = (long)pvVar13 + __n;
    }
  }
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) != 0x10) {
    puVar10 = (undefined8 *)param_1[2];
    *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)param_1[4];
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
    *puVar10 = *param_2;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB__text__005b4740:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


