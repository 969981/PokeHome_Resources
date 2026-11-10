/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010ae78; name: FUN_.text__0010ae78
 */


long * FUN__text__0010ae78(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar1 = param_2 + 2;
  if (param_2[5] != 0) {
    plVar1 = param_2 + 3;
  }
  param_2[1] = *plVar1;
  plVar1 = (long *)FUN__text__0010afc0();
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar3 = uVar2 - 1 & uVar3;
  }
  else if (uVar2 <= uVar3) {
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar3 / uVar2;
    }
    uVar3 = uVar3 - uVar5 * uVar2;
  }
  if (plVar1 == (long *)0x0) {
    plVar1 = param_1 + 5;
    *param_2 = *plVar1;
    *plVar1 = (long)param_2;
    *(long **)(*param_1 + uVar3 * 8) = plVar1;
    if (*param_2 == 0) goto LAB__text__0010afa4;
    uVar5 = *(ulong *)(*param_2 + 8);
    if (uVar4 < 2) {
      uVar5 = uVar5 & uVar2 - 1;
    }
    else if (uVar2 <= uVar5) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar5 / uVar2;
      }
      uVar5 = uVar5 - uVar4 * uVar2;
    }
  }
  else {
    *param_2 = *plVar1;
    *plVar1 = (long)param_2;
    if (*param_2 == 0) goto LAB__text__0010afa4;
    uVar5 = *(ulong *)(*param_2 + 8);
    if (uVar4 < 2) {
      uVar5 = uVar5 & uVar2 - 1;
    }
    else if (uVar2 <= uVar5) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar5 / uVar2;
      }
      uVar5 = uVar5 - uVar4 * uVar2;
    }
    if (uVar5 == uVar3) goto LAB__text__0010afa4;
  }
  *(long **)(*param_1 + uVar5 * 8) = param_2;
LAB__text__0010afa4:
  param_1[9] = param_1[9] + 1;
  return param_2;
}


