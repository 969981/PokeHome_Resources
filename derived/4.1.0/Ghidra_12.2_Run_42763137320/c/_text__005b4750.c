/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4750; name: FUN_.text__005b4750
 */


void FUN__text__005b4750(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__src;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void *__dest;
  undefined8 *puVar11;
  ulong uVar12;
  
  __src = (void *)param_1[1];
  uVar4 = tpidr_el0;
  if (__src == (void *)*param_1) {
    uVar12 = param_1[2];
    uVar9 = param_1[3];
    if (uVar12 < uVar9) {
      lVar5 = (long)(uVar9 - uVar12) >> 3;
      lVar8 = lVar5 + 2;
      if (-2 < lVar5) {
        lVar8 = lVar5 + 1;
      }
      __dest = (void *)((lVar8 >> 1) * 8 + (long)__src);
      if (uVar12 - (long)__src != 0) {
        memmove(__dest,__src,uVar12 - (long)__src);
        __src = (void *)param_1[2];
      }
      param_1[1] = (long)__dest;
      param_1[2] = (long)((long)__src + (lVar8 >> 1) * 8);
    }
    else {
      puVar11 = (undefined8 *)param_1[4];
      lVar8 = (long)(uVar9 - (long)__src) >> 2;
      if (uVar9 - (long)__src == 0) {
        lVar8 = 1;
      }
      uVar12 = lVar8 + 3U >> 2;
      lVar5 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,lVar8 << 3,8);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*puVar11 + 0xb8))();
        puVar7 = (undefined8 *)param_1[1];
        puVar1 = (undefined8 *)(uVar12 * 8);
        uVar12 = param_1[2] - (long)puVar7;
      }
      else {
        puVar7 = (undefined8 *)param_1[1];
        puVar1 = (undefined8 *)(lVar5 + uVar12 * 8);
        uVar12 = param_1[2] - (long)puVar7;
      }
      puVar6 = puVar1;
      if (uVar12 != 0) {
        uVar9 = uVar4 & 0xffffffffffffe000;
        lVar3 = *(long *)(uVar9 + 0x98);
        lVar2 = ((long)uVar12 >> 3) << 3;
        puVar10 = puVar1;
        do {
          if (lVar3 == 0x10) goto LAB__text__005b4934;
          lVar2 = lVar2 + -8;
          *(undefined8 *)((uVar9 | 0x18) + lVar3 * 8) = *puVar11;
          *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
          *puVar10 = *puVar7;
          lVar3 = *(long *)(uVar9 + 0x98) + -1;
          *(long *)(uVar9 + 0x98) = lVar3;
          puVar6 = (undefined8 *)((long)puVar1 + (uVar12 & 0xfffffffffffffff8));
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar2 != 0);
      }
      lVar2 = *param_1;
      *param_1 = lVar5;
      param_1[1] = (long)puVar1;
      lVar3 = param_1[3];
      param_1[2] = (long)puVar6;
      param_1[3] = lVar5 + lVar8 * 8;
      if (lVar2 != 0) {
        (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,lVar2,lVar3 - lVar2,8);
      }
    }
  }
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) != 0x10) {
    lVar8 = param_1[1];
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)param_1[4];
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *(undefined8 *)(lVar8 + -8) = *param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB__text__005b4934:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


