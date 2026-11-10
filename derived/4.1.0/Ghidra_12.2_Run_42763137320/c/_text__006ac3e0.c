/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ac3e0; name: FUN_.text__006ac3e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ac3e0(long param_1,long param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ushort uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  ulong local_80;
  char local_64 [4];
  
  puVar10 = _DAT_008a6a08;
  puVar9 = _DAT_008a6a00;
  puVar8 = _DAT_008a68a0;
  uVar3 = *(uint *)(param_1 + 0x14) & 3;
  if (uVar3 != 0) {
    local_80 = 0;
    uVar20 = 0;
    lVar21 = *(long *)(param_2 + 0x18);
    lVar19 = *(long *)(param_1 + 0x18);
    do {
      puVar1 = (ushort *)(lVar21 + uVar20 * 0x10);
      plVar23 = *(long **)(puVar1 + 4);
      if (((*_DAT_008a6a10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(_DAT_008a6a10), iVar11 != 0))
      {
        if (((*_DAT_008a3710 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(_DAT_008a3710), iVar11 != 0)) {
          *_DAT_008a3718 = 0;
          __cxa_guard_release(_DAT_008a3710);
        }
        *puVar10 = _DAT_008a3718;
        __cxa_guard_release(_DAT_008a6a10);
      }
      if (plVar23 == (long *)0x0) {
LAB__text__006ac4f0:
        lVar13 = (**(code **)(*plVar23 + 0x48))(plVar23);
        if (lVar13 != 0) {
          puVar12 = (undefined8 *)(**(code **)(*plVar23 + 0x48))(plVar23);
          if (((*_DAT_008a6898 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(_DAT_008a6898), iVar11 != 0)) {
            if (((*_DAT_008a68a8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(_DAT_008a68a8), iVar11 != 0)) {
              *_DAT_008a68b0 = 0;
              __cxa_guard_release(_DAT_008a68a8);
            }
            *puVar8 = _DAT_008a68b0;
            __cxa_guard_release(_DAT_008a6898);
          }
          if (puVar12 == (undefined8 *)0x0) {
LAB__text__006ac558:
            puVar12 = (undefined8 *)0x0;
          }
          else {
            puVar14 = (undefined8 *)(**(code **)*puVar12)(puVar12);
            if (puVar14 != puVar8) {
              do {
                puVar14 = (undefined8 *)*puVar14;
              } while (puVar14 != puVar8 && puVar14 != (undefined8 *)0x0);
              if (puVar14 == (undefined8 *)0x0) goto LAB__text__006ac558;
            }
          }
          puVar14 = (undefined8 *)(**(code **)(*plVar23 + 0x48))(plVar23);
          if (((*_DAT_008a69f8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(_DAT_008a69f8), iVar11 != 0)) {
            if (((*_DAT_008a68a8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(_DAT_008a68a8), iVar11 != 0)) {
              *_DAT_008a68b0 = 0;
              __cxa_guard_release(_DAT_008a68a8);
            }
            *puVar9 = _DAT_008a68b0;
            __cxa_guard_release(_DAT_008a69f8);
          }
          if (puVar14 == (undefined8 *)0x0) {
LAB__text__006ac5b8:
            puVar14 = (undefined8 *)0x0;
LAB__text__006ac5bc:
            uVar16 = FUN__text__006a4e20(param_3[3],*puVar1 >> 9 & 7);
            if (puVar12 != (undefined8 *)0x0) goto LAB__text__006ac5d4;
LAB__text__006ac610:
            local_64[0] = '\0';
            lVar13 = FUN__text__006a4aa4(uVar16,*param_3,param_3[2],puVar14);
            uVar5 = *(uint *)(param_1 + 0x10);
            uVar6 = *(uint *)(param_2 + 0x10);
            uVar18 = local_80 & 0xff;
            local_80 = (ulong)((int)local_80 + 1);
            lVar22 = uVar18 * 0x20;
            puVar12 = (undefined8 *)
                      (*(long *)(param_2 + 0x18) + lVar22 +
                      (((ulong)uVar6 & 3) * 0x10 + ((ulong)uVar6 & 0x30) | (ulong)(uVar6 >> 6) & 8)
                      + ((ulong)(uVar6 >> 8) & 0xc) + ((ulong)(uVar6 >> 4) & 0x1c) +
                      ((ulong)(uVar6 >> 0xc) & 8) + (ulong)(-(uVar6 >> 0xc & 1) & 0xc) +
                      (ulong)(-(uVar6 >> 0x10 & 1) & 0x1c) +
                      ((ulong)(uVar6 >> 0xc) & 0x10) * ((ulong)(uVar6 >> 6) & 7) +
                      (ulong)((int)(uVar6 << 0xe) >> 0x1f & 0x74) +
                      (((ulong)(uVar6 >> 0xd) & 3) + ((ulong)(uVar6 >> 2) & 3)) * 0x14);
            puVar14 = (undefined8 *)
                      (*(long *)(param_1 + 0x18) + lVar22 +
                      (((ulong)uVar5 & 3) * 0x10 + ((ulong)uVar5 & 0x30) | (ulong)(uVar5 >> 6) & 8)
                      + ((ulong)(uVar5 >> 8) & 0xc) + ((ulong)(uVar5 >> 4) & 0x1c) +
                      ((ulong)(uVar5 >> 0xc) & 8) + (ulong)(-(uVar5 >> 0xc & 1) & 0xc) +
                      (ulong)(-(uVar5 >> 0x10 & 1) & 0x1c) +
                      ((ulong)(uVar5 >> 0xc) & 0x10) * ((ulong)(uVar5 >> 6) & 7) +
                      (ulong)((int)(uVar5 << 0xe) >> 0x1f & 0x74) +
                      (((ulong)(uVar5 >> 0xd) & 3) + ((ulong)(uVar5 >> 2) & 3)) * 0x14);
            uVar16 = puVar12[1];
            uVar4 = puVar12[2];
            *puVar14 = *puVar12;
            puVar14[1] = uVar16;
            puVar14[2] = uVar4;
            puVar14[3] = lVar13;
            uVar16 = *(undefined8 *)((long)puVar14 + 0xc);
            *(undefined8 *)(lVar13 + 0x140) = *(undefined8 *)((long)puVar14 + 4);
            *(undefined8 *)(lVar13 + 0x148) = uVar16;
            uVar17 = 0x100;
          }
          else {
            puVar15 = (undefined8 *)(**(code **)*puVar14)(puVar14);
            if (puVar15 != puVar9) {
              do {
                puVar15 = (undefined8 *)*puVar15;
              } while (puVar15 != puVar9 && puVar15 != (undefined8 *)0x0);
              if (puVar15 == (undefined8 *)0x0) goto LAB__text__006ac5b8;
              goto LAB__text__006ac5bc;
            }
            uVar16 = FUN__text__006a4e20(param_3[3],*puVar1 >> 9 & 7);
            if (puVar12 == (undefined8 *)0x0) goto LAB__text__006ac610;
LAB__text__006ac5d4:
            local_64[0] = '\0';
            lVar13 = FUN__text__006a4900(uVar16,local_64,puVar12);
            uVar17 = (ushort)(local_64[0] != '\0') << 8;
          }
          puVar2 = (ushort *)(lVar19 + uVar20 * 0x10);
          uVar7 = *puVar2;
          *puVar2 = uVar7 & 0xfeff | uVar17;
          *puVar2 = uVar7 & 0xf0ff | uVar17 | *puVar1 & 0xe00;
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar13 + 8);
        }
      }
      else {
        puVar12 = (undefined8 *)(**(code **)*plVar23)(plVar23);
        if (puVar12 != puVar10) {
          do {
            puVar12 = (undefined8 *)*puVar12;
          } while (puVar12 != puVar10 && puVar12 != (undefined8 *)0x0);
          if (puVar12 == (undefined8 *)0x0) goto LAB__text__006ac4f0;
        }
        *(ushort *)(lVar19 + uVar20 * 0x10) = *(ushort *)(lVar19 + uVar20 * 0x10) & 0xe0ff | 0x1000;
        lVar22 = plVar23[2];
        lVar13 = FUN__text__006a0ee8(0x18,0x10);
        if (lVar13 != 0) {
          FUN__text__006c09a8(lVar13,lVar22);
        }
        *(long *)(lVar19 + uVar20 * 0x10 + 8) = lVar13;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar3);
  }
  return;
}


