/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f78b4; name: FUN_.text__003f78b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003f78b4(long *param_1)

{
  *param_1 = _DAT_008a43a8 + 0x10;
  if (param_1[0xc9] != 0) {
    *(undefined4 *)(param_1 + 0xc6) = 0;
    param_1[199] = 0;
    param_1[200] = 0;
    FUN__text__00400fc0(7);
  }
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  FUN__text__003f9d28(param_1);
  return;
}


