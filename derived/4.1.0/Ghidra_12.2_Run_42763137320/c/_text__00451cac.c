/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451cac; name: FUN_.text__00451cac
 */


void FUN__text__00451cac(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 5) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(byte *)((long)param_1 + 0xd) = *(byte *)((long)param_1 + 0xd) | 0xf;
  *(byte *)((long)param_1 + 0x19) = *(byte *)((long)param_1 + 0x19) | 0xf;
  return;
}


