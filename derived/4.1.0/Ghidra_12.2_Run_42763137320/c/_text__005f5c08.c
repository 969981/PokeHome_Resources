/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5c08; name: FUN_.text__005f5c08
 */


void FUN__text__005f5c08(long param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = 8;
  if ((param_2 & 1) == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf7 | bVar1;
  return;
}


