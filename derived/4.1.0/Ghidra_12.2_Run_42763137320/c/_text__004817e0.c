/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004817e0; name: FUN_.text__004817e0
 */


undefined8 FUN__text__004817e0(float param_1,uint param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = 3.1415927 / (float)(param_2 & 0x7fffffff);
  uVar3 = (uint)(param_1 * fVar7 + 1.01);
  if ((int)param_2 < 0) {
    uVar3 = (uVar3 & 1) + uVar3;
    uVar2 = FUN__text__00481a10(param_3,uVar3 * 8);
    if ((uVar2 & 1) == 0) {
      return 2;
    }
    fVar7 = cosf(fVar7);
    if (uVar3 != 0) {
      pfVar4 = (float *)*param_3;
      fVar8 = (1.0 - fVar7) / (float)uVar3;
      fVar7 = fVar7 + fVar8 * 0.5;
      do {
        pfVar4[2] = fVar7;
        pfVar4[6] = fVar7;
        pfVar4[10] = fVar7;
        pfVar4[0xe] = fVar7;
        pfVar4[0x12] = fVar7;
        uVar3 = uVar3 - 1;
        fVar5 = SQRT(1.0 - fVar7 * fVar7);
        pfVar4[1] = 0.0;
        pfVar4[3] = 0.0;
        pfVar4[7] = 0.0;
        pfVar4[0xb] = 0.0;
        pfVar4[0xf] = 0.0;
        pfVar4[0x13] = 0.0;
        pfVar4[0x17] = 0.0;
        pfVar4[0x1b] = 0.0;
        pfVar4[0x1f] = 0.0;
        fVar6 = fVar5 * 0.70710677;
        *pfVar4 = fVar5;
        pfVar4[8] = fVar5 * -4.371139e-08;
        pfVar4[9] = fVar5;
        pfVar4[4] = fVar6;
        pfVar4[5] = fVar6;
        pfVar4[0x18] = fVar5 * 1.1924881e-08;
        pfVar4[0x19] = -fVar5;
        pfVar4[0x1a] = fVar7;
        pfVar4[0xc] = fVar5 * -0.70710677;
        pfVar4[0xd] = fVar6;
        pfVar4[0x10] = -fVar5;
        pfVar4[0x11] = fVar5 * -8.742278e-08;
        pfVar4[0x15] = fVar5 * -0.7071069;
        pfVar4[0x16] = fVar7;
        pfVar4[0x1d] = fVar5 * -0.7071069;
        pfVar4[0x1e] = fVar7;
        fVar7 = fVar7 + fVar8;
        pfVar4[0x14] = fVar5 * -0.70710665;
        pfVar4[0x1c] = fVar5 * 0.70710665;
        pfVar4 = pfVar4 + 0x20;
      } while (uVar3 != 0);
    }
  }
  else {
    uVar3 = uVar3 + 3 & 0xfffffffc;
    uVar2 = FUN__text__00481a10(param_3,uVar3);
    if ((uVar2 & 1) == 0) {
      return 2;
    }
    uVar2 = (ulong)uVar3;
    uVar1 = uVar3 - 1;
    if (uVar3 == 0 || uVar1 == 0) {
      uVar3 = 1;
    }
    pfVar4 = (float *)*param_3;
    fVar7 = fVar7 / (float)uVar2;
    fVar8 = fVar7 * (float)uVar1;
    do {
      fVar5 = sinf(fVar8);
      pfVar4[1] = 0.0;
      *pfVar4 = -fVar5;
      fVar5 = cosf(fVar8);
      fVar8 = fVar8 - (fVar7 + fVar7);
      pfVar4[2] = fVar5;
      uVar3 = uVar3 - 1;
      pfVar4[3] = 0.0;
      pfVar4 = pfVar4 + 4;
    } while (uVar3 != 0);
  }
  return 1;
}


