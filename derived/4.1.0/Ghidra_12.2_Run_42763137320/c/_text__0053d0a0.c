/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053d0a0; name: FUN_.text__0053d0a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0053d0a0(long param_1,float *param_2,float *param_3,undefined8 param_4,long param_5,
                        long param_6,float *param_7,float *param_8,long param_9,long *param_10,
                        undefined8 *param_11,long *param_12)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_a4;
  float fStack_a0;
  undefined8 local_9c;
  float local_94;
  
  if ((param_6 != 0) && (*(uint *)(param_6 + 0x30) != 0)) {
    plVar5 = *(long **)(param_6 + 0x28);
    lVar7 = (ulong)*(uint *)(param_6 + 0x30) << 3;
    do {
      if (*plVar5 == param_1) {
        return;
      }
      plVar5 = plVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  fVar17 = *(float *)(param_1 + 0x24);
  fVar18 = param_3[1] - *(float *)(param_1 + 8);
  fVar15 = *(float *)(param_1 + 0x1c);
  fVar16 = *(float *)(param_1 + 0x20);
  fVar19 = *param_3 - *(float *)(param_1 + 4);
  fVar20 = param_3[2] - *(float *)(param_1 + 0xc);
  fVar10 = param_2[1] - *(float *)(param_1 + 8);
  fVar12 = *param_2 - *(float *)(param_1 + 4);
  fVar21 = param_2[2] - *(float *)(param_1 + 0xc);
  if (0.0 < fVar15 * fVar19 + fVar18 * fVar16 + fVar20 * fVar17) {
    fVar8 = ABS(ABS(*(float *)(param_5 + 4) * fVar15 + fVar16 * *(float *)(param_5 + 8) +
                    fVar17 * *(float *)(param_5 + 0xc)) + -1.0);
    bVar1 = false;
    bVar2 = false;
    if (0.0 < fVar15 * fVar12 + fVar10 * fVar16 + fVar21 * fVar17) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 < 0.001;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      puVar6 = (undefined8 *)(param_1 + 0x40);
      fStack_a0 = *(float *)(param_1 + 0x14) * fVar17 - *(float *)(param_1 + 0x18) * fVar16;
      local_a4 = *(float *)(param_1 + 0x18) * fVar15 - *(float *)(param_1 + 0x10) * fVar17;
      fVar8 = *(float *)(param_1 + 0x10) * fVar16 - *(float *)(param_1 + 0x14) * fVar15;
      goto LAB__text__0053d264;
    }
  }
  fVar15 = *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar17 = *(float *)(param_1 + 0x30);
  if (fVar15 * fVar19 + fVar18 * fVar16 + fVar20 * fVar17 <= 0.0) {
    return;
  }
  fVar8 = ABS(ABS(fVar15 * *(float *)(param_5 + 4) + *(float *)(param_5 + 8) * fVar16 +
                  *(float *)(param_5 + 0xc) * fVar17) + -1.0);
  bVar1 = false;
  bVar2 = false;
  if (0.0 < fVar15 * fVar12 + fVar10 * fVar16 + fVar21 * fVar17) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar8)) {
      bVar1 = fVar8 < 0.001;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    return;
  }
  puVar6 = (undefined8 *)(param_1 + 0x48);
  fStack_a0 = *(float *)(param_1 + 0x18) * fVar16 - *(float *)(param_1 + 0x14) * fVar17;
  local_a4 = *(float *)(param_1 + 0x10) * fVar17 - *(float *)(param_1 + 0x18) * fVar15;
  fVar8 = *(float *)(param_1 + 0x14) * fVar15 - *(float *)(param_1 + 0x10) * fVar16;
