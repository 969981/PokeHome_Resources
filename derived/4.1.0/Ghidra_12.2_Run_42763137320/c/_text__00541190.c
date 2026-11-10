/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00541190; name: FUN_.text__00541190
 */


undefined8 FUN__text__00541190(undefined8 param_1,long param_2,float *param_3,undefined8 param_4)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar6 = *(int *)(param_2 + 0x200);
  if (*(int *)(param_2 + 0x204) < 1) {
    if (0 < iVar6) {
      lVar8 = 0;
      lVar9 = 0x30;
      do {
        pfVar1 = (float *)(param_2 + lVar8);
        fVar12 = param_3[7] * (pfVar1[1] - param_3[1]);
        fVar10 = param_3[6] * (*pfVar1 - *param_3);
        fVar14 = (pfVar1[3] - *param_3) * param_3[6];
        fVar18 = param_3[8] * (pfVar1[2] - param_3[2]);
        fVar16 = (pfVar1[4] - param_3[1]) * param_3[7];
        fVar17 = (pfVar1[5] - param_3[2]) * param_3[8];
        fVar19 = (float)NEON_fminnm(fVar10,fVar14);
        if (fVar10 <= fVar14) {
          fVar10 = fVar14;
        }
        NEON_fminnm(fVar12,fVar16);
        NEON_fminnm(fVar18,fVar17);
        if (fVar12 <= fVar16) {
          fVar12 = fVar16;
        }
        if (fVar18 <= fVar17) {
          fVar18 = fVar17;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        uVar11 = NEON_fminnm(fVar10,0x3f800000);
        uVar13 = NEON_fminnm(fVar12,0x3f800000);
        uVar15 = NEON_fminnm(fVar18,0x3f800000);
        uVar13 = NEON_fminnm(uVar13,uVar15);
        fVar10 = (float)NEON_fminnm(uVar11,uVar13);
        bVar2 = false;
        bVar3 = false;
        bVar4 = false;
        if (fVar19 <= fVar10) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar19)) {
            bVar2 = fVar19 < 1.0;
            bVar3 = fVar19 == 1.0;
            bVar4 = false;
          }
        }
        if (bVar3 || bVar2 != bVar4) {
          uVar5 = FUN__text__005413e0(param_4,*(undefined8 *)(param_2 + lVar9 * 8));
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          iVar6 = *(int *)(param_2 + 0x200);
        }
        lVar7 = lVar9 + -0x2f;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x18;
      } while (lVar7 < iVar6);
    }
  }
  else if (0 < iVar6) {
    lVar8 = 0;
    lVar9 = 0x30;
    do {
      pfVar1 = (float *)(param_2 + lVar8);
      fVar12 = param_3[7] * (pfVar1[1] - param_3[1]);
      fVar10 = param_3[6] * (*pfVar1 - *param_3);
      fVar14 = (pfVar1[3] - *param_3) * param_3[6];
      fVar18 = param_3[8] * (pfVar1[2] - param_3[2]);
      fVar16 = (pfVar1[4] - param_3[1]) * param_3[7];
      fVar17 = (pfVar1[5] - param_3[2]) * param_3[8];
      fVar19 = (float)NEON_fminnm(fVar10,fVar14);
      if (fVar10 <= fVar14) {
        fVar10 = fVar14;
      }
      NEON_fminnm(fVar12,fVar16);
      NEON_fminnm(fVar18,fVar17);
      if (fVar12 <= fVar16) {
        fVar12 = fVar16;
      }
      if (fVar18 <= fVar17) {
        fVar18 = fVar17;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      uVar11 = NEON_fminnm(fVar10,0x3f800000);
      uVar13 = NEON_fminnm(fVar12,0x3f800000);
      uVar15 = NEON_fminnm(fVar18,0x3f800000);
      uVar13 = NEON_fminnm(uVar13,uVar15);
      fVar10 = (float)NEON_fminnm(uVar11,uVar13);
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if (fVar19 <= fVar10) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar19)) {
          bVar2 = fVar19 < 1.0;
          bVar3 = fVar19 == 1.0;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        uVar5 = FUN__text__00541190(param_1,*(undefined8 *)(param_2 + lVar9 * 8),param_3,param_4);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        iVar6 = *(int *)(param_2 + 0x200);
      }
      lVar7 = lVar9 + -0x2f;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar7 < iVar6);
  }
  return 1;
}


