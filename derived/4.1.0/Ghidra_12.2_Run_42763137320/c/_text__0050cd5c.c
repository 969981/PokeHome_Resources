/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050cd5c; name: FUN_.text__0050cd5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0050cd5c(long *param_1)

{
  *param_1 = _DAT_008a40a0 + 0x10;
  if (param_1[1] != 0) {
    FUN__text__0050cda0(param_1);
  }
  operator_delete(param_1);
  return;
}


