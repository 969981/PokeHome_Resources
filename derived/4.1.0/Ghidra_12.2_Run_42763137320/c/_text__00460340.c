/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00460340; name: FUN_.text__00460340
 */


bool FUN__text__00460340(long param_1,long param_2)

{
  if (param_1 == param_2) {
    return true;
  }
  do {
    param_1 = *(long *)(param_1 + 0x80);
  } while (param_1 != param_2 && param_1 != 0);
  return param_1 != 0;
}


