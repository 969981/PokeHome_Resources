/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005709b0; name: FUN_.text__005709b0
 */


void FUN__text__005709b0(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  float *pfVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_80;
  undefined8 local_78;
  uint local_6c;
  ulong local_68;
  
  bVar5 = *(byte *)(param_1 + 0x30);
  local_68 = (ulong)bVar5;
  fVar33 = *(float *)(*(long *)(param_1 + 0x18) + 8);
  fVar37 = *(float *)(*(long *)(param_1 + 0x18) + 0xc);
  fVar3 = *(float *)(param_1 + 0x40);
  uVar6 = *(ushort *)((long)param_2 + 0x12);
  pfVar28 = *(float **)(param_1 + 0x48);
  lVar17 = *(long *)(param_1 + 0x50);
  lVar8 = -((ulong)((uint)bVar5 * 4 + 0xf) & 0x7f0);
  lVar9 = lVar8 + -0x80;
  uVar19 = (ulong)*(ushort *)(param_2 + 2);
  lVar18 = lVar17 + (ulong)(*(int *)(param_1 + 0x58) * (uint)bVar5) * 4;
  fVar32 = *pfVar28;
  fVar34 = pfVar28[1];
  fVar35 = pfVar28[2];
  fVar22 = pfVar28[3];
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar21 = (ulong)uVar4;
  lVar30 = *param_2;
  local_80 = param_1;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    fVar39 = fVar3;
    if ((uint)uVar6 <= (uint)fVar3) {
      fVar39 = (float)(uint)uVar6;
    }
    if ((uVar4 != 0) && (fVar39 != 0.0)) {
      uVar23 = 0;
      pfVar14 = (float *)(lVar30 + 8);
      lVar16 = lVar30;
      do {
        if ((uint)fVar39 < 4) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          pfVar15 = pfVar14;
          fVar38 = fVar39;
          do {
            uVar24 = uVar24 + 4;
            fVar40 = fVar38;
            if (ABS(pfVar15[-2]) <= fVar34) {
              fVar40 = fVar22;
            }
            fVar22 = (float)((int)fVar38 - 1);
            if (ABS(pfVar15[-1]) <= ABS(pfVar15[-2])) {
              fVar22 = fVar40;
            }
            fVar34 = ABS(pfVar15[1]);
            fVar40 = (float)((int)fVar38 - 2);
            if (ABS(*pfVar15) <= ABS(pfVar15[-1])) {
              fVar40 = fVar22;
            }
            fVar22 = (float)((int)fVar38 - 3);
            fVar38 = (float)((int)fVar38 - 4);
            if (fVar34 <= ABS(*pfVar15)) {
              fVar22 = fVar40;
            }
            pfVar15 = pfVar15 + 4;
          } while (((ulong)(uint)fVar39 & 0xfffc) != uVar24);
        }
        if (((uint)fVar39 & 3) != 0) {
          fVar38 = (float)((int)fVar39 - (int)uVar24);
          lVar25 = uVar24 << 2;
          uVar24 = (ulong)(uint)fVar39 & 3;
          fVar40 = fVar34;
          fVar41 = fVar22;
          do {
            pfVar15 = (float *)(lVar16 + lVar25);
            lVar25 = lVar25 + 4;
            fVar34 = ABS(*pfVar15);
            fVar22 = fVar38;
            if (fVar34 <= fVar40) {
              fVar22 = fVar41;
            }
            fVar38 = (float)((int)fVar38 - 1);
            uVar24 = uVar24 - 1;
            fVar40 = fVar34;
            fVar41 = fVar22;
          } while (uVar24 != 0);
        }
        uVar23 = uVar23 + 1;
        pfVar14 = pfVar14 + uVar19;
        lVar16 = lVar16 + uVar19 * 4;
      } while (uVar23 != uVar4);
    }
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  lVar16 = lVar18;
  if (uVar6 != 0) {
    local_6c = (uint)uVar6;
    uVar24 = 0;
    local_78 = lVar17 + (ulong)((int)fVar3 * (uint)bVar5) * 4;
    fVar39 = (float)((uint)fVar34 & 0x7fffff | 0x3f800000);
    pfVar28 = (float *)(param_1 + 100);
    pfVar14 = (float *)(param_1 + 0x68);
    fVar38 = fVar39 + 1.0;
    fVar39 = ((float)((uint)fVar34 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
             (fVar39 * 1.1581186 * fVar39 * fVar39 + -1.1581186) / (fVar38 * fVar38 * fVar38)) *
             20.0 - fVar33;
    if (fVar39 <= 0.0) {
      fVar39 = 0.0;
    }
    do {
      uVar20 = (ulong)(local_6c - (int)uVar24);
      uVar31 = 0;
      if (local_68 != 0) {
        uVar31 = (local_78 - lVar18 >> 2) / (long)local_68;
      }
      if ((long)uVar20 <= (long)uVar31) {
        uVar31 = uVar20;
      }
      if ((int)uVar31 != 0) {
        do {
          lVar7 = uVar24 * 4;
          lVar17 = uVar19 * 4 + lVar7;
          lVar16 = uVar19 * 8 + lVar7;
          lVar25 = uVar19 * 0xc + lVar7;
          lVar26 = lVar30;
          if (uVar4 != 0) {
            if (uVar4 < 4) {
              lVar13 = 0;
            }
            else {
              lVar29 = 0;
              lVar13 = 0;
              do {
                puVar1 = (undefined4 *)(lVar18 + lVar29);
                puVar2 = (undefined4 *)((long)&local_80 + lVar29 + lVar9 + 0x80);
                lVar13 = lVar13 + -4;
                lVar29 = lVar29 + 0x10;
                *puVar2 = *puVar1;
                *puVar1 = *(undefined4 *)(lVar26 + lVar7);
                puVar2[1] = puVar1[1];
                puVar1[1] = *(undefined4 *)(lVar26 + lVar17);
                puVar2[2] = puVar1[2];
                puVar1[2] = *(undefined4 *)(lVar26 + lVar16);
                puVar2[3] = puVar1[3];
                fVar35 = *(float *)(lVar26 + lVar25);
                lVar26 = lVar26 + uVar19 * 0x10;
                puVar1[3] = fVar35;
                fVar35 = ABS(fVar35);
              } while (-lVar13 != (uVar21 & 0xfffffffc));
              lVar13 = -lVar13;
            }
            if ((uVar4 & 3) != 0) {
              lVar13 = lVar13 << 2;
              uVar20 = uVar21 & 3;
              do {
                uVar20 = uVar20 - 1;
                *(undefined4 *)((long)&local_80 + lVar13 + lVar9 + 0x80) =
                     *(undefined4 *)(lVar18 + lVar13);
                fVar35 = *(float *)(lVar26 + uVar24 * 4);
                lVar26 = lVar26 + uVar19 * 4;
                *(float *)(lVar18 + lVar13) = fVar35;
                fVar35 = ABS(fVar35);
                lVar13 = lVar13 + 4;
              } while (uVar20 != 0);
            }
          }
          lVar29 = uVar21 * 4;
          uVar36 = *(undefined4 *)(lVar18 + lVar29);
          *(undefined4 *)((long)&local_80 + lVar29 + lVar9 + 0x80) = uVar36;
          *(undefined4 *)(lVar18 + lVar29) = *(undefined4 *)(lVar26 + uVar24 * 4);
          *(undefined4 *)(lVar26 + uVar24 * 4) = uVar36;
          if ((fVar22 == 0.0) || (fVar34 < fVar35)) {
            fVar22 = (float)((uint)fVar35 & 0x7fffff | 0x3f800000);
            fVar34 = fVar22 + 1.0;
            fVar39 = ((float)((uint)fVar35 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                     (fVar22 * 1.1581186 * fVar22 * fVar22 + -1.1581186) /
                     (fVar34 * fVar34 * fVar34)) * 20.0 - fVar33;
            if (fVar39 <= 0.0) {
              fVar39 = 0.0;
            }
            fVar34 = fVar35;
            fVar22 = fVar3;
            fVar35 = 0.0;
          }
          else {
            fVar22 = (float)((int)fVar22 - 1);
          }
          pfVar15 = pfVar14;
          if (fVar39 - fVar32 < 0.0) {
            pfVar15 = pfVar28;
          }
          fVar32 = fVar39 + (fVar32 - fVar39) * *pfVar15;
          fVar38 = 0.0;
          fVar40 = fVar32 * (0.05 / fVar37 + -0.05);
          bVar10 = false;
          bVar11 = false;
          bVar12 = false;
          if (-37.0 <= fVar40) {
            bVar10 = false;
            bVar11 = false;
            bVar12 = true;
            if (!NAN(fVar40)) {
              bVar10 = fVar40 < 37.0;
              bVar11 = fVar40 == 37.0;
              bVar12 = false;
            }
          }
          if (bVar11 || bVar10 != bVar12) {
            uVar23 = (uint)(fVar40 * 27866352.0 + 1.0653532e+09);
            fVar38 = (float)(uVar23 & 0x7fffff | 0x3f800000);
            fVar38 = (fVar38 * (fVar38 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar23 & 0xff800000);
          }
          if (uVar4 != 0) {
            lVar26 = lVar30;
            if (uVar4 < 4) {
              lVar29 = 0;
            }
            else {
              lVar29 = 0;
              pfVar15 = (float *)((long)&local_78 + lVar8);
              do {
                fVar41 = pfVar15[-1];
                lVar29 = lVar29 + -4;
                *(float *)(lVar26 + lVar7) = pfVar15[-2] * fVar38;
                fVar40 = *pfVar15;
                fVar42 = pfVar15[1];
                *(float *)(lVar26 + lVar17) = fVar41 * fVar38;
                *(float *)(lVar26 + lVar16) = fVar40 * fVar38;
                *(float *)(lVar26 + lVar25) = fVar42 * fVar38;
                lVar26 = lVar26 + uVar19 * 0x10;
                pfVar15 = pfVar15 + 4;
              } while (-lVar29 != (uVar21 & 0xfffffffc));
              lVar29 = -lVar29;
            }
            if ((uVar4 & 3) != 0) {
              pfVar15 = (float *)(lVar26 + lVar7);
              uVar20 = uVar21 & 3;
              pfVar27 = (float *)((long)&local_80 + lVar29 * 4 + lVar9 + 0x80);
              do {
                uVar20 = uVar20 - 1;
                *pfVar15 = *pfVar27 * fVar38;
                pfVar15 = pfVar15 + uVar19;
                pfVar27 = pfVar27 + 1;
              } while (uVar20 != 0);
            }
          }
          uVar23 = (int)uVar31 - 1;
          uVar31 = (ulong)uVar23;
          lVar18 = lVar18 + (ulong)bVar5 * 4;
          uVar24 = (ulong)((int)uVar24 + 1);
        } while (uVar23 != 0);
        lVar17 = *(long *)(local_80 + 0x50);
        param_1 = local_80;
      }
      lVar16 = lVar17;
      if (lVar18 != local_78) {
        lVar16 = lVar18;
      }
      lVar18 = lVar16;
    } while ((uint)uVar24 < local_6c);
    pfVar28 = *(float **)(param_1 + 0x48);
  }
  *pfVar28 = fVar32;
  *(float *)(*(long *)(param_1 + 0x48) + 4) = fVar34;
  *(float *)(*(long *)(param_1 + 0x48) + 8) = fVar35;
  *(float *)(*(long *)(param_1 + 0x48) + 0xc) = fVar22;
  uVar4 = 0;
  if ((uint)local_68 != 0) {
    uVar4 = (uint)((ulong)(lVar16 - *(long *)(param_1 + 0x50)) >> 2) / (uint)local_68;
  }
  *(uint *)(param_1 + 0x58) = uVar4;
  return;
}


