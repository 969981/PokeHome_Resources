/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cfbbc; name: FUN_.text__006cfbbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006cfbbc(long param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  void *pvVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ushort *puVar21;
  ulong uVar22;
  
  puVar10 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 **)(*(long *)(param_1 + 0x88) + 0x10) = puVar10 + 6;
  *(undefined8 **)(param_1 + 0x20) = puVar10;
  uVar8 = uRam0000000000724ba8;
  uVar7 = _DAT_00724ba0;
  uVar6 = _DAT_00724920;
  puVar10[1] = uRam0000000000724928;
  *puVar10 = uVar6;
  puVar10[3] = uVar8;
  puVar10[2] = uVar7;
  uVar6 = _DAT_00724a00;
  puVar10[5] = uRam0000000000724a08;
  puVar10[4] = uVar6;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x28) + 0x91) >> 1 & 1) != 0)) {
    FUN__text__006ce150(param_1 + 0x40);
  }
  uVar20 = *(uint *)(param_1 + 0xc0);
  pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
  *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar17 + (long)(int)uVar20 * 0x30);
  if (0 < (int)uVar20 && pvVar17 != (void *)0x0) {
    memset(pvVar17,0,(ulong)uVar20 * 0x30);
  }
  *(void **)(param_1 + 0xa8) = pvVar17;
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar18 = 0;
    do {
      lVar19 = *(long *)(param_1 + 0xa0);
      puVar21 = (ushort *)(lVar19 + uVar18 * 0xa0);
      pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
      uVar2 = *puVar21;
      sVar9 = (ulong)uVar2 * 8;
      *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar17 + sVar9);
      if ((ulong)uVar2 != 0 && pvVar17 != (void *)0x0) {
        memset(pvVar17,0,sVar9);
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x18) = pvVar17;
      if (*puVar21 == 0) {
LAB__text__006cff04:
        pvVar17 = (void *)0x0;
        uVar20 = 0;
      }
      else {
        uVar22 = 0;
        do {
          bVar1 = **(byte **)(*(long *)(lVar19 + uVar18 * 0xa0 + 8) + uVar22 * 8);
          if (bVar1 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006cfd80 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__006cfd8c + (ulong)*(byte *)((ulong)bVar1 + 0x7666c6) * 4))();
            return;
          }
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x18) + uVar22 * 8)
               = 0;
          uVar22 = uVar22 + 1;
          uVar2 = *puVar21;
        } while (uVar22 < uVar2);
        if (uVar2 == 0) goto LAB__text__006cff04;
        lVar12 = lVar19 + uVar18 * 0xa0;
        uVar22 = 0;
        uVar20 = 0;
        uVar3 = *(ushort *)(lVar12 + 0x10);
        do {
          uVar4 = *(ushort *)(*(long *)(*(long *)(lVar12 + 8) + uVar22 * 8) + 2);
          uVar13 = (ulong)uVar4;
          if ((uint)uVar4 < (uint)uVar3) {
            uVar5 = (uint)uVar3 - (uint)uVar4;
            uVar16 = (ulong)uVar5 & 3;
            uVar15 = uVar13;
            if ((uVar5 & 3) != 0) {
              do {
                lVar14 = uVar15 * 8;
                uVar15 = uVar15 + 1;
                if (**(byte **)(*(long *)(lVar12 + 0x18) + lVar14) < 2) {
                  uVar20 = uVar20 + 1;
                }
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            if (2 < ~uVar13 + (ulong)uVar3) {
              lVar14 = uVar3 - uVar15;
              puVar10 = (undefined8 *)(*(long *)(lVar12 + 0x18) + 0x10 + uVar15 * 8);
              do {
                if (*(byte *)puVar10[-2] < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)puVar10[-1] < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)*puVar10 < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)puVar10[1] < 2) {
                  uVar20 = uVar20 + 1;
                }
                lVar14 = lVar14 + -4;
                puVar10 = puVar10 + 4;
              } while (lVar14 != 0);
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar2);
        if (uVar20 == 0) {
          pvVar17 = (void *)0x0;
        }
        else {
          pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
          *(void **)(*(long *)(param_1 + 0x88) + 0x10) =
               (void *)((long)pvVar17 + (long)(int)uVar20 * 0x18);
          if ((0 < (int)uVar20) && (pvVar17 != (void *)0x0)) {
            memset(pvVar17,0,(ulong)uVar20 * 0x18);
          }
        }
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x28) = pvVar17;
      *(uint *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x20) = uVar20;
      puVar21 = (ushort *)(lVar19 + uVar18 * 0xa0 + 0x10);
      if ((ulong)*puVar21 == 0) {
        pvVar17 = (void *)0x0;
      }
      else {
        sVar9 = (ulong)*puVar21 * 8;
        pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
        *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar17 + sVar9);
        if (pvVar17 != (void *)0x0) {
          memset(pvVar17,0,sVar9);
        }
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 8) = pvVar17;
      uVar2 = *puVar21;
      pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
      sVar9 = (ulong)uVar2 * 0x10;
      *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar17 + sVar9);
      if (((ulong)uVar2 != 0) && (pvVar17 != (void *)0x0)) {
        memset(pvVar17,0,sVar9);
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x10) = pvVar17;
      if (*puVar21 != 0) {
        uVar22 = 0;
        lVar19 = 8;
        do {
          pcVar11 = *(char **)(*(long *)(*(long *)(param_1 + 0xa0) + uVar18 * 0xa0 + 0x18) +
                              uVar22 * 8);
          uVar22 = uVar22 + 1;
          if (*pcVar11 != '\x01') {
            pcVar11 = (char *)0x0;
          }
          *(char **)(*(long *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x10) + lVar19) = pcVar11
          ;
          lVar19 = lVar19 + 0x10;
        } while (uVar22 < *puVar21);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(param_1 + 0xc0));
  }
  return;
}