LAB__text__0053d264:
  uVar3 = FUN__text__00530d78(*puVar6);
  fVar18 = fStack_a0 * fVar19 + fVar18 * local_a4 + fVar20 * fVar8;
  fVar10 = fStack_a0 * fVar12 + fVar10 * local_a4 + fVar21 * fVar8;
  if ((0.0 <= fVar18) || (0.0 <= fVar10)) {
    local_9c = 0;
    local_94 = 0.0;
    uVar4 = FUN__text__005170c0(param_1,param_2,param_4,&local_9c);
    if ((uVar4 & 1) != 0) {
      fVar23 = *(float *)(param_9 + 0x38);
      fVar24 = *(float *)(param_9 + 0x3c);
      fVar20 = fVar24 * (param_2[1] - local_9c._4_4_);
      fVar25 = *(float *)(param_9 + 0x40);
      fVar12 = fVar23 * (*param_2 - (float)local_9c);
      fVar11 = *(float *)(param_9 + 0x18);
      fVar9 = *(float *)(param_9 + 0x1c);
      fVar21 = fVar25 * (param_2[2] - local_94);
      fVar22 = *(float *)(param_9 + 0x10);
      fVar14 = *(float *)(param_9 + 0x14);
      fVar13 = fVar22 * fVar22 - (fVar14 * fVar14 + fVar11 * fVar11 + fVar9 * fVar9);
      fVar8 = fVar14 * fVar12 + fVar20 * fVar11 + fVar21 * fVar9;
      fVar19 = (fVar11 * fVar21 - fVar9 * fVar20) * fVar22 + fVar14 * fVar8;
      fVar19 = fVar19 + fVar19 + fVar12 * fVar13;
      fVar28 = (fVar9 * fVar12 - fVar21 * fVar14) * fVar22 + fVar11 * fVar8;
      fVar8 = (fVar14 * fVar20 - fVar11 * fVar12) * fVar22 + fVar9 * fVar8;
      fVar12 = fVar28 + fVar28 + fVar20 * fVar13;
      fVar20 = fVar8 + fVar8 + fVar21 * fVar13;
      fVar21 = SQRT(fVar19 * fVar19 + fVar12 * fVar12 + fVar20 * fVar20);
      if (0.001 < fVar21) {
        fVar26 = (param_3[1] - local_9c._4_4_) * fVar24;
        fVar8 = (*param_3 - (float)local_9c) * fVar23;
        fVar27 = (param_3[2] - local_94) * fVar25;
        fVar29 = fVar8 * fVar14 + fVar11 * fVar26 + fVar9 * fVar27;
        fVar28 = (fVar27 * fVar11 - fVar26 * fVar9) * fVar22 + fVar14 * fVar29;
        fVar30 = (fVar8 * fVar9 - fVar27 * fVar14) * fVar22 + fVar11 * fVar29;
        fVar28 = fVar28 + fVar28 + fVar13 * fVar8;
        fVar30 = fVar30 + fVar30 + fVar13 * fVar26;
        fVar8 = (fVar26 * fVar14 - fVar8 * fVar11) * fVar22 + fVar9 * fVar29;
        fVar8 = fVar8 + fVar8 + fVar13 * fVar27;
        fVar26 = SQRT(fVar28 * fVar28 + fVar30 * fVar30 + fVar8 * fVar8);
        if (0.001 < fVar26) {
          fVar23 = fVar23 * fVar15;
          fVar24 = fVar24 * fVar16;
          fVar25 = fVar25 * fVar17;
          fVar15 = fVar14 * fVar23 + fVar24 * fVar11 + fVar25 * fVar9;
          fVar16 = (fVar11 * fVar25 - fVar9 * fVar24) * fVar22 + fVar14 * fVar15;
          fVar17 = (fVar9 * fVar23 - fVar25 * fVar14) * fVar22 + fVar11 * fVar15;
          fVar15 = (fVar14 * fVar24 - fVar11 * fVar23) * fVar22 + fVar9 * fVar15;
          fVar16 = fVar16 + fVar16 + fVar23 * fVar13;
          fVar17 = fVar17 + fVar17 + fVar24 * fVar13;
          fVar9 = fVar15 + fVar15 + fVar25 * fVar13;
          fVar15 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar9 * fVar9);
          if (fVar15 == 0.0) {
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar9 = 0.0;
          }
          else {
            fVar15 = 1.0 / fVar15;
            fVar16 = fVar16 * fVar15;
            fVar17 = fVar17 * fVar15;
            fVar9 = fVar9 * fVar15;
          }
          fVar12 = (float)NEON_fminnm((fVar16 * fVar19 + fVar12 * fVar17 + fVar20 * fVar9) / fVar21,
                                      0x3f800000);
          if (fVar12 <= -1.0) {
            fVar12 = -1.0;
          }
          fVar12 = acosf(fVar12);
          fVar15 = (float)NEON_fminnm((fVar16 * fVar28 + fVar30 * fVar17 + fVar8 * fVar9) / fVar26,
                                      0x3f800000);
          if (fVar15 <= -1.0) {
            fVar15 = -1.0;
          }
          fVar16 = acosf(fVar15);
          fVar18 = fVar18 * fVar10;
          fVar15 = fVar16 + fVar12;
          fVar10 = fVar12 + 1.5707964;
          if (fVar18 < 0.0) {
            fVar15 = fVar16 - fVar12;
            fVar10 = 1.5707964 - fVar12;
          }
          fVar17 = fVar16 + fVar12;
          if (fVar18 < 0.0) {
            fVar17 = fVar12 - fVar16;
          }
          fVar19 = fVar16 + 1.5707964;
          if (fVar18 < 0.0) {
            fVar19 = 1.5707964 - fVar16;
          }
          if (fVar16 < fVar12) {
            fVar15 = fVar17;
            fVar10 = fVar19;
          }
          fVar10 = 1.0 - (fVar15 / fVar10) * (fVar15 / fVar10);
          if (*param_7 < fVar10) {
            *param_7 = fVar10;
            *param_8 = fVar15 * 0.31830987;
            *param_11 = local_9c;
            *(float *)(param_11 + 1) = local_94;
            lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x18) + (ulong)uVar3 * 0x10;
            if (*(ushort *)(*(long *)(param_1 + 0x38) + 0x74) <= uVar3) {
              lVar7 = _DAT_008a4050;
            }
            *param_12 = lVar7;
            *param_10 = param_1;
          }
        }
      }
    }
  }
  return;
}


