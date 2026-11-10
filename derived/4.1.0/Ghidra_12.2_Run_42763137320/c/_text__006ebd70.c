/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ebd70; name: FUN_.text__006ebd70
 */


void FUN__text__006ebd70(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = 0xff01;
  *(undefined4 *)(param_1 + 4) = 0x7000000;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 0x7000000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[2] = param_1[2] & 0xfff0;
  return;
}


