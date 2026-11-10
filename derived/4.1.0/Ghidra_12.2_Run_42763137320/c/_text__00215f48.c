/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215f48; name: FUN_.text__00215f48
 */


bool FUN__text__00215f48(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0x2d) != '\0') {
    pcVar1 = (char *)(param_1 + 0x38);
  }
  return *pcVar1 != '\0';
}


