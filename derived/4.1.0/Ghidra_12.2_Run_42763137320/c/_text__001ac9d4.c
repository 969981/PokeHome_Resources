/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ac9d4; name: FUN_.text__001ac9d4
 */


undefined8 FUN__text__001ac9d4(uint param_1)

{
  if (((param_1 & 0xff) < 0xb) && ((1 << (ulong)(param_1 & 0x1f) & 0x602U) != 0)) {
    return 0;
  }
  return 1;
}


