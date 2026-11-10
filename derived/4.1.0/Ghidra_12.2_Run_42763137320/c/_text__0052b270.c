/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052b270; name: FUN_.text__0052b270
 */


void FUN__text__0052b270(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  double *pdVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  dVar15 = *(double *)(param_1 + 0xe0);
  dVar17 = *(double *)(param_1 + 0xe8);
  dVar19 = *(double *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xfc) = 0;
  uVar1 = *(int *)(param_1 + 0xf8) - 1;
  if ((int)uVar1 < 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = 0.0;
    fVar21 = 0.0;
    iVar7 = *(int *)(param_1 + 0xf8) + -2;
    pdVar8 = (double *)(param_1 + (ulong)uVar1 * 0x18 + 0x30);
    lVar6 = (ulong)uVar1 + 1;
    do {
      lVar5 = param_1 + (long)iVar7 * 0x18;
      dVar16 = pdVar8[-2];
      dVar18 = pdVar8[-1];
      dVar20 = *pdVar8;
      fVar10 = (float)(dVar18 - dVar17);
      fVar9 = (float)(dVar16 - dVar15);
      fVar11 = (float)(dVar20 - dVar19);
      fVar22 = (float)(*(double *)(lVar5 + 0x28) - dVar18);
      fVar13 = (float)(*(double *)(lVar5 + 0x20) - dVar16);
      fVar23 = (float)(*(double *)(lVar5 + 0x30) - dVar20);
      fVar12 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
      fVar24 = SQRT(fVar13 * fVar13 + fVar22 * fVar22 + fVar23 * fVar23) * fVar12;
      if (0.001 < fVar24) {
        fVar14 = fVar14 + fVar12;
        *(float *)(param_1 + 0x100) = fVar14;
        fVar24 = (fVar13 * fVar9 + fVar10 * fVar22 + fVar11 * fVar23) / fVar24;
        bVar2 = false;
        bVar3 = true;
        bVar4 = false;
        if (fVar24 < 0.999998) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar24)) {
            bVar2 = fVar24 < -1.0;
            bVar3 = fVar24 == -1.0;
            bVar4 = false;
          }
        }
        dVar15 = dVar16;
        dVar17 = dVar18;
        dVar19 = dVar20;
        if (!bVar3 && bVar2 == bVar4) {
          fVar24 = (float)NEON_fminnm(fVar24,0x3f800000);
          if (fVar24 <= -1.0) {
            fVar24 = -1.0;
          }
          fVar24 = acosf(fVar24);
          fVar21 = (float)NEON_fminnm(fVar21 + fVar24 * 0.31830987,0x3f800000);
          *(float *)(param_1 + 0xfc) = fVar21;
        }
      }
      lVar5 = lVar6 + -1;
      iVar7 = iVar7 + -1;
      pdVar8 = pdVar8 + -3;
      bVar2 = 0 < lVar6;
      lVar6 = lVar5;
    } while (lVar5 != 0 && bVar2);
  }
  fVar24 = (float)(dVar17 - *(double *)(param_1 + 0x10));
  fVar21 = (float)(dVar15 - *(double *)(param_1 + 8));
  fVar9 = (float)(dVar19 - *(double *)(param_1 + 0x18));
  fVar21 = SQRT(fVar21 * fVar21 + fVar24 * fVar24 + fVar9 * fVar9);
  if (0.0 < fVar21) {
    *(float *)(param_1 + 0x100) = fVar14 + fVar21;
  }
  return;
}


