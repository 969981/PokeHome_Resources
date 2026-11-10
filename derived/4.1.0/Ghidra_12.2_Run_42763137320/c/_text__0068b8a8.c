/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068b8a8; name: FUN_.text__0068b8a8
 */


void FUN__text__0068b8a8(float param_1,long param_2,long param_3,long param_4,int param_5,
                        long param_6,long param_7,int param_8,long param_9,int param_10,
                        byte param_11)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  long lVar23;
  long lVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  lVar24 = *(long *)(param_2 + 0xa0);
  lVar23 = (ulong)*(byte *)(*(long *)(param_2 + 0xa8) + (long)param_10) * 4;
  iVar4 = *(int *)(param_9 + lVar23);
  iVar5 = *(int *)(param_6 + lVar23);
  *(int *)(param_9 + lVar23) = iVar4 + 1;
  pfVar25 = (float *)(lVar24 + (long)param_10 * 0x38);
  lVar23 = 0x40;
  if (param_4 != 0) {
    lVar23 = 0x60;
  }
  fVar29 = *pfVar25;
  fVar28 = pfVar25[1];
  pfVar1 = (float *)(param_7 + param_3 + lVar23 * (ulong)(uint)(iVar4 + iVar5 * param_8));
  if ((param_11 & 1) == 0) {
    fVar30 = pfVar25[2];
  }
  else {
    fVar30 = fVar29 * -0.5;
  }
  fVar31 = pfVar25[3];
  lVar23 = lVar24 + (long)param_10 * 0x38;
  fVar26 = (float)(int)*(short *)(lVar23 + 0x30);
  fVar27 = (fVar28 * fVar26) / *(float *)(param_2 + 0xbc);
  if (param_4 == 0) {
    lVar24 = lVar24 + (long)param_10 * 0x38;
    bVar6 = *(byte *)(lVar24 + 0x32);
    *pfVar1 = fVar29;
    pfVar1[1] = fVar28;
    pfVar1[2] = fVar30;
    pfVar1[3] = fVar31;
    uVar2 = *(undefined8 *)(lVar24 + 0x20);
    *(undefined8 *)(pfVar1 + 4) = *(undefined8 *)(lVar24 + 0x18);
    *(undefined8 *)(pfVar1 + 6) = uVar2;
    pfVar1[8] = *(float *)(lVar23 + 0x10);
    fVar28 = *(float *)(lVar23 + 0x14);
    pfVar1[0xb] = fVar27;
    pfVar1[0xf] = fVar26;
    pfVar1[9] = fVar28;
    pfVar1[10] = (float)(uint)bVar6;
    return;
  }
  pfVar25 = (float *)(param_4 + (long)param_10 * 0x34);
  fVar32 = fVar31;
  if ((param_11 & 1) == 0) {
    if (param_5 == 1) {
      fVar32 = fVar28 + fVar31;
    }
    else {
      fVar32 = 0.0;
      if (param_5 == 0) {
        fVar32 = (fVar28 + fVar31 + fVar31) * 0.5;
      }
    }
    fVar32 = fVar32 - param_1;
  }
  bVar6 = *(byte *)(lVar23 + 0x10);
  param_4 = param_4 + (long)param_10 * 0x34;
  bVar7 = *(byte *)(lVar23 + 0x11);
  bVar8 = *(byte *)(lVar23 + 0x12);
  bVar9 = *(byte *)(param_4 + 0x2c);
  bVar10 = *(byte *)(param_4 + 0x2d);
  fVar35 = *(float *)(param_4 + 0x18);
  fVar34 = *(float *)(param_4 + 0x1c);
  fVar36 = *(float *)(param_4 + 0x10);
  fVar37 = *(float *)(param_4 + 0x14);
  fVar41 = *(float *)(param_4 + 8);
  fVar39 = *(float *)(param_4 + 0xc);
  bVar11 = *(byte *)(param_4 + 0x2e);
  bVar12 = *(byte *)(lVar23 + 0x13);
  bVar13 = *(byte *)(param_4 + 0x2f);
  bVar14 = *(byte *)(lVar23 + 0x14);
  bVar15 = *(byte *)(param_4 + 0x30);
  fVar38 = *pfVar25;
  fVar43 = pfVar25[1];
  bVar16 = *(byte *)(param_4 + 0x31);
  fVar33 = *(float *)(param_4 + 0x28);
  bVar17 = *(byte *)(param_4 + 0x32);
  lVar24 = lVar24 + (long)param_10 * 0x38;
  bVar18 = *(byte *)(lVar23 + 0x15);
  fVar40 = *(float *)(param_4 + 0x20);
  fVar42 = *(float *)(param_4 + 0x24);
  bVar19 = *(byte *)(lVar23 + 0x16);
  bVar20 = *(byte *)(lVar23 + 0x17);
  bVar21 = *(byte *)(param_4 + 0x33);
  bVar22 = *(byte *)(lVar24 + 0x32);
  *pfVar1 = fVar29;
  pfVar1[1] = fVar28;
  pfVar1[2] = fVar30;
  pfVar1[3] = fVar31;
  uVar2 = *(undefined8 *)(lVar24 + 0x18);
  uVar3 = *(undefined8 *)(lVar24 + 0x20);
  pfVar1[0xf] = fVar26;
  pfVar1[10] = (float)(uint)bVar22;
  pfVar1[0x10] = fVar36 * fVar39 * fVar38;
  pfVar1[0x11] = fVar39 * fVar34 * fVar38;
  pfVar1[0xb] = fVar27;
  pfVar1[0xc] = fVar40;
  *(undefined8 *)(pfVar1 + 4) = uVar2;
  *(undefined8 *)(pfVar1 + 6) = uVar3;
  pfVar1[0x12] = -(fVar35 * fVar38);
  pfVar1[0x13] = (fVar29 + fVar30 + fVar30 + fVar26) * 0.5;
  pfVar1[0x16] = fVar39 * fVar37 * fVar43;
  pfVar1[0x17] = fVar32;
  pfVar1[0x14] = (-(fVar34 * fVar41) + fVar37 * fVar36 * fVar35) * fVar43;
  pfVar1[0x15] = (fVar34 * fVar35 * fVar37 + fVar41 * fVar36) * fVar43;
  fVar28 = (fVar42 - fVar32) + 0.0;
  if ((param_11 & 1) == 0) {
    fVar28 = fVar42;
  }
  pfVar1[0xd] = fVar28;
  pfVar1[0xe] = fVar33;
  pfVar1[8] = (float)((uint)bVar13 * (uint)bVar12 * 0x10102 & 0xff000000 |
                      ((uint)bVar11 * (uint)bVar8) / 0xff << 0x10 |
                      (uint)bVar10 * (uint)bVar7 * 0x8081 >> 0xf & 0xff00 |
                     ((uint)bVar9 * (uint)bVar6) / 0xff);
  pfVar1[9] = (float)((uint)bVar21 * (uint)bVar20 * 0x10102 & 0xff000000 |
                      ((uint)bVar17 * (uint)bVar19) / 0xff << 0x10 |
                      (uint)bVar16 * (uint)bVar18 * 0x8081 >> 0xf & 0xff00 |
                     ((uint)bVar15 * (uint)bVar14) / 0xff);
  return;
}


