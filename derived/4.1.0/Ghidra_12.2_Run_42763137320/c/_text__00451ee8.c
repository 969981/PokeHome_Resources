/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451ee8; name: FUN_.text__00451ee8
 */


void FUN__text__00451ee8(uint *param_1)

{
  *(byte *)((long)param_1 + 0xd) = *(byte *)((long)param_1 + 0xd) | 2;
  *(byte *)((long)param_1 + 0x19) = *(byte *)((long)param_1 + 0x19) | 2;
  memset(*(void **)(*(long *)(param_1 + 8) + 0x28),0,((ulong)*param_1 & 0xff) << 4);
  memset(*(void **)(*(long *)(param_1 + 8) + 0x30),0,((ulong)*param_1 & 0xff) << 4);
  return;
}


