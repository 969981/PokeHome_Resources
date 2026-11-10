/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041e100; name: FUN_.text__0041e100
 */


undefined8 FUN__text__0041e100(long *param_1,long *param_2,int param_3,long param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar8 = param_3 - *(uint *)(param_4 + 0x2c);
  pfVar2 = (float *)(*param_1 + (ulong)*(uint *)(param_4 + 0x28) * 4);
  uVar12 = *(uint *)(param_4 + 0x30);
  iVar9 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar7 = *(int *)(param_4 + 0x34) * 0x400;
  uVar17 = uVar12 & 0xffff;
  uVar13 = (ulong)*(ushort *)(param_1 + 2);
  uVar5 = *(ushort *)(param_2 + 2);
  uVar6 = *(ushort *)((long)param_1 + 0x12);
  pfVar3 = (float *)(*param_2 + (ulong)*(uint *)(param_4 + 0x2c) * 4);
  iVar14 = *(int *)(param_4 + 0x3c);
  uVar4 = *(uint *)(param_4 + 0x40);
  uVar21 = 0;
  if (uVar4 != 0) {
    uVar21 = (0x400U - iVar14) / uVar4;
  }
  uVar19 = uVar8;
  if (uVar21 <= uVar8) {
    uVar19 = uVar21;
  }
  pfVar16 = pfVar3;
  if ((uVar12 >> 0x10 == 0) && (uVar19 != 0)) {
    fVar22 = **(float **)(param_4 + 0x20);
    fVar23 = (*(float **)(param_4 + 0x20))[1];
    do {
      uVar11 = (ulong)uVar17;
      iVar14 = iVar14 + uVar4;
      uVar19 = uVar19 - 1;
      fVar24 = pfVar2[uVar13];
      uVar12 = uVar12 + ((uint)(iVar7 + iVar14 * iVar9) >> 10);
      uVar17 = uVar12 & 0xffff;
      *pfVar16 = fVar22 + (float)uVar11 * 1.5258789e-05 * (*pfVar2 - fVar22);
      pfVar16[uVar5] = fVar23 + (float)uVar11 * 1.5258789e-05 * (fVar24 - fVar23);
      pfVar16 = pfVar16 + 1;
    } while (uVar12 >> 0x10 == 0 && uVar19 != 0);
    uVar21 = 0;
    if (uVar4 != 0) {
      uVar21 = (0x400U - iVar14) / uVar4;
    }
  }
  uVar19 = uVar6 - 1;
  uVar10 = (uint)((long)pfVar3 + ((ulong)uVar8 * 4 - (long)pfVar16) >> 2);
  if (uVar10 <= uVar21) {
    uVar21 = uVar10;
  }
  uVar10 = uVar12 >> 0x10;
  if ((uVar10 <= uVar19) && (uVar21 != 0)) {
    iVar20 = -uVar21;
    uVar21 = iVar7 + (iVar14 + uVar4) * iVar9;
    pfVar15 = pfVar16;
    pfVar18 = pfVar16 + uVar5;
    do {
      iVar20 = iVar20 + 1;
      uVar11 = (ulong)uVar10;
      uVar1 = uVar10 + 1;
      fVar22 = pfVar2[uVar13 + (uVar11 - 1)];
      uVar12 = uVar12 + (uVar21 >> 10);
      uVar10 = uVar12 >> 0x10;
      iVar14 = iVar14 + uVar4;
      fVar23 = pfVar2[uVar13 + ((ulong)uVar1 - 1)];
      pfVar16 = pfVar15 + 1;
      *pfVar15 = pfVar2[uVar11 - 1] +
                 (float)uVar17 * 1.5258789e-05 * (pfVar2[(ulong)uVar1 - 1] - pfVar2[uVar11 - 1]);
      *pfVar18 = fVar22 + (float)uVar17 * 1.5258789e-05 * (fVar23 - fVar22);
      if (uVar19 < uVar10) break;
      uVar17 = uVar12 & 0xffff;
      uVar21 = uVar21 + uVar4 * iVar9;
      pfVar15 = pfVar16;
      pfVar18 = pfVar18 + 1;
    } while (iVar20 != 0);
  }
  *(int *)(param_4 + 0x3c) = iVar14;
  uVar17 = uVar10;
  if (uVar6 <= uVar10) {
    uVar17 = (uint)uVar6;
  }
  if (uVar17 != 0) {
    **(float **)(param_4 + 0x20) = pfVar2[(ulong)uVar17 - 1];
    *(float *)(*(long *)(param_4 + 0x20) + 4) = pfVar2[uVar13 + ((ulong)uVar17 - 1)];
  }
  uVar13 = (ulong)((long)pfVar16 - (long)pfVar3) >> 2;
  *(uint *)(param_4 + 0x30) = uVar12 + uVar17 * -0x10000;
  *(short *)((long)param_1 + 0x12) = *(short *)((long)param_1 + 0x12) - (short)uVar17;
  uVar12 = (uint)uVar13;
  *(short *)((long)param_2 + 0x12) = (short)*(undefined4 *)(param_4 + 0x2c) + (short)uVar13;
  if (uVar10 < uVar6) {
    *(uint *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar17;
  }
  else {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  if (uVar8 == uVar12) {
    return 0x2d;
  }
  *(uint *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar12;
  return 0x2b;
}


