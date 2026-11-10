/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00488e80; name: FUN_.text__00488e80
 */


void FUN__text__00488e80(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      pfVar4 = (float *)(param_2 + uVar1 * 0xc);
      fVar6 = 0.0;
      uVar3 = 0;
      pfVar5 = (float *)(param_2 + 8);
      do {
        if (uVar1 == uVar3) {
          fVar7 = *(float *)(param_3 + uVar1 * 4);
          fVar9 = 1.0;
          fVar8 = fVar7;
        }
        else {
          fVar7 = *(float *)(param_3 + uVar1 * 4);
          fVar8 = *(float *)(param_3 + uVar3 * 4);
          fVar9 = fVar8 + fVar7 + fVar8 + fVar7;
          fVar9 = (float)NEON_fminnm((*pfVar4 * pfVar5[-2] + -1.0 + pfVar4[1] * pfVar5[-1] +
                                      pfVar4[2] * *pfVar5 + fVar9) /
                                     (fVar9 - (ABS(fVar7 - fVar8) + ABS(fVar7 - fVar8))),0x3f800000)
          ;
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
        }
        fVar10 = *(float *)(param_4 + uVar3 * 4);
        uVar3 = uVar3 + 1;
        pfVar5 = pfVar5 + 3;
        fVar6 = fVar6 + fVar8 * fVar9 * fVar10 * fVar10;
      } while (param_1 != uVar3);
      lVar2 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      fVar8 = *(float *)(param_4 + lVar2);
      *(float *)(param_5 + lVar2) = (fVar8 * fVar8 * fVar7) / fVar6;
    } while (uVar1 != param_1);
  }
  return;
}


