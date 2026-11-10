/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00546260; name: FUN_.text__00546260
 */


void FUN__text__00546260(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  double *pdVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double local_88 [17];
  
  uVar7 = *(uint *)(param_2 + 0x44);
  uVar12 = (ulong)uVar7;
  if (0 < (int)uVar7) {
    pdVar11 = (double *)(param_2 + 0xf0);
    pdVar15 = local_88;
    uVar17 = uVar12;
    do {
      uVar17 = uVar17 - 1;
      dVar21 = (pdVar11[-1] - pdVar11[-4]) * 0.5;
      dVar22 = (pdVar11[-2] - pdVar11[-5]) * 0.5;
      dVar24 = (*pdVar11 - pdVar11[-3]) * 0.5;
      dVar21 = dVar22 * dVar22 + dVar21 * dVar21 + dVar24 * dVar24;
      *pdVar15 = dVar21 * 4.188790204786391 * SQRT(dVar21);
      pdVar11 = pdVar11 + 8;
      pdVar15 = pdVar15 + 1;
    } while (uVar17 != 0);
    if (1 < (int)uVar7) {
      uVar17 = 1;
      dVar21 = -3.4028234663852886e+38;
      iVar13 = 0;
      lVar16 = param_2 + 0x130;
      iVar10 = 1;
      uVar19 = 0;
      do {
        uVar3 = uVar19 + 1;
        if (uVar3 < uVar12) {
          lVar4 = param_2 + uVar19 * 0x40;
          uVar9 = uVar17;
          lVar20 = lVar16;
          dVar22 = dVar21;
          iVar14 = iVar13;
          do {
            puVar1 = (undefined8 *)(lVar20 + -0x28);
            dVar24 = (double)NEON_fminnm(*(undefined8 *)(lVar4 + 0xd0),
                                         *(undefined8 *)(lVar20 + -0x20));
            puVar2 = (undefined8 *)(lVar20 + -0x18);
            lVar20 = lVar20 + 0x40;
            dVar21 = (double)NEON_fminnm(*(undefined8 *)(lVar4 + 200),*puVar1);
            dVar26 = (double)NEON_fminnm(*(undefined8 *)(lVar4 + 0xd8),*puVar2);
            dVar21 = (*(double *)(lVar4 + 0xe0) - dVar21) * 0.5;
            dVar24 = (*(double *)(lVar4 + 0xe8) - dVar24) * 0.5;
            dVar26 = (*(double *)(lVar4 + 0xf0) - dVar26) * 0.5;
            dVar21 = dVar21 * dVar21 + dVar24 * dVar24 + dVar26 * dVar26;
            dVar21 = dVar21 * 4.188790204786391 * SQRT(dVar21) -
                     (local_88[uVar19] + local_88[uVar9]);
            iVar13 = (int)uVar19;
            iVar8 = (int)uVar9;
            if (dVar21 <= dVar22) {
              iVar13 = iVar14;
              iVar8 = iVar10;
            }
            iVar10 = iVar8;
            uVar9 = uVar9 + 1;
            dVar22 = dVar21;
            iVar14 = iVar13;
          } while (uVar12 != uVar9);
        }
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 0x40;
        uVar19 = uVar3;
      } while (uVar3 != uVar7 - 1);
      goto LAB__text__005463ec;
    }
  }
  iVar13 = 0;
  iVar10 = 1;
LAB__text__005463ec:
  *(undefined4 *)(param_2 + (long)iVar13 * 4) = 0;
  lVar16 = param_2 + (long)iVar13 * 0x40;
  if (*(int *)(param_2 + 0x4c) == 0) {
    uVar5 = *(undefined8 *)(lVar16 + 0xf0);
    uVar18 = *(undefined8 *)(lVar16 + 0xe0);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar16 + 0xe8);
    *(undefined8 *)(param_2 + 0x80) = uVar5;
    uVar5 = *(undefined8 *)(lVar16 + 0xd0);
    dVar21 = *(double *)(param_2 + 0x78);
    dVar24 = *(double *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar16 + 200);
    *(undefined8 *)(param_2 + 0x60) = uVar5;
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar16 + 0xd8);
    *(undefined8 *)(param_2 + 0x70) = uVar18;
    dVar26 = *(double *)(param_2 + 0x58);
    dVar23 = *(double *)(param_2 + 0x60);
    dVar25 = *(double *)(param_2 + 0x68);
    dVar22 = *(double *)(param_2 + 0x70);
  }
  else {
    dVar23 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 0xd0),*(undefined8 *)(param_2 + 0x60));
    dVar26 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 200),*(undefined8 *)(param_2 + 0x58));
    dVar25 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 0xd8),*(undefined8 *)(param_2 + 0x68));
    dVar22 = *(double *)(lVar16 + 0xe0);
    if (*(double *)(lVar16 + 0xe0) <= *(double *)(param_2 + 0x70)) {
      dVar22 = *(double *)(param_2 + 0x70);
    }
    dVar21 = *(double *)(lVar16 + 0xe8);
    if (*(double *)(lVar16 + 0xe8) <= *(double *)(param_2 + 0x78)) {
      dVar21 = *(double *)(param_2 + 0x78);
    }
    dVar24 = *(double *)(lVar16 + 0xf0);
    if (*(double *)(lVar16 + 0xf0) <= *(double *)(param_2 + 0x80)) {
      dVar24 = *(double *)(param_2 + 0x80);
    }
    *(double *)(param_2 + 0x58) = dVar26;
    *(double *)(param_2 + 0x60) = dVar23;
    *(double *)(param_2 + 0x68) = dVar25;
    *(double *)(param_2 + 0x70) = dVar22;
    *(double *)(param_2 + 0x78) = dVar21;
    *(double *)(param_2 + 0x80) = dVar24;
  }
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  lVar16 = param_2 + (long)iVar10 * 0x40;
  dVar23 = (dVar21 - dVar23) * 0.5;
  dVar24 = (dVar24 - dVar25) * 0.5;
  dVar21 = (dVar22 - dVar26) * 0.5;
  dVar21 = dVar24 * dVar24 + dVar23 * dVar23 + dVar21 * dVar21;
  *(double *)(param_2 + 0xb8) = dVar21 * 4.188790204786391 * SQRT(dVar21);
  *(undefined4 *)(param_2 + (long)iVar10 * 4) = 1;
  if (*(int *)(param_2 + 0x50) == 0) {
    uVar5 = *(undefined8 *)(lVar16 + 0xd8);
    uVar18 = *(undefined8 *)(lVar16 + 0xe8);
    uVar6 = *(undefined8 *)(lVar16 + 0xf0);
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar16 + 0xe0);
    *(undefined8 *)(param_2 + 0xa8) = uVar18;
    *(undefined8 *)(param_2 + 0xb0) = uVar6;
    uVar18 = *(undefined8 *)(lVar16 + 200);
    uVar6 = *(undefined8 *)(lVar16 + 0xd0);
    *(undefined8 *)(param_2 + 0x98) = uVar5;
    dVar21 = *(double *)(param_2 + 0xa8);
    dVar24 = *(double *)(param_2 + 0xb0);
    dVar25 = *(double *)(param_2 + 0x98);
    dVar22 = *(double *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0x88) = uVar18;
    *(undefined8 *)(param_2 + 0x90) = uVar6;
    dVar26 = *(double *)(param_2 + 0x88);
    dVar23 = *(double *)(param_2 + 0x90);
  }
  else {
    dVar23 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 0xd0),*(undefined8 *)(param_2 + 0x90));
    dVar26 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 200),*(undefined8 *)(param_2 + 0x88));
    dVar25 = (double)NEON_fminnm(*(undefined8 *)(lVar16 + 0xd8),*(undefined8 *)(param_2 + 0x98));
    dVar22 = *(double *)(lVar16 + 0xe0);
    if (*(double *)(lVar16 + 0xe0) <= *(double *)(param_2 + 0xa0)) {
      dVar22 = *(double *)(param_2 + 0xa0);
    }
    dVar21 = *(double *)(lVar16 + 0xe8);
    if (*(double *)(lVar16 + 0xe8) <= *(double *)(param_2 + 0xa8)) {
      dVar21 = *(double *)(param_2 + 0xa8);
    }
    dVar24 = *(double *)(lVar16 + 0xf0);
    if (*(double *)(lVar16 + 0xf0) <= *(double *)(param_2 + 0xb0)) {
      dVar24 = *(double *)(param_2 + 0xb0);
    }
    *(double *)(param_2 + 0x88) = dVar26;
    *(double *)(param_2 + 0x90) = dVar23;
    *(double *)(param_2 + 0x98) = dVar25;
    *(double *)(param_2 + 0xa0) = dVar22;
    *(double *)(param_2 + 0xa8) = dVar21;
    *(double *)(param_2 + 0xb0) = dVar24;
  }
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  dVar22 = (dVar22 - dVar26) * 0.5;
  dVar26 = (dVar21 - dVar23) * 0.5;
  dVar21 = (dVar24 - dVar25) * 0.5;
  dVar21 = dVar21 * dVar21 + dVar26 * dVar26 + dVar22 * dVar22;
  *(double *)(param_2 + 0xc0) = dVar21 * 4.188790204786391 * SQRT(dVar21);
  return;
}


