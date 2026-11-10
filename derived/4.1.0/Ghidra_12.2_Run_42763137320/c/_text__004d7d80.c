/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d7d80; name: FUN_.text__004d7d80
 */


undefined8 FUN__text__004d7d80(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  size_t __n;
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
  
  if ((param_3 & 1) != 0) {
    pvVar5 = (void *)FUN__text__00400f90(5,(*(uint *)(param_1 + 4) & 0xff) * 4 + 0xc & 0x7f0,0x10);
    *param_1 = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 4) != 0) {
      memset(pvVar5,0,(ulong)*(byte *)(param_1 + 4) << 2);
    }
  }
  uVar3 = param_3 & 0xff;
  if ((uVar3 >> 2 & 1) != 0) {
    pvVar5 = (void *)FUN__text__00400f90(5,(*(uint *)(param_1 + 4) & 0xff) * 4 + 0xc & 0x7f0,0x10);
    param_1[2] = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 4) != 0) {
      memset(pvVar5,0,(ulong)*(byte *)(param_1 + 4) << 2);
    }
  }
  if ((uVar3 >> 4 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 4) & 0xff;
    if ((*(uint *)(param_1 + 4) & 0xf00) == 0x200) {
      uVar4 = 1;
    }
    uVar6 = FUN__text__00400f90(5,uVar4 * 0x90,0x10);
    param_1[7] = uVar6;
    lVar7 = FUN__text__00400f90(5,uVar4 * 0x90,0x10);
    param_1[8] = lVar7;
    if (lVar7 == 0 || param_1[7] == 0) {
      return 2;
    }
    fVar13 = 9443.0 / (float)param_2;
    fVar8 = sinf(fVar13);
    fVar13 = cosf(fVar13);
    if (uVar4 != 0) {
      fVar8 = fVar8 * 1.5803077;
      lVar7 = 0;
      fVar10 = 2.2589254 - fVar13 * 0.25892544;
      fVar9 = fVar13 * 0.25892544 + 2.2589254;
      fVar11 = fVar10 + fVar8;
      fVar14 = 1.0 / fVar11;
      fVar19 = (fVar10 - fVar8) / fVar11;
      fVar10 = (fVar9 + fVar8) * 1.2589254 * fVar14;
      fVar8 = (fVar9 - fVar8) * 1.2589254 * fVar14;
      fVar21 = fVar19 * -2.0;
      fVar14 = (fVar13 * -5.6876373 + -0.65193564) * fVar14;
      fVar11 = (fVar13 * -4.517851 + 0.5178509) / fVar11;
      fVar17 = -(fVar19 * fVar14);
      fVar13 = fVar14 - fVar11 * fVar10;
      fVar15 = fVar8 - fVar14 * fVar11;
      fVar20 = fVar11 * fVar11;
      fVar12 = fVar19 * fVar11;
      fVar18 = -(fVar11 * fVar8);
      fVar16 = fVar17 - fVar11 * fVar15;
      fVar9 = fVar8 - (fVar13 * fVar11 + fVar19 * fVar10);
      do {
        puVar1 = (undefined8 *)(param_1[8] + lVar7);
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar2 = param_1[8] + lVar7;
        lVar7 = lVar7 + 0x90;
        *(float *)(lVar2 + 0x10) = fVar10;
        *(float *)(lVar2 + 0x14) = fVar10;
        *(float *)(lVar2 + 0x18) = fVar10;
        *(float *)(lVar2 + 0x1c) = fVar10;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined4 *)(lVar2 + 0x28) = 0;
        *(float *)(lVar2 + 0x2c) = fVar13;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(float *)(lVar2 + 0x38) = fVar13;
        *(float *)(lVar2 + 0x3c) = fVar9;
        *(undefined4 *)(lVar2 + 0x40) = 0;
        *(float *)(lVar2 + 0x44) = fVar13;
        *(float *)(lVar2 + 0x48) = fVar9;
        *(float *)(lVar2 + 0x4c) = (fVar17 + fVar10 * fVar12) - fVar11 * fVar9;
        *(float *)(lVar2 + 0x50) = fVar14;
        *(float *)(lVar2 + 0x54) = fVar15;
        *(float *)(lVar2 + 0x58) = fVar16;
        *(float *)(lVar2 + 0x5c) = -(fVar19 * fVar8) - fVar11 * (fVar16 + fVar17);
        *(float *)(lVar2 + 0x60) = fVar8;
        *(float *)(lVar2 + 100) = fVar18;
        *(float *)(lVar2 + 0x68) = -(fVar11 * fVar18) + -(fVar19 * fVar8);
        *(float *)(lVar2 + 0x6c) = fVar21 * fVar18 - -(fVar11 * fVar18) * fVar11;
        *(float *)(lVar2 + 0x70) = -fVar11;
        *(float *)(lVar2 + 0x74) = fVar20 - fVar19;
        *(float *)(lVar2 + 0x78) = -(fVar11 * fVar20) - fVar11 * fVar21;
        *(float *)(lVar2 + 0x7c) =
             (fVar19 * fVar19 + fVar20 * fVar19 * -3.0) - fVar11 * -(fVar11 * fVar20);
        *(float *)(lVar2 + 0x80) = -fVar19;
        *(float *)(lVar2 + 0x84) = fVar12;
        *(float *)(lVar2 + 0x88) = -(fVar11 * fVar12) + fVar19 * fVar19;
        *(float *)(lVar2 + 0x8c) = fVar12 * fVar21 - -(fVar11 * fVar12) * fVar11;
      } while ((ulong)uVar4 * 0x90 != lVar7);
    }
    fVar13 = 238.76105 / (float)param_2;
    fVar8 = sinf(fVar13);
    fVar13 = cosf(fVar13);
    if (uVar4 != 0) {
      fVar10 = fVar8 + 1.0;
      lVar7 = 0;
      fVar17 = (1.0 - fVar8) / fVar10;
      fVar19 = (fVar13 * -2.0) / fVar10;
      fVar20 = fVar17 * -2.0;
      fVar18 = fVar19 * fVar19;
      fVar9 = fVar17 * fVar19;
      fVar8 = ((fVar13 + 1.0) * 0.5) / fVar10;
      fVar16 = -(fVar19 * fVar8);
      fVar10 = -(fVar13 + 1.0) / fVar10;
      fVar13 = fVar10 - fVar19 * fVar8;
      fVar11 = fVar8 - fVar10 * fVar19;
      fVar15 = -(fVar17 * fVar10);
      fVar12 = fVar15 - fVar19 * fVar11;
      fVar14 = fVar8 - (fVar13 * fVar19 + fVar17 * fVar8);
      do {
        puVar1 = (undefined8 *)(param_1[7] + lVar7);
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar2 = param_1[7] + lVar7;
        lVar7 = lVar7 + 0x90;
        *(float *)(lVar2 + 0x10) = fVar8;
        *(float *)(lVar2 + 0x14) = fVar8;
        *(float *)(lVar2 + 0x18) = fVar8;
        *(float *)(lVar2 + 0x1c) = fVar8;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined4 *)(lVar2 + 0x28) = 0;
        *(float *)(lVar2 + 0x2c) = fVar13;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(float *)(lVar2 + 0x38) = fVar13;
        *(float *)(lVar2 + 0x3c) = fVar14;
        *(undefined4 *)(lVar2 + 0x40) = 0;
        *(float *)(lVar2 + 0x44) = fVar13;
        *(float *)(lVar2 + 0x48) = fVar14;
        *(float *)(lVar2 + 0x4c) = (fVar15 + fVar8 * fVar9) - fVar19 * fVar14;
        *(float *)(lVar2 + 0x50) = fVar10;
        *(float *)(lVar2 + 0x54) = fVar11;
        *(float *)(lVar2 + 0x58) = fVar12;
        *(float *)(lVar2 + 0x5c) = -(fVar17 * fVar8) - fVar19 * (fVar12 + fVar15);
        *(float *)(lVar2 + 0x60) = fVar8;
        *(float *)(lVar2 + 100) = fVar16;
        *(float *)(lVar2 + 0x68) = -(fVar19 * fVar16) + -(fVar17 * fVar8);
        *(float *)(lVar2 + 0x6c) = fVar20 * fVar16 - -(fVar19 * fVar16) * fVar19;
        *(float *)(lVar2 + 0x70) = -fVar19;
        *(float *)(lVar2 + 0x74) = fVar18 - fVar17;
        *(float *)(lVar2 + 0x78) = -(fVar19 * fVar18) - fVar19 * fVar20;
        *(float *)(lVar2 + 0x7c) =
             (fVar17 * fVar17 + fVar18 * fVar17 * -3.0) - fVar19 * -(fVar19 * fVar18);
        *(float *)(lVar2 + 0x80) = -fVar17;
        *(float *)(lVar2 + 0x84) = fVar9;
        *(float *)(lVar2 + 0x88) = -(fVar19 * fVar9) + fVar17 * fVar17;
        *(float *)(lVar2 + 0x8c) = fVar9 * fVar20 - -(fVar19 * fVar9) * fVar19;
      } while ((ulong)uVar4 * 0x90 != lVar7);
    }
  }
  if ((uVar3 >> 1 & 1) != 0) {
    pvVar5 = (void *)FUN__text__00400f90(5,(*(uint *)(param_1 + 4) & 0xff) * 4 + 0xc & 0x7f0,0x10);
    param_1[1] = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 4) == 0) {
      __n = 0;
      pvVar5 = (void *)FUN__text__00400f90(5,0,0x10);
      param_1[5] = pvVar5;
    }
    else {
      memset(pvVar5,0,(ulong)*(byte *)(param_1 + 4) << 2);
      __n = (ulong)*(byte *)(param_1 + 4) * 0x30;
      pvVar5 = (void *)FUN__text__00400f90(5,__n,0x10);
      param_1[5] = pvVar5;
    }
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    memset(pvVar5,0,__n);
  }
  if (((uVar3 >> 5 & 1) != 0) && ((*(uint *)(param_1 + 4) & 0xf00) == 0x200)) {
    pvVar5 = (void *)FUN__text__00400f90(5,(*(uint *)(param_1 + 4) & 0xff) * 4 + 0xc & 0x7f0,0x10);
    param_1[6] = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 4) != 0) {
      memset(pvVar5,0,(ulong)*(byte *)(param_1 + 4) << 2);
    }
  }
  *(char *)(param_1 + 9) = (char)param_3;
  return 1;
}


