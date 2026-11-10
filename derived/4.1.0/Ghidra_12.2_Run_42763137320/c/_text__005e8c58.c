/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8c58; name: FUN_.text__005e8c58
 */


void FUN__text__005e8c58(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x15] = param_2;
  param_1[0x17] = param_1;
  *param_1 = 0xc0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}


