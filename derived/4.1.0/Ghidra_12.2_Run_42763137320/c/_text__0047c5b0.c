/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c5b0; name: FUN_.text__0047c5b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047c5b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  plVar3 = *(long **)(param_1 + 6);
  if (plVar3 == (long *)0x0) {
    return 2;
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((int)plVar3[1] < 1) {
    return 0x25;
  }
  *(undefined2 *)(param_1 + 9) = 0;
  pfVar5 = (float *)*plVar3;
  *(undefined2 *)(param_1 + 9) = 1;
  fVar17 = *pfVar5;
  pfVar11 = (float *)(param_1 + 0x16);
  *pfVar11 = fVar17;
  fVar12 = pfVar5[1];
  param_1[0x17] = fVar12;
  fVar14 = pfVar5[2];
  param_1[0x18] = fVar14;
  uVar2 = 0;
  if (_DAT_008ab034 != 0) {
    uVar2 = ((int)pfVar5[3] + _DAT_008ab034 + -1) / _DAT_008ab034;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  param_1[0x13] = uVar2;
  plVar4 = _DAT_008a45e8;
  if ((int)plVar3[1] < 2) {
    *(undefined8 *)(param_1 + 0x19) = 0;
    iVar1 = param_1[0xe];
    param_1[0x1b] = 0;
  }
  else {
    lVar6 = *plVar3;
    fVar15 = *(float *)(lVar6 + 0x18);
    fVar16 = *(float *)(lVar6 + 0x10);
    fVar13 = *(float *)(lVar6 + 0x14);
    if (((((int)plVar3[1] == 2) && (fVar17 == fVar16)) && (fVar12 == fVar13)) && (fVar14 == fVar15))
    {
      FUN__text__0047c844(param_1,pfVar11);
      fVar13 = (float)param_1[0x17];
      fVar14 = (float)param_1[0x18];
      fVar16 = (float)param_1[0x16];
      fVar15 = fVar14;
      fVar17 = fVar16;
      fVar12 = fVar13;
    }
    else {
      lVar6 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      lVar7 = lVar6 * 0x5851f42d4c957f2d + 1;
      lVar8 = lVar7 * 0x5851f42d4c957f2d + 1;
      lVar9 = lVar8 * 0x5851f42d4c957f2d + 1;
      lVar10 = lVar9 * 0x5851f42d4c957f2d + 1;
      fVar17 = ((float)(uint)((ulong)lVar6 >> 0x21) * 9.313226e-10 * *(float *)((long)plVar3 + 0xc)
               - *(float *)((long)plVar3 + 0xc)) + fVar17;
      param_1[0x16] = fVar17;
      fVar18 = *(float *)(plVar3 + 2);
      lVar6 = lVar10 * 0x5851f42d4c957f2d + 1;
      *plVar4 = lVar6;
      fVar14 = ((float)(uint)((ulong)lVar7 >> 0x21) * 9.313226e-10 * fVar18 - fVar18) + fVar14;
      param_1[0x18] = fVar14;
      fVar12 = ((float)(uint)((ulong)lVar8 >> 0x21) * 9.313226e-10 * *(float *)((long)plVar3 + 0x14)
               - *(float *)((long)plVar3 + 0x14)) + fVar12;
      param_1[0x17] = fVar12;
      fVar16 = ((float)(uint)((ulong)lVar9 >> 0x21) * 9.313226e-10 * *(float *)((long)plVar3 + 0xc)
               - *(float *)((long)plVar3 + 0xc)) + fVar16;
      fVar15 = ((float)(uint)((ulong)lVar10 >> 0x21) * 9.313226e-10 * *(float *)(plVar3 + 2) -
               *(float *)(plVar3 + 2)) + fVar15;
      fVar13 = ((float)(uint)((ulong)lVar6 >> 0x21) * 9.313226e-10 * *(float *)((long)plVar3 + 0x14)
               - *(float *)((long)plVar3 + 0x14)) + fVar13;
    }
    param_1[0x19] = fVar16 - fVar17;
    param_1[0x1a] = fVar13 - fVar12;
    iVar1 = param_1[0xe];
    param_1[0x1b] = fVar15 - fVar14;
  }
  if (iVar1 != 0) {
    plVar3 = *(long **)(param_1 + 0xc);
    do {
      plVar4 = plVar3 + 1;
      lVar6 = *(long *)(*plVar3 + 0x1c8);
      fVar17 = (float)param_1[0x17];
      fVar12 = (float)param_1[0x18];
      *(float *)(lVar6 + 4) = (float)param_1[0x16] + *(float *)(lVar6 + 4);
      *(float *)(lVar6 + 8) = fVar17 + *(float *)(lVar6 + 8);
      *(float *)(lVar6 + 0xc) = fVar12 + *(float *)(lVar6 + 0xc);
      plVar3 = plVar4;
    } while (plVar4 != (long *)(*(long *)(param_1 + 0xc) + (ulong)(uint)param_1[0xe] * 8));
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)pfVar11;
  param_1[0x1e] = param_1[0x18];
  param_1[0x11] = param_2;
  param_1[0x12] = param_1[0x13] + param_2;
  param_1[0x14] = 1.0 / (float)(uint)param_1[0x13];
  return 1;
}


