/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e03d0; name: FUN_.text__006e03d0
 */


void FUN__text__006e03d0(float param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                        int *param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  ulong uVar7;
  float *pfVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float local_18 [4];
  float local_8;
  float fStack_4;
  
  uVar1 = *(uint *)(param_4 + 0x70);
  uVar7 = (ulong)uVar1;
  if ((int)uVar1 < 2) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    return;
  }
  fVar18 = 0.0;
  pfVar8 = *(float **)(*(long *)(param_4 + 0x58) + 0x58);
  if (param_6[0x16] == 1) {
    iVar9 = uVar1 - 1;
    pfVar12 = pfVar8;
    do {
      pfVar12 = *(float **)(pfVar12 + 0x16);
      iVar9 = iVar9 + -1;
      pfVar14 = *(float **)(pfVar12 + 0x18);
      fVar19 = (float)*(undefined8 *)pfVar12 - *pfVar14;
      fVar20 = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20) - pfVar14[1];
      fVar21 = (float)*(undefined8 *)(pfVar12 + 2) - pfVar14[2];
      fVar22 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20) - pfVar14[3];
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      auVar23._4_4_ = fVar20;
      auVar23._0_4_ = fVar19;
      auVar23._8_4_ = fVar21;
      auVar23._12_4_ = fVar22;
      auVar2._4_4_ = fVar20;
      auVar2._0_4_ = fVar19;
      auVar2._8_4_ = fVar21;
      auVar2._12_4_ = fVar22;
      auVar23 = NEON_ext(auVar23,auVar2,8,1);
      fVar18 = fVar18 + SQRT(auVar23._0_4_ + fVar19 + auVar23._4_4_ + fVar20);
    } while (iVar9 != 0);
    fVar18 = 1.0 / fVar18;
  }
  lVar10 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
  fVar19 = 1.0;
  if (*(char *)(lVar10 + 0x75c) != '\0') {
    fVar19 = *(float *)(param_5 + 0x74);
  }
  fVar20 = 1.0;
  if (*(char *)(lVar10 + 0x756) != '\0') {
    fVar20 = *(float *)(param_5 + 0x70);
  }
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    iVar9 = *param_6;
  }
  else {
    fVar21 = *(float *)(param_4 + 0x80);
    iVar9 = 0;
    uVar13 = 0;
    puVar15 = (undefined8 *)(param_3 + 0x50);
    do {
      if (param_6[0x16] == 1) {
        uVar28 = (*(undefined8 **)(pfVar8 + 0x18))[1];
        uVar17 = **(undefined8 **)(pfVar8 + 0x18);
        iVar16 = iVar9;
        if (iVar9 < 3) {
          iVar16 = 2;
        }
        bVar6 = uVar13 != 0;
        lVar10 = param_3 + (ulong)(iVar16 - 2) * 0x50;
        fVar22 = (float)uVar17 - *pfVar8;
        fVar24 = (float)((ulong)uVar17 >> 0x20) - pfVar8[1];
        fVar25 = (float)uVar28 - pfVar8[2];
        fVar26 = (float)((ulong)uVar28 >> 0x20) - pfVar8[3];
        fVar22 = fVar22 * fVar22;
        fVar24 = fVar24 * fVar24;
        fVar25 = fVar25 * fVar25;
        fVar26 = fVar26 * fVar26;
        auVar3._4_4_ = fVar24;
        auVar3._0_4_ = fVar22;
        auVar3._8_4_ = fVar25;
        auVar3._12_4_ = fVar26;
        auVar4._4_4_ = fVar24;
        auVar4._0_4_ = fVar22;
        auVar4._8_4_ = fVar25;
        auVar4._12_4_ = fVar26;
        auVar23 = NEON_ext(auVar3,auVar4,8,1);
        local_8 = *(float *)(param_4 + 0x8c) * 0.1;
        fVar22 = SQRT(auVar23._0_4_ + fVar22 + auVar23._4_4_ + fVar24);
        local_18[0] = 0.0;
        if (bVar6) {
          local_18[0] = *(float *)(lVar10 + 0x30) + fVar18 * fVar22;
        }
        local_18[3] = local_8;
        local_18[1] = 0.0;
        if (bVar6) {
          local_18[3] = *(float *)(lVar10 + 0x30) - fVar22 * 0.1;
          local_18[1] = *(float *)(lVar10 + 0x34) + fVar18 * fVar22;
        }
        fStack_4 = local_8;
        if (bVar6) {
          fStack_4 = *(float *)(lVar10 + 0x38) - fVar22 * 0.1;
        }
        local_18[2] = 0.0;
        if (bVar6) {
          local_18[2] = *(float *)(lVar10 + 0x38) + fVar18 * fVar22;
        }
        if (bVar6) {
          local_8 = *(float *)(lVar10 + 0x34) - fVar22 * 0.1;
        }
LAB__text__006e055c:
        fVar24 = local_18[(long)param_6[3] * 3];
        fVar25 = local_18[(long)param_6[4] * 3 + 1];
        fVar22 = local_18[(long)param_6[5] * 3 + 2];
      }
      else {
        fVar22 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        if (param_6[0x16] == 0) {
          fVar22 = (float)(int)uVar13;
          local_18[0] = fVar22 / (float)(int)(uVar1 - 1);
          local_18[1] = local_18[0];
          fVar22 = ((fVar21 - (float)(int)fVar21) + param_1 + fVar22) /
                   (float)((int)(float)param_6[6] + -1);
          local_8 = 1.0;
          if (fVar22 <= 1.0) {
            local_8 = fVar22;
          }
          fStack_4 = local_8;
          local_18[2] = local_18[0];
          local_18[3] = local_8;
          goto LAB__text__006e055c;
        }
      }
      fVar26 = pfVar8[1];
      fVar5 = pfVar8[2];
      iVar9 = iVar9 + 2;
      fVar27 = pfVar8[0x14];
      *(float *)(puVar15 + -10) = *pfVar8;
      *(float *)((long)puVar15 + -0x4c) = fVar26;
      *(float *)(puVar15 + -9) = fVar5;
      uVar28 = *(undefined8 *)(pfVar8 + 2);
      uVar17 = *(undefined8 *)pfVar8;
      *(float *)((long)puVar15 + -0x44) = fVar19 * fVar20 * fVar27;
      *(float *)((long)puVar15 + 0xc) = -(fVar19 * fVar20 * fVar27);
      *puVar15 = uVar17;
      *(int *)(puVar15 + 1) = (int)uVar28;
      fVar26 = pfVar8[9];
      fVar5 = pfVar8[10];
      *(float *)(puVar15 + -8) = pfVar8[8];
      *(float *)((long)puVar15 + -0x3c) = fVar26;
      *(float *)(puVar15 + -7) = fVar5;
      fVar26 = pfVar8[9];
      fVar5 = pfVar8[10];
      *(float *)(puVar15 + 2) = pfVar8[8];
      *(float *)((long)puVar15 + 0x14) = fVar26;
      *(float *)(puVar15 + 3) = fVar5;
      fVar26 = pfVar8[0xc];
      fVar5 = pfVar8[0xd];
      *(float *)(puVar15 + -5) = pfVar8[0xe];
      *(float *)(puVar15 + -6) = fVar26;
      *(float *)((long)puVar15 + -0x2c) = fVar5;
      fVar26 = pfVar8[0xc];
      fVar5 = pfVar8[0xd];
      fVar27 = pfVar8[0xe];
      puVar15[-4] = CONCAT44(fVar25,fVar24);
      puVar15[6] = CONCAT44(fVar25,fVar24);
      *(float *)(puVar15 + 5) = fVar27;
      *(float *)(puVar15 + 4) = fVar26;
      *(float *)((long)puVar15 + 0x24) = fVar5;
      *(float *)(puVar15 + -3) = fVar22;
      *(float *)(puVar15 + 7) = fVar22;
      fVar22 = (float)(int)uVar13;
      uVar13 = uVar13 + 1;
      *(float *)((long)puVar15 + -0x34) = fVar22;
      *(float *)((long)puVar15 + 0x1c) = fVar22;
      puVar15 = puVar15 + 0x14;
      pfVar8 = *(float **)(pfVar8 + 0x16);
    } while (uVar7 != uVar13);
    *(uint *)(param_4 + 0x78) = uVar1 << 1;
    iVar9 = *param_6;
  }
  if (((iVar9 != 0) && (iVar9 != 3)) && (0 < (int)uVar1)) {
    lVar10 = *(long *)(param_4 + 0x58);
    puVar11 = (undefined4 *)(param_3 + 0x98);
    do {
      lVar10 = *(long *)(lVar10 + 0x58);
      uVar7 = uVar7 - 1;
      uVar17 = *(undefined8 *)(lVar10 + 0x48);
      *(undefined8 *)(puVar11 + -0x16) = *(undefined8 *)(lVar10 + 0x40);
      puVar11[-0x14] = (int)uVar17;
      uVar17 = *(undefined8 *)(lVar10 + 0x48);
      *(undefined8 *)(puVar11 + -2) = *(undefined8 *)(lVar10 + 0x40);
      *puVar11 = (int)uVar17;
      puVar11 = puVar11 + 0x28;
    } while (uVar7 != 0);
  }
  return;
}


