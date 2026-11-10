/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00457b60; name: FUN_.text__00457b60
 */


void FUN__text__00457b60(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                        uint param_6,uint param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if (param_6 != 0) {
    uVar6 = (uint)*(byte *)(param_2 + 1);
    uVar4 = 0;
    do {
      pfVar16 = (float *)(param_3 + uVar4 * 8);
      puVar5 = *(undefined8 **)(param_5 + uVar4 * 8);
      fVar18 = *pfVar16;
      if ((uVar6 != 0) && (uVar3 = *(ushort *)(param_2 + 2), 3 < uVar3)) {
        fVar17 = pfVar16[1];
        uVar9 = 0;
        while( true ) {
          if (3 < uVar3) {
            puVar1 = (undefined8 *)(*param_2 + uVar3 * uVar9 * 4);
            puVar7 = puVar1;
            puVar13 = puVar5;
            do {
              uVar19 = *puVar13;
              puVar8 = puVar7 + 2;
              puVar7[1] = CONCAT44((fVar18 + (float)((ulong)puVar13[1] >> 0x20) * fVar17) *
                                   (float)((ulong)puVar7[1] >> 0x20),
                                   (fVar18 + (float)puVar13[1] * fVar17) * (float)puVar7[1]);
              *puVar7 = CONCAT44((fVar18 + (float)((ulong)uVar19 >> 0x20) * fVar17) *
                                 (float)((ulong)*puVar7 >> 0x20),
                                 (fVar18 + (float)uVar19 * fVar17) * (float)*puVar7);
              puVar7 = puVar8;
              puVar13 = puVar13 + 2;
            } while (puVar8 < puVar1 + (ulong)(uVar3 >> 2) * 2);
            uVar6 = (uint)*(byte *)(param_2 + 1);
          }
          uVar9 = uVar9 + 1;
          if (uVar6 <= uVar9) break;
          uVar3 = *(ushort *)(param_2 + 2);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_6);
  }
  if (param_7 != 0) {
    uVar4 = 0;
    do {
      pfVar16 = (float *)(param_4 + uVar4 * 8);
      bVar2 = *(byte *)(param_2 + 1);
      uVar10 = (ulong)bVar2;
      fVar18 = *pfVar16;
      fVar17 = pfVar16[1];
      uVar3 = *(ushort *)((long)param_2 + 0x12);
      uVar9 = (ulong)uVar3;
      if (fVar17 == fVar18) {
        if ((bVar2 != 0) && (fVar18 != 1.0)) {
          if (uVar3 < 4) {
            if (uVar3 != 0) {
              if (bVar2 == 1) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                do {
                  pfVar16 = (float *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
                  pfVar15 = pfVar16;
                  do {
                    pfVar14 = pfVar15 + 1;
                    *pfVar15 = *pfVar15 * fVar18;
                    pfVar15 = pfVar14;
                  } while (pfVar14 < pfVar16 + uVar9);
                  pfVar15 = (float *)(*param_2 + (uVar11 << 2 | 4) * (ulong)*(ushort *)(param_2 + 2)
                                     );
                  pfVar16 = pfVar15;
                  do {
                    pfVar14 = pfVar16 + 1;
                    *pfVar16 = *pfVar16 * fVar18;
                    pfVar16 = pfVar14;
                  } while (pfVar14 < pfVar15 + uVar9);
                  uVar11 = uVar11 + 2;
                } while (uVar11 != (uVar10 & 0xfe));
              }
              if ((bVar2 & 1) != 0) {
                pfVar16 = (float *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
                pfVar15 = pfVar16;
                do {
                  pfVar14 = pfVar15 + 1;
                  *pfVar15 = *pfVar15 * fVar18;
                  pfVar15 = pfVar14;
                } while (pfVar14 < pfVar16 + uVar9);
              }
            }
          }
          else {
            uVar11 = 0;
            do {
              pfVar16 = (float *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
              if ((int)(uVar9 & 0xfffc) == 0) {
                pfVar15 = pfVar16;
              }
              else {
                pfVar14 = pfVar16;
                do {
                  pfVar15 = pfVar14 + 4;
                  *(ulong *)(pfVar14 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) * fVar18,
                                (float)*(undefined8 *)(pfVar14 + 2) * fVar18);
                  *(ulong *)pfVar14 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * fVar18,
                                (float)*(undefined8 *)pfVar14 * fVar18);
                  pfVar14 = pfVar15;
                } while (pfVar15 < pfVar16 + (uVar9 & 0xfffc));
              }
              for (; pfVar15 < pfVar16 + uVar9; pfVar15 = pfVar15 + 1) {
                *pfVar15 = *pfVar15 * fVar18;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar10);
          }
        }
      }
      else if (bVar2 != 0) {
        fVar17 = fVar17 - fVar18;
        fVar20 = fVar17 / (float)uVar9;
        if (uVar3 < 4) {
          if (uVar3 != 0) {
            if (bVar2 == 1) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              do {
                pfVar16 = (float *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
                pfVar15 = pfVar16;
                fVar17 = fVar18;
                do {
                  fVar21 = *pfVar15 * fVar17;
                  fVar17 = fVar17 + fVar20;
                  pfVar14 = pfVar15 + 1;
                  *pfVar15 = fVar21;
                  pfVar15 = pfVar14;
                } while (pfVar14 < pfVar16 + uVar9);
                pfVar15 = (float *)(*param_2 + (uVar11 << 2 | 4) * (ulong)*(ushort *)(param_2 + 2));
                pfVar16 = pfVar15;
                fVar17 = fVar18;
                do {
                  fVar21 = *pfVar16 * fVar17;
                  fVar17 = fVar17 + fVar20;
                  pfVar14 = pfVar16 + 1;
                  *pfVar16 = fVar21;
                  pfVar16 = pfVar14;
                } while (pfVar14 < pfVar15 + uVar9);
                uVar11 = uVar11 + 2;
              } while (uVar11 != (uVar10 & 0xfe));
            }
            if ((bVar2 & 1) != 0) {
              pfVar16 = (float *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
              pfVar15 = pfVar16;
              do {
                fVar17 = *pfVar15 * fVar18;
                fVar18 = fVar18 + fVar20;
                pfVar14 = pfVar15 + 1;
                *pfVar15 = fVar17;
                pfVar15 = pfVar14;
              } while (pfVar14 < pfVar16 + uVar9);
            }
          }
        }
        else {
          uVar11 = uVar9 & 0xfffc;
          if ((int)uVar11 == 0) {
            if (bVar2 == 1) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              do {
                pfVar16 = (float *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
                pfVar15 = pfVar16;
                fVar17 = fVar18;
                do {
                  fVar21 = *pfVar15 * fVar17;
                  fVar17 = fVar17 + fVar20;
                  pfVar14 = pfVar15 + 1;
                  *pfVar15 = fVar21;
                  pfVar15 = pfVar14;
                } while (pfVar14 < pfVar16 + uVar9);
                pfVar15 = (float *)(*param_2 + (uVar11 << 2 | 4) * (ulong)*(ushort *)(param_2 + 2));
                pfVar16 = pfVar15;
                fVar17 = fVar18;
                do {
                  fVar21 = *pfVar16 * fVar17;
                  fVar17 = fVar17 + fVar20;
                  pfVar14 = pfVar16 + 1;
                  *pfVar16 = fVar21;
                  pfVar16 = pfVar14;
                } while (pfVar14 < pfVar15 + uVar9);
                uVar11 = uVar11 + 2;
              } while (uVar11 != (uVar10 & 0xfe));
            }
            if ((bVar2 & 1) != 0) {
              pfVar16 = (float *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
              pfVar15 = pfVar16;
              do {
                fVar17 = *pfVar15 * fVar18;
                fVar18 = fVar18 + fVar20;
                pfVar14 = pfVar15 + 1;
                *pfVar15 = fVar17;
                pfVar15 = pfVar14;
              } while (pfVar14 < pfVar16 + uVar9);
            }
          }
          else {
            uVar12 = 0;
            fVar17 = fVar17 / (float)uVar11;
            fVar21 = fVar17 * 4.0;
            fVar26 = fVar17 + fVar18 + fVar17;
            do {
              pfVar16 = (float *)(*param_2 + uVar12 * *(ushort *)(param_2 + 2) * 4);
              pfVar15 = pfVar16;
              fVar22 = fVar18;
              fVar23 = fVar17 + fVar18;
              fVar24 = fVar26;
              fVar25 = fVar26 + fVar17;
              do {
                fVar27 = (float)*(undefined8 *)pfVar15 * fVar22;
                fVar28 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * fVar23;
                fVar29 = (float)*(undefined8 *)(pfVar15 + 2) * fVar24;
                fVar30 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20) * fVar25;
                fVar22 = fVar22 + fVar21;
                fVar23 = fVar23 + fVar21;
                fVar24 = fVar24 + fVar21;
                fVar25 = fVar25 + fVar21;
                pfVar14 = pfVar15 + 4;
                *(ulong *)(pfVar15 + 2) = CONCAT44(fVar30,fVar29);
                *(ulong *)pfVar15 = CONCAT44(fVar28,fVar27);
                pfVar15 = pfVar14;
              } while (pfVar14 < pfVar16 + uVar11);
              if (pfVar14 < pfVar16 + uVar9) {
                fVar22 = fVar18;
                do {
                  fVar23 = *pfVar14 * fVar22;
                  fVar22 = fVar22 + fVar20;
                  pfVar15 = pfVar14 + 1;
                  *pfVar14 = fVar23;
                  pfVar14 = pfVar15;
                } while (pfVar15 < pfVar16 + uVar9);
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar10);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_7);
  }
  return;
}


