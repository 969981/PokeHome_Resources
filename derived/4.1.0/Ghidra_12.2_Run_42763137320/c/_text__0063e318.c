/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063e318; name: FUN_.text__0063e318
 */


int FUN__text__0063e318(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + 8);
  return (uVar1 >> 0x10 & 1) + (uVar1 >> 0x11 & 1);
}


