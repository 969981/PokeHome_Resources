/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683dfc; name: FUN_.text__00683dfc
 */


void FUN__text__00683dfc(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *param_1 = 4;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined2 *)((long)param_1 + 0xc) = 3;
  return;
}


