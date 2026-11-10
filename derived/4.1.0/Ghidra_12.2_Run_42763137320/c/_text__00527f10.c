/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00527f10; name: FUN_.text__00527f10
 */


void FUN__text__00527f10(float *param_1,double *param_2,float *param_3,undefined8 param_4)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  uint uVar13;
  double *pdVar14;
  float *pfVar15;
  float fVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar21 = *(float *)((long)param_2 + 0x11c);
  fVar20 = *(float *)(param_2 + 0x24);
  if (param_3 == (float *)0x0) {
    fVar19 = 0.0;
    fVar16 = 1.4013e-45;
    fVar18 = param_1[4];
    fVar2 = fVar21;
  }
  else {
    pdVar14 = *(double **)(param_3 + 2);
    fVar16 = param_3[0xb];
    fVar19 = param_3[10] +
             (float)SQRT((*param_2 - *pdVar14) * (*param_2 - *pdVar14) +
                         (param_2[1] - pdVar14[1]) * (param_2[1] - pdVar14[1]) +
                         (param_2[2] - pdVar14[2]) * (param_2[2] - pdVar14[2]));
    FUN__text__0050cca0(*(undefined8 *)(param_1 + 0xe),param_2[0xe],pdVar14[0xe]);
    if (param_1[0x11] < fVar19) {
      return;
    }
    fVar20 = param_3[1];
    fVar16 = (float)((int)fVar16 + 1);
    fVar2 = *param_3;
    if (*param_3 <= fVar21) {
      fVar2 = fVar21;
    }
    fVar18 = param_1[4];
  }
  if (fVar18 != 0.0) {
    uVar1 = 0;
    uVar13 = SUB84(param_2[0xe],0);
    if (fVar18 != 0.0) {
      uVar1 = uVar13 / (uint)fVar18;
    }
    for (pfVar17 = *(float **)(*(long *)(param_1 + 2) + (ulong)(uVar13 - uVar1 * (int)fVar18) * 8);
        pfVar17 != (float *)0x0; pfVar17 = *(float **)(pfVar17 + 8)) {
      if (*(double *)(*(long *)(pfVar17 + 2) + 0x70) == param_2[0xe]) goto LAB__text__0052817c;
    }
  }
  for (puVar10 = *(undefined8 **)param_1; puVar10 != (undefined8 *)0x0;
      puVar10 = (undefined8 *)puVar10[0x38]) {
    if (puVar10[0x3a] != 0) goto LAB__text__0052809c;
  }
  puVar10 = (undefined8 *)FUN__text__00400f80(0xb,0x1d8);
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  puVar10[0x38] = 0;
  puVar10[0xe] = puVar10 + 7;
  *puVar10 = 0;
  puVar10[7] = puVar10;
  puVar10[0x15] = puVar10 + 0xe;
  puVar10[0x1c] = puVar10 + 0x15;
  puVar10[0x2a] = puVar10 + 0x23;
  puVar10[0x23] = puVar10 + 0x1c;
  puVar10[0x3a] = puVar10 + 0x31;
  puVar10[0x31] = puVar10 + 0x2a;
  *(undefined4 *)(puVar10 + 0x39) = 8;
  if (*(long *)param_1 == 0) {
    *(undefined8 **)param_1 = puVar10;
    puVar10[0x38] = 0;
    pfVar17 = (float *)puVar10[0x3a];
  }
  else {
    puVar10[0x38] = *(long *)param_1;
    *(undefined8 **)param_1 = puVar10;
LAB__text__0052809c:
    pfVar17 = (float *)puVar10[0x3a];
  }
  if (pfVar17 == (float *)0x0) {
    return;
  }
  puVar10[0x3a] = *(undefined8 *)pfVar17;
  pfVar17[0] = 0.0;
  pfVar17[1] = 0.0;
  *(int *)(puVar10 + 0x39) = *(int *)(puVar10 + 0x39) + -1;
  *(double **)(pfVar17 + 2) = param_2;
  pfVar17[4] = 0.0;
  pfVar17[5] = 0.0;
  pfVar17[6] = 0.0;
  pfVar17[7] = 0.0;
  pfVar17[8] = 0.0;
  pfVar17[9] = 0.0;
  pfVar17[10] = 3.4028235e+38;
  pfVar17[0xb] = 0.0;
  pfVar17[0xc] = 0.0;
  pfVar17[0xd] = 0.0;
  fVar21 = param_1[4];
  if ((fVar21 == 0.0) ||
     (fVar18 = (float)NEON_ucvtf(param_1[6]), 0.9 < fVar18 / (float)(uint)fVar21)) {
    FUN__text__00529b30(param_1 + 2);
    fVar21 = param_1[4];
    if (fVar21 == 0.0) {
      pfVar15 = *(float **)param_1;
      if (pfVar15 == (float *)0x0) {
        pfVar12 = (float *)0x0;
        pfVar15 = (float *)0x0;
      }
      else if ((pfVar17 < pfVar15) || (pfVar15 + 0x70 <= pfVar17)) {
        pfVar12 = *(float **)(pfVar15 + 0x70);
        pfVar3 = pfVar12;
        if (pfVar12 == (float *)0x0) {
        }
        else {
          do {
            if ((pfVar3 <= pfVar17) && (pfVar12 = pfVar3, pfVar17 < pfVar3 + 0x70)) break;
            pfVar12 = *(float **)(pfVar3 + 0x70);
            pfVar15 = pfVar3;
            pfVar3 = pfVar12;
          } while (pfVar12 != (float *)0x0);
        }
      }
      else {
        pfVar12 = pfVar15;
        pfVar15 = (float *)0x0;
      }
      if (*(long *)(pfVar12 + 0x74) == 0) {
        *(float **)(pfVar12 + 0x74) = pfVar17;
        pfVar17[0] = 0.0;
        pfVar17[1] = 0.0;
        fVar20 = (float)((int)pfVar12[0x72] + 1);
        pfVar12[0x72] = fVar20;
      }
      else {
        *(long *)pfVar17 = *(long *)(pfVar12 + 0x74);
        *(float **)(pfVar12 + 0x74) = pfVar17;
        fVar20 = (float)((int)pfVar12[0x72] + 1);
        pfVar12[0x72] = fVar20;
      }
      if (fVar20 != 1.12104e-44) {
        return;
      }
      if (*(float **)param_1 != pfVar12) {
        param_1 = pfVar15 + 0x70;
      }
      *(undefined8 *)param_1 = *(undefined8 *)(pfVar12 + 0x70);
      FUN__text__00400fc0(0xb);
      return;
    }
    param_2 = *(double **)(pfVar17 + 2);
  }
  uVar1 = 0;
  if (fVar21 != 0.0) {
    uVar1 = *(uint *)(param_2 + 0xe) / (uint)fVar21;
  }
  lVar11 = (ulong)(*(uint *)(param_2 + 0xe) - uVar1 * (int)fVar21) * 8;
  *(undefined8 *)(pfVar17 + 8) = *(undefined8 *)(*(long *)(param_1 + 2) + lVar11);
  *(float **)(*(long *)(param_1 + 2) + lVar11) = pfVar17;
  param_1[6] = (float)((int)param_1[6] + 1);
