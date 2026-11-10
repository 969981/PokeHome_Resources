/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c0e58; name: FUN_.text__004c0e58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c0e58(long *param_1)

{
  *param_1 = _DAT_008a44a0 + 0x10;
  if (param_1[5] != 0) {
    FUN__text__00400fc0(1);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    FUN__text__00400fc0(1);
  }
  param_1[4] = 0;
  FUN__text__0042ce74(param_1);
  return;
}


