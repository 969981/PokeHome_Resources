/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cd6fc; name: FUN_.text__004cd6fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004cd6fc(long *param_1)

{
  *param_1 = _DAT_008a4af8 + 0x10;
  if (param_1[5] != 0) {
    FUN__text__00400fc0(0);
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN__text__00400fc0(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  return;
}


