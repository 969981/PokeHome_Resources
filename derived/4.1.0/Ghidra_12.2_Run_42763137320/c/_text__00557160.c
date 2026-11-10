/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00557160; name: FUN_.text__00557160
 */


void FUN__text__00557160(float param_1,long *param_2,float *param_3,float *param_4,float *param_5,
                        undefined8 param_6,uint param_7)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *(uint *)(param_2 + 1);
  pfVar3 = (float *)*param_2;
  uVar2 = (ulong)(uVar1 >> 1) + 1;
  pfVar4 = param_3;
  pfVar6 = param_4;
  pfVar7 = pfVar3;
  uVar5 = uVar2;
  do {
    uVar5 = uVar5 - 1;
    *pfVar7 = *pfVar4 + param_1 * (*pfVar6 - *pfVar4);
    pfVar4 = pfVar4 + 2;
    pfVar6 = pfVar6 + 2;
    pfVar7 = pfVar7 + 2;
  } while (uVar5 != 0);
  if ((param_7 & 1) != 0) {
    if (uVar1 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      pfVar4 = param_3 + 3;
      do {
        pfVar6 = param_5 + uVar5;
        uVar5 = uVar5 + 2;
        *pfVar6 = pfVar4[-2];
        pfVar6[1] = *pfVar4;
        pfVar4 = pfVar4 + 4;
      } while ((uVar2 & 0xfffffffe) != uVar5);
    }
    if ((uVar2 & 1) != 0) {
      param_5[uVar5] = param_3[uVar5 * 2 + 1];
    }
  }
  pfVar4 = pfVar3 + 1;
  pfVar6 = param_3 + 1;
  pfVar7 = param_4 + 1;
  do {
    fVar8 = *pfVar7;
    fVar9 = *pfVar6;
    *pfVar4 = *param_5;
    fVar9 = *param_5 + (fVar8 - fVar9);
    fVar8 = fVar9 + -6.2831855;
    if (fVar9 < 3.1415927) {
      fVar8 = fVar9;
    }
    fVar9 = fVar8 + 6.2831855;
    if (-3.1415927 <= fVar8) {
      fVar9 = fVar8;
    }
    uVar2 = uVar2 - 1;
    *param_5 = fVar9;
    param_5 = param_5 + 1;
    pfVar4 = pfVar4 + 2;
    pfVar6 = pfVar6 + 2;
    pfVar7 = pfVar7 + 2;
  } while (uVar2 != 0);
  *(undefined2 *)((long)param_2 + 0xc) = 0x101;
  return;
}


