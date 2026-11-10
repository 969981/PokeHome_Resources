/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005703c0; name: FUN_.text__005703c0
 */


void FUN__text__005703c0(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  float fVar26;
  float *pfVar27;
  long lVar28;
  float *pfVar29;
  long lVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float afStack_80 [2];
  undefined8 local_78;
  float local_6c;
  long local_68;
  
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar19 = (ulong)bVar4;
  fVar3 = *(float *)(param_1 + 0x40);
  pfVar27 = *(float **)(param_1 + 0x48);
  lVar31 = *(long *)(param_1 + 0x50);
  fVar33 = *(float *)(*(long *)(param_1 + 0x18) + 8);
  fVar36 = *(float *)(*(long *)(param_1 + 0x18) + 0xc);
  fVar32 = *pfVar27;
  fVar34 = pfVar27[1];
  lVar20 = lVar31 + (ulong)(*(int *)(param_1 + 0x58) * (uint)bVar4) * 4;
  fVar35 = pfVar27[2];
  lVar7 = -((ulong)((uint)bVar4 * 4 + 0xf) & 0x7f0);
  lVar8 = lVar7 + -0x80;
  uVar5 = *(ushort *)((long)param_2 + 0x12);
  uVar21 = (ulong)*(ushort *)(param_2 + 2);
  fVar26 = pfVar27[3];
  lVar30 = *param_2;
  local_68 = param_1;
  local_6c = (float)(uint)uVar5;
  uVar18 = (uint)bVar4;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    fVar39 = fVar3;
    if ((uint)uVar5 <= (uint)fVar3) {
      fVar39 = (float)(uint)uVar5;
    }
    if ((uVar18 != 0) && (fVar39 != 0.0)) {
      uVar24 = 0;
      pfVar12 = (float *)(lVar30 + 8);
      lVar15 = lVar30;
      do {
        if ((uint)fVar39 < 4) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          pfVar14 = pfVar12;
          fVar38 = fVar39;
          do {
            uVar16 = uVar16 + 4;
            fVar37 = fVar38;
            if (ABS(pfVar14[-2]) <= fVar34) {
              fVar37 = fVar26;
            }
            fVar26 = (float)((int)fVar38 - 1);
            if (ABS(pfVar14[-1]) <= ABS(pfVar14[-2])) {
              fVar26 = fVar37;
            }
            fVar34 = ABS(pfVar14[1]);
            fVar37 = (float)((int)fVar38 - 2);
            if (ABS(*pfVar14) <= ABS(pfVar14[-1])) {
              fVar37 = fVar26;
            }
            fVar26 = (float)((int)fVar38 - 3);
            fVar38 = (float)((int)fVar38 - 4);
            if (fVar34 <= ABS(*pfVar14)) {
              fVar26 = fVar37;
            }
            pfVar14 = pfVar14 + 4;
          } while (((ulong)(uint)fVar39 & 0xfffc) != uVar16);
        }
        if (((uint)fVar39 & 3) != 0) {
          fVar38 = (float)((int)fVar39 - (int)uVar16);
          lVar17 = uVar16 << 2;
          uVar16 = (ulong)(uint)fVar39 & 3;
          fVar37 = fVar34;
          fVar40 = fVar26;
          do {
            pfVar14 = (float *)(lVar15 + lVar17);
            lVar17 = lVar17 + 4;
            fVar34 = ABS(*pfVar14);
            fVar26 = fVar38;
            if (fVar34 <= fVar37) {
              fVar26 = fVar40;
            }
            fVar38 = (float)((int)fVar38 - 1);
            uVar16 = uVar16 - 1;
            fVar37 = fVar34;
            fVar40 = fVar26;
          } while (uVar16 != 0);
        }
        uVar24 = uVar24 + 1;
        pfVar12 = pfVar12 + uVar21;
        lVar15 = lVar15 + uVar21 * 4;
      } while (uVar24 != uVar18);
    }
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  fVar39 = (float)(uint)uVar5;
  lVar15 = lVar20;
  if (fVar39 != 0.0) {
    uVar16 = 0;
    lVar17 = lVar31 + (ulong)((int)fVar3 * uVar18) * 4;
    local_78 = lVar17;
    fVar38 = (float)((uint)fVar34 & 0x7fffff | 0x3f800000);
    pfVar27 = (float *)(param_1 + 100);
    pfVar12 = (float *)(param_1 + 0x68);
    fVar37 = fVar38 + 1.0;
    fVar38 = ((float)((uint)fVar34 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
             (fVar38 * 1.1581186 * fVar38 * fVar38 + -1.1581186) / (fVar37 * fVar37 * fVar37)) *
             20.0 - fVar33;
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
    do {
      uVar22 = (ulong)(uint)((int)fVar39 - (int)uVar16);
      uVar23 = 0;
      if (uVar19 != 0) {
        uVar23 = (lVar17 - lVar20 >> 2) / (long)uVar19;
      }
      if ((long)uVar22 <= (long)uVar23) {
        uVar23 = uVar22;
      }
      if ((int)uVar23 != 0) {
        do {
          lVar6 = uVar16 * 4;
          lVar31 = uVar21 * 4 + lVar6;
          lVar15 = uVar21 * 8 + lVar6;
          lVar17 = uVar21 * 0xc + lVar6;
          if (uVar18 != 0) {
            lVar25 = lVar30;
            if (uVar18 < 4) {
              lVar13 = 0;
            }
            else {
              lVar28 = 0;
              lVar13 = 0;
              do {
                puVar1 = (undefined4 *)(lVar20 + lVar28);
                puVar2 = (undefined4 *)((long)afStack_80 + lVar28 + lVar8 + 0x80);
                lVar13 = lVar13 + -4;
                lVar28 = lVar28 + 0x10;
                *puVar2 = *puVar1;
                *puVar1 = *(undefined4 *)(lVar25 + lVar6);
                puVar2[1] = puVar1[1];
                puVar1[1] = *(undefined4 *)(lVar25 + lVar31);
                puVar2[2] = puVar1[2];
                puVar1[2] = *(undefined4 *)(lVar25 + lVar15);
                puVar2[3] = puVar1[3];
                fVar35 = *(float *)(lVar25 + lVar17);
                lVar25 = lVar25 + uVar21 * 0x10;
                puVar1[3] = fVar35;
                fVar35 = ABS(fVar35);
              } while (-lVar13 != (uVar19 & 0xfc));
              lVar13 = -lVar13;
            }
            if ((bVar4 & 3) != 0) {
              lVar13 = lVar13 << 2;
              pfVar14 = (float *)(lVar25 + lVar6);
              uVar22 = uVar19 & 3;
              do {
                uVar22 = uVar22 - 1;
                *(undefined4 *)((long)afStack_80 + lVar13 + lVar8 + 0x80) =
                     *(undefined4 *)(lVar20 + lVar13);
                fVar35 = *pfVar14;
                pfVar14 = pfVar14 + uVar21;
                *(float *)(lVar20 + lVar13) = fVar35;
                fVar35 = ABS(fVar35);
                lVar13 = lVar13 + 4;
              } while (uVar22 != 0);
            }
          }
          if ((fVar26 == 0.0) || (fVar34 < fVar35)) {
            fVar26 = (float)((uint)fVar35 & 0x7fffff | 0x3f800000);
            fVar34 = fVar26 + 1.0;
            fVar38 = ((float)((uint)fVar35 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                     (fVar26 * 1.1581186 * fVar26 * fVar26 + -1.1581186) /
                     (fVar34 * fVar34 * fVar34)) * 20.0 - fVar33;
            if (fVar38 <= 0.0) {
              fVar38 = 0.0;
            }
            fVar34 = fVar35;
            fVar26 = fVar3;
            fVar35 = 0.0;
          }
          else {
            fVar26 = (float)((int)fVar26 - 1);
          }
          pfVar14 = pfVar12;
          if (fVar38 - fVar32 < 0.0) {
            pfVar14 = pfVar27;
          }
          fVar32 = fVar38 + (fVar32 - fVar38) * *pfVar14;
          fVar39 = 0.0;
          fVar37 = fVar32 * (0.05 / fVar36 + -0.05);
          bVar9 = false;
          bVar10 = false;
          bVar11 = false;
          if (-37.0 <= fVar37) {
            bVar9 = false;
            bVar10 = false;
            bVar11 = true;
            if (!NAN(fVar37)) {
              bVar9 = fVar37 < 37.0;
              bVar10 = fVar37 == 37.0;
              bVar11 = false;
            }
          }
          if (bVar10 || bVar9 != bVar11) {
            uVar24 = (uint)(fVar37 * 27866352.0 + 1.0653532e+09);
            fVar39 = (float)(uVar24 & 0x7fffff | 0x3f800000);
            fVar39 = (fVar39 * (fVar39 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar24 & 0xff800000);
          }
          if (uVar18 != 0) {
            lVar25 = lVar30;
            if (uVar18 < 4) {
              lVar28 = 0;
            }
            else {
              lVar28 = 0;
              pfVar14 = (float *)((long)afStack_80 + lVar7 + 8);
              do {
                fVar40 = pfVar14[-1];
                lVar28 = lVar28 + -4;
                *(float *)(lVar25 + lVar6) = pfVar14[-2] * fVar39;
                fVar37 = *pfVar14;
                fVar41 = pfVar14[1];
                *(float *)(lVar25 + lVar31) = fVar40 * fVar39;
                *(float *)(lVar25 + lVar15) = fVar37 * fVar39;
                *(float *)(lVar25 + lVar17) = fVar41 * fVar39;
                lVar25 = lVar25 + uVar21 * 0x10;
                pfVar14 = pfVar14 + 4;
              } while (-lVar28 != (uVar19 & 0xfc));
              lVar28 = -lVar28;
            }
            if ((bVar4 & 3) != 0) {
              pfVar14 = (float *)(lVar25 + lVar6);
              pfVar29 = (float *)((long)afStack_80 + lVar28 * 4 + lVar8 + 0x80);
              uVar22 = uVar19 & 3;
              do {
                uVar22 = uVar22 - 1;
                *pfVar14 = *pfVar29 * fVar39;
                pfVar14 = pfVar14 + uVar21;
                pfVar29 = pfVar29 + 1;
              } while (uVar22 != 0);
            }
          }
          uVar24 = (int)uVar23 - 1;
          uVar23 = (ulong)uVar24;
          lVar20 = lVar20 + uVar19 * 4;
          uVar16 = (ulong)((int)uVar16 + 1);
        } while (uVar24 != 0);
        lVar31 = *(long *)(local_68 + 0x50);
        param_1 = local_68;
        lVar17 = local_78;
        fVar39 = local_6c;
      }
      lVar15 = lVar31;
      if (lVar20 != lVar17) {
        lVar15 = lVar20;
      }
      lVar20 = lVar15;
    } while ((uint)(float)uVar16 < (uint)fVar39);
    pfVar27 = *(float **)(param_1 + 0x48);
  }
  *pfVar27 = fVar32;
  *(float *)(*(long *)(param_1 + 0x48) + 4) = fVar34;
  *(float *)(*(long *)(param_1 + 0x48) + 8) = fVar35;
  *(float *)(*(long *)(param_1 + 0x48) + 0xc) = fVar26;
  uVar24 = 0;
  if (uVar18 != 0) {
    uVar24 = (uint)((ulong)(lVar15 - *(long *)(param_1 + 0x50)) >> 2) / uVar18;
  }
  *(uint *)(param_1 + 0x58) = uVar24;
  return;
}


