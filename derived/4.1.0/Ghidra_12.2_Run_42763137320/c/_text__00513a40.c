/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00513a40; name: FUN_.text__00513a40
 */


void FUN__text__00513a40(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_44 [17];
  
  uVar5 = *(uint *)(param_2 + 0x44);
  uVar13 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    pfVar11 = (float *)(param_2 + 0xa4);
    pfVar16 = local_44;
    uVar18 = uVar13;
    do {
      uVar18 = uVar18 - 1;
      fVar20 = (pfVar11[-1] - pfVar11[-4]) * 0.5;
      fVar21 = (pfVar11[-2] - pfVar11[-5]) * 0.5;
      fVar23 = (*pfVar11 - pfVar11[-3]) * 0.5;
      fVar20 = fVar21 * fVar21 + fVar20 * fVar20 + fVar23 * fVar23;
      *pfVar16 = fVar20 * 4.1887903 * SQRT(fVar20);
      pfVar11 = pfVar11 + 10;
      pfVar16 = pfVar16 + 1;
    } while (uVar18 != 0);
    if (1 < (int)uVar5) {
      fVar20 = -3.4028235e+38;
      iVar14 = 0;
      lVar17 = param_2 + 0xcc;
      uVar18 = 1;
      iVar10 = 1;
      uVar19 = 0;
      do {
        uVar3 = uVar19 + 1;
        if (uVar3 < uVar13) {
          lVar7 = param_2 + uVar19 * 0x28;
          lVar8 = lVar17;
          uVar9 = uVar18;
          fVar21 = fVar20;
          iVar15 = iVar14;
          do {
            puVar1 = (undefined4 *)(lVar8 + -0x14);
            fVar23 = (float)NEON_fminnm(*(undefined4 *)(lVar7 + 0x94),*(undefined4 *)(lVar8 + -0x10)
                                       );
            puVar2 = (undefined4 *)(lVar8 + -0xc);
            lVar8 = lVar8 + 0x28;
            fVar20 = (float)NEON_fminnm(*(undefined4 *)(lVar7 + 0x90),*puVar1);
            fVar25 = (float)NEON_fminnm(*(undefined4 *)(lVar7 + 0x98),*puVar2);
            fVar20 = (*(float *)(lVar7 + 0x9c) - fVar20) * 0.5;
            fVar23 = (*(float *)(lVar7 + 0xa0) - fVar23) * 0.5;
            fVar25 = (*(float *)(lVar7 + 0xa4) - fVar25) * 0.5;
            fVar20 = fVar20 * fVar20 + fVar23 * fVar23 + fVar25 * fVar25;
            fVar20 = fVar20 * 4.1887903 * SQRT(fVar20) - (local_44[uVar19] + local_44[uVar9]);
            iVar14 = (int)uVar19;
            iVar6 = (int)uVar9;
            if (fVar20 <= fVar21) {
              iVar14 = iVar15;
              iVar6 = iVar10;
            }
            iVar10 = iVar6;
            uVar9 = uVar9 + 1;
            fVar21 = fVar20;
            iVar15 = iVar14;
          } while (uVar13 != uVar9);
        }
        uVar18 = uVar18 + 1;
        lVar17 = lVar17 + 0x28;
        uVar19 = uVar3;
      } while (uVar3 != uVar5 - 1);
      goto LAB__text__00513bcc;
    }
  }
  iVar14 = 0;
  iVar10 = 1;
