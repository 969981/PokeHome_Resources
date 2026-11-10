/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cd684; name: FUN_.text__006cd684
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__006cd684(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_14;
  
  lVar5 = param_1[5];
  iVar2 = (**(code **)(*param_1 + 0x38))();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (param_2 + 1) / iVar2;
  }
  lVar4 = lVar5 + (long)param_2 * 0x18;
  pfVar3 = (float *)(lVar5 + (long)((param_2 + 1) - iVar1 * iVar2) * 0x18);
  fVar8 = *(float *)(lVar4 + 0x10);
  fVar10 = *(float *)(lVar4 + 0x14);
  fVar18 = fVar8 + *(float *)(lVar4 + 8);
  fVar11 = fVar10 + *(float *)(lVar4 + 0xc);
  fVar13 = pfVar3[4];
  fVar14 = pfVar3[5];
  fVar19 = fVar18 - fVar8;
  fVar20 = fVar11 - fVar10;
  fVar12 = fVar13 + *pfVar3;
  fVar15 = fVar14 + pfVar3[1];
  fVar16 = fVar13 - fVar8;
  fVar17 = fVar14 - fVar10;
  fVar6 = fVar19 * fVar16 + fVar20 * fVar17;
  fVar7 = fVar16 * fVar16 + fVar17 * fVar17;
  fVar21 = (float)((ulong)_DAT_00723990 >> 0x20);
  if (fVar6 <= 0.0) {
    fVar6 = fVar19 * fVar19 + fVar20 * fVar20;
    uVar9 = CONCAT44(fVar15 - fVar10,fVar12 - fVar8);
    fVar8 = fVar16 * (fVar12 - fVar8) + fVar17 * (fVar15 - fVar10);
  }
  else if (fVar6 <= fVar7) {
    uVar9 = NEON_rev64(CONCAT44(fVar20,fVar19),4);
    fVar6 = fVar16 * (float)uVar9 * (float)_DAT_00723990 +
            fVar17 * (float)((ulong)uVar9 >> 0x20) * fVar21;
    fVar6 = (fVar6 * fVar6) / fVar7;
    uVar9 = CONCAT44(fVar15 - fVar10,fVar12 - fVar8);
    fVar8 = fVar16 * (fVar12 - fVar8) + fVar17 * (fVar15 - fVar10);
  }
  else {
    fVar18 = fVar13 - fVar18;
    fVar11 = fVar14 - fVar11;
    fVar6 = fVar18 * fVar18 + fVar11 * fVar11;
    uVar9 = CONCAT44(fVar15 - fVar10,fVar12 - fVar8);
    fVar8 = fVar16 * (fVar12 - fVar8) + fVar17 * (fVar15 - fVar10);
  }
  if (0.0 < fVar8) {
    if (fVar8 <= fVar7) {
      uVar9 = NEON_rev64(uVar9,4);
      fVar8 = fVar16 * (float)uVar9 * (float)_DAT_00723990 +
              fVar17 * (float)((ulong)uVar9 >> 0x20) * fVar21;
      fVar7 = (fVar8 * fVar8) / fVar7;
      fVar8 = *(float *)((long)param_1 + 0x34);
      if (fVar7 <= fVar6) {
        fVar7 = fVar6;
      }
      goto joined_r0x006cd7c0;
    }
    uVar9 = CONCAT44(fVar14 - fVar15,fVar13 - fVar12);
  }
  fVar7 = (float)((ulong)uVar9 >> 0x20);
  fVar7 = (float)uVar9 * (float)uVar9 + fVar7 * fVar7;
  fVar8 = *(float *)((long)param_1 + 0x34);
  if (fVar7 <= fVar6) {
    fVar7 = fVar6;
  }
joined_r0x006cd7c0:
  fVar6 = SQRT(fVar7);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar7);
  }
  if (fVar8 < fVar6) {
    fVar7 = SQRT(fVar6 / fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar6 / fVar8);
    }
    local_14 = (float)(int)fVar7;
    FUN__text__006c1ba0(0x3f800000,0x44800000,&local_14);
    return (1 << (ulong)(-(int)LZCOUNT((int)local_14 + -1) & 0x1f)) + 1;
  }
  return 2;
}


