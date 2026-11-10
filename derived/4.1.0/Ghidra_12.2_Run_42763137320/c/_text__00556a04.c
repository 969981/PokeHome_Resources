/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00556a04; name: FUN_.text__00556a04
 */


uint FUN__text__00556a04(float param_1,int *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = *(long *)(param_2 + 4);
  uVar2 = *param_2 - param_2[3];
  if (param_4 <= (uint)(*param_2 - param_2[3])) {
    uVar2 = param_4;
  }
  if (uVar2 == 0) {
    return 0;
  }
  fVar9 = (float)param_2[7];
  uVar5 = 0;
  pfVar1 = (float *)(param_2 + 6);
  uVar6 = param_2[1];
  while( true ) {
    uVar3 = uVar6;
    pfVar7 = param_3;
    pfVar8 = pfVar1;
    if (0.0 <= fVar9) {
      uVar6 = (uint)fVar9;
      if ((int)((param_4 & 0xffff) - 1) <= (int)uVar6) {
        if (uVar6 < (param_4 & 0xffff)) {
          *pfVar1 = param_3[uVar6];
          fVar10 = (float)(int)(uVar6 + 1);
        }
        else {
          fVar10 = (float)(param_4 & 0xffff);
        }
        fVar9 = fVar9 - fVar10;
        goto LAB__text__00556b24;
      }
      pfVar8 = param_3 + uVar6;
      pfVar7 = param_3 + (uVar6 + 1);
    }
    fVar10 = *pfVar8;
    if (uVar2 == (uVar5 & 0xffff)) break;
    uVar5 = uVar5 + 1;
    fVar11 = -1.0;
    if (0.0 <= fVar9) {
      fVar11 = (float)(int)fVar9;
    }
    fVar11 = fVar11 - fVar9;
    fVar9 = fVar9 + param_1;
    *(float *)(lVar4 + (ulong)uVar3 * 4) = fVar10 + fVar11 * (fVar10 - *pfVar7);
    uVar6 = 0;
    if (uVar3 + 1 != *param_2) {
      uVar6 = uVar3 + 1;
    }
  }
  *pfVar1 = fVar10;
  if (fVar9 <= 0.0) {
    param_4 = 0;
  }
  else {
    param_4 = (int)fVar9 + 1;
    fVar9 = fVar9 - (float)(int)param_4;
  }
LAB__text__00556b24:
  param_2[1] = uVar3;
  param_2[7] = (int)fVar9;
  param_2[3] = param_2[3] + (uVar5 & 0xffff);
  return param_4 & 0xffff;
}


