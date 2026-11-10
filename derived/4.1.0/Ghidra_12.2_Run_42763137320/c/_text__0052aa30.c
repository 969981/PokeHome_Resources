/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052aa30; name: FUN_.text__0052aa30
 */


void FUN__text__0052aa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                        uint *param_5,undefined8 param_6)

{
  double *pdVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  double *pdVar5;
  uint uVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar6 = param_4[0x3e];
  if (param_5[0x3e] != 0) {
    uVar4 = 0;
    pdVar1 = (double *)(param_4 + 2);
    if (uVar6 != 0) {
      pdVar1 = (double *)(param_4 + (ulong)(uVar6 - 1) * 6 + 8);
    }
    pdVar5 = (double *)(param_5 + 0xc);
    dVar7 = pdVar1[2];
    dVar9 = pdVar1[1];
    dVar10 = *pdVar1;
    do {
      if (7 < (uint)(uVar4 + uVar6)) break;
      dVar11 = pdVar5[-2];
      dVar12 = pdVar5[-1];
      uVar2 = uVar4 + uVar6 & 0xffffffff;
      dVar13 = *pdVar5;
      *(double *)(param_4 + uVar2 * 6 + 0xc) = dVar13;
      *(double *)(param_4 + uVar2 * 6 + 8) = dVar11;
      *(double *)(param_4 + uVar2 * 6 + 10) = dVar12;
      uVar6 = param_4[0x3e];
      fVar8 = (float)param_4[0x40];
      iVar3 = (int)uVar4;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(param_4 + (ulong)(iVar3 + uVar6) * 2 + 0x4e) = param_6;
      param_4[0x40] =
           (uint)(fVar8 + (float)SQRT((dVar11 - dVar10) * (dVar11 - dVar10) +
                                      (dVar12 - dVar9) * (dVar12 - dVar9) +
                                      (dVar13 - dVar7) * (dVar13 - dVar7)));
      pdVar5 = pdVar5 + 3;
      dVar7 = dVar13;
      dVar9 = dVar12;
      dVar10 = dVar11;
    } while (uVar4 < param_5[0x3e]);
  }
  *(undefined8 *)(param_4 + 0x38) = param_1;
  *(undefined8 *)(param_4 + 0x3a) = param_2;
  *(undefined8 *)(param_4 + 0x3c) = param_3;
  uVar6 = param_5[0x3e] + uVar6;
  if (7 < uVar6) {
    uVar6 = 8;
  }
  param_4[0x3e] = uVar6;
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


