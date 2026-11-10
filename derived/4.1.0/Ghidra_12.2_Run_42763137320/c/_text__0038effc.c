/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038effc; name: FUN_.text__0038effc
 */


undefined8 FUN__text__0038effc(undefined8 param_1,uint param_2,byte param_3)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  if (param_2 < 0xc2) {
    if (param_2 - 0x1a < 0x69) {
                    /* WARNING: Could not emulate address calculation at 0x0038f050 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)((ulong)*(byte *)((ulong)(param_2 - 0x1a) + 0x737890) * 4 + 0x38f05c))();
      return uVar1;
    }
    return 0;
  }
  if (param_2 < 0x1db) {
    if (param_2 < 0x11a) {
      if (((param_2 != 0xc2) && (param_2 != 0xd7)) && (param_2 != 0xe5)) {
        return 0;
      }
    }
    else if (param_2 < 0x1bd) {
      if ((param_2 != 0x11a) && (param_2 != 0x16a)) {
        return 0;
      }
    }
    else if ((param_2 != 0x1bd) && (param_2 != 0x1c0)) {
      return 0;
    }
  }
  else if (param_2 < 0x2c1) {
    if ((param_2 != 0x1db) && (param_2 != 0x225)) {
      if (param_2 != 0x226) {
        return 0;
      }
      if (param_3 < 2) {
        return 1;
      }
      return 0;
    }
  }
  else {
    if (900 < param_2) {
      if (param_2 == 0x385) {
        if (param_3 == 0) {
          return 1;
        }
        return 0;
      }
      if (param_2 != 0x3f3) {
        return 0;
      }
      if ((param_3 & 0xfc) == 4) {
        return 1;
      }
      return 0;
    }
    if ((param_2 != 0x2c1) && (param_2 != 0x2c2)) {
      return 0;
    }
  }
  if (param_3 == 1) {
    return 1;
  }
  return 0;
}


