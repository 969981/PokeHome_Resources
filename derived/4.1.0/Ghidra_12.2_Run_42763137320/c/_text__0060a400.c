/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060a400; name: FUN_.text__0060a400
 */


void FUN__text__0060a400(ushort *param_1,short *param_2)

{
  if (*param_2 == 0x224) {
    *param_1 = 1;
    return;
  }
  if (param_2[1] == 0x224) {
    *param_1 = 1;
    return;
  }
  if (param_2[2] == 0x224) {
    *param_1 = 1;
    return;
  }
  *param_1 = (ushort)(param_2[3] == 0x224);
  return;
}


