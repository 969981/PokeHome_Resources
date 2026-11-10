/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006776cc; name: FUN_.text__006776cc
 */


undefined8 FUN__text__006776cc(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
        (((*(byte *)((long)param_2 + 0x79) ^ *(byte *)((long)param_1 + 0x79)) & 7) == 0)) &&
       ((iVar1 = FUN__text__0066c2bc(param_1[2],param_2[2]), iVar1 != 0 &&
        (iVar1 = FUN__text__0066c2bc(param_1[3],param_2[3]), iVar1 != 0)))) &&
      ((iVar1 = FUN__text__0066c2bc(param_1[4],param_2[4]), iVar1 != 0 &&
       ((iVar1 = FUN__text__0066c2bc(param_1[5],param_2[5]), iVar1 != 0 &&
        (iVar1 = FUN__text__0066c2bc(param_1[6],param_2[6]), iVar1 != 0)))))) &&
     ((iVar1 = FUN__text__0066c2bc(param_1[7],param_2[7]), iVar1 != 0 &&
      (iVar1 = FUN__text__0066c2bc(param_1[8],param_2[8]), iVar1 != 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


