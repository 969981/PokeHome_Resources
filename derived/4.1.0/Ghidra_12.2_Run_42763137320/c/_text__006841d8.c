/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006841d8; name: FUN_.text__006841d8
 */


undefined8 FUN__text__006841d8(long param_1)

{
  if ((*(byte *)(param_1 + 0xd) >> 5 & 1) == 0) {
    FUN__text__00679e88();
  }
  else {
    FUN__text__00684198(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 0;
}


