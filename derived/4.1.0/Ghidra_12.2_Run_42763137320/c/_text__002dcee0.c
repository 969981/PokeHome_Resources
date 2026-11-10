/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dcee0; name: FUN_.text__002dcee0
 */


void FUN__text__002dcee0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__src;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  
  uVar3 = param_1[2];
  uVar5 = tpidr_el0;
  if (uVar3 == param_1[3]) {
    pvVar13 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar13 || (long)__src - (long)pvVar13 == 0) {
      puVar9 = (undefined8 *)param_1[4];
      uVar4 = (long)(uVar3 - (long)pvVar13) >> 2;
      if (uVar3 - (long)pvVar13 == 0) {
        uVar4 = 1;
      }
      uVar2 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,uVar4 * 8,0x10);
      puVar1 = (undefined8 *)(uVar2 + (uVar4 >> 2) * 8);
      uVar3 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (uVar3 != 0) {
        uVar10 = uVar5 & 0xffffffffffffe000;
        lVar6 = *(long *)(uVar10 + 0x98);
        puVar7 = (undefined8 *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
        lVar11 = ((long)uVar3 >> 3) << 3;
        puVar8 = (undefined8 *)param_1[1];
        puVar12 = puVar1;
        do {
          if (lVar6 == 0x10) goto LAB__text__002dd08c;
          lVar11 = lVar11 + -8;
          *(undefined8 *)((uVar10 | 0x18) + lVar6 * 8) = *puVar9;
          *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
          *puVar12 = *puVar8;
          lVar6 = *(long *)(uVar10 + 0x98) + -1;
          *(long *)(uVar10 + 0x98) = lVar6;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar11 != 0);
      }
      uVar3 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar1;
      uVar10 = param_1[3];
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar2 + uVar4 * 8;
      if (uVar3 != 0) {
        (**(code **)(*(long *)*puVar9 + 0x18))((long *)*puVar9,uVar3,uVar10 - uVar3,0x10);
      }
    }
    else {
      lVar6 = (long)__src - (long)pvVar13 >> 3;
      lVar11 = lVar6 + 2;
      if (-2 < lVar6) {
        lVar11 = lVar6 + 1;
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
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) != 0x10) {
    puVar9 = (undefined8 *)param_1[2];
    *(undefined8 *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = *(undefined8 *)param_1[4];
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    *puVar9 = *param_2;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB__text__002dd08c:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


