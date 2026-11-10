/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038f110; name: FUN_.text__0038f110
 */


undefined8 FUN__text__0038f110(undefined8 param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  param_3 = param_3 & 0xff;
  if (param_2 < 0xfe) {
    if (param_2 - 3 < 0xd2) {
                    /* WARNING: Could not emulate address calculation at 0x0038f138 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__0038f144 +
                        (ulong)*(byte *)((ulong)(param_2 - 3) + 0x7378f9) * 4))();
      return uVar1;
    }
  }
  else if (param_2 < 0x178) {
    if (param_2 < 0x104) {
      if (param_2 == 0xfe) {
        if (param_3 == 1) {
          return 1;
        }
      }
      else if ((param_2 == 0x101) && (param_3 == 1)) {
        return 1;
      }
    }
    else if (param_2 == 0x104) {
      if (param_3 == 1) {
        return 1;
      }
    }
    else if (param_2 == 0x143) {
      if (param_3 == 1) {
        return 1;
      }
    }
    else if ((param_2 == 0x14e) && (param_3 == 1)) {
      return 1;
    }
  }
  else if (param_2 < 0x1f7) {
    if (param_2 == 0x178) {
      if (param_3 == 1) {
        return 1;
      }
    }
    else if ((param_2 == 0x1cc) && (param_3 == 1)) {
      return 1;
    }
  }
  else if (param_2 == 0x1f7) {
    if (param_3 == 1) {
      return 1;
    }
  }
  else if (param_2 == 0x274) {
    if (param_3 == 1) {
      return 1;
    }
  }
  else if ((param_2 == 0x292) && (param_3 - 1 < 2)) {
    return 1;
  }
  return 0;
}


