/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00466110; name: FUN_.text__00466110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00466110(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ushort *puVar13;
  ushort *puVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  ulong uVar20;
  float *pfVar21;
  ushort *puVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_88;
  undefined1 local_84;
  byte local_83;
  undefined4 local_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  char local_64 [4];
  
  uVar10 = *(uint *)(param_1 + 0xd2);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  local_88 = 0;
  local_84 = 1;
  local_83 = (byte)(uVar10 >> 0x11) & 1;
  pbVar11 = *(byte **)(param_1 + 0x90);
  if (pbVar11 == (byte *)0x0) {
    pbVar18 = (byte *)0x0;
    pfVar21 = (float *)0x0;
  }
  else {
    pbVar18 = pbVar11 + 1;
    pfVar21 = (float *)(pbVar11 + ((ulong)*pbVar11 & 0xfc) + 4);
  }
  lVar1 = param_2 + 0xb0;
  lVar19 = _DAT_008a4a70;
  piVar15 = _DAT_008a45a8;
  local_80 = uVar2;
  while( true ) {
    pbVar12 = (byte *)0x0;
    if (pbVar11 != (byte *)0x0) {
      pbVar12 = pbVar11 + (ulong)*pbVar11 + 1;
    }
    if (pbVar18 == pbVar12) break;
    bVar6 = *pbVar18;
    if (bVar6 < 0x4a) {
      uVar17 = (ulong)(bVar6 >> 6);
      uVar23 = 1L << ((ulong)bVar6 & 0x3f);
      if ((*(ulong *)(param_2 + 0x90 + uVar17 * 8) & uVar23) != 0) {
        uVar4 = *(uint *)(lVar19 + (ulong)bVar6 * 4);
        uVar20 = (ulong)uVar4;
        if (uVar4 != 0x1a) {
          fVar26 = *pfVar21;
          if ((*piVar15 == 1) && ((*(ulong *)(param_2 + 0xa0 + uVar17 * 8) & uVar23) != 0)) {
            if (fVar26 != 0.0) {
              local_7c = (uVar10 >> 0x11 & 1) << 0x10 | (uint)bVar6 | 0x100;
              local_64[0] = '\0';
              uStack_78 = 0;
              local_74 = uVar2;
              lVar7 = FUN__text__004626a0(param_2 + 0x68,&local_7c,local_64);
              lVar19 = _DAT_008a4a70;
              piVar15 = _DAT_008a45a8;
              if (lVar7 == 0) {
                fVar26 = 0.0;
                fVar24 = 0.0;
                uVar17 = *(ulong *)(lVar1 + uVar17 * 8);
              }
              else {
                if (local_64[0] == '\0') {
                  fVar24 = 0.0;
                }
                else {
                  fVar24 = *(float *)(lVar7 + 0xc);
                }
                fVar26 = fVar24 + fVar26;
                *(float *)(lVar7 + 0xc) = fVar26;
                uVar17 = *(ulong *)(lVar1 + uVar17 * 8);
              }
              if (((uVar17 & uVar23) != 0) ||
                 ((fVar25 = *(float *)(param_2 + uVar20 * 4), fVar24 == fVar25 && (fVar26 < fVar25))
                 )) {
                *(ushort *)(param_2 + 0xc2) = *(ushort *)(param_2 + 0xc2) | 0x400;
              }
              else if (fVar25 < fVar26) {
                *(float *)(param_2 + uVar20 * 4) = fVar26;
              }
            }
          }
          else {
            *(float *)(param_2 + uVar20 * 4) = *(float *)(param_2 + uVar20 * 4) + fVar26;
          }
        }
      }
    }
    pbVar11 = *(byte **)(param_1 + 0x90);
    pbVar18 = pbVar18 + 1;
    pfVar21 = pfVar21 + 1;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN__text__00465cd0(param_3,param_1 + 0x48,&local_88,param_2);
  }
  if (((*(char *)(param_1 + 0x30) != '\0') &&
      (plVar8 = (long *)(**(code **)(*(long *)(param_1 + 0x28) + 0x80))((long *)(param_1 + 0x28)),
      uVar2 = local_80, plVar8 != (long *)0x0)) && (lVar19 = *plVar8, lVar19 != 0)) {
    uVar10 = (uint)local_83;
    lVar7 = _DAT_008a4a70;
    piVar15 = _DAT_008a45a8;
    lVar16 = _DAT_008a4ad0;
    do {
      puVar13 = *(ushort **)(lVar19 + 0x20);
      if (puVar13 == (ushort *)0x0) {
        pfVar21 = (float *)0x0;
        puVar22 = (ushort *)0x0;
      }
      else {
        puVar22 = puVar13 + 1;
        pfVar21 = (float *)((long)puVar13 + ((ulong)((uint)*puVar13 * 2 + 9) & 0x3fff8));
      }
      uVar3 = *(undefined4 *)(lVar19 + 0x38);
      while( true ) {
        puVar14 = (ushort *)0x0;
        if (puVar13 != (ushort *)0x0) {
          puVar14 = puVar13 + (ulong)*puVar13 + 1;
        }
        if (puVar22 == puVar14) break;
        if ((0xfffbffc018e78ffU >> ((ulong)*puVar22 & 0x3f) & 1) != 0) {
          uVar4 = *(uint *)(lVar16 + (ulong)*puVar22 * 4);
          uVar23 = (ulong)(uVar4 >> 6);
          uVar17 = 1L << ((ulong)uVar4 & 0x3f);
          if (((*(ulong *)(param_2 + 0x90 + uVar23 * 8) & uVar17) != 0) &&
             (uVar5 = *(uint *)(lVar7 + (ulong)uVar4 * 4), uVar20 = (ulong)uVar5, uVar5 != 0x1a)) {
            fVar26 = *pfVar21;
            if ((*piVar15 == 1) && ((*(ulong *)(param_2 + 0xa0 + uVar23 * 8) & uVar17) != 0)) {
              if (fVar26 != 0.0) {
                local_64[0] = '\0';
                local_7c = uVar10 << 0x10 | uVar4 & 0xff | 0x300;
                local_74 = uVar2;
                uStack_78 = uVar3;
                lVar9 = FUN__text__004626a0(param_2 + 0x68,&local_7c,local_64);
                lVar16 = _DAT_008a4ad0;
                lVar7 = _DAT_008a4a70;
                piVar15 = _DAT_008a45a8;
                if (lVar9 == 0) {
                  fVar26 = 0.0;
                  fVar24 = 0.0;
                  uVar23 = *(ulong *)(lVar1 + uVar23 * 8);
                }
                else {
                  if (local_64[0] == '\0') {
                    fVar24 = 0.0;
                  }
                  else {
                    fVar24 = *(float *)(lVar9 + 0xc);
                  }
                  fVar26 = fVar24 + fVar26;
                  *(float *)(lVar9 + 0xc) = fVar26;
                  uVar23 = *(ulong *)(lVar1 + uVar23 * 8);
                }
                if (((uVar23 & uVar17) != 0) ||
                   ((fVar25 = *(float *)(param_2 + uVar20 * 4), fVar24 == fVar25 &&
                    (fVar26 < fVar25)))) {
                  *(ushort *)(param_2 + 0xc2) = *(ushort *)(param_2 + 0xc2) | 0x400;
                }
                else if (fVar25 < fVar26) {
                  *(float *)(param_2 + uVar20 * 4) = fVar26;
                }
              }
            }
            else {
              *(float *)(param_2 + uVar20 * 4) = *(float *)(param_2 + uVar20 * 4) + fVar26;
            }
          }
        }
        puVar13 = *(ushort **)(lVar19 + 0x20);
        puVar22 = puVar22 + 1;
        pfVar21 = pfVar21 + 4;
      }
      lVar19 = *(long *)(lVar19 + 0x10);
    } while (lVar19 != 0);
  }
  return;
}


