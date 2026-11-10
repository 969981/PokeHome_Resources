/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e4480; name: FUN_.text__002e4480
 */


void FUN__text__002e4480(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x20;
  if (((param_2 & 0xffffffef) == 8 || param_2 == 0x10) || param_2 == 0x20) {
    uVar1 = param_2;
  }
  *(char *)(param_1 + 0x5b5) = (char)uVar1;
  return;
}


