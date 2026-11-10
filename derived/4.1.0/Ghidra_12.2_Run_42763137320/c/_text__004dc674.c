/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dc674; name: FUN_.text__004dc674
 */


void FUN__text__004dc674(undefined8 *param_1)

{
  FUN__text__004dd81c();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)((long)param_1 + 0x54);
  *param_1 = 0x88e8f0;
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0x80;
  return;
}


