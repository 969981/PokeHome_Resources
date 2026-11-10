/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a2890; name: FUN_.text__006a2890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a2890(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  void *pvVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  puVar8 = _DAT_008a6970;
  puVar7 = _DAT_008a6960;
  if (param_2 != 0) {
    uVar5 = *(uint *)(param_2 + 0x48);
    uVar6 = *(uint *)(param_2 + 0x60);
    uVar1 = uVar6 + uVar5;
    if (uVar1 != 0) {
      puVar9 = *(uint **)(param_1 + 0x58);
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)(*(code *)*_DAT_008a6960)(0x10,4,*_DAT_008a6970);
        if (puVar9 != (uint *)0x0) {
          puVar9[0] = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
        }
        *(uint **)(param_1 + 0x58) = puVar9;
        lVar11 = *(long *)(puVar9 + 2);
      }
      else {
        lVar11 = *(long *)(puVar9 + 2);
      }
      if (lVar11 == 0) {
        *puVar9 = uVar5;
        *(uint *)(*(long *)(param_1 + 0x58) + 4) = uVar6;
        pvVar10 = (void *)(*(code *)*puVar7)(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                             (ulong)uVar1 << 3,4,*puVar8);
        if ((0 < (int)uVar1) && (pvVar10 != (void *)0x0)) {
          memset(pvVar10,0,(ulong)uVar1 << 3);
        }
        lVar11 = 0;
        *(void **)(*(long *)(param_1 + 0x58) + 8) = pvVar10;
        uVar1 = uVar6;
      }
      else {
        uVar3 = *puVar9;
        iVar2 = puVar9[1] + uVar6;
        uVar1 = iVar2 + uVar3 + uVar5;
        pvVar10 = (void *)(*(code *)*puVar7)(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                             (ulong)uVar1 << 3,4,*puVar8);
        if ((0 < (int)uVar1) && (pvVar10 != (void *)0x0)) {
          memset(pvVar10,0,(ulong)uVar1 << 3);
        }
        memcpy(pvVar10,*(void **)(*(long *)(param_1 + 0x58) + 8),
               (long)*(int *)(*(long *)(param_1 + 0x58) + 4) << 3);
        piVar12 = *(int **)(param_1 + 0x58);
        memcpy((void *)((long)pvVar10 + (long)iVar2 * 8),
               (void *)(*(long *)(piVar12 + 2) + (long)piVar12[1] * 8),(long)*piVar12 << 3);
        piVar12 = *(int **)(param_1 + 0x58);
        if (*(long *)(piVar12 + 2) != 0) {
          (*(code *)*_DAT_008a6968)(*(long *)(piVar12 + 2),*puVar8);
          piVar12 = *(int **)(param_1 + 0x58);
        }
        iVar4 = *piVar12;
        *piVar12 = uVar3 + uVar5;
        lVar11 = (long)piVar12[1];
        *(int *)(*(long *)(param_1 + 0x58) + 4) = iVar2;
        *(void **)(*(long *)(param_1 + 0x58) + 8) = pvVar10;
        uVar1 = iVar4 + iVar2;
      }
      if (0 < (int)uVar5) {
        uVar13 = 0;
        do {
          lVar14 = *(long *)(param_2 + 0x40);
          if (uVar13 != 0) {
            if (7 < uVar13) {
              uVar15 = uVar13 & 0xfffffffffffffff8;
              do {
                uVar15 = uVar15 - 8;
                lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar14 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                  + 8);
              } while (uVar15 != 0);
            }
            for (uVar15 = uVar13 & 7; uVar15 != 0; uVar15 = uVar15 - 1) {
              lVar14 = *(long *)(lVar14 + 8);
            }
          }
          lVar17 = uVar13 + (long)(int)uVar1;
          uVar13 = uVar13 + 1;
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar17 * 8) =
               *(undefined8 *)(lVar14 + -0x20);
        } while (uVar13 != uVar5);
      }
      if (0 < (int)uVar6) {
        uVar13 = 0;
        lVar14 = 1;
        do {
          lVar17 = *(long *)(param_2 + 0x58);
          if (lVar17 != param_2 + 0x50) {
            lVar18 = lVar14;
            do {
              lVar18 = lVar18 + -1;
              if (lVar18 == 0) {
                uVar16 = *(undefined8 *)(lVar17 + -8);
                goto LAB__text__006a2af4;
              }
              lVar17 = *(long *)(lVar17 + 8);
            } while (lVar17 != param_2 + 0x50);
          }
          uVar16 = 0;
LAB__text__006a2af4:
          lVar17 = uVar13 + lVar11;
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 1;
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar17 * 8) = uVar16;
        } while (uVar13 != uVar6);
      }
      piVar12 = *(int **)(param_1 + 0x58);
      qsort((void *)(*(long *)(piVar12 + 2) + (long)piVar12[1] * 8),(long)*piVar12,8,
            (__compar_fn_t)&LAB__text__006a2c40);
      return;
    }
  }
  return;
}


