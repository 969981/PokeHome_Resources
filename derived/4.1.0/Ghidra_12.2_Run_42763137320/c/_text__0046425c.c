/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046425c; name: FUN_.text__0046425c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046425c(long *param_1)

{
  if (param_1[0xe] != 0) {
    (**(code **)(*param_1 + 0xe8))();
    *_DAT_008a4d20 = 1;
  }
  return;
}


