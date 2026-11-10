/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056ed94; name: FUN_.text__0056ed94
 */


undefined8 FUN__text__0056ed94(long param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    memset(*(void **)(param_1 + 8),0,(ulong)*(uint *)(param_1 + 0x10));
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x28),0,(ulong)*(uint *)(param_1 + 0x30));
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x48),0,(ulong)*(uint *)(param_1 + 0x50));
  }
  return 1;
}


