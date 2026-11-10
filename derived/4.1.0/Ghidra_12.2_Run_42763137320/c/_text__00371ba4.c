/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00371ba4; name: FUN_.text__00371ba4
 */


void FUN__text__00371ba4(long param_1,int *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xf8);
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x118);
  }
  FUN__text__00374a10(*puVar1);
  puVar1 = (undefined8 *)(param_1 + 0xf8);
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x118);
  }
  FUN__text__00374690(*puVar1);
  return;
}


