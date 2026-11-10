/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c95f0; name: FUN_.text__002c95f0
 */


void FUN__text__002c95f0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *__src;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  void *pvVar16;
  
  uVar6 = param_1[2];
  uVar9 = tpidr_el0;
  if (uVar6 == param_1[3]) {
    pvVar16 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar16 || (long)__src - (long)pvVar16 == 0) {
      puVar13 = (undefined8 *)param_1[4];
      uVar7 = (long)(uVar6 - (long)pvVar16) >> 4;
      if (uVar6 - (long)pvVar16 == 0) {
        uVar7 = 1;
      }
      uVar6 = (**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,uVar7 << 5,8);
      if (uVar6 == 0) {
        (**(code **)(*(long *)*puVar13 + 0xb8))();
        puVar12 = (undefined8 *)param_1[1];
        puVar1 = (undefined8 *)((uVar7 >> 2) * 0x20);
        uVar5 = param_1[2] - (long)puVar12;
      }
      else {
        puVar12 = (undefined8 *)param_1[1];
        puVar1 = (undefined8 *)(uVar6 + (uVar7 >> 2) * 0x20);
        uVar5 = param_1[2] - (long)puVar12;
      }
      puVar11 = puVar1;
      if (uVar5 != 0) {
        uVar8 = uVar9 & 0xffffffffffffe000;
        lVar10 = *(long *)(uVar8 + 0x98);
        lVar14 = ((long)uVar5 >> 5) << 5;
        puVar15 = puVar1;
        do {
          if (lVar10 == 0x10) goto LAB__text__002c97e4;
          lVar14 = lVar14 + -0x20;
          *(undefined8 *)((uVar8 | 0x18) + lVar10 * 8) = *puVar13;
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
          uVar2 = *puVar12;
          uVar3 = puVar12[1];
          puVar11 = puVar12 + 2;
          uVar4 = puVar12[3];
          puVar12 = puVar12 + 4;
          puVar15[2] = *puVar11;
          puVar15[3] = uVar4;
          *puVar15 = uVar2;
          puVar15[1] = uVar3;
          lVar10 = *(long *)(uVar8 + 0x98) + -1;
          *(long *)(uVar8 + 0x98) = lVar10;
          puVar11 = (undefined8 *)((long)puVar1 + (uVar5 & 0xffffffffffffffe0));
          puVar15 = puVar15 + 4;
        } while (lVar14 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar6;
      param_1[1] = (ulong)puVar1;
      uVar8 = param_1[3];
      param_1[2] = (ulong)puVar11;
      param_1[3] = uVar6 + uVar7 * 0x20;
      if (uVar5 != 0) {
        (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,uVar5,uVar8 - uVar5,8);
      }
    }
    else {
      lVar10 = (long)__src - (long)pvVar16 >> 5;
      lVar14 = lVar10 + 2;
      if (-2 < lVar10) {
        lVar14 = lVar10 + 1;
      }
      __n = uVar6 - (long)__src;
      pvVar16 = (void *)((long)__src + (lVar14 >> 1) * -0x20);
      if (__n != 0) {
        memmove(pvVar16,__src,__n);
        uVar6 = param_1[1];
      }
      param_1[1] = uVar6 + (lVar14 >> 1) * -0x20;
      param_1[2] = (long)pvVar16 + __n;
    }
  }
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) != 0x10) {
    puVar13 = (undefined8 *)param_1[2];
    *(undefined8 *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = *(undefined8 *)param_1[4];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    puVar13[2] = param_2[2];
    puVar13[3] = uVar4;
    *puVar13 = uVar2;
    puVar13[1] = uVar3;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    param_1[2] = param_1[2] + 0x20;
    return;
  }
LAB__text__002c97e4:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


