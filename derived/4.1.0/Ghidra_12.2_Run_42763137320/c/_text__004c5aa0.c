/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5aa0; name: FUN_.text__004c5aa0
 */


void FUN__text__004c5aa0(undefined4 *param_1,undefined8 *param_2)

{
  if (*(long *)(param_1 + 4) == 0) {
    FUN__text__004aa040(DAT_00ae9a58,*param_1);
    return;
  }
  *param_2 = 0;
  param_2[1] = *(undefined8 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 2) = param_1[2];
  return;
}


