/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049d9b0; name: FUN_.text__0049d9b0
 */


void FUN__text__0049d9b0(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)((long)param_1 + 0x12) = *(byte *)((long)param_1 + 0x12) & 0xfc;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


