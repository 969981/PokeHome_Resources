/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052ab90; name: FUN_.text__0052ab90
 */


void FUN__text__0052ab90(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                        uint *param_5,undefined8 param_6)

{
  uint uVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar6 = param_5[0x3e];
  uVar4 = param_4[0x3e];
  if (uVar6 != 0) {
    uVar3 = 0;
    pdVar2 = (double *)(param_4 + 2);
    if (uVar4 != 0) {
      pdVar2 = (double *)(param_4 + (ulong)(uVar4 - 1) * 6 + 8);
    }
    iVar5 = -1;
    dVar7 = pdVar2[2];
    dVar9 = pdVar2[1];
    dVar10 = *pdVar2;
    do {
      uVar1 = uVar4 + uVar3;
      if (7 < uVar1) break;
      uVar6 = uVar6 + iVar5;
      iVar5 = iVar5 + -1;
      dVar11 = *(double *)(param_5 + (ulong)uVar6 * 6 + 8);
      dVar12 = *(double *)(param_5 + (ulong)uVar6 * 6 + 10);
      dVar13 = *(double *)(param_5 + (ulong)uVar6 * 6 + 0xc);
      *(double *)(param_4 + (ulong)uVar1 * 6 + 8) = dVar11;
      *(double *)(param_4 + (ulong)uVar1 * 6 + 10) = dVar12;
      *(double *)(param_4 + (ulong)uVar1 * 6 + 0xc) = dVar13;
      uVar4 = param_4[0x3e];
      fVar8 = (float)param_4[0x40];
      uVar6 = uVar3 + uVar4;
      uVar3 = uVar3 + 1;
      *(undefined8 *)(param_4 + (ulong)uVar6 * 2 + 0x4e) = param_6;
      param_4[0x40] =
           (uint)(fVar8 + (float)SQRT((dVar11 - dVar10) * (dVar11 - dVar10) +
                                      (dVar12 - dVar9) * (dVar12 - dVar9) +
                                      (dVar13 - dVar7) * (dVar13 - dVar7)));
      uVar6 = param_5[0x3e];
      dVar7 = dVar13;
      dVar9 = dVar12;
      dVar10 = dVar11;
    } while (uVar3 < uVar6);
  }
  *(undefined8 *)(param_4 + 0x38) = param_1;
  *(undefined8 *)(param_4 + 0x3a) = param_2;
  *(undefined8 *)(param_4 + 0x3c) = param_3;
  uVar4 = param_5[0x3e] + uVar4;
  if (7 < uVar4) {
    uVar4 = 8;
  }
  param_4[0x3e] = uVar4;
  fVar8 = (float)param_5[0x42];
  if ((float)param_5[0x42] <= (float)param_4[0x42]) {
    fVar8 = (float)param_4[0x42];
  }
  param_4[0x42] = (uint)fVar8;
  fVar8 = (float)param_5[0x43];
  if ((float)param_5[0x43] <= (float)param_4[0x43]) {
    fVar8 = (float)param_4[0x43];
  }
  param_4[0x43] = (uint)fVar8;
  uVar6 = NEON_fminnm(param_5[0x44],param_4[0x44]);
  param_4[0x44] = uVar6;
  uVar6 = *param_5;
  if (uVar6 != 0) {
    if (*param_4 != 0) {
      uVar6 = (((*param_4 * 0x1000193 ^ uVar6 & 0xff) * 0x1000193 ^ uVar6 >> 8 & 0xff) * 0x1000193 ^
              uVar6 >> 0x10 & 0xff) * 0x1000193 ^ uVar6 >> 0x18;
    }
    *param_4 = uVar6;
  }
  return;
}


