/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043eae8; name: FUN_.text__0043eae8
 */


long FUN__text__0043eae8(long *param_1,long param_2,long param_3,undefined8 *param_4,int param_5,
                        long param_6,undefined1 *param_7,undefined1 *param_8)

{
  ulong uVar1;
  
  *param_7 = 0;
  if (((param_5 == 1) && (*(char *)(param_6 + 0x20) != -1)) && (*(char *)(param_3 + 8) != '\0')) {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else if (*(int *)(param_3 + 0x2c) == 3) {
    return 0;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0xc0) == 4)) {
    if ((param_5 != 0) && (*(int *)(param_3 + 0x2c) == 0)) {
      return 0;
    }
    param_2 = FUN__text__00443db0((int)param_1[0x12],param_1,param_5,param_6);
    if (param_2 == 0) {
      return 0;
    }
    FUN__text__00444230(param_2,param_3,*param_4);
    *param_8 = 1;
    param_8 = param_7;
  }
  else {
    if ((*(byte *)((long)param_1 + 0x94) >> 1 & 1) == 0) {
      return param_2;
    }
    if ((*(uint *)(param_3 + 0x2c) | 2) != 3) {
      return param_2;
    }
    FUN__text__00444230(param_2,param_3,*param_4);
  }
  *param_8 = 1;
  return param_2;
}


