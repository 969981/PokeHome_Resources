/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023d698; name: FUN_.text__0023d698
 */


void FUN__text__0023d698(long param_1)

{
  FUN__text__0012bca0(param_1 + 0x110,1);
  FUN__text__0012bcbc(param_1 + 0x110,1);
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__00128ec0(param_1,0);
  FUN__text__00128ca0(param_1,1,1);
  *(byte *)(*(long *)(param_1 + 0x640) + 0x58) = *(byte *)(*(long *)(param_1 + 0x640) + 0x58) | 1;
  return;
}


