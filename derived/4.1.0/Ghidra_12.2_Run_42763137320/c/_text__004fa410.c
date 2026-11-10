/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fa410; name: FUN_.text__004fa410
 */


void FUN__text__004fa410(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  }
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = 0x400000000;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf8;
  return;
}


