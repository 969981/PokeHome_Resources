/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b9a14; name: FUN_.text__004b9a14
 */


void FUN__text__004b9a14(undefined8 *param_1,undefined2 param_2)

{
  FUN__text__0042ce54();
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((long)param_1 + 0x34) = param_2;
  *param_1 = 0x88b820;
  *(undefined1 *)((long)param_1 + 0x36) = 4;
  return;
}


