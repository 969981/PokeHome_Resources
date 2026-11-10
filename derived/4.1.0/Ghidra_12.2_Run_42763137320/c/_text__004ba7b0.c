/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ba7b0; name: FUN_.text__004ba7b0
 */


void FUN__text__004ba7b0(long param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = 0x80;
  if ((param_2 & 1) == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x36) = bVar1 | *(byte *)(param_1 + 0x36) & 0x7f;
  return;
}


