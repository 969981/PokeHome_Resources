/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eb75c; name: FUN_.text__006eb75c
 */


void FUN__text__006eb75c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0x89ef60;
  param_1[1] = 0;
  return;
}


