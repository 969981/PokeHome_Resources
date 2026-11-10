/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ff320; name: FUN_.text__003ff320
 */


long * FUN__text__003ff320(long param_1,uint param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 *puVar15;
  
  if (0 < (int)*(uint *)(param_1 + 0x318)) {
    uVar10 = 0;
    plVar11 = (long *)(param_1 + 0x10);
    do {
      if ((param_2 <= (uint)(1 << (ulong)(*(int *)(param_1 + 0x314) + (int)uVar10 & 0x1f))) &&
         (plVar9 = (long *)*plVar11, plVar9 != (long *)0x0)) {
        lVar12 = *plVar9;
        if (lVar12 == 0) {
          plVar11[-1] = 0;
        }
        *plVar11 = lVar12;
        *plVar9 = 0;
        *(int *)(plVar11 + -2) = (int)plVar11[-2] + -1;
        if ((int)uVar10 == 0) {
          return plVar9;
        }
        iVar5 = *(int *)(param_1 + 0x300);
        do {
          uVar13 = uVar10 - 1;
          uVar6 = *(int *)(param_1 + 0x30c) - param_2;
          uVar3 = *(int *)(param_1 + 0x314) + (int)uVar13;
          if ((uVar6 >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
            puVar4 = (undefined8 *)
                     (*(long *)(param_1 + 0x300) +
                     (ulong)((*(int *)(param_1 + 0x30c) + ((int)plVar9 - iVar5)) -
                            (-1 << (ulong)(uVar3 & 0x1f) & uVar6)));
            if (*(long *)(param_1 + 0x300) != 0) {
              *puVar4 = 0;
            }
            puVar2 = (undefined8 *)(param_1 + (uVar13 & 0xffffffff) * 0x18 + 0x10);
            puVar7 = (undefined8 *)0x0;
            puVar15 = puVar2;
            do {
              puVar8 = puVar7;
              puVar15 = (undefined8 *)*puVar15;
              puVar7 = puVar15;
            } while (puVar15 != (undefined8 *)0x0 && puVar15 < puVar4);
            piVar14 = (int *)(param_1 + (uVar13 & 0xffffffff) * 0x18);
            *puVar4 = puVar15;
            if (puVar8 != (undefined8 *)0x0) {
              puVar2 = puVar8;
            }
            *puVar2 = puVar4;
            if (puVar15 == (undefined8 *)0x0) {
              *(undefined8 **)(piVar14 + 2) = puVar4;
            }
            *piVar14 = *piVar14 + 1;
          }
          bVar1 = 1 < (long)uVar10;
          uVar10 = uVar13;
        } while (bVar1);
        return plVar9;
      }
      uVar10 = uVar10 + 1;
      plVar11 = plVar11 + 3;
    } while (*(uint *)(param_1 + 0x318) != uVar10);
  }
  return (long *)0x0;
}


