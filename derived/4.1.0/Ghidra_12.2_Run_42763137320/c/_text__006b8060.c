/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b8060; name: FUN_.text__006b8060
 */


undefined8 FUN__text__006b8060(long *param_1,long param_2,int param_3,long param_4)

{
  float *pfVar1;
  byte bVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_108;
  float local_100 [32];
  
  lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  pfVar1 = (float *)(lVar6 + param_3);
  pfVar1[0x34] = 0.0;
  pfVar1[0x35] = 0.0;
  pfVar1[0x36] = 0.0;
  pfVar1[0x37] = 0.0;
  pfVar1[0x30] = 0.0;
  pfVar1[0x31] = 0.0;
  pfVar1[0x32] = 0.0;
  pfVar1[0x33] = 0.0;
  pfVar1[0x2c] = 0.0;
  pfVar1[0x2d] = 0.0;
  pfVar1[0x2e] = 0.0;
  pfVar1[0x2f] = 0.0;
  pfVar1[0x28] = 0.0;
  pfVar1[0x29] = 0.0;
  pfVar1[0x2a] = 0.0;
  pfVar1[0x2b] = 0.0;
  pfVar1[0x24] = 0.0;
  pfVar1[0x25] = 0.0;
  pfVar1[0x26] = 0.0;
  pfVar1[0x27] = 0.0;
  pfVar1[0x20] = 0.0;
  pfVar1[0x21] = 0.0;
  pfVar1[0x22] = 0.0;
  pfVar1[0x23] = 0.0;
  pfVar1[0x1c] = 0.0;
  pfVar1[0x1d] = 0.0;
  pfVar1[0x1e] = 0.0;
  pfVar1[0x1f] = 0.0;
  pfVar1[0x18] = 0.0;
  pfVar1[0x19] = 0.0;
  pfVar1[0x1a] = 0.0;
  pfVar1[0x1b] = 0.0;
  pfVar1[0x14] = 0.0;
  pfVar1[0x15] = 0.0;
  pfVar1[0x16] = 0.0;
  pfVar1[0x17] = 0.0;
  pfVar1[0x10] = 0.0;
  pfVar1[0x11] = 0.0;
  pfVar1[0x12] = 0.0;
  pfVar1[0x13] = 0.0;
  pfVar1[0xc] = 0.0;
  pfVar1[0xd] = 0.0;
  pfVar1[0xe] = 0.0;
  pfVar1[0xf] = 0.0;
  pfVar1[8] = 0.0;
  pfVar1[9] = 0.0;
  pfVar1[10] = 0.0;
  pfVar1[0xb] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[5] = 0.0;
  pfVar1[6] = 0.0;
  pfVar1[7] = 0.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  fVar8 = *(float *)(param_4 + 0x18) / -100.0 + 1.0;
  if (0.0039 <= fVar8) {
    fVar8 = 1.0 / fVar8;
  }
  else {
    fVar8 = 256.41028;
  }
  pfVar1[4] = fVar8;
  *pfVar1 = *(float *)(param_4 + 8) / 255.0;
  pfVar1[1] = *(float *)(param_4 + 0xc) / 255.0;
  pfVar1[2] = *(float *)(param_4 + 0x10) / 255.0;
  pfVar1[3] = *(float *)(param_4 + 0x14) / 255.0;
  if (*(float *)(param_4 + 0x1c) == 0.0) {
    pfVar1[0x34] = 0.0;
    pfVar1[0x35] = 0.0;
    pfVar1[0x36] = 0.0;
    pfVar1[0x37] = 0.0;
    pfVar1[5] = 1.0;
    pfVar1[0x30] = 0.0;
    pfVar1[0x31] = 0.0;
    pfVar1[0x32] = 0.0;
    pfVar1[0x33] = 0.0;
    pfVar1[0x2c] = 0.0;
    pfVar1[0x2d] = 0.0;
    pfVar1[0x2e] = 0.0;
    pfVar1[0x2f] = 0.0;
    pfVar1[0x28] = 0.0;
    pfVar1[0x29] = 0.0;
    pfVar1[0x2a] = 0.0;
    pfVar1[0x2b] = 0.0;
    bVar2 = *(byte *)(*param_1 + 0x5a);
    pfVar1[6] = 1.0;
    pfVar1[7] = 1.0;
  }
  else {
    local_100[0x1c] = 0.0;
    local_100[0x1d] = 0.0;
    local_100[0x1e] = 0.0;
    local_100[0x1f] = 0.0;
    fVar8 = (0.0 / *(float *)(param_4 + 0x1c)) * 2.8;
    local_100[0x18] = 0.0;
    local_100[0x19] = 0.0;
    local_100[0x1a] = 0.0;
    local_100[0x1b] = 0.0;
    local_100[0x14] = 0.0;
    local_100[0x15] = 0.0;
    local_100[0x16] = 0.0;
    local_100[0x17] = 0.0;
    local_100[0x10] = 0.0;
    local_100[0x11] = 0.0;
    local_100[0x12] = 0.0;
    local_100[0x13] = 0.0;
    local_100[0xc] = 0.0;
    local_100[0xd] = 0.0;
    local_100[0xe] = 0.0;
    local_100[0xf] = 0.0;
    local_100[8] = 0.0;
    local_100[9] = 0.0;
    local_100[10] = 0.0;
    local_100[0xb] = 0.0;
    local_100[4] = 0.0;
    local_100[5] = 0.0;
    local_100[6] = 0.0;
    local_100[7] = 0.0;
    local_100[0] = 0.0;
    local_100[1] = 0.0;
    local_100[2] = 0.0;
    local_100[3] = 0.0;
    fVar8 = expf(fVar8 * fVar8 * -0.5);
    fVar10 = fVar8 + 0.0;
    lVar7 = 1;
    do {
      fVar9 = ((float)(int)lVar7 / *(float *)(param_4 + 0x1c)) * 2.8;
      fVar9 = expf(fVar9 * fVar9 * -0.5);
      fVar10 = fVar10 + fVar9 * 2.0;
      local_100[lVar7] = fVar9;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x20);
    local_108 = 0;
    pfVar5 = (float *)((ulong)local_100 | 4);
    local_100[0x17] = local_100[0x17] / fVar10;
    local_100[0x16] = local_100[0x16] / fVar10;
    local_100[1] = local_100[1] / fVar10;
    local_100[0] = fVar8 / fVar10;
    local_100[3] = local_100[3] / fVar10;
    local_100[2] = local_100[2] / fVar10;
    local_100[0x19] = local_100[0x19] / fVar10;
    local_100[0x18] = local_100[0x18] / fVar10;
    local_100[5] = local_100[5] / fVar10;
    local_100[4] = local_100[4] / fVar10;
    local_100[0x1b] = local_100[0x1b] / fVar10;
    local_100[0x1a] = local_100[0x1a] / fVar10;
    local_100[7] = local_100[7] / fVar10;
    local_100[6] = local_100[6] / fVar10;
    local_100[0x1d] = local_100[0x1d] / fVar10;
    local_100[0x1c] = local_100[0x1c] / fVar10;
    local_100[9] = local_100[9] / fVar10;
    local_100[8] = local_100[8] / fVar10;
    local_100[0xb] = local_100[0xb] / fVar10;
    local_100[10] = local_100[10] / fVar10;
    local_100[0xd] = local_100[0xd] / fVar10;
    local_100[0xc] = local_100[0xc] / fVar10;
    local_100[0xf] = local_100[0xf] / fVar10;
    local_100[0xe] = local_100[0xe] / fVar10;
    local_100[0x11] = local_100[0x11] / fVar10;
    local_100[0x10] = local_100[0x10] / fVar10;
    local_100[0x13] = local_100[0x13] / fVar10;
    local_100[0x12] = local_100[0x12] / fVar10;
    local_100[0x15] = local_100[0x15] / fVar10;
    local_100[0x14] = local_100[0x14] / fVar10;
    local_100[0x1f] = local_100[0x1f] / fVar10;
    local_100[0x1e] = local_100[0x1e] / fVar10;
    (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_108);
    lVar7 = -0x1e;
    fVar8 = 1.0 / (local_108._4_4_ + (float)((uint)*(byte *)(param_1[0xb] + 0xc) << 1));
    pfVar1[5] = local_100[0];
    pfVar4 = (float *)(param_3 + lVar6 + 0x60);
    do {
      fVar9 = 0.0;
      fVar10 = *pfVar5 + pfVar5[1];
      if (0.0 < fVar10) {
        fVar9 = pfVar5[1] / fVar10 + (float)((int)lVar7 + 0x1f);
      }
      lVar7 = lVar7 + 2;
      pfVar4[0x10] = fVar10;
      pfVar5 = pfVar5 + 2;
      pfVar4[-0x10] = (1.0 / (float)local_108) * fVar9;
      *pfVar4 = fVar8 * fVar9;
      pfVar4 = pfVar4 + 1;
    } while (lVar7 != 0);
    pfVar1[0x17] = (1.0 / (float)local_108) * 31.0;
    pfVar1[0x27] = fVar8 * 31.0;
    pfVar1[0x37] = *pfVar5;
    bVar2 = *(byte *)(*param_1 + 0x5a);
    pfVar1[6] = 1.0;
    pfVar1[7] = 1.0;
  }
  if ((bVar2 != 0) &&
     (((param_1[0xb] == 0 || ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) ||
      ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) == 0)))) {
    pfVar1[6] = (float)bVar2 / 255.0;
    pfVar1[7] = 255.0 / (float)bVar2;
  }
  if (pfVar1[0x28] < 6.1035156e-05) {
    uVar3 = 0;
  }
  else if (pfVar1[0x29] < 6.1035156e-05) {
    uVar3 = 1;
  }
  else if (pfVar1[0x2a] < 6.1035156e-05) {
    uVar3 = 2;
  }
  else if (pfVar1[0x2b] < 6.1035156e-05) {
    uVar3 = 3;
  }
  else if (pfVar1[0x2c] < 6.1035156e-05) {
    uVar3 = 4;
  }
  else if (pfVar1[0x2d] < 6.1035156e-05) {
    uVar3 = 5;
  }
  else if (pfVar1[0x2e] < 6.1035156e-05) {
    uVar3 = 6;
  }
  else if (pfVar1[0x2f] < 6.1035156e-05) {
    uVar3 = 7;
  }
  else if (pfVar1[0x30] < 6.1035156e-05) {
    uVar3 = 8;
  }
  else if (pfVar1[0x31] < 6.1035156e-05) {
    uVar3 = 9;
  }
  else if (pfVar1[0x32] < 6.1035156e-05) {
    uVar3 = 10;
  }
  else if (pfVar1[0x33] < 6.1035156e-05) {
    uVar3 = 0xb;
  }
  else if (pfVar1[0x34] < 6.1035156e-05) {
    uVar3 = 0xc;
  }
  else if (pfVar1[0x35] < 6.1035156e-05) {
    uVar3 = 0xd;
  }
  else if (pfVar1[0x36] < 6.1035156e-05) {
    uVar3 = 0xe;
  }
  else if (pfVar1[0x37] < 6.1035156e-05) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = 0x10;
  }
  return uVar3;
}


