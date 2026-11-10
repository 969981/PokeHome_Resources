/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00555390; name: FUN_.text__00555390
 */


/* WARNING: Removing unreachable block (ram,0x005553e0) */

undefined8 FUN__text__00555390(uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  
  if (param_2 == (float *)0x0) {
    return 0;
  }
  uVar7 = param_1[6];
  if (*param_1 - param_1[3] < uVar7) {
    return 0;
  }
  uVar1 = *param_1 - param_1[1];
  pfVar3 = *(float **)(param_1 + 4);
  uVar2 = uVar7;
  if (uVar1 <= uVar7) {
    uVar2 = uVar1;
  }
  if (uVar2 == 0) goto LAB__text__00555444;
  pfVar3 = pfVar3 + param_1[1];
  if (uVar2 == 1) {
    pfVar5 = param_2;
LAB__text__0055542c:
    *pfVar3 = *pfVar3 + *pfVar5;
  }
  else {
    uVar7 = uVar2 & 0xfffffffe;
    pfVar4 = pfVar3;
    pfVar6 = param_2;
    do {
      pfVar5 = pfVar6 + 2;
      pfVar3 = pfVar4 + 2;
      uVar7 = uVar7 - 2;
      *pfVar4 = *pfVar4 + *pfVar6;
      pfVar4[1] = pfVar4[1] + pfVar6[1];
      pfVar4 = pfVar3;
      pfVar6 = pfVar5;
    } while (uVar7 != 0);
    if ((uVar2 & 1) != 0) goto LAB__text__0055542c;
  }
  uVar7 = param_1[6];
  pfVar3 = *(float **)(param_1 + 4);
LAB__text__00555444:
  uVar1 = uVar7 - uVar2;
  if (uVar1 != 0) {
    param_2 = param_2 + uVar2;
    if (uVar7 != uVar2 + 1) {
      uVar7 = uVar1 & 0xfffffffe;
      pfVar4 = pfVar3;
      pfVar6 = param_2;
      do {
        param_2 = pfVar6 + 2;
        pfVar3 = pfVar4 + 2;
        uVar7 = uVar7 - 2;
        *pfVar4 = *pfVar4 + *pfVar6;
        pfVar4[1] = pfVar4[1] + pfVar6[1];
        pfVar4 = pfVar3;
        pfVar6 = param_2;
      } while (uVar7 != 0);
    }
    if ((uVar1 & 1) != 0) {
      *pfVar3 = *pfVar3 + *param_2;
    }
  }
  uVar7 = *param_1;
  uVar2 = 0;
  if (uVar7 != 0) {
    uVar2 = (param_1[1] + param_3) / uVar7;
  }
  param_1[1] = (param_1[1] + param_3) - uVar2 * uVar7;
  param_1[3] = param_1[3] + param_3;
  return 1;
}


