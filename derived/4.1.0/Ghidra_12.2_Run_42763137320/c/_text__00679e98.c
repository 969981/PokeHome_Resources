/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679e98; name: FUN_.text__00679e98
 */


bool FUN__text__00679e98(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] == 0x10)) {
    return (char)param_1[2] == '\0';
  }
  return false;
}


