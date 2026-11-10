/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00518834; name: FUN_.text__00518834
 */


undefined1  [16] FUN__text__00518834(long param_1,int param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *(long *)(param_1 + 0x30);
  lVar3 = 0x1c;
  if (param_2 != 0) {
    lVar3 = 0x28;
  }
  fVar5 = *(float *)(lVar2 + lVar3);
  pfVar1 = (float *)(lVar2 + 0x1c);
  if (param_2 != 0) {
    pfVar1 = (float *)(lVar2 + 0x28);
  }
  fVar6 = pfVar1[1];
  fVar8 = pfVar1[2];
  if (*(long *)(lVar2 + 0x40) != *(long *)(lVar2 + 0x48)) {
    pfVar1 = (float *)(lVar2 + 0x28);
    if (param_2 != 0) {
      pfVar1 = (float *)(lVar2 + 0x1c);
    }
    fVar6 = fVar6 - pfVar1[1];
    fVar5 = fVar5 - *pfVar1;
    fVar8 = fVar8 - pfVar1[2];
    fVar10 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar8 * fVar8);
    if (fVar10 == 0.0) {
      fVar5 = 0.0;
      fVar6 = 0.0;
      fVar8 = 0.0;
    }
    else {
      fVar10 = 1.0 / fVar10;
      fVar5 = fVar5 * fVar10;
      fVar6 = fVar6 * fVar10;
      fVar8 = fVar8 * fVar10;
    }
  }
  fVar10 = ABS(*(float *)(lVar2 + 8));
  if (ABS(*(float *)(lVar2 + 8)) <= ABS(*(float *)(lVar2 + 0xc))) {
    fVar10 = ABS(*(float *)(lVar2 + 0xc));
  }
  fVar7 = ABS(*(float *)(lVar2 + 4));
  if (ABS(*(float *)(lVar2 + 4)) <= fVar10) {
    fVar7 = fVar10;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  fVar10 = 0.0002;
  if (2.0 <= fVar7) {
    fVar10 = fVar7 * 0.0001;
  }
  fVar11 = *(float *)(lVar3 + 0x10);
  fVar9 = *(float *)(lVar3 + 0x14);
  fVar5 = (*(float *)(param_1 + 0x18) + fVar5 * fVar10) * *(float *)(lVar3 + 0x38);
  fVar6 = (*(float *)(param_1 + 0x1c) + fVar6 * fVar10) * *(float *)(lVar3 + 0x3c);
  fVar8 = (*(float *)(param_1 + 0x20) + fVar8 * fVar10) * *(float *)(lVar3 + 0x40);
  fVar10 = *(float *)(lVar3 + 0x18);
  fVar7 = *(float *)(lVar3 + 0x1c);
  fVar6 = (fVar8 * fVar10 - fVar6 * fVar7) * fVar11 +
          fVar9 * (fVar5 * fVar9 + fVar10 * fVar6 + fVar7 * fVar8);
  auVar4._0_8_ = *(double *)(lVar3 + 0x20) +
                 (double)(fVar6 + fVar6 +
                         fVar5 * (fVar11 * fVar11 -
                                 (fVar9 * fVar9 + fVar10 * fVar10 + fVar7 * fVar7)));
  auVar4._8_8_ = 0;
  return auVar4;
}


