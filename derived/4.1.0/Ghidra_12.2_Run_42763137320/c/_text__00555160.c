/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00555160; name: FUN_.text__00555160
 */


void FUN__text__00555160(float param_1,long *param_2,long param_3)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  
  lVar2 = *param_2;
  if (param_1 == 1.0) {
    uVar3 = *(uint *)(param_2 + 1);
    if (uVar3 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 >> 1;
      if (uVar4 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          lVar5 = uVar6 * 4;
          uVar6 = uVar6 + 2;
          pfVar7 = (float *)(lVar2 + lVar5);
          pfVar1 = (float *)(param_3 + lVar5);
          fVar9 = pfVar7[1];
          *pfVar1 = *pfVar1 * *pfVar7;
          pfVar1[1] = pfVar1[1] * fVar9;
        } while (((ulong)uVar4 & 0x7ffffffe) != uVar6);
      }
      if ((uVar3 >> 1 & 1) != 0) {
        lVar5 = uVar6 * 4;
        *(float *)(param_3 + lVar5) = *(float *)(param_3 + lVar5) * *(float *)(lVar2 + lVar5);
      }
    }
    if (uVar4 < uVar3) {
      uVar6 = (ulong)uVar4;
      uVar8 = ~uVar6;
      if ((uVar3 - uVar4 & 1) != 0) {
        lVar5 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        *(float *)(param_3 + lVar5) =
             *(float *)(param_3 + lVar5) * *(float *)(lVar2 + (ulong)(uVar3 + ~uVar4) * 4);
      }
      if (uVar8 + uVar3 != 0) {
        lVar5 = uVar3 - uVar6;
        uVar3 = ~(uint)uVar6 + uVar3;
        pfVar7 = (float *)(param_3 + uVar6 * 4 + 4);
        do {
          uVar6 = (ulong)uVar3;
          uVar4 = uVar3 - 1;
          lVar5 = lVar5 + -2;
          uVar3 = uVar3 - 2;
          fVar9 = *(float *)(lVar2 + (ulong)uVar4 * 4);
          pfVar7[-1] = pfVar7[-1] * *(float *)(lVar2 + uVar6 * 4);
          *pfVar7 = *pfVar7 * fVar9;
          pfVar7 = pfVar7 + 2;
        } while (lVar5 != 0);
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_2 + 1);
    if (uVar3 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 >> 1;
      if (uVar4 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          lVar5 = uVar6 * 4;
          uVar6 = uVar6 + 2;
          pfVar7 = (float *)(lVar2 + lVar5);
          pfVar1 = (float *)(param_3 + lVar5);
          fVar9 = pfVar7[1];
          *pfVar1 = *pfVar7 * param_1 * *pfVar1;
          pfVar1[1] = fVar9 * param_1 * pfVar1[1];
        } while (((ulong)uVar4 & 0x7ffffffe) != uVar6);
      }
      if ((uVar3 >> 1 & 1) != 0) {
        lVar5 = uVar6 * 4;
        *(float *)(param_3 + lVar5) =
             *(float *)(lVar2 + lVar5) * param_1 * *(float *)(param_3 + lVar5);
      }
    }
    if (uVar4 < uVar3) {
      lVar5 = (ulong)uVar3 - (ulong)uVar4;
      uVar3 = ~uVar4 + uVar3;
      pfVar7 = (float *)(param_3 + (ulong)uVar4 * 4);
      do {
        uVar6 = (ulong)uVar3;
        lVar5 = lVar5 + -1;
        uVar3 = uVar3 - 1;
        *pfVar7 = *(float *)(lVar2 + uVar6 * 4) * param_1 * *pfVar7;
        pfVar7 = pfVar7 + 1;
      } while (lVar5 != 0);
    }
  }
  return;
}


