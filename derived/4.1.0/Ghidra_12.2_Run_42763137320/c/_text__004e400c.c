/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e400c; name: FUN_.text__004e400c
 */


void FUN__text__004e400c(undefined8 *param_1,long param_2)

{
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *param_1 = 0x88f030;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined2 *)((long)param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  return;
}


