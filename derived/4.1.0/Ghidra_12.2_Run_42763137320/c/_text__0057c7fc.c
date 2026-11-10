/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057c7fc; name: FUN_.text__0057c7fc
 */


void FUN__text__0057c7fc(int *param_1)

{
  if (*(void **)(param_1 + 2) == (void *)0x0) {
    return;
  }
  memset(*(void **)(param_1 + 2),0,(ulong)(uint)(*param_1 << 2));
  return;
}


