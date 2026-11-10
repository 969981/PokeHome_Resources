/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004938cc; name: FUN_.text__004938cc
 */


void FUN__text__004938cc(undefined8 *param_1)

{
  FUN__text__00463bc0();
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 199;
  *param_1 = 0x889e68;
  param_1[1] = 0x88a0f8;
  param_1[5] = 0x88a150;
  param_1[2] = 0x88a110;
  *(byte *)((long)param_1 + 0xe9) = *(byte *)((long)param_1 + 0xe9) & 0x80;
  return;
}


