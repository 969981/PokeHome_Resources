/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bc1ac; name: FUN_.text__006bc1ac
 */


void FUN__text__006bc1ac(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = (param_2 & 7) << 4 | (param_3 & 1) << 7 | *param_1 & 0xff0f;
  return;
}