LAB__text__00513bcc:
  *(undefined4 *)(param_2 + (long)iVar14 * 4) = 0;
  lVar17 = param_2 + (long)iVar14 * 0x28;
  if (*(int *)(param_2 + 0x4c) == 0) {
    uVar4 = *(undefined8 *)(lVar17 + 0x98);
    uVar12 = *(undefined8 *)(lVar17 + 0xa0);
    *(undefined8 *)(param_2 + 0x54) = *(undefined8 *)(lVar17 + 0x90);
    *(undefined8 *)(param_2 + 0x5c) = uVar4;
    *(undefined8 *)(param_2 + 100) = uVar12;
    fVar25 = *(float *)(param_2 + 0x54);
    fVar22 = *(float *)(param_2 + 0x58);
    fVar20 = *(float *)(param_2 + 100);
    fVar23 = *(float *)(param_2 + 0x68);
    fVar24 = *(float *)(param_2 + 0x5c);
    fVar21 = *(float *)(param_2 + 0x60);
  }
  else {
    fVar22 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x94),*(undefined4 *)(param_2 + 0x58));
    fVar25 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x90),*(undefined4 *)(param_2 + 0x54));
    fVar24 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x98),*(undefined4 *)(param_2 + 0x5c));
    fVar21 = *(float *)(lVar17 + 0x9c);
    if (*(float *)(lVar17 + 0x9c) <= *(float *)(param_2 + 0x60)) {
      fVar21 = *(float *)(param_2 + 0x60);
    }
    fVar20 = *(float *)(lVar17 + 0xa0);
    if (*(float *)(lVar17 + 0xa0) <= *(float *)(param_2 + 100)) {
      fVar20 = *(float *)(param_2 + 100);
    }
    fVar23 = *(float *)(lVar17 + 0xa4);
    if (*(float *)(lVar17 + 0xa4) <= *(float *)(param_2 + 0x68)) {
      fVar23 = *(float *)(param_2 + 0x68);
    }
    *(float *)(param_2 + 0x54) = fVar25;
    *(float *)(param_2 + 0x58) = fVar22;
    *(float *)(param_2 + 0x5c) = fVar24;
    *(float *)(param_2 + 0x60) = fVar21;
    *(float *)(param_2 + 100) = fVar20;
    *(float *)(param_2 + 0x68) = fVar23;
  }
  fVar22 = (fVar20 - fVar22) * 0.5;
  fVar23 = (fVar23 - fVar24) * 0.5;
  fVar20 = (fVar21 - fVar25) * 0.5;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  fVar20 = fVar23 * fVar23 + fVar22 * fVar22 + fVar20 * fVar20;
  *(float *)(param_2 + 0x84) = fVar20 * 4.1887903 * SQRT(fVar20);
  *(undefined4 *)(param_2 + (long)iVar10 * 4) = 1;
  lVar17 = param_2 + (long)iVar10 * 0x28;
  if (*(int *)(param_2 + 0x50) == 0) {
    uVar4 = *(undefined8 *)(lVar17 + 0x90);
    uVar12 = *(undefined8 *)(lVar17 + 0xa0);
    *(undefined8 *)(param_2 + 0x74) = *(undefined8 *)(lVar17 + 0x98);
    *(undefined8 *)(param_2 + 0x7c) = uVar12;
    *(undefined8 *)(param_2 + 0x6c) = uVar4;
    fVar25 = *(float *)(param_2 + 0x6c);
    fVar22 = *(float *)(param_2 + 0x70);
    fVar20 = *(float *)(param_2 + 0x7c);
    fVar23 = *(float *)(param_2 + 0x80);
    fVar24 = *(float *)(param_2 + 0x74);
    fVar21 = *(float *)(param_2 + 0x78);
  }
  else {
    fVar22 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x94),*(undefined4 *)(param_2 + 0x70));
    fVar25 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x90),*(undefined4 *)(param_2 + 0x6c));
    fVar24 = (float)NEON_fminnm(*(undefined4 *)(lVar17 + 0x98),*(undefined4 *)(param_2 + 0x74));
    fVar21 = *(float *)(lVar17 + 0x9c);
    if (*(float *)(lVar17 + 0x9c) <= *(float *)(param_2 + 0x78)) {
      fVar21 = *(float *)(param_2 + 0x78);
    }
    fVar20 = *(float *)(lVar17 + 0xa0);
    if (*(float *)(lVar17 + 0xa0) <= *(float *)(param_2 + 0x7c)) {
      fVar20 = *(float *)(param_2 + 0x7c);
    }
    fVar23 = *(float *)(lVar17 + 0xa4);
    if (*(float *)(lVar17 + 0xa4) <= *(float *)(param_2 + 0x80)) {
      fVar23 = *(float *)(param_2 + 0x80);
    }
    *(float *)(param_2 + 0x6c) = fVar25;
    *(float *)(param_2 + 0x70) = fVar22;
    *(float *)(param_2 + 0x74) = fVar24;
    *(float *)(param_2 + 0x78) = fVar21;
    *(float *)(param_2 + 0x7c) = fVar20;
    *(float *)(param_2 + 0x80) = fVar23;
  }
  fVar21 = (fVar21 - fVar25) * 0.5;
  fVar25 = (fVar20 - fVar22) * 0.5;
  fVar20 = (fVar23 - fVar24) * 0.5;
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  fVar20 = fVar20 * fVar20 + fVar25 * fVar25 + fVar21 * fVar21;
  *(float *)(param_2 + 0x88) = fVar20 * 4.1887903 * SQRT(fVar20);
  return;
}


