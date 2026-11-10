/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561760; name: FUN_.text__00561760
 */


void FUN__text__00561760(long param_1,float *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN__text__00561970(param_1,param_2,param_3 << 1);
  fVar9 = *(float *)(param_1 + 0x14);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (param_3 != 0) {
    pfVar3 = param_2;
    do {
      uVar5 = uVar6 + 1;
      fVar8 = pfVar3[param_3];
      uVar6 = uVar5 & 0xffff;
      uVar5 = (uVar5 & 0xaaaa) >> 1 | (uVar5 & 0x5555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar2 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = (uint)LZCOUNT((uVar2 >> 8 | (uVar2 & 0xff00ff) << 8) << 0x10);
      }
      lVar1 = param_1 + (ulong)uVar5 * 4;
      fVar7 = *(float *)(lVar1 + 0x18);
      *(float *)(lVar1 + 0x18) = fVar8;
      fVar9 = (fVar9 - fVar7) + fVar8;
      pfVar4 = pfVar3 + 1;
      *pfVar3 = (*pfVar3 + fVar9) * 0.14705883;
      pfVar3 = pfVar4;
    } while (pfVar4 < param_2 + param_3);
  }
  FUN__text__0055f350(param_1 + 4,param_2,param_3);
  *(uint *)(param_1 + 0x10) = uVar6;
  *(float *)(param_1 + 0x14) = fVar9;
  return;
}


