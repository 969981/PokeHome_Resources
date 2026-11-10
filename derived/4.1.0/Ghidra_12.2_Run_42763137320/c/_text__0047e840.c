/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047e840; name: FUN_.text__0047e840
 */


void FUN__text__0047e840(undefined4 param_1,undefined4 param_2,uint param_3,long *param_4,
                        float *param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_3 != 0) {
    fVar3 = (float)NEON_fminnm(param_2,0x42c80000);
    fVar2 = (float)NEON_fminnm(param_1,0x42c80000);
    uVar1 = (ulong)param_3;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar3 = (float)NEON_fminnm(fVar3 * (fVar3 * fVar3 * -1.3191276e-10 + 0.0031678583) + 0.98224795,
                               0x3f800000);
    do {
      uVar1 = uVar1 - 1;
      fVar5 = (float)NEON_fminnm(*(undefined4 *)(*param_4 + 0x80),0x42c80000);
      fVar4 = (float)NEON_fminnm(*(undefined4 *)(*param_4 + 0x7c),0x42c80000);
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar5 = (float)NEON_fminnm(fVar5 * (fVar5 * fVar5 * -1.3191276e-10 + 0.0031678583) +
                                 0.98224795,0x3f800000);
      *param_5 = (fVar4 * (fVar4 * (fVar4 * 9.302722e-07 + -0.00017546544) + -0.0011517591) +
                 0.9843052) * *param_5 *
                 fVar5 * (1.0 / (fVar3 * (fVar2 * (fVar2 * (fVar2 * 9.302722e-07 + -0.00017546544) +
                                                  -0.0011517591) + 0.9843052)));
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
    } while (uVar1 != 0);
  }
  return;
}


