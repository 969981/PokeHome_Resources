/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042fb24; name: FUN_.text__0042fb24
 */


void FUN__text__0042fb24(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0x20000000;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  return;
}


