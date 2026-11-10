/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048c9a0; name: FUN_.text__0048c9a0
 */


void FUN__text__0048c9a0(float param_1,float param_2,float param_3,long param_4,uint param_5,
                        void *param_6)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float *pfVar7;
  uint *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_5 != 0) {
    memset(param_6,0,(ulong)param_5 << 2);
  }
  if (0.0 < param_3) {
    fVar10 = SQRT(param_1 * param_1 + param_2 * param_2 + param_3 * param_3);
    if (fVar10 == 0.0) {
      param_1 = 0.0;
      param_2 = 0.0;
      param_3 = 0.0;
    }
    else {
      fVar10 = 1.0 / fVar10;
      param_1 = param_1 * fVar10;
      param_2 = param_2 * fVar10;
      param_3 = param_3 * fVar10;
    }
    if (*(uint *)(param_4 + 0x10) != 0) {
      lVar9 = (ulong)*(uint *)(param_4 + 0x10) << 6;
      pfVar7 = (float *)(*(long *)(param_4 + 8) + 0x20);
      do {
        if (pfVar7[-2] <= pfVar7[-5] * param_1 + param_2 * pfVar7[-4] + param_3 * pfVar7[-3]) {
          fVar10 = pfVar7[-1] * param_1 + param_2 * pfVar7[2] + param_3 * pfVar7[5];
          fVar13 = pfVar7[1] * param_1 + param_2 * pfVar7[4] + param_3 * pfVar7[7];
          fVar11 = *pfVar7 * param_1 + param_2 * pfVar7[3] + param_3 * pfVar7[6];
          bVar3 = true;
          bVar5 = false;
          if (-1e-05 <= fVar10) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN(fVar11)) {
              bVar3 = fVar11 < -1e-05;
              bVar5 = false;
            }
          }
          bVar4 = true;
          bVar6 = false;
          if (bVar3 == bVar5) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(fVar13)) {
              bVar4 = fVar13 < -1e-05;
              bVar6 = false;
            }
          }
          auVar14._0_4_ = fVar11 * fVar11 + fVar10 * fVar10 + fVar13 * fVar13;
          bVar3 = true;
          bVar5 = false;
          if (bVar4 == bVar6) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN(auVar14._0_4_)) {
              bVar3 = auVar14._0_4_ < 1e-38;
              bVar5 = false;
            }
          }
          if (bVar3 == bVar5) {
            auVar14._4_4_ = auVar14._0_4_;
            auVar14._8_4_ = auVar14._0_4_;
            auVar14._12_4_ = auVar14._0_4_;
            auVar15 = NEON_frecpe(auVar14,4);
            fVar12 = auVar15._0_4_;
            *(float *)((long)param_6 + (ulong)(uint)pfVar7[-8] * 4) =
                 *(float *)((long)param_6 + (ulong)(uint)pfVar7[-8] * 4) + fVar12 * fVar10 * fVar10;
            *(float *)((long)param_6 + (ulong)(uint)pfVar7[-7] * 4) =
                 *(float *)((long)param_6 + (ulong)(uint)pfVar7[-7] * 4) + fVar12 * fVar11 * fVar11;
            *(float *)((long)param_6 + (ulong)(uint)pfVar7[-6] * 4) =
                 *(float *)((long)param_6 + (ulong)(uint)pfVar7[-6] * 4) + fVar12 * fVar13 * fVar13;
          }
        }
        pfVar7 = pfVar7 + 0x10;
        lVar9 = lVar9 + -0x40;
      } while (lVar9 != 0);
    }
    return;
  }
  fVar10 = 1.0;
  if (0.000345267 <= ABS(param_1) || 0.000345267 <= ABS(param_2)) {
    fVar10 = param_1;
  }
  fVar11 = 0.0;
  if (0.000345267 <= ABS(param_1) || 0.000345267 <= ABS(param_2)) {
    fVar11 = param_2;
  }
  if (*(uint *)(param_4 + 0x20) != 0) {
    puVar8 = *(uint **)(param_4 + 0x18);
    puVar1 = puVar8 + (ulong)*(uint *)(param_4 + 0x20) * 0x10;
    do {
      fVar13 = (float)puVar8[7] * fVar10 + fVar11 * (float)puVar8[8];
      fVar12 = (float)puVar8[10] * fVar10 + fVar11 * (float)puVar8[0xb];
      bVar3 = true;
      bVar5 = false;
      if (-1e-05 <= fVar13) {
        bVar3 = false;
        bVar5 = true;
        if (!NAN(fVar12)) {
          bVar3 = fVar12 < -1e-05;
          bVar5 = false;
        }
      }
      auVar15._0_4_ = fVar12 * fVar12 + fVar13 * fVar13;
      bVar4 = true;
      bVar6 = false;
      if (bVar3 == bVar5) {
        bVar4 = false;
        bVar6 = true;
        if (!NAN(auVar15._0_4_)) {
          bVar4 = auVar15._0_4_ < 1.1920929e-07;
          bVar6 = false;
        }
      }
      if (bVar4 == bVar6) {
        uVar2 = puVar8[1];
        auVar15._4_4_ = auVar15._0_4_;
        auVar15._8_4_ = auVar15._0_4_;
        auVar15._12_4_ = auVar15._0_4_;
        auVar15 = NEON_frecpe(auVar15,4);
        *(float *)((long)param_6 + (ulong)*puVar8 * 4) =
             *(float *)((long)param_6 + (ulong)*puVar8 * 4) + auVar15._0_4_ * fVar13 * fVar13;
        *(float *)((long)param_6 + (ulong)uVar2 * 4) =
             *(float *)((long)param_6 + (ulong)uVar2 * 4) + auVar15._0_4_ * fVar12 * fVar12;
      }
      puVar8 = puVar8 + 0x10;
    } while (puVar8 != puVar1);
  }
  return;
}


