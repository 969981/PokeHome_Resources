/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c988; name: FUN_.text__0047c988
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047c988(undefined4 *param_1)

{
  uint uVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  plVar5 = _DAT_008a45e8;
  plVar7 = *(long **)(param_1 + 6);
  uVar3 = *(ushort *)(param_1 + 9);
  uVar8 = (ulong)uVar3;
  if ((int)(uint)uVar3 < (int)plVar7[1]) {
    pfVar2 = (float *)(*plVar7 + uVar8 * 0x10);
    uVar1 = uVar3 + 1;
    uVar8 = (ulong)uVar1;
    lVar9 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
    *(short *)(param_1 + 9) = (short)uVar1;
    fVar12 = *pfVar2;
    lVar10 = lVar9 * 0x5851f42d4c957f2d + 1;
    param_1[0x16] = fVar12;
    fVar13 = pfVar2[1];
    lVar11 = lVar10 * 0x5851f42d4c957f2d + 1;
    param_1[0x17] = fVar13;
    fVar14 = pfVar2[2];
    *plVar5 = lVar11;
    param_1[0x18] = fVar14;
    param_1[0x16] =
         ((float)(uint)((ulong)lVar9 >> 0x21) * 9.313226e-10 * *(float *)((long)plVar7 + 0xc) -
         *(float *)((long)plVar7 + 0xc)) + fVar12;
    param_1[0x18] =
         ((float)(uint)((ulong)lVar10 >> 0x21) * 9.313226e-10 * *(float *)(plVar7 + 2) -
         *(float *)(plVar7 + 2)) + fVar14;
    param_1[0x17] =
         ((float)(uint)((ulong)lVar11 >> 0x21) * 9.313226e-10 * *(float *)((long)plVar7 + 0x14) -
         *(float *)((long)plVar7 + 0x14)) + fVar13;
    iVar6 = *_DAT_008a4b78;
    uVar4 = 0;
    if (iVar6 != 0) {
      uVar4 = ((int)pfVar2[3] + iVar6 + -1) / iVar6;
    }
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    param_1[0x13] = uVar4;
    if ((int)(uVar1 & 0xffff) < (int)plVar7[1]) goto LAB__text__0047cac4;
  }
  else if ((int)(uint)uVar3 < (int)plVar7[1]) goto LAB__text__0047cac4;
  iVar6 = FUN__text__0047cb90(param_1);
  if (iVar6 != 1) {
    *param_1 = 0;
    return;
  }
  plVar7 = *(long **)(param_1 + 6);
  uVar8 = (ulong)*(ushort *)(param_1 + 9);
LAB__text__0047cac4:
  lVar9 = *plVar5 * 0x5851f42d4c957f2d + 1;
  lVar10 = lVar9 * 0x5851f42d4c957f2d + 1;
  fVar14 = (float)param_1[0x16];
  fVar16 = (float)param_1[0x17];
  fVar12 = *(float *)((long)plVar7 + 0xc);
  fVar13 = *(float *)(plVar7 + 2);
  lVar11 = lVar10 * 0x5851f42d4c957f2d + 1;
  pfVar2 = (float *)(*plVar7 + (uVar8 & 0xffff) * 0x10);
  fVar17 = *pfVar2;
  fVar18 = pfVar2[1];
  uVar1 = param_1[0x13];
  fVar15 = (float)param_1[0x18];
  fVar19 = *(float *)((long)plVar7 + 0x14);
  fVar20 = pfVar2[2];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1 + param_1[0x12];
  *plVar5 = lVar11;
  param_1[0x19] =
       (fVar17 - fVar14) + ((float)(uint)((ulong)lVar9 >> 0x21) * 9.313226e-10 * fVar12 - fVar12);
  param_1[0x1a] =
       (fVar18 - fVar16) + ((float)(uint)((ulong)lVar11 >> 0x21) * 9.313226e-10 * fVar19 - fVar19);
  param_1[0x1b] =
       (((float)(uint)((ulong)lVar10 >> 0x21) * 9.313226e-10 * fVar13 - fVar13) + fVar20) - fVar15;
  param_1[0x14] = 1.0 / (float)uVar1;
  return;
}