LAB__text__0052813c:
  *pfVar17 = fVar2;
  pfVar17[1] = fVar20;
  pfVar17[10] = fVar19;
  pfVar17[0xb] = fVar16;
  *(undefined8 *)(pfVar17 + 4) = param_4;
  *(float **)(pfVar17 + 6) = param_3;
  if (((uint)fVar16 < (int)param_1[0x10] - 1U) &&
     (lVar11 = FUN__text__005283b0(fVar19,param_1 + 8), lVar11 != 0)) {
    *(float **)(lVar11 + 8) = pfVar17;
  }
  return;
LAB__text__0052817c:
  while( true ) {
    fVar21 = *pfVar17;
    fVar18 = pfVar17[1];
    bVar4 = false;
    bVar6 = false;
    bVar8 = false;
    if (pfVar17[10] <= fVar19) {
      bVar4 = false;
      bVar6 = false;
      bVar8 = true;
      if (!NAN(fVar21) && !NAN(fVar2)) {
        bVar4 = fVar21 < fVar2;
        bVar6 = fVar21 == fVar2;
        bVar8 = false;
      }
    }
    bVar5 = false;
    bVar7 = false;
    bVar9 = false;
    if (bVar6 || bVar4 != bVar8) {
      bVar5 = false;
      bVar7 = false;
      bVar9 = true;
      if (!NAN(fVar18) && !NAN(fVar20)) {
        bVar5 = fVar18 < fVar20;
        bVar7 = fVar18 == fVar20;
        bVar9 = false;
      }
    }
    if (!bVar7 && bVar5 == bVar9) break;
    pfVar17 = *(float **)(pfVar17 + 0xc);
    if (pfVar17 == (float *)0x0) {
      return;
    }
  }
  bVar4 = true;
  bVar6 = false;
  if (fVar19 <= pfVar17[10]) {
    bVar4 = false;
    bVar6 = true;
    if (!NAN(fVar21) && !NAN(fVar2)) {
      bVar4 = fVar21 < fVar2;
      bVar6 = false;
    }
  }
  bVar8 = true;
  bVar5 = false;
  if (bVar4 == bVar6) {
    bVar8 = false;
    bVar5 = true;
    if (!NAN(fVar18) && !NAN(fVar20)) {
      bVar8 = fVar18 < fVar20;
      bVar5 = false;
    }
  }
  if (bVar8 != bVar5) {
    for (puVar10 = *(undefined8 **)param_1; puVar10 != (undefined8 *)0x0;
        puVar10 = (undefined8 *)puVar10[0x38]) {
      if (puVar10[0x3a] != 0) goto LAB__text__00528368;
    }
    puVar10 = (undefined8 *)FUN__text__00400f80(0xb,0x1d8);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0x38] = 0;
      puVar10[0xe] = puVar10 + 7;
      *puVar10 = 0;
      puVar10[7] = puVar10;
      puVar10[0x15] = puVar10 + 0xe;
      puVar10[0x1c] = puVar10 + 0x15;
      puVar10[0x2a] = puVar10 + 0x23;
      puVar10[0x23] = puVar10 + 0x1c;
      puVar10[0x3a] = puVar10 + 0x31;
      puVar10[0x31] = puVar10 + 0x2a;
      *(undefined4 *)(puVar10 + 0x39) = 8;
      if (*(long *)param_1 == 0) {
        *(undefined8 **)param_1 = puVar10;
        puVar10[0x38] = 0;
      }
      else {
        puVar10[0x38] = *(long *)param_1;
        *(undefined8 **)param_1 = puVar10;
      }
LAB__text__00528368:
      pfVar15 = (float *)puVar10[0x3a];
      if (pfVar15 != (float *)0x0) {
        puVar10[0x3a] = *(undefined8 *)pfVar15;
        pfVar15[0] = 0.0;
        pfVar15[1] = 0.0;
        *(int *)(puVar10 + 0x39) = *(int *)(puVar10 + 0x39) + -1;
        *(double **)(pfVar15 + 2) = param_2;
        pfVar15[4] = 0.0;
        pfVar15[5] = 0.0;
        pfVar15[6] = 0.0;
        pfVar15[7] = 0.0;
        pfVar15[8] = 0.0;
        pfVar15[9] = 0.0;
        pfVar15[10] = 3.4028235e+38;
        pfVar15[0xb] = 0.0;
        pfVar15[0xc] = 0.0;
        pfVar15[0xd] = 0.0;
        *(undefined8 *)(pfVar15 + 0xc) = *(undefined8 *)(pfVar17 + 0xc);
        *(float **)(pfVar17 + 0xc) = pfVar15;
        pfVar17 = pfVar15;
      }
    }
  }
  goto LAB__text__0052813c;
}


