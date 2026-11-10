/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dd090; name: FUN_.text__002dd090
 */


void FUN__text__002dd090(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  void *__dest;
  undefined8 *puVar12;
  
  __src = (void *)param_1[1];
  uVar3 = tpidr_el0;
  if (__src == (void *)*param_1) {
    uVar2 = param_1[2];
    uVar8 = param_1[3];
    if (uVar2 < uVar8) {
      lVar4 = (long)(uVar8 - uVar2) >> 3;
      lVar7 = lVar4 + 2;
      if (-2 < lVar4) {
        lVar7 = lVar4 + 1;
      }
      __dest = (void *)((lVar7 >> 1) * 8 + (long)__src);
      if (uVar2 - (long)__src != 0) {
        memmove(__dest,__src,uVar2 - (long)__src);
        __src = (void *)param_1[2];
      }
      param_1[1] = (long)__dest;
      param_1[2] = (long)((long)__src + (lVar7 >> 1) * 8);
    }
    else {
      puVar12 = (undefined8 *)param_1[4];
      lVar7 = (long)(uVar8 - (long)__src) >> 2;
      if (uVar8 - (long)__src == 0) {
        lVar7 = 1;
      }
      lVar4 = (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,lVar7 * 8,0x10);
      puVar1 = (undefined8 *)(lVar4 + (lVar7 * 2 + 6U & 0xfffffffffffffff8));
      uVar2 = param_1[2] - param_1[1];
      puVar5 = puVar1;
      if (uVar2 != 0) {
        uVar8 = uVar3 & 0xffffffffffffe000;
        lVar11 = *(long *)(uVar8 + 0x98);
        puVar5 = (undefined8 *)((long)puVar1 + (uVar2 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar2 >> 3) << 3;
        puVar6 = (undefined8 *)param_1[1];
        puVar10 = puVar1;
        do {
          if (lVar11 == 0x10) goto LAB__text__002dd24c;
          lVar9 = lVar9 + -8;
          *(undefined8 *)((uVar8 | 0x18) + lVar11 * 8) = *puVar12;
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
          *puVar10 = *puVar6;
          lVar11 = *(long *)(uVar8 + 0x98) + -1;
          *(long *)(uVar8 + 0x98) = lVar11;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      lVar9 = *param_1;
      *param_1 = lVar4;
      param_1[1] = (long)puVar1;
      lVar11 = param_1[3];
      param_1[2] = (long)puVar5;
      param_1[3] = lVar4 + lVar7 * 8;
      if (lVar9 != 0) {
        (**(code **)(*(long *)*puVar12 + 0x18))((long *)*puVar12,lVar9,lVar11 - lVar9,0x10);
      }
    }
  }
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) != 0x10) {
    lVar7 = param_1[1];
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)param_1[4];
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *(undefined8 *)(lVar7 + -8) = *param_2;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB__text__002dd24c:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


