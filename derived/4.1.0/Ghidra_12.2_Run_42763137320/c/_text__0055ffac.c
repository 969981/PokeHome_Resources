/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055ffac; name: FUN_.text__0055ffac
 */


void FUN__text__0055ffac(long param_1,long param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x1c),0x41c00000);
  if (fVar2 <= -96.0) {
    fVar2 = -96.0;
  }
  fVar2 = exp2f(fVar2 * 0.1660964);
  if (*(float *)(param_1 + 0x9c) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0xa0) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0xa0)) / (float)param_3;
    }
    *(float *)(param_1 + 0x98) = fVar3;
    *(float *)(param_1 + 0x9c) = fVar2;
  }
  fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x14),0x41c00000);
  if (fVar2 <= -96.0) {
    fVar2 = -96.0;
  }
  fVar2 = exp2f(fVar2 * 0.1660964);
  if (*(float *)(param_1 + 0xa8) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0xac) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0xac)) / (float)param_3;
    }
    *(float *)(param_1 + 0xa4) = fVar3;
    *(float *)(param_1 + 0xa8) = fVar2;
  }
  param_3 = param_3 << (ulong)((*(byte *)(param_1 + 0x14) & 0xf) << 1);
  fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x34),0x41c00000);
  if (fVar2 <= -96.0) {
    fVar2 = -96.0;
  }
  fVar2 = exp2f(fVar2 * 0.1660964);
  if (*(float *)(param_1 + 0x40) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0x44) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0x44)) / (float)param_3;
    }
    *(float *)(param_1 + 0x3c) = fVar3;
    *(float *)(param_1 + 0x40) = fVar2;
  }
  fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x48),0x41c00000);
  if (fVar2 <= -96.0) {
    fVar2 = -96.0;
  }
  fVar2 = exp2f(fVar2 * 0.1660964);
  if (*(float *)(param_1 + 0x80) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0x84) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0x84)) / (float)param_3;
    }
    *(float *)(param_1 + 0x7c) = fVar3;
    *(float *)(param_1 + 0x80) = fVar2;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (0xe0f < iVar1) {
    iVar1 = 0xe10;
  }
  if (iVar1 < -0xe0f) {
    iVar1 = -0xe10;
  }
  fVar2 = exp2f((float)iVar1 * 0.00083333335);
  if (*(float *)(param_1 + 0x34) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0x38) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0x38)) / (float)param_3;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    *(float *)(param_1 + 0x34) = fVar2;
  }
  iVar1 = *(int *)(param_2 + 0x44);
  if (0xe0f < iVar1) {
    iVar1 = 0xe10;
  }
  if (iVar1 < -0xe0f) {
    iVar1 = -0xe10;
  }
  fVar2 = exp2f((float)iVar1 * 0.00083333335);
  if (*(float *)(param_1 + 0x74) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0x78) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0x78)) / (float)param_3;
    }
    *(float *)(param_1 + 0x70) = fVar3;
    *(float *)(param_1 + 0x74) = fVar2;
  }
  fVar2 = *(float *)(param_2 + 0x38);
  if (*(float *)(param_1 + 0x4c) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0x50) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0x50)) / (float)param_3;
    }
    *(float *)(param_1 + 0x48) = fVar3;
    *(float *)(param_1 + 0x4c) = fVar2;
  }
  fVar2 = *(float *)(param_2 + 0x4c);
  if (*(float *)(param_1 + 0x8c) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0x90) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0x90)) / (float)param_3;
    }
    *(float *)(param_1 + 0x88) = fVar3;
    *(float *)(param_1 + 0x8c) = fVar2;
  }
  fVar3 = *(float *)(param_2 + 0x20);
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = 100.0, fVar3 <= 100.0)) {
    fVar2 = fVar3;
  }
  if (*(float *)(param_1 + 0xb4) != fVar2) {
    if (param_3 == 0) {
      fVar3 = 0.0;
      *(float *)(param_1 + 0xb8) = fVar2;
    }
    else {
      fVar3 = (fVar2 - *(float *)(param_1 + 0xb8)) / (float)param_3;
    }
    *(float *)(param_1 + 0xb0) = fVar3;
    *(float *)(param_1 + 0xb4) = fVar2;
  }
  return;
}


