/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c57c4; name: FUN_.text__004c57c4
 */


void FUN__text__004c57c4(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  *(ushort *)((long)param_1 + 0xc) = *(ushort *)((long)param_1 + 0xc) & 0xf800;
  return;
}


