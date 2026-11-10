/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519ae8; name: FUN_.text__00519ae8
 */


float FUN__text__00519ae8(undefined1 param_1 [16],double param_2,double param_3,long param_4,
                         long param_5,int param_6)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(long *)(param_4 + 0x38) != param_5) {
    dVar6 = (double)FUN__text__00518834(param_4,param_6);
    fVar9 = *(float *)(param_5 + 0x18);
    fVar10 = *(float *)(param_5 + 0x1c);
    fVar7 = (float)(param_2 - *(double *)(param_5 + 0x28));
    fVar5 = (float)(dVar6 - *(double *)(param_5 + 0x20));
    fVar8 = (float)(param_3 - *(double *)(param_5 + 0x30));
    fVar11 = fVar9 * fVar5 - *(float *)(param_5 + 0x14) * fVar7;
    fVar7 = fVar10 * fVar7 - fVar9 * fVar8;
    fVar8 = *(float *)(param_5 + 0x14) * fVar8 - fVar10 * fVar5;
    return ((fVar5 - fVar9 * (fVar11 + fVar11)) + *(float *)(param_5 + 0x10) * (fVar7 + fVar7) +
           fVar10 * (fVar8 + fVar8)) / *(float *)(param_5 + 0x38);
  }
  lVar4 = *(long *)(param_4 + 0x30);
  lVar1 = 0x1c;
  if (param_6 != 0) {
    lVar1 = 0x28;
  }
  fVar5 = *(float *)(lVar4 + lVar1);
  pfVar2 = (float *)(lVar4 + 0x1c);
  if (param_6 != 0) {
    pfVar2 = (float *)(lVar4 + 0x28);
  }
  if (*(long *)(lVar4 + 0x40) != *(long *)(lVar4 + 0x48)) {
    pfVar3 = (float *)(lVar4 + 0x28);
    if (param_6 != 0) {
      pfVar3 = (float *)(lVar4 + 0x1c);
    }
    fVar5 = fVar5 - *pfVar3;
    fVar7 = SQRT(fVar5 * fVar5 + (pfVar2[1] - pfVar3[1]) * (pfVar2[1] - pfVar3[1]) +
                 (pfVar2[2] - pfVar3[2]) * (pfVar2[2] - pfVar3[2]));
    if (fVar7 == 0.0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = fVar5 * (1.0 / fVar7);
    }
  }
  fVar7 = ABS(*(float *)(lVar4 + 8));
  if (ABS(*(float *)(lVar4 + 8)) <= ABS(*(float *)(lVar4 + 0xc))) {
    fVar7 = ABS(*(float *)(lVar4 + 0xc));
  }
  fVar8 = ABS(*(float *)(lVar4 + 4));
  if (ABS(*(float *)(lVar4 + 4)) <= fVar7) {
    fVar8 = fVar7;
  }
  fVar7 = 0.0002;
  if (2.0 <= fVar8) {
    fVar7 = fVar8 * 0.0001;
  }
  return *(float *)(param_4 + 0x18) + fVar5 * fVar7;
}


