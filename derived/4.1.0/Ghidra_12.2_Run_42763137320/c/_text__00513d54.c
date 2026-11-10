/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00513d54; name: FUN_.text__00513d54
 */


void FUN__text__00513d54(undefined8 param_1,int param_2,int param_3,long param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar4 = param_4 + (long)param_2 * 0x28;
  *(int *)(param_4 + (long)param_2 * 4) = param_3;
  piVar3 = (int *)(param_4 + (long)param_3 * 4 + 0x4c);
  lVar5 = param_4 + (long)param_3 * 0x18;
  pfVar1 = (float *)(lVar5 + 0x54);
  if (*piVar3 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar6 = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(lVar5 + 0x5c) = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(lVar5 + 100) = uVar6;
    *(undefined8 *)pfVar1 = uVar2;
    lVar4 = param_4 + (long)param_3 * 0x18;
    fVar11 = *(float *)(lVar5 + 0x5c);
    fVar10 = *pfVar1;
    fVar8 = *(float *)(lVar5 + 0x58);
    fVar12 = *(float *)(lVar4 + 0x68);
    fVar13 = *(float *)(lVar4 + 0x60);
    fVar9 = *(float *)(lVar4 + 100);
  }
  else {
    lVar7 = param_4 + (long)param_3 * 0x18;
    fVar10 = (float)NEON_fminnm(*(undefined4 *)(lVar4 + 0x90),*pfVar1);
    fVar8 = (float)NEON_fminnm(*(undefined4 *)(lVar4 + 0x94),*(undefined4 *)(lVar5 + 0x58));
    fVar13 = *(float *)(lVar4 + 0x9c);
    fVar11 = (float)NEON_fminnm(*(undefined4 *)(lVar4 + 0x98),*(undefined4 *)(lVar5 + 0x5c));
    fVar15 = *(float *)(lVar7 + 100);
    fVar12 = *(float *)(lVar4 + 0xa4);
    fVar14 = *(float *)(lVar7 + 0x68);
    fVar9 = *(float *)(lVar4 + 0xa0);
    if (*(float *)(lVar4 + 0xa0) <= fVar15) {
      fVar9 = fVar15;
    }
    *pfVar1 = fVar10;
    *(float *)(lVar5 + 0x58) = fVar8;
    if (fVar12 <= fVar14) {
      fVar12 = fVar14;
    }
    *(float *)(lVar5 + 0x5c) = fVar11;
    *(float *)(lVar5 + 0x60) = fVar13;
    *(float *)(lVar5 + 100) = fVar9;
    *(float *)(lVar5 + 0x68) = fVar12;
  }
  fVar10 = (fVar13 - fVar10) * 0.5;
  fVar9 = (fVar9 - fVar8) * 0.5;
  fVar12 = (fVar12 - fVar11) * 0.5;
  fVar9 = fVar10 * fVar10 + fVar9 * fVar9 + fVar12 * fVar12;
  *(float *)(param_4 + (long)param_3 * 4 + 0x84) = fVar9 * 4.1887903 * SQRT(fVar9);
  *piVar3 = *piVar3 + 1;
  return;
}


