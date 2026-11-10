/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d8840; name: FUN_.text__006d8840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d8840(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar5 = 0.5;
  if (param_1 < 0.0) {
    fVar5 = -0.5;
  }
  param_1 = param_1 - (float)(int)(fVar5 + *_DAT_008a51b0 * param_1) * *_DAT_008a51b8;
  if (param_1 <= *_DAT_008a51c0) {
    bVar1 = -*_DAT_008a51c0 <= param_1;
    fVar8 = *_DAT_008a51d0;
    fVar9 = _DAT_008a51d0[1];
    fVar10 = _DAT_008a51d0[2];
    fVar11 = _DAT_008a51d0[3];
    fVar12 = _DAT_008a51d0[4];
    fVar5 = -1.0;
    if (bVar1) {
      fVar5 = 1.0;
    }
    fVar6 = -*_DAT_008a02c8 - param_1;
    if (bVar1) {
      fVar6 = param_1;
    }
  }
  else {
    fVar5 = -1.0;
    fVar12 = _DAT_008a51d0[4];
    fVar8 = *_DAT_008a51d0;
    fVar9 = _DAT_008a51d0[1];
    fVar10 = _DAT_008a51d0[2];
    fVar11 = _DAT_008a51d0[3];
    fVar6 = *_DAT_008a02c8 - param_1;
  }
  fVar7 = fVar6 * fVar6;
  fVar4 = (float)param_4[1];
  fVar3 = (float)((ulong)*param_4 >> 0x20);
  fVar2 = (float)*param_4;
  fVar5 = fVar5 * (fVar7 * ((fVar11 + fVar7 * ((fVar9 - fVar7 * fVar8) * fVar7 - fVar10)) * fVar7 -
                           fVar12) + 1.0);
  fVar9 = fVar6 * fVar6;
  fVar8 = 1.0 - fVar5;
  fVar6 = fVar6 * (fVar9 * ((_DAT_008a51c8[3] +
                            fVar9 * ((_DAT_008a51c8[1] - fVar9 * *_DAT_008a51c8) * fVar9 -
                                    _DAT_008a51c8[2])) * fVar9 - _DAT_008a51c8[4]) + 1.0);
  fVar9 = (float)*param_3;
  fVar10 = (float)((ulong)*param_3 >> 0x20);
  fVar11 = (float)param_3[1];
  param_2[1] = CONCAT44(fVar9 * 0.0 + fVar10 * 0.0 + fVar11 * 0.0 + 0.0,
                        (fVar6 * fVar3 + fVar8 * fVar2 * fVar4) * fVar9 +
                        (fVar3 * fVar4 * fVar8 - fVar6 * fVar2) * fVar10 +
                        (fVar5 + fVar8 * fVar4 * fVar4) * fVar11 + 0.0);
  *param_2 = CONCAT44((fVar2 * fVar3 * fVar8 - fVar6 * fVar4) * fVar9 +
                      (fVar5 + fVar8 * fVar3 * fVar3) * fVar10 +
                      (fVar6 * fVar2 + fVar8 * fVar3 * fVar4) * fVar11 + 0.0,
                      (fVar5 + fVar8 * fVar2 * fVar2) * fVar9 +
                      (fVar6 * fVar4 + fVar8 * fVar2 * fVar3) * fVar10 +
                      (fVar2 * fVar4 * fVar8 - fVar6 * fVar3) * fVar11 + 0.0);
  return;
}


