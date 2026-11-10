/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042f65c; name: FUN_.text__0042f65c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042f65c(float param_1,undefined8 param_2,ulong *param_3,ulong param_4,int param_5,
                        int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar8 = *param_3;
  *param_3 = param_4;
  FUN__text__0042fb84(param_3,param_5);
  fVar9 = *(float *)(param_3 + 2);
  if ((param_3[8] & 1) == 0) {
    *(float *)(param_3 + 1) = fVar9;
    if (param_7 == 2) {
      param_1 = *(float *)((long)param_3 + 0xc) + param_1;
      *(float *)((long)param_3 + 0xc) = param_1;
      *(float *)((long)param_3 + 0x14) = param_1;
    }
    else {
      *(float *)((long)param_3 + 0xc) = param_1;
      *(float *)((long)param_3 + 0x14) = param_1;
    }
  }
  else {
    fVar11 = fVar9 * 0.05;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if (-37.0 <= fVar11) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar11)) {
        bVar4 = fVar11 < 37.0;
        bVar5 = fVar11 == 37.0;
        bVar6 = false;
      }
    }
    fVar11 = 0.0;
    if (bVar5 || bVar4 != bVar6) {
      uVar7 = (uint)(fVar9 * 1393317.6 + 1.0653532e+09);
      fVar9 = (float)(uVar7 & 0x7fffff | 0x3f800000);
      fVar11 = (fVar9 * (fVar9 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar7 & 0xff800000);
    }
    fVar9 = fVar11;
    *(float *)(param_3 + 1) = fVar9;
    if (param_7 == 2) {
      fVar11 = 0.0;
      if ((-37.0 <= param_1 * 0.05) && (param_1 * 0.05 <= 37.0)) {
        uVar7 = (uint)(param_1 * 1393317.6 + 1.0653532e+09);
        fVar11 = (float)(uVar7 & 0x7fffff | 0x3f800000);
        fVar11 = (fVar11 * (fVar11 * 0.32518977 + 0.020805772) + 0.65304345) *
                 (float)(uVar7 & 0xff800000);
      }
      param_1 = *(float *)((long)param_3 + 0xc) * fVar11;
      *(float *)((long)param_3 + 0xc) = param_1;
      fVar11 = (float)((uint)param_1 & 0x7fffff | 0x3f800000);
      fVar10 = fVar11 + 1.0;
      *(float *)((long)param_3 + 0x14) =
           ((float)((uint)param_1 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
           (fVar11 * 1.1581186 * fVar11 * fVar11 + -1.1581186) / (fVar10 * fVar10 * fVar10)) * 20.0;
    }
    else {
      *(float *)((long)param_3 + 0x14) = param_1;
      fVar11 = 0.0;
      if ((-37.0 <= param_1 * 0.05) && (param_1 * 0.05 <= 37.0)) {
        uVar7 = (uint)(param_1 * 1393317.6 + 1.0653532e+09);
        fVar11 = (float)(uVar7 & 0x7fffff | 0x3f800000);
        fVar11 = (fVar11 * (fVar11 * 0.32518977 + 0.020805772) + 0.65304345) *
                 (float)(uVar7 & 0xff800000);
      }
      param_1 = fVar11;
      *(float *)((long)param_3 + 0xc) = param_1;
    }
  }
  if ((param_1 <= fVar9 && param_6 != 3) && param_6 != 5) {
    param_6 = 8 - param_6;
  }
  *(int *)(param_3 + 7) = param_6;
  iVar2 = *_DAT_008a4b78;
  iVar3 = *(int *)(*_DAT_008a45c0 + 0x88);
  uVar7 = 0;
  if (iVar2 != 0) {
    uVar7 = (param_5 + iVar2 + -1) / iVar2;
  }
  if (((param_4 & 0xf000000) != 0) && (uVar8 == *param_3)) {
    uVar1 = ((int)param_3[3] - iVar3) + *(int *)((long)param_3 + 0x1c);
    if (uVar1 <= uVar7) {
      uVar7 = uVar1;
    }
  }
  *(int *)(param_3 + 3) = iVar3;
  *(uint *)((long)param_3 + 0x1c) = uVar7;
  *(int *)((long)param_3 + 0x24) = iVar3;
  return;
}


