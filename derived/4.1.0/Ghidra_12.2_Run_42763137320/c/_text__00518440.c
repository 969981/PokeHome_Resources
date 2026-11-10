/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00518440; name: FUN_.text__00518440
 */


long FUN__text__00518440(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar8 = *(uint *)(param_1 + 0x30);
  if (uVar8 == 0) {
    return 0;
  }
  while( true ) {
    pfVar11 = *(float **)(param_1 + 0x28);
    fVar14 = *pfVar11;
    lVar7 = *(long *)(pfVar11 + 2);
    if (uVar8 != 0 && uVar8 - 1 != 0) break;
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
LAB__text__00518478:
    fVar15 = *(float *)(lVar7 + 0x68) + *(float *)(lVar7 + 100) * 0.31830987;
    fVar17 = (float)NEON_fminnm(*(float *)(lVar7 + 0x5c) + *(float *)(lVar7 + 0x60),
                                *(float *)(param_1 + 0x38));
    fVar16 = 2.0;
    if (fVar15 < 1.0) {
      fVar16 = fVar15 + fVar15;
    }
    if (ABS(fVar14 + (fVar17 / *(float *)(param_1 + 0x38) + fVar16) * -0.33333334) <= 1.1920929e-07
        || uVar8 == 0) {
      return lVar7;
    }
  }
  uVar9 = 0;
  uVar4 = *(undefined8 *)(pfVar11 + (ulong)(uVar8 - 1) * 4 + 2);
  *(undefined8 *)pfVar11 = *(undefined8 *)(pfVar11 + (ulong)(uVar8 - 1) * 4);
  *(undefined8 *)(pfVar11 + 2) = uVar4;
  uVar8 = *(int *)(param_1 + 0x30) - 1;
  *(uint *)(param_1 + 0x30) = uVar8;
  uVar12 = 1;
  uVar10 = uVar9;
  uVar13 = 0;
  if (uVar8 < 2) goto LAB__text__00518528;
  do {
    uVar10 = uVar9;
    uVar13 = uVar12;
    if (*(float *)(*(long *)(param_1 + 0x28) + uVar9 * 0x10) <=
        *(float *)(*(long *)(param_1 + 0x28) + uVar12 * 0x10)) {
      uVar13 = uVar9;
    }
LAB__text__00518528:
    do {
      uVar2 = (int)uVar10 * 2 + 2;
      if ((uVar8 <= uVar2) ||
         (uVar9 = (ulong)uVar2,
         *(float *)(*(long *)(param_1 + 0x28) + uVar13 * 0x10) <=
         *(float *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x10))) {
        uVar9 = uVar13;
      }
      if ((int)uVar9 == (int)uVar10) goto LAB__text__00518478;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar10 * 0x10);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar9 * 0x10);
      uVar5 = puVar3[1];
      uVar4 = *puVar1;
      uVar6 = puVar1[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar9 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar6;
      uVar8 = *(uint *)(param_1 + 0x30);
      uVar2 = (int)uVar9 << 1 | 1;
      uVar12 = (ulong)uVar2;
      uVar10 = uVar9;
      uVar13 = uVar9;
    } while (uVar8 <= uVar2);
  } while( true );
}


