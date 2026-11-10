/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ebccc; name: FUN_.text__006ebccc
 */


void FUN__text__006ebccc(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0x3020002;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 6) = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfff0;
  *(ushort *)((long)param_1 + 0x1a) = *(ushort *)((long)param_1 + 0x1a) & 0xfffe;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0xffffffff;
  return;
}


