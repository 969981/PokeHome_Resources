/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ebd38; name: FUN_.text__006ebd38
 */


void FUN__text__006ebd38(undefined2 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[1] = param_1[1] & 0xfff0;
  *param_1 = 0x500;
  return;
}


