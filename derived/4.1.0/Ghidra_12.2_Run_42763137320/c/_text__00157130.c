/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00157130; name: FUN_.text__00157130
 */


bool FUN__text__00157130(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = param_1 - 0x11U < 0xb;
  if (!bVar1 && ((param_2 ^ 0xffffffff) & 1) == 0) {
    bVar1 = param_1 == 0x1c;
  }
  return bVar1;
}


