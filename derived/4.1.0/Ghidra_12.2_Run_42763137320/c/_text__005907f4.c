/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005907f4; name: FUN_.text__005907f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005907f4(long *param_1)

{
  *param_1 = _DAT_008a3860 + 0x10;
  if (param_1[0x12] != 0) {
    FUN__text__004e506c(_DAT_008a4fc0,*(undefined4 *)((long)param_1 + 0x8c));
    param_1[0x12] = 0;
  }
  if (param_1[0x1a] != 0) {
    FUN__text__00400fc0(5);
    param_1[0x1a] = 0;
  }
  *param_1 = _DAT_008a3868 + 0x10;
  FUN__text__004dc6c4(param_1);
  return;
}


