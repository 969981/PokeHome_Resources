/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c1e4c; name: FUN_.text__001c1e4c
 */


bool FUN__text__001c1e4c(long param_1,int param_2,uint *param_3)

{
  if (*(char *)(param_1 + (long)param_2 * 0x38 + 0x20) == '\0') {
    return false;
  }
  return *(char *)(param_1 + (long)param_2 * 0x38 + (ulong)param_3[1] + (ulong)*param_3 * 5 + 0x38)
         != '\0';
}


