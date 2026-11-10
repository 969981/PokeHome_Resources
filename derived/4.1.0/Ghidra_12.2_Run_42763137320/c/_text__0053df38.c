/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053df38; name: FUN_.text__0053df38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0053df38(long *param_1)

{
  *param_1 = _DAT_008a4290 + 0x10;
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN__text__00400fc0(0xe);
  }
  operator_delete(param_1);
  return;
}


