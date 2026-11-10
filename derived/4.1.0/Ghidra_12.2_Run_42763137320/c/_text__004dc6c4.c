/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dc6c4; name: FUN_.text__004dc6c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004dc6c4(long *param_1)

{
  *param_1 = _DAT_008a4eb0 + 0x10;
  if ((param_1[2] != 0) && ((*(byte *)((long)param_1 + 0x82) >> 4 & 1) == 0)) {
    FUN__text__00400fc0(5);
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  FUN__text__004dd888(param_1);
  return;
}


