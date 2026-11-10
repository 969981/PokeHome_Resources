/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307040; name: FUN_.text__00307040
 */


undefined8 FUN__text__00307040(uint param_1,ushort param_2)

{
  uint *puVar1;
  
  if (param_1 - 0x183 < 0x6b) {
    if (param_2 == 0) {
      return 1;
    }
    if ((param_2 < 3) && (param_1 == 0x19e || (param_1 & 0xfffffffe) == 0x19c)) {
      return 1;
    }
    if ((param_1 - 0x1a5 < 3) && (param_2 < 2)) {
      return 1;
    }
    if (param_2 < 6 && param_1 == 0x1df) {
      return 1;
    }
    if ((param_1 == 0x1e7 || param_1 == 0x1ec) && param_2 < 2) {
      return 1;
    }
    if ((param_1 == 0x1ed) && (param_2 < 0x12)) {
      return 1;
    }
    if (param_2 == 1 && param_1 - 0x1e3 < 2) {
      return 1;
    }
    if (param_1 == 0x1ed && param_2 == 0x12) {
      return 1;
    }
  }
  else if ((param_1 == 0xc9) && (param_2 < 0x1c)) {
    return 1;
  }
  puVar1 = (uint *)&DAT_00734024;
  while (((*puVar1 != param_1 || (puVar1[1] != (uint)param_2)) &&
         ((puVar1[2] != param_1 || (puVar1[3] != (uint)param_2))))) {
    puVar1 = puVar1 + 4;
    if (puVar1 == (uint *)&DAT_00734494) {
      return 0;
    }
  }
  return 1;
}


