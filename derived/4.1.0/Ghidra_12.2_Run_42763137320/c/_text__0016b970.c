/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016b970; name: FUN_.text__0016b970
 */


undefined8 FUN__text__0016b970(int param_1)

{
  if (param_1 < 0x23a) {
    if (param_1 < 0xd3) {
      if (((0x39 < param_1 - 100U) ||
          ((1L << ((ulong)(param_1 - 100U) & 0x3f) & 0x200000010000003U) == 0)) &&
         ((1 < param_1 - 0x3aU && (param_1 != 0xc2)))) {
        return 0;
      }
    }
    else if ((((0x2f < param_1 - 0x1f7U) ||
              ((1L << ((ulong)(param_1 - 0x1f7U) & 0x3f) & 0xc00000000001U) == 0)) &&
             (1 < param_1 - 0x1e3U)) && (param_1 != 0xd3)) {
      return 0;
    }
  }
  else if (param_1 < 0x386) {
    if ((0x13 < param_1 - 0x2c1U) || ((1 << (ulong)(param_1 - 0x2c1U & 0x1f) & 0x80103U) == 0)) {
      if (0x3a < param_1 - 0x23aU) {
        return 0;
      }
      if ((1L << ((ulong)(param_1 - 0x23aU) & 0x3f) & 0x400000000000003U) == 0) {
        return 0;
      }
    }
  }
  else if (param_1 < 0x3f9) {
    if ((param_1 != 0x386) && (param_1 != 0x3a3)) {
      return 0;
    }
  }
  else if ((param_1 != 0x400) && (param_1 != 0x3f9)) {
    return 0;
  }
  return 1;
}


