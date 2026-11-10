/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004921c4; name: FUN_.text__004921c4
 */


void FUN__text__004921c4(long *param_1,long param_2)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = param_2;
  param_1[1] = 0x7f7fffffffffffff;
  *(undefined8 *)((long)param_1 + 0x44) = 0x42c80000;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  return;
}


