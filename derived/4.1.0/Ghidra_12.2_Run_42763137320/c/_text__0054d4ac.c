/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054d4ac; name: FUN_.text__0054d4ac
 */


void FUN__text__0054d4ac(long param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x10),0,(ulong)(uint)(*(int *)(param_1 + 8) << 2));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


