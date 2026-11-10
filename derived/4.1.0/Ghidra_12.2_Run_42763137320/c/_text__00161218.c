/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00161218; name: FUN_.text__00161218
 */


undefined8 FUN__text__00161218(undefined8 param_1,int param_2)

{
  if (param_2 < 0x36) {
    if (param_2 == 0x20) {
      return 0;
    }
  }
  else {
    if (param_2 == 0x36) {
      return 2;
    }
    if (param_2 == 100) {
      return 3;
    }
  }
  return 1;
}


