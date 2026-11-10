/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00540060; name: FUN_.text__00540060
 */


undefined8 FUN__text__00540060(undefined8 param_1,long param_2,double *param_3,undefined8 param_4)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  iVar6 = *(int *)(param_2 + 0x380);
  if (*(int *)(param_2 + 900) < 1) {
    if (0 < iVar6) {
      lVar8 = 0;
      lVar9 = 0x60;
      do {
        pdVar1 = (double *)(param_2 + lVar8);
        dVar12 = param_3[7] * (pdVar1[1] - param_3[1]);
        dVar10 = param_3[6] * (*pdVar1 - *param_3);
        dVar14 = (pdVar1[3] - *param_3) * param_3[6];
        dVar18 = param_3[8] * (pdVar1[2] - param_3[2]);
        dVar16 = (pdVar1[4] - param_3[1]) * param_3[7];
        dVar17 = (pdVar1[5] - param_3[2]) * param_3[8];
        dVar19 = (double)NEON_fminnm(dVar10,dVar14);
        if (dVar10 <= dVar14) {
          dVar10 = dVar14;
        }
        NEON_fminnm(dVar12,dVar16);
        NEON_fminnm(dVar18,dVar17);
        if (dVar12 <= dVar16) {
          dVar12 = dVar16;
        }
        if (dVar18 <= dVar17) {
          dVar18 = dVar17;
        }
        if (dVar19 <= 0.0) {
          dVar19 = 0.0;
        }
        uVar11 = NEON_fminnm(dVar10,0x3ff0000000000000);
        uVar13 = NEON_fminnm(dVar12,0x3ff0000000000000);
        uVar15 = NEON_fminnm(dVar18,0x3ff0000000000000);
        uVar13 = NEON_fminnm(uVar13,uVar15);
        dVar10 = (double)NEON_fminnm(uVar11,uVar13);
        bVar2 = false;
        bVar3 = false;
        bVar4 = false;
        if (dVar19 <= dVar10) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar19)) {
            bVar2 = dVar19 < 1.0;
            bVar3 = dVar19 == 1.0;
            bVar4 = false;
          }
        }
        if (bVar3 || bVar2 != bVar4) {
          uVar5 = FUN__text__005402a4(param_4,*(undefined8 *)(param_2 + lVar9 * 8));
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          iVar6 = *(int *)(param_2 + 0x380);
        }
        lVar7 = lVar9 + -0x5f;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x30;
      } while (lVar7 < iVar6);
    }
  }
  else if (0 < iVar6) {
    lVar8 = 0;
    lVar9 = 0x60;
    do {
      pdVar1 = (double *)(param_2 + lVar8);
      dVar12 = param_3[7] * (pdVar1[1] - param_3[1]);
      dVar10 = param_3[6] * (*pdVar1 - *param_3);
      dVar14 = (pdVar1[3] - *param_3) * param_3[6];
      dVar18 = param_3[8] * (pdVar1[2] - param_3[2]);
      dVar16 = (pdVar1[4] - param_3[1]) * param_3[7];
      dVar17 = (pdVar1[5] - param_3[2]) * param_3[8];
      dVar19 = (double)NEON_fminnm(dVar10,dVar14);
      if (dVar10 <= dVar14) {
        dVar10 = dVar14;
      }
      NEON_fminnm(dVar12,dVar16);
      NEON_fminnm(dVar18,dVar17);
      if (dVar12 <= dVar16) {
        dVar12 = dVar16;
      }
      if (dVar18 <= dVar17) {
        dVar18 = dVar17;
      }
      if (dVar19 <= 0.0) {
        dVar19 = 0.0;
      }
      uVar11 = NEON_fminnm(dVar10,0x3ff0000000000000);
      uVar13 = NEON_fminnm(dVar12,0x3ff0000000000000);
      uVar15 = NEON_fminnm(dVar18,0x3ff0000000000000);
      uVar13 = NEON_fminnm(uVar13,uVar15);
      dVar10 = (double)NEON_fminnm(uVar11,uVar13);
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if (dVar19 <= dVar10) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar19)) {
          bVar2 = dVar19 < 1.0;
          bVar3 = dVar19 == 1.0;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        uVar5 = FUN__text__00540060(param_1,*(undefined8 *)(param_2 + lVar9 * 8),param_3,param_4);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        iVar6 = *(int *)(param_2 + 0x380);
      }
      lVar7 = lVar9 + -0x5f;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar7 < iVar6);
  }
  return 1;
}


