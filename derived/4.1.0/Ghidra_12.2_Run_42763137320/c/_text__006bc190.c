/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bc190; name: FUN_.text__006bc190
 */


void FUN__text__006bc190(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = param_2 & 3 | (param_3 & 3) << 2 | *param_1 & 0xfff0;
  return;
}


