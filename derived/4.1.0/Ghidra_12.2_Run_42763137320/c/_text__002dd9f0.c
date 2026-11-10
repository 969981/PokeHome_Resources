/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dd9f0; name: FUN_.text__002dd9f0
 */


void FUN__text__002dd9f0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__src;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  void *__dest;
  
  __src = (void *)param_1[1];
  uVar3 = tpidr_el0;
  if (__src == (void *)*param_1) {
    uVar2 = param_1[2];
    uVar4 = param_1[4];
    if (uVar2 < uVar4) {
      lVar5 = (long)(uVar4 - uVar2) >> 3;
      lVar8 = lVar5 + 2;
      if (-2 < lVar5) {
        lVar8 = lVar5 + 1;
      }
      __dest = (void *)((lVar8 >> 1) * 8 + (long)__src);
      if (uVar2 - (long)__src != 0) {
        memmove(__dest,__src,uVar2 - (long)__src);
        __src = (void *)param_1[2];
      }
      param_1[1] = (long)__dest;
      param_1[2] = (long)((long)__src + (lVar8 >> 1) * 8);
    }
    else {
      lVar8 = (long)(uVar4 - (long)__src) >> 2;
      if (uVar4 - (long)__src == 0) {
        lVar8 = 1;
      }
      lVar5 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],lVar8 * 8,0x10);
      puVar1 = (undefined8 *)(lVar5 + (lVar8 * 2 + 6U & 0xfffffffffffffff8));
      uVar2 = param_1[2] - param_1[1];
      puVar6 = puVar1;
      if (uVar2 != 0) {
        uVar4 = uVar3 & 0xffffffffffffe000;
        lVar11 = *(long *)(uVar4 + 0x98);
        puVar6 = (undefined8 *)((long)puVar1 + (uVar2 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar2 >> 3) << 3;
        puVar7 = (undefined8 *)param_1[1];
        puVar10 = puVar1;
        do {
          if (lVar11 == 0x10) goto LAB__text__002ddbac;
          lVar9 = lVar9 + -8;
          *(long *)((uVar4 | 0x18) + lVar11 * 8) = param_1[6];
          *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
          *puVar10 = *puVar7;
          lVar11 = *(long *)(uVar4 + 0x98) + -1;
          *(long *)(uVar4 + 0x98) = lVar11;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      lVar9 = *param_1;
      *param_1 = lVar5;
      param_1[1] = (long)puVar1;
      lVar11 = param_1[4];
      param_1[2] = (long)puVar6;
      param_1[4] = lVar5 + lVar8 * 8;
      if (lVar9 != 0) {
        (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar9,lVar11 - lVar9,0x10);
      }
    }
  }
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) != 0x10) {
    lVar8 = param_1[1];
    *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_1[6];
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *(undefined8 *)(lVar8 + -8) = *param_2;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB__text__002ddbac:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


