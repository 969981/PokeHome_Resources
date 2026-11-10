/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d4f10; name: FUN_.text__002d4f10
 */


undefined * FUN__text__002d4f10(long param_1,ushort param_2)

{
  undefined *puVar1;
  
  if (0x4b9 < param_2) {
    return &DAT_008e53b8;
  }
  puVar1 = &DAT_008e53b8;
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar1 = (undefined *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x84);
  }
  return puVar1;
}


