/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054fa64; name: FUN_.text__0054fa64
 */


void FUN__text__0054fa64(long param_1,uint param_2,byte param_3)

{
  FUN__text__00555690();
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x20),0,(ulong)((param_2 & 0x7ffffffe) * 2 + 4));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(byte *)(param_1 + 0x2d) = param_3 & 1;
  return;
}


