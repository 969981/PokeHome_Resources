/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005361e0; name: FUN_.text__005361e0
 */


undefined8 FUN__text__005361e0(undefined8 param_1,long param_2,float *param_3,long param_4)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar6 = *(int *)(param_2 + 0x200);
  if (*(int *)(param_2 + 0x204) < 1) {
    if (0 < iVar6) {
      lVar9 = 0;
      lVar10 = 0x30;
      do {
        pfVar1 = (float *)(param_2 + lVar9);
        fVar13 = param_3[7] * (pfVar1[1] - param_3[1]);
        fVar11 = param_3[6] * (*pfVar1 - *param_3);
        fVar15 = (pfVar1[3] - *param_3) * param_3[6];
        fVar19 = param_3[8] * (pfVar1[2] - param_3[2]);
        fVar17 = (pfVar1[4] - param_3[1]) * param_3[7];
        fVar18 = (pfVar1[5] - param_3[2]) * param_3[8];
        fVar20 = (float)NEON_fminnm(fVar11,fVar15);
        if (fVar11 <= fVar15) {
          fVar11 = fVar15;
        }
        NEON_fminnm(fVar13,fVar17);
        NEON_fminnm(fVar19,fVar18);
        if (fVar13 <= fVar17) {
          fVar13 = fVar17;
        }
        if (fVar19 <= fVar18) {
          fVar19 = fVar18;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        uVar12 = NEON_fminnm(fVar11,0x3f800000);
        uVar14 = NEON_fminnm(fVar13,0x3f800000);
        uVar16 = NEON_fminnm(fVar19,0x3f800000);
        uVar14 = NEON_fminnm(uVar14,uVar16);
        fVar11 = (float)NEON_fminnm(uVar12,uVar14);
        bVar2 = false;
        bVar3 = false;
        bVar4 = false;
        if (fVar20 <= fVar11) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar20)) {
            bVar2 = fVar20 < 1.0;
            bVar3 = fVar20 == 1.0;
            bVar4 = false;
          }
        }
        if (bVar3 || bVar2 != bVar4) {
          puVar7 = *(undefined4 **)(param_2 + lVar10 * 8);
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x150) * 4) = *puVar7;
            *(undefined4 *)(param_4 + 0x10 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[1];
            *(undefined4 *)(param_4 + 0x20 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[2];
            *(undefined4 *)(param_4 + 0x30 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[3];
            *(undefined4 *)(param_4 + 0x40 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[4];
            *(undefined4 *)(param_4 + 0x50 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[5];
            *(undefined4 *)(param_4 + 0x60 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[6];
            *(undefined4 *)(param_4 + 0x70 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[7];
            *(undefined4 *)(param_4 + 0x80 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[8];
            *(undefined4 *)(param_4 + 0x90 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[9];
            *(undefined4 *)(param_4 + 0xa0 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[10];
            *(undefined4 *)(param_4 + 0xb0 + (ulong)*(uint *)(param_4 + 0x150) * 4) = puVar7[0xb];
            *(undefined4 **)(param_4 + (ulong)*(uint *)(param_4 + 0x150) * 8 + 0x128) = puVar7;
            iVar6 = *(int *)(param_4 + 0x150) + 1;
            *(int *)(param_4 + 0x150) = iVar6;
            if (iVar6 == 4) {
              FUN__text__0053652c(param_4);
              *(undefined4 *)(param_4 + 0x150) = 0;
            }
          }
          if (*(char *)(param_4 + 0x159) != '\0') {
            return 0;
          }
          iVar6 = *(int *)(param_2 + 0x200);
        }
        lVar8 = lVar10 + -0x2f;
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x18;
      } while (lVar8 < iVar6);
    }
  }
  else if (0 < iVar6) {
    lVar9 = 0;
    lVar10 = 0x30;
    do {
      pfVar1 = (float *)(param_2 + lVar9);
      fVar13 = param_3[7] * (pfVar1[1] - param_3[1]);
      fVar11 = param_3[6] * (*pfVar1 - *param_3);
      fVar15 = (pfVar1[3] - *param_3) * param_3[6];
      fVar19 = param_3[8] * (pfVar1[2] - param_3[2]);
      fVar17 = (pfVar1[4] - param_3[1]) * param_3[7];
      fVar18 = (pfVar1[5] - param_3[2]) * param_3[8];
      fVar20 = (float)NEON_fminnm(fVar11,fVar15);
      if (fVar11 <= fVar15) {
        fVar11 = fVar15;
      }
      NEON_fminnm(fVar13,fVar17);
      NEON_fminnm(fVar19,fVar18);
      if (fVar13 <= fVar17) {
        fVar13 = fVar17;
      }
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      uVar12 = NEON_fminnm(fVar11,0x3f800000);
      uVar14 = NEON_fminnm(fVar13,0x3f800000);
      uVar16 = NEON_fminnm(fVar19,0x3f800000);
      uVar14 = NEON_fminnm(uVar14,uVar16);
      fVar11 = (float)NEON_fminnm(uVar12,uVar14);
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if (fVar20 <= fVar11) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar20)) {
          bVar2 = fVar20 < 1.0;
          bVar3 = fVar20 == 1.0;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        uVar5 = FUN__text__005361e0(param_1,*(undefined8 *)(param_2 + lVar10 * 8),param_3,param_4);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        iVar6 = *(int *)(param_2 + 0x200);
      }
      lVar8 = lVar10 + -0x2f;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar8 < iVar6);
  }
  return 1;
}


