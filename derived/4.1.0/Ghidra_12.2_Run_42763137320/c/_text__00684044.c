/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00684044; name: FUN_.text__00684044
 */


void FUN__text__00684044(byte *param_1,undefined4 *param_2)

{
  FUN__text__0067999c(param_1,*param_2);
  if (*(char *)(param_2 + 2) != '\0') {
    *param_1 = *param_1 | 0x80;
  }
  param_1[4] = *(char *)(param_2 + 1) - 1;
  return;
}


