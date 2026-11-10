/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048c660; name: FUN_.text__0048c660
 */


void FUN__text__0048c660(float param_1,float param_2,long param_3,uint param_4,void *param_5)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar12 = -4.712389;
  if (param_2 <= 1.5707964) {
    fVar12 = 1.5707964;
  }
  fVar12 = fVar12 + param_2;
  fVar10 = -4.712389;
  if (param_1 <= 1.5707964) {
    fVar10 = 1.5707964;
  }
  fVar10 = fVar10 + param_1;
  fVar13 = fVar12 * 0.4052847 * ABS(fVar12);
  fVar15 = fVar12 * 1.2732395 - fVar13;
  fVar11 = fVar10 * 0.4052847 * ABS(fVar10);
  fVar15 = fVar15 + (ABS(fVar12 * 1.2732395 - fVar13) * fVar15 - fVar15) * 0.225;
  fVar14 = fVar10 * 1.2732395 - fVar11;
  fVar12 = param_1 * 0.4052847 * ABS(param_1);
  fVar13 = param_1 * 1.2732395 - fVar12;
  if (param_4 != 0) {
    memset(param_5,0,(ulong)param_4 << 2);
  }
  fVar10 = fVar15 * (fVar14 + (ABS(fVar10 * 1.2732395 - fVar11) * fVar14 - fVar14) * 0.225);
  fVar15 = fVar15 * (fVar13 + (ABS(param_1 * 1.2732395 - fVar12) * fVar13 - fVar13) * 0.225);
  if (0.0 < param_2) {
    fVar12 = param_2 * 0.4052847 * ABS(param_2);
    fVar11 = param_2 * 1.2732395 - fVar12;
    fVar11 = fVar11 + (ABS(param_2 * 1.2732395 - fVar12) * fVar11 - fVar11) * 0.225;
    if (*(uint *)(param_3 + 0x10) != 0) {
      lVar9 = (ulong)*(uint *)(param_3 + 0x10) << 6;
      pfVar8 = (float *)(*(long *)(param_3 + 8) + 0x20);
      do {
        if (pfVar8[-2] <= pfVar8[-5] * fVar10 + fVar15 * pfVar8[-4] + fVar11 * pfVar8[-3]) {
          fVar12 = pfVar8[-1] * fVar10 + fVar15 * pfVar8[2] + fVar11 * pfVar8[5];
          fVar14 = pfVar8[1] * fVar10 + fVar15 * pfVar8[4] + fVar11 * pfVar8[7];
          fVar13 = *pfVar8 * fVar10 + fVar15 * pfVar8[3] + fVar11 * pfVar8[6];
          bVar3 = true;
          bVar5 = false;
          if (-1e-05 <= fVar12) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN(fVar13)) {
              bVar3 = fVar13 < -1e-05;
              bVar5 = false;
            }
          }
          bVar4 = true;
          bVar6 = false;
          if (bVar3 == bVar5) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar14)) {
              bVar4 = fVar14 < -1e-05;
              bVar6 = false;
            }
          }
          auVar17._0_4_ = fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14;
          bVar3 = true;
          bVar5 = false;
          if (bVar4 == bVar6) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN(auVar17._0_4_)) {
              bVar3 = auVar17._0_4_ < 1e-38;
              bVar5 = false;
            }
          }
          if (bVar3 == bVar5) {
            auVar17._4_4_ = auVar17._0_4_;
            auVar17._8_4_ = auVar17._0_4_;
            auVar17._12_4_ = auVar17._0_4_;
            auVar18 = NEON_frecpe(auVar17,4);
            fVar16 = auVar18._0_4_;
            *(float *)((long)param_5 + (ulong)(uint)pfVar8[-8] * 4) =
                 *(float *)((long)param_5 + (ulong)(uint)pfVar8[-8] * 4) + fVar16 * fVar12 * fVar12;
            *(float *)((long)param_5 + (ulong)(uint)pfVar8[-7] * 4) =
                 *(float *)((long)param_5 + (ulong)(uint)pfVar8[-7] * 4) + fVar16 * fVar13 * fVar13;
            *(float *)((long)param_5 + (ulong)(uint)pfVar8[-6] * 4) =
                 *(float *)((long)param_5 + (ulong)(uint)pfVar8[-6] * 4) + fVar16 * fVar14 * fVar14;
          }
        }
        pfVar8 = pfVar8 + 0x10;
        lVar9 = lVar9 + -0x40;
      } while (lVar9 != 0);
    }
    return;
  }
  fVar12 = 1.0;
  if (0.000345267 <= ABS(fVar10) || 0.000345267 <= ABS(fVar15)) {
    fVar12 = fVar10;
  }
  fVar11 = 0.0;
  if (0.000345267 <= ABS(fVar10) || 0.000345267 <= ABS(fVar15)) {
    fVar11 = fVar15;
  }
  if (*(uint *)(param_3 + 0x20) != 0) {
    puVar7 = *(uint **)(param_3 + 0x18);
    puVar1 = puVar7 + (ulong)*(uint *)(param_3 + 0x20) * 0x10;
    do {
      fVar10 = (float)puVar7[7] * fVar12 + fVar11 * (float)puVar7[8];
      fVar15 = (float)puVar7[10] * fVar12 + fVar11 * (float)puVar7[0xb];
      bVar3 = true;
      bVar5 = false;
      if (-1e-05 <= fVar10) {
        bVar3 = false;
        bVar5 = true;
        if (!NAN(fVar15)) {
          bVar3 = fVar15 < -1e-05;
          bVar5 = false;
        }
      }
      auVar18._0_4_ = fVar15 * fVar15 + fVar10 * fVar10;
      bVar4 = true;
      bVar6 = false;
      if (bVar3 == bVar5) {
        bVar4 = false;
        bVar6 = true;
        if (!NAN(auVar18._0_4_)) {
          bVar4 = auVar18._0_4_ < 1.1920929e-07;
          bVar6 = false;
        }
      }
      if (bVar4 == bVar6) {
        uVar2 = puVar7[1];
        auVar18._4_4_ = auVar18._0_4_;
        auVar18._8_4_ = auVar18._0_4_;
        auVar18._12_4_ = auVar18._0_4_;
        auVar18 = NEON_frecpe(auVar18,4);
        *(float *)((long)param_5 + (ulong)*puVar7 * 4) =
             *(float *)((long)param_5 + (ulong)*puVar7 * 4) + auVar18._0_4_ * fVar10 * fVar10;
        *(float *)((long)param_5 + (ulong)uVar2 * 4) =
             *(float *)((long)param_5 + (ulong)uVar2 * 4) + auVar18._0_4_ * fVar15 * fVar15;
      }
      puVar7 = puVar7 + 0x10;
    } while (puVar7 != puVar1);
  }
  return;
}


