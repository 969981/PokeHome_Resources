/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002347d8; name: FUN_.text__002347d8
 */


void FUN__text__002347d8(long param_1)

{
  FUN__text__0012bcbc(param_1 + 0x110,1);
  FUN__text__00128ca0(param_1,1,1);
  FUN__text__00128ec0(param_1,0);
  if (*(int *)(*(long *)(param_1 + 0x650) + 0x74) != 0) {
    *(byte *)(*(long *)(param_1 + 0x760) + 0x58) = *(byte *)(*(long *)(param_1 + 0x760) + 0x58) | 1;
  }
  return;
}


